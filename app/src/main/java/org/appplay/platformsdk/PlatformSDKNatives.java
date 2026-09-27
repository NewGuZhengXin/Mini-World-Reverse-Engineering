package org.appplay.platformsdk;

/* loaded from: classes.dex */
public class PlatformSDKNatives {
    public static native void OnGuestOfficialSuc();

    public static native void OnLoginCancel();

    public static native void OnLoginFailed();

    public static native void OnLoginSuc(int i, java.lang.String str, java.lang.String str2, java.lang.String str3);

    public static native void OnPayCancel(java.lang.String str, boolean z);

    public static native void OnPayError(java.lang.String str, int i, boolean z);

    public static native void OnPayFailed(java.lang.String str, boolean z);

    public static native void OnPayRequestSubmitted(java.lang.String str, boolean z);

    public static native void OnPaySMSSent(java.lang.String str, boolean z);

    public static native void OnPaySuc(java.lang.String str, boolean z);

    public static native void SetPlatformSDK(java.lang.String str);

    public static void PlatformLogin() {
    }

    public static java.lang.String GetPayPlatform() {
        return org.appplay.platformsdk.PlatformSDK.sPayPlatform;
    }

    public static java.lang.String GetPlatformSource() {
        return org.appplay.platformsdk.PlatformSDK.sSource;
    }

    public static java.lang.String GetHostName() {
        return org.appplay.platformsdk.PlatformSDK.sPayHostName;
    }
}
