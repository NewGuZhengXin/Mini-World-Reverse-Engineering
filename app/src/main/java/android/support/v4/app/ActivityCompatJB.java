package android.support.v4.app;

/* loaded from: classes.dex */
class ActivityCompatJB {
    ActivityCompatJB() {
    }

    public static void startActivity(android.content.Context context, android.content.Intent intent, android.os.Bundle options) {
        context.startActivity(intent, options);
    }

    public static void startActivityForResult(android.app.Activity activity, android.content.Intent intent, int requestCode, android.os.Bundle options) {
        activity.startActivityForResult(intent, requestCode, options);
    }

    public static void finishAffinity(android.app.Activity activity) {
        activity.finishAffinity();
    }
}
