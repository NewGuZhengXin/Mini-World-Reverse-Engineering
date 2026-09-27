package android.support.v4.app;

/* loaded from: classes.dex */
class NoSaveStateFrameLayout extends android.widget.FrameLayout {
    static android.view.ViewGroup wrap(android.view.View child) {
        android.support.v4.app.NoSaveStateFrameLayout wrapper = new android.support.v4.app.NoSaveStateFrameLayout(child.getContext());
        android.view.ViewGroup.LayoutParams childParams = child.getLayoutParams();
        if (childParams != null) {
            wrapper.setLayoutParams(childParams);
        }
        android.widget.FrameLayout.LayoutParams lp = new android.widget.FrameLayout.LayoutParams(-1, -1);
        child.setLayoutParams(lp);
        wrapper.addView(child);
        return wrapper;
    }

    public NoSaveStateFrameLayout(android.content.Context context) {
        super(context);
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void dispatchSaveInstanceState(android.util.SparseArray<android.os.Parcelable> container) {
        dispatchFreezeSelfOnly(container);
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void dispatchRestoreInstanceState(android.util.SparseArray<android.os.Parcelable> container) {
        dispatchThawSelfOnly(container);
    }
}
