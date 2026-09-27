package android.support.v4.content;

/* loaded from: classes.dex */
public class IntentCompat {
    public static final java.lang.String ACTION_EXTERNAL_APPLICATIONS_AVAILABLE = "android.intent.action.EXTERNAL_APPLICATIONS_AVAILABLE";
    public static final java.lang.String ACTION_EXTERNAL_APPLICATIONS_UNAVAILABLE = "android.intent.action.EXTERNAL_APPLICATIONS_UNAVAILABLE";
    public static final java.lang.String EXTRA_CHANGED_PACKAGE_LIST = "android.intent.extra.changed_package_list";
    public static final java.lang.String EXTRA_CHANGED_UID_LIST = "android.intent.extra.changed_uid_list";
    public static final java.lang.String EXTRA_HTML_TEXT = "android.intent.extra.HTML_TEXT";
    public static final int FLAG_ACTIVITY_CLEAR_TASK = 32768;
    public static final int FLAG_ACTIVITY_TASK_ON_HOME = 16384;
    private static final android.support.v4.content.IntentCompat.IntentCompatImpl IMPL;

    interface IntentCompatImpl {
        android.content.Intent makeMainActivity(android.content.ComponentName componentName);

        android.content.Intent makeMainSelectorActivity(java.lang.String str, java.lang.String str2);

        android.content.Intent makeRestartActivityTask(android.content.ComponentName componentName);
    }

    static class IntentCompatImplBase implements android.support.v4.content.IntentCompat.IntentCompatImpl {
        IntentCompatImplBase() {
        }

        @Override // android.support.v4.content.IntentCompat.IntentCompatImpl
        public android.content.Intent makeMainActivity(android.content.ComponentName componentName) {
            android.content.Intent intent = new android.content.Intent("android.intent.action.MAIN");
            intent.setComponent(componentName);
            intent.addCategory("android.intent.category.LAUNCHER");
            return intent;
        }

        @Override // android.support.v4.content.IntentCompat.IntentCompatImpl
        public android.content.Intent makeMainSelectorActivity(java.lang.String selectorAction, java.lang.String selectorCategory) {
            android.content.Intent intent = new android.content.Intent(selectorAction);
            intent.addCategory(selectorCategory);
            return intent;
        }

        @Override // android.support.v4.content.IntentCompat.IntentCompatImpl
        public android.content.Intent makeRestartActivityTask(android.content.ComponentName mainActivity) {
            android.content.Intent intent = makeMainActivity(mainActivity);
            intent.addFlags(268468224);
            return intent;
        }
    }

    static class IntentCompatImplHC extends android.support.v4.content.IntentCompat.IntentCompatImplBase {
        IntentCompatImplHC() {
        }

        @Override // android.support.v4.content.IntentCompat.IntentCompatImplBase, android.support.v4.content.IntentCompat.IntentCompatImpl
        public android.content.Intent makeMainActivity(android.content.ComponentName componentName) {
            return android.support.v4.content.IntentCompatHoneycomb.makeMainActivity(componentName);
        }

        @Override // android.support.v4.content.IntentCompat.IntentCompatImplBase, android.support.v4.content.IntentCompat.IntentCompatImpl
        public android.content.Intent makeRestartActivityTask(android.content.ComponentName componentName) {
            return android.support.v4.content.IntentCompatHoneycomb.makeRestartActivityTask(componentName);
        }
    }

    static class IntentCompatImplIcsMr1 extends android.support.v4.content.IntentCompat.IntentCompatImplHC {
        IntentCompatImplIcsMr1() {
        }

        @Override // android.support.v4.content.IntentCompat.IntentCompatImplBase, android.support.v4.content.IntentCompat.IntentCompatImpl
        public android.content.Intent makeMainSelectorActivity(java.lang.String selectorAction, java.lang.String selectorCategory) {
            return android.support.v4.content.IntentCompatIcsMr1.makeMainSelectorActivity(selectorAction, selectorCategory);
        }
    }

    static {
        int version = android.os.Build.VERSION.SDK_INT;
        if (version >= 15) {
            IMPL = new android.support.v4.content.IntentCompat.IntentCompatImplIcsMr1();
        } else if (version >= 11) {
            IMPL = new android.support.v4.content.IntentCompat.IntentCompatImplHC();
        } else {
            IMPL = new android.support.v4.content.IntentCompat.IntentCompatImplBase();
        }
    }

    private IntentCompat() {
    }

    public static android.content.Intent makeMainActivity(android.content.ComponentName mainActivity) {
        return IMPL.makeMainActivity(mainActivity);
    }

    public static android.content.Intent makeMainSelectorActivity(java.lang.String selectorAction, java.lang.String selectorCategory) {
        return IMPL.makeMainSelectorActivity(selectorAction, selectorCategory);
    }

    public static android.content.Intent makeRestartActivityTask(android.content.ComponentName mainActivity) {
        return IMPL.makeRestartActivityTask(mainActivity);
    }
}
