package android.support.v4.view;

/* loaded from: classes.dex */
public class ViewConfigurationCompat {
    static final android.support.v4.view.ViewConfigurationCompat.ViewConfigurationVersionImpl IMPL;

    interface ViewConfigurationVersionImpl {
        int getScaledPagingTouchSlop(android.view.ViewConfiguration viewConfiguration);
    }

    static class BaseViewConfigurationVersionImpl implements android.support.v4.view.ViewConfigurationCompat.ViewConfigurationVersionImpl {
        BaseViewConfigurationVersionImpl() {
        }

        @Override // android.support.v4.view.ViewConfigurationCompat.ViewConfigurationVersionImpl
        public int getScaledPagingTouchSlop(android.view.ViewConfiguration config) {
            return config.getScaledTouchSlop();
        }
    }

    static class FroyoViewConfigurationVersionImpl implements android.support.v4.view.ViewConfigurationCompat.ViewConfigurationVersionImpl {
        FroyoViewConfigurationVersionImpl() {
        }

        @Override // android.support.v4.view.ViewConfigurationCompat.ViewConfigurationVersionImpl
        public int getScaledPagingTouchSlop(android.view.ViewConfiguration config) {
            return android.support.v4.view.ViewConfigurationCompatFroyo.getScaledPagingTouchSlop(config);
        }
    }

    static {
        if (android.os.Build.VERSION.SDK_INT >= 11) {
            IMPL = new android.support.v4.view.ViewConfigurationCompat.FroyoViewConfigurationVersionImpl();
        } else {
            IMPL = new android.support.v4.view.ViewConfigurationCompat.BaseViewConfigurationVersionImpl();
        }
    }

    public static int getScaledPagingTouchSlop(android.view.ViewConfiguration config) {
        return IMPL.getScaledPagingTouchSlop(config);
    }
}
