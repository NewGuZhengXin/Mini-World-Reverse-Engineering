package android.support.v4.app;

/* compiled from: LoaderManager.java */
/* loaded from: classes.dex */
class LoaderManagerImpl extends android.support.v4.app.LoaderManager {
    static boolean DEBUG = false;
    static final java.lang.String TAG = "LoaderManager";
    android.support.v4.app.FragmentActivity mActivity;
    boolean mCreatingLoader;
    boolean mRetaining;
    boolean mRetainingStarted;
    boolean mStarted;
    final java.lang.String mWho;
    final android.support.v4.util.SparseArrayCompat<android.support.v4.app.LoaderManagerImpl.LoaderInfo> mLoaders = new android.support.v4.util.SparseArrayCompat<>();
    final android.support.v4.util.SparseArrayCompat<android.support.v4.app.LoaderManagerImpl.LoaderInfo> mInactiveLoaders = new android.support.v4.util.SparseArrayCompat<>();

    /* compiled from: LoaderManager.java */
    final class LoaderInfo implements android.support.v4.content.Loader.OnLoadCompleteListener<java.lang.Object> {
        final android.os.Bundle mArgs;
        android.support.v4.app.LoaderManager.LoaderCallbacks<java.lang.Object> mCallbacks;
        java.lang.Object mData;
        boolean mDeliveredData;
        boolean mDestroyed;
        boolean mHaveData;
        final int mId;
        boolean mListenerRegistered;
        android.support.v4.content.Loader<java.lang.Object> mLoader;
        android.support.v4.app.LoaderManagerImpl.LoaderInfo mPendingLoader;
        boolean mReportNextStart;
        boolean mRetaining;
        boolean mRetainingStarted;
        boolean mStarted;

        public LoaderInfo(int id, android.os.Bundle args, android.support.v4.app.LoaderManager.LoaderCallbacks<java.lang.Object> callbacks) {
            this.mId = id;
            this.mArgs = args;
            this.mCallbacks = callbacks;
        }

        void start() {
            if (this.mRetaining && this.mRetainingStarted) {
                this.mStarted = true;
                return;
            }
            if (!this.mStarted) {
                this.mStarted = true;
                if (android.support.v4.app.LoaderManagerImpl.DEBUG) {
                    android.util.Log.v(android.support.v4.app.LoaderManagerImpl.TAG, "  Starting: " + this);
                }
                if (this.mLoader == null && this.mCallbacks != null) {
                    this.mLoader = this.mCallbacks.onCreateLoader(this.mId, this.mArgs);
                }
                if (this.mLoader != null) {
                    if (this.mLoader.getClass().isMemberClass() && !java.lang.reflect.Modifier.isStatic(this.mLoader.getClass().getModifiers())) {
                        throw new java.lang.IllegalArgumentException("Object returned from onCreateLoader must not be a non-static inner member class: " + this.mLoader);
                    }
                    if (!this.mListenerRegistered) {
                        this.mLoader.registerListener(this.mId, this);
                        this.mListenerRegistered = true;
                    }
                    this.mLoader.startLoading();
                }
            }
        }

        void retain() {
            if (android.support.v4.app.LoaderManagerImpl.DEBUG) {
                android.util.Log.v(android.support.v4.app.LoaderManagerImpl.TAG, "  Retaining: " + this);
            }
            this.mRetaining = true;
            this.mRetainingStarted = this.mStarted;
            this.mStarted = false;
            this.mCallbacks = null;
        }

        void finishRetain() {
            if (this.mRetaining) {
                if (android.support.v4.app.LoaderManagerImpl.DEBUG) {
                    android.util.Log.v(android.support.v4.app.LoaderManagerImpl.TAG, "  Finished Retaining: " + this);
                }
                this.mRetaining = false;
                if (this.mStarted != this.mRetainingStarted && !this.mStarted) {
                    stop();
                }
            }
            if (this.mStarted && this.mHaveData && !this.mReportNextStart) {
                callOnLoadFinished(this.mLoader, this.mData);
            }
        }

        void reportStart() {
            if (this.mStarted && this.mReportNextStart) {
                this.mReportNextStart = false;
                if (this.mHaveData) {
                    callOnLoadFinished(this.mLoader, this.mData);
                }
            }
        }

        void stop() {
            if (android.support.v4.app.LoaderManagerImpl.DEBUG) {
                android.util.Log.v(android.support.v4.app.LoaderManagerImpl.TAG, "  Stopping: " + this);
            }
            this.mStarted = false;
            if (!this.mRetaining && this.mLoader != null && this.mListenerRegistered) {
                this.mListenerRegistered = false;
                this.mLoader.unregisterListener(this);
                this.mLoader.stopLoading();
            }
        }

        void destroy() {
            if (android.support.v4.app.LoaderManagerImpl.DEBUG) {
                android.util.Log.v(android.support.v4.app.LoaderManagerImpl.TAG, "  Destroying: " + this);
            }
            this.mDestroyed = true;
            boolean needReset = this.mDeliveredData;
            this.mDeliveredData = false;
            if (this.mCallbacks != null && this.mLoader != null && this.mHaveData && needReset) {
                if (android.support.v4.app.LoaderManagerImpl.DEBUG) {
                    android.util.Log.v(android.support.v4.app.LoaderManagerImpl.TAG, "  Reseting: " + this);
                }
                java.lang.String lastBecause = null;
                if (android.support.v4.app.LoaderManagerImpl.this.mActivity != null) {
                    lastBecause = android.support.v4.app.LoaderManagerImpl.this.mActivity.mFragments.mNoTransactionsBecause;
                    android.support.v4.app.LoaderManagerImpl.this.mActivity.mFragments.mNoTransactionsBecause = "onLoaderReset";
                }
                try {
                    this.mCallbacks.onLoaderReset(this.mLoader);
                } finally {
                    if (android.support.v4.app.LoaderManagerImpl.this.mActivity != null) {
                        android.support.v4.app.LoaderManagerImpl.this.mActivity.mFragments.mNoTransactionsBecause = lastBecause;
                    }
                }
            }
            this.mCallbacks = null;
            this.mData = null;
            this.mHaveData = false;
            if (this.mLoader != null) {
                if (this.mListenerRegistered) {
                    this.mListenerRegistered = false;
                    this.mLoader.unregisterListener(this);
                }
                this.mLoader.reset();
            }
            if (this.mPendingLoader != null) {
                this.mPendingLoader.destroy();
            }
        }

        @Override // android.support.v4.content.Loader.OnLoadCompleteListener
        public void onLoadComplete(android.support.v4.content.Loader<java.lang.Object> loader, java.lang.Object data) throws android.content.res.Resources.NotFoundException {
            if (android.support.v4.app.LoaderManagerImpl.DEBUG) {
                android.util.Log.v(android.support.v4.app.LoaderManagerImpl.TAG, "onLoadComplete: " + this);
            }
            if (this.mDestroyed) {
                if (android.support.v4.app.LoaderManagerImpl.DEBUG) {
                    android.util.Log.v(android.support.v4.app.LoaderManagerImpl.TAG, "  Ignoring load complete -- destroyed");
                    return;
                }
                return;
            }
            if (android.support.v4.app.LoaderManagerImpl.this.mLoaders.get(this.mId) != this) {
                if (android.support.v4.app.LoaderManagerImpl.DEBUG) {
                    android.util.Log.v(android.support.v4.app.LoaderManagerImpl.TAG, "  Ignoring load complete -- not active");
                    return;
                }
                return;
            }
            android.support.v4.app.LoaderManagerImpl.LoaderInfo pending = this.mPendingLoader;
            if (pending != null) {
                if (android.support.v4.app.LoaderManagerImpl.DEBUG) {
                    android.util.Log.v(android.support.v4.app.LoaderManagerImpl.TAG, "  Switching to pending loader: " + pending);
                }
                this.mPendingLoader = null;
                android.support.v4.app.LoaderManagerImpl.this.mLoaders.put(this.mId, null);
                destroy();
                android.support.v4.app.LoaderManagerImpl.this.installLoader(pending);
                return;
            }
            if (this.mData != data || !this.mHaveData) {
                this.mData = data;
                this.mHaveData = true;
                if (this.mStarted) {
                    callOnLoadFinished(loader, data);
                }
            }
            android.support.v4.app.LoaderManagerImpl.LoaderInfo info = android.support.v4.app.LoaderManagerImpl.this.mInactiveLoaders.get(this.mId);
            if (info != null && info != this) {
                info.mDeliveredData = false;
                info.destroy();
                android.support.v4.app.LoaderManagerImpl.this.mInactiveLoaders.remove(this.mId);
            }
            if (android.support.v4.app.LoaderManagerImpl.this.mActivity != null && !android.support.v4.app.LoaderManagerImpl.this.hasRunningLoaders()) {
                android.support.v4.app.LoaderManagerImpl.this.mActivity.mFragments.startPendingDeferredFragments();
            }
        }

        void callOnLoadFinished(android.support.v4.content.Loader<java.lang.Object> loader, java.lang.Object data) {
            if (this.mCallbacks != null) {
                java.lang.String lastBecause = null;
                if (android.support.v4.app.LoaderManagerImpl.this.mActivity != null) {
                    lastBecause = android.support.v4.app.LoaderManagerImpl.this.mActivity.mFragments.mNoTransactionsBecause;
                    android.support.v4.app.LoaderManagerImpl.this.mActivity.mFragments.mNoTransactionsBecause = "onLoadFinished";
                }
                try {
                    if (android.support.v4.app.LoaderManagerImpl.DEBUG) {
                        android.util.Log.v(android.support.v4.app.LoaderManagerImpl.TAG, "  onLoadFinished in " + loader + ": " + loader.dataToString(data));
                    }
                    this.mCallbacks.onLoadFinished(loader, data);
                    this.mDeliveredData = true;
                } finally {
                    if (android.support.v4.app.LoaderManagerImpl.this.mActivity != null) {
                        android.support.v4.app.LoaderManagerImpl.this.mActivity.mFragments.mNoTransactionsBecause = lastBecause;
                    }
                }
            }
        }

        public java.lang.String toString() {
            java.lang.StringBuilder sb = new java.lang.StringBuilder(64);
            sb.append("LoaderInfo{");
            sb.append(java.lang.Integer.toHexString(java.lang.System.identityHashCode(this)));
            sb.append(" #");
            sb.append(this.mId);
            sb.append(" : ");
            android.support.v4.util.DebugUtils.buildShortClassTag(this.mLoader, sb);
            sb.append("}}");
            return sb.toString();
        }

        public void dump(java.lang.String prefix, java.io.FileDescriptor fd, java.io.PrintWriter writer, java.lang.String[] args) {
            writer.print(prefix);
            writer.print("mId=");
            writer.print(this.mId);
            writer.print(" mArgs=");
            writer.println(this.mArgs);
            writer.print(prefix);
            writer.print("mCallbacks=");
            writer.println(this.mCallbacks);
            writer.print(prefix);
            writer.print("mLoader=");
            writer.println(this.mLoader);
            if (this.mLoader != null) {
                this.mLoader.dump(prefix + "  ", fd, writer, args);
            }
            if (this.mHaveData || this.mDeliveredData) {
                writer.print(prefix);
                writer.print("mHaveData=");
                writer.print(this.mHaveData);
                writer.print("  mDeliveredData=");
                writer.println(this.mDeliveredData);
                writer.print(prefix);
                writer.print("mData=");
                writer.println(this.mData);
            }
            writer.print(prefix);
            writer.print("mStarted=");
            writer.print(this.mStarted);
            writer.print(" mReportNextStart=");
            writer.print(this.mReportNextStart);
            writer.print(" mDestroyed=");
            writer.println(this.mDestroyed);
            writer.print(prefix);
            writer.print("mRetaining=");
            writer.print(this.mRetaining);
            writer.print(" mRetainingStarted=");
            writer.print(this.mRetainingStarted);
            writer.print(" mListenerRegistered=");
            writer.println(this.mListenerRegistered);
            if (this.mPendingLoader != null) {
                writer.print(prefix);
                writer.println("Pending Loader ");
                writer.print(this.mPendingLoader);
                writer.println(":");
                this.mPendingLoader.dump(prefix + "  ", fd, writer, args);
            }
        }
    }

    LoaderManagerImpl(java.lang.String who, android.support.v4.app.FragmentActivity activity, boolean started) {
        this.mWho = who;
        this.mActivity = activity;
        this.mStarted = started;
    }

    void updateActivity(android.support.v4.app.FragmentActivity activity) {
        this.mActivity = activity;
    }

    // NOTE(jadx-fix): restore the <D> type parameter that jadx erased; the erasure is unchanged
    // (LoaderCallbacks -> LoaderCallbacks) and matches the smali descriptor exactly.
    private <D> android.support.v4.app.LoaderManagerImpl.LoaderInfo createLoader(int id, android.os.Bundle args, android.support.v4.app.LoaderManager.LoaderCallbacks<D> callback) {
        android.support.v4.app.LoaderManagerImpl.LoaderInfo info = new android.support.v4.app.LoaderManagerImpl.LoaderInfo(id, args, (android.support.v4.app.LoaderManager.LoaderCallbacks<java.lang.Object>) callback); // NOTE(jadx-fix): LoaderInfo stores callbacks as Object (matches smali)
        android.support.v4.content.Loader<D> loader = callback.onCreateLoader(id, args); // NOTE(jadx-fix): was Loader<Object>; D is the original element type
        info.mLoader = (android.support.v4.content.Loader<java.lang.Object>) loader; // NOTE(jadx-fix): LoaderInfo.mLoader is Loader<Object> (matches smali)
        return info;
    }

    // NOTE(jadx-fix): restore the <D> type parameter that jadx erased (erasure unchanged, matches smali).
    private <D> android.support.v4.app.LoaderManagerImpl.LoaderInfo createAndInstallLoader(int id, android.os.Bundle args, android.support.v4.app.LoaderManager.LoaderCallbacks<D> callback) {
        try {
            this.mCreatingLoader = true;
            android.support.v4.app.LoaderManagerImpl.LoaderInfo info = createLoader(id, args, callback);
            installLoader(info);
            return info;
        } finally {
            this.mCreatingLoader = false;
        }
    }

    void installLoader(android.support.v4.app.LoaderManagerImpl.LoaderInfo info) {
        this.mLoaders.put(info.mId, info);
        if (this.mStarted) {
            info.start();
        }
    }

    @Override // android.support.v4.app.LoaderManager
    public <D> android.support.v4.content.Loader<D> initLoader(int i, android.os.Bundle bundle, android.support.v4.app.LoaderManager.LoaderCallbacks<D> loaderCallbacks) {
        if (this.mCreatingLoader) {
            throw new java.lang.IllegalStateException("Called while creating a loader");
        }
        android.support.v4.app.LoaderManagerImpl.LoaderInfo loaderInfoCreateAndInstallLoader = this.mLoaders.get(i);
        if (DEBUG) {
            android.util.Log.v(TAG, "initLoader in " + this + ": args=" + bundle);
        }
        if (loaderInfoCreateAndInstallLoader == null) {
            loaderInfoCreateAndInstallLoader = this.<D>createAndInstallLoader(i, bundle, loaderCallbacks); // NOTE(jadx-fix): explicit type witness so the callbacks keep type D
            if (DEBUG) {
                android.util.Log.v(TAG, "  Created new loader " + loaderInfoCreateAndInstallLoader);
            }
        } else {
            if (DEBUG) {
                android.util.Log.v(TAG, "  Re-using existing loader " + loaderInfoCreateAndInstallLoader);
            }
            loaderInfoCreateAndInstallLoader.mCallbacks = (android.support.v4.app.LoaderManager.LoaderCallbacks<java.lang.Object>) loaderCallbacks; // NOTE(jadx-fix): mCallbacks is LoaderCallbacks<Object> (matches smali)
        }
        if (loaderInfoCreateAndInstallLoader.mHaveData && this.mStarted) {
            loaderInfoCreateAndInstallLoader.callOnLoadFinished(loaderInfoCreateAndInstallLoader.mLoader, loaderInfoCreateAndInstallLoader.mData);
        }
        return (android.support.v4.content.Loader<D>) loaderInfoCreateAndInstallLoader.mLoader;
    }

    @Override // android.support.v4.app.LoaderManager
    public <D> android.support.v4.content.Loader<D> restartLoader(int i, android.os.Bundle bundle, android.support.v4.app.LoaderManager.LoaderCallbacks<D> loaderCallbacks) {
        if (this.mCreatingLoader) {
            throw new java.lang.IllegalStateException("Called while creating a loader");
        }
        android.support.v4.app.LoaderManagerImpl.LoaderInfo loaderInfo = this.mLoaders.get(i);
        if (DEBUG) {
            android.util.Log.v(TAG, "restartLoader in " + this + ": args=" + bundle);
        }
        if (loaderInfo != null) {
            android.support.v4.app.LoaderManagerImpl.LoaderInfo loaderInfo2 = this.mInactiveLoaders.get(i);
            if (loaderInfo2 != null) {
                if (loaderInfo.mHaveData) {
                    if (DEBUG) {
                        android.util.Log.v(TAG, "  Removing last inactive loader: " + loaderInfo);
                    }
                    loaderInfo2.mDeliveredData = false;
                    loaderInfo2.destroy();
                    loaderInfo.mLoader.abandon();
                    this.mInactiveLoaders.put(i, loaderInfo);
                } else if (!loaderInfo.mStarted) {
                    if (DEBUG) {
                        android.util.Log.v(TAG, "  Current loader is stopped; replacing");
                    }
                    this.mLoaders.put(i, null);
                    loaderInfo.destroy();
                } else {
                    if (loaderInfo.mPendingLoader != null) {
                        if (DEBUG) {
                            android.util.Log.v(TAG, "  Removing pending loader: " + loaderInfo.mPendingLoader);
                        }
                        loaderInfo.mPendingLoader.destroy();
                        loaderInfo.mPendingLoader = null;
                    }
                    if (DEBUG) {
                        android.util.Log.v(TAG, "  Enqueuing as new pending loader");
                    }
                    loaderInfo.mPendingLoader = this.<D>createLoader(i, bundle, loaderCallbacks); // NOTE(jadx-fix): explicit type witness so the callbacks keep type D
                    return (android.support.v4.content.Loader<D>) loaderInfo.mPendingLoader.mLoader;
                }
            } else {
                if (DEBUG) {
                    android.util.Log.v(TAG, "  Making last loader inactive: " + loaderInfo);
                }
                loaderInfo.mLoader.abandon();
                this.mInactiveLoaders.put(i, loaderInfo);
            }
        }
        return (android.support.v4.content.Loader<D>) this.<D>createAndInstallLoader(i, bundle, loaderCallbacks).mLoader; // NOTE(jadx-fix): explicit type witness so the callbacks keep type D
    }

    @Override // android.support.v4.app.LoaderManager
    public void destroyLoader(int id) throws android.content.res.Resources.NotFoundException {
        if (this.mCreatingLoader) {
            throw new java.lang.IllegalStateException("Called while creating a loader");
        }
        if (DEBUG) {
            android.util.Log.v(TAG, "destroyLoader in " + this + " of " + id);
        }
        int idx = this.mLoaders.indexOfKey(id);
        if (idx >= 0) {
            android.support.v4.app.LoaderManagerImpl.LoaderInfo info = this.mLoaders.valueAt(idx);
            this.mLoaders.removeAt(idx);
            info.destroy();
        }
        int idx2 = this.mInactiveLoaders.indexOfKey(id);
        if (idx2 >= 0) {
            android.support.v4.app.LoaderManagerImpl.LoaderInfo info2 = this.mInactiveLoaders.valueAt(idx2);
            this.mInactiveLoaders.removeAt(idx2);
            info2.destroy();
        }
        if (this.mActivity != null && !hasRunningLoaders()) {
            this.mActivity.mFragments.startPendingDeferredFragments();
        }
    }

    @Override // android.support.v4.app.LoaderManager
    public <D> android.support.v4.content.Loader<D> getLoader(int i) {
        if (this.mCreatingLoader) {
            throw new java.lang.IllegalStateException("Called while creating a loader");
        }
        android.support.v4.app.LoaderManagerImpl.LoaderInfo loaderInfo = this.mLoaders.get(i);
        if (loaderInfo != null) {
            if (loaderInfo.mPendingLoader != null) {
                return (android.support.v4.content.Loader<D>) loaderInfo.mPendingLoader.mLoader;
            }
            return (android.support.v4.content.Loader<D>) loaderInfo.mLoader;
        }
        return null;
    }

    void doStart() {
        if (DEBUG) {
            android.util.Log.v(TAG, "Starting in " + this);
        }
        if (this.mStarted) {
            java.lang.RuntimeException e = new java.lang.RuntimeException("here");
            e.fillInStackTrace();
            android.util.Log.w(TAG, "Called doStart when already started: " + this, e);
        } else {
            this.mStarted = true;
            for (int i = this.mLoaders.size() - 1; i >= 0; i--) {
                this.mLoaders.valueAt(i).start();
            }
        }
    }

    void doStop() {
        if (DEBUG) {
            android.util.Log.v(TAG, "Stopping in " + this);
        }
        if (!this.mStarted) {
            java.lang.RuntimeException e = new java.lang.RuntimeException("here");
            e.fillInStackTrace();
            android.util.Log.w(TAG, "Called doStop when not started: " + this, e);
        } else {
            for (int i = this.mLoaders.size() - 1; i >= 0; i--) {
                this.mLoaders.valueAt(i).stop();
            }
            this.mStarted = false;
        }
    }

    void doRetain() {
        if (DEBUG) {
            android.util.Log.v(TAG, "Retaining in " + this);
        }
        if (!this.mStarted) {
            java.lang.RuntimeException e = new java.lang.RuntimeException("here");
            e.fillInStackTrace();
            android.util.Log.w(TAG, "Called doRetain when not started: " + this, e);
        } else {
            this.mRetaining = true;
            this.mStarted = false;
            for (int i = this.mLoaders.size() - 1; i >= 0; i--) {
                this.mLoaders.valueAt(i).retain();
            }
        }
    }

    void finishRetain() {
        if (this.mRetaining) {
            if (DEBUG) {
                android.util.Log.v(TAG, "Finished Retaining in " + this);
            }
            this.mRetaining = false;
            for (int i = this.mLoaders.size() - 1; i >= 0; i--) {
                this.mLoaders.valueAt(i).finishRetain();
            }
        }
    }

    void doReportNextStart() {
        for (int i = this.mLoaders.size() - 1; i >= 0; i--) {
            this.mLoaders.valueAt(i).mReportNextStart = true;
        }
    }

    void doReportStart() {
        for (int i = this.mLoaders.size() - 1; i >= 0; i--) {
            this.mLoaders.valueAt(i).reportStart();
        }
    }

    void doDestroy() {
        if (!this.mRetaining) {
            if (DEBUG) {
                android.util.Log.v(TAG, "Destroying Active in " + this);
            }
            for (int i = this.mLoaders.size() - 1; i >= 0; i--) {
                this.mLoaders.valueAt(i).destroy();
            }
            this.mLoaders.clear();
        }
        if (DEBUG) {
            android.util.Log.v(TAG, "Destroying Inactive in " + this);
        }
        for (int i2 = this.mInactiveLoaders.size() - 1; i2 >= 0; i2--) {
            this.mInactiveLoaders.valueAt(i2).destroy();
        }
        this.mInactiveLoaders.clear();
    }

    public java.lang.String toString() {
        java.lang.StringBuilder sb = new java.lang.StringBuilder(128);
        sb.append("LoaderManager{");
        sb.append(java.lang.Integer.toHexString(java.lang.System.identityHashCode(this)));
        sb.append(" in ");
        android.support.v4.util.DebugUtils.buildShortClassTag(this.mActivity, sb);
        sb.append("}}");
        return sb.toString();
    }

    @Override // android.support.v4.app.LoaderManager
    public void dump(java.lang.String prefix, java.io.FileDescriptor fd, java.io.PrintWriter writer, java.lang.String[] args) {
        if (this.mLoaders.size() > 0) {
            writer.print(prefix);
            writer.println("Active Loaders:");
            java.lang.String innerPrefix = prefix + "    ";
            for (int i = 0; i < this.mLoaders.size(); i++) {
                android.support.v4.app.LoaderManagerImpl.LoaderInfo li = this.mLoaders.valueAt(i);
                writer.print(prefix);
                writer.print("  #");
                writer.print(this.mLoaders.keyAt(i));
                writer.print(": ");
                writer.println(li.toString());
                li.dump(innerPrefix, fd, writer, args);
            }
        }
        if (this.mInactiveLoaders.size() > 0) {
            writer.print(prefix);
            writer.println("Inactive Loaders:");
            java.lang.String innerPrefix2 = prefix + "    ";
            for (int i2 = 0; i2 < this.mInactiveLoaders.size(); i2++) {
                android.support.v4.app.LoaderManagerImpl.LoaderInfo li2 = this.mInactiveLoaders.valueAt(i2);
                writer.print(prefix);
                writer.print("  #");
                writer.print(this.mInactiveLoaders.keyAt(i2));
                writer.print(": ");
                writer.println(li2.toString());
                li2.dump(innerPrefix2, fd, writer, args);
            }
        }
    }

    @Override // android.support.v4.app.LoaderManager
    public boolean hasRunningLoaders() {
        boolean loadersRunning = false;
        int count = this.mLoaders.size();
        for (int i = 0; i < count; i++) {
            android.support.v4.app.LoaderManagerImpl.LoaderInfo li = this.mLoaders.valueAt(i);
            loadersRunning |= li.mStarted && !li.mDeliveredData;
        }
        return loadersRunning;
    }
}
