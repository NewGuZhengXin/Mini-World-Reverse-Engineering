package android.support.v4.content;

/* loaded from: classes.dex */
public class ContextCompat {
    private static final java.lang.String DIR_ANDROID = "Android";
    private static final java.lang.String DIR_CACHE = "cache";
    private static final java.lang.String DIR_DATA = "data";
    private static final java.lang.String DIR_FILES = "files";
    private static final java.lang.String DIR_OBB = "obb";

    public static boolean startActivities(android.content.Context context, android.content.Intent[] intents) {
        return startActivities(context, intents, null);
    }

    public static boolean startActivities(android.content.Context context, android.content.Intent[] intents, android.os.Bundle options) {
        int version = android.os.Build.VERSION.SDK_INT;
        if (version >= 16) {
            android.support.v4.content.ContextCompatJellybean.startActivities(context, intents, options);
            return true;
        }
        if (version >= 11) {
            android.support.v4.content.ContextCompatHoneycomb.startActivities(context, intents);
            return true;
        }
        return false;
    }

    public static java.io.File[] getObbDirs(android.content.Context context) {
        java.io.File single;
        int version = android.os.Build.VERSION.SDK_INT;
        if (version >= 19) {
            return android.support.v4.content.ContextCompatKitKat.getObbDirs(context);
        }
        if (version >= 11) {
            single = android.support.v4.content.ContextCompatHoneycomb.getObbDir(context);
        } else {
            single = buildPath(android.os.Environment.getExternalStorageDirectory(), DIR_ANDROID, DIR_OBB, context.getPackageName());
        }
        return new java.io.File[]{single};
    }

    public static java.io.File[] getExternalFilesDirs(android.content.Context context, java.lang.String type) {
        java.io.File single;
        int version = android.os.Build.VERSION.SDK_INT;
        if (version >= 19) {
            return android.support.v4.content.ContextCompatKitKat.getExternalFilesDirs(context, type);
        }
        if (version >= 8) {
            single = android.support.v4.content.ContextCompatFroyo.getExternalFilesDir(context, type);
        } else {
            single = buildPath(android.os.Environment.getExternalStorageDirectory(), DIR_ANDROID, DIR_DATA, context.getPackageName(), DIR_FILES, type);
        }
        return new java.io.File[]{single};
    }

    public static java.io.File[] getExternalCacheDirs(android.content.Context context) {
        java.io.File single;
        int version = android.os.Build.VERSION.SDK_INT;
        if (version >= 19) {
            return android.support.v4.content.ContextCompatKitKat.getExternalCacheDirs(context);
        }
        if (version >= 8) {
            single = android.support.v4.content.ContextCompatFroyo.getExternalCacheDir(context);
        } else {
            single = buildPath(android.os.Environment.getExternalStorageDirectory(), DIR_ANDROID, DIR_DATA, context.getPackageName(), DIR_CACHE);
        }
        return new java.io.File[]{single};
    }

    private static java.io.File buildPath(java.io.File base, java.lang.String... segments) {
        java.io.File cur;
        int len$ = segments.length;
        int i$ = 0;
        java.io.File cur2 = base;
        while (i$ < len$) {
            java.lang.String segment = segments[i$];
            if (cur2 == null) {
                cur = new java.io.File(segment);
            } else {
                cur = segment != null ? new java.io.File(cur2, segment) : cur2;
            }
            i$++;
            cur2 = cur;
        }
        return cur2;
    }
}
