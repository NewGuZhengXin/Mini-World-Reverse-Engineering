package android.support.v4.accessibilityservice;

/* loaded from: classes.dex */
class AccessibilityServiceInfoCompatIcs {
    AccessibilityServiceInfoCompatIcs() {
    }

    public static boolean getCanRetrieveWindowContent(android.accessibilityservice.AccessibilityServiceInfo info) {
        return info.getCanRetrieveWindowContent();
    }

    public static java.lang.String getDescription(android.accessibilityservice.AccessibilityServiceInfo info) {
        return info.getDescription();
    }

    public static java.lang.String getId(android.accessibilityservice.AccessibilityServiceInfo info) {
        return info.getId();
    }

    public static android.content.pm.ResolveInfo getResolveInfo(android.accessibilityservice.AccessibilityServiceInfo info) {
        return info.getResolveInfo();
    }

    public static java.lang.String getSettingsActivityName(android.accessibilityservice.AccessibilityServiceInfo info) {
        return info.getSettingsActivityName();
    }
}
