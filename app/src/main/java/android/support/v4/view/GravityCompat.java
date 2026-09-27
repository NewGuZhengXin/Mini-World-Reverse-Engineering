package android.support.v4.view;

/* loaded from: classes.dex */
public class GravityCompat {
    public static final int END = 8388613;
    static final android.support.v4.view.GravityCompat.GravityCompatImpl IMPL;
    public static final int RELATIVE_HORIZONTAL_GRAVITY_MASK = 8388615;
    public static final int RELATIVE_LAYOUT_DIRECTION = 8388608;
    public static final int START = 8388611;

    interface GravityCompatImpl {
        void apply(int i, int i2, int i3, android.graphics.Rect rect, int i4, int i5, android.graphics.Rect rect2, int i6);

        void apply(int i, int i2, int i3, android.graphics.Rect rect, android.graphics.Rect rect2, int i4);

        void applyDisplay(int i, android.graphics.Rect rect, android.graphics.Rect rect2, int i2);

        int getAbsoluteGravity(int i, int i2);
    }

    static class GravityCompatImplBase implements android.support.v4.view.GravityCompat.GravityCompatImpl {
        GravityCompatImplBase() {
        }

        @Override // android.support.v4.view.GravityCompat.GravityCompatImpl
        public int getAbsoluteGravity(int gravity, int layoutDirection) {
            return (-8388609) & gravity;
        }

        @Override // android.support.v4.view.GravityCompat.GravityCompatImpl
        public void apply(int gravity, int w, int h, android.graphics.Rect container, android.graphics.Rect outRect, int layoutDirection) {
            android.view.Gravity.apply(gravity, w, h, container, outRect);
        }

        @Override // android.support.v4.view.GravityCompat.GravityCompatImpl
        public void apply(int gravity, int w, int h, android.graphics.Rect container, int xAdj, int yAdj, android.graphics.Rect outRect, int layoutDirection) {
            android.view.Gravity.apply(gravity, w, h, container, xAdj, yAdj, outRect);
        }

        @Override // android.support.v4.view.GravityCompat.GravityCompatImpl
        public void applyDisplay(int gravity, android.graphics.Rect display, android.graphics.Rect inoutObj, int layoutDirection) {
            android.view.Gravity.applyDisplay(gravity, display, inoutObj);
        }
    }

    static class GravityCompatImplJellybeanMr1 implements android.support.v4.view.GravityCompat.GravityCompatImpl {
        GravityCompatImplJellybeanMr1() {
        }

        @Override // android.support.v4.view.GravityCompat.GravityCompatImpl
        public int getAbsoluteGravity(int gravity, int layoutDirection) {
            return android.support.v4.view.GravityCompatJellybeanMr1.getAbsoluteGravity(gravity, layoutDirection);
        }

        @Override // android.support.v4.view.GravityCompat.GravityCompatImpl
        public void apply(int gravity, int w, int h, android.graphics.Rect container, android.graphics.Rect outRect, int layoutDirection) {
            android.support.v4.view.GravityCompatJellybeanMr1.apply(gravity, w, h, container, outRect, layoutDirection);
        }

        @Override // android.support.v4.view.GravityCompat.GravityCompatImpl
        public void apply(int gravity, int w, int h, android.graphics.Rect container, int xAdj, int yAdj, android.graphics.Rect outRect, int layoutDirection) {
            android.support.v4.view.GravityCompatJellybeanMr1.apply(gravity, w, h, container, xAdj, yAdj, outRect, layoutDirection);
        }

        @Override // android.support.v4.view.GravityCompat.GravityCompatImpl
        public void applyDisplay(int gravity, android.graphics.Rect display, android.graphics.Rect inoutObj, int layoutDirection) {
            android.support.v4.view.GravityCompatJellybeanMr1.applyDisplay(gravity, display, inoutObj, layoutDirection);
        }
    }

    static {
        int version = android.os.Build.VERSION.SDK_INT;
        if (version >= 17) {
            IMPL = new android.support.v4.view.GravityCompat.GravityCompatImplJellybeanMr1();
        } else {
            IMPL = new android.support.v4.view.GravityCompat.GravityCompatImplBase();
        }
    }

    public static void apply(int gravity, int w, int h, android.graphics.Rect container, android.graphics.Rect outRect, int layoutDirection) {
        IMPL.apply(gravity, w, h, container, outRect, layoutDirection);
    }

    public static void apply(int gravity, int w, int h, android.graphics.Rect container, int xAdj, int yAdj, android.graphics.Rect outRect, int layoutDirection) {
        IMPL.apply(gravity, w, h, container, xAdj, yAdj, outRect, layoutDirection);
    }

    public static void applyDisplay(int gravity, android.graphics.Rect display, android.graphics.Rect inoutObj, int layoutDirection) {
        IMPL.applyDisplay(gravity, display, inoutObj, layoutDirection);
    }

    public static int getAbsoluteGravity(int gravity, int layoutDirection) {
        return IMPL.getAbsoluteGravity(gravity, layoutDirection);
    }
}
