package android.support.v4.media;

/* loaded from: classes.dex */
public abstract class TransportPerformer {
    static final int AUDIOFOCUS_GAIN = 1;
    static final int AUDIOFOCUS_GAIN_TRANSIENT = 2;
    static final int AUDIOFOCUS_GAIN_TRANSIENT_MAY_DUCK = 3;
    static final int AUDIOFOCUS_LOSS = -1;
    static final int AUDIOFOCUS_LOSS_TRANSIENT = -2;
    static final int AUDIOFOCUS_LOSS_TRANSIENT_CAN_DUCK = -3;

    public abstract long onGetCurrentPosition();

    public abstract long onGetDuration();

    public abstract boolean onIsPlaying();

    public abstract void onPause();

    public abstract void onSeekTo(long j);

    public abstract void onStart();

    public abstract void onStop();

    public int onGetBufferPercentage() {
        return 100;
    }

    public int onGetTransportControlFlags() {
        return 60;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    public boolean onMediaButtonDown(int keyCode, android.view.KeyEvent event) {
        switch (keyCode) {
            case 79:
            case 85:
                if (onIsPlaying()) {
                    onPause();
                } else {
                    onStart();
                }
                return true;
            case 86:
                onStop();
                return true;
            case android.support.v4.media.TransportMediator.KEYCODE_MEDIA_PLAY /* 126 */:
                onStart();
                return true;
            case android.support.v4.media.TransportMediator.KEYCODE_MEDIA_PAUSE /* 127 */:
                onPause();
                return true;
            default:
                return true;
        }
    }

    public boolean onMediaButtonUp(int keyCode, android.view.KeyEvent event) {
        return true;
    }

    public void onAudioFocusChange(int focusChange) {
        int keyCode = 0;
        switch (focusChange) {
            case -1:
                keyCode = android.support.v4.media.TransportMediator.KEYCODE_MEDIA_PAUSE;
                break;
        }
        if (keyCode != 0) {
            long now = android.os.SystemClock.uptimeMillis();
            onMediaButtonDown(keyCode, new android.view.KeyEvent(now, now, 0, keyCode, 0));
            onMediaButtonUp(keyCode, new android.view.KeyEvent(now, now, 1, keyCode, 0));
        }
    }
}
