# native/ — engine pseudocode

C pseudocode for `libAppPlayJNI.so` (ARM 32-bit, 4.44 MB, **not stripped**), produced by a full
Hex-Rays decompilation pass. Because the symbol table is intact, almost every function kept its
original C++ name, so the output reads as `ClientManager::onInitialize`, `World::setBlock`,
`AIArrowAttack::update` instead of `sub_XXXXXX`.

| | |
| --- | --- |
| Functions | **21 886** |
| With a symbol name | 14 729 |
| Internal / static (no name) | 7 157 |
| Not decompilable to C (given as annotated disassembly) | 511 |
| Files | **1 180** `.c`, 22.7 MB |

```
pseudocode/<C++ namespace>/<class>.c    one file per class/namespace, functions sorted by address
pseudocode/unnamed/chunk_XXXXXX.c       unnamed functions, one file per 64 KB of address space
pseudocode/global.c                     global C functions, including JNI_OnLoad and the 31 JNI exports
```

Every function carries the same header:

```c
//======================================================================
// ClientManager::onInitialize(char const*, char const*)
// address: 0x002F63C4   size: 0x1C4 (452 bytes)
//======================================================================
```

**Where to start:** `pseudocode/global.c` → `JNI_OnLoad` and `nativeInit`, then follow
`ClientManager.c` (the engine's main controller) downwards.

> **This is pseudocode, not original source.** There are no original headers, no template
> definitions and no type information for Ogre3D's template-heavy code, and the engine links
> against a closed-source FMOD. It is meant for reading, auditing and porting — the build ships
> the original `.so` files from `app/src/main/jniLibs/armeabi/`.
>
> [`rebuild/`](rebuild/README.md) does compile it — 1 182 translation units, linked into an ARM
> 32-bit `.so` whose 32 JNI entry points match the original exactly. That is a completeness
> proof, not a working engine; read its README before relying on it.

---

# native/ —— 引擎伪代码

`libAppPlayJNI.so`（ARM 32 位，4.44 MB，**未 strip**）经 Hex-Rays 全量反编译得到的 C 伪代码。
符号表完整，所以绝大多数函数保留了原始 C++ 名字，读起来是 `ClientManager::onInitialize`、
`World::setBlock`、`AIArrowAttack::update`，而不是 `sub_XXXXXX`。

| | |
| --- | --- |
| 函数总数 | **21 886** |
| 有符号名 | 14 729 |
| 无符号名（静态/内部函数） | 7 157 |
| 无法还原成 C（以带注释的反汇编给出） | 511 |
| 文件数 | **1 180** 个 `.c`，22.7 MB |

**从哪看起：** `pseudocode/global.c` 的 `JNI_OnLoad` 与 `nativeInit`，然后顺着
`ClientManager.c`（引擎主控）往下读。

> **这是伪代码，不是可编译源码。** 没有原始头文件、没有模板定义、Ogre3D 那套重模板代码也没有
> 类型信息，而且引擎链接的是闭源 FMOD。它用于阅读、审计和移植参考 —— 构建时使用的是
> `app/src/main/jniLibs/armeabi/` 里的原始 `.so`。
>
> [`rebuild/`](rebuild/README.md) 确实能把它编出来 —— 1 182 个翻译单元，链接成 ARM 32 位
> `.so`，其 32 个 JNI 入口点与原库完全一致。那是完整性证明，不是能跑的引擎；
> 依赖它之前请先读该目录的 README。
