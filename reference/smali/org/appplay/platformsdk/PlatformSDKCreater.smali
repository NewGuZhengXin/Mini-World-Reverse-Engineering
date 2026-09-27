.class public Lorg/appplay/platformsdk/PlatformSDKCreater;
.super Ljava/lang/Object;
.source "PlatformSDKCreater.java"


# static fields
.field public static sSDK_CurrentName:Ljava/lang/String;

.field public static sSDK_NAME_360:Ljava/lang/String;

.field public static sSDK_NAME_91:Ljava/lang/String;

.field public static sSDK_NAME_UNKNOWN:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .prologue
    .line 9
    const-string v0, "unknown"

    sput-object v0, Lorg/appplay/platformsdk/PlatformSDKCreater;->sSDK_NAME_UNKNOWN:Ljava/lang/String;

    .line 10
    const-string v0, "91"

    sput-object v0, Lorg/appplay/platformsdk/PlatformSDKCreater;->sSDK_NAME_91:Ljava/lang/String;

    .line 11
    const-string v0, "360"

    sput-object v0, Lorg/appplay/platformsdk/PlatformSDKCreater;->sSDK_NAME_360:Ljava/lang/String;

    .line 13
    const-string v0, ""

    sput-object v0, Lorg/appplay/platformsdk/PlatformSDKCreater;->sSDK_CurrentName:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .prologue
    .line 7
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static Create(Landroid/app/Activity;)Lorg/appplay/platformsdk/PlatformSDK;
    .locals 1
    .param p0, "activity"    # Landroid/app/Activity;

    .prologue
    .line 17
    sget-object v0, Lorg/appplay/lib/AppPlayMetaData;->sPFSDKName:Ljava/lang/String;

    sput-object v0, Lorg/appplay/platformsdk/PlatformSDKCreater;->sSDK_CurrentName:Ljava/lang/String;

    .line 19
    sget-object v0, Lorg/appplay/platformsdk/PlatformSDKCreater;->sSDK_CurrentName:Ljava/lang/String;

    invoke-static {p0, v0}, Lorg/appplay/platformsdk/PlatformSDKCreater;->_Create(Landroid/app/Activity;Ljava/lang/String;)Lorg/appplay/platformsdk/PlatformSDK;

    move-result-object v0

    return-object v0
.end method

.method private static _Create(Landroid/app/Activity;Ljava/lang/String;)Lorg/appplay/platformsdk/PlatformSDK;
    .locals 2
    .param p0, "activity"    # Landroid/app/Activity;
    .param p1, "source"    # Ljava/lang/String;

    .prologue
    const/4 v1, 0x0

    .line 24
    sget-object v0, Lorg/appplay/platformsdk/PlatformSDKCreater;->sSDK_NAME_91:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 34
    :cond_0
    :goto_0
    return-object v1

    .line 28
    :cond_1
    sget-object v0, Lorg/appplay/platformsdk/PlatformSDKCreater;->sSDK_NAME_360:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0
.end method
