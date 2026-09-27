package android.support.v4.widget;

/* loaded from: classes.dex */
class CursorFilter extends android.widget.Filter {
    android.support.v4.widget.CursorFilter.CursorFilterClient mClient;

    interface CursorFilterClient {
        void changeCursor(android.database.Cursor cursor);

        java.lang.CharSequence convertToString(android.database.Cursor cursor);

        android.database.Cursor getCursor();

        android.database.Cursor runQueryOnBackgroundThread(java.lang.CharSequence charSequence);
    }

    CursorFilter(android.support.v4.widget.CursorFilter.CursorFilterClient client) {
        this.mClient = client;
    }

    @Override // android.widget.Filter
    public java.lang.CharSequence convertResultToString(java.lang.Object resultValue) {
        return this.mClient.convertToString((android.database.Cursor) resultValue);
    }

    @Override // android.widget.Filter
    protected android.widget.Filter.FilterResults performFiltering(java.lang.CharSequence constraint) {
        android.database.Cursor cursor = this.mClient.runQueryOnBackgroundThread(constraint);
        android.widget.Filter.FilterResults results = new android.widget.Filter.FilterResults();
        if (cursor != null) {
            results.count = cursor.getCount();
            results.values = cursor;
        } else {
            results.count = 0;
            results.values = null;
        }
        return results;
    }

    @Override // android.widget.Filter
    protected void publishResults(java.lang.CharSequence constraint, android.widget.Filter.FilterResults results) {
        android.database.Cursor oldCursor = this.mClient.getCursor();
        if (results.values != null && results.values != oldCursor) {
            this.mClient.changeCursor((android.database.Cursor) results.values);
        }
    }
}
