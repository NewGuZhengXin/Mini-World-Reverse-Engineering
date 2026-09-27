package android.support.v4.widget;

/* loaded from: classes.dex */
public class DrawerLayout extends android.view.ViewGroup {
    private static final boolean ALLOW_EDGE_LOCK = false;
    private static final boolean CHILDREN_DISALLOW_INTERCEPT = true;
    private static final int DEFAULT_SCRIM_COLOR = -1728053248;
    private static final int[] LAYOUT_ATTRS = {android.R.attr.layout_gravity};
    public static final int LOCK_MODE_LOCKED_CLOSED = 1;
    public static final int LOCK_MODE_LOCKED_OPEN = 2;
    public static final int LOCK_MODE_UNLOCKED = 0;
    private static final int MIN_DRAWER_MARGIN = 64;
    private static final int MIN_FLING_VELOCITY = 400;
    private static final int PEEK_DELAY = 160;
    public static final int STATE_DRAGGING = 1;
    public static final int STATE_IDLE = 0;
    public static final int STATE_SETTLING = 2;
    private static final java.lang.String TAG = "DrawerLayout";
    private static final float TOUCH_SLOP_SENSITIVITY = 1.0f;
    private boolean mChildrenCanceledTouch;
    private boolean mDisallowInterceptRequested;
    private int mDrawerState;
    private boolean mFirstLayout;
    private boolean mInLayout;
    private float mInitialMotionX;
    private float mInitialMotionY;
    private final android.support.v4.widget.DrawerLayout.ViewDragCallback mLeftCallback;
    private final android.support.v4.widget.ViewDragHelper mLeftDragger;
    private android.support.v4.widget.DrawerLayout.DrawerListener mListener;
    private int mLockModeLeft;
    private int mLockModeRight;
    private int mMinDrawerMargin;
    private final android.support.v4.widget.DrawerLayout.ViewDragCallback mRightCallback;
    private final android.support.v4.widget.ViewDragHelper mRightDragger;
    private int mScrimColor;
    private float mScrimOpacity;
    private android.graphics.Paint mScrimPaint;
    private android.graphics.drawable.Drawable mShadowLeft;
    private android.graphics.drawable.Drawable mShadowRight;

    public interface DrawerListener {
        void onDrawerClosed(android.view.View view);

        void onDrawerOpened(android.view.View view);

        void onDrawerSlide(android.view.View view, float f);

        void onDrawerStateChanged(int i);
    }

    public static abstract class SimpleDrawerListener implements android.support.v4.widget.DrawerLayout.DrawerListener {
        @Override // android.support.v4.widget.DrawerLayout.DrawerListener
        public void onDrawerSlide(android.view.View drawerView, float slideOffset) {
        }

        @Override // android.support.v4.widget.DrawerLayout.DrawerListener
        public void onDrawerOpened(android.view.View drawerView) {
        }

        @Override // android.support.v4.widget.DrawerLayout.DrawerListener
        public void onDrawerClosed(android.view.View drawerView) {
        }

        @Override // android.support.v4.widget.DrawerLayout.DrawerListener
        public void onDrawerStateChanged(int newState) {
        }
    }

    public DrawerLayout(android.content.Context context) {
        this(context, null);
    }

    public DrawerLayout(android.content.Context context, android.util.AttributeSet attrs) {
        this(context, attrs, 0);
    }

    public DrawerLayout(android.content.Context context, android.util.AttributeSet attrs, int defStyle) {
        super(context, attrs, defStyle);
        this.mScrimColor = DEFAULT_SCRIM_COLOR;
        this.mScrimPaint = new android.graphics.Paint();
        this.mFirstLayout = true;
        float density = getResources().getDisplayMetrics().density;
        this.mMinDrawerMargin = (int) ((64.0f * density) + 0.5f);
        float minVel = 400.0f * density;
        this.mLeftCallback = new android.support.v4.widget.DrawerLayout.ViewDragCallback(3);
        this.mRightCallback = new android.support.v4.widget.DrawerLayout.ViewDragCallback(5);
        this.mLeftDragger = android.support.v4.widget.ViewDragHelper.create(this, TOUCH_SLOP_SENSITIVITY, this.mLeftCallback);
        this.mLeftDragger.setEdgeTrackingEnabled(1);
        this.mLeftDragger.setMinVelocity(minVel);
        this.mLeftCallback.setDragger(this.mLeftDragger);
        this.mRightDragger = android.support.v4.widget.ViewDragHelper.create(this, TOUCH_SLOP_SENSITIVITY, this.mRightCallback);
        this.mRightDragger.setEdgeTrackingEnabled(2);
        this.mRightDragger.setMinVelocity(minVel);
        this.mRightCallback.setDragger(this.mRightDragger);
        setFocusableInTouchMode(true);
        android.support.v4.view.ViewCompat.setAccessibilityDelegate(this, new android.support.v4.widget.DrawerLayout.AccessibilityDelegate());
        android.support.v4.view.ViewGroupCompat.setMotionEventSplittingEnabled(this, ALLOW_EDGE_LOCK);
    }

    public void setDrawerShadow(android.graphics.drawable.Drawable shadowDrawable, int gravity) {
        int absGravity = android.support.v4.view.GravityCompat.getAbsoluteGravity(gravity, android.support.v4.view.ViewCompat.getLayoutDirection(this));
        if ((absGravity & 3) == 3) {
            this.mShadowLeft = shadowDrawable;
            invalidate();
        }
        if ((absGravity & 5) == 5) {
            this.mShadowRight = shadowDrawable;
            invalidate();
        }
    }

    public void setDrawerShadow(int resId, int gravity) {
        setDrawerShadow(getResources().getDrawable(resId), gravity);
    }

    public void setScrimColor(int color) {
        this.mScrimColor = color;
        invalidate();
    }

    public void setDrawerListener(android.support.v4.widget.DrawerLayout.DrawerListener listener) {
        this.mListener = listener;
    }

    public void setDrawerLockMode(int lockMode) {
        setDrawerLockMode(lockMode, 3);
        setDrawerLockMode(lockMode, 5);
    }

    public void setDrawerLockMode(int lockMode, int edgeGravity) {
        int absGravity = android.support.v4.view.GravityCompat.getAbsoluteGravity(edgeGravity, android.support.v4.view.ViewCompat.getLayoutDirection(this));
        if (absGravity == 3) {
            this.mLockModeLeft = lockMode;
        } else if (absGravity == 5) {
            this.mLockModeRight = lockMode;
        }
        if (lockMode != 0) {
            android.support.v4.widget.ViewDragHelper helper = absGravity == 3 ? this.mLeftDragger : this.mRightDragger;
            helper.cancel();
        }
        switch (lockMode) {
            case 1:
                android.view.View toClose = findDrawerWithGravity(absGravity);
                if (toClose != null) {
                    closeDrawer(toClose);
                    break;
                }
                break;
            case 2:
                android.view.View toOpen = findDrawerWithGravity(absGravity);
                if (toOpen != null) {
                    openDrawer(toOpen);
                    break;
                }
                break;
        }
    }

    public void setDrawerLockMode(int lockMode, android.view.View drawerView) {
        if (!isDrawerView(drawerView)) {
            throw new java.lang.IllegalArgumentException("View " + drawerView + " is not a drawer with appropriate layout_gravity");
        }
        int gravity = ((android.support.v4.widget.DrawerLayout.LayoutParams) drawerView.getLayoutParams()).gravity;
        setDrawerLockMode(lockMode, gravity);
    }

    public int getDrawerLockMode(int edgeGravity) {
        int absGravity = android.support.v4.view.GravityCompat.getAbsoluteGravity(edgeGravity, android.support.v4.view.ViewCompat.getLayoutDirection(this));
        if (absGravity == 3) {
            return this.mLockModeLeft;
        }
        if (absGravity == 5) {
            return this.mLockModeRight;
        }
        return 0;
    }

    public int getDrawerLockMode(android.view.View drawerView) {
        int absGravity = getDrawerViewAbsoluteGravity(drawerView);
        if (absGravity == 3) {
            return this.mLockModeLeft;
        }
        if (absGravity == 5) {
            return this.mLockModeRight;
        }
        return 0;
    }

    void updateDrawerState(int forGravity, int activeState, android.view.View activeDrawer) {
        int state;
        int leftState = this.mLeftDragger.getViewDragState();
        int rightState = this.mRightDragger.getViewDragState();
        if (leftState == 1 || rightState == 1) {
            state = 1;
        } else if (leftState == 2 || rightState == 2) {
            state = 2;
        } else {
            state = 0;
        }
        if (activeDrawer != null && activeState == 0) {
            android.support.v4.widget.DrawerLayout.LayoutParams lp = (android.support.v4.widget.DrawerLayout.LayoutParams) activeDrawer.getLayoutParams();
            if (lp.onScreen == 0.0f) {
                dispatchOnDrawerClosed(activeDrawer);
            } else if (lp.onScreen == TOUCH_SLOP_SENSITIVITY) {
                dispatchOnDrawerOpened(activeDrawer);
            }
        }
        if (state != this.mDrawerState) {
            this.mDrawerState = state;
            if (this.mListener != null) {
                this.mListener.onDrawerStateChanged(state);
            }
        }
    }

    void dispatchOnDrawerClosed(android.view.View drawerView) {
        android.support.v4.widget.DrawerLayout.LayoutParams lp = (android.support.v4.widget.DrawerLayout.LayoutParams) drawerView.getLayoutParams();
        if (lp.knownOpen) {
            lp.knownOpen = ALLOW_EDGE_LOCK;
            if (this.mListener != null) {
                this.mListener.onDrawerClosed(drawerView);
            }
            sendAccessibilityEvent(32);
        }
    }

    void dispatchOnDrawerOpened(android.view.View drawerView) {
        android.support.v4.widget.DrawerLayout.LayoutParams lp = (android.support.v4.widget.DrawerLayout.LayoutParams) drawerView.getLayoutParams();
        if (!lp.knownOpen) {
            lp.knownOpen = true;
            if (this.mListener != null) {
                this.mListener.onDrawerOpened(drawerView);
            }
            drawerView.sendAccessibilityEvent(32);
        }
    }

    void dispatchOnDrawerSlide(android.view.View drawerView, float slideOffset) {
        if (this.mListener != null) {
            this.mListener.onDrawerSlide(drawerView, slideOffset);
        }
    }

    void setDrawerViewOffset(android.view.View drawerView, float slideOffset) {
        android.support.v4.widget.DrawerLayout.LayoutParams lp = (android.support.v4.widget.DrawerLayout.LayoutParams) drawerView.getLayoutParams();
        if (slideOffset != lp.onScreen) {
            lp.onScreen = slideOffset;
            dispatchOnDrawerSlide(drawerView, slideOffset);
        }
    }

    float getDrawerViewOffset(android.view.View drawerView) {
        return ((android.support.v4.widget.DrawerLayout.LayoutParams) drawerView.getLayoutParams()).onScreen;
    }

    int getDrawerViewAbsoluteGravity(android.view.View drawerView) {
        int gravity = ((android.support.v4.widget.DrawerLayout.LayoutParams) drawerView.getLayoutParams()).gravity;
        return android.support.v4.view.GravityCompat.getAbsoluteGravity(gravity, android.support.v4.view.ViewCompat.getLayoutDirection(this));
    }

    boolean checkDrawerViewAbsoluteGravity(android.view.View drawerView, int checkFor) {
        int absGravity = getDrawerViewAbsoluteGravity(drawerView);
        if ((absGravity & checkFor) == checkFor) {
            return true;
        }
        return ALLOW_EDGE_LOCK;
    }

    android.view.View findOpenDrawer() {
        int childCount = getChildCount();
        for (int i = 0; i < childCount; i++) {
            android.view.View child = getChildAt(i);
            if (((android.support.v4.widget.DrawerLayout.LayoutParams) child.getLayoutParams()).knownOpen) {
                return child;
            }
        }
        return null;
    }

    void moveDrawerToOffset(android.view.View drawerView, float slideOffset) {
        float oldOffset = getDrawerViewOffset(drawerView);
        int width = drawerView.getWidth();
        int oldPos = (int) (width * oldOffset);
        int newPos = (int) (width * slideOffset);
        int dx = newPos - oldPos;
        if (!checkDrawerViewAbsoluteGravity(drawerView, 3)) {
            dx = -dx;
        }
        drawerView.offsetLeftAndRight(dx);
        setDrawerViewOffset(drawerView, slideOffset);
    }

    android.view.View findDrawerWithGravity(int gravity) {
        int absHorizGravity = android.support.v4.view.GravityCompat.getAbsoluteGravity(gravity, android.support.v4.view.ViewCompat.getLayoutDirection(this)) & 7;
        int childCount = getChildCount();
        for (int i = 0; i < childCount; i++) {
            android.view.View child = getChildAt(i);
            int childAbsGravity = getDrawerViewAbsoluteGravity(child);
            if ((childAbsGravity & 7) == absHorizGravity) {
                return child;
            }
        }
        return null;
    }

    static java.lang.String gravityToString(int gravity) {
        if ((gravity & 3) == 3) {
            return "LEFT";
        }
        if ((gravity & 5) == 5) {
            return "RIGHT";
        }
        return java.lang.Integer.toHexString(gravity);
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        this.mFirstLayout = true;
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        this.mFirstLayout = true;
    }

    @Override // android.view.View
    protected void onMeasure(int widthMeasureSpec, int heightMeasureSpec) {
        int widthMode = android.view.View.MeasureSpec.getMode(widthMeasureSpec);
        int heightMode = android.view.View.MeasureSpec.getMode(heightMeasureSpec);
        int widthSize = android.view.View.MeasureSpec.getSize(widthMeasureSpec);
        int heightSize = android.view.View.MeasureSpec.getSize(heightMeasureSpec);
        if (widthMode != 1073741824 || heightMode != 1073741824) {
            if (isInEditMode()) {
                if (widthMode != Integer.MIN_VALUE && widthMode == 0) {
                    widthSize = 300;
                }
                if (heightMode != Integer.MIN_VALUE && heightMode == 0) {
                    heightSize = 300;
                }
            } else {
                throw new java.lang.IllegalArgumentException("DrawerLayout must be measured with MeasureSpec.EXACTLY.");
            }
        }
        setMeasuredDimension(widthSize, heightSize);
        int childCount = getChildCount();
        for (int i = 0; i < childCount; i++) {
            android.view.View child = getChildAt(i);
            if (child.getVisibility() != 8) {
                android.support.v4.widget.DrawerLayout.LayoutParams lp = (android.support.v4.widget.DrawerLayout.LayoutParams) child.getLayoutParams();
                if (isContentView(child)) {
                    int contentWidthSpec = android.view.View.MeasureSpec.makeMeasureSpec((widthSize - lp.leftMargin) - lp.rightMargin, 1073741824);
                    int contentHeightSpec = android.view.View.MeasureSpec.makeMeasureSpec((heightSize - lp.topMargin) - lp.bottomMargin, 1073741824);
                    child.measure(contentWidthSpec, contentHeightSpec);
                } else if (isDrawerView(child)) {
                    int childGravity = getDrawerViewAbsoluteGravity(child) & 7;
                    if ((0 & childGravity) != 0) {
                        throw new java.lang.IllegalStateException("Child drawer has absolute gravity " + gravityToString(childGravity) + " but this " + TAG + " already has a drawer view along that edge");
                    }
                    int drawerWidthSpec = getChildMeasureSpec(widthMeasureSpec, this.mMinDrawerMargin + lp.leftMargin + lp.rightMargin, lp.width);
                    int drawerHeightSpec = getChildMeasureSpec(heightMeasureSpec, lp.topMargin + lp.bottomMargin, lp.height);
                    child.measure(drawerWidthSpec, drawerHeightSpec);
                } else {
                    throw new java.lang.IllegalStateException("Child " + child + " at index " + i + " does not have a valid layout_gravity - must be Gravity.LEFT, Gravity.RIGHT or Gravity.NO_GRAVITY");
                }
            }
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onLayout(boolean changed, int l, int t, int r, int b) {
        int childLeft;
        float newOffset;
        this.mInLayout = true;
        int width = r - l;
        int childCount = getChildCount();
        for (int i = 0; i < childCount; i++) {
            android.view.View child = getChildAt(i);
            if (child.getVisibility() != 8) {
                android.support.v4.widget.DrawerLayout.LayoutParams lp = (android.support.v4.widget.DrawerLayout.LayoutParams) child.getLayoutParams();
                if (isContentView(child)) {
                    child.layout(lp.leftMargin, lp.topMargin, lp.leftMargin + child.getMeasuredWidth(), lp.topMargin + child.getMeasuredHeight());
                } else {
                    int childWidth = child.getMeasuredWidth();
                    int childHeight = child.getMeasuredHeight();
                    if (checkDrawerViewAbsoluteGravity(child, 3)) {
                        childLeft = (-childWidth) + ((int) (childWidth * lp.onScreen));
                        newOffset = (childWidth + childLeft) / childWidth;
                    } else {
                        childLeft = width - ((int) (childWidth * lp.onScreen));
                        newOffset = (width - childLeft) / childWidth;
                    }
                    boolean changeOffset = newOffset != lp.onScreen ? true : ALLOW_EDGE_LOCK;
                    int vgrav = lp.gravity & 112;
                    switch (vgrav) {
                        case 16:
                            int height = b - t;
                            int childTop = (height - childHeight) / 2;
                            if (childTop < lp.topMargin) {
                                childTop = lp.topMargin;
                            } else if (childTop + childHeight > height - lp.bottomMargin) {
                                childTop = (height - lp.bottomMargin) - childHeight;
                            }
                            child.layout(childLeft, childTop, childLeft + childWidth, childTop + childHeight);
                            break;
                        case 80:
                            int height2 = b - t;
                            child.layout(childLeft, (height2 - lp.bottomMargin) - child.getMeasuredHeight(), childLeft + childWidth, height2 - lp.bottomMargin);
                            break;
                        default:
                            child.layout(childLeft, lp.topMargin, childLeft + childWidth, lp.topMargin + childHeight);
                            break;
                    }
                    if (changeOffset) {
                        setDrawerViewOffset(child, newOffset);
                    }
                    int newVisibility = lp.onScreen > 0.0f ? 0 : 4;
                    if (child.getVisibility() != newVisibility) {
                        child.setVisibility(newVisibility);
                    }
                }
            }
        }
        this.mInLayout = ALLOW_EDGE_LOCK;
        this.mFirstLayout = ALLOW_EDGE_LOCK;
    }

    @Override // android.view.View, android.view.ViewParent
    public void requestLayout() {
        if (!this.mInLayout) {
            super.requestLayout();
        }
    }

    @Override // android.view.View
    public void computeScroll() {
        int childCount = getChildCount();
        float scrimOpacity = 0.0f;
        for (int i = 0; i < childCount; i++) {
            float onscreen = ((android.support.v4.widget.DrawerLayout.LayoutParams) getChildAt(i).getLayoutParams()).onScreen;
            scrimOpacity = java.lang.Math.max(scrimOpacity, onscreen);
        }
        this.mScrimOpacity = scrimOpacity;
        if (this.mLeftDragger.continueSettling(true) | this.mRightDragger.continueSettling(true)) {
            android.support.v4.view.ViewCompat.postInvalidateOnAnimation(this);
        }
    }

    private static boolean hasOpaqueBackground(android.view.View v) {
        android.graphics.drawable.Drawable bg = v.getBackground();
        if (bg == null || bg.getOpacity() != -1) {
            return ALLOW_EDGE_LOCK;
        }
        return true;
    }

    @Override // android.view.ViewGroup
    protected boolean drawChild(android.graphics.Canvas canvas, android.view.View child, long drawingTime) {
        int height = getHeight();
        boolean drawingContent = isContentView(child);
        int clipLeft = 0;
        int clipRight = getWidth();
        int restoreCount = canvas.save();
        if (drawingContent) {
            int childCount = getChildCount();
            for (int i = 0; i < childCount; i++) {
                android.view.View v = getChildAt(i);
                if (v != child && v.getVisibility() == 0 && hasOpaqueBackground(v) && isDrawerView(v) && v.getHeight() >= height) {
                    if (checkDrawerViewAbsoluteGravity(v, 3)) {
                        int vright = v.getRight();
                        if (vright > clipLeft) {
                            clipLeft = vright;
                        }
                    } else {
                        int vleft = v.getLeft();
                        if (vleft < clipRight) {
                            clipRight = vleft;
                        }
                    }
                }
            }
            canvas.clipRect(clipLeft, 0, clipRight, getHeight());
        }
        boolean result = super.drawChild(canvas, child, drawingTime);
        canvas.restoreToCount(restoreCount);
        if (this.mScrimOpacity > 0.0f && drawingContent) {
            int baseAlpha = (this.mScrimColor & android.support.v4.view.ViewCompat.MEASURED_STATE_MASK) >>> 24;
            int imag = (int) (baseAlpha * this.mScrimOpacity);
            int color = (imag << 24) | (this.mScrimColor & android.support.v4.view.ViewCompat.MEASURED_SIZE_MASK);
            this.mScrimPaint.setColor(color);
            canvas.drawRect(clipLeft, 0.0f, clipRight, getHeight(), this.mScrimPaint);
        } else if (this.mShadowLeft != null && checkDrawerViewAbsoluteGravity(child, 3)) {
            int shadowWidth = this.mShadowLeft.getIntrinsicWidth();
            int childRight = child.getRight();
            int drawerPeekDistance = this.mLeftDragger.getEdgeSize();
            float alpha = java.lang.Math.max(0.0f, java.lang.Math.min(childRight / drawerPeekDistance, TOUCH_SLOP_SENSITIVITY));
            this.mShadowLeft.setBounds(childRight, child.getTop(), childRight + shadowWidth, child.getBottom());
            this.mShadowLeft.setAlpha((int) (255.0f * alpha));
            this.mShadowLeft.draw(canvas);
        } else if (this.mShadowRight != null && checkDrawerViewAbsoluteGravity(child, 5)) {
            int shadowWidth2 = this.mShadowRight.getIntrinsicWidth();
            int childLeft = child.getLeft();
            int showing = getWidth() - childLeft;
            int drawerPeekDistance2 = this.mRightDragger.getEdgeSize();
            float alpha2 = java.lang.Math.max(0.0f, java.lang.Math.min(showing / drawerPeekDistance2, TOUCH_SLOP_SENSITIVITY));
            this.mShadowRight.setBounds(childLeft - shadowWidth2, child.getTop(), childLeft, child.getBottom());
            this.mShadowRight.setAlpha((int) (255.0f * alpha2));
            this.mShadowRight.draw(canvas);
        }
        return result;
    }

    boolean isContentView(android.view.View child) {
        if (((android.support.v4.widget.DrawerLayout.LayoutParams) child.getLayoutParams()).gravity == 0) {
            return true;
        }
        return ALLOW_EDGE_LOCK;
    }

    boolean isDrawerView(android.view.View child) {
        int gravity = ((android.support.v4.widget.DrawerLayout.LayoutParams) child.getLayoutParams()).gravity;
        int absGravity = android.support.v4.view.GravityCompat.getAbsoluteGravity(gravity, android.support.v4.view.ViewCompat.getLayoutDirection(child));
        if ((absGravity & 7) != 0) {
            return true;
        }
        return ALLOW_EDGE_LOCK;
    }

    @Override // android.view.ViewGroup
    public boolean onInterceptTouchEvent(android.view.MotionEvent ev) {
        int action = android.support.v4.view.MotionEventCompat.getActionMasked(ev);
        boolean interceptForDrag = this.mLeftDragger.shouldInterceptTouchEvent(ev) | this.mRightDragger.shouldInterceptTouchEvent(ev);
        boolean interceptForTap = ALLOW_EDGE_LOCK;
        switch (action) {
            case 0:
                float x = ev.getX();
                float y = ev.getY();
                this.mInitialMotionX = x;
                this.mInitialMotionY = y;
                if (this.mScrimOpacity > 0.0f && isContentView(this.mLeftDragger.findTopChildUnder((int) x, (int) y))) {
                    interceptForTap = true;
                }
                this.mDisallowInterceptRequested = ALLOW_EDGE_LOCK;
                this.mChildrenCanceledTouch = ALLOW_EDGE_LOCK;
                break;
            case 1:
            case 3:
                closeDrawers(true);
                this.mDisallowInterceptRequested = ALLOW_EDGE_LOCK;
                this.mChildrenCanceledTouch = ALLOW_EDGE_LOCK;
                break;
            case 2:
                if (this.mLeftDragger.checkTouchSlop(3)) {
                    this.mLeftCallback.removeCallbacks();
                    this.mRightCallback.removeCallbacks();
                    break;
                }
                break;
        }
        if (interceptForDrag || interceptForTap || hasPeekingDrawer() || this.mChildrenCanceledTouch) {
            return true;
        }
        return ALLOW_EDGE_LOCK;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    @Override // android.view.View
    public boolean onTouchEvent(android.view.MotionEvent ev) {
        android.view.View openDrawer;
        this.mLeftDragger.processTouchEvent(ev);
        this.mRightDragger.processTouchEvent(ev);
        int action = ev.getAction();
        switch (action & android.support.v4.view.MotionEventCompat.ACTION_MASK) {
            case 0:
                float x = ev.getX();
                float y = ev.getY();
                this.mInitialMotionX = x;
                this.mInitialMotionY = y;
                this.mDisallowInterceptRequested = ALLOW_EDGE_LOCK;
                this.mChildrenCanceledTouch = ALLOW_EDGE_LOCK;
                return true;
            case 1:
                float x2 = ev.getX();
                float y2 = ev.getY();
                boolean peekingOnly = true;
                android.view.View touchedView = this.mLeftDragger.findTopChildUnder((int) x2, (int) y2);
                if (touchedView != null && isContentView(touchedView)) {
                    float dx = x2 - this.mInitialMotionX;
                    float dy = y2 - this.mInitialMotionY;
                    int slop = this.mLeftDragger.getTouchSlop();
                    if ((dx * dx) + (dy * dy) < slop * slop && (openDrawer = findOpenDrawer()) != null) {
                        peekingOnly = getDrawerLockMode(openDrawer) == 2 ? true : ALLOW_EDGE_LOCK;
                    }
                }
                closeDrawers(peekingOnly);
                this.mDisallowInterceptRequested = ALLOW_EDGE_LOCK;
                return true;
            case 2:
            default:
                return true;
            case 3:
                closeDrawers(true);
                this.mDisallowInterceptRequested = ALLOW_EDGE_LOCK;
                this.mChildrenCanceledTouch = ALLOW_EDGE_LOCK;
                return true;
        }
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public void requestDisallowInterceptTouchEvent(boolean disallowIntercept) {
        super.requestDisallowInterceptTouchEvent(disallowIntercept);
        this.mDisallowInterceptRequested = disallowIntercept;
        if (disallowIntercept) {
            closeDrawers(true);
        }
    }

    public void closeDrawers() {
        closeDrawers(ALLOW_EDGE_LOCK);
    }

    void closeDrawers(boolean peekingOnly) {
        boolean needsInvalidate = ALLOW_EDGE_LOCK;
        int childCount = getChildCount();
        for (int i = 0; i < childCount; i++) {
            android.view.View child = getChildAt(i);
            android.support.v4.widget.DrawerLayout.LayoutParams lp = (android.support.v4.widget.DrawerLayout.LayoutParams) child.getLayoutParams();
            if (isDrawerView(child) && (!peekingOnly || lp.isPeeking)) {
                int childWidth = child.getWidth();
                if (checkDrawerViewAbsoluteGravity(child, 3)) {
                    needsInvalidate |= this.mLeftDragger.smoothSlideViewTo(child, -childWidth, child.getTop());
                } else {
                    needsInvalidate |= this.mRightDragger.smoothSlideViewTo(child, getWidth(), child.getTop());
                }
                lp.isPeeking = ALLOW_EDGE_LOCK;
            }
        }
        this.mLeftCallback.removeCallbacks();
        this.mRightCallback.removeCallbacks();
        if (needsInvalidate) {
            invalidate();
        }
    }

    public void openDrawer(android.view.View drawerView) {
        if (!isDrawerView(drawerView)) {
            throw new java.lang.IllegalArgumentException("View " + drawerView + " is not a sliding drawer");
        }
        if (this.mFirstLayout) {
            android.support.v4.widget.DrawerLayout.LayoutParams lp = (android.support.v4.widget.DrawerLayout.LayoutParams) drawerView.getLayoutParams();
            lp.onScreen = TOUCH_SLOP_SENSITIVITY;
            lp.knownOpen = true;
        } else if (checkDrawerViewAbsoluteGravity(drawerView, 3)) {
            this.mLeftDragger.smoothSlideViewTo(drawerView, 0, drawerView.getTop());
        } else {
            this.mRightDragger.smoothSlideViewTo(drawerView, getWidth() - drawerView.getWidth(), drawerView.getTop());
        }
        invalidate();
    }

    public void openDrawer(int gravity) {
        android.view.View drawerView = findDrawerWithGravity(gravity);
        if (drawerView == null) {
            throw new java.lang.IllegalArgumentException("No drawer view found with gravity " + gravityToString(gravity));
        }
        openDrawer(drawerView);
    }

    public void closeDrawer(android.view.View drawerView) {
        if (!isDrawerView(drawerView)) {
            throw new java.lang.IllegalArgumentException("View " + drawerView + " is not a sliding drawer");
        }
        if (this.mFirstLayout) {
            android.support.v4.widget.DrawerLayout.LayoutParams lp = (android.support.v4.widget.DrawerLayout.LayoutParams) drawerView.getLayoutParams();
            lp.onScreen = 0.0f;
            lp.knownOpen = ALLOW_EDGE_LOCK;
        } else if (checkDrawerViewAbsoluteGravity(drawerView, 3)) {
            this.mLeftDragger.smoothSlideViewTo(drawerView, -drawerView.getWidth(), drawerView.getTop());
        } else {
            this.mRightDragger.smoothSlideViewTo(drawerView, getWidth(), drawerView.getTop());
        }
        invalidate();
    }

    public void closeDrawer(int gravity) {
        android.view.View drawerView = findDrawerWithGravity(gravity);
        if (drawerView == null) {
            throw new java.lang.IllegalArgumentException("No drawer view found with gravity " + gravityToString(gravity));
        }
        closeDrawer(drawerView);
    }

    public boolean isDrawerOpen(android.view.View drawer) {
        if (!isDrawerView(drawer)) {
            throw new java.lang.IllegalArgumentException("View " + drawer + " is not a drawer");
        }
        return ((android.support.v4.widget.DrawerLayout.LayoutParams) drawer.getLayoutParams()).knownOpen;
    }

    public boolean isDrawerOpen(int drawerGravity) {
        android.view.View drawerView = findDrawerWithGravity(drawerGravity);
        return drawerView != null ? isDrawerOpen(drawerView) : ALLOW_EDGE_LOCK;
    }

    public boolean isDrawerVisible(android.view.View drawer) {
        if (!isDrawerView(drawer)) {
            throw new java.lang.IllegalArgumentException("View " + drawer + " is not a drawer");
        }
        if (((android.support.v4.widget.DrawerLayout.LayoutParams) drawer.getLayoutParams()).onScreen > 0.0f) {
            return true;
        }
        return ALLOW_EDGE_LOCK;
    }

    public boolean isDrawerVisible(int drawerGravity) {
        android.view.View drawerView = findDrawerWithGravity(drawerGravity);
        return drawerView != null ? isDrawerVisible(drawerView) : ALLOW_EDGE_LOCK;
    }

    private boolean hasPeekingDrawer() {
        int childCount = getChildCount();
        for (int i = 0; i < childCount; i++) {
            android.support.v4.widget.DrawerLayout.LayoutParams lp = (android.support.v4.widget.DrawerLayout.LayoutParams) getChildAt(i).getLayoutParams();
            if (lp.isPeeking) {
                return true;
            }
        }
        return ALLOW_EDGE_LOCK;
    }

    @Override // android.view.ViewGroup
    protected android.view.ViewGroup.LayoutParams generateDefaultLayoutParams() {
        return new android.support.v4.widget.DrawerLayout.LayoutParams(-1, -1);
    }

    @Override // android.view.ViewGroup
    protected android.view.ViewGroup.LayoutParams generateLayoutParams(android.view.ViewGroup.LayoutParams p) {
        return p instanceof android.support.v4.widget.DrawerLayout.LayoutParams ? new android.support.v4.widget.DrawerLayout.LayoutParams((android.support.v4.widget.DrawerLayout.LayoutParams) p) : p instanceof android.view.ViewGroup.MarginLayoutParams ? new android.support.v4.widget.DrawerLayout.LayoutParams((android.view.ViewGroup.MarginLayoutParams) p) : new android.support.v4.widget.DrawerLayout.LayoutParams(p);
    }

    @Override // android.view.ViewGroup
    protected boolean checkLayoutParams(android.view.ViewGroup.LayoutParams p) {
        if ((p instanceof android.support.v4.widget.DrawerLayout.LayoutParams) && super.checkLayoutParams(p)) {
            return true;
        }
        return ALLOW_EDGE_LOCK;
    }

    @Override // android.view.ViewGroup
    public android.view.ViewGroup.LayoutParams generateLayoutParams(android.util.AttributeSet attrs) {
        return new android.support.v4.widget.DrawerLayout.LayoutParams(getContext(), attrs);
    }

    private boolean hasVisibleDrawer() {
        if (findVisibleDrawer() != null) {
            return true;
        }
        return ALLOW_EDGE_LOCK;
    }

    private android.view.View findVisibleDrawer() {
        int childCount = getChildCount();
        for (int i = 0; i < childCount; i++) {
            android.view.View child = getChildAt(i);
            if (isDrawerView(child) && isDrawerVisible(child)) {
                return child;
            }
        }
        return null;
    }

    void cancelChildViewTouch() {
        if (!this.mChildrenCanceledTouch) {
            long now = android.os.SystemClock.uptimeMillis();
            android.view.MotionEvent cancelEvent = android.view.MotionEvent.obtain(now, now, 3, 0.0f, 0.0f, 0);
            int childCount = getChildCount();
            for (int i = 0; i < childCount; i++) {
                getChildAt(i).dispatchTouchEvent(cancelEvent);
            }
            cancelEvent.recycle();
            this.mChildrenCanceledTouch = true;
        }
    }

    @Override // android.view.View, android.view.KeyEvent.Callback
    public boolean onKeyDown(int keyCode, android.view.KeyEvent event) {
        if (keyCode != 4 || !hasVisibleDrawer()) {
            return super.onKeyDown(keyCode, event);
        }
        android.support.v4.view.KeyEventCompat.startTracking(event);
        return true;
    }

    @Override // android.view.View, android.view.KeyEvent.Callback
    public boolean onKeyUp(int keyCode, android.view.KeyEvent event) {
        if (keyCode == 4) {
            android.view.View visibleDrawer = findVisibleDrawer();
            if (visibleDrawer != null && getDrawerLockMode(visibleDrawer) == 0) {
                closeDrawers();
            }
            if (visibleDrawer != null) {
                return true;
            }
            return ALLOW_EDGE_LOCK;
        }
        return super.onKeyUp(keyCode, event);
    }

    @Override // android.view.View
    protected void onRestoreInstanceState(android.os.Parcelable state) {
        android.view.View toOpen;
        android.support.v4.widget.DrawerLayout.SavedState ss = (android.support.v4.widget.DrawerLayout.SavedState) state;
        super.onRestoreInstanceState(ss.getSuperState());
        if (ss.openDrawerGravity != 0 && (toOpen = findDrawerWithGravity(ss.openDrawerGravity)) != null) {
            openDrawer(toOpen);
        }
        setDrawerLockMode(ss.lockModeLeft, 3);
        setDrawerLockMode(ss.lockModeRight, 5);
    }

    @Override // android.view.View
    protected android.os.Parcelable onSaveInstanceState() {
        android.os.Parcelable superState = super.onSaveInstanceState();
        android.support.v4.widget.DrawerLayout.SavedState ss = new android.support.v4.widget.DrawerLayout.SavedState(superState);
        int childCount = getChildCount();
        int i = 0;
        while (true) {
            if (i >= childCount) {
                break;
            }
            android.view.View child = getChildAt(i);
            if (isDrawerView(child)) {
                android.support.v4.widget.DrawerLayout.LayoutParams lp = (android.support.v4.widget.DrawerLayout.LayoutParams) child.getLayoutParams();
                if (lp.knownOpen) {
                    ss.openDrawerGravity = lp.gravity;
                    break;
                }
            }
            i++;
        }
        ss.lockModeLeft = this.mLockModeLeft;
        ss.lockModeRight = this.mLockModeRight;
        return ss;
    }

    protected static class SavedState extends android.view.View.BaseSavedState {
        public static final android.os.Parcelable.Creator<android.support.v4.widget.DrawerLayout.SavedState> CREATOR = new android.os.Parcelable.Creator<android.support.v4.widget.DrawerLayout.SavedState>() { // from class: android.support.v4.widget.DrawerLayout.SavedState.1
            /* JADX WARN: Can't rename method to resolve collision */
            @Override // android.os.Parcelable.Creator
            public android.support.v4.widget.DrawerLayout.SavedState createFromParcel(android.os.Parcel source) {
                return new android.support.v4.widget.DrawerLayout.SavedState(source);
            }

            /* JADX WARN: Can't rename method to resolve collision */
            @Override // android.os.Parcelable.Creator
            public android.support.v4.widget.DrawerLayout.SavedState[] newArray(int size) {
                return new android.support.v4.widget.DrawerLayout.SavedState[size];
            }
        };
        int lockModeLeft;
        int lockModeRight;
        int openDrawerGravity;

        public SavedState(android.os.Parcel in) {
            super(in);
            this.openDrawerGravity = 0;
            this.lockModeLeft = 0;
            this.lockModeRight = 0;
            this.openDrawerGravity = in.readInt();
        }

        public SavedState(android.os.Parcelable superState) {
            super(superState);
            this.openDrawerGravity = 0;
            this.lockModeLeft = 0;
            this.lockModeRight = 0;
        }

        @Override // android.view.View.BaseSavedState, android.view.AbsSavedState, android.os.Parcelable
        public void writeToParcel(android.os.Parcel dest, int flags) {
            super.writeToParcel(dest, flags);
            dest.writeInt(this.openDrawerGravity);
        }
    }

    private class ViewDragCallback extends android.support.v4.widget.ViewDragHelper.Callback {
        private final int mAbsGravity;
        private android.support.v4.widget.ViewDragHelper mDragger;
        private final java.lang.Runnable mPeekRunnable = new java.lang.Runnable() { // from class: android.support.v4.widget.DrawerLayout.ViewDragCallback.1
            @Override // java.lang.Runnable
            public void run() {
                android.support.v4.widget.DrawerLayout.ViewDragCallback.this.peekDrawer();
            }
        };

        public ViewDragCallback(int gravity) {
            this.mAbsGravity = gravity;
        }

        public void setDragger(android.support.v4.widget.ViewDragHelper dragger) {
            this.mDragger = dragger;
        }

        public void removeCallbacks() {
            android.support.v4.widget.DrawerLayout.this.removeCallbacks(this.mPeekRunnable);
        }

        @Override // android.support.v4.widget.ViewDragHelper.Callback
        public boolean tryCaptureView(android.view.View child, int pointerId) {
            if (android.support.v4.widget.DrawerLayout.this.isDrawerView(child) && android.support.v4.widget.DrawerLayout.this.checkDrawerViewAbsoluteGravity(child, this.mAbsGravity) && android.support.v4.widget.DrawerLayout.this.getDrawerLockMode(child) == 0) {
                return true;
            }
            return android.support.v4.widget.DrawerLayout.ALLOW_EDGE_LOCK;
        }

        @Override // android.support.v4.widget.ViewDragHelper.Callback
        public void onViewDragStateChanged(int state) {
            android.support.v4.widget.DrawerLayout.this.updateDrawerState(this.mAbsGravity, state, this.mDragger.getCapturedView());
        }

        @Override // android.support.v4.widget.ViewDragHelper.Callback
        public void onViewPositionChanged(android.view.View changedView, int left, int top, int dx, int dy) {
            float offset;
            int childWidth = changedView.getWidth();
            if (android.support.v4.widget.DrawerLayout.this.checkDrawerViewAbsoluteGravity(changedView, 3)) {
                offset = (childWidth + left) / childWidth;
            } else {
                int width = android.support.v4.widget.DrawerLayout.this.getWidth();
                offset = (width - left) / childWidth;
            }
            android.support.v4.widget.DrawerLayout.this.setDrawerViewOffset(changedView, offset);
            changedView.setVisibility(offset == 0.0f ? 4 : 0);
            android.support.v4.widget.DrawerLayout.this.invalidate();
        }

        @Override // android.support.v4.widget.ViewDragHelper.Callback
        public void onViewCaptured(android.view.View capturedChild, int activePointerId) {
            android.support.v4.widget.DrawerLayout.LayoutParams lp = (android.support.v4.widget.DrawerLayout.LayoutParams) capturedChild.getLayoutParams();
            lp.isPeeking = android.support.v4.widget.DrawerLayout.ALLOW_EDGE_LOCK;
            closeOtherDrawer();
        }

        private void closeOtherDrawer() {
            int otherGrav = this.mAbsGravity == 3 ? 5 : 3;
            android.view.View toClose = android.support.v4.widget.DrawerLayout.this.findDrawerWithGravity(otherGrav);
            if (toClose != null) {
                android.support.v4.widget.DrawerLayout.this.closeDrawer(toClose);
            }
        }

        @Override // android.support.v4.widget.ViewDragHelper.Callback
        public void onViewReleased(android.view.View releasedChild, float xvel, float yvel) {
            int left;
            float offset = android.support.v4.widget.DrawerLayout.this.getDrawerViewOffset(releasedChild);
            int childWidth = releasedChild.getWidth();
            if (android.support.v4.widget.DrawerLayout.this.checkDrawerViewAbsoluteGravity(releasedChild, 3)) {
                left = (xvel > 0.0f || (xvel == 0.0f && offset > 0.5f)) ? 0 : -childWidth;
            } else {
                int width = android.support.v4.widget.DrawerLayout.this.getWidth();
                left = (xvel < 0.0f || (xvel == 0.0f && offset > 0.5f)) ? width - childWidth : width;
            }
            this.mDragger.settleCapturedViewAt(left, releasedChild.getTop());
            android.support.v4.widget.DrawerLayout.this.invalidate();
        }

        @Override // android.support.v4.widget.ViewDragHelper.Callback
        public void onEdgeTouched(int edgeFlags, int pointerId) {
            android.support.v4.widget.DrawerLayout.this.postDelayed(this.mPeekRunnable, 160L);
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void peekDrawer() {
            android.view.View toCapture;
            int childLeft;
            int peekDistance = this.mDragger.getEdgeSize();
            boolean leftEdge = this.mAbsGravity == 3;
            if (leftEdge) {
                toCapture = android.support.v4.widget.DrawerLayout.this.findDrawerWithGravity(3);
                childLeft = (toCapture != null ? -toCapture.getWidth() : 0) + peekDistance;
            } else {
                toCapture = android.support.v4.widget.DrawerLayout.this.findDrawerWithGravity(5);
                childLeft = android.support.v4.widget.DrawerLayout.this.getWidth() - peekDistance;
            }
            if (toCapture != null) {
                if (((leftEdge && toCapture.getLeft() < childLeft) || (!leftEdge && toCapture.getLeft() > childLeft)) && android.support.v4.widget.DrawerLayout.this.getDrawerLockMode(toCapture) == 0) {
                    android.support.v4.widget.DrawerLayout.LayoutParams lp = (android.support.v4.widget.DrawerLayout.LayoutParams) toCapture.getLayoutParams();
                    this.mDragger.smoothSlideViewTo(toCapture, childLeft, toCapture.getTop());
                    lp.isPeeking = true;
                    android.support.v4.widget.DrawerLayout.this.invalidate();
                    closeOtherDrawer();
                    android.support.v4.widget.DrawerLayout.this.cancelChildViewTouch();
                }
            }
        }

        @Override // android.support.v4.widget.ViewDragHelper.Callback
        public boolean onEdgeLock(int edgeFlags) {
            return android.support.v4.widget.DrawerLayout.ALLOW_EDGE_LOCK;
        }

        @Override // android.support.v4.widget.ViewDragHelper.Callback
        public void onEdgeDragStarted(int edgeFlags, int pointerId) {
            android.view.View toCapture;
            if ((edgeFlags & 1) == 1) {
                toCapture = android.support.v4.widget.DrawerLayout.this.findDrawerWithGravity(3);
            } else {
                toCapture = android.support.v4.widget.DrawerLayout.this.findDrawerWithGravity(5);
            }
            if (toCapture != null && android.support.v4.widget.DrawerLayout.this.getDrawerLockMode(toCapture) == 0) {
                this.mDragger.captureChildView(toCapture, pointerId);
            }
        }

        @Override // android.support.v4.widget.ViewDragHelper.Callback
        public int getViewHorizontalDragRange(android.view.View child) {
            return child.getWidth();
        }

        @Override // android.support.v4.widget.ViewDragHelper.Callback
        public int clampViewPositionHorizontal(android.view.View child, int left, int dx) {
            if (android.support.v4.widget.DrawerLayout.this.checkDrawerViewAbsoluteGravity(child, 3)) {
                return java.lang.Math.max(-child.getWidth(), java.lang.Math.min(left, 0));
            }
            int width = android.support.v4.widget.DrawerLayout.this.getWidth();
            return java.lang.Math.max(width - child.getWidth(), java.lang.Math.min(left, width));
        }

        @Override // android.support.v4.widget.ViewDragHelper.Callback
        public int clampViewPositionVertical(android.view.View child, int top, int dy) {
            return child.getTop();
        }
    }

    public static class LayoutParams extends android.view.ViewGroup.MarginLayoutParams {
        public int gravity;
        boolean isPeeking;
        boolean knownOpen;
        float onScreen;

        public LayoutParams(android.content.Context c, android.util.AttributeSet attrs) {
            super(c, attrs);
            this.gravity = 0;
            android.content.res.TypedArray a = c.obtainStyledAttributes(attrs, android.support.v4.widget.DrawerLayout.LAYOUT_ATTRS);
            this.gravity = a.getInt(0, 0);
            a.recycle();
        }

        public LayoutParams(int width, int height) {
            super(width, height);
            this.gravity = 0;
        }

        public LayoutParams(int width, int height, int gravity) {
            this(width, height);
            this.gravity = gravity;
        }

        public LayoutParams(android.support.v4.widget.DrawerLayout.LayoutParams source) {
            super((android.view.ViewGroup.MarginLayoutParams) source);
            this.gravity = 0;
            this.gravity = source.gravity;
        }

        public LayoutParams(android.view.ViewGroup.LayoutParams source) {
            super(source);
            this.gravity = 0;
        }

        public LayoutParams(android.view.ViewGroup.MarginLayoutParams source) {
            super(source);
            this.gravity = 0;
        }
    }

    class AccessibilityDelegate extends android.support.v4.view.AccessibilityDelegateCompat {
        private final android.graphics.Rect mTmpRect = new android.graphics.Rect();

        AccessibilityDelegate() {
        }

        @Override // android.support.v4.view.AccessibilityDelegateCompat
        public void onInitializeAccessibilityNodeInfo(android.view.View host, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat info) {
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat superNode = android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.obtain(info);
            super.onInitializeAccessibilityNodeInfo(host, superNode);
            info.setSource(host);
            java.lang.Object parentForAccessibility = android.support.v4.view.ViewCompat.getParentForAccessibility(host);
            if (parentForAccessibility instanceof android.view.View) {
                info.setParent((android.view.View) parentForAccessibility);
            }
            copyNodeInfoNoChildren(info, superNode);
            superNode.recycle();
            addChildrenForAccessibility(info, (android.view.ViewGroup) host);
        }

        private void addChildrenForAccessibility(android.support.v4.view.accessibility.AccessibilityNodeInfoCompat info, android.view.ViewGroup v) {
            int childCount = v.getChildCount();
            for (int i = 0; i < childCount; i++) {
                android.view.View child = v.getChildAt(i);
                if (!filter(child)) {
                    int importance = android.support.v4.view.ViewCompat.getImportantForAccessibility(child);
                    switch (importance) {
                        case 0:
                            android.support.v4.view.ViewCompat.setImportantForAccessibility(child, 1);
                            break;
                        case 2:
                            if (child instanceof android.view.ViewGroup) {
                                addChildrenForAccessibility(info, (android.view.ViewGroup) child);
                                break;
                            } else {
                                continue;
                            }
                    }
                    info.addChild(child);
                }
            }
        }

        @Override // android.support.v4.view.AccessibilityDelegateCompat
        public boolean onRequestSendAccessibilityEvent(android.view.ViewGroup host, android.view.View child, android.view.accessibility.AccessibilityEvent event) {
            return !filter(child) ? super.onRequestSendAccessibilityEvent(host, child, event) : android.support.v4.widget.DrawerLayout.ALLOW_EDGE_LOCK;
        }

        public boolean filter(android.view.View child) {
            android.view.View openDrawer = android.support.v4.widget.DrawerLayout.this.findOpenDrawer();
            if (openDrawer == null || openDrawer == child) {
                return android.support.v4.widget.DrawerLayout.ALLOW_EDGE_LOCK;
            }
            return true;
        }

        private void copyNodeInfoNoChildren(android.support.v4.view.accessibility.AccessibilityNodeInfoCompat dest, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat src) {
            android.graphics.Rect rect = this.mTmpRect;
            src.getBoundsInParent(rect);
            dest.setBoundsInParent(rect);
            src.getBoundsInScreen(rect);
            dest.setBoundsInScreen(rect);
            dest.setVisibleToUser(src.isVisibleToUser());
            dest.setPackageName(src.getPackageName());
            dest.setClassName(src.getClassName());
            dest.setContentDescription(src.getContentDescription());
            dest.setEnabled(src.isEnabled());
            dest.setClickable(src.isClickable());
            dest.setFocusable(src.isFocusable());
            dest.setFocused(src.isFocused());
            dest.setAccessibilityFocused(src.isAccessibilityFocused());
            dest.setSelected(src.isSelected());
            dest.setLongClickable(src.isLongClickable());
            dest.addAction(src.getActions());
        }
    }
}
