package org.appplay.lib;

/* loaded from: classes.dex */
public class AppPlayVersion {
    private java.lang.String mLibSO_UpdateURL;
    private java.lang.String mLibSO_VersionCode;
    private java.lang.String mVersionStr;
    private int mMain = 0;
    private int mLib = 0;
    private int mRes = 0;
    private boolean mIsAPKNeedUpdate = false;
    private boolean mIsLibSONeedUpdate = false;
    private boolean mIsResNeedUpdate = false;

    // NOTE(jadx-fix): the dex carries an Exceptions attribute (ParserConfigurationException /
    // SAXException / IOException), but the body never propagates them - it only calls
    // _LoadVersion() and Integer.parseInt() - so the throws clause is dropped.
    public boolean LoadUpdateVersionXML() {
        java.lang.String versionStr;
        java.lang.String localVersionStr = _LoadVersion(1);
        android.util.Log.d("appplay.lib", "localVersionStr:" + localVersionStr);
        java.lang.String updateVersionStr = _LoadVersion(2);
        android.util.Log.d("appplay.lib", "updateVersionStr:" + updateVersionStr);
        if (updateVersionStr != null && updateVersionStr != "") {
            versionStr = updateVersionStr;
        } else {
            versionStr = localVersionStr;
        }
        android.util.Log.d("appplay.lib", "last versionStr:" + versionStr);
        java.lang.String[] versionArray = versionStr.split("\\.");
        int curLatestVersionAPK = 0;
        int curLatestVersionLib = 0;
        int curLatestVersionRes = 0;
        android.util.Log.w("phoenix3d.px2", "versionArray arrayLength:" + versionArray.length);
        if (3 == versionArray.length) {
            curLatestVersionAPK = java.lang.Integer.parseInt(versionArray[0]);
            curLatestVersionLib = java.lang.Integer.parseInt(versionArray[1]);
            curLatestVersionRes = java.lang.Integer.parseInt(versionArray[2]);
        }
        if (org.appplay.lib.AppPlayNetwork.DownloadFile(org.appplay.lib.AppPlayMetaData.sURL_Version, org.appplay.lib.AppPlayBaseActivity.sVersion_Dir, org.appplay.lib.AppPlayBaseActivity.sVersion_Filename_Temp, null)) {
            java.lang.String updateVersion_TempJStr = _LoadVersion(3);
            android.util.Log.d("appplay.ap", "updateVersion_TempJStr:" + updateVersion_TempJStr);
            java.lang.String[] updateVersionArray = updateVersion_TempJStr.split("\\.");
            int updateVersionAPK = 0;
            int updateVersionLib = 0;
            int updateVersionRes = 0;
            android.util.Log.d("appplay.ap", "updateVersionArray arrayLength:" + updateVersionArray.length);
            if (3 == updateVersionArray.length) {
                updateVersionAPK = java.lang.Integer.parseInt(updateVersionArray[0]);
                updateVersionLib = java.lang.Integer.parseInt(updateVersionArray[1]);
                updateVersionRes = java.lang.Integer.parseInt(updateVersionArray[2]);
            }
            if (updateVersionAPK > curLatestVersionAPK) {
                this.mIsAPKNeedUpdate = true;
            } else {
                this.mIsAPKNeedUpdate = false;
            }
            android.util.Log.d("appplay.ap", "IsAPKNeedUpdate:" + this.mIsAPKNeedUpdate);
            if (updateVersionLib > curLatestVersionLib) {
                this.mIsLibSONeedUpdate = true;
            } else {
                this.mIsLibSONeedUpdate = false;
            }
            android.util.Log.d("appplay.ap", "ISLibSONeedUpdate:" + this.mIsLibSONeedUpdate);
            if (updateVersionRes > curLatestVersionRes) {
                this.mIsResNeedUpdate = true;
            } else {
                this.mIsResNeedUpdate = false;
            }
            android.util.Log.d("appplay.ap", "IsResNeedUpdate:" + this.mIsResNeedUpdate);
            return true;
        }
        return false;
    }

    public boolean IsAPKNeedUpdate() {
        return this.mIsAPKNeedUpdate;
    }

    public boolean IsLibSONeedUpdate() {
        return this.mIsLibSONeedUpdate;
    }

    public boolean IsResNeedUpdate() {
        return this.mIsResNeedUpdate;
    }

    // NOTE(jadx-fix): throws clause dropped - every checked exception is caught below.
    public java.lang.String _LoadVersion(int type) {
        javax.xml.parsers.DocumentBuilderFactory docFactory = javax.xml.parsers.DocumentBuilderFactory.newInstance();
        try {
            javax.xml.parsers.DocumentBuilder docBuilder = docFactory.newDocumentBuilder();
            if (1 == type) {
                java.io.InputStream inStream = org.appplay.lib.AppPlayBaseActivity.sTheActivity.getResources().getAssets().open("Data/version.xml");
                org.w3c.dom.Document doc = docBuilder.parse(inStream);
                org.w3c.dom.Element rootEle = doc.getDocumentElement();
                java.lang.String name = rootEle.getNodeName();
                if (!name.equals("Version")) {
                    return "";
                }
                java.lang.String versionStr = rootEle.getAttribute("value");
                return versionStr;
            }
            java.lang.String filename = "";
            if (2 == type) {
                filename = org.appplay.lib.AppPlayBaseActivity.sVersion_Filename;
            } else if (3 == type) {
                filename = org.appplay.lib.AppPlayBaseActivity.sVersion_Filename_Temp;
            }
            java.io.File file = new java.io.File(filename);
            if (!file.exists()) {
                return "";
            }
            org.w3c.dom.Document doc2 = docBuilder.parse(file);
            org.w3c.dom.Element rootEle2 = doc2.getDocumentElement();
            java.lang.String name2 = rootEle2.getNodeName();
            if (!name2.equals("Version")) {
                return "";
            }
            java.lang.String versionStr2 = rootEle2.getAttribute("value");
            return versionStr2;
        } catch (java.io.IOException e) {
            e.printStackTrace();
            return "";
        } catch (javax.xml.parsers.ParserConfigurationException e1) {
            e1.printStackTrace();
            return "";
        } catch (org.xml.sax.SAXException e2) {
            e2.printStackTrace();
            return "";
        }
    }
}
