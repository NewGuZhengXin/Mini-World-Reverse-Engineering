.class Lorg/appplay/lib/AppPlayGLView$11;
.super Ljava/lang/Object;
.source "AppPlayGLView.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lorg/appplay/lib/AppPlayGLView;->onKeyDown(ILandroid/view/KeyEvent;)Z
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lorg/appplay/lib/AppPlayGLView;

.field private final synthetic val$pKeyCode:I


# direct methods
.method constructor <init>(Lorg/appplay/lib/AppPlayGLView;I)V
    .locals 0

    .prologue
    .line 1
    iput-object p1, p0, Lorg/appplay/lib/AppPlayGLView$11;->this$0:Lorg/appplay/lib/AppPlayGLView;

    iput p2, p0, Lorg/appplay/lib/AppPlayGLView$11;->val$pKeyCode:I

    .line 288
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .prologue
    .line 291
    iget-object v0, p0, Lorg/appplay/lib/AppPlayGLView$11;->this$0:Lorg/appplay/lib/AppPlayGLView;

    invoke-static {v0}, Lorg/appplay/lib/AppPlayGLView;->access$3(Lorg/appplay/lib/AppPlayGLView;)Lorg/appplay/lib/AppPlayRenderer;

    move-result-object v0

    iget v1, p0, Lorg/appplay/lib/AppPlayGLView$11;->val$pKeyCode:I

    invoke-virtual {v0, v1}, Lorg/appplay/lib/AppPlayRenderer;->handleKeyDown(I)V

    .line 292
    return-void
.end method
