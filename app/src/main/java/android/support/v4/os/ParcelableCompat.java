package android.support.v4.os;

/* loaded from: classes.dex */
public class ParcelableCompat {
    public static <T> android.os.Parcelable.Creator<T> newCreator(android.support.v4.os.ParcelableCompatCreatorCallbacks<T> callbacks) {
        if (android.os.Build.VERSION.SDK_INT >= 13) {
            android.support.v4.os.ParcelableCompatCreatorHoneycombMR2Stub.instantiate(callbacks);
        }
        return new android.support.v4.os.ParcelableCompat.CompatCreator(callbacks);
    }

    static class CompatCreator<T> implements android.os.Parcelable.Creator<T> {
        final android.support.v4.os.ParcelableCompatCreatorCallbacks<T> mCallbacks;

        public CompatCreator(android.support.v4.os.ParcelableCompatCreatorCallbacks<T> callbacks) {
            this.mCallbacks = callbacks;
        }

        @Override // android.os.Parcelable.Creator
        public T createFromParcel(android.os.Parcel source) {
            return this.mCallbacks.createFromParcel(source, null);
        }

        @Override // android.os.Parcelable.Creator
        public T[] newArray(int size) {
            return this.mCallbacks.newArray(size);
        }
    }
}
