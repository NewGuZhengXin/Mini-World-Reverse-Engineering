package android.support.v4.widget;

/* loaded from: classes.dex */
public abstract class ExploreByTouchHelper extends android.support.v4.view.AccessibilityDelegateCompat {
    private static final java.lang.String DEFAULT_CLASS_NAME = android.view.View.class.getName();
    public static final int INVALID_ID = Integer.MIN_VALUE;
    private final android.view.accessibility.AccessibilityManager mManager;
    private android.support.v4.widget.ExploreByTouchHelper.ExploreByTouchNodeProvider mNodeProvider;
    private final android.view.View mView;
    private final android.graphics.Rect mTempScreenRect = new android.graphics.Rect();
    private final android.graphics.Rect mTempParentRect = new android.graphics.Rect();
    private final android.graphics.Rect mTempVisibleRect = new android.graphics.Rect();
    private final int[] mTempGlobalRect = new int[2];
    private int mFocusedVirtualViewId = INVALID_ID;
    private int mHoveredVirtualViewId = INVALID_ID;

    protected abstract int getVirtualViewAt(float f, float f2);

    protected abstract void getVisibleVirtualViews(java.util.List<java.lang.Integer> list);

    protected abstract boolean onPerformActionForVirtualView(int i, int i2, android.os.Bundle bundle);

    protected abstract void onPopulateEventForVirtualView(int i, android.view.accessibility.AccessibilityEvent accessibilityEvent);

    protected abstract void onPopulateNodeForVirtualView(int i, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat accessibilityNodeInfoCompat);

    public ExploreByTouchHelper(android.view.View forView) {
        if (forView == null) {
            throw new java.lang.IllegalArgumentException("View may not be null");
        }
        this.mView = forView;
        android.content.Context context = forView.getContext();
        this.mManager = (android.view.accessibility.AccessibilityManager) context.getSystemService("accessibility");
    }

    @Override // android.support.v4.view.AccessibilityDelegateCompat
    public android.support.v4.view.accessibility.AccessibilityNodeProviderCompat getAccessibilityNodeProvider(android.view.View host) {
        if (this.mNodeProvider == null) {
            this.mNodeProvider = new android.support.v4.widget.ExploreByTouchHelper.ExploreByTouchNodeProvider();
        }
        return this.mNodeProvider;
    }

    public boolean dispatchHoverEvent(android.view.MotionEvent event) {
        if (!this.mManager.isEnabled() || !android.support.v4.view.accessibility.AccessibilityManagerCompat.isTouchExplorationEnabled(this.mManager)) {
            return false;
        }
        switch (event.getAction()) {
            case android.support.v4.view.MotionEventCompat.ACTION_HOVER_MOVE /* 7 */:
            case 9:
                int virtualViewId = getVirtualViewAt(event.getX(), event.getY());
                updateHoveredVirtualView(virtualViewId);
                break;
            case 10:
                if (this.mFocusedVirtualViewId != Integer.MIN_VALUE) {
                    updateHoveredVirtualView(INVALID_ID);
                    break;
                }
                break;
        }
        return false;
    }

    public boolean sendEventForVirtualView(int virtualViewId, int eventType) {
        android.view.ViewParent parent;
        if (virtualViewId == Integer.MIN_VALUE || !this.mManager.isEnabled() || (parent = this.mView.getParent()) == null) {
            return false;
        }
        android.view.accessibility.AccessibilityEvent event = createEvent(virtualViewId, eventType);
        return android.support.v4.view.ViewParentCompat.requestSendAccessibilityEvent(parent, this.mView, event);
    }

    public void invalidateRoot() {
        invalidateVirtualView(-1);
    }

    public void invalidateVirtualView(int virtualViewId) {
        sendEventForVirtualView(virtualViewId, 2048);
    }

    public int getFocusedVirtualView() {
        return this.mFocusedVirtualViewId;
    }

    private void updateHoveredVirtualView(int virtualViewId) {
        if (this.mHoveredVirtualViewId != virtualViewId) {
            int previousVirtualViewId = this.mHoveredVirtualViewId;
            this.mHoveredVirtualViewId = virtualViewId;
            sendEventForVirtualView(virtualViewId, 128);
            sendEventForVirtualView(previousVirtualViewId, 256);
        }
    }

    private android.view.accessibility.AccessibilityEvent createEvent(int virtualViewId, int eventType) {
        switch (virtualViewId) {
            case -1:
                return createEventForHost(eventType);
            default:
                return createEventForChild(virtualViewId, eventType);
        }
    }

    private android.view.accessibility.AccessibilityEvent createEventForHost(int eventType) {
        android.view.accessibility.AccessibilityEvent event = android.view.accessibility.AccessibilityEvent.obtain(eventType);
        android.support.v4.view.ViewCompat.onInitializeAccessibilityEvent(this.mView, event);
        return event;
    }

    private android.view.accessibility.AccessibilityEvent createEventForChild(int virtualViewId, int eventType) {
        android.view.accessibility.AccessibilityEvent event = android.view.accessibility.AccessibilityEvent.obtain(eventType);
        event.setEnabled(true);
        event.setClassName(DEFAULT_CLASS_NAME);
        onPopulateEventForVirtualView(virtualViewId, event);
        if (event.getText().isEmpty() && event.getContentDescription() == null) {
            throw new java.lang.RuntimeException("Callbacks must add text or a content description in populateEventForVirtualViewId()");
        }
        event.setPackageName(this.mView.getContext().getPackageName());
        android.support.v4.view.accessibility.AccessibilityRecordCompat record = android.support.v4.view.accessibility.AccessibilityEventCompat.asRecord(event);
        record.setSource(this.mView, virtualViewId);
        return event;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public android.support.v4.view.accessibility.AccessibilityNodeInfoCompat createNode(int virtualViewId) {
        switch (virtualViewId) {
            case -1:
                return createNodeForHost();
            default:
                return createNodeForChild(virtualViewId);
        }
    }

    private android.support.v4.view.accessibility.AccessibilityNodeInfoCompat createNodeForHost() {
        android.support.v4.view.accessibility.AccessibilityNodeInfoCompat node = android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.obtain(this.mView);
        android.support.v4.view.ViewCompat.onInitializeAccessibilityNodeInfo(this.mView, node);
        java.util.LinkedList<java.lang.Integer> virtualViewIds = new java.util.LinkedList<>();
        getVisibleVirtualViews(virtualViewIds);
        java.util.Iterator<java.lang.Integer> i$ = virtualViewIds.iterator(); // NOTE(jadx-fix): restore the element type erased by jadx so next() yields Integer
        while (i$.hasNext()) {
            java.lang.Integer childVirtualViewId = i$.next();
            node.addChild(this.mView, childVirtualViewId.intValue());
        }
        return node;
    }

    private android.support.v4.view.accessibility.AccessibilityNodeInfoCompat createNodeForChild(int virtualViewId) {
        android.support.v4.view.accessibility.AccessibilityNodeInfoCompat node = android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.obtain();
        node.setEnabled(true);
        node.setClassName(DEFAULT_CLASS_NAME);
        onPopulateNodeForVirtualView(virtualViewId, node);
        if (node.getText() == null && node.getContentDescription() == null) {
            throw new java.lang.RuntimeException("Callbacks must add text or a content description in populateNodeForVirtualViewId()");
        }
        node.getBoundsInParent(this.mTempParentRect);
        if (this.mTempParentRect.isEmpty()) {
            throw new java.lang.RuntimeException("Callbacks must set parent bounds in populateNodeForVirtualViewId()");
        }
        int actions = node.getActions();
        if ((actions & 64) != 0) {
            throw new java.lang.RuntimeException("Callbacks must not add ACTION_ACCESSIBILITY_FOCUS in populateNodeForVirtualViewId()");
        }
        if ((actions & 128) != 0) {
            throw new java.lang.RuntimeException("Callbacks must not add ACTION_CLEAR_ACCESSIBILITY_FOCUS in populateNodeForVirtualViewId()");
        }
        node.setPackageName(this.mView.getContext().getPackageName());
        node.setSource(this.mView, virtualViewId);
        node.setParent(this.mView);
        if (this.mFocusedVirtualViewId == virtualViewId) {
            node.setAccessibilityFocused(true);
            node.addAction(128);
        } else {
            node.setAccessibilityFocused(false);
            node.addAction(64);
        }
        if (intersectVisibleToUser(this.mTempParentRect)) {
            node.setVisibleToUser(true);
            node.setBoundsInParent(this.mTempParentRect);
        }
        this.mView.getLocationOnScreen(this.mTempGlobalRect);
        int offsetX = this.mTempGlobalRect[0];
        int offsetY = this.mTempGlobalRect[1];
        this.mTempScreenRect.set(this.mTempParentRect);
        this.mTempScreenRect.offset(offsetX, offsetY);
        node.setBoundsInScreen(this.mTempScreenRect);
        return node;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean performAction(int virtualViewId, int action, android.os.Bundle arguments) {
        switch (virtualViewId) {
            case -1:
                return performActionForHost(action, arguments);
            default:
                return performActionForChild(virtualViewId, action, arguments);
        }
    }

    private boolean performActionForHost(int action, android.os.Bundle arguments) {
        return android.support.v4.view.ViewCompat.performAccessibilityAction(this.mView, action, arguments);
    }

    private boolean performActionForChild(int virtualViewId, int action, android.os.Bundle arguments) {
        switch (action) {
            case 64:
            case 128:
                return manageFocusForChild(virtualViewId, action, arguments);
            default:
                return onPerformActionForVirtualView(virtualViewId, action, arguments);
        }
    }

    private boolean manageFocusForChild(int virtualViewId, int action, android.os.Bundle arguments) {
        switch (action) {
            case 64:
                return requestAccessibilityFocus(virtualViewId);
            case 128:
                return clearAccessibilityFocus(virtualViewId);
            default:
                return false;
        }
    }

    private boolean intersectVisibleToUser(android.graphics.Rect localRect) {
        if (localRect == null || localRect.isEmpty() || this.mView.getWindowVisibility() != 0) {
            return false;
        }
        android.view.ViewParent viewParent = this.mView.getParent();
        while (viewParent instanceof android.view.View) {
            android.view.View view = (android.view.View) viewParent;
            if (android.support.v4.view.ViewCompat.getAlpha(view) <= 0.0f || view.getVisibility() != 0) {
                return false;
            }
            viewParent = view.getParent();
        }
        if (viewParent == null || !this.mView.getLocalVisibleRect(this.mTempVisibleRect)) {
            return false;
        }
        return localRect.intersect(this.mTempVisibleRect);
    }

    private boolean isAccessibilityFocused(int virtualViewId) {
        return this.mFocusedVirtualViewId == virtualViewId;
    }

    private boolean requestAccessibilityFocus(int virtualViewId) {
        if (!this.mManager.isEnabled() || !android.support.v4.view.accessibility.AccessibilityManagerCompat.isTouchExplorationEnabled(this.mManager) || isAccessibilityFocused(virtualViewId)) {
            return false;
        }
        this.mFocusedVirtualViewId = virtualViewId;
        this.mView.invalidate();
        sendEventForVirtualView(virtualViewId, 32768);
        return true;
    }

    private boolean clearAccessibilityFocus(int virtualViewId) {
        if (!isAccessibilityFocused(virtualViewId)) {
            return false;
        }
        this.mFocusedVirtualViewId = INVALID_ID;
        this.mView.invalidate();
        sendEventForVirtualView(virtualViewId, 65536);
        return true;
    }

    private class ExploreByTouchNodeProvider extends android.support.v4.view.accessibility.AccessibilityNodeProviderCompat {
        private ExploreByTouchNodeProvider() {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeProviderCompat
        public android.support.v4.view.accessibility.AccessibilityNodeInfoCompat createAccessibilityNodeInfo(int virtualViewId) {
            return android.support.v4.widget.ExploreByTouchHelper.this.createNode(virtualViewId);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeProviderCompat
        public boolean performAction(int virtualViewId, int action, android.os.Bundle arguments) {
            return android.support.v4.widget.ExploreByTouchHelper.this.performAction(virtualViewId, action, arguments);
        }
    }
}
