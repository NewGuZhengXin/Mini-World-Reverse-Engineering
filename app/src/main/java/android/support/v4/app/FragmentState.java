package android.support.v4.app;

/* compiled from: Fragment.java */
/* loaded from: classes.dex */
final class FragmentState implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<android.support.v4.app.FragmentState> CREATOR = new android.os.Parcelable.Creator<android.support.v4.app.FragmentState>() { // from class: android.support.v4.app.FragmentState.1
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public android.support.v4.app.FragmentState createFromParcel(android.os.Parcel in) {
            return new android.support.v4.app.FragmentState(in);
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public android.support.v4.app.FragmentState[] newArray(int size) {
            return new android.support.v4.app.FragmentState[size];
        }
    };
    final android.os.Bundle mArguments;
    final java.lang.String mClassName;
    final int mContainerId;
    final boolean mDetached;
    final int mFragmentId;
    final boolean mFromLayout;
    final int mIndex;
    android.support.v4.app.Fragment mInstance;
    final boolean mRetainInstance;
    android.os.Bundle mSavedFragmentState;
    final java.lang.String mTag;

    public FragmentState(android.support.v4.app.Fragment frag) {
        this.mClassName = frag.getClass().getName();
        this.mIndex = frag.mIndex;
        this.mFromLayout = frag.mFromLayout;
        this.mFragmentId = frag.mFragmentId;
        this.mContainerId = frag.mContainerId;
        this.mTag = frag.mTag;
        this.mRetainInstance = frag.mRetainInstance;
        this.mDetached = frag.mDetached;
        this.mArguments = frag.mArguments;
    }

    public FragmentState(android.os.Parcel in) {
        this.mClassName = in.readString();
        this.mIndex = in.readInt();
        this.mFromLayout = in.readInt() != 0;
        this.mFragmentId = in.readInt();
        this.mContainerId = in.readInt();
        this.mTag = in.readString();
        this.mRetainInstance = in.readInt() != 0;
        this.mDetached = in.readInt() != 0;
        this.mArguments = in.readBundle();
        this.mSavedFragmentState = in.readBundle();
    }

    public android.support.v4.app.Fragment instantiate(android.support.v4.app.FragmentActivity activity, android.support.v4.app.Fragment parent) {
        if (this.mInstance != null) {
            return this.mInstance;
        }
        if (this.mArguments != null) {
            this.mArguments.setClassLoader(activity.getClassLoader());
        }
        this.mInstance = android.support.v4.app.Fragment.instantiate(activity, this.mClassName, this.mArguments);
        if (this.mSavedFragmentState != null) {
            this.mSavedFragmentState.setClassLoader(activity.getClassLoader());
            this.mInstance.mSavedFragmentState = this.mSavedFragmentState;
        }
        this.mInstance.setIndex(this.mIndex, parent);
        this.mInstance.mFromLayout = this.mFromLayout;
        this.mInstance.mRestored = true;
        this.mInstance.mFragmentId = this.mFragmentId;
        this.mInstance.mContainerId = this.mContainerId;
        this.mInstance.mTag = this.mTag;
        this.mInstance.mRetainInstance = this.mRetainInstance;
        this.mInstance.mDetached = this.mDetached;
        this.mInstance.mFragmentManager = activity.mFragments;
        if (android.support.v4.app.FragmentManagerImpl.DEBUG) {
            android.util.Log.v("FragmentManager", "Instantiated fragment " + this.mInstance);
        }
        return this.mInstance;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(android.os.Parcel dest, int flags) {
        dest.writeString(this.mClassName);
        dest.writeInt(this.mIndex);
        dest.writeInt(this.mFromLayout ? 1 : 0);
        dest.writeInt(this.mFragmentId);
        dest.writeInt(this.mContainerId);
        dest.writeString(this.mTag);
        dest.writeInt(this.mRetainInstance ? 1 : 0);
        dest.writeInt(this.mDetached ? 1 : 0);
        dest.writeBundle(this.mArguments);
        dest.writeBundle(this.mSavedFragmentState);
    }
}
