package android.support.v4.text;

/* loaded from: classes.dex */
public final class BidiFormatter {
    private static final int DEFAULT_FLAGS = 2;
    private static final int DIR_LTR = -1;
    private static final int DIR_RTL = 1;
    private static final int DIR_UNKNOWN = 0;
    private static final java.lang.String EMPTY_STRING = "";
    private static final int FLAG_STEREO_RESET = 2;
    private static final char LRE = 8234;
    private static final char PDF = 8236;
    private static final char RLE = 8235;
    private final android.support.v4.text.TextDirectionHeuristicCompat mDefaultTextDirectionHeuristicCompat;
    private final int mFlags;
    private final boolean mIsRtlContext;
    private static android.support.v4.text.TextDirectionHeuristicCompat DEFAULT_TEXT_DIRECTION_HEURISTIC = android.support.v4.text.TextDirectionHeuristicsCompat.FIRSTSTRONG_LTR;
    private static final char LRM = 8206;
    private static final java.lang.String LRM_STRING = java.lang.Character.toString(LRM);
    private static final char RLM = 8207;
    private static final java.lang.String RLM_STRING = java.lang.Character.toString(RLM);
    private static final android.support.v4.text.BidiFormatter DEFAULT_LTR_INSTANCE = new android.support.v4.text.BidiFormatter(false, 2, DEFAULT_TEXT_DIRECTION_HEURISTIC);
    private static final android.support.v4.text.BidiFormatter DEFAULT_RTL_INSTANCE = new android.support.v4.text.BidiFormatter(true, 2, DEFAULT_TEXT_DIRECTION_HEURISTIC);

    public static final class Builder {
        private int mFlags;
        private boolean mIsRtlContext;
        private android.support.v4.text.TextDirectionHeuristicCompat mTextDirectionHeuristicCompat;

        public Builder() {
            initialize(android.support.v4.text.BidiFormatter.isRtlLocale(java.util.Locale.getDefault()));
        }

        public Builder(boolean rtlContext) {
            initialize(rtlContext);
        }

        public Builder(java.util.Locale locale) {
            initialize(android.support.v4.text.BidiFormatter.isRtlLocale(locale));
        }

        private void initialize(boolean isRtlContext) {
            this.mIsRtlContext = isRtlContext;
            this.mTextDirectionHeuristicCompat = android.support.v4.text.BidiFormatter.DEFAULT_TEXT_DIRECTION_HEURISTIC;
            this.mFlags = 2;
        }

        public android.support.v4.text.BidiFormatter.Builder stereoReset(boolean stereoReset) {
            if (stereoReset) {
                this.mFlags |= 2;
            } else {
                this.mFlags &= -3;
            }
            return this;
        }

        public android.support.v4.text.BidiFormatter.Builder setTextDirectionHeuristic(android.support.v4.text.TextDirectionHeuristicCompat heuristic) {
            this.mTextDirectionHeuristicCompat = heuristic;
            return this;
        }

        private static android.support.v4.text.BidiFormatter getDefaultInstanceFromContext(boolean isRtlContext) {
            return isRtlContext ? android.support.v4.text.BidiFormatter.DEFAULT_RTL_INSTANCE : android.support.v4.text.BidiFormatter.DEFAULT_LTR_INSTANCE;
        }

        public android.support.v4.text.BidiFormatter build() {
            return (this.mFlags == 2 && this.mTextDirectionHeuristicCompat == android.support.v4.text.BidiFormatter.DEFAULT_TEXT_DIRECTION_HEURISTIC) ? getDefaultInstanceFromContext(this.mIsRtlContext) : new android.support.v4.text.BidiFormatter(this.mIsRtlContext, this.mFlags, this.mTextDirectionHeuristicCompat);
        }
    }

    public static android.support.v4.text.BidiFormatter getInstance() {
        return new android.support.v4.text.BidiFormatter.Builder().build();
    }

    public static android.support.v4.text.BidiFormatter getInstance(boolean rtlContext) {
        return new android.support.v4.text.BidiFormatter.Builder(rtlContext).build();
    }

    public static android.support.v4.text.BidiFormatter getInstance(java.util.Locale locale) {
        return new android.support.v4.text.BidiFormatter.Builder(locale).build();
    }

    private BidiFormatter(boolean isRtlContext, int flags, android.support.v4.text.TextDirectionHeuristicCompat heuristic) {
        this.mIsRtlContext = isRtlContext;
        this.mFlags = flags;
        this.mDefaultTextDirectionHeuristicCompat = heuristic;
    }

    public boolean isRtlContext() {
        return this.mIsRtlContext;
    }

    public boolean getStereoReset() {
        return (this.mFlags & 2) != 0;
    }

    private java.lang.String markAfter(java.lang.String str, android.support.v4.text.TextDirectionHeuristicCompat heuristic) {
        boolean isRtl = heuristic.isRtl(str, 0, str.length());
        if (!this.mIsRtlContext && (isRtl || getExitDir(str) == 1)) {
            return LRM_STRING;
        }
        if (this.mIsRtlContext && (!isRtl || getExitDir(str) == -1)) {
            return RLM_STRING;
        }
        return EMPTY_STRING;
    }

    private java.lang.String markBefore(java.lang.String str, android.support.v4.text.TextDirectionHeuristicCompat heuristic) {
        boolean isRtl = heuristic.isRtl(str, 0, str.length());
        if (!this.mIsRtlContext && (isRtl || getEntryDir(str) == 1)) {
            return LRM_STRING;
        }
        if (this.mIsRtlContext && (!isRtl || getEntryDir(str) == -1)) {
            return RLM_STRING;
        }
        return EMPTY_STRING;
    }

    public boolean isRtl(java.lang.String str) {
        return this.mDefaultTextDirectionHeuristicCompat.isRtl(str, 0, str.length());
    }

    public java.lang.String unicodeWrap(java.lang.String str, android.support.v4.text.TextDirectionHeuristicCompat heuristic, boolean isolate) {
        boolean isRtl = heuristic.isRtl(str, 0, str.length());
        java.lang.StringBuilder result = new java.lang.StringBuilder();
        if (getStereoReset() && isolate) {
            result.append(markBefore(str, isRtl ? android.support.v4.text.TextDirectionHeuristicsCompat.RTL : android.support.v4.text.TextDirectionHeuristicsCompat.LTR));
        }
        if (isRtl != this.mIsRtlContext) {
            result.append(isRtl ? RLE : LRE);
            result.append(str);
            result.append(PDF);
        } else {
            result.append(str);
        }
        if (isolate) {
            result.append(markAfter(str, isRtl ? android.support.v4.text.TextDirectionHeuristicsCompat.RTL : android.support.v4.text.TextDirectionHeuristicsCompat.LTR));
        }
        return result.toString();
    }

    public java.lang.String unicodeWrap(java.lang.String str, android.support.v4.text.TextDirectionHeuristicCompat heuristic) {
        return unicodeWrap(str, heuristic, true);
    }

    public java.lang.String unicodeWrap(java.lang.String str, boolean isolate) {
        return unicodeWrap(str, this.mDefaultTextDirectionHeuristicCompat, isolate);
    }

    public java.lang.String unicodeWrap(java.lang.String str) {
        return unicodeWrap(str, this.mDefaultTextDirectionHeuristicCompat, true);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static boolean isRtlLocale(java.util.Locale locale) {
        return android.support.v4.text.TextUtilsCompat.getLayoutDirectionFromLocale(locale) == 1;
    }

    private static int getExitDir(java.lang.String str) {
        return new android.support.v4.text.BidiFormatter.DirectionalityEstimator(str, false).getExitDir();
    }

    private static int getEntryDir(java.lang.String str) {
        return new android.support.v4.text.BidiFormatter.DirectionalityEstimator(str, false).getEntryDir();
    }

    private static class DirectionalityEstimator {
        private int charIndex;
        private final boolean isHtml;
        private char lastChar;
        private final int length;
        private final java.lang.String text;
        private static final int DIR_TYPE_CACHE_SIZE = 1792;
        private static final byte[] DIR_TYPE_CACHE = new byte[DIR_TYPE_CACHE_SIZE];

        static {
            for (int i = 0; i < DIR_TYPE_CACHE_SIZE; i++) {
                DIR_TYPE_CACHE[i] = java.lang.Character.getDirectionality(i);
            }
        }

        DirectionalityEstimator(java.lang.String text, boolean isHtml) {
            this.text = text;
            this.isHtml = isHtml;
            this.length = text.length();
        }

        int getEntryDir() {
            this.charIndex = 0;
            int embeddingLevel = 0;
            int embeddingLevelDir = 0;
            int firstNonEmptyEmbeddingLevel = 0;
            while (this.charIndex < this.length && firstNonEmptyEmbeddingLevel == 0) {
                switch (dirTypeForward()) {
                    case 0:
                        if (embeddingLevel != 0) {
                            firstNonEmptyEmbeddingLevel = embeddingLevel;
                            break;
                        } else {
                            return -1;
                        }
                    case 1:
                    case 2:
                        if (embeddingLevel != 0) {
                            firstNonEmptyEmbeddingLevel = embeddingLevel;
                            break;
                        } else {
                            return 1;
                        }
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case android.support.v4.view.MotionEventCompat.ACTION_HOVER_MOVE /* 7 */:
                    case 8:
                    case 10:
                    case 11:
                    case 12:
                    case 13:
                    default:
                        firstNonEmptyEmbeddingLevel = embeddingLevel;
                        break;
                    case 9:
                        break;
                    case 14:
                    case android.support.v4.widget.ViewDragHelper.EDGE_ALL /* 15 */:
                        embeddingLevel++;
                        embeddingLevelDir = -1;
                        break;
                    case 16:
                    case 17:
                        embeddingLevel++;
                        embeddingLevelDir = 1;
                        break;
                    case 18:
                        embeddingLevel--;
                        embeddingLevelDir = 0;
                        break;
                }
            }
            if (firstNonEmptyEmbeddingLevel == 0) {
                return 0;
            }
            if (embeddingLevelDir == 0) {
                while (this.charIndex > 0) {
                    switch (dirTypeBackward()) {
                        case 14:
                        case android.support.v4.widget.ViewDragHelper.EDGE_ALL /* 15 */:
                            if (firstNonEmptyEmbeddingLevel != embeddingLevel) {
                                embeddingLevel--;
                                break;
                            } else {
                                return -1;
                            }
                        case 16:
                        case 17:
                            if (firstNonEmptyEmbeddingLevel != embeddingLevel) {
                                embeddingLevel--;
                                break;
                            } else {
                                return 1;
                            }
                        case 18:
                            embeddingLevel++;
                            break;
                    }
                }
                return 0;
            }
            return embeddingLevelDir;
        }

        int getExitDir() {
            this.charIndex = this.length;
            int embeddingLevel = 0;
            int lastNonEmptyEmbeddingLevel = 0;
            while (this.charIndex > 0) {
                switch (dirTypeBackward()) {
                    case 0:
                        if (embeddingLevel != 0) {
                            if (lastNonEmptyEmbeddingLevel != 0) {
                                break;
                            } else {
                                lastNonEmptyEmbeddingLevel = embeddingLevel;
                                break;
                            }
                        } else {
                            return -1;
                        }
                    case 1:
                    case 2:
                        if (embeddingLevel != 0) {
                            if (lastNonEmptyEmbeddingLevel != 0) {
                                break;
                            } else {
                                lastNonEmptyEmbeddingLevel = embeddingLevel;
                                break;
                            }
                        } else {
                            return 1;
                        }
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case android.support.v4.view.MotionEventCompat.ACTION_HOVER_MOVE /* 7 */:
                    case 8:
                    case 10:
                    case 11:
                    case 12:
                    case 13:
                    default:
                        if (lastNonEmptyEmbeddingLevel != 0) {
                            break;
                        } else {
                            lastNonEmptyEmbeddingLevel = embeddingLevel;
                            break;
                        }
                    case 9:
                        break;
                    case 14:
                    case android.support.v4.widget.ViewDragHelper.EDGE_ALL /* 15 */:
                        if (lastNonEmptyEmbeddingLevel == embeddingLevel) {
                            return -1;
                        }
                        embeddingLevel--;
                        break;
                    case 16:
                    case 17:
                        if (lastNonEmptyEmbeddingLevel != embeddingLevel) {
                            embeddingLevel--;
                            break;
                        } else {
                            return 1;
                        }
                    case 18:
                        embeddingLevel++;
                        break;
                }
            }
            return 0;
        }

        private static byte getCachedDirectionality(char c) {
            return c < DIR_TYPE_CACHE_SIZE ? DIR_TYPE_CACHE[c] : java.lang.Character.getDirectionality(c);
        }

        byte dirTypeForward() {
            this.lastChar = this.text.charAt(this.charIndex);
            if (java.lang.Character.isHighSurrogate(this.lastChar)) {
                int codePoint = java.lang.Character.codePointAt(this.text, this.charIndex);
                this.charIndex += java.lang.Character.charCount(codePoint);
                return java.lang.Character.getDirectionality(codePoint);
            }
            this.charIndex++;
            byte cachedDirectionality = getCachedDirectionality(this.lastChar);
            if (this.isHtml) {
                if (this.lastChar == '<') {
                    byte dirType = skipTagForward();
                    return dirType;
                }
                if (this.lastChar == '&') {
                    byte dirType2 = skipEntityForward();
                    return dirType2;
                }
                return cachedDirectionality;
            }
            return cachedDirectionality;
        }

        byte dirTypeBackward() {
            this.lastChar = this.text.charAt(this.charIndex - 1);
            if (java.lang.Character.isLowSurrogate(this.lastChar)) {
                int codePoint = java.lang.Character.codePointBefore(this.text, this.charIndex);
                this.charIndex -= java.lang.Character.charCount(codePoint);
                return java.lang.Character.getDirectionality(codePoint);
            }
            this.charIndex--;
            byte cachedDirectionality = getCachedDirectionality(this.lastChar);
            if (this.isHtml) {
                if (this.lastChar == '>') {
                    byte dirType = skipTagBackward();
                    return dirType;
                }
                if (this.lastChar == ';') {
                    byte dirType2 = skipEntityBackward();
                    return dirType2;
                }
                return cachedDirectionality;
            }
            return cachedDirectionality;
        }

        private byte skipTagForward() {
            int initialCharIndex = this.charIndex;
            while (this.charIndex < this.length) {
                java.lang.String str = this.text;
                int i = this.charIndex;
                this.charIndex = i + 1;
                this.lastChar = str.charAt(i);
                if (this.lastChar == '>') {
                    return (byte) 12;
                }
                if (this.lastChar == '\"' || this.lastChar == '\'') {
                    char quote = this.lastChar;
                    while (this.charIndex < this.length) {
                        java.lang.String str2 = this.text;
                        int i2 = this.charIndex;
                        this.charIndex = i2 + 1;
                        char cCharAt = str2.charAt(i2);
                        this.lastChar = cCharAt;
                        if (cCharAt != quote) {
                        }
                    }
                }
            }
            this.charIndex = initialCharIndex;
            this.lastChar = '<';
            return (byte) 13;
        }

        private byte skipTagBackward() {
            int initialCharIndex = this.charIndex;
            while (this.charIndex > 0) {
                java.lang.String str = this.text;
                int i = this.charIndex - 1;
                this.charIndex = i;
                this.lastChar = str.charAt(i);
                if (this.lastChar == '<') {
                    return (byte) 12;
                }
                if (this.lastChar == '>') {
                    break;
                }
                if (this.lastChar == '\"' || this.lastChar == '\'') {
                    char quote = this.lastChar;
                    while (this.charIndex > 0) {
                        java.lang.String str2 = this.text;
                        int i2 = this.charIndex - 1;
                        this.charIndex = i2;
                        char cCharAt = str2.charAt(i2);
                        this.lastChar = cCharAt;
                        if (cCharAt != quote) {
                        }
                    }
                }
            }
            this.charIndex = initialCharIndex;
            this.lastChar = '>';
            return (byte) 13;
        }

        private byte skipEntityForward() {
            while (this.charIndex < this.length) {
                java.lang.String str = this.text;
                int i = this.charIndex;
                this.charIndex = i + 1;
                char cCharAt = str.charAt(i);
                this.lastChar = cCharAt;
                if (cCharAt == ';') {
                    return (byte) 12;
                }
            }
            return (byte) 12;
        }

        private byte skipEntityBackward() {
            int initialCharIndex = this.charIndex;
            while (this.charIndex > 0) {
                java.lang.String str = this.text;
                int i = this.charIndex - 1;
                this.charIndex = i;
                this.lastChar = str.charAt(i);
                if (this.lastChar == '&') {
                    return (byte) 12;
                }
                if (this.lastChar == ';') {
                    break;
                }
            }
            this.charIndex = initialCharIndex;
            this.lastChar = ';';
            return (byte) 13;
        }
    }
}
