// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: appplay::JNIHelper

//======================================================================
// appplay::JNIHelper::GetJavaVM(void)
// address: 0x001DC06C   size: 0xA (10 bytes)
//======================================================================
int __fastcall appplay::JNIHelper::GetJavaVM(appplay::JNIHelper *this)
{
  return appplay::JNIHelper::msJavaVM;
}


//======================================================================
// appplay::JNIHelper::SetJavaVM(_JavaVM *)
// address: 0x001DC0D4   size: 0xA (10 bytes)
//======================================================================
int __fastcall appplay::JNIHelper::SetJavaVM(int this, _JavaVM *a2)
{
  appplay::JNIHelper::msJavaVM = this;
  return this;
}


//======================================================================
// appplay::JNIHelper::GetClassID(char const*,_JNIEnv *)
// address: 0x001DC0E4   size: 0x8 (8 bytes)
//======================================================================
int __fastcall appplay::JNIHelper::GetClassID(appplay::JNIHelper *this, const char *a2, _JNIEnv *a3)
{
  return sub_1DC0B0((int)this, (int)a2);
}


//======================================================================
// appplay::JNIHelper::GetStaticMethodInfo(appplay::JNIMethodInfo &,char const*,char const*,char const*)
// address: 0x001DC0EC   size: 0x4E (78 bytes)
//======================================================================
bool __fastcall appplay::JNIHelper::GetStaticMethodInfo(int *a1, int a2, int a3, int a4)
{
  _BOOL4 v7; // r4
  int v8; // r6
  int v9; // r0
  int v10; // r3
  int v13; // [sp+Ch] [bp-8h] BYREF

  v13 = 0;
  v7 = sub_1DC07C((appplay::JNIHelper *)&v13);
  if ( !v7 )
    return false;
  v8 = sub_1DC0B0(a2, v13);
  v9 = (*(int (__fastcall **)(int, int, int, int))(*(_DWORD *)v13 + 452))(v13, v8, a3, a4);
  if ( v9 == 0 )
    return false;
  v10 = v13;
  a1[1] = v8;
  a1[2] = v9;
  *a1 = v10;
  return v7;
}


//======================================================================
// appplay::JNIHelper::GetMethodInfo(appplay::JNIMethodInfo &,char const*,char const*,char const*)
// address: 0x001DC13A   size: 0x4C (76 bytes)
//======================================================================
bool __fastcall appplay::JNIHelper::GetMethodInfo(int *a1, int a2, int a3, int a4)
{
  _BOOL4 v7; // r4
  int v8; // r6
  int v9; // r0
  int v10; // r3
  int v13; // [sp+Ch] [bp-8h] BYREF

  v13 = 0;
  v7 = sub_1DC07C((appplay::JNIHelper *)&v13);
  if ( !v7 )
    return false;
  v8 = sub_1DC0B0(a2, v13);
  v9 = (*(int (__fastcall **)(int, int, int, int))(*(_DWORD *)v13 + 132))(v13, v8, a3, a4);
  if ( v9 == 0 )
    return false;
  v10 = v13;
  a1[1] = v8;
  a1[2] = v9;
  *a1 = v10;
  return v7;
}


//======================================================================
// appplay::JNIHelper::JString2string(_jstring *)
// address: 0x001DC188   size: 0x72 (114 bytes)
//======================================================================
int __fastcall appplay::JNIHelper::JString2string(int a1, int a2)
{
  char *v4; // r6
  char v6; // [sp+Fh] [bp-Dh]
  int v7; // [sp+10h] [bp-Ch] BYREF
  _BYTE v8[8]; // [sp+14h] [bp-8h] BYREF

  v7 = 0;
  if ( sub_1DC07C((appplay::JNIHelper *)&v7) )
  {
    v4 = (char *)(*(int (__fastcall **)(int, int))(*(_DWORD *)v7 + 676))(v7, a2);
    sub_3BF0BC((int)v8, v4);
    if ( v6 != 0 )
      (*(void (__fastcall **)(int, int, char *))(*(_DWORD *)v7 + 680))(v7, a2, v4);
    sub_3BEB1C(a1, v8);
    sub_3BDF80(v8);
  }
  else
  {
    sub_3BF0BC(a1, (char *)&unk_3FB8EA);
  }
  return a1;
}

