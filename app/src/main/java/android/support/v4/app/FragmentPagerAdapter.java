package android.support.v4.app;

/* loaded from: classes.dex */
public abstract class FragmentPagerAdapter extends android.support.v4.view.PagerAdapter {
    private static final boolean DEBUG = false;
    private static final java.lang.String TAG = "FragmentPagerAdapter";
    private android.support.v4.app.FragmentTransaction mCurTransaction = null;
    private android.support.v4.app.Fragment mCurrentPrimaryItem = null;
    private final android.support.v4.app.FragmentManager mFragmentManager;

    public abstract android.support.v4.app.Fragment getItem(int i);

    public FragmentPagerAdapter(android.support.v4.app.FragmentManager fm) {
        this.mFragmentManager = fm;
    }

    @Override // android.support.v4.view.PagerAdapter
    public void startUpdate(android.view.ViewGroup container) {
    }

    @Override // android.support.v4.view.PagerAdapter
    public java.lang.Object instantiateItem(android.view.ViewGroup container, int position) throws android.content.res.Resources.NotFoundException {
        if (this.mCurTransaction == null) {
            this.mCurTransaction = this.mFragmentManager.beginTransaction();
        }
        long itemId = getItemId(position);
        java.lang.String name = makeFragmentName(container.getId(), itemId);
        android.support.v4.app.Fragment fragment = this.mFragmentManager.findFragmentByTag(name);
        if (fragment != null) {
            this.mCurTransaction.attach(fragment);
        } else {
            fragment = getItem(position);
            this.mCurTransaction.add(container.getId(), fragment, makeFragmentName(container.getId(), itemId));
        }
        if (fragment != this.mCurrentPrimaryItem) {
            fragment.setMenuVisibility(DEBUG);
            fragment.setUserVisibleHint(DEBUG);
        }
        return fragment;
    }

    @Override // android.support.v4.view.PagerAdapter
    public void destroyItem(android.view.ViewGroup container, int position, java.lang.Object object) {
        if (this.mCurTransaction == null) {
            this.mCurTransaction = this.mFragmentManager.beginTransaction();
        }
        this.mCurTransaction.detach((android.support.v4.app.Fragment) object);
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
        return null;
    }

    @Override // android.support.v4.view.PagerAdapter
    public void restoreState(android.os.Parcelable state, java.lang.ClassLoader loader) {
    }

    public long getItemId(int position) {
        return position;
    }

    private static java.lang.String makeFragmentName(int viewId, long id) {
        return "android:switcher:" + viewId + ":" + id;
    }
}
