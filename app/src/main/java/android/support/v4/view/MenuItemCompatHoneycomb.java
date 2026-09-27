package android.support.v4.view;

/* loaded from: classes.dex */
class MenuItemCompatHoneycomb {
    MenuItemCompatHoneycomb() {
    }

    public static void setShowAsAction(android.view.MenuItem item, int actionEnum) {
        item.setShowAsAction(actionEnum);
    }

    public static android.view.MenuItem setActionView(android.view.MenuItem item, android.view.View view) {
        return item.setActionView(view);
    }

    public static android.view.MenuItem setActionView(android.view.MenuItem item, int resId) {
        return item.setActionView(resId);
    }

    public static android.view.View getActionView(android.view.MenuItem item) {
        return item.getActionView();
    }
}
