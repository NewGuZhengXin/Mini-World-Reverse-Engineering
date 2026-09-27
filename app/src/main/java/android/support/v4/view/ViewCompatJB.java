package android.support.v4.view;

/* loaded from: classes.dex */
class ViewCompatJB {
    ViewCompatJB() {
    }

    public static boolean hasTransientState(android.view.View view) {
        return view.hasTransientState();
    }

    public static void setHasTransientState(android.view.View view, boolean hasTransientState) {
        view.setHasTransientState(hasTransientState);
    }

    public static void postInvalidateOnAnimation(android.view.View view) {
        view.postInvalidateOnAnimation();
    }

    public static void postInvalidateOnAnimation(android.view.View view, int left, int top, int right, int bottom) {
        view.postInvalidate(left, top, right, bottom);
    }

    public static void postOnAnimation(android.view.View view, java.lang.Runnable action) {
        view.postOnAnimation(action);
    }

    public static void postOnAnimationDelayed(android.view.View view, java.lang.Runnable action, long delayMillis) {
        view.postOnAnimationDelayed(action, delayMillis);
    }

    public static int getImportantForAccessibility(android.view.View view) {
        return view.getImportantForAccessibility();
    }

    public static void setImportantForAccessibility(android.view.View view, int mode) {
        view.setImportantForAccessibility(mode);
    }

    public static boolean performAccessibilityAction(android.view.View view, int action, android.os.Bundle arguments) {
        return view.performAccessibilityAction(action, arguments);
    }

    public static java.lang.Object getAccessibilityNodeProvider(android.view.View view) {
        return view.getAccessibilityNodeProvider();
    }

    public static android.view.ViewParent getParentForAccessibility(android.view.View view) {
        return view.getParentForAccessibility();
    }
}
