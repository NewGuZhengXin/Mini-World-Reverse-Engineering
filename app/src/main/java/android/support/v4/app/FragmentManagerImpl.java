package android.support.v4.app;

/* compiled from: FragmentManager.java */
/* loaded from: classes.dex */
final class FragmentManagerImpl extends android.support.v4.app.FragmentManager {
    static final android.view.animation.Interpolator ACCELERATE_CUBIC;
    static final android.view.animation.Interpolator ACCELERATE_QUINT;
    static final int ANIM_DUR = 220;
    public static final int ANIM_STYLE_CLOSE_ENTER = 3;
    public static final int ANIM_STYLE_CLOSE_EXIT = 4;
    public static final int ANIM_STYLE_FADE_ENTER = 5;
    public static final int ANIM_STYLE_FADE_EXIT = 6;
    public static final int ANIM_STYLE_OPEN_ENTER = 1;
    public static final int ANIM_STYLE_OPEN_EXIT = 2;
    static boolean DEBUG = false;
    static final android.view.animation.Interpolator DECELERATE_CUBIC;
    static final android.view.animation.Interpolator DECELERATE_QUINT;
    static final boolean HONEYCOMB;
    static final java.lang.String TAG = "FragmentManager";
    static final java.lang.String TARGET_REQUEST_CODE_STATE_TAG = "android:target_req_state";
    static final java.lang.String TARGET_STATE_TAG = "android:target_state";
    static final java.lang.String USER_VISIBLE_HINT_TAG = "android:user_visible_hint";
    static final java.lang.String VIEW_STATE_TAG = "android:view_state";
    java.util.ArrayList<android.support.v4.app.Fragment> mActive;
    android.support.v4.app.FragmentActivity mActivity;
    java.util.ArrayList<android.support.v4.app.Fragment> mAdded;
    java.util.ArrayList<java.lang.Integer> mAvailBackStackIndices;
    java.util.ArrayList<java.lang.Integer> mAvailIndices;
    java.util.ArrayList<android.support.v4.app.BackStackRecord> mBackStack;
    java.util.ArrayList<android.support.v4.app.FragmentManager.OnBackStackChangedListener> mBackStackChangeListeners;
    java.util.ArrayList<android.support.v4.app.BackStackRecord> mBackStackIndices;
    android.support.v4.app.FragmentContainer mContainer;
    java.util.ArrayList<android.support.v4.app.Fragment> mCreatedMenus;
    boolean mDestroyed;
    boolean mExecutingActions;
    boolean mHavePendingDeferredStart;
    boolean mNeedMenuInvalidate;
    java.lang.String mNoTransactionsBecause;
    android.support.v4.app.Fragment mParent;
    java.util.ArrayList<java.lang.Runnable> mPendingActions;
    boolean mStateSaved;
    java.lang.Runnable[] mTmpActions;
    int mCurState = 0;
    android.os.Bundle mStateBundle = null;
    android.util.SparseArray<android.os.Parcelable> mStateArray = null;
    java.lang.Runnable mExecCommit = new java.lang.Runnable() { // from class: android.support.v4.app.FragmentManagerImpl.1
        @Override // java.lang.Runnable
        public void run() {
            android.support.v4.app.FragmentManagerImpl.this.execPendingActions();
        }
    };

    FragmentManagerImpl() {
    }

    static {
        HONEYCOMB = android.os.Build.VERSION.SDK_INT >= 11;
        DECELERATE_QUINT = new android.view.animation.DecelerateInterpolator(2.5f);
        DECELERATE_CUBIC = new android.view.animation.DecelerateInterpolator(1.5f);
        ACCELERATE_QUINT = new android.view.animation.AccelerateInterpolator(2.5f);
        ACCELERATE_CUBIC = new android.view.animation.AccelerateInterpolator(1.5f);
    }

    private void throwException(java.lang.RuntimeException ex) {
        android.util.Log.e(TAG, ex.getMessage());
        android.util.Log.e(TAG, "Activity state:");
        android.support.v4.util.LogWriter logw = new android.support.v4.util.LogWriter(TAG);
        java.io.PrintWriter pw = new java.io.PrintWriter(logw);
        if (this.mActivity != null) {
            try {
                this.mActivity.dump("  ", null, pw, new java.lang.String[0]);
                throw ex;
            } catch (java.lang.Exception e) {
                android.util.Log.e(TAG, "Failed dumping state", e);
                throw ex;
            }
        }
        try {
            dump("  ", null, pw, new java.lang.String[0]);
            throw ex;
        } catch (java.lang.Exception e2) {
            android.util.Log.e(TAG, "Failed dumping state", e2);
            throw ex;
        }
    }

    @Override // android.support.v4.app.FragmentManager
    public android.support.v4.app.FragmentTransaction beginTransaction() {
        return new android.support.v4.app.BackStackRecord(this);
    }

    @Override // android.support.v4.app.FragmentManager
    public boolean executePendingTransactions() {
        return execPendingActions();
    }

    @Override // android.support.v4.app.FragmentManager
    public void popBackStack() {
        enqueueAction(new java.lang.Runnable() { // from class: android.support.v4.app.FragmentManagerImpl.2
            @Override // java.lang.Runnable
            public void run() {
                android.support.v4.app.FragmentManagerImpl.this.popBackStackState(android.support.v4.app.FragmentManagerImpl.this.mActivity.mHandler, null, -1, 0);
            }
        }, false);
    }

    @Override // android.support.v4.app.FragmentManager
    public boolean popBackStackImmediate() {
        checkStateLoss();
        executePendingTransactions();
        return popBackStackState(this.mActivity.mHandler, null, -1, 0);
    }

    @Override // android.support.v4.app.FragmentManager
    public void popBackStack(final java.lang.String name, final int flags) {
        enqueueAction(new java.lang.Runnable() { // from class: android.support.v4.app.FragmentManagerImpl.3
            @Override // java.lang.Runnable
            public void run() {
                android.support.v4.app.FragmentManagerImpl.this.popBackStackState(android.support.v4.app.FragmentManagerImpl.this.mActivity.mHandler, name, -1, flags);
            }
        }, false);
    }

    @Override // android.support.v4.app.FragmentManager
    public boolean popBackStackImmediate(java.lang.String name, int flags) {
        checkStateLoss();
        executePendingTransactions();
        return popBackStackState(this.mActivity.mHandler, name, -1, flags);
    }

    @Override // android.support.v4.app.FragmentManager
    public void popBackStack(final int id, final int flags) {
        if (id < 0) {
            throw new java.lang.IllegalArgumentException("Bad id: " + id);
        }
        enqueueAction(new java.lang.Runnable() { // from class: android.support.v4.app.FragmentManagerImpl.4
            @Override // java.lang.Runnable
            public void run() {
                android.support.v4.app.FragmentManagerImpl.this.popBackStackState(android.support.v4.app.FragmentManagerImpl.this.mActivity.mHandler, null, id, flags);
            }
        }, false);
    }

    @Override // android.support.v4.app.FragmentManager
    public boolean popBackStackImmediate(int id, int flags) {
        checkStateLoss();
        executePendingTransactions();
        if (id < 0) {
            throw new java.lang.IllegalArgumentException("Bad id: " + id);
        }
        return popBackStackState(this.mActivity.mHandler, null, id, flags);
    }

    @Override // android.support.v4.app.FragmentManager
    public int getBackStackEntryCount() {
        if (this.mBackStack != null) {
            return this.mBackStack.size();
        }
        return 0;
    }

    @Override // android.support.v4.app.FragmentManager
    public android.support.v4.app.FragmentManager.BackStackEntry getBackStackEntryAt(int index) {
        return this.mBackStack.get(index);
    }

    @Override // android.support.v4.app.FragmentManager
    public void addOnBackStackChangedListener(android.support.v4.app.FragmentManager.OnBackStackChangedListener listener) {
        if (this.mBackStackChangeListeners == null) {
            this.mBackStackChangeListeners = new java.util.ArrayList<>();
        }
        this.mBackStackChangeListeners.add(listener);
    }

    @Override // android.support.v4.app.FragmentManager
    public void removeOnBackStackChangedListener(android.support.v4.app.FragmentManager.OnBackStackChangedListener listener) {
        if (this.mBackStackChangeListeners != null) {
            this.mBackStackChangeListeners.remove(listener);
        }
    }

    @Override // android.support.v4.app.FragmentManager
    public void putFragment(android.os.Bundle bundle, java.lang.String key, android.support.v4.app.Fragment fragment) {
        if (fragment.mIndex < 0) {
            throwException(new java.lang.IllegalStateException("Fragment " + fragment + " is not currently in the FragmentManager"));
        }
        bundle.putInt(key, fragment.mIndex);
    }

    @Override // android.support.v4.app.FragmentManager
    public android.support.v4.app.Fragment getFragment(android.os.Bundle bundle, java.lang.String key) {
        int index = bundle.getInt(key, -1);
        if (index == -1) {
            return null;
        }
        if (index >= this.mActive.size()) {
            throwException(new java.lang.IllegalStateException("Fragement no longer exists for key " + key + ": index " + index));
        }
        android.support.v4.app.Fragment f = this.mActive.get(index);
        if (f == null) {
            throwException(new java.lang.IllegalStateException("Fragement no longer exists for key " + key + ": index " + index));
            return f;
        }
        return f;
    }

    @Override // android.support.v4.app.FragmentManager
    public java.util.List<android.support.v4.app.Fragment> getFragments() {
        return this.mActive;
    }

    @Override // android.support.v4.app.FragmentManager
    public android.support.v4.app.Fragment.SavedState saveFragmentInstanceState(android.support.v4.app.Fragment fragment) {
        android.os.Bundle result;
        if (fragment.mIndex < 0) {
            throwException(new java.lang.IllegalStateException("Fragment " + fragment + " is not currently in the FragmentManager"));
        }
        if (fragment.mState <= 0 || (result = saveFragmentBasicState(fragment)) == null) {
            return null;
        }
        return new android.support.v4.app.Fragment.SavedState(result);
    }

    public java.lang.String toString() {
        java.lang.StringBuilder sb = new java.lang.StringBuilder(128);
        sb.append("FragmentManager{");
        sb.append(java.lang.Integer.toHexString(java.lang.System.identityHashCode(this)));
        sb.append(" in ");
        if (this.mParent != null) {
            android.support.v4.util.DebugUtils.buildShortClassTag(this.mParent, sb);
        } else {
            android.support.v4.util.DebugUtils.buildShortClassTag(this.mActivity, sb);
        }
        sb.append("}}");
        return sb.toString();
    }

    @Override // android.support.v4.app.FragmentManager
    public void dump(java.lang.String prefix, java.io.FileDescriptor fd, java.io.PrintWriter writer, java.lang.String[] args) {
        int N;
        int N2;
        int N3;
        int N4;
        int N5;
        int N6;
        java.lang.String innerPrefix = prefix + "    ";
        if (this.mActive != null && (N6 = this.mActive.size()) > 0) {
            writer.print(prefix);
            writer.print("Active Fragments in ");
            writer.print(java.lang.Integer.toHexString(java.lang.System.identityHashCode(this)));
            writer.println(":");
            for (int i = 0; i < N6; i++) {
                android.support.v4.app.Fragment f = this.mActive.get(i);
                writer.print(prefix);
                writer.print("  #");
                writer.print(i);
                writer.print(": ");
                writer.println(f);
                if (f != null) {
                    f.dump(innerPrefix, fd, writer, args);
                }
            }
        }
        if (this.mAdded != null && (N5 = this.mAdded.size()) > 0) {
            writer.print(prefix);
            writer.println("Added Fragments:");
            for (int i2 = 0; i2 < N5; i2++) {
                android.support.v4.app.Fragment f2 = this.mAdded.get(i2);
                writer.print(prefix);
                writer.print("  #");
                writer.print(i2);
                writer.print(": ");
                writer.println(f2.toString());
            }
        }
        if (this.mCreatedMenus != null && (N4 = this.mCreatedMenus.size()) > 0) {
            writer.print(prefix);
            writer.println("Fragments Created Menus:");
            for (int i3 = 0; i3 < N4; i3++) {
                android.support.v4.app.Fragment f3 = this.mCreatedMenus.get(i3);
                writer.print(prefix);
                writer.print("  #");
                writer.print(i3);
                writer.print(": ");
                writer.println(f3.toString());
            }
        }
        if (this.mBackStack != null && (N3 = this.mBackStack.size()) > 0) {
            writer.print(prefix);
            writer.println("Back Stack:");
            for (int i4 = 0; i4 < N3; i4++) {
                android.support.v4.app.BackStackRecord bs = this.mBackStack.get(i4);
                writer.print(prefix);
                writer.print("  #");
                writer.print(i4);
                writer.print(": ");
                writer.println(bs.toString());
                bs.dump(innerPrefix, fd, writer, args);
            }
        }
        synchronized (this) {
            if (this.mBackStackIndices != null && (N2 = this.mBackStackIndices.size()) > 0) {
                writer.print(prefix);
                writer.println("Back Stack Indices:");
                for (int i5 = 0; i5 < N2; i5++) {
                    android.support.v4.app.BackStackRecord bs2 = this.mBackStackIndices.get(i5);
                    writer.print(prefix);
                    writer.print("  #");
                    writer.print(i5);
                    writer.print(": ");
                    writer.println(bs2);
                }
            }
            if (this.mAvailBackStackIndices != null && this.mAvailBackStackIndices.size() > 0) {
                writer.print(prefix);
                writer.print("mAvailBackStackIndices: ");
                writer.println(java.util.Arrays.toString(this.mAvailBackStackIndices.toArray()));
            }
        }
        if (this.mPendingActions != null && (N = this.mPendingActions.size()) > 0) {
            writer.print(prefix);
            writer.println("Pending Actions:");
            for (int i6 = 0; i6 < N; i6++) {
                java.lang.Runnable r = this.mPendingActions.get(i6);
                writer.print(prefix);
                writer.print("  #");
                writer.print(i6);
                writer.print(": ");
                writer.println(r);
            }
        }
        writer.print(prefix);
        writer.println("FragmentManager misc state:");
        writer.print(prefix);
        writer.print("  mActivity=");
        writer.println(this.mActivity);
        writer.print(prefix);
        writer.print("  mContainer=");
        writer.println(this.mContainer);
        if (this.mParent != null) {
            writer.print(prefix);
            writer.print("  mParent=");
            writer.println(this.mParent);
        }
        writer.print(prefix);
        writer.print("  mCurState=");
        writer.print(this.mCurState);
        writer.print(" mStateSaved=");
        writer.print(this.mStateSaved);
        writer.print(" mDestroyed=");
        writer.println(this.mDestroyed);
        if (this.mNeedMenuInvalidate) {
            writer.print(prefix);
            writer.print("  mNeedMenuInvalidate=");
            writer.println(this.mNeedMenuInvalidate);
        }
        if (this.mNoTransactionsBecause != null) {
            writer.print(prefix);
            writer.print("  mNoTransactionsBecause=");
            writer.println(this.mNoTransactionsBecause);
        }
        if (this.mAvailIndices != null && this.mAvailIndices.size() > 0) {
            writer.print(prefix);
            writer.print("  mAvailIndices: ");
            writer.println(java.util.Arrays.toString(this.mAvailIndices.toArray()));
        }
    }

    static android.view.animation.Animation makeOpenCloseAnimation(android.content.Context context, float startScale, float endScale, float startAlpha, float endAlpha) {
        android.view.animation.AnimationSet set = new android.view.animation.AnimationSet(false);
        android.view.animation.ScaleAnimation scale = new android.view.animation.ScaleAnimation(startScale, endScale, startScale, endScale, 1, 0.5f, 1, 0.5f);
        scale.setInterpolator(DECELERATE_QUINT);
        scale.setDuration(220L);
        set.addAnimation(scale);
        android.view.animation.AlphaAnimation alpha = new android.view.animation.AlphaAnimation(startAlpha, endAlpha);
        alpha.setInterpolator(DECELERATE_CUBIC);
        alpha.setDuration(220L);
        set.addAnimation(alpha);
        return set;
    }

    static android.view.animation.Animation makeFadeAnimation(android.content.Context context, float start, float end) {
        android.view.animation.AlphaAnimation anim = new android.view.animation.AlphaAnimation(start, end);
        anim.setInterpolator(DECELERATE_CUBIC);
        anim.setDuration(220L);
        return anim;
    }

    android.view.animation.Animation loadAnimation(android.support.v4.app.Fragment fragment, int transit, boolean enter, int transitionStyle) throws android.content.res.Resources.NotFoundException {
        int styleIndex;
        android.view.animation.Animation anim;
        android.view.animation.Animation animObj = fragment.onCreateAnimation(transit, enter, fragment.mNextAnim);
        if (animObj == null) {
            if (fragment.mNextAnim != 0 && (anim = android.view.animation.AnimationUtils.loadAnimation(this.mActivity, fragment.mNextAnim)) != null) {
                return anim;
            }
            if (transit != 0 && (styleIndex = transitToStyleIndex(transit, enter)) >= 0) {
                switch (styleIndex) {
                    case 1:
                        return makeOpenCloseAnimation(this.mActivity, 1.125f, 1.0f, 0.0f, 1.0f);
                    case 2:
                        return makeOpenCloseAnimation(this.mActivity, 1.0f, 0.975f, 1.0f, 0.0f);
                    case 3:
                        return makeOpenCloseAnimation(this.mActivity, 0.975f, 1.0f, 0.0f, 1.0f);
                    case 4:
                        return makeOpenCloseAnimation(this.mActivity, 1.0f, 1.075f, 1.0f, 0.0f);
                    case 5:
                        return makeFadeAnimation(this.mActivity, 0.0f, 1.0f);
                    case 6:
                        return makeFadeAnimation(this.mActivity, 1.0f, 0.0f);
                    default:
                        if (transitionStyle == 0 && this.mActivity.getWindow() != null) {
                            transitionStyle = this.mActivity.getWindow().getAttributes().windowAnimations;
                        }
                        return transitionStyle == 0 ? null : null;
                }
            }
            return null;
        }
        return animObj;
    }

    public void performPendingDeferredStart(android.support.v4.app.Fragment f) throws android.content.res.Resources.NotFoundException {
        if (f.mDeferStart) {
            if (this.mExecutingActions) {
                this.mHavePendingDeferredStart = true;
            } else {
                f.mDeferStart = false;
                moveToState(f, this.mCurState, 0, 0, false);
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:33:0x0046 A[FALL_THROUGH, PHI: r12
  0x0046: PHI (r12v6 'newState' int) = 
  (r12v4 'newState' int)
  (r12v4 'newState' int)
  (r12v4 'newState' int)
  (r12v4 'newState' int)
  (r12v4 'newState' int)
  (r12v4 'newState' int)
  (r12v5 'newState' int)
  (r12v4 'newState' int)
  (r12v7 'newState' int)
  (r12v7 'newState' int)
 binds: [B:114:0x0255, B:116:0x0259, B:119:0x025f, B:181:0x03a2, B:185:0x03ad, B:184:0x03a8, B:127:0x0275, B:32:0x0043, B:106:0x021e, B:110:0x023c] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    void moveToState(final android.support.v4.app.Fragment f, int newState, int transit, int transitionStyle, boolean keepActive) throws android.content.res.Resources.NotFoundException {
        if ((!f.mAdded || f.mDetached) && newState > 1) {
            newState = 1;
        }
        if (f.mRemoving && newState > f.mState) {
            newState = f.mState;
        }
        if (f.mDeferStart && f.mState < 4 && newState > 3) {
            newState = 3;
        }
        if (f.mState < newState) {
            if (!f.mFromLayout || f.mInLayout) {
                if (f.mAnimatingAway != null) {
                    f.mAnimatingAway = null;
                    moveToState(f, f.mStateAfterAnimating, 0, 0, true);
                }
                switch (f.mState) {
                    case 0:
                        if (DEBUG) {
                            android.util.Log.v(TAG, "moveto CREATED: " + f);
                        }
                        if (f.mSavedFragmentState != null) {
                            f.mSavedViewState = f.mSavedFragmentState.getSparseParcelableArray(VIEW_STATE_TAG);
                            f.mTarget = getFragment(f.mSavedFragmentState, TARGET_STATE_TAG);
                            if (f.mTarget != null) {
                                f.mTargetRequestCode = f.mSavedFragmentState.getInt(TARGET_REQUEST_CODE_STATE_TAG, 0);
                            }
                            f.mUserVisibleHint = f.mSavedFragmentState.getBoolean(USER_VISIBLE_HINT_TAG, true);
                            if (!f.mUserVisibleHint) {
                                f.mDeferStart = true;
                                if (newState > 3) {
                                    newState = 3;
                                }
                            }
                        }
                        f.mActivity = this.mActivity;
                        f.mParentFragment = this.mParent;
                        f.mFragmentManager = this.mParent != null ? this.mParent.mChildFragmentManager : this.mActivity.mFragments;
                        f.mCalled = false;
                        f.onAttach(this.mActivity);
                        if (!f.mCalled) {
                            throw new android.support.v4.app.SuperNotCalledException("Fragment " + f + " did not call through to super.onAttach()");
                        }
                        if (f.mParentFragment == null) {
                            this.mActivity.onAttachFragment(f);
                        }
                        if (!f.mRetaining) {
                            f.performCreate(f.mSavedFragmentState);
                        }
                        f.mRetaining = false;
                        if (f.mFromLayout) {
                            f.mView = f.performCreateView(f.getLayoutInflater(f.mSavedFragmentState), null, f.mSavedFragmentState);
                            if (f.mView != null) {
                                f.mInnerView = f.mView;
                                f.mView = android.support.v4.app.NoSaveStateFrameLayout.wrap(f.mView);
                                if (f.mHidden) {
                                    f.mView.setVisibility(8);
                                }
                                f.onViewCreated(f.mView, f.mSavedFragmentState);
                            } else {
                                f.mInnerView = null;
                            }
                        }
                    case 1:
                        if (newState > 1) {
                            if (DEBUG) {
                                android.util.Log.v(TAG, "moveto ACTIVITY_CREATED: " + f);
                            }
                            if (!f.mFromLayout) {
                                android.view.ViewGroup container = null;
                                if (f.mContainerId != 0 && (container = (android.view.ViewGroup) this.mContainer.findViewById(f.mContainerId)) == null && !f.mRestored) {
                                    throwException(new java.lang.IllegalArgumentException("No view found for id 0x" + java.lang.Integer.toHexString(f.mContainerId) + " (" + f.getResources().getResourceName(f.mContainerId) + ") for fragment " + f));
                                }
                                f.mContainer = container;
                                f.mView = f.performCreateView(f.getLayoutInflater(f.mSavedFragmentState), container, f.mSavedFragmentState);
                                if (f.mView != null) {
                                    f.mInnerView = f.mView;
                                    f.mView = android.support.v4.app.NoSaveStateFrameLayout.wrap(f.mView);
                                    if (container != null) {
                                        android.view.animation.Animation anim = loadAnimation(f, transit, true, transitionStyle);
                                        if (anim != null) {
                                            f.mView.startAnimation(anim);
                                        }
                                        container.addView(f.mView);
                                    }
                                    if (f.mHidden) {
                                        f.mView.setVisibility(8);
                                    }
                                    f.onViewCreated(f.mView, f.mSavedFragmentState);
                                } else {
                                    f.mInnerView = null;
                                }
                            }
                            f.performActivityCreated(f.mSavedFragmentState);
                            if (f.mView != null) {
                                f.restoreViewState(f.mSavedFragmentState);
                            }
                            f.mSavedFragmentState = null;
                        }
                        break;
                    case 2:
                    case 3:
                        if (newState > 3) {
                            if (DEBUG) {
                                android.util.Log.v(TAG, "moveto STARTED: " + f);
                            }
                            f.performStart();
                        }
                    case 4:
                        if (newState > 4) {
                            if (DEBUG) {
                                android.util.Log.v(TAG, "moveto RESUMED: " + f);
                            }
                            f.mResumed = true;
                            f.performResume();
                            f.mSavedFragmentState = null;
                            f.mSavedViewState = null;
                        }
                    default:
                        f.mState = newState;
                }
            } else {
                return;
            }
        } else if (f.mState > newState) {
            switch (f.mState) {
                case 5:
                    if (newState < 5) {
                        if (DEBUG) {
                            android.util.Log.v(TAG, "movefrom RESUMED: " + f);
                        }
                        f.performPause();
                        f.mResumed = false;
                    }
                case 4:
                    if (newState < 4) {
                        if (DEBUG) {
                            android.util.Log.v(TAG, "movefrom STARTED: " + f);
                        }
                        f.performStop();
                    }
                case 3:
                    if (newState < 3) {
                        if (DEBUG) {
                            android.util.Log.v(TAG, "movefrom STOPPED: " + f);
                        }
                        f.performReallyStop();
                    }
                case 2:
                    if (newState < 2) {
                        if (DEBUG) {
                            android.util.Log.v(TAG, "movefrom ACTIVITY_CREATED: " + f);
                        }
                        if (f.mView != null && !this.mActivity.isFinishing() && f.mSavedViewState == null) {
                            saveFragmentViewState(f);
                        }
                        f.performDestroyView();
                        if (f.mView != null && f.mContainer != null) {
                            android.view.animation.Animation anim2 = null;
                            if (this.mCurState > 0 && !this.mDestroyed) {
                                anim2 = loadAnimation(f, transit, false, transitionStyle);
                            }
                            if (anim2 != null) {
                                f.mAnimatingAway = f.mView;
                                f.mStateAfterAnimating = newState;
                                anim2.setAnimationListener(new android.view.animation.Animation.AnimationListener() { // from class: android.support.v4.app.FragmentManagerImpl.5
                                    @Override // android.view.animation.Animation.AnimationListener
                                    public void onAnimationEnd(android.view.animation.Animation animation) throws android.content.res.Resources.NotFoundException {
                                        if (f.mAnimatingAway != null) {
                                            f.mAnimatingAway = null;
                                            android.support.v4.app.FragmentManagerImpl.this.moveToState(f, f.mStateAfterAnimating, 0, 0, false);
                                        }
                                    }

                                    @Override // android.view.animation.Animation.AnimationListener
                                    public void onAnimationRepeat(android.view.animation.Animation animation) {
                                    }

                                    @Override // android.view.animation.Animation.AnimationListener
                                    public void onAnimationStart(android.view.animation.Animation animation) {
                                    }
                                });
                                f.mView.startAnimation(anim2);
                            }
                            f.mContainer.removeView(f.mView);
                        }
                        f.mContainer = null;
                        f.mView = null;
                        f.mInnerView = null;
                    }
                    break;
                case 1:
                    if (newState < 1) {
                        if (this.mDestroyed && f.mAnimatingAway != null) {
                            android.view.View v = f.mAnimatingAway;
                            f.mAnimatingAway = null;
                            v.clearAnimation();
                        }
                        if (f.mAnimatingAway != null) {
                            f.mStateAfterAnimating = newState;
                            newState = 1;
                        } else {
                            if (DEBUG) {
                                android.util.Log.v(TAG, "movefrom CREATED: " + f);
                            }
                            if (!f.mRetaining) {
                                f.performDestroy();
                            }
                            f.mCalled = false;
                            f.onDetach();
                            if (!f.mCalled) {
                                throw new android.support.v4.app.SuperNotCalledException("Fragment " + f + " did not call through to super.onDetach()");
                            }
                            if (!keepActive) {
                                if (!f.mRetaining) {
                                    makeInactive(f);
                                } else {
                                    f.mActivity = null;
                                    f.mFragmentManager = null;
                                }
                            }
                        }
                    }
                    break;
            }
        }
        f.mState = newState;
    }

    void moveToState(android.support.v4.app.Fragment f) {
        moveToState(f, this.mCurState, 0, 0, false);
    }

    void moveToState(int newState, boolean always) {
        moveToState(newState, 0, 0, always);
    }

    void moveToState(int newState, int transit, int transitStyle, boolean always) {
        if (this.mActivity == null && newState != 0) {
            throw new java.lang.IllegalStateException("No activity");
        }
        if (always || this.mCurState != newState) {
            this.mCurState = newState;
            if (this.mActive != null) {
                boolean loadersRunning = false;
                for (int i = 0; i < this.mActive.size(); i++) {
                    android.support.v4.app.Fragment f = this.mActive.get(i);
                    if (f != null) {
                        moveToState(f, newState, transit, transitStyle, false);
                        if (f.mLoaderManager != null) {
                            loadersRunning |= f.mLoaderManager.hasRunningLoaders();
                        }
                    }
                }
                if (!loadersRunning) {
                    startPendingDeferredFragments();
                }
                if (this.mNeedMenuInvalidate && this.mActivity != null && this.mCurState == 5) {
                    this.mActivity.supportInvalidateOptionsMenu();
                    this.mNeedMenuInvalidate = false;
                }
            }
        }
    }

    void startPendingDeferredFragments() throws android.content.res.Resources.NotFoundException {
        if (this.mActive != null) {
            for (int i = 0; i < this.mActive.size(); i++) {
                android.support.v4.app.Fragment f = this.mActive.get(i);
                if (f != null) {
                    performPendingDeferredStart(f);
                }
            }
        }
    }

    void makeActive(android.support.v4.app.Fragment f) {
        if (f.mIndex < 0) {
            if (this.mAvailIndices == null || this.mAvailIndices.size() <= 0) {
                if (this.mActive == null) {
                    this.mActive = new java.util.ArrayList<>();
                }
                f.setIndex(this.mActive.size(), this.mParent);
                this.mActive.add(f);
            } else {
                f.setIndex(this.mAvailIndices.remove(this.mAvailIndices.size() - 1).intValue(), this.mParent);
                this.mActive.set(f.mIndex, f);
            }
            if (DEBUG) {
                android.util.Log.v(TAG, "Allocated fragment index " + f);
            }
        }
    }

    void makeInactive(android.support.v4.app.Fragment f) {
        if (f.mIndex >= 0) {
            if (DEBUG) {
                android.util.Log.v(TAG, "Freeing fragment index " + f);
            }
            this.mActive.set(f.mIndex, null);
            if (this.mAvailIndices == null) {
                this.mAvailIndices = new java.util.ArrayList<>();
            }
            this.mAvailIndices.add(java.lang.Integer.valueOf(f.mIndex));
            this.mActivity.invalidateSupportFragment(f.mWho);
            f.initState();
        }
    }

    public void addFragment(android.support.v4.app.Fragment fragment, boolean moveToStateNow) {
        if (this.mAdded == null) {
            this.mAdded = new java.util.ArrayList<>();
        }
        if (DEBUG) {
            android.util.Log.v(TAG, "add: " + fragment);
        }
        makeActive(fragment);
        if (!fragment.mDetached) {
            if (this.mAdded.contains(fragment)) {
                throw new java.lang.IllegalStateException("Fragment already added: " + fragment);
            }
            this.mAdded.add(fragment);
            fragment.mAdded = true;
            fragment.mRemoving = false;
            if (fragment.mHasMenu && fragment.mMenuVisible) {
                this.mNeedMenuInvalidate = true;
            }
            if (moveToStateNow) {
                moveToState(fragment);
            }
        }
    }

    public void removeFragment(android.support.v4.app.Fragment fragment, int transition, int transitionStyle) {
        if (DEBUG) {
            android.util.Log.v(TAG, "remove: " + fragment + " nesting=" + fragment.mBackStackNesting);
        }
        boolean inactive = !fragment.isInBackStack();
        if (!fragment.mDetached || inactive) {
            if (this.mAdded != null) {
                this.mAdded.remove(fragment);
            }
            if (fragment.mHasMenu && fragment.mMenuVisible) {
                this.mNeedMenuInvalidate = true;
            }
            fragment.mAdded = false;
            fragment.mRemoving = true;
            moveToState(fragment, inactive ? 0 : 1, transition, transitionStyle, false);
        }
    }

    public void hideFragment(android.support.v4.app.Fragment fragment, int transition, int transitionStyle) {
        if (DEBUG) {
            android.util.Log.v(TAG, "hide: " + fragment);
        }
        if (!fragment.mHidden) {
            fragment.mHidden = true;
            if (fragment.mView != null) {
                android.view.animation.Animation anim = loadAnimation(fragment, transition, false, transitionStyle);
                if (anim != null) {
                    fragment.mView.startAnimation(anim);
                }
                fragment.mView.setVisibility(8);
            }
            if (fragment.mAdded && fragment.mHasMenu && fragment.mMenuVisible) {
                this.mNeedMenuInvalidate = true;
            }
            fragment.onHiddenChanged(true);
        }
    }

    public void showFragment(android.support.v4.app.Fragment fragment, int transition, int transitionStyle) {
        if (DEBUG) {
            android.util.Log.v(TAG, "show: " + fragment);
        }
        if (fragment.mHidden) {
            fragment.mHidden = false;
            if (fragment.mView != null) {
                android.view.animation.Animation anim = loadAnimation(fragment, transition, true, transitionStyle);
                if (anim != null) {
                    fragment.mView.startAnimation(anim);
                }
                fragment.mView.setVisibility(0);
            }
            if (fragment.mAdded && fragment.mHasMenu && fragment.mMenuVisible) {
                this.mNeedMenuInvalidate = true;
            }
            fragment.onHiddenChanged(false);
        }
    }

    public void detachFragment(android.support.v4.app.Fragment fragment, int transition, int transitionStyle) {
        if (DEBUG) {
            android.util.Log.v(TAG, "detach: " + fragment);
        }
        if (!fragment.mDetached) {
            fragment.mDetached = true;
            if (fragment.mAdded) {
                if (this.mAdded != null) {
                    if (DEBUG) {
                        android.util.Log.v(TAG, "remove from detach: " + fragment);
                    }
                    this.mAdded.remove(fragment);
                }
                if (fragment.mHasMenu && fragment.mMenuVisible) {
                    this.mNeedMenuInvalidate = true;
                }
                fragment.mAdded = false;
                moveToState(fragment, 1, transition, transitionStyle, false);
            }
        }
    }

    public void attachFragment(android.support.v4.app.Fragment fragment, int transition, int transitionStyle) {
        if (DEBUG) {
            android.util.Log.v(TAG, "attach: " + fragment);
        }
        if (fragment.mDetached) {
            fragment.mDetached = false;
            if (!fragment.mAdded) {
                if (this.mAdded == null) {
                    this.mAdded = new java.util.ArrayList<>();
                }
                if (this.mAdded.contains(fragment)) {
                    throw new java.lang.IllegalStateException("Fragment already added: " + fragment);
                }
                if (DEBUG) {
                    android.util.Log.v(TAG, "add from attach: " + fragment);
                }
                this.mAdded.add(fragment);
                fragment.mAdded = true;
                if (fragment.mHasMenu && fragment.mMenuVisible) {
                    this.mNeedMenuInvalidate = true;
                }
                moveToState(fragment, this.mCurState, transition, transitionStyle, false);
            }
        }
    }

    @Override // android.support.v4.app.FragmentManager
    public android.support.v4.app.Fragment findFragmentById(int id) {
        if (this.mAdded != null) {
            for (int i = this.mAdded.size() - 1; i >= 0; i--) {
                android.support.v4.app.Fragment f = this.mAdded.get(i);
                if (f != null && f.mFragmentId == id) {
                    return f;
                }
            }
        }
        if (this.mActive != null) {
            for (int i2 = this.mActive.size() - 1; i2 >= 0; i2--) {
                android.support.v4.app.Fragment f2 = this.mActive.get(i2);
                if (f2 != null && f2.mFragmentId == id) {
                    return f2;
                }
            }
        }
        return null;
    }

    @Override // android.support.v4.app.FragmentManager
    public android.support.v4.app.Fragment findFragmentByTag(java.lang.String tag) {
        if (this.mAdded != null && tag != null) {
            for (int i = this.mAdded.size() - 1; i >= 0; i--) {
                android.support.v4.app.Fragment f = this.mAdded.get(i);
                if (f != null && tag.equals(f.mTag)) {
                    return f;
                }
            }
        }
        if (this.mActive != null && tag != null) {
            for (int i2 = this.mActive.size() - 1; i2 >= 0; i2--) {
                android.support.v4.app.Fragment f2 = this.mActive.get(i2);
                if (f2 != null && tag.equals(f2.mTag)) {
                    return f2;
                }
            }
        }
        return null;
    }

    public android.support.v4.app.Fragment findFragmentByWho(java.lang.String who) {
        android.support.v4.app.Fragment f;
        if (this.mActive != null && who != null) {
            for (int i = this.mActive.size() - 1; i >= 0; i--) {
                android.support.v4.app.Fragment f2 = this.mActive.get(i);
                if (f2 != null && (f = f2.findFragmentByWho(who)) != null) {
                    return f;
                }
            }
        }
        return null;
    }

    private void checkStateLoss() {
        if (this.mStateSaved) {
            throw new java.lang.IllegalStateException("Can not perform this action after onSaveInstanceState");
        }
        if (this.mNoTransactionsBecause != null) {
            throw new java.lang.IllegalStateException("Can not perform this action inside of " + this.mNoTransactionsBecause);
        }
    }

    public void enqueueAction(java.lang.Runnable action, boolean allowStateLoss) {
        if (!allowStateLoss) {
            checkStateLoss();
        }
        synchronized (this) {
            if (this.mDestroyed || this.mActivity == null) {
                throw new java.lang.IllegalStateException("Activity has been destroyed");
            }
            if (this.mPendingActions == null) {
                this.mPendingActions = new java.util.ArrayList<>();
            }
            this.mPendingActions.add(action);
            if (this.mPendingActions.size() == 1) {
                this.mActivity.mHandler.removeCallbacks(this.mExecCommit);
                this.mActivity.mHandler.post(this.mExecCommit);
            }
        }
    }

    public int allocBackStackIndex(android.support.v4.app.BackStackRecord bse) {
        synchronized (this) {
            if (this.mAvailBackStackIndices == null || this.mAvailBackStackIndices.size() <= 0) {
                if (this.mBackStackIndices == null) {
                    this.mBackStackIndices = new java.util.ArrayList<>();
                }
                int index = this.mBackStackIndices.size();
                if (DEBUG) {
                    android.util.Log.v(TAG, "Setting back stack index " + index + " to " + bse);
                }
                this.mBackStackIndices.add(bse);
                return index;
            }
            int index2 = this.mAvailBackStackIndices.remove(this.mAvailBackStackIndices.size() - 1).intValue();
            if (DEBUG) {
                android.util.Log.v(TAG, "Adding back stack index " + index2 + " with " + bse);
            }
            this.mBackStackIndices.set(index2, bse);
            return index2;
        }
    }

    public void setBackStackIndex(int index, android.support.v4.app.BackStackRecord bse) {
        synchronized (this) {
            if (this.mBackStackIndices == null) {
                this.mBackStackIndices = new java.util.ArrayList<>();
            }
            int N = this.mBackStackIndices.size();
            if (index < N) {
                if (DEBUG) {
                    android.util.Log.v(TAG, "Setting back stack index " + index + " to " + bse);
                }
                this.mBackStackIndices.set(index, bse);
            } else {
                while (N < index) {
                    this.mBackStackIndices.add(null);
                    if (this.mAvailBackStackIndices == null) {
                        this.mAvailBackStackIndices = new java.util.ArrayList<>();
                    }
                    if (DEBUG) {
                        android.util.Log.v(TAG, "Adding available back stack index " + N);
                    }
                    this.mAvailBackStackIndices.add(java.lang.Integer.valueOf(N));
                    N++;
                }
                if (DEBUG) {
                    android.util.Log.v(TAG, "Adding back stack index " + index + " with " + bse);
                }
                this.mBackStackIndices.add(bse);
            }
        }
    }

    public void freeBackStackIndex(int index) {
        synchronized (this) {
            this.mBackStackIndices.set(index, null);
            if (this.mAvailBackStackIndices == null) {
                this.mAvailBackStackIndices = new java.util.ArrayList<>();
            }
            if (DEBUG) {
                android.util.Log.v(TAG, "Freeing back stack index " + index);
            }
            this.mAvailBackStackIndices.add(java.lang.Integer.valueOf(index));
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:35:0x0081, code lost:
    
        r8.mExecutingActions = true;
        r2 = 0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:36:0x0085, code lost:
    
        if (r2 >= r4) goto L49;
     */
    /* JADX WARN: Code restructure failed: missing block: B:37:0x0087, code lost:
    
        r8.mTmpActions[r2].run();
        r8.mTmpActions[r2] = null;
        r2 = r2 + 1;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public boolean execPendingActions() {
        if (this.mExecutingActions) {
            throw new java.lang.IllegalStateException("Recursive entry to executePendingTransactions");
        }
        if (android.os.Looper.myLooper() != this.mActivity.mHandler.getLooper()) {
            throw new java.lang.IllegalStateException("Must be called from main thread of process");
        }
        boolean didSomething = false;
        while (true) {
            synchronized (this) {
                if (this.mPendingActions == null || this.mPendingActions.size() == 0) {
                    break;
                }
                int numActions = this.mPendingActions.size();
                if (this.mTmpActions == null || this.mTmpActions.length < numActions) {
                    this.mTmpActions = new java.lang.Runnable[numActions];
                }
                this.mPendingActions.toArray(this.mTmpActions);
                this.mPendingActions.clear();
                this.mActivity.mHandler.removeCallbacks(this.mExecCommit);
            }
            this.mExecutingActions = false;
            didSomething = true;
        }
        if (this.mHavePendingDeferredStart) {
            boolean loadersRunning = false;
            for (int i = 0; i < this.mActive.size(); i++) {
                android.support.v4.app.Fragment f = this.mActive.get(i);
                if (f != null && f.mLoaderManager != null) {
                    loadersRunning |= f.mLoaderManager.hasRunningLoaders();
                }
            }
            if (!loadersRunning) {
                this.mHavePendingDeferredStart = false;
                startPendingDeferredFragments();
            }
        }
        return didSomething;
    }

    void reportBackStackChanged() {
        if (this.mBackStackChangeListeners != null) {
            for (int i = 0; i < this.mBackStackChangeListeners.size(); i++) {
                this.mBackStackChangeListeners.get(i).onBackStackChanged();
            }
        }
    }

    void addBackStackState(android.support.v4.app.BackStackRecord state) {
        if (this.mBackStack == null) {
            this.mBackStack = new java.util.ArrayList<>();
        }
        this.mBackStack.add(state);
        reportBackStackChanged();
    }

    boolean popBackStackState(android.os.Handler handler, java.lang.String name, int id, int flags) {
        if (this.mBackStack == null) {
            return false;
        }
        if (name == null && id < 0 && (flags & 1) == 0) {
            int last = this.mBackStack.size() - 1;
            if (last < 0) {
                return false;
            }
            this.mBackStack.remove(last).popFromBackStack(true);
            reportBackStackChanged();
        } else {
            int index = -1;
            if (name != null || id >= 0) {
                index = this.mBackStack.size() - 1;
                while (index >= 0) {
                    android.support.v4.app.BackStackRecord bss = this.mBackStack.get(index);
                    if ((name != null && name.equals(bss.getName())) || (id >= 0 && id == bss.mIndex)) {
                        break;
                    }
                    index--;
                }
                if (index < 0) {
                    return false;
                }
                if ((flags & 1) != 0) {
                    index--;
                    while (index >= 0) {
                        android.support.v4.app.BackStackRecord bss2 = this.mBackStack.get(index);
                        if ((name == null || !name.equals(bss2.getName())) && (id < 0 || id != bss2.mIndex)) {
                            break;
                        }
                        index--;
                    }
                }
            }
            if (index == this.mBackStack.size() - 1) {
                return false;
            }
            java.util.ArrayList<android.support.v4.app.BackStackRecord> states = new java.util.ArrayList<>();
            for (int i = this.mBackStack.size() - 1; i > index; i--) {
                states.add(this.mBackStack.remove(i));
            }
            int LAST = states.size() - 1;
            int i2 = 0;
            while (i2 <= LAST) {
                if (DEBUG) {
                    android.util.Log.v(TAG, "Popping back stack state: " + states.get(i2));
                }
                states.get(i2).popFromBackStack(i2 == LAST);
                i2++;
            }
            reportBackStackChanged();
        }
        return true;
    }

    java.util.ArrayList<android.support.v4.app.Fragment> retainNonConfig() {
        java.util.ArrayList<android.support.v4.app.Fragment> fragments = null;
        if (this.mActive != null) {
            for (int i = 0; i < this.mActive.size(); i++) {
                android.support.v4.app.Fragment f = this.mActive.get(i);
                if (f != null && f.mRetainInstance) {
                    if (fragments == null) {
                        fragments = new java.util.ArrayList<>();
                    }
                    fragments.add(f);
                    f.mRetaining = true;
                    f.mTargetIndex = f.mTarget != null ? f.mTarget.mIndex : -1;
                    if (DEBUG) {
                        android.util.Log.v(TAG, "retainNonConfig: keeping retained " + f);
                    }
                }
            }
        }
        return fragments;
    }

    void saveFragmentViewState(android.support.v4.app.Fragment f) {
        if (f.mInnerView != null) {
            if (this.mStateArray == null) {
                this.mStateArray = new android.util.SparseArray<>();
            } else {
                this.mStateArray.clear();
            }
            f.mInnerView.saveHierarchyState(this.mStateArray);
            if (this.mStateArray.size() > 0) {
                f.mSavedViewState = this.mStateArray;
                this.mStateArray = null;
            }
        }
    }

    android.os.Bundle saveFragmentBasicState(android.support.v4.app.Fragment f) {
        android.os.Bundle result = null;
        if (this.mStateBundle == null) {
            this.mStateBundle = new android.os.Bundle();
        }
        f.performSaveInstanceState(this.mStateBundle);
        if (!this.mStateBundle.isEmpty()) {
            result = this.mStateBundle;
            this.mStateBundle = null;
        }
        if (f.mView != null) {
            saveFragmentViewState(f);
        }
        if (f.mSavedViewState != null) {
            if (result == null) {
                result = new android.os.Bundle();
            }
            result.putSparseParcelableArray(VIEW_STATE_TAG, f.mSavedViewState);
        }
        if (!f.mUserVisibleHint) {
            if (result == null) {
                result = new android.os.Bundle();
            }
            result.putBoolean(USER_VISIBLE_HINT_TAG, f.mUserVisibleHint);
        }
        return result;
    }

    android.os.Parcelable saveAllState() {
        int N;
        int N2;
        execPendingActions();
        if (HONEYCOMB) {
            this.mStateSaved = true;
        }
        if (this.mActive == null || this.mActive.size() <= 0) {
            return null;
        }
        int N3 = this.mActive.size();
        android.support.v4.app.FragmentState[] active = new android.support.v4.app.FragmentState[N3];
        boolean haveFragments = false;
        for (int i = 0; i < N3; i++) {
            android.support.v4.app.Fragment f = this.mActive.get(i);
            if (f != null) {
                if (f.mIndex < 0) {
                    throwException(new java.lang.IllegalStateException("Failure saving state: active " + f + " has cleared index: " + f.mIndex));
                }
                haveFragments = true;
                android.support.v4.app.FragmentState fs = new android.support.v4.app.FragmentState(f);
                active[i] = fs;
                if (f.mState > 0 && fs.mSavedFragmentState == null) {
                    fs.mSavedFragmentState = saveFragmentBasicState(f);
                    if (f.mTarget != null) {
                        if (f.mTarget.mIndex < 0) {
                            throwException(new java.lang.IllegalStateException("Failure saving state: " + f + " has target not in fragment manager: " + f.mTarget));
                        }
                        if (fs.mSavedFragmentState == null) {
                            fs.mSavedFragmentState = new android.os.Bundle();
                        }
                        putFragment(fs.mSavedFragmentState, TARGET_STATE_TAG, f.mTarget);
                        if (f.mTargetRequestCode != 0) {
                            fs.mSavedFragmentState.putInt(TARGET_REQUEST_CODE_STATE_TAG, f.mTargetRequestCode);
                        }
                    }
                } else {
                    fs.mSavedFragmentState = f.mSavedFragmentState;
                }
                if (DEBUG) {
                    android.util.Log.v(TAG, "Saved state of " + f + ": " + fs.mSavedFragmentState);
                }
            }
        }
        if (!haveFragments) {
            if (!DEBUG) {
                return null;
            }
            android.util.Log.v(TAG, "saveAllState: no fragments!");
            return null;
        }
        int[] added = null;
        android.support.v4.app.BackStackState[] backStack = null;
        if (this.mAdded != null && (N2 = this.mAdded.size()) > 0) {
            added = new int[N2];
            for (int i2 = 0; i2 < N2; i2++) {
                added[i2] = this.mAdded.get(i2).mIndex;
                if (added[i2] < 0) {
                    throwException(new java.lang.IllegalStateException("Failure saving state: active " + this.mAdded.get(i2) + " has cleared index: " + added[i2]));
                }
                if (DEBUG) {
                    android.util.Log.v(TAG, "saveAllState: adding fragment #" + i2 + ": " + this.mAdded.get(i2));
                }
            }
        }
        if (this.mBackStack != null && (N = this.mBackStack.size()) > 0) {
            backStack = new android.support.v4.app.BackStackState[N];
            for (int i3 = 0; i3 < N; i3++) {
                backStack[i3] = new android.support.v4.app.BackStackState(this, this.mBackStack.get(i3));
                if (DEBUG) {
                    android.util.Log.v(TAG, "saveAllState: adding back stack #" + i3 + ": " + this.mBackStack.get(i3));
                }
            }
        }
        android.support.v4.app.FragmentManagerState fms = new android.support.v4.app.FragmentManagerState();
        fms.mActive = active;
        fms.mAdded = added;
        fms.mBackStack = backStack;
        return fms;
    }

    void restoreAllState(android.os.Parcelable state, java.util.ArrayList<android.support.v4.app.Fragment> nonConfig) {
        if (state != null) {
            android.support.v4.app.FragmentManagerState fms = (android.support.v4.app.FragmentManagerState) state;
            if (fms.mActive != null) {
                if (nonConfig != null) {
                    for (int i = 0; i < nonConfig.size(); i++) {
                        android.support.v4.app.Fragment f = nonConfig.get(i);
                        if (DEBUG) {
                            android.util.Log.v(TAG, "restoreAllState: re-attaching retained " + f);
                        }
                        android.support.v4.app.FragmentState fs = fms.mActive[f.mIndex];
                        fs.mInstance = f;
                        f.mSavedViewState = null;
                        f.mBackStackNesting = 0;
                        f.mInLayout = false;
                        f.mAdded = false;
                        f.mTarget = null;
                        if (fs.mSavedFragmentState != null) {
                            fs.mSavedFragmentState.setClassLoader(this.mActivity.getClassLoader());
                            f.mSavedViewState = fs.mSavedFragmentState.getSparseParcelableArray(VIEW_STATE_TAG);
                        }
                    }
                }
                this.mActive = new java.util.ArrayList<>(fms.mActive.length);
                if (this.mAvailIndices != null) {
                    this.mAvailIndices.clear();
                }
                for (int i2 = 0; i2 < fms.mActive.length; i2++) {
                    android.support.v4.app.FragmentState fs2 = fms.mActive[i2];
                    if (fs2 != null) {
                        android.support.v4.app.Fragment f2 = fs2.instantiate(this.mActivity, this.mParent);
                        if (DEBUG) {
                            android.util.Log.v(TAG, "restoreAllState: active #" + i2 + ": " + f2);
                        }
                        this.mActive.add(f2);
                        fs2.mInstance = null;
                    } else {
                        this.mActive.add(null);
                        if (this.mAvailIndices == null) {
                            this.mAvailIndices = new java.util.ArrayList<>();
                        }
                        if (DEBUG) {
                            android.util.Log.v(TAG, "restoreAllState: avail #" + i2);
                        }
                        this.mAvailIndices.add(java.lang.Integer.valueOf(i2));
                    }
                }
                if (nonConfig != null) {
                    for (int i3 = 0; i3 < nonConfig.size(); i3++) {
                        android.support.v4.app.Fragment f3 = nonConfig.get(i3);
                        if (f3.mTargetIndex >= 0) {
                            if (f3.mTargetIndex < this.mActive.size()) {
                                f3.mTarget = this.mActive.get(f3.mTargetIndex);
                            } else {
                                android.util.Log.w(TAG, "Re-attaching retained fragment " + f3 + " target no longer exists: " + f3.mTargetIndex);
                                f3.mTarget = null;
                            }
                        }
                    }
                }
                if (fms.mAdded != null) {
                    this.mAdded = new java.util.ArrayList<>(fms.mAdded.length);
                    for (int i4 = 0; i4 < fms.mAdded.length; i4++) {
                        android.support.v4.app.Fragment f4 = this.mActive.get(fms.mAdded[i4]);
                        if (f4 == null) {
                            throwException(new java.lang.IllegalStateException("No instantiated fragment for index #" + fms.mAdded[i4]));
                        }
                        f4.mAdded = true;
                        if (DEBUG) {
                            android.util.Log.v(TAG, "restoreAllState: added #" + i4 + ": " + f4);
                        }
                        if (this.mAdded.contains(f4)) {
                            throw new java.lang.IllegalStateException("Already added!");
                        }
                        this.mAdded.add(f4);
                    }
                } else {
                    this.mAdded = null;
                }
                if (fms.mBackStack != null) {
                    this.mBackStack = new java.util.ArrayList<>(fms.mBackStack.length);
                    for (int i5 = 0; i5 < fms.mBackStack.length; i5++) {
                        android.support.v4.app.BackStackRecord bse = fms.mBackStack[i5].instantiate(this);
                        if (DEBUG) {
                            android.util.Log.v(TAG, "restoreAllState: back stack #" + i5 + " (index " + bse.mIndex + "): " + bse);
                            android.support.v4.util.LogWriter logw = new android.support.v4.util.LogWriter(TAG);
                            java.io.PrintWriter pw = new java.io.PrintWriter(logw);
                            bse.dump("  ", pw, false);
                        }
                        this.mBackStack.add(bse);
                        if (bse.mIndex >= 0) {
                            setBackStackIndex(bse.mIndex, bse);
                        }
                    }
                    return;
                }
                this.mBackStack = null;
            }
        }
    }

    public void attachActivity(android.support.v4.app.FragmentActivity activity, android.support.v4.app.FragmentContainer container, android.support.v4.app.Fragment parent) {
        if (this.mActivity != null) {
            throw new java.lang.IllegalStateException("Already attached");
        }
        this.mActivity = activity;
        this.mContainer = container;
        this.mParent = parent;
    }

    public void noteStateNotSaved() {
        this.mStateSaved = false;
    }

    public void dispatchCreate() {
        this.mStateSaved = false;
        moveToState(1, false);
    }

    public void dispatchActivityCreated() {
        this.mStateSaved = false;
        moveToState(2, false);
    }

    public void dispatchStart() {
        this.mStateSaved = false;
        moveToState(4, false);
    }

    public void dispatchResume() {
        this.mStateSaved = false;
        moveToState(5, false);
    }

    public void dispatchPause() {
        moveToState(4, false);
    }

    public void dispatchStop() {
        this.mStateSaved = true;
        moveToState(3, false);
    }

    public void dispatchReallyStop() {
        moveToState(2, false);
    }

    public void dispatchDestroyView() {
        moveToState(1, false);
    }

    public void dispatchDestroy() {
        this.mDestroyed = true;
        execPendingActions();
        moveToState(0, false);
        this.mActivity = null;
        this.mContainer = null;
        this.mParent = null;
    }

    public void dispatchConfigurationChanged(android.content.res.Configuration newConfig) {
        if (this.mAdded != null) {
            for (int i = 0; i < this.mAdded.size(); i++) {
                android.support.v4.app.Fragment f = this.mAdded.get(i);
                if (f != null) {
                    f.performConfigurationChanged(newConfig);
                }
            }
        }
    }

    public void dispatchLowMemory() {
        if (this.mAdded != null) {
            for (int i = 0; i < this.mAdded.size(); i++) {
                android.support.v4.app.Fragment f = this.mAdded.get(i);
                if (f != null) {
                    f.performLowMemory();
                }
            }
        }
    }

    public boolean dispatchCreateOptionsMenu(android.view.Menu menu, android.view.MenuInflater inflater) {
        boolean show = false;
        java.util.ArrayList<android.support.v4.app.Fragment> newMenus = null;
        if (this.mAdded != null) {
            for (int i = 0; i < this.mAdded.size(); i++) {
                android.support.v4.app.Fragment f = this.mAdded.get(i);
                if (f != null && f.performCreateOptionsMenu(menu, inflater)) {
                    show = true;
                    if (newMenus == null) {
                        newMenus = new java.util.ArrayList<>();
                    }
                    newMenus.add(f);
                }
            }
        }
        if (this.mCreatedMenus != null) {
            for (int i2 = 0; i2 < this.mCreatedMenus.size(); i2++) {
                android.support.v4.app.Fragment f2 = this.mCreatedMenus.get(i2);
                if (newMenus == null || !newMenus.contains(f2)) {
                    f2.onDestroyOptionsMenu();
                }
            }
        }
        this.mCreatedMenus = newMenus;
        return show;
    }

    public boolean dispatchPrepareOptionsMenu(android.view.Menu menu) {
        boolean show = false;
        if (this.mAdded != null) {
            for (int i = 0; i < this.mAdded.size(); i++) {
                android.support.v4.app.Fragment f = this.mAdded.get(i);
                if (f != null && f.performPrepareOptionsMenu(menu)) {
                    show = true;
                }
            }
        }
        return show;
    }

    public boolean dispatchOptionsItemSelected(android.view.MenuItem item) {
        if (this.mAdded != null) {
            for (int i = 0; i < this.mAdded.size(); i++) {
                android.support.v4.app.Fragment f = this.mAdded.get(i);
                if (f != null && f.performOptionsItemSelected(item)) {
                    return true;
                }
            }
        }
        return false;
    }

    public boolean dispatchContextItemSelected(android.view.MenuItem item) {
        if (this.mAdded != null) {
            for (int i = 0; i < this.mAdded.size(); i++) {
                android.support.v4.app.Fragment f = this.mAdded.get(i);
                if (f != null && f.performContextItemSelected(item)) {
                    return true;
                }
            }
        }
        return false;
    }

    public void dispatchOptionsMenuClosed(android.view.Menu menu) {
        if (this.mAdded != null) {
            for (int i = 0; i < this.mAdded.size(); i++) {
                android.support.v4.app.Fragment f = this.mAdded.get(i);
                if (f != null) {
                    f.performOptionsMenuClosed(menu);
                }
            }
        }
    }

    public static int reverseTransit(int transit) {
        switch (transit) {
            case android.support.v4.app.FragmentTransaction.TRANSIT_FRAGMENT_OPEN /* 4097 */:
                return android.support.v4.app.FragmentTransaction.TRANSIT_FRAGMENT_CLOSE;
            case android.support.v4.app.FragmentTransaction.TRANSIT_FRAGMENT_FADE /* 4099 */:
                return android.support.v4.app.FragmentTransaction.TRANSIT_FRAGMENT_FADE;
            case android.support.v4.app.FragmentTransaction.TRANSIT_FRAGMENT_CLOSE /* 8194 */:
                return android.support.v4.app.FragmentTransaction.TRANSIT_FRAGMENT_OPEN;
            default:
                return 0;
        }
    }

    public static int transitToStyleIndex(int transit, boolean enter) {
        switch (transit) {
            case android.support.v4.app.FragmentTransaction.TRANSIT_FRAGMENT_OPEN /* 4097 */:
                return enter ? 1 : 2;
            case android.support.v4.app.FragmentTransaction.TRANSIT_FRAGMENT_FADE /* 4099 */:
                return enter ? 5 : 6;
            case android.support.v4.app.FragmentTransaction.TRANSIT_FRAGMENT_CLOSE /* 8194 */:
                return enter ? 3 : 4;
            default:
                return -1;
        }
    }
}
