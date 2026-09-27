package android.support.v4.content;

/* loaded from: classes.dex */
public class FileProvider extends android.content.ContentProvider {
    private static final java.lang.String ATTR_NAME = "name";
    private static final java.lang.String ATTR_PATH = "path";
    private static final java.lang.String META_DATA_FILE_PROVIDER_PATHS = "android.support.FILE_PROVIDER_PATHS";
    private static final java.lang.String TAG_CACHE_PATH = "cache-path";
    private static final java.lang.String TAG_EXTERNAL = "external-path";
    private static final java.lang.String TAG_FILES_PATH = "files-path";
    private static final java.lang.String TAG_ROOT_PATH = "root-path";
    private android.support.v4.content.FileProvider.PathStrategy mStrategy;
    private static final java.lang.String[] COLUMNS = {"_display_name", "_size"};
    private static final java.io.File DEVICE_ROOT = new java.io.File("/");
    private static java.util.HashMap<java.lang.String, android.support.v4.content.FileProvider.PathStrategy> sCache = new java.util.HashMap<>();

    interface PathStrategy {
        java.io.File getFileForUri(android.net.Uri uri);

        android.net.Uri getUriForFile(java.io.File file);
    }

    @Override // android.content.ContentProvider
    public boolean onCreate() {
        return true;
    }

    @Override // android.content.ContentProvider
    public void attachInfo(android.content.Context context, android.content.pm.ProviderInfo info) {
        super.attachInfo(context, info);
        if (info.exported) {
            throw new java.lang.SecurityException("Provider must not be exported");
        }
        if (!info.grantUriPermissions) {
            throw new java.lang.SecurityException("Provider must grant uri permissions");
        }
        this.mStrategy = getPathStrategy(context, info.authority);
    }

    public static android.net.Uri getUriForFile(android.content.Context context, java.lang.String authority, java.io.File file) {
        android.support.v4.content.FileProvider.PathStrategy strategy = getPathStrategy(context, authority);
        return strategy.getUriForFile(file);
    }

    @Override // android.content.ContentProvider
    public android.database.Cursor query(android.net.Uri uri, java.lang.String[] projection, java.lang.String selection, java.lang.String[] selectionArgs, java.lang.String sortOrder) {
        int i;
        java.io.File file = this.mStrategy.getFileForUri(uri);
        if (projection == null) {
            projection = COLUMNS;
        }
        java.lang.String[] cols = new java.lang.String[projection.length];
        java.lang.Object[] values = new java.lang.Object[projection.length];
        java.lang.String[] arr$ = projection;
        int len$ = arr$.length;
        int i$ = 0;
        int i2 = 0;
        while (i$ < len$) {
            java.lang.String col = arr$[i$];
            if ("_display_name".equals(col)) {
                cols[i2] = "_display_name";
                i = i2 + 1;
                values[i2] = file.getName();
            } else if ("_size".equals(col)) {
                cols[i2] = "_size";
                i = i2 + 1;
                values[i2] = java.lang.Long.valueOf(file.length());
            } else {
                i = i2;
            }
            i$++;
            i2 = i;
        }
        java.lang.String[] cols2 = copyOf(cols, i2);
        java.lang.Object[] values2 = copyOf(values, i2);
        android.database.MatrixCursor cursor = new android.database.MatrixCursor(cols2, 1);
        cursor.addRow(values2);
        return cursor;
    }

    @Override // android.content.ContentProvider
    public java.lang.String getType(android.net.Uri uri) {
        java.io.File file = this.mStrategy.getFileForUri(uri);
        int lastDot = file.getName().lastIndexOf(46);
        if (lastDot >= 0) {
            java.lang.String extension = file.getName().substring(lastDot + 1);
            java.lang.String mime = android.webkit.MimeTypeMap.getSingleton().getMimeTypeFromExtension(extension);
            if (mime != null) {
                return mime;
            }
        }
        return "application/octet-stream";
    }

    @Override // android.content.ContentProvider
    public android.net.Uri insert(android.net.Uri uri, android.content.ContentValues values) {
        throw new java.lang.UnsupportedOperationException("No external inserts");
    }

    @Override // android.content.ContentProvider
    public int update(android.net.Uri uri, android.content.ContentValues values, java.lang.String selection, java.lang.String[] selectionArgs) {
        throw new java.lang.UnsupportedOperationException("No external updates");
    }

    @Override // android.content.ContentProvider
    public int delete(android.net.Uri uri, java.lang.String selection, java.lang.String[] selectionArgs) {
        java.io.File file = this.mStrategy.getFileForUri(uri);
        return file.delete() ? 1 : 0;
    }

    @Override // android.content.ContentProvider
    public android.os.ParcelFileDescriptor openFile(android.net.Uri uri, java.lang.String mode) throws java.io.FileNotFoundException {
        java.io.File file = this.mStrategy.getFileForUri(uri);
        int fileMode = modeToMode(mode);
        return android.os.ParcelFileDescriptor.open(file, fileMode);
    }

    private static android.support.v4.content.FileProvider.PathStrategy getPathStrategy(android.content.Context context, java.lang.String authority) {
        android.support.v4.content.FileProvider.PathStrategy strat;
        synchronized (sCache) {
            strat = sCache.get(authority);
            if (strat == null) {
                try {
                    try {
                        strat = parsePathStrategy(context, authority);
                        sCache.put(authority, strat);
                    } catch (java.io.IOException e) {
                        throw new java.lang.IllegalArgumentException("Failed to parse android.support.FILE_PROVIDER_PATHS meta-data", e);
                    }
                } catch (org.xmlpull.v1.XmlPullParserException e2) {
                    throw new java.lang.IllegalArgumentException("Failed to parse android.support.FILE_PROVIDER_PATHS meta-data", e2);
                }
            }
        }
        return strat;
    }

    private static android.support.v4.content.FileProvider.PathStrategy parsePathStrategy(android.content.Context context, java.lang.String authority) throws org.xmlpull.v1.XmlPullParserException, java.io.IOException {
        android.support.v4.content.FileProvider.SimplePathStrategy strat = new android.support.v4.content.FileProvider.SimplePathStrategy(authority);
        android.content.pm.ProviderInfo info = context.getPackageManager().resolveContentProvider(authority, 128);
        android.content.res.XmlResourceParser in = info.loadXmlMetaData(context.getPackageManager(), META_DATA_FILE_PROVIDER_PATHS);
        if (in == null) {
            throw new java.lang.IllegalArgumentException("Missing android.support.FILE_PROVIDER_PATHS meta-data");
        }
        while (true) {
            int type = in.next();
            if (type != 1) {
                if (type == 2) {
                    java.lang.String tag = in.getName();
                    java.lang.String name = in.getAttributeValue(null, ATTR_NAME);
                    java.lang.String path = in.getAttributeValue(null, ATTR_PATH);
                    java.io.File target = null;
                    if (TAG_ROOT_PATH.equals(tag)) {
                        target = buildPath(DEVICE_ROOT, path);
                    } else if (TAG_FILES_PATH.equals(tag)) {
                        target = buildPath(context.getFilesDir(), path);
                    } else if (TAG_CACHE_PATH.equals(tag)) {
                        target = buildPath(context.getCacheDir(), path);
                    } else if (TAG_EXTERNAL.equals(tag)) {
                        target = buildPath(android.os.Environment.getExternalStorageDirectory(), path);
                    }
                    if (target != null) {
                        strat.addRoot(name, target);
                    }
                }
            } else {
                return strat;
            }
        }
    }

    static class SimplePathStrategy implements android.support.v4.content.FileProvider.PathStrategy {
        private final java.lang.String mAuthority;
        private final java.util.HashMap<java.lang.String, java.io.File> mRoots = new java.util.HashMap<>();

        public SimplePathStrategy(java.lang.String authority) {
            this.mAuthority = authority;
        }

        public void addRoot(java.lang.String name, java.io.File root) throws java.io.IOException {
            if (android.text.TextUtils.isEmpty(name)) {
                throw new java.lang.IllegalArgumentException("Name must not be empty");
            }
            try {
                this.mRoots.put(name, root.getCanonicalFile());
            } catch (java.io.IOException e) {
                throw new java.lang.IllegalArgumentException("Failed to resolve canonical path for " + root, e);
            }
        }

        @Override // android.support.v4.content.FileProvider.PathStrategy
        public android.net.Uri getUriForFile(java.io.File file) { // NOTE(jadx-fix): PathStrategy (smali) declares no throws clause; jadx added IOException and broke the override
            java.lang.String path;
            try {
                java.lang.String path2 = file.getCanonicalPath();
                java.util.Map.Entry<java.lang.String, java.io.File> mostSpecific = null;
                for (java.util.Map.Entry<java.lang.String, java.io.File> root : this.mRoots.entrySet()) {
                    java.lang.String rootPath = root.getValue().getPath();
                    if (path2.startsWith(rootPath) && (mostSpecific == null || rootPath.length() > mostSpecific.getValue().getPath().length())) {
                        mostSpecific = root;
                    }
                }
                if (mostSpecific == null) {
                    throw new java.lang.IllegalArgumentException("Failed to find configured root that contains " + path2);
                }
                java.lang.String rootPath2 = mostSpecific.getValue().getPath();
                if (rootPath2.endsWith("/")) {
                    path = path2.substring(rootPath2.length());
                } else {
                    path = path2.substring(rootPath2.length() + 1);
                }
                return new android.net.Uri.Builder().scheme("content").authority(this.mAuthority).encodedPath(android.net.Uri.encode(mostSpecific.getKey()) + '/' + android.net.Uri.encode(path, "/")).build();
            } catch (java.io.IOException e) {
                throw new java.lang.IllegalArgumentException("Failed to resolve canonical path for " + file);
            }
        }

        @Override // android.support.v4.content.FileProvider.PathStrategy
        public java.io.File getFileForUri(android.net.Uri uri) { // NOTE(jadx-fix): PathStrategy (smali) declares no throws clause; jadx added IOException and broke the override
            java.lang.String path = uri.getEncodedPath();
            int splitIndex = path.indexOf(47, 1);
            java.lang.String tag = android.net.Uri.decode(path.substring(1, splitIndex));
            java.lang.String path2 = android.net.Uri.decode(path.substring(splitIndex + 1));
            java.io.File root = this.mRoots.get(tag);
            if (root == null) {
                throw new java.lang.IllegalArgumentException("Unable to find configured root for " + uri);
            }
            java.io.File file = new java.io.File(root, path2);
            try {
                java.io.File file2 = file.getCanonicalFile();
                if (!file2.getPath().startsWith(root.getPath())) {
                    throw new java.lang.SecurityException("Resolved path jumped beyond configured root");
                }
                return file2;
            } catch (java.io.IOException e) {
                throw new java.lang.IllegalArgumentException("Failed to resolve canonical path for " + file);
            }
        }
    }

    private static int modeToMode(java.lang.String mode) {
        if ("r".equals(mode)) {
            return 268435456;
        }
        if ("w".equals(mode) || "wt".equals(mode)) {
            return 738197504;
        }
        if ("wa".equals(mode)) {
            return 704643072;
        }
        if ("rw".equals(mode)) {
            return 939524096;
        }
        if ("rwt".equals(mode)) {
            return 1006632960;
        }
        throw new java.lang.IllegalArgumentException("Invalid mode: " + mode);
    }

    private static java.io.File buildPath(java.io.File base, java.lang.String... segments) {
        int len$ = segments.length;
        int i$ = 0;
        java.io.File cur = base;
        while (i$ < len$) {
            java.lang.String segment = segments[i$];
            i$++;
            cur = segment != null ? new java.io.File(cur, segment) : cur;
        }
        return cur;
    }

    private static java.lang.String[] copyOf(java.lang.String[] original, int newLength) {
        java.lang.String[] result = new java.lang.String[newLength];
        java.lang.System.arraycopy(original, 0, result, 0, newLength);
        return result;
    }

    private static java.lang.Object[] copyOf(java.lang.Object[] original, int newLength) {
        java.lang.Object[] result = new java.lang.Object[newLength];
        java.lang.System.arraycopy(original, 0, result, 0, newLength);
        return result;
    }
}
