package android.support.v4.hardware.display;

/* loaded from: classes.dex */
final class DisplayManagerJellybeanMr1 {
    DisplayManagerJellybeanMr1() {
    }

    public static java.lang.Object getDisplayManager(android.content.Context context) {
        return context.getSystemService("display");
    }

    public static android.view.Display getDisplay(java.lang.Object displayManagerObj, int displayId) {
        return ((android.hardware.display.DisplayManager) displayManagerObj).getDisplay(displayId);
    }

    public static android.view.Display[] getDisplays(java.lang.Object displayManagerObj) {
        return ((android.hardware.display.DisplayManager) displayManagerObj).getDisplays();
    }

    public static android.view.Display[] getDisplays(java.lang.Object displayManagerObj, java.lang.String category) {
        return ((android.hardware.display.DisplayManager) displayManagerObj).getDisplays(category);
    }
}
