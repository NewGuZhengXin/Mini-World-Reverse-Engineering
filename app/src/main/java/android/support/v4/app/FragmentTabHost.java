package android.support.v4.app;

/* loaded from: classes.dex */
public class FragmentTabHost extends android.widget.TabHost implements android.widget.TabHost.OnTabChangeListener {
    private boolean mAttached;
    private int mContainerId;
    private android.content.Context mContext;
    private android.support.v4.app.FragmentManager mFragmentManager;
    private android.support.v4.app.FragmentTabHost.TabInfo mLastTab;
    private android.widget.TabHost.OnTabChangeListener mOnTabChangeListener;
    private android.widget.FrameLayout mRealTabContent;
    private final java.util.ArrayList<android.support.v4.app.FragmentTabHost.TabInfo> mTabs;

    static final class TabInfo {
        private final android.os.Bundle args;
        private final java.lang.Class<?> clss;
        private android.support.v4.app.Fragment fragment;
        private final java.lang.String tag;

        TabInfo(java.lang.String _tag, java.lang.Class<?> _class, android.os.Bundle _args) {
            this.tag = _tag;
            this.clss = _class;
            this.args = _args;
        }
    }

    static class DummyTabFactory implements android.widget.TabHost.TabContentFactory {
        private final android.content.Context mContext;

        public DummyTabFactory(android.content.Context context) {
            this.mContext = context;
        }

        @Override // android.widget.TabHost.TabContentFactory
        public android.view.View createTabContent(java.lang.String tag) {
            android.view.View v = new android.view.View(this.mContext);
            v.setMinimumWidth(0);
            v.setMinimumHeight(0);
            return v;
        }
    }

    static class SavedState extends android.view.View.BaseSavedState {
        public static final android.os.Parcelable.Creator<android.support.v4.app.FragmentTabHost.SavedState> CREATOR = new android.os.Parcelable.Creator<android.support.v4.app.FragmentTabHost.SavedState>() { // from class: android.support.v4.app.FragmentTabHost.SavedState.1
            /* JADX WARN: Can't rename method to resolve collision */
            @Override // android.os.Parcelable.Creator
            public android.support.v4.app.FragmentTabHost.SavedState createFromParcel(android.os.Parcel in) {
                return new android.support.v4.app.FragmentTabHost.SavedState(in);
            }

            /* JADX WARN: Can't rename method to resolve collision */
            @Override // android.os.Parcelable.Creator
            public android.support.v4.app.FragmentTabHost.SavedState[] newArray(int size) {
                return new android.support.v4.app.FragmentTabHost.SavedState[size];
            }
        };
        java.lang.String curTab;

        SavedState(android.os.Parcelable superState) {
            super(superState);
        }

        private SavedState(android.os.Parcel in) {
            super(in);
            this.curTab = in.readString();
        }

        @Override // android.view.View.BaseSavedState, android.view.AbsSavedState, android.os.Parcelable
        public void writeToParcel(android.os.Parcel out, int flags) {
            super.writeToParcel(out, flags);
            out.writeString(this.curTab);
        }

        public java.lang.String toString() {
            return "FragmentTabHost.SavedState{" + java.lang.Integer.toHexString(java.lang.System.identityHashCode(this)) + " curTab=" + this.curTab + "}";
        }
    }

    public FragmentTabHost(android.content.Context context) {
        super(context, null);
        this.mTabs = new java.util.ArrayList<>();
        initFragmentTabHost(context, null);
    }

    public FragmentTabHost(android.content.Context context, android.util.AttributeSet attrs) {
        super(context, attrs);
        this.mTabs = new java.util.ArrayList<>();
        initFragmentTabHost(context, attrs);
    }

    private void initFragmentTabHost(android.content.Context context, android.util.AttributeSet attrs) {
        android.content.res.TypedArray a = context.obtainStyledAttributes(attrs, new int[]{android.R.attr.inflatedId}, 0, 0);
        this.mContainerId = a.getResourceId(0, 0);
        a.recycle();
        super.setOnTabChangedListener(this);
    }

    private void ensureHierarchy(android.content.Context context) {
        if (findViewById(android.R.id.tabs) == null) {
            android.widget.LinearLayout ll = new android.widget.LinearLayout(context);
            ll.setOrientation(1);
            addView(ll, new android.widget.FrameLayout.LayoutParams(-1, -1));
            android.widget.TabWidget tw = new android.widget.TabWidget(context);
            tw.setId(android.R.id.tabs);
            tw.setOrientation(0);
            ll.addView(tw, new android.widget.LinearLayout.LayoutParams(-1, -2, 0.0f));
            android.widget.FrameLayout fl = new android.widget.FrameLayout(context);
            fl.setId(android.R.id.tabcontent);
            ll.addView(fl, new android.widget.LinearLayout.LayoutParams(0, 0, 0.0f));
            android.widget.FrameLayout fl2 = new android.widget.FrameLayout(context);
            this.mRealTabContent = fl2;
            this.mRealTabContent.setId(this.mContainerId);
            ll.addView(fl2, new android.widget.LinearLayout.LayoutParams(-1, 0, 1.0f));
        }
    }

    @Override // android.widget.TabHost
    @java.lang.Deprecated
    public void setup() {
        throw new java.lang.IllegalStateException("Must call setup() that takes a Context and FragmentManager");
    }

    public void setup(android.content.Context context, android.support.v4.app.FragmentManager manager) {
        ensureHierarchy(context);
        super.setup();
        this.mContext = context;
        this.mFragmentManager = manager;
        ensureContent();
    }

    public void setup(android.content.Context context, android.support.v4.app.FragmentManager manager, int containerId) {
        ensureHierarchy(context);
        super.setup();
        this.mContext = context;
        this.mFragmentManager = manager;
        this.mContainerId = containerId;
        ensureContent();
        this.mRealTabContent.setId(containerId);
        if (getId() == -1) {
            setId(android.R.id.tabhost);
        }
    }

    private void ensureContent() {
        if (this.mRealTabContent == null) {
            this.mRealTabContent = (android.widget.FrameLayout) findViewById(this.mContainerId);
            if (this.mRealTabContent == null) {
                throw new java.lang.IllegalStateException("No tab content FrameLayout found for id " + this.mContainerId);
            }
        }
    }

    @Override // android.widget.TabHost
    public void setOnTabChangedListener(android.widget.TabHost.OnTabChangeListener l) {
        this.mOnTabChangeListener = l;
    }

    public void addTab(android.widget.TabHost.TabSpec tabSpec, java.lang.Class<?> clss, android.os.Bundle args) {
        tabSpec.setContent(new android.support.v4.app.FragmentTabHost.DummyTabFactory(this.mContext));
        java.lang.String tag = tabSpec.getTag();
        android.support.v4.app.FragmentTabHost.TabInfo info = new android.support.v4.app.FragmentTabHost.TabInfo(tag, clss, args);
        if (this.mAttached) {
            info.fragment = this.mFragmentManager.findFragmentByTag(tag);
            if (info.fragment != null && !info.fragment.isDetached()) {
                android.support.v4.app.FragmentTransaction ft = this.mFragmentManager.beginTransaction();
                ft.detach(info.fragment);
                ft.commit();
            }
        }
        this.mTabs.add(info);
        addTab(tabSpec);
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        java.lang.String currentTab = getCurrentTabTag();
        android.support.v4.app.FragmentTransaction ft = null;
        for (int i = 0; i < this.mTabs.size(); i++) {
            android.support.v4.app.FragmentTabHost.TabInfo tab = this.mTabs.get(i);
            tab.fragment = this.mFragmentManager.findFragmentByTag(tab.tag);
            if (tab.fragment != null && !tab.fragment.isDetached()) {
                if (tab.tag.equals(currentTab)) {
                    this.mLastTab = tab;
                } else {
                    if (ft == null) {
                        ft = this.mFragmentManager.beginTransaction();
                    }
                    ft.detach(tab.fragment);
                }
            }
        }
        this.mAttached = true;
        android.support.v4.app.FragmentTransaction ft2 = doTabChanged(currentTab, ft);
        if (ft2 != null) {
            ft2.commit();
            this.mFragmentManager.executePendingTransactions();
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        this.mAttached = false;
    }

    @Override // android.view.View
    protected android.os.Parcelable onSaveInstanceState() {
        android.os.Parcelable superState = super.onSaveInstanceState();
        android.support.v4.app.FragmentTabHost.SavedState ss = new android.support.v4.app.FragmentTabHost.SavedState(superState);
        ss.curTab = getCurrentTabTag();
        return ss;
    }

    @Override // android.view.View
    protected void onRestoreInstanceState(android.os.Parcelable state) {
        android.support.v4.app.FragmentTabHost.SavedState ss = (android.support.v4.app.FragmentTabHost.SavedState) state;
        super.onRestoreInstanceState(ss.getSuperState());
        setCurrentTabByTag(ss.curTab);
    }

    @Override // android.widget.TabHost.OnTabChangeListener
    public void onTabChanged(java.lang.String tabId) {
        android.support.v4.app.FragmentTransaction ft;
        if (this.mAttached && (ft = doTabChanged(tabId, null)) != null) {
            ft.commit();
        }
        if (this.mOnTabChangeListener != null) {
            this.mOnTabChangeListener.onTabChanged(tabId);
        }
    }

    private android.support.v4.app.FragmentTransaction doTabChanged(java.lang.String tabId, android.support.v4.app.FragmentTransaction ft) {
        android.support.v4.app.FragmentTabHost.TabInfo newTab = null;
        for (int i = 0; i < this.mTabs.size(); i++) {
            android.support.v4.app.FragmentTabHost.TabInfo tab = this.mTabs.get(i);
            if (tab.tag.equals(tabId)) {
                newTab = tab;
            }
        }
        if (newTab == null) {
            throw new java.lang.IllegalStateException("No tab known for tag " + tabId);
        }
        if (this.mLastTab != newTab) {
            if (ft == null) {
                ft = this.mFragmentManager.beginTransaction();
            }
            if (this.mLastTab != null && this.mLastTab.fragment != null) {
                ft.detach(this.mLastTab.fragment);
            }
            if (newTab != null) {
                if (newTab.fragment == null) {
                    newTab.fragment = android.support.v4.app.Fragment.instantiate(this.mContext, newTab.clss.getName(), newTab.args);
                    ft.add(this.mContainerId, newTab.fragment, newTab.tag);
                } else {
                    ft.attach(newTab.fragment);
                }
            }
            this.mLastTab = newTab;
        }
        return ft;
    }
}
