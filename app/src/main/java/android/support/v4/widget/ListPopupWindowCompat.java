package android.support.v4.widget;

/* loaded from: classes.dex */
public class ListPopupWindowCompat {
    static final android.support.v4.widget.ListPopupWindowCompat.ListPopupWindowImpl IMPL;

    interface ListPopupWindowImpl {
        android.view.View.OnTouchListener createDragToOpenListener(java.lang.Object obj, android.view.View view);
    }

    static class BaseListPopupWindowImpl implements android.support.v4.widget.ListPopupWindowCompat.ListPopupWindowImpl {
        BaseListPopupWindowImpl() {
        }

        @Override // android.support.v4.widget.ListPopupWindowCompat.ListPopupWindowImpl
        public android.view.View.OnTouchListener createDragToOpenListener(java.lang.Object listPopupWindow, android.view.View src) {
            return null;
        }
    }

    static class KitKatListPopupWindowImpl extends android.support.v4.widget.ListPopupWindowCompat.BaseListPopupWindowImpl {
        KitKatListPopupWindowImpl() {
        }

        @Override // android.support.v4.widget.ListPopupWindowCompat.BaseListPopupWindowImpl, android.support.v4.widget.ListPopupWindowCompat.ListPopupWindowImpl
        public android.view.View.OnTouchListener createDragToOpenListener(java.lang.Object listPopupWindow, android.view.View src) {
            return android.support.v4.widget.ListPopupWindowCompatKitKat.createDragToOpenListener(listPopupWindow, src);
        }
    }

    static {
        int version = android.os.Build.VERSION.SDK_INT;
        if (version >= 19) {
            IMPL = new android.support.v4.widget.ListPopupWindowCompat.KitKatListPopupWindowImpl();
        } else {
            IMPL = new android.support.v4.widget.ListPopupWindowCompat.BaseListPopupWindowImpl();
        }
    }

    private ListPopupWindowCompat() {
    }

    public static android.view.View.OnTouchListener createDragToOpenListener(java.lang.Object listPopupWindow, android.view.View src) {
        return IMPL.createDragToOpenListener(listPopupWindow, src);
    }
}
