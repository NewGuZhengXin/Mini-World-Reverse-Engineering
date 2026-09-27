.class Lorg/appplay/lib/AppPlayGLView$12;
.super Ljava/lang/Object;
.source "AppPlayGLView.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lorg/appplay/lib/AppPlayGLView;->InsertText(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lorg/appplay/lib/AppPlayGLView;

.field private final synthetic val$text:Ljava/lang/String;


# direct methods
.method constructor <init>(Lorg/appplay/lib/AppPlayGLView;Ljava/lang/String;)V
    .locals 0

    .prologue
    .line 1
    iput-object p1, p0, Lorg/appplay/lib/AppPlayGLView$12;->this$0:Lorg/appplay/lib/AppPlayGLView;

    iput-object p2, p0, Lorg/appplay/lib/AppPlayGLView$12;->val$text:Ljava/lang/String;

    .line 323
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 1

    .prologue
    .line 328
    iget-object v0, p0, Lorg/appplay/lib/AppPlayGLView$12;->val$text:Ljava/lang/String;

    invoke-static {v0}, Lorg/appplay/lib/AppPlayNatives;->nativeInsertText(Ljava/lang/String;)V

    .line 329
    return-void
.end method
