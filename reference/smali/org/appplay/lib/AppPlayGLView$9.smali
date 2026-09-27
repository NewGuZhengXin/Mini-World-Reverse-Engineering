.class Lorg/appplay/lib/AppPlayGLView$9;
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

.field private final synthetic val$ids:[I

.field private final synthetic val$xs:[F

.field private final synthetic val$ys:[F


# direct methods
.method constructor <init>(Lorg/appplay/lib/AppPlayGLView;[I[F[F)V
    .locals 0

    .prologue
    .line 1
    iput-object p1, p0, Lorg/appplay/lib/AppPlayGLView$9;->this$0:Lorg/appplay/lib/AppPlayGLView;

    iput-object p2, p0, Lorg/appplay/lib/AppPlayGLView$9;->val$ids:[I

    iput-object p3, p0, Lorg/appplay/lib/AppPlayGLView$9;->val$xs:[F

    iput-object p4, p0, Lorg/appplay/lib/AppPlayGLView$9;->val$ys:[F

    .line 236
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .prologue
    .line 240
    iget-object v0, p0, Lorg/appplay/lib/AppPlayGLView$9;->val$ids:[I

    iget-object v1, p0, Lorg/appplay/lib/AppPlayGLView$9;->val$xs:[F

    iget-object v2, p0, Lorg/appplay/lib/AppPlayGLView$9;->val$ys:[F

    invoke-static {v0, v1, v2}, Lorg/appplay/lib/AppPlayNatives;->nativeTouchCancelled([I[F[F)V

    .line 241
    return-void
.end method
