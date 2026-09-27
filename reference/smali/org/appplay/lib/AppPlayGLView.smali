.class public Lorg/appplay/lib/AppPlayGLView;
.super Landroid/opengl/GLSurfaceView;
.source "AppPlayGLView.java"


# static fields
.field private static final HANDLER_CLOSE_IME_KEYBOARD:I = 0x3

.field private static final HANDLER_OPEN_IME_KEYBOARD:I = 0x2

.field private static msHandler:Landroid/os/Handler;

.field private static msTextInputWraper:Lorg/appplay/lib/AppPlayTextInputWraper;

.field private static sTheAppPlayGLView:Lorg/appplay/lib/AppPlayGLView;


# instance fields
.field private mEditText:Lorg/appplay/lib/AppPlayEditText;

.field private mRenderer:Lorg/appplay/lib/AppPlayRenderer;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 7
    .param p1, "context"    # Landroid/content/Context;

    .prologue
    const/4 v0, 0x0

    const/4 v1, 0x5

    const/4 v4, 0x0

    .line 29
    invoke-direct {p0, p1}, Landroid/opengl/GLSurfaceView;-><init>(Landroid/content/Context;)V

    .line 24
    iput-object v0, p0, Lorg/appplay/lib/AppPlayGLView;->mRenderer:Lorg/appplay/lib/AppPlayRenderer;

    .line 25
    iput-object v0, p0, Lorg/appplay/lib/AppPlayGLView;->mEditText:Lorg/appplay/lib/AppPlayEditText;

    .line 31
    const/4 v0, 0x2

    invoke-virtual {p0, v0}, Lorg/appplay/lib/AppPlayGLView;->setEGLContextClientVersion(I)V

    .line 33
    const/4 v2, 0x6

    const/16 v5, 0x10

    move-object v0, p0

    move v3, v1

    move v6, v4

    invoke-virtual/range {v0 .. v6}, Lorg/appplay/lib/AppPlayGLView;->setEGLConfigChooser(IIIIII)V

    .line 35
    new-instance v0, Lorg/appplay/lib/AppPlayRenderer;

    check-cast p1, Lorg/appplay/lib/AppPlayBaseActivity;

    .end local p1    # "context":Landroid/content/Context;
    invoke-direct {v0, p1}, Lorg/appplay/lib/AppPlayRenderer;-><init>(Lorg/appplay/lib/AppPlayBaseActivity;)V

    iput-object v0, p0, Lorg/appplay/lib/AppPlayGLView;->mRenderer:Lorg/appplay/lib/AppPlayRenderer;

    .line 36
    iget-object v0, p0, Lorg/appplay/lib/AppPlayGLView;->mRenderer:Lorg/appplay/lib/AppPlayRenderer;

    invoke-virtual {p0, v0}, Lorg/appplay/lib/AppPlayGLView;->setRenderer(Landroid/opengl/GLSurfaceView$Renderer;)V

    .line 37
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0xb

    if-lt v0, v1, :cond_0

    .line 38
    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Lorg/appplay/lib/AppPlayGLView;->setPreserveEGLContextOnPause(Z)V

    .line 40
    :cond_0
    invoke-direct {p0}, Lorg/appplay/lib/AppPlayGLView;->_InitView()V

    .line 42
    const-string v0, "appplay.lib"

    const-string v1, "info -AppPlayGLView created."

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 43
    return-void
.end method

.method public static CloseIMEKeyboard()V
    .locals 2

    .prologue
    .line 310
    new-instance v0, Landroid/os/Message;

    invoke-direct {v0}, Landroid/os/Message;-><init>()V

    .line 311
    .local v0, "msg":Landroid/os/Message;
    const/4 v1, 0x3

    iput v1, v0, Landroid/os/Message;->what:I

    .line 312
    sget-object v1, Lorg/appplay/lib/AppPlayGLView;->msHandler:Landroid/os/Handler;

    invoke-virtual {v1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 313
    return-void
.end method

.method private GetContentText()Ljava/lang/String;
    .locals 3

    .prologue
    .line 317
    const-string v0, "appplay.lib"

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "nativeGetContentText"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-static {}, Lorg/appplay/lib/AppPlayNatives;->nativeGetContentText()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    .line 318
    invoke-static {}, Lorg/appplay/lib/AppPlayNatives;->nativeGetContentText()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static OpenIMEKeyboard()V
    .locals 2

    .prologue
    .line 302
    new-instance v0, Landroid/os/Message;

    invoke-direct {v0}, Landroid/os/Message;-><init>()V

    .line 303
    .local v0, "msg":Landroid/os/Message;
    const/4 v1, 0x2

    iput v1, v0, Landroid/os/Message;->what:I

    .line 304
    sget-object v1, Lorg/appplay/lib/AppPlayGLView;->sTheAppPlayGLView:Lorg/appplay/lib/AppPlayGLView;

    invoke-direct {v1}, Lorg/appplay/lib/AppPlayGLView;->GetContentText()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 305
    sget-object v1, Lorg/appplay/lib/AppPlayGLView;->msHandler:Landroid/os/Handler;

    invoke-virtual {v1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 306
    return-void
.end method

.method private _InitView()V
    .locals 1

    .prologue
    .line 52
    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Lorg/appplay/lib/AppPlayGLView;->setFocusableInTouchMode(Z)V

    .line 54
    sput-object p0, Lorg/appplay/lib/AppPlayGLView;->sTheAppPlayGLView:Lorg/appplay/lib/AppPlayGLView;

    .line 55
    new-instance v0, Lorg/appplay/lib/AppPlayTextInputWraper;

    invoke-direct {v0, p0}, Lorg/appplay/lib/AppPlayTextInputWraper;-><init>(Lorg/appplay/lib/AppPlayGLView;)V

    sput-object v0, Lorg/appplay/lib/AppPlayGLView;->msTextInputWraper:Lorg/appplay/lib/AppPlayTextInputWraper;

    .line 57
    new-instance v0, Lorg/appplay/lib/AppPlayGLView$1;

    invoke-direct {v0, p0}, Lorg/appplay/lib/AppPlayGLView$1;-><init>(Lorg/appplay/lib/AppPlayGLView;)V

    sput-object v0, Lorg/appplay/lib/AppPlayGLView;->msHandler:Landroid/os/Handler;

    .line 106
    return-void
.end method

.method static synthetic access$0(Lorg/appplay/lib/AppPlayGLView;)Lorg/appplay/lib/AppPlayEditText;
    .locals 1

    .prologue
    .line 25
    iget-object v0, p0, Lorg/appplay/lib/AppPlayGLView;->mEditText:Lorg/appplay/lib/AppPlayEditText;

    return-object v0
.end method

.method static synthetic access$1()Lorg/appplay/lib/AppPlayTextInputWraper;
    .locals 1

    .prologue
    .line 21
    sget-object v0, Lorg/appplay/lib/AppPlayGLView;->msTextInputWraper:Lorg/appplay/lib/AppPlayTextInputWraper;

    return-object v0
.end method

.method static synthetic access$2()Lorg/appplay/lib/AppPlayGLView;
    .locals 1

    .prologue
    .line 20
    sget-object v0, Lorg/appplay/lib/AppPlayGLView;->sTheAppPlayGLView:Lorg/appplay/lib/AppPlayGLView;

    return-object v0
.end method

.method static synthetic access$3(Lorg/appplay/lib/AppPlayGLView;)Lorg/appplay/lib/AppPlayRenderer;
    .locals 1

    .prologue
    .line 24
    iget-object v0, p0, Lorg/appplay/lib/AppPlayGLView;->mRenderer:Lorg/appplay/lib/AppPlayRenderer;

    return-object v0
.end method


# virtual methods
.method public DeleteBackward()V
    .locals 1

    .prologue
    .line 335
    new-instance v0, Lorg/appplay/lib/AppPlayGLView$13;

    invoke-direct {v0, p0}, Lorg/appplay/lib/AppPlayGLView$13;-><init>(Lorg/appplay/lib/AppPlayGLView;)V

    invoke-virtual {p0, v0}, Lorg/appplay/lib/AppPlayGLView;->queueEvent(Ljava/lang/Runnable;)V

    .line 342
    return-void
.end method

.method public Destory()V
    .locals 1

    .prologue
    .line 268
    new-instance v0, Lorg/appplay/lib/AppPlayGLView$10;

    invoke-direct {v0, p0}, Lorg/appplay/lib/AppPlayGLView$10;-><init>(Lorg/appplay/lib/AppPlayGLView;)V

    invoke-virtual {p0, v0}, Lorg/appplay/lib/AppPlayGLView;->queueEvent(Ljava/lang/Runnable;)V

    .line 275
    return-void
.end method

.method public GetEditText()Landroid/widget/TextView;
    .locals 1

    .prologue
    .line 47
    iget-object v0, p0, Lorg/appplay/lib/AppPlayGLView;->mEditText:Lorg/appplay/lib/AppPlayEditText;

    return-object v0
.end method

.method public InsertText(Ljava/lang/String;)V
    .locals 1
    .param p1, "text"    # Ljava/lang/String;

    .prologue
    .line 323
    new-instance v0, Lorg/appplay/lib/AppPlayGLView$12;

    invoke-direct {v0, p0, p1}, Lorg/appplay/lib/AppPlayGLView$12;-><init>(Lorg/appplay/lib/AppPlayGLView;Ljava/lang/String;)V

    invoke-virtual {p0, v0}, Lorg/appplay/lib/AppPlayGLView;->queueEvent(Ljava/lang/Runnable;)V

    .line 331
    return-void
.end method

.method public SetEditText(Lorg/appplay/lib/AppPlayEditText;)V
    .locals 2
    .param p1, "edittext"    # Lorg/appplay/lib/AppPlayEditText;

    .prologue
    .line 252
    iput-object p1, p0, Lorg/appplay/lib/AppPlayGLView;->mEditText:Lorg/appplay/lib/AppPlayEditText;

    .line 254
    iget-object v0, p0, Lorg/appplay/lib/AppPlayGLView;->mEditText:Lorg/appplay/lib/AppPlayEditText;

    if-eqz v0, :cond_0

    sget-object v0, Lorg/appplay/lib/AppPlayGLView;->msTextInputWraper:Lorg/appplay/lib/AppPlayTextInputWraper;

    if-eqz v0, :cond_0

    .line 256
    iget-object v0, p0, Lorg/appplay/lib/AppPlayGLView;->mEditText:Lorg/appplay/lib/AppPlayEditText;

    sget-object v1, Lorg/appplay/lib/AppPlayGLView;->msTextInputWraper:Lorg/appplay/lib/AppPlayTextInputWraper;

    invoke-virtual {v0, v1}, Lorg/appplay/lib/AppPlayEditText;->setOnEditorActionListener(Landroid/widget/TextView$OnEditorActionListener;)V

    .line 257
    iget-object v0, p0, Lorg/appplay/lib/AppPlayGLView;->mEditText:Lorg/appplay/lib/AppPlayEditText;

    invoke-virtual {v0, p0}, Lorg/appplay/lib/AppPlayEditText;->SetGLView(Lorg/appplay/lib/AppPlayGLView;)V

    .line 259
    iget-object v0, p0, Lorg/appplay/lib/AppPlayGLView;->mEditText:Lorg/appplay/lib/AppPlayEditText;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Lorg/appplay/lib/AppPlayEditText;->setVisibility(I)V

    .line 260
    invoke-virtual {p0}, Lorg/appplay/lib/AppPlayGLView;->requestFocus()Z

    .line 262
    :cond_0
    return-void
.end method

.method public onKeyDown(ILandroid/view/KeyEvent;)Z
    .locals 1
    .param p1, "pKeyCode"    # I
    .param p2, "pKeyEvent"    # Landroid/view/KeyEvent;

    .prologue
    .line 279
    sparse-switch p1, :sswitch_data_0

    .line 296
    invoke-super {p0, p1, p2}, Landroid/opengl/GLSurfaceView;->onKeyDown(ILandroid/view/KeyEvent;)Z

    move-result v0

    :goto_0
    return v0

    .line 288
    :sswitch_0
    new-instance v0, Lorg/appplay/lib/AppPlayGLView$11;

    invoke-direct {v0, p0, p1}, Lorg/appplay/lib/AppPlayGLView$11;-><init>(Lorg/appplay/lib/AppPlayGLView;I)V

    invoke-virtual {p0, v0}, Lorg/appplay/lib/AppPlayGLView;->queueEvent(Ljava/lang/Runnable;)V

    .line 294
    const/4 v0, 0x1

    goto :goto_0

    .line 279
    :sswitch_data_0
    .sparse-switch
        0x13 -> :sswitch_0
        0x14 -> :sswitch_0
        0x15 -> :sswitch_0
        0x16 -> :sswitch_0
        0x17 -> :sswitch_0
        0x42 -> :sswitch_0
        0x52 -> :sswitch_0
        0x55 -> :sswitch_0
    .end sparse-switch
.end method

.method public onPause()V
    .locals 1

    .prologue
    .line 119
    new-instance v0, Lorg/appplay/lib/AppPlayGLView$2;

    invoke-direct {v0, p0}, Lorg/appplay/lib/AppPlayGLView$2;-><init>(Lorg/appplay/lib/AppPlayGLView;)V

    invoke-virtual {p0, v0}, Lorg/appplay/lib/AppPlayGLView;->queueEvent(Ljava/lang/Runnable;)V

    .line 127
    invoke-super {p0}, Landroid/opengl/GLSurfaceView;->onPause()V

    .line 128
    return-void
.end method

.method public onResume()V
    .locals 1

    .prologue
    .line 133
    invoke-super {p0}, Landroid/opengl/GLSurfaceView;->onResume()V

    .line 135
    new-instance v0, Lorg/appplay/lib/AppPlayGLView$3;

    invoke-direct {v0, p0}, Lorg/appplay/lib/AppPlayGLView$3;-><init>(Lorg/appplay/lib/AppPlayGLView;)V

    invoke-virtual {p0, v0}, Lorg/appplay/lib/AppPlayGLView;->queueEvent(Ljava/lang/Runnable;)V

    .line 143
    return-void
.end method

.method protected onSizeChanged(IIII)V
    .locals 2
    .param p1, "w"    # I
    .param p2, "h"    # I
    .param p3, "oldw"    # I
    .param p4, "oldh"    # I

    .prologue
    .line 111
    iget-object v0, p0, Lorg/appplay/lib/AppPlayGLView;->mRenderer:Lorg/appplay/lib/AppPlayRenderer;

    if-eqz v0, :cond_0

    .line 112
    iget-object v0, p0, Lorg/appplay/lib/AppPlayGLView;->mRenderer:Lorg/appplay/lib/AppPlayRenderer;

    invoke-virtual {v0, p1, p2}, Lorg/appplay/lib/AppPlayRenderer;->SetSize(II)V

    .line 113
    :cond_0
    const-string v0, "appplay.lib"

    const-string v1, "info - AppPlayGLView::onSizeChanged"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 114
    return-void
.end method

.method public onTouchEvent(Landroid/view/MotionEvent;)Z
    .locals 24
    .param p1, "event"    # Landroid/view/MotionEvent;

    .prologue
    .line 149
    invoke-virtual/range {p1 .. p1}, Landroid/view/MotionEvent;->getPointerCount()I

    move-result v12

    .line 150
    .local v12, "pointerNumber":I
    new-array v9, v12, [I

    .line 151
    .local v9, "ids":[I
    new-array v0, v12, [F

    move-object/from16 v17, v0

    .line 152
    .local v17, "xs":[F
    new-array v0, v12, [F

    move-object/from16 v22, v0

    .line 154
    .local v22, "ys":[F
    const/4 v4, 0x0

    .local v4, "i":I
    :goto_0
    if-lt v4, v12, :cond_0

    .line 161
    invoke-virtual/range {p1 .. p1}, Landroid/view/MotionEvent;->getAction()I

    move-result v23

    move/from16 v0, v23

    and-int/lit16 v0, v0, 0xff

    move/from16 v23, v0

    packed-switch v23, :pswitch_data_0

    .line 245
    :goto_1
    :pswitch_0
    const/16 v23, 0x1

    return v23

    .line 156
    :cond_0
    move-object/from16 v0, p1

    invoke-virtual {v0, v4}, Landroid/view/MotionEvent;->getPointerId(I)I

    move-result v23

    aput v23, v9, v4

    .line 157
    move-object/from16 v0, p1

    invoke-virtual {v0, v4}, Landroid/view/MotionEvent;->getX(I)F

    move-result v23

    aput v23, v17, v4

    .line 158
    move-object/from16 v0, p1

    invoke-virtual {v0, v4}, Landroid/view/MotionEvent;->getY(I)F

    move-result v23

    aput v23, v22, v4

    .line 154
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .line 164
    :pswitch_1
    invoke-virtual/range {p1 .. p1}, Landroid/view/MotionEvent;->getAction()I

    move-result v23

    shr-int/lit8 v11, v23, 0x8

    .line 165
    .local v11, "indexPointerDown":I
    move-object/from16 v0, p1

    invoke-virtual {v0, v11}, Landroid/view/MotionEvent;->getPointerId(I)I

    move-result v6

    .line 166
    .local v6, "idPointerDown":I
    move-object/from16 v0, p1

    invoke-virtual {v0, v11}, Landroid/view/MotionEvent;->getX(I)F

    move-result v14

    .line 167
    .local v14, "xPointerDown":F
    move-object/from16 v0, p1

    invoke-virtual {v0, v11}, Landroid/view/MotionEvent;->getY(I)F

    move-result v19

    .line 169
    .local v19, "yPointerDown":F
    new-instance v23, Lorg/appplay/lib/AppPlayGLView$4;

    move-object/from16 v0, v23

    move-object/from16 v1, p0

    move/from16 v2, v19

    invoke-direct {v0, v1, v6, v14, v2}, Lorg/appplay/lib/AppPlayGLView$4;-><init>(Lorg/appplay/lib/AppPlayGLView;IFF)V

    move-object/from16 v0, p0

    move-object/from16 v1, v23

    invoke-virtual {v0, v1}, Lorg/appplay/lib/AppPlayGLView;->queueEvent(Ljava/lang/Runnable;)V

    goto :goto_1

    .line 181
    .end local v6    # "idPointerDown":I
    .end local v11    # "indexPointerDown":I
    .end local v14    # "xPointerDown":F
    .end local v19    # "yPointerDown":F
    :pswitch_2
    const/16 v23, 0x0

    move-object/from16 v0, p1

    move/from16 v1, v23

    invoke-virtual {v0, v1}, Landroid/view/MotionEvent;->getPointerId(I)I

    move-result v5

    .line 182
    .local v5, "idDown":I
    const/16 v23, 0x0

    aget v13, v17, v23

    .line 183
    .local v13, "xDown":F
    const/16 v23, 0x0

    aget v18, v22, v23

    .line 185
    .local v18, "yDown":F
    new-instance v23, Lorg/appplay/lib/AppPlayGLView$5;

    move-object/from16 v0, v23

    move-object/from16 v1, p0

    move/from16 v2, v18

    invoke-direct {v0, v1, v5, v13, v2}, Lorg/appplay/lib/AppPlayGLView$5;-><init>(Lorg/appplay/lib/AppPlayGLView;IFF)V

    move-object/from16 v0, p0

    move-object/from16 v1, v23

    invoke-virtual {v0, v1}, Lorg/appplay/lib/AppPlayGLView;->queueEvent(Ljava/lang/Runnable;)V

    goto :goto_1

    .line 195
    .end local v5    # "idDown":I
    .end local v13    # "xDown":F
    .end local v18    # "yDown":F
    :pswitch_3
    new-instance v23, Lorg/appplay/lib/AppPlayGLView$6;

    move-object/from16 v0, v23

    move-object/from16 v1, p0

    move-object/from16 v2, v17

    move-object/from16 v3, v22

    invoke-direct {v0, v1, v9, v2, v3}, Lorg/appplay/lib/AppPlayGLView$6;-><init>(Lorg/appplay/lib/AppPlayGLView;[I[F[F)V

    move-object/from16 v0, p0

    move-object/from16 v1, v23

    invoke-virtual {v0, v1}, Lorg/appplay/lib/AppPlayGLView;->queueEvent(Ljava/lang/Runnable;)V

    goto/16 :goto_1

    .line 205
    :pswitch_4
    invoke-virtual/range {p1 .. p1}, Landroid/view/MotionEvent;->getAction()I

    move-result v23

    shr-int/lit8 v10, v23, 0x8

    .line 206
    .local v10, "indexPointUp":I
    move-object/from16 v0, p1

    invoke-virtual {v0, v10}, Landroid/view/MotionEvent;->getPointerId(I)I

    move-result v7

    .line 207
    .local v7, "idPointerUp":I
    move-object/from16 v0, p1

    invoke-virtual {v0, v10}, Landroid/view/MotionEvent;->getX(I)F

    move-result v15

    .line 208
    .local v15, "xPointerUp":F
    move-object/from16 v0, p1

    invoke-virtual {v0, v10}, Landroid/view/MotionEvent;->getY(I)F

    move-result v20

    .line 210
    .local v20, "yPointerUp":F
    new-instance v23, Lorg/appplay/lib/AppPlayGLView$7;

    move-object/from16 v0, v23

    move-object/from16 v1, p0

    move/from16 v2, v20

    invoke-direct {v0, v1, v7, v15, v2}, Lorg/appplay/lib/AppPlayGLView$7;-><init>(Lorg/appplay/lib/AppPlayGLView;IFF)V

    move-object/from16 v0, p0

    move-object/from16 v1, v23

    invoke-virtual {v0, v1}, Lorg/appplay/lib/AppPlayGLView;->queueEvent(Ljava/lang/Runnable;)V

    goto/16 :goto_1

    .line 222
    .end local v7    # "idPointerUp":I
    .end local v10    # "indexPointUp":I
    .end local v15    # "xPointerUp":F
    .end local v20    # "yPointerUp":F
    :pswitch_5
    const/16 v23, 0x0

    move-object/from16 v0, p1

    move/from16 v1, v23

    invoke-virtual {v0, v1}, Landroid/view/MotionEvent;->getPointerId(I)I

    move-result v8

    .line 223
    .local v8, "idUp":I
    const/16 v23, 0x0

    aget v16, v17, v23

    .line 224
    .local v16, "xUp":F
    const/16 v23, 0x0

    aget v21, v22, v23

    .line 226
    .local v21, "yUp":F
    new-instance v23, Lorg/appplay/lib/AppPlayGLView$8;

    move-object/from16 v0, v23

    move-object/from16 v1, p0

    move/from16 v2, v16

    move/from16 v3, v21

    invoke-direct {v0, v1, v8, v2, v3}, Lorg/appplay/lib/AppPlayGLView$8;-><init>(Lorg/appplay/lib/AppPlayGLView;IFF)V

    move-object/from16 v0, p0

    move-object/from16 v1, v23

    invoke-virtual {v0, v1}, Lorg/appplay/lib/AppPlayGLView;->queueEvent(Ljava/lang/Runnable;)V

    goto/16 :goto_1

    .line 236
    .end local v8    # "idUp":I
    .end local v16    # "xUp":F
    .end local v21    # "yUp":F
    :pswitch_6
    new-instance v23, Lorg/appplay/lib/AppPlayGLView$9;

    move-object/from16 v0, v23

    move-object/from16 v1, p0

    move-object/from16 v2, v17

    move-object/from16 v3, v22

    invoke-direct {v0, v1, v9, v2, v3}, Lorg/appplay/lib/AppPlayGLView$9;-><init>(Lorg/appplay/lib/AppPlayGLView;[I[F[F)V

    move-object/from16 v0, p0

    move-object/from16 v1, v23

    invoke-virtual {v0, v1}, Lorg/appplay/lib/AppPlayGLView;->queueEvent(Ljava/lang/Runnable;)V

    goto/16 :goto_1

    .line 161
    :pswitch_data_0
    .packed-switch 0x0
        :pswitch_2
        :pswitch_5
        :pswitch_3
        :pswitch_6
        :pswitch_0
        :pswitch_1
        :pswitch_4
    .end packed-switch
.end method
