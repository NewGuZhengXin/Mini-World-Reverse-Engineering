package android.support.v4.view;

/* loaded from: classes.dex */
public class MenuItemCompat {
    static final android.support.v4.view.MenuItemCompat.MenuVersionImpl IMPL;
    public static final int SHOW_AS_ACTION_ALWAYS = 2;
    public static final int SHOW_AS_ACTION_COLLAPSE_ACTION_VIEW = 8;
    public static final int SHOW_AS_ACTION_IF_ROOM = 1;
    public static final int SHOW_AS_ACTION_NEVER = 0;
    public static final int SHOW_AS_ACTION_WITH_TEXT = 4;
    private static final java.lang.String TAG = "MenuItemCompat";

    interface MenuVersionImpl {
        boolean collapseActionView(android.view.MenuItem menuItem);

        boolean expandActionView(android.view.MenuItem menuItem);

        android.view.View getActionView(android.view.MenuItem menuItem);

        boolean isActionViewExpanded(android.view.MenuItem menuItem);

        android.view.MenuItem setActionView(android.view.MenuItem menuItem, int i);

        android.view.MenuItem setActionView(android.view.MenuItem menuItem, android.view.View view);

        android.view.MenuItem setOnActionExpandListener(android.view.MenuItem menuItem, android.support.v4.view.MenuItemCompat.OnActionExpandListener onActionExpandListener);

        void setShowAsAction(android.view.MenuItem menuItem, int i);
    }

    public interface OnActionExpandListener {
        boolean onMenuItemActionCollapse(android.view.MenuItem menuItem);

        boolean onMenuItemActionExpand(android.view.MenuItem menuItem);
    }

    static class BaseMenuVersionImpl implements android.support.v4.view.MenuItemCompat.MenuVersionImpl {
        BaseMenuVersionImpl() {
        }

        @Override // android.support.v4.view.MenuItemCompat.MenuVersionImpl
        public void setShowAsAction(android.view.MenuItem item, int actionEnum) {
        }

        @Override // android.support.v4.view.MenuItemCompat.MenuVersionImpl
        public android.view.MenuItem setActionView(android.view.MenuItem item, android.view.View view) {
            return item;
        }

        @Override // android.support.v4.view.MenuItemCompat.MenuVersionImpl
        public android.view.MenuItem setActionView(android.view.MenuItem item, int resId) {
            return item;
        }

        @Override // android.support.v4.view.MenuItemCompat.MenuVersionImpl
        public android.view.View getActionView(android.view.MenuItem item) {
            return null;
        }

        @Override // android.support.v4.view.MenuItemCompat.MenuVersionImpl
        public boolean expandActionView(android.view.MenuItem item) {
            return false;
        }

        @Override // android.support.v4.view.MenuItemCompat.MenuVersionImpl
        public boolean collapseActionView(android.view.MenuItem item) {
            return false;
        }

        @Override // android.support.v4.view.MenuItemCompat.MenuVersionImpl
        public boolean isActionViewExpanded(android.view.MenuItem item) {
            return false;
        }

        @Override // android.support.v4.view.MenuItemCompat.MenuVersionImpl
        public android.view.MenuItem setOnActionExpandListener(android.view.MenuItem item, android.support.v4.view.MenuItemCompat.OnActionExpandListener listener) {
            return item;
        }
    }

    static class HoneycombMenuVersionImpl implements android.support.v4.view.MenuItemCompat.MenuVersionImpl {
        HoneycombMenuVersionImpl() {
        }

        @Override // android.support.v4.view.MenuItemCompat.MenuVersionImpl
        public void setShowAsAction(android.view.MenuItem item, int actionEnum) {
            android.support.v4.view.MenuItemCompatHoneycomb.setShowAsAction(item, actionEnum);
        }

        @Override // android.support.v4.view.MenuItemCompat.MenuVersionImpl
        public android.view.MenuItem setActionView(android.view.MenuItem item, android.view.View view) {
            return android.support.v4.view.MenuItemCompatHoneycomb.setActionView(item, view);
        }

        @Override // android.support.v4.view.MenuItemCompat.MenuVersionImpl
        public android.view.MenuItem setActionView(android.view.MenuItem item, int resId) {
            return android.support.v4.view.MenuItemCompatHoneycomb.setActionView(item, resId);
        }

        @Override // android.support.v4.view.MenuItemCompat.MenuVersionImpl
        public android.view.View getActionView(android.view.MenuItem item) {
            return android.support.v4.view.MenuItemCompatHoneycomb.getActionView(item);
        }

        @Override // android.support.v4.view.MenuItemCompat.MenuVersionImpl
        public boolean expandActionView(android.view.MenuItem item) {
            return false;
        }

        @Override // android.support.v4.view.MenuItemCompat.MenuVersionImpl
        public boolean collapseActionView(android.view.MenuItem item) {
            return false;
        }

        @Override // android.support.v4.view.MenuItemCompat.MenuVersionImpl
        public boolean isActionViewExpanded(android.view.MenuItem item) {
            return false;
        }

        @Override // android.support.v4.view.MenuItemCompat.MenuVersionImpl
        public android.view.MenuItem setOnActionExpandListener(android.view.MenuItem item, android.support.v4.view.MenuItemCompat.OnActionExpandListener listener) {
            return item;
        }
    }

    static class IcsMenuVersionImpl extends android.support.v4.view.MenuItemCompat.HoneycombMenuVersionImpl {
        IcsMenuVersionImpl() {
        }

        @Override // android.support.v4.view.MenuItemCompat.HoneycombMenuVersionImpl, android.support.v4.view.MenuItemCompat.MenuVersionImpl
        public boolean expandActionView(android.view.MenuItem item) {
            return android.support.v4.view.MenuItemCompatIcs.expandActionView(item);
        }

        @Override // android.support.v4.view.MenuItemCompat.HoneycombMenuVersionImpl, android.support.v4.view.MenuItemCompat.MenuVersionImpl
        public boolean collapseActionView(android.view.MenuItem item) {
            return android.support.v4.view.MenuItemCompatIcs.collapseActionView(item);
        }

        @Override // android.support.v4.view.MenuItemCompat.HoneycombMenuVersionImpl, android.support.v4.view.MenuItemCompat.MenuVersionImpl
        public boolean isActionViewExpanded(android.view.MenuItem item) {
            return android.support.v4.view.MenuItemCompatIcs.isActionViewExpanded(item);
        }

        @Override // android.support.v4.view.MenuItemCompat.HoneycombMenuVersionImpl, android.support.v4.view.MenuItemCompat.MenuVersionImpl
        public android.view.MenuItem setOnActionExpandListener(android.view.MenuItem item, final android.support.v4.view.MenuItemCompat.OnActionExpandListener listener) {
            return listener == null ? android.support.v4.view.MenuItemCompatIcs.setOnActionExpandListener(item, null) : android.support.v4.view.MenuItemCompatIcs.setOnActionExpandListener(item, new android.support.v4.view.MenuItemCompatIcs.SupportActionExpandProxy() { // from class: android.support.v4.view.MenuItemCompat.IcsMenuVersionImpl.1
                @Override // android.support.v4.view.MenuItemCompatIcs.SupportActionExpandProxy
                public boolean onMenuItemActionExpand(android.view.MenuItem item2) {
                    return listener.onMenuItemActionExpand(item2);
                }

                @Override // android.support.v4.view.MenuItemCompatIcs.SupportActionExpandProxy
                public boolean onMenuItemActionCollapse(android.view.MenuItem item2) {
                    return listener.onMenuItemActionCollapse(item2);
                }
            });
        }
    }

    static {
        int version = android.os.Build.VERSION.SDK_INT;
        if (version >= 14) {
            IMPL = new android.support.v4.view.MenuItemCompat.IcsMenuVersionImpl();
        } else if (version >= 11) {
            IMPL = new android.support.v4.view.MenuItemCompat.HoneycombMenuVersionImpl();
        } else {
            IMPL = new android.support.v4.view.MenuItemCompat.BaseMenuVersionImpl();
        }
    }

    public static void setShowAsAction(android.view.MenuItem item, int actionEnum) {
        if (item instanceof android.support.v4.internal.view.SupportMenuItem) {
            ((android.support.v4.internal.view.SupportMenuItem) item).setShowAsAction(actionEnum);
        } else {
            IMPL.setShowAsAction(item, actionEnum);
        }
    }

    public static android.view.MenuItem setActionView(android.view.MenuItem item, android.view.View view) {
        return item instanceof android.support.v4.internal.view.SupportMenuItem ? ((android.support.v4.internal.view.SupportMenuItem) item).setActionView(view) : IMPL.setActionView(item, view);
    }

    public static android.view.MenuItem setActionView(android.view.MenuItem item, int resId) {
        return item instanceof android.support.v4.internal.view.SupportMenuItem ? ((android.support.v4.internal.view.SupportMenuItem) item).setActionView(resId) : IMPL.setActionView(item, resId);
    }

    public static android.view.View getActionView(android.view.MenuItem item) {
        return item instanceof android.support.v4.internal.view.SupportMenuItem ? ((android.support.v4.internal.view.SupportMenuItem) item).getActionView() : IMPL.getActionView(item);
    }

    public static android.view.MenuItem setActionProvider(android.view.MenuItem item, android.support.v4.view.ActionProvider provider) {
        if (item instanceof android.support.v4.internal.view.SupportMenuItem) {
            return ((android.support.v4.internal.view.SupportMenuItem) item).setSupportActionProvider(provider);
        }
        android.util.Log.w(TAG, "setActionProvider: item does not implement SupportMenuItem; ignoring");
        return item;
    }

    public static android.support.v4.view.ActionProvider getActionProvider(android.view.MenuItem item) {
        if (item instanceof android.support.v4.internal.view.SupportMenuItem) {
            return ((android.support.v4.internal.view.SupportMenuItem) item).getSupportActionProvider();
        }
        android.util.Log.w(TAG, "getActionProvider: item does not implement SupportMenuItem; returning null");
        return null;
    }

    public static boolean expandActionView(android.view.MenuItem item) {
        return item instanceof android.support.v4.internal.view.SupportMenuItem ? ((android.support.v4.internal.view.SupportMenuItem) item).expandActionView() : IMPL.expandActionView(item);
    }

    public static boolean collapseActionView(android.view.MenuItem item) {
        return item instanceof android.support.v4.internal.view.SupportMenuItem ? ((android.support.v4.internal.view.SupportMenuItem) item).collapseActionView() : IMPL.collapseActionView(item);
    }

    public static boolean isActionViewExpanded(android.view.MenuItem item) {
        return item instanceof android.support.v4.internal.view.SupportMenuItem ? ((android.support.v4.internal.view.SupportMenuItem) item).isActionViewExpanded() : IMPL.isActionViewExpanded(item);
    }

    public static android.view.MenuItem setOnActionExpandListener(android.view.MenuItem item, android.support.v4.view.MenuItemCompat.OnActionExpandListener listener) {
        return item instanceof android.support.v4.internal.view.SupportMenuItem ? ((android.support.v4.internal.view.SupportMenuItem) item).setSupportOnActionExpandListener(listener) : IMPL.setOnActionExpandListener(item, listener);
    }
}
