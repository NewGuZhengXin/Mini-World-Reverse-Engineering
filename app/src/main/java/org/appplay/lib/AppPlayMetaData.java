package org.appplay.lib;

/* loaded from: classes.dex */
public class AppPlayMetaData {
    private static final java.lang.String _APPNAME = "appname";
    private static final java.lang.String _ISDEBUG = "isdebug";
    private static final java.lang.String _ISNETTABLE = "isnettable";
    private static final java.lang.String _ISTEST = "istest";
    private static final java.lang.String _PFSDKNAME = "pfsdkname";
    private static final java.lang.String _URL_LIBSO = "url_libso";
    private static final java.lang.String _URL_LIBSO_TEST = "url_libso_test";
    private static final java.lang.String _URL_VERSION = "url_version";
    private static final java.lang.String _URL_VERSION_TEST = "url_version_test";
    public static java.lang.String sAppName;
    public static boolean sIsDebug;
    public static boolean sIsNettable;
    public static boolean sIsTest;
    public static java.lang.String sPFSDKName;
    public static java.lang.String sURL_LibSO;
    public static java.lang.String sURL_Version;

    public static void Initlize(android.content.Context ctx) {
        sIsNettable = GetMetaData(ctx, _ISNETTABLE) == "true";
        sIsDebug = GetMetaData(ctx, _ISDEBUG) == "true";
        sIsTest = GetMetaData(ctx, _ISTEST) == "true";
        sPFSDKName = GetMetaData(ctx, _PFSDKNAME);
        sAppName = GetMetaData(ctx, _APPNAME);
        if (!sIsTest) {
            sURL_LibSO = GetMetaData(ctx, _URL_LIBSO);
            sURL_Version = GetMetaData(ctx, _URL_VERSION);
        } else {
            sURL_LibSO = GetMetaData(ctx, _URL_LIBSO_TEST);
            sURL_Version = GetMetaData(ctx, _URL_VERSION_TEST);
        }
    }

    // NOTE(jadx-fix): "throws NameNotFoundException" removed - the body already catches it.
    public static java.lang.String GetMetaData(android.content.Context ctx, java.lang.String key) {
        try {
            android.content.pm.ApplicationInfo ai = ctx.getPackageManager().getApplicationInfo(ctx.getPackageName(), 128);
            android.os.Bundle bundle = ai.metaData;
            java.lang.Object obj = bundle.get(key);
            return java.lang.String.valueOf(obj);
        } catch (android.content.pm.PackageManager.NameNotFoundException e) {
            e.printStackTrace();
            return "";
        }
    }
}
