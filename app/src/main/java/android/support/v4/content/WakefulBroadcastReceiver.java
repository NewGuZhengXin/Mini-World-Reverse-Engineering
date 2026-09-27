package android.support.v4.content;

/* loaded from: classes.dex */
public abstract class WakefulBroadcastReceiver extends android.content.BroadcastReceiver {
    private static final java.lang.String EXTRA_WAKE_LOCK_ID = "android.support.content.wakelockid";
    private static final android.util.SparseArray<android.os.PowerManager.WakeLock> mActiveWakeLocks = new android.util.SparseArray<>();
    private static int mNextId = 1;

    public static android.content.ComponentName startWakefulService(android.content.Context context, android.content.Intent intent) {
        android.content.ComponentName comp;
        synchronized (mActiveWakeLocks) {
            int id = mNextId;
            mNextId++;
            if (mNextId <= 0) {
                mNextId = 1;
            }
            intent.putExtra(EXTRA_WAKE_LOCK_ID, id);
            comp = context.startService(intent);
            if (comp == null) {
                comp = null;
            } else {
                android.os.PowerManager pm = (android.os.PowerManager) context.getSystemService("power");
                android.os.PowerManager.WakeLock wl = pm.newWakeLock(1, "wake:" + comp.flattenToShortString());
                wl.setReferenceCounted(false);
                wl.acquire(60000L);
                mActiveWakeLocks.put(id, wl);
            }
        }
        return comp;
    }

    public static boolean completeWakefulIntent(android.content.Intent intent) {
        boolean z = false;
        int id = intent.getIntExtra(EXTRA_WAKE_LOCK_ID, 0);
        if (id != 0) {
            synchronized (mActiveWakeLocks) {
                android.os.PowerManager.WakeLock wl = mActiveWakeLocks.get(id);
                if (wl != null) {
                    wl.release();
                    mActiveWakeLocks.remove(id);
                    z = true;
                } else {
                    android.util.Log.w("WakefulBroadcastReceiver", "No active wake lock id #" + id);
                    z = true;
                }
            }
        }
        return z;
    }
}
