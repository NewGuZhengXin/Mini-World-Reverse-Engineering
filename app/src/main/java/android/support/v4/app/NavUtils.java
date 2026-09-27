package android.support.v4.app;

/* loaded from: classes.dex */
public class NavUtils {
    private static final android.support.v4.app.NavUtils.NavUtilsImpl IMPL;
    public static final java.lang.String PARENT_ACTIVITY = "android.support.PARENT_ACTIVITY";
    private static final java.lang.String TAG = "NavUtils";

    interface NavUtilsImpl {
        android.content.Intent getParentActivityIntent(android.app.Activity activity);

        java.lang.String getParentActivityName(android.content.Context context, android.content.pm.ActivityInfo activityInfo);

        void navigateUpTo(android.app.Activity activity, android.content.Intent intent);

        boolean shouldUpRecreateTask(android.app.Activity activity, android.content.Intent intent);
    }

    static class NavUtilsImplBase implements android.support.v4.app.NavUtils.NavUtilsImpl {
        NavUtilsImplBase() {
        }

        @Override // android.support.v4.app.NavUtils.NavUtilsImpl
        public android.content.Intent getParentActivityIntent(android.app.Activity activity) {
            android.content.Intent parentIntent = null;
            java.lang.String parentName = android.support.v4.app.NavUtils.getParentActivityName(activity);
            if (parentName != null) {
                android.content.ComponentName target = new android.content.ComponentName(activity, parentName);
                try {
                    java.lang.String grandparent = android.support.v4.app.NavUtils.getParentActivityName(activity, target);
                    parentIntent = grandparent == null ? android.support.v4.content.IntentCompat.makeMainActivity(target) : new android.content.Intent().setComponent(target);
                } catch (android.content.pm.PackageManager.NameNotFoundException e) {
                    android.util.Log.e(android.support.v4.app.NavUtils.TAG, "getParentActivityIntent: bad parentActivityName '" + parentName + "' in manifest");
                }
            }
            return parentIntent;
        }

        @Override // android.support.v4.app.NavUtils.NavUtilsImpl
        public boolean shouldUpRecreateTask(android.app.Activity activity, android.content.Intent targetIntent) {
            java.lang.String action = activity.getIntent().getAction();
            return (action == null || action.equals("android.intent.action.MAIN")) ? false : true;
        }

        @Override // android.support.v4.app.NavUtils.NavUtilsImpl
        public void navigateUpTo(android.app.Activity activity, android.content.Intent upIntent) {
            upIntent.addFlags(67108864);
            activity.startActivity(upIntent);
            activity.finish();
        }

        @Override // android.support.v4.app.NavUtils.NavUtilsImpl
        public java.lang.String getParentActivityName(android.content.Context context, android.content.pm.ActivityInfo info) {
            java.lang.String parentActivity;
            if (info.metaData != null && (parentActivity = info.metaData.getString(android.support.v4.app.NavUtils.PARENT_ACTIVITY)) != null) {
                if (parentActivity.charAt(0) == '.') {
                    return context.getPackageName() + parentActivity;
                }
                return parentActivity;
            }
            return null;
        }
    }

    static class NavUtilsImplJB extends android.support.v4.app.NavUtils.NavUtilsImplBase {
        NavUtilsImplJB() {
        }

        @Override // android.support.v4.app.NavUtils.NavUtilsImplBase, android.support.v4.app.NavUtils.NavUtilsImpl
        public android.content.Intent getParentActivityIntent(android.app.Activity activity) {
            android.content.Intent result = android.support.v4.app.NavUtilsJB.getParentActivityIntent(activity);
            if (result == null) {
                return superGetParentActivityIntent(activity);
            }
            return result;
        }

        android.content.Intent superGetParentActivityIntent(android.app.Activity activity) {
            return super.getParentActivityIntent(activity);
        }

        @Override // android.support.v4.app.NavUtils.NavUtilsImplBase, android.support.v4.app.NavUtils.NavUtilsImpl
        public boolean shouldUpRecreateTask(android.app.Activity activity, android.content.Intent targetIntent) {
            return android.support.v4.app.NavUtilsJB.shouldUpRecreateTask(activity, targetIntent);
        }

        @Override // android.support.v4.app.NavUtils.NavUtilsImplBase, android.support.v4.app.NavUtils.NavUtilsImpl
        public void navigateUpTo(android.app.Activity activity, android.content.Intent upIntent) {
            android.support.v4.app.NavUtilsJB.navigateUpTo(activity, upIntent);
        }

        @Override // android.support.v4.app.NavUtils.NavUtilsImplBase, android.support.v4.app.NavUtils.NavUtilsImpl
        public java.lang.String getParentActivityName(android.content.Context context, android.content.pm.ActivityInfo info) {
            java.lang.String result = android.support.v4.app.NavUtilsJB.getParentActivityName(info);
            if (result == null) {
                return super.getParentActivityName(context, info);
            }
            return result;
        }
    }

    static {
        int version = android.os.Build.VERSION.SDK_INT;
        if (version >= 16) {
            IMPL = new android.support.v4.app.NavUtils.NavUtilsImplJB();
        } else {
            IMPL = new android.support.v4.app.NavUtils.NavUtilsImplBase();
        }
    }

    public static boolean shouldUpRecreateTask(android.app.Activity sourceActivity, android.content.Intent targetIntent) {
        return IMPL.shouldUpRecreateTask(sourceActivity, targetIntent);
    }

    public static void navigateUpFromSameTask(android.app.Activity sourceActivity) {
        android.content.Intent upIntent = getParentActivityIntent(sourceActivity);
        if (upIntent == null) {
            throw new java.lang.IllegalArgumentException("Activity " + sourceActivity.getClass().getSimpleName() + " does not have a parent activity name specified. (Did you forget to add the android.support.PARENT_ACTIVITY <meta-data>  element in your manifest?)");
        }
        navigateUpTo(sourceActivity, upIntent);
    }

    public static void navigateUpTo(android.app.Activity sourceActivity, android.content.Intent upIntent) {
        IMPL.navigateUpTo(sourceActivity, upIntent);
    }

    public static android.content.Intent getParentActivityIntent(android.app.Activity sourceActivity) {
        return IMPL.getParentActivityIntent(sourceActivity);
    }

    public static android.content.Intent getParentActivityIntent(android.content.Context context, java.lang.Class<?> sourceActivityClass) throws android.content.pm.PackageManager.NameNotFoundException {
        java.lang.String parentActivity = getParentActivityName(context, new android.content.ComponentName(context, sourceActivityClass));
        if (parentActivity == null) {
            return null;
        }
        android.content.ComponentName target = new android.content.ComponentName(context, parentActivity);
        java.lang.String grandparent = getParentActivityName(context, target);
        return grandparent == null ? android.support.v4.content.IntentCompat.makeMainActivity(target) : new android.content.Intent().setComponent(target);
    }

    public static android.content.Intent getParentActivityIntent(android.content.Context context, android.content.ComponentName componentName) throws android.content.pm.PackageManager.NameNotFoundException {
        java.lang.String parentActivity = getParentActivityName(context, componentName);
        if (parentActivity == null) {
            return null;
        }
        android.content.ComponentName target = new android.content.ComponentName(componentName.getPackageName(), parentActivity);
        java.lang.String grandparent = getParentActivityName(context, target);
        return grandparent == null ? android.support.v4.content.IntentCompat.makeMainActivity(target) : new android.content.Intent().setComponent(target);
    }

    public static java.lang.String getParentActivityName(android.app.Activity sourceActivity) {
        try {
            return getParentActivityName(sourceActivity, sourceActivity.getComponentName());
        } catch (android.content.pm.PackageManager.NameNotFoundException e) {
            throw new java.lang.IllegalArgumentException(e);
        }
    }

    public static java.lang.String getParentActivityName(android.content.Context context, android.content.ComponentName componentName) throws android.content.pm.PackageManager.NameNotFoundException {
        android.content.pm.PackageManager pm = context.getPackageManager();
        android.content.pm.ActivityInfo info = pm.getActivityInfo(componentName, 128);
        java.lang.String parentActivity = IMPL.getParentActivityName(context, info);
        return parentActivity;
    }

    private NavUtils() {
    }
}
