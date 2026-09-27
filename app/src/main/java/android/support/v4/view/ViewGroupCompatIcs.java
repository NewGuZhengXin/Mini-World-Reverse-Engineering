package android.support.v4.view;

/* loaded from: classes.dex */
class ViewGroupCompatIcs {
    ViewGroupCompatIcs() {
    }

    public static boolean onRequestSendAccessibilityEvent(android.view.ViewGroup group, android.view.View child, android.view.accessibility.AccessibilityEvent event) {
        return group.onRequestSendAccessibilityEvent(child, event);
    }
}
