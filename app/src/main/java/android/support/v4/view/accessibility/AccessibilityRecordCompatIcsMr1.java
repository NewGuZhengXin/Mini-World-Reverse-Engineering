package android.support.v4.view.accessibility;

/* loaded from: classes.dex */
class AccessibilityRecordCompatIcsMr1 {
    AccessibilityRecordCompatIcsMr1() {
    }

    public static int getMaxScrollX(java.lang.Object record) {
        return ((android.view.accessibility.AccessibilityRecord) record).getMaxScrollX();
    }

    public static int getMaxScrollY(java.lang.Object record) {
        return ((android.view.accessibility.AccessibilityRecord) record).getMaxScrollY();
    }

    public static void setMaxScrollX(java.lang.Object record, int maxScrollX) {
        ((android.view.accessibility.AccessibilityRecord) record).setMaxScrollX(maxScrollX);
    }

    public static void setMaxScrollY(java.lang.Object record, int maxScrollY) {
        ((android.view.accessibility.AccessibilityRecord) record).setMaxScrollY(maxScrollY);
    }
}
