.class public abstract Lcom/minitech/miniworld/util/SystemUiHider;
.super Ljava/lang/Object;
.source "SystemUiHider.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/minitech/miniworld/util/SystemUiHider$OnVisibilityChangeListener;
    }
.end annotation


# static fields
.field public static final FLAG_FULLSCREEN:I = 0x2

.field public static final FLAG_HIDE_NAVIGATION:I = 0x6

.field public static final FLAG_LAYOUT_IN_SCREEN_OLDER_DEVICES:I = 0x1

.field private static sDummyListener:Lcom/minitech/miniworld/util/SystemUiHider$OnVisibilityChangeListener;


# instance fields
.field protected mActivity:Landroid/app/Activity;

.field protected mAnchorView:Landroid/view/View;

.field protected mFlags:I

.field protected mOnVisibilityChangeListener:Lcom/minitech/miniworld/util/SystemUiHider$OnVisibilityChangeListener;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .prologue
    .line 155
    new-instance v0, Lcom/minitech/miniworld/util/SystemUiHider$1;

    invoke-direct {v0}, Lcom/minitech/miniworld/util/SystemUiHider$1;-><init>()V

    sput-object v0, Lcom/minitech/miniworld/util/SystemUiHider;->sDummyListener:Lcom/minitech/miniworld/util/SystemUiHider$OnVisibilityChangeListener;

    .line 159
    return-void
.end method

.method protected constructor <init>(Landroid/app/Activity;Landroid/view/View;I)V
    .locals 1
    .param p1, "activity"    # Landroid/app/Activity;
    .param p2, "anchorView"    # Landroid/view/View;
    .param p3, "flags"    # I

    .prologue
    .line 102
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 78
    sget-object v0, Lcom/minitech/miniworld/util/SystemUiHider;->sDummyListener:Lcom/minitech/miniworld/util/SystemUiHider$OnVisibilityChangeListener;

    iput-object v0, p0, Lcom/minitech/miniworld/util/SystemUiHider;->mOnVisibilityChangeListener:Lcom/minitech/miniworld/util/SystemUiHider$OnVisibilityChangeListener;

    .line 103
    iput-object p1, p0, Lcom/minitech/miniworld/util/SystemUiHider;->mActivity:Landroid/app/Activity;

    .line 104
    iput-object p2, p0, Lcom/minitech/miniworld/util/SystemUiHider;->mAnchorView:Landroid/view/View;

    .line 105
    iput p3, p0, Lcom/minitech/miniworld/util/SystemUiHider;->mFlags:I

    .line 106
    return-void
.end method

.method public static getInstance(Landroid/app/Activity;Landroid/view/View;I)Lcom/minitech/miniworld/util/SystemUiHider;
    .locals 2
    .param p0, "activity"    # Landroid/app/Activity;
    .param p1, "anchorView"    # Landroid/view/View;
    .param p2, "flags"    # I

    .prologue
    .line 95
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0xb

    if-lt v0, v1, :cond_0

    .line 96
    new-instance v0, Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb;

    invoke-direct {v0, p0, p1, p2}, Lcom/minitech/miniworld/util/SystemUiHiderHoneycomb;-><init>(Landroid/app/Activity;Landroid/view/View;I)V

    .line 98
    :goto_0
    return-object v0

    :cond_0
    new-instance v0, Lcom/minitech/miniworld/util/SystemUiHiderBase;

    invoke-direct {v0, p0, p1, p2}, Lcom/minitech/miniworld/util/SystemUiHiderBase;-><init>(Landroid/app/Activity;Landroid/view/View;I)V

    goto :goto_0
.end method


# virtual methods
.method public abstract hide()V
.end method

.method public abstract isVisible()Z
.end method

.method public setOnVisibilityChangeListener(Lcom/minitech/miniworld/util/SystemUiHider$OnVisibilityChangeListener;)V
    .locals 0
    .param p1, "listener"    # Lcom/minitech/miniworld/util/SystemUiHider$OnVisibilityChangeListener;

    .prologue
    .line 145
    if-nez p1, :cond_0

    .line 146
    sget-object p1, Lcom/minitech/miniworld/util/SystemUiHider;->sDummyListener:Lcom/minitech/miniworld/util/SystemUiHider$OnVisibilityChangeListener;

    .line 149
    :cond_0
    iput-object p1, p0, Lcom/minitech/miniworld/util/SystemUiHider;->mOnVisibilityChangeListener:Lcom/minitech/miniworld/util/SystemUiHider$OnVisibilityChangeListener;

    .line 150
    return-void
.end method

.method public abstract setup()V
.end method

.method public abstract show()V
.end method

.method public toggle()V
    .locals 1

    .prologue
    .line 133
    invoke-virtual {p0}, Lcom/minitech/miniworld/util/SystemUiHider;->isVisible()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 134
    invoke-virtual {p0}, Lcom/minitech/miniworld/util/SystemUiHider;->hide()V

    .line 138
    :goto_0
    return-void

    .line 136
    :cond_0
    invoke-virtual {p0}, Lcom/minitech/miniworld/util/SystemUiHider;->show()V

    goto :goto_0
.end method
