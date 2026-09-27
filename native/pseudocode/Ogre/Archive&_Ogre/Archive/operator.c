// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Archive&_Ogre::Archive::operator

//======================================================================
// Ogre::Archive& Ogre::Archive::operator<<<Ogre::BoneData>(std::vector<Ogre::BoneData *,std::allocator<Ogre::BoneData *>> &)
// address: 0x00156084   size: 0x8A (138 bytes)
//======================================================================
Ogre::Archive *__fastcall Ogre::Archive::operator<<<Ogre::BoneData>(Ogre::Archive *a1, int *a2)
{
  int v3; // r2
  int v5; // r0
  char *v6; // r1
  int v7; // r0
  unsigned int v8; // r2
  unsigned int i; // r6
  int Object; // r0
  int v11; // r3
  unsigned int v12; // r6
  unsigned int v14; // [sp+0h] [bp-8h] BYREF
  int *v15; // [sp+4h] [bp-4h] BYREF

  v14 = (unsigned int)a1;
  v15 = a2;
  v3 = *((_DWORD *)a1 + 2);
  v5 = *((_DWORD *)a1 + 1);
  if ( v3 == 1 )
  {
    (*(void (__fastcall **)(int, unsigned int *, int))(*(_DWORD *)v5 + 8))(v5, &v14, 4);
    v6 = (char *)a2[1];
    v7 = *a2;
    v15 = nullptr;
    v8 = (int)&v6[-v7] >> 2;
    if ( v14 <= v8 )
    {
      if ( v14 < v8 )
        a2[1] = v7 + 4 * v14;
    }
    else
    {
      std::vector<Ogre::BoneData *>::_M_fill_insert((void **)a2, v6, v14 - v8, (void **)&v15);
    }
    for ( i = 0; i < v14; ++i )
    {
      Object = Ogre::Archive::readObject(a1);
      v11 = 4 * i;
      *(_DWORD *)(*a2 + v11) = Object;
    }
  }
  else
  {
    v14 = (a2[1] - *a2) >> 2;
    v12 = 0;
    (*(void (__fastcall **)(int, unsigned int *, int))(*(_DWORD *)v5 + 12))(v5, &v14, 4);
    while ( v12 < v14 )
      Ogre::Archive::writeObject(a1, *(Ogre::BaseObject **)(4 * v12++ + *a2));
  }
  return a1;
}


//======================================================================
// Ogre::Archive& Ogre::Archive::operator<<<Ogre::TerrainBlockSource>(std::vector<Ogre::TerrainBlockSource *,std::allocator<Ogre::TerrainBlockSource *>> &)
// address: 0x00158E9C   size: 0x86 (134 bytes)
//======================================================================
Ogre::Archive *__fastcall Ogre::Archive::operator<<<Ogre::TerrainBlockSource>(unsigned int a1, int *a2)
{
  int v3; // r2
  int v5; // r0
  _DWORD *v6; // r1
  int v7; // r0
  unsigned int v8; // r2
  unsigned int i; // r6
  int Object; // r0
  int v11; // r3
  unsigned int j; // r6
  unsigned int v15; // [sp+0h] [bp-8h]
  int *v16; // [sp+4h] [bp-4h] BYREF

  v16 = a2;
  v3 = *(_DWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 4);
  if ( v3 == 1 )
  {
    sub_156446(v5);
    v6 = (_DWORD *)a2[1];
    v7 = *a2;
    v16 = nullptr;
    v8 = ((int)v6 - v7) >> 2;
    if ( a1 <= v8 )
    {
      if ( a1 < v8 )
        a2[1] = v7 + 4 * a1;
    }
    else
    {
      std::vector<Ogre::TerrainBlockSource *>::_M_fill_insert((int)a2, v6, a1 - v8, (void **)&v16);
    }
    for ( i = 0; i < a1; ++i )
    {
      Object = Ogre::Archive::readObject((Ogre::Archive *)a1);
      v11 = 4 * i;
      *(_DWORD *)(*a2 + v11) = Object;
    }
  }
  else
  {
    v15 = (a2[1] - *a2) >> 2;
    sub_156450(v5);
    for ( j = 0; j < v15; ++j )
      Ogre::Archive::writeObject((Ogre::Archive *)a1, *(Ogre::BaseObject **)(4 * j + *a2));
  }
  return (Ogre::Archive *)a1;
}


//======================================================================
// Ogre::Archive& Ogre::Archive::operator<<<Ogre::BoneTrack>(std::vector<Ogre::BoneTrack *,std::allocator<Ogre::BoneTrack *>> &)
// address: 0x0015BF70   size: 0x8A (138 bytes)
//======================================================================
Ogre::Archive *__fastcall Ogre::Archive::operator<<<Ogre::BoneTrack>(Ogre::Archive *a1, int *a2)
{
  int v3; // r2
  int v5; // r0
  char *v6; // r1
  int v7; // r0
  unsigned int v8; // r2
  unsigned int i; // r6
  int Object; // r0
  int v11; // r3
  unsigned int v12; // r6
  unsigned int v14; // [sp+0h] [bp-8h] BYREF
  int *v15; // [sp+4h] [bp-4h] BYREF

  v14 = (unsigned int)a1;
  v15 = a2;
  v3 = *((_DWORD *)a1 + 2);
  v5 = *((_DWORD *)a1 + 1);
  if ( v3 == 1 )
  {
    (*(void (__fastcall **)(int, unsigned int *, int))(*(_DWORD *)v5 + 8))(v5, &v14, 4);
    v6 = (char *)a2[1];
    v7 = *a2;
    v15 = nullptr;
    v8 = (int)&v6[-v7] >> 2;
    if ( v14 <= v8 )
    {
      if ( v14 < v8 )
        a2[1] = v7 + 4 * v14;
    }
    else
    {
      std::vector<Ogre::BoneTrack *>::_M_fill_insert((void **)a2, v6, v14 - v8, (void **)&v15);
    }
    for ( i = 0; i < v14; ++i )
    {
      Object = Ogre::Archive::readObject(a1);
      v11 = 4 * i;
      *(_DWORD *)(*a2 + v11) = Object;
    }
  }
  else
  {
    v14 = (a2[1] - *a2) >> 2;
    v12 = 0;
    (*(void (__fastcall **)(int, unsigned int *, int))(*(_DWORD *)v5 + 12))(v5, &v14, 4);
    while ( v12 < v14 )
      Ogre::Archive::writeObject(a1, *(Ogre::BaseObject **)(4 * v12++ + *a2));
  }
  return a1;
}


//======================================================================
// Ogre::Archive& Ogre::Archive::operator<<<Ogre::Resource>(Ogre::Resource *&)
// address: 0x0017DF80   size: 0x1E (30 bytes)
//======================================================================
Ogre::Archive *__fastcall Ogre::Archive::operator<<<Ogre::Resource>(Ogre::Archive *a1, Ogre::BaseObject **a2)
{
  if ( *((_DWORD *)a1 + 2) == 1 )
    *a2 = (Ogre::BaseObject *)Ogre::Archive::readObject(a1);
  else
    Ogre::Archive::writeObject(a1, *a2);
  return a1;
}


//======================================================================
// Ogre::Archive& Ogre::Archive::operator<<<Ogre::EntityMotionData>(std::vector<Ogre::EntityMotionData *,std::allocator<Ogre::EntityMotionData *>> &)
// address: 0x00180FA0   size: 0x8A (138 bytes)
//======================================================================
Ogre::Archive *__fastcall Ogre::Archive::operator<<<Ogre::EntityMotionData>(Ogre::Archive *a1, void **a2)
{
  int v4; // r1
  int v5; // r0
  char *v6; // r1
  _BYTE *v7; // r0
  unsigned int v8; // r2
  unsigned int i; // r6
  int Object; // r0
  int v11; // r3
  unsigned int v12; // r6
  unsigned int v14; // [sp+0h] [bp-8h] BYREF
  unsigned int v15; // [sp+4h] [bp-4h] BYREF

  v14 = (unsigned int)a1;
  v15 = (unsigned int)a2;
  v4 = *((_DWORD *)a1 + 2);
  v5 = *((_DWORD *)a1 + 1);
  if ( v4 == 1 )
  {
    (*(void (__fastcall **)(int, unsigned int *, int))(*(_DWORD *)v5 + 8))(v5, &v14, 4);
    v6 = (char *)a2[1];
    v7 = *a2;
    v15 = 0;
    v8 = (v6 - v7) >> 2;
    if ( v14 <= v8 )
    {
      if ( v14 < v8 )
        a2[1] = &v7[4 * v14];
    }
    else
    {
      std::vector<Ogre::EntityMotionData *>::_M_fill_insert(a2, v6, v14 - v8, (void **)&v15);
    }
    for ( i = 0; i < v14; ++i )
    {
      Object = Ogre::Archive::readObject(a1);
      v11 = 4 * i;
      *(_DWORD *)((char *)*a2 + v11) = Object;
    }
  }
  else
  {
    v12 = 0;
    v15 = ((_BYTE *)a2[1] - (_BYTE *)*a2) >> 2;
    (*(void (__fastcall **)(int, unsigned int *, int))(*(_DWORD *)v5 + 12))(v5, &v15, 4);
    while ( v12 < v15 )
      Ogre::Archive::writeObject(a1, *((Ogre::BaseObject **)*a2 + v12++));
  }
  return a1;
}


//======================================================================
// Ogre::Archive& Ogre::Archive::operator<<<Ogre::AnimationData>(std::vector<Ogre::AnimationData *,std::allocator<Ogre::AnimationData *>> &)
// address: 0x00193420   size: 0x86 (134 bytes)
//======================================================================
Ogre::Archive *__fastcall Ogre::Archive::operator<<<Ogre::AnimationData>(unsigned int a1, int *a2)
{
  int v3; // r2
  int v5; // r0
  char *v6; // r1
  int v7; // r0
  unsigned int v8; // r2
  unsigned int i; // r6
  int Object; // r0
  int v11; // r3
  unsigned int j; // r6
  unsigned int v15; // [sp+0h] [bp-8h]
  int *v16; // [sp+4h] [bp-4h] BYREF

  v16 = a2;
  v3 = *(_DWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 4);
  if ( v3 == 1 )
  {
    sub_192FA0(v5);
    v6 = (char *)a2[1];
    v7 = *a2;
    v16 = nullptr;
    v8 = (int)&v6[-v7] >> 2;
    if ( a1 <= v8 )
    {
      if ( a1 < v8 )
        a2[1] = v7 + 4 * a1;
    }
    else
    {
      std::vector<Ogre::AnimationData *>::_M_fill_insert((void **)a2, v6, a1 - v8, (void **)&v16);
    }
    for ( i = 0; i < a1; ++i )
    {
      Object = Ogre::Archive::readObject((Ogre::Archive *)a1);
      v11 = 4 * i;
      *(_DWORD *)(*a2 + v11) = Object;
    }
  }
  else
  {
    v15 = (a2[1] - *a2) >> 2;
    sub_192FAA(v5);
    for ( j = 0; j < v15; ++j )
      Ogre::Archive::writeObject((Ogre::Archive *)a1, *(Ogre::BaseObject **)(4 * j + *a2));
  }
  return (Ogre::Archive *)a1;
}


//======================================================================
// Ogre::Archive& Ogre::Archive::operator<<<Ogre::MeshData>(std::vector<Ogre::MeshData *,std::allocator<Ogre::MeshData *>> &)
// address: 0x00193C3C   size: 0x86 (134 bytes)
//======================================================================
Ogre::Archive *__fastcall Ogre::Archive::operator<<<Ogre::MeshData>(unsigned int a1, int *a2)
{
  int v3; // r2
  int v5; // r0
  _DWORD *v6; // r1
  int v7; // r0
  unsigned int v8; // r2
  unsigned int i; // r6
  int Object; // r0
  int v11; // r3
  unsigned int j; // r6
  unsigned int v15; // [sp+0h] [bp-8h]
  int *v16; // [sp+4h] [bp-4h] BYREF

  v16 = a2;
  v3 = *(_DWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 4);
  if ( v3 == 1 )
  {
    sub_192FA0(v5);
    v6 = (_DWORD *)a2[1];
    v7 = *a2;
    v16 = nullptr;
    v8 = ((int)v6 - v7) >> 2;
    if ( a1 <= v8 )
    {
      if ( a1 < v8 )
        a2[1] = v7 + 4 * a1;
    }
    else
    {
      std::vector<Ogre::MeshData *>::_M_fill_insert((int)a2, v6, a1 - v8, (void **)&v16);
    }
    for ( i = 0; i < a1; ++i )
    {
      Object = Ogre::Archive::readObject((Ogre::Archive *)a1);
      v11 = 4 * i;
      *(_DWORD *)(*a2 + v11) = Object;
    }
  }
  else
  {
    v15 = (a2[1] - *a2) >> 2;
    sub_192FAA(v5);
    for ( j = 0; j < v15; ++j )
      Ogre::Archive::writeObject((Ogre::Archive *)a1, *(Ogre::BaseObject **)(4 * j + *a2));
  }
  return (Ogre::Archive *)a1;
}


//======================================================================
// Ogre::Archive& Ogre::Archive::operator<<<Ogre::SubMeshData>(std::vector<Ogre::SubMeshData *,std::allocator<Ogre::SubMeshData *>> &)
// address: 0x00197A54   size: 0x86 (134 bytes)
//======================================================================
Ogre::Archive *__fastcall Ogre::Archive::operator<<<Ogre::SubMeshData>(unsigned int a1, int *a2)
{
  int v3; // r2
  int v5; // r0
  _DWORD *v6; // r1
  int v7; // r0
  unsigned int v8; // r2
  unsigned int i; // r6
  int Object; // r0
  int v11; // r3
  unsigned int j; // r6
  unsigned int v15; // [sp+0h] [bp-8h]
  int *v16; // [sp+4h] [bp-4h] BYREF

  v16 = a2;
  v3 = *(_DWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 4);
  if ( v3 == 1 )
  {
    sub_197510(v5);
    v6 = (_DWORD *)a2[1];
    v7 = *a2;
    v16 = nullptr;
    v8 = ((int)v6 - v7) >> 2;
    if ( a1 <= v8 )
    {
      if ( a1 < v8 )
        a2[1] = v7 + 4 * a1;
    }
    else
    {
      std::vector<Ogre::SubMeshData *>::_M_fill_insert((int)a2, v6, a1 - v8, (void **)&v16);
    }
    for ( i = 0; i < a1; ++i )
    {
      Object = Ogre::Archive::readObject((Ogre::Archive *)a1);
      v11 = 4 * i;
      *(_DWORD *)(*a2 + v11) = Object;
    }
  }
  else
  {
    v15 = (a2[1] - *a2) >> 2;
    sub_19751A(v5);
    for ( j = 0; j < v15; ++j )
      Ogre::Archive::writeObject((Ogre::Archive *)a1, *(Ogre::BaseObject **)(4 * j + *a2));
  }
  return (Ogre::Archive *)a1;
}


//======================================================================
// Ogre::Archive& Ogre::Archive::operator<<<Ogre::SkinPatch>(std::vector<Ogre::SkinPatch *,std::allocator<Ogre::SkinPatch *>> &)
// address: 0x00197CC4   size: 0x86 (134 bytes)
//======================================================================
Ogre::Archive *__fastcall Ogre::Archive::operator<<<Ogre::SkinPatch>(unsigned int a1, int *a2)
{
  int v3; // r2
  int v5; // r0
  _DWORD *v6; // r1
  int v7; // r0
  unsigned int v8; // r2
  unsigned int i; // r6
  int Object; // r0
  int v11; // r3
  unsigned int j; // r6
  unsigned int v15; // [sp+0h] [bp-8h]
  int *v16; // [sp+4h] [bp-4h] BYREF

  v16 = a2;
  v3 = *(_DWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 4);
  if ( v3 == 1 )
  {
    sub_197510(v5);
    v6 = (_DWORD *)a2[1];
    v7 = *a2;
    v16 = nullptr;
    v8 = ((int)v6 - v7) >> 2;
    if ( a1 <= v8 )
    {
      if ( a1 < v8 )
        a2[1] = v7 + 4 * a1;
    }
    else
    {
      std::vector<Ogre::SkinPatch *>::_M_fill_insert((int)a2, v6, a1 - v8, (void **)&v16);
    }
    for ( i = 0; i < a1; ++i )
    {
      Object = Ogre::Archive::readObject((Ogre::Archive *)a1);
      v11 = 4 * i;
      *(_DWORD *)(*a2 + v11) = Object;
    }
  }
  else
  {
    v15 = (a2[1] - *a2) >> 2;
    sub_19751A(v5);
    for ( j = 0; j < v15; ++j )
      Ogre::Archive::writeObject((Ogre::Archive *)a1, *(Ogre::BaseObject **)(4 * j + *a2));
  }
  return (Ogre::Archive *)a1;
}


//======================================================================
// Ogre::Archive& Ogre::Archive::operator<<<Ogre::SurfaceData>(std::vector<Ogre::SurfaceData *,std::allocator<Ogre::SurfaceData *>> &)
// address: 0x0019C4D0   size: 0x64 (100 bytes)
//======================================================================
Ogre::Archive *__fastcall Ogre::Archive::operator<<<Ogre::SurfaceData>(Ogre::Archive *a1, _DWORD *a2)
{
  int v3; // r2
  int v5; // r0
  unsigned int i; // r6
  int Object; // r0
  int v8; // r3
  unsigned int j; // r6
  unsigned int v12; // [sp+4h] [bp-4h]

  v3 = *((_DWORD *)a1 + 2);
  v5 = *((_DWORD *)a1 + 1);
  if ( v3 == 1 )
  {
    sub_19AB54(v5);
    std::vector<Ogre::SurfaceData *>::resize(__SPAIR64__((unsigned int)a2, (unsigned int)a2), 0);
    for ( i = 0; i < (unsigned int)a2; ++i )
    {
      Object = Ogre::Archive::readObject(a1);
      v8 = 4 * i;
      *(_DWORD *)(*a2 + v8) = Object;
    }
  }
  else
  {
    v12 = (a2[1] - *a2) >> 2;
    sub_19AB5E(v5);
    for ( j = 0; j < v12; ++j )
      Ogre::Archive::writeObject(a1, *(Ogre::BaseObject **)(4 * j + *a2));
  }
  return a1;
}

