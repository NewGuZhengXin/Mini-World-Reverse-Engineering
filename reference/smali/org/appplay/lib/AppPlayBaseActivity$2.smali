.class Lorg/appplay/lib/AppPlayBaseActivity$2;
.super Ljava/lang/Object;
.source "AppPlayBaseActivity.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lorg/appplay/lib/AppPlayBaseActivity;->Show_UpdateView()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lorg/appplay/lib/AppPlayBaseActivity;


# direct methods
.method constructor <init>(Lorg/appplay/lib/AppPlayBaseActivity;)V
    .locals 0

    .prologue
    .line 1
    iput-object p1, p0, Lorg/appplay/lib/AppPlayBaseActivity$2;->this$0:Lorg/appplay/lib/AppPlayBaseActivity;

    .line 319
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    .prologue
    .line 323
    iget-object v0, p0, Lorg/appplay/lib/AppPlayBaseActivity$2;->this$0:Lorg/appplay/lib/AppPlayBaseActivity;

    new-instance v1, Lorg/appplay/lib/AppPlayUpdateLayout;

    .line 324
    sget-object v2, Lorg/appplay/lib/AppPlayBaseActivity;->sTheActivity:Lorg/appplay/lib/AppPlayBaseActivity;

    .line 325
    const v3, 0x7f030001

    invoke-direct {v1, v2, v3}, Lorg/appplay/lib/AppPlayUpdateLayout;-><init>(Landroid/content/Context;I)V

    .line 323
    iput-object v1, v0, Lorg/appplay/lib/AppPlayBaseActivity;->mUpdateView:Lorg/appplay/lib/AppPlayUpdateLayout;

    .line 327
    iget-object v0, p0, Lorg/appplay/lib/AppPlayBaseActivity$2;->this$0:Lorg/appplay/lib/AppPlayBaseActivity;

    iget-object v1, p0, Lorg/appplay/lib/AppPlayBaseActivity$2;->this$0:Lorg/appplay/lib/AppPlayBaseActivity;

    iget-object v1, v1, Lorg/appplay/lib/AppPlayBaseActivity;->mUpdateView:Lorg/appplay/lib/AppPlayUpdateLayout;

    invoke-virtual {v0, v1}, Lorg/appplay/lib/AppPlayBaseActivity;->setContentView(Landroid/view/View;)V

    .line 329
    iget-object v0, p0, Lorg/appplay/lib/AppPlayBaseActivity$2;->this$0:Lorg/appplay/lib/AppPlayBaseActivity;

    iget-object v0, v0, Lorg/appplay/lib/AppPlayBaseActivity;->mUpdateView:Lorg/appplay/lib/AppPlayUpdateLayout;

    invoke-virtual {v0}, Lorg/appplay/lib/AppPlayUpdateLayout;->CheckVersion()V

    .line 330
    return-void
.end method
