package android.support.v4.util;

/* loaded from: classes.dex */
public class DebugUtils {
    public static void buildShortClassTag(java.lang.Object cls, java.lang.StringBuilder out) {
        int end;
        if (cls == null) {
            out.append("null");
            return;
        }
        java.lang.String simpleName = cls.getClass().getSimpleName();
        if ((simpleName == null || simpleName.length() <= 0) && (end = (simpleName = cls.getClass().getName()).lastIndexOf(46)) > 0) {
            simpleName = simpleName.substring(end + 1);
        }
        out.append(simpleName);
        out.append('{');
        out.append(java.lang.Integer.toHexString(java.lang.System.identityHashCode(cls)));
    }
}
