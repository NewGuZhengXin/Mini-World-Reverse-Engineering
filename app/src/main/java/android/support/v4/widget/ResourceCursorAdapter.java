package android.support.v4.widget;

/* loaded from: classes.dex */
public abstract class ResourceCursorAdapter extends android.support.v4.widget.CursorAdapter {
    private int mDropDownLayout;
    private android.view.LayoutInflater mInflater;
    private int mLayout;

    @java.lang.Deprecated
    public ResourceCursorAdapter(android.content.Context context, int layout, android.database.Cursor c) {
        super(context, c);
        this.mDropDownLayout = layout;
        this.mLayout = layout;
        this.mInflater = (android.view.LayoutInflater) context.getSystemService("layout_inflater");
    }

    public ResourceCursorAdapter(android.content.Context context, int layout, android.database.Cursor c, boolean autoRequery) {
        super(context, c, autoRequery);
        this.mDropDownLayout = layout;
        this.mLayout = layout;
        this.mInflater = (android.view.LayoutInflater) context.getSystemService("layout_inflater");
    }

    public ResourceCursorAdapter(android.content.Context context, int layout, android.database.Cursor c, int flags) {
        super(context, c, flags);
        this.mDropDownLayout = layout;
        this.mLayout = layout;
        this.mInflater = (android.view.LayoutInflater) context.getSystemService("layout_inflater");
    }

    @Override // android.support.v4.widget.CursorAdapter
    public android.view.View newView(android.content.Context context, android.database.Cursor cursor, android.view.ViewGroup parent) {
        return this.mInflater.inflate(this.mLayout, parent, false);
    }

    @Override // android.support.v4.widget.CursorAdapter
    public android.view.View newDropDownView(android.content.Context context, android.database.Cursor cursor, android.view.ViewGroup parent) {
        return this.mInflater.inflate(this.mDropDownLayout, parent, false);
    }

    public void setViewResource(int layout) {
        this.mLayout = layout;
    }

    public void setDropDownViewResource(int dropDownLayout) {
        this.mDropDownLayout = dropDownLayout;
    }
}
