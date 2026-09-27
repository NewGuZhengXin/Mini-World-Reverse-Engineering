package android.support.v4.app;

/* loaded from: classes.dex */
final class BackStackRecord extends android.support.v4.app.FragmentTransaction implements android.support.v4.app.FragmentManager.BackStackEntry, java.lang.Runnable {
    static final int OP_ADD = 1;
    static final int OP_ATTACH = 7;
    static final int OP_DETACH = 6;
    static final int OP_HIDE = 4;
    static final int OP_NULL = 0;
    static final int OP_REMOVE = 3;
    static final int OP_REPLACE = 2;
    static final int OP_SHOW = 5;
    static final java.lang.String TAG = "FragmentManager";
    boolean mAddToBackStack;
    int mBreadCrumbShortTitleRes;
    java.lang.CharSequence mBreadCrumbShortTitleText;
    int mBreadCrumbTitleRes;
    java.lang.CharSequence mBreadCrumbTitleText;
    boolean mCommitted;
    int mEnterAnim;
    int mExitAnim;
    android.support.v4.app.BackStackRecord.Op mHead;
    final android.support.v4.app.FragmentManagerImpl mManager;
    java.lang.String mName;
    int mNumOp;
    int mPopEnterAnim;
    int mPopExitAnim;
    android.support.v4.app.BackStackRecord.Op mTail;
    int mTransition;
    int mTransitionStyle;
    boolean mAllowAddToBackStack = true;
    int mIndex = -1;

    static final class Op {
        int cmd;
        int enterAnim;
        int exitAnim;
        android.support.v4.app.Fragment fragment;
        android.support.v4.app.BackStackRecord.Op next;
        int popEnterAnim;
        int popExitAnim;
        android.support.v4.app.BackStackRecord.Op prev;
        java.util.ArrayList<android.support.v4.app.Fragment> removed;

        Op() {
        }
    }

    public java.lang.String toString() {
        java.lang.StringBuilder sb = new java.lang.StringBuilder(128);
        sb.append("BackStackEntry{");
        sb.append(java.lang.Integer.toHexString(java.lang.System.identityHashCode(this)));
        if (this.mIndex >= 0) {
            sb.append(" #");
            sb.append(this.mIndex);
        }
        if (this.mName != null) {
            sb.append(" ");
            sb.append(this.mName);
        }
        sb.append("}");
        return sb.toString();
    }

    public void dump(java.lang.String prefix, java.io.FileDescriptor fd, java.io.PrintWriter writer, java.lang.String[] args) {
        dump(prefix, writer, true);
    }

    public void dump(java.lang.String prefix, java.io.PrintWriter writer, boolean full) {
        java.lang.String cmdStr;
        if (full) {
            writer.print(prefix);
            writer.print("mName=");
            writer.print(this.mName);
            writer.print(" mIndex=");
            writer.print(this.mIndex);
            writer.print(" mCommitted=");
            writer.println(this.mCommitted);
            if (this.mTransition != 0) {
                writer.print(prefix);
                writer.print("mTransition=#");
                writer.print(java.lang.Integer.toHexString(this.mTransition));
                writer.print(" mTransitionStyle=#");
                writer.println(java.lang.Integer.toHexString(this.mTransitionStyle));
            }
            if (this.mEnterAnim != 0 || this.mExitAnim != 0) {
                writer.print(prefix);
                writer.print("mEnterAnim=#");
                writer.print(java.lang.Integer.toHexString(this.mEnterAnim));
                writer.print(" mExitAnim=#");
                writer.println(java.lang.Integer.toHexString(this.mExitAnim));
            }
            if (this.mPopEnterAnim != 0 || this.mPopExitAnim != 0) {
                writer.print(prefix);
                writer.print("mPopEnterAnim=#");
                writer.print(java.lang.Integer.toHexString(this.mPopEnterAnim));
                writer.print(" mPopExitAnim=#");
                writer.println(java.lang.Integer.toHexString(this.mPopExitAnim));
            }
            if (this.mBreadCrumbTitleRes != 0 || this.mBreadCrumbTitleText != null) {
                writer.print(prefix);
                writer.print("mBreadCrumbTitleRes=#");
                writer.print(java.lang.Integer.toHexString(this.mBreadCrumbTitleRes));
                writer.print(" mBreadCrumbTitleText=");
                writer.println(this.mBreadCrumbTitleText);
            }
            if (this.mBreadCrumbShortTitleRes != 0 || this.mBreadCrumbShortTitleText != null) {
                writer.print(prefix);
                writer.print("mBreadCrumbShortTitleRes=#");
                writer.print(java.lang.Integer.toHexString(this.mBreadCrumbShortTitleRes));
                writer.print(" mBreadCrumbShortTitleText=");
                writer.println(this.mBreadCrumbShortTitleText);
            }
        }
        if (this.mHead != null) {
            writer.print(prefix);
            writer.println("Operations:");
            java.lang.String innerPrefix = prefix + "    ";
            android.support.v4.app.BackStackRecord.Op op = this.mHead;
            int num = 0;
            while (op != null) {
                switch (op.cmd) {
                    case 0:
                        cmdStr = "NULL";
                        break;
                    case 1:
                        cmdStr = "ADD";
                        break;
                    case 2:
                        cmdStr = "REPLACE";
                        break;
                    case 3:
                        cmdStr = "REMOVE";
                        break;
                    case 4:
                        cmdStr = "HIDE";
                        break;
                    case 5:
                        cmdStr = "SHOW";
                        break;
                    case 6:
                        cmdStr = "DETACH";
                        break;
                    case 7:
                        cmdStr = "ATTACH";
                        break;
                    default:
                        cmdStr = "cmd=" + op.cmd;
                        break;
                }
                writer.print(prefix);
                writer.print("  Op #");
                writer.print(num);
                writer.print(": ");
                writer.print(cmdStr);
                writer.print(" ");
                writer.println(op.fragment);
                if (full) {
                    if (op.enterAnim != 0 || op.exitAnim != 0) {
                        writer.print(prefix);
                        writer.print("enterAnim=#");
                        writer.print(java.lang.Integer.toHexString(op.enterAnim));
                        writer.print(" exitAnim=#");
                        writer.println(java.lang.Integer.toHexString(op.exitAnim));
                    }
                    if (op.popEnterAnim != 0 || op.popExitAnim != 0) {
                        writer.print(prefix);
                        writer.print("popEnterAnim=#");
                        writer.print(java.lang.Integer.toHexString(op.popEnterAnim));
                        writer.print(" popExitAnim=#");
                        writer.println(java.lang.Integer.toHexString(op.popExitAnim));
                    }
                }
                if (op.removed != null && op.removed.size() > 0) {
                    for (int i = 0; i < op.removed.size(); i++) {
                        writer.print(innerPrefix);
                        if (op.removed.size() == 1) {
                            writer.print("Removed: ");
                        } else {
                            if (i == 0) {
                                writer.println("Removed:");
                            }
                            writer.print(innerPrefix);
                            writer.print("  #");
                            writer.print(i);
                            writer.print(": ");
                        }
                        writer.println(op.removed.get(i));
                    }
                }
                op = op.next;
                num++;
            }
        }
    }

    public BackStackRecord(android.support.v4.app.FragmentManagerImpl manager) {
        this.mManager = manager;
    }

    @Override // android.support.v4.app.FragmentManager.BackStackEntry
    public int getId() {
        return this.mIndex;
    }

    @Override // android.support.v4.app.FragmentManager.BackStackEntry
    public int getBreadCrumbTitleRes() {
        return this.mBreadCrumbTitleRes;
    }

    @Override // android.support.v4.app.FragmentManager.BackStackEntry
    public int getBreadCrumbShortTitleRes() {
        return this.mBreadCrumbShortTitleRes;
    }

    @Override // android.support.v4.app.FragmentManager.BackStackEntry
    public java.lang.CharSequence getBreadCrumbTitle() {
        return this.mBreadCrumbTitleRes != 0 ? this.mManager.mActivity.getText(this.mBreadCrumbTitleRes) : this.mBreadCrumbTitleText;
    }

    @Override // android.support.v4.app.FragmentManager.BackStackEntry
    public java.lang.CharSequence getBreadCrumbShortTitle() {
        return this.mBreadCrumbShortTitleRes != 0 ? this.mManager.mActivity.getText(this.mBreadCrumbShortTitleRes) : this.mBreadCrumbShortTitleText;
    }

    void addOp(android.support.v4.app.BackStackRecord.Op op) {
        if (this.mHead == null) {
            this.mTail = op;
            this.mHead = op;
        } else {
            op.prev = this.mTail;
            this.mTail.next = op;
            this.mTail = op;
        }
        op.enterAnim = this.mEnterAnim;
        op.exitAnim = this.mExitAnim;
        op.popEnterAnim = this.mPopEnterAnim;
        op.popExitAnim = this.mPopExitAnim;
        this.mNumOp++;
    }

    @Override // android.support.v4.app.FragmentTransaction
    public android.support.v4.app.FragmentTransaction add(android.support.v4.app.Fragment fragment, java.lang.String tag) {
        doAddOp(0, fragment, tag, 1);
        return this;
    }

    @Override // android.support.v4.app.FragmentTransaction
    public android.support.v4.app.FragmentTransaction add(int containerViewId, android.support.v4.app.Fragment fragment) {
        doAddOp(containerViewId, fragment, null, 1);
        return this;
    }

    @Override // android.support.v4.app.FragmentTransaction
    public android.support.v4.app.FragmentTransaction add(int containerViewId, android.support.v4.app.Fragment fragment, java.lang.String tag) {
        doAddOp(containerViewId, fragment, tag, 1);
        return this;
    }

    private void doAddOp(int containerViewId, android.support.v4.app.Fragment fragment, java.lang.String tag, int opcmd) {
        fragment.mFragmentManager = this.mManager;
        if (tag != null) {
            if (fragment.mTag != null && !tag.equals(fragment.mTag)) {
                throw new java.lang.IllegalStateException("Can't change tag of fragment " + fragment + ": was " + fragment.mTag + " now " + tag);
            }
            fragment.mTag = tag;
        }
        if (containerViewId != 0) {
            if (fragment.mFragmentId != 0 && fragment.mFragmentId != containerViewId) {
                throw new java.lang.IllegalStateException("Can't change container ID of fragment " + fragment + ": was " + fragment.mFragmentId + " now " + containerViewId);
            }
            fragment.mFragmentId = containerViewId;
            fragment.mContainerId = containerViewId;
        }
        android.support.v4.app.BackStackRecord.Op op = new android.support.v4.app.BackStackRecord.Op();
        op.cmd = opcmd;
        op.fragment = fragment;
        addOp(op);
    }

    @Override // android.support.v4.app.FragmentTransaction
    public android.support.v4.app.FragmentTransaction replace(int containerViewId, android.support.v4.app.Fragment fragment) {
        return replace(containerViewId, fragment, null);
    }

    @Override // android.support.v4.app.FragmentTransaction
    public android.support.v4.app.FragmentTransaction replace(int containerViewId, android.support.v4.app.Fragment fragment, java.lang.String tag) {
        if (containerViewId == 0) {
            throw new java.lang.IllegalArgumentException("Must use non-zero containerViewId");
        }
        doAddOp(containerViewId, fragment, tag, 2);
        return this;
    }

    @Override // android.support.v4.app.FragmentTransaction
    public android.support.v4.app.FragmentTransaction remove(android.support.v4.app.Fragment fragment) {
        android.support.v4.app.BackStackRecord.Op op = new android.support.v4.app.BackStackRecord.Op();
        op.cmd = 3;
        op.fragment = fragment;
        addOp(op);
        return this;
    }

    @Override // android.support.v4.app.FragmentTransaction
    public android.support.v4.app.FragmentTransaction hide(android.support.v4.app.Fragment fragment) {
        android.support.v4.app.BackStackRecord.Op op = new android.support.v4.app.BackStackRecord.Op();
        op.cmd = 4;
        op.fragment = fragment;
        addOp(op);
        return this;
    }

    @Override // android.support.v4.app.FragmentTransaction
    public android.support.v4.app.FragmentTransaction show(android.support.v4.app.Fragment fragment) {
        android.support.v4.app.BackStackRecord.Op op = new android.support.v4.app.BackStackRecord.Op();
        op.cmd = 5;
        op.fragment = fragment;
        addOp(op);
        return this;
    }

    @Override // android.support.v4.app.FragmentTransaction
    public android.support.v4.app.FragmentTransaction detach(android.support.v4.app.Fragment fragment) {
        android.support.v4.app.BackStackRecord.Op op = new android.support.v4.app.BackStackRecord.Op();
        op.cmd = 6;
        op.fragment = fragment;
        addOp(op);
        return this;
    }

    @Override // android.support.v4.app.FragmentTransaction
    public android.support.v4.app.FragmentTransaction attach(android.support.v4.app.Fragment fragment) {
        android.support.v4.app.BackStackRecord.Op op = new android.support.v4.app.BackStackRecord.Op();
        op.cmd = 7;
        op.fragment = fragment;
        addOp(op);
        return this;
    }

    @Override // android.support.v4.app.FragmentTransaction
    public android.support.v4.app.FragmentTransaction setCustomAnimations(int enter, int exit) {
        return setCustomAnimations(enter, exit, 0, 0);
    }

    @Override // android.support.v4.app.FragmentTransaction
    public android.support.v4.app.FragmentTransaction setCustomAnimations(int enter, int exit, int popEnter, int popExit) {
        this.mEnterAnim = enter;
        this.mExitAnim = exit;
        this.mPopEnterAnim = popEnter;
        this.mPopExitAnim = popExit;
        return this;
    }

    @Override // android.support.v4.app.FragmentTransaction
    public android.support.v4.app.FragmentTransaction setTransition(int transition) {
        this.mTransition = transition;
        return this;
    }

    @Override // android.support.v4.app.FragmentTransaction
    public android.support.v4.app.FragmentTransaction setTransitionStyle(int styleRes) {
        this.mTransitionStyle = styleRes;
        return this;
    }

    @Override // android.support.v4.app.FragmentTransaction
    public android.support.v4.app.FragmentTransaction addToBackStack(java.lang.String name) {
        if (!this.mAllowAddToBackStack) {
            throw new java.lang.IllegalStateException("This FragmentTransaction is not allowed to be added to the back stack.");
        }
        this.mAddToBackStack = true;
        this.mName = name;
        return this;
    }

    @Override // android.support.v4.app.FragmentTransaction
    public boolean isAddToBackStackAllowed() {
        return this.mAllowAddToBackStack;
    }

    @Override // android.support.v4.app.FragmentTransaction
    public android.support.v4.app.FragmentTransaction disallowAddToBackStack() {
        if (this.mAddToBackStack) {
            throw new java.lang.IllegalStateException("This transaction is already being added to the back stack");
        }
        this.mAllowAddToBackStack = false;
        return this;
    }

    @Override // android.support.v4.app.FragmentTransaction
    public android.support.v4.app.FragmentTransaction setBreadCrumbTitle(int res) {
        this.mBreadCrumbTitleRes = res;
        this.mBreadCrumbTitleText = null;
        return this;
    }

    @Override // android.support.v4.app.FragmentTransaction
    public android.support.v4.app.FragmentTransaction setBreadCrumbTitle(java.lang.CharSequence text) {
        this.mBreadCrumbTitleRes = 0;
        this.mBreadCrumbTitleText = text;
        return this;
    }

    @Override // android.support.v4.app.FragmentTransaction
    public android.support.v4.app.FragmentTransaction setBreadCrumbShortTitle(int res) {
        this.mBreadCrumbShortTitleRes = res;
        this.mBreadCrumbShortTitleText = null;
        return this;
    }

    @Override // android.support.v4.app.FragmentTransaction
    public android.support.v4.app.FragmentTransaction setBreadCrumbShortTitle(java.lang.CharSequence text) {
        this.mBreadCrumbShortTitleRes = 0;
        this.mBreadCrumbShortTitleText = text;
        return this;
    }

    void bumpBackStackNesting(int amt) {
        if (this.mAddToBackStack) {
            if (android.support.v4.app.FragmentManagerImpl.DEBUG) {
                android.util.Log.v(TAG, "Bump nesting in " + this + " by " + amt);
            }
            for (android.support.v4.app.BackStackRecord.Op op = this.mHead; op != null; op = op.next) {
                if (op.fragment != null) {
                    op.fragment.mBackStackNesting += amt;
                    if (android.support.v4.app.FragmentManagerImpl.DEBUG) {
                        android.util.Log.v(TAG, "Bump nesting of " + op.fragment + " to " + op.fragment.mBackStackNesting);
                    }
                }
                if (op.removed != null) {
                    for (int i = op.removed.size() - 1; i >= 0; i--) {
                        android.support.v4.app.Fragment r = op.removed.get(i);
                        r.mBackStackNesting += amt;
                        if (android.support.v4.app.FragmentManagerImpl.DEBUG) {
                            android.util.Log.v(TAG, "Bump nesting of " + r + " to " + r.mBackStackNesting);
                        }
                    }
                }
            }
        }
    }

    @Override // android.support.v4.app.FragmentTransaction
    public int commit() {
        return commitInternal(false);
    }

    @Override // android.support.v4.app.FragmentTransaction
    public int commitAllowingStateLoss() {
        return commitInternal(true);
    }

    int commitInternal(boolean allowStateLoss) {
        if (this.mCommitted) {
            throw new java.lang.IllegalStateException("commit already called");
        }
        if (android.support.v4.app.FragmentManagerImpl.DEBUG) {
            android.util.Log.v(TAG, "Commit: " + this);
            android.support.v4.util.LogWriter logw = new android.support.v4.util.LogWriter(TAG);
            java.io.PrintWriter pw = new java.io.PrintWriter(logw);
            dump("  ", null, pw, null);
        }
        this.mCommitted = true;
        if (this.mAddToBackStack) {
            this.mIndex = this.mManager.allocBackStackIndex(this);
        } else {
            this.mIndex = -1;
        }
        this.mManager.enqueueAction(this, allowStateLoss);
        return this.mIndex;
    }

    @Override // java.lang.Runnable
    public void run() {
        if (android.support.v4.app.FragmentManagerImpl.DEBUG) {
            android.util.Log.v(TAG, "Run: " + this);
        }
        if (this.mAddToBackStack && this.mIndex < 0) {
            throw new java.lang.IllegalStateException("addToBackStack() called after commit()");
        }
        bumpBackStackNesting(1);
        for (android.support.v4.app.BackStackRecord.Op op = this.mHead; op != null; op = op.next) {
            switch (op.cmd) {
                case 1:
                    android.support.v4.app.Fragment f = op.fragment;
                    f.mNextAnim = op.enterAnim;
                    this.mManager.addFragment(f, false);
                    break;
                case 2:
                    android.support.v4.app.Fragment f2 = op.fragment;
                    if (this.mManager.mAdded != null) {
                        for (int i = 0; i < this.mManager.mAdded.size(); i++) {
                            android.support.v4.app.Fragment old = this.mManager.mAdded.get(i);
                            if (android.support.v4.app.FragmentManagerImpl.DEBUG) {
                                android.util.Log.v(TAG, "OP_REPLACE: adding=" + f2 + " old=" + old);
                            }
                            if (f2 == null || old.mContainerId == f2.mContainerId) {
                                if (old == f2) {
                                    f2 = null;
                                    op.fragment = null;
                                } else {
                                    if (op.removed == null) {
                                        op.removed = new java.util.ArrayList<>();
                                    }
                                    op.removed.add(old);
                                    old.mNextAnim = op.exitAnim;
                                    if (this.mAddToBackStack) {
                                        old.mBackStackNesting++;
                                        if (android.support.v4.app.FragmentManagerImpl.DEBUG) {
                                            android.util.Log.v(TAG, "Bump nesting of " + old + " to " + old.mBackStackNesting);
                                        }
                                    }
                                    this.mManager.removeFragment(old, this.mTransition, this.mTransitionStyle);
                                }
                            }
                        }
                    }
                    if (f2 != null) {
                        f2.mNextAnim = op.enterAnim;
                        this.mManager.addFragment(f2, false);
                    }
                    // NOTE(jadx-fix): smali jumps to :cond_2/:goto_1 (the switch break) on both paths; jadx's `else { break; }` plus the trailing `break;` left the trailing one unreachable
                    break;
                case 3:
                    android.support.v4.app.Fragment f3 = op.fragment;
                    f3.mNextAnim = op.exitAnim;
                    this.mManager.removeFragment(f3, this.mTransition, this.mTransitionStyle);
                    break;
                case 4:
                    android.support.v4.app.Fragment f4 = op.fragment;
                    f4.mNextAnim = op.exitAnim;
                    this.mManager.hideFragment(f4, this.mTransition, this.mTransitionStyle);
                    break;
                case 5:
                    android.support.v4.app.Fragment f5 = op.fragment;
                    f5.mNextAnim = op.enterAnim;
                    this.mManager.showFragment(f5, this.mTransition, this.mTransitionStyle);
                    break;
                case 6:
                    android.support.v4.app.Fragment f6 = op.fragment;
                    f6.mNextAnim = op.exitAnim;
                    this.mManager.detachFragment(f6, this.mTransition, this.mTransitionStyle);
                    break;
                case 7:
                    android.support.v4.app.Fragment f7 = op.fragment;
                    f7.mNextAnim = op.enterAnim;
                    this.mManager.attachFragment(f7, this.mTransition, this.mTransitionStyle);
                    break;
                default:
                    throw new java.lang.IllegalArgumentException("Unknown cmd: " + op.cmd);
            }
        }
        this.mManager.moveToState(this.mManager.mCurState, this.mTransition, this.mTransitionStyle, true);
        if (this.mAddToBackStack) {
            this.mManager.addBackStackState(this);
        }
    }

    public void popFromBackStack(boolean doStateMove) {
        if (android.support.v4.app.FragmentManagerImpl.DEBUG) {
            android.util.Log.v(TAG, "popFromBackStack: " + this);
            android.support.v4.util.LogWriter logw = new android.support.v4.util.LogWriter(TAG);
            java.io.PrintWriter pw = new java.io.PrintWriter(logw);
            dump("  ", null, pw, null);
        }
        bumpBackStackNesting(-1);
        for (android.support.v4.app.BackStackRecord.Op op = this.mTail; op != null; op = op.prev) {
            switch (op.cmd) {
                case 1:
                    android.support.v4.app.Fragment f = op.fragment;
                    f.mNextAnim = op.popExitAnim;
                    this.mManager.removeFragment(f, android.support.v4.app.FragmentManagerImpl.reverseTransit(this.mTransition), this.mTransitionStyle);
                    break;
                case 2:
                    android.support.v4.app.Fragment f2 = op.fragment;
                    if (f2 != null) {
                        f2.mNextAnim = op.popExitAnim;
                        this.mManager.removeFragment(f2, android.support.v4.app.FragmentManagerImpl.reverseTransit(this.mTransition), this.mTransitionStyle);
                    }
                    if (op.removed != null) {
                        for (int i = 0; i < op.removed.size(); i++) {
                            android.support.v4.app.Fragment old = op.removed.get(i);
                            old.mNextAnim = op.popEnterAnim;
                            this.mManager.addFragment(old, false);
                        }
                        break;
                    } else {
                        break;
                    }
                case 3:
                    android.support.v4.app.Fragment f3 = op.fragment;
                    f3.mNextAnim = op.popEnterAnim;
                    this.mManager.addFragment(f3, false);
                    break;
                case 4:
                    android.support.v4.app.Fragment f4 = op.fragment;
                    f4.mNextAnim = op.popEnterAnim;
                    this.mManager.showFragment(f4, android.support.v4.app.FragmentManagerImpl.reverseTransit(this.mTransition), this.mTransitionStyle);
                    break;
                case 5:
                    android.support.v4.app.Fragment f5 = op.fragment;
                    f5.mNextAnim = op.popExitAnim;
                    this.mManager.hideFragment(f5, android.support.v4.app.FragmentManagerImpl.reverseTransit(this.mTransition), this.mTransitionStyle);
                    break;
                case 6:
                    android.support.v4.app.Fragment f6 = op.fragment;
                    f6.mNextAnim = op.popEnterAnim;
                    this.mManager.attachFragment(f6, android.support.v4.app.FragmentManagerImpl.reverseTransit(this.mTransition), this.mTransitionStyle);
                    break;
                case 7:
                    android.support.v4.app.Fragment f7 = op.fragment;
                    f7.mNextAnim = op.popEnterAnim;
                    this.mManager.detachFragment(f7, android.support.v4.app.FragmentManagerImpl.reverseTransit(this.mTransition), this.mTransitionStyle);
                    break;
                default:
                    throw new java.lang.IllegalArgumentException("Unknown cmd: " + op.cmd);
            }
        }
        if (doStateMove) {
            this.mManager.moveToState(this.mManager.mCurState, android.support.v4.app.FragmentManagerImpl.reverseTransit(this.mTransition), this.mTransitionStyle, true);
        }
        if (this.mIndex >= 0) {
            this.mManager.freeBackStackIndex(this.mIndex);
            this.mIndex = -1;
        }
    }

    @Override // android.support.v4.app.FragmentManager.BackStackEntry
    public java.lang.String getName() {
        return this.mName;
    }

    public int getTransition() {
        return this.mTransition;
    }

    public int getTransitionStyle() {
        return this.mTransitionStyle;
    }

    @Override // android.support.v4.app.FragmentTransaction
    public boolean isEmpty() {
        return this.mNumOp == 0;
    }
}
