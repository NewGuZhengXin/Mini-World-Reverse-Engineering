package android.support.v4.view;

/* loaded from: classes.dex */
public class ScaleGestureDetectorCompat {
    static final android.support.v4.view.ScaleGestureDetectorCompat.ScaleGestureDetectorImpl IMPL;

    interface ScaleGestureDetectorImpl {
        boolean isQuickScaleEnabled(java.lang.Object obj);

        void setQuickScaleEnabled(java.lang.Object obj, boolean z);
    }

    private static class BaseScaleGestureDetectorImpl implements android.support.v4.view.ScaleGestureDetectorCompat.ScaleGestureDetectorImpl {
        private BaseScaleGestureDetectorImpl() {
        }

        @Override // android.support.v4.view.ScaleGestureDetectorCompat.ScaleGestureDetectorImpl
        public void setQuickScaleEnabled(java.lang.Object o, boolean enabled) {
        }

        @Override // android.support.v4.view.ScaleGestureDetectorCompat.ScaleGestureDetectorImpl
        public boolean isQuickScaleEnabled(java.lang.Object o) {
            return false;
        }
    }

    private static class ScaleGestureDetectorCompatKitKatImpl implements android.support.v4.view.ScaleGestureDetectorCompat.ScaleGestureDetectorImpl {
        private ScaleGestureDetectorCompatKitKatImpl() {
        }

        @Override // android.support.v4.view.ScaleGestureDetectorCompat.ScaleGestureDetectorImpl
        public void setQuickScaleEnabled(java.lang.Object o, boolean enabled) {
            android.support.v4.view.ScaleGestureDetectorCompatKitKat.setQuickScaleEnabled(o, enabled);
        }

        @Override // android.support.v4.view.ScaleGestureDetectorCompat.ScaleGestureDetectorImpl
        public boolean isQuickScaleEnabled(java.lang.Object o) {
            return android.support.v4.view.ScaleGestureDetectorCompatKitKat.isQuickScaleEnabled(o);
        }
    }

    static {
        int version = android.os.Build.VERSION.SDK_INT;
        if (version >= 19) {
            IMPL = new android.support.v4.view.ScaleGestureDetectorCompat.ScaleGestureDetectorCompatKitKatImpl();
        } else {
            IMPL = new android.support.v4.view.ScaleGestureDetectorCompat.BaseScaleGestureDetectorImpl();
        }
    }

    private ScaleGestureDetectorCompat() {
    }

    public static void setQuickScaleEnabled(java.lang.Object scaleGestureDetector, boolean enabled) {
        IMPL.setQuickScaleEnabled(scaleGestureDetector, enabled);
    }

    public static boolean isQuickScaleEnabled(java.lang.Object scaleGestureDetector) {
        return IMPL.isQuickScaleEnabled(scaleGestureDetector);
    }
}
