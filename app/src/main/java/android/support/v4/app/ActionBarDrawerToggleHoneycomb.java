package android.support.v4.app;

/* loaded from: classes.dex */
class ActionBarDrawerToggleHoneycomb {
    private static final java.lang.String TAG = "ActionBarDrawerToggleHoneycomb";
    private static final int[] THEME_ATTRS = {android.R.attr.homeAsUpIndicator};

    ActionBarDrawerToggleHoneycomb() {
    }

    public static java.lang.Object setActionBarUpIndicator(java.lang.Object info, android.app.Activity activity, android.graphics.drawable.Drawable drawable, int contentDescRes) { // NOTE(jadx-fix): smali declares no throws clause; jadx invented the reflection exceptions
        if (info == null) {
            info = new android.support.v4.app.ActionBarDrawerToggleHoneycomb.SetIndicatorInfo(activity);
        }
        android.support.v4.app.ActionBarDrawerToggleHoneycomb.SetIndicatorInfo sii = (android.support.v4.app.ActionBarDrawerToggleHoneycomb.SetIndicatorInfo) info;
        if (sii.setHomeAsUpIndicator != null) {
            try {
                android.app.ActionBar actionBar = activity.getActionBar();
                sii.setHomeAsUpIndicator.invoke(actionBar, drawable);
                sii.setHomeActionContentDescription.invoke(actionBar, java.lang.Integer.valueOf(contentDescRes));
            } catch (java.lang.Exception e) {
                android.util.Log.w(TAG, "Couldn't set home-as-up indicator via JB-MR2 API", e);
            }
        } else if (sii.upIndicatorView != null) {
            sii.upIndicatorView.setImageDrawable(drawable);
        } else {
            android.util.Log.w(TAG, "Couldn't set home-as-up indicator");
        }
        return info;
    }

    public static java.lang.Object setActionBarDescription(java.lang.Object info, android.app.Activity activity, int contentDescRes) { // NOTE(jadx-fix): smali declares no throws clause; jadx invented the reflection exceptions
        if (info == null) {
            info = new android.support.v4.app.ActionBarDrawerToggleHoneycomb.SetIndicatorInfo(activity);
        }
        android.support.v4.app.ActionBarDrawerToggleHoneycomb.SetIndicatorInfo sii = (android.support.v4.app.ActionBarDrawerToggleHoneycomb.SetIndicatorInfo) info;
        if (sii.setHomeAsUpIndicator != null) {
            try {
                android.app.ActionBar actionBar = activity.getActionBar();
                sii.setHomeActionContentDescription.invoke(actionBar, java.lang.Integer.valueOf(contentDescRes));
            } catch (java.lang.Exception e) {
                android.util.Log.w(TAG, "Couldn't set content description via JB-MR2 API", e);
            }
        }
        return info;
    }

    public static android.graphics.drawable.Drawable getThemeUpIndicator(android.app.Activity activity) {
        android.content.res.TypedArray a = activity.obtainStyledAttributes(THEME_ATTRS);
        android.graphics.drawable.Drawable result = a.getDrawable(0);
        a.recycle();
        return result;
    }

    private static class SetIndicatorInfo {
        public java.lang.reflect.Method setHomeActionContentDescription;
        public java.lang.reflect.Method setHomeAsUpIndicator;
        public android.widget.ImageView upIndicatorView;

        SetIndicatorInfo(android.app.Activity activity) {
            try {
                this.setHomeAsUpIndicator = android.app.ActionBar.class.getDeclaredMethod("setHomeAsUpIndicator", android.graphics.drawable.Drawable.class);
                this.setHomeActionContentDescription = android.app.ActionBar.class.getDeclaredMethod("setHomeActionContentDescription", java.lang.Integer.TYPE);
            } catch (java.lang.NoSuchMethodException e) {
                android.view.View home = activity.findViewById(android.R.id.home);
                if (home != null) {
                    android.view.ViewGroup parent = (android.view.ViewGroup) home.getParent();
                    int childCount = parent.getChildCount();
                    if (childCount == 2) {
                        android.view.View first = parent.getChildAt(0);
                        android.view.View second = parent.getChildAt(1);
                        android.view.View up = first.getId() == 16908332 ? second : first;
                        if (up instanceof android.widget.ImageView) {
                            this.upIndicatorView = (android.widget.ImageView) up;
                        }
                    }
                }
            }
        }
    }
}
