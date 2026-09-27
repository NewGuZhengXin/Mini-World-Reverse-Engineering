package android.support.v4.view.accessibility;

/* loaded from: classes.dex */
class AccessibilityRecordCompatIcs {
    AccessibilityRecordCompatIcs() {
    }

    public static java.lang.Object obtain() {
        return android.view.accessibility.AccessibilityRecord.obtain();
    }

    public static java.lang.Object obtain(java.lang.Object record) {
        return android.view.accessibility.AccessibilityRecord.obtain((android.view.accessibility.AccessibilityRecord) record);
    }

    public static int getAddedCount(java.lang.Object record) {
        return ((android.view.accessibility.AccessibilityRecord) record).getAddedCount();
    }

    public static java.lang.CharSequence getBeforeText(java.lang.Object record) {
        return ((android.view.accessibility.AccessibilityRecord) record).getBeforeText();
    }

    public static java.lang.CharSequence getClassName(java.lang.Object record) {
        return ((android.view.accessibility.AccessibilityRecord) record).getClassName();
    }

    public static java.lang.CharSequence getContentDescription(java.lang.Object record) {
        return ((android.view.accessibility.AccessibilityRecord) record).getContentDescription();
    }

    public static int getCurrentItemIndex(java.lang.Object record) {
        return ((android.view.accessibility.AccessibilityRecord) record).getCurrentItemIndex();
    }

    public static int getFromIndex(java.lang.Object record) {
        return ((android.view.accessibility.AccessibilityRecord) record).getFromIndex();
    }

    public static int getItemCount(java.lang.Object record) {
        return ((android.view.accessibility.AccessibilityRecord) record).getItemCount();
    }

    public static android.os.Parcelable getParcelableData(java.lang.Object record) {
        return ((android.view.accessibility.AccessibilityRecord) record).getParcelableData();
    }

    public static int getRemovedCount(java.lang.Object record) {
        return ((android.view.accessibility.AccessibilityRecord) record).getRemovedCount();
    }

    public static int getScrollX(java.lang.Object record) {
        return ((android.view.accessibility.AccessibilityRecord) record).getScrollX();
    }

    public static int getScrollY(java.lang.Object record) {
        return ((android.view.accessibility.AccessibilityRecord) record).getScrollY();
    }

    public static java.lang.Object getSource(java.lang.Object record) {
        return ((android.view.accessibility.AccessibilityRecord) record).getSource();
    }

    public static java.util.List<java.lang.CharSequence> getText(java.lang.Object record) {
        return ((android.view.accessibility.AccessibilityRecord) record).getText();
    }

    public static int getToIndex(java.lang.Object record) {
        return ((android.view.accessibility.AccessibilityRecord) record).getToIndex();
    }

    public static int getWindowId(java.lang.Object record) {
        return ((android.view.accessibility.AccessibilityRecord) record).getWindowId();
    }

    public static boolean isChecked(java.lang.Object record) {
        return ((android.view.accessibility.AccessibilityRecord) record).isChecked();
    }

    public static boolean isEnabled(java.lang.Object record) {
        return ((android.view.accessibility.AccessibilityRecord) record).isEnabled();
    }

    public static boolean isFullScreen(java.lang.Object record) {
        return ((android.view.accessibility.AccessibilityRecord) record).isFullScreen();
    }

    public static boolean isPassword(java.lang.Object record) {
        return ((android.view.accessibility.AccessibilityRecord) record).isPassword();
    }

    public static boolean isScrollable(java.lang.Object record) {
        return ((android.view.accessibility.AccessibilityRecord) record).isScrollable();
    }

    public static void recycle(java.lang.Object record) {
        ((android.view.accessibility.AccessibilityRecord) record).recycle();
    }

    public static void setAddedCount(java.lang.Object record, int addedCount) {
        ((android.view.accessibility.AccessibilityRecord) record).setAddedCount(addedCount);
    }

    public static void setBeforeText(java.lang.Object record, java.lang.CharSequence beforeText) {
        ((android.view.accessibility.AccessibilityRecord) record).setBeforeText(beforeText);
    }

    public static void setChecked(java.lang.Object record, boolean isChecked) {
        ((android.view.accessibility.AccessibilityRecord) record).setChecked(isChecked);
    }

    public static void setClassName(java.lang.Object record, java.lang.CharSequence className) {
        ((android.view.accessibility.AccessibilityRecord) record).setClassName(className);
    }

    public static void setContentDescription(java.lang.Object record, java.lang.CharSequence contentDescription) {
        ((android.view.accessibility.AccessibilityRecord) record).setContentDescription(contentDescription);
    }

    public static void setCurrentItemIndex(java.lang.Object record, int currentItemIndex) {
        ((android.view.accessibility.AccessibilityRecord) record).setCurrentItemIndex(currentItemIndex);
    }

    public static void setEnabled(java.lang.Object record, boolean isEnabled) {
        ((android.view.accessibility.AccessibilityRecord) record).setEnabled(isEnabled);
    }

    public static void setFromIndex(java.lang.Object record, int fromIndex) {
        ((android.view.accessibility.AccessibilityRecord) record).setFromIndex(fromIndex);
    }

    public static void setFullScreen(java.lang.Object record, boolean isFullScreen) {
        ((android.view.accessibility.AccessibilityRecord) record).setFullScreen(isFullScreen);
    }

    public static void setItemCount(java.lang.Object record, int itemCount) {
        ((android.view.accessibility.AccessibilityRecord) record).setItemCount(itemCount);
    }

    public static void setParcelableData(java.lang.Object record, android.os.Parcelable parcelableData) {
        ((android.view.accessibility.AccessibilityRecord) record).setParcelableData(parcelableData);
    }

    public static void setPassword(java.lang.Object record, boolean isPassword) {
        ((android.view.accessibility.AccessibilityRecord) record).setPassword(isPassword);
    }

    public static void setRemovedCount(java.lang.Object record, int removedCount) {
        ((android.view.accessibility.AccessibilityRecord) record).setRemovedCount(removedCount);
    }

    public static void setScrollX(java.lang.Object record, int scrollX) {
        ((android.view.accessibility.AccessibilityRecord) record).setScrollX(scrollX);
    }

    public static void setScrollY(java.lang.Object record, int scrollY) {
        ((android.view.accessibility.AccessibilityRecord) record).setScrollY(scrollY);
    }

    public static void setScrollable(java.lang.Object record, boolean scrollable) {
        ((android.view.accessibility.AccessibilityRecord) record).setScrollable(scrollable);
    }

    public static void setSource(java.lang.Object record, android.view.View source) {
        ((android.view.accessibility.AccessibilityRecord) record).setSource(source);
    }

    public static void setToIndex(java.lang.Object record, int toIndex) {
        ((android.view.accessibility.AccessibilityRecord) record).setToIndex(toIndex);
    }
}
