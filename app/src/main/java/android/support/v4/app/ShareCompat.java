package android.support.v4.app;

/* loaded from: classes.dex */
public class ShareCompat {
    public static final java.lang.String EXTRA_CALLING_ACTIVITY = "android.support.v4.app.EXTRA_CALLING_ACTIVITY";
    public static final java.lang.String EXTRA_CALLING_PACKAGE = "android.support.v4.app.EXTRA_CALLING_PACKAGE";
    private static android.support.v4.app.ShareCompat.ShareCompatImpl IMPL;

    interface ShareCompatImpl {
        void configureMenuItem(android.view.MenuItem menuItem, android.support.v4.app.ShareCompat.IntentBuilder intentBuilder);

        java.lang.String escapeHtml(java.lang.CharSequence charSequence);
    }

    static class ShareCompatImplBase implements android.support.v4.app.ShareCompat.ShareCompatImpl {
        ShareCompatImplBase() {
        }

        @Override // android.support.v4.app.ShareCompat.ShareCompatImpl
        public void configureMenuItem(android.view.MenuItem item, android.support.v4.app.ShareCompat.IntentBuilder shareIntent) {
            item.setIntent(shareIntent.createChooserIntent());
        }

        @Override // android.support.v4.app.ShareCompat.ShareCompatImpl
        public java.lang.String escapeHtml(java.lang.CharSequence text) {
            java.lang.StringBuilder out = new java.lang.StringBuilder();
            withinStyle(out, text, 0, text.length());
            return out.toString();
        }

        private static void withinStyle(java.lang.StringBuilder out, java.lang.CharSequence text, int start, int end) {
            int i = start;
            while (i < end) {
                char c = text.charAt(i);
                if (c == '<') {
                    out.append("&lt;");
                } else if (c == '>') {
                    out.append("&gt;");
                } else if (c == '&') {
                    out.append("&amp;");
                } else if (c > '~' || c < ' ') {
                    out.append("&#" + ((int) c) + ";");
                } else if (c == ' ') {
                    while (i + 1 < end && text.charAt(i + 1) == ' ') {
                        out.append("&nbsp;");
                        i++;
                    }
                    out.append(' ');
                } else {
                    out.append(c);
                }
                i++;
            }
        }
    }

    static class ShareCompatImplICS extends android.support.v4.app.ShareCompat.ShareCompatImplBase {
        ShareCompatImplICS() {
        }

        @Override // android.support.v4.app.ShareCompat.ShareCompatImplBase, android.support.v4.app.ShareCompat.ShareCompatImpl
        public void configureMenuItem(android.view.MenuItem item, android.support.v4.app.ShareCompat.IntentBuilder shareIntent) {
            android.support.v4.app.ShareCompatICS.configureMenuItem(item, shareIntent.getActivity(), shareIntent.getIntent());
            if (shouldAddChooserIntent(item)) {
                item.setIntent(shareIntent.createChooserIntent());
            }
        }

        boolean shouldAddChooserIntent(android.view.MenuItem item) {
            return !item.hasSubMenu();
        }
    }

    static class ShareCompatImplJB extends android.support.v4.app.ShareCompat.ShareCompatImplICS {
        ShareCompatImplJB() {
        }

        @Override // android.support.v4.app.ShareCompat.ShareCompatImplBase, android.support.v4.app.ShareCompat.ShareCompatImpl
        public java.lang.String escapeHtml(java.lang.CharSequence html) {
            return android.support.v4.app.ShareCompatJB.escapeHtml(html);
        }

        @Override // android.support.v4.app.ShareCompat.ShareCompatImplICS
        boolean shouldAddChooserIntent(android.view.MenuItem item) {
            return false;
        }
    }

    static {
        if (android.os.Build.VERSION.SDK_INT >= 16) {
            IMPL = new android.support.v4.app.ShareCompat.ShareCompatImplJB();
        } else if (android.os.Build.VERSION.SDK_INT >= 14) {
            IMPL = new android.support.v4.app.ShareCompat.ShareCompatImplICS();
        } else {
            IMPL = new android.support.v4.app.ShareCompat.ShareCompatImplBase();
        }
    }

    public static java.lang.String getCallingPackage(android.app.Activity calledActivity) {
        java.lang.String result = calledActivity.getCallingPackage();
        if (result == null) {
            return calledActivity.getIntent().getStringExtra(EXTRA_CALLING_PACKAGE);
        }
        return result;
    }

    public static android.content.ComponentName getCallingActivity(android.app.Activity calledActivity) {
        android.content.ComponentName result = calledActivity.getCallingActivity();
        if (result == null) {
            return (android.content.ComponentName) calledActivity.getIntent().getParcelableExtra(EXTRA_CALLING_ACTIVITY);
        }
        return result;
    }

    public static void configureMenuItem(android.view.MenuItem item, android.support.v4.app.ShareCompat.IntentBuilder shareIntent) {
        IMPL.configureMenuItem(item, shareIntent);
    }

    public static void configureMenuItem(android.view.Menu menu, int menuItemId, android.support.v4.app.ShareCompat.IntentBuilder shareIntent) {
        android.view.MenuItem item = menu.findItem(menuItemId);
        if (item == null) {
            throw new java.lang.IllegalArgumentException("Could not find menu item with id " + menuItemId + " in the supplied menu");
        }
        configureMenuItem(item, shareIntent);
    }

    public static class IntentBuilder {
        private android.app.Activity mActivity;
        private java.util.ArrayList<java.lang.String> mBccAddresses;
        private java.util.ArrayList<java.lang.String> mCcAddresses;
        private java.lang.CharSequence mChooserTitle;
        private android.content.Intent mIntent = new android.content.Intent().setAction("android.intent.action.SEND");
        private java.util.ArrayList<android.net.Uri> mStreams;
        private java.util.ArrayList<java.lang.String> mToAddresses;

        public static android.support.v4.app.ShareCompat.IntentBuilder from(android.app.Activity launchingActivity) {
            return new android.support.v4.app.ShareCompat.IntentBuilder(launchingActivity);
        }

        private IntentBuilder(android.app.Activity launchingActivity) {
            this.mActivity = launchingActivity;
            this.mIntent.putExtra(android.support.v4.app.ShareCompat.EXTRA_CALLING_PACKAGE, launchingActivity.getPackageName());
            this.mIntent.putExtra(android.support.v4.app.ShareCompat.EXTRA_CALLING_ACTIVITY, launchingActivity.getComponentName());
            this.mIntent.addFlags(android.support.v4.view.accessibility.AccessibilityEventCompat.TYPE_GESTURE_DETECTION_END);
        }

        public android.content.Intent getIntent() {
            if (this.mToAddresses != null) {
                combineArrayExtra("android.intent.extra.EMAIL", this.mToAddresses);
                this.mToAddresses = null;
            }
            if (this.mCcAddresses != null) {
                combineArrayExtra("android.intent.extra.CC", this.mCcAddresses);
                this.mCcAddresses = null;
            }
            if (this.mBccAddresses != null) {
                combineArrayExtra("android.intent.extra.BCC", this.mBccAddresses);
                this.mBccAddresses = null;
            }
            boolean needsSendMultiple = this.mStreams != null && this.mStreams.size() > 1;
            boolean isSendMultiple = this.mIntent.getAction().equals("android.intent.action.SEND_MULTIPLE");
            if (!needsSendMultiple && isSendMultiple) {
                this.mIntent.setAction("android.intent.action.SEND");
                if (this.mStreams != null && !this.mStreams.isEmpty()) {
                    this.mIntent.putExtra("android.intent.extra.STREAM", this.mStreams.get(0));
                } else {
                    this.mIntent.removeExtra("android.intent.extra.STREAM");
                }
                this.mStreams = null;
            }
            if (needsSendMultiple && !isSendMultiple) {
                this.mIntent.setAction("android.intent.action.SEND_MULTIPLE");
                if (this.mStreams != null && !this.mStreams.isEmpty()) {
                    this.mIntent.putParcelableArrayListExtra("android.intent.extra.STREAM", this.mStreams);
                } else {
                    this.mIntent.removeExtra("android.intent.extra.STREAM");
                }
            }
            return this.mIntent;
        }

        android.app.Activity getActivity() {
            return this.mActivity;
        }

        private void combineArrayExtra(java.lang.String extra, java.util.ArrayList<java.lang.String> add) {
            java.lang.String[] currentAddresses = this.mIntent.getStringArrayExtra(extra);
            int currentLength = currentAddresses != null ? currentAddresses.length : 0;
            java.lang.String[] finalAddresses = new java.lang.String[add.size() + currentLength];
            add.toArray(finalAddresses);
            if (currentAddresses != null) {
                java.lang.System.arraycopy(currentAddresses, 0, finalAddresses, add.size(), currentLength);
            }
            this.mIntent.putExtra(extra, finalAddresses);
        }

        private void combineArrayExtra(java.lang.String extra, java.lang.String[] add) {
            android.content.Intent intent = getIntent();
            java.lang.String[] old = intent.getStringArrayExtra(extra);
            int oldLength = old != null ? old.length : 0;
            java.lang.String[] result = new java.lang.String[add.length + oldLength];
            if (old != null) {
                java.lang.System.arraycopy(old, 0, result, 0, oldLength);
            }
            java.lang.System.arraycopy(add, 0, result, oldLength, add.length);
            intent.putExtra(extra, result);
        }

        public android.content.Intent createChooserIntent() {
            return android.content.Intent.createChooser(getIntent(), this.mChooserTitle);
        }

        public void startChooser() {
            this.mActivity.startActivity(createChooserIntent());
        }

        public android.support.v4.app.ShareCompat.IntentBuilder setChooserTitle(java.lang.CharSequence title) {
            this.mChooserTitle = title;
            return this;
        }

        public android.support.v4.app.ShareCompat.IntentBuilder setChooserTitle(int resId) {
            return setChooserTitle(this.mActivity.getText(resId));
        }

        public android.support.v4.app.ShareCompat.IntentBuilder setType(java.lang.String mimeType) {
            this.mIntent.setType(mimeType);
            return this;
        }

        public android.support.v4.app.ShareCompat.IntentBuilder setText(java.lang.CharSequence text) {
            this.mIntent.putExtra("android.intent.extra.TEXT", text);
            return this;
        }

        public android.support.v4.app.ShareCompat.IntentBuilder setHtmlText(java.lang.String htmlText) {
            this.mIntent.putExtra(android.support.v4.content.IntentCompat.EXTRA_HTML_TEXT, htmlText);
            if (!this.mIntent.hasExtra("android.intent.extra.TEXT")) {
                setText(android.text.Html.fromHtml(htmlText));
            }
            return this;
        }

        public android.support.v4.app.ShareCompat.IntentBuilder setStream(android.net.Uri streamUri) {
            if (!this.mIntent.getAction().equals("android.intent.action.SEND")) {
                this.mIntent.setAction("android.intent.action.SEND");
            }
            this.mStreams = null;
            this.mIntent.putExtra("android.intent.extra.STREAM", streamUri);
            return this;
        }

        public android.support.v4.app.ShareCompat.IntentBuilder addStream(android.net.Uri streamUri) {
            android.net.Uri currentStream = (android.net.Uri) this.mIntent.getParcelableExtra("android.intent.extra.STREAM");
            if (currentStream == null) {
                return setStream(streamUri);
            }
            if (this.mStreams == null) {
                this.mStreams = new java.util.ArrayList<>();
            }
            if (currentStream != null) {
                this.mIntent.removeExtra("android.intent.extra.STREAM");
                this.mStreams.add(currentStream);
            }
            this.mStreams.add(streamUri);
            return this;
        }

        public android.support.v4.app.ShareCompat.IntentBuilder setEmailTo(java.lang.String[] addresses) {
            if (this.mToAddresses != null) {
                this.mToAddresses = null;
            }
            this.mIntent.putExtra("android.intent.extra.EMAIL", addresses);
            return this;
        }

        public android.support.v4.app.ShareCompat.IntentBuilder addEmailTo(java.lang.String address) {
            if (this.mToAddresses == null) {
                this.mToAddresses = new java.util.ArrayList<>();
            }
            this.mToAddresses.add(address);
            return this;
        }

        public android.support.v4.app.ShareCompat.IntentBuilder addEmailTo(java.lang.String[] addresses) {
            combineArrayExtra("android.intent.extra.EMAIL", addresses);
            return this;
        }

        public android.support.v4.app.ShareCompat.IntentBuilder setEmailCc(java.lang.String[] addresses) {
            this.mIntent.putExtra("android.intent.extra.CC", addresses);
            return this;
        }

        public android.support.v4.app.ShareCompat.IntentBuilder addEmailCc(java.lang.String address) {
            if (this.mCcAddresses == null) {
                this.mCcAddresses = new java.util.ArrayList<>();
            }
            this.mCcAddresses.add(address);
            return this;
        }

        public android.support.v4.app.ShareCompat.IntentBuilder addEmailCc(java.lang.String[] addresses) {
            combineArrayExtra("android.intent.extra.CC", addresses);
            return this;
        }

        public android.support.v4.app.ShareCompat.IntentBuilder setEmailBcc(java.lang.String[] addresses) {
            this.mIntent.putExtra("android.intent.extra.BCC", addresses);
            return this;
        }

        public android.support.v4.app.ShareCompat.IntentBuilder addEmailBcc(java.lang.String address) {
            if (this.mBccAddresses == null) {
                this.mBccAddresses = new java.util.ArrayList<>();
            }
            this.mBccAddresses.add(address);
            return this;
        }

        public android.support.v4.app.ShareCompat.IntentBuilder addEmailBcc(java.lang.String[] addresses) {
            combineArrayExtra("android.intent.extra.BCC", addresses);
            return this;
        }

        public android.support.v4.app.ShareCompat.IntentBuilder setSubject(java.lang.String subject) {
            this.mIntent.putExtra("android.intent.extra.SUBJECT", subject);
            return this;
        }
    }

    public static class IntentReader {
        private static final java.lang.String TAG = "IntentReader";
        private android.app.Activity mActivity;
        private android.content.ComponentName mCallingActivity;
        private java.lang.String mCallingPackage;
        private android.content.Intent mIntent;
        private java.util.ArrayList<android.net.Uri> mStreams;

        public static android.support.v4.app.ShareCompat.IntentReader from(android.app.Activity activity) {
            return new android.support.v4.app.ShareCompat.IntentReader(activity);
        }

        private IntentReader(android.app.Activity activity) {
            this.mActivity = activity;
            this.mIntent = activity.getIntent();
            this.mCallingPackage = android.support.v4.app.ShareCompat.getCallingPackage(activity);
            this.mCallingActivity = android.support.v4.app.ShareCompat.getCallingActivity(activity);
        }

        public boolean isShareIntent() {
            java.lang.String action = this.mIntent.getAction();
            return "android.intent.action.SEND".equals(action) || "android.intent.action.SEND_MULTIPLE".equals(action);
        }

        public boolean isSingleShare() {
            return "android.intent.action.SEND".equals(this.mIntent.getAction());
        }

        public boolean isMultipleShare() {
            return "android.intent.action.SEND_MULTIPLE".equals(this.mIntent.getAction());
        }

        public java.lang.String getType() {
            return this.mIntent.getType();
        }

        public java.lang.CharSequence getText() {
            return this.mIntent.getCharSequenceExtra("android.intent.extra.TEXT");
        }

        public java.lang.String getHtmlText() {
            java.lang.String result = this.mIntent.getStringExtra(android.support.v4.content.IntentCompat.EXTRA_HTML_TEXT);
            if (result == null) {
                java.lang.CharSequence text = getText();
                if (text instanceof android.text.Spanned) {
                    return android.text.Html.toHtml((android.text.Spanned) text);
                }
                if (text != null) {
                    return android.support.v4.app.ShareCompat.IMPL.escapeHtml(text);
                }
                return result;
            }
            return result;
        }

        public android.net.Uri getStream() {
            return (android.net.Uri) this.mIntent.getParcelableExtra("android.intent.extra.STREAM");
        }

        public android.net.Uri getStream(int index) {
            if (this.mStreams == null && isMultipleShare()) {
                this.mStreams = this.mIntent.getParcelableArrayListExtra("android.intent.extra.STREAM");
            }
            if (this.mStreams != null) {
                return this.mStreams.get(index);
            }
            if (index == 0) {
                return (android.net.Uri) this.mIntent.getParcelableExtra("android.intent.extra.STREAM");
            }
            throw new java.lang.IndexOutOfBoundsException("Stream items available: " + getStreamCount() + " index requested: " + index);
        }

        public int getStreamCount() {
            if (this.mStreams == null && isMultipleShare()) {
                this.mStreams = this.mIntent.getParcelableArrayListExtra("android.intent.extra.STREAM");
            }
            if (this.mStreams != null) {
                return this.mStreams.size();
            }
            return this.mIntent.hasExtra("android.intent.extra.STREAM") ? 1 : 0;
        }

        public java.lang.String[] getEmailTo() {
            return this.mIntent.getStringArrayExtra("android.intent.extra.EMAIL");
        }

        public java.lang.String[] getEmailCc() {
            return this.mIntent.getStringArrayExtra("android.intent.extra.CC");
        }

        public java.lang.String[] getEmailBcc() {
            return this.mIntent.getStringArrayExtra("android.intent.extra.BCC");
        }

        public java.lang.String getSubject() {
            return this.mIntent.getStringExtra("android.intent.extra.SUBJECT");
        }

        public java.lang.String getCallingPackage() {
            return this.mCallingPackage;
        }

        public android.content.ComponentName getCallingActivity() {
            return this.mCallingActivity;
        }

        public android.graphics.drawable.Drawable getCallingActivityIcon() {
            if (this.mCallingActivity == null) {
                return null;
            }
            android.content.pm.PackageManager pm = this.mActivity.getPackageManager();
            try {
                return pm.getActivityIcon(this.mCallingActivity);
            } catch (android.content.pm.PackageManager.NameNotFoundException e) {
                android.util.Log.e(TAG, "Could not retrieve icon for calling activity", e);
                return null;
            }
        }

        public android.graphics.drawable.Drawable getCallingApplicationIcon() {
            if (this.mCallingPackage == null) {
                return null;
            }
            android.content.pm.PackageManager pm = this.mActivity.getPackageManager();
            try {
                return pm.getApplicationIcon(this.mCallingPackage);
            } catch (android.content.pm.PackageManager.NameNotFoundException e) {
                android.util.Log.e(TAG, "Could not retrieve icon for calling application", e);
                return null;
            }
        }

        public java.lang.CharSequence getCallingApplicationLabel() {
            if (this.mCallingPackage == null) {
                return null;
            }
            android.content.pm.PackageManager pm = this.mActivity.getPackageManager();
            try {
                return pm.getApplicationLabel(pm.getApplicationInfo(this.mCallingPackage, 0));
            } catch (android.content.pm.PackageManager.NameNotFoundException e) {
                android.util.Log.e(TAG, "Could not retrieve label for calling application", e);
                return null;
            }
        }
    }
}
