package android.support.v4.view;

/* loaded from: classes.dex */
class AccessibilityDelegateCompatJellyBean {

    public interface AccessibilityDelegateBridgeJellyBean {
        boolean dispatchPopulateAccessibilityEvent(android.view.View view, android.view.accessibility.AccessibilityEvent accessibilityEvent);

        java.lang.Object getAccessibilityNodeProvider(android.view.View view);

        void onInitializeAccessibilityEvent(android.view.View view, android.view.accessibility.AccessibilityEvent accessibilityEvent);

        void onInitializeAccessibilityNodeInfo(android.view.View view, java.lang.Object obj);

        void onPopulateAccessibilityEvent(android.view.View view, android.view.accessibility.AccessibilityEvent accessibilityEvent);

        boolean onRequestSendAccessibilityEvent(android.view.ViewGroup viewGroup, android.view.View view, android.view.accessibility.AccessibilityEvent accessibilityEvent);

        boolean performAccessibilityAction(android.view.View view, int i, android.os.Bundle bundle);

        void sendAccessibilityEvent(android.view.View view, int i);

        void sendAccessibilityEventUnchecked(android.view.View view, android.view.accessibility.AccessibilityEvent accessibilityEvent);
    }

    AccessibilityDelegateCompatJellyBean() {
    }

    public static java.lang.Object newAccessibilityDelegateBridge(final android.support.v4.view.AccessibilityDelegateCompatJellyBean.AccessibilityDelegateBridgeJellyBean bridge) {
        return new android.view.View.AccessibilityDelegate() { // from class: android.support.v4.view.AccessibilityDelegateCompatJellyBean.1
            @Override // android.view.View.AccessibilityDelegate
            public boolean dispatchPopulateAccessibilityEvent(android.view.View host, android.view.accessibility.AccessibilityEvent event) {
                return bridge.dispatchPopulateAccessibilityEvent(host, event);
            }

            @Override // android.view.View.AccessibilityDelegate
            public void onInitializeAccessibilityEvent(android.view.View host, android.view.accessibility.AccessibilityEvent event) {
                bridge.onInitializeAccessibilityEvent(host, event);
            }

            @Override // android.view.View.AccessibilityDelegate
            public void onInitializeAccessibilityNodeInfo(android.view.View host, android.view.accessibility.AccessibilityNodeInfo info) {
                bridge.onInitializeAccessibilityNodeInfo(host, info);
            }

            @Override // android.view.View.AccessibilityDelegate
            public void onPopulateAccessibilityEvent(android.view.View host, android.view.accessibility.AccessibilityEvent event) {
                bridge.onPopulateAccessibilityEvent(host, event);
            }

            @Override // android.view.View.AccessibilityDelegate
            public boolean onRequestSendAccessibilityEvent(android.view.ViewGroup host, android.view.View child, android.view.accessibility.AccessibilityEvent event) {
                return bridge.onRequestSendAccessibilityEvent(host, child, event);
            }

            @Override // android.view.View.AccessibilityDelegate
            public void sendAccessibilityEvent(android.view.View host, int eventType) {
                bridge.sendAccessibilityEvent(host, eventType);
            }

            @Override // android.view.View.AccessibilityDelegate
            public void sendAccessibilityEventUnchecked(android.view.View host, android.view.accessibility.AccessibilityEvent event) {
                bridge.sendAccessibilityEventUnchecked(host, event);
            }

            @Override // android.view.View.AccessibilityDelegate
            public android.view.accessibility.AccessibilityNodeProvider getAccessibilityNodeProvider(android.view.View host) {
                return (android.view.accessibility.AccessibilityNodeProvider) bridge.getAccessibilityNodeProvider(host);
            }

            @Override // android.view.View.AccessibilityDelegate
            public boolean performAccessibilityAction(android.view.View host, int action, android.os.Bundle args) {
                return bridge.performAccessibilityAction(host, action, args);
            }
        };
    }

    public static java.lang.Object getAccessibilityNodeProvider(java.lang.Object delegate, android.view.View host) {
        return ((android.view.View.AccessibilityDelegate) delegate).getAccessibilityNodeProvider(host);
    }

    public static boolean performAccessibilityAction(java.lang.Object delegate, android.view.View host, int action, android.os.Bundle args) {
        return ((android.view.View.AccessibilityDelegate) delegate).performAccessibilityAction(host, action, args);
    }
}
