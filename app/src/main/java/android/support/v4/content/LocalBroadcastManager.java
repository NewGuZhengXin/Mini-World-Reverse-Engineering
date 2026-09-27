package android.support.v4.content;

/* loaded from: classes.dex */
public class LocalBroadcastManager {
    private static final boolean DEBUG = false;
    static final int MSG_EXEC_PENDING_BROADCASTS = 1;
    private static final java.lang.String TAG = "LocalBroadcastManager";
    private static android.support.v4.content.LocalBroadcastManager mInstance;
    private static final java.lang.Object mLock = new java.lang.Object();
    private final android.content.Context mAppContext;
    private final android.os.Handler mHandler;
    private final java.util.HashMap<android.content.BroadcastReceiver, java.util.ArrayList<android.content.IntentFilter>> mReceivers = new java.util.HashMap<>();
    private final java.util.HashMap<java.lang.String, java.util.ArrayList<android.support.v4.content.LocalBroadcastManager.ReceiverRecord>> mActions = new java.util.HashMap<>();
    private final java.util.ArrayList<android.support.v4.content.LocalBroadcastManager.BroadcastRecord> mPendingBroadcasts = new java.util.ArrayList<>();

    private static class ReceiverRecord {
        boolean broadcasting;
        final android.content.IntentFilter filter;
        final android.content.BroadcastReceiver receiver;

        ReceiverRecord(android.content.IntentFilter _filter, android.content.BroadcastReceiver _receiver) {
            this.filter = _filter;
            this.receiver = _receiver;
        }

        public java.lang.String toString() {
            java.lang.StringBuilder builder = new java.lang.StringBuilder(128);
            builder.append("Receiver{");
            builder.append(this.receiver);
            builder.append(" filter=");
            builder.append(this.filter);
            builder.append("}");
            return builder.toString();
        }
    }

    private static class BroadcastRecord {
        final android.content.Intent intent;
        final java.util.ArrayList<android.support.v4.content.LocalBroadcastManager.ReceiverRecord> receivers;

        BroadcastRecord(android.content.Intent _intent, java.util.ArrayList<android.support.v4.content.LocalBroadcastManager.ReceiverRecord> _receivers) {
            this.intent = _intent;
            this.receivers = _receivers;
        }
    }

    public static android.support.v4.content.LocalBroadcastManager getInstance(android.content.Context context) {
        android.support.v4.content.LocalBroadcastManager localBroadcastManager;
        synchronized (mLock) {
            if (mInstance == null) {
                mInstance = new android.support.v4.content.LocalBroadcastManager(context.getApplicationContext());
            }
            localBroadcastManager = mInstance;
        }
        return localBroadcastManager;
    }

    private LocalBroadcastManager(android.content.Context context) {
        this.mAppContext = context;
        this.mHandler = new android.os.Handler(context.getMainLooper()) { // from class: android.support.v4.content.LocalBroadcastManager.1
            @Override // android.os.Handler
            public void handleMessage(android.os.Message msg) {
                switch (msg.what) {
                    case 1:
                        android.support.v4.content.LocalBroadcastManager.this.executePendingBroadcasts();
                        break;
                    default:
                        super.handleMessage(msg);
                        break;
                }
            }
        };
    }

    public void registerReceiver(android.content.BroadcastReceiver receiver, android.content.IntentFilter filter) {
        synchronized (this.mReceivers) {
            android.support.v4.content.LocalBroadcastManager.ReceiverRecord entry = new android.support.v4.content.LocalBroadcastManager.ReceiverRecord(filter, receiver);
            java.util.ArrayList<android.content.IntentFilter> filters = this.mReceivers.get(receiver);
            if (filters == null) {
                filters = new java.util.ArrayList<>(1);
                this.mReceivers.put(receiver, filters);
            }
            filters.add(filter);
            for (int i = 0; i < filter.countActions(); i++) {
                java.lang.String action = filter.getAction(i);
                java.util.ArrayList<android.support.v4.content.LocalBroadcastManager.ReceiverRecord> entries = this.mActions.get(action);
                if (entries == null) {
                    entries = new java.util.ArrayList<>(1);
                    this.mActions.put(action, entries);
                }
                entries.add(entry);
            }
        }
    }

    public void unregisterReceiver(android.content.BroadcastReceiver receiver) {
        synchronized (this.mReceivers) {
            java.util.ArrayList<android.content.IntentFilter> filters = this.mReceivers.remove(receiver);
            if (filters != null) {
                for (int i = 0; i < filters.size(); i++) {
                    android.content.IntentFilter filter = filters.get(i);
                    for (int j = 0; j < filter.countActions(); j++) {
                        java.lang.String action = filter.getAction(j);
                        java.util.ArrayList<android.support.v4.content.LocalBroadcastManager.ReceiverRecord> receivers = this.mActions.get(action);
                        if (receivers != null) {
                            int k = 0;
                            while (k < receivers.size()) {
                                if (receivers.get(k).receiver == receiver) {
                                    receivers.remove(k);
                                    k--;
                                }
                                k++;
                            }
                            if (receivers.size() <= 0) {
                                this.mActions.remove(action);
                            }
                        }
                    }
                }
            }
        }
    }

    public boolean sendBroadcast(android.content.Intent intent) {
        java.lang.String reason;
        synchronized (this.mReceivers) {
            java.lang.String action = intent.getAction();
            java.lang.String type = intent.resolveTypeIfNeeded(this.mAppContext.getContentResolver());
            android.net.Uri data = intent.getData();
            java.lang.String scheme = intent.getScheme();
            java.util.Set<java.lang.String> categories = intent.getCategories();
            boolean debug = (intent.getFlags() & 8) != 0 ? true : DEBUG;
            if (debug) {
                android.util.Log.v(TAG, "Resolving type " + type + " scheme " + scheme + " of intent " + intent);
            }
            java.util.ArrayList<android.support.v4.content.LocalBroadcastManager.ReceiverRecord> entries = this.mActions.get(intent.getAction());
            if (entries != null) {
                if (debug) {
                    android.util.Log.v(TAG, "Action list: " + entries);
                }
                java.util.ArrayList<android.support.v4.content.LocalBroadcastManager.ReceiverRecord> receivers = null;
                for (int i = 0; i < entries.size(); i++) {
                    android.support.v4.content.LocalBroadcastManager.ReceiverRecord receiver = entries.get(i);
                    if (debug) {
                        android.util.Log.v(TAG, "Matching against filter " + receiver.filter);
                    }
                    if (receiver.broadcasting) {
                        if (debug) {
                            android.util.Log.v(TAG, "  Filter's target already added");
                        }
                    } else {
                        int match = receiver.filter.match(action, type, scheme, data, categories, TAG);
                        if (match >= 0) {
                            if (debug) {
                                android.util.Log.v(TAG, "  Filter matched!  match=0x" + java.lang.Integer.toHexString(match));
                            }
                            if (receivers == null) {
                                receivers = new java.util.ArrayList<>();
                            }
                            receivers.add(receiver);
                            receiver.broadcasting = true;
                        } else if (debug) {
                            switch (match) {
                                case -4:
                                    reason = "category";
                                    break;
                                case -3:
                                    reason = "action";
                                    break;
                                case -2:
                                    reason = "data";
                                    break;
                                case -1:
                                    reason = "type";
                                    break;
                                default:
                                    reason = "unknown reason";
                                    break;
                            }
                            android.util.Log.v(TAG, "  Filter did not match: " + reason);
                        }
                    }
                }
                if (receivers != null) {
                    for (int i2 = 0; i2 < receivers.size(); i2++) {
                        receivers.get(i2).broadcasting = DEBUG;
                    }
                    this.mPendingBroadcasts.add(new android.support.v4.content.LocalBroadcastManager.BroadcastRecord(intent, receivers));
                    if (!this.mHandler.hasMessages(1)) {
                        this.mHandler.sendEmptyMessage(1);
                    }
                    return true;
                }
            }
            return DEBUG;
        }
    }

    public void sendBroadcastSync(android.content.Intent intent) {
        if (sendBroadcast(intent)) {
            executePendingBroadcasts();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void executePendingBroadcasts() {
        android.support.v4.content.LocalBroadcastManager.BroadcastRecord[] brs;
        while (true) {
            synchronized (this.mReceivers) {
                int N = this.mPendingBroadcasts.size();
                if (N <= 0) {
                    return;
                }
                brs = new android.support.v4.content.LocalBroadcastManager.BroadcastRecord[N];
                this.mPendingBroadcasts.toArray(brs);
                this.mPendingBroadcasts.clear();
            }
            for (android.support.v4.content.LocalBroadcastManager.BroadcastRecord br : brs) {
                for (int j = 0; j < br.receivers.size(); j++) {
                    br.receivers.get(j).receiver.onReceive(this.mAppContext, br.intent);
                }
            }
        }
    }
}
