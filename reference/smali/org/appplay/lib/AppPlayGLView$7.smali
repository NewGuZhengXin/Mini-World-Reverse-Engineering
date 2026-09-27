.class Lorg/appplay/lib/AppPlayGLView$7;
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

.field private final synthetic val$idPointerUp:I

.field private final synthetic val$xPointerUp:F

.field private final synthetic val$yPointerUp:F


# direct methods
.method constructor <init>(Lorg/appplay/lib/AppPlayGLView;IFF)V
    .locals 0

    .prologue
    .line 1
    iput-object p1, p0, Lorg/appplay/lib/AppPlayGLView$7;->this$0:Lorg/appplay/lib/AppPlayGLView;

    iput p2, p0, Lorg/appplay/lib/AppPlayGLView$7;->val$idPointerUp:I

    iput p3, p0, Lorg/appplay/lib/AppPlayGLView$7;->val$xPointerUp:F

    iput p4, p0, Lorg/appplay/lib/AppPlayGLView$7;->val$yPointerUp:F

    .line 210
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .prologue
    .line 215
    iget v0, p0, Lorg/appplay/lib/AppPlayGLView$7;->val$idPointerUp:I

    iget v1, p0, Lorg/appplay/lib/AppPlayGLView$7;->val$xPointerUp:F

    .line 216
    iget v2, p0, Lorg/appplay/lib/AppPlayGLView$7;->val$yPointerUp:F

    .line 215
    invoke-static {v0, v1, v2}, Lorg/appplay/lib/AppPlayNatives;->nativeTouchReleased(IFF)V

    .line 217
    return-void
.end method
