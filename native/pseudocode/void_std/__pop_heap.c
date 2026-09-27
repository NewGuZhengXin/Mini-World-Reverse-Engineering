// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: void_std::__pop_heap

//======================================================================
// void std::__pop_heap<__gnu_cxx::__normal_iterator<Ogre::RenderableEffectInfo *,std::vector<Ogre::RenderableEffectInfo,std::allocator<Ogre::RenderableEffectInfo>>>>(__gnu_cxx::__normal_iterator<Ogre::RenderableEffectInfo *,std::vector<Ogre::RenderableEffectInfo,std::allocator<Ogre::RenderableEffectInfo>>>,__gnu_cxx::__normal_iterator<Ogre::RenderableEffectInfo *,std::vector<Ogre::RenderableEffectInfo,std::allocator<Ogre::RenderableEffectInfo>>>,__gnu_cxx::__normal_iterator<Ogre::RenderableEffectInfo *,std::vector<Ogre::RenderableEffectInfo,std::allocator<Ogre::RenderableEffectInfo>>>)
// address: 0x0015AF06   size: 0x24 (36 bytes)
//======================================================================
bool __fastcall std::__pop_heap<__gnu_cxx::__normal_iterator<Ogre::RenderableEffectInfo *,std::vector<Ogre::RenderableEffectInfo>>>(
        int *a1,
        int a2,
        int *a3)
{
  int v3; // r3
  float v4; // r4

  v3 = *a3;
  v4 = *((float *)a3 + 1);
  *a3 = *a1;
  a3[1] = a1[1];
  return std::__adjust_heap<__gnu_cxx::__normal_iterator<Ogre::RenderableEffectInfo *,std::vector<Ogre::RenderableEffectInfo>>,int,Ogre::RenderableEffectInfo>(
           (_BOOL4)a1,
           0,
           (a2 - (int)a1) >> 3,
           v3,
           v4);
}


//======================================================================
// void std::__pop_heap<__gnu_cxx::__normal_iterator<Ogre::ModelInstanceData *,std::vector<Ogre::ModelInstanceData,std::allocator<Ogre::ModelInstanceData>>>>(__gnu_cxx::__normal_iterator<Ogre::ModelInstanceData *,std::vector<Ogre::ModelInstanceData,std::allocator<Ogre::ModelInstanceData>>>,__gnu_cxx::__normal_iterator<Ogre::ModelInstanceData *,std::vector<Ogre::ModelInstanceData,std::allocator<Ogre::ModelInstanceData>>>,__gnu_cxx::__normal_iterator<Ogre::ModelInstanceData *,std::vector<Ogre::ModelInstanceData,std::allocator<Ogre::ModelInstanceData>>>)
// address: 0x0019F7C4   size: 0x38 (56 bytes)
//======================================================================
int __fastcall std::__pop_heap<__gnu_cxx::__normal_iterator<Ogre::ModelInstanceData *,std::vector<Ogre::ModelInstanceData>>>(
        int a1,
        int a2,
        int a3)
{
  _BYTE v7[64]; // [sp+0h] [bp-84h] BYREF
  _BYTE v8[68]; // [sp+40h] [bp-44h] BYREF

  Ogre::ModelInstanceData::ModelInstanceData((int)v7, a3);
  Ogre::ModelInstanceData::operator=(a3, a1);
  Ogre::ModelInstanceData::ModelInstanceData((int)v8, (int)v7);
  return std::__adjust_heap<__gnu_cxx::__normal_iterator<Ogre::ModelInstanceData *,std::vector<Ogre::ModelInstanceData>>,int,Ogre::ModelInstanceData>(
           a1,
           0,
           (a2 - a1) >> 6,
           (int)v8);
}


//======================================================================
// void std::__pop_heap<std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,bool (*)(ChunkIndex,ChunkIndex)>(std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,bool (*)(ChunkIndex,ChunkIndex))
// address: 0x002B0C90   size: 0x4A (74 bytes)
//======================================================================
_DWORD *__fastcall std::__pop_heap<std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,bool (*)(ChunkIndex,ChunkIndex)>(
        int **a1,
        _DWORD *a2,
        int **a3,
        int (__fastcall *a4)(_DWORD, _DWORD, int, int))
{
  int *v4; // r3
  int v7; // r1
  int *v8; // r2
  int v9; // r0
  int v12; // [sp+10h] [bp-1Ch]
  int v13; // [sp+14h] [bp-18h]
  _DWORD v14[5]; // [sp+18h] [bp-14h] BYREF

  v4 = *a3;
  v7 = **a3;
  v13 = (*a3)[1];
  v8 = *a1;
  v12 = v7;
  *v4 = **a1;
  v4[1] = v8[1];
  std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v14, a1);
  v9 = std::operator-<ChunkIndex,ChunkIndex&,ChunkIndex*>(a2, a1);
  return std::__adjust_heap<std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,int,ChunkIndex,bool (*)(ChunkIndex,ChunkIndex)>(
           v14,
           0,
           v9,
           v12,
           v13,
           a4);
}


//======================================================================
// void std::__pop_heap<__gnu_cxx::__normal_iterator<ChunkIndex *,std::vector<ChunkIndex,std::allocator<ChunkIndex>>>,bool (*)(ChunkIndex,ChunkIndex)>(__gnu_cxx::__normal_iterator<ChunkIndex *,std::vector<ChunkIndex,std::allocator<ChunkIndex>>>,__gnu_cxx::__normal_iterator<ChunkIndex *,std::vector<ChunkIndex,std::allocator<ChunkIndex>>>,__gnu_cxx::__normal_iterator<ChunkIndex *,std::vector<ChunkIndex,std::allocator<ChunkIndex>>>,bool (*)(ChunkIndex,ChunkIndex))
// address: 0x002BBCF8   size: 0x24 (36 bytes)
//======================================================================
__int64 __fastcall std::__pop_heap<__gnu_cxx::__normal_iterator<ChunkIndex *,std::vector<ChunkIndex>>,bool (*)(ChunkIndex,ChunkIndex)>(
        int *a1,
        int a2,
        int *a3,
        int (__fastcall *a4)(_DWORD, _DWORD, int, int))
{
  int v5; // r3
  int v6; // r4
  __int64 v8; // [sp+0h] [bp-10h]

  v5 = *a3;
  *a3 = *a1;
  v6 = a3[1];
  a3[1] = a1[1];
  std::__adjust_heap<__gnu_cxx::__normal_iterator<ChunkIndex *,std::vector<ChunkIndex>>,int,ChunkIndex,bool (*)(ChunkIndex,ChunkIndex)>(
    (int)a1,
    0,
    (a2 - (int)a1) >> 3,
    v5,
    v6,
    a4);
  return v8;
}


//======================================================================
// void std::__pop_heap<__gnu_cxx::__normal_iterator<SubMeshInfo *,std::vector<SubMeshInfo,std::allocator<SubMeshInfo>>>>(__gnu_cxx::__normal_iterator<SubMeshInfo *,std::vector<SubMeshInfo,std::allocator<SubMeshInfo>>>,__gnu_cxx::__normal_iterator<SubMeshInfo *,std::vector<SubMeshInfo,std::allocator<SubMeshInfo>>>,__gnu_cxx::__normal_iterator<SubMeshInfo *,std::vector<SubMeshInfo,std::allocator<SubMeshInfo>>>)
// address: 0x002CF678   size: 0x32 (50 bytes)
//======================================================================
__int64 __fastcall std::__pop_heap<__gnu_cxx::__normal_iterator<SubMeshInfo *,std::vector<SubMeshInfo>>>(
        int *a1,
        int a2,
        int *a3)
{
  int v3; // r3
  unsigned int v4; // r5
  int v5; // r4

  v3 = *a3;
  v4 = a3[1];
  *a3 = *a1;
  v5 = a3[2];
  a3[1] = a1[1];
  a3[2] = a1[2];
  return std::__adjust_heap<__gnu_cxx::__normal_iterator<SubMeshInfo *,std::vector<SubMeshInfo>>,int,SubMeshInfo>(
           (int)a1,
           0,
           -1431655765 * ((a2 - (int)a1) >> 2),
           v3,
           v4,
           v5);
}


//======================================================================
// void std::__pop_heap<__gnu_cxx::__normal_iterator<BackPackGrid *,std::vector<BackPackGrid,std::allocator<BackPackGrid>>>,bool (*)(BackPackGrid const&,BackPackGrid const&)>(__gnu_cxx::__normal_iterator<BackPackGrid *,std::vector<BackPackGrid,std::allocator<BackPackGrid>>>,__gnu_cxx::__normal_iterator<BackPackGrid *,std::vector<BackPackGrid,std::allocator<BackPackGrid>>>,__gnu_cxx::__normal_iterator<BackPackGrid *,std::vector<BackPackGrid,std::allocator<BackPackGrid>>>,bool (*)(BackPackGrid const&,BackPackGrid const&))
// address: 0x002DE990   size: 0x50 (80 bytes)
//======================================================================
void *__fastcall std::__pop_heap<__gnu_cxx::__normal_iterator<BackPackGrid *,std::vector<BackPackGrid>>,bool (*)(BackPackGrid const&,BackPackGrid const&)>(
        const void *a1,
        int a2,
        void *a3,
        int (__fastcall *a4)(int, int))
{
  int v9[13]; // [sp+44h] [bp-38h] BYREF

  j_memcpy(v9, a3, sizeof(v9));
  j_memcpy(a3, a1, 0x34u);
  return std::__adjust_heap<__gnu_cxx::__normal_iterator<BackPackGrid *,std::vector<BackPackGrid>>,int,BackPackGrid,bool (*)(BackPackGrid const&,BackPackGrid const&)>(
           (int)a1,
           0,
           -991146299 * ((a2 - (int)a1) >> 2),
           v9[0],
           v9[1],
           v9[2],
           v9[3],
           v9[4],
           v9[5],
           v9[6],
           v9[7],
           v9[8],
           v9[9],
           v9[10],
           v9[11],
           v9[12],
           a4);
}

