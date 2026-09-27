package android.support.v4.net;

/* loaded from: classes.dex */
public class TrafficStatsCompat {
    private static final android.support.v4.net.TrafficStatsCompat.TrafficStatsCompatImpl IMPL;

    interface TrafficStatsCompatImpl {
        void clearThreadStatsTag();

        int getThreadStatsTag();

        void incrementOperationCount(int i);

        void incrementOperationCount(int i, int i2);

        void setThreadStatsTag(int i);

        void tagSocket(java.net.Socket socket) throws java.net.SocketException;

        void untagSocket(java.net.Socket socket) throws java.net.SocketException;
    }

    static class BaseTrafficStatsCompatImpl implements android.support.v4.net.TrafficStatsCompat.TrafficStatsCompatImpl {
        private java.lang.ThreadLocal<android.support.v4.net.TrafficStatsCompat.BaseTrafficStatsCompatImpl.SocketTags> mThreadSocketTags = new java.lang.ThreadLocal<android.support.v4.net.TrafficStatsCompat.BaseTrafficStatsCompatImpl.SocketTags>() { // from class: android.support.v4.net.TrafficStatsCompat.BaseTrafficStatsCompatImpl.1
            /* JADX INFO: Access modifiers changed from: protected */
            /* JADX WARN: Can't rename method to resolve collision */
            @Override // java.lang.ThreadLocal
            public android.support.v4.net.TrafficStatsCompat.BaseTrafficStatsCompatImpl.SocketTags initialValue() {
                return new android.support.v4.net.TrafficStatsCompat.BaseTrafficStatsCompatImpl.SocketTags();
            }
        };

        private static class SocketTags {
            public int statsTag;

            private SocketTags() {
                this.statsTag = -1;
            }
        }

        BaseTrafficStatsCompatImpl() {
        }

        @Override // android.support.v4.net.TrafficStatsCompat.TrafficStatsCompatImpl
        public void clearThreadStatsTag() {
            this.mThreadSocketTags.get().statsTag = -1;
        }

        @Override // android.support.v4.net.TrafficStatsCompat.TrafficStatsCompatImpl
        public int getThreadStatsTag() {
            return this.mThreadSocketTags.get().statsTag;
        }

        @Override // android.support.v4.net.TrafficStatsCompat.TrafficStatsCompatImpl
        public void incrementOperationCount(int operationCount) {
        }

        @Override // android.support.v4.net.TrafficStatsCompat.TrafficStatsCompatImpl
        public void incrementOperationCount(int tag, int operationCount) {
        }

        @Override // android.support.v4.net.TrafficStatsCompat.TrafficStatsCompatImpl
        public void setThreadStatsTag(int tag) {
            this.mThreadSocketTags.get().statsTag = tag;
        }

        @Override // android.support.v4.net.TrafficStatsCompat.TrafficStatsCompatImpl
        public void tagSocket(java.net.Socket socket) {
        }

        @Override // android.support.v4.net.TrafficStatsCompat.TrafficStatsCompatImpl
        public void untagSocket(java.net.Socket socket) {
        }
    }

    static class IcsTrafficStatsCompatImpl implements android.support.v4.net.TrafficStatsCompat.TrafficStatsCompatImpl {
        IcsTrafficStatsCompatImpl() {
        }

        @Override // android.support.v4.net.TrafficStatsCompat.TrafficStatsCompatImpl
        public void clearThreadStatsTag() {
            android.support.v4.net.TrafficStatsCompatIcs.clearThreadStatsTag();
        }

        @Override // android.support.v4.net.TrafficStatsCompat.TrafficStatsCompatImpl
        public int getThreadStatsTag() {
            return android.support.v4.net.TrafficStatsCompatIcs.getThreadStatsTag();
        }

        @Override // android.support.v4.net.TrafficStatsCompat.TrafficStatsCompatImpl
        public void incrementOperationCount(int operationCount) {
            android.support.v4.net.TrafficStatsCompatIcs.incrementOperationCount(operationCount);
        }

        @Override // android.support.v4.net.TrafficStatsCompat.TrafficStatsCompatImpl
        public void incrementOperationCount(int tag, int operationCount) {
            android.support.v4.net.TrafficStatsCompatIcs.incrementOperationCount(tag, operationCount);
        }

        @Override // android.support.v4.net.TrafficStatsCompat.TrafficStatsCompatImpl
        public void setThreadStatsTag(int tag) {
            android.support.v4.net.TrafficStatsCompatIcs.setThreadStatsTag(tag);
        }

        @Override // android.support.v4.net.TrafficStatsCompat.TrafficStatsCompatImpl
        public void tagSocket(java.net.Socket socket) throws java.net.SocketException {
            android.support.v4.net.TrafficStatsCompatIcs.tagSocket(socket);
        }

        @Override // android.support.v4.net.TrafficStatsCompat.TrafficStatsCompatImpl
        public void untagSocket(java.net.Socket socket) throws java.net.SocketException {
            android.support.v4.net.TrafficStatsCompatIcs.untagSocket(socket);
        }
    }

    static {
        if (android.os.Build.VERSION.SDK_INT >= 14) {
            IMPL = new android.support.v4.net.TrafficStatsCompat.IcsTrafficStatsCompatImpl();
        } else {
            IMPL = new android.support.v4.net.TrafficStatsCompat.BaseTrafficStatsCompatImpl();
        }
    }

    public static void clearThreadStatsTag() {
        IMPL.clearThreadStatsTag();
    }

    public static int getThreadStatsTag() {
        return IMPL.getThreadStatsTag();
    }

    public static void incrementOperationCount(int operationCount) {
        IMPL.incrementOperationCount(operationCount);
    }

    public static void incrementOperationCount(int tag, int operationCount) {
        IMPL.incrementOperationCount(tag, operationCount);
    }

    public static void setThreadStatsTag(int tag) {
        IMPL.setThreadStatsTag(tag);
    }

    public static void tagSocket(java.net.Socket socket) throws java.net.SocketException {
        IMPL.tagSocket(socket);
    }

    public static void untagSocket(java.net.Socket socket) throws java.net.SocketException {
        IMPL.untagSocket(socket);
    }
}
