package android.support.v4.hardware.display;

/* loaded from: classes.dex */
public abstract class DisplayManagerCompat {
    public static final java.lang.String DISPLAY_CATEGORY_PRESENTATION = "android.hardware.display.category.PRESENTATION";
    private static final java.util.WeakHashMap<android.content.Context, android.support.v4.hardware.display.DisplayManagerCompat> sInstances = new java.util.WeakHashMap<>();

    public abstract android.view.Display getDisplay(int i);

    public abstract android.view.Display[] getDisplays();

    public abstract android.view.Display[] getDisplays(java.lang.String str);

    DisplayManagerCompat() {
    }

    public static android.support.v4.hardware.display.DisplayManagerCompat getInstance(android.content.Context context) {
        android.support.v4.hardware.display.DisplayManagerCompat instance;
        synchronized (sInstances) {
            instance = sInstances.get(context);
            if (instance == null) {
                int version = android.os.Build.VERSION.SDK_INT;
                if (version >= 17) {
                    instance = new android.support.v4.hardware.display.DisplayManagerCompat.JellybeanMr1Impl(context);
                } else {
                    instance = new android.support.v4.hardware.display.DisplayManagerCompat.LegacyImpl(context);
                }
                sInstances.put(context, instance);
            }
        }
        return instance;
    }

    private static class LegacyImpl extends android.support.v4.hardware.display.DisplayManagerCompat {
        private final android.view.WindowManager mWindowManager;

        public LegacyImpl(android.content.Context context) {
            this.mWindowManager = (android.view.WindowManager) context.getSystemService("window");
        }

        @Override // android.support.v4.hardware.display.DisplayManagerCompat
        public android.view.Display getDisplay(int displayId) {
            android.view.Display display = this.mWindowManager.getDefaultDisplay();
            if (display.getDisplayId() == displayId) {
                return display;
            }
            return null;
        }

        @Override // android.support.v4.hardware.display.DisplayManagerCompat
        public android.view.Display[] getDisplays() {
            return new android.view.Display[]{this.mWindowManager.getDefaultDisplay()};
        }

        @Override // android.support.v4.hardware.display.DisplayManagerCompat
        public android.view.Display[] getDisplays(java.lang.String category) {
            return category == null ? getDisplays() : new android.view.Display[0];
        }
    }

    private static class JellybeanMr1Impl extends android.support.v4.hardware.display.DisplayManagerCompat {
        private final java.lang.Object mDisplayManagerObj;

        public JellybeanMr1Impl(android.content.Context context) {
            this.mDisplayManagerObj = android.support.v4.hardware.display.DisplayManagerJellybeanMr1.getDisplayManager(context);
        }

        @Override // android.support.v4.hardware.display.DisplayManagerCompat
        public android.view.Display getDisplay(int displayId) {
            return android.support.v4.hardware.display.DisplayManagerJellybeanMr1.getDisplay(this.mDisplayManagerObj, displayId);
        }

        @Override // android.support.v4.hardware.display.DisplayManagerCompat
        public android.view.Display[] getDisplays() {
            return android.support.v4.hardware.display.DisplayManagerJellybeanMr1.getDisplays(this.mDisplayManagerObj);
        }

        @Override // android.support.v4.hardware.display.DisplayManagerCompat
        public android.view.Display[] getDisplays(java.lang.String category) {
            return android.support.v4.hardware.display.DisplayManagerJellybeanMr1.getDisplays(this.mDisplayManagerObj, category);
        }
    }
}
