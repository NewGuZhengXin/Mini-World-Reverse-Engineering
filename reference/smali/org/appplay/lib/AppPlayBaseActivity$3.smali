.class Lorg/appplay/lib/AppPlayBaseActivity$3;
.super Ljava/lang/Object;
.source "AppPlayBaseActivity.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lorg/appplay/lib/AppPlayBaseActivity;->Show_GLView()V
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
    iput-object p1, p0, Lorg/appplay/lib/AppPlayBaseActivity$3;->this$0:Lorg/appplay/lib/AppPlayBaseActivity;

    .line 338
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 11

    .prologue
    const/4 v10, -0x1

    .line 342
    new-instance v3, Ljava/io/File;

    sget-object v7, Lorg/appplay/lib/AppPlayBaseActivity;->sLibSO_Filename:Ljava/lang/String;

    invoke-direct {v3, v7}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 343
    .local v3, "file":Ljava/io/File;
    invoke-virtual {v3}, Ljava/io/File;->exists()Z

    move-result v7

    if-eqz v7, :cond_1

    .line 346
    const-string v7, "appplay.ap"

    const-string v8, "begin - load sLibSO(from dir)."

    invoke-static {v7, v8}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 350
    :try_start_0
    const-string v7, "fmodex"

    invoke-static {v7}, Ljava/lang/System;->loadLibrary(Ljava/lang/String;)V

    .line 351
    sget-object v7, Lorg/appplay/lib/AppPlayBaseActivity;->sLibSO_Filename:Ljava/lang/String;

    invoke-static {v7}, Ljava/lang/System;->load(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/UnsatisfiedLinkError; {:try_start_0 .. :try_end_0} :catch_0

    .line 360
    :goto_0
    const-string v7, "appplay.lib"

    new-instance v8, Ljava/lang/StringBuilder;

    const-string v9, "end - load sLibSO(form dir):"

    invoke-direct {v8, v9}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    sget-object v9, Lorg/appplay/lib/AppPlayBaseActivity;->sLibSO_Filename:Ljava/lang/String;

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v8

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {v7, v8}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 381
    :goto_1
    const-string v7, "appplay.lib"

    const-string v8, "ok - load so."

    invoke-static {v7, v8}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 384
    sget-object v7, Lorg/appplay/platformsdk/PlatformSDKCreater;->sSDK_CurrentName:Ljava/lang/String;

    invoke-static {v7}, Lorg/appplay/platformsdk/PlatformSDKNatives;->SetPlatformSDK(Ljava/lang/String;)V

    .line 388
    new-instance v5, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {v5, v10, v10}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    .line 392
    .local v5, "framelayout_params":Landroid/view/ViewGroup$LayoutParams;
    new-instance v4, Landroid/widget/FrameLayout;

    .line 393
    sget-object v7, Lorg/appplay/lib/AppPlayBaseActivity;->sTheActivity:Lorg/appplay/lib/AppPlayBaseActivity;

    .line 392
    invoke-direct {v4, v7}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;)V

    .line 394
    .local v4, "framelayout":Landroid/widget/FrameLayout;
    invoke-virtual {v4, v5}, Landroid/widget/FrameLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 397
    iget-object v7, p0, Lorg/appplay/lib/AppPlayBaseActivity$3;->this$0:Lorg/appplay/lib/AppPlayBaseActivity;

    invoke-static {v7}, Lorg/appplay/lib/AppPlayBaseActivity;->access$1(Lorg/appplay/lib/AppPlayBaseActivity;)Z

    move-result v7

    if-eqz v7, :cond_2

    .line 399
    invoke-static {}, Lorg/appplay/lib/AppPlayBaseActivity;->access$2()Ljava/lang/String;

    move-result-object v7

    invoke-static {}, Lorg/appplay/lib/AppPlayBaseActivity;->access$3()Ljava/lang/String;

    move-result-object v8

    invoke-static {v7, v8}, Lorg/appplay/lib/AppPlayNatives;->nativeInit(Ljava/lang/String;Ljava/lang/String;)V

    .line 400
    iget-object v7, p0, Lorg/appplay/lib/AppPlayBaseActivity$3;->this$0:Lorg/appplay/lib/AppPlayBaseActivity;

    new-instance v8, Lorg/appplay/lib/AppPlayGLView;

    .line 401
    sget-object v9, Lorg/appplay/lib/AppPlayBaseActivity;->sTheActivity:Lorg/appplay/lib/AppPlayBaseActivity;

    invoke-direct {v8, v9}, Lorg/appplay/lib/AppPlayGLView;-><init>(Landroid/content/Context;)V

    .line 400
    iput-object v8, v7, Lorg/appplay/lib/AppPlayBaseActivity;->TheGLView:Lorg/appplay/lib/AppPlayGLView;

    .line 408
    :goto_2
    iget-object v7, p0, Lorg/appplay/lib/AppPlayBaseActivity$3;->this$0:Lorg/appplay/lib/AppPlayBaseActivity;

    iget-object v7, v7, Lorg/appplay/lib/AppPlayBaseActivity;->TheGLView:Lorg/appplay/lib/AppPlayGLView;

    invoke-virtual {v4, v7}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;)V

    .line 412
    new-instance v2, Landroid/view/ViewGroup$LayoutParams;

    .line 414
    const/4 v7, -0x2

    .line 412
    invoke-direct {v2, v10, v7}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    .line 415
    .local v2, "edittext_layout_params":Landroid/view/ViewGroup$LayoutParams;
    new-instance v1, Lorg/appplay/lib/AppPlayEditText;

    .line 416
    sget-object v7, Lorg/appplay/lib/AppPlayBaseActivity;->sTheActivity:Lorg/appplay/lib/AppPlayBaseActivity;

    .line 415
    invoke-direct {v1, v7}, Lorg/appplay/lib/AppPlayEditText;-><init>(Landroid/content/Context;)V

    .line 417
    .local v1, "edittext":Lorg/appplay/lib/AppPlayEditText;
    invoke-virtual {v1, v2}, Lorg/appplay/lib/AppPlayEditText;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 418
    const/4 v7, 0x1

    invoke-virtual {v1, v7}, Lorg/appplay/lib/AppPlayEditText;->setSingleLine(Z)V

    .line 419
    const/4 v7, 0x6

    invoke-virtual {v1, v7}, Lorg/appplay/lib/AppPlayEditText;->setImeOptions(I)V

    .line 422
    invoke-virtual {v4, v1}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;)V

    .line 424
    iget-object v7, p0, Lorg/appplay/lib/AppPlayBaseActivity$3;->this$0:Lorg/appplay/lib/AppPlayBaseActivity;

    iget-object v7, v7, Lorg/appplay/lib/AppPlayBaseActivity;->TheGLView:Lorg/appplay/lib/AppPlayGLView;

    invoke-virtual {v7, v1}, Lorg/appplay/lib/AppPlayGLView;->SetEditText(Lorg/appplay/lib/AppPlayEditText;)V

    .line 427
    iget-object v7, p0, Lorg/appplay/lib/AppPlayBaseActivity$3;->this$0:Lorg/appplay/lib/AppPlayBaseActivity;

    invoke-virtual {v7, v4}, Lorg/appplay/lib/AppPlayBaseActivity;->setContentView(Landroid/view/View;)V

    .line 432
    iget-object v7, p0, Lorg/appplay/lib/AppPlayBaseActivity$3;->this$0:Lorg/appplay/lib/AppPlayBaseActivity;

    iget-object v7, v7, Lorg/appplay/lib/AppPlayBaseActivity;->mUpdateView:Lorg/appplay/lib/AppPlayUpdateLayout;

    if-eqz v7, :cond_0

    .line 433
    iget-object v7, p0, Lorg/appplay/lib/AppPlayBaseActivity$3;->this$0:Lorg/appplay/lib/AppPlayBaseActivity;

    iget-object v7, v7, Lorg/appplay/lib/AppPlayBaseActivity;->mUpdateView:Lorg/appplay/lib/AppPlayUpdateLayout;

    const/16 v8, 0x8

    invoke-virtual {v7, v8}, Lorg/appplay/lib/AppPlayUpdateLayout;->setVisibility(I)V

    .line 435
    :cond_0
    iget-object v7, p0, Lorg/appplay/lib/AppPlayBaseActivity$3;->this$0:Lorg/appplay/lib/AppPlayBaseActivity;

    invoke-virtual {v7}, Lorg/appplay/lib/AppPlayBaseActivity;->HideNavigationBar()V

    .line 437
    iget-object v7, p0, Lorg/appplay/lib/AppPlayBaseActivity$3;->this$0:Lorg/appplay/lib/AppPlayBaseActivity;

    invoke-virtual {v7}, Lorg/appplay/lib/AppPlayBaseActivity;->getWindow()Landroid/view/Window;

    move-result-object v7

    invoke-virtual {v7}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    .line 439
    .local v0, "decorView":Landroid/view/View;
    new-instance v7, Lorg/appplay/lib/AppPlayBaseActivity$3$1;

    invoke-direct {v7, p0}, Lorg/appplay/lib/AppPlayBaseActivity$3$1;-><init>(Lorg/appplay/lib/AppPlayBaseActivity$3;)V

    .line 438
    invoke-virtual {v0, v7}, Landroid/view/View;->setOnSystemUiVisibilityChangeListener(Landroid/view/View$OnSystemUiVisibilityChangeListener;)V

    .line 455
    return-void

    .line 353
    .end local v0    # "decorView":Landroid/view/View;
    .end local v1    # "edittext":Lorg/appplay/lib/AppPlayEditText;
    .end local v2    # "edittext_layout_params":Landroid/view/ViewGroup$LayoutParams;
    .end local v4    # "framelayout":Landroid/widget/FrameLayout;
    .end local v5    # "framelayout_params":Landroid/view/ViewGroup$LayoutParams;
    :catch_0
    move-exception v6

    .line 355
    .local v6, "ulink":Ljava/lang/UnsatisfiedLinkError;
    invoke-virtual {v6}, Ljava/lang/UnsatisfiedLinkError;->printStackTrace()V

    .line 357
    const-string v7, "appplay.lib"

    new-instance v8, Ljava/lang/StringBuilder;

    const-string v9, "end - load so(from dir Failed):"

    invoke-direct {v8, v9}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    sget-object v9, Lorg/appplay/lib/AppPlayBaseActivity;->sLibSO_Filename:Ljava/lang/String;

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v8

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {v7, v8}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto/16 :goto_0

    .line 364
    .end local v6    # "ulink":Ljava/lang/UnsatisfiedLinkError;
    :cond_1
    const-string v7, "appplay.lib"

    const-string v8, "begin - load so(form init packaged)."

    invoke-static {v7, v8}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 368
    :try_start_1
    const-string v7, "fmodex"

    invoke-static {v7}, Ljava/lang/System;->loadLibrary(Ljava/lang/String;)V

    .line 369
    invoke-static {}, Lorg/appplay/lib/AppPlayBaseActivity;->access$0()Ljava/lang/String;

    move-result-object v7

    invoke-static {v7}, Ljava/lang/System;->loadLibrary(Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/UnsatisfiedLinkError; {:try_start_1 .. :try_end_1} :catch_1

    .line 378
    :goto_3
    const-string v7, "appplay.lib"

    new-instance v8, Ljava/lang/StringBuilder;

    const-string v9, "end - load so(form init packaged):"

    invoke-direct {v8, v9}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-static {}, Lorg/appplay/lib/AppPlayBaseActivity;->access$0()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v8

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {v7, v8}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto/16 :goto_1

    .line 371
    :catch_1
    move-exception v6

    .line 373
    .restart local v6    # "ulink":Ljava/lang/UnsatisfiedLinkError;
    invoke-virtual {v6}, Ljava/lang/UnsatisfiedLinkError;->printStackTrace()V

    .line 375
    const-string v7, "appplay.lib"

    const-string v8, "end - load so(form init packaged Failed):"

    invoke-static {v7, v8}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_3

    .line 404
    .end local v6    # "ulink":Ljava/lang/UnsatisfiedLinkError;
    .restart local v4    # "framelayout":Landroid/widget/FrameLayout;
    .restart local v5    # "framelayout_params":Landroid/view/ViewGroup$LayoutParams;
    :cond_2
    const-string v7, "appplay.lib"

    const-string v8, "info - Don\'t support gles2.0"

    invoke-static {v7, v8}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 405
    iget-object v7, p0, Lorg/appplay/lib/AppPlayBaseActivity$3;->this$0:Lorg/appplay/lib/AppPlayBaseActivity;

    invoke-virtual {v7}, Lorg/appplay/lib/AppPlayBaseActivity;->finish()V

    goto/16 :goto_2
.end method
