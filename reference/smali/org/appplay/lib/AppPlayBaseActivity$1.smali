.class Lorg/appplay/lib/AppPlayBaseActivity$1;
.super Landroid/os/Handler;
.source "AppPlayBaseActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lorg/appplay/lib/AppPlayBaseActivity;->onCreate(Landroid/os/Bundle;)V
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
    iput-object p1, p0, Lorg/appplay/lib/AppPlayBaseActivity$1;->this$0:Lorg/appplay/lib/AppPlayBaseActivity;

    .line 90
    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 3
    .param p1, "msg"    # Landroid/os/Message;

    .prologue
    .line 93
    iget v1, p1, Landroid/os/Message;->what:I

    const/4 v2, 0x1

    if-ne v1, v2, :cond_0

    .line 95
    sget-object v1, Lorg/appplay/lib/AppPlayBaseActivity;->sTheActivity:Lorg/appplay/lib/AppPlayBaseActivity;

    invoke-virtual {v1}, Lorg/appplay/lib/AppPlayBaseActivity;->getWindow()Landroid/view/Window;

    move-result-object v1

    invoke-virtual {v1}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object v0

    .line 96
    .local v0, "lp":Landroid/view/WindowManager$LayoutParams;
    iget v1, p1, Landroid/os/Message;->arg1:I

    int-to-float v1, v1

    const/high16 v2, 0x42c80000    # 100.0f

    div-float/2addr v1, v2

    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->screenBrightness:F

    .line 97
    sget-object v1, Lorg/appplay/lib/AppPlayBaseActivity;->sTheActivity:Lorg/appplay/lib/AppPlayBaseActivity;

    invoke-virtual {v1}, Lorg/appplay/lib/AppPlayBaseActivity;->getWindow()Landroid/view/Window;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V

    .line 99
    .end local v0    # "lp":Landroid/view/WindowManager$LayoutParams;
    :cond_0
    return-void
.end method
