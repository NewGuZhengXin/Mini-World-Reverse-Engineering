package android.support.v4.app;

/* loaded from: classes.dex */
public class Fragment implements android.content.ComponentCallbacks, android.view.View.OnCreateContextMenuListener {
    static final int ACTIVITY_CREATED = 2;
    static final int CREATED = 1;
    static final int INITIALIZING = 0;
    static final int RESUMED = 5;
    static final int STARTED = 4;
    static final int STOPPED = 3;
    private static final android.support.v4.util.SimpleArrayMap<java.lang.String, java.lang.Class<?>> sClassMap = new android.support.v4.util.SimpleArrayMap<>();
    android.support.v4.app.FragmentActivity mActivity;
    boolean mAdded;
    android.view.View mAnimatingAway;
    android.os.Bundle mArguments;
    int mBackStackNesting;
    boolean mCalled;
    boolean mCheckedForLoaderManager;
    android.support.v4.app.FragmentManagerImpl mChildFragmentManager;
    android.view.ViewGroup mContainer;
    int mContainerId;
    boolean mDeferStart;
    boolean mDetached;
    int mFragmentId;
    android.support.v4.app.FragmentManagerImpl mFragmentManager;
    boolean mFromLayout;
    boolean mHasMenu;
    boolean mHidden;
    boolean mInLayout;
    android.view.View mInnerView;
    android.support.v4.app.LoaderManagerImpl mLoaderManager;
    boolean mLoadersStarted;
    int mNextAnim;
    android.support.v4.app.Fragment mParentFragment;
    boolean mRemoving;
    boolean mRestored;
    boolean mResumed;
    boolean mRetainInstance;
    boolean mRetaining;
    android.os.Bundle mSavedFragmentState;
    android.util.SparseArray<android.os.Parcelable> mSavedViewState;
    int mStateAfterAnimating;
    java.lang.String mTag;
    android.support.v4.app.Fragment mTarget;
    int mTargetRequestCode;
    android.view.View mView;
    java.lang.String mWho;
    int mState = 0;
    int mIndex = -1;
    int mTargetIndex = -1;
    boolean mMenuVisible = true;
    boolean mUserVisibleHint = true;

    public static class SavedState implements android.os.Parcelable {
        public static final android.os.Parcelable.Creator<android.support.v4.app.Fragment.SavedState> CREATOR = new android.os.Parcelable.Creator<android.support.v4.app.Fragment.SavedState>() { // from class: android.support.v4.app.Fragment.SavedState.1
            /* JADX WARN: Can't rename method to resolve collision */
            @Override // android.os.Parcelable.Creator
            public android.support.v4.app.Fragment.SavedState createFromParcel(android.os.Parcel in) {
                return new android.support.v4.app.Fragment.SavedState(in, null);
            }

            /* JADX WARN: Can't rename method to resolve collision */
            @Override // android.os.Parcelable.Creator
            public android.support.v4.app.Fragment.SavedState[] newArray(int size) {
                return new android.support.v4.app.Fragment.SavedState[size];
            }
        };
        final android.os.Bundle mState;

        SavedState(android.os.Bundle state) {
            this.mState = state;
        }

        SavedState(android.os.Parcel in, java.lang.ClassLoader loader) {
            this.mState = in.readBundle();
            if (loader != null && this.mState != null) {
                this.mState.setClassLoader(loader);
            }
        }

        @Override // android.os.Parcelable
        public int describeContents() {
            return 0;
        }

        @Override // android.os.Parcelable
        public void writeToParcel(android.os.Parcel dest, int flags) {
            dest.writeBundle(this.mState);
        }
    }

    public static class InstantiationException extends java.lang.RuntimeException {
        public InstantiationException(java.lang.String msg, java.lang.Exception cause) {
            super(msg, cause);
        }
    }

    public static android.support.v4.app.Fragment instantiate(android.content.Context context, java.lang.String fname) {
        return instantiate(context, fname, null);
    }

    public static android.support.v4.app.Fragment instantiate(android.content.Context context, java.lang.String fname, android.os.Bundle args) { // NOTE(jadx-fix): smali declares no throws clause (ClassNotFoundException is caught and rethrown as InstantiationException)
        try {
            java.lang.Class<?> clazz = sClassMap.get(fname);
            if (clazz == null) {
                clazz = context.getClassLoader().loadClass(fname);
                sClassMap.put(fname, clazz);
            }
            android.support.v4.app.Fragment f = (android.support.v4.app.Fragment) clazz.newInstance();
            if (args != null) {
                args.setClassLoader(f.getClass().getClassLoader());
                f.mArguments = args;
            }
            return f;
        } catch (java.lang.ClassNotFoundException e) {
            throw new android.support.v4.app.Fragment.InstantiationException("Unable to instantiate fragment " + fname + ": make sure class name exists, is public, and has an empty constructor that is public", e);
        } catch (java.lang.IllegalAccessException e2) {
            throw new android.support.v4.app.Fragment.InstantiationException("Unable to instantiate fragment " + fname + ": make sure class name exists, is public, and has an empty constructor that is public", e2);
        } catch (java.lang.InstantiationException e3) {
            throw new android.support.v4.app.Fragment.InstantiationException("Unable to instantiate fragment " + fname + ": make sure class name exists, is public, and has an empty constructor that is public", e3);
        }
    }

    // NOTE(jadx-fix): "throws ClassNotFoundException" removed - the body catches it and
    // returns false, and the callers (FragmentActivity.onCreateView) cannot declare it.
    static boolean isSupportFragmentClass(android.content.Context context, java.lang.String fname) {
        try {
            java.lang.Class<?> clazz = sClassMap.get(fname);
            if (clazz == null) {
                clazz = context.getClassLoader().loadClass(fname);
                sClassMap.put(fname, clazz);
            }
            return android.support.v4.app.Fragment.class.isAssignableFrom(clazz);
        } catch (java.lang.ClassNotFoundException e) {
            return false;
        }
    }

    final void restoreViewState(android.os.Bundle savedInstanceState) {
        if (this.mSavedViewState != null) {
            this.mInnerView.restoreHierarchyState(this.mSavedViewState);
            this.mSavedViewState = null;
        }
        this.mCalled = false;
        onViewStateRestored(savedInstanceState);
        if (!this.mCalled) {
            throw new android.support.v4.app.SuperNotCalledException("Fragment " + this + " did not call through to super.onViewStateRestored()");
        }
    }

    final void setIndex(int index, android.support.v4.app.Fragment parent) {
        this.mIndex = index;
        if (parent != null) {
            this.mWho = parent.mWho + ":" + this.mIndex;
        } else {
            this.mWho = "android:fragment:" + this.mIndex;
        }
    }

    final boolean isInBackStack() {
        return this.mBackStackNesting > 0;
    }

    public final boolean equals(java.lang.Object o) {
        return super.equals(o);
    }

    public final int hashCode() {
        return super.hashCode();
    }

    public java.lang.String toString() {
        java.lang.StringBuilder sb = new java.lang.StringBuilder(128);
        android.support.v4.util.DebugUtils.buildShortClassTag(this, sb);
        if (this.mIndex >= 0) {
            sb.append(" #");
            sb.append(this.mIndex);
        }
        if (this.mFragmentId != 0) {
            sb.append(" id=0x");
            sb.append(java.lang.Integer.toHexString(this.mFragmentId));
        }
        if (this.mTag != null) {
            sb.append(" ");
            sb.append(this.mTag);
        }
        sb.append('}');
        return sb.toString();
    }

    public final int getId() {
        return this.mFragmentId;
    }

    public final java.lang.String getTag() {
        return this.mTag;
    }

    public void setArguments(android.os.Bundle args) {
        if (this.mIndex >= 0) {
            throw new java.lang.IllegalStateException("Fragment already active");
        }
        this.mArguments = args;
    }

    public final android.os.Bundle getArguments() {
        return this.mArguments;
    }

    public void setInitialSavedState(android.support.v4.app.Fragment.SavedState state) {
        if (this.mIndex >= 0) {
            throw new java.lang.IllegalStateException("Fragment already active");
        }
        this.mSavedFragmentState = (state == null || state.mState == null) ? null : state.mState;
    }

    public void setTargetFragment(android.support.v4.app.Fragment fragment, int requestCode) {
        this.mTarget = fragment;
        this.mTargetRequestCode = requestCode;
    }

    public final android.support.v4.app.Fragment getTargetFragment() {
        return this.mTarget;
    }

    public final int getTargetRequestCode() {
        return this.mTargetRequestCode;
    }

    public final android.support.v4.app.FragmentActivity getActivity() {
        return this.mActivity;
    }

    public final android.content.res.Resources getResources() {
        if (this.mActivity == null) {
            throw new java.lang.IllegalStateException("Fragment " + this + " not attached to Activity");
        }
        return this.mActivity.getResources();
    }

    public final java.lang.CharSequence getText(int resId) {
        return getResources().getText(resId);
    }

    public final java.lang.String getString(int resId) {
        return getResources().getString(resId);
    }

    public final java.lang.String getString(int resId, java.lang.Object... formatArgs) {
        return getResources().getString(resId, formatArgs);
    }

    public final android.support.v4.app.FragmentManager getFragmentManager() {
        return this.mFragmentManager;
    }

    public final android.support.v4.app.FragmentManager getChildFragmentManager() {
        if (this.mChildFragmentManager == null) {
            instantiateChildFragmentManager();
            if (this.mState >= 5) {
                this.mChildFragmentManager.dispatchResume();
            } else if (this.mState >= 4) {
                this.mChildFragmentManager.dispatchStart();
            } else if (this.mState >= 2) {
                this.mChildFragmentManager.dispatchActivityCreated();
            } else if (this.mState >= 1) {
                this.mChildFragmentManager.dispatchCreate();
            }
        }
        return this.mChildFragmentManager;
    }

    public final android.support.v4.app.Fragment getParentFragment() {
        return this.mParentFragment;
    }

    public final boolean isAdded() {
        return this.mActivity != null && this.mAdded;
    }

    public final boolean isDetached() {
        return this.mDetached;
    }

    public final boolean isRemoving() {
        return this.mRemoving;
    }

    public final boolean isInLayout() {
        return this.mInLayout;
    }

    public final boolean isResumed() {
        return this.mResumed;
    }

    public final boolean isVisible() {
        return (!isAdded() || isHidden() || this.mView == null || this.mView.getWindowToken() == null || this.mView.getVisibility() != 0) ? false : true;
    }

    public final boolean isHidden() {
        return this.mHidden;
    }

    public final boolean hasOptionsMenu() {
        return this.mHasMenu;
    }

    public final boolean isMenuVisible() {
        return this.mMenuVisible;
    }

    public void onHiddenChanged(boolean hidden) {
    }

    public void setRetainInstance(boolean retain) {
        if (retain && this.mParentFragment != null) {
            throw new java.lang.IllegalStateException("Can't retain fragements that are nested in other fragments");
        }
        this.mRetainInstance = retain;
    }

    public final boolean getRetainInstance() {
        return this.mRetainInstance;
    }

    public void setHasOptionsMenu(boolean hasMenu) {
        if (this.mHasMenu != hasMenu) {
            this.mHasMenu = hasMenu;
            if (isAdded() && !isHidden()) {
                this.mActivity.supportInvalidateOptionsMenu();
            }
        }
    }

    public void setMenuVisibility(boolean menuVisible) {
        if (this.mMenuVisible != menuVisible) {
            this.mMenuVisible = menuVisible;
            if (this.mHasMenu && isAdded() && !isHidden()) {
                this.mActivity.supportInvalidateOptionsMenu();
            }
        }
    }

    public void setUserVisibleHint(boolean isVisibleToUser) throws android.content.res.Resources.NotFoundException {
        if (!this.mUserVisibleHint && isVisibleToUser && this.mState < 4) {
            this.mFragmentManager.performPendingDeferredStart(this);
        }
        this.mUserVisibleHint = isVisibleToUser;
        this.mDeferStart = !isVisibleToUser;
    }

    public boolean getUserVisibleHint() {
        return this.mUserVisibleHint;
    }

    public android.support.v4.app.LoaderManager getLoaderManager() {
        if (this.mLoaderManager != null) {
            return this.mLoaderManager;
        }
        if (this.mActivity == null) {
            throw new java.lang.IllegalStateException("Fragment " + this + " not attached to Activity");
        }
        this.mCheckedForLoaderManager = true;
        this.mLoaderManager = this.mActivity.getLoaderManager(this.mWho, this.mLoadersStarted, true);
        return this.mLoaderManager;
    }

    public void startActivity(android.content.Intent intent) {
        if (this.mActivity == null) {
            throw new java.lang.IllegalStateException("Fragment " + this + " not attached to Activity");
        }
        this.mActivity.startActivityFromFragment(this, intent, -1);
    }

    public void startActivityForResult(android.content.Intent intent, int requestCode) {
        if (this.mActivity == null) {
            throw new java.lang.IllegalStateException("Fragment " + this + " not attached to Activity");
        }
        this.mActivity.startActivityFromFragment(this, intent, requestCode);
    }

    public void onActivityResult(int requestCode, int resultCode, android.content.Intent data) {
    }

    public android.view.LayoutInflater getLayoutInflater(android.os.Bundle savedInstanceState) {
        return this.mActivity.getLayoutInflater();
    }

    public void onInflate(android.app.Activity activity, android.util.AttributeSet attrs, android.os.Bundle savedInstanceState) {
        this.mCalled = true;
    }

    public void onAttach(android.app.Activity activity) {
        this.mCalled = true;
    }

    public android.view.animation.Animation onCreateAnimation(int transit, boolean enter, int nextAnim) {
        return null;
    }

    public void onCreate(android.os.Bundle savedInstanceState) {
        this.mCalled = true;
    }

    public android.view.View onCreateView(android.view.LayoutInflater inflater, android.view.ViewGroup container, android.os.Bundle savedInstanceState) {
        return null;
    }

    public void onViewCreated(android.view.View view, android.os.Bundle savedInstanceState) {
    }

    public android.view.View getView() {
        return this.mView;
    }

    public void onActivityCreated(android.os.Bundle savedInstanceState) {
        this.mCalled = true;
    }

    public void onViewStateRestored(android.os.Bundle savedInstanceState) {
        this.mCalled = true;
    }

    public void onStart() {
        this.mCalled = true;
        if (!this.mLoadersStarted) {
            this.mLoadersStarted = true;
            if (!this.mCheckedForLoaderManager) {
                this.mCheckedForLoaderManager = true;
                this.mLoaderManager = this.mActivity.getLoaderManager(this.mWho, this.mLoadersStarted, false);
            }
            if (this.mLoaderManager != null) {
                this.mLoaderManager.doStart();
            }
        }
    }

    public void onResume() {
        this.mCalled = true;
    }

    public void onSaveInstanceState(android.os.Bundle outState) {
    }

    @Override // android.content.ComponentCallbacks
    public void onConfigurationChanged(android.content.res.Configuration newConfig) {
        this.mCalled = true;
    }

    public void onPause() {
        this.mCalled = true;
    }

    public void onStop() {
        this.mCalled = true;
    }

    @Override // android.content.ComponentCallbacks
    public void onLowMemory() {
        this.mCalled = true;
    }

    public void onDestroyView() {
        this.mCalled = true;
    }

    public void onDestroy() {
        this.mCalled = true;
        if (!this.mCheckedForLoaderManager) {
            this.mCheckedForLoaderManager = true;
            this.mLoaderManager = this.mActivity.getLoaderManager(this.mWho, this.mLoadersStarted, false);
        }
        if (this.mLoaderManager != null) {
            this.mLoaderManager.doDestroy();
        }
    }

    void initState() {
        this.mIndex = -1;
        this.mWho = null;
        this.mAdded = false;
        this.mRemoving = false;
        this.mResumed = false;
        this.mFromLayout = false;
        this.mInLayout = false;
        this.mRestored = false;
        this.mBackStackNesting = 0;
        this.mFragmentManager = null;
        this.mActivity = null;
        this.mFragmentId = 0;
        this.mContainerId = 0;
        this.mTag = null;
        this.mHidden = false;
        this.mDetached = false;
        this.mRetaining = false;
        this.mLoaderManager = null;
        this.mLoadersStarted = false;
        this.mCheckedForLoaderManager = false;
    }

    public void onDetach() {
        this.mCalled = true;
    }

    public void onCreateOptionsMenu(android.view.Menu menu, android.view.MenuInflater inflater) {
    }

    public void onPrepareOptionsMenu(android.view.Menu menu) {
    }

    public void onDestroyOptionsMenu() {
    }

    public boolean onOptionsItemSelected(android.view.MenuItem item) {
        return false;
    }

    public void onOptionsMenuClosed(android.view.Menu menu) {
    }

    @Override // android.view.View.OnCreateContextMenuListener
    public void onCreateContextMenu(android.view.ContextMenu menu, android.view.View v, android.view.ContextMenu.ContextMenuInfo menuInfo) {
        getActivity().onCreateContextMenu(menu, v, menuInfo);
    }

    public void registerForContextMenu(android.view.View view) {
        view.setOnCreateContextMenuListener(this);
    }

    public void unregisterForContextMenu(android.view.View view) {
        view.setOnCreateContextMenuListener(null);
    }

    public boolean onContextItemSelected(android.view.MenuItem item) {
        return false;
    }

    public void dump(java.lang.String prefix, java.io.FileDescriptor fd, java.io.PrintWriter writer, java.lang.String[] args) {
        writer.print(prefix);
        writer.print("mFragmentId=#");
        writer.print(java.lang.Integer.toHexString(this.mFragmentId));
        writer.print(" mContainerId=#");
        writer.print(java.lang.Integer.toHexString(this.mContainerId));
        writer.print(" mTag=");
        writer.println(this.mTag);
        writer.print(prefix);
        writer.print("mState=");
        writer.print(this.mState);
        writer.print(" mIndex=");
        writer.print(this.mIndex);
        writer.print(" mWho=");
        writer.print(this.mWho);
        writer.print(" mBackStackNesting=");
        writer.println(this.mBackStackNesting);
        writer.print(prefix);
        writer.print("mAdded=");
        writer.print(this.mAdded);
        writer.print(" mRemoving=");
        writer.print(this.mRemoving);
        writer.print(" mResumed=");
        writer.print(this.mResumed);
        writer.print(" mFromLayout=");
        writer.print(this.mFromLayout);
        writer.print(" mInLayout=");
        writer.println(this.mInLayout);
        writer.print(prefix);
        writer.print("mHidden=");
        writer.print(this.mHidden);
        writer.print(" mDetached=");
        writer.print(this.mDetached);
        writer.print(" mMenuVisible=");
        writer.print(this.mMenuVisible);
        writer.print(" mHasMenu=");
        writer.println(this.mHasMenu);
        writer.print(prefix);
        writer.print("mRetainInstance=");
        writer.print(this.mRetainInstance);
        writer.print(" mRetaining=");
        writer.print(this.mRetaining);
        writer.print(" mUserVisibleHint=");
        writer.println(this.mUserVisibleHint);
        if (this.mFragmentManager != null) {
            writer.print(prefix);
            writer.print("mFragmentManager=");
            writer.println(this.mFragmentManager);
        }
        if (this.mActivity != null) {
            writer.print(prefix);
            writer.print("mActivity=");
            writer.println(this.mActivity);
        }
        if (this.mParentFragment != null) {
            writer.print(prefix);
            writer.print("mParentFragment=");
            writer.println(this.mParentFragment);
        }
        if (this.mArguments != null) {
            writer.print(prefix);
            writer.print("mArguments=");
            writer.println(this.mArguments);
        }
        if (this.mSavedFragmentState != null) {
            writer.print(prefix);
            writer.print("mSavedFragmentState=");
            writer.println(this.mSavedFragmentState);
        }
        if (this.mSavedViewState != null) {
            writer.print(prefix);
            writer.print("mSavedViewState=");
            writer.println(this.mSavedViewState);
        }
        if (this.mTarget != null) {
            writer.print(prefix);
            writer.print("mTarget=");
            writer.print(this.mTarget);
            writer.print(" mTargetRequestCode=");
            writer.println(this.mTargetRequestCode);
        }
        if (this.mNextAnim != 0) {
            writer.print(prefix);
            writer.print("mNextAnim=");
            writer.println(this.mNextAnim);
        }
        if (this.mContainer != null) {
            writer.print(prefix);
            writer.print("mContainer=");
            writer.println(this.mContainer);
        }
        if (this.mView != null) {
            writer.print(prefix);
            writer.print("mView=");
            writer.println(this.mView);
        }
        if (this.mInnerView != null) {
            writer.print(prefix);
            writer.print("mInnerView=");
            writer.println(this.mView);
        }
        if (this.mAnimatingAway != null) {
            writer.print(prefix);
            writer.print("mAnimatingAway=");
            writer.println(this.mAnimatingAway);
            writer.print(prefix);
            writer.print("mStateAfterAnimating=");
            writer.println(this.mStateAfterAnimating);
        }
        if (this.mLoaderManager != null) {
            writer.print(prefix);
            writer.println("Loader Manager:");
            this.mLoaderManager.dump(prefix + "  ", fd, writer, args);
        }
        if (this.mChildFragmentManager != null) {
            writer.print(prefix);
            writer.println("Child " + this.mChildFragmentManager + ":");
            this.mChildFragmentManager.dump(prefix + "  ", fd, writer, args);
        }
    }

    android.support.v4.app.Fragment findFragmentByWho(java.lang.String who) {
        if (!who.equals(this.mWho)) {
            if (this.mChildFragmentManager != null) {
                return this.mChildFragmentManager.findFragmentByWho(who);
            }
            return null;
        }
        return this;
    }

    void instantiateChildFragmentManager() {
        this.mChildFragmentManager = new android.support.v4.app.FragmentManagerImpl();
        this.mChildFragmentManager.attachActivity(this.mActivity, new android.support.v4.app.FragmentContainer() { // from class: android.support.v4.app.Fragment.1
            @Override // android.support.v4.app.FragmentContainer
            public android.view.View findViewById(int id) {
                if (android.support.v4.app.Fragment.this.mView == null) {
                    throw new java.lang.IllegalStateException("Fragment does not have a view");
                }
                return android.support.v4.app.Fragment.this.mView.findViewById(id);
            }
        }, this);
    }

    void performCreate(android.os.Bundle savedInstanceState) {
        android.os.Parcelable p;
        if (this.mChildFragmentManager != null) {
            this.mChildFragmentManager.noteStateNotSaved();
        }
        this.mCalled = false;
        onCreate(savedInstanceState);
        if (!this.mCalled) {
            throw new android.support.v4.app.SuperNotCalledException("Fragment " + this + " did not call through to super.onCreate()");
        }
        if (savedInstanceState != null && (p = savedInstanceState.getParcelable("android:support:fragments")) != null) {
            if (this.mChildFragmentManager == null) {
                instantiateChildFragmentManager();
            }
            this.mChildFragmentManager.restoreAllState(p, null);
            this.mChildFragmentManager.dispatchCreate();
        }
    }

    android.view.View performCreateView(android.view.LayoutInflater inflater, android.view.ViewGroup container, android.os.Bundle savedInstanceState) {
        if (this.mChildFragmentManager != null) {
            this.mChildFragmentManager.noteStateNotSaved();
        }
        return onCreateView(inflater, container, savedInstanceState);
    }

    void performActivityCreated(android.os.Bundle savedInstanceState) {
        if (this.mChildFragmentManager != null) {
            this.mChildFragmentManager.noteStateNotSaved();
        }
        this.mCalled = false;
        onActivityCreated(savedInstanceState);
        if (!this.mCalled) {
            throw new android.support.v4.app.SuperNotCalledException("Fragment " + this + " did not call through to super.onActivityCreated()");
        }
        if (this.mChildFragmentManager != null) {
            this.mChildFragmentManager.dispatchActivityCreated();
        }
    }

    void performStart() {
        if (this.mChildFragmentManager != null) {
            this.mChildFragmentManager.noteStateNotSaved();
            this.mChildFragmentManager.execPendingActions();
        }
        this.mCalled = false;
        onStart();
        if (!this.mCalled) {
            throw new android.support.v4.app.SuperNotCalledException("Fragment " + this + " did not call through to super.onStart()");
        }
        if (this.mChildFragmentManager != null) {
            this.mChildFragmentManager.dispatchStart();
        }
        if (this.mLoaderManager != null) {
            this.mLoaderManager.doReportStart();
        }
    }

    void performResume() {
        if (this.mChildFragmentManager != null) {
            this.mChildFragmentManager.noteStateNotSaved();
            this.mChildFragmentManager.execPendingActions();
        }
        this.mCalled = false;
        onResume();
        if (!this.mCalled) {
            throw new android.support.v4.app.SuperNotCalledException("Fragment " + this + " did not call through to super.onResume()");
        }
        if (this.mChildFragmentManager != null) {
            this.mChildFragmentManager.dispatchResume();
            this.mChildFragmentManager.execPendingActions();
        }
    }

    void performConfigurationChanged(android.content.res.Configuration newConfig) {
        onConfigurationChanged(newConfig);
        if (this.mChildFragmentManager != null) {
            this.mChildFragmentManager.dispatchConfigurationChanged(newConfig);
        }
    }

    void performLowMemory() {
        onLowMemory();
        if (this.mChildFragmentManager != null) {
            this.mChildFragmentManager.dispatchLowMemory();
        }
    }

    boolean performCreateOptionsMenu(android.view.Menu menu, android.view.MenuInflater inflater) {
        boolean show = false;
        if (this.mHidden) {
            return false;
        }
        if (this.mHasMenu && this.mMenuVisible) {
            show = true;
            onCreateOptionsMenu(menu, inflater);
        }
        if (this.mChildFragmentManager != null) {
            return show | this.mChildFragmentManager.dispatchCreateOptionsMenu(menu, inflater);
        }
        return show;
    }

    boolean performPrepareOptionsMenu(android.view.Menu menu) {
        boolean show = false;
        if (this.mHidden) {
            return false;
        }
        if (this.mHasMenu && this.mMenuVisible) {
            show = true;
            onPrepareOptionsMenu(menu);
        }
        if (this.mChildFragmentManager != null) {
            return show | this.mChildFragmentManager.dispatchPrepareOptionsMenu(menu);
        }
        return show;
    }

    boolean performOptionsItemSelected(android.view.MenuItem item) {
        if (!this.mHidden) {
            if (this.mHasMenu && this.mMenuVisible && onOptionsItemSelected(item)) {
                return true;
            }
            if (this.mChildFragmentManager != null && this.mChildFragmentManager.dispatchOptionsItemSelected(item)) {
                return true;
            }
        }
        return false;
    }

    boolean performContextItemSelected(android.view.MenuItem item) {
        if (!this.mHidden) {
            if (onContextItemSelected(item)) {
                return true;
            }
            if (this.mChildFragmentManager != null && this.mChildFragmentManager.dispatchContextItemSelected(item)) {
                return true;
            }
        }
        return false;
    }

    void performOptionsMenuClosed(android.view.Menu menu) {
        if (!this.mHidden) {
            if (this.mHasMenu && this.mMenuVisible) {
                onOptionsMenuClosed(menu);
            }
            if (this.mChildFragmentManager != null) {
                this.mChildFragmentManager.dispatchOptionsMenuClosed(menu);
            }
        }
    }

    void performSaveInstanceState(android.os.Bundle outState) {
        android.os.Parcelable p;
        onSaveInstanceState(outState);
        if (this.mChildFragmentManager != null && (p = this.mChildFragmentManager.saveAllState()) != null) {
            outState.putParcelable("android:support:fragments", p);
        }
    }

    void performPause() {
        if (this.mChildFragmentManager != null) {
            this.mChildFragmentManager.dispatchPause();
        }
        this.mCalled = false;
        onPause();
        if (!this.mCalled) {
            throw new android.support.v4.app.SuperNotCalledException("Fragment " + this + " did not call through to super.onPause()");
        }
    }

    void performStop() {
        if (this.mChildFragmentManager != null) {
            this.mChildFragmentManager.dispatchStop();
        }
        this.mCalled = false;
        onStop();
        if (!this.mCalled) {
            throw new android.support.v4.app.SuperNotCalledException("Fragment " + this + " did not call through to super.onStop()");
        }
    }

    void performReallyStop() {
        if (this.mChildFragmentManager != null) {
            this.mChildFragmentManager.dispatchReallyStop();
        }
        if (this.mLoadersStarted) {
            this.mLoadersStarted = false;
            if (!this.mCheckedForLoaderManager) {
                this.mCheckedForLoaderManager = true;
                this.mLoaderManager = this.mActivity.getLoaderManager(this.mWho, this.mLoadersStarted, false);
            }
            if (this.mLoaderManager != null) {
                if (!this.mActivity.mRetaining) {
                    this.mLoaderManager.doStop();
                } else {
                    this.mLoaderManager.doRetain();
                }
            }
        }
    }

    void performDestroyView() {
        if (this.mChildFragmentManager != null) {
            this.mChildFragmentManager.dispatchDestroyView();
        }
        this.mCalled = false;
        onDestroyView();
        if (!this.mCalled) {
            throw new android.support.v4.app.SuperNotCalledException("Fragment " + this + " did not call through to super.onDestroyView()");
        }
        if (this.mLoaderManager != null) {
            this.mLoaderManager.doReportNextStart();
        }
    }

    void performDestroy() {
        if (this.mChildFragmentManager != null) {
            this.mChildFragmentManager.dispatchDestroy();
        }
        this.mCalled = false;
        onDestroy();
        if (!this.mCalled) {
            throw new android.support.v4.app.SuperNotCalledException("Fragment " + this + " did not call through to super.onDestroy()");
        }
    }
}
