package android.support.v4.widget;

/* loaded from: classes.dex */
public abstract class CursorAdapter extends android.widget.BaseAdapter implements android.widget.Filterable, android.support.v4.widget.CursorFilter.CursorFilterClient {

    @java.lang.Deprecated
    public static final int FLAG_AUTO_REQUERY = 1;
    public static final int FLAG_REGISTER_CONTENT_OBSERVER = 2;
    protected boolean mAutoRequery;
    protected android.support.v4.widget.CursorAdapter.ChangeObserver mChangeObserver;
    protected android.content.Context mContext;
    protected android.database.Cursor mCursor;
    protected android.support.v4.widget.CursorFilter mCursorFilter;
    protected android.database.DataSetObserver mDataSetObserver;
    protected boolean mDataValid;
    protected android.widget.FilterQueryProvider mFilterQueryProvider;
    protected int mRowIDColumn;

    public abstract void bindView(android.view.View view, android.content.Context context, android.database.Cursor cursor);

    public abstract android.view.View newView(android.content.Context context, android.database.Cursor cursor, android.view.ViewGroup viewGroup);

    @java.lang.Deprecated
    public CursorAdapter(android.content.Context context, android.database.Cursor c) {
        init(context, c, 1);
    }

    public CursorAdapter(android.content.Context context, android.database.Cursor c, boolean autoRequery) {
        init(context, c, autoRequery ? 1 : 2);
    }

    public CursorAdapter(android.content.Context context, android.database.Cursor c, int flags) {
        init(context, c, flags);
    }

    @java.lang.Deprecated
    protected void init(android.content.Context context, android.database.Cursor c, boolean autoRequery) {
        init(context, c, autoRequery ? 1 : 2);
    }

    void init(android.content.Context context, android.database.Cursor c, int flags) {
        if ((flags & 1) == 1) {
            flags |= 2;
            this.mAutoRequery = true;
        } else {
            this.mAutoRequery = false;
        }
        boolean cursorPresent = c != null;
        this.mCursor = c;
        this.mDataValid = cursorPresent;
        this.mContext = context;
        this.mRowIDColumn = cursorPresent ? c.getColumnIndexOrThrow("_id") : -1;
        if ((flags & 2) == 2) {
            this.mChangeObserver = new android.support.v4.widget.CursorAdapter.ChangeObserver();
            this.mDataSetObserver = new android.support.v4.widget.CursorAdapter.MyDataSetObserver();
        } else {
            this.mChangeObserver = null;
            this.mDataSetObserver = null;
        }
        if (cursorPresent) {
            if (this.mChangeObserver != null) {
                c.registerContentObserver(this.mChangeObserver);
            }
            if (this.mDataSetObserver != null) {
                c.registerDataSetObserver(this.mDataSetObserver);
            }
        }
    }

    @Override // android.support.v4.widget.CursorFilter.CursorFilterClient
    public android.database.Cursor getCursor() {
        return this.mCursor;
    }

    @Override // android.widget.Adapter
    public int getCount() {
        if (!this.mDataValid || this.mCursor == null) {
            return 0;
        }
        return this.mCursor.getCount();
    }

    @Override // android.widget.Adapter
    public java.lang.Object getItem(int position) {
        if (!this.mDataValid || this.mCursor == null) {
            return null;
        }
        this.mCursor.moveToPosition(position);
        return this.mCursor;
    }

    @Override // android.widget.Adapter
    public long getItemId(int position) {
        if (this.mDataValid && this.mCursor != null && this.mCursor.moveToPosition(position)) {
            return this.mCursor.getLong(this.mRowIDColumn);
        }
        return 0L;
    }

    @Override // android.widget.BaseAdapter, android.widget.Adapter
    public boolean hasStableIds() {
        return true;
    }

    @Override // android.widget.Adapter
    public android.view.View getView(int position, android.view.View convertView, android.view.ViewGroup parent) {
        android.view.View v;
        if (!this.mDataValid) {
            throw new java.lang.IllegalStateException("this should only be called when the cursor is valid");
        }
        if (!this.mCursor.moveToPosition(position)) {
            throw new java.lang.IllegalStateException("couldn't move cursor to position " + position);
        }
        if (convertView == null) {
            v = newView(this.mContext, this.mCursor, parent);
        } else {
            v = convertView;
        }
        bindView(v, this.mContext, this.mCursor);
        return v;
    }

    @Override // android.widget.BaseAdapter, android.widget.SpinnerAdapter
    public android.view.View getDropDownView(int position, android.view.View convertView, android.view.ViewGroup parent) {
        android.view.View v;
        if (this.mDataValid) {
            this.mCursor.moveToPosition(position);
            if (convertView == null) {
                v = newDropDownView(this.mContext, this.mCursor, parent);
            } else {
                v = convertView;
            }
            bindView(v, this.mContext, this.mCursor);
            return v;
        }
        return null;
    }

    public android.view.View newDropDownView(android.content.Context context, android.database.Cursor cursor, android.view.ViewGroup parent) {
        return newView(context, cursor, parent);
    }

    @Override // android.support.v4.widget.CursorFilter.CursorFilterClient
    public void changeCursor(android.database.Cursor cursor) {
        android.database.Cursor old = swapCursor(cursor);
        if (old != null) {
            old.close();
        }
    }

    public android.database.Cursor swapCursor(android.database.Cursor newCursor) {
        if (newCursor == this.mCursor) {
            return null;
        }
        android.database.Cursor oldCursor = this.mCursor;
        if (oldCursor != null) {
            if (this.mChangeObserver != null) {
                oldCursor.unregisterContentObserver(this.mChangeObserver);
            }
            if (this.mDataSetObserver != null) {
                oldCursor.unregisterDataSetObserver(this.mDataSetObserver);
            }
        }
        this.mCursor = newCursor;
        if (newCursor != null) {
            if (this.mChangeObserver != null) {
                newCursor.registerContentObserver(this.mChangeObserver);
            }
            if (this.mDataSetObserver != null) {
                newCursor.registerDataSetObserver(this.mDataSetObserver);
            }
            this.mRowIDColumn = newCursor.getColumnIndexOrThrow("_id");
            this.mDataValid = true;
            notifyDataSetChanged();
            return oldCursor;
        }
        this.mRowIDColumn = -1;
        this.mDataValid = false;
        notifyDataSetInvalidated();
        return oldCursor;
    }

    @Override // android.support.v4.widget.CursorFilter.CursorFilterClient
    public java.lang.CharSequence convertToString(android.database.Cursor cursor) {
        return cursor == null ? "" : cursor.toString();
    }

    @Override // android.support.v4.widget.CursorFilter.CursorFilterClient
    public android.database.Cursor runQueryOnBackgroundThread(java.lang.CharSequence constraint) {
        return this.mFilterQueryProvider != null ? this.mFilterQueryProvider.runQuery(constraint) : this.mCursor;
    }

    @Override // android.widget.Filterable
    public android.widget.Filter getFilter() {
        if (this.mCursorFilter == null) {
            this.mCursorFilter = new android.support.v4.widget.CursorFilter(this);
        }
        return this.mCursorFilter;
    }

    public android.widget.FilterQueryProvider getFilterQueryProvider() {
        return this.mFilterQueryProvider;
    }

    public void setFilterQueryProvider(android.widget.FilterQueryProvider filterQueryProvider) {
        this.mFilterQueryProvider = filterQueryProvider;
    }

    protected void onContentChanged() {
        if (this.mAutoRequery && this.mCursor != null && !this.mCursor.isClosed()) {
            this.mDataValid = this.mCursor.requery();
        }
    }

    private class ChangeObserver extends android.database.ContentObserver {
        public ChangeObserver() {
            super(new android.os.Handler());
        }

        @Override // android.database.ContentObserver
        public boolean deliverSelfNotifications() {
            return true;
        }

        @Override // android.database.ContentObserver
        public void onChange(boolean selfChange) {
            android.support.v4.widget.CursorAdapter.this.onContentChanged();
        }
    }

    private class MyDataSetObserver extends android.database.DataSetObserver {
        private MyDataSetObserver() {
        }

        @Override // android.database.DataSetObserver
        public void onChanged() {
            android.support.v4.widget.CursorAdapter.this.mDataValid = true;
            android.support.v4.widget.CursorAdapter.this.notifyDataSetChanged();
        }

        @Override // android.database.DataSetObserver
        public void onInvalidated() {
            android.support.v4.widget.CursorAdapter.this.mDataValid = false;
            android.support.v4.widget.CursorAdapter.this.notifyDataSetInvalidated();
        }
    }
}
