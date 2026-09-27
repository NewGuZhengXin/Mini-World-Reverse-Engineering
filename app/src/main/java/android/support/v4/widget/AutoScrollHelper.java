package android.support.v4.widget;

/* loaded from: classes.dex */
public abstract class AutoScrollHelper implements android.view.View.OnTouchListener {
    private static final int DEFAULT_ACTIVATION_DELAY = android.view.ViewConfiguration.getTapTimeout();
    private static final int DEFAULT_EDGE_TYPE = 1;
    private static final float DEFAULT_MAXIMUM_EDGE = Float.MAX_VALUE;
    private static final int DEFAULT_MAXIMUM_VELOCITY_DIPS = 1575;
    private static final int DEFAULT_MINIMUM_VELOCITY_DIPS = 315;
    private static final int DEFAULT_RAMP_DOWN_DURATION = 500;
    private static final int DEFAULT_RAMP_UP_DURATION = 500;
    private static final float DEFAULT_RELATIVE_EDGE = 0.2f;
    private static final float DEFAULT_RELATIVE_VELOCITY = 1.0f;
    public static final int EDGE_TYPE_INSIDE = 0;
    public static final int EDGE_TYPE_INSIDE_EXTEND = 1;
    public static final int EDGE_TYPE_OUTSIDE = 2;
    private static final int HORIZONTAL = 0;
    public static final float NO_MAX = Float.MAX_VALUE;
    public static final float NO_MIN = 0.0f;
    public static final float RELATIVE_UNSPECIFIED = 0.0f;
    private static final int VERTICAL = 1;
    private int mActivationDelay;
    private boolean mAlreadyDelayed;
    private boolean mAnimating;
    private int mEdgeType;
    private boolean mEnabled;
    private boolean mExclusive;
    private boolean mNeedsCancel;
    private boolean mNeedsReset;
    private java.lang.Runnable mRunnable;
    private final android.view.View mTarget;
    private final android.support.v4.widget.AutoScrollHelper.ClampedScroller mScroller = new android.support.v4.widget.AutoScrollHelper.ClampedScroller();
    private final android.view.animation.Interpolator mEdgeInterpolator = new android.view.animation.AccelerateInterpolator();
    private float[] mRelativeEdges = {0.0f, 0.0f};
    private float[] mMaximumEdges = {Float.MAX_VALUE, Float.MAX_VALUE};
    private float[] mRelativeVelocity = {0.0f, 0.0f};
    private float[] mMinimumVelocity = {0.0f, 0.0f};
    private float[] mMaximumVelocity = {Float.MAX_VALUE, Float.MAX_VALUE};

    public abstract boolean canTargetScrollHorizontally(int i);

    public abstract boolean canTargetScrollVertically(int i);

    public abstract void scrollTargetBy(int i, int i2);

    public AutoScrollHelper(android.view.View target) {
        this.mTarget = target;
        android.util.DisplayMetrics metrics = android.content.res.Resources.getSystem().getDisplayMetrics();
        int maxVelocity = (int) ((1575.0f * metrics.density) + 0.5f);
        int minVelocity = (int) ((315.0f * metrics.density) + 0.5f);
        setMaximumVelocity(maxVelocity, maxVelocity);
        setMinimumVelocity(minVelocity, minVelocity);
        setEdgeType(1);
        setMaximumEdges(Float.MAX_VALUE, Float.MAX_VALUE);
        setRelativeEdges(DEFAULT_RELATIVE_EDGE, DEFAULT_RELATIVE_EDGE);
        setRelativeVelocity(DEFAULT_RELATIVE_VELOCITY, DEFAULT_RELATIVE_VELOCITY);
        setActivationDelay(DEFAULT_ACTIVATION_DELAY);
        setRampUpDuration(500);
        setRampDownDuration(500);
    }

    public android.support.v4.widget.AutoScrollHelper setEnabled(boolean enabled) {
        if (this.mEnabled && !enabled) {
            requestStop();
        }
        this.mEnabled = enabled;
        return this;
    }

    public boolean isEnabled() {
        return this.mEnabled;
    }

    public android.support.v4.widget.AutoScrollHelper setExclusive(boolean exclusive) {
        this.mExclusive = exclusive;
        return this;
    }

    public boolean isExclusive() {
        return this.mExclusive;
    }

    public android.support.v4.widget.AutoScrollHelper setMaximumVelocity(float horizontalMax, float verticalMax) {
        this.mMaximumVelocity[0] = horizontalMax / 1000.0f;
        this.mMaximumVelocity[1] = verticalMax / 1000.0f;
        return this;
    }

    public android.support.v4.widget.AutoScrollHelper setMinimumVelocity(float horizontalMin, float verticalMin) {
        this.mMinimumVelocity[0] = horizontalMin / 1000.0f;
        this.mMinimumVelocity[1] = verticalMin / 1000.0f;
        return this;
    }

    public android.support.v4.widget.AutoScrollHelper setRelativeVelocity(float horizontal, float vertical) {
        this.mRelativeVelocity[0] = horizontal / 1000.0f;
        this.mRelativeVelocity[1] = vertical / 1000.0f;
        return this;
    }

    public android.support.v4.widget.AutoScrollHelper setEdgeType(int type) {
        this.mEdgeType = type;
        return this;
    }

    public android.support.v4.widget.AutoScrollHelper setRelativeEdges(float horizontal, float vertical) {
        this.mRelativeEdges[0] = horizontal;
        this.mRelativeEdges[1] = vertical;
        return this;
    }

    public android.support.v4.widget.AutoScrollHelper setMaximumEdges(float horizontalMax, float verticalMax) {
        this.mMaximumEdges[0] = horizontalMax;
        this.mMaximumEdges[1] = verticalMax;
        return this;
    }

    public android.support.v4.widget.AutoScrollHelper setActivationDelay(int delayMillis) {
        this.mActivationDelay = delayMillis;
        return this;
    }

    public android.support.v4.widget.AutoScrollHelper setRampUpDuration(int durationMillis) {
        this.mScroller.setRampUpDuration(durationMillis);
        return this;
    }

    public android.support.v4.widget.AutoScrollHelper setRampDownDuration(int durationMillis) {
        this.mScroller.setRampDownDuration(durationMillis);
        return this;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    @Override // android.view.View.OnTouchListener
    public boolean onTouch(android.view.View v, android.view.MotionEvent event) {
        if (!this.mEnabled) {
            return false;
        }
        int action = android.support.v4.view.MotionEventCompat.getActionMasked(event);
        switch (action) {
            case 0:
                this.mNeedsCancel = true;
                this.mAlreadyDelayed = false;
                float xTargetVelocity = computeTargetVelocity(0, event.getX(), v.getWidth(), this.mTarget.getWidth());
                float yTargetVelocity = computeTargetVelocity(1, event.getY(), v.getHeight(), this.mTarget.getHeight());
                this.mScroller.setTargetVelocity(xTargetVelocity, yTargetVelocity);
                if (!this.mAnimating && shouldAnimate()) {
                    startAnimating();
                    break;
                }
                break;
            case 1:
            case 3:
                requestStop();
                break;
            case 2:
                float xTargetVelocity2 = computeTargetVelocity(0, event.getX(), v.getWidth(), this.mTarget.getWidth());
                float yTargetVelocity2 = computeTargetVelocity(1, event.getY(), v.getHeight(), this.mTarget.getHeight());
                this.mScroller.setTargetVelocity(xTargetVelocity2, yTargetVelocity2);
                if (!this.mAnimating) {
                    startAnimating();
                    break;
                }
                break;
        }
        return this.mExclusive && this.mAnimating;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean shouldAnimate() {
        android.support.v4.widget.AutoScrollHelper.ClampedScroller scroller = this.mScroller;
        int verticalDirection = scroller.getVerticalDirection();
        int horizontalDirection = scroller.getHorizontalDirection();
        return (verticalDirection != 0 && canTargetScrollVertically(verticalDirection)) || (horizontalDirection != 0 && canTargetScrollHorizontally(horizontalDirection));
    }

    private void startAnimating() {
        if (this.mRunnable == null) {
            this.mRunnable = new android.support.v4.widget.AutoScrollHelper.ScrollAnimationRunnable();
        }
        this.mAnimating = true;
        this.mNeedsReset = true;
        if (!this.mAlreadyDelayed && this.mActivationDelay > 0) {
            android.support.v4.view.ViewCompat.postOnAnimationDelayed(this.mTarget, this.mRunnable, this.mActivationDelay);
        } else {
            this.mRunnable.run();
        }
        this.mAlreadyDelayed = true;
    }

    private void requestStop() {
        if (this.mNeedsReset) {
            this.mAnimating = false;
        } else {
            this.mScroller.requestStop();
        }
    }

    private float computeTargetVelocity(int direction, float coordinate, float srcSize, float dstSize) {
        float relativeEdge = this.mRelativeEdges[direction];
        float maximumEdge = this.mMaximumEdges[direction];
        float value = getEdgeValue(relativeEdge, srcSize, maximumEdge, coordinate);
        if (value == 0.0f) {
            return 0.0f;
        }
        float relativeVelocity = this.mRelativeVelocity[direction];
        float minimumVelocity = this.mMinimumVelocity[direction];
        float maximumVelocity = this.mMaximumVelocity[direction];
        float targetVelocity = relativeVelocity * dstSize;
        if (value > 0.0f) {
            return constrain(value * targetVelocity, minimumVelocity, maximumVelocity);
        }
        return -constrain((-value) * targetVelocity, minimumVelocity, maximumVelocity);
    }

    private float getEdgeValue(float relativeValue, float size, float maxValue, float current) {
        float interpolated;
        float edgeSize = constrain(relativeValue * size, 0.0f, maxValue);
        float valueLeading = constrainEdgeValue(current, edgeSize);
        float valueTrailing = constrainEdgeValue(size - current, edgeSize);
        float value = valueTrailing - valueLeading;
        if (value < 0.0f) {
            interpolated = -this.mEdgeInterpolator.getInterpolation(-value);
        } else {
            if (value <= 0.0f) {
                return 0.0f;
            }
            interpolated = this.mEdgeInterpolator.getInterpolation(value);
        }
        return constrain(interpolated, -1.0f, DEFAULT_RELATIVE_VELOCITY);
    }

    private float constrainEdgeValue(float current, float leading) {
        if (leading == 0.0f) {
            return 0.0f;
        }
        switch (this.mEdgeType) {
            case 0:
            case 1:
                if (current < leading) {
                    if (current < 0.0f) {
                        if (this.mAnimating && this.mEdgeType == 1) {
                            break;
                        }
                    } else {
                        break;
                    }
                }
                break;
            case 2:
                if (current < 0.0f) {
                    break;
                }
                break;
        }
        return 0.0f;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static int constrain(int value, int min, int max) {
        if (value > max) {
            return max;
        }
        return value < min ? min : value;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static float constrain(float value, float min, float max) {
        if (value > max) {
            return max;
        }
        return value < min ? min : value;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void cancelTargetTouch() {
        long eventTime = android.os.SystemClock.uptimeMillis();
        android.view.MotionEvent cancel = android.view.MotionEvent.obtain(eventTime, eventTime, 3, 0.0f, 0.0f, 0);
        this.mTarget.onTouchEvent(cancel);
        cancel.recycle();
    }

    private class ScrollAnimationRunnable implements java.lang.Runnable {
        private ScrollAnimationRunnable() {
        }

        @Override // java.lang.Runnable
        public void run() {
            if (android.support.v4.widget.AutoScrollHelper.this.mAnimating) {
                if (android.support.v4.widget.AutoScrollHelper.this.mNeedsReset) {
                    android.support.v4.widget.AutoScrollHelper.this.mNeedsReset = false;
                    android.support.v4.widget.AutoScrollHelper.this.mScroller.start();
                }
                android.support.v4.widget.AutoScrollHelper.ClampedScroller scroller = android.support.v4.widget.AutoScrollHelper.this.mScroller;
                if (scroller.isFinished() || !android.support.v4.widget.AutoScrollHelper.this.shouldAnimate()) {
                    android.support.v4.widget.AutoScrollHelper.this.mAnimating = false;
                    return;
                }
                if (android.support.v4.widget.AutoScrollHelper.this.mNeedsCancel) {
                    android.support.v4.widget.AutoScrollHelper.this.mNeedsCancel = false;
                    android.support.v4.widget.AutoScrollHelper.this.cancelTargetTouch();
                }
                scroller.computeScrollDelta();
                int deltaX = scroller.getDeltaX();
                int deltaY = scroller.getDeltaY();
                android.support.v4.widget.AutoScrollHelper.this.scrollTargetBy(deltaX, deltaY);
                android.support.v4.view.ViewCompat.postOnAnimation(android.support.v4.widget.AutoScrollHelper.this.mTarget, this);
            }
        }
    }

    private static class ClampedScroller {
        private int mEffectiveRampDown;
        private int mRampDownDuration;
        private int mRampUpDuration;
        private float mStopValue;
        private float mTargetVelocityX;
        private float mTargetVelocityY;
        private long mStartTime = Long.MIN_VALUE;
        private long mStopTime = -1;
        private long mDeltaTime = 0;
        private int mDeltaX = 0;
        private int mDeltaY = 0;

        public void setRampUpDuration(int durationMillis) {
            this.mRampUpDuration = durationMillis;
        }

        public void setRampDownDuration(int durationMillis) {
            this.mRampDownDuration = durationMillis;
        }

        public void start() {
            this.mStartTime = android.view.animation.AnimationUtils.currentAnimationTimeMillis();
            this.mStopTime = -1L;
            this.mDeltaTime = this.mStartTime;
            this.mStopValue = 0.5f;
            this.mDeltaX = 0;
            this.mDeltaY = 0;
        }

        public void requestStop() {
            long currentTime = android.view.animation.AnimationUtils.currentAnimationTimeMillis();
            this.mEffectiveRampDown = android.support.v4.widget.AutoScrollHelper.constrain((int) (currentTime - this.mStartTime), 0, this.mRampDownDuration);
            this.mStopValue = getValueAt(currentTime);
            this.mStopTime = currentTime;
        }

        public boolean isFinished() {
            return this.mStopTime > 0 && android.view.animation.AnimationUtils.currentAnimationTimeMillis() > this.mStopTime + ((long) this.mEffectiveRampDown);
        }

        private float getValueAt(long currentTime) {
            if (currentTime < this.mStartTime) {
                return 0.0f;
            }
            if (this.mStopTime < 0 || currentTime < this.mStopTime) {
                long elapsedSinceStart = currentTime - this.mStartTime;
                return android.support.v4.widget.AutoScrollHelper.constrain(elapsedSinceStart / this.mRampUpDuration, 0.0f, android.support.v4.widget.AutoScrollHelper.DEFAULT_RELATIVE_VELOCITY) * 0.5f;
            }
            long elapsedSinceEnd = currentTime - this.mStopTime;
            return (android.support.v4.widget.AutoScrollHelper.constrain(elapsedSinceEnd / this.mEffectiveRampDown, 0.0f, android.support.v4.widget.AutoScrollHelper.DEFAULT_RELATIVE_VELOCITY) * this.mStopValue) + (android.support.v4.widget.AutoScrollHelper.DEFAULT_RELATIVE_VELOCITY - this.mStopValue);
        }

        private float interpolateValue(float value) {
            return ((-4.0f) * value * value) + (4.0f * value);
        }

        public void computeScrollDelta() {
            if (this.mDeltaTime == 0) {
                throw new java.lang.RuntimeException("Cannot compute scroll delta before calling start()");
            }
            long currentTime = android.view.animation.AnimationUtils.currentAnimationTimeMillis();
            float value = getValueAt(currentTime);
            float scale = interpolateValue(value);
            long elapsedSinceDelta = currentTime - this.mDeltaTime;
            this.mDeltaTime = currentTime;
            this.mDeltaX = (int) (elapsedSinceDelta * scale * this.mTargetVelocityX);
            this.mDeltaY = (int) (elapsedSinceDelta * scale * this.mTargetVelocityY);
        }

        public void setTargetVelocity(float x, float y) {
            this.mTargetVelocityX = x;
            this.mTargetVelocityY = y;
        }

        public int getHorizontalDirection() {
            return (int) (this.mTargetVelocityX / java.lang.Math.abs(this.mTargetVelocityX));
        }

        public int getVerticalDirection() {
            return (int) (this.mTargetVelocityY / java.lang.Math.abs(this.mTargetVelocityY));
        }

        public int getDeltaX() {
            return this.mDeltaX;
        }

        public int getDeltaY() {
            return this.mDeltaY;
        }
    }
}
