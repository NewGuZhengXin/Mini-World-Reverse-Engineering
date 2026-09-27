package android.support.v4.widget;

/* loaded from: classes.dex */
class SearchViewCompatIcs {
    SearchViewCompatIcs() {
    }

    public static class MySearchView extends android.widget.SearchView {
        public MySearchView(android.content.Context context) {
            super(context);
        }

        @Override // android.widget.SearchView, android.view.CollapsibleActionView
        public void onActionViewCollapsed() {
            setQuery("", false);
            super.onActionViewCollapsed();
        }
    }

    public static android.view.View newSearchView(android.content.Context context) {
        return new android.support.v4.widget.SearchViewCompatIcs.MySearchView(context);
    }

    public static void setImeOptions(android.view.View searchView, int imeOptions) {
        ((android.widget.SearchView) searchView).setImeOptions(imeOptions);
    }

    public static void setInputType(android.view.View searchView, int inputType) {
        ((android.widget.SearchView) searchView).setInputType(inputType);
    }
}
