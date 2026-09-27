package com.minitech.miniworld.util;

/* loaded from: classes.dex */
public class SystemUiHiderBase extends com.minitech.miniworld.util.SystemUiHider {
    private boolean mVisible;

    protected SystemUiHiderBase(android.app.Activity activity, android.view.View anchorView, int flags) {
        super(activity, anchorView, flags);
        this.mVisible = true;
    }

    @Override // com.minitech.miniworld.util.SystemUiHider
    public void setup() {
        if ((this.mFlags & 1) == 0) {
            this.mActivity.getWindow().setFlags(768, 768);
        }
    }

    @Override // com.minitech.miniworld.util.SystemUiHider
    public boolean isVisible() {
        return this.mVisible;
    }

    @Override // com.minitech.miniworld.util.SystemUiHider
    public void hide() {
        if ((this.mFlags & 2) != 0) {
            this.mActivity.getWindow().setFlags(1024, 1024);
        }
        this.mOnVisibilityChangeListener.onVisibilityChange(false);
        this.mVisible = false;
    }

    @Override // com.minitech.miniworld.util.SystemUiHider
    public void show() {
        if ((this.mFlags & 2) != 0) {
            this.mActivity.getWindow().setFlags(0, 1024);
        }
        this.mOnVisibilityChangeListener.onVisibilityChange(true);
        this.mVisible = true;
    }
}
