package android.support.v4.view;

/* loaded from: classes.dex */
public class ViewGroupCompat {
    static final android.support.v4.view.ViewGroupCompat.ViewGroupCompatImpl IMPL;
    public static final int LAYOUT_MODE_CLIP_BOUNDS = 0;
    public static final int LAYOUT_MODE_OPTICAL_BOUNDS = 1;

    interface ViewGroupCompatImpl {
        int getLayoutMode(android.view.ViewGroup viewGroup);

        boolean onRequestSendAccessibilityEvent(android.view.ViewGroup viewGroup, android.view.View view, android.view.accessibility.AccessibilityEvent accessibilityEvent);

        void setLayoutMode(android.view.ViewGroup viewGroup, int i);

        void setMotionEventSplittingEnabled(android.view.ViewGroup viewGroup, boolean z);
    }

    static class ViewGroupCompatStubImpl implements android.support.v4.view.ViewGroupCompat.ViewGroupCompatImpl {
        ViewGroupCompatStubImpl() {
        }

        @Override // android.support.v4.view.ViewGroupCompat.ViewGroupCompatImpl
        public boolean onRequestSendAccessibilityEvent(android.view.ViewGroup group, android.view.View child, android.view.accessibility.AccessibilityEvent event) {
            return true;
        }

        @Override // android.support.v4.view.ViewGroupCompat.ViewGroupCompatImpl
        public void setMotionEventSplittingEnabled(android.view.ViewGroup group, boolean split) {
        }

        @Override // android.support.v4.view.ViewGroupCompat.ViewGroupCompatImpl
        public int getLayoutMode(android.view.ViewGroup group) {
            return 0;
        }

        @Override // android.support.v4.view.ViewGroupCompat.ViewGroupCompatImpl
        public void setLayoutMode(android.view.ViewGroup group, int mode) {
        }
    }

    static class ViewGroupCompatHCImpl extends android.support.v4.view.ViewGroupCompat.ViewGroupCompatStubImpl {
        ViewGroupCompatHCImpl() {
        }

        @Override // android.support.v4.view.ViewGroupCompat.ViewGroupCompatStubImpl, android.support.v4.view.ViewGroupCompat.ViewGroupCompatImpl
        public void setMotionEventSplittingEnabled(android.view.ViewGroup group, boolean split) {
            android.support.v4.view.ViewGroupCompatHC.setMotionEventSplittingEnabled(group, split);
        }
    }

    static class ViewGroupCompatIcsImpl extends android.support.v4.view.ViewGroupCompat.ViewGroupCompatHCImpl {
        ViewGroupCompatIcsImpl() {
        }

        @Override // android.support.v4.view.ViewGroupCompat.ViewGroupCompatStubImpl, android.support.v4.view.ViewGroupCompat.ViewGroupCompatImpl
        public boolean onRequestSendAccessibilityEvent(android.view.ViewGroup group, android.view.View child, android.view.accessibility.AccessibilityEvent event) {
            return android.support.v4.view.ViewGroupCompatIcs.onRequestSendAccessibilityEvent(group, child, event);
        }
    }

    static class ViewGroupCompatJellybeanMR2Impl extends android.support.v4.view.ViewGroupCompat.ViewGroupCompatIcsImpl {
        ViewGroupCompatJellybeanMR2Impl() {
        }

        @Override // android.support.v4.view.ViewGroupCompat.ViewGroupCompatStubImpl, android.support.v4.view.ViewGroupCompat.ViewGroupCompatImpl
        public int getLayoutMode(android.view.ViewGroup group) {
            return android.support.v4.view.ViewGroupCompatJellybeanMR2.getLayoutMode(group);
        }

        @Override // android.support.v4.view.ViewGroupCompat.ViewGroupCompatStubImpl, android.support.v4.view.ViewGroupCompat.ViewGroupCompatImpl
        public void setLayoutMode(android.view.ViewGroup group, int mode) {
            android.support.v4.view.ViewGroupCompatJellybeanMR2.setLayoutMode(group, mode);
        }
    }

    static {
        int version = android.os.Build.VERSION.SDK_INT;
        // NOTE(jadx-fix): the original <clinit> jumped to its end after the >= 18 assignment
        // (jadx rendered that as an illegal `return;`); an else-if chain keeps the semantics.
        if (version >= 18) {
            IMPL = new android.support.v4.view.ViewGroupCompat.ViewGroupCompatJellybeanMR2Impl();
        } else if (version >= 14) {
            IMPL = new android.support.v4.view.ViewGroupCompat.ViewGroupCompatIcsImpl();
        } else if (version >= 11) {
            IMPL = new android.support.v4.view.ViewGroupCompat.ViewGroupCompatHCImpl();
        } else {
            IMPL = new android.support.v4.view.ViewGroupCompat.ViewGroupCompatStubImpl();
        }
    }

    private ViewGroupCompat() {
    }

    public static boolean onRequestSendAccessibilityEvent(android.view.ViewGroup group, android.view.View child, android.view.accessibility.AccessibilityEvent event) {
        return IMPL.onRequestSendAccessibilityEvent(group, child, event);
    }

    public static void setMotionEventSplittingEnabled(android.view.ViewGroup group, boolean split) {
        IMPL.setMotionEventSplittingEnabled(group, split);
    }

    public static int getLayoutMode(android.view.ViewGroup group) {
        return IMPL.getLayoutMode(group);
    }

    public static void setLayoutMode(android.view.ViewGroup group, int mode) {
        IMPL.setLayoutMode(group, mode);
    }
}
