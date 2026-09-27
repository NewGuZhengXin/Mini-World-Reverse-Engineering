// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: RFaceCodeMap

//======================================================================
// RFaceCodeMap::GetFaceData(int)
// address: 0x001C7978   size: 0x18 (24 bytes)
//======================================================================
_DWORD *__fastcall RFaceCodeMap::GetFaceData(RFaceCodeMap *this, unsigned int a2)
{
  _DWORD *result; // r0

  if ( a2 > 0x3E7 )
    return nullptr;
  result = (_DWORD *)((char *)this + 16 * a2 + 4);
  if ( *result == -1 )
    return nullptr;
  return result;
}


//======================================================================
// RFaceCodeMap::RFaceCodeMap(void)
// address: 0x001C7A80   size: 0x22 (34 bytes)
//======================================================================
// Alternative name is '_ZN12RFaceCodeMapC2Ev'
void __fastcall RFaceCodeMap::RFaceCodeMap(RFaceCodeMap *this)
{
  int i; // r3
  char *v2; // r1

  *(_DWORD *)this = &off_4594C0;
  for ( i = 0; i != 16000; i += 16 )
  {
    v2 = (char *)this + i;
    *((_DWORD *)v2 + 1) = -1;
  }
}


//======================================================================
// RFaceCodeMap::Init(char const*)
// address: 0x001C7AA8   size: 0xF0 (240 bytes)
//======================================================================
int __fastcall RFaceCodeMap::Init(RFaceCodeMap *this, char *a2)
{
  int v2; // r4
  int v3; // r0
  int v4; // r3
  int v5; // r5
  int (__fastcall *v6)(int, _BYTE *, int, _DWORD *); // r7
  int v7; // r7
  int v8; // r7
  int v9; // r0
  int v10; // r5
  int v11; // r0
  int v12; // r6
  _DWORD *v13; // r1
  char v16[4]; // [sp+14h] [bp-A0h] BYREF
  char *v17; // [sp+18h] [bp-9Ch] BYREF
  _DWORD v18[4]; // [sp+1Ch] [bp-98h] BYREF
  _BYTE v19[128]; // [sp+2Ch] [bp-88h] BYREF

  v2 = Ogre::FileManager::openFile((Ogre::FileManager *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton, a2, 1);
  if ( v2 == 0 )
    return 0;
  while ( 1 )
  {
    v3 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 44))(v2);
    v4 = *(_DWORD *)v2;
    v5 = v3;
    if ( v3 != 0 )
      break;
    v6 = *(int (__fastcall **)(int, _BYTE *, int, _DWORD *))(v4 + 16);
    sub_3BF0BC((int)v18, "\n");
    v7 = v6(v2, v19, 128, v18);
    sub_3BDF80(v18);
    if ( v7 != 0 )
    {
      sub_3BEE2C(v16, v19, 128, v18);
      j_memset(v18, 0, sizeof(v18));
      v8 = 0;
      do
      {
        v9 = sub_3BD958(v16, 32, v8);
        sub_3BED3C(&v17, v16, v8, v9 - v8);
        v8 = sub_3BD958(v16, 32, v8) + 1;
        *(_DWORD *)((char *)v18 + v5) = j_atoi(v17);
        v5 += 4;
        sub_3BDF80(&v17);
      }
      while ( v5 != 16 );
      v10 = v18[1];
      v11 = v18[2];
      v12 = v18[3];
      if ( v18[0] > 0 )
      {
        v13 = (_DWORD *)((char *)this + 16 * v18[0]);
        v13[1] = v18[0];
        v13[2] = v10;
        v13[3] = v11;
        v13[4] = v12;
      }
      sub_3BDF80(v16);
    }
  }
  (*(void (__fastcall **)(int))(v4 + 4))(v2);
  return v5;
}

