package android.support.v4.print;

/* loaded from: classes.dex */
public final class PrintHelper {
    public static final int COLOR_MODE_COLOR = 2;
    public static final int COLOR_MODE_MONOCHROME = 1;
    public static final int ORIENTATION_LANDSCAPE = 1;
    public static final int ORIENTATION_PORTRAIT = 2;
    public static final int SCALE_MODE_FILL = 2;
    public static final int SCALE_MODE_FIT = 1;
    android.support.v4.print.PrintHelper.PrintHelperVersionImpl mImpl;

    interface PrintHelperVersionImpl {
        int getColorMode();

        int getOrientation();

        int getScaleMode();

        void printBitmap(java.lang.String str, android.graphics.Bitmap bitmap);

        void printBitmap(java.lang.String str, android.net.Uri uri) throws java.io.FileNotFoundException;

        void setColorMode(int i);

        void setOrientation(int i);

        void setScaleMode(int i);
    }

    public static boolean systemSupportsPrint() {
        return android.os.Build.VERSION.SDK_INT >= 19;
    }

    private static final class PrintHelperStubImpl implements android.support.v4.print.PrintHelper.PrintHelperVersionImpl {
        int mColorMode;
        int mOrientation;
        int mScaleMode;

        private PrintHelperStubImpl() {
            this.mScaleMode = 2;
            this.mColorMode = 2;
            this.mOrientation = 1;
        }

        @Override // android.support.v4.print.PrintHelper.PrintHelperVersionImpl
        public void setScaleMode(int scaleMode) {
            this.mScaleMode = scaleMode;
        }

        @Override // android.support.v4.print.PrintHelper.PrintHelperVersionImpl
        public int getColorMode() {
            return this.mColorMode;
        }

        @Override // android.support.v4.print.PrintHelper.PrintHelperVersionImpl
        public void setColorMode(int colorMode) {
            this.mColorMode = colorMode;
        }

        @Override // android.support.v4.print.PrintHelper.PrintHelperVersionImpl
        public void setOrientation(int orientation) {
            this.mOrientation = orientation;
        }

        @Override // android.support.v4.print.PrintHelper.PrintHelperVersionImpl
        public int getOrientation() {
            return this.mOrientation;
        }

        @Override // android.support.v4.print.PrintHelper.PrintHelperVersionImpl
        public int getScaleMode() {
            return this.mScaleMode;
        }

        @Override // android.support.v4.print.PrintHelper.PrintHelperVersionImpl
        public void printBitmap(java.lang.String jobName, android.graphics.Bitmap bitmap) {
        }

        @Override // android.support.v4.print.PrintHelper.PrintHelperVersionImpl
        public void printBitmap(java.lang.String jobName, android.net.Uri imageFile) {
        }
    }

    private static final class PrintHelperKitkatImpl implements android.support.v4.print.PrintHelper.PrintHelperVersionImpl {
        private final android.support.v4.print.PrintHelperKitkat mPrintHelper;

        PrintHelperKitkatImpl(android.content.Context context) {
            this.mPrintHelper = new android.support.v4.print.PrintHelperKitkat(context);
        }

        @Override // android.support.v4.print.PrintHelper.PrintHelperVersionImpl
        public void setScaleMode(int scaleMode) {
            this.mPrintHelper.setScaleMode(scaleMode);
        }

        @Override // android.support.v4.print.PrintHelper.PrintHelperVersionImpl
        public int getScaleMode() {
            return this.mPrintHelper.getScaleMode();
        }

        @Override // android.support.v4.print.PrintHelper.PrintHelperVersionImpl
        public void setColorMode(int colorMode) {
            this.mPrintHelper.setColorMode(colorMode);
        }

        @Override // android.support.v4.print.PrintHelper.PrintHelperVersionImpl
        public int getColorMode() {
            return this.mPrintHelper.getColorMode();
        }

        @Override // android.support.v4.print.PrintHelper.PrintHelperVersionImpl
        public void setOrientation(int orientation) {
            this.mPrintHelper.setOrientation(orientation);
        }

        @Override // android.support.v4.print.PrintHelper.PrintHelperVersionImpl
        public int getOrientation() {
            return this.mPrintHelper.getOrientation();
        }

        @Override // android.support.v4.print.PrintHelper.PrintHelperVersionImpl
        public void printBitmap(java.lang.String jobName, android.graphics.Bitmap bitmap) {
            this.mPrintHelper.printBitmap(jobName, bitmap);
        }

        @Override // android.support.v4.print.PrintHelper.PrintHelperVersionImpl
        public void printBitmap(java.lang.String jobName, android.net.Uri imageFile) throws java.io.FileNotFoundException {
            this.mPrintHelper.printBitmap(jobName, imageFile);
        }
    }

    public PrintHelper(android.content.Context context) {
        if (systemSupportsPrint()) {
            this.mImpl = new android.support.v4.print.PrintHelper.PrintHelperKitkatImpl(context);
        } else {
            this.mImpl = new android.support.v4.print.PrintHelper.PrintHelperStubImpl();
        }
    }

    public void setScaleMode(int scaleMode) {
        this.mImpl.setScaleMode(scaleMode);
    }

    public int getScaleMode() {
        return this.mImpl.getScaleMode();
    }

    public void setColorMode(int colorMode) {
        this.mImpl.setColorMode(colorMode);
    }

    public int getColorMode() {
        return this.mImpl.getColorMode();
    }

    public void setOrientation(int orientation) {
        this.mImpl.setOrientation(orientation);
    }

    public int getOrientation() {
        return this.mImpl.getOrientation();
    }

    public void printBitmap(java.lang.String jobName, android.graphics.Bitmap bitmap) {
        this.mImpl.printBitmap(jobName, bitmap);
    }

    public void printBitmap(java.lang.String jobName, android.net.Uri imageFile) throws java.io.FileNotFoundException {
        this.mImpl.printBitmap(jobName, imageFile);
    }
}
