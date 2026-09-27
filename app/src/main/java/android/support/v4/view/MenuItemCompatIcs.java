package android.support.v4.view;

/* loaded from: classes.dex */
class MenuItemCompatIcs {

    interface SupportActionExpandProxy {
        boolean onMenuItemActionCollapse(android.view.MenuItem menuItem);

        boolean onMenuItemActionExpand(android.view.MenuItem menuItem);
    }

    MenuItemCompatIcs() {
    }

    public static boolean expandActionView(android.view.MenuItem item) {
        return item.expandActionView();
    }

    public static boolean collapseActionView(android.view.MenuItem item) {
        return item.collapseActionView();
    }

    public static boolean isActionViewExpanded(android.view.MenuItem item) {
        return item.isActionViewExpanded();
    }

    public static android.view.MenuItem setOnActionExpandListener(android.view.MenuItem item, android.support.v4.view.MenuItemCompatIcs.SupportActionExpandProxy listener) {
        return item.setOnActionExpandListener(new android.support.v4.view.MenuItemCompatIcs.OnActionExpandListenerWrapper(listener));
    }

    static class OnActionExpandListenerWrapper implements android.view.MenuItem.OnActionExpandListener {
        private android.support.v4.view.MenuItemCompatIcs.SupportActionExpandProxy mWrapped;

        public OnActionExpandListenerWrapper(android.support.v4.view.MenuItemCompatIcs.SupportActionExpandProxy wrapped) {
            this.mWrapped = wrapped;
        }

        @Override // android.view.MenuItem.OnActionExpandListener
        public boolean onMenuItemActionExpand(android.view.MenuItem item) {
            return this.mWrapped.onMenuItemActionExpand(item);
        }

        @Override // android.view.MenuItem.OnActionExpandListener
        public boolean onMenuItemActionCollapse(android.view.MenuItem item) {
            return this.mWrapped.onMenuItemActionCollapse(item);
        }
    }
}
