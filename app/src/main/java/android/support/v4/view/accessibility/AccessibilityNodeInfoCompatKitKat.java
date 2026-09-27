package android.support.v4.view.accessibility;

/* loaded from: classes.dex */
class AccessibilityNodeInfoCompatKitKat {
    AccessibilityNodeInfoCompatKitKat() {
    }

    public static int getLiveRegion(java.lang.Object info) {
        return ((android.view.accessibility.AccessibilityNodeInfo) info).getLiveRegion();
    }

    public static void setLiveRegion(java.lang.Object info, int mode) {
        ((android.view.accessibility.AccessibilityNodeInfo) info).setLiveRegion(mode);
    }
}
