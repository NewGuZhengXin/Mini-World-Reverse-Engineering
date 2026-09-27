package org.appplay.lib;

/* loaded from: classes.dex */
public class AppPlayNatives {
    public static native void nativeDeleteBackward();

    public static native java.lang.String nativeGetContentText();

    public static native void nativeInit(java.lang.String str, java.lang.String str2);

    public static native void nativeInsertText(java.lang.String str);

    public static native boolean nativeKeyDown(int i);

    public static native void nativeLostFocus();

    public static native void nativeOnBackPressed();

    public static native void nativeOnIdle();

    public static native void nativeOnPause();

    public static native void nativeOnResetRender(int i, int i2);

    public static native void nativeOnResume();

    public static native void nativeOnStart();

    public static native void nativeOnStop();

    public static native void nativeOnTerm();

    public static native void nativeSetApkDataPath(java.lang.String str);

    public static native void nativeSetDataUpdateServerType(java.lang.String str);

    public static native void nativeTouchCancelled(int[] iArr, float[] fArr, float[] fArr2);

    public static native void nativeTouchMoved(int[] iArr, float[] fArr, float[] fArr2);

    public static native void nativeTouchPressed(int i, float f, float f2);

    public static native void nativeTouchReleased(int i, float f, float f2);
}
