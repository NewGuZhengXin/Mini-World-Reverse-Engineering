.class Lorg/appplay/lib/AppPlayGLView$4;
.super Ljava/lang/Object;
.source "AppPlayGLView.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lorg/appplay/lib/AppPlayGLView;->onTouchEvent(Landroid/view/MotionEvent;)Z
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lorg/appplay/lib/AppPlayGLView;

.field private final synthetic val$idPointerDown:I

.field private final synthetic val$xPointerDown:F

.field private final synthetic val$yPointerDown:F


# direct methods
.method constructor <init>(Lorg/appplay/lib/AppPlayGLView;IFF)V
    .locals 0

    .prologue
    .line 1
    iput-object p1, p0, Lorg/appplay/lib/AppPlayGLView$4;->this$0:Lorg/appplay/lib/AppPlayGLView;

    iput p2, p0, Lorg/appplay/lib/AppPlayGLView$4;->val$idPointerDown:I

    iput p3, p0, Lorg/appplay/lib/AppPlayGLView$4;->val$xPointerDown:F

    iput p4, p0, Lorg/appplay/lib/AppPlayGLView$4;->val$yPointerDown:F

    .line 169
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .prologue
    .line 173
    iget v0, p0, Lorg/appplay/lib/AppPlayGLView$4;->val$idPointerDown:I

    .line 174
    iget v1, p0, Lorg/appplay/lib/AppPlayGLView$4;->val$xPointerDown:F

    iget v2, p0, Lorg/appplay/lib/AppPlayGLView$4;->val$yPointerDown:F

    .line 173
    invoke-static {v0, v1, v2}, Lorg/appplay/lib/AppPlayNatives;->nativeTouchPressed(IFF)V

    .line 175
    return-void
.end method
