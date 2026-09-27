package android.support.v4.text;

/* loaded from: classes.dex */
class ICUCompatIcs {
    private static final java.lang.String TAG = "ICUCompatIcs";
    private static java.lang.reflect.Method sAddLikelySubtagsMethod;
    private static java.lang.reflect.Method sGetScriptMethod;

    ICUCompatIcs() {
    }

    static {
        try {
            java.lang.Class<?> clazz = java.lang.Class.forName("libcore.icu.ICU");
            if (clazz != null) {
                sGetScriptMethod = clazz.getMethod("getScript", java.lang.String.class);
                sAddLikelySubtagsMethod = clazz.getMethod("addLikelySubtags", java.lang.String.class);
            }
        } catch (java.lang.Exception e) {
            android.util.Log.w(TAG, e);
        }
    }

    public static java.lang.String getScript(java.lang.String locale) {
        try {
            if (sGetScriptMethod != null) {
                java.lang.Object[] args = {locale};
                return (java.lang.String) sGetScriptMethod.invoke(null, args);
            }
        } catch (java.lang.IllegalAccessException e) {
            android.util.Log.w(TAG, e);
        } catch (java.lang.reflect.InvocationTargetException e2) {
            android.util.Log.w(TAG, e2);
        }
        return null;
    }

    public static java.lang.String addLikelySubtags(java.lang.String locale) {
        try {
            if (sAddLikelySubtagsMethod != null) {
                java.lang.Object[] args = {locale};
                return (java.lang.String) sAddLikelySubtagsMethod.invoke(null, args);
            }
        } catch (java.lang.IllegalAccessException e) {
            android.util.Log.w(TAG, e);
        } catch (java.lang.reflect.InvocationTargetException e2) {
            android.util.Log.w(TAG, e2);
        }
        return locale;
    }
}
