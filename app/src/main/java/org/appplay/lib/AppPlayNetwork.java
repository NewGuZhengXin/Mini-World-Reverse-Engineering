package org.appplay.lib;

/* loaded from: classes.dex */
public class AppPlayNetwork {

    public interface DownloadProcess {
        void process(double d);
    }

    public static boolean IsNetConnected(android.content.Context context) {
        android.net.ConnectivityManager connectivityManager = (android.net.ConnectivityManager) context.getSystemService("connectivity");
        android.net.NetworkInfo networkinfo = connectivityManager.getActiveNetworkInfo();
        return networkinfo != null && networkinfo.isAvailable();
    }

    public static boolean IsWifiConnected(android.content.Context context) {
        android.net.ConnectivityManager connectivityManager = (android.net.ConnectivityManager) context.getSystemService("connectivity");
        android.net.NetworkInfo wifiNetworkInfo = connectivityManager.getNetworkInfo(1);
        return wifiNetworkInfo != null && wifiNetworkInfo.isConnected();
    }

    public static boolean DownloadFile(java.lang.String url, java.lang.String dir, java.lang.String filename, org.appplay.lib.AppPlayNetwork.DownloadProcess callback) {
        org.apache.http.client.HttpClient client = new org.apache.http.impl.client.DefaultHttpClient();
        org.apache.http.client.methods.HttpGet get = new org.apache.http.client.methods.HttpGet(url);
        try {
            org.apache.http.HttpResponse response = client.execute(get);
            org.apache.http.HttpEntity entity = response.getEntity();
            long length = entity.getContentLength();
            java.io.InputStream in = entity.getContent();
            java.io.FileOutputStream fileOutputStream = null;
            if (in != null) {
                java.io.File file = new java.io.File(filename);
                if (!file.exists()) {
                    new java.io.File(dir).mkdir();
                    file.createNewFile();
                }
                fileOutputStream = new java.io.FileOutputStream(file);
                byte[] b = new byte[4096];
                int count = 0;
                while (true) {
                    int charb = in.read(b);
                    if (charb == -1) {
                        break;
                    }
                    fileOutputStream.write(b, 0, charb);
                    count += charb;
                    double progress = (count / length) * 100.0d;
                    if (callback != null) {
                        callback.process(progress);
                    }
                }
            }
            fileOutputStream.flush();
            if (fileOutputStream != null) {
                fileOutputStream.close();
            }
            return true;
        } catch (java.lang.Exception e) {
            e.printStackTrace();
            return false;
        }
    }
}
