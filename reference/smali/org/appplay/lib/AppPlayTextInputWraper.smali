.class public Lorg/appplay/lib/AppPlayTextInputWraper;
.super Ljava/lang/Object;
.source "AppPlayTextInputWraper.java"

# interfaces
.implements Landroid/text/TextWatcher;
.implements Landroid/widget/TextView$OnEditorActionListener;


# static fields
.field private static final sIsDebug:Ljava/lang/Boolean;


# instance fields
.field private mMainView:Lorg/appplay/lib/AppPlayGLView;

.field private mOriginText:Ljava/lang/String;

.field private mText:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .prologue
    .line 16
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    sput-object v0, Lorg/appplay/lib/AppPlayTextInputWraper;->sIsDebug:Ljava/lang/Boolean;

    return-void
.end method

.method public constructor <init>(Lorg/appplay/lib/AppPlayGLView;)V
    .locals 0
    .param p1, "view"    # Lorg/appplay/lib/AppPlayGLView;

    .prologue
    .line 21
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 23
    iput-object p1, p0, Lorg/appplay/lib/AppPlayTextInputWraper;->mMainView:Lorg/appplay/lib/AppPlayGLView;

    .line 24
    return-void
.end method

.method private _IsFullScreenEdit()Ljava/lang/Boolean;
    .locals 3

    .prologue
    .line 117
    iget-object v1, p0, Lorg/appplay/lib/AppPlayTextInputWraper;->mMainView:Lorg/appplay/lib/AppPlayGLView;

    invoke-virtual {v1}, Lorg/appplay/lib/AppPlayGLView;->GetEditText()Landroid/widget/TextView;

    move-result-object v1

    .line 118
    invoke-virtual {v1}, Landroid/widget/TextView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "input_method"

    invoke-virtual {v1, v2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    .line 117
    check-cast v0, Landroid/view/inputmethod/InputMethodManager;

    .line 119
    .local v0, "imm":Landroid/view/inputmethod/InputMethodManager;
    invoke-virtual {v0}, Landroid/view/inputmethod/InputMethodManager;->isFullscreenMode()Z

    move-result v1

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    return-object v1
.end method

.method private _LogD(Ljava/lang/String;)V
    .locals 1
    .param p1, "msg"    # Ljava/lang/String;

    .prologue
    .line 124
    sget-object v0, Lorg/appplay/lib/AppPlayTextInputWraper;->sIsDebug:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 125
    const-string v0, "PX2TextInputWraper"

    invoke-static {v0, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 126
    :cond_0
    return-void
.end method


# virtual methods
.method public SetOriginText(Ljava/lang/String;)V
    .locals 0
    .param p1, "text"    # Ljava/lang/String;

    .prologue
    .line 28
    iput-object p1, p0, Lorg/appplay/lib/AppPlayTextInputWraper;->mOriginText:Ljava/lang/String;

    .line 29
    return-void
.end method

.method public afterTextChanged(Landroid/text/Editable;)V
    .locals 4
    .param p1, "s"    # Landroid/text/Editable;

    .prologue
    .line 34
    invoke-direct {p0}, Lorg/appplay/lib/AppPlayTextInputWraper;->_IsFullScreenEdit()Ljava/lang/Boolean;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 60
    :goto_0
    return-void

    .line 37
    :cond_0
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "AfterTextChanged:"

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {p0, v2}, Lorg/appplay/lib/AppPlayTextInputWraper;->_LogD(Ljava/lang/String;)V

    .line 39
    invoke-interface {p1}, Landroid/text/Editable;->length()I

    move-result v2

    iget-object v3, p0, Lorg/appplay/lib/AppPlayTextInputWraper;->mText:Ljava/lang/String;

    invoke-virtual {v3}, Ljava/lang/String;->length()I

    move-result v3

    sub-int v1, v2, v3

    .line 41
    .local v1, "numModified":I
    if-lez v1, :cond_2

    .line 43
    iget-object v2, p0, Lorg/appplay/lib/AppPlayTextInputWraper;->mText:Ljava/lang/String;

    invoke-virtual {v2}, Ljava/lang/String;->length()I

    move-result v2

    invoke-interface {p1}, Landroid/text/Editable;->length()I

    move-result v3

    invoke-interface {p1, v2, v3}, Landroid/text/Editable;->subSequence(II)Ljava/lang/CharSequence;

    move-result-object v2

    invoke-interface {v2}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v0

    .line 45
    .local v0, "insertText":Ljava/lang/String;
    iget-object v2, p0, Lorg/appplay/lib/AppPlayTextInputWraper;->mMainView:Lorg/appplay/lib/AppPlayGLView;

    invoke-virtual {v2, v0}, Lorg/appplay/lib/AppPlayGLView;->InsertText(Ljava/lang/String;)V

    .line 47
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "InsertText("

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v2

    const-string v3, ")"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {p0, v2}, Lorg/appplay/lib/AppPlayTextInputWraper;->_LogD(Ljava/lang/String;)V

    .line 59
    .end local v0    # "insertText":Ljava/lang/String;
    :goto_1
    invoke-interface {p1}, Landroid/text/Editable;->toString()Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lorg/appplay/lib/AppPlayTextInputWraper;->mText:Ljava/lang/String;

    goto :goto_0

    .line 53
    :cond_1
    iget-object v2, p0, Lorg/appplay/lib/AppPlayTextInputWraper;->mMainView:Lorg/appplay/lib/AppPlayGLView;

    invoke-virtual {v2}, Lorg/appplay/lib/AppPlayGLView;->DeleteBackward()V

    .line 55
    const-string v2, "DeleteBackward"

    invoke-direct {p0, v2}, Lorg/appplay/lib/AppPlayTextInputWraper;->_LogD(Ljava/lang/String;)V

    .line 51
    add-int/lit8 v1, v1, 0x1

    :cond_2
    if-ltz v1, :cond_1

    goto :goto_1
.end method

.method public beforeTextChanged(Ljava/lang/CharSequence;III)V
    .locals 2
    .param p1, "s"    # Ljava/lang/CharSequence;
    .param p2, "start"    # I
    .param p3, "count"    # I
    .param p4, "after"    # I

    .prologue
    .line 106
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "BeforeTextChanged("

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    move-result-object v0

    const-string v1, ")start:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v0

    const-string v1, ",count:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const-string v1, ",after:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lorg/appplay/lib/AppPlayTextInputWraper;->_LogD(Ljava/lang/String;)V

    .line 107
    invoke-interface {p1}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lorg/appplay/lib/AppPlayTextInputWraper;->mText:Ljava/lang/String;

    .line 108
    return-void
.end method

.method public onEditorAction(Landroid/widget/TextView;ILandroid/view/KeyEvent;)Z
    .locals 6
    .param p1, "v"    # Landroid/widget/TextView;
    .param p2, "actionId"    # I
    .param p3, "event"    # Landroid/view/KeyEvent;

    .prologue
    const/16 v5, 0xa

    .line 65
    iget-object v3, p0, Lorg/appplay/lib/AppPlayTextInputWraper;->mMainView:Lorg/appplay/lib/AppPlayGLView;

    invoke-virtual {v3}, Lorg/appplay/lib/AppPlayGLView;->GetEditText()Landroid/widget/TextView;

    move-result-object v3

    if-ne v3, p1, :cond_2

    invoke-direct {p0}, Lorg/appplay/lib/AppPlayTextInputWraper;->_IsFullScreenEdit()Ljava/lang/Boolean;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v3

    if-eqz v3, :cond_2

    .line 68
    iget-object v3, p0, Lorg/appplay/lib/AppPlayTextInputWraper;->mOriginText:Ljava/lang/String;

    invoke-virtual {v3}, Ljava/lang/String;->length()I

    move-result v0

    .local v0, "i":I
    :goto_0
    if-gtz v0, :cond_4

    .line 74
    invoke-virtual {p1}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v3

    invoke-interface {v3}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v2

    .line 76
    .local v2, "text":Ljava/lang/String;
    const-string v3, ""

    invoke-virtual {v2, v3}, Ljava/lang/String;->compareTo(Ljava/lang/String;)I

    move-result v3

    if-nez v3, :cond_0

    .line 78
    const-string v2, "\n"

    .line 81
    :cond_0
    invoke-virtual {v2}, Ljava/lang/String;->length()I

    move-result v3

    add-int/lit8 v3, v3, -0x1

    invoke-virtual {v2, v3}, Ljava/lang/String;->charAt(I)C

    move-result v3

    if-eq v5, v3, :cond_1

    .line 83
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-static {v2}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 86
    :cond_1
    move-object v1, v2

    .line 88
    .local v1, "insertText":Ljava/lang/String;
    iget-object v3, p0, Lorg/appplay/lib/AppPlayTextInputWraper;->mMainView:Lorg/appplay/lib/AppPlayGLView;

    invoke-virtual {v3, v1}, Lorg/appplay/lib/AppPlayGLView;->InsertText(Ljava/lang/String;)V

    .line 90
    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "InsertText("

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v3

    const-string v4, ")"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-direct {p0, v3}, Lorg/appplay/lib/AppPlayTextInputWraper;->_LogD(Ljava/lang/String;)V

    .line 93
    .end local v0    # "i":I
    .end local v1    # "insertText":Ljava/lang/String;
    .end local v2    # "text":Ljava/lang/String;
    :cond_2
    const/4 v3, 0x6

    if-ne p2, v3, :cond_3

    .line 94
    const-string v3, "appplay.lib"

    const-string v4, "info - EditorInfo.IME_ACTION_DONE"

    invoke-static {v3, v4}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 95
    invoke-static {}, Lorg/appplay/lib/AppPlayGLView;->CloseIMEKeyboard()V

    .line 96
    iget-object v3, p0, Lorg/appplay/lib/AppPlayTextInputWraper;->mMainView:Lorg/appplay/lib/AppPlayGLView;

    invoke-virtual {v3}, Lorg/appplay/lib/AppPlayGLView;->requestFocus()Z

    .line 97
    invoke-static {}, Lorg/appplay/lib/AppPlayNatives;->nativeLostFocus()V

    .line 100
    :cond_3
    const/4 v3, 0x0

    return v3

    .line 70
    .restart local v0    # "i":I
    :cond_4
    iget-object v3, p0, Lorg/appplay/lib/AppPlayTextInputWraper;->mMainView:Lorg/appplay/lib/AppPlayGLView;

    invoke-virtual {v3}, Lorg/appplay/lib/AppPlayGLView;->DeleteBackward()V

    .line 71
    const-string v3, "DeleteBackward"

    invoke-direct {p0, v3}, Lorg/appplay/lib/AppPlayTextInputWraper;->_LogD(Ljava/lang/String;)V

    .line 68
    add-int/lit8 v0, v0, -0x1

    goto :goto_0
.end method

.method public onTextChanged(Ljava/lang/CharSequence;III)V
    .locals 0
    .param p1, "s"    # Ljava/lang/CharSequence;
    .param p2, "start"    # I
    .param p3, "before"    # I
    .param p4, "count"    # I

    .prologue
    .line 113
    return-void
.end method
