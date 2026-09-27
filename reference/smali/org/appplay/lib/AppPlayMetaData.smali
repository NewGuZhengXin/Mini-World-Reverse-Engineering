.class public Lorg/appplay/lib/AppPlayMetaData;
.super Ljava/lang/Object;
.source "AppPlayMetaData.java"


# static fields
.field private static final _APPNAME:Ljava/lang/String; = "appname"

.field private static final _ISDEBUG:Ljava/lang/String; = "isdebug"

.field private static final _ISNETTABLE:Ljava/lang/String; = "isnettable"

.field private static final _ISTEST:Ljava/lang/String; = "istest"

.field private static final _PFSDKNAME:Ljava/lang/String; = "pfsdkname"

.field private static final _URL_LIBSO:Ljava/lang/String; = "url_libso"

.field private static final _URL_LIBSO_TEST:Ljava/lang/String; = "url_libso_test"

.field private static final _URL_VERSION:Ljava/lang/String; = "url_version"

.field private static final _URL_VERSION_TEST:Ljava/lang/String; = "url_version_test"

.field public static sAppName:Ljava/lang/String;

.field public static sIsDebug:Z

.field public static sIsNettable:Z

.field public static sIsTest:Z

.field public static sPFSDKName:Ljava/lang/String;

.field public static sURL_LibSO:Ljava/lang/String;

.field public static sURL_Version:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .prologue
    .line 9
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static GetMetaData(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;
    .locals 8
    .param p0, "ctx"    # Landroid/content/Context;
    .param p1, "key"    # Ljava/lang/String;

    .prologue
    .line 55
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v5

    .line 56
    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v6

    const/16 v7, 0x80

    .line 55
    invoke-virtual {v5, v6, v7}, Landroid/content/pm/PackageManager;->getApplicationInfo(Ljava/lang/String;I)Landroid/content/pm/ApplicationInfo;

    move-result-object v0

    .line 58
    .local v0, "ai":Landroid/content/pm/ApplicationInfo;
    iget-object v1, v0, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    .line 59
    .local v1, "bundle":Landroid/os/Bundle;
    invoke-virtual {v1, p1}, Landroid/os/Bundle;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v3

    .line 60
    .local v3, "obj":Ljava/lang/Object;
    invoke-static {v3}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;
    :try_end_0
    .catch Landroid/content/pm/PackageManager$NameNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    move-result-object v4

    .line 68
    .end local v0    # "ai":Landroid/content/pm/ApplicationInfo;
    .end local v1    # "bundle":Landroid/os/Bundle;
    .end local v3    # "obj":Ljava/lang/Object;
    :goto_0
    return-object v4

    .line 63
    :catch_0
    move-exception v2

    .line 65
    .local v2, "e":Landroid/content/pm/PackageManager$NameNotFoundException;
    invoke-virtual {v2}, Landroid/content/pm/PackageManager$NameNotFoundException;->printStackTrace()V

    .line 68
    const-string v4, ""

    goto :goto_0
.end method

.method public static Initlize(Landroid/content/Context;)V
    .locals 4
    .param p0, "ctx"    # Landroid/content/Context;

    .prologue
    const/4 v1, 0x1

    const/4 v2, 0x0

    .line 33
    const-string v0, "isnettable"

    invoke-static {p0, v0}, Lorg/appplay/lib/AppPlayMetaData;->GetMetaData(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v3, "true"

    if-ne v0, v3, :cond_0

    move v0, v1

    :goto_0
    sput-boolean v0, Lorg/appplay/lib/AppPlayMetaData;->sIsNettable:Z

    .line 34
    const-string v0, "isdebug"

    invoke-static {p0, v0}, Lorg/appplay/lib/AppPlayMetaData;->GetMetaData(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v3, "true"

    if-ne v0, v3, :cond_1

    move v0, v1

    :goto_1
    sput-boolean v0, Lorg/appplay/lib/AppPlayMetaData;->sIsDebug:Z

    .line 35
    const-string v0, "istest"

    invoke-static {p0, v0}, Lorg/appplay/lib/AppPlayMetaData;->GetMetaData(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v3, "true"

    if-ne v0, v3, :cond_2

    :goto_2
    sput-boolean v1, Lorg/appplay/lib/AppPlayMetaData;->sIsTest:Z

    .line 36
    const-string v0, "pfsdkname"

    invoke-static {p0, v0}, Lorg/appplay/lib/AppPlayMetaData;->GetMetaData(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lorg/appplay/lib/AppPlayMetaData;->sPFSDKName:Ljava/lang/String;

    .line 37
    const-string v0, "appname"

    invoke-static {p0, v0}, Lorg/appplay/lib/AppPlayMetaData;->GetMetaData(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lorg/appplay/lib/AppPlayMetaData;->sAppName:Ljava/lang/String;

    .line 39
    sget-boolean v0, Lorg/appplay/lib/AppPlayMetaData;->sIsTest:Z

    if-nez v0, :cond_3

    .line 41
    const-string v0, "url_libso"

    invoke-static {p0, v0}, Lorg/appplay/lib/AppPlayMetaData;->GetMetaData(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lorg/appplay/lib/AppPlayMetaData;->sURL_LibSO:Ljava/lang/String;

    .line 42
    const-string v0, "url_version"

    invoke-static {p0, v0}, Lorg/appplay/lib/AppPlayMetaData;->GetMetaData(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lorg/appplay/lib/AppPlayMetaData;->sURL_Version:Ljava/lang/String;

    .line 48
    :goto_3
    return-void

    :cond_0
    move v0, v2

    .line 33
    goto :goto_0

    :cond_1
    move v0, v2

    .line 34
    goto :goto_1

    :cond_2
    move v1, v2

    .line 35
    goto :goto_2

    .line 45
    :cond_3
    const-string v0, "url_libso_test"

    invoke-static {p0, v0}, Lorg/appplay/lib/AppPlayMetaData;->GetMetaData(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lorg/appplay/lib/AppPlayMetaData;->sURL_LibSO:Ljava/lang/String;

    .line 46
    const-string v0, "url_version_test"

    invoke-static {p0, v0}, Lorg/appplay/lib/AppPlayMetaData;->GetMetaData(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lorg/appplay/lib/AppPlayMetaData;->sURL_Version:Ljava/lang/String;

    goto :goto_3
.end method
