package android.support.v4.view;

/* loaded from: classes.dex */
class ScaleGestureDetectorCompatKitKat {
    private ScaleGestureDetectorCompatKitKat() {
    }

    public static void setQuickScaleEnabled(java.lang.Object scaleGestureDetector, boolean enabled) {
        ((android.view.ScaleGestureDetector) scaleGestureDetector).setQuickScaleEnabled(enabled);
    }

    public static boolean isQuickScaleEnabled(java.lang.Object scaleGestureDetector) {
        return ((android.view.ScaleGestureDetector) scaleGestureDetector).isQuickScaleEnabled();
    }
}
