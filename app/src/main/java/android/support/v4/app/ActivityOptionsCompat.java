package android.support.v4.app;

/* loaded from: classes.dex */
public class ActivityOptionsCompat {
    public static android.support.v4.app.ActivityOptionsCompat makeCustomAnimation(android.content.Context context, int enterResId, int exitResId) {
        return android.os.Build.VERSION.SDK_INT >= 16 ? new android.support.v4.app.ActivityOptionsCompat.ActivityOptionsImplJB(android.support.v4.app.ActivityOptionsCompatJB.makeCustomAnimation(context, enterResId, exitResId)) : new android.support.v4.app.ActivityOptionsCompat();
    }

    public static android.support.v4.app.ActivityOptionsCompat makeScaleUpAnimation(android.view.View source, int startX, int startY, int startWidth, int startHeight) {
        return android.os.Build.VERSION.SDK_INT >= 16 ? new android.support.v4.app.ActivityOptionsCompat.ActivityOptionsImplJB(android.support.v4.app.ActivityOptionsCompatJB.makeScaleUpAnimation(source, startX, startY, startWidth, startHeight)) : new android.support.v4.app.ActivityOptionsCompat();
    }

    public static android.support.v4.app.ActivityOptionsCompat makeThumbnailScaleUpAnimation(android.view.View source, android.graphics.Bitmap thumbnail, int startX, int startY) {
        return android.os.Build.VERSION.SDK_INT >= 16 ? new android.support.v4.app.ActivityOptionsCompat.ActivityOptionsImplJB(android.support.v4.app.ActivityOptionsCompatJB.makeThumbnailScaleUpAnimation(source, thumbnail, startX, startY)) : new android.support.v4.app.ActivityOptionsCompat();
    }

    private static class ActivityOptionsImplJB extends android.support.v4.app.ActivityOptionsCompat {
        private final android.support.v4.app.ActivityOptionsCompatJB mImpl;

        ActivityOptionsImplJB(android.support.v4.app.ActivityOptionsCompatJB impl) {
            this.mImpl = impl;
        }

        @Override // android.support.v4.app.ActivityOptionsCompat
        public android.os.Bundle toBundle() {
            return this.mImpl.toBundle();
        }

        @Override // android.support.v4.app.ActivityOptionsCompat
        public void update(android.support.v4.app.ActivityOptionsCompat otherOptions) {
            if (otherOptions instanceof android.support.v4.app.ActivityOptionsCompat.ActivityOptionsImplJB) {
                android.support.v4.app.ActivityOptionsCompat.ActivityOptionsImplJB otherImpl = (android.support.v4.app.ActivityOptionsCompat.ActivityOptionsImplJB) otherOptions;
                this.mImpl.update(otherImpl.mImpl);
            }
        }
    }

    protected ActivityOptionsCompat() {
    }

    public android.os.Bundle toBundle() {
        return null;
    }

    public void update(android.support.v4.app.ActivityOptionsCompat otherOptions) {
    }
}
