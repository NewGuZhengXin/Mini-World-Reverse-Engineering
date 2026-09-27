package android.support.v4.view;

/* loaded from: classes.dex */
class PagerTitleStripIcs {
    PagerTitleStripIcs() {
    }

    public static void setSingleLineAllCaps(android.widget.TextView text) {
        text.setTransformationMethod(new android.support.v4.view.PagerTitleStripIcs.SingleLineAllCapsTransform(text.getContext()));
    }

    private static class SingleLineAllCapsTransform extends android.text.method.SingleLineTransformationMethod {
        private static final java.lang.String TAG = "SingleLineAllCapsTransform";
        private java.util.Locale mLocale;

        public SingleLineAllCapsTransform(android.content.Context context) {
            this.mLocale = context.getResources().getConfiguration().locale;
        }

        @Override // android.text.method.ReplacementTransformationMethod, android.text.method.TransformationMethod
        public java.lang.CharSequence getTransformation(java.lang.CharSequence source, android.view.View view) {
            java.lang.CharSequence source2 = super.getTransformation(source, view);
            if (source2 != null) {
                return source2.toString().toUpperCase(this.mLocale);
            }
            return null;
        }
    }
}
