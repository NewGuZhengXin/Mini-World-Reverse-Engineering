package android.support.v4.app;

/* loaded from: classes.dex */
class TaskStackBuilderJellybean {
    TaskStackBuilderJellybean() {
    }

    public static android.app.PendingIntent getActivitiesPendingIntent(android.content.Context context, int requestCode, android.content.Intent[] intents, int flags, android.os.Bundle options) {
        return android.app.PendingIntent.getActivities(context, requestCode, intents, flags, options);
    }
}
