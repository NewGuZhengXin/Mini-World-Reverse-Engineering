package com.minitech.miniworld.util;

/* loaded from: classes.dex */
public abstract class SystemUiHider {
    public static final int FLAG_FULLSCREEN = 2;
    public static final int FLAG_HIDE_NAVIGATION = 6;
    public static final int FLAG_LAYOUT_IN_SCREEN_OLDER_DEVICES = 1;
    private static com.minitech.miniworld.util.SystemUiHider.OnVisibilityChangeListener sDummyListener = new com.minitech.miniworld.util.SystemUiHider.OnVisibilityChangeListener() { // from class: com.minitech.miniworld.util.SystemUiHider.1
        @Override // com.minitech.miniworld.util.SystemUiHider.OnVisibilityChangeListener
        public void onVisibilityChange(boolean visible) {
        }
    };
    protected android.app.Activity mActivity;
    protected android.view.View mAnchorView;
    protected int mFlags;
    protected com.minitech.miniworld.util.SystemUiHider.OnVisibilityChangeListener mOnVisibilityChangeListener = sDummyListener;

    public interface OnVisibilityChangeListener {
        void onVisibilityChange(boolean z);
    }

    public abstract void hide();

    public abstract boolean isVisible();

    public abstract void setup();

    public abstract void show();

    public static com.minitech.miniworld.util.SystemUiHider getInstance(android.app.Activity activity, android.view.View anchorView, int flags) {
        return android.os.Build.VERSION.SDK_INT >= 11 ? new com.minitech.miniworld.util.SystemUiHiderHoneycomb(activity, anchorView, flags) : new com.minitech.miniworld.util.SystemUiHiderBase(activity, anchorView, flags);
    }

    protected SystemUiHider(android.app.Activity activity, android.view.View anchorView, int flags) {
        this.mActivity = activity;
        this.mAnchorView = anchorView;
        this.mFlags = flags;
    }

    public void toggle() {
        if (isVisible()) {
            hide();
        } else {
            show();
        }
    }

    public void setOnVisibilityChangeListener(com.minitech.miniworld.util.SystemUiHider.OnVisibilityChangeListener listener) {
        if (listener == null) {
            listener = sDummyListener;
        }
        this.mOnVisibilityChangeListener = listener;
    }
}
