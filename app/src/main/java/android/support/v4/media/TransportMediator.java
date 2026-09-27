package android.support.v4.media;

/* loaded from: classes.dex */
public class TransportMediator extends android.support.v4.media.TransportController {
    public static final int FLAG_KEY_MEDIA_FAST_FORWARD = 64;
    public static final int FLAG_KEY_MEDIA_NEXT = 128;
    public static final int FLAG_KEY_MEDIA_PAUSE = 16;
    public static final int FLAG_KEY_MEDIA_PLAY = 4;
    public static final int FLAG_KEY_MEDIA_PLAY_PAUSE = 8;
    public static final int FLAG_KEY_MEDIA_PREVIOUS = 1;
    public static final int FLAG_KEY_MEDIA_REWIND = 2;
    public static final int FLAG_KEY_MEDIA_STOP = 32;
    public static final int KEYCODE_MEDIA_PAUSE = 127;
    public static final int KEYCODE_MEDIA_PLAY = 126;
    public static final int KEYCODE_MEDIA_RECORD = 130;
    final android.media.AudioManager mAudioManager;
    final android.support.v4.media.TransportPerformer mCallbacks;
    final android.content.Context mContext;
    final android.support.v4.media.TransportMediatorJellybeanMR2 mController;
    final java.lang.Object mDispatcherState;
    final android.view.KeyEvent.Callback mKeyEventCallback;
    final java.util.ArrayList<android.support.v4.media.TransportStateListener> mListeners;
    final android.support.v4.media.TransportMediatorCallback mTransportKeyCallback;
    final android.view.View mView;

    static boolean isMediaKey(int keyCode) {
        switch (keyCode) {
            case 79:
            case 85:
            case 86:
            case 87:
            case 88:
            case 89:
            case 90:
            case 91:
            case KEYCODE_MEDIA_PLAY /* 126 */:
            case KEYCODE_MEDIA_PAUSE /* 127 */:
            case KEYCODE_MEDIA_RECORD /* 130 */:
                return true;
            default:
                return false;
        }
    }

    public TransportMediator(android.app.Activity activity, android.support.v4.media.TransportPerformer callbacks) {
        this(activity, null, callbacks);
    }

    public TransportMediator(android.view.View view, android.support.v4.media.TransportPerformer callbacks) {
        this(null, view, callbacks);
    }

    private TransportMediator(android.app.Activity activity, android.view.View view, android.support.v4.media.TransportPerformer callbacks) {
        this.mListeners = new java.util.ArrayList<>();
        this.mTransportKeyCallback = new android.support.v4.media.TransportMediatorCallback() { // from class: android.support.v4.media.TransportMediator.1
            @Override // android.support.v4.media.TransportMediatorCallback
            public void handleKey(android.view.KeyEvent key) {
                key.dispatch(android.support.v4.media.TransportMediator.this.mKeyEventCallback);
            }

            @Override // android.support.v4.media.TransportMediatorCallback
            public void handleAudioFocusChange(int focusChange) {
                android.support.v4.media.TransportMediator.this.mCallbacks.onAudioFocusChange(focusChange);
            }

            @Override // android.support.v4.media.TransportMediatorCallback
            public long getPlaybackPosition() {
                return android.support.v4.media.TransportMediator.this.mCallbacks.onGetCurrentPosition();
            }

            @Override // android.support.v4.media.TransportMediatorCallback
            public void playbackPositionUpdate(long newPositionMs) {
                android.support.v4.media.TransportMediator.this.mCallbacks.onSeekTo(newPositionMs);
            }
        };
        this.mKeyEventCallback = new android.view.KeyEvent.Callback() { // from class: android.support.v4.media.TransportMediator.2
            @Override // android.view.KeyEvent.Callback
            public boolean onKeyDown(int keyCode, android.view.KeyEvent event) {
                if (android.support.v4.media.TransportMediator.isMediaKey(keyCode)) {
                    return android.support.v4.media.TransportMediator.this.mCallbacks.onMediaButtonDown(keyCode, event);
                }
                return false;
            }

            @Override // android.view.KeyEvent.Callback
            public boolean onKeyLongPress(int keyCode, android.view.KeyEvent event) {
                return false;
            }

            @Override // android.view.KeyEvent.Callback
            public boolean onKeyUp(int keyCode, android.view.KeyEvent event) {
                if (android.support.v4.media.TransportMediator.isMediaKey(keyCode)) {
                    return android.support.v4.media.TransportMediator.this.mCallbacks.onMediaButtonUp(keyCode, event);
                }
                return false;
            }

            @Override // android.view.KeyEvent.Callback
            public boolean onKeyMultiple(int keyCode, int count, android.view.KeyEvent event) {
                return false;
            }
        };
        this.mContext = activity != null ? activity : view.getContext();
        this.mCallbacks = callbacks;
        this.mAudioManager = (android.media.AudioManager) this.mContext.getSystemService("audio");
        this.mView = activity != null ? activity.getWindow().getDecorView() : view;
        this.mDispatcherState = android.support.v4.view.KeyEventCompat.getKeyDispatcherState(this.mView);
        if (android.os.Build.VERSION.SDK_INT >= 18) {
            this.mController = new android.support.v4.media.TransportMediatorJellybeanMR2(this.mContext, this.mAudioManager, this.mView, this.mTransportKeyCallback);
        } else {
            this.mController = null;
        }
    }

    public java.lang.Object getRemoteControlClient() {
        if (this.mController != null) {
            return this.mController.getRemoteControlClient();
        }
        return null;
    }

    public boolean dispatchKeyEvent(android.view.KeyEvent event) {
        return android.support.v4.view.KeyEventCompat.dispatch(event, this.mKeyEventCallback, this.mDispatcherState, this);
    }

    @Override // android.support.v4.media.TransportController
    public void registerStateListener(android.support.v4.media.TransportStateListener listener) {
        this.mListeners.add(listener);
    }

    @Override // android.support.v4.media.TransportController
    public void unregisterStateListener(android.support.v4.media.TransportStateListener listener) {
        this.mListeners.remove(listener);
    }

    private android.support.v4.media.TransportStateListener[] getListeners() {
        if (this.mListeners.size() <= 0) {
            return null;
        }
        android.support.v4.media.TransportStateListener[] listeners = new android.support.v4.media.TransportStateListener[this.mListeners.size()];
        this.mListeners.toArray(listeners);
        return listeners;
    }

    private void reportPlayingChanged() {
        android.support.v4.media.TransportStateListener[] listeners = getListeners();
        if (listeners != null) {
            for (android.support.v4.media.TransportStateListener listener : listeners) {
                listener.onPlayingChanged(this);
            }
        }
    }

    private void reportTransportControlsChanged() {
        android.support.v4.media.TransportStateListener[] listeners = getListeners();
        if (listeners != null) {
            for (android.support.v4.media.TransportStateListener listener : listeners) {
                listener.onTransportControlsChanged(this);
            }
        }
    }

    private void pushControllerState() {
        if (this.mController != null) {
            this.mController.refreshState(this.mCallbacks.onIsPlaying(), this.mCallbacks.onGetCurrentPosition(), this.mCallbacks.onGetTransportControlFlags());
        }
    }

    public void refreshState() {
        pushControllerState();
        reportPlayingChanged();
        reportTransportControlsChanged();
    }

    @Override // android.support.v4.media.TransportController
    public void startPlaying() {
        if (this.mController != null) {
            this.mController.startPlaying();
        }
        this.mCallbacks.onStart();
        pushControllerState();
        reportPlayingChanged();
    }

    @Override // android.support.v4.media.TransportController
    public void pausePlaying() {
        if (this.mController != null) {
            this.mController.pausePlaying();
        }
        this.mCallbacks.onPause();
        pushControllerState();
        reportPlayingChanged();
    }

    @Override // android.support.v4.media.TransportController
    public void stopPlaying() {
        if (this.mController != null) {
            this.mController.stopPlaying();
        }
        this.mCallbacks.onStop();
        pushControllerState();
        reportPlayingChanged();
    }

    @Override // android.support.v4.media.TransportController
    public long getDuration() {
        return this.mCallbacks.onGetDuration();
    }

    @Override // android.support.v4.media.TransportController
    public long getCurrentPosition() {
        return this.mCallbacks.onGetCurrentPosition();
    }

    @Override // android.support.v4.media.TransportController
    public void seekTo(long pos) {
        this.mCallbacks.onSeekTo(pos);
    }

    @Override // android.support.v4.media.TransportController
    public boolean isPlaying() {
        return this.mCallbacks.onIsPlaying();
    }

    @Override // android.support.v4.media.TransportController
    public int getBufferPercentage() {
        return this.mCallbacks.onGetBufferPercentage();
    }

    @Override // android.support.v4.media.TransportController
    public int getTransportControlFlags() {
        return this.mCallbacks.onGetTransportControlFlags();
    }

    public void destroy() {
        this.mController.destroy();
    }
}
