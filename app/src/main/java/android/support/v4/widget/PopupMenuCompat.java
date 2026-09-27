package android.support.v4.widget;

/* loaded from: classes.dex */
public class PopupMenuCompat {
    static final android.support.v4.widget.PopupMenuCompat.PopupMenuImpl IMPL;

    interface PopupMenuImpl {
        android.view.View.OnTouchListener getDragToOpenListener(java.lang.Object obj);
    }

    static class BasePopupMenuImpl implements android.support.v4.widget.PopupMenuCompat.PopupMenuImpl {
        BasePopupMenuImpl() {
        }

        @Override // android.support.v4.widget.PopupMenuCompat.PopupMenuImpl
        public android.view.View.OnTouchListener getDragToOpenListener(java.lang.Object popupMenu) {
            return null;
        }
    }

    static class KitKatPopupMenuImpl extends android.support.v4.widget.PopupMenuCompat.BasePopupMenuImpl {
        KitKatPopupMenuImpl() {
        }

        @Override // android.support.v4.widget.PopupMenuCompat.BasePopupMenuImpl, android.support.v4.widget.PopupMenuCompat.PopupMenuImpl
        public android.view.View.OnTouchListener getDragToOpenListener(java.lang.Object popupMenu) {
            return android.support.v4.widget.PopupMenuCompatKitKat.getDragToOpenListener(popupMenu);
        }
    }

    static {
        int version = android.os.Build.VERSION.SDK_INT;
        if (version >= 19) {
            IMPL = new android.support.v4.widget.PopupMenuCompat.KitKatPopupMenuImpl();
        } else {
            IMPL = new android.support.v4.widget.PopupMenuCompat.BasePopupMenuImpl();
        }
    }

    private PopupMenuCompat() {
    }

    public static android.view.View.OnTouchListener getDragToOpenListener(java.lang.Object popupMenu) {
        return IMPL.getDragToOpenListener(popupMenu);
    }
}
