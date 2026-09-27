// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: _JNIEnv

//======================================================================
// _JNIEnv::GetFloatArrayRegion(_jfloatArray *,int,int,float *)
// address: 0x0013F5E2   size: 0x12 (18 bytes)
//======================================================================
int __fastcall _JNIEnv::GetFloatArrayRegion(int a1, int a2, int a3, int a4, int a5)
{
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 820))(a1);
  return a5;
}


//======================================================================
// _JNIEnv::DeleteLocalRef(_jobject *)
// address: 0x001DBFE8   size: 0xA (10 bytes)
//======================================================================
int __fastcall _JNIEnv::DeleteLocalRef(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 92))(a1);
}


//======================================================================
// _JNIEnv::CallStaticObjectMethod(_jclass *,_jmethodID *,...)
// address: 0x001DBFF2   size: 0x1E (30 bytes)
//======================================================================
int __fastcall _JNIEnv::CallStaticObjectMethod(int a1, int a2, int a3, int a4)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 460))(a1);
}


//======================================================================
// _JNIEnv::CallStaticIntMethod(_jclass *,_jmethodID *,...)
// address: 0x001DC010   size: 0x1E (30 bytes)
//======================================================================
int __fastcall _JNIEnv::CallStaticIntMethod(int a1, int a2, int a3, int a4)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 520))(a1);
}


//======================================================================
// _JNIEnv::CallStaticDoubleMethod(_jclass *,_jmethodID *,...)
// address: 0x001DC02E   size: 0x20 (32 bytes)
//======================================================================
int __fastcall _JNIEnv::CallStaticDoubleMethod(int a1, int a2, int a3, int a4)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 556))(a1);
}


//======================================================================
// _JNIEnv::CallStaticVoidMethod(_jclass *,_jmethodID *,...)
// address: 0x001DC04E   size: 0x1E (30 bytes)
//======================================================================
unsigned __int64 _JNIEnv::CallStaticVoidMethod(unsigned int a1, int a2, int a3, ...)
{
  unsigned __int64 v4; // [sp+0h] [bp-Ch]
  va_list varg_r3; // [sp+1Ch] [bp+10h] BYREF

  va_start(varg_r3, a3);
  v4 = __PAIR64__((int *)varg_r3, a1);
  (*(void (__fastcall **)(unsigned int))(*(_DWORD *)a1 + 568))(a1);
  return v4;
}

