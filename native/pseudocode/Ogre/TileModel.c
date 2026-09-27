// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::TileModel

//======================================================================
// Ogre::TileModel::TileModel(void)
// address: 0x00157154   size: 0x1C (28 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9TileModelC1Ev'
Ogre::TileModel *__fastcall Ogre::TileModel::TileModel(Ogre::TileModel *this)
{
  *((_BYTE *)this + 24) = 0;
  j_memset(this, 0, 0x5Cu);
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 17) = 1065353216;
  return this;
}


//======================================================================
// Ogre::TileModel::~TileModel()
// address: 0x00157170   size: 0x2 (2 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9TileModelD1Ev'
void __fastcall Ogre::TileModel::~TileModel(Ogre::TileModel *this)
{
  ;
}


//======================================================================
// Ogre::TileModel::serialize(Ogre::Archive &,int)
// address: 0x0015735C   size: 0x9A (154 bytes)
//======================================================================
Ogre::Archive *__fastcall Ogre::TileModel::serialize(Ogre::TileModel *this, Ogre::Archive *a2, int a3)
{
  Ogre::Archive *result; // r0
  int v6; // r5
  char v7; // r2
  int v8; // r3
  _BYTE v9[28]; // [sp+4h] [bp-A0h] BYREF
  int v10; // [sp+20h] [bp-84h]
  int v11; // [sp+24h] [bp-80h]
  int v12; // [sp+28h] [bp-7Ch]
  int v13; // [sp+2Ch] [bp-78h]
  int v14; // [sp+30h] [bp-74h]
  int v15; // [sp+34h] [bp-70h]
  int v16; // [sp+38h] [bp-6Ch]
  int v17; // [sp+3Ch] [bp-68h]
  int v18; // [sp+40h] [bp-64h]
  int v19; // [sp+44h] [bp-60h]
  int v20; // [sp+48h] [bp-5Ch]
  _BYTE v21[64]; // [sp+4Ch] [bp-58h] BYREF
  int v22; // [sp+8Ch] [bp-18h]
  int v23; // [sp+90h] [bp-14h]
  int v24; // [sp+94h] [bp-10h]
  char v25; // [sp+98h] [bp-Ch]
  int v26; // [sp+9Ch] [bp-8h]

  if ( a3 > 100 )
    return Ogre::Archive::serialize(a2, this, 0x5Cu);
  v9[24] = 0;
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v21);
  result = Ogre::Archive::serialize(a2, v9, 0x9Cu);
  qmemcpy(this, v9, 25);
  *((_DWORD *)this + 7) = v10;
  *((_DWORD *)this + 8) = v11;
  *((_DWORD *)this + 9) = v12;
  *((_DWORD *)this + 10) = v13;
  *((_DWORD *)this + 11) = v14;
  *((_DWORD *)this + 12) = v15;
  *((_DWORD *)this + 13) = v16;
  *((_DWORD *)this + 14) = v17;
  *((_DWORD *)this + 15) = v18;
  *((_DWORD *)this + 16) = v19;
  v6 = v20;
  v7 = v25;
  *((_DWORD *)this + 18) = v22;
  v8 = v23;
  *((_DWORD *)this + 17) = v6;
  *((_DWORD *)this + 19) = v8;
  *((_DWORD *)this + 20) = v24;
  *((_BYTE *)this + 86) = 0;
  *((_BYTE *)this + 84) = v7;
  *((_BYTE *)this + 85) = 0;
  *((_DWORD *)this + 22) = v26;
  return result;
}

