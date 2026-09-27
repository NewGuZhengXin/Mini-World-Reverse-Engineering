package android.support.v4.view;

/* loaded from: classes.dex */
class VelocityTrackerCompatHoneycomb {
    VelocityTrackerCompatHoneycomb() {
    }

    public static float getXVelocity(android.view.VelocityTracker tracker, int pointerId) {
        return tracker.getXVelocity(pointerId);
    }

    public static float getYVelocity(android.view.VelocityTracker tracker, int pointerId) {
        return tracker.getYVelocity(pointerId);
    }
}
