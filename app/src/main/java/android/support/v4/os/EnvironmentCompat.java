package android.support.v4.os;

/* loaded from: classes.dex */
public class EnvironmentCompat {
    public static final java.lang.String MEDIA_UNKNOWN = "unknown";
    private static final java.lang.String TAG = "EnvironmentCompat";

    public static java.lang.String getStorageState(java.io.File path) throws java.io.IOException {
        int version = android.os.Build.VERSION.SDK_INT;
        if (version >= 19) {
            return android.support.v4.os.EnvironmentCompatKitKat.getStorageState(path);
        }
        try {
            java.lang.String canonicalPath = path.getCanonicalPath();
            java.lang.String canonicalExternal = android.os.Environment.getExternalStorageDirectory().getCanonicalPath();
            if (canonicalPath.startsWith(canonicalExternal)) {
                return android.os.Environment.getExternalStorageState();
            }
        } catch (java.io.IOException e) {
            android.util.Log.w(TAG, "Failed to resolve canonical path: " + e);
        }
        return MEDIA_UNKNOWN;
    }
}
