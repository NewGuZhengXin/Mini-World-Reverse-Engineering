package android.support.v4.view;

/* loaded from: classes.dex */
public class PagerTitleStrip extends android.view.ViewGroup implements android.support.v4.view.ViewPager.Decor {
    private static final android.support.v4.view.PagerTitleStrip.PagerTitleStripImpl IMPL;
    private static final float SIDE_ALPHA = 0.6f;
    private static final java.lang.String TAG = "PagerTitleStrip";
    private static final int TEXT_SPACING = 16;
    android.widget.TextView mCurrText;
    private int mGravity;
    private int mLastKnownCurrentPage;
    private float mLastKnownPositionOffset;
    android.widget.TextView mNextText;
    private int mNonPrimaryAlpha;
    private final android.support.v4.view.PagerTitleStrip.PageListener mPageListener;
    android.support.v4.view.ViewPager mPager;
    android.widget.TextView mPrevText;
    private int mScaledTextSpacing;
    int mTextColor;
    private boolean mUpdatingPositions;
    private boolean mUpdatingText;
    private java.lang.ref.WeakReference<android.support.v4.view.PagerAdapter> mWatchingAdapter;
    private static final int[] ATTRS = {android.R.attr.textAppearance, android.R.attr.textSize, android.R.attr.textColor, android.R.attr.gravity};
    private static final int[] TEXT_ATTRS = {android.R.attr.textAllCaps};

    interface PagerTitleStripImpl {
        void setSingleLineAllCaps(android.widget.TextView textView);
    }

    static {
        if (android.os.Build.VERSION.SDK_INT >= 14) {
            IMPL = new android.support.v4.view.PagerTitleStrip.PagerTitleStripImplIcs();
        } else {
            IMPL = new android.support.v4.view.PagerTitleStrip.PagerTitleStripImplBase();
        }
    }

    static class PagerTitleStripImplBase implements android.support.v4.view.PagerTitleStrip.PagerTitleStripImpl {
        PagerTitleStripImplBase() {
        }

        @Override // android.support.v4.view.PagerTitleStrip.PagerTitleStripImpl
        public void setSingleLineAllCaps(android.widget.TextView text) {
            text.setSingleLine();
        }
    }

    static class PagerTitleStripImplIcs implements android.support.v4.view.PagerTitleStrip.PagerTitleStripImpl {
        PagerTitleStripImplIcs() {
        }

        @Override // android.support.v4.view.PagerTitleStrip.PagerTitleStripImpl
        public void setSingleLineAllCaps(android.widget.TextView text) {
            android.support.v4.view.PagerTitleStripIcs.setSingleLineAllCaps(text);
        }
    }

    private static void setSingleLineAllCaps(android.widget.TextView text) {
        IMPL.setSingleLineAllCaps(text);
    }

    public PagerTitleStrip(android.content.Context context) {
        this(context, null);
    }

    public PagerTitleStrip(android.content.Context context, android.util.AttributeSet attrs) throws android.content.res.Resources.NotFoundException {
        super(context, attrs);
        this.mLastKnownCurrentPage = -1;
        this.mLastKnownPositionOffset = -1.0f;
        this.mPageListener = new android.support.v4.view.PagerTitleStrip.PageListener();
        android.widget.TextView textView = new android.widget.TextView(context);
        this.mPrevText = textView;
        addView(textView);
        android.widget.TextView textView2 = new android.widget.TextView(context);
        this.mCurrText = textView2;
        addView(textView2);
        android.widget.TextView textView3 = new android.widget.TextView(context);
        this.mNextText = textView3;
        addView(textView3);
        android.content.res.TypedArray a = context.obtainStyledAttributes(attrs, ATTRS);
        int textAppearance = a.getResourceId(0, 0);
        if (textAppearance != 0) {
            this.mPrevText.setTextAppearance(context, textAppearance);
            this.mCurrText.setTextAppearance(context, textAppearance);
            this.mNextText.setTextAppearance(context, textAppearance);
        }
        int textSize = a.getDimensionPixelSize(1, 0);
        if (textSize != 0) {
            setTextSize(0, textSize);
        }
        if (a.hasValue(2)) {
            int textColor = a.getColor(2, 0);
            this.mPrevText.setTextColor(textColor);
            this.mCurrText.setTextColor(textColor);
            this.mNextText.setTextColor(textColor);
        }
        this.mGravity = a.getInteger(3, 80);
        a.recycle();
        this.mTextColor = this.mCurrText.getTextColors().getDefaultColor();
        setNonPrimaryAlpha(SIDE_ALPHA);
        this.mPrevText.setEllipsize(android.text.TextUtils.TruncateAt.END);
        this.mCurrText.setEllipsize(android.text.TextUtils.TruncateAt.END);
        this.mNextText.setEllipsize(android.text.TextUtils.TruncateAt.END);
        boolean allCaps = false;
        if (textAppearance != 0) {
            android.content.res.TypedArray ta = context.obtainStyledAttributes(textAppearance, TEXT_ATTRS);
            allCaps = ta.getBoolean(0, false);
            ta.recycle();
        }
        if (allCaps) {
            setSingleLineAllCaps(this.mPrevText);
            setSingleLineAllCaps(this.mCurrText);
            setSingleLineAllCaps(this.mNextText);
        } else {
            this.mPrevText.setSingleLine();
            this.mCurrText.setSingleLine();
            this.mNextText.setSingleLine();
        }
        float density = context.getResources().getDisplayMetrics().density;
        this.mScaledTextSpacing = (int) (16.0f * density);
    }

    public void setTextSpacing(int spacingPixels) {
        this.mScaledTextSpacing = spacingPixels;
        requestLayout();
    }

    public int getTextSpacing() {
        return this.mScaledTextSpacing;
    }

    public void setNonPrimaryAlpha(float alpha) {
        this.mNonPrimaryAlpha = ((int) (255.0f * alpha)) & android.support.v4.view.MotionEventCompat.ACTION_MASK;
        int transparentColor = (this.mNonPrimaryAlpha << 24) | (this.mTextColor & android.support.v4.view.ViewCompat.MEASURED_SIZE_MASK);
        this.mPrevText.setTextColor(transparentColor);
        this.mNextText.setTextColor(transparentColor);
    }

    public void setTextColor(int color) {
        this.mTextColor = color;
        this.mCurrText.setTextColor(color);
        int transparentColor = (this.mNonPrimaryAlpha << 24) | (this.mTextColor & android.support.v4.view.ViewCompat.MEASURED_SIZE_MASK);
        this.mPrevText.setTextColor(transparentColor);
        this.mNextText.setTextColor(transparentColor);
    }

    public void setTextSize(int unit, float size) {
        this.mPrevText.setTextSize(unit, size);
        this.mCurrText.setTextSize(unit, size);
        this.mNextText.setTextSize(unit, size);
    }

    public void setGravity(int gravity) {
        this.mGravity = gravity;
        requestLayout();
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        android.view.ViewParent parent = getParent();
        if (!(parent instanceof android.support.v4.view.ViewPager)) {
            throw new java.lang.IllegalStateException("PagerTitleStrip must be a direct child of a ViewPager.");
        }
        android.support.v4.view.ViewPager pager = (android.support.v4.view.ViewPager) parent;
        android.support.v4.view.PagerAdapter adapter = pager.getAdapter();
        pager.setInternalPageChangeListener(this.mPageListener);
        pager.setOnAdapterChangeListener(this.mPageListener);
        this.mPager = pager;
        updateAdapter(this.mWatchingAdapter != null ? this.mWatchingAdapter.get() : null, adapter);
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        if (this.mPager != null) {
            updateAdapter(this.mPager.getAdapter(), null);
            this.mPager.setInternalPageChangeListener(null);
            this.mPager.setOnAdapterChangeListener(null);
            this.mPager = null;
        }
    }

    void updateText(int currentItem, android.support.v4.view.PagerAdapter adapter) {
        int itemCount = adapter != null ? adapter.getCount() : 0;
        this.mUpdatingText = true;
        java.lang.CharSequence text = null;
        if (currentItem >= 1 && adapter != null) {
            text = adapter.getPageTitle(currentItem - 1);
        }
        this.mPrevText.setText(text);
        this.mCurrText.setText((adapter == null || currentItem >= itemCount) ? null : adapter.getPageTitle(currentItem));
        java.lang.CharSequence text2 = null;
        if (currentItem + 1 < itemCount && adapter != null) {
            text2 = adapter.getPageTitle(currentItem + 1);
        }
        this.mNextText.setText(text2);
        int width = (getWidth() - getPaddingLeft()) - getPaddingRight();
        int childHeight = (getHeight() - getPaddingTop()) - getPaddingBottom();
        int childWidthSpec = android.view.View.MeasureSpec.makeMeasureSpec((int) (width * 0.8f), android.support.v4.widget.ExploreByTouchHelper.INVALID_ID);
        int childHeightSpec = android.view.View.MeasureSpec.makeMeasureSpec(childHeight, android.support.v4.widget.ExploreByTouchHelper.INVALID_ID);
        this.mPrevText.measure(childWidthSpec, childHeightSpec);
        this.mCurrText.measure(childWidthSpec, childHeightSpec);
        this.mNextText.measure(childWidthSpec, childHeightSpec);
        this.mLastKnownCurrentPage = currentItem;
        if (!this.mUpdatingPositions) {
            updateTextPositions(currentItem, this.mLastKnownPositionOffset, false);
        }
        this.mUpdatingText = false;
    }

    @Override // android.view.View, android.view.ViewParent
    public void requestLayout() {
        if (!this.mUpdatingText) {
            super.requestLayout();
        }
    }

    void updateAdapter(android.support.v4.view.PagerAdapter oldAdapter, android.support.v4.view.PagerAdapter newAdapter) {
        if (oldAdapter != null) {
            oldAdapter.unregisterDataSetObserver(this.mPageListener);
            this.mWatchingAdapter = null;
        }
        if (newAdapter != null) {
            newAdapter.registerDataSetObserver(this.mPageListener);
            this.mWatchingAdapter = new java.lang.ref.WeakReference<>(newAdapter);
        }
        if (this.mPager != null) {
            this.mLastKnownCurrentPage = -1;
            this.mLastKnownPositionOffset = -1.0f;
            updateText(this.mPager.getCurrentItem(), newAdapter);
            requestLayout();
        }
    }

    void updateTextPositions(int position, float positionOffset, boolean force) {
        int prevTop;
        int currTop;
        int nextTop;
        if (position != this.mLastKnownCurrentPage) {
            updateText(position, this.mPager.getAdapter());
        } else if (!force && positionOffset == this.mLastKnownPositionOffset) {
            return;
        }
        this.mUpdatingPositions = true;
        int prevWidth = this.mPrevText.getMeasuredWidth();
        int currWidth = this.mCurrText.getMeasuredWidth();
        int nextWidth = this.mNextText.getMeasuredWidth();
        int halfCurrWidth = currWidth / 2;
        int stripWidth = getWidth();
        int stripHeight = getHeight();
        int paddingLeft = getPaddingLeft();
        int paddingRight = getPaddingRight();
        int paddingTop = getPaddingTop();
        int paddingBottom = getPaddingBottom();
        int textPaddedLeft = paddingLeft + halfCurrWidth;
        int textPaddedRight = paddingRight + halfCurrWidth;
        int contentWidth = (stripWidth - textPaddedLeft) - textPaddedRight;
        float currOffset = positionOffset + 0.5f;
        if (currOffset > 1.0f) {
            currOffset -= 1.0f;
        }
        int currCenter = (stripWidth - textPaddedRight) - ((int) (contentWidth * currOffset));
        int currLeft = currCenter - (currWidth / 2);
        int currRight = currLeft + currWidth;
        int prevBaseline = this.mPrevText.getBaseline();
        int currBaseline = this.mCurrText.getBaseline();
        int nextBaseline = this.mNextText.getBaseline();
        int maxBaseline = java.lang.Math.max(java.lang.Math.max(prevBaseline, currBaseline), nextBaseline);
        int prevTopOffset = maxBaseline - prevBaseline;
        int currTopOffset = maxBaseline - currBaseline;
        int nextTopOffset = maxBaseline - nextBaseline;
        int alignedPrevHeight = prevTopOffset + this.mPrevText.getMeasuredHeight();
        int alignedCurrHeight = currTopOffset + this.mCurrText.getMeasuredHeight();
        int alignedNextHeight = nextTopOffset + this.mNextText.getMeasuredHeight();
        int maxTextHeight = java.lang.Math.max(java.lang.Math.max(alignedPrevHeight, alignedCurrHeight), alignedNextHeight);
        int vgrav = this.mGravity & 112;
        switch (vgrav) {
            case 16:
                int paddedHeight = (stripHeight - paddingTop) - paddingBottom;
                int centeredTop = (paddedHeight - maxTextHeight) / 2;
                prevTop = centeredTop + prevTopOffset;
                currTop = centeredTop + currTopOffset;
                nextTop = centeredTop + nextTopOffset;
                break;
            case 80:
                int bottomGravTop = (stripHeight - paddingBottom) - maxTextHeight;
                prevTop = bottomGravTop + prevTopOffset;
                currTop = bottomGravTop + currTopOffset;
                nextTop = bottomGravTop + nextTopOffset;
                break;
            default:
                prevTop = paddingTop + prevTopOffset;
                currTop = paddingTop + currTopOffset;
                nextTop = paddingTop + nextTopOffset;
                break;
        }
        this.mCurrText.layout(currLeft, currTop, currRight, this.mCurrText.getMeasuredHeight() + currTop);
        int prevLeft = java.lang.Math.min(paddingLeft, (currLeft - this.mScaledTextSpacing) - prevWidth);
        this.mPrevText.layout(prevLeft, prevTop, prevLeft + prevWidth, this.mPrevText.getMeasuredHeight() + prevTop);
        int nextLeft = java.lang.Math.max((stripWidth - paddingRight) - nextWidth, this.mScaledTextSpacing + currRight);
        this.mNextText.layout(nextLeft, nextTop, nextLeft + nextWidth, this.mNextText.getMeasuredHeight() + nextTop);
        this.mLastKnownPositionOffset = positionOffset;
        this.mUpdatingPositions = false;
    }

    @Override // android.view.View
    protected void onMeasure(int widthMeasureSpec, int heightMeasureSpec) {
        int widthMode = android.view.View.MeasureSpec.getMode(widthMeasureSpec);
        int heightMode = android.view.View.MeasureSpec.getMode(heightMeasureSpec);
        int widthSize = android.view.View.MeasureSpec.getSize(widthMeasureSpec);
        int heightSize = android.view.View.MeasureSpec.getSize(heightMeasureSpec);
        if (widthMode != 1073741824) {
            throw new java.lang.IllegalStateException("Must measure with an exact width");
        }
        int minHeight = getMinHeight();
        int padding = getPaddingTop() + getPaddingBottom();
        int childHeight = heightSize - padding;
        int childWidthSpec = android.view.View.MeasureSpec.makeMeasureSpec((int) (widthSize * 0.8f), android.support.v4.widget.ExploreByTouchHelper.INVALID_ID);
        int childHeightSpec = android.view.View.MeasureSpec.makeMeasureSpec(childHeight, android.support.v4.widget.ExploreByTouchHelper.INVALID_ID);
        this.mPrevText.measure(childWidthSpec, childHeightSpec);
        this.mCurrText.measure(childWidthSpec, childHeightSpec);
        this.mNextText.measure(childWidthSpec, childHeightSpec);
        if (heightMode == 1073741824) {
            setMeasuredDimension(widthSize, heightSize);
        } else {
            int textHeight = this.mCurrText.getMeasuredHeight();
            setMeasuredDimension(widthSize, java.lang.Math.max(minHeight, textHeight + padding));
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onLayout(boolean changed, int l, int t, int r, int b) {
        if (this.mPager != null) {
            float offset = this.mLastKnownPositionOffset >= 0.0f ? this.mLastKnownPositionOffset : 0.0f;
            updateTextPositions(this.mLastKnownCurrentPage, offset, true);
        }
    }

    int getMinHeight() {
        android.graphics.drawable.Drawable bg = getBackground();
        if (bg == null) {
            return 0;
        }
        int minHeight = bg.getIntrinsicHeight();
        return minHeight;
    }

    private class PageListener extends android.database.DataSetObserver implements android.support.v4.view.ViewPager.OnPageChangeListener, android.support.v4.view.ViewPager.OnAdapterChangeListener {
        private int mScrollState;

        private PageListener() {
        }

        @Override // android.support.v4.view.ViewPager.OnPageChangeListener
        public void onPageScrolled(int position, float positionOffset, int positionOffsetPixels) {
            if (positionOffset > 0.5f) {
                position++;
            }
            android.support.v4.view.PagerTitleStrip.this.updateTextPositions(position, positionOffset, false);
        }

        @Override // android.support.v4.view.ViewPager.OnPageChangeListener
        public void onPageSelected(int position) {
            if (this.mScrollState == 0) {
                android.support.v4.view.PagerTitleStrip.this.updateText(android.support.v4.view.PagerTitleStrip.this.mPager.getCurrentItem(), android.support.v4.view.PagerTitleStrip.this.mPager.getAdapter());
                float offset = android.support.v4.view.PagerTitleStrip.this.mLastKnownPositionOffset >= 0.0f ? android.support.v4.view.PagerTitleStrip.this.mLastKnownPositionOffset : 0.0f;
                android.support.v4.view.PagerTitleStrip.this.updateTextPositions(android.support.v4.view.PagerTitleStrip.this.mPager.getCurrentItem(), offset, true);
            }
        }

        @Override // android.support.v4.view.ViewPager.OnPageChangeListener
        public void onPageScrollStateChanged(int state) {
            this.mScrollState = state;
        }

        @Override // android.support.v4.view.ViewPager.OnAdapterChangeListener
        public void onAdapterChanged(android.support.v4.view.PagerAdapter oldAdapter, android.support.v4.view.PagerAdapter newAdapter) {
            android.support.v4.view.PagerTitleStrip.this.updateAdapter(oldAdapter, newAdapter);
        }

        @Override // android.database.DataSetObserver
        public void onChanged() {
            android.support.v4.view.PagerTitleStrip.this.updateText(android.support.v4.view.PagerTitleStrip.this.mPager.getCurrentItem(), android.support.v4.view.PagerTitleStrip.this.mPager.getAdapter());
            float offset = android.support.v4.view.PagerTitleStrip.this.mLastKnownPositionOffset >= 0.0f ? android.support.v4.view.PagerTitleStrip.this.mLastKnownPositionOffset : 0.0f;
            android.support.v4.view.PagerTitleStrip.this.updateTextPositions(android.support.v4.view.PagerTitleStrip.this.mPager.getCurrentItem(), offset, true);
        }
    }
}
