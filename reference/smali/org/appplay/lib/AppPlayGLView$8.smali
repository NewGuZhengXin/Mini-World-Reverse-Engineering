.class Lorg/appplay/lib/AppPlayGLView$8;
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

.field private final synthetic val$idUp:I

.field private final synthetic val$xUp:F

.field private final synthetic val$yUp:F


# direct methods
.method constructor <init>(Lorg/appplay/lib/AppPlayGLView;IFF)V
    .locals 0

    .prologue
    .line 1
    iput-object p1, p0, Lorg/appplay/lib/AppPlayGLView$8;->this$0:Lorg/appplay/lib/AppPlayGLView;

    iput p2, p0, Lorg/appplay/lib/AppPlayGLView$8;->val$idUp:I

    iput p3, p0, Lorg/appplay/lib/AppPlayGLView$8;->val$xUp:F

    iput p4, p0, Lorg/appplay/lib/AppPlayGLView$8;->val$yUp:F

    .line 226
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .prologue
    .line 230
    iget v0, p0, Lorg/appplay/lib/AppPlayGLView$8;->val$idUp:I

    iget v1, p0, Lorg/appplay/lib/AppPlayGLView$8;->val$xUp:F

    iget v2, p0, Lorg/appplay/lib/AppPlayGLView$8;->val$yUp:F

    invoke-static {v0, v1, v2}, Lorg/appplay/lib/AppPlayNatives;->nativeTouchReleased(IFF)V

    .line 231
    return-void
.end method
