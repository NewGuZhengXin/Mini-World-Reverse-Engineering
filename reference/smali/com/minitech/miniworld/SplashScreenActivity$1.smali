.class Lcom/minitech/miniworld/SplashScreenActivity$1;
.super Ljava/lang/Thread;
.source "SplashScreenActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/minitech/miniworld/SplashScreenActivity;->onCreate(Landroid/os/Bundle;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/minitech/miniworld/SplashScreenActivity;


# direct methods
.method constructor <init>(Lcom/minitech/miniworld/SplashScreenActivity;)V
    .locals 0

    .prologue
    .line 1
    iput-object p1, p0, Lcom/minitech/miniworld/SplashScreenActivity$1;->this$0:Lcom/minitech/miniworld/SplashScreenActivity;

    .line 45
    invoke-direct {p0}, Ljava/lang/Thread;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 5

    .prologue
    .line 49
    const/4 v0, 0x0

    .line 50
    .local v0, "waited":I
    :cond_0
    :goto_0
    :try_start_0
    iget-object v1, p0, Lcom/minitech/miniworld/SplashScreenActivity$1;->this$0:Lcom/minitech/miniworld/SplashScreenActivity;

    iget-boolean v1, v1, Lcom/minitech/miniworld/SplashScreenActivity;->_active:Z

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/minitech/miniworld/SplashScreenActivity$1;->this$0:Lcom/minitech/miniworld/SplashScreenActivity;

    iget v1, v1, Lcom/minitech/miniworld/SplashScreenActivity;->_splashTime:I
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-lt v0, v1, :cond_2

    .line 60
    :cond_1
    iget-object v1, p0, Lcom/minitech/miniworld/SplashScreenActivity$1;->this$0:Lcom/minitech/miniworld/SplashScreenActivity;

    new-instance v2, Landroid/content/Intent;

    const-string v3, "com.minitech.miniworld.MiniWorldActivity"

    invoke-direct {v2, v3}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v2}, Lcom/minitech/miniworld/SplashScreenActivity;->startActivity(Landroid/content/Intent;)V

    .line 61
    iget-object v1, p0, Lcom/minitech/miniworld/SplashScreenActivity$1;->this$0:Lcom/minitech/miniworld/SplashScreenActivity;

    invoke-virtual {v1}, Lcom/minitech/miniworld/SplashScreenActivity;->finish()V

    .line 63
    :goto_1
    return-void

    .line 51
    :cond_2
    const-wide/16 v2, 0x14

    :try_start_1
    invoke-static {v2, v3}, Lcom/minitech/miniworld/SplashScreenActivity$1;->sleep(J)V

    .line 52
    iget-object v1, p0, Lcom/minitech/miniworld/SplashScreenActivity$1;->this$0:Lcom/minitech/miniworld/SplashScreenActivity;

    iget-boolean v1, v1, Lcom/minitech/miniworld/SplashScreenActivity;->_active:Z
    :try_end_1
    .catch Ljava/lang/InterruptedException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz v1, :cond_0

    .line 53
    add-int/lit8 v0, v0, 0x14

    goto :goto_0

    .line 56
    :catch_0
    move-exception v1

    .line 60
    iget-object v1, p0, Lcom/minitech/miniworld/SplashScreenActivity$1;->this$0:Lcom/minitech/miniworld/SplashScreenActivity;

    new-instance v2, Landroid/content/Intent;

    const-string v3, "com.minitech.miniworld.MiniWorldActivity"

    invoke-direct {v2, v3}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v2}, Lcom/minitech/miniworld/SplashScreenActivity;->startActivity(Landroid/content/Intent;)V

    .line 61
    iget-object v1, p0, Lcom/minitech/miniworld/SplashScreenActivity$1;->this$0:Lcom/minitech/miniworld/SplashScreenActivity;

    invoke-virtual {v1}, Lcom/minitech/miniworld/SplashScreenActivity;->finish()V

    goto :goto_1

    .line 58
    :catchall_0
    move-exception v1

    .line 60
    iget-object v2, p0, Lcom/minitech/miniworld/SplashScreenActivity$1;->this$0:Lcom/minitech/miniworld/SplashScreenActivity;

    new-instance v3, Landroid/content/Intent;

    const-string v4, "com.minitech.miniworld.MiniWorldActivity"

    invoke-direct {v3, v4}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v3}, Lcom/minitech/miniworld/SplashScreenActivity;->startActivity(Landroid/content/Intent;)V

    .line 61
    iget-object v2, p0, Lcom/minitech/miniworld/SplashScreenActivity$1;->this$0:Lcom/minitech/miniworld/SplashScreenActivity;

    invoke-virtual {v2}, Lcom/minitech/miniworld/SplashScreenActivity;->finish()V

    .line 62
    throw v1
.end method
