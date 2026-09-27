.class public abstract Lorg/appplay/platformsdk/PlatformSDK;
.super Ljava/lang/Object;
.source "PlatformSDK.java"


# static fields
.field public static sPayHostName:Ljava/lang/String;

.field public static sPayPlatform:Ljava/lang/String;

.field public static sSource:Ljava/lang/String;

.field public static sTheActivtiy:Landroid/app/Activity;

.field public static sThePlatformSDK:Lorg/appplay/platformsdk/PlatformSDK;


# instance fields
.field private mSerial:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .prologue
    const/4 v0, 0x0

    .line 9
    sput-object v0, Lorg/appplay/platformsdk/PlatformSDK;->sThePlatformSDK:Lorg/appplay/platformsdk/PlatformSDK;

    .line 10
    sput-object v0, Lorg/appplay/platformsdk/PlatformSDK;->sTheActivtiy:Landroid/app/Activity;

    .line 14
    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "act"    # Landroid/app/Activity;

    .prologue
    .line 17
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 19
    sput-object p1, Lorg/appplay/platformsdk/PlatformSDK;->sTheActivtiy:Landroid/app/Activity;

    .line 20
    return-void
.end method


# virtual methods
.method public abstract ASynPay(Ljava/lang/String;Ljava/lang/String;FFILjava/lang/String;)V
.end method

.method public GetSerial()Ljava/lang/String;
    .locals 1

    .prologue
    .line 57
    iget-object v0, p0, Lorg/appplay/platformsdk/PlatformSDK;->mSerial:Ljava/lang/String;

    return-object v0
.end method

.method public abstract Init()V
.end method

.method public abstract IsLogined()V
.end method

.method public abstract Login()V
.end method

.method public abstract Login_Guest()V
.end method

.method public abstract Logout()V
.end method

.method public MakeSerial()Ljava/lang/String;
    .locals 4

    .prologue
    .line 61
    invoke-static {}, Ljava/util/UUID;->randomUUID()Ljava/util/UUID;

    move-result-object v0

    .line 62
    .local v0, "guid":Ljava/util/UUID;
    invoke-virtual {v0}, Ljava/util/UUID;->toString()Ljava/lang/String;

    move-result-object v1

    .line 63
    .local v1, "text":Ljava/lang/String;
    const-string v2, "-"

    const-string v3, ""

    invoke-virtual {v3}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v1

    .line 65
    iput-object v1, p0, Lorg/appplay/platformsdk/PlatformSDK;->mSerial:Ljava/lang/String;

    .line 67
    iget-object v2, p0, Lorg/appplay/platformsdk/PlatformSDK;->mSerial:Ljava/lang/String;

    return-object v2
.end method

.method public abstract OnExist()V
.end method

.method public abstract OnLogoutExist()V
.end method

.method public abstract OnResume()V
.end method

.method public abstract SynPay(Ljava/lang/String;Ljava/lang/String;FFILjava/lang/String;)V
.end method

.method public abstract Term()V
.end method
