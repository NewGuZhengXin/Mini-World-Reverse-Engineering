package android.support.v4.widget;

/* loaded from: classes.dex */
class PopupMenuCompatKitKat {
    PopupMenuCompatKitKat() {
    }

    public static android.view.View.OnTouchListener getDragToOpenListener(java.lang.Object popupMenu) {
        return ((android.widget.PopupMenu) popupMenu).getDragToOpenListener();
    }
}
