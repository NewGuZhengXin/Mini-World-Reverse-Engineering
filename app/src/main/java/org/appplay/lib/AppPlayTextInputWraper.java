package org.appplay.lib;

/* loaded from: classes.dex */
public class AppPlayTextInputWraper implements android.text.TextWatcher, android.widget.TextView.OnEditorActionListener {
    private static final java.lang.Boolean sIsDebug = false;
    private org.appplay.lib.AppPlayGLView mMainView;
    private java.lang.String mOriginText;
    private java.lang.String mText;

    public AppPlayTextInputWraper(org.appplay.lib.AppPlayGLView view) {
        this.mMainView = view;
    }

    public void SetOriginText(java.lang.String text) {
        this.mOriginText = text;
    }

    @Override // android.text.TextWatcher
    public void afterTextChanged(android.text.Editable s) {
        if (!_IsFullScreenEdit().booleanValue()) {
            _LogD("AfterTextChanged:" + ((java.lang.Object) s));
            int numModified = s.length() - this.mText.length();
            if (numModified > 0) {
                java.lang.String insertText = s.subSequence(this.mText.length(), s.length()).toString();
                this.mMainView.InsertText(insertText);
                _LogD("InsertText(" + insertText + ")");
            } else {
                while (numModified < 0) {
                    this.mMainView.DeleteBackward();
                    _LogD("DeleteBackward");
                    numModified++;
                }
            }
            this.mText = s.toString();
        }
    }

    @Override // android.widget.TextView.OnEditorActionListener
    public boolean onEditorAction(android.widget.TextView v, int actionId, android.view.KeyEvent event) {
        if (this.mMainView.GetEditText() == v && _IsFullScreenEdit().booleanValue()) {
            for (int i = this.mOriginText.length(); i > 0; i--) {
                this.mMainView.DeleteBackward();
                _LogD("DeleteBackward");
            }
            java.lang.String text = v.getText().toString();
            if (text.compareTo("") == 0) {
                text = "\n";
            }
            if ('\n' != text.charAt(text.length() - 1)) {
                text = java.lang.String.valueOf(text) + '\n';
            }
            java.lang.String insertText = text;
            this.mMainView.InsertText(insertText);
            _LogD("InsertText(" + insertText + ")");
        }
        if (actionId == 6) {
            android.util.Log.d("appplay.lib", "info - EditorInfo.IME_ACTION_DONE");
            org.appplay.lib.AppPlayGLView.CloseIMEKeyboard();
            this.mMainView.requestFocus();
            org.appplay.lib.AppPlayNatives.nativeLostFocus();
            return false;
        }
        return false;
    }

    @Override // android.text.TextWatcher
    public void beforeTextChanged(java.lang.CharSequence s, int start, int count, int after) {
        _LogD("BeforeTextChanged(" + ((java.lang.Object) s) + ")start:" + start + ",count:,after:" + after);
        this.mText = s.toString();
    }

    @Override // android.text.TextWatcher
    public void onTextChanged(java.lang.CharSequence s, int start, int before, int count) {
    }

    private java.lang.Boolean _IsFullScreenEdit() {
        android.view.inputmethod.InputMethodManager imm = (android.view.inputmethod.InputMethodManager) this.mMainView.GetEditText().getContext().getSystemService("input_method");
        return java.lang.Boolean.valueOf(imm.isFullscreenMode());
    }

    private void _LogD(java.lang.String msg) {
        if (sIsDebug.booleanValue()) {
            android.util.Log.d("PX2TextInputWraper", msg);
        }
    }
}
