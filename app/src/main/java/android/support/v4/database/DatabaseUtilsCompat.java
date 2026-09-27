package android.support.v4.database;

/* loaded from: classes.dex */
public class DatabaseUtilsCompat {
    private DatabaseUtilsCompat() {
    }

    public static java.lang.String concatenateWhere(java.lang.String a, java.lang.String b) {
        if (android.text.TextUtils.isEmpty(a)) {
            return b;
        }
        return android.text.TextUtils.isEmpty(b) ? a : "(" + a + ") AND (" + b + ")";
    }

    public static java.lang.String[] appendSelectionArgs(java.lang.String[] originalValues, java.lang.String[] newValues) {
        if (originalValues == null || originalValues.length == 0) {
            return newValues;
        }
        java.lang.String[] result = new java.lang.String[originalValues.length + newValues.length];
        java.lang.System.arraycopy(originalValues, 0, result, 0, originalValues.length);
        java.lang.System.arraycopy(newValues, 0, result, originalValues.length, newValues.length);
        return result;
    }
}
