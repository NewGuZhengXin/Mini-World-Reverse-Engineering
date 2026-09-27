package android.support.v4.app;

/* loaded from: classes.dex */
class ShareCompatICS {
    private static final java.lang.String HISTORY_FILENAME_PREFIX = ".sharecompat_";

    ShareCompatICS() {
    }

    public static void configureMenuItem(android.view.MenuItem item, android.app.Activity callingActivity, android.content.Intent intent) {
        android.widget.ShareActionProvider provider;
        android.view.ActionProvider itemProvider = item.getActionProvider();
        if (!(itemProvider instanceof android.widget.ShareActionProvider)) {
            provider = new android.widget.ShareActionProvider(callingActivity);
        } else {
            provider = (android.widget.ShareActionProvider) itemProvider;
        }
        provider.setShareHistoryFileName(HISTORY_FILENAME_PREFIX + callingActivity.getClass().getName());
        provider.setShareIntent(intent);
        item.setActionProvider(provider);
    }
}
