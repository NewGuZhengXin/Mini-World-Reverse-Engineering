package android.support.v4.net;

/* loaded from: classes.dex */
class TrafficStatsCompatIcs {
    TrafficStatsCompatIcs() {
    }

    public static void clearThreadStatsTag() {
        android.net.TrafficStats.clearThreadStatsTag();
    }

    public static int getThreadStatsTag() {
        return android.net.TrafficStats.getThreadStatsTag();
    }

    public static void incrementOperationCount(int operationCount) {
        android.net.TrafficStats.incrementOperationCount(operationCount);
    }

    public static void incrementOperationCount(int tag, int operationCount) {
        android.net.TrafficStats.incrementOperationCount(tag, operationCount);
    }

    public static void setThreadStatsTag(int tag) {
        android.net.TrafficStats.setThreadStatsTag(tag);
    }

    public static void tagSocket(java.net.Socket socket) throws java.net.SocketException {
        android.net.TrafficStats.tagSocket(socket);
    }

    public static void untagSocket(java.net.Socket socket) throws java.net.SocketException {
        android.net.TrafficStats.untagSocket(socket);
    }
}
