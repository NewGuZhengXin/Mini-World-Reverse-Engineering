package android.support.v4.app;

/* loaded from: classes.dex */
public class ListFragment extends android.support.v4.app.Fragment {
    static final int INTERNAL_EMPTY_ID = 16711681;
    static final int INTERNAL_LIST_CONTAINER_ID = 16711683;
    static final int INTERNAL_PROGRESS_CONTAINER_ID = 16711682;
    android.widget.ListAdapter mAdapter;
    java.lang.CharSequence mEmptyText;
    android.view.View mEmptyView;
    android.widget.ListView mList;
    android.view.View mListContainer;
    boolean mListShown;
    android.view.View mProgressContainer;
    android.widget.TextView mStandardEmptyView;
    private final android.os.Handler mHandler = new android.os.Handler();
    private final java.lang.Runnable mRequestFocus = new java.lang.Runnable() { // from class: android.support.v4.app.ListFragment.1
        @Override // java.lang.Runnable
        public void run() {
            android.support.v4.app.ListFragment.this.mList.focusableViewAvailable(android.support.v4.app.ListFragment.this.mList);
        }
    };
    private final android.widget.AdapterView.OnItemClickListener mOnClickListener = new android.widget.AdapterView.OnItemClickListener() { // from class: android.support.v4.app.ListFragment.2
        @Override // android.widget.AdapterView.OnItemClickListener
        public void onItemClick(android.widget.AdapterView<?> parent, android.view.View v, int position, long id) {
            android.support.v4.app.ListFragment.this.onListItemClick((android.widget.ListView) parent, v, position, id);
        }
    };

    @Override // android.support.v4.app.Fragment
    public android.view.View onCreateView(android.view.LayoutInflater inflater, android.view.ViewGroup container, android.os.Bundle savedInstanceState) {
        android.content.Context context = getActivity();
        android.widget.FrameLayout frameLayout = new android.widget.FrameLayout(context);
        android.widget.LinearLayout pframe = new android.widget.LinearLayout(context);
        pframe.setId(INTERNAL_PROGRESS_CONTAINER_ID);
        pframe.setOrientation(1);
        pframe.setVisibility(8);
        pframe.setGravity(17);
        android.widget.ProgressBar progress = new android.widget.ProgressBar(context, null, android.R.attr.progressBarStyleLarge);
        pframe.addView(progress, new android.widget.FrameLayout.LayoutParams(-2, -2));
        frameLayout.addView(pframe, new android.widget.FrameLayout.LayoutParams(-1, -1));
        android.widget.FrameLayout lframe = new android.widget.FrameLayout(context);
        lframe.setId(INTERNAL_LIST_CONTAINER_ID);
        android.widget.TextView tv = new android.widget.TextView(getActivity());
        tv.setId(INTERNAL_EMPTY_ID);
        tv.setGravity(17);
        lframe.addView(tv, new android.widget.FrameLayout.LayoutParams(-1, -1));
        android.widget.ListView lv = new android.widget.ListView(getActivity());
        lv.setId(android.R.id.list);
        lv.setDrawSelectorOnTop(false);
        lframe.addView(lv, new android.widget.FrameLayout.LayoutParams(-1, -1));
        frameLayout.addView(lframe, new android.widget.FrameLayout.LayoutParams(-1, -1));
        frameLayout.setLayoutParams(new android.widget.FrameLayout.LayoutParams(-1, -1));
        return frameLayout;
    }

    @Override // android.support.v4.app.Fragment
    public void onViewCreated(android.view.View view, android.os.Bundle savedInstanceState) {
        super.onViewCreated(view, savedInstanceState);
        ensureList();
    }

    @Override // android.support.v4.app.Fragment
    public void onDestroyView() {
        this.mHandler.removeCallbacks(this.mRequestFocus);
        this.mList = null;
        this.mListShown = false;
        this.mListContainer = null;
        this.mProgressContainer = null;
        this.mEmptyView = null;
        this.mStandardEmptyView = null;
        super.onDestroyView();
    }

    public void onListItemClick(android.widget.ListView l, android.view.View v, int position, long id) {
    }

    public void setListAdapter(android.widget.ListAdapter adapter) {
        boolean hadAdapter = this.mAdapter != null;
        this.mAdapter = adapter;
        if (this.mList != null) {
            this.mList.setAdapter(adapter);
            if (!this.mListShown && !hadAdapter) {
                setListShown(true, getView().getWindowToken() != null);
            }
        }
    }

    public void setSelection(int position) {
        ensureList();
        this.mList.setSelection(position);
    }

    public int getSelectedItemPosition() {
        ensureList();
        return this.mList.getSelectedItemPosition();
    }

    public long getSelectedItemId() {
        ensureList();
        return this.mList.getSelectedItemId();
    }

    public android.widget.ListView getListView() {
        ensureList();
        return this.mList;
    }

    public void setEmptyText(java.lang.CharSequence text) {
        ensureList();
        if (this.mStandardEmptyView == null) {
            throw new java.lang.IllegalStateException("Can't be used with a custom content view");
        }
        this.mStandardEmptyView.setText(text);
        if (this.mEmptyText == null) {
            this.mList.setEmptyView(this.mStandardEmptyView);
        }
        this.mEmptyText = text;
    }

    public void setListShown(boolean shown) {
        setListShown(shown, true);
    }

    public void setListShownNoAnimation(boolean shown) {
        setListShown(shown, false);
    }

    private void setListShown(boolean shown, boolean animate) {
        ensureList();
        if (this.mProgressContainer == null) {
            throw new java.lang.IllegalStateException("Can't be used with a custom content view");
        }
        if (this.mListShown != shown) {
            this.mListShown = shown;
            if (shown) {
                if (animate) {
                    this.mProgressContainer.startAnimation(android.view.animation.AnimationUtils.loadAnimation(getActivity(), android.R.anim.fade_out));
                    this.mListContainer.startAnimation(android.view.animation.AnimationUtils.loadAnimation(getActivity(), android.R.anim.fade_in));
                } else {
                    this.mProgressContainer.clearAnimation();
                    this.mListContainer.clearAnimation();
                }
                this.mProgressContainer.setVisibility(8);
                this.mListContainer.setVisibility(0);
                return;
            }
            if (animate) {
                this.mProgressContainer.startAnimation(android.view.animation.AnimationUtils.loadAnimation(getActivity(), android.R.anim.fade_in));
                this.mListContainer.startAnimation(android.view.animation.AnimationUtils.loadAnimation(getActivity(), android.R.anim.fade_out));
            } else {
                this.mProgressContainer.clearAnimation();
                this.mListContainer.clearAnimation();
            }
            this.mProgressContainer.setVisibility(0);
            this.mListContainer.setVisibility(8);
        }
    }

    public android.widget.ListAdapter getListAdapter() {
        return this.mAdapter;
    }

    private void ensureList() {
        if (this.mList == null) {
            android.view.View root = getView();
            if (root == null) {
                throw new java.lang.IllegalStateException("Content view not yet created");
            }
            if (root instanceof android.widget.ListView) {
                this.mList = (android.widget.ListView) root;
            } else {
                this.mStandardEmptyView = (android.widget.TextView) root.findViewById(INTERNAL_EMPTY_ID);
                if (this.mStandardEmptyView == null) {
                    this.mEmptyView = root.findViewById(android.R.id.empty);
                } else {
                    this.mStandardEmptyView.setVisibility(8);
                }
                this.mProgressContainer = root.findViewById(INTERNAL_PROGRESS_CONTAINER_ID);
                this.mListContainer = root.findViewById(INTERNAL_LIST_CONTAINER_ID);
                android.view.View rawListView = root.findViewById(android.R.id.list);
                if (!(rawListView instanceof android.widget.ListView)) {
                    if (rawListView == null) {
                        throw new java.lang.RuntimeException("Your content must have a ListView whose id attribute is 'android.R.id.list'");
                    }
                    throw new java.lang.RuntimeException("Content has view with id attribute 'android.R.id.list' that is not a ListView class");
                }
                this.mList = (android.widget.ListView) rawListView;
                if (this.mEmptyView != null) {
                    this.mList.setEmptyView(this.mEmptyView);
                } else if (this.mEmptyText != null) {
                    this.mStandardEmptyView.setText(this.mEmptyText);
                    this.mList.setEmptyView(this.mStandardEmptyView);
                }
            }
            this.mListShown = true;
            this.mList.setOnItemClickListener(this.mOnClickListener);
            if (this.mAdapter != null) {
                android.widget.ListAdapter adapter = this.mAdapter;
                this.mAdapter = null;
                setListAdapter(adapter);
            } else if (this.mProgressContainer != null) {
                setListShown(false, false);
            }
            this.mHandler.post(this.mRequestFocus);
        }
    }
}
