package android.support.v4.widget;

/* loaded from: classes.dex */
public class ScrollerCompat {
    static final android.support.v4.widget.ScrollerCompat.ScrollerCompatImpl IMPL;
    java.lang.Object mScroller;

    interface ScrollerCompatImpl {
        void abortAnimation(java.lang.Object obj);

        boolean computeScrollOffset(java.lang.Object obj);

        java.lang.Object createScroller(android.content.Context context, android.view.animation.Interpolator interpolator);

        void fling(java.lang.Object obj, int i, int i2, int i3, int i4, int i5, int i6, int i7, int i8);

        void fling(java.lang.Object obj, int i, int i2, int i3, int i4, int i5, int i6, int i7, int i8, int i9, int i10);

        float getCurrVelocity(java.lang.Object obj);

        int getCurrX(java.lang.Object obj);

        int getCurrY(java.lang.Object obj);

        int getFinalX(java.lang.Object obj);

        int getFinalY(java.lang.Object obj);

        boolean isFinished(java.lang.Object obj);

        boolean isOverScrolled(java.lang.Object obj);

        void notifyHorizontalEdgeReached(java.lang.Object obj, int i, int i2, int i3);

        void notifyVerticalEdgeReached(java.lang.Object obj, int i, int i2, int i3);

        void startScroll(java.lang.Object obj, int i, int i2, int i3, int i4);

        void startScroll(java.lang.Object obj, int i, int i2, int i3, int i4, int i5);
    }

    static class ScrollerCompatImplBase implements android.support.v4.widget.ScrollerCompat.ScrollerCompatImpl {
        ScrollerCompatImplBase() {
        }

        @Override // android.support.v4.widget.ScrollerCompat.ScrollerCompatImpl
        public java.lang.Object createScroller(android.content.Context context, android.view.animation.Interpolator interpolator) {
            return interpolator != null ? new android.widget.Scroller(context, interpolator) : new android.widget.Scroller(context);
        }

        @Override // android.support.v4.widget.ScrollerCompat.ScrollerCompatImpl
        public boolean isFinished(java.lang.Object scroller) {
            return ((android.widget.Scroller) scroller).isFinished();
        }

        @Override // android.support.v4.widget.ScrollerCompat.ScrollerCompatImpl
        public int getCurrX(java.lang.Object scroller) {
            return ((android.widget.Scroller) scroller).getCurrX();
        }

        @Override // android.support.v4.widget.ScrollerCompat.ScrollerCompatImpl
        public int getCurrY(java.lang.Object scroller) {
            return ((android.widget.Scroller) scroller).getCurrY();
        }

        @Override // android.support.v4.widget.ScrollerCompat.ScrollerCompatImpl
        public float getCurrVelocity(java.lang.Object scroller) {
            return 0.0f;
        }

        @Override // android.support.v4.widget.ScrollerCompat.ScrollerCompatImpl
        public boolean computeScrollOffset(java.lang.Object scroller) {
            return ((android.widget.Scroller) scroller).computeScrollOffset();
        }

        @Override // android.support.v4.widget.ScrollerCompat.ScrollerCompatImpl
        public void startScroll(java.lang.Object scroller, int startX, int startY, int dx, int dy) {
            ((android.widget.Scroller) scroller).startScroll(startX, startY, dx, dy);
        }

        @Override // android.support.v4.widget.ScrollerCompat.ScrollerCompatImpl
        public void startScroll(java.lang.Object scroller, int startX, int startY, int dx, int dy, int duration) {
            ((android.widget.Scroller) scroller).startScroll(startX, startY, dx, dy, duration);
        }

        @Override // android.support.v4.widget.ScrollerCompat.ScrollerCompatImpl
        public void fling(java.lang.Object scroller, int startX, int startY, int velX, int velY, int minX, int maxX, int minY, int maxY) {
            ((android.widget.Scroller) scroller).fling(startX, startY, velX, velY, minX, maxX, minY, maxY);
        }

        @Override // android.support.v4.widget.ScrollerCompat.ScrollerCompatImpl
        public void fling(java.lang.Object scroller, int startX, int startY, int velX, int velY, int minX, int maxX, int minY, int maxY, int overX, int overY) {
            ((android.widget.Scroller) scroller).fling(startX, startY, velX, velY, minX, maxX, minY, maxY);
        }

        @Override // android.support.v4.widget.ScrollerCompat.ScrollerCompatImpl
        public void abortAnimation(java.lang.Object scroller) {
            ((android.widget.Scroller) scroller).abortAnimation();
        }

        @Override // android.support.v4.widget.ScrollerCompat.ScrollerCompatImpl
        public void notifyHorizontalEdgeReached(java.lang.Object scroller, int startX, int finalX, int overX) {
        }

        @Override // android.support.v4.widget.ScrollerCompat.ScrollerCompatImpl
        public void notifyVerticalEdgeReached(java.lang.Object scroller, int startY, int finalY, int overY) {
        }

        @Override // android.support.v4.widget.ScrollerCompat.ScrollerCompatImpl
        public boolean isOverScrolled(java.lang.Object scroller) {
            return false;
        }

        @Override // android.support.v4.widget.ScrollerCompat.ScrollerCompatImpl
        public int getFinalX(java.lang.Object scroller) {
            return ((android.widget.Scroller) scroller).getFinalX();
        }

        @Override // android.support.v4.widget.ScrollerCompat.ScrollerCompatImpl
        public int getFinalY(java.lang.Object scroller) {
            return ((android.widget.Scroller) scroller).getFinalY();
        }
    }

    static class ScrollerCompatImplGingerbread implements android.support.v4.widget.ScrollerCompat.ScrollerCompatImpl {
        ScrollerCompatImplGingerbread() {
        }

        @Override // android.support.v4.widget.ScrollerCompat.ScrollerCompatImpl
        public java.lang.Object createScroller(android.content.Context context, android.view.animation.Interpolator interpolator) {
            return android.support.v4.widget.ScrollerCompatGingerbread.createScroller(context, interpolator);
        }

        @Override // android.support.v4.widget.ScrollerCompat.ScrollerCompatImpl
        public boolean isFinished(java.lang.Object scroller) {
            return android.support.v4.widget.ScrollerCompatGingerbread.isFinished(scroller);
        }

        @Override // android.support.v4.widget.ScrollerCompat.ScrollerCompatImpl
        public int getCurrX(java.lang.Object scroller) {
            return android.support.v4.widget.ScrollerCompatGingerbread.getCurrX(scroller);
        }

        @Override // android.support.v4.widget.ScrollerCompat.ScrollerCompatImpl
        public int getCurrY(java.lang.Object scroller) {
            return android.support.v4.widget.ScrollerCompatGingerbread.getCurrY(scroller);
        }

        @Override // android.support.v4.widget.ScrollerCompat.ScrollerCompatImpl
        public float getCurrVelocity(java.lang.Object scroller) {
            return 0.0f;
        }

        @Override // android.support.v4.widget.ScrollerCompat.ScrollerCompatImpl
        public boolean computeScrollOffset(java.lang.Object scroller) {
            return android.support.v4.widget.ScrollerCompatGingerbread.computeScrollOffset(scroller);
        }

        @Override // android.support.v4.widget.ScrollerCompat.ScrollerCompatImpl
        public void startScroll(java.lang.Object scroller, int startX, int startY, int dx, int dy) {
            android.support.v4.widget.ScrollerCompatGingerbread.startScroll(scroller, startX, startY, dx, dy);
        }

        @Override // android.support.v4.widget.ScrollerCompat.ScrollerCompatImpl
        public void startScroll(java.lang.Object scroller, int startX, int startY, int dx, int dy, int duration) {
            android.support.v4.widget.ScrollerCompatGingerbread.startScroll(scroller, startX, startY, dx, dy, duration);
        }

        @Override // android.support.v4.widget.ScrollerCompat.ScrollerCompatImpl
        public void fling(java.lang.Object scroller, int startX, int startY, int velX, int velY, int minX, int maxX, int minY, int maxY) {
            android.support.v4.widget.ScrollerCompatGingerbread.fling(scroller, startX, startY, velX, velY, minX, maxX, minY, maxY);
        }

        @Override // android.support.v4.widget.ScrollerCompat.ScrollerCompatImpl
        public void fling(java.lang.Object scroller, int startX, int startY, int velX, int velY, int minX, int maxX, int minY, int maxY, int overX, int overY) {
            android.support.v4.widget.ScrollerCompatGingerbread.fling(scroller, startX, startY, velX, velY, minX, maxX, minY, maxY, overX, overY);
        }

        @Override // android.support.v4.widget.ScrollerCompat.ScrollerCompatImpl
        public void abortAnimation(java.lang.Object scroller) {
            android.support.v4.widget.ScrollerCompatGingerbread.abortAnimation(scroller);
        }

        @Override // android.support.v4.widget.ScrollerCompat.ScrollerCompatImpl
        public void notifyHorizontalEdgeReached(java.lang.Object scroller, int startX, int finalX, int overX) {
            android.support.v4.widget.ScrollerCompatGingerbread.notifyHorizontalEdgeReached(scroller, startX, finalX, overX);
        }

        @Override // android.support.v4.widget.ScrollerCompat.ScrollerCompatImpl
        public void notifyVerticalEdgeReached(java.lang.Object scroller, int startY, int finalY, int overY) {
            android.support.v4.widget.ScrollerCompatGingerbread.notifyVerticalEdgeReached(scroller, startY, finalY, overY);
        }

        @Override // android.support.v4.widget.ScrollerCompat.ScrollerCompatImpl
        public boolean isOverScrolled(java.lang.Object scroller) {
            return android.support.v4.widget.ScrollerCompatGingerbread.isOverScrolled(scroller);
        }

        @Override // android.support.v4.widget.ScrollerCompat.ScrollerCompatImpl
        public int getFinalX(java.lang.Object scroller) {
            return android.support.v4.widget.ScrollerCompatGingerbread.getFinalX(scroller);
        }

        @Override // android.support.v4.widget.ScrollerCompat.ScrollerCompatImpl
        public int getFinalY(java.lang.Object scroller) {
            return android.support.v4.widget.ScrollerCompatGingerbread.getFinalY(scroller);
        }
    }

    static class ScrollerCompatImplIcs extends android.support.v4.widget.ScrollerCompat.ScrollerCompatImplGingerbread {
        ScrollerCompatImplIcs() {
        }

        @Override // android.support.v4.widget.ScrollerCompat.ScrollerCompatImplGingerbread, android.support.v4.widget.ScrollerCompat.ScrollerCompatImpl
        public float getCurrVelocity(java.lang.Object scroller) {
            return android.support.v4.widget.ScrollerCompatIcs.getCurrVelocity(scroller);
        }
    }

    static {
        int version = android.os.Build.VERSION.SDK_INT;
        if (version >= 14) {
            IMPL = new android.support.v4.widget.ScrollerCompat.ScrollerCompatImplIcs();
        } else if (version >= 9) {
            IMPL = new android.support.v4.widget.ScrollerCompat.ScrollerCompatImplGingerbread();
        } else {
            IMPL = new android.support.v4.widget.ScrollerCompat.ScrollerCompatImplBase();
        }
    }

    public static android.support.v4.widget.ScrollerCompat create(android.content.Context context) {
        return create(context, null);
    }

    public static android.support.v4.widget.ScrollerCompat create(android.content.Context context, android.view.animation.Interpolator interpolator) {
        return new android.support.v4.widget.ScrollerCompat(context, interpolator);
    }

    ScrollerCompat(android.content.Context context, android.view.animation.Interpolator interpolator) {
        this.mScroller = IMPL.createScroller(context, interpolator);
    }

    public boolean isFinished() {
        return IMPL.isFinished(this.mScroller);
    }

    public int getCurrX() {
        return IMPL.getCurrX(this.mScroller);
    }

    public int getCurrY() {
        return IMPL.getCurrY(this.mScroller);
    }

    public int getFinalX() {
        return IMPL.getFinalX(this.mScroller);
    }

    public int getFinalY() {
        return IMPL.getFinalY(this.mScroller);
    }

    public float getCurrVelocity() {
        return IMPL.getCurrVelocity(this.mScroller);
    }

    public boolean computeScrollOffset() {
        return IMPL.computeScrollOffset(this.mScroller);
    }

    public void startScroll(int startX, int startY, int dx, int dy) {
        IMPL.startScroll(this.mScroller, startX, startY, dx, dy);
    }

    public void startScroll(int startX, int startY, int dx, int dy, int duration) {
        IMPL.startScroll(this.mScroller, startX, startY, dx, dy, duration);
    }

    public void fling(int startX, int startY, int velocityX, int velocityY, int minX, int maxX, int minY, int maxY) {
        IMPL.fling(this.mScroller, startX, startY, velocityX, velocityY, minX, maxX, minY, maxY);
    }

    public void fling(int startX, int startY, int velocityX, int velocityY, int minX, int maxX, int minY, int maxY, int overX, int overY) {
        IMPL.fling(this.mScroller, startX, startY, velocityX, velocityY, minX, maxX, minY, maxY, overX, overY);
    }

    public void abortAnimation() {
        IMPL.abortAnimation(this.mScroller);
    }

    public void notifyHorizontalEdgeReached(int startX, int finalX, int overX) {
        IMPL.notifyHorizontalEdgeReached(this.mScroller, startX, finalX, overX);
    }

    public void notifyVerticalEdgeReached(int startY, int finalY, int overY) {
        IMPL.notifyVerticalEdgeReached(this.mScroller, startY, finalY, overY);
    }

    public boolean isOverScrolled() {
        return IMPL.isOverScrolled(this.mScroller);
    }
}
