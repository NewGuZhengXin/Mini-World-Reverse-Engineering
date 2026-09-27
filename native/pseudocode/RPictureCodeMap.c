// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: RPictureCodeMap

//======================================================================
// RPictureCodeMap::GetPictureData(int)
// address: 0x001A0E4C   size: 0x36 (54 bytes)
//======================================================================
char *__fastcall RPictureCodeMap::GetPictureData(RPictureCodeMap *this, int a2)
{
  char *v2; // r0
  char *v3; // r3
  char *v4; // r2
  char *v5; // r4
  char *result; // r0

  v2 = (char *)this + 32;
  v3 = *((char **)v2 + 1);
  v4 = v2;
  while ( v3 != nullptr )
  {
    if ( *((_DWORD *)v3 + 4) < a2 )
    {
      v5 = *((char **)v3 + 3);
      v3 = v4;
    }
    else
    {
      v5 = *((char **)v3 + 2);
    }
    v4 = v3;
    v3 = v5;
  }
  if ( v4 == v2 )
    return nullptr;
  result = nullptr;
  if ( a2 >= *((_DWORD *)v4 + 4) )
    return v4 + 20;
  return result;
}


//======================================================================
// RPictureCodeMap::Init(char const*)
// address: 0x001A31AC   size: 0x13E (318 bytes)
//======================================================================
int __fastcall RPictureCodeMap::Init(RPictureCodeMap *this, char *a2)
{
  int v2; // r4
  int (__fastcall *v3)(int, _BYTE *, int, int *); // r7
  int v4; // r7
  int v5; // r7
  int v6; // r6
  int v7; // r0
  _DWORD *v8; // r0
  int v9; // r2
  int v10; // r6
  int v11; // r2
  int v12; // r6
  int v13; // r2
  int v14; // r5
  _BYTE v18[4]; // [sp+1Ch] [bp-D0h] BYREF
  char *v19; // [sp+20h] [bp-CCh] BYREF
  _DWORD v20[8]; // [sp+24h] [bp-C8h] BYREF
  int v21[8]; // [sp+44h] [bp-A8h] BYREF
  _BYTE v22[128]; // [sp+64h] [bp-88h] BYREF

  v2 = Ogre::FileManager::openFile((Ogre::FileManager *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton, a2, 1);
  if ( v2 == 0 )
    return 0;
  while ( 1 )
  {
    v14 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 44))(v2);
    if ( v14 != 0 )
      break;
    v3 = *(int (__fastcall **)(int, _BYTE *, int, int *))(*(_DWORD *)v2 + 16);
    sub_3BF0BC((int)v21, "\n");
    v4 = v3(v2, v22, 128, v21);
    sub_3BDF80(v21);
    if ( v4 != 0 )
    {
      sub_3BEE2C(v18, v22, 128, v21);
      j_memset(v20, 0, sizeof(v20));
      v5 = 0;
      v6 = 0;
      v19 = &byte_55FB88;
      do
      {
        v7 = sub_3BD958(v18, 32, v6);
        sub_3BED3C(v21, v18, v6, v7 - v6);
        sub_3BEBBC(&v19);
        sub_3BDF80(v21);
        v6 = sub_3BD958(v18, 32, v6) + 1;
        v20[v5++] = j_atoi(v19);
      }
      while ( v5 != 8 );
      qmemcpy(v21, v20, sizeof(v21));
      v8 = (_DWORD *)std::map<int,PictureData>::operator[]((_DWORD *)this + 7, v21);
      v9 = v21[1];
      v10 = v21[2];
      *v8 = v21[0];
      v8[1] = v9;
      v8[2] = v10;
      v11 = v21[4];
      v12 = v21[5];
      v8[3] = v21[3];
      v8[4] = v11;
      v8[5] = v12;
      v13 = v21[7];
      v8[6] = v21[6];
      v8[7] = v13;
      sub_3BDF80(&v19);
      sub_3BDF80(v18);
    }
  }
  sub_3BE508((int)this, a2);
  (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  return v14;
}


//======================================================================
// RPictureCodeMap::Init(void)
// address: 0x001A32FC   size: 0xA (10 bytes)
//======================================================================
int __fastcall RPictureCodeMap::Init(RPictureCodeMap *this)
{
  return RPictureCodeMap::Init(this, *(char **)this);
}

