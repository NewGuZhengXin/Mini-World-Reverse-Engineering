package android.support.v4.util;

/* loaded from: classes.dex */
public class SparseArrayCompat<E> implements java.lang.Cloneable {
    private static final java.lang.Object DELETED = new java.lang.Object();
    private boolean mGarbage;
    private int[] mKeys;
    private int mSize;
    private java.lang.Object[] mValues;

    public SparseArrayCompat() {
        this(10);
    }

    public SparseArrayCompat(int initialCapacity) {
        this.mGarbage = false;
        if (initialCapacity == 0) {
            this.mKeys = android.support.v4.util.ContainerHelpers.EMPTY_INTS;
            this.mValues = android.support.v4.util.ContainerHelpers.EMPTY_OBJECTS;
        } else {
            int initialCapacity2 = android.support.v4.util.ContainerHelpers.idealIntArraySize(initialCapacity);
            this.mKeys = new int[initialCapacity2];
            this.mValues = new java.lang.Object[initialCapacity2];
        }
        this.mSize = 0;
    }

    /* renamed from: clone, reason: merged with bridge method [inline-methods] */
    public android.support.v4.util.SparseArrayCompat<E> m1clone() {
        android.support.v4.util.SparseArrayCompat<E> clone = null;
        try {
            clone = (android.support.v4.util.SparseArrayCompat) super.clone();
            clone.mKeys = (int[]) this.mKeys.clone();
            clone.mValues = (java.lang.Object[]) this.mValues.clone();
            return clone;
        } catch (java.lang.CloneNotSupportedException e) {
            return clone;
        }
    }

    public E get(int key) {
        return get(key, null);
    }

    public E get(int i, E e) {
        int iBinarySearch = android.support.v4.util.ContainerHelpers.binarySearch(this.mKeys, this.mSize, i);
        return (iBinarySearch < 0 || this.mValues[iBinarySearch] == DELETED) ? e : (E) this.mValues[iBinarySearch];
    }

    public void delete(int key) {
        int i = android.support.v4.util.ContainerHelpers.binarySearch(this.mKeys, this.mSize, key);
        if (i >= 0 && this.mValues[i] != DELETED) {
            this.mValues[i] = DELETED;
            this.mGarbage = true;
        }
    }

    public void remove(int key) {
        delete(key);
    }

    public void removeAt(int index) {
        if (this.mValues[index] != DELETED) {
            this.mValues[index] = DELETED;
            this.mGarbage = true;
        }
    }

    public void removeAtRange(int index, int size) {
        int end = java.lang.Math.min(this.mSize, index + size);
        for (int i = index; i < end; i++) {
            removeAt(i);
        }
    }

    private void gc() {
        int n = this.mSize;
        int o = 0;
        int[] keys = this.mKeys;
        java.lang.Object[] values = this.mValues;
        for (int i = 0; i < n; i++) {
            java.lang.Object val = values[i];
            if (val != DELETED) {
                if (i != o) {
                    keys[o] = keys[i];
                    values[o] = val;
                    values[i] = null;
                }
                o++;
            }
        }
        this.mGarbage = false;
        this.mSize = o;
    }

    public void put(int key, E value) {
        int i = android.support.v4.util.ContainerHelpers.binarySearch(this.mKeys, this.mSize, key);
        if (i >= 0) {
            this.mValues[i] = value;
            return;
        }
        int i2 = i ^ (-1);
        if (i2 < this.mSize && this.mValues[i2] == DELETED) {
            this.mKeys[i2] = key;
            this.mValues[i2] = value;
            return;
        }
        if (this.mGarbage && this.mSize >= this.mKeys.length) {
            gc();
            i2 = android.support.v4.util.ContainerHelpers.binarySearch(this.mKeys, this.mSize, key) ^ (-1);
        }
        if (this.mSize >= this.mKeys.length) {
            int n = android.support.v4.util.ContainerHelpers.idealIntArraySize(this.mSize + 1);
            int[] nkeys = new int[n];
            java.lang.Object[] nvalues = new java.lang.Object[n];
            java.lang.System.arraycopy(this.mKeys, 0, nkeys, 0, this.mKeys.length);
            java.lang.System.arraycopy(this.mValues, 0, nvalues, 0, this.mValues.length);
            this.mKeys = nkeys;
            this.mValues = nvalues;
        }
        if (this.mSize - i2 != 0) {
            java.lang.System.arraycopy(this.mKeys, i2, this.mKeys, i2 + 1, this.mSize - i2);
            java.lang.System.arraycopy(this.mValues, i2, this.mValues, i2 + 1, this.mSize - i2);
        }
        this.mKeys[i2] = key;
        this.mValues[i2] = value;
        this.mSize++;
    }

    public int size() {
        if (this.mGarbage) {
            gc();
        }
        return this.mSize;
    }

    public int keyAt(int index) {
        if (this.mGarbage) {
            gc();
        }
        return this.mKeys[index];
    }

    public E valueAt(int i) {
        if (this.mGarbage) {
            gc();
        }
        return (E) this.mValues[i];
    }

    public void setValueAt(int index, E value) {
        if (this.mGarbage) {
            gc();
        }
        this.mValues[index] = value;
    }

    public int indexOfKey(int key) {
        if (this.mGarbage) {
            gc();
        }
        return android.support.v4.util.ContainerHelpers.binarySearch(this.mKeys, this.mSize, key);
    }

    public int indexOfValue(E value) {
        if (this.mGarbage) {
            gc();
        }
        for (int i = 0; i < this.mSize; i++) {
            if (this.mValues[i] == value) {
                return i;
            }
        }
        return -1;
    }

    public void clear() {
        int n = this.mSize;
        java.lang.Object[] values = this.mValues;
        for (int i = 0; i < n; i++) {
            values[i] = null;
        }
        this.mSize = 0;
        this.mGarbage = false;
    }

    public void append(int key, E value) {
        if (this.mSize != 0 && key <= this.mKeys[this.mSize - 1]) {
            put(key, value);
            return;
        }
        if (this.mGarbage && this.mSize >= this.mKeys.length) {
            gc();
        }
        int pos = this.mSize;
        if (pos >= this.mKeys.length) {
            int n = android.support.v4.util.ContainerHelpers.idealIntArraySize(pos + 1);
            int[] nkeys = new int[n];
            java.lang.Object[] nvalues = new java.lang.Object[n];
            java.lang.System.arraycopy(this.mKeys, 0, nkeys, 0, this.mKeys.length);
            java.lang.System.arraycopy(this.mValues, 0, nvalues, 0, this.mValues.length);
            this.mKeys = nkeys;
            this.mValues = nvalues;
        }
        this.mKeys[pos] = key;
        this.mValues[pos] = value;
        this.mSize = pos + 1;
    }

    public java.lang.String toString() {
        if (size() <= 0) {
            return "{}";
        }
        java.lang.StringBuilder buffer = new java.lang.StringBuilder(this.mSize * 28);
        buffer.append('{');
        for (int i = 0; i < this.mSize; i++) {
            if (i > 0) {
                buffer.append(", ");
            }
            int key = keyAt(i);
            buffer.append(key);
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
