.class Lorg/appplay/lib/AppPlayUpdateLayout$2;
.super Ljava/util/TimerTask;
.source "AppPlayUpdateLayout.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lorg/appplay/lib/AppPlayUpdateLayout;->CheckVersion()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lorg/appplay/lib/AppPlayUpdateLayout;


# direct methods
.method constructor <init>(Lorg/appplay/lib/AppPlayUpdateLayout;)V
    .locals 0

    .prologue
    .line 1
    iput-object p1, p0, Lorg/appplay/lib/AppPlayUpdateLayout$2;->this$0:Lorg/appplay/lib/AppPlayUpdateLayout;

    .line 113
    invoke-direct {p0}, Ljava/util/TimerTask;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 24

    .prologue
    .line 117
    new-instance v14, Landroid/os/Message;

    invoke-direct {v14}, Landroid/os/Message;-><init>()V

    .line 118
    .local v14, "msg":Landroid/os/Message;
    const/16 v19, 0x2

    move/from16 v0, v19

    iput v0, v14, Landroid/os/Message;->what:I

    .line 119
    move-object/from16 v0, p0

    iget-object v0, v0, Lorg/appplay/lib/AppPlayUpdateLayout$2;->this$0:Lorg/appplay/lib/AppPlayUpdateLayout;

    move-object/from16 v19, v0

    move-object/from16 v0, v19

    iget-object v0, v0, Lorg/appplay/lib/AppPlayUpdateLayout;->mHandler:Landroid/os/Handler;

    move-object/from16 v19, v0

    move-object/from16 v0, v19

    invoke-virtual {v0, v14}, Landroid/os/Handler;->dispatchMessage(Landroid/os/Message;)V

    .line 123
    :try_start_0
    new-instance v4, Lorg/apache/http/impl/client/DefaultHttpClient;

    invoke-direct {v4}, Lorg/apache/http/impl/client/DefaultHttpClient;-><init>()V

    .line 124
    .local v4, "client":Lorg/apache/http/client/HttpClient;
    new-instance v10, Lorg/apache/http/client/methods/HttpGet;

    new-instance v19, Ljava/net/URI;

    sget-object v20, Lorg/appplay/lib/AppPlayMetaData;->sURL_LibSO:Ljava/lang/String;

    invoke-direct/range {v19 .. v20}, Ljava/net/URI;-><init>(Ljava/lang/String;)V

    move-object/from16 v0, v19

    invoke-direct {v10, v0}, Lorg/apache/http/client/methods/HttpGet;-><init>(Ljava/net/URI;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    .line 128
    .local v10, "get":Lorg/apache/http/client/methods/HttpGet;
    :try_start_1
    invoke-interface {v4, v10}, Lorg/apache/http/client/HttpClient;->execute(Lorg/apache/http/client/methods/HttpUriRequest;)Lorg/apache/http/HttpResponse;

    move-result-object v18

    .line 129
    .local v18, "response":Lorg/apache/http/HttpResponse;
    invoke-interface/range {v18 .. v18}, Lorg/apache/http/HttpResponse;->getEntity()Lorg/apache/http/HttpEntity;

    move-result-object v7

    .line 130
    .local v7, "entity":Lorg/apache/http/HttpEntity;
    invoke-interface {v7}, Lorg/apache/http/HttpEntity;->getContentLength()J

    move-result-wide v12

    .line 131
    .local v12, "length":J
    invoke-interface {v7}, Lorg/apache/http/HttpEntity;->getContent()Ljava/io/InputStream;

    move-result-object v11

    .line 132
    .local v11, "is":Ljava/io/InputStream;
    const/4 v9, 0x0

    .line 133
    .local v9, "fileOutputStream":Ljava/io/FileOutputStream;
    if-eqz v11, :cond_1

    .line 135
    new-instance v8, Ljava/io/File;

    sget-object v19, Lorg/appplay/lib/AppPlayBaseActivity;->sLibSO_Filename:Ljava/lang/String;

    move-object/from16 v0, v19

    invoke-direct {v8, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 136
    .local v8, "file":Ljava/io/File;
    invoke-virtual {v8}, Ljava/io/File;->exists()Z

    move-result v19

    if-nez v19, :cond_0

    .line 138
    new-instance v19, Ljava/io/File;

    sget-object v20, Lorg/appplay/lib/AppPlayBaseActivity;->sLibSO_Dir:Ljava/lang/String;

    invoke-direct/range {v19 .. v20}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual/range {v19 .. v19}, Ljava/io/File;->mkdir()Z

    .line 140
    invoke-virtual {v8}, Ljava/io/File;->createNewFile()Z

    .line 143
    :cond_0
    new-instance v9, Ljava/io/FileOutputStream;

    .end local v9    # "fileOutputStream":Ljava/io/FileOutputStream;
    invoke-direct {v9, v8}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V

    .line 144
    .restart local v9    # "fileOutputStream":Ljava/io/FileOutputStream;
    const/16 v19, 0x1000

    move/from16 v0, v19

    new-array v2, v0, [B
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    .line 145
    .local v2, "b":[B
    const/4 v3, -0x1

    .line 146
    .local v3, "charb":I
    const/4 v5, 0x0

    .local v5, "count":I
    move-object v15, v14

    .line 147
    .end local v14    # "msg":Landroid/os/Message;
    .local v15, "msg":Landroid/os/Message;
    :goto_0
    :try_start_2
    invoke-virtual {v11, v2}, Ljava/io/InputStream;->read([B)I
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    move-result v3

    const/16 v19, -0x1

    move/from16 v0, v19

    if-ne v3, v0, :cond_3

    move-object v14, v15

    .line 160
    .end local v2    # "b":[B
    .end local v3    # "charb":I
    .end local v5    # "count":I
    .end local v8    # "file":Ljava/io/File;
    .end local v15    # "msg":Landroid/os/Message;
    .restart local v14    # "msg":Landroid/os/Message;
    :cond_1
    :try_start_3
    invoke-virtual {v9}, Ljava/io/FileOutputStream;->flush()V

    .line 161
    if-eqz v9, :cond_2

    .line 163
    invoke-virtual {v9}, Ljava/io/FileOutputStream;->close()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0

    .line 177
    .end local v4    # "client":Lorg/apache/http/client/HttpClient;
    .end local v7    # "entity":Lorg/apache/http/HttpEntity;
    .end local v9    # "fileOutputStream":Ljava/io/FileOutputStream;
    .end local v10    # "get":Lorg/apache/http/client/methods/HttpGet;
    .end local v11    # "is":Ljava/io/InputStream;
    .end local v12    # "length":J
    .end local v18    # "response":Lorg/apache/http/HttpResponse;
    :cond_2
    :goto_1
    sget-object v19, Lorg/appplay/lib/AppPlayMetaData;->sURL_Version:Ljava/lang/String;

    .line 178
    sget-object v20, Lorg/appplay/lib/AppPlayBaseActivity;->sVersion_Dir:Ljava/lang/String;

    .line 179
    sget-object v21, Lorg/appplay/lib/AppPlayBaseActivity;->sVersion_Filename:Ljava/lang/String;

    const/16 v22, 0x0

    .line 177
    invoke-static/range {v19 .. v22}, Lorg/appplay/lib/AppPlayNetwork;->DownloadFile(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/appplay/lib/AppPlayNetwork$DownloadProcess;)Z

    .line 181
    sget-object v19, Lorg/appplay/lib/AppPlayBaseActivity;->sTheActivity:Lorg/appplay/lib/AppPlayBaseActivity;

    invoke-virtual/range {v19 .. v19}, Lorg/appplay/lib/AppPlayBaseActivity;->Show_GLView()V

    .line 182
    return-void

    .line 149
    .end local v14    # "msg":Landroid/os/Message;
    .restart local v2    # "b":[B
    .restart local v3    # "charb":I
    .restart local v4    # "client":Lorg/apache/http/client/HttpClient;
    .restart local v5    # "count":I
    .restart local v7    # "entity":Lorg/apache/http/HttpEntity;
    .restart local v8    # "file":Ljava/io/File;
    .restart local v9    # "fileOutputStream":Ljava/io/FileOutputStream;
    .restart local v10    # "get":Lorg/apache/http/client/methods/HttpGet;
    .restart local v11    # "is":Ljava/io/InputStream;
    .restart local v12    # "length":J
    .restart local v15    # "msg":Landroid/os/Message;
    .restart local v18    # "response":Lorg/apache/http/HttpResponse;
    :cond_3
    const/16 v19, 0x0

    :try_start_4
    move/from16 v0, v19

    invoke-virtual {v9, v2, v0, v3}, Ljava/io/FileOutputStream;->write([BII)V

    .line 150
    add-int/2addr v5, v3

    .line 151
    int-to-double v0, v5

    move-wide/from16 v20, v0

    long-to-double v0, v12

    move-wide/from16 v22, v0

    div-double v20, v20, v22

    const-wide/high16 v22, 0x4059000000000000L    # 100.0

    mul-double v16, v20, v22

    .line 153
    .local v16, "progress":D
    new-instance v14, Landroid/os/Message;

    invoke-direct {v14}, Landroid/os/Message;-><init>()V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_2

    .line 154
    .end local v15    # "msg":Landroid/os/Message;
    .restart local v14    # "msg":Landroid/os/Message;
    const/16 v19, 0x3

    :try_start_5
    move/from16 v0, v19

    iput v0, v14, Landroid/os/Message;->what:I

    .line 155
    move-wide/from16 v0, v16

    double-to-int v0, v0

    move/from16 v19, v0

    move/from16 v0, v19

    iput v0, v14, Landroid/os/Message;->arg1:I

    .line 156
    move-object/from16 v0, p0

    iget-object v0, v0, Lorg/appplay/lib/AppPlayUpdateLayout$2;->this$0:Lorg/appplay/lib/AppPlayUpdateLayout;

    move-object/from16 v19, v0

    move-object/from16 v0, v19

    iget-object v0, v0, Lorg/appplay/lib/AppPlayUpdateLayout;->mHandler:Landroid/os/Handler;

    move-object/from16 v19, v0

    move-object/from16 v0, v19

    invoke-virtual {v0, v14}, Landroid/os/Handler;->dispatchMessage(Landroid/os/Message;)V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_0

    move-object v15, v14

    .end local v14    # "msg":Landroid/os/Message;
    .restart local v15    # "msg":Landroid/os/Message;
    goto :goto_0

    .line 166
    .end local v2    # "b":[B
    .end local v3    # "charb":I
    .end local v5    # "count":I
    .end local v7    # "entity":Lorg/apache/http/HttpEntity;
    .end local v8    # "file":Ljava/io/File;
    .end local v9    # "fileOutputStream":Ljava/io/FileOutputStream;
    .end local v11    # "is":Ljava/io/InputStream;
    .end local v12    # "length":J
    .end local v15    # "msg":Landroid/os/Message;
    .end local v16    # "progress":D
    .end local v18    # "response":Lorg/apache/http/HttpResponse;
    .restart local v14    # "msg":Landroid/os/Message;
    :catch_0
    move-exception v6

    .line 168
    .local v6, "e":Ljava/lang/Exception;
    :goto_2
    :try_start_6
    invoke-virtual {v6}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_1

    goto :goto_1

    .line 171
    .end local v4    # "client":Lorg/apache/http/client/HttpClient;
    .end local v6    # "e":Ljava/lang/Exception;
    .end local v10    # "get":Lorg/apache/http/client/methods/HttpGet;
    :catch_1
    move-exception v6

    .line 173
    .restart local v6    # "e":Ljava/lang/Exception;
    invoke-virtual {v6}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_1

    .line 166
    .end local v6    # "e":Ljava/lang/Exception;
    .end local v14    # "msg":Landroid/os/Message;
    .restart local v2    # "b":[B
    .restart local v3    # "charb":I
    .restart local v4    # "client":Lorg/apache/http/client/HttpClient;
    .restart local v5    # "count":I
    .restart local v7    # "entity":Lorg/apache/http/HttpEntity;
    .restart local v8    # "file":Ljava/io/File;
    .restart local v9    # "fileOutputStream":Ljava/io/FileOutputStream;
    .restart local v10    # "get":Lorg/apache/http/client/methods/HttpGet;
    .restart local v11    # "is":Ljava/io/InputStream;
    .restart local v12    # "length":J
    .restart local v15    # "msg":Landroid/os/Message;
    .restart local v18    # "response":Lorg/apache/http/HttpResponse;
    :catch_2
    move-exception v6

    move-object v14, v15

    .end local v15    # "msg":Landroid/os/Message;
    .restart local v14    # "msg":Landroid/os/Message;
    goto :goto_2
.end method
