# The application is a thin Java shell around a prebuilt native engine
# (libAppPlayJNI.so), so nothing in the Java layer must be renamed or removed.
-keep class org.appplay.** { *; }
-keep class com.minitech.miniworld.** { *; }
-keepclasseswithmembernames class * {
    native <methods>;
}
