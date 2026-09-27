package android.support.v4.content;

/* loaded from: classes.dex */
public abstract class AsyncTaskLoader<D> extends android.support.v4.content.Loader<D> {
    static final boolean DEBUG = false;
    static final java.lang.String TAG = "AsyncTaskLoader";
    volatile android.support.v4.content.AsyncTaskLoader<D>.LoadTask mCancellingTask;
    android.os.Handler mHandler;
    long mLastLoadCompleteTime;
    volatile android.support.v4.content.AsyncTaskLoader<D>.LoadTask mTask;
    long mUpdateThrottle;

    public abstract D loadInBackground();

    final class LoadTask extends android.support.v4.content.ModernAsyncTask<java.lang.Void, java.lang.Void, D> implements java.lang.Runnable {
        private java.util.concurrent.CountDownLatch done = new java.util.concurrent.CountDownLatch(1);
        D result;
        boolean waiting;

        LoadTask() {
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.support.v4.content.ModernAsyncTask
        public D doInBackground(java.lang.Void... voidArr) {
            this.result = (D) android.support.v4.content.AsyncTaskLoader.this.onLoadInBackground();
            return this.result;
        }

        @Override // android.support.v4.content.ModernAsyncTask
        protected void onPostExecute(D data) {
            try {
                android.support.v4.content.AsyncTaskLoader.this.dispatchOnLoadComplete(this, data);
            } finally {
                this.done.countDown();
            }
        }

        @Override // android.support.v4.content.ModernAsyncTask
        protected void onCancelled() {
            try {
                android.support.v4.content.AsyncTaskLoader.this.dispatchOnCancelled(this, this.result);
            } finally {
                this.done.countDown();
            }
        }

        @Override // java.lang.Runnable
        public void run() {
            this.waiting = android.support.v4.content.AsyncTaskLoader.DEBUG;
            android.support.v4.content.AsyncTaskLoader.this.executePendingTask();
        }
    }

    public AsyncTaskLoader(android.content.Context context) {
        super(context);
        this.mLastLoadCompleteTime = -10000L;
    }

    public void setUpdateThrottle(long delayMS) {
        this.mUpdateThrottle = delayMS;
        if (delayMS != 0) {
            this.mHandler = new android.os.Handler();
        }
    }

    @Override // android.support.v4.content.Loader
    protected void onForceLoad() {
        super.onForceLoad();
        cancelLoad();
        this.mTask = new android.support.v4.content.AsyncTaskLoader.LoadTask();
        executePendingTask();
    }

    public boolean cancelLoad() {
        boolean cancelled = DEBUG;
        if (this.mTask != null) {
            if (this.mCancellingTask != null) {
                if (this.mTask.waiting) {
                    this.mTask.waiting = DEBUG;
                    this.mHandler.removeCallbacks(this.mTask);
                }
                this.mTask = null;
            } else if (this.mTask.waiting) {
                this.mTask.waiting = DEBUG;
                this.mHandler.removeCallbacks(this.mTask);
                this.mTask = null;
            } else {
                cancelled = this.mTask.cancel(DEBUG);
                if (cancelled) {
                    this.mCancellingTask = this.mTask;
                }
                this.mTask = null;
            }
        }
        return cancelled;
    }

    public void onCanceled(D data) {
    }

    void executePendingTask() {
        if (this.mCancellingTask == null && this.mTask != null) {
            if (this.mTask.waiting) {
                this.mTask.waiting = DEBUG;
                this.mHandler.removeCallbacks(this.mTask);
            }
            if (this.mUpdateThrottle > 0) {
                long now = android.os.SystemClock.uptimeMillis();
                if (now < this.mLastLoadCompleteTime + this.mUpdateThrottle) {
                    this.mTask.waiting = true;
                    this.mHandler.postAtTime(this.mTask, this.mLastLoadCompleteTime + this.mUpdateThrottle);
                    return;
                }
            }
            this.mTask.executeOnExecutor(android.support.v4.content.ModernAsyncTask.THREAD_POOL_EXECUTOR, (java.lang.Void[]) null);
        }
    }

    void dispatchOnCancelled(android.support.v4.content.AsyncTaskLoader<D>.LoadTask task, D data) {
        onCanceled(data);
        if (this.mCancellingTask == task) {
            rollbackContentChanged();
            this.mLastLoadCompleteTime = android.os.SystemClock.uptimeMillis();
            this.mCancellingTask = null;
            executePendingTask();
        }
    }

    void dispatchOnLoadComplete(android.support.v4.content.AsyncTaskLoader<D>.LoadTask task, D data) {
        if (this.mTask != task) {
            dispatchOnCancelled(task, data);
            return;
        }
        if (isAbandoned()) {
            onCanceled(data);
            return;
        }
        commitContentChanged();
        this.mLastLoadCompleteTime = android.os.SystemClock.uptimeMillis();
        this.mTask = null;
        deliverResult(data);
    }

    protected D onLoadInBackground() {
        return loadInBackground();
    }

    public void waitForLoader() throws java.lang.InterruptedException {
        android.support.v4.content.AsyncTaskLoader<D>.LoadTask task = this.mTask;
        if (task != null) {
            try {
                ((android.support.v4.content.AsyncTaskLoader.LoadTask) task).done.await();
            } catch (java.lang.InterruptedException e) {
            }
        }
    }

    @Override // android.support.v4.content.Loader
    public void dump(java.lang.String prefix, java.io.FileDescriptor fd, java.io.PrintWriter writer, java.lang.String[] args) {
        super.dump(prefix, fd, writer, args);
        if (this.mTask != null) {
            writer.print(prefix);
            writer.print("mTask=");
            writer.print(this.mTask);
            writer.print(" waiting=");
            writer.println(this.mTask.waiting);
        }
        if (this.mCancellingTask != null) {
            writer.print(prefix);
            writer.print("mCancellingTask=");
            writer.print(this.mCancellingTask);
            writer.print(" waiting=");
            writer.println(this.mCancellingTask.waiting);
        }
        if (this.mUpdateThrottle != 0) {
            writer.print(prefix);
            writer.print("mUpdateThrottle=");
            android.support.v4.util.TimeUtils.formatDuration(this.mUpdateThrottle, writer);
            writer.print(" mLastLoadCompleteTime=");
            android.support.v4.util.TimeUtils.formatDuration(this.mLastLoadCompleteTime, android.os.SystemClock.uptimeMillis(), writer);
            writer.println();
        }
    }
}
