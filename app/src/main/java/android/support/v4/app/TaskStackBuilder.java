package android.support.v4.app;

/* loaded from: classes.dex */
public class TaskStackBuilder implements java.lang.Iterable<android.content.Intent> {
    private static final android.support.v4.app.TaskStackBuilder.TaskStackBuilderImpl IMPL;
    private static final java.lang.String TAG = "TaskStackBuilder";
    private final java.util.ArrayList<android.content.Intent> mIntents = new java.util.ArrayList<>();
    private final android.content.Context mSourceContext;

    public interface SupportParentable {
        android.content.Intent getSupportParentActivityIntent();
    }

    interface TaskStackBuilderImpl {
        android.app.PendingIntent getPendingIntent(android.content.Context context, android.content.Intent[] intentArr, int i, int i2, android.os.Bundle bundle);
    }

    static class TaskStackBuilderImplBase implements android.support.v4.app.TaskStackBuilder.TaskStackBuilderImpl {
        TaskStackBuilderImplBase() {
        }

        @Override // android.support.v4.app.TaskStackBuilder.TaskStackBuilderImpl
        public android.app.PendingIntent getPendingIntent(android.content.Context context, android.content.Intent[] intents, int requestCode, int flags, android.os.Bundle options) {
            android.content.Intent topIntent = new android.content.Intent(intents[intents.length - 1]);
            topIntent.addFlags(268435456);
            return android.app.PendingIntent.getActivity(context, requestCode, topIntent, flags);
        }
    }

    static class TaskStackBuilderImplHoneycomb implements android.support.v4.app.TaskStackBuilder.TaskStackBuilderImpl {
        TaskStackBuilderImplHoneycomb() {
        }

        @Override // android.support.v4.app.TaskStackBuilder.TaskStackBuilderImpl
        public android.app.PendingIntent getPendingIntent(android.content.Context context, android.content.Intent[] intents, int requestCode, int flags, android.os.Bundle options) {
            intents[0] = new android.content.Intent(intents[0]).addFlags(268484608);
            return android.support.v4.app.TaskStackBuilderHoneycomb.getActivitiesPendingIntent(context, requestCode, intents, flags);
        }
    }

    static class TaskStackBuilderImplJellybean implements android.support.v4.app.TaskStackBuilder.TaskStackBuilderImpl {
        TaskStackBuilderImplJellybean() {
        }

        @Override // android.support.v4.app.TaskStackBuilder.TaskStackBuilderImpl
        public android.app.PendingIntent getPendingIntent(android.content.Context context, android.content.Intent[] intents, int requestCode, int flags, android.os.Bundle options) {
            intents[0] = new android.content.Intent(intents[0]).addFlags(268484608);
            return android.support.v4.app.TaskStackBuilderJellybean.getActivitiesPendingIntent(context, requestCode, intents, flags, options);
        }
    }

    static {
        if (android.os.Build.VERSION.SDK_INT >= 11) {
            IMPL = new android.support.v4.app.TaskStackBuilder.TaskStackBuilderImplHoneycomb();
        } else {
            IMPL = new android.support.v4.app.TaskStackBuilder.TaskStackBuilderImplBase();
        }
    }

    private TaskStackBuilder(android.content.Context a) {
        this.mSourceContext = a;
    }

    public static android.support.v4.app.TaskStackBuilder create(android.content.Context context) {
        return new android.support.v4.app.TaskStackBuilder(context);
    }

    public static android.support.v4.app.TaskStackBuilder from(android.content.Context context) {
        return create(context);
    }

    public android.support.v4.app.TaskStackBuilder addNextIntent(android.content.Intent nextIntent) {
        this.mIntents.add(nextIntent);
        return this;
    }

    public android.support.v4.app.TaskStackBuilder addNextIntentWithParentStack(android.content.Intent nextIntent) {
        android.content.ComponentName target = nextIntent.getComponent();
        if (target == null) {
            target = nextIntent.resolveActivity(this.mSourceContext.getPackageManager());
        }
        if (target != null) {
            addParentStack(target);
        }
        addNextIntent(nextIntent);
        return this;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public android.support.v4.app.TaskStackBuilder addParentStack(android.app.Activity activity) {
        android.content.Intent parent = null;
        if (activity instanceof android.support.v4.app.TaskStackBuilder.SupportParentable) {
            parent = ((android.support.v4.app.TaskStackBuilder.SupportParentable) activity).getSupportParentActivityIntent();
        }
        if (parent == null) {
            parent = android.support.v4.app.NavUtils.getParentActivityIntent(activity);
        }
        if (parent != null) {
            android.content.ComponentName target = parent.getComponent();
            if (target == null) {
                target = parent.resolveActivity(this.mSourceContext.getPackageManager());
            }
            addParentStack(target);
            addNextIntent(parent);
        }
        return this;
    }

    public android.support.v4.app.TaskStackBuilder addParentStack(java.lang.Class<?> sourceActivityClass) {
        return addParentStack(new android.content.ComponentName(this.mSourceContext, sourceActivityClass));
    }

    public android.support.v4.app.TaskStackBuilder addParentStack(android.content.ComponentName sourceActivityName) {
        int insertAt = this.mIntents.size();
        try {
            android.content.Intent parent = android.support.v4.app.NavUtils.getParentActivityIntent(this.mSourceContext, sourceActivityName);
            while (parent != null) {
                this.mIntents.add(insertAt, parent);
                parent = android.support.v4.app.NavUtils.getParentActivityIntent(this.mSourceContext, parent.getComponent());
            }
            return this;
        } catch (android.content.pm.PackageManager.NameNotFoundException e) {
            android.util.Log.e(TAG, "Bad ComponentName while traversing activity parent metadata");
            throw new java.lang.IllegalArgumentException(e);
        }
    }

    public int getIntentCount() {
        return this.mIntents.size();
    }

    public android.content.Intent getIntent(int index) {
        return editIntentAt(index);
    }

    public android.content.Intent editIntentAt(int index) {
        return this.mIntents.get(index);
    }

    @Override // java.lang.Iterable
    public java.util.Iterator<android.content.Intent> iterator() {
        return this.mIntents.iterator();
    }

    public void startActivities() {
        startActivities(null);
    }

    public void startActivities(android.os.Bundle options) {
        if (this.mIntents.isEmpty()) {
            throw new java.lang.IllegalStateException("No intents added to TaskStackBuilder; cannot startActivities");
        }
        android.content.Intent[] intents = (android.content.Intent[]) this.mIntents.toArray(new android.content.Intent[this.mIntents.size()]);
        intents[0] = new android.content.Intent(intents[0]).addFlags(268484608);
        if (!android.support.v4.content.ContextCompat.startActivities(this.mSourceContext, intents, options)) {
            android.content.Intent topIntent = new android.content.Intent(intents[intents.length - 1]);
            topIntent.addFlags(268435456);
            this.mSourceContext.startActivity(topIntent);
        }
    }

    public android.app.PendingIntent getPendingIntent(int requestCode, int flags) {
        return getPendingIntent(requestCode, flags, null);
    }

    public android.app.PendingIntent getPendingIntent(int requestCode, int flags, android.os.Bundle options) {
        if (this.mIntents.isEmpty()) {
            throw new java.lang.IllegalStateException("No intents added to TaskStackBuilder; cannot getPendingIntent");
        }
        android.content.Intent[] intents = (android.content.Intent[]) this.mIntents.toArray(new android.content.Intent[this.mIntents.size()]);
        intents[0] = new android.content.Intent(intents[0]).addFlags(268484608);
        return IMPL.getPendingIntent(this.mSourceContext, intents, requestCode, flags, options);
    }

    public android.content.Intent[] getIntents() {
        android.content.Intent[] intents = new android.content.Intent[this.mIntents.size()];
        if (intents.length != 0) {
            intents[0] = new android.content.Intent(this.mIntents.get(0)).addFlags(268484608);
            for (int i = 1; i < intents.length; i++) {
                intents[i] = new android.content.Intent(this.mIntents.get(i));
            }
        }
        return intents;
    }
}
