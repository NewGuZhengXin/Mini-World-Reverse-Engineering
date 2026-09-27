# native/rebuild/ — a compilable `libAppPlayJNI.so`

A build pipeline that takes the Hex-Rays pseudocode in [`../pseudocode/`](../pseudocode) and
turns it into a translation unit set that Clang accepts, then links it into a real ARM 32-bit
shared object.

The result is **not the original engine**. It is the decompiler's output, mechanically
translated until it is valid C, with everything that could not be expressed in C switched off and
listed. See [Limits](#limits) before you use it for anything.

English · [简体中文](#简体中文)

---

## Result

| | Original | Rebuilt |
| --- | --- | --- |
| Format | ELF32 · ARM · DYN | **ELF32 · ARM · DYN** |
| Size | 4.44 MB | 7.30 MB |
| `JNI_OnLoad` + `Java_*` exports | **32** | **32 — set-identical** |
| Exported symbols | 18 141 | 23 734 |
| Undefined imports | 346 | 2 030 |
| Functions with a body | — | **15 107** |

```
$ python tools/build.py --ndk <ndk> --stage all --jobs 12

-- pass 1 --  clean: 200/1181  errors: 84962 in 981 files   new types: 884
-- pass 2 --  clean: 767/1182  errors: 4631 in 415 files
   type list stable
   compiled 731/1182 in 46s
   -- salvage pass on 451 files --
   2555 functions switched off by #if 0
   after salvage: compiled 1182/1182
== stage 4/4: link ==
   -> build/lib/libAppPlayJNI.so
```

Every one of the original's 31 JNI entry points is present and exported under the same name —
`Java_org_appplay_lib_AppPlayNatives_*` (20) and `Java_org_appplay_platformsdk_PlatformSDKNatives_*`
(11), plus `JNI_OnLoad`. That is the one structural property a rebuild can be held to, and the
build verifies it on every run.

## How it works

Five stages, driven by `tools/build.py`. Stages 1–3 are the interesting part: they are a
closed feedback loop rather than a one-shot translation.

```
pseudocode/*.c
      │
      │  1  transform.py     mechanical C++ → C rewriting
      ▼
 build/src/*.c  ────────────────────────────────┐
      │                                          │
      │  2  autofix.py        compile, read the diagnostics,
      ▼                       declare what is missing          │
 include/decomp_types.h                                     │ re-transform
 include/decomp_externs.h  ─────────────────────────────────┘ when the type list grows
      │
      │  3  compile           clang -c, 1182 translation units in parallel
      │                       + salvage.py on whatever fails
      ▼
 build/obj/*.o
      │
      │  4  link              llvm/clang -shared, objects via response file
      ▼
 build/lib/libAppPlayJNI.so
      │
      │  5  report            llvm-readelf: arch, exports, JNI surface, imports
      ▼
```

### 1. `tools/transform.py` — pseudocode to C

Hex-Rays emits something that is *almost* C++ and therefore not quite C. The transformer rewrites
it into a shape Clang accepts, in this order:

- **PLT thunk elision** — `j_memcpy(x)` and `__imp_memcpy(x)` become `memcpy(x)`. 732 thunks removed.
- **Inline assembly** — functions Hex-Rays could not lift are emitted as `__asm { ... }`. There is
  nothing to translate them into; the statement is dropped and the function is left empty.
- **Sub-register macros** — `LOBYTE(x)`, `HIDWORD(x)` and friends are redefined as compound
  literals (`*(uint8_t *)&(uint32_t){ (uint32_t)(x) }`), which are lvalues. This makes
  `LOBYTE(v) = 3` compile, at the cost of writing into a temporary rather than into `v`.
- **Name flattening** — `ClientActor::~ClientActor` → `ClientActor__dtor_ClientActor`,
  `` `typeinfo for'X `` → `typeinfo_for_X`, `operator<<char>` → `operator_shl_char`,
  `f(void)::i` → `f__local__i`, `A::B::C` → `A__B__C`.
- **Opaque types as tags** — Hex-Rays names local variables after their type (`Block *Block;`).
  C keeps typedefs and ordinary identifiers in one namespace, so a typedef makes that a syntax
  error. Every class name becomes a *struct tag* and the transformer spells `struct ` at type
  positions instead.
- **Globals** — IDA's `byte_6F3A10`, `dword_4724D0`, `stru_1400C8` become `extern` declarations in
  each file's prologue, with storage emitted once into `build/src/_decomp_globals.c`.
  Subscripted globals (`&byte_9[1]`) are declared as arrays.

### 2. `tools/autofix.py` — close the loop

The transformer cannot know what it never saw, so the autofix pass compiles everything, reads the
diagnostics, and turns them back into declarations:

| Diagnostic | Action |
| --- | --- |
| `unknown type name 'X'` | add `struct X { ... };` to `decomp_types.h` |
| `use of undeclared identifier 'X'` used as a call | `extern int X();` |
| `use of undeclared identifier 'X'` used as a value | `extern struct decomp_any *X;` |
| `no member named 'M' in 'struct T'` | append `M` to `T` |

If the opaque type list grew, the sources are re-transformed so the new types get the `struct `
prefix, and the whole thing runs again. It converges in two or three passes.

Two details that cost real debugging time and are worth keeping:

- Each generated `extern` is wrapped in `#ifndef NAME`. Names like `NAN` and `INFINITY` turn out to
  be macros once `<math.h>` is in, and a macro re-declared as an object is a hard error in every
  translation unit at once.
- `sub_26FF9C` and its relatives are always functions. Declaring one as an object turns every call
  to it into *"called object is not a function"*.

### 3. `tools/salvage.py` — switch off what C cannot express

Some of the output genuinely cannot be compiled: calls whose argument count disagrees with every
definition of the same name, values the decompiler typed wrongly, IDA's raw assembly. Rewriting
those correctly is the manual part of a decompilation and no heuristic does it.

What *can* be automated is the bookkeeping. `salvage.py` compiles a file, finds the function each
diagnostic lands in, wraps it in `#if 0 ... #endif`, and repeats until the file compiles. Every
disabled function is marked in place:

```c
/* ---- disabled by tools/salvage.py: ---- */
#if 0
int __fastcall ClientManager__onInitialize(int a1, int a2)
{ ... }
#endif
```

The result is an honest, compiling artefact and a worklist — `grep -rn "disabled by tools/salvage"`
is the list of functions that still need a human. **2 555 of 20 543 functions (12.4%) are there.**

Brace counting for this has to strip comments and string literals first. One brace seen inside a
literal makes a range run past the end of its function, and the `#if 0` then swallows everything
after it — which is exactly how the entire JNI block disappears in one go.

### 4–5. Build and verify

```powershell
# one-time: an NDK with an API 21 ARMv7 wrapper (API 19 is no longer shipped)
python tools/build.py --ndk E:\AndroidNdkRoot\ndk\26.1.10909125 --stage all --jobs 12

# individual stages
python tools/build.py --ndk <ndk> --stage transform
python tools/build.py --ndk <ndk> --stage compile --jobs 12
python tools/build.py --ndk <ndk> --stage link
python tools/build.py --ndk <ndk> --stage report

# keep the errors instead of switching the functions off
python tools/build.py --ndk <ndk> --stage compile --no-salvage
```

## What the generated code looks like

`include/decomp_compat.h` is the only file written by hand. It supplies the IDA scalar types
(`_BYTE`, `_DWORD`, `_QWORD`, …), the no-op calling-convention keywords, the sub-register macros,
`__PAIR__`, and the overflow builtins — then pulls in the real system headers so that `timeval`,
`jmp_buf`, `wctype_t` and `Elf32_Sym` keep their real layouts.

```c
typedef char     _BYTE;     /* char, not unsigned char: Hex-Rays mixes
                               "(_BYTE *)" and "(char *)" casts, and subtracting
                               pointers to incompatible types is a hard error */
typedef uint32_t _DWORD;
typedef long long decomp_int64;
```

`include/decomp_types.h` (884 opaque structs), `include/decomp_externs.h` (1 073 extern objects
and 1 826 extern functions) and everything under `build/` are generated — do not edit them.

Everything except `include/decomp_compat.h` and `tools/` is output. `build/` is gitignored
(it holds 340 MB of objects); `out/libAppPlayJNI.so` is the linked result and is kept.

## Limits

**This library is not functionally equivalent to the original, and the application will not run
with it.** It links, its JNI surface matches exactly, and 15 107 functions have a compiled body.
Beyond that, be precise about what it is not:

- **Opaque types are invented.** 884 class names got a 128-byte placeholder struct. Field access in
  the pseudocode goes through explicit `*(_DWORD *)(p + 0x1C)` casts, so this does not break the
  generated code, but nothing here knows a real class layout.
- **2 555 functions are switched off**, and 511 more never had a C body at all — Hex-Rays could
  only give disassembly for them.
- **`__int128` is 64-bit here.** `decomp_int128` is a `long long`; anything using 64×64→128-bit
  arithmetic is silently wrong.
- **Assignments through sub-register macros hit temporaries**, not the source variable.
- **Hex-Rays guessed the types.** Argument counts, struct returns and varargs are not recoverable
  from the pseudocode, which is why the salvage pass exists at all.
- **The statically linked dependencies are gone.** Ogre3D, Lua, tolua++, TinyXML, zlib, libcurl,
  flatbuffers, SQLite and OpenSSL were compiled into the original; their code is decompiled here,
  but FMOD is closed source, so the audio engine is absent. 2 030 imports are unresolved against
  346 in the original.
- **The JNI contract is not honoured.** The original engine calls
  `AppPlayBaseActivity.SetScreenBright(float)` through `CallStaticIntMethodV` on a method that
  returns `void`. Under CheckJNI that is a `SIGABRT`; it only survives because release builds do
  not enable CheckJNI. Nothing in this rebuild fixes that.

Treat the `.so` as proof that the pseudocode is structurally complete enough to compile and link —
not as a replacement for the binary in `app/src/main/jniLibs/armeabi/`.

---

# 简体中文

# native/rebuild/ —— 可编译的 `libAppPlayJNI.so`

把 [`../pseudocode/`](../pseudocode) 里的 Hex-Rays 伪代码，变成 Clang 能接受的翻译单元集合，
再链接成真正的 ARM 32 位动态库。

产物**不是原来的引擎**。它是反编译器的输出，经过机械改写使其成为合法 C，而无法用 C 表达的
部分被逐条关闭并记录在案。使用前请先读[限制](#限制)。

## 结果

| | 原库 | 重建库 |
| --- | --- | --- |
| 格式 | ELF32 · ARM · DYN | **ELF32 · ARM · DYN** |
| 体积 | 4.44 MB | 7.30 MB |
| `JNI_OnLoad` + `Java_*` 导出 | **32** | **32 —— 集合完全一致** |
| 导出符号 | 18 141 | 23 734 |
| 未定义导入 | 346 | 2 030 |
| 有函数体的函数 | — | **15 107** |

```
$ python tools/build.py --ndk <ndk> --stage all --jobs 12

-- pass 1 --  clean: 200/1181  errors: 84962 in 981 files   new types: 884
-- pass 2 --  clean: 767/1182  errors: 4631 in 415 files
   type list stable
   compiled 731/1182 in 46s
   -- salvage pass on 451 files --
   2555 functions switched off by #if 0
   after salvage: compiled 1182/1182
== stage 4/4: link ==
   -> build/lib/libAppPlayJNI.so
```

原库的 31 个 JNI 入口点全部以同名导出 —— `Java_org_appplay_lib_AppPlayNatives_*`（20 个）
与 `Java_org_appplay_platformsdk_PlatformSDKNatives_*`（11 个），外加 `JNI_OnLoad`。
这是重建唯一能被强校验的结构性质，每次构建都会验证。

## 工作原理

五个阶段，由 `tools/build.py` 驱动。前三个阶段是重点：它们构成闭环反馈，而不是一次性翻译。

```
pseudocode/*.c
      │
      │  1  transform.py     机械式 C++ → C 改写
      ▼
 build/src/*.c  ────────────────────────────────┐
      │                                          │
      │  2  autofix.py        编译、读取诊断、     │
      ▼                       补齐缺失声明        │ 类型表增长时
 include/decomp_types.h                           │ 重新 transform
 include/decomp_externs.h  ─────────────────────┘
      │
      │  3  compile           clang -c，1182 个翻译单元并行
      │                       + salvage.py 处理编译不过的
      ▼
 build/obj/*.o
      │
      │  4  link              经响应文件喂给 clang -shared
      ▼
 build/lib/libAppPlayJNI.so
```

### 1. `tools/transform.py` —— 伪代码转 C

Hex-Rays 输出的东西*几乎*是 C++，因此恰恰不是 C。改写顺序：

- **PLT 桩消除** —— `j_memcpy(x)`、`__imp_memcpy(x)` 还原为 `memcpy(x)`，共 732 个。
- **内联汇编** —— Hex-Rays 无法提升的函数被输出成 `__asm { ... }`。没有可翻译的目标，
  整条语句丢弃，函数留空。
- **子寄存器宏** —— `LOBYTE(x)`、`HIDWORD(x)` 等改用复合字面量
  （`*(uint8_t *)&(uint32_t){ (uint32_t)(x) }`），复合字面量是左值，
  于是 `LOBYTE(v) = 3` 能编译；代价是写进临时量而非 `v` 本身。
- **名字扁平化** —— `ClientActor::~ClientActor` → `ClientActor__dtor_ClientActor`，
  `` `typeinfo for'X `` → `typeinfo_for_X`，`operator<<char>` → `operator_shl_char`，
  `A::B::C` → `A__B__C`。
- **不透明类型用 tag** —— Hex-Rays 会用具名局部变量（`Block *Block;`）。C 的 typedef 与普通
  标识符共用同一命名空间，typedef 会让这句话直接语法错误。所有类名一律做成 **struct tag**，
  由转换器在类型位置补 `struct `。
- **全局量** —— IDA 的 `byte_6F3A10`、`dword_4724D0`、`stru_1400C8` 变成各文件序言的
  `extern` 声明，存储统一定义在 `build/src/_decomp_globals.c`。带下标的（`&byte_9[1]`）
  声明成数组。

### 2. `tools/autofix.py` —— 闭环

转换器无从知道它没见过的东西，于是 autofix 编译全部文件、读取诊断、把诊断变回声明：

| 诊断 | 动作 |
| --- | --- |
| `unknown type name 'X'` | 向 `decomp_types.h` 追加 `struct X { ... };` |
| `use of undeclared identifier 'X'`（按函数调用） | `extern int X();` |
| `use of undeclared identifier 'X'`（按值使用） | `extern struct decomp_any *X;` |
| `no member named 'M' in 'struct T'` | 给 `T` 补上成员 `M` |

只要不透明类型表增长，就重新 transform 让新类型也拿到 `struct ` 前缀，然后整体再跑一轮。
两到三轮收敛。

两个花过大量调试时间的细节，值得保留：

- 每条生成的 `extern` 都包在 `#ifndef NAME` 里。`NAN`、`INFINITY` 之类在引入 `<math.h>` 后
  其实是宏，而把宏重新声明成对象会让**所有**翻译单元同时硬报错。
- `sub_26FF9C` 之类永远是函数。一旦声明成对象，对它的每次调用都会变成
  *“called object is not a function”*。

### 3. `tools/salvage.py` —— 关掉 C 表达不了的部分

有些输出确实编译不过：实参个数与同名函数的每个定义都不一致的调用、反编译器类型猜错的值、
IDA 的原始汇编。把它们改对是反编译的手工部分，没有启发式能替代。

能自动化的是账目。`salvage.py` 编译单个文件，把每条诊断落到它所属的函数上，用
`#if 0 ... #endif` 包起来，重复到该文件通过为止。每个被关掉的函数都就地留痕：

```c
/* ---- disabled by tools/salvage.py: ---- */
#if 0
int __fastcall ClientManager__onInitialize(int a1, int a2)
{ ... }
#endif
```

产物因此诚实且可编译，同时留下一张待办清单 ——
`grep -rn "disabled by tools/salvage"` 就是还需要人工处理的那批函数。
**20 543 个函数里有 2 555 个（12.4%）在此。**

这里的大括号计数必须先剥掉注释与字符串字面量。字面量里的一个花括号会让区间越过函数末尾，
于是 `#if 0` 把后面的一切一并吞掉 —— 整个 JNI 区块就是这么一次性消失的。

### 4–5. 构建与校验

```powershell
# 一次性准备：需要一个仍带 API 21 ARMv7 wrapper 的 NDK（API 19 已不再随包发布）
python tools/build.py --ndk E:\AndroidNdkRoot\ndk\26.1.10909125 --stage all --jobs 12

# 单阶段
python tools/build.py --ndk <ndk> --stage transform
python tools/build.py --ndk <ndk> --stage compile --jobs 12
python tools/build.py --ndk <ndk> --stage link
python tools/build.py --ndk <ndk> --stage report

# 保留错误、不关闭函数
python tools/build.py --ndk <ndk> --stage compile --no-salvage
```

## 生成代码长什么样

`include/decomp_compat.h` 是唯一手写的文件。它提供 IDA 标量类型（`_BYTE`、`_DWORD`、`_QWORD`
…）、空的调用约定关键字、子寄存器宏、`__PAIR__` 与溢出内建，随后引入真实系统头，让
`timeval`、`jmp_buf`、`wctype_t`、`Elf32_Sym` 保持真实布局。

```c
typedef char     _BYTE;     /* 是 char 不是 unsigned char：Hex-Rays 混用
                               "(_BYTE *)" 和 "(char *)"，而两个指向不兼容类型的
                               指针相减在 C 里是硬错误，无开关可关 */
typedef uint32_t _DWORD;
typedef long long decomp_int64;
```

`include/decomp_types.h`（884 个不透明结构）、`include/decomp_externs.h`（1 073 条对象 extern、
1 826 条函数 extern）以及 `build/` 下的一切都是生成物 —— 不要手改。

除 `include/decomp_compat.h` 与 `tools/` 之外都是产物。`build/` 已被 gitignore
（里面是 340 MB 目标文件）；`out/libAppPlayJNI.so` 是链接结果，保留在库中。

## 限制

**这个库与原库并不功能等价，应用无法用它跑起来。** 它能链接、JNI 表面完全一致、15 107 个
函数有编译出来的函数体。除此之外，必须说清楚它不是什么：

- **不透明类型是编出来的。** 884 个类名拿到的是 128 字节占位结构。伪代码里的字段访问走显式
  `*(_DWORD *)(p + 0x1C)` 转换，所以生成代码不受影响，但这里没有任何真实类布局知识。
- **2 555 个函数被关闭**，另有 511 个从来就没有 C 函数体 —— Hex-Rays 只能给出反汇编。
- **`__int128` 在这里是 64 位。** `decomp_int128` 是 `long long`，任何 64×64→128 位运算都
  静默错误。
- **经子寄存器宏的赋值落在临时量上**，而非源变量。
- **类型是 Hex-Rays 猜的。** 实参个数、结构体返回、变参都无法从伪代码还原 —— salvage 阶段
  存在的根本原因。
- **静态链接的依赖没了。** Ogre3D、Lua、tolua++、TinyXML、zlib、libcurl、flatbuffers、
  SQLite、OpenSSL 原本都编进了原库，它们的代码在这里已被反编译；但 FMOD 是闭源的，
  音频引擎缺失。未解析导入 2 030 条，原库是 346 条。
- **JNI 约定并未被遵守。** 原引擎通过 `CallStaticIntMethodV` 调用返回 `void` 的
  `AppPlayBaseActivity.SetScreenBright(float)`。开启 CheckJNI 时这是 `SIGABRT`，
  只因为 release 构建不启用 CheckJNI 才得以存活。这次重建没有修这个问题。

请把 `.so` 当作「伪代码在结构上完整到可以编译链接」的证据，而不是
`app/src/main/jniLibs/armeabi/` 里那个二进制的替代品。
