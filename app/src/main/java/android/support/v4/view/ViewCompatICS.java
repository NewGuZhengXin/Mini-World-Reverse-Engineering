package android.support.v4.view;

/* loaded from: classes.dex */
class ViewCompatICS {
    ViewCompatICS() {
    }

    public static boolean canScrollHorizontally(android.view.View v, int direction) {
        return v.canScrollHorizontally(direction);
    }

    public static boolean canScrollVertically(android.view.View v, int direction) {
        return v.canScrollVertically(direction);
    }

    public static void setAccessibilityDelegate(android.view.View v, java.lang.Object delegate) {
        v.setAccessibilityDelegate((android.view.View.AccessibilityDelegate) delegate);
    }

    public static void onPopulateAccessibilityEvent(android.view.View v, android.view.accessibility.AccessibilityEvent event) {
        v.onPopulateAccessibilityEvent(event);
    }

    public static void onInitializeAccessibilityEvent(android.view.View v, android.view.accessibility.AccessibilityEvent event) {
        v.onInitializeAccessibilityEvent(event);
    }

    public static void onInitializeAccessibilityNodeInfo(android.view.View v, java.lang.Object info) {
        v.onInitializeAccessibilityNodeInfo((android.view.accessibility.AccessibilityNodeInfo) info);
    }
}
