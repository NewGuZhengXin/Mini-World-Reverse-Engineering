.class Lorg/appplay/lib/AppPlayGLView$3;
.super Ljava/lang/Object;
.source "AppPlayGLView.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lorg/appplay/lib/AppPlayGLView;->onResume()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lorg/appplay/lib/AppPlayGLView;


# direct methods
.method constructor <init>(Lorg/appplay/lib/AppPlayGLView;)V
    .locals 0

    .prologue
    .line 1
    iput-object p1, p0, Lorg/appplay/lib/AppPlayGLView$3;->this$0:Lorg/appplay/lib/AppPlayGLView;

    .line 135
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 0

    .prologue
    .line 140
    invoke-static {}, Lorg/appplay/lib/AppPlayNatives;->nativeOnResume()V

    .line 141
    return-void
.end method
