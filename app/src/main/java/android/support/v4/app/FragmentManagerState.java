package android.support.v4.app;

/* compiled from: FragmentManager.java */
/* loaded from: classes.dex */
final class FragmentManagerState implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<android.support.v4.app.FragmentManagerState> CREATOR = new android.os.Parcelable.Creator<android.support.v4.app.FragmentManagerState>() { // from class: android.support.v4.app.FragmentManagerState.1
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public android.support.v4.app.FragmentManagerState createFromParcel(android.os.Parcel in) {
            return new android.support.v4.app.FragmentManagerState(in);
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public android.support.v4.app.FragmentManagerState[] newArray(int size) {
            return new android.support.v4.app.FragmentManagerState[size];
        }
    };
    android.support.v4.app.FragmentState[] mActive;
    int[] mAdded;
    android.support.v4.app.BackStackState[] mBackStack;

    public FragmentManagerState() {
    }

    public FragmentManagerState(android.os.Parcel in) {
        this.mActive = (android.support.v4.app.FragmentState[]) in.createTypedArray(android.support.v4.app.FragmentState.CREATOR);
        this.mAdded = in.createIntArray();
        this.mBackStack = (android.support.v4.app.BackStackState[]) in.createTypedArray(android.support.v4.app.BackStackState.CREATOR);
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(android.os.Parcel dest, int flags) {
        dest.writeTypedArray(this.mActive, flags);
        dest.writeIntArray(this.mAdded);
        dest.writeTypedArray(this.mBackStack, flags);
    }
}
