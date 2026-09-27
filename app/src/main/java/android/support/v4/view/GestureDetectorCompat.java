package android.support.v4.view;

/* loaded from: classes.dex */
public class GestureDetectorCompat {
    private final android.support.v4.view.GestureDetectorCompat.GestureDetectorCompatImpl mImpl;

    interface GestureDetectorCompatImpl {
        boolean isLongpressEnabled();

        boolean onTouchEvent(android.view.MotionEvent motionEvent);

        void setIsLongpressEnabled(boolean z);

        void setOnDoubleTapListener(android.view.GestureDetector.OnDoubleTapListener onDoubleTapListener);
    }

    static class GestureDetectorCompatImplBase implements android.support.v4.view.GestureDetectorCompat.GestureDetectorCompatImpl {
        private static final int LONG_PRESS = 2;
        private static final int SHOW_PRESS = 1;
        private static final int TAP = 3;
        private boolean mAlwaysInBiggerTapRegion;
        private boolean mAlwaysInTapRegion;
        private android.view.MotionEvent mCurrentDownEvent;
        private boolean mDeferConfirmSingleTap;
        private android.view.GestureDetector.OnDoubleTapListener mDoubleTapListener;
        private int mDoubleTapSlopSquare;
        private float mDownFocusX;
        private float mDownFocusY;
        private final android.os.Handler mHandler;
        private boolean mInLongPress;
        private boolean mIsDoubleTapping;
        private boolean mIsLongpressEnabled;
        private float mLastFocusX;
        private float mLastFocusY;
        private final android.view.GestureDetector.OnGestureListener mListener;
        private int mMaximumFlingVelocity;
        private int mMinimumFlingVelocity;
        private android.view.MotionEvent mPreviousUpEvent;
        private boolean mStillDown;
        private int mTouchSlopSquare;
        private android.view.VelocityTracker mVelocityTracker;
        private static final int LONGPRESS_TIMEOUT = android.view.ViewConfiguration.getLongPressTimeout();
        private static final int TAP_TIMEOUT = android.view.ViewConfiguration.getTapTimeout();
        private static final int DOUBLE_TAP_TIMEOUT = android.view.ViewConfiguration.getDoubleTapTimeout();

        private class GestureHandler extends android.os.Handler {
            GestureHandler() {
            }

            GestureHandler(android.os.Handler handler) {
                super(handler.getLooper());
            }

            @Override // android.os.Handler
            public void handleMessage(android.os.Message msg) {
                switch (msg.what) {
                    case 1:
                        android.support.v4.view.GestureDetectorCompat.GestureDetectorCompatImplBase.this.mListener.onShowPress(android.support.v4.view.GestureDetectorCompat.GestureDetectorCompatImplBase.this.mCurrentDownEvent);
                        return;
                    case 2:
                        android.support.v4.view.GestureDetectorCompat.GestureDetectorCompatImplBase.this.dispatchLongPress();
                        return;
                    case 3:
                        if (android.support.v4.view.GestureDetectorCompat.GestureDetectorCompatImplBase.this.mDoubleTapListener != null) {
                            if (!android.support.v4.view.GestureDetectorCompat.GestureDetectorCompatImplBase.this.mStillDown) {
                                android.support.v4.view.GestureDetectorCompat.GestureDetectorCompatImplBase.this.mDoubleTapListener.onSingleTapConfirmed(android.support.v4.view.GestureDetectorCompat.GestureDetectorCompatImplBase.this.mCurrentDownEvent);
                                return;
                            } else {
                                android.support.v4.view.GestureDetectorCompat.GestureDetectorCompatImplBase.this.mDeferConfirmSingleTap = true;
                                return;
                            }
                        }
                        return;
                    default:
                        throw new java.lang.RuntimeException("Unknown message " + msg);
                }
            }
        }

        public GestureDetectorCompatImplBase(android.content.Context context, android.view.GestureDetector.OnGestureListener listener, android.os.Handler handler) {
            if (handler != null) {
                this.mHandler = new android.support.v4.view.GestureDetectorCompat.GestureDetectorCompatImplBase.GestureHandler(handler);
            } else {
                this.mHandler = new android.support.v4.view.GestureDetectorCompat.GestureDetectorCompatImplBase.GestureHandler();
            }
            this.mListener = listener;
            if (listener instanceof android.view.GestureDetector.OnDoubleTapListener) {
                setOnDoubleTapListener((android.view.GestureDetector.OnDoubleTapListener) listener);
            }
            init(context);
        }

        private void init(android.content.Context context) {
            if (context == null) {
                throw new java.lang.IllegalArgumentException("Context must not be null");
            }
            if (this.mListener == null) {
                throw new java.lang.IllegalArgumentException("OnGestureListener must not be null");
            }
            this.mIsLongpressEnabled = true;
            android.view.ViewConfiguration configuration = android.view.ViewConfiguration.get(context);
            int touchSlop = configuration.getScaledTouchSlop();
            int doubleTapSlop = configuration.getScaledDoubleTapSlop();
            this.mMinimumFlingVelocity = configuration.getScaledMinimumFlingVelocity();
            this.mMaximumFlingVelocity = configuration.getScaledMaximumFlingVelocity();
            this.mTouchSlopSquare = touchSlop * touchSlop;
            this.mDoubleTapSlopSquare = doubleTapSlop * doubleTapSlop;
        }

        @Override // android.support.v4.view.GestureDetectorCompat.GestureDetectorCompatImpl
        public void setOnDoubleTapListener(android.view.GestureDetector.OnDoubleTapListener onDoubleTapListener) {
            this.mDoubleTapListener = onDoubleTapListener;
        }

        @Override // android.support.v4.view.GestureDetectorCompat.GestureDetectorCompatImpl
        public void setIsLongpressEnabled(boolean isLongpressEnabled) {
            this.mIsLongpressEnabled = isLongpressEnabled;
        }

        @Override // android.support.v4.view.GestureDetectorCompat.GestureDetectorCompatImpl
        public boolean isLongpressEnabled() {
            return this.mIsLongpressEnabled;
        }

        @Override // android.support.v4.view.GestureDetectorCompat.GestureDetectorCompatImpl
        public boolean onTouchEvent(android.view.MotionEvent ev) {
            int action = ev.getAction();
            if (this.mVelocityTracker == null) {
                this.mVelocityTracker = android.view.VelocityTracker.obtain();
            }
            this.mVelocityTracker.addMovement(ev);
            boolean pointerUp = (action & android.support.v4.view.MotionEventCompat.ACTION_MASK) == 6;
            int skipIndex = pointerUp ? android.support.v4.view.MotionEventCompat.getActionIndex(ev) : -1;
            float sumX = 0.0f;
            float sumY = 0.0f;
            int count = android.support.v4.view.MotionEventCompat.getPointerCount(ev);
            for (int i = 0; i < count; i++) {
                if (skipIndex != i) {
                    sumX += android.support.v4.view.MotionEventCompat.getX(ev, i);
                    sumY += android.support.v4.view.MotionEventCompat.getY(ev, i);
                }
            }
            int div = pointerUp ? count - 1 : count;
            float focusX = sumX / div;
            float focusY = sumY / div;
            boolean handled = false;
            switch (action & android.support.v4.view.MotionEventCompat.ACTION_MASK) {
                case 0:
                    if (this.mDoubleTapListener != null) {
                        boolean hadTapMessage = this.mHandler.hasMessages(3);
                        if (hadTapMessage) {
                            this.mHandler.removeMessages(3);
                        }
                        if (this.mCurrentDownEvent != null && this.mPreviousUpEvent != null && hadTapMessage && isConsideredDoubleTap(this.mCurrentDownEvent, this.mPreviousUpEvent, ev)) {
                            this.mIsDoubleTapping = true;
                            handled = false | this.mDoubleTapListener.onDoubleTap(this.mCurrentDownEvent) | this.mDoubleTapListener.onDoubleTapEvent(ev);
                        } else {
                            this.mHandler.sendEmptyMessageDelayed(3, DOUBLE_TAP_TIMEOUT);
                        }
                    }
                    this.mLastFocusX = focusX;
                    this.mDownFocusX = focusX;
                    this.mLastFocusY = focusY;
                    this.mDownFocusY = focusY;
                    if (this.mCurrentDownEvent != null) {
                        this.mCurrentDownEvent.recycle();
                    }
                    this.mCurrentDownEvent = android.view.MotionEvent.obtain(ev);
                    this.mAlwaysInTapRegion = true;
                    this.mAlwaysInBiggerTapRegion = true;
                    this.mStillDown = true;
                    this.mInLongPress = false;
                    this.mDeferConfirmSingleTap = false;
                    if (this.mIsLongpressEnabled) {
                        this.mHandler.removeMessages(2);
                        this.mHandler.sendEmptyMessageAtTime(2, this.mCurrentDownEvent.getDownTime() + TAP_TIMEOUT + LONGPRESS_TIMEOUT);
                    }
                    this.mHandler.sendEmptyMessageAtTime(1, this.mCurrentDownEvent.getDownTime() + TAP_TIMEOUT);
                    break;
                case 1:
                    this.mStillDown = false;
                    android.view.MotionEvent currentUpEvent = android.view.MotionEvent.obtain(ev);
                    if (this.mIsDoubleTapping) {
                        handled = false | this.mDoubleTapListener.onDoubleTapEvent(ev);
                    } else if (this.mInLongPress) {
                        this.mHandler.removeMessages(3);
                        this.mInLongPress = false;
                    } else if (this.mAlwaysInTapRegion) {
                        handled = this.mListener.onSingleTapUp(ev);
                        if (this.mDeferConfirmSingleTap && this.mDoubleTapListener != null) {
                            this.mDoubleTapListener.onSingleTapConfirmed(ev);
                        }
                    } else {
                        android.view.VelocityTracker velocityTracker = this.mVelocityTracker;
                        int pointerId = android.support.v4.view.MotionEventCompat.getPointerId(ev, 0);
                        velocityTracker.computeCurrentVelocity(1000, this.mMaximumFlingVelocity);
                        float velocityY = android.support.v4.view.VelocityTrackerCompat.getYVelocity(velocityTracker, pointerId);
                        float velocityX = android.support.v4.view.VelocityTrackerCompat.getXVelocity(velocityTracker, pointerId);
                        if (java.lang.Math.abs(velocityY) > this.mMinimumFlingVelocity || java.lang.Math.abs(velocityX) > this.mMinimumFlingVelocity) {
                            handled = this.mListener.onFling(this.mCurrentDownEvent, ev, velocityX, velocityY);
                        }
                    }
                    if (this.mPreviousUpEvent != null) {
                        this.mPreviousUpEvent.recycle();
                    }
                    this.mPreviousUpEvent = currentUpEvent;
                    if (this.mVelocityTracker != null) {
                        this.mVelocityTracker.recycle();
                        this.mVelocityTracker = null;
                    }
                    this.mIsDoubleTapping = false;
                    this.mDeferConfirmSingleTap = false;
                    this.mHandler.removeMessages(1);
                    this.mHandler.removeMessages(2);
                    break;
                case 2:
                    if (!this.mInLongPress) {
                        float scrollX = this.mLastFocusX - focusX;
                        float scrollY = this.mLastFocusY - focusY;
                        if (this.mIsDoubleTapping) {
                            break;
                        } else if (this.mAlwaysInTapRegion) {
                            int deltaX = (int) (focusX - this.mDownFocusX);
                            int deltaY = (int) (focusY - this.mDownFocusY);
                            int distance = (deltaX * deltaX) + (deltaY * deltaY);
                            if (distance > this.mTouchSlopSquare) {
                                handled = this.mListener.onScroll(this.mCurrentDownEvent, ev, scrollX, scrollY);
                                this.mLastFocusX = focusX;
                                this.mLastFocusY = focusY;
                                this.mAlwaysInTapRegion = false;
                                this.mHandler.removeMessages(3);
                                this.mHandler.removeMessages(1);
                                this.mHandler.removeMessages(2);
                            }
                            if (distance > this.mTouchSlopSquare) {
                                this.mAlwaysInBiggerTapRegion = false;
                                break;
                            }
                        } else if (java.lang.Math.abs(scrollX) >= 1.0f || java.lang.Math.abs(scrollY) >= 1.0f) {
                            boolean handled2 = this.mListener.onScroll(this.mCurrentDownEvent, ev, scrollX, scrollY);
                            this.mLastFocusX = focusX;
                            this.mLastFocusY = focusY;
                            break;
                        }
                    }
                    break;
                case 3:
                    cancel();
                    break;
                case 5:
                    this.mLastFocusX = focusX;
                    this.mDownFocusX = focusX;
                    this.mLastFocusY = focusY;
                    this.mDownFocusY = focusY;
                    cancelTaps();
                    break;
                case 6:
                    this.mLastFocusX = focusX;
                    this.mDownFocusX = focusX;
                    this.mLastFocusY = focusY;
                    this.mDownFocusY = focusY;
                    this.mVelocityTracker.computeCurrentVelocity(1000, this.mMaximumFlingVelocity);
                    int upIndex = android.support.v4.view.MotionEventCompat.getActionIndex(ev);
                    int id1 = android.support.v4.view.MotionEventCompat.getPointerId(ev, upIndex);
                    float x1 = android.support.v4.view.VelocityTrackerCompat.getXVelocity(this.mVelocityTracker, id1);
                    float y1 = android.support.v4.view.VelocityTrackerCompat.getYVelocity(this.mVelocityTracker, id1);
                    for (int i2 = 0; i2 < count; i2++) {
                        if (i2 != upIndex) {
                            int id2 = android.support.v4.view.MotionEventCompat.getPointerId(ev, i2);
                            float x = x1 * android.support.v4.view.VelocityTrackerCompat.getXVelocity(this.mVelocityTracker, id2);
                            float y = y1 * android.support.v4.view.VelocityTrackerCompat.getYVelocity(this.mVelocityTracker, id2);
                            float dot = x + y;
                            if (dot < 0.0f) {
                                this.mVelocityTracker.clear();
                                break;
                            }
                        }
                    }
                    break;
            }
            return false;
        }

        private void cancel() {
            this.mHandler.removeMessages(1);
            this.mHandler.removeMessages(2);
            this.mHandler.removeMessages(3);
            this.mVelocityTracker.recycle();
            this.mVelocityTracker = null;
            this.mIsDoubleTapping = false;
            this.mStillDown = false;
            this.mAlwaysInTapRegion = false;
            this.mAlwaysInBiggerTapRegion = false;
            this.mDeferConfirmSingleTap = false;
            if (this.mInLongPress) {
                this.mInLongPress = false;
            }
        }

        private void cancelTaps() {
            this.mHandler.removeMessages(1);
            this.mHandler.removeMessages(2);
            this.mHandler.removeMessages(3);
            this.mIsDoubleTapping = false;
            this.mAlwaysInTapRegion = false;
            this.mAlwaysInBiggerTapRegion = false;
            this.mDeferConfirmSingleTap = false;
            if (this.mInLongPress) {
                this.mInLongPress = false;
            }
        }

        private boolean isConsideredDoubleTap(android.view.MotionEvent firstDown, android.view.MotionEvent firstUp, android.view.MotionEvent secondDown) {
            if (!this.mAlwaysInBiggerTapRegion || secondDown.getEventTime() - firstUp.getEventTime() > DOUBLE_TAP_TIMEOUT) {
                return false;
            }
            int deltaX = ((int) firstDown.getX()) - ((int) secondDown.getX());
            int deltaY = ((int) firstDown.getY()) - ((int) secondDown.getY());
            return (deltaX * deltaX) + (deltaY * deltaY) < this.mDoubleTapSlopSquare;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void dispatchLongPress() {
            this.mHandler.removeMessages(3);
            this.mDeferConfirmSingleTap = false;
            this.mInLongPress = true;
            this.mListener.onLongPress(this.mCurrentDownEvent);
        }
    }

    static class GestureDetectorCompatImplJellybeanMr2 implements android.support.v4.view.GestureDetectorCompat.GestureDetectorCompatImpl {
        private final android.view.GestureDetector mDetector;

        public GestureDetectorCompatImplJellybeanMr2(android.content.Context context, android.view.GestureDetector.OnGestureListener listener, android.os.Handler handler) {
            this.mDetector = new android.view.GestureDetector(context, listener, handler);
        }

        @Override // android.support.v4.view.GestureDetectorCompat.GestureDetectorCompatImpl
        public boolean isLongpressEnabled() {
            return this.mDetector.isLongpressEnabled();
        }

        @Override // android.support.v4.view.GestureDetectorCompat.GestureDetectorCompatImpl
        public boolean onTouchEvent(android.view.MotionEvent ev) {
            return this.mDetector.onTouchEvent(ev);
        }

        @Override // android.support.v4.view.GestureDetectorCompat.GestureDetectorCompatImpl
        public void setIsLongpressEnabled(boolean enabled) {
            this.mDetector.setIsLongpressEnabled(enabled);
        }

        @Override // android.support.v4.view.GestureDetectorCompat.GestureDetectorCompatImpl
        public void setOnDoubleTapListener(android.view.GestureDetector.OnDoubleTapListener listener) {
            this.mDetector.setOnDoubleTapListener(listener);
        }
    }

    public GestureDetectorCompat(android.content.Context context, android.view.GestureDetector.OnGestureListener listener) {
        this(context, listener, null);
    }

    public GestureDetectorCompat(android.content.Context context, android.view.GestureDetector.OnGestureListener listener, android.os.Handler handler) {
        if (android.os.Build.VERSION.SDK_INT > 17) {
            this.mImpl = new android.support.v4.view.GestureDetectorCompat.GestureDetectorCompatImplJellybeanMr2(context, listener, handler);
        } else {
            this.mImpl = new android.support.v4.view.GestureDetectorCompat.GestureDetectorCompatImplBase(context, listener, handler);
        }
    }

    public boolean isLongpressEnabled() {
        return this.mImpl.isLongpressEnabled();
    }

    public boolean onTouchEvent(android.view.MotionEvent event) {
        return this.mImpl.onTouchEvent(event);
    }

    public void setIsLongpressEnabled(boolean enabled) {
        this.mImpl.setIsLongpressEnabled(enabled);
    }

    public void setOnDoubleTapListener(android.view.GestureDetector.OnDoubleTapListener listener) {
        this.mImpl.setOnDoubleTapListener(listener);
    }
}
