.class Lorg/appplay/lib/AppPlayUpdateLayout$4;
.super Ljava/lang/Object;
.source "AppPlayUpdateLayout.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lorg/appplay/lib/AppPlayUpdateLayout;->_ShowUpdating()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lorg/appplay/lib/AppPlayUpdateLayout;


# direct methods
.method constructor <init>(Lorg/appplay/lib/AppPlayUpdateLayout;)V
    .locals 0

    .prologue
    .line 1
    iput-object p1, p0, Lorg/appplay/lib/AppPlayUpdateLayout$4;->this$0:Lorg/appplay/lib/AppPlayUpdateLayout;

    .line 214
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .prologue
    const/4 v1, 0x0

    .line 218
    iget-object v0, p0, Lorg/appplay/lib/AppPlayUpdateLayout$4;->this$0:Lorg/appplay/lib/AppPlayUpdateLayout;

    invoke-static {v0}, Lorg/appplay/lib/AppPlayUpdateLayout;->access$5(Lorg/appplay/lib/AppPlayUpdateLayout;)Landroid/widget/TextView;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 219
    iget-object v0, p0, Lorg/appplay/lib/AppPlayUpdateLayout$4;->this$0:Lorg/appplay/lib/AppPlayUpdateLayout;

    invoke-static {v0}, Lorg/appplay/lib/AppPlayUpdateLayout;->access$6(Lorg/appplay/lib/AppPlayUpdateLayout;)Landroid/widget/ProgressBar;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/widget/ProgressBar;->setVisibility(I)V

    .line 220
    iget-object v0, p0, Lorg/appplay/lib/AppPlayUpdateLayout$4;->this$0:Lorg/appplay/lib/AppPlayUpdateLayout;

    invoke-static {v0}, Lorg/appplay/lib/AppPlayUpdateLayout;->access$5(Lorg/appplay/lib/AppPlayUpdateLayout;)Landroid/widget/TextView;

    move-result-object v0

    const-string v1, "\u66f4\u65b0\u6838\u5fc3\u7a0b\u5e8f..."

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 221
    iget-object v0, p0, Lorg/appplay/lib/AppPlayUpdateLayout$4;->this$0:Lorg/appplay/lib/AppPlayUpdateLayout;

    invoke-virtual {v0}, Lorg/appplay/lib/AppPlayUpdateLayout;->invalidate()V

    .line 222
    return-void
.end method
