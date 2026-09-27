package android.support.v4.view.accessibility;

/* loaded from: classes.dex */
class AccessibilityNodeInfoCompatJellybeanMr2 {
    AccessibilityNodeInfoCompatJellybeanMr2() {
    }

    public static void setViewIdResourceName(java.lang.Object info, java.lang.String viewId) {
        ((android.view.accessibility.AccessibilityNodeInfo) info).setViewIdResourceName(viewId);
    }

    public static java.lang.String getViewIdResourceName(java.lang.Object info) {
        return ((android.view.accessibility.AccessibilityNodeInfo) info).getViewIdResourceName();
    }
}
