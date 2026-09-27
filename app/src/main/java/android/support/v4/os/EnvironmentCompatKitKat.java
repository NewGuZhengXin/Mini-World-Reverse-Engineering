package android.support.v4.os;

/* loaded from: classes.dex */
class EnvironmentCompatKitKat {
    EnvironmentCompatKitKat() {
    }

    public static java.lang.String getStorageState(java.io.File path) {
        return android.os.Environment.getStorageState(path);
    }
}
