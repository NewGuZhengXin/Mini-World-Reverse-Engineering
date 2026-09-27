package android.support.v4.net;

/* loaded from: classes.dex */
public class ConnectivityManagerCompat {
    private static final android.support.v4.net.ConnectivityManagerCompat.ConnectivityManagerCompatImpl IMPL;

    interface ConnectivityManagerCompatImpl {
        boolean isActiveNetworkMetered(android.net.ConnectivityManager connectivityManager);
    }

    static class BaseConnectivityManagerCompatImpl implements android.support.v4.net.ConnectivityManagerCompat.ConnectivityManagerCompatImpl {
        BaseConnectivityManagerCompatImpl() {
        }

        @Override // android.support.v4.net.ConnectivityManagerCompat.ConnectivityManagerCompatImpl
        public boolean isActiveNetworkMetered(android.net.ConnectivityManager cm) {
            android.net.NetworkInfo info = cm.getActiveNetworkInfo();
            if (info == null) {
                return true;
            }
            int type = info.getType();
            switch (type) {
                case 0: // NOTE(jadx-fix): restore the smali packed-switch 0x0 -> :pswitch_0 (TYPE_MOBILE => metered)
                    return true;
                case 1: // NOTE(jadx-fix): restore the smali packed-switch 0x1 -> :pswitch_1 (TYPE_WIFI => not metered)
                    return false;
            }
            return true;
        }
    }

    static class GingerbreadConnectivityManagerCompatImpl implements android.support.v4.net.ConnectivityManagerCompat.ConnectivityManagerCompatImpl {
        GingerbreadConnectivityManagerCompatImpl() {
        }

        @Override // android.support.v4.net.ConnectivityManagerCompat.ConnectivityManagerCompatImpl
        public boolean isActiveNetworkMetered(android.net.ConnectivityManager cm) {
            return android.support.v4.net.ConnectivityManagerCompatGingerbread.isActiveNetworkMetered(cm);
        }
    }

    static class HoneycombMR2ConnectivityManagerCompatImpl implements android.support.v4.net.ConnectivityManagerCompat.ConnectivityManagerCompatImpl {
        HoneycombMR2ConnectivityManagerCompatImpl() {
        }

        @Override // android.support.v4.net.ConnectivityManagerCompat.ConnectivityManagerCompatImpl
        public boolean isActiveNetworkMetered(android.net.ConnectivityManager cm) {
            return android.support.v4.net.ConnectivityManagerCompatHoneycombMR2.isActiveNetworkMetered(cm);
        }
    }

    static class JellyBeanConnectivityManagerCompatImpl implements android.support.v4.net.ConnectivityManagerCompat.ConnectivityManagerCompatImpl {
        JellyBeanConnectivityManagerCompatImpl() {
        }

        @Override // android.support.v4.net.ConnectivityManagerCompat.ConnectivityManagerCompatImpl
        public boolean isActiveNetworkMetered(android.net.ConnectivityManager cm) {
            return android.support.v4.net.ConnectivityManagerCompatJellyBean.isActiveNetworkMetered(cm);
        }
    }

    static {
        // NOTE(jadx-fix): the original <clinit> jumped to its end after the >= 16 assignment
        // (jadx rendered that as a `return` outside a method); an else-if chain keeps the semantics.
        if (android.os.Build.VERSION.SDK_INT >= 16) {
            IMPL = new android.support.v4.net.ConnectivityManagerCompat.JellyBeanConnectivityManagerCompatImpl();
        } else if (android.os.Build.VERSION.SDK_INT >= 13) {
            IMPL = new android.support.v4.net.ConnectivityManagerCompat.HoneycombMR2ConnectivityManagerCompatImpl();
        } else if (android.os.Build.VERSION.SDK_INT >= 8) {
            IMPL = new android.support.v4.net.ConnectivityManagerCompat.GingerbreadConnectivityManagerCompatImpl();
        } else {
            IMPL = new android.support.v4.net.ConnectivityManagerCompat.BaseConnectivityManagerCompatImpl();
        }
    }

    public static boolean isActiveNetworkMetered(android.net.ConnectivityManager cm) {
        return IMPL.isActiveNetworkMetered(cm);
    }

    public static android.net.NetworkInfo getNetworkInfoFromBroadcast(android.net.ConnectivityManager cm, android.content.Intent intent) {
        android.net.NetworkInfo info = (android.net.NetworkInfo) intent.getParcelableExtra("networkInfo");
        return cm.getNetworkInfo(info.getType());
    }
}
