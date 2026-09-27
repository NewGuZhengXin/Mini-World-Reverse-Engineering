package android.support.v4.view;

/* loaded from: classes.dex */
public class MarginLayoutParamsCompat {
    static final android.support.v4.view.MarginLayoutParamsCompat.MarginLayoutParamsCompatImpl IMPL;

    interface MarginLayoutParamsCompatImpl {
        int getLayoutDirection(android.view.ViewGroup.MarginLayoutParams marginLayoutParams);

        int getMarginEnd(android.view.ViewGroup.MarginLayoutParams marginLayoutParams);

        int getMarginStart(android.view.ViewGroup.MarginLayoutParams marginLayoutParams);

        boolean isMarginRelative(android.view.ViewGroup.MarginLayoutParams marginLayoutParams);

        void resolveLayoutDirection(android.view.ViewGroup.MarginLayoutParams marginLayoutParams, int i);

        void setLayoutDirection(android.view.ViewGroup.MarginLayoutParams marginLayoutParams, int i);

        void setMarginEnd(android.view.ViewGroup.MarginLayoutParams marginLayoutParams, int i);

        void setMarginStart(android.view.ViewGroup.MarginLayoutParams marginLayoutParams, int i);
    }

    static class MarginLayoutParamsCompatImplBase implements android.support.v4.view.MarginLayoutParamsCompat.MarginLayoutParamsCompatImpl {
        MarginLayoutParamsCompatImplBase() {
        }

        @Override // android.support.v4.view.MarginLayoutParamsCompat.MarginLayoutParamsCompatImpl
        public int getMarginStart(android.view.ViewGroup.MarginLayoutParams lp) {
            return lp.leftMargin;
        }

        @Override // android.support.v4.view.MarginLayoutParamsCompat.MarginLayoutParamsCompatImpl
        public int getMarginEnd(android.view.ViewGroup.MarginLayoutParams lp) {
            return lp.rightMargin;
        }

        @Override // android.support.v4.view.MarginLayoutParamsCompat.MarginLayoutParamsCompatImpl
        public void setMarginStart(android.view.ViewGroup.MarginLayoutParams lp, int marginStart) {
            lp.leftMargin = marginStart;
        }

        @Override // android.support.v4.view.MarginLayoutParamsCompat.MarginLayoutParamsCompatImpl
        public void setMarginEnd(android.view.ViewGroup.MarginLayoutParams lp, int marginEnd) {
            lp.rightMargin = marginEnd;
        }

        @Override // android.support.v4.view.MarginLayoutParamsCompat.MarginLayoutParamsCompatImpl
        public boolean isMarginRelative(android.view.ViewGroup.MarginLayoutParams lp) {
            return false;
        }

        @Override // android.support.v4.view.MarginLayoutParamsCompat.MarginLayoutParamsCompatImpl
        public int getLayoutDirection(android.view.ViewGroup.MarginLayoutParams lp) {
            return 0;
        }

        @Override // android.support.v4.view.MarginLayoutParamsCompat.MarginLayoutParamsCompatImpl
        public void setLayoutDirection(android.view.ViewGroup.MarginLayoutParams lp, int layoutDirection) {
        }

        @Override // android.support.v4.view.MarginLayoutParamsCompat.MarginLayoutParamsCompatImpl
        public void resolveLayoutDirection(android.view.ViewGroup.MarginLayoutParams lp, int layoutDirection) {
        }
    }

    static class MarginLayoutParamsCompatImplJbMr1 implements android.support.v4.view.MarginLayoutParamsCompat.MarginLayoutParamsCompatImpl {
        MarginLayoutParamsCompatImplJbMr1() {
        }

        @Override // android.support.v4.view.MarginLayoutParamsCompat.MarginLayoutParamsCompatImpl
        public int getMarginStart(android.view.ViewGroup.MarginLayoutParams lp) {
            return android.support.v4.view.MarginLayoutParamsCompatJellybeanMr1.getMarginStart(lp);
        }

        @Override // android.support.v4.view.MarginLayoutParamsCompat.MarginLayoutParamsCompatImpl
        public int getMarginEnd(android.view.ViewGroup.MarginLayoutParams lp) {
            return android.support.v4.view.MarginLayoutParamsCompatJellybeanMr1.getMarginEnd(lp);
        }

        @Override // android.support.v4.view.MarginLayoutParamsCompat.MarginLayoutParamsCompatImpl
        public void setMarginStart(android.view.ViewGroup.MarginLayoutParams lp, int marginStart) {
            android.support.v4.view.MarginLayoutParamsCompatJellybeanMr1.setMarginStart(lp, marginStart);
        }

        @Override // android.support.v4.view.MarginLayoutParamsCompat.MarginLayoutParamsCompatImpl
        public void setMarginEnd(android.view.ViewGroup.MarginLayoutParams lp, int marginEnd) {
            android.support.v4.view.MarginLayoutParamsCompatJellybeanMr1.setMarginEnd(lp, marginEnd);
        }

        @Override // android.support.v4.view.MarginLayoutParamsCompat.MarginLayoutParamsCompatImpl
        public boolean isMarginRelative(android.view.ViewGroup.MarginLayoutParams lp) {
            return android.support.v4.view.MarginLayoutParamsCompatJellybeanMr1.isMarginRelative(lp);
        }

        @Override // android.support.v4.view.MarginLayoutParamsCompat.MarginLayoutParamsCompatImpl
        public int getLayoutDirection(android.view.ViewGroup.MarginLayoutParams lp) {
            return android.support.v4.view.MarginLayoutParamsCompatJellybeanMr1.getLayoutDirection(lp);
        }

        @Override // android.support.v4.view.MarginLayoutParamsCompat.MarginLayoutParamsCompatImpl
        public void setLayoutDirection(android.view.ViewGroup.MarginLayoutParams lp, int layoutDirection) {
            android.support.v4.view.MarginLayoutParamsCompatJellybeanMr1.setLayoutDirection(lp, layoutDirection);
        }

        @Override // android.support.v4.view.MarginLayoutParamsCompat.MarginLayoutParamsCompatImpl
        public void resolveLayoutDirection(android.view.ViewGroup.MarginLayoutParams lp, int layoutDirection) {
            android.support.v4.view.MarginLayoutParamsCompatJellybeanMr1.resolveLayoutDirection(lp, layoutDirection);
        }
    }

    static {
        int version = android.os.Build.VERSION.SDK_INT;
        if (version >= 17) {
            IMPL = new android.support.v4.view.MarginLayoutParamsCompat.MarginLayoutParamsCompatImplJbMr1();
        } else {
            IMPL = new android.support.v4.view.MarginLayoutParamsCompat.MarginLayoutParamsCompatImplBase();
        }
    }

    public static int getMarginStart(android.view.ViewGroup.MarginLayoutParams lp) {
        return IMPL.getMarginStart(lp);
    }

    public static int getMarginEnd(android.view.ViewGroup.MarginLayoutParams lp) {
        return IMPL.getMarginEnd(lp);
    }

    public static void setMarginStart(android.view.ViewGroup.MarginLayoutParams lp, int marginStart) {
        IMPL.setMarginStart(lp, marginStart);
    }

    public static void setMarginEnd(android.view.ViewGroup.MarginLayoutParams lp, int marginEnd) {
        IMPL.setMarginEnd(lp, marginEnd);
    }

    public static boolean isMarginRelative(android.view.ViewGroup.MarginLayoutParams lp) {
        return IMPL.isMarginRelative(lp);
    }

    public static int getLayoutDirection(android.view.ViewGroup.MarginLayoutParams lp) {
        return IMPL.getLayoutDirection(lp);
    }

    public static void setLayoutDirection(android.view.ViewGroup.MarginLayoutParams lp, int layoutDirection) {
        IMPL.setLayoutDirection(lp, layoutDirection);
    }

    public static void resolveLayoutDirection(android.view.ViewGroup.MarginLayoutParams lp, int layoutDirection) {
        IMPL.resolveLayoutDirection(lp, layoutDirection);
    }
}
