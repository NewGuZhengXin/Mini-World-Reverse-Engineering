package android.support.v4.app;

/* loaded from: classes.dex */
public abstract class FragmentManager {
    public static final int POP_BACK_STACK_INCLUSIVE = 1;

    public interface BackStackEntry {
        java.lang.CharSequence getBreadCrumbShortTitle();

        int getBreadCrumbShortTitleRes();

        java.lang.CharSequence getBreadCrumbTitle();

        int getBreadCrumbTitleRes();

        int getId();

        java.lang.String getName();
    }

    public interface OnBackStackChangedListener {
        void onBackStackChanged();
    }

    public abstract void addOnBackStackChangedListener(android.support.v4.app.FragmentManager.OnBackStackChangedListener onBackStackChangedListener);

    public abstract android.support.v4.app.FragmentTransaction beginTransaction();

    public abstract void dump(java.lang.String str, java.io.FileDescriptor fileDescriptor, java.io.PrintWriter printWriter, java.lang.String[] strArr);

    public abstract boolean executePendingTransactions();

    public abstract android.support.v4.app.Fragment findFragmentById(int i);

    public abstract android.support.v4.app.Fragment findFragmentByTag(java.lang.String str);

    public abstract android.support.v4.app.FragmentManager.BackStackEntry getBackStackEntryAt(int i);

    public abstract int getBackStackEntryCount();

    public abstract android.support.v4.app.Fragment getFragment(android.os.Bundle bundle, java.lang.String str);

    public abstract java.util.List<android.support.v4.app.Fragment> getFragments();

    public abstract void popBackStack();

    public abstract void popBackStack(int i, int i2);

    public abstract void popBackStack(java.lang.String str, int i);

    public abstract boolean popBackStackImmediate();

    public abstract boolean popBackStackImmediate(int i, int i2);

    public abstract boolean popBackStackImmediate(java.lang.String str, int i);

    public abstract void putFragment(android.os.Bundle bundle, java.lang.String str, android.support.v4.app.Fragment fragment);

    public abstract void removeOnBackStackChangedListener(android.support.v4.app.FragmentManager.OnBackStackChangedListener onBackStackChangedListener);

    public abstract android.support.v4.app.Fragment.SavedState saveFragmentInstanceState(android.support.v4.app.Fragment fragment);

    @java.lang.Deprecated
    public android.support.v4.app.FragmentTransaction openTransaction() {
        return beginTransaction();
    }

    public static void enableDebugLogging(boolean enabled) {
        android.support.v4.app.FragmentManagerImpl.DEBUG = enabled;
    }
}
