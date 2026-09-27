.class public Lcom/minitech/miniworld/SplashScreenActivity;
.super Landroid/app/Activity;
.source "SplashScreenActivity.java"


# instance fields
.field protected _active:Z

.field protected _splashTime:I


# direct methods
.method public constructor <init>()V
    .locals 1

    .prologue
    .line 15
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 16
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/minitech/miniworld/SplashScreenActivity;->_active:Z

    .line 17
    const/16 v0, 0x1f4

    iput v0, p0, Lcom/minitech/miniworld/SplashScreenActivity;->_splashTime:I

    .line 15
    return-void
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 4
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .prologue
    .line 21
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 23
    invoke-virtual {p0}, Lcom/minitech/miniworld/SplashScreenActivity;->getWindow()Landroid/view/Window;

    move-result-object v2

    const/16 v3, 0x80

    invoke-virtual {v2, v3}, Landroid/view/Window;->addFlags(I)V

    .line 25
    const v2, 0x7f030001

    invoke-virtual {p0, v2}, Lcom/minitech/miniworld/SplashScreenActivity;->setContentView(I)V

    .line 27
    const/16 v1, 0xf06

    .line 34
    .local v1, "uiOptions":I
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x13

    if-lt v2, v3, :cond_0

    .line 36
    or-int/lit16 v1, v1, 0x1000

    .line 42
    :goto_0
    invoke-virtual {p0}, Lcom/minitech/miniworld/SplashScreenActivity;->getWindow()Landroid/view/Window;

    move-result-object v2

    invoke-virtual {v2}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v2

    invoke-virtual {v2, v1}, Landroid/view/View;->setSystemUiVisibility(I)V

    .line 45
    new-instance v0, Lcom/minitech/miniworld/SplashScreenActivity$1;

    invoke-direct {v0, p0}, Lcom/minitech/miniworld/SplashScreenActivity$1;-><init>(Lcom/minitech/miniworld/SplashScreenActivity;)V

    .line 65
    .local v0, "splashTread":Ljava/lang/Thread;
    invoke-virtual {v0}, Ljava/lang/Thread;->start()V

    .line 66
    return-void

    .line 38
    .end local v0    # "splashTread":Ljava/lang/Thread;
    :cond_0
    or-int/lit8 v1, v1, 0x1

    goto :goto_0
.end method

.method public onTouchEvent(Landroid/view/MotionEvent;)Z
    .locals 2
    .param p1, "event"    # Landroid/view/MotionEvent;

    .prologue
    .line 70
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getAction()I

    move-result v0

    if-nez v0, :cond_0

    .line 71
    const-string v0, "appplay.ap"

    const-string v1, "splashscreen touchdown"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 72
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/minitech/miniworld/SplashScreenActivity;->_active:Z

    .line 74
    :cond_0
    const/4 v0, 0x1

    return v0
.end method
