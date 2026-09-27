package android.support.v4.content;

/* loaded from: classes.dex */
class IntentCompatHoneycomb {
    IntentCompatHoneycomb() {
    }

    public static android.content.Intent makeMainActivity(android.content.ComponentName mainActivity) {
        return android.content.Intent.makeMainActivity(mainActivity);
    }

    public static android.content.Intent makeRestartActivityTask(android.content.ComponentName mainActivity) {
        return android.content.Intent.makeRestartActivityTask(mainActivity);
    }
}
