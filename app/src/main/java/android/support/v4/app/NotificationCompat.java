package android.support.v4.app;

/* loaded from: classes.dex */
public class NotificationCompat {
    public static final int FLAG_HIGH_PRIORITY = 128;
    private static final android.support.v4.app.NotificationCompat.NotificationCompatImpl IMPL;
    public static final int PRIORITY_DEFAULT = 0;
    public static final int PRIORITY_HIGH = 1;
    public static final int PRIORITY_LOW = -1;
    public static final int PRIORITY_MAX = 2;
    public static final int PRIORITY_MIN = -2;

    interface NotificationCompatImpl {
        android.app.Notification build(android.support.v4.app.NotificationCompat.Builder builder);
    }

    static class NotificationCompatImplBase implements android.support.v4.app.NotificationCompat.NotificationCompatImpl {
        NotificationCompatImplBase() {
        }

        @Override // android.support.v4.app.NotificationCompat.NotificationCompatImpl
        public android.app.Notification build(android.support.v4.app.NotificationCompat.Builder b) {
            android.app.Notification result = b.mNotification;
            // NOTE(jadx-fix): Notification.setLatestEventInfo(Context, CharSequence, CharSequence, PendingIntent)
            // was removed from android.jar after API 22; the original bytecode calls it here, so invoke the
            // still-present framework implementation reflectively instead of dropping the call.
            try {
                java.lang.reflect.Method setLatestEventInfo = android.app.Notification.class.getDeclaredMethod("setLatestEventInfo", android.content.Context.class, java.lang.CharSequence.class, java.lang.CharSequence.class, android.app.PendingIntent.class);
                setLatestEventInfo.setAccessible(true);
                setLatestEventInfo.invoke(result, b.mContext, b.mContentTitle, b.mContentText, b.mContentIntent);
            } catch (java.lang.NoSuchMethodException e) {
                // Method no longer exists on this platform; nothing to mirror.
            } catch (java.lang.IllegalAccessException e2) {
                // Not reachable on this platform; ignore.
            } catch (java.lang.reflect.InvocationTargetException e3) {
                // Framework threw; preserve the pre-existing partial notification.
            }
            if (b.mPriority > 0) {
                result.flags |= 128;
            }
            return result;
        }
    }

    static class NotificationCompatImplHoneycomb implements android.support.v4.app.NotificationCompat.NotificationCompatImpl {
        NotificationCompatImplHoneycomb() {
        }

        @Override // android.support.v4.app.NotificationCompat.NotificationCompatImpl
        public android.app.Notification build(android.support.v4.app.NotificationCompat.Builder b) {
            return android.support.v4.app.NotificationCompatHoneycomb.add(b.mContext, b.mNotification, b.mContentTitle, b.mContentText, b.mContentInfo, b.mTickerView, b.mNumber, b.mContentIntent, b.mFullScreenIntent, b.mLargeIcon);
        }
    }

    static class NotificationCompatImplIceCreamSandwich implements android.support.v4.app.NotificationCompat.NotificationCompatImpl {
        NotificationCompatImplIceCreamSandwich() {
        }

        @Override // android.support.v4.app.NotificationCompat.NotificationCompatImpl
        public android.app.Notification build(android.support.v4.app.NotificationCompat.Builder b) {
            return android.support.v4.app.NotificationCompatIceCreamSandwich.add(b.mContext, b.mNotification, b.mContentTitle, b.mContentText, b.mContentInfo, b.mTickerView, b.mNumber, b.mContentIntent, b.mFullScreenIntent, b.mLargeIcon, b.mProgressMax, b.mProgress, b.mProgressIndeterminate);
        }
    }

    static class NotificationCompatImplJellybean implements android.support.v4.app.NotificationCompat.NotificationCompatImpl {
        NotificationCompatImplJellybean() {
        }

        @Override // android.support.v4.app.NotificationCompat.NotificationCompatImpl
        public android.app.Notification build(android.support.v4.app.NotificationCompat.Builder b) {
            android.support.v4.app.NotificationCompatJellybean jbBuilder = new android.support.v4.app.NotificationCompatJellybean(b.mContext, b.mNotification, b.mContentTitle, b.mContentText, b.mContentInfo, b.mTickerView, b.mNumber, b.mContentIntent, b.mFullScreenIntent, b.mLargeIcon, b.mProgressMax, b.mProgress, b.mProgressIndeterminate, b.mUseChronometer, b.mPriority, b.mSubText);
            java.util.Iterator<android.support.v4.app.NotificationCompat.Action> i$ = b.mActions.iterator(); // NOTE(jadx-fix): restore the element type erased by jadx so next() yields Action
            while (i$.hasNext()) {
                android.support.v4.app.NotificationCompat.Action action = i$.next();
                jbBuilder.addAction(action.icon, action.title, action.actionIntent);
            }
            if (b.mStyle != null) {
                if (b.mStyle instanceof android.support.v4.app.NotificationCompat.BigTextStyle) {
                    android.support.v4.app.NotificationCompat.BigTextStyle style = (android.support.v4.app.NotificationCompat.BigTextStyle) b.mStyle;
                    jbBuilder.addBigTextStyle(style.mBigContentTitle, style.mSummaryTextSet, style.mSummaryText, style.mBigText);
                } else if (b.mStyle instanceof android.support.v4.app.NotificationCompat.InboxStyle) {
                    android.support.v4.app.NotificationCompat.InboxStyle style2 = (android.support.v4.app.NotificationCompat.InboxStyle) b.mStyle;
                    jbBuilder.addInboxStyle(style2.mBigContentTitle, style2.mSummaryTextSet, style2.mSummaryText, style2.mTexts);
                } else if (b.mStyle instanceof android.support.v4.app.NotificationCompat.BigPictureStyle) {
                    android.support.v4.app.NotificationCompat.BigPictureStyle style3 = (android.support.v4.app.NotificationCompat.BigPictureStyle) b.mStyle;
                    jbBuilder.addBigPictureStyle(style3.mBigContentTitle, style3.mSummaryTextSet, style3.mSummaryText, style3.mPicture, style3.mBigLargeIcon, style3.mBigLargeIconSet);
                }
            }
            return jbBuilder.build();
        }
    }

    static {
        // NOTE(jadx-fix): the original <clinit> jumped to its end after the >= 16 assignment
        // (jadx rendered that as a `return` outside a method); an else-if chain keeps the semantics.
        if (android.os.Build.VERSION.SDK_INT >= 16) {
            IMPL = new android.support.v4.app.NotificationCompat.NotificationCompatImplJellybean();
        } else if (android.os.Build.VERSION.SDK_INT >= 14) {
            IMPL = new android.support.v4.app.NotificationCompat.NotificationCompatImplIceCreamSandwich();
        } else if (android.os.Build.VERSION.SDK_INT >= 11) {
            IMPL = new android.support.v4.app.NotificationCompat.NotificationCompatImplHoneycomb();
        } else {
            IMPL = new android.support.v4.app.NotificationCompat.NotificationCompatImplBase();
        }
    }

    public static class Builder {
        java.lang.CharSequence mContentInfo;
        android.app.PendingIntent mContentIntent;
        java.lang.CharSequence mContentText;
        java.lang.CharSequence mContentTitle;
        android.content.Context mContext;
        android.app.PendingIntent mFullScreenIntent;
        android.graphics.Bitmap mLargeIcon;
        int mNumber;
        int mPriority;
        int mProgress;
        boolean mProgressIndeterminate;
        int mProgressMax;
        android.support.v4.app.NotificationCompat.Style mStyle;
        java.lang.CharSequence mSubText;
        android.widget.RemoteViews mTickerView;
        boolean mUseChronometer;
        java.util.ArrayList<android.support.v4.app.NotificationCompat.Action> mActions = new java.util.ArrayList<>();
        android.app.Notification mNotification = new android.app.Notification();

        public Builder(android.content.Context context) {
            this.mContext = context;
            this.mNotification.when = java.lang.System.currentTimeMillis();
            this.mNotification.audioStreamType = -1;
            this.mPriority = 0;
        }

        public android.support.v4.app.NotificationCompat.Builder setWhen(long when) {
            this.mNotification.when = when;
            return this;
        }

        public android.support.v4.app.NotificationCompat.Builder setUsesChronometer(boolean b) {
            this.mUseChronometer = b;
            return this;
        }

        public android.support.v4.app.NotificationCompat.Builder setSmallIcon(int icon) {
            this.mNotification.icon = icon;
            return this;
        }

        public android.support.v4.app.NotificationCompat.Builder setSmallIcon(int icon, int level) {
            this.mNotification.icon = icon;
            this.mNotification.iconLevel = level;
            return this;
        }

        public android.support.v4.app.NotificationCompat.Builder setContentTitle(java.lang.CharSequence title) {
            this.mContentTitle = title;
            return this;
        }

        public android.support.v4.app.NotificationCompat.Builder setContentText(java.lang.CharSequence text) {
            this.mContentText = text;
            return this;
        }

        public android.support.v4.app.NotificationCompat.Builder setSubText(java.lang.CharSequence text) {
            this.mSubText = text;
            return this;
        }

        public android.support.v4.app.NotificationCompat.Builder setNumber(int number) {
            this.mNumber = number;
            return this;
        }

        public android.support.v4.app.NotificationCompat.Builder setContentInfo(java.lang.CharSequence info) {
            this.mContentInfo = info;
            return this;
        }

        public android.support.v4.app.NotificationCompat.Builder setProgress(int max, int progress, boolean indeterminate) {
            this.mProgressMax = max;
            this.mProgress = progress;
            this.mProgressIndeterminate = indeterminate;
            return this;
        }

        public android.support.v4.app.NotificationCompat.Builder setContent(android.widget.RemoteViews views) {
            this.mNotification.contentView = views;
            return this;
        }

        public android.support.v4.app.NotificationCompat.Builder setContentIntent(android.app.PendingIntent intent) {
            this.mContentIntent = intent;
            return this;
        }

        public android.support.v4.app.NotificationCompat.Builder setDeleteIntent(android.app.PendingIntent intent) {
            this.mNotification.deleteIntent = intent;
            return this;
        }

        public android.support.v4.app.NotificationCompat.Builder setFullScreenIntent(android.app.PendingIntent intent, boolean highPriority) {
            this.mFullScreenIntent = intent;
            setFlag(128, highPriority);
            return this;
        }

        public android.support.v4.app.NotificationCompat.Builder setTicker(java.lang.CharSequence tickerText) {
            this.mNotification.tickerText = tickerText;
            return this;
        }

        public android.support.v4.app.NotificationCompat.Builder setTicker(java.lang.CharSequence tickerText, android.widget.RemoteViews views) {
            this.mNotification.tickerText = tickerText;
            this.mTickerView = views;
            return this;
        }

        public android.support.v4.app.NotificationCompat.Builder setLargeIcon(android.graphics.Bitmap icon) {
            this.mLargeIcon = icon;
            return this;
        }

        public android.support.v4.app.NotificationCompat.Builder setSound(android.net.Uri sound) {
            this.mNotification.sound = sound;
            this.mNotification.audioStreamType = -1;
            return this;
        }

        public android.support.v4.app.NotificationCompat.Builder setSound(android.net.Uri sound, int streamType) {
            this.mNotification.sound = sound;
            this.mNotification.audioStreamType = streamType;
            return this;
        }

        public android.support.v4.app.NotificationCompat.Builder setVibrate(long[] pattern) {
            this.mNotification.vibrate = pattern;
            return this;
        }

        public android.support.v4.app.NotificationCompat.Builder setLights(int argb, int onMs, int offMs) {
            this.mNotification.ledARGB = argb;
            this.mNotification.ledOnMS = onMs;
            this.mNotification.ledOffMS = offMs;
            boolean showLights = (this.mNotification.ledOnMS == 0 || this.mNotification.ledOffMS == 0) ? false : true;
            this.mNotification.flags = (showLights ? 1 : 0) | (this.mNotification.flags & (-2));
            return this;
        }

        public android.support.v4.app.NotificationCompat.Builder setOngoing(boolean ongoing) {
            setFlag(2, ongoing);
            return this;
        }

        public android.support.v4.app.NotificationCompat.Builder setOnlyAlertOnce(boolean onlyAlertOnce) {
            setFlag(8, onlyAlertOnce);
            return this;
        }

        public android.support.v4.app.NotificationCompat.Builder setAutoCancel(boolean autoCancel) {
            setFlag(16, autoCancel);
            return this;
        }

        public android.support.v4.app.NotificationCompat.Builder setDefaults(int defaults) {
            this.mNotification.defaults = defaults;
            if ((defaults & 4) != 0) {
                this.mNotification.flags |= 1;
            }
            return this;
        }

        private void setFlag(int mask, boolean value) {
            if (value) {
                this.mNotification.flags |= mask;
            } else {
                this.mNotification.flags &= mask ^ (-1);
            }
        }

        public android.support.v4.app.NotificationCompat.Builder setPriority(int pri) {
            this.mPriority = pri;
            return this;
        }

        public android.support.v4.app.NotificationCompat.Builder addAction(int icon, java.lang.CharSequence title, android.app.PendingIntent intent) {
            this.mActions.add(new android.support.v4.app.NotificationCompat.Action(icon, title, intent));
            return this;
        }

        public android.support.v4.app.NotificationCompat.Builder setStyle(android.support.v4.app.NotificationCompat.Style style) {
            if (this.mStyle != style) {
                this.mStyle = style;
                if (this.mStyle != null) {
                    this.mStyle.setBuilder(this);
                }
            }
            return this;
        }

        @java.lang.Deprecated
        public android.app.Notification getNotification() {
            return android.support.v4.app.NotificationCompat.IMPL.build(this);
        }

        public android.app.Notification build() {
            return android.support.v4.app.NotificationCompat.IMPL.build(this);
        }
    }

    public static abstract class Style {
        java.lang.CharSequence mBigContentTitle;
        android.support.v4.app.NotificationCompat.Builder mBuilder;
        java.lang.CharSequence mSummaryText;
        boolean mSummaryTextSet = false;

        public void setBuilder(android.support.v4.app.NotificationCompat.Builder builder) {
            if (this.mBuilder != builder) {
                this.mBuilder = builder;
                if (this.mBuilder != null) {
                    this.mBuilder.setStyle(this);
                }
            }
        }

        public android.app.Notification build() {
            if (this.mBuilder == null) {
                return null;
            }
            android.app.Notification notification = this.mBuilder.build();
            return notification;
        }
    }

    public static class BigPictureStyle extends android.support.v4.app.NotificationCompat.Style {
        android.graphics.Bitmap mBigLargeIcon;
        boolean mBigLargeIconSet;
        android.graphics.Bitmap mPicture;

        public BigPictureStyle() {
        }

        public BigPictureStyle(android.support.v4.app.NotificationCompat.Builder builder) {
            setBuilder(builder);
        }

        public android.support.v4.app.NotificationCompat.BigPictureStyle setBigContentTitle(java.lang.CharSequence title) {
            this.mBigContentTitle = title;
            return this;
        }

        public android.support.v4.app.NotificationCompat.BigPictureStyle setSummaryText(java.lang.CharSequence cs) {
            this.mSummaryText = cs;
            this.mSummaryTextSet = true;
            return this;
        }

        public android.support.v4.app.NotificationCompat.BigPictureStyle bigPicture(android.graphics.Bitmap b) {
            this.mPicture = b;
            return this;
        }

        public android.support.v4.app.NotificationCompat.BigPictureStyle bigLargeIcon(android.graphics.Bitmap b) {
            this.mBigLargeIcon = b;
            this.mBigLargeIconSet = true;
            return this;
        }
    }

    public static class BigTextStyle extends android.support.v4.app.NotificationCompat.Style {
        java.lang.CharSequence mBigText;

        public BigTextStyle() {
        }

        public BigTextStyle(android.support.v4.app.NotificationCompat.Builder builder) {
            setBuilder(builder);
        }

        public android.support.v4.app.NotificationCompat.BigTextStyle setBigContentTitle(java.lang.CharSequence title) {
            this.mBigContentTitle = title;
            return this;
        }

        public android.support.v4.app.NotificationCompat.BigTextStyle setSummaryText(java.lang.CharSequence cs) {
            this.mSummaryText = cs;
            this.mSummaryTextSet = true;
            return this;
        }

        public android.support.v4.app.NotificationCompat.BigTextStyle bigText(java.lang.CharSequence cs) {
            this.mBigText = cs;
            return this;
        }
    }

    public static class InboxStyle extends android.support.v4.app.NotificationCompat.Style {
        java.util.ArrayList<java.lang.CharSequence> mTexts = new java.util.ArrayList<>();

        public InboxStyle() {
        }

        public InboxStyle(android.support.v4.app.NotificationCompat.Builder builder) {
            setBuilder(builder);
        }

        public android.support.v4.app.NotificationCompat.InboxStyle setBigContentTitle(java.lang.CharSequence title) {
            this.mBigContentTitle = title;
            return this;
        }

        public android.support.v4.app.NotificationCompat.InboxStyle setSummaryText(java.lang.CharSequence cs) {
            this.mSummaryText = cs;
            this.mSummaryTextSet = true;
            return this;
        }

        public android.support.v4.app.NotificationCompat.InboxStyle addLine(java.lang.CharSequence cs) {
            this.mTexts.add(cs);
            return this;
        }
    }

    public static class Action {
        public android.app.PendingIntent actionIntent;
        public int icon;
        public java.lang.CharSequence title;

        public Action(int icon_, java.lang.CharSequence title_, android.app.PendingIntent intent_) {
            this.icon = icon_;
            this.title = title_;
            this.actionIntent = intent_;
        }
    }
}
