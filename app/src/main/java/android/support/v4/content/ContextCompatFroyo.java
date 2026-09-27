package android.support.v4.content;

/* loaded from: classes.dex */
class ContextCompatFroyo {
    ContextCompatFroyo() {
    }

    public static java.io.File getExternalCacheDir(android.content.Context context) {
        return context.getExternalCacheDir();
    }

    public static java.io.File getExternalFilesDir(android.content.Context context, java.lang.String type) {
        return context.getExternalFilesDir(type);
    }
}
