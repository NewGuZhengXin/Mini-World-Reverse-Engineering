.class public Lorg/appplay/platformsdk/PlatformSDKNatives;
.super Ljava/lang/Object;
.source "PlatformSDKNatives.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .prologue
    .line 3
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static GetHostName()Ljava/lang/String;
    .locals 1

    .prologue
    .line 22
    sget-object v0, Lorg/appplay/platformsdk/PlatformSDK;->sPayHostName:Ljava/lang/String;

    return-object v0
.end method

.method public static GetPayPlatform()Ljava/lang/String;
    .locals 1

    .prologue
    .line 12
    sget-object v0, Lorg/appplay/platformsdk/PlatformSDK;->sPayPlatform:Ljava/lang/String;

    return-object v0
.end method

.method public static GetPlatformSource()Ljava/lang/String;
    .locals 1

    .prologue
    .line 17
    sget-object v0, Lorg/appplay/platformsdk/PlatformSDK;->sSource:Ljava/lang/String;

    return-object v0
.end method

.method public static native OnGuestOfficialSuc()V
.end method

.method public static native OnLoginCancel()V
.end method

.method public static native OnLoginFailed()V
.end method

.method public static native OnLoginSuc(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
.end method

.method public static native OnPayCancel(Ljava/lang/String;Z)V
.end method

.method public static native OnPayError(Ljava/lang/String;IZ)V
.end method

.method public static native OnPayFailed(Ljava/lang/String;Z)V
.end method

.method public static native OnPayRequestSubmitted(Ljava/lang/String;Z)V
.end method

.method public static native OnPaySMSSent(Ljava/lang/String;Z)V
.end method

.method public static native OnPaySuc(Ljava/lang/String;Z)V
.end method

.method public static PlatformLogin()V
    .locals 0

    .prologue
    .line 8
    return-void
.end method

.method public static native SetPlatformSDK(Ljava/lang/String;)V
.end method
