.class Lorg/appplay/lib/AppPlayBaseActivity$10;
.super Ljava/lang/Object;
.source "AppPlayBaseActivity.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lorg/appplay/lib/AppPlayBaseActivity;->_ThirdPlatformLogin1()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lorg/appplay/lib/AppPlayBaseActivity;


# direct methods
.method constructor <init>(Lorg/appplay/lib/AppPlayBaseActivity;)V
    .locals 0

    .prologue
    .line 1
    iput-object p1, p0, Lorg/appplay/lib/AppPlayBaseActivity$10;->this$0:Lorg/appplay/lib/AppPlayBaseActivity;

    .line 622
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 1

    .prologue
    .line 626
    sget-object v0, Lorg/appplay/platformsdk/PlatformSDK;->sThePlatformSDK:Lorg/appplay/platformsdk/PlatformSDK;

    if-eqz v0, :cond_0

    .line 627
    sget-object v0, Lorg/appplay/platformsdk/PlatformSDK;->sThePlatformSDK:Lorg/appplay/platformsdk/PlatformSDK;

    invoke-virtual {v0}, Lorg/appplay/platformsdk/PlatformSDK;->Login()V

    .line 628
    :cond_0
    return-void
.end method
