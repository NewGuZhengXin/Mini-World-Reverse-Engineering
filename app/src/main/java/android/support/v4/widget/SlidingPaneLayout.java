package android.support.v4.widget;

/* loaded from: classes.dex */
public class SlidingPaneLayout extends android.view.ViewGroup {
    private static final int DEFAULT_FADE_COLOR = -858993460;
    private static final int DEFAULT_OVERHANG_SIZE = 32;
    static final android.support.v4.widget.SlidingPaneLayout.SlidingPanelLayoutImpl IMPL;
    private static final int MIN_FLING_VELOCITY = 400;
    private static final java.lang.String TAG = "SlidingPaneLayout";
    private boolean mCanSlide;
    private int mCoveredFadeColor;
    private final android.support.v4.widget.ViewDragHelper mDragHelper;
    private boolean mFirstLayout;
    private float mInitialMotionX;
    private float mInitialMotionY;
    private boolean mIsUnableToDrag;
    private final int mOverhangSize;
    private android.support.v4.widget.SlidingPaneLayout.PanelSlideListener mPanelSlideListener;
    private int mParallaxBy;
    private float mParallaxOffset;
    private final java.util.ArrayList<android.support.v4.widget.SlidingPaneLayout.DisableLayerRunnable> mPostedRunnables;
    private boolean mPreservedOpenState;
    private android.graphics.drawable.Drawable mShadowDrawable;
    private float mSlideOffset;
    private int mSlideRange;
    private android.view.View mSlideableView;
    private int mSliderFadeColor;
    private final android.graphics.Rect mTmpRect;

    public interface PanelSlideListener {
        void onPanelClosed(android.view.View view);

        void onPanelOpened(android.view.View view);

        void onPanelSlide(android.view.View view, float f);
    }

    interface SlidingPanelLayoutImpl {
        void invalidateChildRegion(android.support.v4.widget.SlidingPaneLayout slidingPaneLayout, android.view.View view);
    }

    static {
        int deviceVersion = android.os.Build.VERSION.SDK_INT;
        if (deviceVersion >= 17) {
            IMPL = new android.support.v4.widget.SlidingPaneLayout.SlidingPanelLayoutImplJBMR1();
        } else if (deviceVersion >= 16) {
            IMPL = new android.support.v4.widget.SlidingPaneLayout.SlidingPanelLayoutImplJB();
        } else {
            IMPL = new android.support.v4.widget.SlidingPaneLayout.SlidingPanelLayoutImplBase();
        }
    }

    public static class SimplePanelSlideListener implements android.support.v4.widget.SlidingPaneLayout.PanelSlideListener {
        @Override // android.support.v4.widget.SlidingPaneLayout.PanelSlideListener
        public void onPanelSlide(android.view.View panel, float slideOffset) {
        }

        @Override // android.support.v4.widget.SlidingPaneLayout.PanelSlideListener
        public void onPanelOpened(android.view.View panel) {
        }

        @Override // android.support.v4.widget.SlidingPaneLayout.PanelSlideListener
        public void onPanelClosed(android.view.View panel) {
        }
    }

    public SlidingPaneLayout(android.content.Context context) {
        this(context, null);
    }

    public SlidingPaneLayout(android.content.Context context, android.util.AttributeSet attrs) {
        this(context, attrs, 0);
    }

    public SlidingPaneLayout(android.content.Context context, android.util.AttributeSet attrs, int defStyle) {
        super(context, attrs, defStyle);
        this.mSliderFadeColor = DEFAULT_FADE_COLOR;
        this.mFirstLayout = true;
        this.mTmpRect = new android.graphics.Rect();
        this.mPostedRunnables = new java.util.ArrayList<>();
        float density = context.getResources().getDisplayMetrics().density;
        this.mOverhangSize = (int) ((32.0f * density) + 0.5f);
        android.view.ViewConfiguration.get(context);
        setWillNotDraw(false);
        android.support.v4.view.ViewCompat.setAccessibilityDelegate(this, new android.support.v4.widget.SlidingPaneLayout.AccessibilityDelegate());
        android.support.v4.view.ViewCompat.setImportantForAccessibility(this, 1);
        this.mDragHelper = android.support.v4.widget.ViewDragHelper.create(this, 0.5f, new android.support.v4.widget.SlidingPaneLayout.DragHelperCallback());
        this.mDragHelper.setEdgeTrackingEnabled(1);
        this.mDragHelper.setMinVelocity(400.0f * density);
    }

    public void setParallaxDistance(int parallaxBy) {
        this.mParallaxBy = parallaxBy;
        requestLayout();
    }

    public int getParallaxDistance() {
        return this.mParallaxBy;
    }

    public void setSliderFadeColor(int color) {
        this.mSliderFadeColor = color;
    }

    public int getSliderFadeColor() {
        return this.mSliderFadeColor;
    }

    public void setCoveredFadeColor(int color) {
        this.mCoveredFadeColor = color;
    }

    public int getCoveredFadeColor() {
        return this.mCoveredFadeColor;
    }

    public void setPanelSlideListener(android.support.v4.widget.SlidingPaneLayout.PanelSlideListener listener) {
        this.mPanelSlideListener = listener;
    }

    void dispatchOnPanelSlide(android.view.View panel) {
        if (this.mPanelSlideListener != null) {
            this.mPanelSlideListener.onPanelSlide(panel, this.mSlideOffset);
        }
    }

    void dispatchOnPanelOpened(android.view.View panel) {
        if (this.mPanelSlideListener != null) {
            this.mPanelSlideListener.onPanelOpened(panel);
        }
        sendAccessibilityEvent(32);
    }

    void dispatchOnPanelClosed(android.view.View panel) {
        if (this.mPanelSlideListener != null) {
            this.mPanelSlideListener.onPanelClosed(panel);
        }
        sendAccessibilityEvent(32);
    }

    void updateObscuredViewsVisibility(android.view.View panel) {
        int bottom;
        int top;
        int right;
        int left;
        int vis;
        int leftBound = getPaddingLeft();
        int rightBound = getWidth() - getPaddingRight();
        int topBound = getPaddingTop();
        int bottomBound = getHeight() - getPaddingBottom();
        if (panel != null && viewIsOpaque(panel)) {
            left = panel.getLeft();
            right = panel.getRight();
            top = panel.getTop();
            bottom = panel.getBottom();
        } else {
            bottom = 0;
            top = 0;
            right = 0;
            left = 0;
        }
        int childCount = getChildCount();
        for (int i = 0; i < childCount; i++) {
            android.view.View child = getChildAt(i);
            if (child != panel) {
                int clampedChildLeft = java.lang.Math.max(leftBound, child.getLeft());
                int clampedChildTop = java.lang.Math.max(topBound, child.getTop());
                int clampedChildRight = java.lang.Math.min(rightBound, child.getRight());
                int clampedChildBottom = java.lang.Math.min(bottomBound, child.getBottom());
                if (clampedChildLeft >= left && clampedChildTop >= top && clampedChildRight <= right && clampedChildBottom <= bottom) {
                    vis = 4;
                } else {
                    vis = 0;
                }
                child.setVisibility(vis);
            } else {
                return;
            }
        }
    }

    void setAllChildrenVisible() {
        int childCount = getChildCount();
        for (int i = 0; i < childCount; i++) {
            android.view.View child = getChildAt(i);
            if (child.getVisibility() == 4) {
                child.setVisibility(0);
            }
        }
    }

    private static boolean viewIsOpaque(android.view.View v) {
        android.graphics.drawable.Drawable bg;
        if (android.support.v4.view.ViewCompat.isOpaque(v)) {
            return true;
        }
        return android.os.Build.VERSION.SDK_INT < 18 && (bg = v.getBackground()) != null && bg.getOpacity() == -1;
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        this.mFirstLayout = true;
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        this.mFirstLayout = true;
        int count = this.mPostedRunnables.size();
        for (int i = 0; i < count; i++) {
            android.support.v4.widget.SlidingPaneLayout.DisableLayerRunnable dlr = this.mPostedRunnables.get(i);
            dlr.run();
        }
        this.mPostedRunnables.clear();
    }

    /* JADX WARN: Removed duplicated region for block: B:37:0x00dc A[PHI: r21
  0x00dc: PHI (r21v2 'weightSum' float) = (r21v1 'weightSum' float), (r21v3 'weightSum' float) binds: [B:34:0x00ca, B:36:0x00da] A[DONT_GENERATE, DONT_INLINE]] */
    @Override // android.view.View
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    protected void onMeasure(int widthMeasureSpec, int heightMeasureSpec) {
        int childHeightSpec;
        int childHeightSpec2;
        int childWidthSpec;
        int childHeightSpec3;
        int widthMode = android.view.View.MeasureSpec.getMode(widthMeasureSpec);
        int widthSize = android.view.View.MeasureSpec.getSize(widthMeasureSpec);
        int heightMode = android.view.View.MeasureSpec.getMode(heightMeasureSpec);
        int heightSize = android.view.View.MeasureSpec.getSize(heightMeasureSpec);
        if (widthMode != 1073741824) {
            if (isInEditMode()) {
                if (widthMode != Integer.MIN_VALUE && widthMode == 0) {
                    widthSize = 300;
                }
            } else {
                throw new java.lang.IllegalStateException("Width must have an exact value or MATCH_PARENT");
            }
        } else if (heightMode == 0) {
            if (isInEditMode()) {
                if (heightMode == 0) {
                    heightMode = android.support.v4.widget.ExploreByTouchHelper.INVALID_ID;
                    heightSize = 300;
                }
            } else {
                throw new java.lang.IllegalStateException("Height must not be UNSPECIFIED");
            }
        }
        int layoutHeight = 0;
        int maxLayoutHeight = -1;
        switch (heightMode) {
            case android.support.v4.widget.ExploreByTouchHelper.INVALID_ID /* -2147483648 */:
                maxLayoutHeight = (heightSize - getPaddingTop()) - getPaddingBottom();
                break;
            case 1073741824:
                maxLayoutHeight = (heightSize - getPaddingTop()) - getPaddingBottom();
                layoutHeight = maxLayoutHeight;
                break;
        }
        float weightSum = 0.0f;
        boolean canSlide = false;
        int widthRemaining = (widthSize - getPaddingLeft()) - getPaddingRight();
        int childCount = getChildCount();
        if (childCount > 2) {
            android.util.Log.e(TAG, "onMeasure: More than two child views are not supported.");
        }
        this.mSlideableView = null;
        for (int i = 0; i < childCount; i++) {
            android.view.View child = getChildAt(i);
            android.support.v4.widget.SlidingPaneLayout.LayoutParams lp = (android.support.v4.widget.SlidingPaneLayout.LayoutParams) child.getLayoutParams();
            if (child.getVisibility() == 8) {
                lp.dimWhenOffset = false;
            } else if (lp.weight > 0.0f) {
                weightSum += lp.weight;
                if (lp.width != 0) {
                    int horizontalMargin = lp.leftMargin + lp.rightMargin;
                    if (lp.width == -2) {
                        childWidthSpec = android.view.View.MeasureSpec.makeMeasureSpec(widthSize - horizontalMargin, android.support.v4.widget.ExploreByTouchHelper.INVALID_ID);
                    } else if (lp.width == -1) {
                        childWidthSpec = android.view.View.MeasureSpec.makeMeasureSpec(widthSize - horizontalMargin, 1073741824);
                    } else {
                        childWidthSpec = android.view.View.MeasureSpec.makeMeasureSpec(lp.width, 1073741824);
                    }
                    if (lp.height == -2) {
                        childHeightSpec3 = android.view.View.MeasureSpec.makeMeasureSpec(maxLayoutHeight, android.support.v4.widget.ExploreByTouchHelper.INVALID_ID);
                    } else if (lp.height == -1) {
                        childHeightSpec3 = android.view.View.MeasureSpec.makeMeasureSpec(maxLayoutHeight, 1073741824);
                    } else {
                        childHeightSpec3 = android.view.View.MeasureSpec.makeMeasureSpec(lp.height, 1073741824);
                    }
                    child.measure(childWidthSpec, childHeightSpec3);
                    int childWidth = child.getMeasuredWidth();
                    int childHeight = child.getMeasuredHeight();
                    if (heightMode == Integer.MIN_VALUE && childHeight > layoutHeight) {
                        layoutHeight = java.lang.Math.min(childHeight, maxLayoutHeight);
                    }
                    widthRemaining -= childWidth;
                    boolean z = widthRemaining < 0;
                    lp.slideable = z;
                    canSlide |= z;
                    if (lp.slideable) {
                        this.mSlideableView = child;
                    }
                }
            }
        }
        if (canSlide || weightSum > 0.0f) {
            int fixedPanelWidthLimit = widthSize - this.mOverhangSize;
            for (int i2 = 0; i2 < childCount; i2++) {
                android.view.View child2 = getChildAt(i2);
                if (child2.getVisibility() != 8) {
                    android.support.v4.widget.SlidingPaneLayout.LayoutParams lp2 = (android.support.v4.widget.SlidingPaneLayout.LayoutParams) child2.getLayoutParams();
                    if (child2.getVisibility() != 8) {
                        boolean skippedFirstPass = lp2.width == 0 && lp2.weight > 0.0f;
                        int measuredWidth = skippedFirstPass ? 0 : child2.getMeasuredWidth();
                        if (!canSlide || child2 == this.mSlideableView) {
                            if (lp2.weight > 0.0f) {
                                if (lp2.width == 0) {
                                    if (lp2.height == -2) {
                                        childHeightSpec = android.view.View.MeasureSpec.makeMeasureSpec(maxLayoutHeight, android.support.v4.widget.ExploreByTouchHelper.INVALID_ID);
                                    } else if (lp2.height == -1) {
                                        childHeightSpec = android.view.View.MeasureSpec.makeMeasureSpec(maxLayoutHeight, 1073741824);
                                    } else {
                                        childHeightSpec = android.view.View.MeasureSpec.makeMeasureSpec(lp2.height, 1073741824);
                                    }
                                } else {
                                    childHeightSpec = android.view.View.MeasureSpec.makeMeasureSpec(child2.getMeasuredHeight(), 1073741824);
                                }
                                if (canSlide) {
                                    int newWidth = widthSize - (lp2.leftMargin + lp2.rightMargin);
                                    int childWidthSpec2 = android.view.View.MeasureSpec.makeMeasureSpec(newWidth, 1073741824);
                                    if (measuredWidth != newWidth) {
                                        child2.measure(childWidthSpec2, childHeightSpec);
                                    }
                                } else {
                                    int widthToDistribute = java.lang.Math.max(0, widthRemaining);
                                    int addedWidth = (int) ((lp2.weight * widthToDistribute) / weightSum);
                                    int childWidthSpec3 = android.view.View.MeasureSpec.makeMeasureSpec(measuredWidth + addedWidth, 1073741824);
                                    child2.measure(childWidthSpec3, childHeightSpec);
                                }
                            }
                        } else if (lp2.width < 0 && (measuredWidth > fixedPanelWidthLimit || lp2.weight > 0.0f)) {
                            if (skippedFirstPass) {
                                if (lp2.height == -2) {
                                    childHeightSpec2 = android.view.View.MeasureSpec.makeMeasureSpec(maxLayoutHeight, android.support.v4.widget.ExploreByTouchHelper.INVALID_ID);
                                } else if (lp2.height == -1) {
                                    childHeightSpec2 = android.view.View.MeasureSpec.makeMeasureSpec(maxLayoutHeight, 1073741824);
                                } else {
                                    childHeightSpec2 = android.view.View.MeasureSpec.makeMeasureSpec(lp2.height, 1073741824);
                                }
                            } else {
                                childHeightSpec2 = android.view.View.MeasureSpec.makeMeasureSpec(child2.getMeasuredHeight(), 1073741824);
                            }
                            int childWidthSpec4 = android.view.View.MeasureSpec.makeMeasureSpec(fixedPanelWidthLimit, 1073741824);
                            child2.measure(childWidthSpec4, childHeightSpec2);
                        }
                    }
                }
            }
        }
        setMeasuredDimension(widthSize, layoutHeight);
        this.mCanSlide = canSlide;
        if (this.mDragHelper.getViewDragState() != 0 && !canSlide) {
            this.mDragHelper.abort();
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onLayout(boolean changed, int l, int t, int r, int b) {
        int width = r - l;
        int paddingLeft = getPaddingLeft();
        int paddingRight = getPaddingRight();
        int paddingTop = getPaddingTop();
        int childCount = getChildCount();
        int xStart = paddingLeft;
        int nextXStart = xStart;
        if (this.mFirstLayout) {
            this.mSlideOffset = (this.mCanSlide && this.mPreservedOpenState) ? 1.0f : 0.0f;
        }
        for (int i = 0; i < childCount; i++) {
            android.view.View child = getChildAt(i);
            if (child.getVisibility() != 8) {
                android.support.v4.widget.SlidingPaneLayout.LayoutParams lp = (android.support.v4.widget.SlidingPaneLayout.LayoutParams) child.getLayoutParams();
                int childWidth = child.getMeasuredWidth();
                int offset = 0;
                if (lp.slideable) {
                    int margin = lp.leftMargin + lp.rightMargin;
                    int range = (java.lang.Math.min(nextXStart, (width - paddingRight) - this.mOverhangSize) - xStart) - margin;
                    this.mSlideRange = range;
                    lp.dimWhenOffset = ((lp.leftMargin + xStart) + range) + (childWidth / 2) > width - paddingRight;
                    xStart += ((int) (range * this.mSlideOffset)) + lp.leftMargin;
                } else if (this.mCanSlide && this.mParallaxBy != 0) {
                    offset = (int) ((1.0f - this.mSlideOffset) * this.mParallaxBy);
                    xStart = nextXStart;
                } else {
                    xStart = nextXStart;
                }
                int childLeft = xStart - offset;
                int childRight = childLeft + childWidth;
                int childBottom = paddingTop + child.getMeasuredHeight();
                child.layout(childLeft, paddingTop, childRight, childBottom);
                nextXStart += child.getWidth();
            }
        }
        if (this.mFirstLayout) {
            if (this.mCanSlide) {
                if (this.mParallaxBy != 0) {
                    parallaxOtherViews(this.mSlideOffset);
                }
                if (((android.support.v4.widget.SlidingPaneLayout.LayoutParams) this.mSlideableView.getLayoutParams()).dimWhenOffset) {
                    dimChildView(this.mSlideableView, this.mSlideOffset, this.mSliderFadeColor);
                }
            } else {
                for (int i2 = 0; i2 < childCount; i2++) {
                    dimChildView(getChildAt(i2), 0.0f, this.mSliderFadeColor);
                }
            }
            updateObscuredViewsVisibility(this.mSlideableView);
        }
        this.mFirstLayout = false;
    }

    @Override // android.view.View
    protected void onSizeChanged(int w, int h, int oldw, int oldh) {
        super.onSizeChanged(w, h, oldw, oldh);
        if (w != oldw) {
            this.mFirstLayout = true;
        }
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public void requestChildFocus(android.view.View child, android.view.View focused) {
        super.requestChildFocus(child, focused);
        if (!isInTouchMode() && !this.mCanSlide) {
            this.mPreservedOpenState = child == this.mSlideableView;
        }
    }

    @Override // android.view.ViewGroup
    public boolean onInterceptTouchEvent(android.view.MotionEvent ev) {
        android.view.View secondChild;
        int action = android.support.v4.view.MotionEventCompat.getActionMasked(ev);
        if (!this.mCanSlide && action == 0 && getChildCount() > 1 && (secondChild = getChildAt(1)) != null) {
            this.mPreservedOpenState = !this.mDragHelper.isViewUnder(secondChild, (int) ev.getX(), (int) ev.getY());
        }
        if (!this.mCanSlide || (this.mIsUnableToDrag && action != 0)) {
            this.mDragHelper.cancel();
            return super.onInterceptTouchEvent(ev);
        }
        if (action == 3 || action == 1) {
            this.mDragHelper.cancel();
            return false;
        }
        boolean interceptTap = false;
        switch (action) {
            case 0:
                this.mIsUnableToDrag = false;
                float x = ev.getX();
                float y = ev.getY();
                this.mInitialMotionX = x;
                this.mInitialMotionY = y;
                if (this.mDragHelper.isViewUnder(this.mSlideableView, (int) x, (int) y) && isDimmed(this.mSlideableView)) {
                    interceptTap = true;
                    break;
                }
                break;
            case 2:
                float x2 = ev.getX();
                float y2 = ev.getY();
                float adx = java.lang.Math.abs(x2 - this.mInitialMotionX);
                float ady = java.lang.Math.abs(y2 - this.mInitialMotionY);
                int slop = this.mDragHelper.getTouchSlop();
                if (adx > slop && ady > adx) {
                    this.mDragHelper.cancel();
                    this.mIsUnableToDrag = true;
                    return false;
                }
                break;
        }
        boolean interceptForDrag = this.mDragHelper.shouldInterceptTouchEvent(ev);
        return interceptForDrag || interceptTap;
    }

    @Override // android.view.View
    public boolean onTouchEvent(android.view.MotionEvent ev) {
        if (!this.mCanSlide) {
            return super.onTouchEvent(ev);
        }
        this.mDragHelper.processTouchEvent(ev);
        int action = ev.getAction();
        switch (action & android.support.v4.view.MotionEventCompat.ACTION_MASK) {
            case 0:
                float x = ev.getX();
                float y = ev.getY();
                this.mInitialMotionX = x;
                this.mInitialMotionY = y;
                return true;
            case 1:
                if (!isDimmed(this.mSlideableView)) {
                    return true;
                }
                float x2 = ev.getX();
                float y2 = ev.getY();
                float dx = x2 - this.mInitialMotionX;
                float dy = y2 - this.mInitialMotionY;
                int slop = this.mDragHelper.getTouchSlop();
                if ((dx * dx) + (dy * dy) >= slop * slop || !this.mDragHelper.isViewUnder(this.mSlideableView, (int) x2, (int) y2)) {
                    return true;
                }
                closePane(this.mSlideableView, 0);
                return true;
            default:
                return true;
        }
    }

    private boolean closePane(android.view.View pane, int initialVelocity) {
        if (!this.mFirstLayout && !smoothSlideTo(0.0f, initialVelocity)) {
            return false;
        }
        this.mPreservedOpenState = false;
        return true;
    }

    private boolean openPane(android.view.View pane, int initialVelocity) {
        if (!this.mFirstLayout && !smoothSlideTo(1.0f, initialVelocity)) {
            return false;
        }
        this.mPreservedOpenState = true;
        return true;
    }

    @java.lang.Deprecated
    public void smoothSlideOpen() {
        openPane();
    }

    public boolean openPane() {
        return openPane(this.mSlideableView, 0);
    }

    @java.lang.Deprecated
    public void smoothSlideClosed() {
        closePane();
    }

    public boolean closePane() {
        return closePane(this.mSlideableView, 0);
    }

    public boolean isOpen() {
        return !this.mCanSlide || this.mSlideOffset == 1.0f;
    }

    @java.lang.Deprecated
    public boolean canSlide() {
        return this.mCanSlide;
    }

    public boolean isSlideable() {
        return this.mCanSlide;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void onPanelDragged(int newLeft) {
        android.support.v4.widget.SlidingPaneLayout.LayoutParams lp = (android.support.v4.widget.SlidingPaneLayout.LayoutParams) this.mSlideableView.getLayoutParams();
        int leftBound = getPaddingLeft() + lp.leftMargin;
        this.mSlideOffset = (newLeft - leftBound) / this.mSlideRange;
        if (this.mParallaxBy != 0) {
            parallaxOtherViews(this.mSlideOffset);
        }
        if (lp.dimWhenOffset) {
            dimChildView(this.mSlideableView, this.mSlideOffset, this.mSliderFadeColor);
        }
        dispatchOnPanelSlide(this.mSlideableView);
    }

    private void dimChildView(android.view.View v, float mag, int fadeColor) {
        android.support.v4.widget.SlidingPaneLayout.LayoutParams lp = (android.support.v4.widget.SlidingPaneLayout.LayoutParams) v.getLayoutParams();
        if (mag > 0.0f && fadeColor != 0) {
            int baseAlpha = ((-16777216) & fadeColor) >>> 24;
            int imag = (int) (baseAlpha * mag);
            int color = (imag << 24) | (16777215 & fadeColor);
            if (lp.dimPaint == null) {
                lp.dimPaint = new android.graphics.Paint();
            }
            lp.dimPaint.setColorFilter(new android.graphics.PorterDuffColorFilter(color, android.graphics.PorterDuff.Mode.SRC_OVER));
            if (android.support.v4.view.ViewCompat.getLayerType(v) != 2) {
                android.support.v4.view.ViewCompat.setLayerType(v, 2, lp.dimPaint);
            }
            invalidateChildRegion(v);
            return;
        }
        if (android.support.v4.view.ViewCompat.getLayerType(v) != 0) {
            if (lp.dimPaint != null) {
                lp.dimPaint.setColorFilter(null);
            }
            android.support.v4.widget.SlidingPaneLayout.DisableLayerRunnable dlr = new android.support.v4.widget.SlidingPaneLayout.DisableLayerRunnable(v);
            this.mPostedRunnables.add(dlr);
            android.support.v4.view.ViewCompat.postOnAnimation(this, dlr);
        }
    }

    @Override // android.view.ViewGroup
    protected boolean drawChild(android.graphics.Canvas canvas, android.view.View child, long drawingTime) {
        boolean result;
        android.support.v4.widget.SlidingPaneLayout.LayoutParams lp = (android.support.v4.widget.SlidingPaneLayout.LayoutParams) child.getLayoutParams();
        int save = canvas.save(); // NOTE(jadx-fix): smali calls the hidden Canvas.save(I) with flag 2 (CLIP_SAVE_FLAG); that overload is not in the public SDK, and since the matrix is never modified before restoreToCount(save), the public no-arg save() is equivalent
        if (this.mCanSlide && !lp.slideable && this.mSlideableView != null) {
            canvas.getClipBounds(this.mTmpRect);
            this.mTmpRect.right = java.lang.Math.min(this.mTmpRect.right, this.mSlideableView.getLeft());
            canvas.clipRect(this.mTmpRect);
        }
        if (android.os.Build.VERSION.SDK_INT >= 11) {
            result = super.drawChild(canvas, child, drawingTime);
        } else if (lp.dimWhenOffset && this.mSlideOffset > 0.0f) {
            if (!child.isDrawingCacheEnabled()) {
                child.setDrawingCacheEnabled(true);
            }
            android.graphics.Bitmap cache = child.getDrawingCache();
            if (cache != null) {
                canvas.drawBitmap(cache, child.getLeft(), child.getTop(), lp.dimPaint);
                result = false;
            } else {
                android.util.Log.e(TAG, "drawChild: child view " + child + " returned null drawing cache");
                result = super.drawChild(canvas, child, drawingTime);
            }
        } else {
            if (child.isDrawingCacheEnabled()) {
                child.setDrawingCacheEnabled(false);
            }
            result = super.drawChild(canvas, child, drawingTime);
        }
        canvas.restoreToCount(save);
        return result;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void invalidateChildRegion(android.view.View v) {
        IMPL.invalidateChildRegion(this, v);
    }

    boolean smoothSlideTo(float slideOffset, int velocity) {
        if (!this.mCanSlide) {
            return false;
        }
        android.support.v4.widget.SlidingPaneLayout.LayoutParams lp = (android.support.v4.widget.SlidingPaneLayout.LayoutParams) this.mSlideableView.getLayoutParams();
        int leftBound = getPaddingLeft() + lp.leftMargin;
        int x = (int) (leftBound + (this.mSlideRange * slideOffset));
        if (!this.mDragHelper.smoothSlideViewTo(this.mSlideableView, x, this.mSlideableView.getTop())) {
            return false;
        }
        setAllChildrenVisible();
        android.support.v4.view.ViewCompat.postInvalidateOnAnimation(this);
        return true;
    }

    @Override // android.view.View
    public void computeScroll() {
        if (this.mDragHelper.continueSettling(true)) {
            if (!this.mCanSlide) {
                this.mDragHelper.abort();
            } else {
                android.support.v4.view.ViewCompat.postInvalidateOnAnimation(this);
            }
        }
    }

    public void setShadowDrawable(android.graphics.drawable.Drawable d) {
        this.mShadowDrawable = d;
    }

    public void setShadowResource(int resId) {
        setShadowDrawable(getResources().getDrawable(resId));
    }

    @Override // android.view.View
    public void draw(android.graphics.Canvas c) {
        super.draw(c);
        android.view.View shadowView = getChildCount() > 1 ? getChildAt(1) : null;
        if (shadowView != null && this.mShadowDrawable != null) {
            int shadowWidth = this.mShadowDrawable.getIntrinsicWidth();
            int right = shadowView.getLeft();
            int top = shadowView.getTop();
            int bottom = shadowView.getBottom();
            int left = right - shadowWidth;
            this.mShadowDrawable.setBounds(left, top, right, bottom);
            this.mShadowDrawable.draw(c);
        }
    }

    private void parallaxOtherViews(float slideOffset) {
        android.support.v4.widget.SlidingPaneLayout.LayoutParams slideLp = (android.support.v4.widget.SlidingPaneLayout.LayoutParams) this.mSlideableView.getLayoutParams();
        boolean dimViews = slideLp.dimWhenOffset && slideLp.leftMargin <= 0;
        int childCount = getChildCount();
        for (int i = 0; i < childCount; i++) {
            android.view.View v = getChildAt(i);
            if (v != this.mSlideableView) {
                int oldOffset = (int) ((1.0f - this.mParallaxOffset) * this.mParallaxBy);
                this.mParallaxOffset = slideOffset;
                int newOffset = (int) ((1.0f - slideOffset) * this.mParallaxBy);
                int dx = oldOffset - newOffset;
                v.offsetLeftAndRight(dx);
                if (dimViews) {
                    dimChildView(v, 1.0f - this.mParallaxOffset, this.mCoveredFadeColor);
                }
            }
        }
    }

    protected boolean canScroll(android.view.View v, boolean checkV, int dx, int x, int y) {
        if (v instanceof android.view.ViewGroup) {
            android.view.ViewGroup group = (android.view.ViewGroup) v;
            int scrollX = v.getScrollX();
            int scrollY = v.getScrollY();
            int count = group.getChildCount();
            for (int i = count - 1; i >= 0; i--) {
                android.view.View child = group.getChildAt(i);
                if (x + scrollX >= child.getLeft() && x + scrollX < child.getRight() && y + scrollY >= child.getTop() && y + scrollY < child.getBottom() && canScroll(child, true, dx, (x + scrollX) - child.getLeft(), (y + scrollY) - child.getTop())) {
                    return true;
                }
            }
        }
        return checkV && android.support.v4.view.ViewCompat.canScrollHorizontally(v, -dx);
    }

    boolean isDimmed(android.view.View child) {
        if (child == null) {
            return false;
        }
        android.support.v4.widget.SlidingPaneLayout.LayoutParams lp = (android.support.v4.widget.SlidingPaneLayout.LayoutParams) child.getLayoutParams();
        return this.mCanSlide && lp.dimWhenOffset && this.mSlideOffset > 0.0f;
    }

    @Override // android.view.ViewGroup
    protected android.view.ViewGroup.LayoutParams generateDefaultLayoutParams() {
        return new android.support.v4.widget.SlidingPaneLayout.LayoutParams();
    }

    @Override // android.view.ViewGroup
    protected android.view.ViewGroup.LayoutParams generateLayoutParams(android.view.ViewGroup.LayoutParams p) {
        return p instanceof android.view.ViewGroup.MarginLayoutParams ? new android.support.v4.widget.SlidingPaneLayout.LayoutParams((android.view.ViewGroup.MarginLayoutParams) p) : new android.support.v4.widget.SlidingPaneLayout.LayoutParams(p);
    }

    @Override // android.view.ViewGroup
    protected boolean checkLayoutParams(android.view.ViewGroup.LayoutParams p) {
        return (p instanceof android.support.v4.widget.SlidingPaneLayout.LayoutParams) && super.checkLayoutParams(p);
    }

    @Override // android.view.ViewGroup
    public android.view.ViewGroup.LayoutParams generateLayoutParams(android.util.AttributeSet attrs) {
        return new android.support.v4.widget.SlidingPaneLayout.LayoutParams(getContext(), attrs);
    }

    @Override // android.view.View
    protected android.os.Parcelable onSaveInstanceState() {
        android.os.Parcelable superState = super.onSaveInstanceState();
        android.support.v4.widget.SlidingPaneLayout.SavedState ss = new android.support.v4.widget.SlidingPaneLayout.SavedState(superState);
        ss.isOpen = isSlideable() ? isOpen() : this.mPreservedOpenState;
        return ss;
    }

    @Override // android.view.View
    protected void onRestoreInstanceState(android.os.Parcelable state) {
        android.support.v4.widget.SlidingPaneLayout.SavedState ss = (android.support.v4.widget.SlidingPaneLayout.SavedState) state;
        super.onRestoreInstanceState(ss.getSuperState());
        if (ss.isOpen) {
            openPane();
        } else {
            closePane();
        }
        this.mPreservedOpenState = ss.isOpen;
    }

    private class DragHelperCallback extends android.support.v4.widget.ViewDragHelper.Callback {
        private DragHelperCallback() {
        }

        @Override // android.support.v4.widget.ViewDragHelper.Callback
        public boolean tryCaptureView(android.view.View child, int pointerId) {
            if (android.support.v4.widget.SlidingPaneLayout.this.mIsUnableToDrag) {
                return false;
            }
            return ((android.support.v4.widget.SlidingPaneLayout.LayoutParams) child.getLayoutParams()).slideable;
        }

        @Override // android.support.v4.widget.ViewDragHelper.Callback
        public void onViewDragStateChanged(int state) {
            if (android.support.v4.widget.SlidingPaneLayout.this.mDragHelper.getViewDragState() == 0) {
                if (android.support.v4.widget.SlidingPaneLayout.this.mSlideOffset == 0.0f) {
                    android.support.v4.widget.SlidingPaneLayout.this.updateObscuredViewsVisibility(android.support.v4.widget.SlidingPaneLayout.this.mSlideableView);
                    android.support.v4.widget.SlidingPaneLayout.this.dispatchOnPanelClosed(android.support.v4.widget.SlidingPaneLayout.this.mSlideableView);
                    android.support.v4.widget.SlidingPaneLayout.this.mPreservedOpenState = false;
                } else {
                    android.support.v4.widget.SlidingPaneLayout.this.dispatchOnPanelOpened(android.support.v4.widget.SlidingPaneLayout.this.mSlideableView);
                    android.support.v4.widget.SlidingPaneLayout.this.mPreservedOpenState = true;
                }
            }
        }

        @Override // android.support.v4.widget.ViewDragHelper.Callback
        public void onViewCaptured(android.view.View capturedChild, int activePointerId) {
            android.support.v4.widget.SlidingPaneLayout.this.setAllChildrenVisible();
        }

        @Override // android.support.v4.widget.ViewDragHelper.Callback
        public void onViewPositionChanged(android.view.View changedView, int left, int top, int dx, int dy) {
            android.support.v4.widget.SlidingPaneLayout.this.onPanelDragged(left);
            android.support.v4.widget.SlidingPaneLayout.this.invalidate();
        }

        @Override // android.support.v4.widget.ViewDragHelper.Callback
        public void onViewReleased(android.view.View releasedChild, float xvel, float yvel) {
            android.support.v4.widget.SlidingPaneLayout.LayoutParams lp = (android.support.v4.widget.SlidingPaneLayout.LayoutParams) releasedChild.getLayoutParams();
            int left = android.support.v4.widget.SlidingPaneLayout.this.getPaddingLeft() + lp.leftMargin;
            if (xvel > 0.0f || (xvel == 0.0f && android.support.v4.widget.SlidingPaneLayout.this.mSlideOffset > 0.5f)) {
                left += android.support.v4.widget.SlidingPaneLayout.this.mSlideRange;
            }
            android.support.v4.widget.SlidingPaneLayout.this.mDragHelper.settleCapturedViewAt(left, releasedChild.getTop());
            android.support.v4.widget.SlidingPaneLayout.this.invalidate();
        }

        @Override // android.support.v4.widget.ViewDragHelper.Callback
        public int getViewHorizontalDragRange(android.view.View child) {
            return android.support.v4.widget.SlidingPaneLayout.this.mSlideRange;
        }

        @Override // android.support.v4.widget.ViewDragHelper.Callback
        public int clampViewPositionHorizontal(android.view.View child, int left, int dx) {
            android.support.v4.widget.SlidingPaneLayout.LayoutParams lp = (android.support.v4.widget.SlidingPaneLayout.LayoutParams) android.support.v4.widget.SlidingPaneLayout.this.mSlideableView.getLayoutParams();
            int leftBound = android.support.v4.widget.SlidingPaneLayout.this.getPaddingLeft() + lp.leftMargin;
            int rightBound = leftBound + android.support.v4.widget.SlidingPaneLayout.this.mSlideRange;
            int newLeft = java.lang.Math.min(java.lang.Math.max(left, leftBound), rightBound);
            return newLeft;
        }

        @Override // android.support.v4.widget.ViewDragHelper.Callback
        public void onEdgeDragStarted(int edgeFlags, int pointerId) {
            android.support.v4.widget.SlidingPaneLayout.this.mDragHelper.captureChildView(android.support.v4.widget.SlidingPaneLayout.this.mSlideableView, pointerId);
        }
    }

    public static class LayoutParams extends android.view.ViewGroup.MarginLayoutParams {
        private static final int[] ATTRS = {android.R.attr.layout_weight};
        android.graphics.Paint dimPaint;
        boolean dimWhenOffset;
        boolean slideable;
        public float weight;

        public LayoutParams() {
            super(-1, -1);
            this.weight = 0.0f;
        }

        public LayoutParams(int width, int height) {
            super(width, height);
            this.weight = 0.0f;
        }

        public LayoutParams(android.view.ViewGroup.LayoutParams source) {
            super(source);
            this.weight = 0.0f;
        }

        public LayoutParams(android.view.ViewGroup.MarginLayoutParams source) {
            super(source);
            this.weight = 0.0f;
        }

        public LayoutParams(android.support.v4.widget.SlidingPaneLayout.LayoutParams source) {
            super((android.view.ViewGroup.MarginLayoutParams) source);
            this.weight = 0.0f;
            this.weight = source.weight;
        }

        public LayoutParams(android.content.Context c, android.util.AttributeSet attrs) {
            super(c, attrs);
            this.weight = 0.0f;
            android.content.res.TypedArray a = c.obtainStyledAttributes(attrs, ATTRS);
            this.weight = a.getFloat(0, 0.0f);
            a.recycle();
        }
    }

    static class SavedState extends android.view.View.BaseSavedState {
        public static final android.os.Parcelable.Creator<android.support.v4.widget.SlidingPaneLayout.SavedState> CREATOR = new android.os.Parcelable.Creator<android.support.v4.widget.SlidingPaneLayout.SavedState>() { // from class: android.support.v4.widget.SlidingPaneLayout.SavedState.1
            /* JADX WARN: Can't rename method to resolve collision */
            @Override // android.os.Parcelable.Creator
            public android.support.v4.widget.SlidingPaneLayout.SavedState createFromParcel(android.os.Parcel in) {
                return new android.support.v4.widget.SlidingPaneLayout.SavedState(in);
            }

            /* JADX WARN: Can't rename method to resolve collision */
            @Override // android.os.Parcelable.Creator
            public android.support.v4.widget.SlidingPaneLayout.SavedState[] newArray(int size) {
                return new android.support.v4.widget.SlidingPaneLayout.SavedState[size];
            }
        };
        boolean isOpen;

        SavedState(android.os.Parcelable superState) {
            super(superState);
        }

        private SavedState(android.os.Parcel in) {
            super(in);
            this.isOpen = in.readInt() != 0;
        }

        @Override // android.view.View.BaseSavedState, android.view.AbsSavedState, android.os.Parcelable
        public void writeToParcel(android.os.Parcel out, int flags) {
            super.writeToParcel(out, flags);
            out.writeInt(this.isOpen ? 1 : 0);
        }
    }

    static class SlidingPanelLayoutImplBase implements android.support.v4.widget.SlidingPaneLayout.SlidingPanelLayoutImpl {
        SlidingPanelLayoutImplBase() {
        }

        @Override // android.support.v4.widget.SlidingPaneLayout.SlidingPanelLayoutImpl
        public void invalidateChildRegion(android.support.v4.widget.SlidingPaneLayout parent, android.view.View child) {
            android.support.v4.view.ViewCompat.postInvalidateOnAnimation(parent, child.getLeft(), child.getTop(), child.getRight(), child.getBottom());
        }
    }

    static class SlidingPanelLayoutImplJB extends android.support.v4.widget.SlidingPaneLayout.SlidingPanelLayoutImplBase {
        private java.lang.reflect.Method mGetDisplayList;
        private java.lang.reflect.Field mRecreateDisplayList;

        SlidingPanelLayoutImplJB() {
            try {
                this.mGetDisplayList = android.view.View.class.getDeclaredMethod("getDisplayList", (java.lang.Class[]) null);
            } catch (java.lang.NoSuchMethodException e) {
                android.util.Log.e(android.support.v4.widget.SlidingPaneLayout.TAG, "Couldn't fetch getDisplayList method; dimming won't work right.", e);
            }
            try {
                this.mRecreateDisplayList = android.view.View.class.getDeclaredField("mRecreateDisplayList");
                this.mRecreateDisplayList.setAccessible(true);
            } catch (java.lang.NoSuchFieldException e2) {
                android.util.Log.e(android.support.v4.widget.SlidingPaneLayout.TAG, "Couldn't fetch mRecreateDisplayList field; dimming will be slow.", e2);
            }
        }

        @Override // android.support.v4.widget.SlidingPaneLayout.SlidingPanelLayoutImplBase, android.support.v4.widget.SlidingPaneLayout.SlidingPanelLayoutImpl
        public void invalidateChildRegion(android.support.v4.widget.SlidingPaneLayout parent, android.view.View child) { // NOTE(jadx-fix): the smali override declares no throws clause; jadx invented the reflection exceptions and broke the override
            if (this.mGetDisplayList != null && this.mRecreateDisplayList != null) {
                try {
                    this.mRecreateDisplayList.setBoolean(child, true);
                    this.mGetDisplayList.invoke(child, (java.lang.Object[]) null);
                } catch (java.lang.Exception e) {
                    android.util.Log.e(android.support.v4.widget.SlidingPaneLayout.TAG, "Error refreshing display list state", e);
                }
                super.invalidateChildRegion(parent, child);
                return;
            }
            child.invalidate();
        }
    }

    static class SlidingPanelLayoutImplJBMR1 extends android.support.v4.widget.SlidingPaneLayout.SlidingPanelLayoutImplBase {
        SlidingPanelLayoutImplJBMR1() {
        }

        @Override // android.support.v4.widget.SlidingPaneLayout.SlidingPanelLayoutImplBase, android.support.v4.widget.SlidingPaneLayout.SlidingPanelLayoutImpl
        public void invalidateChildRegion(android.support.v4.widget.SlidingPaneLayout parent, android.view.View child) {
            android.support.v4.view.ViewCompat.setLayerPaint(child, ((android.support.v4.widget.SlidingPaneLayout.LayoutParams) child.getLayoutParams()).dimPaint);
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
            copyNodeInfoNoChildren(info, superNode);
            superNode.recycle();
            info.setClassName(android.support.v4.widget.SlidingPaneLayout.class.getName());
            info.setSource(host);
            java.lang.Object parentForAccessibility = android.support.v4.view.ViewCompat.getParentForAccessibility(host);
            if (parentForAccessibility instanceof android.view.View) {
                info.setParent((android.view.View) parentForAccessibility);
            }
            int childCount = android.support.v4.widget.SlidingPaneLayout.this.getChildCount();
            for (int i = 0; i < childCount; i++) {
                android.view.View child = android.support.v4.widget.SlidingPaneLayout.this.getChildAt(i);
                if (!filter(child) && child.getVisibility() == 0) {
                    android.support.v4.view.ViewCompat.setImportantForAccessibility(child, 1);
                    info.addChild(child);
                }
            }
        }

        @Override // android.support.v4.view.AccessibilityDelegateCompat
        public void onInitializeAccessibilityEvent(android.view.View host, android.view.accessibility.AccessibilityEvent event) {
            super.onInitializeAccessibilityEvent(host, event);
            event.setClassName(android.support.v4.widget.SlidingPaneLayout.class.getName());
        }

        @Override // android.support.v4.view.AccessibilityDelegateCompat
        public boolean onRequestSendAccessibilityEvent(android.view.ViewGroup host, android.view.View child, android.view.accessibility.AccessibilityEvent event) {
            if (filter(child)) {
                return false;
            }
            return super.onRequestSendAccessibilityEvent(host, child, event);
        }

        public boolean filter(android.view.View child) {
            return android.support.v4.widget.SlidingPaneLayout.this.isDimmed(child);
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
            dest.setMovementGranularities(src.getMovementGranularities());
        }
    }

    private class DisableLayerRunnable implements java.lang.Runnable {
        final android.view.View mChildView;

        DisableLayerRunnable(android.view.View childView) {
            this.mChildView = childView;
        }

        @Override // java.lang.Runnable
        public void run() {
            if (this.mChildView.getParent() == android.support.v4.widget.SlidingPaneLayout.this) {
                android.support.v4.view.ViewCompat.setLayerType(this.mChildView, 0, null);
                android.support.v4.widget.SlidingPaneLayout.this.invalidateChildRegion(this.mChildView);
            }
            android.support.v4.widget.SlidingPaneLayout.this.mPostedRunnables.remove(this);
        }
    }
}
