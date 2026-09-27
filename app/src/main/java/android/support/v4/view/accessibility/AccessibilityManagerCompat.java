package android.support.v4.view.accessibility;

/* loaded from: classes.dex */
public class AccessibilityManagerCompat {
    private static final android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityManagerVersionImpl IMPL;

    interface AccessibilityManagerVersionImpl {
        boolean addAccessibilityStateChangeListener(android.view.accessibility.AccessibilityManager accessibilityManager, android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityStateChangeListenerCompat accessibilityStateChangeListenerCompat);

        java.util.List<android.accessibilityservice.AccessibilityServiceInfo> getEnabledAccessibilityServiceList(android.view.accessibility.AccessibilityManager accessibilityManager, int i);

        java.util.List<android.accessibilityservice.AccessibilityServiceInfo> getInstalledAccessibilityServiceList(android.view.accessibility.AccessibilityManager accessibilityManager);

        boolean isTouchExplorationEnabled(android.view.accessibility.AccessibilityManager accessibilityManager);

        java.lang.Object newAccessiblityStateChangeListener(android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityStateChangeListenerCompat accessibilityStateChangeListenerCompat);

        boolean removeAccessibilityStateChangeListener(android.view.accessibility.AccessibilityManager accessibilityManager, android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityStateChangeListenerCompat accessibilityStateChangeListenerCompat);
    }

    public static abstract class AccessibilityStateChangeListenerCompat {
        final java.lang.Object mListener = android.support.v4.view.accessibility.AccessibilityManagerCompat.IMPL.newAccessiblityStateChangeListener(this);

        public abstract void onAccessibilityStateChanged(boolean z);
    }

    static class AccessibilityManagerStubImpl implements android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityManagerVersionImpl {
        AccessibilityManagerStubImpl() {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityManagerVersionImpl
        public java.lang.Object newAccessiblityStateChangeListener(android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityStateChangeListenerCompat listener) {
            return null;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityManagerVersionImpl
        public boolean addAccessibilityStateChangeListener(android.view.accessibility.AccessibilityManager manager, android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityStateChangeListenerCompat listener) {
            return false;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityManagerVersionImpl
        public boolean removeAccessibilityStateChangeListener(android.view.accessibility.AccessibilityManager manager, android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityStateChangeListenerCompat listener) {
            return false;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityManagerVersionImpl
        public java.util.List<android.accessibilityservice.AccessibilityServiceInfo> getEnabledAccessibilityServiceList(android.view.accessibility.AccessibilityManager manager, int feedbackTypeFlags) {
            return java.util.Collections.emptyList();
        }

        @Override // android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityManagerVersionImpl
        public java.util.List<android.accessibilityservice.AccessibilityServiceInfo> getInstalledAccessibilityServiceList(android.view.accessibility.AccessibilityManager manager) {
            return java.util.Collections.emptyList();
        }

        @Override // android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityManagerVersionImpl
        public boolean isTouchExplorationEnabled(android.view.accessibility.AccessibilityManager manager) {
            return false;
        }
    }

    static class AccessibilityManagerIcsImpl extends android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityManagerStubImpl {
        AccessibilityManagerIcsImpl() {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityManagerStubImpl, android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityManagerVersionImpl
        public java.lang.Object newAccessiblityStateChangeListener(final android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityStateChangeListenerCompat listener) {
            return android.support.v4.view.accessibility.AccessibilityManagerCompatIcs.newAccessibilityStateChangeListener(new android.support.v4.view.accessibility.AccessibilityManagerCompatIcs.AccessibilityStateChangeListenerBridge() { // from class: android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityManagerIcsImpl.1
                @Override // android.support.v4.view.accessibility.AccessibilityManagerCompatIcs.AccessibilityStateChangeListenerBridge
                public void onAccessibilityStateChanged(boolean enabled) {
                    listener.onAccessibilityStateChanged(enabled);
                }
            });
        }

        @Override // android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityManagerStubImpl, android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityManagerVersionImpl
        public boolean addAccessibilityStateChangeListener(android.view.accessibility.AccessibilityManager manager, android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityStateChangeListenerCompat listener) {
            return android.support.v4.view.accessibility.AccessibilityManagerCompatIcs.addAccessibilityStateChangeListener(manager, listener.mListener);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityManagerStubImpl, android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityManagerVersionImpl
        public boolean removeAccessibilityStateChangeListener(android.view.accessibility.AccessibilityManager manager, android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityStateChangeListenerCompat listener) {
            return android.support.v4.view.accessibility.AccessibilityManagerCompatIcs.removeAccessibilityStateChangeListener(manager, listener.mListener);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityManagerStubImpl, android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityManagerVersionImpl
        public java.util.List<android.accessibilityservice.AccessibilityServiceInfo> getEnabledAccessibilityServiceList(android.view.accessibility.AccessibilityManager manager, int feedbackTypeFlags) {
            return android.support.v4.view.accessibility.AccessibilityManagerCompatIcs.getEnabledAccessibilityServiceList(manager, feedbackTypeFlags);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityManagerStubImpl, android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityManagerVersionImpl
        public java.util.List<android.accessibilityservice.AccessibilityServiceInfo> getInstalledAccessibilityServiceList(android.view.accessibility.AccessibilityManager manager) {
            return android.support.v4.view.accessibility.AccessibilityManagerCompatIcs.getInstalledAccessibilityServiceList(manager);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityManagerStubImpl, android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityManagerVersionImpl
        public boolean isTouchExplorationEnabled(android.view.accessibility.AccessibilityManager manager) {
            return android.support.v4.view.accessibility.AccessibilityManagerCompatIcs.isTouchExplorationEnabled(manager);
        }
    }

    static {
        if (android.os.Build.VERSION.SDK_INT >= 14) {
            IMPL = new android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityManagerIcsImpl();
        } else {
            IMPL = new android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityManagerStubImpl();
        }
    }

    public static boolean addAccessibilityStateChangeListener(android.view.accessibility.AccessibilityManager manager, android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityStateChangeListenerCompat listener) {
        return IMPL.addAccessibilityStateChangeListener(manager, listener);
    }

    public static boolean removeAccessibilityStateChangeListener(android.view.accessibility.AccessibilityManager manager, android.support.v4.view.accessibility.AccessibilityManagerCompat.AccessibilityStateChangeListenerCompat listener) {
        return IMPL.removeAccessibilityStateChangeListener(manager, listener);
    }

    public static java.util.List<android.accessibilityservice.AccessibilityServiceInfo> getInstalledAccessibilityServiceList(android.view.accessibility.AccessibilityManager manager) {
        return IMPL.getInstalledAccessibilityServiceList(manager);
    }

    public static java.util.List<android.accessibilityservice.AccessibilityServiceInfo> getEnabledAccessibilityServiceList(android.view.accessibility.AccessibilityManager manager, int feedbackTypeFlags) {
        return IMPL.getEnabledAccessibilityServiceList(manager, feedbackTypeFlags);
    }

    public static boolean isTouchExplorationEnabled(android.view.accessibility.AccessibilityManager manager) {
        return IMPL.isTouchExplorationEnabled(manager);
    }
}
