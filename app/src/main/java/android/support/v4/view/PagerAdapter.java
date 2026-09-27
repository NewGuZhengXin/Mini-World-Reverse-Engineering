package android.support.v4.view;

/* loaded from: classes.dex */
public abstract class PagerAdapter {
    public static final int POSITION_NONE = -2;
    public static final int POSITION_UNCHANGED = -1;
    private android.database.DataSetObservable mObservable = new android.database.DataSetObservable();

    public abstract int getCount();

    public abstract boolean isViewFromObject(android.view.View view, java.lang.Object obj);

    public void startUpdate(android.view.ViewGroup container) {
        startUpdate((android.view.View) container);
    }

    public java.lang.Object instantiateItem(android.view.ViewGroup container, int position) {
        return instantiateItem((android.view.View) container, position);
    }

    public void destroyItem(android.view.ViewGroup container, int position, java.lang.Object object) {
        destroyItem((android.view.View) container, position, object);
    }

    public void setPrimaryItem(android.view.ViewGroup container, int position, java.lang.Object object) {
        setPrimaryItem((android.view.View) container, position, object);
    }

    public void finishUpdate(android.view.ViewGroup container) {
        finishUpdate((android.view.View) container);
    }

    public void startUpdate(android.view.View container) {
    }

    public java.lang.Object instantiateItem(android.view.View container, int position) {
        throw new java.lang.UnsupportedOperationException("Required method instantiateItem was not overridden");
    }

    public void destroyItem(android.view.View container, int position, java.lang.Object object) {
        throw new java.lang.UnsupportedOperationException("Required method destroyItem was not overridden");
    }

    public void setPrimaryItem(android.view.View container, int position, java.lang.Object object) {
    }

    public void finishUpdate(android.view.View container) {
    }

    public android.os.Parcelable saveState() {
        return null;
    }

    public void restoreState(android.os.Parcelable state, java.lang.ClassLoader loader) {
    }

    public int getItemPosition(java.lang.Object object) {
        return -1;
    }

    public void notifyDataSetChanged() {
        this.mObservable.notifyChanged();
    }

    public void registerDataSetObserver(android.database.DataSetObserver observer) {
        this.mObservable.registerObserver(observer);
    }

    public void unregisterDataSetObserver(android.database.DataSetObserver observer) {
        this.mObservable.unregisterObserver(observer);
    }

    public java.lang.CharSequence getPageTitle(int position) {
        return null;
    }

    public float getPageWidth(int position) {
        return 1.0f;
    }
}
