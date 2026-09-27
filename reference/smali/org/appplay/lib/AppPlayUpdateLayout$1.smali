.class Lorg/appplay/lib/AppPlayUpdateLayout$1;
.super Landroid/os/Handler;
.source "AppPlayUpdateLayout.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lorg/appplay/lib/AppPlayUpdateLayout;
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
    iput-object p1, p0, Lorg/appplay/lib/AppPlayUpdateLayout$1;->this$0:Lorg/appplay/lib/AppPlayUpdateLayout;

    .line 57
    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 4
    .param p1, "msg"    # Landroid/os/Message;

    .prologue
    .line 61
    iget v0, p1, Landroid/os/Message;->what:I

    packed-switch v0, :pswitch_data_0

    .line 78
    :goto_0
    return-void

    .line 64
    :pswitch_0
    iget-object v0, p0, Lorg/appplay/lib/AppPlayUpdateLayout$1;->this$0:Lorg/appplay/lib/AppPlayUpdateLayout;

    invoke-static {v0}, Lorg/appplay/lib/AppPlayUpdateLayout;->access$0(Lorg/appplay/lib/AppPlayUpdateLayout;)V

    goto :goto_0

    .line 67
    :pswitch_1
    iget-object v0, p0, Lorg/appplay/lib/AppPlayUpdateLayout$1;->this$0:Lorg/appplay/lib/AppPlayUpdateLayout;

    invoke-static {v0}, Lorg/appplay/lib/AppPlayUpdateLayout;->access$1(Lorg/appplay/lib/AppPlayUpdateLayout;)V

    goto :goto_0

    .line 70
    :pswitch_2
    iget-object v0, p0, Lorg/appplay/lib/AppPlayUpdateLayout$1;->this$0:Lorg/appplay/lib/AppPlayUpdateLayout;

    iget v1, p1, Landroid/os/Message;->arg1:I

    int-to-double v2, v1

    invoke-static {v0, v2, v3}, Lorg/appplay/lib/AppPlayUpdateLayout;->access$2(Lorg/appplay/lib/AppPlayUpdateLayout;D)V

    goto :goto_0

    .line 73
    :pswitch_3
    iget-object v0, p0, Lorg/appplay/lib/AppPlayUpdateLayout$1;->this$0:Lorg/appplay/lib/AppPlayUpdateLayout;

    invoke-static {v0}, Lorg/appplay/lib/AppPlayUpdateLayout;->access$3(Lorg/appplay/lib/AppPlayUpdateLayout;)V

    goto :goto_0

    .line 61
    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_0
        :pswitch_1
        :pswitch_2
        :pswitch_3
    .end packed-switch
.end method
