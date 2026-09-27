package android.support.v4.view.accessibility;

/* loaded from: classes.dex */
public class AccessibilityEventCompat {
    private static final android.support.v4.view.accessibility.AccessibilityEventCompat.AccessibilityEventVersionImpl IMPL;
    public static final int TYPES_ALL_MASK = -1;
    public static final int TYPE_ANNOUNCEMENT = 16384;
    public static final int TYPE_GESTURE_DETECTION_END = 524288;
    public static final int TYPE_GESTURE_DETECTION_START = 262144;
    public static final int TYPE_TOUCH_EXPLORATION_GESTURE_END = 1024;
    public static final int TYPE_TOUCH_EXPLORATION_GESTURE_START = 512;
    public static final int TYPE_TOUCH_INTERACTION_END = 2097152;
    public static final int TYPE_TOUCH_INTERACTION_START = 1048576;
    public static final int TYPE_VIEW_ACCESSIBILITY_FOCUSED = 32768;
    public static final int TYPE_VIEW_ACCESSIBILITY_FOCUS_CLEARED = 65536;
    public static final int TYPE_VIEW_HOVER_ENTER = 128;
    public static final int TYPE_VIEW_HOVER_EXIT = 256;
    public static final int TYPE_VIEW_SCROLLED = 4096;
    public static final int TYPE_VIEW_TEXT_SELECTION_CHANGED = 8192;
    public static final int TYPE_VIEW_TEXT_TRAVERSED_AT_MOVEMENT_GRANULARITY = 131072;
    public static final int TYPE_WINDOW_CONTENT_CHANGED = 2048;

    interface AccessibilityEventVersionImpl {
        void appendRecord(android.view.accessibility.AccessibilityEvent accessibilityEvent, java.lang.Object obj);

        java.lang.Object getRecord(android.view.accessibility.AccessibilityEvent accessibilityEvent, int i);

        int getRecordCount(android.view.accessibility.AccessibilityEvent accessibilityEvent);
    }

    static class AccessibilityEventStubImpl implements android.support.v4.view.accessibility.AccessibilityEventCompat.AccessibilityEventVersionImpl {
        AccessibilityEventStubImpl() {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityEventCompat.AccessibilityEventVersionImpl
        public void appendRecord(android.view.accessibility.AccessibilityEvent event, java.lang.Object record) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityEventCompat.AccessibilityEventVersionImpl
        public java.lang.Object getRecord(android.view.accessibility.AccessibilityEvent event, int index) {
            return null;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityEventCompat.AccessibilityEventVersionImpl
        public int getRecordCount(android.view.accessibility.AccessibilityEvent event) {
            return 0;
        }
    }

    static class AccessibilityEventIcsImpl extends android.support.v4.view.accessibility.AccessibilityEventCompat.AccessibilityEventStubImpl {
        AccessibilityEventIcsImpl() {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityEventCompat.AccessibilityEventStubImpl, android.support.v4.view.accessibility.AccessibilityEventCompat.AccessibilityEventVersionImpl
        public void appendRecord(android.view.accessibility.AccessibilityEvent event, java.lang.Object record) {
            android.support.v4.view.accessibility.AccessibilityEventCompatIcs.appendRecord(event, record);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityEventCompat.AccessibilityEventStubImpl, android.support.v4.view.accessibility.AccessibilityEventCompat.AccessibilityEventVersionImpl
        public java.lang.Object getRecord(android.view.accessibility.AccessibilityEvent event, int index) {
            return android.support.v4.view.accessibility.AccessibilityEventCompatIcs.getRecord(event, index);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityEventCompat.AccessibilityEventStubImpl, android.support.v4.view.accessibility.AccessibilityEventCompat.AccessibilityEventVersionImpl
        public int getRecordCount(android.view.accessibility.AccessibilityEvent event) {
            return android.support.v4.view.accessibility.AccessibilityEventCompatIcs.getRecordCount(event);
        }
    }

    static {
        if (android.os.Build.VERSION.SDK_INT >= 14) {
            IMPL = new android.support.v4.view.accessibility.AccessibilityEventCompat.AccessibilityEventIcsImpl();
        } else {
            IMPL = new android.support.v4.view.accessibility.AccessibilityEventCompat.AccessibilityEventStubImpl();
        }
    }

    private AccessibilityEventCompat() {
    }

    public static int getRecordCount(android.view.accessibility.AccessibilityEvent event) {
        return IMPL.getRecordCount(event);
    }

    public static void appendRecord(android.view.accessibility.AccessibilityEvent event, android.support.v4.view.accessibility.AccessibilityRecordCompat record) {
        IMPL.appendRecord(event, record.getImpl());
    }

    public static android.support.v4.view.accessibility.AccessibilityRecordCompat getRecord(android.view.accessibility.AccessibilityEvent event, int index) {
        return new android.support.v4.view.accessibility.AccessibilityRecordCompat(IMPL.getRecord(event, index));
    }

    public static android.support.v4.view.accessibility.AccessibilityRecordCompat asRecord(android.view.accessibility.AccessibilityEvent event) {
        return new android.support.v4.view.accessibility.AccessibilityRecordCompat(event);
    }
}
