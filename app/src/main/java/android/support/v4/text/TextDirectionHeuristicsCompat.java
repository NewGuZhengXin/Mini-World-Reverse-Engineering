package android.support.v4.text;

/* loaded from: classes.dex */
public class TextDirectionHeuristicsCompat {
    public static final android.support.v4.text.TextDirectionHeuristicCompat ANYRTL_LTR;
    public static final android.support.v4.text.TextDirectionHeuristicCompat FIRSTSTRONG_LTR;
    public static final android.support.v4.text.TextDirectionHeuristicCompat FIRSTSTRONG_RTL;
    public static final android.support.v4.text.TextDirectionHeuristicCompat LOCALE = android.support.v4.text.TextDirectionHeuristicsCompat.TextDirectionHeuristicLocale.INSTANCE;
    public static final android.support.v4.text.TextDirectionHeuristicCompat LTR;
    public static final android.support.v4.text.TextDirectionHeuristicCompat RTL;
    private static final int STATE_FALSE = 1;
    private static final int STATE_TRUE = 0;
    private static final int STATE_UNKNOWN = 2;

    private interface TextDirectionAlgorithm {
        int checkRtl(java.lang.CharSequence charSequence, int i, int i2);
    }

    /* JADX WARN: Multi-variable type inference failed */
    static {
        boolean z = true;
        boolean z2 = false;
        LTR = new android.support.v4.text.TextDirectionHeuristicsCompat.TextDirectionHeuristicInternal(null, z2);
        RTL = new android.support.v4.text.TextDirectionHeuristicsCompat.TextDirectionHeuristicInternal(null, z); // NOTE(jadx-fix): smali passes the null algorithm (const/4 v2, 0x0), not the `0 == true ? 1 : 0` expression jadx emitted
        FIRSTSTRONG_LTR = new android.support.v4.text.TextDirectionHeuristicsCompat.TextDirectionHeuristicInternal(android.support.v4.text.TextDirectionHeuristicsCompat.FirstStrong.INSTANCE, z2);
        FIRSTSTRONG_RTL = new android.support.v4.text.TextDirectionHeuristicsCompat.TextDirectionHeuristicInternal(android.support.v4.text.TextDirectionHeuristicsCompat.FirstStrong.INSTANCE, z);
        ANYRTL_LTR = new android.support.v4.text.TextDirectionHeuristicsCompat.TextDirectionHeuristicInternal(android.support.v4.text.TextDirectionHeuristicsCompat.AnyStrong.INSTANCE_RTL, z2);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static int isRtlText(int directionality) {
        switch (directionality) {
            case 0:
                return 1;
            case 1:
            case 2:
                return 0;
            default:
                return 2;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static int isRtlTextOrFormat(int directionality) {
        switch (directionality) {
            case 0:
            case 14:
            case android.support.v4.widget.ViewDragHelper.EDGE_ALL /* 15 */:
                return 1;
            case 1:
            case 2:
            case 16:
            case 17:
                return 0;
            default:
                return 2;
        }
    }

    private static abstract class TextDirectionHeuristicImpl implements android.support.v4.text.TextDirectionHeuristicCompat {
        private final android.support.v4.text.TextDirectionHeuristicsCompat.TextDirectionAlgorithm mAlgorithm;

        protected abstract boolean defaultIsRtl();

        public TextDirectionHeuristicImpl(android.support.v4.text.TextDirectionHeuristicsCompat.TextDirectionAlgorithm algorithm) {
            this.mAlgorithm = algorithm;
        }

        @Override // android.support.v4.text.TextDirectionHeuristicCompat
        public boolean isRtl(char[] array, int start, int count) {
            return isRtl(java.nio.CharBuffer.wrap(array), start, count);
        }

        @Override // android.support.v4.text.TextDirectionHeuristicCompat
        public boolean isRtl(java.lang.CharSequence cs, int start, int count) {
            if (cs == null || start < 0 || count < 0 || cs.length() - count < start) {
                throw new java.lang.IllegalArgumentException();
            }
            return this.mAlgorithm == null ? defaultIsRtl() : doCheck(cs, start, count);
        }

        private boolean doCheck(java.lang.CharSequence cs, int start, int count) {
            switch (this.mAlgorithm.checkRtl(cs, start, count)) {
                case 0:
                    return true;
                case 1:
                    return false;
                default:
                    return defaultIsRtl();
            }
        }
    }

    private static class TextDirectionHeuristicInternal extends android.support.v4.text.TextDirectionHeuristicsCompat.TextDirectionHeuristicImpl {
        private final boolean mDefaultIsRtl;

        private TextDirectionHeuristicInternal(android.support.v4.text.TextDirectionHeuristicsCompat.TextDirectionAlgorithm algorithm, boolean defaultIsRtl) {
            super(algorithm);
            this.mDefaultIsRtl = defaultIsRtl;
        }

        @Override // android.support.v4.text.TextDirectionHeuristicsCompat.TextDirectionHeuristicImpl
        protected boolean defaultIsRtl() {
            return this.mDefaultIsRtl;
        }
    }

    private static class FirstStrong implements android.support.v4.text.TextDirectionHeuristicsCompat.TextDirectionAlgorithm {
        public static final android.support.v4.text.TextDirectionHeuristicsCompat.FirstStrong INSTANCE = new android.support.v4.text.TextDirectionHeuristicsCompat.FirstStrong();

        @Override // android.support.v4.text.TextDirectionHeuristicsCompat.TextDirectionAlgorithm
        public int checkRtl(java.lang.CharSequence cs, int start, int count) {
            int result = 2;
            int e = start + count;
            for (int i = start; i < e && result == 2; i++) {
                result = android.support.v4.text.TextDirectionHeuristicsCompat.isRtlTextOrFormat(java.lang.Character.getDirectionality(cs.charAt(i)));
            }
            return result;
        }

        private FirstStrong() {
        }
    }

    private static class AnyStrong implements android.support.v4.text.TextDirectionHeuristicsCompat.TextDirectionAlgorithm {
        private final boolean mLookForRtl;
        public static final android.support.v4.text.TextDirectionHeuristicsCompat.AnyStrong INSTANCE_RTL = new android.support.v4.text.TextDirectionHeuristicsCompat.AnyStrong(true);
        public static final android.support.v4.text.TextDirectionHeuristicsCompat.AnyStrong INSTANCE_LTR = new android.support.v4.text.TextDirectionHeuristicsCompat.AnyStrong(false);

        @Override // android.support.v4.text.TextDirectionHeuristicsCompat.TextDirectionAlgorithm
        public int checkRtl(java.lang.CharSequence cs, int start, int count) {
            boolean haveUnlookedFor = false;
            int e = start + count;
            for (int i = start; i < e; i++) {
                switch (android.support.v4.text.TextDirectionHeuristicsCompat.isRtlText(java.lang.Character.getDirectionality(cs.charAt(i)))) {
                    case 0:
                        if (this.mLookForRtl) {
                            return 0;
                        }
                        haveUnlookedFor = true;
                        break;
                    case 1:
                        if (!this.mLookForRtl) {
                            return 1;
                        }
                        haveUnlookedFor = true;
                        break;
                }
            }
            if (haveUnlookedFor) {
                return !this.mLookForRtl ? 0 : 1;
            }
            return 2;
        }

        private AnyStrong(boolean lookForRtl) {
            this.mLookForRtl = lookForRtl;
        }
    }

    private static class TextDirectionHeuristicLocale extends android.support.v4.text.TextDirectionHeuristicsCompat.TextDirectionHeuristicImpl {
        public static final android.support.v4.text.TextDirectionHeuristicsCompat.TextDirectionHeuristicLocale INSTANCE = new android.support.v4.text.TextDirectionHeuristicsCompat.TextDirectionHeuristicLocale();

        public TextDirectionHeuristicLocale() {
            super(null);
        }

        @Override // android.support.v4.text.TextDirectionHeuristicsCompat.TextDirectionHeuristicImpl
        protected boolean defaultIsRtl() {
            int dir = android.support.v4.text.TextUtilsCompat.getLayoutDirectionFromLocale(java.util.Locale.getDefault());
            return dir == 1;
        }
    }
}
