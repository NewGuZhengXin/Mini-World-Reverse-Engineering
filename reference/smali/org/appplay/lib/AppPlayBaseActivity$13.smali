.class Lorg/appplay/lib/AppPlayBaseActivity$13;
.super Ljava/lang/Object;
.source "AppPlayBaseActivity.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lorg/appplay/lib/AppPlayBaseActivity;->_ASynPay(Ljava/lang/String;Ljava/lang/String;FFILjava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lorg/appplay/lib/AppPlayBaseActivity;

.field private final synthetic val$count:I

.field private final synthetic val$payDescription:Ljava/lang/String;

.field private final synthetic val$productID:Ljava/lang/String;

.field private final synthetic val$productName:Ljava/lang/String;

.field private final synthetic val$productOrginalPrice:F

.field private final synthetic val$productPrice:F


# direct methods
.method constructor <init>(Lorg/appplay/lib/AppPlayBaseActivity;Ljava/lang/String;Ljava/lang/String;FFILjava/lang/String;)V
    .locals 0

    .prologue
    .line 1
    iput-object p1, p0, Lorg/appplay/lib/AppPlayBaseActivity$13;->this$0:Lorg/appplay/lib/AppPlayBaseActivity;

    iput-object p2, p0, Lorg/appplay/lib/AppPlayBaseActivity$13;->val$productID:Ljava/lang/String;

    iput-object p3, p0, Lorg/appplay/lib/AppPlayBaseActivity$13;->val$productName:Ljava/lang/String;

    iput p4, p0, Lorg/appplay/lib/AppPlayBaseActivity$13;->val$productPrice:F

    iput p5, p0, Lorg/appplay/lib/AppPlayBaseActivity$13;->val$productOrginalPrice:F

    iput p6, p0, Lorg/appplay/lib/AppPlayBaseActivity$13;->val$count:I

    iput-object p7, p0, Lorg/appplay/lib/AppPlayBaseActivity$13;->val$payDescription:Ljava/lang/String;

    .line 686
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 7

    .prologue
    .line 690
    sget-object v0, Lorg/appplay/platformsdk/PlatformSDK;->sThePlatformSDK:Lorg/appplay/platformsdk/PlatformSDK;

    if-eqz v0, :cond_0

    .line 691
    sget-object v0, Lorg/appplay/platformsdk/PlatformSDK;->sThePlatformSDK:Lorg/appplay/platformsdk/PlatformSDK;

    iget-object v1, p0, Lorg/appplay/lib/AppPlayBaseActivity$13;->val$productID:Ljava/lang/String;

    iget-object v2, p0, Lorg/appplay/lib/AppPlayBaseActivity$13;->val$productName:Ljava/lang/String;

    .line 692
    iget v3, p0, Lorg/appplay/lib/AppPlayBaseActivity$13;->val$productPrice:F

    iget v4, p0, Lorg/appplay/lib/AppPlayBaseActivity$13;->val$productOrginalPrice:F

    iget v5, p0, Lorg/appplay/lib/AppPlayBaseActivity$13;->val$count:I

    .line 693
    iget-object v6, p0, Lorg/appplay/lib/AppPlayBaseActivity$13;->val$payDescription:Ljava/lang/String;

    .line 691
    invoke-virtual/range {v0 .. v6}, Lorg/appplay/platformsdk/PlatformSDK;->ASynPay(Ljava/lang/String;Ljava/lang/String;FFILjava/lang/String;)V

    .line 694
    :cond_0
    return-void
.end method
