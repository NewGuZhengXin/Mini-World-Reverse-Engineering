package android.support.v4.view;

/* loaded from: classes.dex */
public class MotionEventCompat {
    public static final int ACTION_HOVER_ENTER = 9;
    public static final int ACTION_HOVER_EXIT = 10;
    public static final int ACTION_HOVER_MOVE = 7;
    public static final int ACTION_MASK = 255;
    public static final int ACTION_POINTER_DOWN = 5;
    public static final int ACTION_POINTER_INDEX_MASK = 65280;
    public static final int ACTION_POINTER_INDEX_SHIFT = 8;
    public static final int ACTION_POINTER_UP = 6;
    public static final int ACTION_SCROLL = 8;
    static final android.support.v4.view.MotionEventCompat.MotionEventVersionImpl IMPL;

    interface MotionEventVersionImpl {
        int findPointerIndex(android.view.MotionEvent motionEvent, int i);

        int getPointerCount(android.view.MotionEvent motionEvent);

        int getPointerId(android.view.MotionEvent motionEvent, int i);

        float getX(android.view.MotionEvent motionEvent, int i);

        float getY(android.view.MotionEvent motionEvent, int i);
    }

    static class BaseMotionEventVersionImpl implements android.support.v4.view.MotionEventCompat.MotionEventVersionImpl {
        BaseMotionEventVersionImpl() {
        }

        @Override // android.support.v4.view.MotionEventCompat.MotionEventVersionImpl
        public int findPointerIndex(android.view.MotionEvent event, int pointerId) {
            return pointerId == 0 ? 0 : -1;
        }

        @Override // android.support.v4.view.MotionEventCompat.MotionEventVersionImpl
        public int getPointerId(android.view.MotionEvent event, int pointerIndex) {
            if (pointerIndex == 0) {
                return 0;
            }
            throw new java.lang.IndexOutOfBoundsException("Pre-Eclair does not support multiple pointers");
        }

        @Override // android.support.v4.view.MotionEventCompat.MotionEventVersionImpl
        public float getX(android.view.MotionEvent event, int pointerIndex) {
            if (pointerIndex == 0) {
                return event.getX();
            }
            throw new java.lang.IndexOutOfBoundsException("Pre-Eclair does not support multiple pointers");
        }

        @Override // android.support.v4.view.MotionEventCompat.MotionEventVersionImpl
        public float getY(android.view.MotionEvent event, int pointerIndex) {
            if (pointerIndex == 0) {
                return event.getY();
            }
            throw new java.lang.IndexOutOfBoundsException("Pre-Eclair does not support multiple pointers");
        }

        @Override // android.support.v4.view.MotionEventCompat.MotionEventVersionImpl
        public int getPointerCount(android.view.MotionEvent event) {
            return 1;
        }
    }

    static class EclairMotionEventVersionImpl implements android.support.v4.view.MotionEventCompat.MotionEventVersionImpl {
        EclairMotionEventVersionImpl() {
        }

        @Override // android.support.v4.view.MotionEventCompat.MotionEventVersionImpl
        public int findPointerIndex(android.view.MotionEvent event, int pointerId) {
            return android.support.v4.view.MotionEventCompatEclair.findPointerIndex(event, pointerId);
        }

        @Override // android.support.v4.view.MotionEventCompat.MotionEventVersionImpl
        public int getPointerId(android.view.MotionEvent event, int pointerIndex) {
            return android.support.v4.view.MotionEventCompatEclair.getPointerId(event, pointerIndex);
        }

        @Override // android.support.v4.view.MotionEventCompat.MotionEventVersionImpl
        public float getX(android.view.MotionEvent event, int pointerIndex) {
            return android.support.v4.view.MotionEventCompatEclair.getX(event, pointerIndex);
        }

        @Override // android.support.v4.view.MotionEventCompat.MotionEventVersionImpl
        public float getY(android.view.MotionEvent event, int pointerIndex) {
            return android.support.v4.view.MotionEventCompatEclair.getY(event, pointerIndex);
        }

        @Override // android.support.v4.view.MotionEventCompat.MotionEventVersionImpl
        public int getPointerCount(android.view.MotionEvent event) {
            return android.support.v4.view.MotionEventCompatEclair.getPointerCount(event);
        }
    }

    static {
        if (android.os.Build.VERSION.SDK_INT >= 5) {
            IMPL = new android.support.v4.view.MotionEventCompat.EclairMotionEventVersionImpl();
        } else {
            IMPL = new android.support.v4.view.MotionEventCompat.BaseMotionEventVersionImpl();
        }
    }

    public static int getActionMasked(android.view.MotionEvent event) {
        return event.getAction() & ACTION_MASK;
    }

    public static int getActionIndex(android.view.MotionEvent event) {
        return (event.getAction() & ACTION_POINTER_INDEX_MASK) >> 8;
    }

    public static int findPointerIndex(android.view.MotionEvent event, int pointerId) {
        return IMPL.findPointerIndex(event, pointerId);
    }

    public static int getPointerId(android.view.MotionEvent event, int pointerIndex) {
        return IMPL.getPointerId(event, pointerIndex);
    }

    public static float getX(android.view.MotionEvent event, int pointerIndex) {
        return IMPL.getX(event, pointerIndex);
    }

    public static float getY(android.view.MotionEvent event, int pointerIndex) {
        return IMPL.getY(event, pointerIndex);
    }

    public static int getPointerCount(android.view.MotionEvent event) {
        return IMPL.getPointerCount(event);
    }
}
