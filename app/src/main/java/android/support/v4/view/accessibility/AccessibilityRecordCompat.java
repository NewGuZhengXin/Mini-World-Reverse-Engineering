package android.support.v4.view.accessibility;

/* loaded from: classes.dex */
public class AccessibilityRecordCompat {
    private static final android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl IMPL;
    private final java.lang.Object mRecord;

    interface AccessibilityRecordImpl {
        int getAddedCount(java.lang.Object obj);

        java.lang.CharSequence getBeforeText(java.lang.Object obj);

        java.lang.CharSequence getClassName(java.lang.Object obj);

        java.lang.CharSequence getContentDescription(java.lang.Object obj);

        int getCurrentItemIndex(java.lang.Object obj);

        int getFromIndex(java.lang.Object obj);

        int getItemCount(java.lang.Object obj);

        int getMaxScrollX(java.lang.Object obj);

        int getMaxScrollY(java.lang.Object obj);

        android.os.Parcelable getParcelableData(java.lang.Object obj);

        int getRemovedCount(java.lang.Object obj);

        int getScrollX(java.lang.Object obj);

        int getScrollY(java.lang.Object obj);

        android.support.v4.view.accessibility.AccessibilityNodeInfoCompat getSource(java.lang.Object obj);

        java.util.List<java.lang.CharSequence> getText(java.lang.Object obj);

        int getToIndex(java.lang.Object obj);

        int getWindowId(java.lang.Object obj);

        boolean isChecked(java.lang.Object obj);

        boolean isEnabled(java.lang.Object obj);

        boolean isFullScreen(java.lang.Object obj);

        boolean isPassword(java.lang.Object obj);

        boolean isScrollable(java.lang.Object obj);

        java.lang.Object obtain();

        java.lang.Object obtain(java.lang.Object obj);

        void recycle(java.lang.Object obj);

        void setAddedCount(java.lang.Object obj, int i);

        void setBeforeText(java.lang.Object obj, java.lang.CharSequence charSequence);

        void setChecked(java.lang.Object obj, boolean z);

        void setClassName(java.lang.Object obj, java.lang.CharSequence charSequence);

        void setContentDescription(java.lang.Object obj, java.lang.CharSequence charSequence);

        void setCurrentItemIndex(java.lang.Object obj, int i);

        void setEnabled(java.lang.Object obj, boolean z);

        void setFromIndex(java.lang.Object obj, int i);

        void setFullScreen(java.lang.Object obj, boolean z);

        void setItemCount(java.lang.Object obj, int i);

        void setMaxScrollX(java.lang.Object obj, int i);

        void setMaxScrollY(java.lang.Object obj, int i);

        void setParcelableData(java.lang.Object obj, android.os.Parcelable parcelable);

        void setPassword(java.lang.Object obj, boolean z);

        void setRemovedCount(java.lang.Object obj, int i);

        void setScrollX(java.lang.Object obj, int i);

        void setScrollY(java.lang.Object obj, int i);

        void setScrollable(java.lang.Object obj, boolean z);

        void setSource(java.lang.Object obj, android.view.View view);

        void setSource(java.lang.Object obj, android.view.View view, int i);

        void setToIndex(java.lang.Object obj, int i);
    }

    static class AccessibilityRecordStubImpl implements android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl {
        AccessibilityRecordStubImpl() {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public java.lang.Object obtain() {
            return null;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public java.lang.Object obtain(java.lang.Object record) {
            return null;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public int getAddedCount(java.lang.Object record) {
            return 0;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public java.lang.CharSequence getBeforeText(java.lang.Object record) {
            return null;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public java.lang.CharSequence getClassName(java.lang.Object record) {
            return null;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public java.lang.CharSequence getContentDescription(java.lang.Object record) {
            return null;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public int getCurrentItemIndex(java.lang.Object record) {
            return 0;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public int getFromIndex(java.lang.Object record) {
            return 0;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public int getItemCount(java.lang.Object record) {
            return 0;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public int getMaxScrollX(java.lang.Object record) {
            return 0;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public int getMaxScrollY(java.lang.Object record) {
            return 0;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public android.os.Parcelable getParcelableData(java.lang.Object record) {
            return null;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public int getRemovedCount(java.lang.Object record) {
            return 0;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public int getScrollX(java.lang.Object record) {
            return 0;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public int getScrollY(java.lang.Object record) {
            return 0;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public android.support.v4.view.accessibility.AccessibilityNodeInfoCompat getSource(java.lang.Object record) {
            return null;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public java.util.List<java.lang.CharSequence> getText(java.lang.Object record) {
            return java.util.Collections.emptyList();
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public int getToIndex(java.lang.Object record) {
            return 0;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public int getWindowId(java.lang.Object record) {
            return 0;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public boolean isChecked(java.lang.Object record) {
            return false;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public boolean isEnabled(java.lang.Object record) {
            return false;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public boolean isFullScreen(java.lang.Object record) {
            return false;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public boolean isPassword(java.lang.Object record) {
            return false;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public boolean isScrollable(java.lang.Object record) {
            return false;
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void recycle(java.lang.Object record) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setAddedCount(java.lang.Object record, int addedCount) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setBeforeText(java.lang.Object record, java.lang.CharSequence beforeText) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setChecked(java.lang.Object record, boolean isChecked) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setClassName(java.lang.Object record, java.lang.CharSequence className) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setContentDescription(java.lang.Object record, java.lang.CharSequence contentDescription) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setCurrentItemIndex(java.lang.Object record, int currentItemIndex) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setEnabled(java.lang.Object record, boolean isEnabled) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setFromIndex(java.lang.Object record, int fromIndex) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setFullScreen(java.lang.Object record, boolean isFullScreen) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setItemCount(java.lang.Object record, int itemCount) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setMaxScrollX(java.lang.Object record, int maxScrollX) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setMaxScrollY(java.lang.Object record, int maxScrollY) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setParcelableData(java.lang.Object record, android.os.Parcelable parcelableData) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setPassword(java.lang.Object record, boolean isPassword) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setRemovedCount(java.lang.Object record, int removedCount) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setScrollX(java.lang.Object record, int scrollX) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setScrollY(java.lang.Object record, int scrollY) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setScrollable(java.lang.Object record, boolean scrollable) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setSource(java.lang.Object record, android.view.View source) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setSource(java.lang.Object record, android.view.View root, int virtualDescendantId) {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setToIndex(java.lang.Object record, int toIndex) {
        }
    }

    static class AccessibilityRecordIcsImpl extends android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl {
        AccessibilityRecordIcsImpl() {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public java.lang.Object obtain() {
            return android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.obtain();
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public java.lang.Object obtain(java.lang.Object record) {
            return android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.obtain(record);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public int getAddedCount(java.lang.Object record) {
            return android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.getAddedCount(record);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public java.lang.CharSequence getBeforeText(java.lang.Object record) {
            return android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.getBeforeText(record);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public java.lang.CharSequence getClassName(java.lang.Object record) {
            return android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.getClassName(record);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public java.lang.CharSequence getContentDescription(java.lang.Object record) {
            return android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.getContentDescription(record);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public int getCurrentItemIndex(java.lang.Object record) {
            return android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.getCurrentItemIndex(record);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public int getFromIndex(java.lang.Object record) {
            return android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.getFromIndex(record);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public int getItemCount(java.lang.Object record) {
            return android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.getItemCount(record);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public android.os.Parcelable getParcelableData(java.lang.Object record) {
            return android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.getParcelableData(record);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public int getRemovedCount(java.lang.Object record) {
            return android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.getRemovedCount(record);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public int getScrollX(java.lang.Object record) {
            return android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.getScrollX(record);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public int getScrollY(java.lang.Object record) {
            return android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.getScrollY(record);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public android.support.v4.view.accessibility.AccessibilityNodeInfoCompat getSource(java.lang.Object record) {
            return android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.wrapNonNullInstance(android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.getSource(record));
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public java.util.List<java.lang.CharSequence> getText(java.lang.Object record) {
            return android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.getText(record);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public int getToIndex(java.lang.Object record) {
            return android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.getToIndex(record);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public int getWindowId(java.lang.Object record) {
            return android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.getWindowId(record);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public boolean isChecked(java.lang.Object record) {
            return android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.isChecked(record);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public boolean isEnabled(java.lang.Object record) {
            return android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.isEnabled(record);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public boolean isFullScreen(java.lang.Object record) {
            return android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.isFullScreen(record);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public boolean isPassword(java.lang.Object record) {
            return android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.isPassword(record);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public boolean isScrollable(java.lang.Object record) {
            return android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.isScrollable(record);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void recycle(java.lang.Object record) {
            android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.recycle(record);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setAddedCount(java.lang.Object record, int addedCount) {
            android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.setAddedCount(record, addedCount);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setBeforeText(java.lang.Object record, java.lang.CharSequence beforeText) {
            android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.setBeforeText(record, beforeText);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setChecked(java.lang.Object record, boolean isChecked) {
            android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.setChecked(record, isChecked);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setClassName(java.lang.Object record, java.lang.CharSequence className) {
            android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.setClassName(record, className);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setContentDescription(java.lang.Object record, java.lang.CharSequence contentDescription) {
            android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.setContentDescription(record, contentDescription);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setCurrentItemIndex(java.lang.Object record, int currentItemIndex) {
            android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.setCurrentItemIndex(record, currentItemIndex);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setEnabled(java.lang.Object record, boolean isEnabled) {
            android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.setEnabled(record, isEnabled);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setFromIndex(java.lang.Object record, int fromIndex) {
            android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.setFromIndex(record, fromIndex);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setFullScreen(java.lang.Object record, boolean isFullScreen) {
            android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.setFullScreen(record, isFullScreen);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setItemCount(java.lang.Object record, int itemCount) {
            android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.setItemCount(record, itemCount);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setParcelableData(java.lang.Object record, android.os.Parcelable parcelableData) {
            android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.setParcelableData(record, parcelableData);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setPassword(java.lang.Object record, boolean isPassword) {
            android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.setPassword(record, isPassword);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setRemovedCount(java.lang.Object record, int removedCount) {
            android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.setRemovedCount(record, removedCount);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setScrollX(java.lang.Object record, int scrollX) {
            android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.setScrollX(record, scrollX);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setScrollY(java.lang.Object record, int scrollY) {
            android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.setScrollY(record, scrollY);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setScrollable(java.lang.Object record, boolean scrollable) {
            android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.setScrollable(record, scrollable);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setSource(java.lang.Object record, android.view.View source) {
            android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.setSource(record, source);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setToIndex(java.lang.Object record, int toIndex) {
            android.support.v4.view.accessibility.AccessibilityRecordCompatIcs.setToIndex(record, toIndex);
        }
    }

    static class AccessibilityRecordIcsMr1Impl extends android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordIcsImpl {
        AccessibilityRecordIcsMr1Impl() {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public int getMaxScrollX(java.lang.Object record) {
            return android.support.v4.view.accessibility.AccessibilityRecordCompatIcsMr1.getMaxScrollX(record);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public int getMaxScrollY(java.lang.Object record) {
            return android.support.v4.view.accessibility.AccessibilityRecordCompatIcsMr1.getMaxScrollY(record);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setMaxScrollX(java.lang.Object record, int maxScrollX) {
            android.support.v4.view.accessibility.AccessibilityRecordCompatIcsMr1.setMaxScrollX(record, maxScrollX);
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setMaxScrollY(java.lang.Object record, int maxScrollY) {
            android.support.v4.view.accessibility.AccessibilityRecordCompatIcsMr1.setMaxScrollY(record, maxScrollY);
        }
    }

    static class AccessibilityRecordJellyBeanImpl extends android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordIcsMr1Impl {
        AccessibilityRecordJellyBeanImpl() {
        }

        @Override // android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl, android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordImpl
        public void setSource(java.lang.Object record, android.view.View root, int virtualDescendantId) {
            android.support.v4.view.accessibility.AccessibilityRecordCompatJellyBean.setSource(record, root, virtualDescendantId);
        }
    }

    static {
        // NOTE(jadx-fix): the original <clinit> jumped to its end after the >= 16 assignment
        // (jadx rendered that as an illegal `return;`); an else-if chain keeps the semantics.
        if (android.os.Build.VERSION.SDK_INT >= 16) {
            IMPL = new android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordJellyBeanImpl();
        } else if (android.os.Build.VERSION.SDK_INT >= 15) {
            IMPL = new android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordIcsMr1Impl();
        } else if (android.os.Build.VERSION.SDK_INT >= 14) {
            IMPL = new android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordIcsImpl();
        } else {
            IMPL = new android.support.v4.view.accessibility.AccessibilityRecordCompat.AccessibilityRecordStubImpl();
        }
    }

    public AccessibilityRecordCompat(java.lang.Object record) {
        this.mRecord = record;
    }

    public java.lang.Object getImpl() {
        return this.mRecord;
    }

    public static android.support.v4.view.accessibility.AccessibilityRecordCompat obtain(android.support.v4.view.accessibility.AccessibilityRecordCompat record) {
        return new android.support.v4.view.accessibility.AccessibilityRecordCompat(IMPL.obtain(record.mRecord));
    }

    public static android.support.v4.view.accessibility.AccessibilityRecordCompat obtain() {
        return new android.support.v4.view.accessibility.AccessibilityRecordCompat(IMPL.obtain());
    }

    public void setSource(android.view.View source) {
        IMPL.setSource(this.mRecord, source);
    }

    public void setSource(android.view.View root, int virtualDescendantId) {
        IMPL.setSource(this.mRecord, root, virtualDescendantId);
    }

    public android.support.v4.view.accessibility.AccessibilityNodeInfoCompat getSource() {
        return IMPL.getSource(this.mRecord);
    }

    public int getWindowId() {
        return IMPL.getWindowId(this.mRecord);
    }

    public boolean isChecked() {
        return IMPL.isChecked(this.mRecord);
    }

    public void setChecked(boolean isChecked) {
        IMPL.setChecked(this.mRecord, isChecked);
    }

    public boolean isEnabled() {
        return IMPL.isEnabled(this.mRecord);
    }

    public void setEnabled(boolean isEnabled) {
        IMPL.setEnabled(this.mRecord, isEnabled);
    }

    public boolean isPassword() {
        return IMPL.isPassword(this.mRecord);
    }

    public void setPassword(boolean isPassword) {
        IMPL.setPassword(this.mRecord, isPassword);
    }

    public boolean isFullScreen() {
        return IMPL.isFullScreen(this.mRecord);
    }

    public void setFullScreen(boolean isFullScreen) {
        IMPL.setFullScreen(this.mRecord, isFullScreen);
    }

    public boolean isScrollable() {
        return IMPL.isScrollable(this.mRecord);
    }

    public void setScrollable(boolean scrollable) {
        IMPL.setScrollable(this.mRecord, scrollable);
    }

    public int getItemCount() {
        return IMPL.getItemCount(this.mRecord);
    }

    public void setItemCount(int itemCount) {
        IMPL.setItemCount(this.mRecord, itemCount);
    }

    public int getCurrentItemIndex() {
        return IMPL.getCurrentItemIndex(this.mRecord);
    }

    public void setCurrentItemIndex(int currentItemIndex) {
        IMPL.setCurrentItemIndex(this.mRecord, currentItemIndex);
    }

    public int getFromIndex() {
        return IMPL.getFromIndex(this.mRecord);
    }

    public void setFromIndex(int fromIndex) {
        IMPL.setFromIndex(this.mRecord, fromIndex);
    }

    public int getToIndex() {
        return IMPL.getToIndex(this.mRecord);
    }

    public void setToIndex(int toIndex) {
        IMPL.setToIndex(this.mRecord, toIndex);
    }

    public int getScrollX() {
        return IMPL.getScrollX(this.mRecord);
    }

    public void setScrollX(int scrollX) {
        IMPL.setScrollX(this.mRecord, scrollX);
    }

    public int getScrollY() {
        return IMPL.getScrollY(this.mRecord);
    }

    public void setScrollY(int scrollY) {
        IMPL.setScrollY(this.mRecord, scrollY);
    }

    public int getMaxScrollX() {
        return IMPL.getMaxScrollX(this.mRecord);
    }

    public void setMaxScrollX(int maxScrollX) {
        IMPL.setMaxScrollX(this.mRecord, maxScrollX);
    }

    public int getMaxScrollY() {
        return IMPL.getMaxScrollY(this.mRecord);
    }

    public void setMaxScrollY(int maxScrollY) {
        IMPL.setMaxScrollY(this.mRecord, maxScrollY);
    }

    public int getAddedCount() {
        return IMPL.getAddedCount(this.mRecord);
    }

    public void setAddedCount(int addedCount) {
        IMPL.setAddedCount(this.mRecord, addedCount);
    }

    public int getRemovedCount() {
        return IMPL.getRemovedCount(this.mRecord);
    }

    public void setRemovedCount(int removedCount) {
        IMPL.setRemovedCount(this.mRecord, removedCount);
    }

    public java.lang.CharSequence getClassName() {
        return IMPL.getClassName(this.mRecord);
    }

    public void setClassName(java.lang.CharSequence className) {
        IMPL.setClassName(this.mRecord, className);
    }

    public java.util.List<java.lang.CharSequence> getText() {
        return IMPL.getText(this.mRecord);
    }

    public java.lang.CharSequence getBeforeText() {
        return IMPL.getBeforeText(this.mRecord);
    }

    public void setBeforeText(java.lang.CharSequence beforeText) {
        IMPL.setBeforeText(this.mRecord, beforeText);
    }

    public java.lang.CharSequence getContentDescription() {
        return IMPL.getContentDescription(this.mRecord);
    }

    public void setContentDescription(java.lang.CharSequence contentDescription) {
        IMPL.setContentDescription(this.mRecord, contentDescription);
    }

    public android.os.Parcelable getParcelableData() {
        return IMPL.getParcelableData(this.mRecord);
    }

    public void setParcelableData(android.os.Parcelable parcelableData) {
        IMPL.setParcelableData(this.mRecord, parcelableData);
    }

    public void recycle() {
        IMPL.recycle(this.mRecord);
    }

    public int hashCode() {
        if (this.mRecord == null) {
            return 0;
        }
        return this.mRecord.hashCode();
    }

    public boolean equals(java.lang.Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && getClass() == obj.getClass()) {
            android.support.v4.view.accessibility.AccessibilityRecordCompat other = (android.support.v4.view.accessibility.AccessibilityRecordCompat) obj;
            return this.mRecord == null ? other.mRecord == null : this.mRecord.equals(other.mRecord);
        }
        return false;
    }
}
