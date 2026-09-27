package android.support.v4.widget;

/* loaded from: classes.dex */
class EdgeEffectCompatIcs {
    EdgeEffectCompatIcs() {
    }

    public static java.lang.Object newEdgeEffect(android.content.Context context) {
        return new android.widget.EdgeEffect(context);
    }

    public static void setSize(java.lang.Object edgeEffect, int width, int height) {
        ((android.widget.EdgeEffect) edgeEffect).setSize(width, height);
    }

    public static boolean isFinished(java.lang.Object edgeEffect) {
        return ((android.widget.EdgeEffect) edgeEffect).isFinished();
    }

    public static void finish(java.lang.Object edgeEffect) {
        ((android.widget.EdgeEffect) edgeEffect).finish();
    }

    public static boolean onPull(java.lang.Object edgeEffect, float deltaDistance) {
        ((android.widget.EdgeEffect) edgeEffect).onPull(deltaDistance);
        return true;
    }

    public static boolean onRelease(java.lang.Object edgeEffect) {
        android.widget.EdgeEffect eff = (android.widget.EdgeEffect) edgeEffect;
        eff.onRelease();
        return eff.isFinished();
    }

    public static boolean onAbsorb(java.lang.Object edgeEffect, int velocity) {
        ((android.widget.EdgeEffect) edgeEffect).onAbsorb(velocity);
        return true;
    }

    public static boolean draw(java.lang.Object edgeEffect, android.graphics.Canvas canvas) {
        return ((android.widget.EdgeEffect) edgeEffect).draw(canvas);
    }
}
