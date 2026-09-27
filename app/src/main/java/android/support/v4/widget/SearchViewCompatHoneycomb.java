package android.support.v4.widget;

/* loaded from: classes.dex */
class SearchViewCompatHoneycomb {

    interface OnCloseListenerCompatBridge {
        boolean onClose();
    }

    interface OnQueryTextListenerCompatBridge {
        boolean onQueryTextChange(java.lang.String str);

        boolean onQueryTextSubmit(java.lang.String str);
    }

    SearchViewCompatHoneycomb() {
    }

    public static android.view.View newSearchView(android.content.Context context) {
        return new android.widget.SearchView(context);
    }

    public static void setSearchableInfo(android.view.View searchView, android.content.ComponentName searchableComponent) {
        android.widget.SearchView sv = (android.widget.SearchView) searchView;
        android.app.SearchManager searchManager = (android.app.SearchManager) sv.getContext().getSystemService("search");
        sv.setSearchableInfo(searchManager.getSearchableInfo(searchableComponent));
    }

    public static java.lang.Object newOnQueryTextListener(final android.support.v4.widget.SearchViewCompatHoneycomb.OnQueryTextListenerCompatBridge listener) {
        return new android.widget.SearchView.OnQueryTextListener() { // from class: android.support.v4.widget.SearchViewCompatHoneycomb.1
            @Override // android.widget.SearchView.OnQueryTextListener
            public boolean onQueryTextSubmit(java.lang.String query) {
                return listener.onQueryTextSubmit(query);
            }

            @Override // android.widget.SearchView.OnQueryTextListener
            public boolean onQueryTextChange(java.lang.String newText) {
                return listener.onQueryTextChange(newText);
            }
        };
    }

    public static void setOnQueryTextListener(java.lang.Object searchView, java.lang.Object listener) {
        ((android.widget.SearchView) searchView).setOnQueryTextListener((android.widget.SearchView.OnQueryTextListener) listener);
    }

    public static java.lang.Object newOnCloseListener(final android.support.v4.widget.SearchViewCompatHoneycomb.OnCloseListenerCompatBridge listener) {
        return new android.widget.SearchView.OnCloseListener() { // from class: android.support.v4.widget.SearchViewCompatHoneycomb.2
            @Override // android.widget.SearchView.OnCloseListener
            public boolean onClose() {
                return listener.onClose();
            }
        };
    }

    public static void setOnCloseListener(java.lang.Object searchView, java.lang.Object listener) {
        ((android.widget.SearchView) searchView).setOnCloseListener((android.widget.SearchView.OnCloseListener) listener);
    }

    public static java.lang.CharSequence getQuery(android.view.View searchView) {
        return ((android.widget.SearchView) searchView).getQuery();
    }

    public static void setQuery(android.view.View searchView, java.lang.CharSequence query, boolean submit) {
        ((android.widget.SearchView) searchView).setQuery(query, submit);
    }

    public static void setQueryHint(android.view.View searchView, java.lang.CharSequence hint) {
        ((android.widget.SearchView) searchView).setQueryHint(hint);
    }

    public static void setIconified(android.view.View searchView, boolean iconify) {
        ((android.widget.SearchView) searchView).setIconified(iconify);
    }

    public static boolean isIconified(android.view.View searchView) {
        return ((android.widget.SearchView) searchView).isIconified();
    }

    public static void setSubmitButtonEnabled(android.view.View searchView, boolean enabled) {
        ((android.widget.SearchView) searchView).setSubmitButtonEnabled(enabled);
    }

    public static boolean isSubmitButtonEnabled(android.view.View searchView) {
        return ((android.widget.SearchView) searchView).isSubmitButtonEnabled();
    }

    public static void setQueryRefinementEnabled(android.view.View searchView, boolean enable) {
        ((android.widget.SearchView) searchView).setQueryRefinementEnabled(enable);
    }

    public static boolean isQueryRefinementEnabled(android.view.View searchView) {
        return ((android.widget.SearchView) searchView).isQueryRefinementEnabled();
    }

    public static void setMaxWidth(android.view.View searchView, int maxpixels) {
        ((android.widget.SearchView) searchView).setMaxWidth(maxpixels);
    }
}
