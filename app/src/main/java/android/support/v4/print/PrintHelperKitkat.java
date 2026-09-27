package android.support.v4.print;

/* loaded from: classes.dex */
class PrintHelperKitkat {
    public static final int COLOR_MODE_COLOR = 2;
    public static final int COLOR_MODE_MONOCHROME = 1;
    private static final java.lang.String LOG_TAG = "PrintHelperKitkat";
    private static final int MAX_PRINT_SIZE = 3500;
    public static final int ORIENTATION_LANDSCAPE = 1;
    public static final int ORIENTATION_PORTRAIT = 2;
    public static final int SCALE_MODE_FILL = 2;
    public static final int SCALE_MODE_FIT = 1;
    final android.content.Context mContext;
    android.graphics.BitmapFactory.Options mDecodeOptions = null;
    private final java.lang.Object mLock = new java.lang.Object();
    int mScaleMode = 2;
    int mColorMode = 2;
    int mOrientation = 1;

    PrintHelperKitkat(android.content.Context context) {
        this.mContext = context;
    }

    public void setScaleMode(int scaleMode) {
        this.mScaleMode = scaleMode;
    }

    public int getScaleMode() {
        return this.mScaleMode;
    }

    public void setColorMode(int colorMode) {
        this.mColorMode = colorMode;
    }

    public void setOrientation(int orientation) {
        this.mOrientation = orientation;
    }

    public int getOrientation() {
        return this.mOrientation;
    }

    public int getColorMode() {
        return this.mColorMode;
    }

    public void printBitmap(final java.lang.String jobName, final android.graphics.Bitmap bitmap) {
        if (bitmap != null) {
            final int fittingMode = this.mScaleMode;
            android.print.PrintManager printManager = (android.print.PrintManager) this.mContext.getSystemService("print");
            android.print.PrintAttributes.MediaSize mediaSize = android.print.PrintAttributes.MediaSize.UNKNOWN_PORTRAIT;
            if (bitmap.getWidth() > bitmap.getHeight()) {
                mediaSize = android.print.PrintAttributes.MediaSize.UNKNOWN_LANDSCAPE;
            }
            android.print.PrintAttributes attr = new android.print.PrintAttributes.Builder().setMediaSize(mediaSize).setColorMode(this.mColorMode).build();
            printManager.print(jobName, new android.print.PrintDocumentAdapter() { // from class: android.support.v4.print.PrintHelperKitkat.1
                private android.print.PrintAttributes mAttributes;

                @Override // android.print.PrintDocumentAdapter
                public void onLayout(android.print.PrintAttributes oldPrintAttributes, android.print.PrintAttributes newPrintAttributes, android.os.CancellationSignal cancellationSignal, android.print.PrintDocumentAdapter.LayoutResultCallback layoutResultCallback, android.os.Bundle bundle) {
                    this.mAttributes = newPrintAttributes;
                    android.print.PrintDocumentInfo info = new android.print.PrintDocumentInfo.Builder(jobName).setContentType(1).setPageCount(1).build();
                    boolean changed = newPrintAttributes.equals(oldPrintAttributes) ? false : true;
                    layoutResultCallback.onLayoutFinished(info, changed);
                }

                @Override // android.print.PrintDocumentAdapter
                public void onWrite(android.print.PageRange[] pageRanges, android.os.ParcelFileDescriptor fileDescriptor, android.os.CancellationSignal cancellationSignal, android.print.PrintDocumentAdapter.WriteResultCallback writeResultCallback) { // NOTE(jadx-fix): PrintDocumentAdapter.onWrite declares no checked exceptions in API 34 (nor in the smali); the IOException is handled inside the body
                    android.print.pdf.PrintedPdfDocument pdfDocument = new android.print.pdf.PrintedPdfDocument(android.support.v4.print.PrintHelperKitkat.this.mContext, this.mAttributes);
                    try {
                        android.graphics.pdf.PdfDocument.Page page = pdfDocument.startPage(1);
                        android.graphics.RectF content = new android.graphics.RectF(page.getInfo().getContentRect());
                        android.graphics.Matrix matrix = android.support.v4.print.PrintHelperKitkat.this.getMatrix(bitmap.getWidth(), bitmap.getHeight(), content, fittingMode);
                        page.getCanvas().drawBitmap(bitmap, matrix, null);
                        pdfDocument.finishPage(page);
                        try {
                            pdfDocument.writeTo(new java.io.FileOutputStream(fileDescriptor.getFileDescriptor()));
                            writeResultCallback.onWriteFinished(new android.print.PageRange[]{android.print.PageRange.ALL_PAGES});
                        } catch (java.io.IOException ioe) {
                            android.util.Log.e(android.support.v4.print.PrintHelperKitkat.LOG_TAG, "Error writing printed content", ioe);
                            writeResultCallback.onWriteFailed(null);
                        }
                        if (pdfDocument != null) {
                            pdfDocument.close();
                        }
                        if (fileDescriptor != null) {
                            try {
                                fileDescriptor.close();
                            } catch (java.io.IOException e) {
                            }
                        }
                    } catch (java.lang.Throwable th) {
                        if (pdfDocument != null) {
                            pdfDocument.close();
                        }
                        if (fileDescriptor != null) {
                            try {
                                fileDescriptor.close();
                            } catch (java.io.IOException e2) {
                            }
                        }
                        throw th;
                    }
                }
            }, attr);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public android.graphics.Matrix getMatrix(int imageWidth, int imageHeight, android.graphics.RectF content, int fittingMode) {
        float scale;
        android.graphics.Matrix matrix = new android.graphics.Matrix();
        float scale2 = content.width() / imageWidth;
        if (fittingMode == 2) {
            scale = java.lang.Math.max(scale2, content.height() / imageHeight);
        } else {
            scale = java.lang.Math.min(scale2, content.height() / imageHeight);
        }
        matrix.postScale(scale, scale);
        float translateX = (content.width() - (imageWidth * scale)) / 2.0f;
        float translateY = (content.height() - (imageHeight * scale)) / 2.0f;
        matrix.postTranslate(translateX, translateY);
        return matrix;
    }

    public void printBitmap(java.lang.String jobName, android.net.Uri imageFile) throws java.io.FileNotFoundException {
        int fittingMode = this.mScaleMode;
        android.print.PrintDocumentAdapter printDocumentAdapter = new android.support.v4.print.PrintHelperKitkat.AnonymousClass2(jobName, imageFile, fittingMode);
        android.print.PrintManager printManager = (android.print.PrintManager) this.mContext.getSystemService("print");
        android.print.PrintAttributes.Builder builder = new android.print.PrintAttributes.Builder();
        builder.setColorMode(this.mColorMode);
        if (this.mOrientation == 1) {
            builder.setMediaSize(android.print.PrintAttributes.MediaSize.UNKNOWN_LANDSCAPE);
        } else if (this.mOrientation == 2) {
            builder.setMediaSize(android.print.PrintAttributes.MediaSize.UNKNOWN_PORTRAIT);
        }
        android.print.PrintAttributes attr = builder.build();
        printManager.print(jobName, printDocumentAdapter, attr);
    }

    /* renamed from: android.support.v4.print.PrintHelperKitkat$2, reason: invalid class name */
    class AnonymousClass2 extends android.print.PrintDocumentAdapter {
        android.os.AsyncTask<android.net.Uri, java.lang.Boolean, android.graphics.Bitmap> loadBitmap;
        private android.print.PrintAttributes mAttributes;
        android.graphics.Bitmap mBitmap = null;
        final /* synthetic */ int val$fittingMode;
        final /* synthetic */ android.net.Uri val$imageFile;
        final /* synthetic */ java.lang.String val$jobName;

        AnonymousClass2(java.lang.String str, android.net.Uri uri, int i) {
            this.val$jobName = str;
            this.val$imageFile = uri;
            this.val$fittingMode = i;
        }

        @Override // android.print.PrintDocumentAdapter
        public void onLayout(final android.print.PrintAttributes oldPrintAttributes, final android.print.PrintAttributes newPrintAttributes, final android.os.CancellationSignal cancellationSignal, final android.print.PrintDocumentAdapter.LayoutResultCallback layoutResultCallback, android.os.Bundle bundle) {
            if (cancellationSignal.isCanceled()) {
                layoutResultCallback.onLayoutCancelled();
                this.mAttributes = newPrintAttributes;
            } else if (this.mBitmap != null) {
                android.print.PrintDocumentInfo info = new android.print.PrintDocumentInfo.Builder(this.val$jobName).setContentType(1).setPageCount(1).build();
                boolean changed = newPrintAttributes.equals(oldPrintAttributes) ? false : true;
                layoutResultCallback.onLayoutFinished(info, changed);
            } else {
                this.loadBitmap = new android.os.AsyncTask<android.net.Uri, java.lang.Boolean, android.graphics.Bitmap>() { // from class: android.support.v4.print.PrintHelperKitkat.2.1
                    @Override // android.os.AsyncTask
                    protected void onPreExecute() {
                        cancellationSignal.setOnCancelListener(new android.os.CancellationSignal.OnCancelListener() { // from class: android.support.v4.print.PrintHelperKitkat.2.1.1
                            @Override // android.os.CancellationSignal.OnCancelListener
                            public void onCancel() {
                                android.support.v4.print.PrintHelperKitkat.AnonymousClass2.this.cancelLoad();
                                cancel(false);
                            }
                        });
                    }

                    /* JADX INFO: Access modifiers changed from: protected */
                    @Override // android.os.AsyncTask
                    public android.graphics.Bitmap doInBackground(android.net.Uri... uris) {
                        try {
                            return android.support.v4.print.PrintHelperKitkat.this.loadConstrainedBitmap(android.support.v4.print.PrintHelperKitkat.AnonymousClass2.this.val$imageFile, android.support.v4.print.PrintHelperKitkat.MAX_PRINT_SIZE);
                        } catch (java.io.FileNotFoundException e) {
                            return null;
                        }
                    }

                    /* JADX INFO: Access modifiers changed from: protected */
                    @Override // android.os.AsyncTask
                    public void onPostExecute(android.graphics.Bitmap bitmap) {
                        super.onPostExecute(bitmap); // NOTE(jadx-fix): smali is invoke-super AsyncTask.onPostExecute(Ljava/lang/Object;)V with the Bitmap argument; jadx inserted a bogus cast to a non-existent inner class
                        android.support.v4.print.PrintHelperKitkat.AnonymousClass2.this.mBitmap = bitmap;
                        if (bitmap != null) {
                            android.print.PrintDocumentInfo info2 = new android.print.PrintDocumentInfo.Builder(android.support.v4.print.PrintHelperKitkat.AnonymousClass2.this.val$jobName).setContentType(1).setPageCount(1).build();
                            boolean changed2 = newPrintAttributes.equals(oldPrintAttributes) ? false : true;
                            layoutResultCallback.onLayoutFinished(info2, changed2);
                            return;
                        }
                        layoutResultCallback.onLayoutFailed(null);
                    }

                    /* JADX INFO: Access modifiers changed from: protected */
                    @Override // android.os.AsyncTask
                    public void onCancelled(android.graphics.Bitmap result) {
                        layoutResultCallback.onLayoutCancelled();
                    }
                };
                this.loadBitmap.execute(new android.net.Uri[0]);
                this.mAttributes = newPrintAttributes;
            }
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void cancelLoad() {
            synchronized (android.support.v4.print.PrintHelperKitkat.this.mLock) {
                if (android.support.v4.print.PrintHelperKitkat.this.mDecodeOptions != null) {
                    android.support.v4.print.PrintHelperKitkat.this.mDecodeOptions.requestCancelDecode();
                    android.support.v4.print.PrintHelperKitkat.this.mDecodeOptions = null;
                }
            }
        }

        @Override // android.print.PrintDocumentAdapter
        public void onFinish() {
            super.onFinish();
            cancelLoad();
            this.loadBitmap.cancel(true);
        }

        @Override // android.print.PrintDocumentAdapter
        public void onWrite(android.print.PageRange[] pageRanges, android.os.ParcelFileDescriptor fileDescriptor, android.os.CancellationSignal cancellationSignal, android.print.PrintDocumentAdapter.WriteResultCallback writeResultCallback) { // NOTE(jadx-fix): PrintDocumentAdapter.onWrite declares no checked exceptions in API 34 (nor in the smali); the IOException is handled inside the body
            android.print.pdf.PrintedPdfDocument pdfDocument = new android.print.pdf.PrintedPdfDocument(android.support.v4.print.PrintHelperKitkat.this.mContext, this.mAttributes);
            try {
                android.graphics.pdf.PdfDocument.Page page = pdfDocument.startPage(1);
                android.graphics.RectF content = new android.graphics.RectF(page.getInfo().getContentRect());
                android.graphics.Matrix matrix = android.support.v4.print.PrintHelperKitkat.this.getMatrix(this.mBitmap.getWidth(), this.mBitmap.getHeight(), content, this.val$fittingMode);
                page.getCanvas().drawBitmap(this.mBitmap, matrix, null);
                pdfDocument.finishPage(page);
                try {
                    pdfDocument.writeTo(new java.io.FileOutputStream(fileDescriptor.getFileDescriptor()));
                    writeResultCallback.onWriteFinished(new android.print.PageRange[]{android.print.PageRange.ALL_PAGES});
                } catch (java.io.IOException ioe) {
                    android.util.Log.e(android.support.v4.print.PrintHelperKitkat.LOG_TAG, "Error writing printed content", ioe);
                    writeResultCallback.onWriteFailed(null);
                }
                if (pdfDocument != null) {
                    pdfDocument.close();
                }
                if (fileDescriptor != null) {
                    try {
                        fileDescriptor.close();
                    } catch (java.io.IOException e) {
                    }
                }
            } catch (java.lang.Throwable th) {
                if (pdfDocument != null) {
                    pdfDocument.close();
                }
                if (fileDescriptor != null) {
                    try {
                        fileDescriptor.close();
                    } catch (java.io.IOException e2) {
                    }
                }
                throw th;
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public android.graphics.Bitmap loadConstrainedBitmap(android.net.Uri uri, int maxSideLength) throws java.io.FileNotFoundException { // NOTE(jadx-fix): smali Throws annotation says FileNotFoundException, not IOException
        android.graphics.BitmapFactory.Options decodeOptions;
        android.graphics.Bitmap bitmapLoadBitmap = null;
        if (maxSideLength <= 0 || uri == null || this.mContext == null) {
            throw new java.lang.IllegalArgumentException("bad argument to getScaledBitmap");
        }
        android.graphics.BitmapFactory.Options opt = new android.graphics.BitmapFactory.Options();
        opt.inJustDecodeBounds = true;
        loadBitmap(uri, opt);
        int w = opt.outWidth;
        int h = opt.outHeight;
        if (w > 0 && h > 0) {
            int imageSide = java.lang.Math.max(w, h);
            int sampleSize = 1;
            while (imageSide > maxSideLength) {
                imageSide >>>= 1;
                sampleSize <<= 1;
            }
            if (sampleSize > 0 && java.lang.Math.min(w, h) / sampleSize > 0) {
                synchronized (this.mLock) {
                    this.mDecodeOptions = new android.graphics.BitmapFactory.Options();
                    this.mDecodeOptions.inMutable = true;
                    this.mDecodeOptions.inSampleSize = sampleSize;
                    decodeOptions = this.mDecodeOptions;
                }
                try {
                    bitmapLoadBitmap = loadBitmap(uri, decodeOptions);
                    synchronized (this.mLock) {
                        this.mDecodeOptions = null;
                    }
                } catch (java.lang.Throwable th) {
                    synchronized (this.mLock) {
                        this.mDecodeOptions = null;
                        throw th;
                    }
                }
            }
        }
        return bitmapLoadBitmap;
    }

    private android.graphics.Bitmap loadBitmap(android.net.Uri uri, android.graphics.BitmapFactory.Options o) throws java.io.FileNotFoundException { // NOTE(jadx-fix): smali Throws annotation says FileNotFoundException, not IOException
        if (uri == null || this.mContext == null) {
            throw new java.lang.IllegalArgumentException("bad argument to loadBitmap");
        }
        java.io.InputStream is = null;
        try {
            is = this.mContext.getContentResolver().openInputStream(uri);
            return android.graphics.BitmapFactory.decodeStream(is, null, o);
        } finally {
            if (is != null) {
                try {
                    is.close();
                } catch (java.io.IOException t) {
                    android.util.Log.w(LOG_TAG, "close fail ", t);
                }
            }
        }
    }
}
