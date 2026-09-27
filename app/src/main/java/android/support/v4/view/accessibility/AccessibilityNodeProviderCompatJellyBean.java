package android.support.v4.view.accessibility;

/* loaded from: classes.dex */
class AccessibilityNodeProviderCompatJellyBean {

    interface AccessibilityNodeInfoBridge {
        java.lang.Object createAccessibilityNodeInfo(int i);

        java.util.List<java.lang.Object> findAccessibilityNodeInfosByText(java.lang.String str, int i);

        boolean performAction(int i, int i2, android.os.Bundle bundle);
    }

    AccessibilityNodeProviderCompatJellyBean() {
    }

    public static java.lang.Object newAccessibilityNodeProviderBridge(final android.support.v4.view.accessibility.AccessibilityNodeProviderCompatJellyBean.AccessibilityNodeInfoBridge bridge) {
        return new android.view.accessibility.AccessibilityNodeProvider() { // from class: android.support.v4.view.accessibility.AccessibilityNodeProviderCompatJellyBean.1
            @Override // android.view.accessibility.AccessibilityNodeProvider
            public android.view.accessibility.AccessibilityNodeInfo createAccessibilityNodeInfo(int virtualViewId) {
                return (android.view.accessibility.AccessibilityNodeInfo) bridge.createAccessibilityNodeInfo(virtualViewId);
            }

            @Override // android.view.accessibility.AccessibilityNodeProvider
            @SuppressWarnings("unchecked") // NOTE(jadx-fix): bridge returns List<Object>; the smali Signature says the override returns List<AccessibilityNodeInfo>
            public java.util.List<android.view.accessibility.AccessibilityNodeInfo> findAccessibilityNodeInfosByText(java.lang.String text, int virtualViewId) {
                return (java.util.List<android.view.accessibility.AccessibilityNodeInfo>) (java.util.List) bridge.findAccessibilityNodeInfosByText(text, virtualViewId); // NOTE(jadx-fix): unchecked cast implied by the smali Signature attribute
            }

            @Override // android.view.accessibility.AccessibilityNodeProvider
            public boolean performAction(int virtualViewId, int action, android.os.Bundle arguments) {
                return bridge.performAction(virtualViewId, action, arguments);
            }
        };
    }
}
