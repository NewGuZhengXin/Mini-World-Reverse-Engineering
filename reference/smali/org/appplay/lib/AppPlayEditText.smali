.class public Lorg/appplay/lib/AppPlayEditText;
.super Landroid/widget/EditText;
.source "AppPlayEditText.java"


# instance fields
.field private mView:Lorg/appplay/lib/AppPlayGLView;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0
    .param p1, "context"    # Landroid/content/Context;

    .prologue
    .line 16
    invoke-direct {p0, p1}, Landroid/widget/EditText;-><init>(Landroid/content/Context;)V

    .line 17
    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "attrs"    # Landroid/util/AttributeSet;

    .prologue
    .line 21
    invoke-direct {p0, p1, p2}, Landroid/widget/EditText;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    .line 22
    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "attrs"    # Landroid/util/AttributeSet;
    .param p3, "defStyle"    # I

    .prologue
    .line 26
    invoke-direct {p0, p1, p2, p3}, Landroid/widget/EditText;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    .line 27
    return-void
.end method


# virtual methods
.method public SetGLView(Lorg/appplay/lib/AppPlayGLView;)V
    .locals 0
    .param p1, "view"    # Lorg/appplay/lib/AppPlayGLView;

    .prologue
    .line 31
    iput-object p1, p0, Lorg/appplay/lib/AppPlayEditText;->mView:Lorg/appplay/lib/AppPlayGLView;

    .line 32
    return-void
.end method

.method public onKeyDown(ILandroid/view/KeyEvent;)Z
    .locals 1
    .param p1, "keyCode"    # I
    .param p2, "event"    # Landroid/view/KeyEvent;

    .prologue
    .line 36
    invoke-super {p0, p1, p2}, Landroid/widget/EditText;->onKeyDown(ILandroid/view/KeyEvent;)Z

    .line 39
    const/4 v0, 0x4

    if-ne p1, v0, :cond_0

    .line 41
    const/16 v0, 0x8

    invoke-virtual {p0, v0}, Lorg/appplay/lib/AppPlayEditText;->setVisibility(I)V

    .line 42
    iget-object v0, p0, Lorg/appplay/lib/AppPlayEditText;->mView:Lorg/appplay/lib/AppPlayGLView;

    invoke-virtual {v0}, Lorg/appplay/lib/AppPlayGLView;->requestFocus()Z

    .line 45
    :cond_0
    const/4 v0, 0x1

    return v0
.end method
