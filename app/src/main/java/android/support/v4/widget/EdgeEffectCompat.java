package android.support.v4.widget;

/* loaded from: classes.dex */
public class EdgeEffectCompat {
    private static final android.support.v4.widget.EdgeEffectCompat.EdgeEffectImpl IMPL;
    private java.lang.Object mEdgeEffect;

    interface EdgeEffectImpl {
        boolean draw(java.lang.Object obj, android.graphics.Canvas canvas);

        void finish(java.lang.Object obj);

        boolean isFinished(java.lang.Object obj);

        java.lang.Object newEdgeEffect(android.content.Context context);

        boolean onAbsorb(java.lang.Object obj, int i);

        boolean onPull(java.lang.Object obj, float f);

        boolean onRelease(java.lang.Object obj);

        void setSize(java.lang.Object obj, int i, int i2);
    }

    static {
        if (android.os.Build.VERSION.SDK_INT >= 14) {
            IMPL = new android.support.v4.widget.EdgeEffectCompat.EdgeEffectIcsImpl();
        } else {
            IMPL = new android.support.v4.widget.EdgeEffectCompat.BaseEdgeEffectImpl();
        }
    }

    static class BaseEdgeEffectImpl implements android.support.v4.widget.EdgeEffectCompat.EdgeEffectImpl {
        BaseEdgeEffectImpl() {
        }

        @Override // android.support.v4.widget.EdgeEffectCompat.EdgeEffectImpl
        public java.lang.Object newEdgeEffect(android.content.Context context) {
            return null;
        }

        @Override // android.support.v4.widget.EdgeEffectCompat.EdgeEffectImpl
        public void setSize(java.lang.Object edgeEffect, int width, int height) {
        }

        @Override // android.support.v4.widget.EdgeEffectCompat.EdgeEffectImpl
        public boolean isFinished(java.lang.Object edgeEffect) {
            return true;
        }

        @Override // android.support.v4.widget.EdgeEffectCompat.EdgeEffectImpl
        public void finish(java.lang.Object edgeEffect) {
        }

        @Override // android.support.v4.widget.EdgeEffectCompat.EdgeEffectImpl
        public boolean onPull(java.lang.Object edgeEffect, float deltaDistance) {
            return false;
        }

        @Override // android.support.v4.widget.EdgeEffectCompat.EdgeEffectImpl
        public boolean onRelease(java.lang.Object edgeEffect) {
            return false;
        }

        @Override // android.support.v4.widget.EdgeEffectCompat.EdgeEffectImpl
        public boolean onAbsorb(java.lang.Object edgeEffect, int velocity) {
            return false;
        }

        @Override // android.support.v4.widget.EdgeEffectCompat.EdgeEffectImpl
        public boolean draw(java.lang.Object edgeEffect, android.graphics.Canvas canvas) {
            return false;
        }
    }

    static class EdgeEffectIcsImpl implements android.support.v4.widget.EdgeEffectCompat.EdgeEffectImpl {
        EdgeEffectIcsImpl() {
        }

        @Override // android.support.v4.widget.EdgeEffectCompat.EdgeEffectImpl
        public java.lang.Object newEdgeEffect(android.content.Context context) {
            return android.support.v4.widget.EdgeEffectCompatIcs.newEdgeEffect(context);
        }

        @Override // android.support.v4.widget.EdgeEffectCompat.EdgeEffectImpl
        public void setSize(java.lang.Object edgeEffect, int width, int height) {
            android.support.v4.widget.EdgeEffectCompatIcs.setSize(edgeEffect, width, height);
        }

        @Override // android.support.v4.widget.EdgeEffectCompat.EdgeEffectImpl
        public boolean isFinished(java.lang.Object edgeEffect) {
            return android.support.v4.widget.EdgeEffectCompatIcs.isFinished(edgeEffect);
        }

        @Override // android.support.v4.widget.EdgeEffectCompat.EdgeEffectImpl
        public void finish(java.lang.Object edgeEffect) {
            android.support.v4.widget.EdgeEffectCompatIcs.finish(edgeEffect);
        }

        @Override // android.support.v4.widget.EdgeEffectCompat.EdgeEffectImpl
        public boolean onPull(java.lang.Object edgeEffect, float deltaDistance) {
            return android.support.v4.widget.EdgeEffectCompatIcs.onPull(edgeEffect, deltaDistance);
        }

        @Override // android.support.v4.widget.EdgeEffectCompat.EdgeEffectImpl
        public boolean onRelease(java.lang.Object edgeEffect) {
            return android.support.v4.widget.EdgeEffectCompatIcs.onRelease(edgeEffect);
        }

        @Override // android.support.v4.widget.EdgeEffectCompat.EdgeEffectImpl
        public boolean onAbsorb(java.lang.Object edgeEffect, int velocity) {
            return android.support.v4.widget.EdgeEffectCompatIcs.onAbsorb(edgeEffect, velocity);
        }

        @Override // android.support.v4.widget.EdgeEffectCompat.EdgeEffectImpl
        public boolean draw(java.lang.Object edgeEffect, android.graphics.Canvas canvas) {
            return android.support.v4.widget.EdgeEffectCompatIcs.draw(edgeEffect, canvas);
        }
    }

    public EdgeEffectCompat(android.content.Context context) {
        this.mEdgeEffect = IMPL.newEdgeEffect(context);
    }

    public void setSize(int width, int height) {
        IMPL.setSize(this.mEdgeEffect, width, height);
    }

    public boolean isFinished() {
        return IMPL.isFinished(this.mEdgeEffect);
    }

    public void finish() {
        IMPL.finish(this.mEdgeEffect);
    }

    public boolean onPull(float deltaDistance) {
        return IMPL.onPull(this.mEdgeEffect, deltaDistance);
    }

    public boolean onRelease() {
        return IMPL.onRelease(this.mEdgeEffect);
    }

    public boolean onAbsorb(int velocity) {
        return IMPL.onAbsorb(this.mEdgeEffect, velocity);
    }

    public boolean draw(android.graphics.Canvas canvas) {
        return IMPL.draw(this.mEdgeEffect, canvas);
    }
}
