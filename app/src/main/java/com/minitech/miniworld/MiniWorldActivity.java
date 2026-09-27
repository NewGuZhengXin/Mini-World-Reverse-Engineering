package com.minitech.miniworld;

/* loaded from: classes.dex */
public class MiniWorldActivity extends org.appplay.lib.AppPlayBaseActivity {
    @Override // org.appplay.lib.AppPlayBaseActivity, android.app.Activity
    // NOTE(jadx-fix): "throws NameNotFoundException" removed, javac rejects it on an override.
    protected void onCreate(android.os.Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
    }

    @Override // org.appplay.lib.AppPlayBaseActivity, android.app.Activity
    protected void onPause() {
        android.util.Log.d("appplay.ap", "MiniWorldActivity::onPause");
        super.onPause();
    }

    @Override // org.appplay.lib.AppPlayBaseActivity, android.app.Activity
    protected void onResume() {
        super.onResume();
    }
}
