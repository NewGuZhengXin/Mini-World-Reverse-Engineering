.class public Lorg/appplay/lib/AppPlayUpdateLayout;
.super Landroid/widget/LinearLayout;
.source "AppPlayUpdateLayout.java"


# static fields
.field private static final HIDE:I = 0x4

.field private static final PROCESS:I = 0x3

.field private static final SHOWCHECKING:I = 0x1

.field private static final SHOWUPDATING:I = 0x2


# instance fields
.field public TheRootView:Landroid/view/View;

.field private mClientVersion:F

.field mHandler:Landroid/os/Handler;

.field private mLayoutInflater:Landroid/view/LayoutInflater;

.field private mProgress:Landroid/widget/ProgressBar;

.field private mTheActivity:Lorg/appplay/lib/AppPlayBaseActivity;

.field private mTitle:Landroid/widget/TextView;


# direct methods
.method public constructor <init>(Landroid/content/Context;I)V
    .locals 2
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "layoutId"    # I

    .prologue
    .line 46
    invoke-direct {p0, p1}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    .line 39
    const/4 v0, 0x0

    iput v0, p0, Lorg/appplay/lib/AppPlayUpdateLayout;->mClientVersion:F

    .line 57
    new-instance v0, Lorg/appplay/lib/AppPlayUpdateLayout$1;

    invoke-direct {v0, p0}, Lorg/appplay/lib/AppPlayUpdateLayout$1;-><init>(Lorg/appplay/lib/AppPlayUpdateLayout;)V

    iput-object v0, p0, Lorg/appplay/lib/AppPlayUpdateLayout;->mHandler:Landroid/os/Handler;

    .line 48
    check-cast p1, Lorg/appplay/lib/AppPlayBaseActivity;

    .end local p1    # "context":Landroid/content/Context;
    iput-object p1, p0, Lorg/appplay/lib/AppPlayUpdateLayout;->mTheActivity:Lorg/appplay/lib/AppPlayBaseActivity;

    .line 50
    invoke-virtual {p0}, Lorg/appplay/lib/AppPlayUpdateLayout;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "layout_inflater"

    invoke-virtual {v0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/view/LayoutInflater;

    iput-object v0, p0, Lorg/appplay/lib/AppPlayUpdateLayout;->mLayoutInflater:Landroid/view/LayoutInflater;

    .line 51
    iget-object v0, p0, Lorg/appplay/lib/AppPlayUpdateLayout;->mLayoutInflater:Landroid/view/LayoutInflater;

    const/4 v1, 0x1

    invoke-virtual {v0, p2, p0, v1}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lorg/appplay/lib/AppPlayUpdateLayout;->TheRootView:Landroid/view/View;

    .line 52
    iget-object v0, p0, Lorg/appplay/lib/AppPlayUpdateLayout;->TheRootView:Landroid/view/View;

    const v1, 0x7f070003

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lorg/appplay/lib/AppPlayUpdateLayout;->mTitle:Landroid/widget/TextView;

    .line 53
    iget-object v0, p0, Lorg/appplay/lib/AppPlayUpdateLayout;->TheRootView:Landroid/view/View;

    const v1, 0x7f070004

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ProgressBar;

    iput-object v0, p0, Lorg/appplay/lib/AppPlayUpdateLayout;->mProgress:Landroid/widget/ProgressBar;

    .line 55
    return-void
.end method

.method private _Hide()V
    .locals 2

    .prologue
    .line 228
    iget-object v0, p0, Lorg/appplay/lib/AppPlayUpdateLayout;->mTheActivity:Lorg/appplay/lib/AppPlayBaseActivity;

    new-instance v1, Lorg/appplay/lib/AppPlayUpdateLayout$5;

    invoke-direct {v1, p0}, Lorg/appplay/lib/AppPlayUpdateLayout$5;-><init>(Lorg/appplay/lib/AppPlayUpdateLayout;)V

    invoke-virtual {v0, v1}, Lorg/appplay/lib/AppPlayBaseActivity;->runOnUiThread(Ljava/lang/Runnable;)V

    .line 237
    return-void
.end method

.method private _Process(D)V
    .locals 3
    .param p1, "process"    # D

    .prologue
    .line 241
    iget-object v0, p0, Lorg/appplay/lib/AppPlayUpdateLayout;->mTheActivity:Lorg/appplay/lib/AppPlayBaseActivity;

    new-instance v1, Lorg/appplay/lib/AppPlayUpdateLayout$6;

    invoke-direct {v1, p0, p1, p2}, Lorg/appplay/lib/AppPlayUpdateLayout$6;-><init>(Lorg/appplay/lib/AppPlayUpdateLayout;D)V

    invoke-virtual {v0, v1}, Lorg/appplay/lib/AppPlayBaseActivity;->runOnUiThread(Ljava/lang/Runnable;)V

    .line 250
    return-void
.end method

.method private _ShowChecking()V
    .locals 2

    .prologue
    .line 201
    iget-object v0, p0, Lorg/appplay/lib/AppPlayUpdateLayout;->mTheActivity:Lorg/appplay/lib/AppPlayBaseActivity;

    new-instance v1, Lorg/appplay/lib/AppPlayUpdateLayout$3;

    invoke-direct {v1, p0}, Lorg/appplay/lib/AppPlayUpdateLayout$3;-><init>(Lorg/appplay/lib/AppPlayUpdateLayout;)V

    invoke-virtual {v0, v1}, Lorg/appplay/lib/AppPlayBaseActivity;->runOnUiThread(Ljava/lang/Runnable;)V

    .line 210
    return-void
.end method

.method private _ShowUpdating()V
    .locals 2

    .prologue
    .line 214
    iget-object v0, p0, Lorg/appplay/lib/AppPlayUpdateLayout;->mTheActivity:Lorg/appplay/lib/AppPlayBaseActivity;

    new-instance v1, Lorg/appplay/lib/AppPlayUpdateLayout$4;

    invoke-direct {v1, p0}, Lorg/appplay/lib/AppPlayUpdateLayout$4;-><init>(Lorg/appplay/lib/AppPlayUpdateLayout;)V

    invoke-virtual {v0, v1}, Lorg/appplay/lib/AppPlayBaseActivity;->runOnUiThread(Ljava/lang/Runnable;)V

    .line 224
    return-void
.end method

.method static synthetic access$0(Lorg/appplay/lib/AppPlayUpdateLayout;)V
    .locals 0

    .prologue
    .line 199
    invoke-direct {p0}, Lorg/appplay/lib/AppPlayUpdateLayout;->_ShowChecking()V

    return-void
.end method

.method static synthetic access$1(Lorg/appplay/lib/AppPlayUpdateLayout;)V
    .locals 0

    .prologue
    .line 212
    invoke-direct {p0}, Lorg/appplay/lib/AppPlayUpdateLayout;->_ShowUpdating()V

    return-void
.end method

.method static synthetic access$2(Lorg/appplay/lib/AppPlayUpdateLayout;D)V
    .locals 1

    .prologue
    .line 239
    invoke-direct {p0, p1, p2}, Lorg/appplay/lib/AppPlayUpdateLayout;->_Process(D)V

    return-void
.end method

.method static synthetic access$3(Lorg/appplay/lib/AppPlayUpdateLayout;)V
    .locals 0

    .prologue
    .line 226
    invoke-direct {p0}, Lorg/appplay/lib/AppPlayUpdateLayout;->_Hide()V

    return-void
.end method

.method static synthetic access$4(Lorg/appplay/lib/AppPlayUpdateLayout;)Lorg/appplay/lib/AppPlayBaseActivity;
    .locals 1

    .prologue
    .line 38
    iget-object v0, p0, Lorg/appplay/lib/AppPlayUpdateLayout;->mTheActivity:Lorg/appplay/lib/AppPlayBaseActivity;

    return-object v0
.end method

.method static synthetic access$5(Lorg/appplay/lib/AppPlayUpdateLayout;)Landroid/widget/TextView;
    .locals 1

    .prologue
    .line 41
    iget-object v0, p0, Lorg/appplay/lib/AppPlayUpdateLayout;->mTitle:Landroid/widget/TextView;

    return-object v0
.end method

.method static synthetic access$6(Lorg/appplay/lib/AppPlayUpdateLayout;)Landroid/widget/ProgressBar;
    .locals 1

    .prologue
    .line 42
    iget-object v0, p0, Lorg/appplay/lib/AppPlayUpdateLayout;->mProgress:Landroid/widget/ProgressBar;

    return-object v0
.end method


# virtual methods
.method public CheckVersion()V
    .locals 8

    .prologue
    .line 83
    iget-object v5, p0, Lorg/appplay/lib/AppPlayUpdateLayout;->mTheActivity:Lorg/appplay/lib/AppPlayBaseActivity;

    invoke-static {v5}, Lorg/appplay/lib/AppPlayNetwork;->IsNetConnected(Landroid/content/Context;)Z

    move-result v5

    if-nez v5, :cond_0

    .line 85
    iget-object v5, p0, Lorg/appplay/lib/AppPlayUpdateLayout;->mTheActivity:Lorg/appplay/lib/AppPlayBaseActivity;

    invoke-virtual {v5}, Lorg/appplay/lib/AppPlayBaseActivity;->Show_NoNetDlg()V

    .line 88
    :cond_0
    new-instance v1, Landroid/os/Message;

    invoke-direct {v1}, Landroid/os/Message;-><init>()V

    .line 89
    .local v1, "msg":Landroid/os/Message;
    const/4 v5, 0x1

    iput v5, v1, Landroid/os/Message;->what:I

    .line 90
    iget-object v5, p0, Lorg/appplay/lib/AppPlayUpdateLayout;->mHandler:Landroid/os/Handler;

    invoke-virtual {v5, v1}, Landroid/os/Handler;->dispatchMessage(Landroid/os/Message;)V

    .line 92
    new-instance v4, Lorg/appplay/lib/AppPlayVersion;

    invoke-direct {v4}, Lorg/appplay/lib/AppPlayVersion;-><init>()V

    .line 93
    .local v4, "version":Lorg/appplay/lib/AppPlayVersion;
    invoke-virtual {v4}, Lorg/appplay/lib/AppPlayVersion;->LoadUpdateVersionXML()Z

    move-result v0

    .line 95
    .local v0, "loadRet":Z
    if-nez v0, :cond_1

    .line 97
    iget-object v5, p0, Lorg/appplay/lib/AppPlayUpdateLayout;->mTheActivity:Lorg/appplay/lib/AppPlayBaseActivity;

    invoke-virtual {v5}, Lorg/appplay/lib/AppPlayBaseActivity;->Show_ConnectResServerFailedDlg()V

    .line 100
    :cond_1
    invoke-virtual {v4}, Lorg/appplay/lib/AppPlayVersion;->IsAPKNeedUpdate()Z

    move-result v5

    if-nez v5, :cond_5

    .line 103
    invoke-virtual {v4}, Lorg/appplay/lib/AppPlayVersion;->IsLibSONeedUpdate()Z

    move-result v5

    if-nez v5, :cond_2

    invoke-virtual {v4}, Lorg/appplay/lib/AppPlayVersion;->IsResNeedUpdate()Z

    move-result v5

    if-eqz v5, :cond_3

    .line 105
    :cond_2
    iget-object v5, p0, Lorg/appplay/lib/AppPlayUpdateLayout;->mTheActivity:Lorg/appplay/lib/AppPlayBaseActivity;

    invoke-static {v5}, Lorg/appplay/lib/AppPlayNetwork;->IsWifiConnected(Landroid/content/Context;)Z

    move-result v5

    if-nez v5, :cond_3

    .line 107
    iget-object v5, p0, Lorg/appplay/lib/AppPlayUpdateLayout;->mTheActivity:Lorg/appplay/lib/AppPlayBaseActivity;

    invoke-virtual {v5}, Lorg/appplay/lib/AppPlayBaseActivity;->Show_NoWifiDialog()V

    .line 111
    :cond_3
    invoke-virtual {v4}, Lorg/appplay/lib/AppPlayVersion;->IsLibSONeedUpdate()Z

    move-result v5

    if-eqz v5, :cond_4

    .line 113
    new-instance v2, Lorg/appplay/lib/AppPlayUpdateLayout$2;

    invoke-direct {v2, p0}, Lorg/appplay/lib/AppPlayUpdateLayout$2;-><init>(Lorg/appplay/lib/AppPlayUpdateLayout;)V

    .line 185
    .local v2, "task":Ljava/util/TimerTask;
    new-instance v3, Ljava/util/Timer;

    invoke-direct {v3}, Ljava/util/Timer;-><init>()V

    .line 186
    .local v3, "timer":Ljava/util/Timer;
    const-wide/16 v6, 0x64

    invoke-virtual {v3, v2, v6, v7}, Ljava/util/Timer;->schedule(Ljava/util/TimerTask;J)V

    .line 197
    .end local v2    # "task":Ljava/util/TimerTask;
    .end local v3    # "timer":Ljava/util/Timer;
    :goto_0
    return-void

    .line 190
    :cond_4
    sget-object v5, Lorg/appplay/lib/AppPlayBaseActivity;->sTheActivity:Lorg/appplay/lib/AppPlayBaseActivity;

    invoke-virtual {v5}, Lorg/appplay/lib/AppPlayBaseActivity;->Show_GLView()V

    goto :goto_0

    .line 195
    :cond_5
    iget-object v5, p0, Lorg/appplay/lib/AppPlayUpdateLayout;->mTheActivity:Lorg/appplay/lib/AppPlayBaseActivity;

    invoke-virtual {v5}, Lorg/appplay/lib/AppPlayBaseActivity;->Show_HasNewAPKDlg()V

    goto :goto_0
.end method
