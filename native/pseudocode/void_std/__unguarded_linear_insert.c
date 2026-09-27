// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: void_std::__unguarded_linear_insert

//======================================================================
// void std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<Ogre::RenderableEffectInfo *,std::vector<Ogre::RenderableEffectInfo,std::allocator<Ogre::RenderableEffectInfo>>>>(__gnu_cxx::__normal_iterator<Ogre::RenderableEffectInfo *,std::vector<Ogre::RenderableEffectInfo,std::allocator<Ogre::RenderableEffectInfo>>>)
// address: 0x0015AE10   size: 0x2A (42 bytes)
//======================================================================
bool __fastcall std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<Ogre::RenderableEffectInfo *,std::vector<Ogre::RenderableEffectInfo>>>(
        float *a1)
{
  float v1; // r7
  float v2; // r6
  float *v3; // r4
  float *i; // r5
  _BOOL4 result; // r0

  v1 = *a1;
  v2 = a1[1];
  v3 = a1;
  for ( i = a1; ; v3 = i )
  {
    i -= 2;
    result = v2 > i[1];
    if ( v2 <= i[1] )
      break;
    *v3 = *i;
    v3[1] = i[1];
  }
  *v3 = v1;
  v3[1] = v2;
  return result;
}


//======================================================================
// void std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<Ogre::FilePkgBase **,std::vector<Ogre::FilePkgBase *,std::allocator<Ogre::FilePkgBase *>>>,bool (*)(Ogre::FilePkgBase *,Ogre::FilePkgBase *)>(__gnu_cxx::__normal_iterator<Ogre::FilePkgBase **,std::vector<Ogre::FilePkgBase *,std::allocator<Ogre::FilePkgBase *>>>,bool (*)(Ogre::FilePkgBase *,Ogre::FilePkgBase *))
// address: 0x0016EACA   size: 0x22 (34 bytes)
//======================================================================
int __fastcall std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<Ogre::FilePkgBase **,std::vector<Ogre::FilePkgBase *>>,bool (*)(Ogre::FilePkgBase *,Ogre::FilePkgBase *)>(
        _DWORD *a1,
        int (__fastcall *a2)(int, _DWORD))
{
  int v2; // r6
  _DWORD *v4; // r4
  _DWORD *i; // r5
  int result; // r0

  v2 = *a1;
  v4 = a1;
  for ( i = a1 - 1; ; --i )
  {
    result = a2(v2, *i);
    if ( result == 0 )
      break;
    *v4 = *i;
    v4 = i;
  }
  *v4 = v2;
  return result;
}


//======================================================================
// void std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<Ogre::Entity::BindObj **,std::vector<Ogre::Entity::BindObj *,std::allocator<Ogre::Entity::BindObj *>>>,bool (*)(Ogre::Entity::BindObj const*,Ogre::Entity::BindObj const*)>(__gnu_cxx::__normal_iterator<Ogre::Entity::BindObj **,std::vector<Ogre::Entity::BindObj *,std::allocator<Ogre::Entity::BindObj *>>>,bool (*)(Ogre::Entity::BindObj const*,Ogre::Entity::BindObj const*))
// address: 0x0018CCC4   size: 0x22 (34 bytes)
//======================================================================
int __fastcall std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<Ogre::Entity::BindObj **,std::vector<Ogre::Entity::BindObj *>>,bool (*)(Ogre::Entity::BindObj const*,Ogre::Entity::BindObj const*)>(
        _DWORD *a1,
        int (__fastcall *a2)(int, _DWORD))
{
  int v2; // r6
  _DWORD *v4; // r4
  _DWORD *i; // r5
  int result; // r0

  v2 = *a1;
  v4 = a1;
  for ( i = a1 - 1; ; --i )
  {
    result = a2(v2, *i);
    if ( result == 0 )
      break;
    *v4 = *i;
    v4 = i;
  }
  *v4 = v2;
  return result;
}


//======================================================================
// void std::__unguarded_linear_insert<Ogre::AnimPlayTrack **,bool (*)(Ogre::AnimPlayTrack *,Ogre::AnimPlayTrack *)>(Ogre::AnimPlayTrack **,bool (*)(Ogre::AnimPlayTrack *,Ogre::AnimPlayTrack *))
// address: 0x001928DC   size: 0x22 (34 bytes)
//======================================================================
int __fastcall std::__unguarded_linear_insert<Ogre::AnimPlayTrack **,bool (*)(Ogre::AnimPlayTrack *,Ogre::AnimPlayTrack *)>(
        _DWORD *a1,
        int (__fastcall *a2)(int, _DWORD))
{
  int v2; // r6
  _DWORD *v3; // r4
  _DWORD *i; // r5
  int result; // r0

  v2 = *a1;
  v3 = a1;
  for ( i = a1 - 1; ; --i )
  {
    result = a2(v2, *i);
    if ( result == 0 )
      break;
    *v3 = *i;
    v3 = i;
  }
  *v3 = v2;
  return result;
}


//======================================================================
// void std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<Ogre::MaterialParam **,std::vector<Ogre::MaterialParam *,std::allocator<Ogre::MaterialParam *>>>,bool (*)(Ogre::MaterialParam *,Ogre::MaterialParam *)>(__gnu_cxx::__normal_iterator<Ogre::MaterialParam **,std::vector<Ogre::MaterialParam *,std::allocator<Ogre::MaterialParam *>>>,bool (*)(Ogre::MaterialParam *,Ogre::MaterialParam *))
// address: 0x00196280   size: 0x22 (34 bytes)
//======================================================================
int __fastcall std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<Ogre::MaterialParam **,std::vector<Ogre::MaterialParam *>>,bool (*)(Ogre::MaterialParam *,Ogre::MaterialParam *)>(
        _DWORD *a1,
        int (__fastcall *a2)(int, _DWORD))
{
  int v2; // r6
  _DWORD *v4; // r4
  _DWORD *i; // r5
  int result; // r0

  v2 = *a1;
  v4 = a1;
  for ( i = a1 - 1; ; --i )
  {
    result = a2(v2, *i);
    if ( result == 0 )
      break;
    *v4 = *i;
    v4 = i;
  }
  *v4 = v2;
  return result;
}


//======================================================================
// void std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<Ogre::ModelInstanceData *,std::vector<Ogre::ModelInstanceData,std::allocator<Ogre::ModelInstanceData>>>>(__gnu_cxx::__normal_iterator<Ogre::ModelInstanceData *,std::vector<Ogre::ModelInstanceData,std::allocator<Ogre::ModelInstanceData>>>)
// address: 0x0019EDA8   size: 0x3A (58 bytes)
//======================================================================
int __fastcall std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<Ogre::ModelInstanceData *,std::vector<Ogre::ModelInstanceData>>>(
        int a1)
{
  int v1; // r4
  int v2; // r5
  _BOOL4 v3; // r0
  int v4; // r7
  _BYTE v6[68]; // [sp+0h] [bp-44h] BYREF

  v1 = a1;
  Ogre::ModelInstanceData::ModelInstanceData((int)v6, a1);
  v2 = v1 - 64;
  while ( 1 )
  {
    v3 = Ogre::operator<((int)v6, v2);
    v4 = v2;
    v2 -= 64;
    if ( !v3 )
      break;
    Ogre::ModelInstanceData::operator=(v1, v4);
    v1 = v4;
  }
  return Ogre::ModelInstanceData::operator=(v1, (int)v6);
}


//======================================================================
// void std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<Ogre::TileModel **,std::vector<Ogre::TileModel *,std::allocator<Ogre::TileModel *>>>,bool (*)(Ogre::TileModel *,Ogre::TileModel *)>(__gnu_cxx::__normal_iterator<Ogre::TileModel **,std::vector<Ogre::TileModel *,std::allocator<Ogre::TileModel *>>>,bool (*)(Ogre::TileModel *,Ogre::TileModel *))
// address: 0x0019EE4A   size: 0x22 (34 bytes)
//======================================================================
int __fastcall std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<Ogre::TileModel **,std::vector<Ogre::TileModel *>>,bool (*)(Ogre::TileModel *,Ogre::TileModel *)>(
        _DWORD *a1,
        int (__fastcall *a2)(int, _DWORD))
{
  int v2; // r6
  _DWORD *v4; // r4
  _DWORD *i; // r5
  int result; // r0

  v2 = *a1;
  v4 = a1;
  for ( i = a1 - 1; ; --i )
  {
    result = a2(v2, *i);
    if ( result == 0 )
      break;
    *v4 = *i;
    v4 = i;
  }
  *v4 = v2;
  return result;
}


//======================================================================
// void std::__unguarded_linear_insert<std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,bool (*)(ChunkIndex,ChunkIndex)>(std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,bool (*)(ChunkIndex,ChunkIndex))
// address: 0x002B06D4   size: 0x5C (92 bytes)
//======================================================================
int __fastcall std::__unguarded_linear_insert<std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,bool (*)(ChunkIndex,ChunkIndex)>(
        int **a1,
        int (__fastcall *a2)(int, int, _DWORD, _DWORD))
{
  int v3; // r0
  int *v4; // r3
  int v5; // r2
  int *v6; // r1
  int *v7; // r7
  int v10; // [sp+8h] [bp-1Ch]
  int v11; // [sp+Ch] [bp-18h]
  _DWORD v12[5]; // [sp+10h] [bp-14h] BYREF

  v10 = **a1;
  v11 = (*a1)[1];
  std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v12, a1);
  while ( 1 )
  {
    std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::operator--(v12);
    v3 = a2(v10, v11, *(_DWORD *)v12[0], *(_DWORD *)(v12[0] + 4));
    v4 = *a1;
    if ( v3 == 0 )
      break;
    v5 = v12[0];
    *v4 = *(_DWORD *)v12[0];
    v4[1] = *(_DWORD *)(v5 + 4);
    v6 = (int *)v12[1];
    v7 = (int *)v12[2];
    *a1 = (int *)v12[0];
    a1[1] = v6;
    a1[2] = v7;
    a1[3] = (int *)v12[3];
  }
  *v4 = v10;
  v4[1] = v11;
  return v10;
}


//======================================================================
// void std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<ChunkIndex *,std::vector<ChunkIndex,std::allocator<ChunkIndex>>>,bool (*)(ChunkIndex,ChunkIndex)>(__gnu_cxx::__normal_iterator<ChunkIndex *,std::vector<ChunkIndex,std::allocator<ChunkIndex>>>,bool (*)(ChunkIndex,ChunkIndex))
// address: 0x002BBB80   size: 0x38 (56 bytes)
//======================================================================
__int64 __fastcall std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<ChunkIndex *,std::vector<ChunkIndex>>,bool (*)(ChunkIndex,ChunkIndex)>(
        _QWORD *a1,
        int (__fastcall *a2)(_DWORD, _DWORD, _DWORD, _DWORD))
{
  _DWORD *v3; // r4
  _DWORD *i; // r5
  __int64 v6; // [sp+0h] [bp-Ch]

  v3 = a1;
  v6 = *a1;
  for ( i = a1; ; v3 = i )
  {
    i -= 2;
    if ( a2(v6, HIDWORD(v6), *i, i[1]) == 0 )
      break;
    *v3 = *i;
    v3[1] = i[1];
  }
  *(_QWORD *)v3 = v6;
  return v6;
}


//======================================================================
// void std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<SubMeshInfo *,std::vector<SubMeshInfo,std::allocator<SubMeshInfo>>>>(__gnu_cxx::__normal_iterator<SubMeshInfo *,std::vector<SubMeshInfo,std::allocator<SubMeshInfo>>>)
// address: 0x002CF40C   size: 0x2A (42 bytes)
//======================================================================
_DWORD *__fastcall std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<SubMeshInfo *,std::vector<SubMeshInfo>>>(
        _DWORD *result)
{
  int v1; // r4
  unsigned int v2; // r2
  int v3; // r1
  _DWORD *i; // r3

  v1 = *result;
  v2 = result[1];
  v3 = result[2];
  for ( i = result; ; result = i )
  {
    i -= 3;
    if ( v2 >= i[1] )
      break;
    *result = *i;
    result[1] = i[1];
    result[2] = i[2];
  }
  *result = v1;
  result[1] = v2;
  result[2] = v3;
  return result;
}


//======================================================================
// void std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<BackPackGrid *,std::vector<BackPackGrid,std::allocator<BackPackGrid>>>,bool (*)(BackPackGrid const&,BackPackGrid const&)>(__gnu_cxx::__normal_iterator<BackPackGrid *,std::vector<BackPackGrid,std::allocator<BackPackGrid>>>,bool (*)(BackPackGrid const&,BackPackGrid const&))
// address: 0x002DE7F4   size: 0x3E (62 bytes)
//======================================================================
void *__fastcall std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<BackPackGrid *,std::vector<BackPackGrid>>,bool (*)(BackPackGrid const&,BackPackGrid const&)>(
        char *a1,
        int (__fastcall *a2)(_BYTE *, char *))
{
  char *v2; // r4
  char *i; // r5
  _BYTE v6[56]; // [sp+4h] [bp-38h] BYREF

  v2 = a1;
  j_memcpy(v6, a1, 0x34u);
  for ( i = v2; ; v2 = i )
  {
    i -= 52;
    if ( a2(v6, i) == 0 )
      break;
    j_memcpy(v2, i, 0x34u);
  }
  return j_memcpy(v2, v6, 0x34u);
}

