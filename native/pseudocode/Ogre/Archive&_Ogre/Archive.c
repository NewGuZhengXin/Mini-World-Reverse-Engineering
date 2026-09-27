// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Archive&_Ogre::Archive

//======================================================================
// Ogre::Archive& Ogre::Archive::serializeRawArray<float>(std::vector<float,std::allocator<float>> &)
// address: 0x001409DC   size: 0x76 (118 bytes)
//======================================================================
unsigned int __fastcall Ogre::Archive::serializeRawArray<float>(unsigned int a1, int *a2)
{
  int v3; // r2
  int v5; // r0
  _DWORD *v6; // r1
  int v7; // r0
  unsigned int v8; // r2
  int v11; // [sp+0h] [bp-8h]
  int *v12; // [sp+4h] [bp-4h] BYREF

  v12 = a2;
  v3 = *(_DWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 4);
  if ( v3 == 1 )
  {
    sub_13FB24(v5);
    v6 = (_DWORD *)a2[1];
    v7 = *a2;
    v12 = nullptr;
    v8 = ((int)v6 - v7) >> 2;
    if ( a1 <= v8 )
    {
      if ( a1 < v8 )
        a2[1] = v7 + 4 * a1;
    }
    else
    {
      std::vector<float>::_M_fill_insert((int)a2, v6, a1 - v8, (void **)&v12);
    }
    if ( a1 != 0 )
      sub_13FB24(*(_DWORD *)(a1 + 4));
  }
  else
  {
    v11 = (a2[1] - *a2) >> 2;
    sub_13FB2E(v5);
    if ( v11 != 0 )
      sub_13FB2E(*(_DWORD *)(a1 + 4));
  }
  return a1;
}


//======================================================================
// Ogre::Archive& Ogre::Archive::serializeRawArray<int>(std::vector<int,std::allocator<int>> &)
// address: 0x00140B98   size: 0x76 (118 bytes)
//======================================================================
unsigned int __fastcall Ogre::Archive::serializeRawArray<int>(unsigned int a1, int *a2)
{
  int v3; // r2
  int v5; // r0
  _DWORD *v6; // r1
  int v7; // r0
  unsigned int v8; // r2
  int v11; // [sp+0h] [bp-8h]
  int *v12; // [sp+4h] [bp-4h] BYREF

  v12 = a2;
  v3 = *(_DWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 4);
  if ( v3 == 1 )
  {
    sub_13FB24(v5);
    v6 = (_DWORD *)a2[1];
    v7 = *a2;
    v12 = nullptr;
    v8 = ((int)v6 - v7) >> 2;
    if ( a1 <= v8 )
    {
      if ( a1 < v8 )
        a2[1] = v7 + 4 * a1;
    }
    else
    {
      std::vector<int>::_M_fill_insert((int)a2, v6, a1 - v8, (void **)&v12);
    }
    if ( a1 != 0 )
      sub_13FB24(*(_DWORD *)(a1 + 4));
  }
  else
  {
    v11 = (a2[1] - *a2) >> 2;
    sub_13FB2E(v5);
    if ( v11 != 0 )
      sub_13FB2E(*(_DWORD *)(a1 + 4));
  }
  return a1;
}


//======================================================================
// Ogre::Archive& Ogre::Archive::serializeRawArray<unsigned int>(std::vector<unsigned int,std::allocator<unsigned int>> &)
// address: 0x00167B30   size: 0x76 (118 bytes)
//======================================================================
unsigned int __fastcall Ogre::Archive::serializeRawArray<unsigned int>(unsigned int a1, int *a2)
{
  int v3; // r2
  int v5; // r0
  _DWORD *v6; // r1
  int v7; // r0
  unsigned int v8; // r2
  int v11; // [sp+0h] [bp-8h]
  int *v12; // [sp+4h] [bp-4h] BYREF

  v12 = a2;
  v3 = *(_DWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 4);
  if ( v3 == 1 )
  {
    sub_167920(v5);
    v6 = (_DWORD *)a2[1];
    v7 = *a2;
    v12 = nullptr;
    v8 = ((int)v6 - v7) >> 2;
    if ( a1 <= v8 )
    {
      if ( a1 < v8 )
        a2[1] = v7 + 4 * a1;
    }
    else
    {
      std::vector<unsigned int>::_M_fill_insert((int)a2, v6, a1 - v8, (void **)&v12);
    }
    if ( a1 != 0 )
      sub_167920(*(_DWORD *)(a1 + 4));
  }
  else
  {
    v11 = (a2[1] - *a2) >> 2;
    sub_16792A(v5);
    if ( v11 != 0 )
      sub_16792A(*(_DWORD *)(a1 + 4));
  }
  return a1;
}


//======================================================================
// Ogre::Archive& Ogre::Archive::serializeRawArray<unsigned short>(std::vector<unsigned short,std::allocator<unsigned short>> &)
// address: 0x00193758   size: 0x76 (118 bytes)
//======================================================================
int __fastcall Ogre::Archive::serializeRawArray<unsigned short>(int a1, _DWORD *a2)
{
  int v3; // r2
  int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  __int16 v9; // [sp+2h] [bp-6h] BYREF
  unsigned int v10; // [sp+4h] [bp-4h]

  v9 = HIWORD(a1);
  v10 = (unsigned int)a2;
  v3 = *(_DWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 4);
  if ( v3 == 1 )
  {
    sub_192FA0(v5);
    v9 = 0;
    v6 = a2[1];
    v7 = (v6 - *a2) >> 1;
    if ( v10 <= v7 )
    {
      if ( v10 < v7 )
        a2[1] = *a2 + 2 * v10;
    }
    else
    {
      std::vector<unsigned short>::_M_fill_insert((int)a2, v6, v10 - v7, &v9);
    }
    if ( v10 != 0 )
      sub_192FA0(*(_DWORD *)(a1 + 4));
  }
  else
  {
    v10 = (a2[1] - *a2) >> 1;
    sub_192FAA(v5);
    if ( v10 != 0 )
      sub_192FAA(*(_DWORD *)(a1 + 4));
  }
  return a1;
}

