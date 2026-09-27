.class Lorg/appplay/lib/AppPlayUpdateLayout$6;
.super Ljava/lang/Object;
.source "AppPlayUpdateLayout.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lorg/appplay/lib/AppPlayUpdateLayout;->_Process(D)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lorg/appplay/lib/AppPlayUpdateLayout;

.field private final synthetic val$process:D


# direct methods
.method constructor <init>(Lorg/appplay/lib/AppPlayUpdateLayout;D)V
    .locals 0

    .prologue
    .line 1
    iput-object p1, p0, Lorg/appplay/lib/AppPlayUpdateLayout$6;->this$0:Lorg/appplay/lib/AppPlayUpdateLayout;

    iput-wide p2, p0, Lorg/appplay/lib/AppPlayUpdateLayout$6;->val$process:D

    .line 241
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    .prologue
    .line 245
    iget-object v0, p0, Lorg/appplay/lib/AppPlayUpdateLayout$6;->this$0:Lorg/appplay/lib/AppPlayUpdateLayout;

    invoke-static {v0}, Lorg/appplay/lib/AppPlayUpdateLayout;->access$6(Lorg/appplay/lib/AppPlayUpdateLayout;)Landroid/widget/ProgressBar;

    move-result-object v0

    iget-wide v2, p0, Lorg/appplay/lib/AppPlayUpdateLayout$6;->val$process:D

    double-to-int v1, v2

    invoke-virtual {v0, v1}, Landroid/widget/ProgressBar;->setProgress(I)V

    .line 246
    iget-object v0, p0, Lorg/appplay/lib/AppPlayUpdateLayout$6;->this$0:Lorg/appplay/lib/AppPlayUpdateLayout;

    invoke-static {v0}, Lorg/appplay/lib/AppPlayUpdateLayout;->access$5(Lorg/appplay/lib/AppPlayUpdateLayout;)Landroid/widget/TextView;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "\u66f4\u65b0\u6838\u5fc3\u7a0b\u5e8f..."

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-wide v2, p0, Lorg/appplay/lib/AppPlayUpdateLayout$6;->val$process:D

    double-to-int v2, v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v1

    const-string v2, "%"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 247
    iget-object v0, p0, Lorg/appplay/lib/AppPlayUpdateLayout$6;->this$0:Lorg/appplay/lib/AppPlayUpdateLayout;

    invoke-virtual {v0}, Lorg/appplay/lib/AppPlayUpdateLayout;->invalidate()V

    .line 248
    return-void
.end method
