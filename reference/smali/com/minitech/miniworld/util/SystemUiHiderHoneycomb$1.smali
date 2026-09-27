.class Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb$1;
.super Ljava/lang/Object;
.source "SystemUiHiderHoneycomb.java"

# interfaces
.implements Landroid/view/View$OnSystemUiVisibilityChangeListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb;


# direct methods
.method constructor <init>(Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb;)V
    .locals 0

    .prologue
    .line 1
    iput-object p1, p0, Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb$1;->this$0:Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb;

    .line 96
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onSystemUiVisibilityChange(I)V
    .locals 6
    .param p1, "vis"    # I

    .prologue
    const/16 v5, 0x10

    const/4 v4, 0x1

    const/16 v3, 0x400

    const/4 v2, 0x0

    .line 100
    iget-object v0, p0, Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb$1;->this$0:Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb;

    invoke-static {v0}, Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb;->access$0(Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb;)I

    move-result v0

    and-int/2addr v0, p1

    if-eqz v0, :cond_1

    .line 101
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    if-ge v0, v5, :cond_0

    .line 104
    iget-object v0, p0, Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb$1;->this$0:Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb;

    iget-object v0, v0, Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb;->mActivity:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->getActionBar()Landroid/app/ActionBar;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/ActionBar;->hide()V

    .line 105
    iget-object v0, p0, Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb$1;->this$0:Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb;

    iget-object v0, v0, Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb;->mActivity:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0, v3, v3}, Landroid/view/Window;->setFlags(II)V

    .line 112
    :cond_0
    iget-object v0, p0, Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb$1;->this$0:Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb;

    iget-object v0, v0, Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb;->mOnVisibilityChangeListener:Lcom/minitech/miniworld/util/SystemUiHider$OnVisibilityChangeListener;

    invoke-interface {v0, v2}, Lcom/minitech/miniworld/util/SystemUiHider$OnVisibilityChangeListener;->onVisibilityChange(Z)V

    .line 113
    iget-object v0, p0, Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb$1;->this$0:Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb;

    invoke-static {v0, v2}, Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb;->access$1(Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb;Z)V

    .line 131
    :goto_0
    return-void

    .line 116
    :cond_1
    iget-object v0, p0, Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb$1;->this$0:Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb;

    iget-object v0, v0, Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb;->mAnchorView:Landroid/view/View;

    iget-object v1, p0, Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb$1;->this$0:Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb;

    invoke-static {v1}, Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb;->access$2(Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/view/View;->setSystemUiVisibility(I)V

    .line 117
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    if-ge v0, v5, :cond_2

    .line 120
    iget-object v0, p0, Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb$1;->this$0:Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb;

    iget-object v0, v0, Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb;->mActivity:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->getActionBar()Landroid/app/ActionBar;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/ActionBar;->show()V

    .line 121
    iget-object v0, p0, Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb$1;->this$0:Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb;

    iget-object v0, v0, Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb;->mActivity:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0, v2, v3}, Landroid/view/Window;->setFlags(II)V

    .line 128
    :cond_2
    iget-object v0, p0, Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb$1;->this$0:Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb;

    iget-object v0, v0, Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb;->mOnVisibilityChangeListener:Lcom/minitech/miniworld/util/SystemUiHider$OnVisibilityChangeListener;

    invoke-interface {v0, v4}, Lcom/minitech/miniworld/util/SystemUiHider$OnVisibilityChangeListener;->onVisibilityChange(Z)V

    .line 129
    iget-object v0, p0, Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb$1;->this$0:Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb;

    invoke-static {v0, v4}, Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb;->access$1(Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb;Z)V

    goto :goto_0
.end method
