.class Lorg/appplay/lib/AppPlayGLView$1;
.super Landroid/os/Handler;
.source "AppPlayGLView.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lorg/appplay/lib/AppPlayGLView;->_InitView()V
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
    iput-object p1, p0, Lorg/appplay/lib/AppPlayGLView$1;->this$0:Lorg/appplay/lib/AppPlayGLView;

    .line 57
    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 6
    .param p1, "msg"    # Landroid/os/Message;

    .prologue
    const/4 v5, 0x0

    .line 62
    iget v2, p1, Landroid/os/Message;->what:I

    packed-switch v2, :pswitch_data_0

    .line 104
    :cond_0
    :goto_0
    return-void

    .line 65
    :pswitch_0
    iget-object v2, p0, Lorg/appplay/lib/AppPlayGLView$1;->this$0:Lorg/appplay/lib/AppPlayGLView;

    invoke-static {v2}, Lorg/appplay/lib/AppPlayGLView;->access$0(Lorg/appplay/lib/AppPlayGLView;)Lorg/appplay/lib/AppPlayEditText;

    move-result-object v2

    invoke-virtual {v2, v5}, Lorg/appplay/lib/AppPlayEditText;->setVisibility(I)V

    .line 66
    iget-object v2, p0, Lorg/appplay/lib/AppPlayGLView$1;->this$0:Lorg/appplay/lib/AppPlayGLView;

    invoke-static {v2}, Lorg/appplay/lib/AppPlayGLView;->access$0(Lorg/appplay/lib/AppPlayGLView;)Lorg/appplay/lib/AppPlayEditText;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 67
    iget-object v2, p0, Lorg/appplay/lib/AppPlayGLView$1;->this$0:Lorg/appplay/lib/AppPlayGLView;

    invoke-static {v2}, Lorg/appplay/lib/AppPlayGLView;->access$0(Lorg/appplay/lib/AppPlayGLView;)Lorg/appplay/lib/AppPlayEditText;

    move-result-object v2

    invoke-virtual {v2}, Lorg/appplay/lib/AppPlayEditText;->requestFocus()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 69
    iget-object v2, p0, Lorg/appplay/lib/AppPlayGLView$1;->this$0:Lorg/appplay/lib/AppPlayGLView;

    invoke-static {v2}, Lorg/appplay/lib/AppPlayGLView;->access$0(Lorg/appplay/lib/AppPlayGLView;)Lorg/appplay/lib/AppPlayEditText;

    move-result-object v2

    .line 70
    invoke-static {}, Lorg/appplay/lib/AppPlayGLView;->access$1()Lorg/appplay/lib/AppPlayTextInputWraper;

    move-result-object v3

    invoke-virtual {v2, v3}, Lorg/appplay/lib/AppPlayEditText;->removeTextChangedListener(Landroid/text/TextWatcher;)V

    .line 71
    iget-object v2, p0, Lorg/appplay/lib/AppPlayGLView$1;->this$0:Lorg/appplay/lib/AppPlayGLView;

    invoke-static {v2}, Lorg/appplay/lib/AppPlayGLView;->access$0(Lorg/appplay/lib/AppPlayGLView;)Lorg/appplay/lib/AppPlayEditText;

    move-result-object v2

    const-string v3, ""

    invoke-virtual {v2, v3}, Lorg/appplay/lib/AppPlayEditText;->setText(Ljava/lang/CharSequence;)V

    .line 72
    iget-object v1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v1, Ljava/lang/String;

    .line 73
    .local v1, "text":Ljava/lang/String;
    const-string v2, "appplay.lib"

    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "mEditText"

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    .line 74
    iget-object v2, p0, Lorg/appplay/lib/AppPlayGLView$1;->this$0:Lorg/appplay/lib/AppPlayGLView;

    invoke-static {v2}, Lorg/appplay/lib/AppPlayGLView;->access$0(Lorg/appplay/lib/AppPlayGLView;)Lorg/appplay/lib/AppPlayEditText;

    move-result-object v2

    invoke-virtual {v2, v1}, Lorg/appplay/lib/AppPlayEditText;->append(Ljava/lang/CharSequence;)V

    .line 75
    invoke-static {}, Lorg/appplay/lib/AppPlayGLView;->access$1()Lorg/appplay/lib/AppPlayTextInputWraper;

    move-result-object v2

    invoke-virtual {v2, v1}, Lorg/appplay/lib/AppPlayTextInputWraper;->SetOriginText(Ljava/lang/String;)V

    .line 76
    iget-object v2, p0, Lorg/appplay/lib/AppPlayGLView$1;->this$0:Lorg/appplay/lib/AppPlayGLView;

    invoke-static {v2}, Lorg/appplay/lib/AppPlayGLView;->access$0(Lorg/appplay/lib/AppPlayGLView;)Lorg/appplay/lib/AppPlayEditText;

    move-result-object v2

    .line 77
    invoke-static {}, Lorg/appplay/lib/AppPlayGLView;->access$1()Lorg/appplay/lib/AppPlayTextInputWraper;

    move-result-object v3

    invoke-virtual {v2, v3}, Lorg/appplay/lib/AppPlayEditText;->addTextChangedListener(Landroid/text/TextWatcher;)V

    .line 79
    invoke-static {}, Lorg/appplay/lib/AppPlayGLView;->access$2()Lorg/appplay/lib/AppPlayGLView;

    move-result-object v2

    .line 80
    invoke-virtual {v2}, Lorg/appplay/lib/AppPlayGLView;->getContext()Landroid/content/Context;

    move-result-object v2

    .line 81
    const-string v3, "input_method"

    .line 80
    invoke-virtual {v2, v3}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    .line 79
    check-cast v0, Landroid/view/inputmethod/InputMethodManager;

    .line 82
    .local v0, "imm":Landroid/view/inputmethod/InputMethodManager;
    iget-object v2, p0, Lorg/appplay/lib/AppPlayGLView$1;->this$0:Lorg/appplay/lib/AppPlayGLView;

    invoke-static {v2}, Lorg/appplay/lib/AppPlayGLView;->access$0(Lorg/appplay/lib/AppPlayGLView;)Lorg/appplay/lib/AppPlayEditText;

    move-result-object v2

    invoke-virtual {v0, v2, v5}, Landroid/view/inputmethod/InputMethodManager;->showSoftInput(Landroid/view/View;I)Z

    goto/16 :goto_0

    .line 88
    .end local v0    # "imm":Landroid/view/inputmethod/InputMethodManager;
    .end local v1    # "text":Ljava/lang/String;
    :pswitch_1
    iget-object v2, p0, Lorg/appplay/lib/AppPlayGLView$1;->this$0:Lorg/appplay/lib/AppPlayGLView;

    invoke-static {v2}, Lorg/appplay/lib/AppPlayGLView;->access$0(Lorg/appplay/lib/AppPlayGLView;)Lorg/appplay/lib/AppPlayEditText;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 90
    iget-object v2, p0, Lorg/appplay/lib/AppPlayGLView$1;->this$0:Lorg/appplay/lib/AppPlayGLView;

    invoke-static {v2}, Lorg/appplay/lib/AppPlayGLView;->access$0(Lorg/appplay/lib/AppPlayGLView;)Lorg/appplay/lib/AppPlayEditText;

    move-result-object v2

    .line 91
    invoke-static {}, Lorg/appplay/lib/AppPlayGLView;->access$1()Lorg/appplay/lib/AppPlayTextInputWraper;

    move-result-object v3

    invoke-virtual {v2, v3}, Lorg/appplay/lib/AppPlayEditText;->removeTextChangedListener(Landroid/text/TextWatcher;)V

    .line 93
    invoke-static {}, Lorg/appplay/lib/AppPlayGLView;->access$2()Lorg/appplay/lib/AppPlayGLView;

    move-result-object v2

    .line 94
    invoke-virtual {v2}, Lorg/appplay/lib/AppPlayGLView;->getContext()Landroid/content/Context;

    move-result-object v2

    .line 95
    const-string v3, "input_method"

    .line 94
    invoke-virtual {v2, v3}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    .line 93
    check-cast v0, Landroid/view/inputmethod/InputMethodManager;

    .line 97
    .restart local v0    # "imm":Landroid/view/inputmethod/InputMethodManager;
    iget-object v2, p0, Lorg/appplay/lib/AppPlayGLView$1;->this$0:Lorg/appplay/lib/AppPlayGLView;

    invoke-static {v2}, Lorg/appplay/lib/AppPlayGLView;->access$0(Lorg/appplay/lib/AppPlayGLView;)Lorg/appplay/lib/AppPlayEditText;

    move-result-object v2

    invoke-virtual {v2}, Lorg/appplay/lib/AppPlayEditText;->getWindowToken()Landroid/os/IBinder;

    move-result-object v2

    .line 96
    invoke-virtual {v0, v2, v5}, Landroid/view/inputmethod/InputMethodManager;->hideSoftInputFromWindow(Landroid/os/IBinder;I)Z

    .line 99
    iget-object v2, p0, Lorg/appplay/lib/AppPlayGLView$1;->this$0:Lorg/appplay/lib/AppPlayGLView;

    invoke-static {v2}, Lorg/appplay/lib/AppPlayGLView;->access$0(Lorg/appplay/lib/AppPlayGLView;)Lorg/appplay/lib/AppPlayEditText;

    move-result-object v2

    const/16 v3, 0x8

    invoke-virtual {v2, v3}, Lorg/appplay/lib/AppPlayEditText;->setVisibility(I)V

    .line 100
    iget-object v2, p0, Lorg/appplay/lib/AppPlayGLView$1;->this$0:Lorg/appplay/lib/AppPlayGLView;

    invoke-virtual {v2}, Lorg/appplay/lib/AppPlayGLView;->requestFocus()Z

    goto/16 :goto_0

    .line 62
    :pswitch_data_0
    .packed-switch 0x2
        :pswitch_0
        :pswitch_1
    .end packed-switch
.end method
