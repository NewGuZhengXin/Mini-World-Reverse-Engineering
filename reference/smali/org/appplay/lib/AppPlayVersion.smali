.class public Lorg/appplay/lib/AppPlayVersion;
.super Ljava/lang/Object;
.source "AppPlayVersion.java"


# instance fields
.field private mIsAPKNeedUpdate:Z

.field private mIsLibSONeedUpdate:Z

.field private mIsResNeedUpdate:Z

.field private mLib:I

.field private mLibSO_UpdateURL:Ljava/lang/String;

.field private mLibSO_VersionCode:Ljava/lang/String;

.field private mMain:I

.field private mRes:I

.field private mVersionStr:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    .prologue
    const/4 v0, 0x0

    .line 30
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 22
    iput v0, p0, Lorg/appplay/lib/AppPlayVersion;->mMain:I

    .line 23
    iput v0, p0, Lorg/appplay/lib/AppPlayVersion;->mLib:I

    .line 24
    iput v0, p0, Lorg/appplay/lib/AppPlayVersion;->mRes:I

    .line 26
    iput-boolean v0, p0, Lorg/appplay/lib/AppPlayVersion;->mIsAPKNeedUpdate:Z

    .line 27
    iput-boolean v0, p0, Lorg/appplay/lib/AppPlayVersion;->mIsLibSONeedUpdate:Z

    .line 28
    iput-boolean v0, p0, Lorg/appplay/lib/AppPlayVersion;->mIsResNeedUpdate:Z

    .line 32
    return-void
.end method


# virtual methods
.method public IsAPKNeedUpdate()Z
    .locals 1

    .prologue
    .line 129
    iget-boolean v0, p0, Lorg/appplay/lib/AppPlayVersion;->mIsAPKNeedUpdate:Z

    return v0
.end method

.method public IsLibSONeedUpdate()Z
    .locals 1

    .prologue
    .line 134
    iget-boolean v0, p0, Lorg/appplay/lib/AppPlayVersion;->mIsLibSONeedUpdate:Z

    return v0
.end method

.method public IsResNeedUpdate()Z
    .locals 1

    .prologue
    .line 139
    iget-boolean v0, p0, Lorg/appplay/lib/AppPlayVersion;->mIsResNeedUpdate:Z

    return v0
.end method

.method public LoadUpdateVersionXML()Z
    .locals 17

    .prologue
    .line 39
    const/4 v13, 0x1

    move-object/from16 v0, p0

    invoke-virtual {v0, v13}, Lorg/appplay/lib/AppPlayVersion;->_LoadVersion(I)Ljava/lang/String;

    move-result-object v4

    .line 40
    .local v4, "localVersionStr":Ljava/lang/String;
    const-string v13, "appplay.lib"

    new-instance v14, Ljava/lang/StringBuilder;

    const-string v15, "localVersionStr:"

    invoke-direct {v14, v15}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v14, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v14

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    invoke-static {v13, v14}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 43
    const/4 v13, 0x2

    move-object/from16 v0, p0

    invoke-virtual {v0, v13}, Lorg/appplay/lib/AppPlayVersion;->_LoadVersion(I)Ljava/lang/String;

    move-result-object v9

    .line 44
    .local v9, "updateVersionStr":Ljava/lang/String;
    const-string v13, "appplay.lib"

    new-instance v14, Ljava/lang/StringBuilder;

    const-string v15, "updateVersionStr:"

    invoke-direct {v14, v15}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v14, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v14

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    invoke-static {v13, v14}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 46
    if-eqz v9, :cond_2

    const-string v13, ""

    if-eq v9, v13, :cond_2

    .line 48
    move-object v12, v9

    .line 56
    .local v12, "versionStr":Ljava/lang/String;
    :goto_0
    const-string v13, "appplay.lib"

    new-instance v14, Ljava/lang/StringBuilder;

    const-string v15, "last versionStr:"

    invoke-direct {v14, v15}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v14, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v14

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    invoke-static {v13, v14}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 59
    const-string v13, "\\."

    invoke-virtual {v12, v13}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v11

    .line 60
    .local v11, "versionArray":[Ljava/lang/String;
    const/4 v1, 0x0

    .line 61
    .local v1, "curLatestVersionAPK":I
    const/4 v2, 0x0

    .line 62
    .local v2, "curLatestVersionLib":I
    const/4 v3, 0x0

    .line 63
    .local v3, "curLatestVersionRes":I
    const-string v13, "phoenix3d.px2"

    new-instance v14, Ljava/lang/StringBuilder;

    const-string v15, "versionArray arrayLength:"

    invoke-direct {v14, v15}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    array-length v15, v11

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v14

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    invoke-static {v13, v14}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 64
    const/4 v13, 0x3

    array-length v14, v11

    if-ne v13, v14, :cond_0

    .line 66
    const/4 v13, 0x0

    aget-object v13, v11, v13

    invoke-static {v13}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    .line 67
    const/4 v13, 0x1

    aget-object v13, v11, v13

    invoke-static {v13}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    .line 68
    const/4 v13, 0x2

    aget-object v13, v11, v13

    invoke-static {v13}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3

    .line 72
    :cond_0
    sget-object v13, Lorg/appplay/lib/AppPlayMetaData;->sURL_Version:Ljava/lang/String;

    .line 73
    sget-object v14, Lorg/appplay/lib/AppPlayBaseActivity;->sVersion_Dir:Ljava/lang/String;

    .line 74
    sget-object v15, Lorg/appplay/lib/AppPlayBaseActivity;->sVersion_Filename_Temp:Ljava/lang/String;

    const/16 v16, 0x0

    .line 72
    invoke-static/range {v13 .. v16}, Lorg/appplay/lib/AppPlayNetwork;->DownloadFile(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/appplay/lib/AppPlayNetwork$DownloadProcess;)Z

    move-result v13

    .line 74
    if-eqz v13, :cond_6

    .line 76
    const/4 v13, 0x3

    move-object/from16 v0, p0

    invoke-virtual {v0, v13}, Lorg/appplay/lib/AppPlayVersion;->_LoadVersion(I)Ljava/lang/String;

    move-result-object v10

    .line 77
    .local v10, "updateVersion_TempJStr":Ljava/lang/String;
    const-string v13, "appplay.ap"

    new-instance v14, Ljava/lang/StringBuilder;

    const-string v15, "updateVersion_TempJStr:"

    invoke-direct {v14, v15}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v14, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v14

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    invoke-static {v13, v14}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 79
    const-string v13, "\\."

    invoke-virtual {v10, v13}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v6

    .line 80
    .local v6, "updateVersionArray":[Ljava/lang/String;
    const/4 v5, 0x0

    .line 81
    .local v5, "updateVersionAPK":I
    const/4 v7, 0x0

    .line 82
    .local v7, "updateVersionLib":I
    const/4 v8, 0x0

    .line 83
    .local v8, "updateVersionRes":I
    const-string v13, "appplay.ap"

    new-instance v14, Ljava/lang/StringBuilder;

    const-string v15, "updateVersionArray arrayLength:"

    invoke-direct {v14, v15}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    array-length v15, v6

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v14

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    invoke-static {v13, v14}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 84
    const/4 v13, 0x3

    array-length v14, v6

    if-ne v13, v14, :cond_1

    .line 86
    const/4 v13, 0x0

    aget-object v13, v6, v13

    invoke-static {v13}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v5

    .line 87
    const/4 v13, 0x1

    aget-object v13, v6, v13

    invoke-static {v13}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v7

    .line 88
    const/4 v13, 0x2

    aget-object v13, v6, v13

    invoke-static {v13}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v8

    .line 91
    :cond_1
    if-le v5, v1, :cond_3

    .line 93
    const/4 v13, 0x1

    move-object/from16 v0, p0

    iput-boolean v13, v0, Lorg/appplay/lib/AppPlayVersion;->mIsAPKNeedUpdate:Z

    .line 99
    :goto_1
    const-string v13, "appplay.ap"

    new-instance v14, Ljava/lang/StringBuilder;

    const-string v15, "IsAPKNeedUpdate:"

    invoke-direct {v14, v15}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    move-object/from16 v0, p0

    iget-boolean v15, v0, Lorg/appplay/lib/AppPlayVersion;->mIsAPKNeedUpdate:Z

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    move-result-object v14

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    invoke-static {v13, v14}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 101
    if-le v7, v2, :cond_4

    .line 103
    const/4 v13, 0x1

    move-object/from16 v0, p0

    iput-boolean v13, v0, Lorg/appplay/lib/AppPlayVersion;->mIsLibSONeedUpdate:Z

    .line 109
    :goto_2
    const-string v13, "appplay.ap"

    new-instance v14, Ljava/lang/StringBuilder;

    const-string v15, "ISLibSONeedUpdate:"

    invoke-direct {v14, v15}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    move-object/from16 v0, p0

    iget-boolean v15, v0, Lorg/appplay/lib/AppPlayVersion;->mIsLibSONeedUpdate:Z

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    move-result-object v14

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    invoke-static {v13, v14}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 111
    if-le v8, v3, :cond_5

    .line 113
    const/4 v13, 0x1

    move-object/from16 v0, p0

    iput-boolean v13, v0, Lorg/appplay/lib/AppPlayVersion;->mIsResNeedUpdate:Z

    .line 119
    :goto_3
    const-string v13, "appplay.ap"

    new-instance v14, Ljava/lang/StringBuilder;

    const-string v15, "IsResNeedUpdate:"

    invoke-direct {v14, v15}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    move-object/from16 v0, p0

    iget-boolean v15, v0, Lorg/appplay/lib/AppPlayVersion;->mIsResNeedUpdate:Z

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    move-result-object v14

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    invoke-static {v13, v14}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 121
    const/4 v13, 0x1

    .line 124
    .end local v5    # "updateVersionAPK":I
    .end local v6    # "updateVersionArray":[Ljava/lang/String;
    .end local v7    # "updateVersionLib":I
    .end local v8    # "updateVersionRes":I
    .end local v10    # "updateVersion_TempJStr":Ljava/lang/String;
    :goto_4
    return v13

    .line 52
    .end local v1    # "curLatestVersionAPK":I
    .end local v2    # "curLatestVersionLib":I
    .end local v3    # "curLatestVersionRes":I
    .end local v11    # "versionArray":[Ljava/lang/String;
    .end local v12    # "versionStr":Ljava/lang/String;
    :cond_2
    move-object v12, v4

    .restart local v12    # "versionStr":Ljava/lang/String;
    goto/16 :goto_0

    .line 97
    .restart local v1    # "curLatestVersionAPK":I
    .restart local v2    # "curLatestVersionLib":I
    .restart local v3    # "curLatestVersionRes":I
    .restart local v5    # "updateVersionAPK":I
    .restart local v6    # "updateVersionArray":[Ljava/lang/String;
    .restart local v7    # "updateVersionLib":I
    .restart local v8    # "updateVersionRes":I
    .restart local v10    # "updateVersion_TempJStr":Ljava/lang/String;
    .restart local v11    # "versionArray":[Ljava/lang/String;
    :cond_3
    const/4 v13, 0x0

    move-object/from16 v0, p0

    iput-boolean v13, v0, Lorg/appplay/lib/AppPlayVersion;->mIsAPKNeedUpdate:Z

    goto :goto_1

    .line 107
    :cond_4
    const/4 v13, 0x0

    move-object/from16 v0, p0

    iput-boolean v13, v0, Lorg/appplay/lib/AppPlayVersion;->mIsLibSONeedUpdate:Z

    goto :goto_2

    .line 117
    :cond_5
    const/4 v13, 0x0

    move-object/from16 v0, p0

    iput-boolean v13, v0, Lorg/appplay/lib/AppPlayVersion;->mIsResNeedUpdate:Z

    goto :goto_3

    .line 124
    .end local v5    # "updateVersionAPK":I
    .end local v6    # "updateVersionArray":[Ljava/lang/String;
    .end local v7    # "updateVersionLib":I
    .end local v8    # "updateVersionRes":I
    .end local v10    # "updateVersion_TempJStr":Ljava/lang/String;
    :cond_6
    const/4 v13, 0x0

    goto :goto_4
.end method

.method public _LoadVersion(I)Ljava/lang/String;
    .locals 14
    .param p1, "type"    # I

    .prologue
    .line 154
    const-string v11, ""

    .line 155
    .local v11, "versionStr":Ljava/lang/String;
    const-string v0, "Version"

    .line 157
    .local v0, "VER":Ljava/lang/String;
    invoke-static {}, Ljavax/xml/parsers/DocumentBuilderFactory;->newInstance()Ljavax/xml/parsers/DocumentBuilderFactory;

    move-result-object v3

    .line 159
    .local v3, "docFactory":Ljavax/xml/parsers/DocumentBuilderFactory;
    const/4 v1, 0x0

    .line 160
    .local v1, "doc":Lorg/w3c/dom/Document;
    const/4 v8, 0x0

    .line 163
    .local v8, "inStream":Ljava/io/InputStream;
    :try_start_0
    invoke-virtual {v3}, Ljavax/xml/parsers/DocumentBuilderFactory;->newDocumentBuilder()Ljavax/xml/parsers/DocumentBuilder;

    move-result-object v2

    .line 165
    .local v2, "docBuilder":Ljavax/xml/parsers/DocumentBuilder;
    const/4 v12, 0x1

    if-ne v12, p1, :cond_1

    .line 168
    sget-object v12, Lorg/appplay/lib/AppPlayBaseActivity;->sTheActivity:Lorg/appplay/lib/AppPlayBaseActivity;

    invoke-virtual {v12}, Lorg/appplay/lib/AppPlayBaseActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v12

    invoke-virtual {v12}, Landroid/content/res/Resources;->getAssets()Landroid/content/res/AssetManager;

    move-result-object v12

    const-string v13, "Data/version.xml"

    invoke-virtual {v12, v13}, Landroid/content/res/AssetManager;->open(Ljava/lang/String;)Ljava/io/InputStream;

    move-result-object v8

    .line 170
    invoke-virtual {v2, v8}, Ljavax/xml/parsers/DocumentBuilder;->parse(Ljava/io/InputStream;)Lorg/w3c/dom/Document;

    move-result-object v1

    .line 173
    invoke-interface {v1}, Lorg/w3c/dom/Document;->getDocumentElement()Lorg/w3c/dom/Element;

    move-result-object v10

    .line 176
    .local v10, "rootEle":Lorg/w3c/dom/Element;
    invoke-interface {v10}, Lorg/w3c/dom/Element;->getNodeName()Ljava/lang/String;

    move-result-object v9

    .line 177
    .local v9, "name":Ljava/lang/String;
    invoke-virtual {v9, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v12

    if-eqz v12, :cond_0

    .line 180
    const-string v12, "value"

    invoke-interface {v10, v12}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    .line 220
    .end local v2    # "docBuilder":Ljavax/xml/parsers/DocumentBuilder;
    .end local v9    # "name":Ljava/lang/String;
    .end local v10    # "rootEle":Lorg/w3c/dom/Element;
    :cond_0
    :goto_0
    return-object v11

    .line 185
    .restart local v2    # "docBuilder":Ljavax/xml/parsers/DocumentBuilder;
    :cond_1
    const-string v7, ""

    .line 187
    .local v7, "filename":Ljava/lang/String;
    const/4 v12, 0x2

    if-ne v12, p1, :cond_3

    .line 188
    sget-object v7, Lorg/appplay/lib/AppPlayBaseActivity;->sVersion_Filename:Ljava/lang/String;

    .line 192
    :cond_2
    :goto_1
    new-instance v6, Ljava/io/File;

    invoke-direct {v6, v7}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 193
    .local v6, "file":Ljava/io/File;
    invoke-virtual {v6}, Ljava/io/File;->exists()Z

    move-result v12

    if-eqz v12, :cond_0

    .line 195
    invoke-virtual {v2, v6}, Ljavax/xml/parsers/DocumentBuilder;->parse(Ljava/io/File;)Lorg/w3c/dom/Document;

    move-result-object v1

    .line 197
    invoke-interface {v1}, Lorg/w3c/dom/Document;->getDocumentElement()Lorg/w3c/dom/Element;

    move-result-object v10

    .line 199
    .restart local v10    # "rootEle":Lorg/w3c/dom/Element;
    invoke-interface {v10}, Lorg/w3c/dom/Element;->getNodeName()Ljava/lang/String;

    move-result-object v9

    .line 200
    .restart local v9    # "name":Ljava/lang/String;
    invoke-virtual {v9, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v12

    if-eqz v12, :cond_0

    .line 202
    const-string v12, "value"

    invoke-interface {v10, v12}, Lorg/w3c/dom/Element;->getAttribute(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    goto :goto_0

    .line 189
    .end local v6    # "file":Ljava/io/File;
    .end local v9    # "name":Ljava/lang/String;
    .end local v10    # "rootEle":Lorg/w3c/dom/Element;
    :cond_3
    const/4 v12, 0x3

    if-ne v12, p1, :cond_2

    .line 190
    sget-object v7, Lorg/appplay/lib/AppPlayBaseActivity;->sVersion_Filename_Temp:Ljava/lang/String;
    :try_end_0
    .catch Ljavax/xml/parsers/ParserConfigurationException; {:try_start_0 .. :try_end_0} :catch_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Lorg/xml/sax/SAXException; {:try_start_0 .. :try_end_0} :catch_2

    goto :goto_1

    .line 207
    .end local v2    # "docBuilder":Ljavax/xml/parsers/DocumentBuilder;
    .end local v7    # "filename":Ljava/lang/String;
    :catch_0
    move-exception v5

    .line 209
    .local v5, "e1":Ljavax/xml/parsers/ParserConfigurationException;
    invoke-virtual {v5}, Ljavax/xml/parsers/ParserConfigurationException;->printStackTrace()V

    goto :goto_0

    .line 211
    .end local v5    # "e1":Ljavax/xml/parsers/ParserConfigurationException;
    :catch_1
    move-exception v4

    .line 213
    .local v4, "e":Ljava/io/IOException;
    invoke-virtual {v4}, Ljava/io/IOException;->printStackTrace()V

    goto :goto_0

    .line 215
    .end local v4    # "e":Ljava/io/IOException;
    :catch_2
    move-exception v4

    .line 217
    .local v4, "e":Lorg/xml/sax/SAXException;
    invoke-virtual {v4}, Lorg/xml/sax/SAXException;->printStackTrace()V

    goto :goto_0
.end method
