.class public Lcom/minitech/miniworld/util/SystemUiHiderBase;
.super Lcom/minitech/miniworld/util/SystemUiHider;
.source "SystemUiHiderBase.java"


# instance fields
.field private mVisible:Z


# direct methods
.method protected constructor <init>(Landroid/app/Activity;Landroid/view/View;I)V
    .locals 1
    .param p1, "activity"    # Landroid/app/Activity;
    .param p2, "anchorView"    # Landroid/view/View;
    .param p3, "flags"    # I

    .prologue
    .line 23
    invoke-direct {p0, p1, p2, p3}, Lcom/minitech/miniworld/util/SystemUiHider;-><init>(Landroid/app/Activity;Landroid/view/View;I)V

    .line 16
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/minitech/miniworld/util/SystemUiHiderBase;->mVisible:Z

    .line 24
    return-void
.end method


# virtual methods
.method public hide()V
    .locals 3

    .prologue
    const/16 v2, 0x400

    const/4 v1, 0x0

    .line 44
    iget v0, p0, Lcom/minitech/miniworld/util/SystemUiHiderBase;->mFlags:I

    and-int/lit8 v0, v0, 0x2

    if-eqz v0, :cond_0

    .line 45
    iget-object v0, p0, Lcom/minitech/miniworld/util/SystemUiHiderBase;->mActivity:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0, v2, v2}, Landroid/view/Window;->setFlags(II)V

    .line 49
    :cond_0
    iget-object v0, p0, Lcom/minitech/miniworld/util/SystemUiHiderBase;->mOnVisibilityChangeListener:Lcom/minitech/miniworld/util/SystemUiHider$OnVisibilityChangeListener;

    invoke-interface {v0, v1}, Lcom/minitech/miniworld/util/SystemUiHider$OnVisibilityChangeListener;->onVisibilityChange(Z)V

    .line 50
    iput-boolean v1, p0, Lcom/minitech/miniworld/util/SystemUiHiderBase;->mVisible:Z

    .line 51
    return-void
.end method

.method public isVisible()Z
    .locals 1

    .prologue
    .line 39
    iget-boolean v0, p0, Lcom/minitech/miniworld/util/SystemUiHiderBase;->mVisible:Z

    return v0
.end method

.method public setup()V
    .locals 2

    .prologue
    const/16 v1, 0x300

    .line 28
    iget v0, p0, Lcom/minitech/miniworld/util/SystemUiHiderBase;->mFlags:I

    and-int/lit8 v0, v0, 0x1

    if-nez v0, :cond_0

    .line 29
    iget-object v0, p0, Lcom/minitech/miniworld/util/SystemUiHiderBase;->mActivity:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0, v1, v1}, Landroid/view/Window;->setFlags(II)V

    .line 35
    :cond_0
    return-void
.end method

.method public show()V
    .locals 4

    .prologue
    const/4 v3, 0x1

    .line 55
    iget v0, p0, Lcom/minitech/miniworld/util/SystemUiHiderBase;->mFlags:I

    and-int/lit8 v0, v0, 0x2

    if-eqz v0, :cond_0

    .line 56
    iget-object v0, p0, Lcom/minitech/miniworld/util/SystemUiHiderBase;->mActivity:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object v0

    .line 57
    const/4 v1, 0x0

    .line 58
    const/16 v2, 0x400

    .line 56
    invoke-virtual {v0, v1, v2}, Landroid/view/Window;->setFlags(II)V

    .line 60
    :cond_0
    iget-object v0, p0, Lcom/minitech/miniworld/util/SystemUiHiderBase;->mOnVisibilityChangeListener:Lcom/minitech/miniworld/util/SystemUiHider$OnVisibilityChangeListener;

    invoke-interface {v0, v3}, Lcom/minitech/miniworld/util/SystemUiHider$OnVisibilityChangeListener;->onVisibilityChange(Z)V

    .line 61
    iput-boolean v3, p0, Lcom/minitech/miniworld/util/SystemUiHiderBase;->mVisible:Z

    .line 62
    return-void
.end method
