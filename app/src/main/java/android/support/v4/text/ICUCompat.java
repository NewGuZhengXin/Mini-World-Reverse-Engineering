package android.support.v4.text;

/* loaded from: classes.dex */
public class ICUCompat {
    private static final android.support.v4.text.ICUCompat.ICUCompatImpl IMPL;

    interface ICUCompatImpl {
        java.lang.String addLikelySubtags(java.lang.String str);

        java.lang.String getScript(java.lang.String str);
    }

    static class ICUCompatImplBase implements android.support.v4.text.ICUCompat.ICUCompatImpl {
        ICUCompatImplBase() {
        }

        @Override // android.support.v4.text.ICUCompat.ICUCompatImpl
        public java.lang.String getScript(java.lang.String locale) {
            return null;
        }

        @Override // android.support.v4.text.ICUCompat.ICUCompatImpl
        public java.lang.String addLikelySubtags(java.lang.String locale) {
            return locale;
        }
    }

    static class ICUCompatImplIcs implements android.support.v4.text.ICUCompat.ICUCompatImpl {
        ICUCompatImplIcs() {
        }

        @Override // android.support.v4.text.ICUCompat.ICUCompatImpl
        public java.lang.String getScript(java.lang.String locale) {
            return android.support.v4.text.ICUCompatIcs.getScript(locale);
        }

        @Override // android.support.v4.text.ICUCompat.ICUCompatImpl
        public java.lang.String addLikelySubtags(java.lang.String locale) {
            return android.support.v4.text.ICUCompatIcs.addLikelySubtags(locale);
        }
    }

    static {
        int version = android.os.Build.VERSION.SDK_INT;
        if (version >= 14) {
            IMPL = new android.support.v4.text.ICUCompat.ICUCompatImplIcs();
        } else {
            IMPL = new android.support.v4.text.ICUCompat.ICUCompatImplBase();
        }
    }

    public static java.lang.String getScript(java.lang.String locale) {
        return IMPL.getScript(locale);
    }

    public static java.lang.String addLikelySubtags(java.lang.String locale) {
        return IMPL.addLikelySubtags(locale);
    }
}
