package android.support.v4.util;

/* loaded from: classes.dex */
abstract class MapCollections<K, V> {
    android.support.v4.util.MapCollections<K, V>.EntrySet mEntrySet;
    android.support.v4.util.MapCollections<K, V>.KeySet mKeySet;
    android.support.v4.util.MapCollections<K, V>.ValuesCollection mValues;

    protected abstract void colClear();

    protected abstract java.lang.Object colGetEntry(int i, int i2);

    protected abstract java.util.Map<K, V> colGetMap();

    protected abstract int colGetSize();

    protected abstract int colIndexOfKey(java.lang.Object obj);

    protected abstract int colIndexOfValue(java.lang.Object obj);

    protected abstract void colPut(K k, V v);

    protected abstract void colRemoveAt(int i);

    protected abstract V colSetValue(int i, V v);

    MapCollections() {
    }

    final class ArrayIterator<T> implements java.util.Iterator<T> {
        boolean mCanRemove = false;
        int mIndex;
        final int mOffset;
        int mSize;

        ArrayIterator(int offset) {
            this.mOffset = offset;
            this.mSize = android.support.v4.util.MapCollections.this.colGetSize();
        }

        @Override // java.util.Iterator
        public boolean hasNext() {
            return this.mIndex < this.mSize;
        }

        @Override // java.util.Iterator
        public T next() {
            T t = (T) android.support.v4.util.MapCollections.this.colGetEntry(this.mIndex, this.mOffset);
            this.mIndex++;
            this.mCanRemove = true;
            return t;
        }

        @Override // java.util.Iterator
        public void remove() {
            if (!this.mCanRemove) {
                throw new java.lang.IllegalStateException();
            }
            this.mIndex--;
            this.mSize--;
            this.mCanRemove = false;
            android.support.v4.util.MapCollections.this.colRemoveAt(this.mIndex);
        }
    }

    final class MapIterator implements java.util.Iterator<java.util.Map.Entry<K, V>>, java.util.Map.Entry<K, V> {
        int mEnd;
        boolean mEntryValid = false;
        int mIndex = -1;

        MapIterator() {
            this.mEnd = android.support.v4.util.MapCollections.this.colGetSize() - 1;
        }

        @Override // java.util.Iterator
        public boolean hasNext() {
            return this.mIndex < this.mEnd;
        }

        @Override // java.util.Iterator
        public java.util.Map.Entry<K, V> next() {
            this.mIndex++;
            this.mEntryValid = true;
            return this;
        }

        @Override // java.util.Iterator
        public void remove() {
            if (!this.mEntryValid) {
                throw new java.lang.IllegalStateException();
            }
            android.support.v4.util.MapCollections.this.colRemoveAt(this.mIndex);
            this.mIndex--;
            this.mEnd--;
            this.mEntryValid = false;
        }

        @Override // java.util.Map.Entry
        public K getKey() {
            if (!this.mEntryValid) {
                throw new java.lang.IllegalStateException("This container does not support retaining Map.Entry objects");
            }
            return (K) android.support.v4.util.MapCollections.this.colGetEntry(this.mIndex, 0);
        }

        @Override // java.util.Map.Entry
        public V getValue() {
            if (!this.mEntryValid) {
                throw new java.lang.IllegalStateException("This container does not support retaining Map.Entry objects");
            }
            return (V) android.support.v4.util.MapCollections.this.colGetEntry(this.mIndex, 1);
        }

        @Override // java.util.Map.Entry
        public V setValue(V v) {
            if (!this.mEntryValid) {
                throw new java.lang.IllegalStateException("This container does not support retaining Map.Entry objects");
            }
            return (V) android.support.v4.util.MapCollections.this.colSetValue(this.mIndex, v);
        }

        @Override // java.util.Map.Entry
        public final boolean equals(java.lang.Object o) {
            if (!this.mEntryValid) {
                throw new java.lang.IllegalStateException("This container does not support retaining Map.Entry objects");
            }
            if (!(o instanceof java.util.Map.Entry)) {
                return false;
            }
            java.util.Map.Entry<?, ?> e = (java.util.Map.Entry) o;
            return android.support.v4.util.ContainerHelpers.equal(e.getKey(), android.support.v4.util.MapCollections.this.colGetEntry(this.mIndex, 0)) && android.support.v4.util.ContainerHelpers.equal(e.getValue(), android.support.v4.util.MapCollections.this.colGetEntry(this.mIndex, 1));
        }

        @Override // java.util.Map.Entry
        public final int hashCode() {
            if (!this.mEntryValid) {
                throw new java.lang.IllegalStateException("This container does not support retaining Map.Entry objects");
            }
            java.lang.Object key = android.support.v4.util.MapCollections.this.colGetEntry(this.mIndex, 0);
            java.lang.Object value = android.support.v4.util.MapCollections.this.colGetEntry(this.mIndex, 1);
            return (value != null ? value.hashCode() : 0) ^ (key == null ? 0 : key.hashCode());
        }

        public final java.lang.String toString() {
            return getKey() + "=" + getValue();
        }
    }

    final class EntrySet implements java.util.Set<java.util.Map.Entry<K, V>> {
        EntrySet() {
        }

        @Override // java.util.Set, java.util.Collection
        public boolean add(java.util.Map.Entry<K, V> object) {
            throw new java.lang.UnsupportedOperationException();
        }

        @Override // java.util.Set, java.util.Collection
        public boolean addAll(java.util.Collection<? extends java.util.Map.Entry<K, V>> collection) {
            int oldSize = android.support.v4.util.MapCollections.this.colGetSize();
            for (java.util.Map.Entry<K, V> entry : collection) {
                android.support.v4.util.MapCollections.this.colPut(entry.getKey(), entry.getValue());
            }
            return oldSize != android.support.v4.util.MapCollections.this.colGetSize();
        }

        @Override // java.util.Set, java.util.Collection
        public void clear() {
            android.support.v4.util.MapCollections.this.colClear();
        }

        @Override // java.util.Set, java.util.Collection
        public boolean contains(java.lang.Object o) {
            if (!(o instanceof java.util.Map.Entry)) {
                return false;
            }
            java.util.Map.Entry<?, ?> e = (java.util.Map.Entry) o;
            int index = android.support.v4.util.MapCollections.this.colIndexOfKey(e.getKey());
            if (index < 0) {
                return false;
            }
            java.lang.Object foundVal = android.support.v4.util.MapCollections.this.colGetEntry(index, 1);
            return android.support.v4.util.ContainerHelpers.equal(foundVal, e.getValue());
        }

        @Override // java.util.Set, java.util.Collection
        public boolean containsAll(java.util.Collection<?> collection) {
            java.util.Iterator<?> it = collection.iterator();
            while (it.hasNext()) {
                if (!contains(it.next())) {
                    return false;
                }
            }
            return true;
        }

        @Override // java.util.Set, java.util.Collection
        public boolean isEmpty() {
            return android.support.v4.util.MapCollections.this.colGetSize() == 0;
        }

        @Override // java.util.Set, java.util.Collection, java.lang.Iterable
        public java.util.Iterator<java.util.Map.Entry<K, V>> iterator() {
            return new android.support.v4.util.MapCollections.MapIterator();
        }

        @Override // java.util.Set, java.util.Collection
        public boolean remove(java.lang.Object object) {
            throw new java.lang.UnsupportedOperationException();
        }

        @Override // java.util.Set, java.util.Collection
        public boolean removeAll(java.util.Collection<?> collection) {
            throw new java.lang.UnsupportedOperationException();
        }

        @Override // java.util.Set, java.util.Collection
        public boolean retainAll(java.util.Collection<?> collection) {
            throw new java.lang.UnsupportedOperationException();
        }

        @Override // java.util.Set, java.util.Collection
        public int size() {
            return android.support.v4.util.MapCollections.this.colGetSize();
        }

        @Override // java.util.Set, java.util.Collection
        public java.lang.Object[] toArray() {
            throw new java.lang.UnsupportedOperationException();
        }

        @Override // java.util.Set, java.util.Collection
        public <T> T[] toArray(T[] array) {
            throw new java.lang.UnsupportedOperationException();
        }

        @Override // java.util.Set, java.util.Collection
        public boolean equals(java.lang.Object object) {
            return android.support.v4.util.MapCollections.equalsSetHelper(this, object);
        }

        @Override // java.util.Set, java.util.Collection
        public int hashCode() {
            int result = 0;
            for (int i = android.support.v4.util.MapCollections.this.colGetSize() - 1; i >= 0; i--) {
                java.lang.Object key = android.support.v4.util.MapCollections.this.colGetEntry(i, 0);
                java.lang.Object value = android.support.v4.util.MapCollections.this.colGetEntry(i, 1);
                result += (value == null ? 0 : value.hashCode()) ^ (key == null ? 0 : key.hashCode());
            }
            return result;
        }
    }

    final class KeySet implements java.util.Set<K> {
        KeySet() {
        }

        @Override // java.util.Set, java.util.Collection
        public boolean add(K object) {
            throw new java.lang.UnsupportedOperationException();
        }

        @Override // java.util.Set, java.util.Collection
        public boolean addAll(java.util.Collection<? extends K> collection) {
            throw new java.lang.UnsupportedOperationException();
        }

        @Override // java.util.Set, java.util.Collection
        public void clear() {
            android.support.v4.util.MapCollections.this.colClear();
        }

        @Override // java.util.Set, java.util.Collection
        public boolean contains(java.lang.Object object) {
            return android.support.v4.util.MapCollections.this.colIndexOfKey(object) >= 0;
        }

        @Override // java.util.Set, java.util.Collection
        public boolean containsAll(java.util.Collection<?> collection) {
            return android.support.v4.util.MapCollections.containsAllHelper(android.support.v4.util.MapCollections.this.colGetMap(), collection);
        }

        @Override // java.util.Set, java.util.Collection
        public boolean isEmpty() {
            return android.support.v4.util.MapCollections.this.colGetSize() == 0;
        }

        @Override // java.util.Set, java.util.Collection, java.lang.Iterable
        public java.util.Iterator<K> iterator() {
            return new android.support.v4.util.MapCollections.ArrayIterator(0);
        }

        @Override // java.util.Set, java.util.Collection
        public boolean remove(java.lang.Object object) {
            int index = android.support.v4.util.MapCollections.this.colIndexOfKey(object);
            if (index < 0) {
                return false;
            }
            android.support.v4.util.MapCollections.this.colRemoveAt(index);
            return true;
        }

        @Override // java.util.Set, java.util.Collection
        public boolean removeAll(java.util.Collection<?> collection) {
            return android.support.v4.util.MapCollections.removeAllHelper(android.support.v4.util.MapCollections.this.colGetMap(), collection);
        }

        @Override // java.util.Set, java.util.Collection
        public boolean retainAll(java.util.Collection<?> collection) {
            return android.support.v4.util.MapCollections.retainAllHelper(android.support.v4.util.MapCollections.this.colGetMap(), collection);
        }

        @Override // java.util.Set, java.util.Collection
        public int size() {
            return android.support.v4.util.MapCollections.this.colGetSize();
        }

        @Override // java.util.Set, java.util.Collection
        public java.lang.Object[] toArray() {
            return android.support.v4.util.MapCollections.this.toArrayHelper(0);
        }

        @Override // java.util.Set, java.util.Collection
        public <T> T[] toArray(T[] tArr) {
            return (T[]) android.support.v4.util.MapCollections.this.toArrayHelper(tArr, 0);
        }

        @Override // java.util.Set, java.util.Collection
        public boolean equals(java.lang.Object object) {
            return android.support.v4.util.MapCollections.equalsSetHelper(this, object);
        }

        @Override // java.util.Set, java.util.Collection
        public int hashCode() {
            int result = 0;
            for (int i = android.support.v4.util.MapCollections.this.colGetSize() - 1; i >= 0; i--) {
                java.lang.Object obj = android.support.v4.util.MapCollections.this.colGetEntry(i, 0);
                result += obj == null ? 0 : obj.hashCode();
            }
            return result;
        }
    }

    final class ValuesCollection implements java.util.Collection<V> {
        ValuesCollection() {
        }

        @Override // java.util.Collection
        public boolean add(V object) {
            throw new java.lang.UnsupportedOperationException();
        }

        @Override // java.util.Collection
        public boolean addAll(java.util.Collection<? extends V> collection) {
            throw new java.lang.UnsupportedOperationException();
        }

        @Override // java.util.Collection
        public void clear() {
            android.support.v4.util.MapCollections.this.colClear();
        }

        @Override // java.util.Collection
        public boolean contains(java.lang.Object object) {
            return android.support.v4.util.MapCollections.this.colIndexOfValue(object) >= 0;
        }

        @Override // java.util.Collection
        public boolean containsAll(java.util.Collection<?> collection) {
            java.util.Iterator<?> it = collection.iterator();
            while (it.hasNext()) {
                if (!contains(it.next())) {
                    return false;
                }
            }
            return true;
        }

        @Override // java.util.Collection
        public boolean isEmpty() {
            return android.support.v4.util.MapCollections.this.colGetSize() == 0;
        }

        @Override // java.util.Collection, java.lang.Iterable
        public java.util.Iterator<V> iterator() {
            return new android.support.v4.util.MapCollections.ArrayIterator(1);
        }

        @Override // java.util.Collection
        public boolean remove(java.lang.Object object) {
            int index = android.support.v4.util.MapCollections.this.colIndexOfValue(object);
            if (index < 0) {
                return false;
            }
            android.support.v4.util.MapCollections.this.colRemoveAt(index);
            return true;
        }

        @Override // java.util.Collection
        public boolean removeAll(java.util.Collection<?> collection) {
            int N = android.support.v4.util.MapCollections.this.colGetSize();
            boolean changed = false;
            int i = 0;
            while (i < N) {
                java.lang.Object cur = android.support.v4.util.MapCollections.this.colGetEntry(i, 1);
                if (collection.contains(cur)) {
                    android.support.v4.util.MapCollections.this.colRemoveAt(i);
                    i--;
                    N--;
                    changed = true;
                }
                i++;
            }
            return changed;
        }

        @Override // java.util.Collection
        public boolean retainAll(java.util.Collection<?> collection) {
            int N = android.support.v4.util.MapCollections.this.colGetSize();
            boolean changed = false;
            int i = 0;
            while (i < N) {
                java.lang.Object cur = android.support.v4.util.MapCollections.this.colGetEntry(i, 1);
                if (!collection.contains(cur)) {
                    android.support.v4.util.MapCollections.this.colRemoveAt(i);
                    i--;
                    N--;
                    changed = true;
                }
                i++;
            }
            return changed;
        }

        @Override // java.util.Collection
        public int size() {
            return android.support.v4.util.MapCollections.this.colGetSize();
        }

        @Override // java.util.Collection
        public java.lang.Object[] toArray() {
            return android.support.v4.util.MapCollections.this.toArrayHelper(1);
        }

        @Override // java.util.Collection
        public <T> T[] toArray(T[] tArr) {
            return (T[]) android.support.v4.util.MapCollections.this.toArrayHelper(tArr, 1);
        }
    }

    public static <K, V> boolean containsAllHelper(java.util.Map<K, V> map, java.util.Collection<?> collection) {
        java.util.Iterator<?> it = collection.iterator();
        while (it.hasNext()) {
            if (!map.containsKey(it.next())) {
                return false;
            }
        }
        return true;
    }

    public static <K, V> boolean removeAllHelper(java.util.Map<K, V> map, java.util.Collection<?> collection) {
        int oldSize = map.size();
        java.util.Iterator<?> it = collection.iterator();
        while (it.hasNext()) {
            map.remove(it.next());
        }
        return oldSize != map.size();
    }

    public static <K, V> boolean retainAllHelper(java.util.Map<K, V> map, java.util.Collection<?> collection) {
        int oldSize = map.size();
        java.util.Iterator<K> it = map.keySet().iterator();
        while (it.hasNext()) {
            if (!collection.contains(it.next())) {
                it.remove();
            }
        }
        return oldSize != map.size();
    }

    public java.lang.Object[] toArrayHelper(int offset) {
        int N = colGetSize();
        java.lang.Object[] result = new java.lang.Object[N];
        for (int i = 0; i < N; i++) {
            result[i] = colGetEntry(i, offset);
        }
        return result;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r2v1, types: [java.lang.Object[]] */
    /* JADX WARN: Type inference failed for: r5v3 */
    /* JADX WARN: Type inference failed for: r5v5 */
    /* JADX WARN: Type inference failed for: r5v6 */
    @SuppressWarnings("unchecked") // NOTE(jadx-fix): smali check-casts the Array.newInstance result to [TT; and stores colGetEntry's Object into [TT;
    public <T> T[] toArrayHelper(T[] tArr, int i) {
        int iColGetSize = colGetSize();
        if (tArr.length < iColGetSize) {
            tArr = (T[]) java.lang.reflect.Array.newInstance(tArr.getClass().getComponentType(), iColGetSize); // NOTE(jadx-fix): was a bogus (java.lang.Object[]) cast; smali casts to [TT;
        }
        for (int i2 = 0; i2 < iColGetSize; i2++) {
            tArr[i2] = (T) colGetEntry(i2, i); // NOTE(jadx-fix): colGetEntry returns Object; smali stores it directly into the T[] slot
        }
        if (tArr.length > iColGetSize) {
            tArr[iColGetSize] = null; // NOTE(jadx-fix): smali aput-object with const/4 0x0, i.e. null (jadx wrote literal 0)
        }
        return tArr;
    }

    /* JADX WARN: Removed duplicated region for block: B:14:0x001f  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static <T> boolean equalsSetHelper(java.util.Set<T> set, java.lang.Object object) {
        if (set == object) {
            return true;
        }
        if (!(object instanceof java.util.Set)) {
            return false;
        }
        java.util.Set<?> s = (java.util.Set) object;
        try {
            // NOTE(jadx-fix): jadx lost the "sizes differ -> false" branch and left `z`
            // possibly uninitialised; the smali is the short-circuit expression below.
            return set.size() == s.size() && set.containsAll(s);
        } catch (java.lang.ClassCastException e) {
            return false;
        } catch (java.lang.NullPointerException e2) {
            return false;
        }
    }

    public java.util.Set<java.util.Map.Entry<K, V>> getEntrySet() {
        if (this.mEntrySet == null) {
            this.mEntrySet = new android.support.v4.util.MapCollections.EntrySet();
        }
        return this.mEntrySet;
    }

    public java.util.Set<K> getKeySet() {
        if (this.mKeySet == null) {
            this.mKeySet = new android.support.v4.util.MapCollections.KeySet();
        }
        return this.mKeySet;
    }

    public java.util.Collection<V> getValues() {
        if (this.mValues == null) {
            this.mValues = new android.support.v4.util.MapCollections.ValuesCollection();
        }
        return this.mValues;
    }
}
