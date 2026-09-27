package android.support.v4.view;

/* loaded from: classes.dex */
class GravityCompatJellybeanMr1 {
    GravityCompatJellybeanMr1() {
    }

    public static int getAbsoluteGravity(int gravity, int layoutDirection) {
        return android.view.Gravity.getAbsoluteGravity(gravity, layoutDirection);
    }

    public static void apply(int gravity, int w, int h, android.graphics.Rect container, android.graphics.Rect outRect, int layoutDirection) {
        android.view.Gravity.apply(gravity, w, h, container, outRect, layoutDirection);
    }

    public static void apply(int gravity, int w, int h, android.graphics.Rect container, int xAdj, int yAdj, android.graphics.Rect outRect, int layoutDirection) {
        android.view.Gravity.apply(gravity, w, h, container, xAdj, yAdj, outRect, layoutDirection);
    }

    public static void applyDisplay(int gravity, android.graphics.Rect display, android.graphics.Rect inoutObj, int layoutDirection) {
        android.view.Gravity.applyDisplay(gravity, display, inoutObj, layoutDirection);
    }
}
