.class Lorg/appplay/lib/AppPlayBaseActivity$3$1;
.super Ljava/lang/Object;
.source "AppPlayBaseActivity.java"

# interfaces
.implements Landroid/view/View$OnSystemUiVisibilityChangeListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lorg/appplay/lib/AppPlayBaseActivity$3;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lorg/appplay/lib/AppPlayBaseActivity$3;


# direct methods
.method constructor <init>(Lorg/appplay/lib/AppPlayBaseActivity$3;)V
    .locals 0

    .prologue
    .line 1
    iput-object p1, p0, Lorg/appplay/lib/AppPlayBaseActivity$3$1;->this$1:Lorg/appplay/lib/AppPlayBaseActivity$3;

    .line 439
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onSystemUiVisibilityChange(I)V
    .locals 0
    .param p1, "visibility"    # I

    .prologue
    .line 453
    return-void
.end method
