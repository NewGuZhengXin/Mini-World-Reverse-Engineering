package org.appplay.lib;

/* loaded from: classes.dex */
public class AppPlayUpdateLayout extends android.widget.LinearLayout {
    private static final int HIDE = 4;
    private static final int PROCESS = 3;
    private static final int SHOWCHECKING = 1;
    private static final int SHOWUPDATING = 2;
    public android.view.View TheRootView;
    private float mClientVersion;
    android.os.Handler mHandler;
    private android.view.LayoutInflater mLayoutInflater;
    private android.widget.ProgressBar mProgress;
    private org.appplay.lib.AppPlayBaseActivity mTheActivity;
    private android.widget.TextView mTitle;

    public AppPlayUpdateLayout(android.content.Context context, int layoutId) {
        super(context);
        this.mClientVersion = 0.0f;
        this.mHandler = new android.os.Handler() { // from class: org.appplay.lib.AppPlayUpdateLayout.1
            @Override // android.os.Handler
            public void handleMessage(android.os.Message msg) {
                switch (msg.what) {
                    case 1:
                        org.appplay.lib.AppPlayUpdateLayout.this._ShowChecking();
                        break;
                    case 2:
                        org.appplay.lib.AppPlayUpdateLayout.this._ShowUpdating();
                        break;
                    case 3:
                        org.appplay.lib.AppPlayUpdateLayout.this._Process(msg.arg1);
                        break;
                    case 4:
                        org.appplay.lib.AppPlayUpdateLayout.this._Hide();
                        break;
                }
            }
        };
        this.mTheActivity = (org.appplay.lib.AppPlayBaseActivity) context;
        this.mLayoutInflater = (android.view.LayoutInflater) getContext().getSystemService("layout_inflater");
        this.TheRootView = this.mLayoutInflater.inflate(layoutId, (android.view.ViewGroup) this, true);
        this.mTitle = (android.widget.TextView) this.TheRootView.findViewById(com.minitech.miniworld.R.id.AppPlayDownloadTitle);
        this.mProgress = (android.widget.ProgressBar) this.TheRootView.findViewById(com.minitech.miniworld.R.id.AppPlayUpdateProgressBar);
    }

    public void CheckVersion() {
        if (!org.appplay.lib.AppPlayNetwork.IsNetConnected(this.mTheActivity)) {
            this.mTheActivity.Show_NoNetDlg();
        }
        android.os.Message msg = new android.os.Message();
        msg.what = 1;
        this.mHandler.dispatchMessage(msg);
        org.appplay.lib.AppPlayVersion version = new org.appplay.lib.AppPlayVersion();
        boolean loadRet = version.LoadUpdateVersionXML();
        if (!loadRet) {
            this.mTheActivity.Show_ConnectResServerFailedDlg();
        }
        if (!version.IsAPKNeedUpdate()) {
            if ((version.IsLibSONeedUpdate() || version.IsResNeedUpdate()) && !org.appplay.lib.AppPlayNetwork.IsWifiConnected(this.mTheActivity)) {
                this.mTheActivity.Show_NoWifiDialog();
            }
            if (version.IsLibSONeedUpdate()) {
                java.util.TimerTask task = new java.util.TimerTask() { // from class: org.appplay.lib.AppPlayUpdateLayout.2
                    @Override // java.util.TimerTask, java.lang.Runnable
                    public void run() {
                        android.os.Message msg2 = new android.os.Message();
                        msg2.what = 2;
                        org.appplay.lib.AppPlayUpdateLayout.this.mHandler.dispatchMessage(msg2);
                        try {
                            org.apache.http.client.HttpClient client = new org.apache.http.impl.client.DefaultHttpClient();
                            org.apache.http.client.methods.HttpGet get = new org.apache.http.client.methods.HttpGet(new java.net.URI(org.appplay.lib.AppPlayMetaData.sURL_LibSO));
                            try {
                                org.apache.http.HttpResponse response = client.execute(get);
                                org.apache.http.HttpEntity entity = response.getEntity();
                                long length = entity.getContentLength();
                                java.io.InputStream is = entity.getContent();
                                java.io.FileOutputStream fileOutputStream = null;
                                if (is != null) {
                                    java.io.File file = new java.io.File(org.appplay.lib.AppPlayBaseActivity.sLibSO_Filename);
                                    if (!file.exists()) {
                                        new java.io.File(org.appplay.lib.AppPlayBaseActivity.sLibSO_Dir).mkdir();
                                        file.createNewFile();
                                    }
                                    fileOutputStream = new java.io.FileOutputStream(file);
                                    byte[] b = new byte[4096];
                                    int count = 0;
                                    while (true) {
                                        try {
                                            android.os.Message message = msg2;
                                            int charb = is.read(b);
                                            if (charb == -1) {
                                                break;
                                            }
                                            fileOutputStream.write(b, 0, charb);
                                            count += charb;
                                            double progress = (count / length) * 100.0d;
                                            msg2 = new android.os.Message();
                                            msg2.what = 3;
                                            msg2.arg1 = (int) progress;
                                            org.appplay.lib.AppPlayUpdateLayout.this.mHandler.dispatchMessage(msg2);
                                        } catch (java.lang.Exception e) {
                                            // NOTE(jadx-fix): the original handler fell through to the common
                                            // tail of run() (DownloadFile + Show_GLView), so leave the loop here.
                                            e.printStackTrace();
                                            break;
                                        }
                                    }
                                }
                                fileOutputStream.flush();
                                if (fileOutputStream != null) {
                                    fileOutputStream.close();
                                }
                            } catch (java.lang.Exception e2) {
                                // NOTE(jadx-fix): both catch handlers of the original bytecode jumped to
                                // the same tail (DownloadFile + Show_GLView) executed after this block.
                                e2.printStackTrace();
                            }
                        } catch (java.lang.Exception e3) {
                            e3.printStackTrace();
                        }
                        org.appplay.lib.AppPlayNetwork.DownloadFile(org.appplay.lib.AppPlayMetaData.sURL_Version, org.appplay.lib.AppPlayBaseActivity.sVersion_Dir, org.appplay.lib.AppPlayBaseActivity.sVersion_Filename, null);
                        org.appplay.lib.AppPlayBaseActivity.sTheActivity.Show_GLView();
                    }
                };
                java.util.Timer timer = new java.util.Timer();
                timer.schedule(task, 100L);
                return;
            }
            org.appplay.lib.AppPlayBaseActivity.sTheActivity.Show_GLView();
            return;
        }
        this.mTheActivity.Show_HasNewAPKDlg();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void _ShowChecking() {
        this.mTheActivity.runOnUiThread(new java.lang.Runnable() { // from class: org.appplay.lib.AppPlayUpdateLayout.3
            @Override // java.lang.Runnable
            public void run() {
                org.appplay.lib.AppPlayUpdateLayout.this.mTitle.setVisibility(0);
                org.appplay.lib.AppPlayUpdateLayout.this.mTitle.setText("检测版本...");
                org.appplay.lib.AppPlayUpdateLayout.this.invalidate();
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void _ShowUpdating() {
        this.mTheActivity.runOnUiThread(new java.lang.Runnable() { // from class: org.appplay.lib.AppPlayUpdateLayout.4
            @Override // java.lang.Runnable
            public void run() {
                org.appplay.lib.AppPlayUpdateLayout.this.mTitle.setVisibility(0);
                org.appplay.lib.AppPlayUpdateLayout.this.mProgress.setVisibility(0);
                org.appplay.lib.AppPlayUpdateLayout.this.mTitle.setText("更新核心程序...");
                org.appplay.lib.AppPlayUpdateLayout.this.invalidate();
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void _Hide() {
        this.mTheActivity.runOnUiThread(new java.lang.Runnable() { // from class: org.appplay.lib.AppPlayUpdateLayout.5
            @Override // java.lang.Runnable
            public void run() {
                org.appplay.lib.AppPlayUpdateLayout.this.mTitle.setVisibility(8);
                org.appplay.lib.AppPlayUpdateLayout.this.mProgress.setVisibility(8);
                org.appplay.lib.AppPlayUpdateLayout.this.invalidate();
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void _Process(final double process) {
        this.mTheActivity.runOnUiThread(new java.lang.Runnable() { // from class: org.appplay.lib.AppPlayUpdateLayout.6
            @Override // java.lang.Runnable
            public void run() {
                org.appplay.lib.AppPlayUpdateLayout.this.mProgress.setProgress((int) process);
                org.appplay.lib.AppPlayUpdateLayout.this.mTitle.setText("更新核心程序..." + ((int) process) + "%");
                org.appplay.lib.AppPlayUpdateLayout.this.invalidate();
            }
        });
    }
}
