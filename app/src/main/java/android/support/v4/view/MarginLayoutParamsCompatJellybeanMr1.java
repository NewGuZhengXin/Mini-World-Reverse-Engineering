package android.support.v4.view;

/* loaded from: classes.dex */
class MarginLayoutParamsCompatJellybeanMr1 {
    MarginLayoutParamsCompatJellybeanMr1() {
    }

    public static int getMarginStart(android.view.ViewGroup.MarginLayoutParams lp) {
        return lp.getMarginStart();
    }

    public static int getMarginEnd(android.view.ViewGroup.MarginLayoutParams lp) {
        return lp.getMarginEnd();
    }

    public static void setMarginStart(android.view.ViewGroup.MarginLayoutParams lp, int marginStart) {
        lp.setMarginStart(marginStart);
    }

    public static void setMarginEnd(android.view.ViewGroup.MarginLayoutParams lp, int marginEnd) {
        lp.setMarginEnd(marginEnd);
    }

    public static boolean isMarginRelative(android.view.ViewGroup.MarginLayoutParams lp) {
        return lp.isMarginRelative();
    }

    public static int getLayoutDirection(android.view.ViewGroup.MarginLayoutParams lp) {
        return lp.getLayoutDirection();
    }

    public static void setLayoutDirection(android.view.ViewGroup.MarginLayoutParams lp, int layoutDirection) {
        lp.setLayoutDirection(layoutDirection);
    }

    public static void resolveLayoutDirection(android.view.ViewGroup.MarginLayoutParams lp, int layoutDirection) {
        lp.resolveLayoutDirection(layoutDirection);
    }
}
