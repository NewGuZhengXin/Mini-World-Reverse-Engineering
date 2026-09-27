# 迷你世界 · Android 1.0 —— 還原原始碼專案

[English](README.md) · [簡體中文](README.zh-CN.md) · **繁體中文**

這是 **迷你世界（MiniWorld）** 早期 Android 用戶端的還原專案 —— 套件名稱
`com.minitech.miniworld`，版本 `1.0`（`versionCode` 1），面向 Android 4.4 時代。

原版 APK 是「薄 Java 外殼 + 大型 C++ 原生引擎」的結構。本儲存庫把 Java 層還原成
一般、可讀、可編譯的原始碼，同時完整保留了原始資源、assets 與 Lua 腳本、預先編譯的原生函式庫，
以及引擎全部函式的 C 虛擬碼。

> **僅供學習與研究。** 迷你世界及其全部美術、音訊、模型、腳本與程式碼歸各自權利人所有。
> 本儲存庫未授予任何再散布或商業使用授權 —— 詳見[免責聲明](#免責聲明)。

---

## 目錄

- [儲存庫內容](#儲存庫內容)
- [整體架構](#整體架構)
- [目錄結構](#目錄結構)
- [建置](#建置)
- [執行](#執行)
- [原生引擎](#原生引擎)
- [Java 層閱讀順序](#java-層閱讀順序)
- [已知限制](#已知限制)
- [免責聲明](#免責聲明)

---

## 儲存庫內容

| 組成 | 內容 |
| --- | --- |
| Java 原始碼 | **205 個檔案** —— 18 個應用程式自身的類別 + 打包在 `classes.dex` 裡的 187 個 support-v4 類別 |
| 資源 | 16 個檔案：版面配置、樣式、顏色、字串（`values`、`values-v11`、`values-v14`、`values-zh-rCN`）、圖示、啟動畫面 |
| assets | **1 667 個檔案** —— 1 009 張 PNG、267 個 OGG、93 個 `.omod` 模型、**51 個 Lua 腳本**、50 個 XML 定義、31 個 OBJ 網格、31 個 CSV 表，以及 entity / particles / sky / sounds / shaders / ui 資料 |
| 原生函式庫 | `libAppPlayJNI.so`（4.44 MB）、`libfmodex.so`（1.06 MB）、`libcrypto.so`（0.81 MB）—— ARM 32 位元，以預先編譯形式提供 |
| 原生虛擬碼 | **1 180 個 C 檔案 / 22.7 MB**，涵蓋引擎的 **21 886 個函式** |
| 原生重建 | 把上述虛擬碼編譯成 ARM 32 位 `.so` 的流水線 —— 見 [`native/rebuild/`](native/rebuild/README.md) |
| 參考 | 571 個 smali 檔案 —— 原始位元組碼，逐位元組保留以便對照 |

## 整體架構

```
┌─────────────────────────────────────────────────────────┐
│  Java 層 —— 205 個檔案                                   │
│                                                         │
│   SplashScreenActivity ──▶ MiniWorldActivity            │
│            │                        │                   │
│            ▼                        ▼                   │
│      AppPlayBaseActivity ◀──── AppPlayGLView            │
│            │             ▲          │                   │
│            │      AppPlayRenderer ──┘                   │
│            ▼                                            │
│      AppPlayNatives  ◀── 31 個 JNI 方法 ──┐             │
└───────────────────────────────────────────┼─────────────┘
                                            │ JNI
┌───────────────────────────────────────────▼─────────────┐
│  libAppPlayJNI.so —— ARM 32 位元，4.44 MB，C++           │
│                                                         │
│  Ogre3D        繪製、場景圖、自製 UI 框架                │
│  FMOD Ex       音訊                                      │
│  Lua 5.1.5     玩法腳本（tolua++ 繫結）                  │
│  flatbuffers   網路協定序列化                            │
│  TinyXML       資料與 UI 定義                            │
│  SQLite        本機儲存（Kompex 封裝）                   │
│  zlib 1.2.7    解壓縮（直接從 APK 裡讀 assets）          │
│  libcurl       HTTP 下載                                 │
└─────────────────────────────────────────────────────────┘
```

遊戲真正在做的事情全都在原生函式庫裡。Java 側只負責視窗、GL 表面、輸入轉送、版本更新檢查
和通路 SDK 的串接。

## 目錄結構

```
.
├── app/                              Android 應用程式模組
│   ├── build.gradle
│   └── src/main/
│       ├── AndroidManifest.xml
│       ├── java/                     205 個 Java 檔案
│       │   ├── com/minitech/miniworld/      Activity 與 UI 輔助類別
│       │   ├── org/appplay/lib/             引擎封裝（GL、更新、網路、輸入）
│       │   ├── org/appplay/platformsdk/     通路 SDK 抽象層
│       │   └── android/support/v4/          隨套件內附的 support-v4（187 個類別）
│       ├── res/                      版面配置、values、drawable
│       ├── assets/                   1 667 個原始資源與 Lua 腳本
│       └── jniLibs/armeabi/          三個預先編譯的原生函式庫
├── native/
│   ├── README.md
│   └── pseudocode/                   1 180 個 .c，一個 C++ 類別/命名空間一個檔案
├── reference/
│   ├── smali/                        原始位元組碼，逐位元組等價
│   └── original_apk/                 原始資訊清單與建置資訊
├── keystore/restored.jks             用來簽署 release 封裝的自簽章金鑰
├── gradle/ gradlew gradlew.bat       Gradle Wrapper
├── build.gradle  settings.gradle  gradle.properties
└── README.md  README.zh-CN.md  README.zh-TW.md
```

## 建置

**環境需求**

| 工具 | 版本 |
| --- | --- |
| JDK | 17 |
| Android SDK Platform | 34 |
| Android SDK Build-Tools | 34.0.0 |
| Gradle | 8.7（已附 Wrapper） |
| Android Gradle Plugin | 8.5.2 |

`local.properties` 刻意沒有提交進儲存庫 —— Android Studio 開啟專案時會自動產生，你也可以自己寫
一行 `sdk.dir=/你的/android-sdk/路徑`。

```bash
# release 封裝 —— 請用這個
./gradlew assembleRelease
# → app/build/outputs/apk/release/app-release.apk

# debug 封裝 —— 可以編譯，但請看下面的警告
./gradlew assembleDebug
```

### ⚠️ 想真正跑起來，必須用 release 封裝

debug 變體會帶上 `android:debuggable="true"`，這會讓 ART 開啟 **CheckJNI**。而預先編譯的引擎裡
有一處不規範的 JNI 呼叫：它把 `AppPlayBaseActivity.SetScreenBright(float)`（一個 `void`
方法）當成回傳 `int` 的方法來呼叫（`CallStaticIntMethod`）。不開 CheckJNI 時這無害；一旦開了，
ART 會在 GL 執行緒啟動後不到一秒直接終止處理程序：

```
JNI DETECTED ERROR IN APPLICATION: the return type of CallStaticIntMethodV
does not match void org.appplay.lib.AppPlayBaseActivity.SetScreenBright(float)
Fatal signal 6 (SIGABRT) in tid ... (GLThread)
```

原版 APK 不是 debuggable 的，所以當年能正常執行。`release` 變體的 `debuggable` 保持預設的
`false`，CheckJNI 關閉，引擎原樣執行。`app/build.gradle` 裡 `debug` 建置型別的註解也寫了這一點。

## 執行

本專案以 `minSdk 19` / `targetSdk 19` 建置（原始資訊清單寫的是 11/19，但現代建置工具已不支援
API 11）。在 Android 11 以上的實機或模擬器上，進入遊戲前會遇到兩個系統彈出式視窗：

1. 「此應用程式專為舊版 Android 打造……」—— 點**確定**。
2. 權限覆核畫面 —— 點**繼續**。

兩者都是 `targetSdk` 過低造成的正常現象。點完之後引擎開始初始化、產生方塊圖示並進入繪製。

**模擬器。** 遊戲只帶了 32 位元 ARM 函式庫，所以需要帶 ARM 轉譯層的 x86 模擬器。已在
**MuMu 模擬器 12**（Android 12、x86_64、`libhoudini` / `libnb.so` 原生橋接）上驗證可正常執行。
沒有 ARM 轉譯層的模擬器根本無法載入 `libAppPlayJNI.so`。

## 原生引擎

這個 `.so` 沒有被 strip，絕大多數函式都保留了原始 C++ 名稱 —— 虛擬碼裡看到的是
`ClientManager::onInitialize`、`World::setBlock`、`AIArrowAttack::update`，而不是
`sub_XXXXXX`。進入點是 `native/pseudocode/global.c` 裡的 `JNI_OnLoad` 和 `nativeInit`。

| 想找什麼 | 去哪裡 |
| --- | --- |
| JNI 邊界（31 個匯出 + `JNI_OnLoad`） | `pseudocode/global.c` |
| 引擎主迴圈與生命週期 | `ClientManager.c`、`SurviveGame.c` |
| 世界、區塊、光照 | `World.c`、`ClientWorld.c`、`Chunk.c`、`Section.c`、`LightingArea.c` |
| 方塊與材質 | `Block*.c`、`*BlockMaterial.c`、`BlockMaterialMgr.c` |
| 生物、AI、尋路 | `Actor*.c`、`AI*.c`、`Mob*Action.c`、`PathFinder.c` |
| 地形產生 | `TerrainGen.c`、`GenLayer*.c`、`WorldGen*.c`、`NoiseGenerator*.c` |
| 自製 UI 框架 | `Frame.c`、`LayoutFrame.c`、`RichText.c`、`ListBox.c`、`IconBar*.c` |
| 繪製（Ogre3D） | `pseudocode/Ogre/` |
| 音訊（FMOD Ex） | `pseudocode/FMOD/` |
| 網路 | `CSMgr.c`、`CSMsgHandler.c`、`pseudocode/flatbuffers/` |
| 玩法腳本 | `app/src/main/assets/luascript/` 下的 51 個 Lua 檔案，透過 `luaopen_UITolua`、`luaopen_ClientToLua` 繫結 |

31 個 JNI 匯出分兩組：20 個 `AppPlayNatives` 方法（初始化、每個畫格回呼、觸控、按鍵、文字輸入、
生命週期）和 11 個 `PlatformSDKNatives` 回呼（通路 SDK 的登入與付款結果回傳）。

### 從虛擬碼重建這個函式庫

`native/rebuild/` 能把這批虛擬碼編譯成真正的 ARM 32 位 `.so`。它是一條五階段流水線 ——
機械式 C++→C 改寫、編譯/診斷/補宣告的閉環、平行編譯、連結、驗證報告 ——
產出 `native/rebuild/out/libAppPlayJNI.so`：ELF32、ARM、7.30 MB、**15 107 個函式帶函式體**，
且 **32 個 JNI 進入點全部以原名匯出**，與預編譯函式庫完全一致。

這是「虛擬碼完整到可以編譯連結」的結構性證明，**不是一個能跑的引擎**。20 543 個函式中
有 2 555 個無法用 C 表達，已用 `#if 0` 關閉；類別佈局是佔位結構；FMOD 閉源。動手之前請先讀
[`native/rebuild/README.md`](native/rebuild/README.md)。

```powershell
python native/rebuild/tools/build.py --ndk <ndk-path> --stage all --jobs 12
```

## Java 層閱讀順序

建議按這個順序讀：

| 檔案 | 為什麼先看它 |
| --- | --- |
| `SplashScreenActivity.java` | 啟動進入點，顯示閃屏後交接 |
| `MiniWorldActivity.java` | 真正的 Activity，繼承 `AppPlayBaseActivity` |
| `AppPlayBaseActivity.java` | 外殼核心：建立 GL 檢視、權限、更新檢查、JNI 註冊 |
| `AppPlayGLView.java` / `AppPlayRenderer.java` | `GLSurfaceView` + `Renderer`，每個畫格呼叫 `nativeOnIdle()` |
| `AppPlayNatives.java` | 20 個 native 方法宣告 —— Java↔C++ 的契約 |
| `AppPlayVersion.java` / `AppPlayUpdateLayout.java` | `version.xml` 版本更新流程 |
| `AppPlayEditText.java` / `AppPlayTextInputWraper.java` | 軟體鍵盤與引擎的輸入橋接 |
| `PlatformSDK*.java` | 散布通路的登入/付款抽象 |

## 已知限制

- **原生層無法用本儲存庫重新編譯出來。** `native/pseudocode/` 是 Hex-Rays 的輸出：沒有原始標頭檔、
  沒有樣板定義、Ogre3D 那套重度樣板的程式碼也沒有型別資訊，而且引擎連結的是閉源 FMOD。因此建置時
  直接使用 `jniLibs/` 裡的原始 `.so`。虛擬碼的用途是閱讀、稽核和移植參考，不是編譯。
- **Java 層與原版並非原始碼層級一致。** 它來自反編譯器：區域變數名稱、註解、泛型寫法都是近似的，
  匿名類別的編號也不一樣。571 個類別裡有 567 個類別名稱與原版完全一致，剩下 4 個是匿名類別編號差異
  和重新產生的 `BuildConfig`。兩者衝突時，以 `reference/smali/` 為準（它是逐位元組等價的）。
- **21 886 個原生函式中有 511 個**無法還原成 C，以帶註解的反組譯形式提供。
- release 封裝用的是 `keystore/restored.jks` 裡的拋棄式金鑰（密碼 `android`），如果你要 fork，請換掉它。

## 免責聲明

本儲存庫用於**學習、互通性研究與技術保存**，與迷你世界的開發者、發行商沒有任何隸屬、授權或支援關係。

全部遊戲內容 —— 美術、貼圖、音訊、模型、關卡資料、Lua 腳本、原生引擎二進位檔以及「迷你世界」
名稱 —— 均歸各自權利人所有，此處僅作為技術研究的一部分收錄，不授予任何授權。如果你是權利人並希望
移除某些內容，請開 issue，我們會刪除。

請勿使用本專案散布修改版用戶端、繞過反外掛或架設未經授權的伺服器。
