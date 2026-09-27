package android.support.v4.media;

/* loaded from: classes.dex */
class TransportMediatorJellybeanMR2 implements android.media.RemoteControlClient.OnGetPlaybackPositionListener, android.media.RemoteControlClient.OnPlaybackPositionUpdateListener {
    boolean mAudioFocused;
    final android.media.AudioManager mAudioManager;
    final android.content.Context mContext;
    boolean mFocused;
    final android.content.Intent mIntent;
    android.app.PendingIntent mPendingIntent;
    final java.lang.String mReceiverAction;
    final android.content.IntentFilter mReceiverFilter;
    android.media.RemoteControlClient mRemoteControl;
    final android.view.View mTargetView;
    final android.support.v4.media.TransportMediatorCallback mTransportCallback;
    final android.view.ViewTreeObserver.OnWindowAttachListener mWindowAttachListener = new android.view.ViewTreeObserver.OnWindowAttachListener() { // from class: android.support.v4.media.TransportMediatorJellybeanMR2.1
        @Override // android.view.ViewTreeObserver.OnWindowAttachListener
        public void onWindowAttached() {
            android.support.v4.media.TransportMediatorJellybeanMR2.this.windowAttached();
        }

        @Override // android.view.ViewTreeObserver.OnWindowAttachListener
        public void onWindowDetached() {
            android.support.v4.media.TransportMediatorJellybeanMR2.this.windowDetached();
        }
    };
    final android.view.ViewTreeObserver.OnWindowFocusChangeListener mWindowFocusListener = new android.view.ViewTreeObserver.OnWindowFocusChangeListener() { // from class: android.support.v4.media.TransportMediatorJellybeanMR2.2
        @Override // android.view.ViewTreeObserver.OnWindowFocusChangeListener
        public void onWindowFocusChanged(boolean hasFocus) {
            if (!hasFocus) {
                android.support.v4.media.TransportMediatorJellybeanMR2.this.loseFocus();
            } else {
                android.support.v4.media.TransportMediatorJellybeanMR2.this.gainFocus();
            }
        }
    };
    final android.content.BroadcastReceiver mMediaButtonReceiver = new android.content.BroadcastReceiver() { // from class: android.support.v4.media.TransportMediatorJellybeanMR2.3
        @Override // android.content.BroadcastReceiver
        public void onReceive(android.content.Context context, android.content.Intent intent) {
            try {
                android.view.KeyEvent event = (android.view.KeyEvent) intent.getParcelableExtra("android.intent.extra.KEY_EVENT");
                android.support.v4.media.TransportMediatorJellybeanMR2.this.mTransportCallback.handleKey(event);
            } catch (java.lang.ClassCastException e) {
                android.util.Log.w("TransportController", e);
            }
        }
    };
    android.media.AudioManager.OnAudioFocusChangeListener mAudioFocusChangeListener = new android.media.AudioManager.OnAudioFocusChangeListener() { // from class: android.support.v4.media.TransportMediatorJellybeanMR2.4
        @Override // android.media.AudioManager.OnAudioFocusChangeListener
        public void onAudioFocusChange(int focusChange) {
            android.support.v4.media.TransportMediatorJellybeanMR2.this.mTransportCallback.handleAudioFocusChange(focusChange);
        }
    };
    int mPlayState = 0;

    public TransportMediatorJellybeanMR2(android.content.Context context, android.media.AudioManager audioManager, android.view.View view, android.support.v4.media.TransportMediatorCallback transportCallback) {
        this.mContext = context;
        this.mAudioManager = audioManager;
        this.mTargetView = view;
        this.mTransportCallback = transportCallback;
        this.mReceiverAction = context.getPackageName() + ":transport:" + java.lang.System.identityHashCode(this);
        this.mIntent = new android.content.Intent(this.mReceiverAction);
        this.mIntent.setPackage(context.getPackageName());
        this.mReceiverFilter = new android.content.IntentFilter();
        this.mReceiverFilter.addAction(this.mReceiverAction);
        this.mTargetView.getViewTreeObserver().addOnWindowAttachListener(this.mWindowAttachListener);
        this.mTargetView.getViewTreeObserver().addOnWindowFocusChangeListener(this.mWindowFocusListener);
    }

    public java.lang.Object getRemoteControlClient() {
        return this.mRemoteControl;
    }

    public void destroy() {
        windowDetached();
        this.mTargetView.getViewTreeObserver().removeOnWindowAttachListener(this.mWindowAttachListener);
        this.mTargetView.getViewTreeObserver().removeOnWindowFocusChangeListener(this.mWindowFocusListener);
    }

    void windowAttached() {
        this.mContext.registerReceiver(this.mMediaButtonReceiver, this.mReceiverFilter);
        this.mPendingIntent = android.app.PendingIntent.getBroadcast(this.mContext, 0, this.mIntent, 268435456);
        this.mRemoteControl = new android.media.RemoteControlClient(this.mPendingIntent);
        this.mRemoteControl.setOnGetPlaybackPositionListener(this);
        this.mRemoteControl.setPlaybackPositionUpdateListener(this);
    }

    void gainFocus() {
        if (!this.mFocused) {
            this.mFocused = true;
            this.mAudioManager.registerMediaButtonEventReceiver(this.mPendingIntent);
            this.mAudioManager.registerRemoteControlClient(this.mRemoteControl);
            if (this.mPlayState == 3) {
                takeAudioFocus();
            }
        }
    }

    void takeAudioFocus() {
        if (!this.mAudioFocused) {
            this.mAudioFocused = true;
            this.mAudioManager.requestAudioFocus(this.mAudioFocusChangeListener, 3, 1);
        }
    }

    public void startPlaying() {
        if (this.mPlayState != 3) {
            this.mPlayState = 3;
            this.mRemoteControl.setPlaybackState(3);
        }
        if (this.mFocused) {
            takeAudioFocus();
        }
    }

    @Override // android.media.RemoteControlClient.OnGetPlaybackPositionListener
    public long onGetPlaybackPosition() {
        return this.mTransportCallback.getPlaybackPosition();
    }

    @Override // android.media.RemoteControlClient.OnPlaybackPositionUpdateListener
    public void onPlaybackPositionUpdate(long newPositionMs) {
        this.mTransportCallback.playbackPositionUpdate(newPositionMs);
    }

    public void refreshState(boolean playing, long position, int transportControls) {
        if (this.mRemoteControl != null) {
            this.mRemoteControl.setPlaybackState(playing ? 3 : 1, position, playing ? 1.0f : 0.0f);
            this.mRemoteControl.setTransportControlFlags(transportControls);
        }
    }

    public void pausePlaying() {
        if (this.mPlayState == 3) {
            this.mPlayState = 2;
            this.mRemoteControl.setPlaybackState(2);
        }
        dropAudioFocus();
    }

    public void stopPlaying() {
        if (this.mPlayState != 1) {
            this.mPlayState = 1;
            this.mRemoteControl.setPlaybackState(1);
        }
        dropAudioFocus();
    }

    void dropAudioFocus() {
        if (this.mAudioFocused) {
            this.mAudioFocused = false;
            this.mAudioManager.abandonAudioFocus(this.mAudioFocusChangeListener);
        }
    }

    void loseFocus() {
        dropAudioFocus();
        if (this.mFocused) {
            this.mFocused = false;
            this.mAudioManager.unregisterRemoteControlClient(this.mRemoteControl);
            this.mAudioManager.unregisterMediaButtonEventReceiver(this.mPendingIntent);
        }
    }

    void windowDetached() {
        loseFocus();
        if (this.mPendingIntent != null) {
            this.mContext.unregisterReceiver(this.mMediaButtonReceiver);
            this.mPendingIntent.cancel();
            this.mPendingIntent = null;
            this.mRemoteControl = null;
        }
    }
}
