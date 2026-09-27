.class public Lcom/minitech/miniworld/MiniWorldActivity;
.super Lorg/appplay/lib/AppPlayBaseActivity;
.source "MiniWorldActivity.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .prologue
    .line 26
    invoke-direct {p0}, Lorg/appplay/lib/AppPlayBaseActivity;-><init>()V

    return-void
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 0
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .prologue
    .line 32
    invoke-super {p0, p1}, Lorg/appplay/lib/AppPlayBaseActivity;->onCreate(Landroid/os/Bundle;)V

    .line 33
    return-void
.end method

.method protected onPause()V
    .locals 2

    .prologue
    .line 38
    const-string v0, "appplay.ap"

    const-string v1, "MiniWorldActivity::onPause"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 40
    invoke-super {p0}, Lorg/appplay/lib/AppPlayBaseActivity;->onPause()V

    .line 41
    return-void
.end method

.method protected onResume()V
    .locals 0

    .prologue
    .line 46
    invoke-super {p0}, Lorg/appplay/lib/AppPlayBaseActivity;->onResume()V

    .line 47
    return-void
.end method
