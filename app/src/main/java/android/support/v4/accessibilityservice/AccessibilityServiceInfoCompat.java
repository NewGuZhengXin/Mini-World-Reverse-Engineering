package android.support.v4.accessibilityservice;

/* loaded from: classes.dex */
public class AccessibilityServiceInfoCompat {
    public static final int CAPABILITY_CAN_FILTER_KEY_EVENTS = 8;
    public static final int CAPABILITY_CAN_REQUEST_ENHANCED_WEB_ACCESSIBILITY = 4;
    public static final int CAPABILITY_CAN_REQUEST_TOUCH_EXPLORATION = 2;
    public static final int CAPABILITY_CAN_RETRIEVE_WINDOW_CONTENT = 1;
    public static final int DEFAULT = 1;
    public static final int FEEDBACK_ALL_MASK = -1;
    public static final int FEEDBACK_BRAILLE = 32;
    public static final int FLAG_INCLUDE_NOT_IMPORTANT_VIEWS = 2;
    public static final int FLAG_REPORT_VIEW_IDS = 16;
    public static final int FLAG_REQUEST_ENHANCED_WEB_ACCESSIBILITY = 8;
    public static final int FLAG_REQUEST_FILTER_KEY_EVENTS = 32;
    public static final int FLAG_REQUEST_TOUCH_EXPLORATION_MODE = 4;
    private static final android.support.v4.accessibilityservice.AccessibilityServiceInfoCompat.AccessibilityServiceInfoVersionImpl IMPL;

    interface AccessibilityServiceInfoVersionImpl {
        boolean getCanRetrieveWindowContent(android.accessibilityservice.AccessibilityServiceInfo accessibilityServiceInfo);

        int getCapabilities(android.accessibilityservice.AccessibilityServiceInfo accessibilityServiceInfo);

        java.lang.String getDescription(android.accessibilityservice.AccessibilityServiceInfo accessibilityServiceInfo);

        java.lang.String getId(android.accessibilityservice.AccessibilityServiceInfo accessibilityServiceInfo);

        android.content.pm.ResolveInfo getResolveInfo(android.accessibilityservice.AccessibilityServiceInfo accessibilityServiceInfo);

        java.lang.String getSettingsActivityName(android.accessibilityservice.AccessibilityServiceInfo accessibilityServiceInfo);
    }

    static class AccessibilityServiceInfoStubImpl implements android.support.v4.accessibilityservice.AccessibilityServiceInfoCompat.AccessibilityServiceInfoVersionImpl {
        AccessibilityServiceInfoStubImpl() {
        }

        @Override // android.support.v4.accessibilityservice.AccessibilityServiceInfoCompat.AccessibilityServiceInfoVersionImpl
        public boolean getCanRetrieveWindowContent(android.accessibilityservice.AccessibilityServiceInfo info) {
            return false;
        }

        @Override // android.support.v4.accessibilityservice.AccessibilityServiceInfoCompat.AccessibilityServiceInfoVersionImpl
        public java.lang.String getDescription(android.accessibilityservice.AccessibilityServiceInfo info) {
            return null;
        }

        @Override // android.support.v4.accessibilityservice.AccessibilityServiceInfoCompat.AccessibilityServiceInfoVersionImpl
        public java.lang.String getId(android.accessibilityservice.AccessibilityServiceInfo info) {
            return null;
        }

        @Override // android.support.v4.accessibilityservice.AccessibilityServiceInfoCompat.AccessibilityServiceInfoVersionImpl
        public android.content.pm.ResolveInfo getResolveInfo(android.accessibilityservice.AccessibilityServiceInfo info) {
            return null;
        }

        @Override // android.support.v4.accessibilityservice.AccessibilityServiceInfoCompat.AccessibilityServiceInfoVersionImpl
        public java.lang.String getSettingsActivityName(android.accessibilityservice.AccessibilityServiceInfo info) {
            return null;
        }

        @Override // android.support.v4.accessibilityservice.AccessibilityServiceInfoCompat.AccessibilityServiceInfoVersionImpl
        public int getCapabilities(android.accessibilityservice.AccessibilityServiceInfo info) {
            return 0;
        }
    }

    static class AccessibilityServiceInfoIcsImpl extends android.support.v4.accessibilityservice.AccessibilityServiceInfoCompat.AccessibilityServiceInfoStubImpl {
        AccessibilityServiceInfoIcsImpl() {
        }

        @Override // android.support.v4.accessibilityservice.AccessibilityServiceInfoCompat.AccessibilityServiceInfoStubImpl, android.support.v4.accessibilityservice.AccessibilityServiceInfoCompat.AccessibilityServiceInfoVersionImpl
        public boolean getCanRetrieveWindowContent(android.accessibilityservice.AccessibilityServiceInfo info) {
            return android.support.v4.accessibilityservice.AccessibilityServiceInfoCompatIcs.getCanRetrieveWindowContent(info);
        }

        @Override // android.support.v4.accessibilityservice.AccessibilityServiceInfoCompat.AccessibilityServiceInfoStubImpl, android.support.v4.accessibilityservice.AccessibilityServiceInfoCompat.AccessibilityServiceInfoVersionImpl
        public java.lang.String getDescription(android.accessibilityservice.AccessibilityServiceInfo info) {
            return android.support.v4.accessibilityservice.AccessibilityServiceInfoCompatIcs.getDescription(info);
        }

        @Override // android.support.v4.accessibilityservice.AccessibilityServiceInfoCompat.AccessibilityServiceInfoStubImpl, android.support.v4.accessibilityservice.AccessibilityServiceInfoCompat.AccessibilityServiceInfoVersionImpl
        public java.lang.String getId(android.accessibilityservice.AccessibilityServiceInfo info) {
            return android.support.v4.accessibilityservice.AccessibilityServiceInfoCompatIcs.getId(info);
        }

        @Override // android.support.v4.accessibilityservice.AccessibilityServiceInfoCompat.AccessibilityServiceInfoStubImpl, android.support.v4.accessibilityservice.AccessibilityServiceInfoCompat.AccessibilityServiceInfoVersionImpl
        public android.content.pm.ResolveInfo getResolveInfo(android.accessibilityservice.AccessibilityServiceInfo info) {
            return android.support.v4.accessibilityservice.AccessibilityServiceInfoCompatIcs.getResolveInfo(info);
        }

        @Override // android.support.v4.accessibilityservice.AccessibilityServiceInfoCompat.AccessibilityServiceInfoStubImpl, android.support.v4.accessibilityservice.AccessibilityServiceInfoCompat.AccessibilityServiceInfoVersionImpl
        public java.lang.String getSettingsActivityName(android.accessibilityservice.AccessibilityServiceInfo info) {
            return android.support.v4.accessibilityservice.AccessibilityServiceInfoCompatIcs.getSettingsActivityName(info);
        }

        @Override // android.support.v4.accessibilityservice.AccessibilityServiceInfoCompat.AccessibilityServiceInfoStubImpl, android.support.v4.accessibilityservice.AccessibilityServiceInfoCompat.AccessibilityServiceInfoVersionImpl
        public int getCapabilities(android.accessibilityservice.AccessibilityServiceInfo info) {
            return getCanRetrieveWindowContent(info) ? 1 : 0;
        }
    }

    static class AccessibilityServiceInfoJellyBeanMr2 extends android.support.v4.accessibilityservice.AccessibilityServiceInfoCompat.AccessibilityServiceInfoIcsImpl {
        AccessibilityServiceInfoJellyBeanMr2() {
        }

        @Override // android.support.v4.accessibilityservice.AccessibilityServiceInfoCompat.AccessibilityServiceInfoIcsImpl, android.support.v4.accessibilityservice.AccessibilityServiceInfoCompat.AccessibilityServiceInfoStubImpl, android.support.v4.accessibilityservice.AccessibilityServiceInfoCompat.AccessibilityServiceInfoVersionImpl
        public int getCapabilities(android.accessibilityservice.AccessibilityServiceInfo info) {
            return android.support.v4.accessibilityservice.AccessibilityServiceInfoCompatJellyBeanMr2.getCapabilities(info);
        }
    }

    static {
        if (android.os.Build.VERSION.SDK_INT >= 18) {
            IMPL = new android.support.v4.accessibilityservice.AccessibilityServiceInfoCompat.AccessibilityServiceInfoJellyBeanMr2();
        } else if (android.os.Build.VERSION.SDK_INT >= 14) {
            IMPL = new android.support.v4.accessibilityservice.AccessibilityServiceInfoCompat.AccessibilityServiceInfoIcsImpl();
        } else {
            IMPL = new android.support.v4.accessibilityservice.AccessibilityServiceInfoCompat.AccessibilityServiceInfoStubImpl();
        }
    }

    private AccessibilityServiceInfoCompat() {
    }

    public static java.lang.String getId(android.accessibilityservice.AccessibilityServiceInfo info) {
        return IMPL.getId(info);
    }

    public static android.content.pm.ResolveInfo getResolveInfo(android.accessibilityservice.AccessibilityServiceInfo info) {
        return IMPL.getResolveInfo(info);
    }

    public static java.lang.String getSettingsActivityName(android.accessibilityservice.AccessibilityServiceInfo info) {
        return IMPL.getSettingsActivityName(info);
    }

    public static boolean getCanRetrieveWindowContent(android.accessibilityservice.AccessibilityServiceInfo info) {
        return IMPL.getCanRetrieveWindowContent(info);
    }

    public static java.lang.String getDescription(android.accessibilityservice.AccessibilityServiceInfo info) {
        return IMPL.getDescription(info);
    }

    public static java.lang.String feedbackTypeToString(int feedbackType) {
        java.lang.StringBuilder builder = new java.lang.StringBuilder();
        builder.append("[");
        while (feedbackType > 0) {
            int feedbackTypeFlag = 1 << java.lang.Integer.numberOfTrailingZeros(feedbackType);
            feedbackType &= feedbackTypeFlag ^ (-1);
            if (builder.length() > 1) {
                builder.append(", ");
            }
            switch (feedbackTypeFlag) {
                case 1:
                    builder.append("FEEDBACK_SPOKEN");
                    break;
                case 2:
                    builder.append("FEEDBACK_HAPTIC");
                    break;
                case 4:
                    builder.append("FEEDBACK_AUDIBLE");
                    break;
                case 8:
                    builder.append("FEEDBACK_VISUAL");
                    break;
                case 16:
                    builder.append("FEEDBACK_GENERIC");
                    break;
            }
        }
        builder.append("]");
        return builder.toString();
    }

    public static java.lang.String flagToString(int flag) {
        switch (flag) {
            case 1:
                return "DEFAULT";
            case 2:
                return "FLAG_INCLUDE_NOT_IMPORTANT_VIEWS";
            case 4:
                return "FLAG_REQUEST_TOUCH_EXPLORATION_MODE";
            case 8:
                return "FLAG_REQUEST_ENHANCED_WEB_ACCESSIBILITY";
            case 16:
                return "FLAG_REPORT_VIEW_IDS";
            case 32:
                return "FLAG_REQUEST_FILTER_KEY_EVENTS";
            default:
                return null;
        }
    }

    public static int getCapabilities(android.accessibilityservice.AccessibilityServiceInfo info) {
        return IMPL.getCapabilities(info);
    }

    public static java.lang.String capabilityToString(int capability) {
        switch (capability) {
            case 1:
                return "CAPABILITY_CAN_RETRIEVE_WINDOW_CONTENT";
            case 2:
                return "CAPABILITY_CAN_REQUEST_TOUCH_EXPLORATION";
            case 3:
            case 5:
            case 6:
            case android.support.v4.view.MotionEventCompat.ACTION_HOVER_MOVE /* 7 */:
            default:
                return "UNKNOWN";
            case 4:
                return "CAPABILITY_CAN_REQUEST_ENHANCED_WEB_ACCESSIBILITY";
            case 8:
                return "CAPABILITY_CAN_FILTER_KEY_EVENTS";
        }
    }
}
