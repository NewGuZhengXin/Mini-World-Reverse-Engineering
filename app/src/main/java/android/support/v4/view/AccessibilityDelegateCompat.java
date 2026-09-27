package android.support.v4.view;

/* loaded from: classes.dex */
public class AccessibilityDelegateCompat {
    private static final java.lang.Object DEFAULT_DELEGATE;
    private static final android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateImpl IMPL;
    final java.lang.Object mBridge = IMPL.newAccessiblityDelegateBridge(this);

    interface AccessibilityDelegateImpl {
        boolean dispatchPopulateAccessibilityEvent(java.lang.Object obj, android.view.View view, android.view.accessibility.AccessibilityEvent accessibilityEvent);

        android.support.v4.view.accessibility.AccessibilityNodeProviderCompat getAccessibilityNodeProvider(java.lang.Object obj, android.view.View view);

        java.lang.Object newAccessiblityDelegateBridge(android.support.v4.view.AccessibilityDelegateCompat accessibilityDelegateCompat);

        java.lang.Object newAccessiblityDelegateDefaultImpl();

        void onInitializeAccessibilityEvent(java.lang.Object obj, android.view.View view, android.view.accessibility.AccessibilityEvent accessibilityEvent);

        void onInitializeAccessibilityNodeInfo(java.lang.Object obj, android.view.View view, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat accessibilityNodeInfoCompat);

        void onPopulateAccessibilityEvent(java.lang.Object obj, android.view.View view, android.view.accessibility.AccessibilityEvent accessibilityEvent);

        boolean onRequestSendAccessibilityEvent(java.lang.Object obj, android.view.ViewGroup viewGroup, android.view.View view, android.view.accessibility.AccessibilityEvent accessibilityEvent);

        boolean performAccessibilityAction(java.lang.Object obj, android.view.View view, int i, android.os.Bundle bundle);

        void sendAccessibilityEvent(java.lang.Object obj, android.view.View view, int i);

        void sendAccessibilityEventUnchecked(java.lang.Object obj, android.view.View view, android.view.accessibility.AccessibilityEvent accessibilityEvent);
    }

    static class AccessibilityDelegateStubImpl implements android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateImpl {
        AccessibilityDelegateStubImpl() {
        }

        @Override // android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateImpl
        public java.lang.Object newAccessiblityDelegateDefaultImpl() {
            return null;
        }

        @Override // android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateImpl
        public java.lang.Object newAccessiblityDelegateBridge(android.support.v4.view.AccessibilityDelegateCompat listener) {
            return null;
        }

        @Override // android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateImpl
        public boolean dispatchPopulateAccessibilityEvent(java.lang.Object delegate, android.view.View host, android.view.accessibility.AccessibilityEvent event) {
            return false;
        }

        @Override // android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateImpl
        public void onInitializeAccessibilityEvent(java.lang.Object delegate, android.view.View host, android.view.accessibility.AccessibilityEvent event) {
        }

        @Override // android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateImpl
        public void onInitializeAccessibilityNodeInfo(java.lang.Object delegate, android.view.View host, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat info) {
        }

        @Override // android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateImpl
        public void onPopulateAccessibilityEvent(java.lang.Object delegate, android.view.View host, android.view.accessibility.AccessibilityEvent event) {
        }

        @Override // android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateImpl
        public boolean onRequestSendAccessibilityEvent(java.lang.Object delegate, android.view.ViewGroup host, android.view.View child, android.view.accessibility.AccessibilityEvent event) {
            return true;
        }

        @Override // android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateImpl
        public void sendAccessibilityEvent(java.lang.Object delegate, android.view.View host, int eventType) {
        }

        @Override // android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateImpl
        public void sendAccessibilityEventUnchecked(java.lang.Object delegate, android.view.View host, android.view.accessibility.AccessibilityEvent event) {
        }

        @Override // android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateImpl
        public android.support.v4.view.accessibility.AccessibilityNodeProviderCompat getAccessibilityNodeProvider(java.lang.Object delegate, android.view.View host) {
            return null;
        }

        @Override // android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateImpl
        public boolean performAccessibilityAction(java.lang.Object delegate, android.view.View host, int action, android.os.Bundle args) {
            return false;
        }
    }

    static class AccessibilityDelegateIcsImpl extends android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateStubImpl {
        AccessibilityDelegateIcsImpl() {
        }

        @Override // android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateStubImpl, android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateImpl
        public java.lang.Object newAccessiblityDelegateDefaultImpl() {
            return android.support.v4.view.AccessibilityDelegateCompatIcs.newAccessibilityDelegateDefaultImpl();
        }

        @Override // android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateStubImpl, android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateImpl
        public java.lang.Object newAccessiblityDelegateBridge(final android.support.v4.view.AccessibilityDelegateCompat compat) {
            return android.support.v4.view.AccessibilityDelegateCompatIcs.newAccessibilityDelegateBridge(new android.support.v4.view.AccessibilityDelegateCompatIcs.AccessibilityDelegateBridge() { // from class: android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateIcsImpl.1
                @Override // android.support.v4.view.AccessibilityDelegateCompatIcs.AccessibilityDelegateBridge
                public boolean dispatchPopulateAccessibilityEvent(android.view.View host, android.view.accessibility.AccessibilityEvent event) {
                    return compat.dispatchPopulateAccessibilityEvent(host, event);
                }

                @Override // android.support.v4.view.AccessibilityDelegateCompatIcs.AccessibilityDelegateBridge
                public void onInitializeAccessibilityEvent(android.view.View host, android.view.accessibility.AccessibilityEvent event) {
                    compat.onInitializeAccessibilityEvent(host, event);
                }

                @Override // android.support.v4.view.AccessibilityDelegateCompatIcs.AccessibilityDelegateBridge
                public void onInitializeAccessibilityNodeInfo(android.view.View host, java.lang.Object info) {
                    compat.onInitializeAccessibilityNodeInfo(host, new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat(info));
                }

                @Override // android.support.v4.view.AccessibilityDelegateCompatIcs.AccessibilityDelegateBridge
                public void onPopulateAccessibilityEvent(android.view.View host, android.view.accessibility.AccessibilityEvent event) {
                    compat.onPopulateAccessibilityEvent(host, event);
                }

                @Override // android.support.v4.view.AccessibilityDelegateCompatIcs.AccessibilityDelegateBridge
                public boolean onRequestSendAccessibilityEvent(android.view.ViewGroup host, android.view.View child, android.view.accessibility.AccessibilityEvent event) {
                    return compat.onRequestSendAccessibilityEvent(host, child, event);
                }

                @Override // android.support.v4.view.AccessibilityDelegateCompatIcs.AccessibilityDelegateBridge
                public void sendAccessibilityEvent(android.view.View host, int eventType) {
                    compat.sendAccessibilityEvent(host, eventType);
                }

                @Override // android.support.v4.view.AccessibilityDelegateCompatIcs.AccessibilityDelegateBridge
                public void sendAccessibilityEventUnchecked(android.view.View host, android.view.accessibility.AccessibilityEvent event) {
                    compat.sendAccessibilityEventUnchecked(host, event);
                }
            });
        }

        @Override // android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateStubImpl, android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateImpl
        public boolean dispatchPopulateAccessibilityEvent(java.lang.Object delegate, android.view.View host, android.view.accessibility.AccessibilityEvent event) {
            return android.support.v4.view.AccessibilityDelegateCompatIcs.dispatchPopulateAccessibilityEvent(delegate, host, event);
        }

        @Override // android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateStubImpl, android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateImpl
        public void onInitializeAccessibilityEvent(java.lang.Object delegate, android.view.View host, android.view.accessibility.AccessibilityEvent event) {
            android.support.v4.view.AccessibilityDelegateCompatIcs.onInitializeAccessibilityEvent(delegate, host, event);
        }

        @Override // android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateStubImpl, android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateImpl
        public void onInitializeAccessibilityNodeInfo(java.lang.Object delegate, android.view.View host, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat info) {
            android.support.v4.view.AccessibilityDelegateCompatIcs.onInitializeAccessibilityNodeInfo(delegate, host, info.getInfo());
        }

        @Override // android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateStubImpl, android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateImpl
        public void onPopulateAccessibilityEvent(java.lang.Object delegate, android.view.View host, android.view.accessibility.AccessibilityEvent event) {
            android.support.v4.view.AccessibilityDelegateCompatIcs.onPopulateAccessibilityEvent(delegate, host, event);
        }

        @Override // android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateStubImpl, android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateImpl
        public boolean onRequestSendAccessibilityEvent(java.lang.Object delegate, android.view.ViewGroup host, android.view.View child, android.view.accessibility.AccessibilityEvent event) {
            return android.support.v4.view.AccessibilityDelegateCompatIcs.onRequestSendAccessibilityEvent(delegate, host, child, event);
        }

        @Override // android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateStubImpl, android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateImpl
        public void sendAccessibilityEvent(java.lang.Object delegate, android.view.View host, int eventType) {
            android.support.v4.view.AccessibilityDelegateCompatIcs.sendAccessibilityEvent(delegate, host, eventType);
        }

        @Override // android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateStubImpl, android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateImpl
        public void sendAccessibilityEventUnchecked(java.lang.Object delegate, android.view.View host, android.view.accessibility.AccessibilityEvent event) {
            android.support.v4.view.AccessibilityDelegateCompatIcs.sendAccessibilityEventUnchecked(delegate, host, event);
        }
    }

    static class AccessibilityDelegateJellyBeanImpl extends android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateIcsImpl {
        AccessibilityDelegateJellyBeanImpl() {
        }

        @Override // android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateIcsImpl, android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateStubImpl, android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateImpl
        public java.lang.Object newAccessiblityDelegateBridge(final android.support.v4.view.AccessibilityDelegateCompat compat) {
            return android.support.v4.view.AccessibilityDelegateCompatJellyBean.newAccessibilityDelegateBridge(new android.support.v4.view.AccessibilityDelegateCompatJellyBean.AccessibilityDelegateBridgeJellyBean() { // from class: android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateJellyBeanImpl.1
                @Override // android.support.v4.view.AccessibilityDelegateCompatJellyBean.AccessibilityDelegateBridgeJellyBean
                public boolean dispatchPopulateAccessibilityEvent(android.view.View host, android.view.accessibility.AccessibilityEvent event) {
                    return compat.dispatchPopulateAccessibilityEvent(host, event);
                }

                @Override // android.support.v4.view.AccessibilityDelegateCompatJellyBean.AccessibilityDelegateBridgeJellyBean
                public void onInitializeAccessibilityEvent(android.view.View host, android.view.accessibility.AccessibilityEvent event) {
                    compat.onInitializeAccessibilityEvent(host, event);
                }

                @Override // android.support.v4.view.AccessibilityDelegateCompatJellyBean.AccessibilityDelegateBridgeJellyBean
                public void onInitializeAccessibilityNodeInfo(android.view.View host, java.lang.Object info) {
                    compat.onInitializeAccessibilityNodeInfo(host, new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat(info));
                }

                @Override // android.support.v4.view.AccessibilityDelegateCompatJellyBean.AccessibilityDelegateBridgeJellyBean
                public void onPopulateAccessibilityEvent(android.view.View host, android.view.accessibility.AccessibilityEvent event) {
                    compat.onPopulateAccessibilityEvent(host, event);
                }

                @Override // android.support.v4.view.AccessibilityDelegateCompatJellyBean.AccessibilityDelegateBridgeJellyBean
                public boolean onRequestSendAccessibilityEvent(android.view.ViewGroup host, android.view.View child, android.view.accessibility.AccessibilityEvent event) {
                    return compat.onRequestSendAccessibilityEvent(host, child, event);
                }

                @Override // android.support.v4.view.AccessibilityDelegateCompatJellyBean.AccessibilityDelegateBridgeJellyBean
                public void sendAccessibilityEvent(android.view.View host, int eventType) {
                    compat.sendAccessibilityEvent(host, eventType);
                }

                @Override // android.support.v4.view.AccessibilityDelegateCompatJellyBean.AccessibilityDelegateBridgeJellyBean
                public void sendAccessibilityEventUnchecked(android.view.View host, android.view.accessibility.AccessibilityEvent event) {
                    compat.sendAccessibilityEventUnchecked(host, event);
                }

                @Override // android.support.v4.view.AccessibilityDelegateCompatJellyBean.AccessibilityDelegateBridgeJellyBean
                public java.lang.Object getAccessibilityNodeProvider(android.view.View host) {
                    android.support.v4.view.accessibility.AccessibilityNodeProviderCompat provider = compat.getAccessibilityNodeProvider(host);
                    if (provider != null) {
                        return provider.getProvider();
                    }
                    return null;
                }

                @Override // android.support.v4.view.AccessibilityDelegateCompatJellyBean.AccessibilityDelegateBridgeJellyBean
                public boolean performAccessibilityAction(android.view.View host, int action, android.os.Bundle args) {
                    return compat.performAccessibilityAction(host, action, args);
                }
            });
        }

        @Override // android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateStubImpl, android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateImpl
        public android.support.v4.view.accessibility.AccessibilityNodeProviderCompat getAccessibilityNodeProvider(java.lang.Object delegate, android.view.View host) {
            java.lang.Object provider = android.support.v4.view.AccessibilityDelegateCompatJellyBean.getAccessibilityNodeProvider(delegate, host);
            if (provider != null) {
                return new android.support.v4.view.accessibility.AccessibilityNodeProviderCompat(provider);
            }
            return null;
        }

        @Override // android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateStubImpl, android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateImpl
        public boolean performAccessibilityAction(java.lang.Object delegate, android.view.View host, int action, android.os.Bundle args) {
            return android.support.v4.view.AccessibilityDelegateCompatJellyBean.performAccessibilityAction(delegate, host, action, args);
        }
    }

    static {
        if (android.os.Build.VERSION.SDK_INT >= 16) {
            IMPL = new android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateJellyBeanImpl();
        } else if (android.os.Build.VERSION.SDK_INT >= 14) {
            IMPL = new android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateIcsImpl();
        } else {
            IMPL = new android.support.v4.view.AccessibilityDelegateCompat.AccessibilityDelegateStubImpl();
        }
        DEFAULT_DELEGATE = IMPL.newAccessiblityDelegateDefaultImpl();
    }

    java.lang.Object getBridge() {
        return this.mBridge;
    }

    public void sendAccessibilityEvent(android.view.View host, int eventType) {
        IMPL.sendAccessibilityEvent(DEFAULT_DELEGATE, host, eventType);
    }

    public void sendAccessibilityEventUnchecked(android.view.View host, android.view.accessibility.AccessibilityEvent event) {
        IMPL.sendAccessibilityEventUnchecked(DEFAULT_DELEGATE, host, event);
    }

    public boolean dispatchPopulateAccessibilityEvent(android.view.View host, android.view.accessibility.AccessibilityEvent event) {
        return IMPL.dispatchPopulateAccessibilityEvent(DEFAULT_DELEGATE, host, event);
    }

    public void onPopulateAccessibilityEvent(android.view.View host, android.view.accessibility.AccessibilityEvent event) {
        IMPL.onPopulateAccessibilityEvent(DEFAULT_DELEGATE, host, event);
    }

    public void onInitializeAccessibilityEvent(android.view.View host, android.view.accessibility.AccessibilityEvent event) {
        IMPL.onInitializeAccessibilityEvent(DEFAULT_DELEGATE, host, event);
    }

    public void onInitializeAccessibilityNodeInfo(android.view.View host, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat info) {
        IMPL.onInitializeAccessibilityNodeInfo(DEFAULT_DELEGATE, host, info);
    }

    public boolean onRequestSendAccessibilityEvent(android.view.ViewGroup host, android.view.View child, android.view.accessibility.AccessibilityEvent event) {
        return IMPL.onRequestSendAccessibilityEvent(DEFAULT_DELEGATE, host, child, event);
    }

    public android.support.v4.view.accessibility.AccessibilityNodeProviderCompat getAccessibilityNodeProvider(android.view.View host) {
        return IMPL.getAccessibilityNodeProvider(DEFAULT_DELEGATE, host);
    }

    public boolean performAccessibilityAction(android.view.View host, int action, android.os.Bundle args) {
        return IMPL.performAccessibilityAction(DEFAULT_DELEGATE, host, action, args);
    }
}
