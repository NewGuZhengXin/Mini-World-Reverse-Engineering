package android.support.v4.app;

/* loaded from: classes.dex */
public class ActionBarDrawerToggle implements android.support.v4.widget.DrawerLayout.DrawerListener {
    private static final int ID_HOME = 16908332;
    private static final android.support.v4.app.ActionBarDrawerToggle.ActionBarDrawerToggleImpl IMPL;
    private static final float TOGGLE_DRAWABLE_OFFSET = 0.33333334f;
    private final android.app.Activity mActivity;
    private final android.support.v4.app.ActionBarDrawerToggle.Delegate mActivityImpl;
    private final int mCloseDrawerContentDescRes;
    private android.graphics.drawable.Drawable mDrawerImage;
    private final int mDrawerImageResource;
    private boolean mDrawerIndicatorEnabled = true;
    private final android.support.v4.widget.DrawerLayout mDrawerLayout;
    private final int mOpenDrawerContentDescRes;
    private java.lang.Object mSetIndicatorInfo;
    private android.support.v4.app.ActionBarDrawerToggle.SlideDrawable mSlider;
    private android.graphics.drawable.Drawable mThemeImage;

    private interface ActionBarDrawerToggleImpl {
        android.graphics.drawable.Drawable getThemeUpIndicator(android.app.Activity activity);

        java.lang.Object setActionBarDescription(java.lang.Object obj, android.app.Activity activity, int i);

        java.lang.Object setActionBarUpIndicator(java.lang.Object obj, android.app.Activity activity, android.graphics.drawable.Drawable drawable, int i);
    }

    public interface Delegate {
        android.graphics.drawable.Drawable getThemeUpIndicator();

        void setActionBarDescription(int i);

        void setActionBarUpIndicator(android.graphics.drawable.Drawable drawable, int i);
    }

    public interface DelegateProvider {
        android.support.v4.app.ActionBarDrawerToggle.Delegate getDrawerToggleDelegate();
    }

    private static class ActionBarDrawerToggleImplBase implements android.support.v4.app.ActionBarDrawerToggle.ActionBarDrawerToggleImpl {
        private ActionBarDrawerToggleImplBase() {
        }

        @Override // android.support.v4.app.ActionBarDrawerToggle.ActionBarDrawerToggleImpl
        public android.graphics.drawable.Drawable getThemeUpIndicator(android.app.Activity activity) {
            return null;
        }

        @Override // android.support.v4.app.ActionBarDrawerToggle.ActionBarDrawerToggleImpl
        public java.lang.Object setActionBarUpIndicator(java.lang.Object info, android.app.Activity activity, android.graphics.drawable.Drawable themeImage, int contentDescRes) {
            return info;
        }

        @Override // android.support.v4.app.ActionBarDrawerToggle.ActionBarDrawerToggleImpl
        public java.lang.Object setActionBarDescription(java.lang.Object info, android.app.Activity activity, int contentDescRes) {
            return info;
        }
    }

    private static class ActionBarDrawerToggleImplHC implements android.support.v4.app.ActionBarDrawerToggle.ActionBarDrawerToggleImpl {
        private ActionBarDrawerToggleImplHC() {
        }

        @Override // android.support.v4.app.ActionBarDrawerToggle.ActionBarDrawerToggleImpl
        public android.graphics.drawable.Drawable getThemeUpIndicator(android.app.Activity activity) {
            return android.support.v4.app.ActionBarDrawerToggleHoneycomb.getThemeUpIndicator(activity);
        }

        @Override // android.support.v4.app.ActionBarDrawerToggle.ActionBarDrawerToggleImpl
        public java.lang.Object setActionBarUpIndicator(java.lang.Object info, android.app.Activity activity, android.graphics.drawable.Drawable themeImage, int contentDescRes) {
            return android.support.v4.app.ActionBarDrawerToggleHoneycomb.setActionBarUpIndicator(info, activity, themeImage, contentDescRes);
        }

        @Override // android.support.v4.app.ActionBarDrawerToggle.ActionBarDrawerToggleImpl
        public java.lang.Object setActionBarDescription(java.lang.Object info, android.app.Activity activity, int contentDescRes) {
            return android.support.v4.app.ActionBarDrawerToggleHoneycomb.setActionBarDescription(info, activity, contentDescRes);
        }
    }

    static {
        int version = android.os.Build.VERSION.SDK_INT;
        if (version >= 11) {
            IMPL = new android.support.v4.app.ActionBarDrawerToggle.ActionBarDrawerToggleImplHC();
        } else {
            IMPL = new android.support.v4.app.ActionBarDrawerToggle.ActionBarDrawerToggleImplBase();
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public ActionBarDrawerToggle(android.app.Activity activity, android.support.v4.widget.DrawerLayout drawerLayout, int drawerImageRes, int openDrawerContentDescRes, int closeDrawerContentDescRes) {
        this.mActivity = activity;
        if (activity instanceof android.support.v4.app.ActionBarDrawerToggle.DelegateProvider) {
            this.mActivityImpl = ((android.support.v4.app.ActionBarDrawerToggle.DelegateProvider) activity).getDrawerToggleDelegate();
        } else {
            this.mActivityImpl = null;
        }
        this.mDrawerLayout = drawerLayout;
        this.mDrawerImageResource = drawerImageRes;
        this.mOpenDrawerContentDescRes = openDrawerContentDescRes;
        this.mCloseDrawerContentDescRes = closeDrawerContentDescRes;
        this.mThemeImage = getThemeUpIndicator();
        this.mDrawerImage = activity.getResources().getDrawable(drawerImageRes);
        this.mSlider = new android.support.v4.app.ActionBarDrawerToggle.SlideDrawable(this.mDrawerImage);
        this.mSlider.setOffset(TOGGLE_DRAWABLE_OFFSET);
    }

    public void syncState() {
        if (this.mDrawerLayout.isDrawerOpen(android.support.v4.view.GravityCompat.START)) {
            this.mSlider.setPosition(1.0f);
        } else {
            this.mSlider.setPosition(0.0f);
        }
        if (this.mDrawerIndicatorEnabled) {
            setActionBarUpIndicator(this.mSlider, this.mDrawerLayout.isDrawerOpen(android.support.v4.view.GravityCompat.START) ? this.mCloseDrawerContentDescRes : this.mOpenDrawerContentDescRes);
        }
    }

    public void setDrawerIndicatorEnabled(boolean enable) {
        if (enable != this.mDrawerIndicatorEnabled) {
            if (enable) {
                setActionBarUpIndicator(this.mSlider, this.mDrawerLayout.isDrawerOpen(android.support.v4.view.GravityCompat.START) ? this.mCloseDrawerContentDescRes : this.mOpenDrawerContentDescRes);
            } else {
                setActionBarUpIndicator(this.mThemeImage, 0);
            }
            this.mDrawerIndicatorEnabled = enable;
        }
    }

    public boolean isDrawerIndicatorEnabled() {
        return this.mDrawerIndicatorEnabled;
    }

    public void onConfigurationChanged(android.content.res.Configuration newConfig) {
        this.mThemeImage = getThemeUpIndicator();
        this.mDrawerImage = this.mActivity.getResources().getDrawable(this.mDrawerImageResource);
        syncState();
    }

    public boolean onOptionsItemSelected(android.view.MenuItem item) {
        if (item != null && item.getItemId() == 16908332 && this.mDrawerIndicatorEnabled) {
            if (this.mDrawerLayout.isDrawerVisible(android.support.v4.view.GravityCompat.START)) {
                this.mDrawerLayout.closeDrawer(android.support.v4.view.GravityCompat.START);
            } else {
                this.mDrawerLayout.openDrawer(android.support.v4.view.GravityCompat.START);
            }
            return true;
        }
        return false;
    }

    @Override // android.support.v4.widget.DrawerLayout.DrawerListener
    public void onDrawerSlide(android.view.View drawerView, float slideOffset) {
        float glyphOffset;
        float glyphOffset2 = this.mSlider.getPosition();
        if (slideOffset > 0.5f) {
            glyphOffset = java.lang.Math.max(glyphOffset2, java.lang.Math.max(0.0f, slideOffset - 0.5f) * 2.0f);
        } else {
            glyphOffset = java.lang.Math.min(glyphOffset2, slideOffset * 2.0f);
        }
        this.mSlider.setPosition(glyphOffset);
    }

    @Override // android.support.v4.widget.DrawerLayout.DrawerListener
    public void onDrawerOpened(android.view.View drawerView) {
        this.mSlider.setPosition(1.0f);
        if (this.mDrawerIndicatorEnabled) {
            setActionBarDescription(this.mCloseDrawerContentDescRes);
        }
    }

    @Override // android.support.v4.widget.DrawerLayout.DrawerListener
    public void onDrawerClosed(android.view.View drawerView) {
        this.mSlider.setPosition(0.0f);
        if (this.mDrawerIndicatorEnabled) {
            setActionBarDescription(this.mOpenDrawerContentDescRes);
        }
    }

    @Override // android.support.v4.widget.DrawerLayout.DrawerListener
    public void onDrawerStateChanged(int newState) {
    }

    android.graphics.drawable.Drawable getThemeUpIndicator() {
        return this.mActivityImpl != null ? this.mActivityImpl.getThemeUpIndicator() : IMPL.getThemeUpIndicator(this.mActivity);
    }

    void setActionBarUpIndicator(android.graphics.drawable.Drawable upDrawable, int contentDescRes) {
        if (this.mActivityImpl != null) {
            this.mActivityImpl.setActionBarUpIndicator(upDrawable, contentDescRes);
        } else {
            this.mSetIndicatorInfo = IMPL.setActionBarUpIndicator(this.mSetIndicatorInfo, this.mActivity, upDrawable, contentDescRes);
        }
    }

    void setActionBarDescription(int contentDescRes) {
        if (this.mActivityImpl != null) {
            this.mActivityImpl.setActionBarDescription(contentDescRes);
        } else {
            this.mSetIndicatorInfo = IMPL.setActionBarDescription(this.mSetIndicatorInfo, this.mActivity, contentDescRes);
        }
    }

    private class SlideDrawable extends android.graphics.drawable.InsetDrawable implements android.graphics.drawable.Drawable.Callback {
        private final boolean mHasMirroring;
        private float mOffset;
        private float mPosition;
        private final android.graphics.Rect mTmpRect;

        private SlideDrawable(android.graphics.drawable.Drawable wrapped) {
            super(wrapped, 0);
            this.mHasMirroring = android.os.Build.VERSION.SDK_INT > 18;
            this.mTmpRect = new android.graphics.Rect();
        }

        public void setPosition(float position) {
            this.mPosition = position;
            invalidateSelf();
        }

        public float getPosition() {
            return this.mPosition;
        }

        public void setOffset(float offset) {
            this.mOffset = offset;
            invalidateSelf();
        }

        @Override // android.graphics.drawable.DrawableWrapper, android.graphics.drawable.Drawable
        public void draw(android.graphics.Canvas canvas) {
            copyBounds(this.mTmpRect);
            canvas.save();
            boolean isLayoutRTL = android.support.v4.view.ViewCompat.getLayoutDirection(android.support.v4.app.ActionBarDrawerToggle.this.mActivity.getWindow().getDecorView()) == 1;
            int flipRtl = isLayoutRTL ? -1 : 1;
            int width = this.mTmpRect.width();
            canvas.translate((-this.mOffset) * width * this.mPosition * flipRtl, 0.0f);
            if (isLayoutRTL && !this.mHasMirroring) {
                canvas.translate(width, 0.0f);
                canvas.scale(-1.0f, 1.0f);
            }
            super.draw(canvas);
            canvas.restore();
        }
    }
}
