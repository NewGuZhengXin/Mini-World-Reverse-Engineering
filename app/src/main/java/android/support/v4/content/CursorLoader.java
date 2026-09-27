package android.support.v4.content;

/* loaded from: classes.dex */
public class CursorLoader extends android.support.v4.content.AsyncTaskLoader<android.database.Cursor> {
    android.database.Cursor mCursor;
    final android.support.v4.content.Loader<android.database.Cursor>.ForceLoadContentObserver mObserver;
    java.lang.String[] mProjection;
    java.lang.String mSelection;
    java.lang.String[] mSelectionArgs;
    java.lang.String mSortOrder;
    android.net.Uri mUri;

    /* JADX WARN: Can't rename method to resolve collision */
    @Override // android.support.v4.content.AsyncTaskLoader
    public android.database.Cursor loadInBackground() {
        android.database.Cursor cursor = getContext().getContentResolver().query(this.mUri, this.mProjection, this.mSelection, this.mSelectionArgs, this.mSortOrder);
        if (cursor != null) {
            cursor.getCount();
            cursor.registerContentObserver(this.mObserver);
        }
        return cursor;
    }

    @Override // android.support.v4.content.Loader
    public void deliverResult(android.database.Cursor cursor) {
        if (isReset()) {
            if (cursor != null) {
                cursor.close();
                return;
            }
            return;
        }
        android.database.Cursor oldCursor = this.mCursor;
        this.mCursor = cursor;
        if (isStarted()) {
            super.deliverResult(cursor); // NOTE(jadx-fix): smali is invoke-super deliverResult(Ljava/lang/Object;)V with the Cursor argument; jadx inserted a bogus CursorLoader cast
        }
        if (oldCursor != null && oldCursor != cursor && !oldCursor.isClosed()) {
            oldCursor.close();
        }
    }

    public CursorLoader(android.content.Context context) {
        super(context);
        this.mObserver = new android.support.v4.content.Loader.ForceLoadContentObserver();
    }

    public CursorLoader(android.content.Context context, android.net.Uri uri, java.lang.String[] projection, java.lang.String selection, java.lang.String[] selectionArgs, java.lang.String sortOrder) {
        super(context);
        this.mObserver = new android.support.v4.content.Loader.ForceLoadContentObserver();
        this.mUri = uri;
        this.mProjection = projection;
        this.mSelection = selection;
        this.mSelectionArgs = selectionArgs;
        this.mSortOrder = sortOrder;
    }

    @Override // android.support.v4.content.Loader
    protected void onStartLoading() {
        if (this.mCursor != null) {
            deliverResult(this.mCursor);
        }
        if (takeContentChanged() || this.mCursor == null) {
            forceLoad();
        }
    }

    @Override // android.support.v4.content.Loader
    protected void onStopLoading() {
        cancelLoad();
    }

    @Override // android.support.v4.content.AsyncTaskLoader
    public void onCanceled(android.database.Cursor cursor) {
        if (cursor != null && !cursor.isClosed()) {
            cursor.close();
        }
    }

    @Override // android.support.v4.content.Loader
    protected void onReset() {
        super.onReset();
        onStopLoading();
        if (this.mCursor != null && !this.mCursor.isClosed()) {
            this.mCursor.close();
        }
        this.mCursor = null;
    }

    public android.net.Uri getUri() {
        return this.mUri;
    }

    public void setUri(android.net.Uri uri) {
        this.mUri = uri;
    }

    public java.lang.String[] getProjection() {
        return this.mProjection;
    }

    public void setProjection(java.lang.String[] projection) {
        this.mProjection = projection;
    }

    public java.lang.String getSelection() {
        return this.mSelection;
    }

    public void setSelection(java.lang.String selection) {
        this.mSelection = selection;
    }

    public java.lang.String[] getSelectionArgs() {
        return this.mSelectionArgs;
    }

    public void setSelectionArgs(java.lang.String[] selectionArgs) {
        this.mSelectionArgs = selectionArgs;
    }

    public java.lang.String getSortOrder() {
        return this.mSortOrder;
    }

    public void setSortOrder(java.lang.String sortOrder) {
        this.mSortOrder = sortOrder;
    }

    @Override // android.support.v4.content.AsyncTaskLoader, android.support.v4.content.Loader
    public void dump(java.lang.String prefix, java.io.FileDescriptor fd, java.io.PrintWriter writer, java.lang.String[] args) {
        super.dump(prefix, fd, writer, args);
        writer.print(prefix);
        writer.print("mUri=");
        writer.println(this.mUri);
        writer.print(prefix);
        writer.print("mProjection=");
        writer.println(java.util.Arrays.toString(this.mProjection));
        writer.print(prefix);
        writer.print("mSelection=");
        writer.println(this.mSelection);
        writer.print(prefix);
        writer.print("mSelectionArgs=");
        writer.println(java.util.Arrays.toString(this.mSelectionArgs));
        writer.print(prefix);
        writer.print("mSortOrder=");
        writer.println(this.mSortOrder);
        writer.print(prefix);
        writer.print("mCursor=");
        writer.println(this.mCursor);
        writer.print(prefix);
        writer.print("mContentChanged=");
        writer.println(this.mContentChanged);
    }
}
