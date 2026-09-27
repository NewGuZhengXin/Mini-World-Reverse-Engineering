package org.appplay.lib;

/* loaded from: classes.dex */
public class AppPlayEditText extends android.widget.EditText {
    private org.appplay.lib.AppPlayGLView mView;

    public AppPlayEditText(android.content.Context context) {
        super(context);
    }

    public AppPlayEditText(android.content.Context context, android.util.AttributeSet attrs) {
        super(context, attrs);
    }

    public AppPlayEditText(android.content.Context context, android.util.AttributeSet attrs, int defStyle) {
        super(context, attrs, defStyle);
    }

    public void SetGLView(org.appplay.lib.AppPlayGLView view) {
        this.mView = view;
    }

    @Override // android.widget.TextView, android.view.View, android.view.KeyEvent.Callback
    public boolean onKeyDown(int keyCode, android.view.KeyEvent event) {
        super.onKeyDown(keyCode, event);
        if (keyCode == 4) {
            setVisibility(8);
            this.mView.requestFocus();
            return true;
        }
        return true;
    }
}
