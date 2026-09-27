package android.support.v4.graphics.drawable;

/* loaded from: classes.dex */
public class DrawableCompat {
    static final android.support.v4.graphics.drawable.DrawableCompat.DrawableImpl IMPL;

    interface DrawableImpl {
        boolean isAutoMirrored(android.graphics.drawable.Drawable drawable);

        void jumpToCurrentState(android.graphics.drawable.Drawable drawable);

        void setAutoMirrored(android.graphics.drawable.Drawable drawable, boolean z);
    }

    static class BaseDrawableImpl implements android.support.v4.graphics.drawable.DrawableCompat.DrawableImpl {
        BaseDrawableImpl() {
        }

        @Override // android.support.v4.graphics.drawable.DrawableCompat.DrawableImpl
        public void jumpToCurrentState(android.graphics.drawable.Drawable drawable) {
        }

        @Override // android.support.v4.graphics.drawable.DrawableCompat.DrawableImpl
        public void setAutoMirrored(android.graphics.drawable.Drawable drawable, boolean mirrored) {
        }

        @Override // android.support.v4.graphics.drawable.DrawableCompat.DrawableImpl
        public boolean isAutoMirrored(android.graphics.drawable.Drawable drawable) {
            return false;
        }
    }

    static class HoneycombDrawableImpl extends android.support.v4.graphics.drawable.DrawableCompat.BaseDrawableImpl {
        HoneycombDrawableImpl() {
        }

        @Override // android.support.v4.graphics.drawable.DrawableCompat.BaseDrawableImpl, android.support.v4.graphics.drawable.DrawableCompat.DrawableImpl
        public void jumpToCurrentState(android.graphics.drawable.Drawable drawable) {
            android.support.v4.graphics.drawable.DrawableCompatHoneycomb.jumpToCurrentState(drawable);
        }
    }

    static class KitKatDrawableImpl extends android.support.v4.graphics.drawable.DrawableCompat.HoneycombDrawableImpl {
        KitKatDrawableImpl() {
        }

        @Override // android.support.v4.graphics.drawable.DrawableCompat.BaseDrawableImpl, android.support.v4.graphics.drawable.DrawableCompat.DrawableImpl
        public void setAutoMirrored(android.graphics.drawable.Drawable drawable, boolean mirrored) {
            android.support.v4.graphics.drawable.DrawableCompatKitKat.setAutoMirrored(drawable, mirrored);
        }

        @Override // android.support.v4.graphics.drawable.DrawableCompat.BaseDrawableImpl, android.support.v4.graphics.drawable.DrawableCompat.DrawableImpl
        public boolean isAutoMirrored(android.graphics.drawable.Drawable drawable) {
            return android.support.v4.graphics.drawable.DrawableCompatKitKat.isAutoMirrored(drawable);
        }
    }

    static {
        int version = android.os.Build.VERSION.SDK_INT;
        if (version >= 19) {
            IMPL = new android.support.v4.graphics.drawable.DrawableCompat.KitKatDrawableImpl();
        } else if (version >= 11) {
            IMPL = new android.support.v4.graphics.drawable.DrawableCompat.HoneycombDrawableImpl();
        } else {
            IMPL = new android.support.v4.graphics.drawable.DrawableCompat.BaseDrawableImpl();
        }
    }

    public static void jumpToCurrentState(android.graphics.drawable.Drawable drawable) {
        IMPL.jumpToCurrentState(drawable);
    }

    public static void setAutoMirrored(android.graphics.drawable.Drawable drawable, boolean mirrored) {
        IMPL.setAutoMirrored(drawable, mirrored);
    }

    public static boolean isAutoMirrored(android.graphics.drawable.Drawable drawable) {
        return IMPL.isAutoMirrored(drawable);
    }
}
