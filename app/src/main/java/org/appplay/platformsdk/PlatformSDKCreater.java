package org.appplay.platformsdk;

/* loaded from: classes.dex */
public class PlatformSDKCreater {
    public static java.lang.String sSDK_NAME_UNKNOWN = android.support.v4.os.EnvironmentCompat.MEDIA_UNKNOWN;
    public static java.lang.String sSDK_NAME_91 = "91";
    public static java.lang.String sSDK_NAME_360 = "360";
    public static java.lang.String sSDK_CurrentName = "";

    public static org.appplay.platformsdk.PlatformSDK Create(android.app.Activity activity) {
        sSDK_CurrentName = org.appplay.lib.AppPlayMetaData.sPFSDKName;
        return _Create(activity, sSDK_CurrentName);
    }

    private static org.appplay.platformsdk.PlatformSDK _Create(android.app.Activity activity, java.lang.String source) {
        if (!sSDK_NAME_91.equals(source) && sSDK_NAME_360.equals(source)) {
        }
        return null;
    }
}
