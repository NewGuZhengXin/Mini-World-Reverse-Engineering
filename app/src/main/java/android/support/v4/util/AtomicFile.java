package android.support.v4.util;

/* loaded from: classes.dex */
public class AtomicFile {
    private final java.io.File mBackupName;
    private final java.io.File mBaseName;

    public AtomicFile(java.io.File baseName) {
        this.mBaseName = baseName;
        this.mBackupName = new java.io.File(baseName.getPath() + ".bak");
    }

    public java.io.File getBaseFile() {
        return this.mBaseName;
    }

    public void delete() {
        this.mBaseName.delete();
        this.mBackupName.delete();
    }

    public java.io.FileOutputStream startWrite() throws java.io.IOException {
        if (this.mBaseName.exists()) {
            if (!this.mBackupName.exists()) {
                if (!this.mBaseName.renameTo(this.mBackupName)) {
                    android.util.Log.w("AtomicFile", "Couldn't rename file " + this.mBaseName + " to backup file " + this.mBackupName);
                }
            } else {
                this.mBaseName.delete();
            }
        }
        try {
            java.io.FileOutputStream str = new java.io.FileOutputStream(this.mBaseName);
            return str;
        } catch (java.io.FileNotFoundException e) {
            java.io.File parent = this.mBaseName.getParentFile();
            if (!parent.mkdir()) {
                throw new java.io.IOException("Couldn't create directory " + this.mBaseName);
            }
            try {
                java.io.FileOutputStream str2 = new java.io.FileOutputStream(this.mBaseName);
                return str2;
            } catch (java.io.FileNotFoundException e2) {
                throw new java.io.IOException("Couldn't create " + this.mBaseName);
            }
        }
    }

    public void finishWrite(java.io.FileOutputStream str) throws java.io.IOException {
        if (str != null) {
            sync(str);
            try {
                str.close();
                this.mBackupName.delete();
            } catch (java.io.IOException e) {
                android.util.Log.w("AtomicFile", "finishWrite: Got exception:", e);
            }
        }
    }

    public void failWrite(java.io.FileOutputStream str) throws java.io.IOException {
        if (str != null) {
            sync(str);
            try {
                str.close();
                this.mBaseName.delete();
                this.mBackupName.renameTo(this.mBaseName);
            } catch (java.io.IOException e) {
                android.util.Log.w("AtomicFile", "failWrite: Got exception:", e);
            }
        }
    }

    public java.io.FileInputStream openRead() throws java.io.FileNotFoundException {
        if (this.mBackupName.exists()) {
            this.mBaseName.delete();
            this.mBackupName.renameTo(this.mBaseName);
        }
        return new java.io.FileInputStream(this.mBaseName);
    }

    public byte[] readFully() throws java.io.IOException {
        java.io.FileInputStream stream = openRead();
        int pos = 0;
        try {
            byte[] data = new byte[stream.available()];
            while (true) {
                int amt = stream.read(data, pos, data.length - pos);
                if (amt <= 0) {
                    return data;
                }
                pos += amt;
                int avail = stream.available();
                if (avail > data.length - pos) {
                    byte[] newData = new byte[pos + avail];
                    java.lang.System.arraycopy(data, 0, newData, 0, pos);
                    data = newData;
                }
            }
        } finally {
            stream.close();
        }
    }

    static boolean sync(java.io.FileOutputStream stream) throws java.io.SyncFailedException {
        if (stream != null) {
            try {
                stream.getFD().sync();
            } catch (java.io.IOException e) {
                return false;
            }
        }
        return true;
    }
}
