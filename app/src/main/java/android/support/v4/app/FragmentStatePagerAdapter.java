package android.support.v4.app;

/* loaded from: classes.dex */
public abstract class FragmentStatePagerAdapter extends android.support.v4.view.PagerAdapter {
    private static final boolean DEBUG = false;
    private static final java.lang.String TAG = "FragmentStatePagerAdapter";
    private final android.support.v4.app.FragmentManager mFragmentManager;
    private android.support.v4.app.FragmentTransaction mCurTransaction = null;
    private java.util.ArrayList<android.support.v4.app.Fragment.SavedState> mSavedState = new java.util.ArrayList<>();
    private java.util.ArrayList<android.support.v4.app.Fragment> mFragments = new java.util.ArrayList<>();
    private android.support.v4.app.Fragment mCurrentPrimaryItem = null;

    public abstract android.support.v4.app.Fragment getItem(int i);

    public FragmentStatePagerAdapter(android.support.v4.app.FragmentManager fm) {
        this.mFragmentManager = fm;
    }

    @Override // android.support.v4.view.PagerAdapter
    public void startUpdate(android.view.ViewGroup container) {
    }

    @Override // android.support.v4.view.PagerAdapter
    public java.lang.Object instantiateItem(android.view.ViewGroup container, int position) throws android.content.res.Resources.NotFoundException {
        android.support.v4.app.Fragment.SavedState fss;
        android.support.v4.app.Fragment f;
        if (this.mFragments.size() <= position || (f = this.mFragments.get(position)) == null) {
            if (this.mCurTransaction == null) {
                this.mCurTransaction = this.mFragmentManager.beginTransaction();
            }
            android.support.v4.app.Fragment fragment = getItem(position);
            if (this.mSavedState.size() > position && (fss = this.mSavedState.get(position)) != null) {
                fragment.setInitialSavedState(fss);
            }
            while (this.mFragments.size() <= position) {
                this.mFragments.add(null);
            }
            fragment.setMenuVisibility(DEBUG);
            fragment.setUserVisibleHint(DEBUG);
            this.mFragments.set(position, fragment);
            this.mCurTransaction.add(container.getId(), fragment);
            return fragment;
        }
        return f;
    }

    @Override // android.support.v4.view.PagerAdapter
    public void destroyItem(android.view.ViewGroup container, int position, java.lang.Object object) {
        android.support.v4.app.Fragment fragment = (android.support.v4.app.Fragment) object;
        if (this.mCurTransaction == null) {
            this.mCurTransaction = this.mFragmentManager.beginTransaction();
        }
        while (this.mSavedState.size() <= position) {
            this.mSavedState.add(null);
        }
        this.mSavedState.set(position, this.mFragmentManager.saveFragmentInstanceState(fragment));
        this.mFragments.set(position, null);
        this.mCurTransaction.remove(fragment);
    }

    @Override // android.support.v4.view.PagerAdapter
    public void setPrimaryItem(android.view.ViewGroup container, int position, java.lang.Object object) throws android.content.res.Resources.NotFoundException {
        android.support.v4.app.Fragment fragment = (android.support.v4.app.Fragment) object;
        if (fragment != this.mCurrentPrimaryItem) {
            if (this.mCurrentPrimaryItem != null) {
                this.mCurrentPrimaryItem.setMenuVisibility(DEBUG);
                this.mCurrentPrimaryItem.setUserVisibleHint(DEBUG);
            }
            if (fragment != null) {
                fragment.setMenuVisibility(true);
                fragment.setUserVisibleHint(true);
            }
            this.mCurrentPrimaryItem = fragment;
        }
    }

    @Override // android.support.v4.view.PagerAdapter
    public void finishUpdate(android.view.ViewGroup container) {
        if (this.mCurTransaction != null) {
            this.mCurTransaction.commitAllowingStateLoss();
            this.mCurTransaction = null;
            this.mFragmentManager.executePendingTransactions();
        }
    }

    @Override // android.support.v4.view.PagerAdapter
    public boolean isViewFromObject(android.view.View view, java.lang.Object object) {
        if (((android.support.v4.app.Fragment) object).getView() == view) {
            return true;
        }
        return DEBUG;
    }

    @Override // android.support.v4.view.PagerAdapter
    public android.os.Parcelable saveState() {
        android.os.Bundle state = null;
        if (this.mSavedState.size() > 0) {
            state = new android.os.Bundle();
            android.support.v4.app.Fragment.SavedState[] fss = new android.support.v4.app.Fragment.SavedState[this.mSavedState.size()];
            this.mSavedState.toArray(fss);
            state.putParcelableArray("states", fss);
        }
        for (int i = 0; i < this.mFragments.size(); i++) {
            android.support.v4.app.Fragment f = this.mFragments.get(i);
            if (f != null) {
                if (state == null) {
                    state = new android.os.Bundle();
                }
                java.lang.String key = "f" + i;
                this.mFragmentManager.putFragment(state, key, f);
            }
        }
        return state;
    }

    @Override // android.support.v4.view.PagerAdapter
    public void restoreState(android.os.Parcelable state, java.lang.ClassLoader loader) throws java.lang.NumberFormatException {
        if (state != null) {
            android.os.Bundle bundle = (android.os.Bundle) state;
            bundle.setClassLoader(loader);
            android.os.Parcelable[] fss = bundle.getParcelableArray("states");
            this.mSavedState.clear();
            this.mFragments.clear();
            if (fss != null) {
                for (android.os.Parcelable parcelable : fss) {
                    this.mSavedState.add((android.support.v4.app.Fragment.SavedState) parcelable);
                }
            }
            java.lang.Iterable<java.lang.String> keys = bundle.keySet();
            for (java.lang.String key : keys) {
                if (key.startsWith("f")) {
                    int index = java.lang.Integer.parseInt(key.substring(1));
                    android.support.v4.app.Fragment f = this.mFragmentManager.getFragment(bundle, key);
                    if (f != null) {
                        while (this.mFragments.size() <= index) {
                            this.mFragments.add(null);
                        }
                        f.setMenuVisibility(DEBUG);
                        this.mFragments.set(index, f);
                    } else {
                        android.util.Log.w(TAG, "Bad fragment at key " + key);
                    }
                }
            }
        }
    }
}
