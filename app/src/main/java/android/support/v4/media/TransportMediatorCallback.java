package android.support.v4.media;

/* loaded from: classes.dex */
interface TransportMediatorCallback {
    long getPlaybackPosition();

    void handleAudioFocusChange(int i);

    void handleKey(android.view.KeyEvent keyEvent);

    void playbackPositionUpdate(long j);
}
