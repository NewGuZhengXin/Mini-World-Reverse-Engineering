package android.support.v4.view.accessibility;

/* loaded from: classes.dex */
public class AccessibilityNodeProviderCompat {
    private static final android.support.v4.view.accessibility.AccessibilityNodeProviderCompat.AccessibilityNodeProviderImpl IMPL;
    private final java.lang.Object mProvider;

    interface AccessibilityNodeProviderImpl {
        java.lang.Object newAccessibilityNodeProviderBridge(android.support.v4.view.accessibility.AccessibilityNodeProviderCompat accessibilityNodeProviderCompat);
    }

    static class AccessibilityNodeProviderStubImpl implements android.support.v4.view.accessibility.AccessibilityNodeProviderCompat.AccessibilityNodeProviderImpl {
        AccessibilityNodeProviderStubImpl() {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeProviderCompat.AccessibilityNodeProviderImpl
        public java.lang.Object newAccessibilityNodeProviderBridge(android.support.v4.view.accessibility.AccessibilityNodeProviderCompat compat) {
            return null;
        }
    }

    static class AccessibilityNodeProviderJellyBeanImpl extends android.support.v4.view.accessibility.AccessibilityNodeProviderCompat.AccessibilityNodeProviderStubImpl {
        AccessibilityNodeProviderJellyBeanImpl() {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeProviderCompat.AccessibilityNodeProviderStubImpl, android.support.v4.view.accessibility.AccessibilityNodeProviderCompat.AccessibilityNodeProviderImpl
        public java.lang.Object newAccessibilityNodeProviderBridge(final android.support.v4.view.accessibility.AccessibilityNodeProviderCompat compat) {
            return android.support.v4.view.accessibility.AccessibilityNodeProviderCompatJellyBean.newAccessibilityNodeProviderBridge(new android.support.v4.view.accessibility.AccessibilityNodeProviderCompatJellyBean.AccessibilityNodeInfoBridge() { // from class: android.support.v4.view.accessibility.AccessibilityNodeProviderCompat.AccessibilityNodeProviderJellyBeanImpl.1
                @Override // android.support.v4.view.accessibility.AccessibilityNodeProviderCompatJellyBean.AccessibilityNodeInfoBridge
                public boolean performAction(int virtualViewId, int action, android.os.Bundle arguments) {
                    return compat.performAction(virtualViewId, action, arguments);
                }

                @Override // android.support.v4.view.accessibility.AccessibilityNodeProviderCompatJellyBean.AccessibilityNodeInfoBridge
                public java.util.List<java.lang.Object> findAccessibilityNodeInfosByText(java.lang.String text, int virtualViewId) {
                    java.util.List<android.support.v4.view.accessibility.AccessibilityNodeInfoCompat> compatInfos = compat.findAccessibilityNodeInfosByText(text, virtualViewId);
                    java.util.List<java.lang.Object> infos = new java.util.ArrayList<>();
                    int infoCount = compatInfos.size();
                    for (int i = 0; i < infoCount; i++) {
                        android.support.v4.view.accessibility.AccessibilityNodeInfoCompat infoCompat = compatInfos.get(i);
                        infos.add(infoCompat.getInfo());
                    }
                    return infos;
                }

                @Override // android.support.v4.view.accessibility.AccessibilityNodeProviderCompatJellyBean.AccessibilityNodeInfoBridge
                public java.lang.Object createAccessibilityNodeInfo(int virtualViewId) {
                    android.support.v4.view.accessibility.AccessibilityNodeInfoCompat compatInfo = compat.createAccessibilityNodeInfo(virtualViewId);
                    if (compatInfo == null) {
                        return null;
                    }
                    return compatInfo.getInfo();
                }
            });
        }
    }

    static class AccessibilityNodeProviderKitKatImpl extends android.support.v4.view.accessibility.AccessibilityNodeProviderCompat.AccessibilityNodeProviderStubImpl {
        AccessibilityNodeProviderKitKatImpl() {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeProviderCompat.AccessibilityNodeProviderStubImpl, android.support.v4.view.accessibility.AccessibilityNodeProviderCompat.AccessibilityNodeProviderImpl
        public java.lang.Object newAccessibilityNodeProviderBridge(final android.support.v4.view.accessibility.AccessibilityNodeProviderCompat compat) {
            return android.support.v4.view.accessibility.AccessibilityNodeProviderCompatKitKat.newAccessibilityNodeProviderBridge(new android.support.v4.view.accessibility.AccessibilityNodeProviderCompatKitKat.AccessibilityNodeInfoBridge() { // from class: android.support.v4.view.accessibility.AccessibilityNodeProviderCompat.AccessibilityNodeProviderKitKatImpl.1
                @Override // android.support.v4.view.accessibility.AccessibilityNodeProviderCompatKitKat.AccessibilityNodeInfoBridge
                public boolean performAction(int virtualViewId, int action, android.os.Bundle arguments) {
                    return compat.performAction(virtualViewId, action, arguments);
                }

                @Override // android.support.v4.view.accessibility.AccessibilityNodeProviderCompatKitKat.AccessibilityNodeInfoBridge
                public java.util.List<java.lang.Object> findAccessibilityNodeInfosByText(java.lang.String text, int virtualViewId) {
                    java.util.List<android.support.v4.view.accessibility.AccessibilityNodeInfoCompat> compatInfos = compat.findAccessibilityNodeInfosByText(text, virtualViewId);
                    java.util.List<java.lang.Object> infos = new java.util.ArrayList<>();
                    int infoCount = compatInfos.size();
                    for (int i = 0; i < infoCount; i++) {
                        android.support.v4.view.accessibility.AccessibilityNodeInfoCompat infoCompat = compatInfos.get(i);
                        infos.add(infoCompat.getInfo());
                    }
                    return infos;
                }

                @Override // android.support.v4.view.accessibility.AccessibilityNodeProviderCompatKitKat.AccessibilityNodeInfoBridge
                public java.lang.Object createAccessibilityNodeInfo(int virtualViewId) {
                    android.support.v4.view.accessibility.AccessibilityNodeInfoCompat compatInfo = compat.createAccessibilityNodeInfo(virtualViewId);
                    if (compatInfo == null) {
                        return null;
                    }
                    return compatInfo.getInfo();
                }

                @Override // android.support.v4.view.accessibility.AccessibilityNodeProviderCompatKitKat.AccessibilityNodeInfoBridge
                public java.lang.Object findFocus(int focus) {
                    android.support.v4.view.accessibility.AccessibilityNodeInfoCompat compatInfo = compat.findFocus(focus);
                    if (compatInfo == null) {
                        return null;
                    }
                    return compatInfo.getInfo();
                }
            });
        }
    }

    static {
        if (android.os.Build.VERSION.SDK_INT >= 19) {
            IMPL = new android.support.v4.view.accessibility.AccessibilityNodeProviderCompat.AccessibilityNodeProviderKitKatImpl();
        } else if (android.os.Build.VERSION.SDK_INT >= 16) {
            IMPL = new android.support.v4.view.accessibility.AccessibilityNodeProviderCompat.AccessibilityNodeProviderJellyBeanImpl();
        } else {
            IMPL = new android.support.v4.view.accessibility.AccessibilityNodeProviderCompat.AccessibilityNodeProviderStubImpl();
        }
    }

    public AccessibilityNodeProviderCompat() {
        this.mProvider = IMPL.newAccessibilityNodeProviderBridge(this);
    }

    public AccessibilityNodeProviderCompat(java.lang.Object provider) {
        this.mProvider = provider;
    }

    public java.lang.Object getProvider() {
        return this.mProvider;
    }

    public android.support.v4.view.accessibility.AccessibilityNodeInfoCompat createAccessibilityNodeInfo(int virtualViewId) {
        return null;
    }

    public boolean performAction(int virtualViewId, int action, android.os.Bundle arguments) {
        return false;
    }

    public java.util.List<android.support.v4.view.accessibility.AccessibilityNodeInfoCompat> findAccessibilityNodeInfosByText(java.lang.String text, int virtualViewId) {
        return null;
    }

    public android.support.v4.view.accessibility.AccessibilityNodeInfoCompat findFocus(int focus) {
        return null;
    }
}
