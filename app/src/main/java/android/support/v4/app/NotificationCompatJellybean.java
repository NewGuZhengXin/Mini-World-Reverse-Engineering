package android.support.v4.app;

/* loaded from: classes.dex */
class NotificationCompatJellybean {
    private android.app.Notification.Builder b;

    public NotificationCompatJellybean(android.content.Context context, android.app.Notification n, java.lang.CharSequence contentTitle, java.lang.CharSequence contentText, java.lang.CharSequence contentInfo, android.widget.RemoteViews tickerView, int number, android.app.PendingIntent contentIntent, android.app.PendingIntent fullScreenIntent, android.graphics.Bitmap largeIcon, int mProgressMax, int mProgress, boolean mProgressIndeterminate, boolean useChronometer, int priority, java.lang.CharSequence subText) {
        this.b = new android.app.Notification.Builder(context).setWhen(n.when).setSmallIcon(n.icon, n.iconLevel).setContent(n.contentView).setTicker(n.tickerText, tickerView).setSound(n.sound, n.audioStreamType).setVibrate(n.vibrate).setLights(n.ledARGB, n.ledOnMS, n.ledOffMS).setOngoing((n.flags & 2) != 0).setOnlyAlertOnce((n.flags & 8) != 0).setAutoCancel((n.flags & 16) != 0).setDefaults(n.defaults).setContentTitle(contentTitle).setContentText(contentText).setSubText(subText).setContentInfo(contentInfo).setContentIntent(contentIntent).setDeleteIntent(n.deleteIntent).setFullScreenIntent(fullScreenIntent, (n.flags & 128) != 0).setLargeIcon(largeIcon).setNumber(number).setUsesChronometer(useChronometer).setPriority(priority).setProgress(mProgressMax, mProgress, mProgressIndeterminate);
    }

    public void addAction(int icon, java.lang.CharSequence title, android.app.PendingIntent intent) {
        this.b.addAction(icon, title, intent);
    }

    public void addBigTextStyle(java.lang.CharSequence bigContentTitle, boolean useSummary, java.lang.CharSequence summaryText, java.lang.CharSequence bigText) {
        android.app.Notification.BigTextStyle style = new android.app.Notification.BigTextStyle(this.b).setBigContentTitle(bigContentTitle).bigText(bigText);
        if (useSummary) {
            style.setSummaryText(summaryText);
        }
    }

    public void addBigPictureStyle(java.lang.CharSequence bigContentTitle, boolean useSummary, java.lang.CharSequence summaryText, android.graphics.Bitmap bigPicture, android.graphics.Bitmap bigLargeIcon, boolean bigLargeIconSet) {
        android.app.Notification.BigPictureStyle style = new android.app.Notification.BigPictureStyle(this.b).setBigContentTitle(bigContentTitle).bigPicture(bigPicture);
        if (bigLargeIconSet) {
            style.bigLargeIcon(bigLargeIcon);
        }
        if (useSummary) {
            style.setSummaryText(summaryText);
        }
    }

    public void addInboxStyle(java.lang.CharSequence bigContentTitle, boolean useSummary, java.lang.CharSequence summaryText, java.util.ArrayList<java.lang.CharSequence> texts) {
        android.app.Notification.InboxStyle style = new android.app.Notification.InboxStyle(this.b).setBigContentTitle(bigContentTitle);
        if (useSummary) {
            style.setSummaryText(summaryText);
        }
        java.util.Iterator<java.lang.CharSequence> i$ = texts.iterator(); // NOTE(jadx-fix): restore the element type erased by jadx so next() yields CharSequence
        while (i$.hasNext()) {
            java.lang.CharSequence text = i$.next();
            style.addLine(text);
        }
    }

    public android.app.Notification build() {
        return this.b.build();
    }
}
