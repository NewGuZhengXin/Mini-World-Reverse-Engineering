.class Lorg/appplay/lib/AppPlayGLView$5;
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

.field private final synthetic val$idDown:I

.field private final synthetic val$xDown:F

.field private final synthetic val$yDown:F


# direct methods
.method constructor <init>(Lorg/appplay/lib/AppPlayGLView;IFF)V
    .locals 0

    .prologue
    .line 1
    iput-object p1, p0, Lorg/appplay/lib/AppPlayGLView$5;->this$0:Lorg/appplay/lib/AppPlayGLView;

    iput p2, p0, Lorg/appplay/lib/AppPlayGLView$5;->val$idDown:I

    iput p3, p0, Lorg/appplay/lib/AppPlayGLView$5;->val$xDown:F

    iput p4, p0, Lorg/appplay/lib/AppPlayGLView$5;->val$yDown:F

    .line 185
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .prologue
    .line 189
    iget v0, p0, Lorg/appplay/lib/AppPlayGLView$5;->val$idDown:I

    iget v1, p0, Lorg/appplay/lib/AppPlayGLView$5;->val$xDown:F

    iget v2, p0, Lorg/appplay/lib/AppPlayGLView$5;->val$yDown:F

    invoke-static {v0, v1, v2}, Lorg/appplay/lib/AppPlayNatives;->nativeTouchPressed(IFF)V

    .line 190
    return-void
.end method
