package android.support.v4.view;

/* loaded from: classes.dex */
public class ViewParentCompatICS {
    public static boolean requestSendAccessibilityEvent(android.view.ViewParent parent, android.view.View child, android.view.accessibility.AccessibilityEvent event) {
        return parent.requestSendAccessibilityEvent(child, event);
    }
}
