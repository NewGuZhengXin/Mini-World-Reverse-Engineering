package com.minitech.miniworld;

/* loaded from: classes.dex */
public class SplashScreenActivity extends android.app.Activity {
    protected boolean _active = true;
    protected int _splashTime = 500;

    @Override // android.app.Activity
    protected void onCreate(android.os.Bundle savedInstanceState) {
        int uiOptions;
        super.onCreate(savedInstanceState);
        getWindow().addFlags(128);
        setContentView(com.minitech.miniworld.R.layout.appplayupdateview);
        if (android.os.Build.VERSION.SDK_INT >= 19) {
            uiOptions = 3846 | 4096;
        } else {
            uiOptions = 3846 | 1;
        }
        getWindow().getDecorView().setSystemUiVisibility(uiOptions);
        java.lang.Thread splashTread = new java.lang.Thread() { // from class: com.minitech.miniworld.SplashScreenActivity.1
            @Override // java.lang.Thread, java.lang.Runnable
            public void run() {
                int waited = 0;
                while (com.minitech.miniworld.SplashScreenActivity.this._active && waited < com.minitech.miniworld.SplashScreenActivity.this._splashTime) {
                    try {
                        sleep(20L);
                        if (com.minitech.miniworld.SplashScreenActivity.this._active) {
                            waited += 20;
                        }
                    } catch (java.lang.InterruptedException e) {
                        return;
                    } finally {
                        com.minitech.miniworld.SplashScreenActivity.this.startActivity(new android.content.Intent("com.minitech.miniworld.MiniWorldActivity"));
                        com.minitech.miniworld.SplashScreenActivity.this.finish();
                    }
                }
            }
        };
        splashTread.start();
    }

    @Override // android.app.Activity
    public boolean onTouchEvent(android.view.MotionEvent event) {
        if (event.getAction() == 0) {
            android.util.Log.d("appplay.ap", "splashscreen touchdown");
            this._active = false;
            return true;
        }
        return true;
    }
}
