package android.support.v4.content;

/* loaded from: classes.dex */
public class Loader<D> {
    android.content.Context mContext;
    int mId;
    android.support.v4.content.Loader.OnLoadCompleteListener<D> mListener;
    boolean mStarted = false;
    boolean mAbandoned = false;
    boolean mReset = true;
    boolean mContentChanged = false;
    boolean mProcessingChange = false;

    public interface OnLoadCompleteListener<D> {
        void onLoadComplete(android.support.v4.content.Loader<D> loader, D d);
    }

    public final class ForceLoadContentObserver extends android.database.ContentObserver {
        public ForceLoadContentObserver() {
            super(new android.os.Handler());
        }

        @Override // android.database.ContentObserver
        public boolean deliverSelfNotifications() {
            return true;
        }

        @Override // android.database.ContentObserver
        public void onChange(boolean selfChange) {
            android.support.v4.content.Loader.this.onContentChanged();
        }
    }

    public Loader(android.content.Context context) {
        this.mContext = context.getApplicationContext();
    }

    public void deliverResult(D data) {
        if (this.mListener != null) {
            this.mListener.onLoadComplete(this, data);
        }
    }

    public android.content.Context getContext() {
        return this.mContext;
    }

    public int getId() {
        return this.mId;
    }

    public void registerListener(int id, android.support.v4.content.Loader.OnLoadCompleteListener<D> listener) {
        if (this.mListener != null) {
            throw new java.lang.IllegalStateException("There is already a listener registered");
        }
        this.mListener = listener;
        this.mId = id;
    }

    public void unregisterListener(android.support.v4.content.Loader.OnLoadCompleteListener<D> listener) {
        if (this.mListener == null) {
            throw new java.lang.IllegalStateException("No listener register");
        }
        if (this.mListener != listener) {
            throw new java.lang.IllegalArgumentException("Attempting to unregister the wrong listener");
        }
        this.mListener = null;
    }

    public boolean isStarted() {
        return this.mStarted;
    }

    public boolean isAbandoned() {
        return this.mAbandoned;
    }

    public boolean isReset() {
        return this.mReset;
    }

    public final void startLoading() {
        this.mStarted = true;
        this.mReset = false;
        this.mAbandoned = false;
        onStartLoading();
    }

    protected void onStartLoading() {
    }

    public void forceLoad() {
        onForceLoad();
    }

    protected void onForceLoad() {
    }

    public void stopLoading() {
        this.mStarted = false;
        onStopLoading();
    }

    protected void onStopLoading() {
    }

    public void abandon() {
        this.mAbandoned = true;
        onAbandon();
    }

    protected void onAbandon() {
    }

    public void reset() {
        onReset();
        this.mReset = true;
        this.mStarted = false;
        this.mAbandoned = false;
        this.mContentChanged = false;
        this.mProcessingChange = false;
    }

    protected void onReset() {
    }

    public boolean takeContentChanged() {
        boolean res = this.mContentChanged;
        this.mContentChanged = false;
        this.mProcessingChange |= res;
        return res;
    }

    public void commitContentChanged() {
        this.mProcessingChange = false;
    }

    public void rollbackContentChanged() {
        if (this.mProcessingChange) {
            this.mContentChanged = true;
        }
    }

    public void onContentChanged() {
        if (this.mStarted) {
            forceLoad();
        } else {
            this.mContentChanged = true;
        }
    }

    public java.lang.String dataToString(D data) {
        java.lang.StringBuilder sb = new java.lang.StringBuilder(64);
        android.support.v4.util.DebugUtils.buildShortClassTag(data, sb);
        sb.append("}");
        return sb.toString();
    }

    public java.lang.String toString() {
        java.lang.StringBuilder sb = new java.lang.StringBuilder(64);
        android.support.v4.util.DebugUtils.buildShortClassTag(this, sb);
        sb.append(" id=");
        sb.append(this.mId);
        sb.append("}");
        return sb.toString();
    }

    public void dump(java.lang.String prefix, java.io.FileDescriptor fd, java.io.PrintWriter writer, java.lang.String[] args) {
        writer.print(prefix);
        writer.print("mId=");
        writer.print(this.mId);
        writer.print(" mListener=");
        writer.println(this.mListener);
        if (this.mStarted || this.mContentChanged || this.mProcessingChange) {
            writer.print(prefix);
            writer.print("mStarted=");
            writer.print(this.mStarted);
            writer.print(" mContentChanged=");
            writer.print(this.mContentChanged);
            writer.print(" mProcessingChange=");
            writer.println(this.mProcessingChange);
        }
        if (this.mAbandoned || this.mReset) {
            writer.print(prefix);
            writer.print("mAbandoned=");
            writer.print(this.mAbandoned);
            writer.print(" mReset=");
            writer.println(this.mReset);
        }
    }
}
