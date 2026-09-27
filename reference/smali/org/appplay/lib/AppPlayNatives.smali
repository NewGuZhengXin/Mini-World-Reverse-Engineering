.class public Lorg/appplay/lib/AppPlayNatives;
.super Ljava/lang/Object;
.source "AppPlayNatives.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .prologue
    .line 3
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static native nativeDeleteBackward()V
.end method

.method public static native nativeGetContentText()Ljava/lang/String;
.end method

.method public static native nativeInit(Ljava/lang/String;Ljava/lang/String;)V
.end method

.method public static native nativeInsertText(Ljava/lang/String;)V
.end method

.method public static native nativeKeyDown(I)Z
.end method

.method public static native nativeLostFocus()V
.end method

.method public static native nativeOnBackPressed()V
.end method

.method public static native nativeOnIdle()V
.end method

.method public static native nativeOnPause()V
.end method

.method public static native nativeOnResetRender(II)V
.end method

.method public static native nativeOnResume()V
.end method

.method public static native nativeOnStart()V
.end method

.method public static native nativeOnStop()V
.end method

.method public static native nativeOnTerm()V
.end method

.method public static native nativeSetApkDataPath(Ljava/lang/String;)V
.end method

.method public static native nativeSetDataUpdateServerType(Ljava/lang/String;)V
.end method

.method public static native nativeTouchCancelled([I[F[F)V
.end method

.method public static native nativeTouchMoved([I[F[F)V
.end method

.method public static native nativeTouchPressed(IFF)V
.end method

.method public static native nativeTouchReleased(IFF)V
.end method
