package android.support.v4.view.accessibility;

/* loaded from: classes.dex */
class AccessibilityEventCompatIcs {
    AccessibilityEventCompatIcs() {
    }

    public static int getRecordCount(android.view.accessibility.AccessibilityEvent event) {
        return event.getRecordCount();
    }

    public static void appendRecord(android.view.accessibility.AccessibilityEvent event, java.lang.Object record) {
        event.appendRecord((android.view.accessibility.AccessibilityRecord) record);
    }

    public static java.lang.Object getRecord(android.view.accessibility.AccessibilityEvent event, int index) {
        return event.getRecord(index);
    }
}
