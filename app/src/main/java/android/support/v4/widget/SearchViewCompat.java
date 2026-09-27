package android.support.v4.widget;

/* loaded from: classes.dex */
public class SearchViewCompat {
    private static final android.support.v4.widget.SearchViewCompat.SearchViewCompatImpl IMPL;

    interface SearchViewCompatImpl {
        java.lang.CharSequence getQuery(android.view.View view);

        boolean isIconified(android.view.View view);

        boolean isQueryRefinementEnabled(android.view.View view);

        boolean isSubmitButtonEnabled(android.view.View view);

        java.lang.Object newOnCloseListener(android.support.v4.widget.SearchViewCompat.OnCloseListenerCompat onCloseListenerCompat);

        java.lang.Object newOnQueryTextListener(android.support.v4.widget.SearchViewCompat.OnQueryTextListenerCompat onQueryTextListenerCompat);

        android.view.View newSearchView(android.content.Context context);

        void setIconified(android.view.View view, boolean z);

        void setImeOptions(android.view.View view, int i);

        void setInputType(android.view.View view, int i);

        void setMaxWidth(android.view.View view, int i);

        void setOnCloseListener(java.lang.Object obj, java.lang.Object obj2);

        void setOnQueryTextListener(java.lang.Object obj, java.lang.Object obj2);

        void setQuery(android.view.View view, java.lang.CharSequence charSequence, boolean z);

        void setQueryHint(android.view.View view, java.lang.CharSequence charSequence);

        void setQueryRefinementEnabled(android.view.View view, boolean z);

        void setSearchableInfo(android.view.View view, android.content.ComponentName componentName);

        void setSubmitButtonEnabled(android.view.View view, boolean z);
    }

    static class SearchViewCompatStubImpl implements android.support.v4.widget.SearchViewCompat.SearchViewCompatImpl {
        SearchViewCompatStubImpl() {
        }

        @Override // android.support.v4.widget.SearchViewCompat.SearchViewCompatImpl
        public android.view.View newSearchView(android.content.Context context) {
            return null;
        }

        @Override // android.support.v4.widget.SearchViewCompat.SearchViewCompatImpl
        public void setSearchableInfo(android.view.View searchView, android.content.ComponentName searchableComponent) {
        }

        @Override // android.support.v4.widget.SearchViewCompat.SearchViewCompatImpl
        public void setImeOptions(android.view.View searchView, int imeOptions) {
        }

        @Override // android.support.v4.widget.SearchViewCompat.SearchViewCompatImpl
        public void setInputType(android.view.View searchView, int inputType) {
        }

        @Override // android.support.v4.widget.SearchViewCompat.SearchViewCompatImpl
        public java.lang.Object newOnQueryTextListener(android.support.v4.widget.SearchViewCompat.OnQueryTextListenerCompat listener) {
            return null;
        }

        @Override // android.support.v4.widget.SearchViewCompat.SearchViewCompatImpl
        public void setOnQueryTextListener(java.lang.Object searchView, java.lang.Object listener) {
        }

        @Override // android.support.v4.widget.SearchViewCompat.SearchViewCompatImpl
        public java.lang.Object newOnCloseListener(android.support.v4.widget.SearchViewCompat.OnCloseListenerCompat listener) {
            return null;
        }

        @Override // android.support.v4.widget.SearchViewCompat.SearchViewCompatImpl
        public void setOnCloseListener(java.lang.Object searchView, java.lang.Object listener) {
        }

        @Override // android.support.v4.widget.SearchViewCompat.SearchViewCompatImpl
        public java.lang.CharSequence getQuery(android.view.View searchView) {
            return null;
        }

        @Override // android.support.v4.widget.SearchViewCompat.SearchViewCompatImpl
        public void setQuery(android.view.View searchView, java.lang.CharSequence query, boolean submit) {
        }

        @Override // android.support.v4.widget.SearchViewCompat.SearchViewCompatImpl
        public void setQueryHint(android.view.View searchView, java.lang.CharSequence hint) {
        }

        @Override // android.support.v4.widget.SearchViewCompat.SearchViewCompatImpl
        public void setIconified(android.view.View searchView, boolean iconify) {
        }

        @Override // android.support.v4.widget.SearchViewCompat.SearchViewCompatImpl
        public boolean isIconified(android.view.View searchView) {
            return true;
        }

        @Override // android.support.v4.widget.SearchViewCompat.SearchViewCompatImpl
        public void setSubmitButtonEnabled(android.view.View searchView, boolean enabled) {
        }

        @Override // android.support.v4.widget.SearchViewCompat.SearchViewCompatImpl
        public boolean isSubmitButtonEnabled(android.view.View searchView) {
            return false;
        }

        @Override // android.support.v4.widget.SearchViewCompat.SearchViewCompatImpl
        public void setQueryRefinementEnabled(android.view.View searchView, boolean enable) {
        }

        @Override // android.support.v4.widget.SearchViewCompat.SearchViewCompatImpl
        public boolean isQueryRefinementEnabled(android.view.View searchView) {
            return false;
        }

        @Override // android.support.v4.widget.SearchViewCompat.SearchViewCompatImpl
        public void setMaxWidth(android.view.View searchView, int maxpixels) {
        }
    }

    static class SearchViewCompatHoneycombImpl extends android.support.v4.widget.SearchViewCompat.SearchViewCompatStubImpl {
        SearchViewCompatHoneycombImpl() {
        }

        @Override // android.support.v4.widget.SearchViewCompat.SearchViewCompatStubImpl, android.support.v4.widget.SearchViewCompat.SearchViewCompatImpl
        public android.view.View newSearchView(android.content.Context context) {
            return android.support.v4.widget.SearchViewCompatHoneycomb.newSearchView(context);
        }

        @Override // android.support.v4.widget.SearchViewCompat.SearchViewCompatStubImpl, android.support.v4.widget.SearchViewCompat.SearchViewCompatImpl
        public void setSearchableInfo(android.view.View searchView, android.content.ComponentName searchableComponent) {
            android.support.v4.widget.SearchViewCompatHoneycomb.setSearchableInfo(searchView, searchableComponent);
        }

        @Override // android.support.v4.widget.SearchViewCompat.SearchViewCompatStubImpl, android.support.v4.widget.SearchViewCompat.SearchViewCompatImpl
        public java.lang.Object newOnQueryTextListener(final android.support.v4.widget.SearchViewCompat.OnQueryTextListenerCompat listener) {
            return android.support.v4.widget.SearchViewCompatHoneycomb.newOnQueryTextListener(new android.support.v4.widget.SearchViewCompatHoneycomb.OnQueryTextListenerCompatBridge() { // from class: android.support.v4.widget.SearchViewCompat.SearchViewCompatHoneycombImpl.1
                @Override // android.support.v4.widget.SearchViewCompatHoneycomb.OnQueryTextListenerCompatBridge
                public boolean onQueryTextSubmit(java.lang.String query) {
                    return listener.onQueryTextSubmit(query);
                }

                @Override // android.support.v4.widget.SearchViewCompatHoneycomb.OnQueryTextListenerCompatBridge
                public boolean onQueryTextChange(java.lang.String newText) {
                    return listener.onQueryTextChange(newText);
                }
            });
        }

        @Override // android.support.v4.widget.SearchViewCompat.SearchViewCompatStubImpl, android.support.v4.widget.SearchViewCompat.SearchViewCompatImpl
        public void setOnQueryTextListener(java.lang.Object searchView, java.lang.Object listener) {
            android.support.v4.widget.SearchViewCompatHoneycomb.setOnQueryTextListener(searchView, listener);
        }

        @Override // android.support.v4.widget.SearchViewCompat.SearchViewCompatStubImpl, android.support.v4.widget.SearchViewCompat.SearchViewCompatImpl
        public java.lang.Object newOnCloseListener(final android.support.v4.widget.SearchViewCompat.OnCloseListenerCompat listener) {
            return android.support.v4.widget.SearchViewCompatHoneycomb.newOnCloseListener(new android.support.v4.widget.SearchViewCompatHoneycomb.OnCloseListenerCompatBridge() { // from class: android.support.v4.widget.SearchViewCompat.SearchViewCompatHoneycombImpl.2
                @Override // android.support.v4.widget.SearchViewCompatHoneycomb.OnCloseListenerCompatBridge
                public boolean onClose() {
                    return listener.onClose();
                }
            });
        }

        @Override // android.support.v4.widget.SearchViewCompat.SearchViewCompatStubImpl, android.support.v4.widget.SearchViewCompat.SearchViewCompatImpl
        public void setOnCloseListener(java.lang.Object searchView, java.lang.Object listener) {
            android.support.v4.widget.SearchViewCompatHoneycomb.setOnCloseListener(searchView, listener);
        }

        @Override // android.support.v4.widget.SearchViewCompat.SearchViewCompatStubImpl, android.support.v4.widget.SearchViewCompat.SearchViewCompatImpl
        public java.lang.CharSequence getQuery(android.view.View searchView) {
            return android.support.v4.widget.SearchViewCompatHoneycomb.getQuery(searchView);
        }

        @Override // android.support.v4.widget.SearchViewCompat.SearchViewCompatStubImpl, android.support.v4.widget.SearchViewCompat.SearchViewCompatImpl
        public void setQuery(android.view.View searchView, java.lang.CharSequence query, boolean submit) {
            android.support.v4.widget.SearchViewCompatHoneycomb.setQuery(searchView, query, submit);
        }

        @Override // android.support.v4.widget.SearchViewCompat.SearchViewCompatStubImpl, android.support.v4.widget.SearchViewCompat.SearchViewCompatImpl
        public void setQueryHint(android.view.View searchView, java.lang.CharSequence hint) {
            android.support.v4.widget.SearchViewCompatHoneycomb.setQueryHint(searchView, hint);
        }

        @Override // android.support.v4.widget.SearchViewCompat.SearchViewCompatStubImpl, android.support.v4.widget.SearchViewCompat.SearchViewCompatImpl
        public void setIconified(android.view.View searchView, boolean iconify) {
            android.support.v4.widget.SearchViewCompatHoneycomb.setIconified(searchView, iconify);
        }

        @Override // android.support.v4.widget.SearchViewCompat.SearchViewCompatStubImpl, android.support.v4.widget.SearchViewCompat.SearchViewCompatImpl
        public boolean isIconified(android.view.View searchView) {
            return android.support.v4.widget.SearchViewCompatHoneycomb.isIconified(searchView);
        }

        @Override // android.support.v4.widget.SearchViewCompat.SearchViewCompatStubImpl, android.support.v4.widget.SearchViewCompat.SearchViewCompatImpl
        public void setSubmitButtonEnabled(android.view.View searchView, boolean enabled) {
            android.support.v4.widget.SearchViewCompatHoneycomb.setSubmitButtonEnabled(searchView, enabled);
        }

        @Override // android.support.v4.widget.SearchViewCompat.SearchViewCompatStubImpl, android.support.v4.widget.SearchViewCompat.SearchViewCompatImpl
        public boolean isSubmitButtonEnabled(android.view.View searchView) {
            return android.support.v4.widget.SearchViewCompatHoneycomb.isSubmitButtonEnabled(searchView);
        }

        @Override // android.support.v4.widget.SearchViewCompat.SearchViewCompatStubImpl, android.support.v4.widget.SearchViewCompat.SearchViewCompatImpl
        public void setQueryRefinementEnabled(android.view.View searchView, boolean enable) {
            android.support.v4.widget.SearchViewCompatHoneycomb.setQueryRefinementEnabled(searchView, enable);
        }

        @Override // android.support.v4.widget.SearchViewCompat.SearchViewCompatStubImpl, android.support.v4.widget.SearchViewCompat.SearchViewCompatImpl
        public boolean isQueryRefinementEnabled(android.view.View searchView) {
            return android.support.v4.widget.SearchViewCompatHoneycomb.isQueryRefinementEnabled(searchView);
        }

        @Override // android.support.v4.widget.SearchViewCompat.SearchViewCompatStubImpl, android.support.v4.widget.SearchViewCompat.SearchViewCompatImpl
        public void setMaxWidth(android.view.View searchView, int maxpixels) {
            android.support.v4.widget.SearchViewCompatHoneycomb.setMaxWidth(searchView, maxpixels);
        }
    }

    static class SearchViewCompatIcsImpl extends android.support.v4.widget.SearchViewCompat.SearchViewCompatHoneycombImpl {
        SearchViewCompatIcsImpl() {
        }

        @Override // android.support.v4.widget.SearchViewCompat.SearchViewCompatHoneycombImpl, android.support.v4.widget.SearchViewCompat.SearchViewCompatStubImpl, android.support.v4.widget.SearchViewCompat.SearchViewCompatImpl
        public android.view.View newSearchView(android.content.Context context) {
            return android.support.v4.widget.SearchViewCompatIcs.newSearchView(context);
        }

        @Override // android.support.v4.widget.SearchViewCompat.SearchViewCompatStubImpl, android.support.v4.widget.SearchViewCompat.SearchViewCompatImpl
        public void setImeOptions(android.view.View searchView, int imeOptions) {
            android.support.v4.widget.SearchViewCompatIcs.setImeOptions(searchView, imeOptions);
        }

        @Override // android.support.v4.widget.SearchViewCompat.SearchViewCompatStubImpl, android.support.v4.widget.SearchViewCompat.SearchViewCompatImpl
        public void setInputType(android.view.View searchView, int inputType) {
            android.support.v4.widget.SearchViewCompatIcs.setInputType(searchView, inputType);
        }
    }

    static {
        if (android.os.Build.VERSION.SDK_INT >= 14) {
            IMPL = new android.support.v4.widget.SearchViewCompat.SearchViewCompatIcsImpl();
        } else if (android.os.Build.VERSION.SDK_INT >= 11) {
            IMPL = new android.support.v4.widget.SearchViewCompat.SearchViewCompatHoneycombImpl();
        } else {
            IMPL = new android.support.v4.widget.SearchViewCompat.SearchViewCompatStubImpl();
        }
    }

    private SearchViewCompat(android.content.Context context) {
    }

    public static android.view.View newSearchView(android.content.Context context) {
        return IMPL.newSearchView(context);
    }

    public static void setSearchableInfo(android.view.View searchView, android.content.ComponentName searchableComponent) {
        IMPL.setSearchableInfo(searchView, searchableComponent);
    }

    public static void setImeOptions(android.view.View searchView, int imeOptions) {
        IMPL.setImeOptions(searchView, imeOptions);
    }

    public static void setInputType(android.view.View searchView, int inputType) {
        IMPL.setInputType(searchView, inputType);
    }

    public static void setOnQueryTextListener(android.view.View searchView, android.support.v4.widget.SearchViewCompat.OnQueryTextListenerCompat listener) {
        IMPL.setOnQueryTextListener(searchView, listener.mListener);
    }

    public static abstract class OnQueryTextListenerCompat {
        final java.lang.Object mListener = android.support.v4.widget.SearchViewCompat.IMPL.newOnQueryTextListener(this);

        public boolean onQueryTextSubmit(java.lang.String query) {
            return false;
        }

        public boolean onQueryTextChange(java.lang.String newText) {
            return false;
        }
    }

    public static void setOnCloseListener(android.view.View searchView, android.support.v4.widget.SearchViewCompat.OnCloseListenerCompat listener) {
        IMPL.setOnCloseListener(searchView, listener.mListener);
    }

    public static abstract class OnCloseListenerCompat {
        final java.lang.Object mListener = android.support.v4.widget.SearchViewCompat.IMPL.newOnCloseListener(this);

        public boolean onClose() {
            return false;
        }
    }

    public static java.lang.CharSequence getQuery(android.view.View searchView) {
        return IMPL.getQuery(searchView);
    }

    public static void setQuery(android.view.View searchView, java.lang.CharSequence query, boolean submit) {
        IMPL.setQuery(searchView, query, submit);
    }

    public static void setQueryHint(android.view.View searchView, java.lang.CharSequence hint) {
        IMPL.setQueryHint(searchView, hint);
    }

    public static void setIconified(android.view.View searchView, boolean iconify) {
        IMPL.setIconified(searchView, iconify);
    }

    public static boolean isIconified(android.view.View searchView) {
        return IMPL.isIconified(searchView);
    }

    public static void setSubmitButtonEnabled(android.view.View searchView, boolean enabled) {
        IMPL.setSubmitButtonEnabled(searchView, enabled);
    }

    public static boolean isSubmitButtonEnabled(android.view.View searchView) {
        return IMPL.isSubmitButtonEnabled(searchView);
    }

    public static void setQueryRefinementEnabled(android.view.View searchView, boolean enable) {
        IMPL.setQueryRefinementEnabled(searchView, enable);
    }

    public static boolean isQueryRefinementEnabled(android.view.View searchView) {
        return IMPL.isQueryRefinementEnabled(searchView);
    }

    public static void setMaxWidth(android.view.View searchView, int maxpixels) {
        IMPL.setMaxWidth(searchView, maxpixels);
    }
}
