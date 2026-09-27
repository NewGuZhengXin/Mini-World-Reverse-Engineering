package org.appplay.lib;

/* loaded from: classes.dex */
class AppPlayRenderer implements android.opengl.GLSurfaceView.Renderer {
    private org.appplay.lib.AppPlayBaseActivity mActivity;
    private int mHeight;
    private int mWidth;

    public AppPlayRenderer(org.appplay.lib.AppPlayBaseActivity activity) {
        this.mActivity = activity;
    }

    @Override // android.opengl.GLSurfaceView.Renderer
    public void onSurfaceCreated(javax.microedition.khronos.opengles.GL10 gl, javax.microedition.khronos.egl.EGLConfig config) {
        android.util.Log.d("appplay.lib", "begin - surface created, navtiveInit.");
        org.appplay.lib.AppPlayNatives.nativeOnResetRender(this.mWidth, this.mHeight);
        android.util.Log.d("appplay.lib", "end - nativeInit.");
    }

    @Override // android.opengl.GLSurfaceView.Renderer
    public void onSurfaceChanged(javax.microedition.khronos.opengles.GL10 gl, int width, int height) {
    }

    @Override // android.opengl.GLSurfaceView.Renderer
    public void onDrawFrame(javax.microedition.khronos.opengles.GL10 gl) {
        org.appplay.lib.AppPlayNatives.nativeOnIdle();
    }

    public void SetSize(int w, int h) {
        this.mWidth = w;
        this.mHeight = h;
    }

    public void handleKeyDown(int keyCode) {
    }
}
