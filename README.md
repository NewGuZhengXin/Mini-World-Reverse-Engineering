# MiniWorld · Android 1.0 — Restored Source

**English** · [简体中文](README.zh-CN.md) · [繁體中文](README.zh-TW.md)

A restored, buildable Android project for the early mobile client of **MiniWorld (迷你世界)** —
package `com.minitech.miniworld`, version `1.0` (`versionCode` 1), targeting the Android 4.4 era.

The original APK was a thin Java shell wrapped around a large native C++ game engine. This
repository gives you that Java layer as ordinary readable source, together with every original
resource, asset and Lua script, the prebuilt native libraries, and a full C pseudocode dump of
the engine itself.

> **Educational and research use only.** MiniWorld and all of its artwork, audio, models,
> scripts and code belong to their respective rights holders. Nothing here is licensed for
> redistribution or commercial use — see [Disclaimer](#disclaimer).

---

## Table of contents

- [What's inside](#whats-inside)
- [Architecture](#architecture)
- [Repository layout](#repository-layout)
- [Building](#building)
- [Running](#running)
- [The native engine](#the-native-engine)
- [Reading the Java layer](#reading-the-java-layer)
- [Known limitations](#known-limitations)
- [Disclaimer](#disclaimer)

---

## What's inside

| Component | Content |
| --- | --- |
| Java source | **205 files** — 18 application classes + the 187-class support-v4 library that shipped inside `classes.dex` |
| Resources | 16 files: layouts, styles, colours, strings (`values`, `values-v11`, `values-v14`, `values-zh-rCN`), launcher icons, splash screen |
| Assets | **1 667 files** — 1 009 PNG, 267 OGG, 93 `.omod` models, **51 Lua scripts**, 50 XML definitions, 31 OBJ meshes, 31 CSV tables, plus entity / particle / sky / sound / shader / UI data |
| Native libraries | `libAppPlayJNI.so` (4.44 MB), `libfmodex.so` (1.06 MB), `libcrypto.so` (0.81 MB) — ARM 32-bit, shipped prebuilt |
| Native pseudocode | **1 180 C files / 22.7 MB**, covering **21 886 functions** of the engine |
| Native rebuild | A pipeline that compiles that pseudocode into an ARM 32-bit `.so` — see [`native/rebuild/`](native/rebuild/README.md) |
| Reference | 571 smali files — the original bytecode, kept byte-exact for cross-checking |

## Architecture

```
┌─────────────────────────────────────────────────────────┐
│  Java layer — 205 files                                 │
│                                                         │
│   SplashScreenActivity ──▶ MiniWorldActivity            │
│            │                        │                   │
│            ▼                        ▼                   │
│      AppPlayBaseActivity ◀──── AppPlayGLView            │
│            │             ▲          │                   │
│            │      AppPlayRenderer ──┘                   │
│            ▼                                            │
│      AppPlayNatives  ◀── 31 JNI methods ──┐             │
└───────────────────────────────────────────┼─────────────┘
                                            │ JNI
┌───────────────────────────────────────────▼─────────────┐
│  libAppPlayJNI.so — ARM 32-bit, 4.44 MB, C++            │
│                                                         │
│  Ogre3D        rendering, scene graph, custom UI        │
│  FMOD Ex       audio                                    │
│  Lua 5.1.5     gameplay scripting (+ tolua++ bindings)  │
│  flatbuffers   network protocol serialisation           │
│  TinyXML       data and UI definitions                  │
│  SQLite        local storage (via the Kompex wrapper)   │
│  zlib 1.2.7    compression (reads assets from the APK)  │
│  libcurl       HTTP downloads                           │
└─────────────────────────────────────────────────────────┘
```

Everything the game actually *does* lives in the native library. The Java side only owns the
window, the GL surface, input plumbing, the update/version check and the channel-SDK hooks.

## Repository layout

```
.
├── app/                              Android application module
│   ├── build.gradle
│   └── src/main/
│       ├── AndroidManifest.xml
│       ├── java/                     205 Java files
│       │   ├── com/minitech/miniworld/      activities + UI helpers
│       │   ├── org/appplay/lib/             engine wrapper (GL, update, network, input)
│       │   ├── org/appplay/platformsdk/     channel SDK abstraction
│       │   └── android/support/v4/          bundled support-v4 (187 classes)
│       ├── res/                      layouts, values, drawables
│       ├── assets/                   1 667 original assets + Lua scripts
│       └── jniLibs/armeabi/          the three prebuilt native libraries
├── native/
│   ├── README.md
│   └── pseudocode/                   1 180 .c files, one per C++ class/namespace
├── reference/
│   ├── smali/                        original bytecode, byte-exact
│   └── original_apk/                 original manifest and build metadata
├── keystore/restored.jks             self-signed key used to sign the release build
├── gradle/ gradlew gradlew.bat       Gradle wrapper
├── build.gradle  settings.gradle  gradle.properties
└── README.md  README.zh-CN.md  README.zh-TW.md
```

## Building

**Requirements**

| Tool | Version |
| --- | --- |
| JDK | 17 |
| Android SDK platform | 34 |
| Android SDK build-tools | 34.0.0 |
| Gradle | 8.7 (wrapper included) |
| Android Gradle Plugin | 8.5.2 |

`local.properties` is intentionally not committed — Android Studio creates it automatically,
or you can write `sdk.dir=/path/to/android-sdk` yourself.

```bash
# release build — use this one
./gradlew assembleRelease
# → app/build/outputs/apk/release/app-release.apk

# debug build — compiles fine, but see the warning below
./gradlew assembleDebug
```

### ⚠️ Use the release build to actually run the game

The debug variant sets `android:debuggable="true"`, which makes ART enable **CheckJNI**. The
prebuilt engine contains one non-conforming JNI call: it invokes
`AppPlayBaseActivity.SetScreenBright(float)` — a `void` method — through
`CallStaticIntMethod`. Without CheckJNI this is harmless; with CheckJNI, ART aborts the process
a fraction of a second after the GL thread starts:

```
JNI DETECTED ERROR IN APPLICATION: the return type of CallStaticIntMethodV
does not match void org.appplay.lib.AppPlayBaseActivity.SetScreenBright(float)
Fatal signal 6 (SIGABRT) in tid ... (GLThread)
```

The original APK was not debuggable, which is why the game ran. The `release` variant keeps
`debuggable` at its default `false`, CheckJNI stays off, and the engine runs unmodified. The
`debug` build type carries a comment about this in `app/build.gradle`.

## Running

The project builds for `minSdk 19` / `targetSdk 19` (the original manifest declared 11/19;
API 11 is no longer supported by modern build tools). On Android 11+ devices and emulators you
will be greeted by two system dialogs before the game appears:

1. *"This app was built for an older version of Android"* — tap **OK**.
2. A permission review screen — tap **Continue**.

Both are normal for a legacy `targetSdk`. After that the engine initialises, generates block
icons and starts rendering.

**Emulators.** The game ships only 32-bit ARM libraries, so it needs an x86 emulator with an
ARM translation layer. It has been verified running on **MuMu Player 12** (Android 12, x86_64,
`libhoudini` / `libnb.so` native bridge). Emulators without ARM translation cannot load
`libAppPlayJNI.so` at all.

## The native engine

The library was not stripped, so almost every function kept its original C++ name — the
pseudocode reads as `ClientManager::onInitialize`, `World::setBlock`,
`AIArrowAttack::update` rather than `sub_XXXXXX`. The entry points are `JNI_OnLoad` and
`nativeInit` in `native/pseudocode/global.c`.

| Looking for | Where |
| --- | --- |
| JNI boundary (31 exports + `JNI_OnLoad`) | `pseudocode/global.c` |
| Engine main loop and lifecycle | `ClientManager.c`, `SurviveGame.c` |
| World, chunks, lighting | `World.c`, `ClientWorld.c`, `Chunk.c`, `Section.c`, `LightingArea.c` |
| Blocks and materials | `Block*.c`, `*BlockMaterial.c`, `BlockMaterialMgr.c` |
| Entities, AI, pathfinding | `Actor*.c`, `AI*.c`, `Mob*Action.c`, `PathFinder.c` |
| Terrain generation | `TerrainGen.c`, `GenLayer*.c`, `WorldGen*.c`, `NoiseGenerator*.c` |
| Custom UI framework | `Frame.c`, `LayoutFrame.c`, `RichText.c`, `ListBox.c`, `IconBar*.c` |
| Rendering (Ogre3D) | `pseudocode/Ogre/` |
| Audio (FMOD Ex) | `pseudocode/FMOD/` |
| Networking | `CSMgr.c`, `CSMsgHandler.c`, `pseudocode/flatbuffers/` |
| Gameplay scripting | the 51 Lua files in `app/src/main/assets/luascript/`, bound through `luaopen_UITolua` and `luaopen_ClientToLua` |

The 31 JNI exports split into two groups: 20 `AppPlayNatives` methods (init, idle, touch, key,
text input, lifecycle) and 11 `PlatformSDKNatives` callbacks (login and payment results coming
back from the channel SDK).

### Rebuilding the library from the pseudocode

`native/rebuild/` compiles that pseudocode into a real ARM 32-bit `.so`. It is a five-stage
pipeline — mechanical C++→C rewriting, a compile/diagnose/declare feedback loop, a parallel
compile, a link, a verification report — and it produces `native/rebuild/out/libAppPlayJNI.so`:
ELF32, ARM, 7.30 MB, **15 107 functions with a body**, and all **32 JNI entry points exported
under their original names**, exactly matching the prebuilt library.

It is a structural proof that the pseudocode is complete enough to compile and link — **not a
working engine**. 2 555 of 20 543 functions could not be expressed in C and are switched off with
`#if 0`; class layouts are placeholders; FMOD is closed source. Read
[`native/rebuild/README.md`](native/rebuild/README.md) before doing anything with it.

```powershell
python native/rebuild/tools/build.py --ndk <ndk-path> --stage all --jobs 12
```

## Reading the Java layer

Start here, in this order:

| File | Why |
| --- | --- |
| `SplashScreenActivity.java` | the launcher; shows the splash and hands over |
| `MiniWorldActivity.java` | the real activity, extends `AppPlayBaseActivity` |
| `AppPlayBaseActivity.java` | the shell: sets up the GL view, permissions, update check, JNI registration |
| `AppPlayGLView.java` / `AppPlayRenderer.java` | `GLSurfaceView` + `Renderer`; every frame calls `nativeOnIdle()` |
| `AppPlayNatives.java` | the 20 native method declarations — the Java↔C++ contract |
| `AppPlayVersion.java` / `AppPlayUpdateLayout.java` | the `version.xml` update flow |
| `AppPlayEditText.java` / `AppPlayTextInputWraper.java` | soft-keyboard bridge into the engine |
| `PlatformSDK*.java` | the login/payment abstraction for distribution channels |

## Known limitations

- **The native layer cannot be rebuilt from this repository.** `native/pseudocode/` is
  Hex-Rays output: it has no original headers, no template definitions and no type information
  for Ogre3D's template-heavy code, and the engine links against a closed-source FMOD. The
  build therefore ships the original `.so` files from `jniLibs/`. The pseudocode is for
  reading, auditing and porting — not for compiling.
- **The Java layer is not source-identical to the original.** It is decompiler output: local
  variable names, comments and generics are approximate, and anonymous classes are numbered
  differently. 567 of the 571 class names match the original exactly; the remaining four are
  anonymous-class numbering plus the regenerated `BuildConfig`. `reference/smali/` is the
  byte-exact authority whenever the two disagree.
- **511 of the 21 886 native functions** could not be decompiled to C and are given as
  annotated disassembly instead.
- The release build is signed with the throwaway key in `keystore/restored.jks`
  (password `android`). Replace it if you fork.

## Disclaimer

This repository exists for **study, interoperability research and preservation**. It is not
affiliated with, endorsed by, or supported by the developers or publishers of MiniWorld.

All game content — artwork, textures, audio, models, level data, Lua scripts, the native
engine binary and the MiniWorld name — remains the property of its respective rights holders
and is included here solely as part of a technical study. No licence is granted. If you are a
rights holder and want something removed, open an issue and it will be taken down.

Do not use this project to distribute modified clients, bypass anti-cheat, or operate
unauthorised servers.
