package android.support.v4.app;

/* loaded from: classes.dex */
public class ActivityCompat extends android.support.v4.content.ContextCompat {
    public static boolean invalidateOptionsMenu(android.app.Activity activity) {
        if (android.os.Build.VERSION.SDK_INT < 11) {
            return false;
        }
        android.support.v4.app.ActivityCompatHoneycomb.invalidateOptionsMenu(activity);
        return true;
    }

    public static void startActivity(android.app.Activity activity, android.content.Intent intent, android.os.Bundle options) {
        if (android.os.Build.VERSION.SDK_INT >= 16) {
            android.support.v4.app.ActivityCompatJB.startActivity(activity, intent, options);
        } else {
            activity.startActivity(intent);
        }
    }

    public static void startActivityForResult(android.app.Activity activity, android.content.Intent intent, int requestCode, android.os.Bundle options) {
        if (android.os.Build.VERSION.SDK_INT >= 16) {
            android.support.v4.app.ActivityCompatJB.startActivityForResult(activity, intent, requestCode, options);
        } else {
            activity.startActivityForResult(intent, requestCode);
        }
    }

    public static void finishAffinity(android.app.Activity activity) {
        if (android.os.Build.VERSION.SDK_INT >= 16) {
            android.support.v4.app.ActivityCompatJB.finishAffinity(activity);
        } else {
            activity.finish();
        }
    }
}
