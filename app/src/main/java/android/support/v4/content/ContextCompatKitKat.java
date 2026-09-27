package android.support.v4.content;

/* loaded from: classes.dex */
class ContextCompatKitKat {
    ContextCompatKitKat() {
    }

    public static java.io.File[] getExternalCacheDirs(android.content.Context context) {
        return context.getExternalCacheDirs();
    }

    public static java.io.File[] getExternalFilesDirs(android.content.Context context, java.lang.String type) {
        return context.getExternalFilesDirs(type);
    }

    public static java.io.File[] getObbDirs(android.content.Context context) {
        return context.getObbDirs();
    }
}
