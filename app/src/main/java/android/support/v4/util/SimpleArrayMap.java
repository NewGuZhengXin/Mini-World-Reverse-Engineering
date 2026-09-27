package android.support.v4.util;

/* loaded from: classes.dex */
public class SimpleArrayMap<K, V> {
    private static final int BASE_SIZE = 4;
    private static final int CACHE_SIZE = 10;
    private static final boolean DEBUG = false;
    private static final java.lang.String TAG = "ArrayMap";
    static java.lang.Object[] mBaseCache;
    static int mBaseCacheSize;
    static java.lang.Object[] mTwiceBaseCache;
    static int mTwiceBaseCacheSize;
    java.lang.Object[] mArray;
    int[] mHashes;
    int mSize;

    int indexOf(java.lang.Object key, int hash) {
        int N = this.mSize;
        if (N == 0) {
            return -1;
        }
        int index = android.support.v4.util.ContainerHelpers.binarySearch(this.mHashes, N, hash);
        if (index >= 0 && !key.equals(this.mArray[index << 1])) {
            int end = index + 1;
            while (end < N && this.mHashes[end] == hash) {
                if (key.equals(this.mArray[end << 1])) {
                    return end;
                }
                end++;
            }
            for (int i = index - 1; i >= 0 && this.mHashes[i] == hash; i--) {
                if (key.equals(this.mArray[i << 1])) {
                    return i;
                }
            }
            return end ^ (-1);
        }
        return index;
    }

    int indexOfNull() {
        int N = this.mSize;
        if (N == 0) {
            return -1;
        }
        int index = android.support.v4.util.ContainerHelpers.binarySearch(this.mHashes, N, 0);
        if (index >= 0 && this.mArray[index << 1] != null) {
            int end = index + 1;
            while (end < N && this.mHashes[end] == 0) {
                if (this.mArray[end << 1] == null) {
                    return end;
                }
                end++;
            }
            for (int i = index - 1; i >= 0 && this.mHashes[i] == 0; i--) {
                if (this.mArray[i << 1] == null) {
                    return i;
                }
            }
            return end ^ (-1);
        }
        return index;
    }

    private void allocArrays(int size) {
        if (size == 8) {
            synchronized (android.support.v4.util.ArrayMap.class) {
                if (mTwiceBaseCache != null) {
                    java.lang.Object[] array = mTwiceBaseCache;
                    this.mArray = array;
                    mTwiceBaseCache = (java.lang.Object[]) array[0];
                    this.mHashes = (int[]) array[1];
                    array[1] = null;
                    array[0] = null;
                    mTwiceBaseCacheSize--;
                    return;
                }
            }
        } else if (size == 4) {
            synchronized (android.support.v4.util.ArrayMap.class) {
                if (mBaseCache != null) {
                    java.lang.Object[] array2 = mBaseCache;
                    this.mArray = array2;
                    mBaseCache = (java.lang.Object[]) array2[0];
                    this.mHashes = (int[]) array2[1];
                    array2[1] = null;
                    array2[0] = null;
                    mBaseCacheSize--;
                    return;
                }
            }
        }
        this.mHashes = new int[size];
        this.mArray = new java.lang.Object[size << 1];
    }

    private static void freeArrays(int[] hashes, java.lang.Object[] array, int size) {
        if (hashes.length == 8) {
            synchronized (android.support.v4.util.ArrayMap.class) {
                if (mTwiceBaseCacheSize < 10) {
                    array[0] = mTwiceBaseCache;
                    array[1] = hashes;
                    for (int i = (size << 1) - 1; i >= 2; i--) {
                        array[i] = null;
                    }
                    mTwiceBaseCache = array;
                    mTwiceBaseCacheSize++;
                }
            }
            return;
        }
        if (hashes.length == 4) {
            synchronized (android.support.v4.util.ArrayMap.class) {
                if (mBaseCacheSize < 10) {
                    array[0] = mBaseCache;
                    array[1] = hashes;
                    for (int i2 = (size << 1) - 1; i2 >= 2; i2--) {
                        array[i2] = null;
                    }
                    mBaseCache = array;
                    mBaseCacheSize++;
                }
            }
        }
    }

    public SimpleArrayMap() {
        this.mHashes = android.support.v4.util.ContainerHelpers.EMPTY_INTS;
        this.mArray = android.support.v4.util.ContainerHelpers.EMPTY_OBJECTS;
        this.mSize = 0;
    }

    public SimpleArrayMap(int capacity) {
        if (capacity == 0) {
            this.mHashes = android.support.v4.util.ContainerHelpers.EMPTY_INTS;
            this.mArray = android.support.v4.util.ContainerHelpers.EMPTY_OBJECTS;
        } else {
            allocArrays(capacity);
        }
        this.mSize = 0;
    }

    public SimpleArrayMap(android.support.v4.util.SimpleArrayMap map) {
        this();
        if (map != null) {
            putAll(map);
        }
    }

    public void clear() {
        if (this.mSize != 0) {
            freeArrays(this.mHashes, this.mArray, this.mSize);
            this.mHashes = android.support.v4.util.ContainerHelpers.EMPTY_INTS;
            this.mArray = android.support.v4.util.ContainerHelpers.EMPTY_OBJECTS;
            this.mSize = 0;
        }
    }

    public void ensureCapacity(int minimumCapacity) {
        if (this.mHashes.length < minimumCapacity) {
            int[] ohashes = this.mHashes;
            java.lang.Object[] oarray = this.mArray;
            allocArrays(minimumCapacity);
            if (this.mSize > 0) {
                java.lang.System.arraycopy(ohashes, 0, this.mHashes, 0, this.mSize);
                java.lang.System.arraycopy(oarray, 0, this.mArray, 0, this.mSize << 1);
            }
            freeArrays(ohashes, oarray, this.mSize);
        }
    }

    public boolean containsKey(java.lang.Object key) {
        if (key == null) {
            if (indexOfNull() >= 0) {
                return true;
            }
            return DEBUG;
        }
        if (indexOf(key, key.hashCode()) < 0) {
            return DEBUG;
        }
        return true;
    }

    int indexOfValue(java.lang.Object value) {
        int N = this.mSize * 2;
        java.lang.Object[] array = this.mArray;
        if (value == null) {
            for (int i = 1; i < N; i += 2) {
                if (array[i] == null) {
                    return i >> 1;
                }
            }
        } else {
            for (int i2 = 1; i2 < N; i2 += 2) {
                if (value.equals(array[i2])) {
                    return i2 >> 1;
                }
            }
        }
        return -1;
    }

    public boolean containsValue(java.lang.Object value) {
        if (indexOfValue(value) >= 0) {
            return true;
        }
        return DEBUG;
    }

    public V get(java.lang.Object obj) {
        int iIndexOfNull = obj == null ? indexOfNull() : indexOf(obj, obj.hashCode());
        if (iIndexOfNull >= 0) {
            return (V) this.mArray[(iIndexOfNull << 1) + 1];
        }
        return null;
    }

    public K keyAt(int i) {
        return (K) this.mArray[i << 1];
    }

    public V valueAt(int i) {
        return (V) this.mArray[(i << 1) + 1];
    }

    public V setValueAt(int i, V v) {
        int i2 = (i << 1) + 1;
        V v2 = (V) this.mArray[i2];
        this.mArray[i2] = v;
        return v2;
    }

    public boolean isEmpty() {
        if (this.mSize <= 0) {
            return true;
        }
        return DEBUG;
    }

    public V put(K k, V v) {
        int iHashCode;
        int iIndexOf;
        int i = 8;
        if (k == null) {
            iHashCode = 0;
            iIndexOf = indexOfNull();
        } else {
            iHashCode = k.hashCode();
            iIndexOf = indexOf(k, iHashCode);
        }
        if (iIndexOf >= 0) {
            int i2 = (iIndexOf << 1) + 1;
            V v2 = (V) this.mArray[i2];
            this.mArray[i2] = v;
            return v2;
        }
        int i3 = iIndexOf ^ (-1);
        if (this.mSize >= this.mHashes.length) {
            if (this.mSize >= 8) {
                i = this.mSize + (this.mSize >> 1);
            } else if (this.mSize < 4) {
                i = 4;
            }
            int[] iArr = this.mHashes;
            java.lang.Object[] objArr = this.mArray;
            allocArrays(i);
            if (this.mHashes.length > 0) {
                java.lang.System.arraycopy(iArr, 0, this.mHashes, 0, iArr.length);
                java.lang.System.arraycopy(objArr, 0, this.mArray, 0, objArr.length);
            }
            freeArrays(iArr, objArr, this.mSize);
        }
        if (i3 < this.mSize) {
            java.lang.System.arraycopy(this.mHashes, i3, this.mHashes, i3 + 1, this.mSize - i3);
            java.lang.System.arraycopy(this.mArray, i3 << 1, this.mArray, (i3 + 1) << 1, (this.mSize - i3) << 1);
        }
        this.mHashes[i3] = iHashCode;
        this.mArray[i3 << 1] = k;
        this.mArray[(i3 << 1) + 1] = v;
        this.mSize++;
        return null;
    }

    public void putAll(android.support.v4.util.SimpleArrayMap<? extends K, ? extends V> array) {
        int N = array.mSize;
        ensureCapacity(this.mSize + N);
        if (this.mSize == 0) {
            if (N > 0) {
                java.lang.System.arraycopy(array.mHashes, 0, this.mHashes, 0, N);
                java.lang.System.arraycopy(array.mArray, 0, this.mArray, 0, N << 1);
                this.mSize = N;
                return;
            }
            return;
        }
        for (int i = 0; i < N; i++) {
            put(array.keyAt(i), array.valueAt(i));
        }
    }

    public V remove(java.lang.Object key) {
        int index = key == null ? indexOfNull() : indexOf(key, key.hashCode());
        if (index >= 0) {
            return removeAt(index);
        }
        return null;
    }

    public V removeAt(int i) {
        V v = (V) this.mArray[(i << 1) + 1];
        if (this.mSize <= 1) {
            freeArrays(this.mHashes, this.mArray, this.mSize);
            this.mHashes = android.support.v4.util.ContainerHelpers.EMPTY_INTS;
            this.mArray = android.support.v4.util.ContainerHelpers.EMPTY_OBJECTS;
            this.mSize = 0;
        } else if (this.mHashes.length > 8 && this.mSize < this.mHashes.length / 3) {
            int i2 = this.mSize > 8 ? this.mSize + (this.mSize >> 1) : 8;
            int[] iArr = this.mHashes;
            java.lang.Object[] objArr = this.mArray;
            allocArrays(i2);
            this.mSize--;
            if (i > 0) {
                java.lang.System.arraycopy(iArr, 0, this.mHashes, 0, i);
                java.lang.System.arraycopy(objArr, 0, this.mArray, 0, i << 1);
            }
            if (i < this.mSize) {
                java.lang.System.arraycopy(iArr, i + 1, this.mHashes, i, this.mSize - i);
                java.lang.System.arraycopy(objArr, (i + 1) << 1, this.mArray, i << 1, (this.mSize - i) << 1);
            }
        } else {
            this.mSize--;
            if (i < this.mSize) {
                java.lang.System.arraycopy(this.mHashes, i + 1, this.mHashes, i, this.mSize - i);
                java.lang.System.arraycopy(this.mArray, (i + 1) << 1, this.mArray, i << 1, (this.mSize - i) << 1);
            }
            this.mArray[this.mSize << 1] = null;
            this.mArray[(this.mSize << 1) + 1] = null;
        }
        return v;
    }

    public int size() {
        return this.mSize;
    }

    public boolean equals(java.lang.Object object) {
        if (this == object) {
            return true;
        }
        if (!(object instanceof java.util.Map)) {
            return DEBUG;
        }
        java.util.Map<?, ?> map = (java.util.Map) object;
        if (size() != map.size()) {
            return DEBUG;
        }
        for (int i = 0; i < this.mSize; i++) {
            try {
                K key = keyAt(i);
                V mine = valueAt(i);
                java.lang.Object theirs = map.get(key);
                if (mine == null) {
                    if (theirs != null || !map.containsKey(key)) {
                        return DEBUG;
                    }
                } else if (!mine.equals(theirs)) {
                    return DEBUG;
                }
            } catch (java.lang.ClassCastException e) {
                return DEBUG;
            } catch (java.lang.NullPointerException e2) {
                return DEBUG;
            }
        }
        return true;
    }

    public int hashCode() {
        int[] hashes = this.mHashes;
        java.lang.Object[] array = this.mArray;
        int result = 0;
        int i = 0;
        int v = 1;
        int s = this.mSize;
        while (i < s) {
            java.lang.Object value = array[v];
            result += (value == null ? 0 : value.hashCode()) ^ hashes[i];
            i++;
            v += 2;
        }
        return result;
    }

    public java.lang.String toString() {
        if (isEmpty()) {
            return "{}";
        }
        java.lang.StringBuilder buffer = new java.lang.StringBuilder(this.mSize * 28);
        buffer.append('{');
        for (int i = 0; i < this.mSize; i++) {
            if (i > 0) {
                buffer.append(", ");
            }
            java.lang.Object key = keyAt(i);
            if (key != this) {
                buffer.append(key);
            } else {
                buffer.append("(this Map)");
            }
            buffer.append('=');
            java.lang.Object value = valueAt(i);
            if (value != this) {
                buffer.append(value);
            } else {
                buffer.append("(this Map)");
            }
        }
        buffer.append('}');
        return buffer.toString();
    }
}
