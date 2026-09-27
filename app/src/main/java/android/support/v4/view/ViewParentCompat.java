package android.support.v4.view;

/* loaded from: classes.dex */
public class ViewParentCompat {
    static final android.support.v4.view.ViewParentCompat.ViewParentCompatImpl IMPL;

    interface ViewParentCompatImpl {
        boolean requestSendAccessibilityEvent(android.view.ViewParent viewParent, android.view.View view, android.view.accessibility.AccessibilityEvent accessibilityEvent);
    }

    static class ViewParentCompatStubImpl implements android.support.v4.view.ViewParentCompat.ViewParentCompatImpl {
        ViewParentCompatStubImpl() {
        }

        @Override // android.support.v4.view.ViewParentCompat.ViewParentCompatImpl
        public boolean requestSendAccessibilityEvent(android.view.ViewParent parent, android.view.View child, android.view.accessibility.AccessibilityEvent event) {
            if (child == null) {
                return false;
            }
            android.view.accessibility.AccessibilityManager manager = (android.view.accessibility.AccessibilityManager) child.getContext().getSystemService("accessibility");
            manager.sendAccessibilityEvent(event);
            return true;
        }
    }

    static class ViewParentCompatICSImpl extends android.support.v4.view.ViewParentCompat.ViewParentCompatStubImpl {
        ViewParentCompatICSImpl() {
        }

        @Override // android.support.v4.view.ViewParentCompat.ViewParentCompatStubImpl, android.support.v4.view.ViewParentCompat.ViewParentCompatImpl
        public boolean requestSendAccessibilityEvent(android.view.ViewParent parent, android.view.View child, android.view.accessibility.AccessibilityEvent event) {
            return android.support.v4.view.ViewParentCompatICS.requestSendAccessibilityEvent(parent, child, event);
        }
    }

    static {
        int version = android.os.Build.VERSION.SDK_INT;
        if (version >= 14) {
            IMPL = new android.support.v4.view.ViewParentCompat.ViewParentCompatICSImpl();
        } else {
            IMPL = new android.support.v4.view.ViewParentCompat.ViewParentCompatStubImpl();
        }
    }

    private ViewParentCompat() {
    }

    public static boolean requestSendAccessibilityEvent(android.view.ViewParent parent, android.view.View child, android.view.accessibility.AccessibilityEvent event) {
        return IMPL.requestSendAccessibilityEvent(parent, child, event);
    }
}
