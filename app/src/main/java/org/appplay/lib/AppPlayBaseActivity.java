package org.appplay.lib;

/* loaded from: classes.dex */
public class AppPlayBaseActivity extends android.app.Activity {
    private static android.os.Handler msHandler;
    private static java.lang.String msPackageDataDir;
    private static java.lang.String msPackageName;
    private static java.lang.String msPkgSourcePath;
    private static java.lang.String msUniqueDeviceID;
    public static org.appplay.lib.AppPlayBaseActivity sTheActivity;
    public static java.lang.String sLibSO_Filename = "";
    public static java.lang.String sLibSO_Dir = "";
    private static java.lang.String sLibSO_Name = "AppPlayJNI";
    public static java.lang.String sVersion_Dir = "";
    public static java.lang.String sVersion_Filename = "";
    public static java.lang.String sVersion_Filename_Temp = "";
    private static float msBrightness = 1.0f;
    public org.appplay.lib.AppPlayUpdateLayout mUpdateView = null;
    public org.appplay.lib.AppPlayGLView TheGLView = null;
    private boolean mIsAppForeground = true;

    @Override // android.app.Activity
    // NOTE(jadx-fix): the original dex carried a "throws NameNotFoundException"
    // attribute that javac rejects on an override; the body already handles it.
    protected void onCreate(android.os.Bundle savedInstanceState) {
        sTheActivity = this;
        HideNavigationBar();
        super.onCreate(savedInstanceState);
        _SetPackageName();
        msUniqueDeviceID = genDeviceUniqueID(getApplicationContext());
        sLibSO_Dir = msPackageDataDir;
        sLibSO_Filename = java.lang.String.valueOf(msPackageDataDir) + "/lib" + sLibSO_Name + ".so";
        sVersion_Dir = msPackageDataDir;
        sVersion_Filename = java.lang.String.valueOf(msPackageDataDir) + "/version.xml";
        sVersion_Filename_Temp = java.lang.String.valueOf(msPackageDataDir) + "/version_Temp.xml";
        android.util.Log.d("appplay.lib", "PackageInfo: " + msPackageName + "," + msPkgSourcePath + "," + msPackageDataDir);
        org.appplay.lib.AppPlayMetaData.Initlize(getApplicationContext());
        android.os.Handler handler = new android.os.Handler() { // from class: org.appplay.lib.AppPlayBaseActivity.1
            @Override // android.os.Handler
            public void handleMessage(android.os.Message msg) {
                if (msg.what == 1) {
                    android.view.WindowManager.LayoutParams lp = org.appplay.lib.AppPlayBaseActivity.sTheActivity.getWindow().getAttributes();
                    lp.screenBrightness = msg.arg1 / 100.0f;
                    org.appplay.lib.AppPlayBaseActivity.sTheActivity.getWindow().setAttributes(lp);
                }
            }
        };
        msHandler = handler;
        getWindow().addFlags(128);
        android.view.WindowManager.LayoutParams lp = getWindow().getAttributes();
        lp.screenBrightness = 1.0f;
        getWindow().setAttributes(lp);
        if (org.appplay.lib.AppPlayMetaData.sIsNettable) {
            org.appplay.platformsdk.PlatformSDK.sThePlatformSDK = org.appplay.platformsdk.PlatformSDKCreater.Create(this);
        } else {
            Show_GLView();
        }
        android.util.Log.d("appplay.lib", "end - MiniWorldActivity::onCreate");
    }

    @Override // android.app.Activity
    protected void onStop() {
        super.onStop();
        android.util.Log.d("appplay.lib", "AppPlayBaseActivity::onStop");
        org.appplay.lib.AppPlayNatives.nativeOnStop();
        if (!_IsAppOnForeground()) {
            this.mIsAppForeground = false;
        }
    }

    @Override // android.app.Activity
    protected void onStart() {
        super.onStart();
        android.util.Log.d("appplay.lib", "AppPlayBaseActivity::onStart");
        org.appplay.lib.AppPlayNatives.nativeOnStart();
    }

    @Override // android.app.Activity
    protected void onRestart() {
        super.onRestart();
        android.util.Log.d("appplay.lib", "AppPlayBaseActivity::onRestart");
    }

    @Override // android.app.Activity, android.view.Window.Callback
    public void onWindowFocusChanged(boolean hasFocus) {
        super.onWindowFocusChanged(hasFocus);
        if (hasFocus) {
            HideNavigationBar();
        }
    }

    @Override // android.app.Activity
    protected void onPause() {
        android.util.Log.d("appplay.lib", "AppPlayBaseActivity::onPause");
        super.onPause();
        if (this.TheGLView != null) {
            this.TheGLView.onPause();
        }
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        android.util.Log.d("appplay.lib", "AppPlayBaseActivity::onResume");
        if (!this.mIsAppForeground) {
            if (org.appplay.platformsdk.PlatformSDK.sThePlatformSDK != null) {
                org.appplay.platformsdk.PlatformSDK.sThePlatformSDK.OnResume();
            }
            this.mIsAppForeground = true;
        }
        if (this.TheGLView != null) {
            this.TheGLView.onResume();
        }
        HideNavigationBar();
    }

    @Override // android.app.Activity
    public void onDestroy() {
        super.onDestroy();
        android.util.Log.d("appplay.lib", "AppPlayBaseActivity::onDestroy");
        if (this.TheGLView != null) {
            this.TheGLView.Destory();
        }
        msHandler = null;
        if (org.appplay.platformsdk.PlatformSDK.sThePlatformSDK != null) {
            org.appplay.platformsdk.PlatformSDK.sThePlatformSDK.Term();
        }
    }

    @Override // android.app.Activity, android.view.KeyEvent.Callback
    public boolean onKeyDown(int keyCode, android.view.KeyEvent event) {
        if (keyCode != 4 || org.appplay.platformsdk.PlatformSDK.sThePlatformSDK == null) {
            return super.onKeyDown(keyCode, event);
        }
        org.appplay.platformsdk.PlatformSDK.sThePlatformSDK.OnExist();
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean _IsOpenGLES20Valied() {
        android.app.ActivityManager am = (android.app.ActivityManager) getSystemService("activity");
        android.content.pm.ConfigurationInfo info = am.getDeviceConfigurationInfo();
        return info.reqGlEsVersion >= 131072;
    }

    private void _SetPackageName() {
        msPackageName = getApplication().getPackageName();
        android.content.pm.PackageManager packMgmr = getApplication().getPackageManager();
        try {
            android.content.pm.ApplicationInfo appInfo = packMgmr.getApplicationInfo(msPackageName, 0);
            msPkgSourcePath = appInfo.sourceDir;
            msPackageDataDir = appInfo.dataDir;
        } catch (android.content.pm.PackageManager.NameNotFoundException e) {
            e.printStackTrace();
            throw new java.lang.RuntimeException("Unable to locate assets, aborting...");
        }
    }

    private boolean _IsAppOnForeground() {
        android.app.ActivityManager activityManager = (android.app.ActivityManager) getApplicationContext().getSystemService("activity");
        java.lang.String packageName = getApplicationContext().getPackageName();
        java.util.List<android.app.ActivityManager.RunningAppProcessInfo> appProcesses = activityManager.getRunningAppProcesses();
        if (appProcesses == null) {
            return false;
        }
        for (android.app.ActivityManager.RunningAppProcessInfo appProcess : appProcesses) {
            if (appProcess.processName.equals(packageName) && appProcess.importance == 100) {
                return true;
            }
        }
        return false;
    }

    public void HideNavigationBar() {
        int uiOptions;
        if (android.os.Build.VERSION.SDK_INT >= 19) {
            uiOptions = 3846 | 4096;
        } else {
            uiOptions = 3846 | 1;
        }
        getWindow().getDecorView().setSystemUiVisibility(uiOptions);
    }

    public void ShowNavigationBar() {
        getWindow().getDecorView().setSystemUiVisibility(1792);
    }

    public void Show_UpdateView() {
        runOnUiThread(new java.lang.Runnable() { // from class: org.appplay.lib.AppPlayBaseActivity.2
            @Override // java.lang.Runnable
            public void run() {
                org.appplay.lib.AppPlayBaseActivity.this.mUpdateView = new org.appplay.lib.AppPlayUpdateLayout(org.appplay.lib.AppPlayBaseActivity.sTheActivity, com.minitech.miniworld.R.layout.appplayupdateview);
                org.appplay.lib.AppPlayBaseActivity.this.setContentView(org.appplay.lib.AppPlayBaseActivity.this.mUpdateView);
                org.appplay.lib.AppPlayBaseActivity.this.mUpdateView.CheckVersion();
            }
        });
    }

    public void Show_GLView() {
        runOnUiThread(new java.lang.Runnable() { // from class: org.appplay.lib.AppPlayBaseActivity.3
            @Override // java.lang.Runnable
            public void run() {
                java.io.File file = new java.io.File(org.appplay.lib.AppPlayBaseActivity.sLibSO_Filename);
                if (file.exists()) {
                    android.util.Log.d("appplay.ap", "begin - load sLibSO(from dir).");
                    try {
                        java.lang.System.loadLibrary("fmodex");
                        java.lang.System.load(org.appplay.lib.AppPlayBaseActivity.sLibSO_Filename);
                    } catch (java.lang.UnsatisfiedLinkError ulink) {
                        ulink.printStackTrace();
                        android.util.Log.d("appplay.lib", "end - load so(from dir Failed):" + org.appplay.lib.AppPlayBaseActivity.sLibSO_Filename);
                    }
                    android.util.Log.d("appplay.lib", "end - load sLibSO(form dir):" + org.appplay.lib.AppPlayBaseActivity.sLibSO_Filename);
                } else {
                    android.util.Log.d("appplay.lib", "begin - load so(form init packaged).");
                    try {
                        java.lang.System.loadLibrary("fmodex");
                        java.lang.System.loadLibrary(org.appplay.lib.AppPlayBaseActivity.sLibSO_Name);
                    } catch (java.lang.UnsatisfiedLinkError ulink2) {
                        ulink2.printStackTrace();
                        android.util.Log.d("appplay.lib", "end - load so(form init packaged Failed):");
                    }
                    android.util.Log.d("appplay.lib", "end - load so(form init packaged):" + org.appplay.lib.AppPlayBaseActivity.sLibSO_Name);
                }
                android.util.Log.d("appplay.lib", "ok - load so.");
                org.appplay.platformsdk.PlatformSDKNatives.SetPlatformSDK(org.appplay.platformsdk.PlatformSDKCreater.sSDK_CurrentName);
                android.view.ViewGroup.LayoutParams framelayout_params = new android.view.ViewGroup.LayoutParams(-1, -1);
                android.widget.FrameLayout framelayout = new android.widget.FrameLayout(org.appplay.lib.AppPlayBaseActivity.sTheActivity);
                framelayout.setLayoutParams(framelayout_params);
                if (org.appplay.lib.AppPlayBaseActivity.this._IsOpenGLES20Valied()) {
                    org.appplay.lib.AppPlayNatives.nativeInit(org.appplay.lib.AppPlayBaseActivity.msPkgSourcePath, org.appplay.lib.AppPlayBaseActivity.msPackageDataDir);
                    org.appplay.lib.AppPlayBaseActivity.this.TheGLView = new org.appplay.lib.AppPlayGLView(org.appplay.lib.AppPlayBaseActivity.sTheActivity);
                } else {
                    android.util.Log.d("appplay.lib", "info - Don't support gles2.0");
                    org.appplay.lib.AppPlayBaseActivity.this.finish();
                }
                framelayout.addView(org.appplay.lib.AppPlayBaseActivity.this.TheGLView);
                android.view.ViewGroup.LayoutParams edittext_layout_params = new android.view.ViewGroup.LayoutParams(-1, -2);
                org.appplay.lib.AppPlayEditText edittext = new org.appplay.lib.AppPlayEditText(org.appplay.lib.AppPlayBaseActivity.sTheActivity);
                edittext.setLayoutParams(edittext_layout_params);
                edittext.setSingleLine(true);
                edittext.setImeOptions(6);
                framelayout.addView(edittext);
                org.appplay.lib.AppPlayBaseActivity.this.TheGLView.SetEditText(edittext);
                org.appplay.lib.AppPlayBaseActivity.this.setContentView(framelayout);
                if (org.appplay.lib.AppPlayBaseActivity.this.mUpdateView != null) {
                    org.appplay.lib.AppPlayBaseActivity.this.mUpdateView.setVisibility(8);
                }
                org.appplay.lib.AppPlayBaseActivity.this.HideNavigationBar();
                android.view.View decorView = org.appplay.lib.AppPlayBaseActivity.this.getWindow().getDecorView();
                decorView.setOnSystemUiVisibilityChangeListener(new android.view.View.OnSystemUiVisibilityChangeListener() { // from class: org.appplay.lib.AppPlayBaseActivity.3.1
                    @Override // android.view.View.OnSystemUiVisibilityChangeListener
                    public void onSystemUiVisibilityChange(int visibility) {
                    }
                });
            }
        });
    }

    public void Show_NoNetDlg() {
        android.app.Dialog alertDialog = new android.app.AlertDialog.Builder(this).setTitle("注意").setMessage("您的网络已经断开，请连接！").setPositiveButton("确定", new android.content.DialogInterface.OnClickListener() { // from class: org.appplay.lib.AppPlayBaseActivity.4
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(android.content.DialogInterface dialog, int which) {
                dialog.dismiss();
            }
        }).create();
        alertDialog.show();
    }

    public void Show_NoWifiDialog() {
        android.app.Dialog alertDialog = new android.app.AlertDialog.Builder(this).setTitle("注意").setMessage("游戏需要更新，您处在非wifi网络环境下，确定进行更新？").setIcon(com.minitech.miniworld.R.drawable.ic_launcher).setPositiveButton("确定", new android.content.DialogInterface.OnClickListener() { // from class: org.appplay.lib.AppPlayBaseActivity.5
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(android.content.DialogInterface dialog, int which) {
                dialog.dismiss();
            }
        }).setNegativeButton("取消", new android.content.DialogInterface.OnClickListener() { // from class: org.appplay.lib.AppPlayBaseActivity.6
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(android.content.DialogInterface dialog, int which) {
                dialog.dismiss();
                org.appplay.lib.AppPlayBaseActivity.sTheActivity.MyExit();
            }
        }).create();
        alertDialog.show();
    }

    public void Show_ConnectResServerFailedDlg() {
        android.app.Dialog alertDialog = new android.app.AlertDialog.Builder(this).setTitle("注意").setMessage("连接服务器失败！").setPositiveButton("确定", new android.content.DialogInterface.OnClickListener() { // from class: org.appplay.lib.AppPlayBaseActivity.7
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(android.content.DialogInterface dialog, int which) {
                dialog.dismiss();
            }
        }).create();
        alertDialog.show();
    }

    public void Show_HasNewAPKDlg() {
        android.app.Dialog alertDialog = new android.app.AlertDialog.Builder(this).setTitle("注意").setMessage("安装包已有新版本,请下载安装.").setPositiveButton("确定", new android.content.DialogInterface.OnClickListener() { // from class: org.appplay.lib.AppPlayBaseActivity.8
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(android.content.DialogInterface dialog, int which) {
                dialog.dismiss();
                org.appplay.lib.AppPlayBaseActivity.sTheActivity.MyExit();
            }
        }).create();
        alertDialog.show();
    }

    public void MyExit() {
        runOnUiThread(new java.lang.Runnable() { // from class: org.appplay.lib.AppPlayBaseActivity.9
            @Override // java.lang.Runnable
            public void run() {
                android.os.Process.killProcess(android.os.Process.myPid());
            }
        });
    }

    protected java.lang.String genDeviceUniqueID(android.content.Context ctx) {
        android.telephony.TelephonyManager tm = (android.telephony.TelephonyManager) ctx.getSystemService("phone");
        java.lang.String tmDevice = tm.getDeviceId();
        java.lang.String androidId = android.provider.Settings.Secure.getString(ctx.getContentResolver(), "android_id");
        java.lang.String serial = android.os.Build.VERSION.SDK_INT > 8 ? android.os.Build.SERIAL : null;
        if (tmDevice != null) {
            return "01" + tmDevice;
        }
        if (androidId != null && !"9774d56d682e549c".equals(androidId)) {
            return "02" + androidId;
        }
        if (serial != null) {
            return "03" + serial;
        }
        return null;
    }

    public static void SetScreenBright(float bright) {
        android.os.Message msg = android.os.Message.obtain();
        msg.what = 1;
        msg.arg1 = (int) (100.0f * bright);
        msHandler.sendMessage(msg);
    }

    public static java.lang.String GetPackageName() {
        return msPackageName;
    }

    public static android.location.Location GetCurLocation() {
        android.location.LocationManager locmgr = (android.location.LocationManager) sTheActivity.getSystemService("location");
        android.location.Location loc = locmgr.getLastKnownLocation("gps");
        if (loc == null) {
            return locmgr.getLastKnownLocation("network");
        }
        return loc;
    }

    public static double GetLongitude() {
        android.location.Location loc = GetCurLocation();
        if (loc == null) {
            return 0.0d;
        }
        return loc.getLongitude();
    }

    public static double GetLatitude() {
        android.location.Location loc = GetCurLocation();
        if (loc == null) {
            return 0.0d;
        }
        return loc.getLatitude();
    }

    public static int GetNetworkState() {
        android.net.ConnectivityManager conMan = (android.net.ConnectivityManager) sTheActivity.getSystemService("connectivity");
        android.net.NetworkInfo.State wifi = conMan.getNetworkInfo(1).getState();
        int retval = wifi == android.net.NetworkInfo.State.CONNECTED ? 0 + 1 : 0;
        android.net.NetworkInfo.State mobile = conMan.getNetworkInfo(0).getState();
        return mobile == android.net.NetworkInfo.State.CONNECTED ? retval + 2 : retval;
    }

    public static java.lang.String GetDeviceUniqueID() {
        return msUniqueDeviceID;
    }

    public static void ThirdPlatformLogin() {
        sTheActivity._ThirdPlatformLogin1();
    }

    public void _ThirdPlatformLogin1() {
        runOnUiThread(new java.lang.Runnable() { // from class: org.appplay.lib.AppPlayBaseActivity.10
            @Override // java.lang.Runnable
            public void run() {
                if (org.appplay.platformsdk.PlatformSDK.sThePlatformSDK != null) {
                    org.appplay.platformsdk.PlatformSDK.sThePlatformSDK.Login();
                }
            }
        });
    }

    public static void ThirdPlatformLogout() {
        sTheActivity._Show_LogoutExitDlg();
    }

    public void _Show_LogoutExitDlg() {
        runOnUiThread(new java.lang.Runnable() { // from class: org.appplay.lib.AppPlayBaseActivity.11
            @Override // java.lang.Runnable
            public void run() {
                if (org.appplay.platformsdk.PlatformSDK.sThePlatformSDK != null) {
                    org.appplay.platformsdk.PlatformSDK.sThePlatformSDK.OnLogoutExist();
                }
            }
        });
    }

    public static void SynPay(java.lang.String productID, java.lang.String productName, float productPrice, float productOrginalPrice, int count, java.lang.String payDescription) {
        sTheActivity._SynPay(productID, productName, productPrice, productOrginalPrice, count, payDescription);
    }

    public void _SynPay(final java.lang.String productID, final java.lang.String productName, final float productPrice, final float productOrginalPrice, final int count, final java.lang.String payDescription) {
        runOnUiThread(new java.lang.Runnable() { // from class: org.appplay.lib.AppPlayBaseActivity.12
            @Override // java.lang.Runnable
            public void run() {
                if (org.appplay.platformsdk.PlatformSDK.sThePlatformSDK != null) {
                    org.appplay.platformsdk.PlatformSDK.sThePlatformSDK.SynPay(productID, productName, productPrice, productOrginalPrice, count, payDescription);
                }
            }
        });
    }

    public static void ASynPay(java.lang.String productID, java.lang.String productName, float productPrice, float productOrginalPrice, int count, java.lang.String payDescription) {
        sTheActivity._ASynPay(productID, productName, productPrice, productOrginalPrice, count, payDescription);
    }

    public void _ASynPay(final java.lang.String productID, final java.lang.String productName, final float productPrice, final float productOrginalPrice, final int count, final java.lang.String payDescription) {
        runOnUiThread(new java.lang.Runnable() { // from class: org.appplay.lib.AppPlayBaseActivity.13
            @Override // java.lang.Runnable
            public void run() {
                if (org.appplay.platformsdk.PlatformSDK.sThePlatformSDK != null) {
                    org.appplay.platformsdk.PlatformSDK.sThePlatformSDK.ASynPay(productID, productName, productPrice, productOrginalPrice, count, payDescription);
                }
            }
        });
    }

    @Override // android.app.Activity
    public void onBackPressed() {
        org.appplay.lib.AppPlayNatives.nativeOnBackPressed();
    }
}
