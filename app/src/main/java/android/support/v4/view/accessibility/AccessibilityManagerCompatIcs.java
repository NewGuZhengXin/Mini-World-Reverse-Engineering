package android.support.v4.view.accessibility;

/* loaded from: classes.dex */
class AccessibilityManagerCompatIcs {

    interface AccessibilityStateChangeListenerBridge {
        void onAccessibilityStateChanged(boolean z);
    }

    AccessibilityManagerCompatIcs() {
    }

    public static java.lang.Object newAccessibilityStateChangeListener(final android.support.v4.view.accessibility.AccessibilityManagerCompatIcs.AccessibilityStateChangeListenerBridge bridge) {
        return new android.view.accessibility.AccessibilityManager.AccessibilityStateChangeListener() { // from class: android.support.v4.view.accessibility.AccessibilityManagerCompatIcs.1
            @Override // android.view.accessibility.AccessibilityManager.AccessibilityStateChangeListener
            public void onAccessibilityStateChanged(boolean enabled) {
                bridge.onAccessibilityStateChanged(enabled);
            }
        };
    }

    public static boolean addAccessibilityStateChangeListener(android.view.accessibility.AccessibilityManager manager, java.lang.Object listener) {
        return manager.addAccessibilityStateChangeListener((android.view.accessibility.AccessibilityManager.AccessibilityStateChangeListener) listener);
    }

    public static boolean removeAccessibilityStateChangeListener(android.view.accessibility.AccessibilityManager manager, java.lang.Object listener) {
        return manager.removeAccessibilityStateChangeListener((android.view.accessibility.AccessibilityManager.AccessibilityStateChangeListener) listener);
    }

    public static java.util.List<android.accessibilityservice.AccessibilityServiceInfo> getEnabledAccessibilityServiceList(android.view.accessibility.AccessibilityManager manager, int feedbackTypeFlags) {
        return manager.getEnabledAccessibilityServiceList(feedbackTypeFlags);
    }

    public static java.util.List<android.accessibilityservice.AccessibilityServiceInfo> getInstalledAccessibilityServiceList(android.view.accessibility.AccessibilityManager manager) {
        return manager.getInstalledAccessibilityServiceList();
    }

    public static boolean isTouchExplorationEnabled(android.view.accessibility.AccessibilityManager manager) {
        return manager.isTouchExplorationEnabled();
    }
}
