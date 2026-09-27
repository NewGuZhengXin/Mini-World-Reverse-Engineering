package android.support.v4.widget;

/* loaded from: classes.dex */
public class SimpleCursorAdapter extends android.support.v4.widget.ResourceCursorAdapter {
    private android.support.v4.widget.SimpleCursorAdapter.CursorToStringConverter mCursorToStringConverter;
    protected int[] mFrom;
    java.lang.String[] mOriginalFrom;
    private int mStringConversionColumn;
    protected int[] mTo;
    private android.support.v4.widget.SimpleCursorAdapter.ViewBinder mViewBinder;

    public interface CursorToStringConverter {
        java.lang.CharSequence convertToString(android.database.Cursor cursor);
    }

    public interface ViewBinder {
        boolean setViewValue(android.view.View view, android.database.Cursor cursor, int i);
    }

    @java.lang.Deprecated
    public SimpleCursorAdapter(android.content.Context context, int layout, android.database.Cursor c, java.lang.String[] from, int[] to) {
        super(context, layout, c);
        this.mStringConversionColumn = -1;
        this.mTo = to;
        this.mOriginalFrom = from;
        findColumns(from);
    }

    public SimpleCursorAdapter(android.content.Context context, int layout, android.database.Cursor c, java.lang.String[] from, int[] to, int flags) {
        super(context, layout, c, flags);
        this.mStringConversionColumn = -1;
        this.mTo = to;
        this.mOriginalFrom = from;
        findColumns(from);
    }

    @Override // android.support.v4.widget.CursorAdapter
    public void bindView(android.view.View view, android.content.Context context, android.database.Cursor cursor) {
        android.support.v4.widget.SimpleCursorAdapter.ViewBinder binder = this.mViewBinder;
        int count = this.mTo.length;
        int[] from = this.mFrom;
        int[] to = this.mTo;
        for (int i = 0; i < count; i++) {
            android.view.View v = view.findViewById(to[i]);
            if (v != null) {
                boolean bound = false;
                if (binder != null) {
                    bound = binder.setViewValue(v, cursor, from[i]);
                }
                if (bound) {
                    continue;
                } else {
                    java.lang.String text = cursor.getString(from[i]);
                    if (text == null) {
                        text = "";
                    }
                    if (v instanceof android.widget.TextView) {
                        setViewText((android.widget.TextView) v, text);
                    } else if (v instanceof android.widget.ImageView) {
                        setViewImage((android.widget.ImageView) v, text);
                    } else {
                        throw new java.lang.IllegalStateException(v.getClass().getName() + " is not a  view that can be bounds by this SimpleCursorAdapter");
                    }
                }
            }
        }
    }

    public android.support.v4.widget.SimpleCursorAdapter.ViewBinder getViewBinder() {
        return this.mViewBinder;
    }

    public void setViewBinder(android.support.v4.widget.SimpleCursorAdapter.ViewBinder viewBinder) {
        this.mViewBinder = viewBinder;
    }

    public void setViewImage(android.widget.ImageView v, java.lang.String value) {
        try {
            v.setImageResource(java.lang.Integer.parseInt(value));
        } catch (java.lang.NumberFormatException e) {
            v.setImageURI(android.net.Uri.parse(value));
        }
    }

    public void setViewText(android.widget.TextView v, java.lang.String text) {
        v.setText(text);
    }

    public int getStringConversionColumn() {
        return this.mStringConversionColumn;
    }

    public void setStringConversionColumn(int stringConversionColumn) {
        this.mStringConversionColumn = stringConversionColumn;
    }

    public android.support.v4.widget.SimpleCursorAdapter.CursorToStringConverter getCursorToStringConverter() {
        return this.mCursorToStringConverter;
    }

    public void setCursorToStringConverter(android.support.v4.widget.SimpleCursorAdapter.CursorToStringConverter cursorToStringConverter) {
        this.mCursorToStringConverter = cursorToStringConverter;
    }

    @Override // android.support.v4.widget.CursorAdapter, android.support.v4.widget.CursorFilter.CursorFilterClient
    public java.lang.CharSequence convertToString(android.database.Cursor cursor) {
        if (this.mCursorToStringConverter != null) {
            return this.mCursorToStringConverter.convertToString(cursor);
        }
        if (this.mStringConversionColumn > -1) {
            return cursor.getString(this.mStringConversionColumn);
        }
        return super.convertToString(cursor);
    }

    private void findColumns(java.lang.String[] from) {
        if (this.mCursor != null) {
            int count = from.length;
            if (this.mFrom == null || this.mFrom.length != count) {
                this.mFrom = new int[count];
            }
            for (int i = 0; i < count; i++) {
                this.mFrom[i] = this.mCursor.getColumnIndexOrThrow(from[i]);
            }
            return;
        }
        this.mFrom = null;
    }

    @Override // android.support.v4.widget.CursorAdapter
    public android.database.Cursor swapCursor(android.database.Cursor c) {
        android.database.Cursor res = super.swapCursor(c);
        findColumns(this.mOriginalFrom);
        return res;
    }

    public void changeCursorAndColumns(android.database.Cursor c, java.lang.String[] from, int[] to) {
        this.mOriginalFrom = from;
        this.mTo = to;
        super.changeCursor(c);
        findColumns(this.mOriginalFrom);
    }
}
