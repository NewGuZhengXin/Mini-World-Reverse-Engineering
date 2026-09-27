package org.appplay.platformsdk;

/* loaded from: classes.dex */
public abstract class PlatformSDK {
    public static java.lang.String sPayHostName;
    public static java.lang.String sPayPlatform;
    public static java.lang.String sSource;
    private java.lang.String mSerial;
    public static org.appplay.platformsdk.PlatformSDK sThePlatformSDK = null;
    public static android.app.Activity sTheActivtiy = null;

    public abstract void ASynPay(java.lang.String str, java.lang.String str2, float f, float f2, int i, java.lang.String str3);

    public abstract void Init();

    public abstract void IsLogined();

    public abstract void Login();

    public abstract void Login_Guest();

    public abstract void Logout();

    public abstract void OnExist();

    public abstract void OnLogoutExist();

    public abstract void OnResume();

    public abstract void SynPay(java.lang.String str, java.lang.String str2, float f, float f2, int i, java.lang.String str3);

    public abstract void Term();

    public PlatformSDK(android.app.Activity act) {
        sTheActivtiy = act;
    }

    public java.lang.String GetSerial() {
        return this.mSerial;
    }

    public java.lang.String MakeSerial() {
        java.util.UUID guid = java.util.UUID.randomUUID();
        java.lang.String text = guid.toString();
        this.mSerial = text.replace("-", "".trim());
        return this.mSerial;
    }
}
