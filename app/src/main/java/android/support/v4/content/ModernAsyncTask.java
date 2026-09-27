package android.support.v4.content;

/* loaded from: classes.dex */
abstract class ModernAsyncTask<Params, Progress, Result> {
    private static final int CORE_POOL_SIZE = 5;
    private static final int KEEP_ALIVE = 1;
    private static final java.lang.String LOG_TAG = "AsyncTask";
    private static final int MAXIMUM_POOL_SIZE = 128;
    private static final int MESSAGE_POST_PROGRESS = 2;
    private static final int MESSAGE_POST_RESULT = 1;
    private static final java.util.concurrent.ThreadFactory sThreadFactory = new java.util.concurrent.ThreadFactory() { // from class: android.support.v4.content.ModernAsyncTask.1
        private final java.util.concurrent.atomic.AtomicInteger mCount = new java.util.concurrent.atomic.AtomicInteger(1);

        @Override // java.util.concurrent.ThreadFactory
        public java.lang.Thread newThread(java.lang.Runnable r) {
            return new java.lang.Thread(r, "ModernAsyncTask #" + this.mCount.getAndIncrement());
        }
    };
    private static final java.util.concurrent.BlockingQueue<java.lang.Runnable> sPoolWorkQueue = new java.util.concurrent.LinkedBlockingQueue(10);
    public static final java.util.concurrent.Executor THREAD_POOL_EXECUTOR = new java.util.concurrent.ThreadPoolExecutor(5, 128, 1, java.util.concurrent.TimeUnit.SECONDS, sPoolWorkQueue, sThreadFactory);
    private static final android.support.v4.content.ModernAsyncTask.InternalHandler sHandler = new android.support.v4.content.ModernAsyncTask.InternalHandler();
    private static volatile java.util.concurrent.Executor sDefaultExecutor = THREAD_POOL_EXECUTOR;
    private volatile android.support.v4.content.ModernAsyncTask.Status mStatus = android.support.v4.content.ModernAsyncTask.Status.PENDING;
    private final java.util.concurrent.atomic.AtomicBoolean mTaskInvoked = new java.util.concurrent.atomic.AtomicBoolean();
    private final android.support.v4.content.ModernAsyncTask.WorkerRunnable<Params, Result> mWorker = new android.support.v4.content.ModernAsyncTask.WorkerRunnable<Params, Result>() { // from class: android.support.v4.content.ModernAsyncTask.2
        @Override // java.util.concurrent.Callable
        public Result call() throws java.lang.Exception {
            android.support.v4.content.ModernAsyncTask.this.mTaskInvoked.set(true);
            android.os.Process.setThreadPriority(10);
            return (Result) android.support.v4.content.ModernAsyncTask.this.postResult(android.support.v4.content.ModernAsyncTask.this.doInBackground(this.mParams));
        }
    };
    private final java.util.concurrent.FutureTask<Result> mFuture = new java.util.concurrent.FutureTask<Result>(this.mWorker) { // from class: android.support.v4.content.ModernAsyncTask.3
        @Override // java.util.concurrent.FutureTask
        protected void done() {
            try {
                Result result = get();
                android.support.v4.content.ModernAsyncTask.this.postResultIfNotInvoked(result);
            } catch (java.lang.InterruptedException e) {
                android.util.Log.w(android.support.v4.content.ModernAsyncTask.LOG_TAG, e);
            } catch (java.util.concurrent.CancellationException e2) {
                android.support.v4.content.ModernAsyncTask.this.postResultIfNotInvoked(null);
            } catch (java.util.concurrent.ExecutionException e3) {
                throw new java.lang.RuntimeException("An error occured while executing doInBackground()", e3.getCause());
            } catch (java.lang.Throwable t) {
                throw new java.lang.RuntimeException("An error occured while executing doInBackground()", t);
            }
        }
    };

    public enum Status {
        PENDING,
        RUNNING,
        FINISHED
    }

    protected abstract Result doInBackground(Params... paramsArr);

    public static void init() {
        sHandler.getLooper();
    }

    public static void setDefaultExecutor(java.util.concurrent.Executor exec) {
        sDefaultExecutor = exec;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void postResultIfNotInvoked(Result result) {
        boolean wasTaskInvoked = this.mTaskInvoked.get();
        if (!wasTaskInvoked) {
            postResult(result);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public Result postResult(Result result) {
        android.os.Message message = sHandler.obtainMessage(1, new android.support.v4.content.ModernAsyncTask.AsyncTaskResult(this, result));
        message.sendToTarget();
        return result;
    }

    public final android.support.v4.content.ModernAsyncTask.Status getStatus() {
        return this.mStatus;
    }

    protected void onPreExecute() {
    }

    protected void onPostExecute(Result result) {
    }

    protected void onProgressUpdate(Progress... values) {
    }

    protected void onCancelled(Result result) {
        onCancelled();
    }

    protected void onCancelled() {
    }

    public final boolean isCancelled() {
        return this.mFuture.isCancelled();
    }

    public final boolean cancel(boolean mayInterruptIfRunning) {
        return this.mFuture.cancel(mayInterruptIfRunning);
    }

    public final Result get() throws java.util.concurrent.ExecutionException, java.lang.InterruptedException {
        return this.mFuture.get();
    }

    public final Result get(long timeout, java.util.concurrent.TimeUnit unit) throws java.util.concurrent.ExecutionException, java.lang.InterruptedException, java.util.concurrent.TimeoutException {
        return this.mFuture.get(timeout, unit);
    }

    public final android.support.v4.content.ModernAsyncTask<Params, Progress, Result> execute(Params... params) {
        return executeOnExecutor(sDefaultExecutor, params);
    }

    public final android.support.v4.content.ModernAsyncTask<Params, Progress, Result> executeOnExecutor(java.util.concurrent.Executor exec, Params... params) {
        if (this.mStatus != android.support.v4.content.ModernAsyncTask.Status.PENDING) {
            switch (this.mStatus) {
                case RUNNING:
                    throw new java.lang.IllegalStateException("Cannot execute task: the task is already running.");
                case FINISHED:
                    throw new java.lang.IllegalStateException("Cannot execute task: the task has already been executed (a task can be executed only once)");
            }
        }
        this.mStatus = android.support.v4.content.ModernAsyncTask.Status.RUNNING;
        onPreExecute();
        this.mWorker.mParams = params;
        exec.execute(this.mFuture);
        return this;
    }

    public static void execute(java.lang.Runnable runnable) {
        sDefaultExecutor.execute(runnable);
    }

    protected final void publishProgress(Progress... values) {
        if (!isCancelled()) {
            sHandler.obtainMessage(2, new android.support.v4.content.ModernAsyncTask.AsyncTaskResult(this, values)).sendToTarget();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void finish(Result result) {
        if (isCancelled()) {
            onCancelled(result);
        } else {
            onPostExecute(result);
        }
        this.mStatus = android.support.v4.content.ModernAsyncTask.Status.FINISHED;
    }

    private static class InternalHandler extends android.os.Handler {
        private InternalHandler() {
        }

        @Override // android.os.Handler
        public void handleMessage(android.os.Message msg) {
            android.support.v4.content.ModernAsyncTask.AsyncTaskResult result = (android.support.v4.content.ModernAsyncTask.AsyncTaskResult) msg.obj;
            switch (msg.what) {
                case 1:
                    result.mTask.finish(result.mData[0]);
                    break;
                case 2:
                    result.mTask.onProgressUpdate(result.mData);
                    break;
            }
        }
    }

    private static abstract class WorkerRunnable<Params, Result> implements java.util.concurrent.Callable<Result> {
        Params[] mParams;

        private WorkerRunnable() {
        }
    }

    private static class AsyncTaskResult<Data> {
        final Data[] mData;
        final android.support.v4.content.ModernAsyncTask mTask;

        AsyncTaskResult(android.support.v4.content.ModernAsyncTask task, Data... data) {
            this.mTask = task;
            this.mData = data;
        }
    }
}
