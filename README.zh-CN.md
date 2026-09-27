# 迷你世界 · Android 1.0 —— 还原源码工程

[English](README.md) · **简体中文** · [繁體中文](README.zh-TW.md)

这是 **迷你世界（MiniWorld）** 早期 Android 客户端的还原工程 —— 包名
`com.minitech.miniworld`，版本 `1.0`（`versionCode` 1），面向 Android 9 时代。

原版 APK 是一个「薄 Java 外壳 + 大型 C++ 原生引擎」的结构。本仓库把 Java 层还原成了
普通、可读、可编译的源码，同时完整保留了原始资源、assets 与 Lua 脚本、预编译的原生库，
以及引擎全部函数的 C 伪代码。

> **仅供学习与研究。** 迷你世界及其全部美术、音频、模型、脚本与代码归各自权利人所有。
> 本仓库未授予任何再分发或商业使用许可 —— 详见[免责声明](#免责声明)。

---

## 目录

- [仓库内容](#仓库内容)
- [整体架构](#整体架构)
- [目录结构](#目录结构)
- [构建](#构建)
- [运行](#运行)
- [原生引擎](#原生引擎)
- [Java 层阅读顺序](#java-层阅读顺序)
- [已知限制](#已知限制)
- [免责声明](#免责声明)

---

## 仓库内容

| 组成 | 内容 |
| --- | --- |
| Java 源码 | **205 个文件** —— 18 个应用自身类 + 打包在 `classes.dex` 里的 187 个 support-v4 类 |
| 资源 | 16 个文件：布局、样式、颜色、字符串（`values`、`values-v11`、`values-v14`、`values-zh-rCN`）、图标、启动图 |
| assets | **1 667 个文件** —— 1 009 张 PNG、267 个 OGG、93 个 `.omod` 模型、**51 个 Lua 脚本**、50 个 XML 定义、31 个 OBJ 网格、31 个 CSV 表，以及 entity / particles / sky / sounds / shaders / ui 数据 |
| 原生库 | `libAppPlayJNI.so`（4.44 MB）、`libfmodex.so`（1.06 MB）、`libcrypto.so`（0.81 MB）—— ARM 32 位，以预编译形式提供 |
| 原生伪代码 | **1 180 个 C 文件 / 22.7 MB**，覆盖引擎的 **21 886 个函数** |
| 原生重建 | 把上述伪代码编译成 ARM 32 位 `.so` 的流水线 —— 见 [`native/rebuild/`](native/rebuild/README.md) |
| 参考 | 571 个 smali 文件 —— 原始字节码，逐字节保留以便对照 |

## 整体架构

```
┌─────────────────────────────────────────────────────────┐
│  Java 层 —— 205 个文件                                   │
│                                                         │
│   SplashScreenActivity ──▶ MiniWorldActivity            │
│            │                        │                   │
│            ▼                        ▼                   │
│      AppPlayBaseActivity ◀──── AppPlayGLView            │
│            │             ▲          │                   │
│            │      AppPlayRenderer ──┘                   │
│            ▼                                            │
│      AppPlayNatives  ◀── 31 个 JNI 方法 ──┐             │
└───────────────────────────────────────────┼─────────────┘
                                            │ JNI
┌───────────────────────────────────────────▼─────────────┐
│  libAppPlayJNI.so —— ARM 32 位，4.44 MB，C++             │
│                                                         │
│  Ogre3D        渲染、场景图、自研 UI 框架                │
│  FMOD Ex       音频                                      │
│  Lua 5.1.5     玩法脚本（tolua++ 绑定）                  │
│  flatbuffers   网络协议序列化                            │
│  TinyXML       数据与 UI 定义                            │
│  SQLite        本地存储（Kompex 封装）                   │
│  zlib 1.2.7    解压（直接从 APK 里读 assets）            │
│  libcurl       HTTP 下载                                 │
└─────────────────────────────────────────────────────────┘
```

游戏真正在做的事情全都在原生库里。Java 侧只负责窗口、GL 表面、输入转发、版本更新检查
和渠道 SDK 的对接。

## 目录结构

```
.
├── app/                              Android 应用模块
│   ├── build.gradle
│   └── src/main/
│       ├── AndroidManifest.xml
│       ├── java/                     205 个 Java 文件
│       │   ├── com/minitech/miniworld/      Activity 与 UI 辅助类
│       │   ├── org/appplay/lib/             引擎封装（GL、更新、网络、输入）
│       │   ├── org/appplay/platformsdk/     渠道 SDK 抽象层
│       │   └── android/support/v4/          随包内置的 support-v4（187 个类）
│       ├── res/                      布局、values、drawable
│       ├── assets/                   1 667 个原始资源与 Lua 脚本
│       └── jniLibs/armeabi/          三个预编译原生库
├── native/
│   ├── README.md
│   └── pseudocode/                   1 180 个 .c，一个 C++ 类/命名空间一个文件
├── reference/
│   ├── smali/                        原始字节码，逐字节等价
│   └── original_apk/                 原始清单与构建信息
├── keystore/restored.jks             用于给 release 包签名的自签名密钥
├── gradle/ gradlew gradlew.bat       Gradle Wrapper
├── build.gradle  settings.gradle  gradle.properties
└── README.md  README.zh-CN.md  README.zh-TW.md
```

## 构建

**环境要求**

| 工具 | 版本 |
| --- | --- |
| JDK | 17 |
| Android SDK Platform | 34 |
| Android SDK Build-Tools | 34.0.0 |
| Gradle | 8.7（已带 Wrapper） |
| Android Gradle Plugin | 8.5.2 |

`local.properties` 没有提交进仓库 —— Android Studio 打开工程时会自动生成，你也可以自己写
一行 `sdk.dir=/你的/android-sdk/路径`。

```bash
# release 包 —— 请用这个
./gradlew assembleRelease
# → app/build/outputs/apk/release/app-release.apk

# debug 包 —— 能编译，但请看下面的警告
./gradlew assembleDebug
```

### ⚠️ 想真正跑起来，必须用 release 包

debug 变体会带上 `android:debuggable="true"`，这会让 ART 打开 **CheckJNI**。而预编译的引擎里
有一处不规范的 JNI 调用：它把 `AppPlayBaseActivity.SetScreenBright(float)`（一个 `void`
方法）当成返回 `int` 的方法来调用（`CallStaticIntMethod`）。不开 CheckJNI 时这无害；一旦开了，
ART 会在 GL 线程启动后不到一秒直接终止进程：

```
JNI DETECTED ERROR IN APPLICATION: the return type of CallStaticIntMethodV
does not match void org.appplay.lib.AppPlayBaseActivity.SetScreenBright(float)
Fatal signal 6 (SIGABRT) in tid ... (GLThread)
```

原版 APK 不是 debuggable 的，所以当年能正常跑。`release` 变体的 `debuggable` 保持默认的
`false`，CheckJNI 关闭，引擎原样运行。`app/build.gradle` 里 `debug` 构建类型的注释也写了这一点。

## 运行

本工程按 `minSdk 19` / `targetSdk 19` 构建（原始清单写的是 11/19，但现代构建工具已不支持
API 11）。在 Android 11 及以上的真机或模拟器上，进入游戏前会遇到两个系统弹窗：

1. 「此应用专为旧版 Android 打造……」—— 点**确定**。
2. 权限复核界面 —— 点**继续**。

两者都是 `targetSdk` 过低导致的正常现象。点完之后引擎开始初始化、生成方块图标并进入渲染。

**模拟器。** 游戏只带了 32 位 ARM 库，所以需要带 ARM 翻译层的 x86 模拟器。已在
**MuMu 模拟器 12**（Android 12、x86_64、`libhoudini` / `libnb.so` 原生桥）上验证可正常运行。
没有 ARM 翻译层的模拟器根本无法加载 `libAppPlayJNI.so`。

## 原生引擎

这个 `.so` 没有被 strip，绝大多数函数都保留了原始 C++ 名字 —— 伪代码里看到的是
`ClientManager::onInitialize`、`World::setBlock`、`AIArrowAttack::update`，而不是
`sub_XXXXXX`。入口是 `native/pseudocode/global.c` 里的 `JNI_OnLoad` 和 `nativeInit`。

| 想找什么 | 去哪里 |
| --- | --- |
| JNI 边界（31 个导出 + `JNI_OnLoad`） | `pseudocode/global.c` |
| 引擎主循环与生命周期 | `ClientManager.c`、`SurviveGame.c` |
| 世界、区块、光照 | `World.c`、`ClientWorld.c`、`Chunk.c`、`Section.c`、`LightingArea.c` |
| 方块与材质 | `Block*.c`、`*BlockMaterial.c`、`BlockMaterialMgr.c` |
| 生物、AI、寻路 | `Actor*.c`、`AI*.c`、`Mob*Action.c`、`PathFinder.c` |
| 地形生成 | `TerrainGen.c`、`GenLayer*.c`、`WorldGen*.c`、`NoiseGenerator*.c` |
| 自研 UI 框架 | `Frame.c`、`LayoutFrame.c`、`RichText.c`、`ListBox.c`、`IconBar*.c` |
| 渲染（Ogre3D） | `pseudocode/Ogre/` |
| 音频（FMOD Ex） | `pseudocode/FMOD/` |
| 网络 | `CSMgr.c`、`CSMsgHandler.c`、`pseudocode/flatbuffers/` |
| 玩法脚本 | `app/src/main/assets/luascript/` 下的 51 个 Lua 文件，通过 `luaopen_UITolua`、`luaopen_ClientToLua` 绑定 |

31 个 JNI 导出分两组：20 个 `AppPlayNatives` 方法（初始化、每帧回调、触摸、按键、文本输入、
生命周期）和 11 个 `PlatformSDKNatives` 回调（渠道 SDK 的登录与支付结果回传）。

### 从伪代码重建这个库

`native/rebuild/` 能把这批伪代码编译成真正的 ARM 32 位 `.so`。它是一条五阶段流水线 ——
机械式 C++→C 改写、编译/诊断/补声明的闭环、并行编译、链接、校验报告 ——
产出 `native/rebuild/out/libAppPlayJNI.so`：ELF32、ARM、7.30 MB、**15 107 个函数带函数体**，
且 **32 个 JNI 入口点全部以原名导出**，与预编译库完全一致。

这是「伪代码完整到可以编译链接」的结构性证明，**不是一个能跑的引擎**。20 543 个函数中有
2 555 个无法用 C 表达，已用 `#if 0` 关闭；类布局是占位结构；FMOD 闭源。动手之前请先读
[`native/rebuild/README.md`](native/rebuild/README.md)。

```powershell
python native/rebuild/tools/build.py --ndk <ndk-path> --stage all --jobs 12
```

## Java 层阅读顺序

建议按这个顺序读：

| 文件 | 为什么先看它 |
| --- | --- |
| `SplashScreenActivity.java` | 启动入口，显示闪屏后交接 |
| `MiniWorldActivity.java` | 真正的 Activity，继承 `AppPlayBaseActivity` |
| `AppPlayBaseActivity.java` | 外壳核心：创建 GL 视图、权限、更新检查、JNI 注册 |
| `AppPlayGLView.java` / `AppPlayRenderer.java` | `GLSurfaceView` + `Renderer`，每帧调用 `nativeOnIdle()` |
| `AppPlayNatives.java` | 20 个 native 方法声明 —— Java↔C++ 的契约 |
| `AppPlayVersion.java` / `AppPlayUpdateLayout.java` | `version.xml` 版本更新流程 |
| `AppPlayEditText.java` / `AppPlayTextInputWraper.java` | 软键盘与引擎的输入桥接 |
| `PlatformSDK*.java` | 分发渠道的登录/支付抽象 |

## 已知限制

- **原生层无法用本仓库重新编译出来。** `native/pseudocode/` 是 Hex-Rays 的输出：没有原始头文件、
  没有模板定义、Ogre3D 那套重模板代码也没有类型信息，而且引擎链接的是闭源 FMOD。因此构建时直接
  使用 `jniLibs/` 里的原始 `.so`。伪代码的用途是阅读、审计和移植参考，不是编译。
- **Java 层与原版并非源码级一致。** 它来自反编译器：局部变量名、注释、泛型写法都是近似的，匿名类的
  编号也不一样。571 个类里有 567 个类名与原版完全一致，剩下 4 个是匿名类编号差异和重新生成的
  `BuildConfig`。两者冲突时，以 `reference/smali/` 为准（它是逐字节等价的）。
- **21 886 个原生函数中有 511 个**无法还原成 C，以带注释的反汇编形式给出。
- release 包用的是 `keystore/restored.jks` 里的一次性密钥（口令 `android`），如果你要 fork，请换掉它。

## 免责声明

本仓库用于**学习、互操作性研究与技术存档**，与迷你世界的开发者、发行商没有任何隶属、授权或支持关系。

全部游戏内容 —— 美术、贴图、音频、模型、关卡数据、Lua 脚本、原生引擎二进制以及「迷你世界」
名称 —— 均归各自权利人所有，此处仅作为技术研究的一部分收录，不授予任何许可。如果你是权利人并希望
移除某些内容，请开 issue，我们会删除。

请勿使用本项目分发修改版客户端、绕过反作弊或架设未经授权的服务器。
