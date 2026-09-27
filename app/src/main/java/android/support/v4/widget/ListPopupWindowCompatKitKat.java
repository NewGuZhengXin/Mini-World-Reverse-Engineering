package android.support.v4.widget;

/* loaded from: classes.dex */
class ListPopupWindowCompatKitKat {
    ListPopupWindowCompatKitKat() {
    }

    public static android.view.View.OnTouchListener createDragToOpenListener(java.lang.Object listPopupWindow, android.view.View src) {
        return ((android.widget.ListPopupWindow) listPopupWindow).createDragToOpenListener(src);
    }
}
