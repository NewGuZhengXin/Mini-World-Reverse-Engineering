package android.support.v4.app;

/* loaded from: classes.dex */
public abstract class FragmentTransaction {
    public static final int TRANSIT_ENTER_MASK = 4096;
    public static final int TRANSIT_EXIT_MASK = 8192;
    public static final int TRANSIT_FRAGMENT_CLOSE = 8194;
    public static final int TRANSIT_FRAGMENT_FADE = 4099;
    public static final int TRANSIT_FRAGMENT_OPEN = 4097;
    public static final int TRANSIT_NONE = 0;
    public static final int TRANSIT_UNSET = -1;

    public abstract android.support.v4.app.FragmentTransaction add(int i, android.support.v4.app.Fragment fragment);

    public abstract android.support.v4.app.FragmentTransaction add(int i, android.support.v4.app.Fragment fragment, java.lang.String str);

    public abstract android.support.v4.app.FragmentTransaction add(android.support.v4.app.Fragment fragment, java.lang.String str);

    public abstract android.support.v4.app.FragmentTransaction addToBackStack(java.lang.String str);

    public abstract android.support.v4.app.FragmentTransaction attach(android.support.v4.app.Fragment fragment);

    public abstract int commit();

    public abstract int commitAllowingStateLoss();

    public abstract android.support.v4.app.FragmentTransaction detach(android.support.v4.app.Fragment fragment);

    public abstract android.support.v4.app.FragmentTransaction disallowAddToBackStack();

    public abstract android.support.v4.app.FragmentTransaction hide(android.support.v4.app.Fragment fragment);

    public abstract boolean isAddToBackStackAllowed();

    public abstract boolean isEmpty();

    public abstract android.support.v4.app.FragmentTransaction remove(android.support.v4.app.Fragment fragment);

    public abstract android.support.v4.app.FragmentTransaction replace(int i, android.support.v4.app.Fragment fragment);

    public abstract android.support.v4.app.FragmentTransaction replace(int i, android.support.v4.app.Fragment fragment, java.lang.String str);

    public abstract android.support.v4.app.FragmentTransaction setBreadCrumbShortTitle(int i);

    public abstract android.support.v4.app.FragmentTransaction setBreadCrumbShortTitle(java.lang.CharSequence charSequence);

    public abstract android.support.v4.app.FragmentTransaction setBreadCrumbTitle(int i);

    public abstract android.support.v4.app.FragmentTransaction setBreadCrumbTitle(java.lang.CharSequence charSequence);

    public abstract android.support.v4.app.FragmentTransaction setCustomAnimations(int i, int i2);

    public abstract android.support.v4.app.FragmentTransaction setCustomAnimations(int i, int i2, int i3, int i4);

    public abstract android.support.v4.app.FragmentTransaction setTransition(int i);

    public abstract android.support.v4.app.FragmentTransaction setTransitionStyle(int i);

    public abstract android.support.v4.app.FragmentTransaction show(android.support.v4.app.Fragment fragment);
}
