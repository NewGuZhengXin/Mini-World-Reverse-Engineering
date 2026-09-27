package android.support.v4.view;

/* loaded from: classes.dex */
class AccessibilityDelegateCompatIcs {

    public interface AccessibilityDelegateBridge {
        boolean dispatchPopulateAccessibilityEvent(android.view.View view, android.view.accessibility.AccessibilityEvent accessibilityEvent);

        void onInitializeAccessibilityEvent(android.view.View view, android.view.accessibility.AccessibilityEvent accessibilityEvent);

        void onInitializeAccessibilityNodeInfo(android.view.View view, java.lang.Object obj);

        void onPopulateAccessibilityEvent(android.view.View view, android.view.accessibility.AccessibilityEvent accessibilityEvent);

        boolean onRequestSendAccessibilityEvent(android.view.ViewGroup viewGroup, android.view.View view, android.view.accessibility.AccessibilityEvent accessibilityEvent);

        void sendAccessibilityEvent(android.view.View view, int i);

        void sendAccessibilityEventUnchecked(android.view.View view, android.view.accessibility.AccessibilityEvent accessibilityEvent);
    }

    AccessibilityDelegateCompatIcs() {
    }

    public static java.lang.Object newAccessibilityDelegateDefaultImpl() {
        return new android.view.View.AccessibilityDelegate();
    }

    public static java.lang.Object newAccessibilityDelegateBridge(final android.support.v4.view.AccessibilityDelegateCompatIcs.AccessibilityDelegateBridge bridge) {
        return new android.view.View.AccessibilityDelegate() { // from class: android.support.v4.view.AccessibilityDelegateCompatIcs.1
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
        };
    }

    public static boolean dispatchPopulateAccessibilityEvent(java.lang.Object delegate, android.view.View host, android.view.accessibility.AccessibilityEvent event) {
        return ((android.view.View.AccessibilityDelegate) delegate).dispatchPopulateAccessibilityEvent(host, event);
    }

    public static void onInitializeAccessibilityEvent(java.lang.Object delegate, android.view.View host, android.view.accessibility.AccessibilityEvent event) {
        ((android.view.View.AccessibilityDelegate) delegate).onInitializeAccessibilityEvent(host, event);
    }

    public static void onInitializeAccessibilityNodeInfo(java.lang.Object delegate, android.view.View host, java.lang.Object info) {
        ((android.view.View.AccessibilityDelegate) delegate).onInitializeAccessibilityNodeInfo(host, (android.view.accessibility.AccessibilityNodeInfo) info);
    }

    public static void onPopulateAccessibilityEvent(java.lang.Object delegate, android.view.View host, android.view.accessibility.AccessibilityEvent event) {
        ((android.view.View.AccessibilityDelegate) delegate).onPopulateAccessibilityEvent(host, event);
    }

    public static boolean onRequestSendAccessibilityEvent(java.lang.Object delegate, android.view.ViewGroup host, android.view.View child, android.view.accessibility.AccessibilityEvent event) {
        return ((android.view.View.AccessibilityDelegate) delegate).onRequestSendAccessibilityEvent(host, child, event);
    }

    public static void sendAccessibilityEvent(java.lang.Object delegate, android.view.View host, int eventType) {
        ((android.view.View.AccessibilityDelegate) delegate).sendAccessibilityEvent(host, eventType);
    }

    public static void sendAccessibilityEventUnchecked(java.lang.Object delegate, android.view.View host, android.view.accessibility.AccessibilityEvent event) {
        ((android.view.View.AccessibilityDelegate) delegate).sendAccessibilityEventUnchecked(host, event);
    }
}
