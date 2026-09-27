package android.support.v4.content;

/* loaded from: classes.dex */
class ContextCompatHoneycomb {
    ContextCompatHoneycomb() {
    }

    static void startActivities(android.content.Context context, android.content.Intent[] intents) {
        context.startActivities(intents);
    }

    public static java.io.File getObbDir(android.content.Context context) {
        return context.getObbDir();
    }
}
