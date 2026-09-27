package android.support.v4.util;

/* loaded from: classes.dex */
public class ArrayMap<K, V> extends android.support.v4.util.SimpleArrayMap<K, V> implements java.util.Map<K, V> {
    android.support.v4.util.MapCollections<K, V> mCollections;

    public ArrayMap() {
    }

    public ArrayMap(int capacity) {
        super(capacity);
    }

    public ArrayMap(android.support.v4.util.SimpleArrayMap map) {
        super(map);
    }

    private android.support.v4.util.MapCollections<K, V> getCollection() {
        if (this.mCollections == null) {
            this.mCollections = new android.support.v4.util.MapCollections<K, V>() { // from class: android.support.v4.util.ArrayMap.1
                @Override // android.support.v4.util.MapCollections
                protected int colGetSize() {
                    return android.support.v4.util.ArrayMap.this.mSize;
                }

                @Override // android.support.v4.util.MapCollections
                protected java.lang.Object colGetEntry(int index, int offset) {
                    return android.support.v4.util.ArrayMap.this.mArray[(index << 1) + offset];
                }

                @Override // android.support.v4.util.MapCollections
                protected int colIndexOfKey(java.lang.Object key) {
                    return key == null ? android.support.v4.util.ArrayMap.this.indexOfNull() : android.support.v4.util.ArrayMap.this.indexOf(key, key.hashCode());
                }

                @Override // android.support.v4.util.MapCollections
                protected int colIndexOfValue(java.lang.Object value) {
                    return android.support.v4.util.ArrayMap.this.indexOfValue(value);
                }

                @Override // android.support.v4.util.MapCollections
                protected java.util.Map<K, V> colGetMap() {
                    return android.support.v4.util.ArrayMap.this;
                }

                @Override // android.support.v4.util.MapCollections
                protected void colPut(K key, V value) {
                    android.support.v4.util.ArrayMap.this.put(key, value);
                }

                @Override // android.support.v4.util.MapCollections
                protected V colSetValue(int index, V value) {
                    return android.support.v4.util.ArrayMap.this.setValueAt(index, value);
                }

                @Override // android.support.v4.util.MapCollections
                protected void colRemoveAt(int index) {
                    android.support.v4.util.ArrayMap.this.removeAt(index);
                }

                @Override // android.support.v4.util.MapCollections
                protected void colClear() {
                    android.support.v4.util.ArrayMap.this.clear();
                }
            };
        }
        return this.mCollections;
    }

    public boolean containsAll(java.util.Collection<?> collection) {
        return android.support.v4.util.MapCollections.containsAllHelper(this, collection);
    }

    @Override // java.util.Map
    public void putAll(java.util.Map<? extends K, ? extends V> map) {
        ensureCapacity(this.mSize + map.size());
        for (java.util.Map.Entry<? extends K, ? extends V> entry : map.entrySet()) {
            put(entry.getKey(), entry.getValue());
        }
    }

    public boolean removeAll(java.util.Collection<?> collection) {
        return android.support.v4.util.MapCollections.removeAllHelper(this, collection);
    }

    public boolean retainAll(java.util.Collection<?> collection) {
        return android.support.v4.util.MapCollections.retainAllHelper(this, collection);
    }

    @Override // java.util.Map
    public java.util.Set<java.util.Map.Entry<K, V>> entrySet() {
        return getCollection().getEntrySet();
    }

    @Override // java.util.Map
    public java.util.Set<K> keySet() {
        return getCollection().getKeySet();
    }

    @Override // java.util.Map
    public java.util.Collection<V> values() {
        return getCollection().getValues();
    }
}
