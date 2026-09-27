// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: void_std::__adjust_heap

//======================================================================
// void std::__adjust_heap<__gnu_cxx::__normal_iterator<Ogre::RenderableEffectInfo *,std::vector<Ogre::RenderableEffectInfo,std::allocator<Ogre::RenderableEffectInfo>>>,int,Ogre::RenderableEffectInfo>(__gnu_cxx::__normal_iterator<Ogre::RenderableEffectInfo *,std::vector<Ogre::RenderableEffectInfo,std::allocator<Ogre::RenderableEffectInfo>>>,int,int,Ogre::RenderableEffectInfo)
// address: 0x0015AE3A   size: 0xCC (204 bytes)
//======================================================================
bool __fastcall std::__adjust_heap<__gnu_cxx::__normal_iterator<Ogre::RenderableEffectInfo *,std::vector<Ogre::RenderableEffectInfo>>,int,Ogre::RenderableEffectInfo>(
        _BOOL4 result,
        int a2,
        int a3,
        int a4,
        float a5)
{
  int v6; // r4
  int i; // r5
  int v8; // r6
  int v9; // r3
  int v10; // r2
  int v11; // r5
  int v12; // r2
  int v13; // r2
  int j; // r6
  int v15; // r7
  int v16; // r4
  int v17; // r5
  int v18; // [sp+8h] [bp-Ch]
  int varg_r3; // [sp+2Ch] [bp+18h]

  v6 = result;
  v18 = (a3 - 1) / 2;
  for ( i = a2; i < v18; i = v8 )
  {
    v8 = 2 * (i + 1) - 1;
    v9 = v6 + 16 * (i + 1);
    v10 = v6 + 8 * v8;
    result = *(float *)(v9 + 4) > *(float *)(v10 + 4);
    if ( *(float *)(v9 + 4) <= *(float *)(v10 + 4) )
      v8 = 2 * (i + 1);
    v11 = 8 * i;
    *(_DWORD *)(v11 + v6) = *(_DWORD *)(8 * v8 + v6);
    *(_DWORD *)(v6 + v11 + 4) = *(_DWORD *)(v6 + 8 * v8 + 4);
  }
  v12 = i;
  if ( (a3 & 1) == 0 && i == (a3 - 2) / 2 )
  {
    i = 2 * i + 1;
    v13 = 8 * v12;
    *(_DWORD *)(v13 + v6) = *(_DWORD *)(8 * i + v6);
    *(_DWORD *)(v6 + v13 + 4) = *(_DWORD *)(v6 + 8 * i + 4);
  }
  for ( j = (i - 1) / 2; ; j = (j - 1) / 2 )
  {
    v15 = 8 * i;
    if ( i <= a2 )
      break;
    v17 = v6 + 8 * j;
    result = *(float *)(v17 + 4) > a5;
    if ( *(float *)(v17 + 4) <= a5 )
      break;
    *(_DWORD *)(v15 + v6) = *(_DWORD *)v17;
    *(_DWORD *)(v6 + v15 + 4) = *(_DWORD *)(v17 + 4);
    i = j;
  }
  v16 = v6 + v15;
  *(_DWORD *)v16 = varg_r3;
  *(float *)(v16 + 4) = a5;
  return result;
}


//======================================================================
// void std::__adjust_heap<__gnu_cxx::__normal_iterator<Ogre::FilePkgBase **,std::vector<Ogre::FilePkgBase *,std::allocator<Ogre::FilePkgBase *>>>,int,Ogre::FilePkgBase *,bool (*)(Ogre::FilePkgBase *,Ogre::FilePkgBase *)>(__gnu_cxx::__normal_iterator<Ogre::FilePkgBase **,std::vector<Ogre::FilePkgBase *,std::allocator<Ogre::FilePkgBase *>>>,int,int,Ogre::FilePkgBase *,bool (*)(Ogre::FilePkgBase *,Ogre::FilePkgBase *))
// address: 0x0016EC0A   size: 0x9E (158 bytes)
//======================================================================
int __fastcall std::__adjust_heap<__gnu_cxx::__normal_iterator<Ogre::FilePkgBase **,std::vector<Ogre::FilePkgBase *>>,int,Ogre::FilePkgBase *,bool (*)(Ogre::FilePkgBase *,Ogre::FilePkgBase *)>(
        int result,
        int a2,
        int a3,
        int a4,
        int (__fastcall *a5)(_DWORD, int, unsigned int))
{
  int v6; // r7
  int i; // r4
  int v8; // r5
  int v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // r6
  int j; // r5
  _DWORD *v13; // r6
  int v16; // [sp+Ch] [bp-8h]

  v6 = result;
  v16 = (a3 - 1) / 2;
  for ( i = a2; i < v16; i = v8 )
  {
    v8 = 2 * (i + 1) - 1;
    result = ((int (__fastcall *)(_DWORD, _DWORD))a5)(*(_DWORD *)(8 * (i + 1) + v6), *(_DWORD *)(4 * v8 + v6));
    if ( result == 0 )
      v8 = 2 * (i + 1);
    *(_DWORD *)(4 * i + v6) = *(_DWORD *)(4 * v8 + v6);
  }
  v9 = i;
  v10 = a3 << 31;
  if ( (a3 & 1) == 0 )
  {
    v11 = a3 - 2;
    v10 = v11 >> 31;
    if ( i == (int)v11 / 2 )
    {
      i = 2 * i + 1;
      v10 = *(_DWORD *)(4 * i + v6);
      *(_DWORD *)(4 * v9 + v6) = v10;
    }
  }
  for ( j = (i - 1) / 2; i > a2; j = (j - 1) / 2 )
  {
    v13 = (_DWORD *)(v6 + 4 * j);
    result = a5(*v13, a4, v10);
    if ( result == 0 )
      break;
    *(_DWORD *)(4 * i + v6) = *v13;
    v10 = (unsigned int)(j - 1) >> 31;
    i = j;
  }
  *(_DWORD *)(4 * i + v6) = a4;
  return result;
}


//======================================================================
// void std::__adjust_heap<__gnu_cxx::__normal_iterator<Ogre::Entity::BindObj **,std::vector<Ogre::Entity::BindObj *,std::allocator<Ogre::Entity::BindObj *>>>,int,Ogre::Entity::BindObj *,bool (*)(Ogre::Entity::BindObj const*,Ogre::Entity::BindObj const*)>(__gnu_cxx::__normal_iterator<Ogre::Entity::BindObj **,std::vector<Ogre::Entity::BindObj *,std::allocator<Ogre::Entity::BindObj *>>>,int,int,Ogre::Entity::BindObj *,bool (*)(Ogre::Entity::BindObj const*,Ogre::Entity::BindObj const*))
// address: 0x0018D34A   size: 0x9E (158 bytes)
//======================================================================
int __fastcall std::__adjust_heap<__gnu_cxx::__normal_iterator<Ogre::Entity::BindObj **,std::vector<Ogre::Entity::BindObj *>>,int,Ogre::Entity::BindObj *,bool (*)(Ogre::Entity::BindObj const*,Ogre::Entity::BindObj const*)>(
        int result,
        int a2,
        int a3,
        int a4,
        int (__fastcall *a5)(_DWORD, int, unsigned int))
{
  int v6; // r7
  int i; // r4
  int v8; // r5
  int v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // r6
  int j; // r5
  _DWORD *v13; // r6
  int v16; // [sp+Ch] [bp-8h]

  v6 = result;
  v16 = (a3 - 1) / 2;
  for ( i = a2; i < v16; i = v8 )
  {
    v8 = 2 * (i + 1) - 1;
    result = ((int (__fastcall *)(_DWORD, _DWORD))a5)(*(_DWORD *)(8 * (i + 1) + v6), *(_DWORD *)(4 * v8 + v6));
    if ( result == 0 )
      v8 = 2 * (i + 1);
    *(_DWORD *)(4 * i + v6) = *(_DWORD *)(4 * v8 + v6);
  }
  v9 = i;
  v10 = a3 << 31;
  if ( (a3 & 1) == 0 )
  {
    v11 = a3 - 2;
    v10 = v11 >> 31;
    if ( i == (int)v11 / 2 )
    {
      i = 2 * i + 1;
      v10 = *(_DWORD *)(4 * i + v6);
      *(_DWORD *)(4 * v9 + v6) = v10;
    }
  }
  for ( j = (i - 1) / 2; i > a2; j = (j - 1) / 2 )
  {
    v13 = (_DWORD *)(v6 + 4 * j);
    result = a5(*v13, a4, v10);
    if ( result == 0 )
      break;
    *(_DWORD *)(4 * i + v6) = *v13;
    v10 = (unsigned int)(j - 1) >> 31;
    i = j;
  }
  *(_DWORD *)(4 * i + v6) = a4;
  return result;
}


//======================================================================
// void std::__adjust_heap<Ogre::AnimPlayTrack **,int,Ogre::AnimPlayTrack *,bool (*)(Ogre::AnimPlayTrack *,Ogre::AnimPlayTrack *)>(Ogre::AnimPlayTrack **,int,int,Ogre::AnimPlayTrack *,bool (*)(Ogre::AnimPlayTrack *,Ogre::AnimPlayTrack *))
// address: 0x00192940   size: 0xA0 (160 bytes)
//======================================================================
int __fastcall std::__adjust_heap<Ogre::AnimPlayTrack **,int,Ogre::AnimPlayTrack *,bool (*)(Ogre::AnimPlayTrack *,Ogre::AnimPlayTrack *)>(
        int result,
        int a2,
        int a3,
        int a4,
        int (__fastcall *a5)(_DWORD, int))
{
  int v6; // r7
  int i; // r4
  int v8; // r5
  int v9; // r5
  int v10; // r3
  int j; // r5
  _DWORD *v12; // r6
  int v13; // [sp+4h] [bp-10h]

  v6 = result;
  v13 = (a3 - 1) / 2;
  for ( i = a2; i < v13; i = v9 )
  {
    v8 = 2 * (i + 1);
    result = a5(*(_DWORD *)(8 * (i + 1) + v6), *(_DWORD *)(4 * (v8 + 0x3FFFFFFF) + v6)) != 0;
    v9 = v8 - result;
    *(_DWORD *)(4 * i + v6) = *(_DWORD *)(4 * v9 + v6);
  }
  if ( (a3 & 1) == 0 && i == (a3 - 2) / 2 )
  {
    v10 = 2 * (i + 1);
    *(_DWORD *)(4 * i + v6) = *(_DWORD *)(4 * (v10 + 0x3FFFFFFF) + v6);
    i = v10 - 1;
  }
  for ( j = (i - 1) / 2; i > a2; j = (j - 1) / 2 )
  {
    v12 = (_DWORD *)(v6 + 4 * j);
    result = a5(*v12, a4);
    if ( result == 0 )
      break;
    *(_DWORD *)(4 * i + v6) = *v12;
    i = j;
  }
  *(_DWORD *)(4 * i + v6) = a4;
  return result;
}


//======================================================================
// void std::__adjust_heap<__gnu_cxx::__normal_iterator<Ogre::MaterialParam **,std::vector<Ogre::MaterialParam *,std::allocator<Ogre::MaterialParam *>>>,int,Ogre::MaterialParam *,bool (*)(Ogre::MaterialParam *,Ogre::MaterialParam *)>(__gnu_cxx::__normal_iterator<Ogre::MaterialParam **,std::vector<Ogre::MaterialParam *,std::allocator<Ogre::MaterialParam *>>>,int,int,Ogre::MaterialParam *,bool (*)(Ogre::MaterialParam *,Ogre::MaterialParam *))
// address: 0x001962A2   size: 0x9E (158 bytes)
//======================================================================
int __fastcall std::__adjust_heap<__gnu_cxx::__normal_iterator<Ogre::MaterialParam **,std::vector<Ogre::MaterialParam *>>,int,Ogre::MaterialParam *,bool (*)(Ogre::MaterialParam *,Ogre::MaterialParam *)>(
        int result,
        int a2,
        int a3,
        int a4,
        int (__fastcall *a5)(_DWORD, int, unsigned int))
{
  int v6; // r7
  int i; // r4
  int v8; // r5
  int v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // r6
  int j; // r5
  _DWORD *v13; // r6
  int v16; // [sp+Ch] [bp-8h]

  v6 = result;
  v16 = (a3 - 1) / 2;
  for ( i = a2; i < v16; i = v8 )
  {
    v8 = 2 * (i + 1) - 1;
    result = ((int (__fastcall *)(_DWORD, _DWORD))a5)(*(_DWORD *)(8 * (i + 1) + v6), *(_DWORD *)(4 * v8 + v6));
    if ( result == 0 )
      v8 = 2 * (i + 1);
    *(_DWORD *)(4 * i + v6) = *(_DWORD *)(4 * v8 + v6);
  }
  v9 = i;
  v10 = a3 << 31;
  if ( (a3 & 1) == 0 )
  {
    v11 = a3 - 2;
    v10 = v11 >> 31;
    if ( i == (int)v11 / 2 )
    {
      i = 2 * i + 1;
      v10 = *(_DWORD *)(4 * i + v6);
      *(_DWORD *)(4 * v9 + v6) = v10;
    }
  }
  for ( j = (i - 1) / 2; i > a2; j = (j - 1) / 2 )
  {
    v13 = (_DWORD *)(v6 + 4 * j);
    result = a5(*v13, a4, v10);
    if ( result == 0 )
      break;
    *(_DWORD *)(4 * i + v6) = *v13;
    v10 = (unsigned int)(j - 1) >> 31;
    i = j;
  }
  *(_DWORD *)(4 * i + v6) = a4;
  return result;
}


//======================================================================
// void std::__adjust_heap<__gnu_cxx::__normal_iterator<Ogre::ModelInstanceData *,std::vector<Ogre::ModelInstanceData,std::allocator<Ogre::ModelInstanceData>>>,int,Ogre::ModelInstanceData>(__gnu_cxx::__normal_iterator<Ogre::ModelInstanceData *,std::vector<Ogre::ModelInstanceData,std::allocator<Ogre::ModelInstanceData>>>,int,int,Ogre::ModelInstanceData)
// address: 0x0019F708   size: 0xBC (188 bytes)
//======================================================================
int __fastcall std::__adjust_heap<__gnu_cxx::__normal_iterator<Ogre::ModelInstanceData *,std::vector<Ogre::ModelInstanceData>>,int,Ogre::ModelInstanceData>(
        int a1,
        int a2,
        int a3,
        int a4)
{
  int i; // r4
  int v7; // r5
  int v8; // r0
  int j; // r5
  int v11; // [sp+0h] [bp-54h]
  int v13; // [sp+8h] [bp-4Ch]
  _BYTE v15[68]; // [sp+10h] [bp-44h] BYREF

  v13 = (a3 - 1) / 2;
  for ( i = a2; i < v13; i = v7 )
  {
    v7 = 2 * (i + 1) - 1;
    if ( !Ogre::operator<(a1 + ((i + 1) << 7), a1 + (v7 << 6)) )
      v7 = 2 * (i + 1);
    Ogre::ModelInstanceData::operator=(a1 + (i << 6), a1 + (v7 << 6));
  }
  v8 = i;
  if ( (a3 & 1) == 0 && i == (a3 - 2) / 2 )
  {
    i = 2 * i + 1;
    Ogre::ModelInstanceData::operator=(a1 + (v8 << 6), a1 + (i << 6));
  }
  Ogre::ModelInstanceData::ModelInstanceData((int)v15, a4);
  for ( j = (i - 1) / 2; ; j = (j - 1) / 2 )
  {
    v11 = i << 6;
    if ( i <= a2 || !Ogre::operator<(a1 + (j << 6), (int)v15) )
      break;
    i = j;
    Ogre::ModelInstanceData::operator=(a1 + v11, a1 + (j << 6));
  }
  return Ogre::ModelInstanceData::operator=(a1 + v11, (int)v15);
}


//======================================================================
// void std::__adjust_heap<__gnu_cxx::__normal_iterator<Ogre::TileModel **,std::vector<Ogre::TileModel *,std::allocator<Ogre::TileModel *>>>,int,Ogre::TileModel *,bool (*)(Ogre::TileModel *,Ogre::TileModel *)>(__gnu_cxx::__normal_iterator<Ogre::TileModel **,std::vector<Ogre::TileModel *,std::allocator<Ogre::TileModel *>>>,int,int,Ogre::TileModel *,bool (*)(Ogre::TileModel *,Ogre::TileModel *))
// address: 0x0019FAEA   size: 0x9E (158 bytes)
//======================================================================
int __fastcall std::__adjust_heap<__gnu_cxx::__normal_iterator<Ogre::TileModel **,std::vector<Ogre::TileModel *>>,int,Ogre::TileModel *,bool (*)(Ogre::TileModel *,Ogre::TileModel *)>(
        int result,
        int a2,
        int a3,
        int a4,
        int (__fastcall *a5)(_DWORD, int, unsigned int))
{
  int v6; // r7
  int i; // r4
  int v8; // r5
  int v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // r6
  int j; // r5
  _DWORD *v13; // r6
  int v16; // [sp+Ch] [bp-8h]

  v6 = result;
  v16 = (a3 - 1) / 2;
  for ( i = a2; i < v16; i = v8 )
  {
    v8 = 2 * (i + 1) - 1;
    result = ((int (__fastcall *)(_DWORD, _DWORD))a5)(*(_DWORD *)(8 * (i + 1) + v6), *(_DWORD *)(4 * v8 + v6));
    if ( result == 0 )
      v8 = 2 * (i + 1);
    *(_DWORD *)(4 * i + v6) = *(_DWORD *)(4 * v8 + v6);
  }
  v9 = i;
  v10 = a3 << 31;
  if ( (a3 & 1) == 0 )
  {
    v11 = a3 - 2;
    v10 = v11 >> 31;
    if ( i == (int)v11 / 2 )
    {
      i = 2 * i + 1;
      v10 = *(_DWORD *)(4 * i + v6);
      *(_DWORD *)(4 * v9 + v6) = v10;
    }
  }
  for ( j = (i - 1) / 2; i > a2; j = (j - 1) / 2 )
  {
    v13 = (_DWORD *)(v6 + 4 * j);
    result = a5(*v13, a4, v10);
    if ( result == 0 )
      break;
    *(_DWORD *)(4 * i + v6) = *v13;
    v10 = (unsigned int)(j - 1) >> 31;
    i = j;
  }
  *(_DWORD *)(4 * i + v6) = a4;
  return result;
}


//======================================================================
// void std::__adjust_heap<std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,int,ChunkIndex,bool (*)(ChunkIndex,ChunkIndex)>(std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,int,int,ChunkIndex,bool (*)(ChunkIndex,ChunkIndex))
// address: 0x002B0BAE   size: 0xE2 (226 bytes)
//======================================================================
_DWORD *__fastcall std::__adjust_heap<std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,int,ChunkIndex,bool (*)(ChunkIndex,ChunkIndex)>(
        _DWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int (__fastcall *a6)(_DWORD, _DWORD, int, int))
{
  int v7; // r5
  int v8; // r6
  _DWORD *v9; // r4
  int v10; // r3
  int v11; // r3
  _DWORD *v12; // r4
  int v13; // r3
  int v14; // r3
  _DWORD *v15; // r6
  int v16; // r3
  int v17; // r3
  int v21; // [sp+1Ch] [bp-28h]
  _DWORD v22[4]; // [sp+20h] [bp-24h] BYREF
  int var14[12]; // [sp+30h] [bp-14h] BYREF

  v21 = (a3 - 1) / 2;
  v7 = a2;
  while ( v7 < v21 )
  {
    std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::operator+(v22, a1, 2 * (v7 + 1), 2 * (v7 + 1));
    v8 = 2 * (v7 + 1) - 1;
    v9 = (_DWORD *)v22[0];
    std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::operator+(var14, a1, v8, v10);
    if ( a6(*v9, v9[1], *(_DWORD *)var14[0], *(_DWORD *)(var14[0] + 4)) == 0 )
      v8 = 2 * (v7 + 1);
    std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::operator+(var14, a1, v7, v11);
    v12 = (_DWORD *)var14[0];
    std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::operator+(v22, a1, v8, v13);
    v14 = v22[0];
    v7 = v8;
    *v12 = *(_DWORD *)v22[0];
    v12[1] = *(_DWORD *)(v14 + 4);
  }
  if ( (a3 & 1) == 0 && v7 == (a3 - 2) / 2 )
  {
    std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::operator+(var14, a1, v7, 2 * (v7 + 1));
    v7 = 2 * (v7 + 1) - 1;
    v15 = (_DWORD *)var14[0];
    std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::operator+(v22, a1, v7, v16);
    v17 = v22[0];
    *v15 = *(_DWORD *)v22[0];
    v15[1] = *(_DWORD *)(v17 + 4);
  }
  std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(var14, a1);
  return std::__push_heap<std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,int,ChunkIndex,bool (*)(ChunkIndex,ChunkIndex)>(
           var14,
           v7,
           a2,
           var14[11],
           a5,
           a6);
}


//======================================================================
// void std::__adjust_heap<__gnu_cxx::__normal_iterator<ChunkIndex *,std::vector<ChunkIndex,std::allocator<ChunkIndex>>>,int,ChunkIndex,bool (*)(ChunkIndex,ChunkIndex)>(__gnu_cxx::__normal_iterator<ChunkIndex *,std::vector<ChunkIndex,std::allocator<ChunkIndex>>>,int,int,ChunkIndex,bool (*)(ChunkIndex,ChunkIndex))
// address: 0x002BBC18   size: 0xE0 (224 bytes)
//======================================================================
int __fastcall std::__adjust_heap<__gnu_cxx::__normal_iterator<ChunkIndex *,std::vector<ChunkIndex>>,int,ChunkIndex,bool (*)(ChunkIndex,ChunkIndex)>(
        int result,
        int a2,
        int a3,
        int a4,
        int a5,
        int (__fastcall *a6)(_DWORD, _DWORD, int, int))
{
  int v7; // r7
  int i; // r5
  int v9; // r5
  int v10; // r2
  int v11; // r2
  int v12; // r6
  _DWORD *v13; // r5
  int v14; // [sp+0h] [bp-1Ch]
  int j; // [sp+4h] [bp-18h]
  int v17; // [sp+Ch] [bp-10h]
  int varg_r3; // [sp+34h] [bp+18h]

  v7 = result;
  v17 = (a3 - 1) / 2;
  for ( i = a2; i < v17; i = v14 )
  {
    v14 = 2 * (i + 1) - 1;
    result = a6(
               *(_DWORD *)(16 * (i + 1) + v7),
               *(_DWORD *)(v7 + 16 * (i + 1) + 4),
               *(_DWORD *)(8 * v14 + v7),
               *(_DWORD *)(v7 + 8 * v14 + 4));
    if ( result == 0 )
      v14 = 2 * (i + 1);
    v9 = 8 * i;
    *(_DWORD *)(v9 + v7) = *(_DWORD *)(8 * v14 + v7);
    *(_DWORD *)(v7 + v9 + 4) = *(_DWORD *)(v7 + 8 * v14 + 4);
  }
  v10 = i;
  if ( (a3 & 1) == 0 && i == (a3 - 2) / 2 )
  {
    i = 2 * i + 1;
    v11 = 8 * v10;
    *(_DWORD *)(v11 + v7) = *(_DWORD *)(8 * i + v7);
    *(_DWORD *)(v7 + v11 + 4) = *(_DWORD *)(v7 + 8 * i + 4);
  }
  for ( j = (i - 1) / 2; ; j = (j - 1) / 2 )
  {
    v12 = 8 * i;
    if ( i <= a2 )
      break;
    v13 = (_DWORD *)(v7 + 8 * j);
    result = a6(*v13, v13[1], varg_r3, a5);
    if ( result == 0 )
      break;
    *(_DWORD *)(v12 + v7) = *v13;
    *(_DWORD *)(v7 + v12 + 4) = v13[1];
    i = j;
  }
  *(_DWORD *)(v12 + v7) = varg_r3;
  *(_DWORD *)(v7 + v12 + 4) = a5;
  return result;
}


//======================================================================
// void std::__adjust_heap<__gnu_cxx::__normal_iterator<SubMeshInfo *,std::vector<SubMeshInfo,std::allocator<SubMeshInfo>>>,int,SubMeshInfo>(__gnu_cxx::__normal_iterator<SubMeshInfo *,std::vector<SubMeshInfo,std::allocator<SubMeshInfo>>>,int,int,SubMeshInfo)
// address: 0x002CF592   size: 0xE6 (230 bytes)
//======================================================================
__int64 __fastcall std::__adjust_heap<__gnu_cxx::__normal_iterator<SubMeshInfo *,std::vector<SubMeshInfo>>,int,SubMeshInfo>(
        int a1,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        int a6)
{
  int i; // r3
  int v7; // r4
  int v8; // r3
  _DWORD *v9; // r6
  int v10; // r3
  int v11; // r5
  _DWORD *v12; // r4
  int v13; // r2
  int j; // r2
  _DWORD *v15; // r0
  _DWORD *v17; // r4
  int v18; // r3
  int v19; // r3
  __int64 v20; // [sp+0h] [bp-Ch]
  int varg_r3; // [sp+24h] [bp+18h]

  LODWORD(v20) = a1;
  for ( i = a2; i < (a3 - 1) / 2; i = v7 )
  {
    v7 = 2 * (i + 1) - 1;
    LODWORD(v20) = a1 + 12 * v7;
    if ( *(_DWORD *)(24 * (i + 1) + a1 + 4) >= *(_DWORD *)(v20 + 4) )
      v7 = 2 * (i + 1);
    v8 = 12 * i;
    v9 = (_DWORD *)(a1 + 12 * v7);
    *(_DWORD *)(v8 + a1) = *v9;
    v10 = a1 + v8;
    *(_DWORD *)(v10 + 4) = v9[1];
    *(_DWORD *)(v10 + 8) = v9[2];
  }
  v11 = i;
  if ( (a3 & 1) == 0 && i == (a3 - 2) / 2 )
  {
    i = 2 * i + 1;
    v12 = (_DWORD *)(a1 + 12 * i);
    *(_DWORD *)(12 * v11 + a1) = *v12;
    v13 = a1 + 12 * v11;
    *(_DWORD *)(v13 + 4) = v12[1];
    *(_DWORD *)(v13 + 8) = v12[2];
  }
  HIDWORD(v20) = varg_r3;
  for ( j = (i - 1) / 2; i > a2; j = (j - 1) / 2 )
  {
    v17 = (_DWORD *)(a1 + 12 * j);
    if ( v17[1] >= a5 )
      break;
    v18 = 12 * i;
    *(_DWORD *)(v18 + a1) = *v17;
    v19 = a1 + v18;
    *(_DWORD *)(v19 + 4) = v17[1];
    *(_DWORD *)(v19 + 8) = v17[2];
    i = j;
  }
  v15 = (_DWORD *)(a1 + 12 * i);
  v15[1] = a5;
  *v15 = varg_r3;
  v15[2] = a6;
  return v20;
}


//======================================================================
// void std::__adjust_heap<__gnu_cxx::__normal_iterator<BackPackGrid *,std::vector<BackPackGrid,std::allocator<BackPackGrid>>>,int,BackPackGrid,bool (*)(BackPackGrid const&,BackPackGrid const&)>(__gnu_cxx::__normal_iterator<BackPackGrid *,std::vector<BackPackGrid,std::allocator<BackPackGrid>>>,int,int,BackPackGrid,bool (*)(BackPackGrid const&,BackPackGrid const&))
// address: 0x002DE8A4   size: 0xEA (234 bytes)
//======================================================================
void *__fastcall std::__adjust_heap<__gnu_cxx::__normal_iterator<BackPackGrid *,std::vector<BackPackGrid>>,int,BackPackGrid,bool (*)(BackPackGrid const&,BackPackGrid const&)>(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int (__fastcall *a17)(int, int))
{
  int v18; // r6
  int v19; // r4
  int v20; // r0
  int v21; // r0
  int i; // r4
  int v26; // [sp+Ch] [bp-40h]
  _BYTE var38[80]; // [sp+14h] [bp-38h] BYREF
  int varg_r3; // [sp+64h] [bp+18h] BYREF

  v26 = (a3 - 1) / 2;
  v18 = a2;
  while ( v18 < v26 )
  {
    v19 = 2 * (v18 + 1) - 1;
    if ( a17(a1 + 104 * (v18 + 1), a1 + 52 * v19) == 0 )
      v19 = 2 * (v18 + 1);
    v20 = 52 * v18;
    v18 = v19;
    j_memcpy((void *)(a1 + v20), (const void *)(a1 + 52 * v19), 0x34u);
  }
  v21 = v18;
  if ( (a3 & 1) == 0 && v18 == (a3 - 2) / 2 )
  {
    v18 = 2 * v18 + 1;
    j_memcpy((void *)(a1 + 52 * v21), (const void *)(a1 + 52 * v18), 0x34u);
  }
  j_memcpy(var38, &varg_r3, 0x34u);
  for ( i = (v18 - 1) / 2; v18 > a2 && a17(a1 + 52 * i, (int)var38) != 0; i = (i - 1) / 2 )
  {
    j_memcpy((void *)(a1 + 52 * v18), (const void *)(a1 + 52 * i), 0x34u);
    v18 = i;
  }
  return j_memcpy((void *)(a1 + 52 * v18), var38, 0x34u);
}

