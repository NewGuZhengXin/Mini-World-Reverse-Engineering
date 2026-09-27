package android.support.v4.view;

/* loaded from: classes.dex */
class ViewCompatHC {
    ViewCompatHC() {
    }

    static long getFrameTime() {
        return android.animation.ValueAnimator.getFrameDelay();
    }

    public static float getAlpha(android.view.View view) {
        return view.getAlpha();
    }

    public static void setLayerType(android.view.View view, int layerType, android.graphics.Paint paint) {
        view.setLayerType(layerType, paint);
    }

    public static int getLayerType(android.view.View view) {
        return view.getLayerType();
    }

    public static int resolveSizeAndState(int size, int measureSpec, int childMeasuredState) {
        return android.view.View.resolveSizeAndState(size, measureSpec, childMeasuredState);
    }

    public static int getMeasuredWidthAndState(android.view.View view) {
        return view.getMeasuredWidthAndState();
    }

    public static int getMeasuredHeightAndState(android.view.View view) {
        return view.getMeasuredHeightAndState();
    }

    public static int getMeasuredState(android.view.View view) {
        return view.getMeasuredState();
    }
}
