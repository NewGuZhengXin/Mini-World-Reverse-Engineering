package android.support.v4.view;

/* loaded from: classes.dex */
class MotionEventCompatEclair {
    MotionEventCompatEclair() {
    }

    public static int findPointerIndex(android.view.MotionEvent event, int pointerId) {
        return event.findPointerIndex(pointerId);
    }

    public static int getPointerId(android.view.MotionEvent event, int pointerIndex) {
        return event.getPointerId(pointerIndex);
    }

    public static float getX(android.view.MotionEvent event, int pointerIndex) {
        return event.getX(pointerIndex);
    }

    public static float getY(android.view.MotionEvent event, int pointerIndex) {
        return event.getY(pointerIndex);
    }

    public static int getPointerCount(android.view.MotionEvent event) {
        return event.getPointerCount();
    }
}
