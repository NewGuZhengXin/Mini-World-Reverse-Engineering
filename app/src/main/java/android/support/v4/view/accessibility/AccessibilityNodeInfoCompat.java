package android.support.v4.view.accessibility;

/* loaded from: classes.dex */
public class AccessibilityNodeInfoCompat {
    public static final int ACTION_ACCESSIBILITY_FOCUS = 64;
    public static final java.lang.String ACTION_ARGUMENT_EXTEND_SELECTION_BOOLEAN = "ACTION_ARGUMENT_EXTEND_SELECTION_BOOLEAN";
    public static final java.lang.String ACTION_ARGUMENT_HTML_ELEMENT_STRING = "ACTION_ARGUMENT_HTML_ELEMENT_STRING";
    public static final java.lang.String ACTION_ARGUMENT_MOVEMENT_GRANULARITY_INT = "ACTION_ARGUMENT_MOVEMENT_GRANULARITY_INT";
    public static final java.lang.String ACTION_ARGUMENT_SELECTION_END_INT = "ACTION_ARGUMENT_SELECTION_END_INT";
    public static final java.lang.String ACTION_ARGUMENT_SELECTION_START_INT = "ACTION_ARGUMENT_SELECTION_START_INT";
    public static final int ACTION_CLEAR_ACCESSIBILITY_FOCUS = 128;
    public static final int ACTION_CLEAR_FOCUS = 2;
    public static final int ACTION_CLEAR_SELECTION = 8;
    public static final int ACTION_CLICK = 16;
    public static final int ACTION_COPY = 16384;
    public static final int ACTION_CUT = 65536;
    public static final int ACTION_FOCUS = 1;
    public static final int ACTION_LONG_CLICK = 32;
    public static final int ACTION_NEXT_AT_MOVEMENT_GRANULARITY = 256;
    public static final int ACTION_NEXT_HTML_ELEMENT = 1024;
    public static final int ACTION_PASTE = 32768;
    public static final int ACTION_PREVIOUS_AT_MOVEMENT_GRANULARITY = 512;
    public static final int ACTION_PREVIOUS_HTML_ELEMENT = 2048;
    public static final int ACTION_SCROLL_BACKWARD = 8192;
    public static final int ACTION_SCROLL_FORWARD = 4096;
    public static final int ACTION_SELECT = 4;
    public static final int ACTION_SET_SELECTION = 131072;
    public static final int FOCUS_ACCESSIBILITY = 2;
    public static final int FOCUS_INPUT = 1;
    private static final android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl IMPL;
    public static final int MOVEMENT_GRANULARITY_CHARACTER = 1;
    public static final int MOVEMENT_GRANULARITY_LINE = 4;
    public static final int MOVEMENT_GRANULARITY_PAGE = 16;
    public static final int MOVEMENT_GRANULARITY_PARAGRAPH = 8;
    public static final int MOVEMENT_GRANULARITY_WORD = 2;
    private final java.lang.Object mInfo;

    interface AccessibilityNodeInfoImpl {
        void addAction(java.lang.Object obj, int i);

        void addChild(java.lang.Object obj, android.view.View view);

        void addChild(java.lang.Object obj, android.view.View view, int i);

        java.util.List<java.lang.Object> findAccessibilityNodeInfosByText(java.lang.Object obj, java.lang.String str);

        java.lang.Object findFocus(java.lang.Object obj, int i);

        java.lang.Object focusSearch(java.lang.Object obj, int i);

        int getActions(java.lang.Object obj);

        void getBoundsInParent(java.lang.Object obj, android.graphics.Rect rect);

        void getBoundsInScreen(java.lang.Object obj, android.graphics.Rect rect);

        java.lang.Object getChild(java.lang.Object obj, int i);

        int getChildCount(java.lang.Object obj);

        java.lang.CharSequence getClassName(java.lang.Object obj);

        java.lang.CharSequence getContentDescription(java.lang.Object obj);

        int getLiveRegion(java.lang.Object obj);

        int getMovementGranularities(java.lang.Object obj);

        java.lang.CharSequence getPackageName(java.lang.Object obj);

        java.lang.Object getParent(java.lang.Object obj);

        java.lang.CharSequence getText(java.lang.Object obj);

        java.lang.String getViewIdResourceName(java.lang.Object obj);

        int getWindowId(java.lang.Object obj);

        boolean isAccessibilityFocused(java.lang.Object obj);

        boolean isCheckable(java.lang.Object obj);

        boolean isChecked(java.lang.Object obj);

        boolean isClickable(java.lang.Object obj);

        boolean isEnabled(java.lang.Object obj);

        boolean isFocusable(java.lang.Object obj);

        boolean isFocused(java.lang.Object obj);

        boolean isLongClickable(java.lang.Object obj);

        boolean isPassword(java.lang.Object obj);

        boolean isScrollable(java.lang.Object obj);

        boolean isSelected(java.lang.Object obj);

        boolean isVisibleToUser(java.lang.Object obj);

        java.lang.Object obtain();

        java.lang.Object obtain(android.view.View view);

        java.lang.Object obtain(android.view.View view, int i);

        java.lang.Object obtain(java.lang.Object obj);

        boolean performAction(java.lang.Object obj, int i);

        boolean performAction(java.lang.Object obj, int i, android.os.Bundle bundle);

        void recycle(java.lang.Object obj);

        void setAccessibilityFocused(java.lang.Object obj, boolean z);

        void setBoundsInParent(java.lang.Object obj, android.graphics.Rect rect);

        void setBoundsInScreen(java.lang.Object obj, android.graphics.Rect rect);

        void setCheckable(java.lang.Object obj, boolean z);

        void setChecked(java.lang.Object obj, boolean z);

        void setClassName(java.lang.Object obj, java.lang.CharSequence charSequence);

        void setClickable(java.lang.Object obj, boolean z);

        void setContentDescription(java.lang.Object obj, java.lang.CharSequence charSequence);

        void setEnabled(java.lang.Object obj, boolean z);

        void setFocusable(java.lang.Object obj, boolean z);

        void setFocused(java.lang.Object obj, boolean z);

        void setLiveRegion(java.lang.Object obj, int i);

        void setLongClickable(java.lang.Object obj, boolean z);

        void setMovementGranularities(java.lang.Object obj, int i);

        void setPackageName(java.lang.Object obj, java.lang.CharSequence charSequence);

        void setParent(java.lang.Object obj, android.view.View view);

        void setParent(java.lang.Object obj, android.view.View view, int i);

        void setPassword(java.lang.Object obj, boolean z);

        void setScrollable(java.lang.Object obj, boolean z);

        void setSelected(java.lang.Object obj, boolean z);

        void setSource(java.lang.Object obj, android.view.View view);

        void setSource(java.lang.Object obj, android.view.View view, int i);

        void setText(java.lang.Object obj, java.lang.CharSequence charSequence);

        void setViewIdResourceName(java.lang.Object obj, java.lang.String str);

        void setVisibleToUser(java.lang.Object obj, boolean z);
    }

    static class AccessibilityNodeInfoStubImpl implements android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl {
        AccessibilityNodeInfoStubImpl() {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public java.lang.Object obtain() {
            return null;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public java.lang.Object obtain(android.view.View source) {
            return null;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public java.lang.Object obtain(android.view.View root, int virtualDescendantId) {
            return null;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public java.lang.Object obtain(java.lang.Object info) {
            return null;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void addAction(java.lang.Object info, int action) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void addChild(java.lang.Object info, android.view.View child) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void addChild(java.lang.Object info, android.view.View child, int virtualDescendantId) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public java.util.List<java.lang.Object> findAccessibilityNodeInfosByText(java.lang.Object info, java.lang.String text) {
            return java.util.Collections.emptyList();
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public int getActions(java.lang.Object info) {
            return 0;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void getBoundsInParent(java.lang.Object info, android.graphics.Rect outBounds) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void getBoundsInScreen(java.lang.Object info, android.graphics.Rect outBounds) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public java.lang.Object getChild(java.lang.Object info, int index) {
            return null;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public int getChildCount(java.lang.Object info) {
            return 0;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public java.lang.CharSequence getClassName(java.lang.Object info) {
            return null;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public java.lang.CharSequence getContentDescription(java.lang.Object info) {
            return null;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public java.lang.CharSequence getPackageName(java.lang.Object info) {
            return null;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public java.lang.Object getParent(java.lang.Object info) {
            return null;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public java.lang.CharSequence getText(java.lang.Object info) {
            return null;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public int getWindowId(java.lang.Object info) {
            return 0;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public boolean isCheckable(java.lang.Object info) {
            return false;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public boolean isChecked(java.lang.Object info) {
            return false;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public boolean isClickable(java.lang.Object info) {
            return false;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public boolean isEnabled(java.lang.Object info) {
            return false;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public boolean isFocusable(java.lang.Object info) {
            return false;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public boolean isFocused(java.lang.Object info) {
            return false;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public boolean isVisibleToUser(java.lang.Object info) {
            return false;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public boolean isAccessibilityFocused(java.lang.Object info) {
            return false;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public boolean isLongClickable(java.lang.Object info) {
            return false;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public boolean isPassword(java.lang.Object info) {
            return false;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public boolean isScrollable(java.lang.Object info) {
            return false;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public boolean isSelected(java.lang.Object info) {
            return false;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public boolean performAction(java.lang.Object info, int action) {
            return false;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public boolean performAction(java.lang.Object info, int action, android.os.Bundle arguments) {
            return false;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setMovementGranularities(java.lang.Object info, int granularities) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public int getMovementGranularities(java.lang.Object info) {
            return 0;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setBoundsInParent(java.lang.Object info, android.graphics.Rect bounds) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setBoundsInScreen(java.lang.Object info, android.graphics.Rect bounds) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setCheckable(java.lang.Object info, boolean checkable) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setChecked(java.lang.Object info, boolean checked) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setClassName(java.lang.Object info, java.lang.CharSequence className) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setClickable(java.lang.Object info, boolean clickable) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setContentDescription(java.lang.Object info, java.lang.CharSequence contentDescription) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setEnabled(java.lang.Object info, boolean enabled) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setFocusable(java.lang.Object info, boolean focusable) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setFocused(java.lang.Object info, boolean focused) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setVisibleToUser(java.lang.Object info, boolean visibleToUser) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setAccessibilityFocused(java.lang.Object info, boolean focused) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setLongClickable(java.lang.Object info, boolean longClickable) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setPackageName(java.lang.Object info, java.lang.CharSequence packageName) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setParent(java.lang.Object info, android.view.View parent) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setPassword(java.lang.Object info, boolean password) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setScrollable(java.lang.Object info, boolean scrollable) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setSelected(java.lang.Object info, boolean selected) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setSource(java.lang.Object info, android.view.View source) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setSource(java.lang.Object info, android.view.View root, int virtualDescendantId) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public java.lang.Object findFocus(java.lang.Object info, int focus) {
            return null;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public java.lang.Object focusSearch(java.lang.Object info, int direction) {
            return null;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setText(java.lang.Object info, java.lang.CharSequence text) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void recycle(java.lang.Object info) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setParent(java.lang.Object info, android.view.View root, int virtualDescendantId) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public java.lang.String getViewIdResourceName(java.lang.Object info) {
            return null;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setViewIdResourceName(java.lang.Object info, java.lang.String viewId) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public int getLiveRegion(java.lang.Object info) {
            return 0;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setLiveRegion(java.lang.Object info, int mode) {
        }
    }

    static class AccessibilityNodeInfoIcsImpl extends android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl {
        AccessibilityNodeInfoIcsImpl() {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public java.lang.Object obtain() {
            return android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.obtain();
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public java.lang.Object obtain(android.view.View source) {
            return android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.obtain(source);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public java.lang.Object obtain(java.lang.Object info) {
            return android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.obtain(info);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void addAction(java.lang.Object info, int action) {
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.addAction(info, action);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void addChild(java.lang.Object info, android.view.View child) {
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.addChild(info, child);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public java.util.List<java.lang.Object> findAccessibilityNodeInfosByText(java.lang.Object info, java.lang.String text) {
            return android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.findAccessibilityNodeInfosByText(info, text);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public int getActions(java.lang.Object info) {
            return android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.getActions(info);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void getBoundsInParent(java.lang.Object info, android.graphics.Rect outBounds) {
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.getBoundsInParent(info, outBounds);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void getBoundsInScreen(java.lang.Object info, android.graphics.Rect outBounds) {
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.getBoundsInScreen(info, outBounds);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public java.lang.Object getChild(java.lang.Object info, int index) {
            return android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.getChild(info, index);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public int getChildCount(java.lang.Object info) {
            return android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.getChildCount(info);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public java.lang.CharSequence getClassName(java.lang.Object info) {
            return android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.getClassName(info);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public java.lang.CharSequence getContentDescription(java.lang.Object info) {
            return android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.getContentDescription(info);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public java.lang.CharSequence getPackageName(java.lang.Object info) {
            return android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.getPackageName(info);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public java.lang.Object getParent(java.lang.Object info) {
            return android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.getParent(info);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public java.lang.CharSequence getText(java.lang.Object info) {
            return android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.getText(info);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public int getWindowId(java.lang.Object info) {
            return android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.getWindowId(info);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public boolean isCheckable(java.lang.Object info) {
            return android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.isCheckable(info);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public boolean isChecked(java.lang.Object info) {
            return android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.isChecked(info);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public boolean isClickable(java.lang.Object info) {
            return android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.isClickable(info);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public boolean isEnabled(java.lang.Object info) {
            return android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.isEnabled(info);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public boolean isFocusable(java.lang.Object info) {
            return android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.isFocusable(info);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public boolean isFocused(java.lang.Object info) {
            return android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.isFocused(info);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public boolean isLongClickable(java.lang.Object info) {
            return android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.isLongClickable(info);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public boolean isPassword(java.lang.Object info) {
            return android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.isPassword(info);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public boolean isScrollable(java.lang.Object info) {
            return android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.isScrollable(info);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public boolean isSelected(java.lang.Object info) {
            return android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.isSelected(info);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public boolean performAction(java.lang.Object info, int action) {
            return android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.performAction(info, action);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setBoundsInParent(java.lang.Object info, android.graphics.Rect bounds) {
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.setBoundsInParent(info, bounds);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setBoundsInScreen(java.lang.Object info, android.graphics.Rect bounds) {
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.setBoundsInScreen(info, bounds);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setCheckable(java.lang.Object info, boolean checkable) {
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.setCheckable(info, checkable);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setChecked(java.lang.Object info, boolean checked) {
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.setChecked(info, checked);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setClassName(java.lang.Object info, java.lang.CharSequence className) {
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.setClassName(info, className);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setClickable(java.lang.Object info, boolean clickable) {
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.setClickable(info, clickable);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setContentDescription(java.lang.Object info, java.lang.CharSequence contentDescription) {
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.setContentDescription(info, contentDescription);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setEnabled(java.lang.Object info, boolean enabled) {
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.setEnabled(info, enabled);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setFocusable(java.lang.Object info, boolean focusable) {
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.setFocusable(info, focusable);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setFocused(java.lang.Object info, boolean focused) {
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.setFocused(info, focused);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setLongClickable(java.lang.Object info, boolean longClickable) {
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.setLongClickable(info, longClickable);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setPackageName(java.lang.Object info, java.lang.CharSequence packageName) {
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.setPackageName(info, packageName);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setParent(java.lang.Object info, android.view.View parent) {
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.setParent(info, parent);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setPassword(java.lang.Object info, boolean password) {
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.setPassword(info, password);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setScrollable(java.lang.Object info, boolean scrollable) {
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.setScrollable(info, scrollable);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setSelected(java.lang.Object info, boolean selected) {
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.setSelected(info, selected);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setSource(java.lang.Object info, android.view.View source) {
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.setSource(info, source);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setText(java.lang.Object info, java.lang.CharSequence text) {
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.setText(info, text);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void recycle(java.lang.Object info) {
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompatIcs.recycle(info);
        }
    }

    static class AccessibilityNodeInfoJellybeanImpl extends android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoIcsImpl {
        AccessibilityNodeInfoJellybeanImpl() {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public java.lang.Object obtain(android.view.View root, int virtualDescendantId) {
            return android.support.v4.view.accessibility.AccessibilityNodeInfoCompatJellyBean.obtain(root, virtualDescendantId);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public java.lang.Object findFocus(java.lang.Object info, int focus) {
            return android.support.v4.view.accessibility.AccessibilityNodeInfoCompatJellyBean.findFocus(info, focus);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public java.lang.Object focusSearch(java.lang.Object info, int direction) {
            return android.support.v4.view.accessibility.AccessibilityNodeInfoCompatJellyBean.focusSearch(info, direction);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void addChild(java.lang.Object info, android.view.View child, int virtualDescendantId) {
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompatJellyBean.addChild(info, child, virtualDescendantId);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setSource(java.lang.Object info, android.view.View root, int virtualDescendantId) {
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompatJellyBean.setSource(info, root, virtualDescendantId);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public boolean isVisibleToUser(java.lang.Object info) {
            return android.support.v4.view.accessibility.AccessibilityNodeInfoCompatJellyBean.isVisibleToUser(info);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setVisibleToUser(java.lang.Object info, boolean visibleToUser) {
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompatJellyBean.setVisibleToUser(info, visibleToUser);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public boolean isAccessibilityFocused(java.lang.Object info) {
            return android.support.v4.view.accessibility.AccessibilityNodeInfoCompatJellyBean.isAccessibilityFocused(info);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setAccessibilityFocused(java.lang.Object info, boolean focused) {
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompatJellyBean.setAccesibilityFocused(info, focused);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public boolean performAction(java.lang.Object info, int action, android.os.Bundle arguments) {
            return android.support.v4.view.accessibility.AccessibilityNodeInfoCompatJellyBean.performAction(info, action, arguments);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setMovementGranularities(java.lang.Object info, int granularities) {
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompatJellyBean.setMovementGranularities(info, granularities);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public int getMovementGranularities(java.lang.Object info) {
            return android.support.v4.view.accessibility.AccessibilityNodeInfoCompatJellyBean.getMovementGranularities(info);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setParent(java.lang.Object info, android.view.View root, int virtualDescendantId) {
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompatJellyBean.setParent(info, root, virtualDescendantId);
        }
    }

    static class AccessibilityNodeInfoJellybeanMr2Impl extends android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoJellybeanImpl {
        AccessibilityNodeInfoJellybeanMr2Impl() {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public java.lang.String getViewIdResourceName(java.lang.Object info) {
            return android.support.v4.view.accessibility.AccessibilityNodeInfoCompatJellybeanMr2.getViewIdResourceName(info);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setViewIdResourceName(java.lang.Object info, java.lang.String viewId) {
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompatJellybeanMr2.setViewIdResourceName(info, viewId);
        }
    }

    static class AccessibilityNodeInfoKitKatImpl extends android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoJellybeanMr2Impl {
        AccessibilityNodeInfoKitKatImpl() {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public int getLiveRegion(java.lang.Object info) {
            return android.support.v4.view.accessibility.AccessibilityNodeInfoCompatKitKat.getLiveRegion(info);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoImpl
        public void setLiveRegion(java.lang.Object info, int mode) {
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompatKitKat.setLiveRegion(info, mode);
        }
    }

    static {
        // NOTE(jadx-fix): the original <clinit> jumped to its end after each assignment
        // (jadx rendered those as illegal `return;`); an else-if chain keeps the semantics.
        if (android.os.Build.VERSION.SDK_INT >= 19) {
            IMPL = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoKitKatImpl();
        } else if (android.os.Build.VERSION.SDK_INT >= 18) {
            IMPL = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoJellybeanMr2Impl();
        } else if (android.os.Build.VERSION.SDK_INT >= 16) {
            IMPL = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoJellybeanImpl();
        } else if (android.os.Build.VERSION.SDK_INT >= 14) {
            IMPL = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoIcsImpl();
        } else {
            IMPL = new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.AccessibilityNodeInfoStubImpl();
        }
    }

    static android.support.v4.view.accessibility.AccessibilityNodeInfoCompat wrapNonNullInstance(java.lang.Object object) {
        if (object != null) {
            return new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat(object);
        }
        return null;
    }

    public AccessibilityNodeInfoCompat(java.lang.Object info) {
        this.mInfo = info;
    }

    public java.lang.Object getInfo() {
        return this.mInfo;
    }

    public static android.support.v4.view.accessibility.AccessibilityNodeInfoCompat obtain(android.view.View source) {
        return wrapNonNullInstance(IMPL.obtain(source));
    }

    public static android.support.v4.view.accessibility.AccessibilityNodeInfoCompat obtain(android.view.View root, int virtualDescendantId) {
        return wrapNonNullInstance(IMPL.obtain(root, virtualDescendantId));
    }

    public static android.support.v4.view.accessibility.AccessibilityNodeInfoCompat obtain() {
        return wrapNonNullInstance(IMPL.obtain());
    }

    public static android.support.v4.view.accessibility.AccessibilityNodeInfoCompat obtain(android.support.v4.view.accessibility.AccessibilityNodeInfoCompat info) {
        return wrapNonNullInstance(IMPL.obtain(info.mInfo));
    }

    public void setSource(android.view.View source) {
        IMPL.setSource(this.mInfo, source);
    }

    public void setSource(android.view.View root, int virtualDescendantId) {
        IMPL.setSource(this.mInfo, root, virtualDescendantId);
    }

    public android.support.v4.view.accessibility.AccessibilityNodeInfoCompat findFocus(int focus) {
        return wrapNonNullInstance(IMPL.findFocus(this.mInfo, focus));
    }

    public android.support.v4.view.accessibility.AccessibilityNodeInfoCompat focusSearch(int direction) {
        return wrapNonNullInstance(IMPL.focusSearch(this.mInfo, direction));
    }

    public int getWindowId() {
        return IMPL.getWindowId(this.mInfo);
    }

    public int getChildCount() {
        return IMPL.getChildCount(this.mInfo);
    }

    public android.support.v4.view.accessibility.AccessibilityNodeInfoCompat getChild(int index) {
        return wrapNonNullInstance(IMPL.getChild(this.mInfo, index));
    }

    public void addChild(android.view.View child) {
        IMPL.addChild(this.mInfo, child);
    }

    public void addChild(android.view.View root, int virtualDescendantId) {
        IMPL.addChild(this.mInfo, root, virtualDescendantId);
    }

    public int getActions() {
        return IMPL.getActions(this.mInfo);
    }

    public void addAction(int action) {
        IMPL.addAction(this.mInfo, action);
    }

    public boolean performAction(int action) {
        return IMPL.performAction(this.mInfo, action);
    }

    public boolean performAction(int action, android.os.Bundle arguments) {
        return IMPL.performAction(this.mInfo, action, arguments);
    }

    public void setMovementGranularities(int granularities) {
        IMPL.setMovementGranularities(this.mInfo, granularities);
    }

    public int getMovementGranularities() {
        return IMPL.getMovementGranularities(this.mInfo);
    }

    public java.util.List<android.support.v4.view.accessibility.AccessibilityNodeInfoCompat> findAccessibilityNodeInfosByText(java.lang.String text) {
        java.util.List<android.support.v4.view.accessibility.AccessibilityNodeInfoCompat> result = new java.util.ArrayList<>();
        java.util.List<java.lang.Object> infos = IMPL.findAccessibilityNodeInfosByText(this.mInfo, text);
        int infoCount = infos.size();
        for (int i = 0; i < infoCount; i++) {
            java.lang.Object info = infos.get(i);
            result.add(new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat(info));
        }
        return result;
    }

    public android.support.v4.view.accessibility.AccessibilityNodeInfoCompat getParent() {
        return wrapNonNullInstance(IMPL.getParent(this.mInfo));
    }

    public void setParent(android.view.View parent) {
        IMPL.setParent(this.mInfo, parent);
    }

    public void setParent(android.view.View root, int virtualDescendantId) {
        IMPL.setParent(this.mInfo, root, virtualDescendantId);
    }

    public void getBoundsInParent(android.graphics.Rect outBounds) {
        IMPL.getBoundsInParent(this.mInfo, outBounds);
    }

    public void setBoundsInParent(android.graphics.Rect bounds) {
        IMPL.setBoundsInParent(this.mInfo, bounds);
    }

    public void getBoundsInScreen(android.graphics.Rect outBounds) {
        IMPL.getBoundsInScreen(this.mInfo, outBounds);
    }

    public void setBoundsInScreen(android.graphics.Rect bounds) {
        IMPL.setBoundsInScreen(this.mInfo, bounds);
    }

    public boolean isCheckable() {
        return IMPL.isCheckable(this.mInfo);
    }

    public void setCheckable(boolean checkable) {
        IMPL.setCheckable(this.mInfo, checkable);
    }

    public boolean isChecked() {
        return IMPL.isChecked(this.mInfo);
    }

    public void setChecked(boolean checked) {
        IMPL.setChecked(this.mInfo, checked);
    }

    public boolean isFocusable() {
        return IMPL.isFocusable(this.mInfo);
    }

    public void setFocusable(boolean focusable) {
        IMPL.setFocusable(this.mInfo, focusable);
    }

    public boolean isFocused() {
        return IMPL.isFocused(this.mInfo);
    }

    public void setFocused(boolean focused) {
        IMPL.setFocused(this.mInfo, focused);
    }

    public boolean isVisibleToUser() {
        return IMPL.isVisibleToUser(this.mInfo);
    }

    public void setVisibleToUser(boolean visibleToUser) {
        IMPL.setVisibleToUser(this.mInfo, visibleToUser);
    }

    public boolean isAccessibilityFocused() {
        return IMPL.isAccessibilityFocused(this.mInfo);
    }

    public void setAccessibilityFocused(boolean focused) {
        IMPL.setAccessibilityFocused(this.mInfo, focused);
    }

    public boolean isSelected() {
        return IMPL.isSelected(this.mInfo);
    }

    public void setSelected(boolean selected) {
        IMPL.setSelected(this.mInfo, selected);
    }

    public boolean isClickable() {
        return IMPL.isClickable(this.mInfo);
    }

    public void setClickable(boolean clickable) {
        IMPL.setClickable(this.mInfo, clickable);
    }

    public boolean isLongClickable() {
        return IMPL.isLongClickable(this.mInfo);
    }

    public void setLongClickable(boolean longClickable) {
        IMPL.setLongClickable(this.mInfo, longClickable);
    }

    public boolean isEnabled() {
        return IMPL.isEnabled(this.mInfo);
    }

    public void setEnabled(boolean enabled) {
        IMPL.setEnabled(this.mInfo, enabled);
    }

    public boolean isPassword() {
        return IMPL.isPassword(this.mInfo);
    }

    public void setPassword(boolean password) {
        IMPL.setPassword(this.mInfo, password);
    }

    public boolean isScrollable() {
        return IMPL.isScrollable(this.mInfo);
    }

    public void setScrollable(boolean scrollable) {
        IMPL.setScrollable(this.mInfo, scrollable);
    }

    public java.lang.CharSequence getPackageName() {
        return IMPL.getPackageName(this.mInfo);
    }

    public void setPackageName(java.lang.CharSequence packageName) {
        IMPL.setPackageName(this.mInfo, packageName);
    }

    public java.lang.CharSequence getClassName() {
        return IMPL.getClassName(this.mInfo);
    }

    public void setClassName(java.lang.CharSequence className) {
        IMPL.setClassName(this.mInfo, className);
    }

    public java.lang.CharSequence getText() {
        return IMPL.getText(this.mInfo);
    }

    public void setText(java.lang.CharSequence text) {
        IMPL.setText(this.mInfo, text);
    }

    public java.lang.CharSequence getContentDescription() {
        return IMPL.getContentDescription(this.mInfo);
    }

    public void setContentDescription(java.lang.CharSequence contentDescription) {
        IMPL.setContentDescription(this.mInfo, contentDescription);
    }

    public void recycle() {
        IMPL.recycle(this.mInfo);
    }

    public void setViewIdResourceName(java.lang.String viewId) {
        IMPL.setViewIdResourceName(this.mInfo, viewId);
    }

    public java.lang.String getViewIdResourceName() {
        return IMPL.getViewIdResourceName(this.mInfo);
    }

    public int getLiveRegion() {
        return IMPL.getLiveRegion(this.mInfo);
    }

    public void setLiveRegion(int mode) {
        IMPL.setLiveRegion(this.mInfo, mode);
    }

    public int hashCode() {
        if (this.mInfo == null) {
            return 0;
        }
        return this.mInfo.hashCode();
    }

    public boolean equals(java.lang.Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && getClass() == obj.getClass()) {
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat other = (android.support.v4.view.accessibility.AccessibilityNodeInfoCompat) obj;
            return this.mInfo == null ? other.mInfo == null : this.mInfo.equals(other.mInfo);
        }
        return false;
    }

    public java.lang.String toString() {
        java.lang.StringBuilder builder = new java.lang.StringBuilder();
        builder.append(super.toString());
        android.graphics.Rect bounds = new android.graphics.Rect();
        getBoundsInParent(bounds);
        builder.append("; boundsInParent: " + bounds);
        getBoundsInScreen(bounds);
        builder.append("; boundsInScreen: " + bounds);
        builder.append("; packageName: ").append(getPackageName());
        builder.append("; className: ").append(getClassName());
        builder.append("; text: ").append(getText());
        builder.append("; contentDescription: ").append(getContentDescription());
        builder.append("; viewId: ").append(getViewIdResourceName());
        builder.append("; checkable: ").append(isCheckable());
        builder.append("; checked: ").append(isChecked());
        builder.append("; focusable: ").append(isFocusable());
        builder.append("; focused: ").append(isFocused());
        builder.append("; selected: ").append(isSelected());
        builder.append("; clickable: ").append(isClickable());
        builder.append("; longClickable: ").append(isLongClickable());
        builder.append("; enabled: ").append(isEnabled());
        builder.append("; password: ").append(isPassword());
        builder.append("; scrollable: " + isScrollable());
        builder.append("; [");
        int actionBits = getActions();
        while (actionBits != 0) {
            int action = 1 << java.lang.Integer.numberOfTrailingZeros(actionBits);
            actionBits &= action ^ (-1);
            builder.append(getActionSymbolicName(action));
            if (actionBits != 0) {
                builder.append(", ");
            }
        }
        builder.append("]");
        return builder.toString();
    }

    private static java.lang.String getActionSymbolicName(int action) {
        switch (action) {
            case 1:
                return "ACTION_FOCUS";
            case 2:
                return "ACTION_CLEAR_FOCUS";
            case 4:
                return "ACTION_SELECT";
            case 8:
                return "ACTION_CLEAR_SELECTION";
            case 16:
                return "ACTION_CLICK";
            case 32:
                return "ACTION_LONG_CLICK";
            case 64:
                return "ACTION_ACCESSIBILITY_FOCUS";
            case 128:
                return "ACTION_CLEAR_ACCESSIBILITY_FOCUS";
            case 256:
                return "ACTION_NEXT_AT_MOVEMENT_GRANULARITY";
            case 512:
                return "ACTION_PREVIOUS_AT_MOVEMENT_GRANULARITY";
            case 1024:
                return "ACTION_NEXT_HTML_ELEMENT";
            case 2048:
                return "ACTION_PREVIOUS_HTML_ELEMENT";
            case 4096:
                return "ACTION_SCROLL_FORWARD";
            case 8192:
                return "ACTION_SCROLL_BACKWARD";
            case 16384:
                return "ACTION_COPY";
            case 32768:
                return "ACTION_PASTE";
            case 65536:
                return "ACTION_CUT";
            case 131072:
                return "ACTION_SET_SELECTION";
            default:
                return "ACTION_UNKNOWN";
        }
    }
}
