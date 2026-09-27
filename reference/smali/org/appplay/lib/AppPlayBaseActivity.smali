.class public Lorg/appplay/lib/AppPlayBaseActivity;
.super Landroid/app/Activity;
.source "AppPlayBaseActivity.java"


# static fields
.field private static msBrightness:F

.field private static msHandler:Landroid/os/Handler;

.field private static msPackageDataDir:Ljava/lang/String;

.field private static msPackageName:Ljava/lang/String;

.field private static msPkgSourcePath:Ljava/lang/String;

.field private static msUniqueDeviceID:Ljava/lang/String;

.field public static sLibSO_Dir:Ljava/lang/String;

.field public static sLibSO_Filename:Ljava/lang/String;

.field private static sLibSO_Name:Ljava/lang/String;

.field public static sTheActivity:Lorg/appplay/lib/AppPlayBaseActivity;

.field public static sVersion_Dir:Ljava/lang/String;

.field public static sVersion_Filename:Ljava/lang/String;

.field public static sVersion_Filename_Temp:Ljava/lang/String;


# instance fields
.field public TheGLView:Lorg/appplay/lib/AppPlayGLView;

.field private mIsAppForeground:Z

.field public mUpdateView:Lorg/appplay/lib/AppPlayUpdateLayout;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .prologue
    .line 46
    const-string v0, ""

    sput-object v0, Lorg/appplay/lib/AppPlayBaseActivity;->sLibSO_Filename:Ljava/lang/String;

    .line 47
    const-string v0, ""

    sput-object v0, Lorg/appplay/lib/AppPlayBaseActivity;->sLibSO_Dir:Ljava/lang/String;

    .line 48
    const-string v0, "AppPlayJNI"

    sput-object v0, Lorg/appplay/lib/AppPlayBaseActivity;->sLibSO_Name:Ljava/lang/String;

    .line 51
    const-string v0, ""

    sput-object v0, Lorg/appplay/lib/AppPlayBaseActivity;->sVersion_Dir:Ljava/lang/String;

    .line 52
    const-string v0, ""

    sput-object v0, Lorg/appplay/lib/AppPlayBaseActivity;->sVersion_Filename:Ljava/lang/String;

    .line 53
    const-string v0, ""

    sput-object v0, Lorg/appplay/lib/AppPlayBaseActivity;->sVersion_Filename_Temp:Ljava/lang/String;

    .line 64
    const/high16 v0, 0x3f800000    # 1.0f

    sput v0, Lorg/appplay/lib/AppPlayBaseActivity;->msBrightness:F

    .line 66
    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .prologue
    const/4 v0, 0x0

    .line 40
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 56
    iput-object v0, p0, Lorg/appplay/lib/AppPlayBaseActivity;->mUpdateView:Lorg/appplay/lib/AppPlayUpdateLayout;

    .line 57
    iput-object v0, p0, Lorg/appplay/lib/AppPlayBaseActivity;->TheGLView:Lorg/appplay/lib/AppPlayGLView;

    .line 63
    const/4 v0, 0x1

    iput-boolean v0, p0, Lorg/appplay/lib/AppPlayBaseActivity;->mIsAppForeground:Z

    .line 40
    return-void
.end method

.method public static ASynPay(Ljava/lang/String;Ljava/lang/String;FFILjava/lang/String;)V
    .locals 7
    .param p0, "productID"    # Ljava/lang/String;
    .param p1, "productName"    # Ljava/lang/String;
    .param p2, "productPrice"    # F
    .param p3, "productOrginalPrice"    # F
    .param p4, "count"    # I
    .param p5, "payDescription"    # Ljava/lang/String;

    .prologue
    .line 678
    sget-object v0, Lorg/appplay/lib/AppPlayBaseActivity;->sTheActivity:Lorg/appplay/lib/AppPlayBaseActivity;

    move-object v1, p0

    move-object v2, p1

    move v3, p2

    move v4, p3

    move v5, p4

    move-object v6, p5

    invoke-virtual/range {v0 .. v6}, Lorg/appplay/lib/AppPlayBaseActivity;->_ASynPay(Ljava/lang/String;Ljava/lang/String;FFILjava/lang/String;)V

    .line 680
    return-void
.end method

.method public static GetCurLocation()Landroid/location/Location;
    .locals 4

    .prologue
    .line 569
    sget-object v2, Lorg/appplay/lib/AppPlayBaseActivity;->sTheActivity:Lorg/appplay/lib/AppPlayBaseActivity;

    const-string v3, "location"

    invoke-virtual {v2, v3}, Lorg/appplay/lib/AppPlayBaseActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/location/LocationManager;

    .line 570
    .local v1, "locmgr":Landroid/location/LocationManager;
    const-string v2, "gps"

    invoke-virtual {v1, v2}, Landroid/location/LocationManager;->getLastKnownLocation(Ljava/lang/String;)Landroid/location/Location;

    move-result-object v0

    .line 571
    .local v0, "loc":Landroid/location/Location;
    if-nez v0, :cond_0

    .line 573
    const-string v2, "network"

    invoke-virtual {v1, v2}, Landroid/location/LocationManager;->getLastKnownLocation(Ljava/lang/String;)Landroid/location/Location;

    move-result-object v0

    .line 576
    :cond_0
    return-object v0
.end method

.method public static GetDeviceUniqueID()Ljava/lang/String;
    .locals 1

    .prologue
    .line 610
    sget-object v0, Lorg/appplay/lib/AppPlayBaseActivity;->msUniqueDeviceID:Ljava/lang/String;

    return-object v0
.end method

.method public static GetLatitude()D
    .locals 4

    .prologue
    .line 587
    invoke-static {}, Lorg/appplay/lib/AppPlayBaseActivity;->GetCurLocation()Landroid/location/Location;

    move-result-object v0

    .line 588
    .local v0, "loc":Landroid/location/Location;
    if-nez v0, :cond_0

    const-wide/16 v2, 0x0

    :goto_0
    return-wide v2

    :cond_0
    invoke-virtual {v0}, Landroid/location/Location;->getLatitude()D

    move-result-wide v2

    goto :goto_0
.end method

.method public static GetLongitude()D
    .locals 4

    .prologue
    .line 581
    invoke-static {}, Lorg/appplay/lib/AppPlayBaseActivity;->GetCurLocation()Landroid/location/Location;

    move-result-object v0

    .line 582
    .local v0, "loc":Landroid/location/Location;
    if-nez v0, :cond_0

    const-wide/16 v2, 0x0

    :goto_0
    return-wide v2

    :cond_0
    invoke-virtual {v0}, Landroid/location/Location;->getLongitude()D

    move-result-wide v2

    goto :goto_0
.end method

.method public static GetNetworkState()I
    .locals 6

    .prologue
    .line 593
    sget-object v4, Lorg/appplay/lib/AppPlayBaseActivity;->sTheActivity:Lorg/appplay/lib/AppPlayBaseActivity;

    const-string v5, "connectivity"

    invoke-virtual {v4, v5}, Lorg/appplay/lib/AppPlayBaseActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/net/ConnectivityManager;

    .line 595
    .local v0, "conMan":Landroid/net/ConnectivityManager;
    const/4 v2, 0x0

    .line 598
    .local v2, "retval":I
    const/4 v4, 0x1

    invoke-virtual {v0, v4}, Landroid/net/ConnectivityManager;->getNetworkInfo(I)Landroid/net/NetworkInfo;

    move-result-object v4

    invoke-virtual {v4}, Landroid/net/NetworkInfo;->getState()Landroid/net/NetworkInfo$State;

    move-result-object v3

    .line 599
    .local v3, "wifi":Landroid/net/NetworkInfo$State;
    sget-object v4, Landroid/net/NetworkInfo$State;->CONNECTED:Landroid/net/NetworkInfo$State;

    if-ne v3, v4, :cond_0

    add-int/lit8 v2, v2, 0x1

    .line 602
    :cond_0
    const/4 v4, 0x0

    invoke-virtual {v0, v4}, Landroid/net/ConnectivityManager;->getNetworkInfo(I)Landroid/net/NetworkInfo;

    move-result-object v4

    invoke-virtual {v4}, Landroid/net/NetworkInfo;->getState()Landroid/net/NetworkInfo$State;

    move-result-object v1

    .line 603
    .local v1, "mobile":Landroid/net/NetworkInfo$State;
    sget-object v4, Landroid/net/NetworkInfo$State;->CONNECTED:Landroid/net/NetworkInfo$State;

    if-ne v1, v4, :cond_1

    add-int/lit8 v2, v2, 0x2

    .line 605
    :cond_1
    return v2
.end method

.method public static GetPackageName()Ljava/lang/String;
    .locals 1

    .prologue
    .line 564
    sget-object v0, Lorg/appplay/lib/AppPlayBaseActivity;->msPackageName:Ljava/lang/String;

    return-object v0
.end method

.method public static SetScreenBright(F)V
    .locals 2
    .param p0, "bright"    # F

    .prologue
    .line 556
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 557
    .local v0, "msg":Landroid/os/Message;
    const/4 v1, 0x1

    iput v1, v0, Landroid/os/Message;->what:I

    .line 558
    const/high16 v1, 0x42c80000    # 100.0f

    mul-float/2addr v1, p0

    float-to-int v1, v1

    iput v1, v0, Landroid/os/Message;->arg1:I

    .line 559
    sget-object v1, Lorg/appplay/lib/AppPlayBaseActivity;->msHandler:Landroid/os/Handler;

    invoke-virtual {v1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 560
    return-void
.end method

.method public static SynPay(Ljava/lang/String;Ljava/lang/String;FFILjava/lang/String;)V
    .locals 7
    .param p0, "productID"    # Ljava/lang/String;
    .param p1, "productName"    # Ljava/lang/String;
    .param p2, "productPrice"    # F
    .param p3, "productOrginalPrice"    # F
    .param p4, "count"    # I
    .param p5, "payDescription"    # Ljava/lang/String;

    .prologue
    .line 653
    sget-object v0, Lorg/appplay/lib/AppPlayBaseActivity;->sTheActivity:Lorg/appplay/lib/AppPlayBaseActivity;

    move-object v1, p0

    move-object v2, p1

    move v3, p2

    move v4, p3

    move v5, p4

    move-object v6, p5

    invoke-virtual/range {v0 .. v6}, Lorg/appplay/lib/AppPlayBaseActivity;->_SynPay(Ljava/lang/String;Ljava/lang/String;FFILjava/lang/String;)V

    .line 655
    return-void
.end method

.method public static ThirdPlatformLogin()V
    .locals 1

    .prologue
    .line 617
    sget-object v0, Lorg/appplay/lib/AppPlayBaseActivity;->sTheActivity:Lorg/appplay/lib/AppPlayBaseActivity;

    invoke-virtual {v0}, Lorg/appplay/lib/AppPlayBaseActivity;->_ThirdPlatformLogin1()V

    .line 618
    return-void
.end method

.method public static ThirdPlatformLogout()V
    .locals 1

    .prologue
    .line 634
    sget-object v0, Lorg/appplay/lib/AppPlayBaseActivity;->sTheActivity:Lorg/appplay/lib/AppPlayBaseActivity;

    invoke-virtual {v0}, Lorg/appplay/lib/AppPlayBaseActivity;->_Show_LogoutExitDlg()V

    .line 635
    return-void
.end method

.method private _IsAppOnForeground()Z
    .locals 8

    .prologue
    const/4 v4, 0x0

    .line 268
    invoke-virtual {p0}, Lorg/appplay/lib/AppPlayBaseActivity;->getApplicationContext()Landroid/content/Context;

    move-result-object v5

    .line 269
    const-string v6, "activity"

    invoke-virtual {v5, v6}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    .line 268
    check-cast v0, Landroid/app/ActivityManager;

    .line 270
    .local v0, "activityManager":Landroid/app/ActivityManager;
    invoke-virtual {p0}, Lorg/appplay/lib/AppPlayBaseActivity;->getApplicationContext()Landroid/content/Context;

    move-result-object v5

    invoke-virtual {v5}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v3

    .line 272
    .local v3, "packageName":Ljava/lang/String;
    invoke-virtual {v0}, Landroid/app/ActivityManager;->getRunningAppProcesses()Ljava/util/List;

    move-result-object v2

    .line 273
    .local v2, "appProcesses":Ljava/util/List;, "Ljava/util/List<Landroid/app/ActivityManager$RunningAppProcessInfo;>;"
    if-nez v2, :cond_1

    .line 283
    :cond_0
    :goto_0
    return v4

    .line 275
    :cond_1
    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v5

    :cond_2
    invoke-interface {v5}, Ljava/util/Iterator;->hasNext()Z

    move-result v6

    if-eqz v6, :cond_0

    invoke-interface {v5}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/app/ActivityManager$RunningAppProcessInfo;

    .line 277
    .local v1, "appProcess":Landroid/app/ActivityManager$RunningAppProcessInfo;
    iget-object v6, v1, Landroid/app/ActivityManager$RunningAppProcessInfo;->processName:Ljava/lang/String;

    invoke-virtual {v6, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_2

    .line 278
    iget v6, v1, Landroid/app/ActivityManager$RunningAppProcessInfo;->importance:I

    const/16 v7, 0x64

    if-ne v6, v7, :cond_2

    .line 280
    const/4 v4, 0x1

    goto :goto_0
.end method

.method private _IsOpenGLES20Valied()Z
    .locals 4

    .prologue
    .line 224
    const-string v2, "activity"

    invoke-virtual {p0, v2}, Lorg/appplay/lib/AppPlayBaseActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/ActivityManager;

    .line 225
    .local v0, "am":Landroid/app/ActivityManager;
    invoke-virtual {v0}, Landroid/app/ActivityManager;->getDeviceConfigurationInfo()Landroid/content/pm/ConfigurationInfo;

    move-result-object v1

    .line 227
    .local v1, "info":Landroid/content/pm/ConfigurationInfo;
    iget v2, v1, Landroid/content/pm/ConfigurationInfo;->reqGlEsVersion:I

    const/high16 v3, 0x20000

    if-lt v2, v3, :cond_0

    const/4 v2, 0x1

    :goto_0
    return v2

    :cond_0
    const/4 v2, 0x0

    goto :goto_0
.end method

.method private _SetPackageName()V
    .locals 5

    .prologue
    .line 232
    invoke-virtual {p0}, Lorg/appplay/lib/AppPlayBaseActivity;->getApplication()Landroid/app/Application;

    move-result-object v3

    invoke-virtual {v3}, Landroid/app/Application;->getPackageName()Ljava/lang/String;

    move-result-object v3

    sput-object v3, Lorg/appplay/lib/AppPlayBaseActivity;->msPackageName:Ljava/lang/String;

    .line 234
    const/4 v0, 0x0

    .line 235
    .local v0, "appInfo":Landroid/content/pm/ApplicationInfo;
    invoke-virtual {p0}, Lorg/appplay/lib/AppPlayBaseActivity;->getApplication()Landroid/app/Application;

    move-result-object v3

    invoke-virtual {v3}, Landroid/app/Application;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v2

    .line 238
    .local v2, "packMgmr":Landroid/content/pm/PackageManager;
    :try_start_0
    sget-object v3, Lorg/appplay/lib/AppPlayBaseActivity;->msPackageName:Ljava/lang/String;

    const/4 v4, 0x0

    invoke-virtual {v2, v3, v4}, Landroid/content/pm/PackageManager;->getApplicationInfo(Ljava/lang/String;I)Landroid/content/pm/ApplicationInfo;
    :try_end_0
    .catch Landroid/content/pm/PackageManager$NameNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    move-result-object v0

    .line 244
    iget-object v3, v0, Landroid/content/pm/ApplicationInfo;->sourceDir:Ljava/lang/String;

    sput-object v3, Lorg/appplay/lib/AppPlayBaseActivity;->msPkgSourcePath:Ljava/lang/String;

    .line 245
    iget-object v3, v0, Landroid/content/pm/ApplicationInfo;->dataDir:Ljava/lang/String;

    sput-object v3, Lorg/appplay/lib/AppPlayBaseActivity;->msPackageDataDir:Ljava/lang/String;

    .line 264
    return-void

    .line 239
    :catch_0
    move-exception v1

    .line 241
    .local v1, "e":Landroid/content/pm/PackageManager$NameNotFoundException;
    invoke-virtual {v1}, Landroid/content/pm/PackageManager$NameNotFoundException;->printStackTrace()V

    .line 242
    new-instance v3, Ljava/lang/RuntimeException;

    const-string v4, "Unable to locate assets, aborting..."

    invoke-direct {v3, v4}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw v3
.end method

.method static synthetic access$0()Ljava/lang/String;
    .locals 1

    .prologue
    .line 48
    sget-object v0, Lorg/appplay/lib/AppPlayBaseActivity;->sLibSO_Name:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$1(Lorg/appplay/lib/AppPlayBaseActivity;)Z
    .locals 1

    .prologue
    .line 222
    invoke-direct {p0}, Lorg/appplay/lib/AppPlayBaseActivity;->_IsOpenGLES20Valied()Z

    move-result v0

    return v0
.end method

.method static synthetic access$2()Ljava/lang/String;
    .locals 1

    .prologue
    .line 60
    sget-object v0, Lorg/appplay/lib/AppPlayBaseActivity;->msPkgSourcePath:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$3()Ljava/lang/String;
    .locals 1

    .prologue
    .line 61
    sget-object v0, Lorg/appplay/lib/AppPlayBaseActivity;->msPackageDataDir:Ljava/lang/String;

    return-object v0
.end method


# virtual methods
.method public HideNavigationBar()V
    .locals 3

    .prologue
    .line 288
    const/16 v0, 0xf06

    .line 295
    .local v0, "uiOptions":I
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x13

    if-lt v1, v2, :cond_0

    .line 297
    or-int/lit16 v0, v0, 0x1000

    .line 303
    :goto_0
    invoke-virtual {p0}, Lorg/appplay/lib/AppPlayBaseActivity;->getWindow()Landroid/view/Window;

    move-result-object v1

    invoke-virtual {v1}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/view/View;->setSystemUiVisibility(I)V

    .line 304
    return-void

    .line 299
    :cond_0
    or-int/lit8 v0, v0, 0x1

    goto :goto_0
.end method

.method public MyExit()V
    .locals 1

    .prologue
    .line 527
    new-instance v0, Lorg/appplay/lib/AppPlayBaseActivity$9;

    invoke-direct {v0, p0}, Lorg/appplay/lib/AppPlayBaseActivity$9;-><init>(Lorg/appplay/lib/AppPlayBaseActivity;)V

    invoke-virtual {p0, v0}, Lorg/appplay/lib/AppPlayBaseActivity;->runOnUiThread(Ljava/lang/Runnable;)V

    .line 535
    return-void
.end method

.method public ShowNavigationBar()V
    .locals 2

    .prologue
    .line 308
    const/16 v0, 0x700

    .line 312
    .local v0, "uiOptions":I
    invoke-virtual {p0}, Lorg/appplay/lib/AppPlayBaseActivity;->getWindow()Landroid/view/Window;

    move-result-object v1

    invoke-virtual {v1}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/view/View;->setSystemUiVisibility(I)V

    .line 313
    return-void
.end method

.method public Show_ConnectResServerFailedDlg()V
    .locals 4

    .prologue
    .line 498
    new-instance v1, Landroid/app/AlertDialog$Builder;

    invoke-direct {v1, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const-string v2, "\u6ce8\u610f"

    invoke-virtual {v1, v2}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    .line 499
    const-string v2, "\u8fde\u63a5\u670d\u52a1\u5668\u5931\u8d25\uff01"

    invoke-virtual {v1, v2}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    .line 500
    const-string v2, "\u786e\u5b9a"

    new-instance v3, Lorg/appplay/lib/AppPlayBaseActivity$7;

    invoke-direct {v3, p0}, Lorg/appplay/lib/AppPlayBaseActivity$7;-><init>(Lorg/appplay/lib/AppPlayBaseActivity;)V

    invoke-virtual {v1, v2, v3}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    .line 506
    invoke-virtual {v1}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 507
    .local v0, "alertDialog":Landroid/app/Dialog;
    invoke-virtual {v0}, Landroid/app/Dialog;->show()V

    .line 508
    return-void
.end method

.method public Show_GLView()V
    .locals 1

    .prologue
    .line 338
    new-instance v0, Lorg/appplay/lib/AppPlayBaseActivity$3;

    invoke-direct {v0, p0}, Lorg/appplay/lib/AppPlayBaseActivity$3;-><init>(Lorg/appplay/lib/AppPlayBaseActivity;)V

    invoke-virtual {p0, v0}, Lorg/appplay/lib/AppPlayBaseActivity;->runOnUiThread(Ljava/lang/Runnable;)V

    .line 457
    return-void
.end method

.method public Show_HasNewAPKDlg()V
    .locals 4

    .prologue
    .line 512
    new-instance v1, Landroid/app/AlertDialog$Builder;

    invoke-direct {v1, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const-string v2, "\u6ce8\u610f"

    invoke-virtual {v1, v2}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    .line 513
    const-string v2, "\u5b89\u88c5\u5305\u5df2\u6709\u65b0\u7248\u672c,\u8bf7\u4e0b\u8f7d\u5b89\u88c5."

    invoke-virtual {v1, v2}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    .line 514
    const-string v2, "\u786e\u5b9a"

    new-instance v3, Lorg/appplay/lib/AppPlayBaseActivity$8;

    invoke-direct {v3, p0}, Lorg/appplay/lib/AppPlayBaseActivity$8;-><init>(Lorg/appplay/lib/AppPlayBaseActivity;)V

    invoke-virtual {v1, v2, v3}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    .line 521
    invoke-virtual {v1}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 522
    .local v0, "alertDialog":Landroid/app/Dialog;
    invoke-virtual {v0}, Landroid/app/Dialog;->show()V

    .line 523
    return-void
.end method

.method public Show_NoNetDlg()V
    .locals 4

    .prologue
    .line 461
    new-instance v1, Landroid/app/AlertDialog$Builder;

    invoke-direct {v1, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const-string v2, "\u6ce8\u610f"

    invoke-virtual {v1, v2}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    .line 462
    const-string v2, "\u60a8\u7684\u7f51\u7edc\u5df2\u7ecf\u65ad\u5f00\uff0c\u8bf7\u8fde\u63a5\uff01"

    invoke-virtual {v1, v2}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    .line 463
    const-string v2, "\u786e\u5b9a"

    new-instance v3, Lorg/appplay/lib/AppPlayBaseActivity$4;

    invoke-direct {v3, p0}, Lorg/appplay/lib/AppPlayBaseActivity$4;-><init>(Lorg/appplay/lib/AppPlayBaseActivity;)V

    invoke-virtual {v1, v2, v3}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    .line 469
    invoke-virtual {v1}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 470
    .local v0, "alertDialog":Landroid/app/Dialog;
    invoke-virtual {v0}, Landroid/app/Dialog;->show()V

    .line 471
    return-void
.end method

.method public Show_NoWifiDialog()V
    .locals 4

    .prologue
    .line 475
    new-instance v1, Landroid/app/AlertDialog$Builder;

    invoke-direct {v1, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const-string v2, "\u6ce8\u610f"

    invoke-virtual {v1, v2}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    .line 476
    const-string v2, "\u6e38\u620f\u9700\u8981\u66f4\u65b0\uff0c\u60a8\u5904\u5728\u975ewifi\u7f51\u7edc\u73af\u5883\u4e0b\uff0c\u786e\u5b9a\u8fdb\u884c\u66f4\u65b0\uff1f"

    invoke-virtual {v1, v2}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    .line 477
    const/high16 v2, 0x7f020000

    invoke-virtual {v1, v2}, Landroid/app/AlertDialog$Builder;->setIcon(I)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    .line 478
    const-string v2, "\u786e\u5b9a"

    new-instance v3, Lorg/appplay/lib/AppPlayBaseActivity$5;

    invoke-direct {v3, p0}, Lorg/appplay/lib/AppPlayBaseActivity$5;-><init>(Lorg/appplay/lib/AppPlayBaseActivity;)V

    invoke-virtual {v1, v2, v3}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    .line 485
    const-string v2, "\u53d6\u6d88"

    new-instance v3, Lorg/appplay/lib/AppPlayBaseActivity$6;

    invoke-direct {v3, p0}, Lorg/appplay/lib/AppPlayBaseActivity$6;-><init>(Lorg/appplay/lib/AppPlayBaseActivity;)V

    invoke-virtual {v1, v2, v3}, Landroid/app/AlertDialog$Builder;->setNegativeButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    .line 492
    invoke-virtual {v1}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 493
    .local v0, "alertDialog":Landroid/app/Dialog;
    invoke-virtual {v0}, Landroid/app/Dialog;->show()V

    .line 494
    return-void
.end method

.method public Show_UpdateView()V
    .locals 1

    .prologue
    .line 319
    new-instance v0, Lorg/appplay/lib/AppPlayBaseActivity$2;

    invoke-direct {v0, p0}, Lorg/appplay/lib/AppPlayBaseActivity$2;-><init>(Lorg/appplay/lib/AppPlayBaseActivity;)V

    invoke-virtual {p0, v0}, Lorg/appplay/lib/AppPlayBaseActivity;->runOnUiThread(Ljava/lang/Runnable;)V

    .line 332
    return-void
.end method

.method public _ASynPay(Ljava/lang/String;Ljava/lang/String;FFILjava/lang/String;)V
    .locals 8
    .param p1, "productID"    # Ljava/lang/String;
    .param p2, "productName"    # Ljava/lang/String;
    .param p3, "productPrice"    # F
    .param p4, "productOrginalPrice"    # F
    .param p5, "count"    # I
    .param p6, "payDescription"    # Ljava/lang/String;

    .prologue
    .line 686
    new-instance v0, Lorg/appplay/lib/AppPlayBaseActivity$13;

    move-object v1, p0

    move-object v2, p1

    move-object v3, p2

    move v4, p3

    move v5, p4

    move v6, p5

    move-object v7, p6

    invoke-direct/range {v0 .. v7}, Lorg/appplay/lib/AppPlayBaseActivity$13;-><init>(Lorg/appplay/lib/AppPlayBaseActivity;Ljava/lang/String;Ljava/lang/String;FFILjava/lang/String;)V

    invoke-virtual {p0, v0}, Lorg/appplay/lib/AppPlayBaseActivity;->runOnUiThread(Ljava/lang/Runnable;)V

    .line 696
    return-void
.end method

.method public _Show_LogoutExitDlg()V
    .locals 1

    .prologue
    .line 639
    new-instance v0, Lorg/appplay/lib/AppPlayBaseActivity$11;

    invoke-direct {v0, p0}, Lorg/appplay/lib/AppPlayBaseActivity$11;-><init>(Lorg/appplay/lib/AppPlayBaseActivity;)V

    invoke-virtual {p0, v0}, Lorg/appplay/lib/AppPlayBaseActivity;->runOnUiThread(Ljava/lang/Runnable;)V

    .line 647
    return-void
.end method

.method public _SynPay(Ljava/lang/String;Ljava/lang/String;FFILjava/lang/String;)V
    .locals 8
    .param p1, "productID"    # Ljava/lang/String;
    .param p2, "productName"    # Ljava/lang/String;
    .param p3, "productPrice"    # F
    .param p4, "productOrginalPrice"    # F
    .param p5, "count"    # I
    .param p6, "payDescription"    # Ljava/lang/String;

    .prologue
    .line 661
    new-instance v0, Lorg/appplay/lib/AppPlayBaseActivity$12;

    move-object v1, p0

    move-object v2, p1

    move-object v3, p2

    move v4, p3

    move v5, p4

    move v6, p5

    move-object v7, p6

    invoke-direct/range {v0 .. v7}, Lorg/appplay/lib/AppPlayBaseActivity$12;-><init>(Lorg/appplay/lib/AppPlayBaseActivity;Ljava/lang/String;Ljava/lang/String;FFILjava/lang/String;)V

    invoke-virtual {p0, v0}, Lorg/appplay/lib/AppPlayBaseActivity;->runOnUiThread(Ljava/lang/Runnable;)V

    .line 671
    return-void
.end method

.method public _ThirdPlatformLogin1()V
    .locals 1

    .prologue
    .line 622
    new-instance v0, Lorg/appplay/lib/AppPlayBaseActivity$10;

    invoke-direct {v0, p0}, Lorg/appplay/lib/AppPlayBaseActivity$10;-><init>(Lorg/appplay/lib/AppPlayBaseActivity;)V

    invoke-virtual {p0, v0}, Lorg/appplay/lib/AppPlayBaseActivity;->runOnUiThread(Ljava/lang/Runnable;)V

    .line 630
    return-void
.end method

.method protected genDeviceUniqueID(Landroid/content/Context;)Ljava/lang/String;
    .locals 6
    .param p1, "ctx"    # Landroid/content/Context;

    .prologue
    .line 539
    const-string v4, "phone"

    invoke-virtual {p1, v4}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/telephony/TelephonyManager;

    .line 541
    .local v2, "tm":Landroid/telephony/TelephonyManager;
    invoke-virtual {v2}, Landroid/telephony/TelephonyManager;->getDeviceId()Ljava/lang/String;

    move-result-object v3

    .line 542
    .local v3, "tmDevice":Ljava/lang/String;
    invoke-virtual {p1}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v4

    const-string v5, "android_id"

    invoke-static {v4, v5}, Landroid/provider/Settings$Secure;->getString(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 543
    .local v0, "androidId":Ljava/lang/String;
    const/4 v1, 0x0

    .line 544
    .local v1, "serial":Ljava/lang/String;
    sget v4, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v5, 0x8

    if-le v4, v5, :cond_0

    sget-object v1, Landroid/os/Build;->SERIAL:Ljava/lang/String;

    .line 546
    :cond_0
    if-eqz v3, :cond_1

    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "01"

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 551
    :goto_0
    return-object v4

    .line 547
    :cond_1
    if-eqz v0, :cond_2

    const-string v4, "9774d56d682e549c"

    invoke-virtual {v4, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-nez v4, :cond_2

    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "02"

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    goto :goto_0

    .line 548
    :cond_2
    if-eqz v1, :cond_3

    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "03"

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    goto :goto_0

    .line 551
    :cond_3
    const/4 v4, 0x0

    goto :goto_0
.end method

.method public onBackPressed()V
    .locals 0

    .prologue
    .line 701
    invoke-static {}, Lorg/appplay/lib/AppPlayNatives;->nativeOnBackPressed()V

    .line 704
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 5
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .prologue
    .line 71
    sput-object p0, Lorg/appplay/lib/AppPlayBaseActivity;->sTheActivity:Lorg/appplay/lib/AppPlayBaseActivity;

    .line 73
    invoke-virtual {p0}, Lorg/appplay/lib/AppPlayBaseActivity;->HideNavigationBar()V

    .line 74
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 76
    invoke-direct {p0}, Lorg/appplay/lib/AppPlayBaseActivity;->_SetPackageName()V

    .line 77
    invoke-virtual {p0}, Lorg/appplay/lib/AppPlayBaseActivity;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {p0, v2}, Lorg/appplay/lib/AppPlayBaseActivity;->genDeviceUniqueID(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    sput-object v2, Lorg/appplay/lib/AppPlayBaseActivity;->msUniqueDeviceID:Ljava/lang/String;

    .line 79
    sget-object v2, Lorg/appplay/lib/AppPlayBaseActivity;->msPackageDataDir:Ljava/lang/String;

    sput-object v2, Lorg/appplay/lib/AppPlayBaseActivity;->sLibSO_Dir:Ljava/lang/String;

    .line 80
    new-instance v2, Ljava/lang/StringBuilder;

    sget-object v3, Lorg/appplay/lib/AppPlayBaseActivity;->msPackageDataDir:Ljava/lang/String;

    invoke-static {v3}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const-string v3, "/lib"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v2

    sget-object v3, Lorg/appplay/lib/AppPlayBaseActivity;->sLibSO_Name:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v2

    const-string v3, ".so"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    sput-object v2, Lorg/appplay/lib/AppPlayBaseActivity;->sLibSO_Filename:Ljava/lang/String;

    .line 81
    sget-object v2, Lorg/appplay/lib/AppPlayBaseActivity;->msPackageDataDir:Ljava/lang/String;

    sput-object v2, Lorg/appplay/lib/AppPlayBaseActivity;->sVersion_Dir:Ljava/lang/String;

    .line 83
    new-instance v2, Ljava/lang/StringBuilder;

    sget-object v3, Lorg/appplay/lib/AppPlayBaseActivity;->msPackageDataDir:Ljava/lang/String;

    invoke-static {v3}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const-string v3, "/version.xml"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    sput-object v2, Lorg/appplay/lib/AppPlayBaseActivity;->sVersion_Filename:Ljava/lang/String;

    .line 84
    new-instance v2, Ljava/lang/StringBuilder;

    sget-object v3, Lorg/appplay/lib/AppPlayBaseActivity;->msPackageDataDir:Ljava/lang/String;

    invoke-static {v3}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const-string v3, "/version_Temp.xml"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    sput-object v2, Lorg/appplay/lib/AppPlayBaseActivity;->sVersion_Filename_Temp:Ljava/lang/String;

    .line 86
    const-string v2, "appplay.lib"

    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "PackageInfo: "

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    sget-object v4, Lorg/appplay/lib/AppPlayBaseActivity;->msPackageName:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v3

    const-string v4, ","

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v3

    sget-object v4, Lorg/appplay/lib/AppPlayBaseActivity;->msPkgSourcePath:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v3

    const-string v4, ","

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v3

    sget-object v4, Lorg/appplay/lib/AppPlayBaseActivity;->msPackageDataDir:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 88
    invoke-virtual {p0}, Lorg/appplay/lib/AppPlayBaseActivity;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lorg/appplay/lib/AppPlayMetaData;->Initlize(Landroid/content/Context;)V

    .line 90
    new-instance v0, Lorg/appplay/lib/AppPlayBaseActivity$1;

    invoke-direct {v0, p0}, Lorg/appplay/lib/AppPlayBaseActivity$1;-><init>(Lorg/appplay/lib/AppPlayBaseActivity;)V

    .line 101
    .local v0, "handler":Landroid/os/Handler;
    sput-object v0, Lorg/appplay/lib/AppPlayBaseActivity;->msHandler:Landroid/os/Handler;

    .line 103
    invoke-virtual {p0}, Lorg/appplay/lib/AppPlayBaseActivity;->getWindow()Landroid/view/Window;

    move-result-object v2

    const/16 v3, 0x80

    invoke-virtual {v2, v3}, Landroid/view/Window;->addFlags(I)V

    .line 104
    invoke-virtual {p0}, Lorg/appplay/lib/AppPlayBaseActivity;->getWindow()Landroid/view/Window;

    move-result-object v2

    invoke-virtual {v2}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object v1

    .line 105
    .local v1, "lp":Landroid/view/WindowManager$LayoutParams;
    const/high16 v2, 0x3f800000    # 1.0f

    iput v2, v1, Landroid/view/WindowManager$LayoutParams;->screenBrightness:F

    .line 106
    invoke-virtual {p0}, Lorg/appplay/lib/AppPlayBaseActivity;->getWindow()Landroid/view/Window;

    move-result-object v2

    invoke-virtual {v2, v1}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V

    .line 108
    sget-boolean v2, Lorg/appplay/lib/AppPlayMetaData;->sIsNettable:Z

    if-eqz v2, :cond_0

    .line 109
    invoke-static {p0}, Lorg/appplay/platformsdk/PlatformSDKCreater;->Create(Landroid/app/Activity;)Lorg/appplay/platformsdk/PlatformSDK;

    move-result-object v2

    sput-object v2, Lorg/appplay/platformsdk/PlatformSDK;->sThePlatformSDK:Lorg/appplay/platformsdk/PlatformSDK;

    .line 113
    :goto_0
    const-string v2, "appplay.lib"

    const-string v3, "end - MiniWorldActivity::onCreate"

    invoke-static {v2, v3}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 114
    return-void

    .line 111
    :cond_0
    invoke-virtual {p0}, Lorg/appplay/lib/AppPlayBaseActivity;->Show_GLView()V

    goto :goto_0
.end method

.method public onDestroy()V
    .locals 2

    .prologue
    .line 190
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 192
    const-string v0, "appplay.lib"

    const-string v1, "AppPlayBaseActivity::onDestroy"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 194
    iget-object v0, p0, Lorg/appplay/lib/AppPlayBaseActivity;->TheGLView:Lorg/appplay/lib/AppPlayGLView;

    if-eqz v0, :cond_0

    .line 195
    iget-object v0, p0, Lorg/appplay/lib/AppPlayBaseActivity;->TheGLView:Lorg/appplay/lib/AppPlayGLView;

    invoke-virtual {v0}, Lorg/appplay/lib/AppPlayGLView;->Destory()V

    .line 197
    :cond_0
    const/4 v0, 0x0

    sput-object v0, Lorg/appplay/lib/AppPlayBaseActivity;->msHandler:Landroid/os/Handler;

    .line 199
    sget-object v0, Lorg/appplay/platformsdk/PlatformSDK;->sThePlatformSDK:Lorg/appplay/platformsdk/PlatformSDK;

    if-eqz v0, :cond_1

    .line 200
    sget-object v0, Lorg/appplay/platformsdk/PlatformSDK;->sThePlatformSDK:Lorg/appplay/platformsdk/PlatformSDK;

    invoke-virtual {v0}, Lorg/appplay/platformsdk/PlatformSDK;->Term()V

    .line 202
    :cond_1
    return-void
.end method

.method public onKeyDown(ILandroid/view/KeyEvent;)Z
    .locals 1
    .param p1, "keyCode"    # I
    .param p2, "event"    # Landroid/view/KeyEvent;

    .prologue
    .line 207
    const/4 v0, 0x4

    if-ne p1, v0, :cond_0

    .line 209
    sget-object v0, Lorg/appplay/platformsdk/PlatformSDK;->sThePlatformSDK:Lorg/appplay/platformsdk/PlatformSDK;

    if-eqz v0, :cond_0

    .line 211
    sget-object v0, Lorg/appplay/platformsdk/PlatformSDK;->sThePlatformSDK:Lorg/appplay/platformsdk/PlatformSDK;

    invoke-virtual {v0}, Lorg/appplay/platformsdk/PlatformSDK;->OnExist()V

    .line 213
    const/4 v0, 0x1

    .line 217
    :goto_0
    return v0

    :cond_0
    invoke-super {p0, p1, p2}, Landroid/app/Activity;->onKeyDown(ILandroid/view/KeyEvent;)Z

    move-result v0

    goto :goto_0
.end method

.method protected onPause()V
    .locals 2

    .prologue
    .line 157
    const-string v0, "appplay.lib"

    const-string v1, "AppPlayBaseActivity::onPause"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 159
    invoke-super {p0}, Landroid/app/Activity;->onPause()V

    .line 162
    iget-object v0, p0, Lorg/appplay/lib/AppPlayBaseActivity;->TheGLView:Lorg/appplay/lib/AppPlayGLView;

    if-eqz v0, :cond_0

    .line 163
    iget-object v0, p0, Lorg/appplay/lib/AppPlayBaseActivity;->TheGLView:Lorg/appplay/lib/AppPlayGLView;

    invoke-virtual {v0}, Lorg/appplay/lib/AppPlayGLView;->onPause()V

    .line 164
    :cond_0
    return-void
.end method

.method protected onRestart()V
    .locals 2

    .prologue
    .line 141
    invoke-super {p0}, Landroid/app/Activity;->onRestart()V

    .line 143
    const-string v0, "appplay.lib"

    const-string v1, "AppPlayBaseActivity::onRestart"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 144
    return-void
.end method

.method protected onResume()V
    .locals 2

    .prologue
    .line 169
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 171
    const-string v0, "appplay.lib"

    const-string v1, "AppPlayBaseActivity::onResume"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 173
    iget-boolean v0, p0, Lorg/appplay/lib/AppPlayBaseActivity;->mIsAppForeground:Z

    if-nez v0, :cond_1

    .line 175
    sget-object v0, Lorg/appplay/platformsdk/PlatformSDK;->sThePlatformSDK:Lorg/appplay/platformsdk/PlatformSDK;

    if-eqz v0, :cond_0

    .line 176
    sget-object v0, Lorg/appplay/platformsdk/PlatformSDK;->sThePlatformSDK:Lorg/appplay/platformsdk/PlatformSDK;

    invoke-virtual {v0}, Lorg/appplay/platformsdk/PlatformSDK;->OnResume()V

    .line 178
    :cond_0
    const/4 v0, 0x1

    iput-boolean v0, p0, Lorg/appplay/lib/AppPlayBaseActivity;->mIsAppForeground:Z

    .line 181
    :cond_1
    iget-object v0, p0, Lorg/appplay/lib/AppPlayBaseActivity;->TheGLView:Lorg/appplay/lib/AppPlayGLView;

    if-eqz v0, :cond_2

    .line 182
    iget-object v0, p0, Lorg/appplay/lib/AppPlayBaseActivity;->TheGLView:Lorg/appplay/lib/AppPlayGLView;

    invoke-virtual {v0}, Lorg/appplay/lib/AppPlayGLView;->onResume()V

    .line 184
    :cond_2
    invoke-virtual {p0}, Lorg/appplay/lib/AppPlayBaseActivity;->HideNavigationBar()V

    .line 185
    return-void
.end method

.method protected onStart()V
    .locals 2

    .prologue
    .line 132
    invoke-super {p0}, Landroid/app/Activity;->onStart()V

    .line 134
    const-string v0, "appplay.lib"

    const-string v1, "AppPlayBaseActivity::onStart"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 135
    invoke-static {}, Lorg/appplay/lib/AppPlayNatives;->nativeOnStart()V

    .line 136
    return-void
.end method

.method protected onStop()V
    .locals 2

    .prologue
    .line 119
    invoke-super {p0}, Landroid/app/Activity;->onStop()V

    .line 121
    const-string v0, "appplay.lib"

    const-string v1, "AppPlayBaseActivity::onStop"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 122
    invoke-static {}, Lorg/appplay/lib/AppPlayNatives;->nativeOnStop()V

    .line 123
    invoke-direct {p0}, Lorg/appplay/lib/AppPlayBaseActivity;->_IsAppOnForeground()Z

    move-result v0

    if-nez v0, :cond_0

    .line 125
    const/4 v0, 0x0

    iput-boolean v0, p0, Lorg/appplay/lib/AppPlayBaseActivity;->mIsAppForeground:Z

    .line 127
    :cond_0
    return-void
.end method

.method public onWindowFocusChanged(Z)V
    .locals 0
    .param p1, "hasFocus"    # Z

    .prologue
    .line 149
    invoke-super {p0, p1}, Landroid/app/Activity;->onWindowFocusChanged(Z)V

    .line 151
    if-eqz p1, :cond_0

    invoke-virtual {p0}, Lorg/appplay/lib/AppPlayBaseActivity;->HideNavigationBar()V

    .line 152
    :cond_0
    return-void
.end method
