package org.appplay.lib;

/* loaded from: classes.dex */
public class AppPlayGLView extends android.opengl.GLSurfaceView {
    private static final int HANDLER_CLOSE_IME_KEYBOARD = 3;
    private static final int HANDLER_OPEN_IME_KEYBOARD = 2;
    private static android.os.Handler msHandler;
    private static org.appplay.lib.AppPlayTextInputWraper msTextInputWraper;
    private static org.appplay.lib.AppPlayGLView sTheAppPlayGLView;
    private org.appplay.lib.AppPlayEditText mEditText;
    private org.appplay.lib.AppPlayRenderer mRenderer;

    public AppPlayGLView(android.content.Context context) {
        super(context);
        this.mRenderer = null;
        this.mEditText = null;
        setEGLContextClientVersion(2);
        setEGLConfigChooser(5, 6, 5, 0, 16, 0);
        this.mRenderer = new org.appplay.lib.AppPlayRenderer((org.appplay.lib.AppPlayBaseActivity) context);
        setRenderer(this.mRenderer);
        if (android.os.Build.VERSION.SDK_INT >= 11) {
            setPreserveEGLContextOnPause(true);
        }
        _InitView();
        android.util.Log.d("appplay.lib", "info -AppPlayGLView created.");
    }

    public android.widget.TextView GetEditText() {
        return this.mEditText;
    }

    private void _InitView() {
        setFocusableInTouchMode(true);
        sTheAppPlayGLView = this;
        msTextInputWraper = new org.appplay.lib.AppPlayTextInputWraper(this);
        msHandler = new android.os.Handler() { // from class: org.appplay.lib.AppPlayGLView.1
            @Override // android.os.Handler
            public void handleMessage(android.os.Message msg) {
                switch (msg.what) {
                    case 2:
                        org.appplay.lib.AppPlayGLView.this.mEditText.setVisibility(0);
                        if (org.appplay.lib.AppPlayGLView.this.mEditText != null && org.appplay.lib.AppPlayGLView.this.mEditText.requestFocus()) {
                            org.appplay.lib.AppPlayGLView.this.mEditText.removeTextChangedListener(org.appplay.lib.AppPlayGLView.msTextInputWraper);
                            org.appplay.lib.AppPlayGLView.this.mEditText.setText("");
                            java.lang.String text = (java.lang.String) msg.obj;
                            android.util.Log.v("appplay.lib", "mEditText" + text);
                            org.appplay.lib.AppPlayGLView.this.mEditText.append(text);
                            org.appplay.lib.AppPlayGLView.msTextInputWraper.SetOriginText(text);
                            org.appplay.lib.AppPlayGLView.this.mEditText.addTextChangedListener(org.appplay.lib.AppPlayGLView.msTextInputWraper);
                            android.view.inputmethod.InputMethodManager imm = (android.view.inputmethod.InputMethodManager) org.appplay.lib.AppPlayGLView.sTheAppPlayGLView.getContext().getSystemService("input_method");
                            imm.showSoftInput(org.appplay.lib.AppPlayGLView.this.mEditText, 0);
                            break;
                        }
                        break;
                    case 3:
                        if (org.appplay.lib.AppPlayGLView.this.mEditText != null) {
                            org.appplay.lib.AppPlayGLView.this.mEditText.removeTextChangedListener(org.appplay.lib.AppPlayGLView.msTextInputWraper);
                            android.view.inputmethod.InputMethodManager imm2 = (android.view.inputmethod.InputMethodManager) org.appplay.lib.AppPlayGLView.sTheAppPlayGLView.getContext().getSystemService("input_method");
                            imm2.hideSoftInputFromWindow(org.appplay.lib.AppPlayGLView.this.mEditText.getWindowToken(), 0);
                            org.appplay.lib.AppPlayGLView.this.mEditText.setVisibility(8);
                            org.appplay.lib.AppPlayGLView.this.requestFocus();
                            break;
                        }
                        break;
                }
            }
        };
    }

    @Override // android.view.View
    protected void onSizeChanged(int w, int h, int oldw, int oldh) {
        if (this.mRenderer != null) {
            this.mRenderer.SetSize(w, h);
        }
        android.util.Log.d("appplay.lib", "info - AppPlayGLView::onSizeChanged");
    }

    @Override // android.opengl.GLSurfaceView
    public void onPause() {
        queueEvent(new java.lang.Runnable() { // from class: org.appplay.lib.AppPlayGLView.2
            @Override // java.lang.Runnable
            public void run() {
                org.appplay.lib.AppPlayNatives.nativeOnPause();
            }
        });
        super.onPause();
    }

    @Override // android.opengl.GLSurfaceView
    public void onResume() {
        super.onResume();
        queueEvent(new java.lang.Runnable() { // from class: org.appplay.lib.AppPlayGLView.3
            @Override // java.lang.Runnable
            public void run() {
                org.appplay.lib.AppPlayNatives.nativeOnResume();
            }
        });
    }

    @Override // android.view.View
    public boolean onTouchEvent(android.view.MotionEvent event) {
        int pointerNumber = event.getPointerCount();
        final int[] ids = new int[pointerNumber];
        final float[] xs = new float[pointerNumber];
        final float[] ys = new float[pointerNumber];
        for (int i = 0; i < pointerNumber; i++) {
            ids[i] = event.getPointerId(i);
            xs[i] = event.getX(i);
            ys[i] = event.getY(i);
        }
        switch (event.getAction() & android.support.v4.view.MotionEventCompat.ACTION_MASK) {
            case 0:
                final int idDown = event.getPointerId(0);
                final float xDown = xs[0];
                final float yDown = ys[0];
                queueEvent(new java.lang.Runnable() { // from class: org.appplay.lib.AppPlayGLView.5
                    @Override // java.lang.Runnable
                    public void run() {
                        org.appplay.lib.AppPlayNatives.nativeTouchPressed(idDown, xDown, yDown);
                    }
                });
                break;
            case 1:
                final int idUp = event.getPointerId(0);
                final float xUp = xs[0];
                final float yUp = ys[0];
                queueEvent(new java.lang.Runnable() { // from class: org.appplay.lib.AppPlayGLView.8
                    @Override // java.lang.Runnable
                    public void run() {
                        org.appplay.lib.AppPlayNatives.nativeTouchReleased(idUp, xUp, yUp);
                    }
                });
                break;
            case 2:
                queueEvent(new java.lang.Runnable() { // from class: org.appplay.lib.AppPlayGLView.6
                    @Override // java.lang.Runnable
                    public void run() {
                        org.appplay.lib.AppPlayNatives.nativeTouchMoved(ids, xs, ys);
                    }
                });
                break;
            case 3:
                queueEvent(new java.lang.Runnable() { // from class: org.appplay.lib.AppPlayGLView.9
                    @Override // java.lang.Runnable
                    public void run() {
                        org.appplay.lib.AppPlayNatives.nativeTouchCancelled(ids, xs, ys);
                    }
                });
                break;
            case 5:
                int indexPointerDown = event.getAction() >> 8;
                final int idPointerDown = event.getPointerId(indexPointerDown);
                final float xPointerDown = event.getX(indexPointerDown);
                final float yPointerDown = event.getY(indexPointerDown);
                queueEvent(new java.lang.Runnable() { // from class: org.appplay.lib.AppPlayGLView.4
                    @Override // java.lang.Runnable
                    public void run() {
                        org.appplay.lib.AppPlayNatives.nativeTouchPressed(idPointerDown, xPointerDown, yPointerDown);
                    }
                });
                break;
            case 6:
                int indexPointUp = event.getAction() >> 8;
                final int idPointerUp = event.getPointerId(indexPointUp);
                final float xPointerUp = event.getX(indexPointUp);
                final float yPointerUp = event.getY(indexPointUp);
                queueEvent(new java.lang.Runnable() { // from class: org.appplay.lib.AppPlayGLView.7
                    @Override // java.lang.Runnable
                    public void run() {
                        org.appplay.lib.AppPlayNatives.nativeTouchReleased(idPointerUp, xPointerUp, yPointerUp);
                    }
                });
                break;
        }
        return true;
    }

    public void SetEditText(org.appplay.lib.AppPlayEditText edittext) {
        this.mEditText = edittext;
        if (this.mEditText != null && msTextInputWraper != null) {
            this.mEditText.setOnEditorActionListener(msTextInputWraper);
            this.mEditText.SetGLView(this);
            this.mEditText.setVisibility(8);
            requestFocus();
        }
    }

    public void Destory() {
        queueEvent(new java.lang.Runnable() { // from class: org.appplay.lib.AppPlayGLView.10
            @Override // java.lang.Runnable
            public void run() {
            }
        });
    }

    @Override // android.view.View, android.view.KeyEvent.Callback
    public boolean onKeyDown(final int pKeyCode, android.view.KeyEvent pKeyEvent) {
        switch (pKeyCode) {
            case android.support.v4.util.TimeUtils.HUNDRED_DAY_FIELD_LEN /* 19 */:
            case 20:
            case 21:
            case 22:
            case 23:
            case 66:
            case 82:
            case 85:
                queueEvent(new java.lang.Runnable() { // from class: org.appplay.lib.AppPlayGLView.11
                    @Override // java.lang.Runnable
                    public void run() {
                        org.appplay.lib.AppPlayGLView.this.mRenderer.handleKeyDown(pKeyCode);
                    }
                });
                return true;
            default:
                return super.onKeyDown(pKeyCode, pKeyEvent);
        }
    }

    public static void OpenIMEKeyboard() {
        android.os.Message msg = new android.os.Message();
        msg.what = 2;
        msg.obj = sTheAppPlayGLView.GetContentText();
        msHandler.sendMessage(msg);
    }

    public static void CloseIMEKeyboard() {
        android.os.Message msg = new android.os.Message();
        msg.what = 3;
        msHandler.sendMessage(msg);
    }

    private java.lang.String GetContentText() {
        android.util.Log.v("appplay.lib", "nativeGetContentText" + org.appplay.lib.AppPlayNatives.nativeGetContentText());
        return org.appplay.lib.AppPlayNatives.nativeGetContentText();
    }

    public void InsertText(final java.lang.String text) {
        queueEvent(new java.lang.Runnable() { // from class: org.appplay.lib.AppPlayGLView.12
            @Override // java.lang.Runnable
            public void run() {
                org.appplay.lib.AppPlayNatives.nativeInsertText(text);
            }
        });
    }

    public void DeleteBackward() {
        queueEvent(new java.lang.Runnable() { // from class: org.appplay.lib.AppPlayGLView.13
            @Override // java.lang.Runnable
            public void run() {
                org.appplay.lib.AppPlayNatives.nativeDeleteBackward();
            }
        });
    }
}
