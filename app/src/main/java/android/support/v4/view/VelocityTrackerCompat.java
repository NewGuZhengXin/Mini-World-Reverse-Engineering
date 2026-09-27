package android.support.v4.view;

/* loaded from: classes.dex */
public class VelocityTrackerCompat {
    static final android.support.v4.view.VelocityTrackerCompat.VelocityTrackerVersionImpl IMPL;

    interface VelocityTrackerVersionImpl {
        float getXVelocity(android.view.VelocityTracker velocityTracker, int i);

        float getYVelocity(android.view.VelocityTracker velocityTracker, int i);
    }

    static class BaseVelocityTrackerVersionImpl implements android.support.v4.view.VelocityTrackerCompat.VelocityTrackerVersionImpl {
        BaseVelocityTrackerVersionImpl() {
        }

        @Override // android.support.v4.view.VelocityTrackerCompat.VelocityTrackerVersionImpl
        public float getXVelocity(android.view.VelocityTracker tracker, int pointerId) {
            return tracker.getXVelocity();
        }

        @Override // android.support.v4.view.VelocityTrackerCompat.VelocityTrackerVersionImpl
        public float getYVelocity(android.view.VelocityTracker tracker, int pointerId) {
            return tracker.getYVelocity();
        }
    }

    static class HoneycombVelocityTrackerVersionImpl implements android.support.v4.view.VelocityTrackerCompat.VelocityTrackerVersionImpl {
        HoneycombVelocityTrackerVersionImpl() {
        }

        @Override // android.support.v4.view.VelocityTrackerCompat.VelocityTrackerVersionImpl
        public float getXVelocity(android.view.VelocityTracker tracker, int pointerId) {
            return android.support.v4.view.VelocityTrackerCompatHoneycomb.getXVelocity(tracker, pointerId);
        }

        @Override // android.support.v4.view.VelocityTrackerCompat.VelocityTrackerVersionImpl
        public float getYVelocity(android.view.VelocityTracker tracker, int pointerId) {
            return android.support.v4.view.VelocityTrackerCompatHoneycomb.getYVelocity(tracker, pointerId);
        }
    }

    static {
        if (android.os.Build.VERSION.SDK_INT >= 11) {
            IMPL = new android.support.v4.view.VelocityTrackerCompat.HoneycombVelocityTrackerVersionImpl();
        } else {
            IMPL = new android.support.v4.view.VelocityTrackerCompat.BaseVelocityTrackerVersionImpl();
        }
    }

    public static float getXVelocity(android.view.VelocityTracker tracker, int pointerId) {
        return IMPL.getXVelocity(tracker, pointerId);
    }

    public static float getYVelocity(android.view.VelocityTracker tracker, int pointerId) {
        return IMPL.getYVelocity(tracker, pointerId);
    }
}
