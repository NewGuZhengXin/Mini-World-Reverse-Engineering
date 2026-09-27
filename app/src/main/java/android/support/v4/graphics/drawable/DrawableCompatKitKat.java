package android.support.v4.graphics.drawable;

/* loaded from: classes.dex */
class DrawableCompatKitKat {
    DrawableCompatKitKat() {
    }

    public static void setAutoMirrored(android.graphics.drawable.Drawable drawable, boolean mirrored) {
        drawable.setAutoMirrored(mirrored);
    }

    public static boolean isAutoMirrored(android.graphics.drawable.Drawable drawable) {
        return drawable.isAutoMirrored();
    }
}
