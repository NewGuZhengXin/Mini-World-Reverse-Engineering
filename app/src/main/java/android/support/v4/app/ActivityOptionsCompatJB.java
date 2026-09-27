package android.support.v4.app;

/* loaded from: classes.dex */
class ActivityOptionsCompatJB {
    private final android.app.ActivityOptions mActivityOptions;

    public static android.support.v4.app.ActivityOptionsCompatJB makeCustomAnimation(android.content.Context context, int enterResId, int exitResId) {
        return new android.support.v4.app.ActivityOptionsCompatJB(android.app.ActivityOptions.makeCustomAnimation(context, enterResId, exitResId));
    }

    public static android.support.v4.app.ActivityOptionsCompatJB makeScaleUpAnimation(android.view.View source, int startX, int startY, int startWidth, int startHeight) {
        return new android.support.v4.app.ActivityOptionsCompatJB(android.app.ActivityOptions.makeScaleUpAnimation(source, startX, startY, startWidth, startHeight));
    }

    public static android.support.v4.app.ActivityOptionsCompatJB makeThumbnailScaleUpAnimation(android.view.View source, android.graphics.Bitmap thumbnail, int startX, int startY) {
        return new android.support.v4.app.ActivityOptionsCompatJB(android.app.ActivityOptions.makeThumbnailScaleUpAnimation(source, thumbnail, startX, startY));
    }

    private ActivityOptionsCompatJB(android.app.ActivityOptions activityOptions) {
        this.mActivityOptions = activityOptions;
    }

    public android.os.Bundle toBundle() {
        return this.mActivityOptions.toBundle();
    }

    public void update(android.support.v4.app.ActivityOptionsCompatJB otherOptions) {
        this.mActivityOptions.update(otherOptions.mActivityOptions);
    }
}
