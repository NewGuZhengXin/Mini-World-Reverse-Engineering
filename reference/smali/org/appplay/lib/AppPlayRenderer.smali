.class Lorg/appplay/lib/AppPlayRenderer;
.super Ljava/lang/Object;
.source "AppPlayRenderer.java"

# interfaces
.implements Landroid/opengl/GLSurfaceView$Renderer;


# instance fields
.field private mActivity:Lorg/appplay/lib/AppPlayBaseActivity;

.field private mHeight:I

.field private mWidth:I


# direct methods
.method public constructor <init>(Lorg/appplay/lib/AppPlayBaseActivity;)V
    .locals 0
    .param p1, "activity"    # Lorg/appplay/lib/AppPlayBaseActivity;

    .prologue
    .line 15
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 17
    iput-object p1, p0, Lorg/appplay/lib/AppPlayRenderer;->mActivity:Lorg/appplay/lib/AppPlayBaseActivity;

    .line 18
    return-void
.end method


# virtual methods
.method public SetSize(II)V
    .locals 0
    .param p1, "w"    # I
    .param p2, "h"    # I

    .prologue
    .line 47
    iput p1, p0, Lorg/appplay/lib/AppPlayRenderer;->mWidth:I

    .line 48
    iput p2, p0, Lorg/appplay/lib/AppPlayRenderer;->mHeight:I

    .line 49
    return-void
.end method

.method public handleKeyDown(I)V
    .locals 0
    .param p1, "keyCode"    # I

    .prologue
    .line 53
    return-void
.end method

.method public onDrawFrame(Ljavax/microedition/khronos/opengles/GL10;)V
    .locals 0
    .param p1, "gl"    # Ljavax/microedition/khronos/opengles/GL10;

    .prologue
    .line 40
    invoke-static {}, Lorg/appplay/lib/AppPlayNatives;->nativeOnIdle()V

    .line 41
    return-void
.end method

.method public onSurfaceChanged(Ljavax/microedition/khronos/opengles/GL10;II)V
    .locals 0
    .param p1, "gl"    # Ljavax/microedition/khronos/opengles/GL10;
    .param p2, "width"    # I
    .param p3, "height"    # I

    .prologue
    .line 34
    return-void
.end method

.method public onSurfaceCreated(Ljavax/microedition/khronos/opengles/GL10;Ljavax/microedition/khronos/egl/EGLConfig;)V
    .locals 2
    .param p1, "gl"    # Ljavax/microedition/khronos/opengles/GL10;
    .param p2, "config"    # Ljavax/microedition/khronos/egl/EGLConfig;

    .prologue
    .line 23
    const-string v0, "appplay.lib"

    const-string v1, "begin - surface created, navtiveInit."

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 25
    iget v0, p0, Lorg/appplay/lib/AppPlayRenderer;->mWidth:I

    iget v1, p0, Lorg/appplay/lib/AppPlayRenderer;->mHeight:I

    invoke-static {v0, v1}, Lorg/appplay/lib/AppPlayNatives;->nativeOnResetRender(II)V

    .line 27
    const-string v0, "appplay.lib"

    const-string v1, "end - nativeInit."

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 28
    return-void
.end method
