package com.minitech.miniworld.util;

@android.annotation.TargetApi(11)
/* loaded from: classes.dex */
public class SystemUiHiderHoneycomb extends com.minitech.miniworld.util.SystemUiHiderBase {
    private int mHideFlags;
    private int mShowFlags;
    private android.view.View.OnSystemUiVisibilityChangeListener mSystemUiVisibilityChangeListener;
    private int mTestFlags;
    private boolean mVisible;

    protected SystemUiHiderHoneycomb(android.app.Activity activity, android.view.View anchorView, int flags) {
        super(activity, anchorView, flags);
        this.mVisible = true;
        this.mSystemUiVisibilityChangeListener = new android.view.View.OnSystemUiVisibilityChangeListener() { // from class: com.minitech.miniworld.util.SystemUiHiderHoneycomb.1
            @Override // android.view.View.OnSystemUiVisibilityChangeListener
            public void onSystemUiVisibilityChange(int vis) {
                if ((com.minitech.miniworld.util.SystemUiHiderHoneycomb.this.mTestFlags & vis) == 0) {
                    com.minitech.miniworld.util.SystemUiHiderHoneycomb.this.mAnchorView.setSystemUiVisibility(com.minitech.miniworld.util.SystemUiHiderHoneycomb.this.mShowFlags);
                    if (android.os.Build.VERSION.SDK_INT < 16) {
                        com.minitech.miniworld.util.SystemUiHiderHoneycomb.this.mActivity.getActionBar().show();
                        com.minitech.miniworld.util.SystemUiHiderHoneycomb.this.mActivity.getWindow().setFlags(0, 1024);
                    }
                    com.minitech.miniworld.util.SystemUiHiderHoneycomb.this.mOnVisibilityChangeListener.onVisibilityChange(true);
                    com.minitech.miniworld.util.SystemUiHiderHoneycomb.this.mVisible = true;
                    return;
                }
                if (android.os.Build.VERSION.SDK_INT < 16) {
                    com.minitech.miniworld.util.SystemUiHiderHoneycomb.this.mActivity.getActionBar().hide();
                    com.minitech.miniworld.util.SystemUiHiderHoneycomb.this.mActivity.getWindow().setFlags(1024, 1024);
                }
                com.minitech.miniworld.util.SystemUiHiderHoneycomb.this.mOnVisibilityChangeListener.onVisibilityChange(false);
                com.minitech.miniworld.util.SystemUiHiderHoneycomb.this.mVisible = false;
            }
        };
        this.mShowFlags = 0;
        this.mHideFlags = 1;
        this.mTestFlags = 1;
        if ((this.mFlags & 2) != 0) {
            this.mShowFlags |= 1024;
            this.mHideFlags |= 1028;
        }
        if ((this.mFlags & 6) != 0) {
            this.mShowFlags |= 512;
            this.mHideFlags |= 514;
            this.mTestFlags |= 2;
        }
    }

    @Override // com.minitech.miniworld.util.SystemUiHiderBase, com.minitech.miniworld.util.SystemUiHider
    public void setup() {
        this.mAnchorView.setOnSystemUiVisibilityChangeListener(this.mSystemUiVisibilityChangeListener);
    }

    @Override // com.minitech.miniworld.util.SystemUiHiderBase, com.minitech.miniworld.util.SystemUiHider
    public void hide() {
        this.mAnchorView.setSystemUiVisibility(this.mHideFlags);
    }

    @Override // com.minitech.miniworld.util.SystemUiHiderBase, com.minitech.miniworld.util.SystemUiHider
    public void show() {
        this.mAnchorView.setSystemUiVisibility(this.mShowFlags);
    }

    @Override // com.minitech.miniworld.util.SystemUiHiderBase, com.minitech.miniworld.util.SystemUiHider
    public boolean isVisible() {
        return this.mVisible;
    }
}
