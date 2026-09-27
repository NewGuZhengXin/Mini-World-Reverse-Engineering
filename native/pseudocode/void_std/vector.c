// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: void_std::vector

//======================================================================
// void std::vector<Ogre::SequenceDesc,std::allocator<Ogre::SequenceDesc>>::_M_range_insert<__gnu_cxx::__normal_iterator<Ogre::SequenceDesc*,std::vector<Ogre::SequenceDesc,std::allocator<Ogre::SequenceDesc>>>>(__gnu_cxx::__normal_iterator<Ogre::SequenceDesc*,std::vector<Ogre::SequenceDesc,std::allocator<Ogre::SequenceDesc>>>,__gnu_cxx::__normal_iterator<Ogre::SequenceDesc*,std::vector<Ogre::SequenceDesc,std::allocator<Ogre::SequenceDesc>>>,__gnu_cxx::__normal_iterator<Ogre::SequenceDesc*,std::vector<Ogre::SequenceDesc,std::allocator<Ogre::SequenceDesc>>>,std::forward_iterator_tag)
// address: 0x0019367C   size: 0xD8 (216 bytes)
//======================================================================
void __fastcall std::vector<Ogre::SequenceDesc>::_M_range_insert<__gnu_cxx::__normal_iterator<Ogre::SequenceDesc*,std::vector<Ogre::SequenceDesc>>>(
        void **a1,
        void *a2,
        char *a3,
        int a4)
{
  _BYTE *v5; // r5
  unsigned int v6; // r6
  unsigned int v7; // r7
  int v8; // r7
  char *v9; // r6
  char *v10; // r0
  int v11; // r1
  char *v12; // r2
  unsigned int v13; // r0
  unsigned int v14; // r7
  char *v15; // r6
  void *v16; // r0
  void *v17; // r0
  int v18; // r5

  if ( a3 != (char *)a4 )
  {
    v5 = a1[1];
    v6 = (a4 - (int)a3) >> 4;
    if ( ((_BYTE *)a1[2] - v5) >> 4 < v6 )
    {
      v13 = std::vector<Ogre::SequenceDesc>::_M_check_len(a1, v6, (int)"vector::_M_range_insert");
      v14 = v13;
      if ( v13 != 0 )
        v15 = (char *)sub_192FB4(v13);
      else
        v15 = nullptr;
      v16 = (void *)std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::SequenceDesc>(
                      *a1,
                      (int)a2,
                      v15);
      v17 = (void *)std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::SequenceDesc>(
                      a3,
                      a4,
                      v16);
      v18 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::SequenceDesc>(
              a2,
              (int)a1[1],
              v17);
      if ( *a1 != nullptr )
        operator delete(*a1);
      *a1 = v15;
      a1[1] = (void *)v18;
      a1[2] = &v15[16 * v14];
    }
    else
    {
      v7 = (v5 - (_BYTE *)a2) >> 4;
      if ( v7 <= v6 )
      {
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::SequenceDesc>(&a3[16 * v7], a4, v5);
        v12 = (char *)a1[1] + 16 * (v6 - v7);
        a1[1] = v12;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::SequenceDesc>(a2, (int)v5, v12);
        v10 = a3;
        v11 = (int)&a3[16 * v7];
        a1[1] = (char *)a1[1] + 16 * v7;
      }
      else
      {
        v8 = 16 * v6;
        v9 = &v5[-16 * v6];
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::SequenceDesc>(
          v9,
          (int)a1[1],
          a1[1]);
        a1[1] = (char *)a1[1] + v8;
        std::__copy_move_backward<false,true,std::random_access_iterator_tag>::__copy_move_b<Ogre::SequenceDesc>(
          a2,
          (int)v9,
          (int)v5);
        v10 = a3;
        v11 = a4;
      }
      std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::SequenceDesc>(v10, v11, a2);
    }
  }
}


//======================================================================
// void std::vector<FileChunk *,std::allocator<FileChunk *>>::_M_emplace_back_aux<FileChunk * const&>(FileChunk * const&)
// address: 0x0026B300   size: 0x7A (122 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIP9FileChunkSaIS1_EE19_M_emplace_back_auxIJRKS1_EEEvDpOT_'
void __fastcall std::vector<FileChunk *>::_M_emplace_back_aux<FileChunk * const&>(int a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  char *v7; // r5
  char *v8; // r3
  int v9; // r3
  int v10; // r7
  int v11; // r7

  v4 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x3FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x3FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x3FFFFFFF;
  }
LABEL_8:
  v7 = (char *)operator new(4 * v6);
LABEL_9:
  v8 = &v7[4 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2)];
  if ( v8 != nullptr )
    *(_DWORD *)v8 = *a2;
  v9 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  v10 = 4 * v9;
  if ( v9 != 0 )
    j_memmove(v7, *(const void **)a1, 4 * v9);
  v11 = (int)&v7[v10 + 4];
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v11;
  *(_DWORD *)(a1 + 8) = &v7[4 * v6];
}


//======================================================================
// void std::vector<flatbuffers::Offset<FBSave::SectionActor>,std::allocator<flatbuffers::Offset<FBSave::SectionActor>>>::_M_emplace_back_aux<flatbuffers::Offset<FBSave::SectionActor> const&>(flatbuffers::Offset<FBSave::SectionActor> const&)
// address: 0x00298B48   size: 0x84 (132 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIN11flatbuffers6OffsetIN6FBSave12SectionActorEEESaIS4_EE19_M_emplace_back_auxIJRKS4_EEEvDpOT_'
void __fastcall std::vector<flatbuffers::Offset<FBSave::SectionActor>>::_M_emplace_back_aux<flatbuffers::Offset<FBSave::SectionActor> const&>(
        int *a1,
        _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  _DWORD *v7; // r5
  _DWORD *v8; // r3
  char *v9; // r7
  char *v10; // r1
  _DWORD *v11; // r2
  char *i; // r3
  unsigned int v13; // r7

  v4 = (a1[1] - *a1) >> 2;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x3FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x3FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x3FFFFFFF;
  }
LABEL_8:
  v7 = (_DWORD *)operator new(4 * v6);
LABEL_9:
  v8 = &v7[(a1[1] - *a1) >> 2];
  if ( v8 != nullptr )
    *v8 = *a2;
  v9 = (char *)*a1;
  v10 = (char *)a1[1];
  v11 = v7;
  for ( i = (char *)*a1; i != v10; i += 4 )
  {
    if ( v11 != nullptr )
      *v11 = *(_DWORD *)i;
    ++v11;
  }
  v13 = (unsigned int)&v7[((unsigned int)(i - v9) >> 2) + 1];
  if ( *a1 != 0 )
    operator delete((void *)*a1);
  *a1 = (int)v7;
  a1[1] = v13;
  a1[2] = (int)&v7[v6];
}


//======================================================================
// void std::vector<flatbuffers::Offset<FBSave::ChunkContainer>,std::allocator<flatbuffers::Offset<FBSave::ChunkContainer>>>::_M_emplace_back_aux<flatbuffers::Offset<FBSave::ChunkContainer>>(flatbuffers::Offset<FBSave::ChunkContainer> &&)
// address: 0x00298BD0   size: 0x84 (132 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIN11flatbuffers6OffsetIN6FBSave14ChunkContainerEEESaIS4_EE19_M_emplace_back_auxIJS4_EEEvDpOT_'
void __fastcall std::vector<flatbuffers::Offset<FBSave::ChunkContainer>>::_M_emplace_back_aux<flatbuffers::Offset<FBSave::ChunkContainer>>(
        int *a1,
        _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  _DWORD *v7; // r5
  _DWORD *v8; // r3
  char *v9; // r7
  char *v10; // r1
  _DWORD *v11; // r2
  char *i; // r3
  unsigned int v13; // r7

  v4 = (a1[1] - *a1) >> 2;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x3FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x3FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x3FFFFFFF;
  }
LABEL_8:
  v7 = (_DWORD *)operator new(4 * v6);
LABEL_9:
  v8 = &v7[(a1[1] - *a1) >> 2];
  if ( v8 != nullptr )
    *v8 = *a2;
  v9 = (char *)*a1;
  v10 = (char *)a1[1];
  v11 = v7;
  for ( i = (char *)*a1; i != v10; i += 4 )
  {
    if ( v11 != nullptr )
      *v11 = *(_DWORD *)i;
    ++v11;
  }
  v13 = (unsigned int)&v7[((unsigned int)(i - v9) >> 2) + 1];
  if ( *a1 != 0 )
    operator delete((void *)*a1);
  *a1 = (int)v7;
  a1[1] = v13;
  a1[2] = (int)&v7[v6];
}


//======================================================================
// void std::vector<int,std::allocator<int>>::_M_emplace_back_aux<int>(int &&)
// address: 0x00298C58   size: 0x7A (122 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIiSaIiEE19_M_emplace_back_auxIJiEEEvDpOT_'
void __fastcall std::vector<int>::_M_emplace_back_aux<int>(int a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  char *v7; // r5
  char *v8; // r3
  int v9; // r3
  int v10; // r7
  int v11; // r7

  v4 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x3FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x3FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x3FFFFFFF;
  }
LABEL_8:
  v7 = (char *)operator new(4 * v6);
LABEL_9:
  v8 = &v7[4 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2)];
  if ( v8 != nullptr )
    *(_DWORD *)v8 = *a2;
  v9 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  v10 = 4 * v9;
  if ( v9 != 0 )
    j_memmove(v7, *(const void **)a1, 4 * v9);
  v11 = (int)&v7[v10 + 4];
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v11;
  *(_DWORD *)(a1 + 8) = &v7[4 * v6];
}


//======================================================================
// void std::vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>::_M_emplace_back_aux<flatbuffers::FlatBufferBuilder::FieldLoc const&>(flatbuffers::FlatBufferBuilder::FieldLoc const&)
// address: 0x002991D0   size: 0x6E (110 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIN11flatbuffers17FlatBufferBuilder8FieldLocESaIS2_EE19_M_emplace_back_auxIJRKS2_EEEvDpOT_'
void __fastcall std::vector<flatbuffers::FlatBufferBuilder::FieldLoc>::_M_emplace_back_aux<flatbuffers::FlatBufferBuilder::FieldLoc const&>(
        int a1,
        _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r5
  char *v7; // r6
  char *v8; // r3
  int v9; // r7

  v4 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 3;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x1FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x1FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x1FFFFFFF;
  }
LABEL_8:
  v7 = (char *)operator new(8 * v6);
LABEL_9:
  v8 = &v7[8 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 3)];
  if ( v8 != nullptr )
  {
    *(_DWORD *)v8 = *a2;
    *((_DWORD *)v8 + 1) = a2[1];
  }
  v9 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<flatbuffers::FlatBufferBuilder::FieldLoc>(
         *(void **)a1,
         *(_DWORD *)(a1 + 4),
         v7);
  sub_298964(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v9 + 8;
  *(_DWORD *)(a1 + 8) = &v7[8 * v6];
}


//======================================================================
// void std::vector<unsigned int,std::allocator<unsigned int>>::_M_emplace_back_aux<unsigned int const&>(unsigned int const&)
// address: 0x0029937C   size: 0x6A (106 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIjSaIjEE19_M_emplace_back_auxIJRKjEEEvDpOT_'
void __fastcall std::vector<unsigned int>::_M_emplace_back_aux<unsigned int const&>(int a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r5
  char *v7; // r6
  char *v8; // r3
  int v9; // r7

  v4 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x3FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x3FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x3FFFFFFF;
  }
LABEL_8:
  v7 = (char *)operator new(4 * v6);
LABEL_9:
  v8 = &v7[4 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2)];
  if ( v8 != nullptr )
    *(_DWORD *)v8 = *a2;
  v9 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<unsigned int>(
         *(void **)a1,
         *(_DWORD *)(a1 + 4),
         v7);
  sub_298970(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v9 + 4;
  *(_DWORD *)(a1 + 8) = &v7[4 * v6];
}


//======================================================================
// void std::vector<BlockGeomVert,std::allocator<BlockGeomVert>>::_M_emplace_back_aux<BlockGeomVert const&>(BlockGeomVert const&)
// address: 0x0029A5C0   size: 0xB8 (184 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorI13BlockGeomVertSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_'
void __fastcall std::vector<BlockGeomVert>::_M_emplace_back_aux<BlockGeomVert const&>(void **a1, void *a2)
{
  unsigned int v3; // r2
  unsigned int v5; // r3
  char *v6; // r6
  char *v7; // r0
  char *v8; // r5
  char *i; // r4
  unsigned int v10; // r4
  int v11; // [sp+4h] [bp-10h]
  _BYTE *v12; // [sp+8h] [bp-Ch]
  char *v13; // [sp+Ch] [bp-8h]

  v3 = -858993459 * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2);
  if ( v3 != 0 )
  {
    v5 = -1717986918 * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2);
    v11 = 214748364;
    if ( 2 * v3 < v3 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v11 = v5;
  if ( v5 <= 0xCCCCCCC )
  {
    v6 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v11 = 214748364;
  }
LABEL_8:
  v6 = (char *)operator new(20 * v11);
LABEL_9:
  v7 = &v6[4 * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2)];
  if ( v7 != nullptr )
    j_memcpy(v7, a2, 0x14u);
  v8 = v6;
  v12 = *a1;
  v13 = (char *)a1[1];
  for ( i = (char *)*a1; i != v13; i += 20 )
  {
    if ( v8 != nullptr )
      j_memcpy(v8, i, 0x14u);
    v8 += 20;
  }
  v10 = (unsigned int)&v6[20 * ((858993460 * ((unsigned int)(i - v12) >> 2)) >> 2) + 20];
  if ( *a1 != nullptr )
    operator delete(*a1);
  *a1 = v6;
  a1[1] = (void *)v10;
  a1[2] = &v6[20 * v11];
}


//======================================================================
// void std::vector<unsigned short,std::allocator<unsigned short>>::emplace_back<unsigned short>(unsigned short &&)
// address: 0x0029AF18   size: 0x70 (112 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorItSaItEE12emplace_backIJtEEEvDpOT_'
void __fastcall std::vector<unsigned short>::emplace_back<unsigned short>(void **a1, _WORD *a2)
{
  _WORD *v3; // r3
  signed int v5; // r0
  int v6; // r6
  signed int v7; // r5
  _WORD *v8; // r3
  int v9; // r7

  v3 = a1[1];
  if ( v3 == a1[2] )
  {
    v5 = std::vector<unsigned short>::_M_check_len(a1, 1u, (int)"vector::_M_emplace_back_aux");
    v6 = 2 * v5;
    if ( v5 != 0 )
    {
      if ( v5 < 0 )
        sub_3BCEB4(v5);
      v5 = operator new(2 * v5);
    }
    v7 = v5;
    v8 = (_WORD *)(v5 + 2 * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 1));
    if ( v8 != nullptr )
      *v8 = *a2;
    v9 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<unsigned short>(
           *a1,
           (int)a1[1],
           (void *)v5)
       + 2;
    if ( *a1 != nullptr )
      operator delete(*a1);
    *a1 = (void *)v7;
    a1[1] = (void *)v9;
    a1[2] = (void *)(v7 + v6);
  }
  else
  {
    if ( v3 != nullptr )
      *v3 = *a2;
    a1[1] = (char *)a1[1] + 2;
  }
}


//======================================================================
// void std::vector<int,std::allocator<int>>::_M_emplace_back_aux<int const&>(int const&)
// address: 0x0029BB0C   size: 0x7A (122 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIiSaIiEE19_M_emplace_back_auxIJRKiEEEvDpOT_'
void __fastcall std::vector<int>::_M_emplace_back_aux<int const&>(int a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  char *v7; // r5
  char *v8; // r3
  int v9; // r3
  int v10; // r7
  int v11; // r7

  v4 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x3FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x3FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x3FFFFFFF;
  }
LABEL_8:
  v7 = (char *)operator new(4 * v6);
LABEL_9:
  v8 = &v7[4 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2)];
  if ( v8 != nullptr )
    *(_DWORD *)v8 = *a2;
  v9 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  v10 = 4 * v9;
  if ( v9 != 0 )
    j_memmove(v7, *(const void **)a1, 4 * v9);
  v11 = (int)&v7[v10 + 4];
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v11;
  *(_DWORD *)(a1 + 8) = &v7[4 * v6];
}


//======================================================================
// void std::vector<FBSave::ActorBuff,std::allocator<FBSave::ActorBuff>>::_M_emplace_back_aux<FBSave::ActorBuff>(FBSave::ActorBuff &&)
// address: 0x0029EC5C   size: 0x88 (136 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIN6FBSave9ActorBuffESaIS1_EE19_M_emplace_back_auxIJS1_EEEvDpOT_'
void __fastcall std::vector<FBSave::ActorBuff>::_M_emplace_back_aux<FBSave::ActorBuff>(int *a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  _DWORD *v7; // r5
  _DWORD *v8; // r3
  char *v9; // r1
  char *v10; // r0
  _DWORD *v11; // r2
  char *i; // r3
  _DWORD *v13; // r7

  v4 = (a1[1] - *a1) >> 3;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x1FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x1FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x1FFFFFFF;
  }
LABEL_8:
  v7 = (_DWORD *)operator new(8 * v6);
LABEL_9:
  v8 = &v7[2 * ((a1[1] - *a1) >> 3)];
  if ( v8 != nullptr )
  {
    *v8 = *a2;
    v8[1] = a2[1];
  }
  v9 = (char *)*a1;
  v10 = (char *)a1[1];
  v11 = v7;
  for ( i = (char *)*a1; i != v10; i += 8 )
  {
    if ( v11 != nullptr )
    {
      *v11 = *(_DWORD *)i;
      v11[1] = *((_DWORD *)i + 1);
    }
    v11 += 2;
  }
  v13 = &v7[2 * ((unsigned int)(i - v9) >> 3)];
  sub_29DEA0((void *)*a1);
  *a1 = (int)v7;
  a1[1] = (int)(v13 + 2);
  a1[2] = (int)&v7[2 * v6];
}


//======================================================================
// void std::vector<FBSave::AttribMod,std::allocator<FBSave::AttribMod>>::_M_emplace_back_aux<FBSave::AttribMod>(FBSave::AttribMod &&)
// address: 0x0029ECE8   size: 0x88 (136 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIN6FBSave9AttribModESaIS1_EE19_M_emplace_back_auxIJS1_EEEvDpOT_'
void __fastcall std::vector<FBSave::AttribMod>::_M_emplace_back_aux<FBSave::AttribMod>(int *a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  _DWORD *v7; // r5
  _DWORD *v8; // r3
  char *v9; // r1
  char *v10; // r0
  _DWORD *v11; // r2
  char *i; // r3
  _DWORD *v13; // r7

  v4 = (a1[1] - *a1) >> 3;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x1FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x1FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x1FFFFFFF;
  }
LABEL_8:
  v7 = (_DWORD *)operator new(8 * v6);
LABEL_9:
  v8 = &v7[2 * ((a1[1] - *a1) >> 3)];
  if ( v8 != nullptr )
  {
    *v8 = *a2;
    v8[1] = a2[1];
  }
  v9 = (char *)*a1;
  v10 = (char *)a1[1];
  v11 = v7;
  for ( i = (char *)*a1; i != v10; i += 8 )
  {
    if ( v11 != nullptr )
    {
      *v11 = *(_DWORD *)i;
      v11[1] = *((_DWORD *)i + 1);
    }
    v11 += 2;
  }
  v13 = &v7[2 * ((unsigned int)(i - v9) >> 3)];
  sub_29DEAC((void *)*a1);
  *a1 = (int)v7;
  a1[1] = (int)(v13 + 2);
  a1[2] = (int)&v7[2 * v6];
}


//======================================================================
// void std::vector<BiomeDecorator::MinableGen,std::allocator<BiomeDecorator::MinableGen>>::_M_emplace_back_aux<BiomeDecorator::MinableGen const&>(BiomeDecorator::MinableGen const&)
// address: 0x002A15FC   size: 0x9C (156 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIN14BiomeDecorator10MinableGenESaIS1_EE19_M_emplace_back_auxIJRKS1_EEEvDpOT_'
__int64 __fastcall std::vector<BiomeDecorator::MinableGen>::_M_emplace_back_aux<BiomeDecorator::MinableGen const&>(
        __int64 a1)
{
  int v1; // r4
  unsigned int v2; // r2
  unsigned int v3; // r3
  int v4; // r6
  char *v5; // r5
  char *v6; // r3
  int v7; // r1
  int v8; // r7
  int v9; // r1
  int v10; // r7
  int v11; // r3
  int v12; // r7
  int v13; // r7

  v1 = a1;
  v2 = -1431655765 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 3);
  if ( v2 != 0 )
  {
    v3 = 1431655766 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 3);
    v4 = 178956970;
    if ( 2 * v2 < v2 )
      goto LABEL_8;
  }
  else
  {
    v3 = 1;
  }
  v4 = v3;
  if ( v3 <= 0xAAAAAAA )
  {
    v5 = nullptr;
    if ( v3 == 0 )
      goto LABEL_9;
  }
  else
  {
    v4 = 178956970;
  }
LABEL_8:
  v5 = (char *)operator new(24 * v4);
LABEL_9:
  if ( &v5[8 * ((*(_DWORD *)(v1 + 4) - *(_DWORD *)v1) >> 3)] != nullptr )
  {
    v6 = &v5[8 * ((*(_DWORD *)(v1 + 4) - *(_DWORD *)v1) >> 3)];
    v7 = *(_DWORD *)(HIDWORD(a1) + 4);
    v8 = *(_DWORD *)(HIDWORD(a1) + 8);
    *(_DWORD *)v6 = *(_DWORD *)HIDWORD(a1);
    *((_DWORD *)v6 + 1) = v7;
    *((_DWORD *)v6 + 2) = v8;
    v6 += 12;
    v9 = *(_DWORD *)(HIDWORD(a1) + 16);
    v10 = *(_DWORD *)(HIDWORD(a1) + 20);
    *(_DWORD *)v6 = *(_DWORD *)(HIDWORD(a1) + 12);
    *((_DWORD *)v6 + 1) = v9;
    *((_DWORD *)v6 + 2) = v10;
  }
  v11 = (*(_DWORD *)(v1 + 4) - *(_DWORD *)v1) >> 3;
  v12 = -1431655765 * v11;
  if ( -1431655765 * v11 != 0 )
    j_memmove(v5, *(const void **)v1, 8 * v11);
  v13 = (int)&v5[24 * v12 + 24];
  if ( *(_DWORD *)v1 != 0 )
    operator delete(*(void **)v1);
  *(_DWORD *)v1 = v5;
  *(_DWORD *)(v1 + 4) = v13;
  *(_DWORD *)(v1 + 8) = &v5[24 * v4];
  return a1;
}


//======================================================================
// void std::vector<int,std::allocator<int>>::emplace_back<int>(int &&)
// address: 0x002A1DA6   size: 0x20 (32 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIiSaIiEE12emplace_backIJiEEEvDpOT_'
void __fastcall std::vector<int>::emplace_back<int>(int a1, _DWORD *a2)
{
  _DWORD *v2; // r3

  v2 = *(_DWORD **)(a1 + 4);
  if ( v2 == *(_DWORD **)(a1 + 8) )
  {
    std::vector<int>::_M_emplace_back_aux<int>(a1, a2);
  }
  else
  {
    if ( v2 != nullptr )
      *v2 = *a2;
    *(_DWORD *)(a1 + 4) += 4;
  }
}


//======================================================================
// void std::vector<VoxelPalette *,std::allocator<VoxelPalette *>>::_M_emplace_back_aux<VoxelPalette * const&>(VoxelPalette * const&)
// address: 0x002A9D98   size: 0x7A (122 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIP12VoxelPaletteSaIS1_EE19_M_emplace_back_auxIJRKS1_EEEvDpOT_'
void __fastcall std::vector<VoxelPalette *>::_M_emplace_back_aux<VoxelPalette * const&>(int a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  char *v7; // r5
  char *v8; // r3
  int v9; // r3
  int v10; // r7
  int v11; // r7

  v4 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x3FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x3FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x3FFFFFFF;
  }
LABEL_8:
  v7 = (char *)operator new(4 * v6);
LABEL_9:
  v8 = &v7[4 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2)];
  if ( v8 != nullptr )
    *(_DWORD *)v8 = *a2;
  v9 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  v10 = 4 * v9;
  if ( v9 != 0 )
    j_memmove(v7, *(const void **)a1, 4 * v9);
  v11 = (int)&v7[v10 + 4];
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v11;
  *(_DWORD *)(a1 + 8) = &v7[4 * v6];
}


//======================================================================
// void std::vector<EnchantDef *,std::allocator<EnchantDef *>>::_M_emplace_back_aux<EnchantDef *>(EnchantDef * &&)
// address: 0x002AA520   size: 0x7A (122 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIP10EnchantDefSaIS1_EE19_M_emplace_back_auxIJS1_EEEvDpOT_'
void __fastcall std::vector<EnchantDef *>::_M_emplace_back_aux<EnchantDef *>(int a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  char *v7; // r5
  char *v8; // r3
  int v9; // r3
  int v10; // r7
  int v11; // r7

  v4 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x3FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x3FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x3FFFFFFF;
  }
LABEL_8:
  v7 = (char *)operator new(4 * v6);
LABEL_9:
  v8 = &v7[4 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2)];
  if ( v8 != nullptr )
    *(_DWORD *)v8 = *a2;
  v9 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  v10 = 4 * v9;
  if ( v9 != 0 )
    j_memmove(v7, *(const void **)a1, 4 * v9);
  v11 = (int)&v7[v10 + 4];
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v11;
  *(_DWORD *)(a1 + 8) = &v7[4 * v6];
}


//======================================================================
// void std::vector<char *,std::allocator<char *>>::_M_emplace_back_aux<char *>(char * &&)
// address: 0x002AA60C   size: 0x7A (122 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIPcSaIS0_EE19_M_emplace_back_auxIJS0_EEEvDpOT_'
void __fastcall std::vector<char *>::_M_emplace_back_aux<char *>(int a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  char *v7; // r5
  char *v8; // r3
  int v9; // r3
  int v10; // r7
  int v11; // r7

  v4 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x3FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x3FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x3FFFFFFF;
  }
LABEL_8:
  v7 = (char *)operator new(4 * v6);
LABEL_9:
  v8 = &v7[4 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2)];
  if ( v8 != nullptr )
    *(_DWORD *)v8 = *a2;
  v9 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  v10 = 4 * v9;
  if ( v9 != 0 )
    j_memmove(v7, *(const void **)a1, 4 * v9);
  v11 = (int)&v7[v10 + 4];
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v11;
  *(_DWORD *)(a1 + 8) = &v7[4 * v6];
}


//======================================================================
// void std::vector<float,std::allocator<float>>::_M_emplace_back_aux<float const&>(float const&)
// address: 0x002B5E7C   size: 0x7A (122 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIfSaIfEE19_M_emplace_back_auxIJRKfEEEvDpOT_'
void __fastcall std::vector<float>::_M_emplace_back_aux<float const&>(int a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  unsigned int v6; // r6
  char *v7; // r5
  char *v8; // r3
  int v9; // r3
  int v10; // r7
  int v11; // r7

  v4 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x3FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x3FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x3FFFFFFF;
  }
LABEL_8:
  v7 = (char *)sub_2B5E34(v6);
LABEL_9:
  v8 = &v7[4 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2)];
  if ( v8 != nullptr )
    *(_DWORD *)v8 = *a2;
  v9 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  v10 = 4 * v9;
  if ( v9 != 0 )
    j_memmove(v7, *(const void **)a1, 4 * v9);
  v11 = (int)&v7[v10 + 4];
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v11;
  *(_DWORD *)(a1 + 8) = &v7[4 * v6];
}


//======================================================================
// void std::vector<tinyobj::vertex_index,std::allocator<tinyobj::vertex_index>>::_M_emplace_back_aux<tinyobj::vertex_index const&>(tinyobj::vertex_index const&)
// address: 0x002B6208   size: 0xAE (174 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIN7tinyobj12vertex_indexESaIS1_EE19_M_emplace_back_auxIJRKS1_EEEvDpOT_'
void __fastcall std::vector<tinyobj::vertex_index>::_M_emplace_back_aux<tinyobj::vertex_index const&>(
        int *a1,
        _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  _DWORD *v7; // r5
  _DWORD *v8; // r3
  char *v9; // r1
  char *v10; // r0
  _DWORD *v11; // r2
  char *i; // r3
  unsigned int v13; // r7

  v4 = -1431655765 * ((a1[1] - *a1) >> 2);
  if ( v4 != 0 )
  {
    v5 = 1431655766 * ((a1[1] - *a1) >> 2);
    v6 = 357913941;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x15555555 )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 357913941;
  }
LABEL_8:
  v7 = (_DWORD *)operator new(12 * v6);
LABEL_9:
  v8 = &v7[(a1[1] - *a1) >> 2];
  if ( v8 != nullptr )
  {
    *v8 = *a2;
    v8[1] = a2[1];
    v8[2] = a2[2];
  }
  v9 = (char *)*a1;
  v10 = (char *)a1[1];
  v11 = v7;
  for ( i = (char *)*a1; i != v10; i += 12 )
  {
    if ( v11 != nullptr )
    {
      *v11 = *(_DWORD *)i;
      v11[1] = *((_DWORD *)i + 1);
      v11[2] = *((_DWORD *)i + 2);
    }
    v11 += 3;
  }
  v13 = (unsigned int)&v7[3 * ((-1431655764 * ((unsigned int)(i - v9) >> 2)) >> 2) + 3];
  if ( *a1 != 0 )
    operator delete((void *)*a1);
  *a1 = (int)v7;
  a1[1] = v13;
  a1[2] = (int)&v7[3 * v6];
}


//======================================================================
// void std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(std::string const&)
// address: 0x002B62C4   size: 0xAC (172 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorISsSaISsEE19_M_emplace_back_auxIJRKSsEEEvDpOT_'
__int64 __fastcall std::vector<std::string>::_M_emplace_back_aux<std::string const&>(int *a1, int a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r7
  _DWORD *v7; // r5
  _DWORD *v8; // r0
  char *v9; // r0
  char *v10; // r6
  _DWORD *v11; // r1
  char *i; // r3
  _DWORD *v13; // r6
  __int64 v15; // [sp+0h] [bp-Ch]

  v4 = (a1[1] - *a1) >> 2;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x3FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x3FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x3FFFFFFF;
  }
LABEL_8:
  v7 = (_DWORD *)operator new(4 * v6);
LABEL_9:
  v8 = &v7[(a1[1] - *a1) >> 2];
  if ( v8 != nullptr )
    sub_3BEB1C(v8, a2);
  v9 = (char *)*a1;
  v10 = (char *)a1[1];
  v11 = v7;
  for ( i = (char *)*a1; i != v10; i += 4 )
  {
    if ( v11 != nullptr )
    {
      *v11 = *(_DWORD *)i;
      *(_DWORD *)i = &byte_55FB88;
    }
    ++v11;
  }
  LODWORD(v15) = &v7[((unsigned int)(i - v9) >> 2) + 1];
  v13 = (_DWORD *)*a1;
  HIDWORD(v15) = a1[1];
  while ( v13 != (_DWORD *)HIDWORD(v15) )
    sub_3BDF80(v13++);
  if ( *a1 != 0 )
    operator delete((void *)*a1);
  *a1 = (int)v7;
  a1[2] = (int)&v7[v6];
  a1[1] = v15;
  return v15;
}


//======================================================================
// void std::vector<std::vector<tinyobj::vertex_index,std::allocator<tinyobj::vertex_index>>,std::allocator<std::vector<tinyobj::vertex_index,std::allocator<tinyobj::vertex_index>>>>::_M_emplace_back_aux<std::vector<tinyobj::vertex_index,std::allocator<tinyobj::vertex_index>> const&>(std::vector<tinyobj::vertex_index,std::allocator<tinyobj::vertex_index>> const&)
// address: 0x002B6ADC   size: 0xCC (204 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIS_IN7tinyobj12vertex_indexESaIS1_EESaIS3_EE19_M_emplace_back_auxIJRKS3_EEEvDpOT_'
__int64 __fastcall std::vector<std::vector<tinyobj::vertex_index>>::_M_emplace_back_aux<std::vector<tinyobj::vertex_index> const&>(
        __int64 a1)
{
  int *v1; // r4
  unsigned int v2; // r2
  unsigned int v3; // r3
  int v4; // r6
  _DWORD *v5; // r5
  void **v6; // r0
  _DWORD *v7; // r3
  char *i; // r2
  int v9; // r12
  int v10; // r12
  unsigned int v11; // r7
  __int64 v13; // [sp+0h] [bp-Ch]

  v13 = a1;
  v1 = (int *)a1;
  v2 = -1431655765 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2);
  if ( v2 != 0 )
  {
    v3 = 1431655766 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2);
    v4 = 357913941;
    if ( 2 * v2 < v2 )
    {
LABEL_8:
      v5 = (_DWORD *)operator new(12 * v4);
      goto LABEL_9;
    }
  }
  else
  {
    v3 = 1;
  }
  v4 = v3;
  if ( v3 > 0x15555555 )
  {
    v4 = 357913941;
    goto LABEL_8;
  }
  v5 = nullptr;
  if ( v3 != 0 )
    goto LABEL_8;
LABEL_9:
  __gnu_cxx::new_allocator<std::vector<tinyobj::vertex_index>>::construct<std::vector<tinyobj::vertex_index><std::vector<tinyobj::vertex_index> const&>>(
    v1,
    &v5[(v1[1] - *v1) >> 2],
    (char **)HIDWORD(v13));
  v6 = (void **)*v1;
  v7 = v5;
  HIDWORD(v13) = v1[1];
  for ( i = (char *)*v1; i != (char *)HIDWORD(v13); i += 12 )
  {
    if ( v7 != nullptr )
    {
      v7[1] = 0;
      v7[2] = 0;
      *v7 = 0;
      *v7 = *(_DWORD *)i;
      *(_DWORD *)i = 0;
      v9 = v7[1];
      v7[1] = *((_DWORD *)i + 1);
      *((_DWORD *)i + 1) = v9;
      v10 = v7[2];
      v7[2] = *((_DWORD *)i + 2);
      *((_DWORD *)i + 2) = v10;
    }
    v7 += 3;
  }
  v11 = (unsigned int)&v5[3 * ((-1431655764 * ((unsigned int)(i - (char *)v6) >> 2)) >> 2) + 3];
  std::_Destroy_aux<false>::__destroy<std::vector<tinyobj::vertex_index> *>((void **)*v1, (void **)v1[1]);
  if ( *v1 != 0 )
    operator delete((void *)*v1);
  *v1 = (int)v5;
  v1[1] = v11;
  v1[2] = (int)&v5[3 * v4];
  return v13;
}


//======================================================================
// void std::vector<tinyobj::material_t,std::allocator<tinyobj::material_t>>::_M_emplace_back_aux<tinyobj::material_t const&>(tinyobj::material_t const&)
// address: 0x002B73F8   size: 0xAC (172 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIN7tinyobj10material_tESaIS1_EE19_M_emplace_back_auxIJRKS1_EEEvDpOT_'
__int64 __fastcall std::vector<tinyobj::material_t>::_M_emplace_back_aux<tinyobj::material_t const&>(
        int a1,
        const tinyobj::material_t *a2)
{
  unsigned int v3; // r2
  unsigned int v4; // r3
  int v5; // r7
  _DWORD *v6; // r5
  tinyobj::material_t *v7; // r0
  _DWORD *v8; // r6
  _DWORD *v9; // r0
  tinyobj::material_t *v10; // r6
  _DWORD *v12; // [sp+0h] [bp-Ch]
  __int64 v13; // [sp+0h] [bp-Ch]

  v3 = -286331153 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 3);
  if ( v3 != 0 )
  {
    v4 = -572662306 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 3);
    v5 = 35791394;
    if ( 2 * v3 < v3 )
      goto LABEL_8;
  }
  else
  {
    v4 = 1;
  }
  v5 = v4;
  if ( v4 <= 0x2222222 )
  {
    v6 = nullptr;
    if ( v4 == 0 )
      goto LABEL_9;
  }
  else
  {
    v5 = 35791394;
  }
LABEL_8:
  v6 = (_DWORD *)operator new(120 * v5);
LABEL_9:
  v7 = (tinyobj::material_t *)&v6[2 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 3)];
  if ( v7 != nullptr )
    tinyobj::material_t::material_t(v7, a2);
  v8 = *(_DWORD **)a1;
  v9 = v6;
  v12 = *(_DWORD **)(a1 + 4);
  while ( 1 )
  {
    HIDWORD(v13) = v9 + 30;
    if ( v8 == v12 )
      break;
    std::_Construct<tinyobj::material_t,tinyobj::material_t>(v9, v8);
    v8 += 30;
    v9 = (_DWORD *)HIDWORD(v13);
  }
  v10 = *(tinyobj::material_t **)a1;
  LODWORD(v13) = *(_DWORD *)(a1 + 4);
  while ( v10 != (tinyobj::material_t *)v13 )
  {
    tinyobj::material_t::~material_t(v10);
    v10 = (tinyobj::material_t *)((char *)v10 + 120);
  }
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v6;
  *(_DWORD *)(a1 + 8) = &v6[30 * v5];
  *(_DWORD *)(a1 + 4) = HIDWORD(v13);
  return v13;
}


//======================================================================
// void std::vector<tinyobj::shape_t,std::allocator<tinyobj::shape_t>>::_M_emplace_back_aux<tinyobj::shape_t const&>(tinyobj::shape_t const&)
// address: 0x002B7B34   size: 0x10E (270 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIN7tinyobj7shape_tESaIS1_EE19_M_emplace_back_auxIJRKS1_EEEvDpOT_'
__int64 __fastcall std::vector<tinyobj::shape_t>::_M_emplace_back_aux<tinyobj::shape_t const&>(int a1, int a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  char *v6; // r7
  tinyobj::shape_t *v7; // r4
  char *v8; // r5
  int v9; // r2
  int v10; // r1
  int v11; // r1
  int v12; // r3
  int v13; // r3
  tinyobj::shape_t *v14; // r4
  tinyobj::shape_t *v15; // r5
  __int64 v17; // [sp+0h] [bp-Ch]
  tinyobj::shape_t *v18; // [sp+4h] [bp-8h]

  v4 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 6;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    LODWORD(v17) = 0x3FFFFFF;
    if ( 2 * v4 < v4 )
    {
LABEL_8:
      v6 = (char *)operator new((_DWORD)v17 << 6);
      goto LABEL_9;
    }
  }
  else
  {
    v5 = 1;
  }
  LODWORD(v17) = v5;
  if ( v5 > 0x3FFFFFF )
  {
    LODWORD(v17) = 0x3FFFFFF;
    goto LABEL_8;
  }
  v6 = nullptr;
  if ( v5 != 0 )
    goto LABEL_8;
LABEL_9:
  __gnu_cxx::new_allocator<tinyobj::shape_t>::construct<tinyobj::shape_t<tinyobj::shape_t const&>>(
    a1,
    (int)&v6[64 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 6)],
    a2);
  v7 = *(tinyobj::shape_t **)a1;
  v8 = v6;
  v18 = *(tinyobj::shape_t **)(a1 + 4);
  while ( v7 != v18 )
  {
    if ( v8 != nullptr )
    {
      *(_DWORD *)v8 = *(_DWORD *)v7;
      *(_DWORD *)v7 = &byte_55FB88;
      std::_Vector_base<float>::_Vector_base((_DWORD *)v8 + 1, (_DWORD *)v7 + 1);
      std::_Vector_base<float>::_Vector_base((_DWORD *)v8 + 4, (_DWORD *)v7 + 4);
      std::_Vector_base<float>::_Vector_base((_DWORD *)v8 + 7, (_DWORD *)v7 + 7);
      v9 = v8 - v6;
      *(_DWORD *)&v6[v9 + 40] = 0;
      *((_DWORD *)v8 + 11) = 0;
      *((_DWORD *)v8 + 12) = 0;
      *((_DWORD *)v8 + 10) = *((_DWORD *)v7 + 10);
      *((_DWORD *)v7 + 10) = 0;
      v10 = *((_DWORD *)v8 + 11);
      *((_DWORD *)v8 + 11) = *((_DWORD *)v7 + 11);
      *((_DWORD *)v7 + 11) = v10;
      v11 = *((_DWORD *)v8 + 12);
      *((_DWORD *)v8 + 12) = *((_DWORD *)v7 + 12);
      *((_DWORD *)v7 + 12) = v11;
      *(_DWORD *)&v6[v9 + 52] = 0;
      *((_DWORD *)v8 + 14) = 0;
      *((_DWORD *)v8 + 15) = 0;
      *((_DWORD *)v8 + 13) = *((_DWORD *)v7 + 13);
      *((_DWORD *)v7 + 13) = 0;
      v12 = *((_DWORD *)v8 + 14);
      *((_DWORD *)v8 + 14) = *((_DWORD *)v7 + 14);
      *((_DWORD *)v7 + 14) = v12;
      v13 = *((_DWORD *)v8 + 15);
      *((_DWORD *)v8 + 15) = *((_DWORD *)v7 + 15);
      *((_DWORD *)v7 + 15) = v13;
    }
    v8 += 64;
    v7 = (tinyobj::shape_t *)((char *)v7 + 64);
  }
  HIDWORD(v17) = v8 + 64;
  v14 = *(tinyobj::shape_t **)a1;
  v15 = *(tinyobj::shape_t **)(a1 + 4);
  while ( v14 != v15 )
  {
    tinyobj::shape_t::~shape_t(v14);
    v14 = (tinyobj::shape_t *)((char *)v14 + 64);
  }
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v6;
  *(_DWORD *)(a1 + 8) = &v6[64 * (_DWORD)v17];
  *(_DWORD *)(a1 + 4) = HIDWORD(v17);
  return v17;
}


//======================================================================
// void std::vector<tagOWorld,std::allocator<tagOWorld>>::_M_emplace_back_aux<tagOWorld const&>(tagOWorld const&)
// address: 0x002BA694   size: 0x8C (140 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorI9tagOWorldSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_'
__int64 __fastcall std::vector<tagOWorld>::_M_emplace_back_aux<tagOWorld const&>(__int64 a1)
{
  int v1; // r4
  unsigned int v2; // r2
  unsigned int v3; // r3
  int v4; // r5
  char *v5; // r6
  char *v6; // r0
  int v7; // r7

  v1 = a1;
  v2 = 438261969 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 4);
  if ( v2 != 0 )
  {
    v3 = 876523938 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 4);
    v4 = 5478274;
    if ( 2 * v2 < v2 )
      goto LABEL_8;
  }
  else
  {
    v3 = 1;
  }
  v4 = v3;
  if ( v3 <= 0x539782 )
  {
    v5 = nullptr;
    if ( v3 == 0 )
      goto LABEL_9;
  }
  else
  {
    v4 = 5478274;
  }
LABEL_8:
  v5 = (char *)operator new(784 * v4);
LABEL_9:
  v6 = &v5[16 * ((*(_DWORD *)(v1 + 4) - *(_DWORD *)v1) >> 4)];
  if ( v6 != nullptr )
    j_memcpy(v6, (const void *)HIDWORD(a1), 0x310u);
  v7 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<tagOWorld>(
         *(void **)v1,
         *(_DWORD *)(v1 + 4),
         v5)
     + 784;
  if ( *(_DWORD *)v1 != 0 )
    operator delete(*(void **)v1);
  *(_DWORD *)v1 = v5;
  *(_DWORD *)(v1 + 4) = v7;
  *(_DWORD *)(v1 + 8) = &v5[784 * v4];
  return a1;
}


//======================================================================
// void std::vector<WorldDesc,std::allocator<WorldDesc>>::_M_emplace_back_aux<WorldDesc const&>(WorldDesc const&)
// address: 0x002BA7EC   size: 0x9E (158 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorI9WorldDescSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_'
__int64 __fastcall std::vector<WorldDesc>::_M_emplace_back_aux<WorldDesc const&>(int a1, const WorldDesc *a2)
{
  unsigned int v3; // r2
  unsigned int v4; // r3
  int v5; // r7
  _DWORD *v6; // r5
  WorldDesc *v7; // r0
  int v8; // r6
  _DWORD *v9; // r0
  __int64 v11; // [sp+0h] [bp-Ch]

  v3 = -373475417 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 3);
  if ( v3 != 0 )
  {
    v4 = -746950834 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 3);
    v5 = 23342213;
    if ( 2 * v3 < v3 )
      goto LABEL_8;
  }
  else
  {
    v4 = 1;
  }
  v5 = v4;
  if ( v4 <= 0x1642C85 )
  {
    v6 = nullptr;
    if ( v4 == 0 )
      goto LABEL_9;
  }
  else
  {
    v5 = 23342213;
  }
LABEL_8:
  v6 = (_DWORD *)operator new(184 * v5);
LABEL_9:
  v7 = (WorldDesc *)&v6[2 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 3)];
  if ( v7 != nullptr )
    WorldDesc::WorldDesc(v7, a2);
  v8 = *(_DWORD *)a1;
  v9 = v6;
  LODWORD(v11) = *(_DWORD *)(a1 + 4);
  while ( 1 )
  {
    HIDWORD(v11) = v9 + 46;
    if ( v8 == (_DWORD)v11 )
      break;
    std::_Construct<WorldDesc<WorldDesc>>(v9, v8);
    v8 += 184;
    v9 = (_DWORD *)HIDWORD(v11);
  }
  std::_Destroy_aux<false>::__destroy<WorldDesc *>(*(WorldDesc **)a1, *(WorldDesc **)(a1 + 4));
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v6;
  *(_DWORD *)(a1 + 4) = HIDWORD(v11);
  *(_DWORD *)(a1 + 8) = &v6[46 * v5];
  return v11;
}


//======================================================================
// void std::vector<ChunkIndex,std::allocator<ChunkIndex>>::emplace_back<ChunkIndex>(ChunkIndex &&)
// address: 0x002BB72C   size: 0x7A (122 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorI10ChunkIndexSaIS0_EE12emplace_backIJS0_EEEvDpOT_'
void __fastcall std::vector<ChunkIndex>::emplace_back<ChunkIndex>(int a1, _DWORD *a2)
{
  _DWORD *v3; // r3
  unsigned int v5; // r0
  int v6; // r7
  unsigned int v7; // r5
  _DWORD *v8; // r3
  _DWORD *v9; // r6

  v3 = *(_DWORD **)(a1 + 4);
  if ( v3 == *(_DWORD **)(a1 + 8) )
  {
    v5 = std::vector<ChunkIndex>::_M_check_len((_DWORD *)a1, 1u, (int)"vector::_M_emplace_back_aux");
    v6 = 8 * v5;
    if ( v5 != 0 )
    {
      if ( v5 > 0x1FFFFFFF )
        sub_3BCEB4(v5);
      v5 = operator new(8 * v5);
    }
    v7 = v5;
    v8 = (_DWORD *)(v5 + 8 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 3));
    if ( v8 != nullptr )
    {
      *v8 = *a2;
      v8[1] = a2[1];
    }
    v9 = sub_2BB5B8(*(char **)a1, *(char **)(a1 + 4), (_DWORD *)v5);
    sub_2BB5AC(*(void **)a1);
    *(_DWORD *)a1 = v7;
    *(_DWORD *)(a1 + 4) = v9 + 2;
    *(_DWORD *)(a1 + 8) = v7 + v6;
  }
  else
  {
    if ( v3 != nullptr )
    {
      *v3 = *a2;
      v3[1] = a2[1];
    }
    *(_DWORD *)(a1 + 4) += 8;
  }
}


//======================================================================
// void std::vector<WCoord,std::allocator<WCoord>>::_M_emplace_back_aux<WCoord const&>(WCoord const&)
// address: 0x002BCB70   size: 0xAE (174 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorI6WCoordSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_'
void __fastcall std::vector<WCoord>::_M_emplace_back_aux<WCoord const&>(int *a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  _DWORD *v7; // r5
  _DWORD *v8; // r3
  char *v9; // r1
  char *v10; // r0
  _DWORD *v11; // r2
  char *i; // r3
  unsigned int v13; // r7

  v4 = -1431655765 * ((a1[1] - *a1) >> 2);
  if ( v4 != 0 )
  {
    v5 = 1431655766 * ((a1[1] - *a1) >> 2);
    v6 = 357913941;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x15555555 )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 357913941;
  }
LABEL_8:
  v7 = (_DWORD *)operator new(12 * v6);
LABEL_9:
  v8 = &v7[(a1[1] - *a1) >> 2];
  if ( v8 != nullptr )
  {
    *v8 = *a2;
    v8[1] = a2[1];
    v8[2] = a2[2];
  }
  v9 = (char *)*a1;
  v10 = (char *)a1[1];
  v11 = v7;
  for ( i = (char *)*a1; i != v10; i += 12 )
  {
    if ( v11 != nullptr )
    {
      *v11 = *(_DWORD *)i;
      v11[1] = *((_DWORD *)i + 1);
      v11[2] = *((_DWORD *)i + 2);
    }
    v11 += 3;
  }
  v13 = (unsigned int)&v7[3 * ((-1431655764 * ((unsigned int)(i - v9) >> 2)) >> 2) + 3];
  if ( *a1 != 0 )
    operator delete((void *)*a1);
  *a1 = (int)v7;
  a1[1] = v13;
  a1[2] = (int)&v7[3 * v6];
}


//======================================================================
// void std::vector<ClientActor *,std::allocator<ClientActor *>>::_M_emplace_back_aux<ClientActor * const&>(ClientActor * const&)
// address: 0x002BDD74   size: 0x7A (122 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIP11ClientActorSaIS1_EE19_M_emplace_back_auxIJRKS1_EEEvDpOT_'
void __fastcall std::vector<ClientActor *>::_M_emplace_back_aux<ClientActor * const&>(int a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  char *v7; // r5
  char *v8; // r3
  int v9; // r3
  int v10; // r7
  int v11; // r7

  v4 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x3FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x3FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x3FFFFFFF;
  }
LABEL_8:
  v7 = (char *)operator new(4 * v6);
LABEL_9:
  v8 = &v7[4 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2)];
  if ( v8 != nullptr )
    *(_DWORD *)v8 = *a2;
  v9 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  v10 = 4 * v9;
  if ( v9 != 0 )
    j_memmove(v7, *(const void **)a1, 4 * v9);
  v11 = (int)&v7[v10 + 4];
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v11;
  *(_DWORD *)(a1 + 8) = &v7[4 * v6];
}


//======================================================================
// void std::vector<SolidBlockMaterial::ItemMaterial,std::allocator<SolidBlockMaterial::ItemMaterial>>::_M_emplace_back_aux<SolidBlockMaterial::ItemMaterial const&>(SolidBlockMaterial::ItemMaterial const&)
// address: 0x002BEDB0   size: 0x80 (128 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIN18SolidBlockMaterial12ItemMaterialESaIS1_EE19_M_emplace_back_auxIJRKS1_EEEvDpOT_'
void __fastcall std::vector<SolidBlockMaterial::ItemMaterial>::_M_emplace_back_aux<SolidBlockMaterial::ItemMaterial const&>(
        int a1,
        _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  char *v7; // r5
  char *v8; // r2
  int v9; // r1
  int v10; // r3
  int v11; // r3
  int v12; // r7
  int v13; // r7

  v4 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 4;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0xFFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0xFFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0xFFFFFFF;
  }
LABEL_8:
  v7 = (char *)operator new(16 * v6);
LABEL_9:
  if ( &v7[16 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 4)] != nullptr )
  {
    v8 = &v7[16 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 4)];
    v9 = a2[1];
    v10 = a2[2];
    *(_DWORD *)v8 = *a2;
    *((_DWORD *)v8 + 1) = v9;
    *((_DWORD *)v8 + 2) = v10;
    *((_DWORD *)v8 + 3) = a2[3];
  }
  v11 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 4;
  v12 = 16 * v11;
  if ( v11 != 0 )
    j_memmove(v7, *(const void **)a1, 16 * v11);
  v13 = (int)&v7[v12 + 16];
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v13;
  *(_DWORD *)(a1 + 8) = &v7[16 * v6];
}


//======================================================================
// void std::vector<BaseItemMesh *,std::allocator<BaseItemMesh *>>::_M_emplace_back_aux<BaseItemMesh * const&>(BaseItemMesh * const&)
// address: 0x002C0158   size: 0x7A (122 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIP12BaseItemMeshSaIS1_EE19_M_emplace_back_auxIJRKS1_EEEvDpOT_'
void __fastcall std::vector<BaseItemMesh *>::_M_emplace_back_aux<BaseItemMesh * const&>(int a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  char *v7; // r5
  char *v8; // r3
  int v9; // r3
  int v10; // r7
  int v11; // r7

  v4 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x3FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x3FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x3FFFFFFF;
  }
LABEL_8:
  v7 = (char *)operator new(4 * v6);
LABEL_9:
  v8 = &v7[4 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2)];
  if ( v8 != nullptr )
    *(_DWORD *)v8 = *a2;
  v9 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  v10 = 4 * v9;
  if ( v9 != 0 )
    j_memmove(v7, *(const void **)a1, 4 * v9);
  v11 = (int)&v7[v10 + 4];
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v11;
  *(_DWORD *)(a1 + 8) = &v7[4 * v6];
}


//======================================================================
// void std::vector<Ogre::Texture *,std::allocator<Ogre::Texture *>>::_M_emplace_back_aux<Ogre::Texture *>(Ogre::Texture * &&)
// address: 0x002C2764   size: 0x7A (122 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIPN4Ogre7TextureESaIS2_EE19_M_emplace_back_auxIJS2_EEEvDpOT_'
void __fastcall std::vector<Ogre::Texture *>::_M_emplace_back_aux<Ogre::Texture *>(int a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  char *v7; // r5
  char *v8; // r3
  int v9; // r3
  int v10; // r7
  int v11; // r7

  v4 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x3FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x3FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x3FFFFFFF;
  }
LABEL_8:
  v7 = (char *)operator new(4 * v6);
LABEL_9:
  v8 = &v7[4 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2)];
  if ( v8 != nullptr )
    *(_DWORD *)v8 = *a2;
  v9 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  v10 = 4 * v9;
  if ( v9 != 0 )
    j_memmove(v7, *(const void **)a1, 4 * v9);
  v11 = (int)&v7[v10 + 4];
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v11;
  *(_DWORD *)(a1 + 8) = &v7[4 * v6];
}


//======================================================================
// void std::vector<Ogre::Texture *,std::allocator<Ogre::Texture *>>::emplace_back<Ogre::Texture *>(Ogre::Texture * &&)
// address: 0x002C27E4   size: 0x20 (32 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIPN4Ogre7TextureESaIS2_EE12emplace_backIJS2_EEEvDpOT_'
void __fastcall std::vector<Ogre::Texture *>::emplace_back<Ogre::Texture *>(int a1, _DWORD *a2)
{
  _DWORD *v2; // r3

  v2 = *(_DWORD **)(a1 + 4);
  if ( v2 == *(_DWORD **)(a1 + 8) )
  {
    std::vector<Ogre::Texture *>::_M_emplace_back_aux<Ogre::Texture *>(a1, a2);
  }
  else
  {
    if ( v2 != nullptr )
      *v2 = *a2;
    *(_DWORD *)(a1 + 4) += 4;
  }
}


//======================================================================
// void std::vector<Ogre::RenderableObject *,std::allocator<Ogre::RenderableObject *>>::_M_emplace_back_aux<Ogre::RenderableObject *>(Ogre::RenderableObject * &&)
// address: 0x002C2A9C   size: 0x7A (122 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIPN4Ogre16RenderableObjectESaIS2_EE19_M_emplace_back_auxIJS2_EEEvDpOT_'
void __fastcall std::vector<Ogre::RenderableObject *>::_M_emplace_back_aux<Ogre::RenderableObject *>(
        int a1,
        _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  char *v7; // r5
  char *v8; // r3
  int v9; // r3
  int v10; // r7
  int v11; // r7

  v4 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x3FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x3FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x3FFFFFFF;
  }
LABEL_8:
  v7 = (char *)operator new(4 * v6);
LABEL_9:
  v8 = &v7[4 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2)];
  if ( v8 != nullptr )
    *(_DWORD *)v8 = *a2;
  v9 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  v10 = 4 * v9;
  if ( v9 != 0 )
    j_memmove(v7, *(const void **)a1, 4 * v9);
  v11 = (int)&v7[v10 + 4];
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v11;
  *(_DWORD *)(a1 + 8) = &v7[4 * v6];
}


//======================================================================
// void std::vector<ActorBoss *,std::allocator<ActorBoss *>>::_M_emplace_back_aux<ActorBoss * const&>(ActorBoss * const&)
// address: 0x002C777C   size: 0x7A (122 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIP9ActorBossSaIS1_EE19_M_emplace_back_auxIJRKS1_EEEvDpOT_'
void __fastcall std::vector<ActorBoss *>::_M_emplace_back_aux<ActorBoss * const&>(int a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  char *v7; // r5
  char *v8; // r3
  int v9; // r3
  int v10; // r7
  int v11; // r7

  v4 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x3FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x3FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x3FFFFFFF;
  }
LABEL_8:
  v7 = (char *)operator new(4 * v6);
LABEL_9:
  v8 = &v7[4 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2)];
  if ( v8 != nullptr )
    *(_DWORD *)v8 = *a2;
  v9 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  v10 = 4 * v9;
  if ( v9 != 0 )
    j_memmove(v7, *(const void **)a1, 4 * v9);
  v11 = (int)&v7[v10 + 4];
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v11;
  *(_DWORD *)(a1 + 8) = &v7[4 * v6];
}


//======================================================================
// void std::vector<ClientPlayer *,std::allocator<ClientPlayer *>>::_M_emplace_back_aux<ClientPlayer * const&>(ClientPlayer * const&)
// address: 0x002C8264   size: 0x6A (106 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIP12ClientPlayerSaIS1_EE19_M_emplace_back_auxIJRKS1_EEEvDpOT_'
void __fastcall std::vector<ClientPlayer *>::_M_emplace_back_aux<ClientPlayer * const&>(int a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r5
  char *v7; // r6
  char *v8; // r3
  int v9; // r7

  v4 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x3FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x3FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x3FFFFFFF;
  }
LABEL_8:
  v7 = (char *)operator new(4 * v6);
LABEL_9:
  v8 = &v7[4 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2)];
  if ( v8 != nullptr )
    *(_DWORD *)v8 = *a2;
  v9 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<ClientPlayer *>(
         *(void **)a1,
         *(_DWORD *)(a1 + 4),
         v7);
  sub_2C6EC2(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v9 + 4;
  *(_DWORD *)(a1 + 8) = &v7[4 * v6];
}


//======================================================================
// void std::vector<tagOWBlock,std::allocator<tagOWBlock>>::_M_emplace_back_aux<tagOWBlock const&>(tagOWBlock const&)
// address: 0x002CA7A4   size: 0x9E (158 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorI10tagOWBlockSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_'
__int64 __fastcall std::vector<tagOWBlock>::_M_emplace_back_aux<tagOWBlock const&>(__int64 a1)
{
  int v1; // r4
  unsigned int v2; // r2
  unsigned int v3; // r3
  int v4; // r5
  char *v5; // r6
  char *v6; // r0
  int v7; // r7
  int v8; // r7
  __int64 v10; // [sp+0h] [bp-Ch]

  v10 = a1;
  v1 = a1;
  v2 = -1072694271 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 5);
  if ( v2 != 0 )
  {
    v3 = -2145388542 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 5);
    v4 = 130944;
    if ( 2 * v2 < v2 )
      goto LABEL_8;
  }
  else
  {
    v3 = 1;
  }
  v4 = v3;
  if ( v3 <= 0x1FF80 )
  {
    v5 = nullptr;
    if ( v3 == 0 )
      goto LABEL_9;
  }
  else
  {
    v4 = 130944;
  }
LABEL_8:
  v5 = (char *)operator new(32800 * v4);
LABEL_9:
  v6 = &v5[32 * ((*(_DWORD *)(v1 + 4) - *(_DWORD *)v1) >> 5)];
  if ( v6 != nullptr )
    j_memcpy(v6, (const void *)HIDWORD(v10), 0x8020u);
  v7 = 33521696 * ((*(_DWORD *)(v1 + 4) - *(_DWORD *)v1) >> 5);
  HIDWORD(v10) = -33521664 * ((*(_DWORD *)(v1 + 4) - *(_DWORD *)v1) >> 5);
  if ( -1072694271 * ((*(_DWORD *)(v1 + 4) - *(_DWORD *)v1) >> 5) != 0 )
    j_memmove(v5, *(const void **)v1, 32 * ((*(_DWORD *)(v1 + 4) - *(_DWORD *)v1) >> 5));
  v8 = (int)&v5[v7 + 32800 + HIDWORD(v10)];
  if ( *(_DWORD *)v1 != 0 )
    operator delete(*(void **)v1);
  *(_DWORD *)v1 = v5;
  *(_DWORD *)(v1 + 4) = v8;
  *(_DWORD *)(v1 + 8) = &v5[32800 * v4];
  return v10;
}


//======================================================================
// void std::vector<tagGridChg,std::allocator<tagGridChg>>::_M_emplace_back_aux<tagGridChg const&>(tagGridChg const&)
// address: 0x002CAE94   size: 0x7A (122 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorI10tagGridChgSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_'
__int64 __fastcall std::vector<tagGridChg>::_M_emplace_back_aux<tagGridChg const&>(__int64 a1)
{
  int v1; // r4
  unsigned int v2; // r2
  unsigned int v3; // r3
  int v4; // r5
  char *v5; // r6
  int v6; // r3
  char *v7; // r3
  int v8; // r2
  int v9; // r7
  int v10; // r2
  int v11; // r7
  int v12; // r2
  int v13; // r7

  v1 = a1;
  v2 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 5;
  if ( v2 != 0 )
  {
    v3 = 2 * v2;
    v4 = 0x7FFFFFF;
    if ( 2 * v2 < v2 )
      goto LABEL_8;
  }
  else
  {
    v3 = 1;
  }
  v4 = v3;
  if ( v3 <= 0x7FFFFFF )
  {
    v5 = nullptr;
    if ( v3 == 0 )
      goto LABEL_9;
  }
  else
  {
    v4 = 0x7FFFFFF;
  }
LABEL_8:
  v5 = (char *)operator new(32 * v4);
LABEL_9:
  v6 = *(_DWORD *)(v1 + 4);
  if ( &v5[32 * ((v6 - *(_DWORD *)v1) >> 5)] != nullptr )
  {
    v7 = &v5[32 * ((v6 - *(_DWORD *)v1) >> 5)];
    v8 = *(_DWORD *)(HIDWORD(a1) + 4);
    v9 = *(_DWORD *)(HIDWORD(a1) + 8);
    *(_DWORD *)v7 = *(_DWORD *)HIDWORD(a1);
    *((_DWORD *)v7 + 1) = v8;
    *((_DWORD *)v7 + 2) = v9;
    v7 += 12;
    v10 = *(_DWORD *)(HIDWORD(a1) + 16);
    v11 = *(_DWORD *)(HIDWORD(a1) + 20);
    *(_DWORD *)v7 = *(_DWORD *)(HIDWORD(a1) + 12);
    *((_DWORD *)v7 + 1) = v10;
    *((_DWORD *)v7 + 2) = v11;
    v7 += 12;
    v12 = *(_DWORD *)(HIDWORD(a1) + 28);
    *(_DWORD *)v7 = *(_DWORD *)(HIDWORD(a1) + 24);
    *((_DWORD *)v7 + 1) = v12;
  }
  v13 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<tagGridChg>(
          *(void **)v1,
          *(_DWORD *)(v1 + 4),
          v5)
      + 32;
  if ( *(_DWORD *)v1 != 0 )
    operator delete(*(void **)v1);
  *(_DWORD *)v1 = v5;
  *(_DWORD *)(v1 + 4) = v13;
  *(_DWORD *)(v1 + 8) = &v5[32 * v4];
  return a1;
}


//======================================================================
// void std::vector<AchievementInfo,std::allocator<AchievementInfo>>::_M_emplace_back_aux<AchievementInfo const&>(AchievementInfo const&)
// address: 0x002CB874   size: 0x80 (128 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorI15AchievementInfoSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_'
void __fastcall std::vector<AchievementInfo>::_M_emplace_back_aux<AchievementInfo const&>(int a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  char *v7; // r5
  char *v8; // r2
  int v9; // r1
  int v10; // r3
  int v11; // r3
  int v12; // r7
  int v13; // r7

  v4 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 4;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0xFFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0xFFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0xFFFFFFF;
  }
LABEL_8:
  v7 = (char *)operator new(16 * v6);
LABEL_9:
  if ( &v7[16 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 4)] != nullptr )
  {
    v8 = &v7[16 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 4)];
    v9 = a2[1];
    v10 = a2[2];
    *(_DWORD *)v8 = *a2;
    *((_DWORD *)v8 + 1) = v9;
    *((_DWORD *)v8 + 2) = v10;
    *((_DWORD *)v8 + 3) = a2[3];
  }
  v11 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 4;
  v12 = 16 * v11;
  if ( v11 != 0 )
    j_memmove(v7, *(const void **)a1, 16 * v11);
  v13 = (int)&v7[v12 + 16];
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v13;
  *(_DWORD *)(a1 + 8) = &v7[16 * v6];
}


//======================================================================
// void std::vector<GameStatistics,std::allocator<GameStatistics>>::_M_emplace_back_aux<GameStatistics const&>(GameStatistics const&)
// address: 0x002CB9A8   size: 0x9A (154 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorI14GameStatisticsSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_'
void __fastcall std::vector<GameStatistics>::_M_emplace_back_aux<GameStatistics const&>(int a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  char *v7; // r5
  char *v8; // r3
  int v9; // r2
  int v10; // r7
  int v11; // r7

  v4 = -1431655765 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2);
  if ( v4 != 0 )
  {
    v5 = 1431655766 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2);
    v6 = 357913941;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x15555555 )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 357913941;
  }
LABEL_8:
  v7 = (char *)operator new(12 * v6);
LABEL_9:
  v8 = &v7[4 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2)];
  if ( v8 != nullptr )
  {
    *(_DWORD *)v8 = *a2;
    *((_DWORD *)v8 + 1) = a2[1];
    *((_DWORD *)v8 + 2) = a2[2];
  }
  v9 = *(_DWORD *)(a1 + 4);
  v10 = -1431655765 * ((v9 - *(_DWORD *)a1) >> 2);
  if ( v10 != 0 )
    j_memmove(v7, *(const void **)a1, 4 * ((v9 - *(_DWORD *)a1) >> 2));
  v11 = (int)&v7[12 * v10 + 12];
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v11;
  *(_DWORD *)(a1 + 8) = &v7[12 * v6];
}


//======================================================================
// void std::vector<SectionSubMesh *,std::allocator<SectionSubMesh *>>::_M_emplace_back_aux<SectionSubMesh * const&>(SectionSubMesh * const&)
// address: 0x002CDE64   size: 0x7A (122 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIP14SectionSubMeshSaIS1_EE19_M_emplace_back_auxIJRKS1_EEEvDpOT_'
void __fastcall std::vector<SectionSubMesh *>::_M_emplace_back_aux<SectionSubMesh * const&>(int a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  char *v7; // r5
  char *v8; // r3
  int v9; // r3
  int v10; // r7
  int v11; // r7

  v4 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x3FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x3FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x3FFFFFFF;
  }
LABEL_8:
  v7 = (char *)operator new(4 * v6);
LABEL_9:
  v8 = &v7[4 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2)];
  if ( v8 != nullptr )
    *(_DWORD *)v8 = *a2;
  v9 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  v10 = 4 * v9;
  if ( v9 != 0 )
    j_memmove(v7, *(const void **)a1, 4 * v9);
  v11 = (int)&v7[v10 + 4];
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v11;
  *(_DWORD *)(a1 + 8) = &v7[4 * v6];
}


//======================================================================
// void std::vector<Chunk *,std::allocator<Chunk *>>::_M_emplace_back_aux<Chunk * const&>(Chunk * const&)
// address: 0x002CEFA8   size: 0x7A (122 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIP5ChunkSaIS1_EE19_M_emplace_back_auxIJRKS1_EEEvDpOT_'
void __fastcall std::vector<Chunk *>::_M_emplace_back_aux<Chunk * const&>(int a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  char *v7; // r5
  char *v8; // r3
  int v9; // r3
  int v10; // r7
  int v11; // r7

  v4 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x3FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x3FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x3FFFFFFF;
  }
LABEL_8:
  v7 = (char *)operator new(4 * v6);
LABEL_9:
  v8 = &v7[4 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2)];
  if ( v8 != nullptr )
    *(_DWORD *)v8 = *a2;
  v9 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  v10 = 4 * v9;
  if ( v9 != 0 )
    j_memmove(v7, *(const void **)a1, 4 * v9);
  v11 = (int)&v7[v10 + 4];
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v11;
  *(_DWORD *)(a1 + 8) = &v7[4 * v6];
}


//======================================================================
// void std::vector<Ogre::RenderableEffectInfo,std::allocator<Ogre::RenderableEffectInfo>>::_M_emplace_back_aux<Ogre::RenderableEffectInfo const&>(Ogre::RenderableEffectInfo const&)
// address: 0x002CF028   size: 0x7E (126 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIN4Ogre20RenderableEffectInfoESaIS1_EE19_M_emplace_back_auxIJRKS1_EEEvDpOT_'
void __fastcall std::vector<Ogre::RenderableEffectInfo>::_M_emplace_back_aux<Ogre::RenderableEffectInfo const&>(
        int a1,
        _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  char *v7; // r5
  char *v8; // r3
  int v9; // r3
  int v10; // r7
  int v11; // r7

  v4 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 3;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x1FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x1FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x1FFFFFFF;
  }
LABEL_8:
  v7 = (char *)operator new(8 * v6);
LABEL_9:
  v8 = &v7[8 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 3)];
  if ( v8 != nullptr )
  {
    *(_DWORD *)v8 = *a2;
    *((_DWORD *)v8 + 1) = a2[1];
  }
  v9 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 3;
  v10 = 8 * v9;
  if ( v9 != 0 )
    j_memmove(v7, *(const void **)a1, 8 * v9);
  v11 = (int)&v7[v10 + 8];
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v11;
  *(_DWORD *)(a1 + 8) = &v7[8 * v6];
}


//======================================================================
// void std::vector<MergeSubMesh,std::allocator<MergeSubMesh>>::_M_emplace_back_aux<MergeSubMesh const&>(MergeSubMesh const&)
// address: 0x002CF0FC   size: 0x9A (154 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorI12MergeSubMeshSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_'
void __fastcall std::vector<MergeSubMesh>::_M_emplace_back_aux<MergeSubMesh const&>(int a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  char *v7; // r5
  char *v8; // r3
  int v9; // r2
  int v10; // r7
  int v11; // r7

  v4 = -1431655765 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2);
  if ( v4 != 0 )
  {
    v5 = 1431655766 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2);
    v6 = 357913941;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x15555555 )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 357913941;
  }
LABEL_8:
  v7 = (char *)operator new(12 * v6);
LABEL_9:
  v8 = &v7[4 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2)];
  if ( v8 != nullptr )
  {
    *(_DWORD *)v8 = *a2;
    *((_DWORD *)v8 + 1) = a2[1];
    *((_DWORD *)v8 + 2) = a2[2];
  }
  v9 = *(_DWORD *)(a1 + 4);
  v10 = -1431655765 * ((v9 - *(_DWORD *)a1) >> 2);
  if ( v10 != 0 )
    j_memmove(v7, *(const void **)a1, 4 * ((v9 - *(_DWORD *)a1) >> 2));
  v11 = (int)&v7[12 * v10 + 12];
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v11;
  *(_DWORD *)(a1 + 8) = &v7[12 * v6];
}


//======================================================================
// void std::vector<SubMeshInfo,std::allocator<SubMeshInfo>>::_M_emplace_back_aux<SubMeshInfo const&>(SubMeshInfo const&)
// address: 0x002CF324   size: 0x9A (154 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorI11SubMeshInfoSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_'
void __fastcall std::vector<SubMeshInfo>::_M_emplace_back_aux<SubMeshInfo const&>(int a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  char *v7; // r5
  char *v8; // r3
  int v9; // r2
  int v10; // r7
  int v11; // r7

  v4 = -1431655765 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2);
  if ( v4 != 0 )
  {
    v5 = 1431655766 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2);
    v6 = 357913941;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x15555555 )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 357913941;
  }
LABEL_8:
  v7 = (char *)operator new(12 * v6);
LABEL_9:
  v8 = &v7[4 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2)];
  if ( v8 != nullptr )
  {
    *(_DWORD *)v8 = *a2;
    *((_DWORD *)v8 + 1) = a2[1];
    *((_DWORD *)v8 + 2) = a2[2];
  }
  v9 = *(_DWORD *)(a1 + 4);
  v10 = -1431655765 * ((v9 - *(_DWORD *)a1) >> 2);
  if ( v10 != 0 )
    j_memmove(v7, *(const void **)a1, 4 * ((v9 - *(_DWORD *)a1) >> 2));
  v11 = (int)&v7[12 * v10 + 12];
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v11;
  *(_DWORD *)(a1 + 8) = &v7[12 * v6];
}


//======================================================================
// void std::vector<ActorBuff,std::allocator<ActorBuff>>::_M_emplace_back_aux<ActorBuff const&>(ActorBuff const&)
// address: 0x002D1A9C   size: 0x80 (128 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorI9ActorBuffSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_'
void __fastcall std::vector<ActorBuff>::_M_emplace_back_aux<ActorBuff const&>(int a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  char *v7; // r5
  char *v8; // r2
  int v9; // r1
  int v10; // r3
  int v11; // r3
  int v12; // r7
  int v13; // r7

  v4 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 4;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0xFFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0xFFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0xFFFFFFF;
  }
LABEL_8:
  v7 = (char *)operator new(16 * v6);
LABEL_9:
  if ( &v7[16 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 4)] != nullptr )
  {
    v8 = &v7[16 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 4)];
    v9 = a2[1];
    v10 = a2[2];
    *(_DWORD *)v8 = *a2;
    *((_DWORD *)v8 + 1) = v9;
    *((_DWORD *)v8 + 2) = v10;
    *((_DWORD *)v8 + 3) = a2[3];
  }
  v11 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 4;
  v12 = 16 * v11;
  if ( v11 != 0 )
    j_memmove(v7, *(const void **)a1, 16 * v11);
  v13 = (int)&v7[v12 + 16];
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v13;
  *(_DWORD *)(a1 + 8) = &v7[16 * v6];
}


//======================================================================
// void std::vector<BuddyChatInfo *,std::allocator<BuddyChatInfo *>>::_M_emplace_back_aux<BuddyChatInfo * const&>(BuddyChatInfo * const&)
// address: 0x002D2368   size: 0x7A (122 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIP13BuddyChatInfoSaIS1_EE19_M_emplace_back_auxIJRKS1_EEEvDpOT_'
void __fastcall std::vector<BuddyChatInfo *>::_M_emplace_back_aux<BuddyChatInfo * const&>(int a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  char *v7; // r5
  char *v8; // r3
  int v9; // r3
  int v10; // r7
  int v11; // r7

  v4 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x3FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x3FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x3FFFFFFF;
  }
LABEL_8:
  v7 = (char *)operator new(4 * v6);
LABEL_9:
  v8 = &v7[4 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2)];
  if ( v8 != nullptr )
    *(_DWORD *)v8 = *a2;
  v9 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  v10 = 4 * v9;
  if ( v9 != 0 )
    j_memmove(v7, *(const void **)a1, 4 * v9);
  v11 = (int)&v7[v10 + 4];
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v11;
  *(_DWORD *)(a1 + 8) = &v7[4 * v6];
}


//======================================================================
// void std::vector<BuddyAchievement,std::allocator<BuddyAchievement>>::_M_emplace_back_aux<BuddyAchievement const&>(BuddyAchievement const&)
// address: 0x002D2464   size: 0x7E (126 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorI16BuddyAchievementSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_'
void __fastcall std::vector<BuddyAchievement>::_M_emplace_back_aux<BuddyAchievement const&>(int a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  char *v7; // r5
  char *v8; // r3
  int v9; // r3
  int v10; // r7
  int v11; // r7

  v4 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 3;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x1FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x1FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x1FFFFFFF;
  }
LABEL_8:
  v7 = (char *)operator new(8 * v6);
LABEL_9:
  v8 = &v7[8 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 3)];
  if ( v8 != nullptr )
  {
    *(_DWORD *)v8 = *a2;
    *((_DWORD *)v8 + 1) = a2[1];
  }
  v9 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 3;
  v10 = 8 * v9;
  if ( v9 != 0 )
    j_memmove(v7, *(const void **)a1, 8 * v9);
  v11 = (int)&v7[v10 + 8];
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v11;
  *(_DWORD *)(a1 + 8) = &v7[8 * v6];
}


//======================================================================
// void std::vector<BuddyChatMsg,std::allocator<BuddyChatMsg>>::_M_emplace_back_aux<BuddyChatMsg const&>(BuddyChatMsg const&)
// address: 0x002D2584   size: 0xE6 (230 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorI12BuddyChatMsgSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_'
__int64 __fastcall std::vector<BuddyChatMsg>::_M_emplace_back_aux<BuddyChatMsg const&>(int *a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  _DWORD *v6; // r7
  _DWORD *v7; // r0
  char *v8; // r0
  _DWORD *v9; // r2
  char *v10; // r12
  char *i; // r3
  _DWORD *v12; // r5
  unsigned int v13; // r6
  __int64 v15; // [sp+0h] [bp-Ch]

  v4 = -1431655765 * ((a1[1] - *a1) >> 2);
  if ( v4 != 0 )
  {
    v5 = 1431655766 * ((a1[1] - *a1) >> 2);
    HIDWORD(v15) = 357913941;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  HIDWORD(v15) = v5;
  if ( v5 <= 0x15555555 )
  {
    v6 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    HIDWORD(v15) = 357913941;
  }
LABEL_8:
  v6 = (_DWORD *)operator new(12 * HIDWORD(v15));
LABEL_9:
  v7 = &v6[(a1[1] - *a1) >> 2];
  if ( v7 != nullptr )
  {
    *v7 = *a2;
    v7[1] = a2[1];
    sub_3BEB1C(v7 + 2, a2 + 2);
  }
  v8 = (char *)*a1;
  v9 = v6;
  v10 = (char *)a1[1];
  for ( i = (char *)*a1; i != v10; i += 12 )
  {
    if ( v9 != nullptr )
    {
      *v9 = *(_DWORD *)i;
      v9[1] = *((_DWORD *)i + 1);
      v9[2] = *((_DWORD *)i + 2);
      *((_DWORD *)i + 2) = &byte_55FB88;
    }
    v9 += 3;
  }
  v12 = (_DWORD *)*a1;
  v13 = (unsigned int)&v6[3 * ((-1431655764 * ((unsigned int)(i - v8) >> 2)) >> 2) + 3];
  LODWORD(v15) = a1[1];
  while ( v12 != (_DWORD *)v15 )
  {
    sub_3BDF80(v12 + 2);
    v12 += 3;
  }
  if ( *a1 != 0 )
    operator delete((void *)*a1);
  *a1 = (int)v6;
  a1[1] = v13;
  a1[2] = (int)&v6[3 * HIDWORD(v15)];
  return v15;
}


//======================================================================
// void std::vector<AlreadyCreditInfo,std::allocator<AlreadyCreditInfo>>::_M_emplace_back_aux<AlreadyCreditInfo const&>(AlreadyCreditInfo const&)
// address: 0x002D2718   size: 0x7E (126 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorI17AlreadyCreditInfoSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_'
void __fastcall std::vector<AlreadyCreditInfo>::_M_emplace_back_aux<AlreadyCreditInfo const&>(int a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  char *v7; // r5
  char *v8; // r3
  int v9; // r3
  int v10; // r7
  int v11; // r7

  v4 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 3;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x1FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x1FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x1FFFFFFF;
  }
LABEL_8:
  v7 = (char *)operator new(8 * v6);
LABEL_9:
  v8 = &v7[8 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 3)];
  if ( v8 != nullptr )
  {
    *(_DWORD *)v8 = *a2;
    *((_DWORD *)v8 + 1) = a2[1];
  }
  v9 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 3;
  v10 = 8 * v9;
  if ( v9 != 0 )
    j_memmove(v7, *(const void **)a1, 8 * v9);
  v11 = (int)&v7[v10 + 8];
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v11;
  *(_DWORD *)(a1 + 8) = &v7[8 * v6];
}


//======================================================================
// void std::vector<NearbyPlayerInfo,std::allocator<NearbyPlayerInfo>>::_M_emplace_back_aux<NearbyPlayerInfo const&>(NearbyPlayerInfo const&)
// address: 0x002D286C   size: 0x7E (126 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorI16NearbyPlayerInfoSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_'
void __fastcall std::vector<NearbyPlayerInfo>::_M_emplace_back_aux<NearbyPlayerInfo const&>(int a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  char *v7; // r5
  char *v8; // r3
  int v9; // r3
  int v10; // r7
  int v11; // r7

  v4 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 3;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x1FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x1FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x1FFFFFFF;
  }
LABEL_8:
  v7 = (char *)operator new(8 * v6);
LABEL_9:
  v8 = &v7[8 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 3)];
  if ( v8 != nullptr )
  {
    *(_DWORD *)v8 = *a2;
    *((_DWORD *)v8 + 1) = a2[1];
  }
  v9 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 3;
  v10 = 8 * v9;
  if ( v9 != 0 )
    j_memmove(v7, *(const void **)a1, 8 * v9);
  v11 = (int)&v7[v10 + 8];
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v11;
  *(_DWORD *)(a1 + 8) = &v7[8 * v6];
}


//======================================================================
// void std::vector<BuddyWorldDesc,std::allocator<BuddyWorldDesc>>::_M_emplace_back_aux<BuddyWorldDesc const&>(BuddyWorldDesc const&)
// address: 0x002D2BB8   size: 0xFC (252 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorI14BuddyWorldDescSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_'
__int64 __fastcall std::vector<BuddyWorldDesc>::_M_emplace_back_aux<BuddyWorldDesc const&>(int *a1, BuddyWorldDesc *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r5
  BuddyWorldDesc *v7; // r0
  BuddyWorldDesc *v8; // r1
  int v9; // r3
  int v10; // r2
  int v11; // r12
  int v12; // r0
  unsigned int v13; // r6
  __int64 v15; // [sp+0h] [bp-Ch]

  LODWORD(v15) = a1;
  v4 = -858993459 * ((a1[1] - *a1) >> 3);
  if ( v4 != 0 )
  {
    v5 = -1717986918 * ((a1[1] - *a1) >> 3);
    HIDWORD(v15) = 107374182;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  HIDWORD(v15) = v5;
  if ( v5 <= 0x6666666 )
  {
    v6 = 0;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    HIDWORD(v15) = 107374182;
  }
LABEL_8:
  v6 = operator new(40 * HIDWORD(v15));
LABEL_9:
  v7 = (BuddyWorldDesc *)(v6 + 8 * ((a1[1] - *a1) >> 3));
  if ( v7 != nullptr )
    BuddyWorldDesc::BuddyWorldDesc(v7, a2);
  v8 = (BuddyWorldDesc *)*a1;
  v9 = v6;
  v10 = *a1;
  v11 = a1[1];
  while ( v10 != v11 )
  {
    if ( v9 != 0 )
    {
      *(_DWORD *)v9 = *(_DWORD *)v10;
      v12 = v10 - (_DWORD)v8;
      *(_DWORD *)(v9 + 4) = *(_DWORD *)(v10 + 4);
      *(_DWORD *)((char *)v8 + v12 + 4) = &byte_55FB88;
      LODWORD(v15) = &byte_55FB88;
      *(_DWORD *)(v9 + 8) = *(_DWORD *)(v10 + 8);
      *(_DWORD *)((char *)v8 + v12 + 8) = &byte_55FB88;
      *(_DWORD *)(v9 + 12) = *(_DWORD *)(v10 + 12);
      *(_DWORD *)(v9 + 16) = *(_DWORD *)(v10 + 16);
      *(_WORD *)(v9 + 20) = *(_WORD *)(v10 + 20);
      *(_DWORD *)(v9 + 24) = *(_DWORD *)(v10 + 24);
      *(_DWORD *)(v9 + 28) = *(_DWORD *)(v10 + 28);
      *(_DWORD *)((char *)v8 + v12 + 28) = &byte_55FB88;
      *(_BYTE *)(v9 + 32) = *(_BYTE *)(v10 + 32);
      *(_DWORD *)(v9 + 36) = *(_DWORD *)(v10 + 36);
    }
    v9 += 40;
    v10 += 40;
  }
  v13 = v6 + 40 * ((214748365 * ((unsigned int)(v10 - (_DWORD)v8) >> 3)) & 0x1FFFFFFF) + 40;
  std::_Destroy_aux<false>::__destroy<BuddyWorldDesc *>((BuddyWorldDesc *)*a1, (BuddyWorldDesc *)a1[1]);
  if ( *a1 != 0 )
    operator delete((void *)*a1);
  a1[1] = v13;
  *a1 = v6;
  a1[2] = v6 + 40 * HIDWORD(v15);
  return v15;
}


//======================================================================
// void std::vector<NoReadBuddyMsg,std::allocator<NoReadBuddyMsg>>::_M_emplace_back_aux<NoReadBuddyMsg const&>(NoReadBuddyMsg const&)
// address: 0x002D2E64   size: 0x72 (114 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorI14NoReadBuddyMsgSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_'
void __fastcall std::vector<NoReadBuddyMsg>::_M_emplace_back_aux<NoReadBuddyMsg const&>(int a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r5
  char *v7; // r6
  char *v8; // r3
  int v9; // r7

  v4 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 3;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x1FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x1FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x1FFFFFFF;
  }
LABEL_8:
  v7 = (char *)operator new(8 * v6);
LABEL_9:
  v8 = &v7[8 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 3)];
  if ( v8 != nullptr )
  {
    *(_DWORD *)v8 = *a2;
    *((_DWORD *)v8 + 1) = a2[1];
  }
  v9 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<NoReadBuddyMsg>(
         *(void **)a1,
         *(_DWORD *)(a1 + 4),
         v7)
     + 8;
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v9;
  *(_DWORD *)(a1 + 8) = &v7[8 * v6];
}


//======================================================================
// void std::vector<ClientActor *,std::allocator<ClientActor *>>::_M_range_insert<__gnu_cxx::__normal_iterator<ClientActor **,std::vector<ClientActor *,std::allocator<ClientActor *>>>>(__gnu_cxx::__normal_iterator<ClientActor **,std::vector<ClientActor *,std::allocator<ClientActor *>>>,__gnu_cxx::__normal_iterator<ClientActor **,std::vector<ClientActor *,std::allocator<ClientActor *>>>,__gnu_cxx::__normal_iterator<ClientActor **,std::vector<ClientActor *,std::allocator<ClientActor *>>>,std::forward_iterator_tag)
// address: 0x002D8C3C   size: 0xEA (234 bytes)
//======================================================================
void __fastcall std::vector<ClientActor *>::_M_range_insert<__gnu_cxx::__normal_iterator<ClientActor **,std::vector<ClientActor *>>>(
        void **a1,
        void *a2,
        char *a3,
        int a4)
{
  _BYTE *v6; // r7
  unsigned int v7; // r6
  int v8; // r6
  int v9; // r2
  char *v10; // r0
  int v11; // r1
  char *v12; // r2
  unsigned int v13; // r0
  int v14; // r7
  unsigned int v15; // r6
  void *v16; // r0
  void *v17; // r0
  int v18; // r5
  unsigned int v20; // [sp+8h] [bp-14h]
  char *v21; // [sp+8h] [bp-14h]

  if ( a3 != (char *)a4 )
  {
    v6 = a1[1];
    v20 = (a4 - (int)a3) >> 2;
    if ( ((_BYTE *)a1[2] - v6) >> 2 < v20 )
    {
      v13 = std::vector<ClientActor *>::_M_check_len(a1, v20, (int)"vector::_M_range_insert");
      v14 = 4 * v13;
      if ( v13 != 0 )
      {
        if ( v13 > 0x3FFFFFFF )
          sub_3BCEB4(v13);
        v13 = operator new(4 * v13);
      }
      v15 = v13;
      v16 = (void *)std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<ClientActor *>(
                      *a1,
                      (int)a2,
                      (void *)v13);
      v17 = (void *)std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<ClientActor *>(a3, a4, v16);
      v18 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<ClientActor *>(a2, (int)a1[1], v17);
      sub_2D8800(*a1);
      *a1 = (void *)v15;
      a1[1] = (void *)v18;
      a1[2] = (void *)(v15 + v14);
    }
    else
    {
      v7 = (v6 - (_BYTE *)a2) >> 2;
      if ( v7 <= v20 )
      {
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<ClientActor *>(&a3[4 * v7], a4, v6);
        v12 = (char *)a1[1] + 4 * (v20 - v7);
        a1[1] = v12;
        std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<ClientActor *>(a2, (int)v6, v12);
        v10 = a3;
        v11 = (int)&a3[4 * v7];
        a1[1] = (char *)a1[1] + 4 * v7;
      }
      else
      {
        v8 = 4 * v20;
        v21 = &v6[-4 * v20];
        std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<ClientActor *>(v21, (int)v6, v6);
        a1[1] = (char *)a1[1] + v8;
        v9 = (v21 - (_BYTE *)a2) >> 2;
        if ( v9 != 0 )
          j_memmove(&v6[-4 * v9], a2, 4 * v9);
        v10 = a3;
        v11 = a4;
      }
      std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<ClientActor *>(v10, v11, a2);
    }
  }
}


//======================================================================
// void std::vector<WCoord,std::allocator<WCoord>>::emplace_back<WCoord>(WCoord &&)
// address: 0x002DC9BC   size: 0x8E (142 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorI6WCoordSaIS0_EE12emplace_backIJS0_EEEvDpOT_'
void __fastcall std::vector<WCoord>::emplace_back<WCoord>(int a1, _DWORD *a2)
{
  _DWORD *v3; // r3
  unsigned int v5; // r0
  unsigned int v6; // r7
  _DWORD *v7; // r6
  _DWORD *v8; // r3
  _DWORD *v9; // r5

  v3 = *(_DWORD **)(a1 + 4);
  if ( v3 == *(_DWORD **)(a1 + 8) )
  {
    v5 = std::vector<WCoord>::_M_check_len((_DWORD *)a1, 1u, (int)"vector::_M_emplace_back_aux");
    v6 = v5;
    if ( v5 != 0 )
    {
      if ( v5 > 0x15555555 )
        sub_3BCEB4(v5);
      v7 = (_DWORD *)operator new(12 * v5);
    }
    else
    {
      v7 = nullptr;
    }
    v8 = &v7[(*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2];
    if ( v8 != nullptr )
    {
      *v8 = *a2;
      v8[1] = a2[1];
      v8[2] = a2[2];
    }
    v9 = sub_2DC824(*(char **)a1, *(char **)(a1 + 4), v7) + 3;
    if ( *(_DWORD *)a1 != 0 )
      operator delete(*(void **)a1);
    *(_DWORD *)a1 = v7;
    *(_DWORD *)(a1 + 4) = v9;
    *(_DWORD *)(a1 + 8) = &v7[3 * v6];
  }
  else
  {
    if ( v3 != nullptr )
    {
      *v3 = *a2;
      v3[1] = a2[1];
      v3[2] = a2[2];
    }
    *(_DWORD *)(a1 + 4) += 12;
  }
}


//======================================================================
// void std::vector<BackPackGrid,std::allocator<BackPackGrid>>::_M_emplace_back_aux<BackPackGrid const&>(BackPackGrid const&)
// address: 0x002DE640   size: 0x90 (144 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorI12BackPackGridSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_'
__int64 __fastcall std::vector<BackPackGrid>::_M_emplace_back_aux<BackPackGrid const&>(__int64 a1)
{
  int v1; // r4
  unsigned int v2; // r2
  unsigned int v3; // r3
  int v4; // r6
  char *v5; // r5
  char *v6; // r0
  int v7; // r7
  int v8; // r7

  v1 = a1;
  v2 = -991146299 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2);
  if ( v2 != 0 )
  {
    v3 = -1982292598 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2);
    v4 = 82595524;
    if ( 2 * v2 < v2 )
      goto LABEL_8;
  }
  else
  {
    v3 = 1;
  }
  v4 = v3;
  if ( v3 <= 0x4EC4EC4 )
  {
    v5 = nullptr;
    if ( v3 == 0 )
      goto LABEL_9;
  }
  else
  {
    v4 = 82595524;
  }
LABEL_8:
  v5 = (char *)operator new(52 * v4);
LABEL_9:
  v6 = &v5[4 * ((*(_DWORD *)(v1 + 4) - *(_DWORD *)v1) >> 2)];
  if ( v6 != nullptr )
    j_memcpy(v6, (const void *)HIDWORD(a1), 0x34u);
  v7 = -991146299 * ((*(_DWORD *)(v1 + 4) - *(_DWORD *)v1) >> 2);
  if ( v7 != 0 )
    j_memmove(v5, *(const void **)v1, 4 * ((*(_DWORD *)(v1 + 4) - *(_DWORD *)v1) >> 2));
  v8 = (int)&v5[52 * v7 + 52];
  if ( *(_DWORD *)v1 != 0 )
    operator delete(*(void **)v1);
  *(_DWORD *)v1 = v5;
  *(_DWORD *)(v1 + 4) = v8;
  *(_DWORD *)(v1 + 8) = &v5[52 * v4];
  return a1;
}


//======================================================================
// void std::vector<GenLayer *,std::allocator<GenLayer *>>::_M_emplace_back_aux<GenLayer * const&>(GenLayer * const&)
// address: 0x002DF940   size: 0x7A (122 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIP8GenLayerSaIS1_EE19_M_emplace_back_auxIJRKS1_EEEvDpOT_'
void __fastcall std::vector<GenLayer *>::_M_emplace_back_aux<GenLayer * const&>(int a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  char *v7; // r5
  char *v8; // r3
  int v9; // r3
  int v10; // r7
  int v11; // r7

  v4 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x3FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x3FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x3FFFFFFF;
  }
LABEL_8:
  v7 = (char *)operator new(4 * v6);
LABEL_9:
  v8 = &v7[4 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2)];
  if ( v8 != nullptr )
    *(_DWORD *)v8 = *a2;
  v9 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  v10 = 4 * v9;
  if ( v9 != 0 )
    j_memmove(v7, *(const void **)a1, 4 * v9);
  v11 = (int)&v7[v10 + 4];
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v11;
  *(_DWORD *)(a1 + 8) = &v7[4 * v6];
}


//======================================================================
// void std::vector<anl::CImplicitModuleBase *,std::allocator<anl::CImplicitModuleBase *>>::_M_emplace_back_aux<anl::CImplicitModuleBase * const&>(anl::CImplicitModuleBase * const&)
// address: 0x002E2288   size: 0x7A (122 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIPN3anl19CImplicitModuleBaseESaIS2_EE19_M_emplace_back_auxIJRKS2_EEEvDpOT_'
void __fastcall std::vector<anl::CImplicitModuleBase *>::_M_emplace_back_aux<anl::CImplicitModuleBase * const&>(
        int a1,
        _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  char *v7; // r5
  char *v8; // r3
  int v9; // r3
  int v10; // r7
  int v11; // r7

  v4 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x3FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x3FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x3FFFFFFF;
  }
LABEL_8:
  v7 = (char *)operator new(4 * v6);
LABEL_9:
  v8 = &v7[4 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2)];
  if ( v8 != nullptr )
    *(_DWORD *)v8 = *a2;
  v9 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  v10 = 4 * v9;
  if ( v9 != 0 )
    j_memmove(v7, *(const void **)a1, 4 * v9);
  v11 = (int)&v7[v10 + 4];
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v11;
  *(_DWORD *)(a1 + 8) = &v7[4 * v6];
}


//======================================================================
// void std::vector<BiomeSpawnEntry,std::allocator<BiomeSpawnEntry>>::_M_emplace_back_aux<BiomeSpawnEntry const&>(BiomeSpawnEntry const&)
// address: 0x002E71EC   size: 0x7E (126 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorI15BiomeSpawnEntrySaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_'
void __fastcall std::vector<BiomeSpawnEntry>::_M_emplace_back_aux<BiomeSpawnEntry const&>(int a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  char *v7; // r5
  char *v8; // r3
  int v9; // r3
  int v10; // r7
  int v11; // r7

  v4 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 3;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x1FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x1FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x1FFFFFFF;
  }
LABEL_8:
  v7 = (char *)operator new(8 * v6);
LABEL_9:
  v8 = &v7[8 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 3)];
  if ( v8 != nullptr )
  {
    *(_DWORD *)v8 = *a2;
    *((_DWORD *)v8 + 1) = a2[1];
  }
  v9 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 3;
  v10 = 8 * v9;
  if ( v9 != 0 )
    j_memmove(v7, *(const void **)a1, 8 * v9);
  v11 = (int)&v7[v10 + 8];
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v11;
  *(_DWORD *)(a1 + 8) = &v7[8 * v6];
}


//======================================================================
// void std::vector<ParticleUnit,std::allocator<ParticleUnit>>::_M_emplace_back_aux<ParticleUnit const&>(ParticleUnit const&)
// address: 0x002E9934   size: 0x92 (146 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorI12ParticleUnitSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_'
__int64 __fastcall std::vector<ParticleUnit>::_M_emplace_back_aux<ParticleUnit const&>(int a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r7
  _DWORD *v7; // r5
  _DWORD *v8; // r0
  _DWORD *v9; // r6
  __int64 v11; // [sp+0h] [bp-Ch]

  v4 = -286331153 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2);
  if ( v4 != 0 )
  {
    v5 = -572662306 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2);
    v6 = 71582788;
    if ( 2 * v4 < v4 )
    {
LABEL_8:
      LODWORD(v11) = operator new(60 * v6);
      goto LABEL_9;
    }
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 > 0x4444444 )
  {
    v6 = 71582788;
    goto LABEL_8;
  }
  LODWORD(v11) = 0;
  if ( v5 != 0 )
    goto LABEL_8;
LABEL_9:
  __gnu_cxx::new_allocator<ParticleUnit>::construct<ParticleUnit<ParticleUnit const&>>(
    a1,
    (_DWORD *)(v11 + 4 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2)),
    a2);
  v7 = *(_DWORD **)a1;
  v8 = (_DWORD *)v11;
  HIDWORD(v11) = *(_DWORD *)(a1 + 4);
  while ( 1 )
  {
    v9 = v8 + 15;
    if ( v7 == (_DWORD *)HIDWORD(v11) )
      break;
    std::_Construct<ParticleUnit<ParticleUnit&>>(v8, v7);
    v7 += 15;
    v8 = v9;
  }
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)(a1 + 4) = v9;
  *(_DWORD *)a1 = v11;
  *(_DWORD *)(a1 + 8) = v11 + 60 * v6;
  return v11;
}


//======================================================================
// void std::vector<WorldGenVoxelModel *,std::allocator<WorldGenVoxelModel *>>::_M_emplace_back_aux<WorldGenVoxelModel * const&>(WorldGenVoxelModel * const&)
// address: 0x002EAFE4   size: 0x7A (122 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIP18WorldGenVoxelModelSaIS1_EE19_M_emplace_back_auxIJRKS1_EEEvDpOT_'
void __fastcall std::vector<WorldGenVoxelModel *>::_M_emplace_back_aux<WorldGenVoxelModel * const&>(int a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  char *v7; // r5
  char *v8; // r3
  int v9; // r3
  int v10; // r7
  int v11; // r7

  v4 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x3FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x3FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x3FFFFFFF;
  }
LABEL_8:
  v7 = (char *)operator new(4 * v6);
LABEL_9:
  v8 = &v7[4 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2)];
  if ( v8 != nullptr )
    *(_DWORD *)v8 = *a2;
  v9 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  v10 = 4 * v9;
  if ( v9 != 0 )
    j_memmove(v7, *(const void **)a1, 4 * v9);
  v11 = (int)&v7[v10 + 4];
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v11;
  *(_DWORD *)(a1 + 8) = &v7[4 * v6];
}


//======================================================================
// void std::vector<BlockTickMgr::FrameBlockChange,std::allocator<BlockTickMgr::FrameBlockChange>>::_M_emplace_back_aux<BlockTickMgr::FrameBlockChange const&>(BlockTickMgr::FrameBlockChange const&)
// address: 0x002EDDD8   size: 0xC2 (194 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIN12BlockTickMgr16FrameBlockChangeESaIS1_EE19_M_emplace_back_auxIJRKS1_EEEvDpOT_'
void __fastcall std::vector<BlockTickMgr::FrameBlockChange>::_M_emplace_back_aux<BlockTickMgr::FrameBlockChange const&>(
        int *a1,
        _DWORD *a2)
{
  unsigned int v3; // r2
  unsigned int v4; // r3
  int v5; // r6
  _DWORD *v6; // r5
  _DWORD *v7; // r3
  int v8; // r1
  int v9; // r7
  int v10; // r7
  char *v11; // r12
  int v12; // r3
  int v13; // r7
  int v14; // r7
  char *v15; // [sp+4h] [bp-10h]
  _DWORD *v16; // [sp+8h] [bp-Ch]
  char *i; // [sp+Ch] [bp-8h]

  v3 = -858993459 * ((a1[1] - *a1) >> 2);
  if ( v3 != 0 )
  {
    v4 = -1717986918 * ((a1[1] - *a1) >> 2);
    v5 = 214748364;
    if ( 2 * v3 < v3 )
      goto LABEL_8;
  }
  else
  {
    v4 = 1;
  }
  v5 = v4;
  if ( v4 <= 0xCCCCCCC )
  {
    v6 = nullptr;
    if ( v4 == 0 )
      goto LABEL_9;
  }
  else
  {
    v5 = 214748364;
  }
LABEL_8:
  v6 = (_DWORD *)operator new(20 * v5);
LABEL_9:
  if ( &v6[(a1[1] - *a1) >> 2] != nullptr )
  {
    v7 = &v6[(a1[1] - *a1) >> 2];
    v8 = a2[1];
    v9 = a2[2];
    *v7 = *a2;
    v7[1] = v8;
    v7[2] = v9;
    v7 += 3;
    v10 = a2[4];
    *v7 = a2[3];
    v7[1] = v10;
  }
  v16 = v6;
  v15 = (char *)*a1;
  v11 = (char *)a1[1];
  for ( i = (char *)*a1; i != v11; i += 20 )
  {
    if ( v16 != nullptr )
    {
      v12 = *((_DWORD *)i + 1);
      v13 = *((_DWORD *)i + 2);
      *v16 = *(_DWORD *)i;
      v16[1] = v12;
      v16[2] = v13;
      v14 = *((_DWORD *)i + 4);
      v16[3] = *((_DWORD *)i + 3);
      v16[4] = v14;
    }
    v16 += 5;
  }
  if ( *a1 != 0 )
    operator delete((void *)*a1);
  *a1 = (int)v6;
  a1[1] = (int)&v6[5 * ((858993460 * ((unsigned int)(i - v15) >> 2)) >> 2) + 5];
  a1[2] = (int)&v6[5 * v5];
}


//======================================================================
// void std::vector<ScheduleBlock const*,std::allocator<ScheduleBlock const*>>::_M_emplace_back_aux<ScheduleBlock const* const&>(ScheduleBlock const* const&)
// address: 0x002EE158   size: 0x7A (122 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIPK13ScheduleBlockSaIS2_EE19_M_emplace_back_auxIJRKS2_EEEvDpOT_'
void __fastcall std::vector<ScheduleBlock const*>::_M_emplace_back_aux<ScheduleBlock const* const&>(int a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  char *v7; // r5
  char *v8; // r3
  int v9; // r3
  int v10; // r7
  int v11; // r7

  v4 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x3FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x3FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x3FFFFFFF;
  }
LABEL_8:
  v7 = (char *)operator new(4 * v6);
LABEL_9:
  v8 = &v7[4 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2)];
  if ( v8 != nullptr )
    *(_DWORD *)v8 = *a2;
  v9 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  v10 = 4 * v9;
  if ( v9 != 0 )
    j_memmove(v7, *(const void **)a1, 4 * v9);
  v11 = (int)&v7[v10 + 4];
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v11;
  *(_DWORD *)(a1 + 8) = &v7[4 * v6];
}


//======================================================================
// void std::vector<BlockEventData,std::allocator<BlockEventData>>::_M_emplace_back_aux<BlockEventData const&>(BlockEventData const&)
// address: 0x002EE35C   size: 0xAC (172 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorI14BlockEventDataSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_'
void __fastcall std::vector<BlockEventData>::_M_emplace_back_aux<BlockEventData const&>(char **a1, _DWORD *a2)
{
  unsigned int v3; // r0
  unsigned int v4; // r6
  _DWORD *v5; // r5
  _DWORD *v6; // r3
  int v7; // r2
  int v8; // r7
  int v9; // r2
  int v10; // r7
  char *v11; // r12
  int v12; // r3
  int v13; // r7
  int v14; // r3
  int v15; // r7
  char *i; // [sp+4h] [bp-10h]
  char *v17; // [sp+8h] [bp-Ch]
  _DWORD *v19; // [sp+Ch] [bp-8h]

  v3 = std::vector<BlockEventData>::_M_check_len(a1, 1u, (int)"vector::_M_emplace_back_aux");
  v4 = v3;
  if ( v3 != 0 )
  {
    if ( v3 > 0xAAAAAAA )
      sub_3BCEB4(v3);
    v5 = (_DWORD *)operator new(24 * v3);
  }
  else
  {
    v5 = nullptr;
  }
  if ( &v5[2 * ((a1[1] - *a1) >> 3)] != nullptr )
  {
    v6 = &v5[2 * ((a1[1] - *a1) >> 3)];
    v7 = a2[1];
    v8 = a2[2];
    *v6 = *a2;
    v6[1] = v7;
    v6[2] = v8;
    v6 += 3;
    v9 = a2[4];
    v10 = a2[5];
    *v6 = a2[3];
    v6[1] = v9;
    v6[2] = v10;
  }
  v19 = v5;
  v17 = *a1;
  v11 = a1[1];
  for ( i = *a1; i != v11; i += 24 )
  {
    if ( v19 != nullptr )
    {
      v12 = *((_DWORD *)i + 1);
      v13 = *((_DWORD *)i + 2);
      *v19 = *(_DWORD *)i;
      v19[1] = v12;
      v19[2] = v13;
      v14 = *((_DWORD *)i + 4);
      v15 = *((_DWORD *)i + 5);
      v19[3] = *((_DWORD *)i + 3);
      v19[4] = v14;
      v19[5] = v15;
    }
    v19 += 6;
  }
  if ( *a1 != nullptr )
    operator delete(*a1);
  *a1 = (char *)v5;
  a1[1] = (char *)&v5[6 * ((178956971 * ((unsigned int)(i - v17) >> 3)) & 0x1FFFFFFF) + 6];
  a1[2] = (char *)&v5[6 * v4];
}


//======================================================================
// void std::vector<ChunkViewer *,std::allocator<ChunkViewer *>>::_M_emplace_back_aux<ChunkViewer * const&>(ChunkViewer * const&)
// address: 0x002EF574   size: 0x6A (106 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIP11ChunkViewerSaIS1_EE19_M_emplace_back_auxIJRKS1_EEEvDpOT_'
void __fastcall std::vector<ChunkViewer *>::_M_emplace_back_aux<ChunkViewer * const&>(int a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r5
  char *v7; // r6
  char *v8; // r3
  int v9; // r7

  v4 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x3FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x3FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x3FFFFFFF;
  }
LABEL_8:
  v7 = (char *)operator new(4 * v6);
LABEL_9:
  v8 = &v7[4 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2)];
  if ( v8 != nullptr )
    *(_DWORD *)v8 = *a2;
  v9 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<ChunkViewer *>(
         *(void **)a1,
         *(_DWORD *)(a1 + 4),
         v7);
  sub_2EECD2(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v9 + 4;
  *(_DWORD *)(a1 + 8) = &v7[4 * v6];
}


//======================================================================
// void std::vector<WorldBossData,std::allocator<WorldBossData>>::_M_emplace_back_aux<WorldBossData const&>(WorldBossData const&)
// address: 0x002F0C98   size: 0xBE (190 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorI13WorldBossDataSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_'
void __fastcall std::vector<WorldBossData>::_M_emplace_back_aux<WorldBossData const&>(int *a1, _DWORD *a2)
{
  unsigned int v3; // r2
  unsigned int v4; // r3
  int v5; // r6
  _DWORD *v6; // r5
  _DWORD *v7; // r3
  int v8; // r1
  int v9; // r7
  int v10; // r1
  int v11; // r7
  char *v12; // r12
  int v13; // r3
  int v14; // r7
  int v15; // r3
  int v16; // r7
  char *v17; // [sp+4h] [bp-10h]
  _DWORD *v18; // [sp+8h] [bp-Ch]
  char *i; // [sp+Ch] [bp-8h]

  v3 = -1431655765 * ((a1[1] - *a1) >> 3);
  if ( v3 != 0 )
  {
    v4 = 1431655766 * ((a1[1] - *a1) >> 3);
    v5 = 178956970;
    if ( 2 * v3 < v3 )
      goto LABEL_8;
  }
  else
  {
    v4 = 1;
  }
  v5 = v4;
  if ( v4 <= 0xAAAAAAA )
  {
    v6 = nullptr;
    if ( v4 == 0 )
      goto LABEL_9;
  }
  else
  {
    v5 = 178956970;
  }
LABEL_8:
  v6 = (_DWORD *)operator new(24 * v5);
LABEL_9:
  if ( &v6[2 * ((a1[1] - *a1) >> 3)] != nullptr )
  {
    v7 = &v6[2 * ((a1[1] - *a1) >> 3)];
    v8 = a2[1];
    v9 = a2[2];
    *v7 = *a2;
    v7[1] = v8;
    v7[2] = v9;
    v7 += 3;
    v10 = a2[4];
    v11 = a2[5];
    *v7 = a2[3];
    v7[1] = v10;
    v7[2] = v11;
  }
  v18 = v6;
  v17 = (char *)*a1;
  v12 = (char *)a1[1];
  for ( i = (char *)*a1; i != v12; i += 24 )
  {
    if ( v18 != nullptr )
    {
      v13 = *((_DWORD *)i + 1);
      v14 = *((_DWORD *)i + 2);
      *v18 = *(_DWORD *)i;
      v18[1] = v13;
      v18[2] = v14;
      v15 = *((_DWORD *)i + 4);
      v16 = *((_DWORD *)i + 5);
      v18[3] = *((_DWORD *)i + 3);
      v18[4] = v15;
      v18[5] = v16;
    }
    v18 += 6;
  }
  sub_2F0A18((void *)*a1);
  a1[1] = (int)&v6[6 * ((178956971 * ((unsigned int)(i - v17) >> 3)) & 0x1FFFFFFF) + 6];
  *a1 = (int)v6;
  a1[2] = (int)&v6[6 * v5];
}


//======================================================================
// void std::vector<flatbuffers::Offset<FBSave::WorldMap>,std::allocator<flatbuffers::Offset<FBSave::WorldMap>>>::_M_emplace_back_aux<flatbuffers::Offset<FBSave::WorldMap> const&>(flatbuffers::Offset<FBSave::WorldMap> const&)
// address: 0x002F0E8C   size: 0x84 (132 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIN11flatbuffers6OffsetIN6FBSave8WorldMapEEESaIS4_EE19_M_emplace_back_auxIJRKS4_EEEvDpOT_'
void __fastcall std::vector<flatbuffers::Offset<FBSave::WorldMap>>::_M_emplace_back_aux<flatbuffers::Offset<FBSave::WorldMap> const&>(
        int *a1,
        _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  _DWORD *v7; // r5
  _DWORD *v8; // r3
  char *v9; // r7
  char *v10; // r1
  _DWORD *v11; // r2
  char *i; // r3
  unsigned int v13; // r7

  v4 = (a1[1] - *a1) >> 2;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x3FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x3FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x3FFFFFFF;
  }
LABEL_8:
  v7 = (_DWORD *)operator new(4 * v6);
LABEL_9:
  v8 = &v7[(a1[1] - *a1) >> 2];
  if ( v8 != nullptr )
    *v8 = *a2;
  v9 = (char *)*a1;
  v10 = (char *)a1[1];
  v11 = v7;
  for ( i = (char *)*a1; i != v10; i += 4 )
  {
    if ( v11 != nullptr )
      *v11 = *(_DWORD *)i;
    ++v11;
  }
  v13 = (unsigned int)&v7[((unsigned int)(i - v9) >> 2) + 1];
  if ( *a1 != 0 )
    operator delete((void *)*a1);
  *a1 = (int)v7;
  a1[1] = v13;
  a1[2] = (int)&v7[v6];
}


//======================================================================
// void std::vector<WorldMapData,std::allocator<WorldMapData>>::_M_emplace_back_aux<WorldMapData const&>(WorldMapData const&)
// address: 0x002F1000   size: 0x10E (270 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorI12WorldMapDataSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_'
__int64 __fastcall std::vector<WorldMapData>::_M_emplace_back_aux<WorldMapData const&>(int *a1, int a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r7
  __int64 v7; // r0
  int v8; // r0
  int v9; // r12
  int v10; // r3
  int v11; // r2
  int v12; // r5
  unsigned int v13; // r6
  __int64 v15; // [sp+0h] [bp-Ch]
  int v16; // [sp+4h] [bp-8h]
  int v17; // [sp+4h] [bp-8h]

  v4 = -1431655765 * ((a1[1] - *a1) >> 4);
  if ( v4 != 0 )
  {
    v5 = 1431655766 * ((a1[1] - *a1) >> 4);
    LODWORD(v15) = 89478485;
    if ( 2 * v4 < v4 )
    {
LABEL_8:
      v6 = operator new(48 * v15);
      goto LABEL_9;
    }
  }
  else
  {
    v5 = 1;
  }
  LODWORD(v15) = v5;
  if ( v5 > 0x5555555 )
  {
    LODWORD(v15) = 89478485;
    goto LABEL_8;
  }
  v6 = 0;
  if ( v5 != 0 )
    goto LABEL_8;
LABEL_9:
  LODWORD(v7) = a1;
  HIDWORD(v7) = v6 + 16 * ((a1[1] - *a1) >> 4);
  __gnu_cxx::new_allocator<WorldMapData>::construct<WorldMapData<WorldMapData const&>>(v7, a2);
  v8 = *a1;
  v9 = a1[1];
  v10 = *a1;
  v11 = v6;
  while ( v10 != v9 )
  {
    if ( v11 != 0 )
    {
      *(_DWORD *)v11 = *(_DWORD *)v10;
      *(_DWORD *)(v11 + 4) = *(_DWORD *)(v10 + 4);
      *(_DWORD *)(v11 + 8) = *(_DWORD *)(v10 + 8);
      *(_DWORD *)(v11 + 12) = *(_DWORD *)(v10 + 12);
      *(_BYTE *)(v11 + 16) = *(_BYTE *)(v10 + 16);
      *(_BYTE *)(v11 + 17) = *(_BYTE *)(v10 + 17);
      *(_DWORD *)(v11 + 20) = *(_DWORD *)(v10 + 20);
      *(_DWORD *)(v11 + 24) = *(_DWORD *)(v10 + 24);
      *(_DWORD *)(v11 + 28) = *(_DWORD *)(v10 + 28);
      *(_DWORD *)(v11 + 32) = *(_DWORD *)(v10 + 32);
      *(_DWORD *)(v11 + 36) = 0;
      *(_DWORD *)(v11 + 40) = 0;
      *(_DWORD *)(v11 + 44) = 0;
      *(_DWORD *)(v11 + 36) = *(_DWORD *)(v10 + 36);
      *(_DWORD *)(v10 + 36) = 0;
      v16 = *(_DWORD *)(v11 + 40);
      *(_DWORD *)(v11 + 40) = *(_DWORD *)(v10 + 40);
      *(_DWORD *)(v10 + 40) = v16;
      v17 = *(_DWORD *)(v11 + 44);
      *(_DWORD *)(v11 + 44) = *(_DWORD *)(v10 + 44);
      *(_DWORD *)(v10 + 44) = v17;
    }
    v11 += 48;
    v10 += 48;
  }
  v12 = *a1;
  v13 = v6 + 48 * ((178956971 * ((unsigned int)(v10 - v8) >> 4)) & 0xFFFFFFF) + 48;
  HIDWORD(v15) = a1[1];
  while ( v12 != HIDWORD(v15) )
  {
    sub_2F0A18(*(void **)(v12 + 36));
    v12 += 48;
  }
  if ( *a1 != 0 )
    operator delete((void *)*a1);
  a1[1] = v13;
  *a1 = v6;
  a1[2] = v6 + 48 * v15;
  return v15;
}


//======================================================================
// void std::vector<IndexXZ,std::allocator<IndexXZ>>::_M_emplace_back_aux<IndexXZ>(IndexXZ &&)
// address: 0x002FBAB0   size: 0x8C (140 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorI7IndexXZSaIS0_EE19_M_emplace_back_auxIJS0_EEEvDpOT_'
void __fastcall std::vector<IndexXZ>::_M_emplace_back_aux<IndexXZ>(int *a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  _DWORD *v7; // r5
  _DWORD *v8; // r3
  char *v9; // r7
  char *v10; // r1
  _DWORD *v11; // r2
  char *i; // r3
  unsigned int v13; // r7

  v4 = (a1[1] - *a1) >> 3;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x1FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x1FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x1FFFFFFF;
  }
LABEL_8:
  v7 = (_DWORD *)operator new(8 * v6);
LABEL_9:
  v8 = &v7[2 * ((a1[1] - *a1) >> 3)];
  if ( v8 != nullptr )
  {
    *v8 = *a2;
    v8[1] = a2[1];
  }
  v9 = (char *)*a1;
  v10 = (char *)a1[1];
  v11 = v7;
  for ( i = (char *)*a1; i != v10; i += 8 )
  {
    if ( v11 != nullptr )
    {
      *v11 = *(_DWORD *)i;
      v11[1] = *((_DWORD *)i + 1);
    }
    v11 += 2;
  }
  v13 = (unsigned int)&v7[2 * ((unsigned int)(i - v9) >> 3) + 2];
  if ( *a1 != 0 )
    operator delete((void *)*a1);
  *a1 = (int)v7;
  a1[1] = v13;
  a1[2] = (int)&v7[2 * v6];
}


//======================================================================
// void std::vector<GameEvent *,std::allocator<GameEvent *>>::_M_emplace_back_aux<GameEvent * const&>(GameEvent * const&)
// address: 0x002FC61C   size: 0x7A (122 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIP9GameEventSaIS1_EE19_M_emplace_back_auxIJRKS1_EEEvDpOT_'
void __fastcall std::vector<GameEvent *>::_M_emplace_back_aux<GameEvent * const&>(int a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  char *v7; // r5
  char *v8; // r3
  int v9; // r3
  int v10; // r7
  int v11; // r7

  v4 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x3FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x3FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x3FFFFFFF;
  }
LABEL_8:
  v7 = (char *)operator new(4 * v6);
LABEL_9:
  v8 = &v7[4 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2)];
  if ( v8 != nullptr )
    *(_DWORD *)v8 = *a2;
  v9 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  v10 = 4 * v9;
  if ( v9 != 0 )
    j_memmove(v7, *(const void **)a1, 4 * v9);
  v11 = (int)&v7[v10 + 4];
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v11;
  *(_DWORD *)(a1 + 8) = &v7[4 * v6];
}


//======================================================================
// void std::vector<void *,std::allocator<void *>>::_M_range_insert<__gnu_cxx::__normal_iterator<void **,std::vector<void *,std::allocator<void *>>>>(__gnu_cxx::__normal_iterator<void **,std::vector<void *,std::allocator<void *>>>,__gnu_cxx::__normal_iterator<void **,std::vector<void *,std::allocator<void *>>>,__gnu_cxx::__normal_iterator<void **,std::vector<void *,std::allocator<void *>>>,std::forward_iterator_tag)
// address: 0x002FEB7C   size: 0xEA (234 bytes)
//======================================================================
void __fastcall std::vector<void *>::_M_range_insert<__gnu_cxx::__normal_iterator<void **,std::vector<void *>>>(
        void **a1,
        void *a2,
        char *a3,
        int a4)
{
  _BYTE *v6; // r7
  unsigned int v7; // r6
  int v8; // r6
  int v9; // r2
  char *v10; // r0
  int v11; // r1
  char *v12; // r2
  unsigned int v13; // r0
  int v14; // r7
  unsigned int v15; // r6
  void *v16; // r0
  void *v17; // r0
  int v18; // r5
  unsigned int v20; // [sp+8h] [bp-14h]
  char *v21; // [sp+8h] [bp-14h]

  if ( a3 != (char *)a4 )
  {
    v6 = a1[1];
    v20 = (a4 - (int)a3) >> 2;
    if ( ((_BYTE *)a1[2] - v6) >> 2 < v20 )
    {
      v13 = std::vector<void *>::_M_check_len(a1, v20, (int)"vector::_M_range_insert");
      v14 = 4 * v13;
      if ( v13 != 0 )
      {
        if ( v13 > 0x3FFFFFFF )
          sub_3BCEB4(v13);
        v13 = operator new(4 * v13);
      }
      v15 = v13;
      v16 = (void *)std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<void *>(
                      *a1,
                      (int)a2,
                      (void *)v13);
      v17 = (void *)std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<void *>(a3, a4, v16);
      v18 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<void *>(a2, (int)a1[1], v17);
      sub_2FE6D2(*a1);
      *a1 = (void *)v15;
      a1[1] = (void *)v18;
      a1[2] = (void *)(v15 + v14);
    }
    else
    {
      v7 = (v6 - (_BYTE *)a2) >> 2;
      if ( v7 <= v20 )
      {
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<void *>(&a3[4 * v7], a4, v6);
        v12 = (char *)a1[1] + 4 * (v20 - v7);
        a1[1] = v12;
        std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<void *>(a2, (int)v6, v12);
        v10 = a3;
        v11 = (int)&a3[4 * v7];
        a1[1] = (char *)a1[1] + 4 * v7;
      }
      else
      {
        v8 = 4 * v20;
        v21 = &v6[-4 * v20];
        std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<void *>(v21, (int)v6, v6);
        a1[1] = (char *)a1[1] + v8;
        v9 = (v21 - (_BYTE *)a2) >> 2;
        if ( v9 != 0 )
          j_memmove(&v6[-4 * v9], a2, 4 * v9);
        v10 = a3;
        v11 = a4;
      }
      std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<void *>(v10, v11, a2);
    }
  }
}


//======================================================================
// void std::vector<BaseEffect *,std::allocator<BaseEffect *>>::_M_emplace_back_aux<BaseEffect * const&>(BaseEffect * const&)
// address: 0x00300AA8   size: 0x6C (108 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIP10BaseEffectSaIS1_EE19_M_emplace_back_auxIJRKS1_EEEvDpOT_'
void __fastcall std::vector<BaseEffect *>::_M_emplace_back_aux<BaseEffect * const&>(int a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r5
  char *v7; // r6
  char *v8; // r3
  int v9; // r7

  v4 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x3FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x3FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x3FFFFFFF;
  }
LABEL_8:
  v7 = (char *)operator new(4 * v6);
LABEL_9:
  v8 = &v7[4 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2)];
  if ( v8 != nullptr )
    *(_DWORD *)v8 = *a2;
  v9 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<BaseEffect *>(
         *(void **)a1,
         *(_DWORD *)(a1 + 4),
         v7)
     + 4;
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v9;
  *(_DWORD *)(a1 + 8) = &v7[4 * v6];
}


//======================================================================
// void std::vector<ScheduleSound *,std::allocator<ScheduleSound *>>::_M_emplace_back_aux<ScheduleSound * const&>(ScheduleSound * const&)
// address: 0x00300C1C   size: 0x6C (108 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIP13ScheduleSoundSaIS1_EE19_M_emplace_back_auxIJRKS1_EEEvDpOT_'
void __fastcall std::vector<ScheduleSound *>::_M_emplace_back_aux<ScheduleSound * const&>(int a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r5
  char *v7; // r6
  char *v8; // r3
  int v9; // r7

  v4 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x3FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x3FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x3FFFFFFF;
  }
LABEL_8:
  v7 = (char *)operator new(4 * v6);
LABEL_9:
  v8 = &v7[4 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2)];
  if ( v8 != nullptr )
    *(_DWORD *)v8 = *a2;
  v9 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<ScheduleSound *>(
         *(void **)a1,
         *(_DWORD *)(a1 + 4),
         v7)
     + 4;
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v9;
  *(_DWORD *)(a1 + 8) = &v7[4 * v6];
}


//======================================================================
// void std::vector<CollideAABB,std::allocator<CollideAABB>>::_M_emplace_back_aux<CollideAABB const&>(CollideAABB const&)
// address: 0x0030137C   size: 0xAC (172 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorI11CollideAABBSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_'
void __fastcall std::vector<CollideAABB>::_M_emplace_back_aux<CollideAABB const&>(char **a1, _DWORD *a2)
{
  unsigned int v3; // r0
  unsigned int v4; // r6
  _DWORD *v5; // r5
  _DWORD *v6; // r3
  int v7; // r2
  int v8; // r7
  int v9; // r2
  int v10; // r7
  char *v11; // r12
  int v12; // r3
  int v13; // r7
  int v14; // r3
  int v15; // r7
  char *i; // [sp+4h] [bp-10h]
  char *v17; // [sp+8h] [bp-Ch]
  _DWORD *v19; // [sp+Ch] [bp-8h]

  v3 = std::vector<CollideAABB>::_M_check_len(a1, 1u, (int)"vector::_M_emplace_back_aux");
  v4 = v3;
  if ( v3 != 0 )
  {
    if ( v3 > 0xAAAAAAA )
      sub_3BCEB4(v3);
    v5 = (_DWORD *)operator new(24 * v3);
  }
  else
  {
    v5 = nullptr;
  }
  if ( &v5[2 * ((a1[1] - *a1) >> 3)] != nullptr )
  {
    v6 = &v5[2 * ((a1[1] - *a1) >> 3)];
    v7 = a2[1];
    v8 = a2[2];
    *v6 = *a2;
    v6[1] = v7;
    v6[2] = v8;
    v6 += 3;
    v9 = a2[4];
    v10 = a2[5];
    *v6 = a2[3];
    v6[1] = v9;
    v6[2] = v10;
  }
  v19 = v5;
  v17 = *a1;
  v11 = a1[1];
  for ( i = *a1; i != v11; i += 24 )
  {
    if ( v19 != nullptr )
    {
      v12 = *((_DWORD *)i + 1);
      v13 = *((_DWORD *)i + 2);
      *v19 = *(_DWORD *)i;
      v19[1] = v12;
      v19[2] = v13;
      v14 = *((_DWORD *)i + 4);
      v15 = *((_DWORD *)i + 5);
      v19[3] = *((_DWORD *)i + 3);
      v19[4] = v14;
      v19[5] = v15;
    }
    v19 += 6;
  }
  if ( *a1 != nullptr )
    operator delete(*a1);
  *a1 = (char *)v5;
  a1[1] = (char *)&v5[6 * ((178956971 * ((unsigned int)(i - v17) >> 3)) & 0x1FFFFFFF) + 6];
  a1[2] = (char *)&v5[6 * v4];
}


//======================================================================
// void std::vector<AITaskEntry,std::allocator<AITaskEntry>>::_M_emplace_back_aux<AITaskEntry const&>(AITaskEntry const&)
// address: 0x00303FC4   size: 0x88 (136 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorI11AITaskEntrySaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_'
void __fastcall std::vector<AITaskEntry>::_M_emplace_back_aux<AITaskEntry const&>(int *a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  _DWORD *v7; // r5
  _DWORD *v8; // r3
  char *v9; // r1
  char *v10; // r0
  _DWORD *v11; // r2
  char *i; // r3
  _DWORD *v13; // r7

  v4 = (a1[1] - *a1) >> 3;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x1FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x1FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x1FFFFFFF;
  }
LABEL_8:
  v7 = (_DWORD *)operator new(8 * v6);
LABEL_9:
  v8 = &v7[2 * ((a1[1] - *a1) >> 3)];
  if ( v8 != nullptr )
  {
    *v8 = *a2;
    v8[1] = a2[1];
  }
  v9 = (char *)*a1;
  v10 = (char *)a1[1];
  v11 = v7;
  for ( i = (char *)*a1; i != v10; i += 8 )
  {
    if ( v11 != nullptr )
    {
      *v11 = *(_DWORD *)i;
      v11[1] = *((_DWORD *)i + 1);
    }
    v11 += 2;
  }
  v13 = &v7[2 * ((unsigned int)(i - v9) >> 3)];
  sub_303EE0((void *)*a1);
  *a1 = (int)v7;
  a1[1] = (int)(v13 + 2);
  a1[2] = (int)&v7[2 * v6];
}


//======================================================================
// void std::vector<CSMsgHandler *,std::allocator<CSMsgHandler *>>::_M_emplace_back_aux<CSMsgHandler * const&>(CSMsgHandler * const&)
// address: 0x0030921C   size: 0x6C (108 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIP12CSMsgHandlerSaIS1_EE19_M_emplace_back_auxIJRKS1_EEEvDpOT_'
void __fastcall std::vector<CSMsgHandler *>::_M_emplace_back_aux<CSMsgHandler * const&>(int a1, _DWORD *a2)
{
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v6; // r5
  char *v7; // r6
  char *v8; // r3
  int v9; // r7

  v4 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  if ( v4 != 0 )
  {
    v5 = 2 * v4;
    v6 = 0x3FFFFFFF;
    if ( 2 * v4 < v4 )
      goto LABEL_8;
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
  if ( v5 <= 0x3FFFFFFF )
  {
    v7 = nullptr;
    if ( v5 == 0 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0x3FFFFFFF;
  }
LABEL_8:
  v7 = (char *)operator new(4 * v6);
LABEL_9:
  v8 = &v7[4 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2)];
  if ( v8 != nullptr )
    *(_DWORD *)v8 = *a2;
  v9 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<CSMsgHandler *>(
         *(void **)a1,
         *(_DWORD *)(a1 + 4),
         v7)
     + 4;
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v9;
  *(_DWORD *)(a1 + 8) = &v7[4 * v6];
}


//======================================================================
// void std::vector<anl::TCurve<double>::SControlPoint,std::allocator<anl::TCurve<double>::SControlPoint>>::_M_insert_aux<anl::TCurve<double>::SControlPoint>(__gnu_cxx::__normal_iterator<anl::TCurve<double>::SControlPoint*,std::vector<anl::TCurve<double>::SControlPoint,std::allocator<anl::TCurve<double>::SControlPoint>>>,anl::TCurve<double>::SControlPoint &&)
// address: 0x00316AF4   size: 0x114 (276 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIN3anl6TCurveIdE13SControlPointESaIS3_EE13_M_insert_auxIJS3_EEEvN9__gnu_cxx17__normal_iteratorIPS3_S5_EEDpOT_'
void __fastcall std::vector<anl::TCurve<double>::SControlPoint,std::allocator<anl::TCurve<double>::SControlPoint>>::_M_insert_aux<anl::TCurve<double>::SControlPoint>(
        int *a1,
        char *a2,
        _OWORD *a3)
{
  _OWORD *v4; // r0
  _OWORD *v5; // r4
  _OWORD *v6; // r5
  int i; // r6
  unsigned int v8; // r0
  unsigned int v9; // r3
  int v10; // r7
  int v11; // r4
  _OWORD *v12; // r0
  char *v13; // r6
  _OWORD *v14; // r4
  char *v15; // r4
  char *v16; // r6
  char *v17; // r4
  char *j; // [sp+0h] [bp-14h]
  _OWORD *v20; // [sp+4h] [bp-10h]
  char *v22; // [sp+8h] [bp-Ch]
  char *v23; // [sp+Ch] [bp-8h]

  v4 = (_OWORD *)a1[1];
  if ( v4 != (_OWORD *)a1[2] )
  {
    if ( v4 != nullptr )
      *v4 = *(v4 - 1);
    v5 = (_OWORD *)a1[1];
    a1[1] = (int)(v5 + 1);
    v6 = v5 - 1;
    for ( i = ((char *)(v5 - 1) - a2) >> 4; i > 0; --i )
      *--v5 = *--v6;
    *(_OWORD *)a2 = *a3;
    return;
  }
  v8 = ((int)v4 - *a1) >> 4;
  if ( v8 == 0 )
  {
    v9 = 1;
    goto LABEL_12;
  }
  v9 = 2 * v8;
  v10 = 0xFFFFFFF;
  if ( 2 * v8 >= v8 )
  {
LABEL_12:
    v10 = v9;
    if ( v9 > 0xFFFFFFF )
      v10 = 0xFFFFFFF;
  }
  v11 = (int)&a2[-*a1] >> 4;
  if ( v10 != 0 )
    v20 = (_OWORD *)operator new(16 * v10);
  else
    v20 = nullptr;
  v12 = &v20[v11];
  if ( v12 != nullptr )
    *v12 = *a3;
  v13 = (char *)*a1;
  v14 = v20;
  for ( j = (char *)*a1; j != a2; j += 16 )
  {
    if ( v14 != nullptr )
      *v14 = *(_OWORD *)j;
    ++v14;
  }
  v15 = j;
  v16 = (char *)&v20[((unsigned int)(j - v13) >> 4) + 1];
  v22 = v16;
  v23 = (char *)a1[1];
  while ( v15 != v23 )
  {
    if ( v16 != nullptr )
      *(_OWORD *)v16 = *(_OWORD *)v15;
    v16 += 16;
    v15 += 16;
  }
  v17 = &v22[16 * ((unsigned int)(v15 - j) >> 4)];
  if ( *a1 != 0 )
    operator delete((void *)*a1);
  a1[1] = (int)v17;
  *a1 = (int)v20;
  a1[2] = (int)&v20[v10];
}


//======================================================================
// void std::vector<anl::TCurve<TVec4D<float>>::SControlPoint,std::allocator<anl::TCurve<TVec4D<float>>::SControlPoint>>::_M_insert_aux<anl::TCurve<TVec4D<float>>::SControlPoint>(__gnu_cxx::__normal_iterator<anl::TCurve<TVec4D<float>>::SControlPoint*,std::vector<anl::TCurve<TVec4D<float>>::SControlPoint,std::allocator<anl::TCurve<TVec4D<float>>::SControlPoint>>>,anl::TCurve<TVec4D<float>>::SControlPoint &&)
// address: 0x0031743C   size: 0x11E (286 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIN3anl6TCurveI6TVec4DIfEE13SControlPointESaIS5_EE13_M_insert_auxIJS5_EEEvN9__gnu_cxx17__normal_iteratorIPS5_S7_EEDpOT_'
void __fastcall std::vector<anl::TCurve<TVec4D<float>>::SControlPoint,std::allocator<anl::TCurve<TVec4D<float>>::SControlPoint>>::_M_insert_aux<anl::TCurve<TVec4D<float>>::SControlPoint>(
        int a1,
        _BYTE *a2,
        _DWORD *a3)
{
  int v4; // r1
  _DWORD *v6; // r0
  int v7; // r3
  char *v8; // r5
  char *v9; // r4
  int i; // r6
  int v11; // r4
  unsigned int v12; // r1
  unsigned int v13; // r3
  int v14; // r5
  int v15; // r6
  _DWORD *v16; // r0
  int v17; // r3
  _DWORD *v18; // r6
  _DWORD *j; // r0
  _DWORD *v20; // r7
  int v21; // r3
  int v22; // r3
  _DWORD *v23; // [sp+0h] [bp-24h]
  _DWORD *v25; // [sp+4h] [bp-20h]
  _DWORD v26[7]; // [sp+8h] [bp-1Ch] BYREF

  v4 = *(_DWORD *)(a1 + 4);
  if ( v4 != *(_DWORD *)(a1 + 8) )
  {
    if ( v4 != 0 )
    {
      v6 = *(_DWORD **)(a1 + 4);
      v7 = *(_DWORD *)(v4 - 20);
      *v6 = *(_DWORD *)(v4 - 24);
      v6[1] = v7;
      TVec4D<float>::TVec4D(v6 + 2, (_DWORD *)(v4 - 16));
    }
    v8 = *(char **)(a1 + 4);
    *(_DWORD *)(a1 + 4) = v8 + 24;
    v9 = v8 - 24;
    for ( i = -1431655765 * ((v8 - 24 - a2) >> 3); i > 0; --i )
    {
      v8 -= 24;
      v9 -= 24;
      j_memcpy(v8, v9, 0x18u);
    }
    v11 = a3[1];
    v26[0] = *a3;
    v26[1] = v11;
    TVec4D<float>::TVec4D(&v26[2], a3 + 2);
    j_memcpy(a2, v26, 0x18u);
    return;
  }
  v12 = -1431655765 * ((v4 - *(_DWORD *)a1) >> 3);
  if ( v12 == 0 )
  {
    v13 = 1;
    goto LABEL_12;
  }
  v13 = 2 * v12;
  v14 = 178956970;
  if ( 2 * v12 >= v12 )
  {
LABEL_12:
    v14 = v13;
    if ( v13 > 0xAAAAAAA )
      v14 = 178956970;
  }
  v15 = -1431655765 * ((int)&a2[-*(_DWORD *)a1] >> 3);
  if ( v14 != 0 )
    v23 = (_DWORD *)operator new(24 * v14);
  else
    v23 = nullptr;
  v16 = &v23[6 * v15];
  if ( v16 != nullptr )
  {
    v17 = a3[1];
    *v16 = *a3;
    v16[1] = v17;
    TVec4D<float>::TVec4D(v16 + 2, a3 + 2);
  }
  v18 = *(_DWORD **)a1;
  for ( j = v23; ; j = v20 )
  {
    v20 = j + 6;
    if ( v18 == (_DWORD *)a2 )
      break;
    if ( j != nullptr )
    {
      v21 = v18[1];
      *j = *v18;
      j[1] = v21;
      TVec4D<float>::TVec4D(j + 2, v18 + 2);
    }
    v18 += 6;
  }
  v25 = *(_DWORD **)(a1 + 4);
  while ( v18 != v25 )
  {
    if ( v20 != nullptr )
    {
      v22 = v18[1];
      *v20 = *v18;
      v20[1] = v22;
      TVec4D<float>::TVec4D(v20 + 2, v18 + 2);
    }
    v20 += 6;
    v18 += 6;
  }
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)(a1 + 4) = v20;
  *(_DWORD *)a1 = v23;
  *(_DWORD *)(a1 + 8) = &v23[6 * v14];
}

