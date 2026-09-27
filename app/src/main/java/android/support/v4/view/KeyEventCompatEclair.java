package android.support.v4.view;

/* loaded from: classes.dex */
class KeyEventCompatEclair {
    KeyEventCompatEclair() {
    }

    public static java.lang.Object getKeyDispatcherState(android.view.View view) {
        return view.getKeyDispatcherState();
    }

    public static boolean dispatch(android.view.KeyEvent event, android.view.KeyEvent.Callback receiver, java.lang.Object state, java.lang.Object target) {
        return event.dispatch(receiver, (android.view.KeyEvent.DispatcherState) state, target);
    }

    public static void startTracking(android.view.KeyEvent event) {
        event.startTracking();
    }

    public static boolean isTracking(android.view.KeyEvent event) {
        return event.isTracking();
    }
}
