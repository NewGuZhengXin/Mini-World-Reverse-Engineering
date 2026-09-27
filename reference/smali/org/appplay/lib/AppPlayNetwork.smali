.class public Lorg/appplay/lib/AppPlayNetwork;
.super Ljava/lang/Object;
.source "AppPlayNetwork.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lorg/appplay/lib/AppPlayNetwork$DownloadProcess;
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    .prologue
    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static DownloadFile(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/appplay/lib/AppPlayNetwork$DownloadProcess;)Z
    .locals 24
    .param p0, "url"    # Ljava/lang/String;
    .param p1, "dir"    # Ljava/lang/String;
    .param p2, "filename"    # Ljava/lang/String;
    .param p3, "callback"    # Lorg/appplay/lib/AppPlayNetwork$DownloadProcess;

    .prologue
    .line 50
    const/4 v5, 0x0

    .line 51
    .local v5, "bRet":Z
    new-instance v7, Lorg/apache/http/impl/client/DefaultHttpClient;

    invoke-direct {v7}, Lorg/apache/http/impl/client/DefaultHttpClient;-><init>()V

    .line 52
    .local v7, "client":Lorg/apache/http/client/HttpClient;
    new-instance v13, Lorg/apache/http/client/methods/HttpGet;

    move-object/from16 v0, p0

    invoke-direct {v13, v0}, Lorg/apache/http/client/methods/HttpGet;-><init>(Ljava/lang/String;)V

    .line 56
    .local v13, "get":Lorg/apache/http/client/methods/HttpGet;
    :try_start_0
    invoke-interface {v7, v13}, Lorg/apache/http/client/HttpClient;->execute(Lorg/apache/http/client/methods/HttpUriRequest;)Lorg/apache/http/HttpResponse;

    move-result-object v15

    .line 57
    .local v15, "response":Lorg/apache/http/HttpResponse;
    invoke-interface {v15}, Lorg/apache/http/HttpResponse;->getEntity()Lorg/apache/http/HttpEntity;

    move-result-object v10

    .line 58
    .local v10, "entity":Lorg/apache/http/HttpEntity;
    invoke-interface {v10}, Lorg/apache/http/HttpEntity;->getContentLength()J

    move-result-wide v16

    .line 59
    .local v16, "length":J
    invoke-interface {v10}, Lorg/apache/http/HttpEntity;->getContent()Ljava/io/InputStream;

    move-result-object v14

    .line 60
    .local v14, "in":Ljava/io/InputStream;
    const/4 v12, 0x0

    .line 61
    .local v12, "fileOutputStream":Ljava/io/FileOutputStream;
    if-eqz v14, :cond_2

    .line 63
    new-instance v11, Ljava/io/File;

    move-object/from16 v0, p2

    invoke-direct {v11, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 65
    .local v11, "file":Ljava/io/File;
    invoke-virtual {v11}, Ljava/io/File;->exists()Z

    move-result v20

    if-nez v20, :cond_0

    .line 67
    new-instance v20, Ljava/io/File;

    move-object/from16 v0, v20

    move-object/from16 v1, p1

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual/range {v20 .. v20}, Ljava/io/File;->mkdir()Z

    .line 68
    invoke-virtual {v11}, Ljava/io/File;->createNewFile()Z

    .line 70
    :cond_0
    new-instance v12, Ljava/io/FileOutputStream;

    .end local v12    # "fileOutputStream":Ljava/io/FileOutputStream;
    invoke-direct {v12, v11}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V

    .line 71
    .restart local v12    # "fileOutputStream":Ljava/io/FileOutputStream;
    const/16 v20, 0x1000

    move/from16 v0, v20

    new-array v4, v0, [B

    .line 72
    .local v4, "b":[B
    const/4 v6, -0x1

    .line 73
    .local v6, "charb":I
    const/4 v8, 0x0

    .line 74
    .local v8, "count":I
    :cond_1
    :goto_0
    invoke-virtual {v14, v4}, Ljava/io/InputStream;->read([B)I

    move-result v6

    const/16 v20, -0x1

    move/from16 v0, v20

    if-ne v6, v0, :cond_4

    .line 85
    .end local v4    # "b":[B
    .end local v6    # "charb":I
    .end local v8    # "count":I
    .end local v11    # "file":Ljava/io/File;
    :cond_2
    invoke-virtual {v12}, Ljava/io/FileOutputStream;->flush()V

    .line 86
    if-eqz v12, :cond_3

    .line 88
    invoke-virtual {v12}, Ljava/io/FileOutputStream;->close()V

    .line 91
    :cond_3
    const/4 v5, 0x1

    .line 98
    .end local v10    # "entity":Lorg/apache/http/HttpEntity;
    .end local v12    # "fileOutputStream":Ljava/io/FileOutputStream;
    .end local v14    # "in":Ljava/io/InputStream;
    .end local v15    # "response":Lorg/apache/http/HttpResponse;
    .end local v16    # "length":J
    :goto_1
    return v5

    .line 76
    .restart local v4    # "b":[B
    .restart local v6    # "charb":I
    .restart local v8    # "count":I
    .restart local v10    # "entity":Lorg/apache/http/HttpEntity;
    .restart local v11    # "file":Ljava/io/File;
    .restart local v12    # "fileOutputStream":Ljava/io/FileOutputStream;
    .restart local v14    # "in":Ljava/io/InputStream;
    .restart local v15    # "response":Lorg/apache/http/HttpResponse;
    .restart local v16    # "length":J
    :cond_4
    const/16 v20, 0x0

    move/from16 v0, v20

    invoke-virtual {v12, v4, v0, v6}, Ljava/io/FileOutputStream;->write([BII)V

    .line 77
    add-int/2addr v8, v6

    .line 78
    int-to-double v0, v8

    move-wide/from16 v20, v0

    move-wide/from16 v0, v16

    long-to-double v0, v0

    move-wide/from16 v22, v0

    div-double v20, v20, v22

    const-wide/high16 v22, 0x4059000000000000L    # 100.0

    mul-double v18, v20, v22

    .line 80
    .local v18, "progress":D
    if-eqz p3, :cond_1

    .line 81
    move-object/from16 v0, p3

    move-wide/from16 v1, v18

    invoke-interface {v0, v1, v2}, Lorg/appplay/lib/AppPlayNetwork$DownloadProcess;->process(D)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 93
    .end local v4    # "b":[B
    .end local v6    # "charb":I
    .end local v8    # "count":I
    .end local v10    # "entity":Lorg/apache/http/HttpEntity;
    .end local v11    # "file":Ljava/io/File;
    .end local v12    # "fileOutputStream":Ljava/io/FileOutputStream;
    .end local v14    # "in":Ljava/io/InputStream;
    .end local v15    # "response":Lorg/apache/http/HttpResponse;
    .end local v16    # "length":J
    .end local v18    # "progress":D
    :catch_0
    move-exception v9

    .line 95
    .local v9, "e":Ljava/lang/Exception;
    invoke-virtual {v9}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_1
.end method

.method public static IsNetConnected(Landroid/content/Context;)Z
    .locals 3
    .param p0, "context"    # Landroid/content/Context;

    .prologue
    .line 23
    .line 24
    const-string v2, "connectivity"

    invoke-virtual {p0, v2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    .line 23
    check-cast v0, Landroid/net/ConnectivityManager;

    .line 26
    .local v0, "connectivityManager":Landroid/net/ConnectivityManager;
    invoke-virtual {v0}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object v1

    .line 27
    .local v1, "networkinfo":Landroid/net/NetworkInfo;
    if-eqz v1, :cond_0

    invoke-virtual {v1}, Landroid/net/NetworkInfo;->isAvailable()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 29
    const/4 v2, 0x1

    .line 32
    :goto_0
    return v2

    :cond_0
    const/4 v2, 0x0

    goto :goto_0
.end method

.method public static IsWifiConnected(Landroid/content/Context;)Z
    .locals 4
    .param p0, "context"    # Landroid/content/Context;

    .prologue
    const/4 v2, 0x1

    .line 37
    .line 38
    const-string v3, "connectivity"

    invoke-virtual {p0, v3}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    .line 37
    check-cast v0, Landroid/net/ConnectivityManager;

    .line 40
    .local v0, "connectivityManager":Landroid/net/ConnectivityManager;
    invoke-virtual {v0, v2}, Landroid/net/ConnectivityManager;->getNetworkInfo(I)Landroid/net/NetworkInfo;

    move-result-object v1

    .line 41
    .local v1, "wifiNetworkInfo":Landroid/net/NetworkInfo;
    if-eqz v1, :cond_0

    invoke-virtual {v1}, Landroid/net/NetworkInfo;->isConnected()Z

    move-result v3

    if-eqz v3, :cond_0

    .line 45
    :goto_0
    return v2

    :cond_0
    const/4 v2, 0x0

    goto :goto_0
.end method
