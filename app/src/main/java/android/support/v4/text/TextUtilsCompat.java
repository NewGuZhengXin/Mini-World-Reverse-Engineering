package android.support.v4.text;

/* loaded from: classes.dex */
public class TextUtilsCompat {
    public static final java.util.Locale ROOT = new java.util.Locale("", "");
    private static java.lang.String ARAB_SCRIPT_SUBTAG = "Arab";
    private static java.lang.String HEBR_SCRIPT_SUBTAG = "Hebr";

    public static java.lang.String htmlEncode(java.lang.String s) {
        java.lang.StringBuilder sb = new java.lang.StringBuilder();
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            switch (c) {
                case '\"':
                    sb.append("&quot;");
                    break;
                case '&':
                    sb.append("&amp;");
                    break;
                case '\'':
                    sb.append("&#39;");
                    break;
                case '<':
                    sb.append("&lt;");
                    break;
                case '>':
                    sb.append("&gt;");
                    break;
                default:
                    sb.append(c);
                    break;
            }
        }
        return sb.toString();
    }

    public static int getLayoutDirectionFromLocale(java.util.Locale locale) {
        if (locale != null && !locale.equals(ROOT)) {
            java.lang.String scriptSubtag = android.support.v4.text.ICUCompat.getScript(android.support.v4.text.ICUCompat.addLikelySubtags(locale.toString()));
            if (scriptSubtag == null) {
                return getLayoutDirectionFromFirstChar(locale);
            }
            if (scriptSubtag.equalsIgnoreCase(ARAB_SCRIPT_SUBTAG) || scriptSubtag.equalsIgnoreCase(HEBR_SCRIPT_SUBTAG)) {
                return 1;
            }
        }
        return 0;
    }

    private static int getLayoutDirectionFromFirstChar(java.util.Locale locale) {
        switch (java.lang.Character.getDirectionality(locale.getDisplayName(locale).charAt(0))) {
            case 1:
            case 2:
                return 1;
            default:
                return 0;
        }
    }
}
