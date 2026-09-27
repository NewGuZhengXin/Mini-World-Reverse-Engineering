package android.support.v4.widget;

/* loaded from: classes.dex */
public class ListViewAutoScrollHelper extends android.support.v4.widget.AutoScrollHelper {
    private final android.widget.ListView mTarget;

    public ListViewAutoScrollHelper(android.widget.ListView target) {
        super(target);
        this.mTarget = target;
    }

    @Override // android.support.v4.widget.AutoScrollHelper
    public void scrollTargetBy(int deltaX, int deltaY) {
        android.view.View firstView;
        android.widget.ListView target = this.mTarget;
        int firstPosition = target.getFirstVisiblePosition();
        if (firstPosition != -1 && (firstView = target.getChildAt(0)) != null) {
            int newTop = firstView.getTop() - deltaY;
            target.setSelectionFromTop(firstPosition, newTop);
        }
    }

    @Override // android.support.v4.widget.AutoScrollHelper
    public boolean canTargetScrollHorizontally(int direction) {
        return false;
    }

    @Override // android.support.v4.widget.AutoScrollHelper
    public boolean canTargetScrollVertically(int direction) {
        android.widget.ListView target = this.mTarget;
        int itemCount = target.getCount();
        int childCount = target.getChildCount();
        int firstPosition = target.getFirstVisiblePosition();
        int lastPosition = firstPosition + childCount;
        if (direction > 0) {
            if (lastPosition >= itemCount) {
                android.view.View lastView = target.getChildAt(childCount - 1);
                if (lastView.getBottom() <= target.getHeight()) {
                    return false;
                }
            }
        } else {
            if (direction >= 0) {
                return false;
            }
            if (firstPosition <= 0) {
                android.view.View firstView = target.getChildAt(0);
                if (firstView.getTop() >= 0) {
                    return false;
                }
            }
        }
        return true;
    }
}
