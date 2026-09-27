// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: std::vector

//======================================================================
// std::vector<Ogre::Vector2,std::allocator<Ogre::Vector2>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::Vector2*,std::vector<Ogre::Vector2,std::allocator<Ogre::Vector2>>>,unsigned int,Ogre::Vector2 const&)
// address: 0x001406C8   size: 0x14A (330 bytes)
//======================================================================
void __fastcall std::vector<Ogre::Vector2>::_M_fill_insert(int a1, char *a2, unsigned int a3, _DWORD *a4)
{
  int v7; // r6
  unsigned int v8; // r7
  int v9; // r7
  int v10; // r5
  int j; // r3
  char *v12; // r3
  char *v13; // r7
  _DWORD *v14; // r3
  unsigned int i; // r1
  _DWORD *v16; // r2
  char *v17; // r3
  unsigned int v18; // r3
  unsigned int v19; // r6
  unsigned int v20; // r6
  _DWORD *v21; // r3
  unsigned int v22; // r2
  _DWORD *v23; // r0
  _DWORD *v24; // r5
  int v25; // [sp+4h] [bp-10h]
  int v26; // [sp+4h] [bp-10h]
  int v27; // [sp+8h] [bp-Ch]
  _DWORD *v28; // [sp+8h] [bp-Ch]

  if ( a3 != 0 )
  {
    v7 = *(_DWORD *)(a1 + 4);
    if ( (*(_DWORD *)(a1 + 8) - v7) >> 3 < a3 )
    {
      v18 = (v7 - *(_DWORD *)a1) >> 3;
      if ( 0x1FFFFFFF - v18 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v19 = a3;
      if ( a3 < v18 )
        v19 = v18;
      v20 = v19 + v18;
      if ( v20 < v18 || v20 > 0x1FFFFFFF )
        v20 = 0x1FFFFFFF;
      v26 = (int)&a2[-*(_DWORD *)a1] >> 3;
      if ( v20 != 0 )
        v28 = (_DWORD *)operator new(8 * v20);
      else
        v28 = nullptr;
      v21 = &v28[2 * v26];
      v22 = a3;
      do
      {
        if ( v21 != nullptr )
        {
          *v21 = *a4;
          v21[1] = a4[1];
        }
        --v22;
        v21 += 2;
      }
      while ( v22 != 0 );
      v23 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::Vector2 *,Ogre::Vector2 *>(*(char **)a1, a2, v28);
      v24 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::Vector2 *,Ogre::Vector2 *>(
              a2,
              *(char **)(a1 + 4),
              &v23[2 * a3]);
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)(a1 + 4) = v24;
      *(_DWORD *)a1 = v28;
      *(_DWORD *)(a1 + 8) = &v28[2 * v20];
    }
    else
    {
      v27 = *a4;
      v25 = a4[1];
      v8 = (v7 - (int)a2) >> 3;
      if ( v8 <= a3 )
      {
        v14 = *(_DWORD **)(a1 + 4);
        for ( i = a3 - v8; i != 0; --i )
        {
          if ( v14 != nullptr )
          {
            *v14 = v27;
            v14[1] = v25;
          }
          v14 += 2;
        }
        v16 = (_DWORD *)(*(_DWORD *)(a1 + 4) + 8 * (a3 - v8));
        *(_DWORD *)(a1 + 4) = v16;
        std::__uninitialized_copy<false>::__uninit_copy<Ogre::Vector2 *,Ogre::Vector2 *>(a2, (char *)v7, v16);
        v17 = a2;
        *(_DWORD *)(a1 + 4) += 8 * v8;
        while ( v17 != (char *)v7 )
        {
          *(_DWORD *)v17 = v27;
          *((_DWORD *)v17 + 1) = v25;
          v17 += 8;
        }
      }
      else
      {
        v9 = 8 * a3;
        v10 = v7 - 8 * a3;
        std::__uninitialized_copy<false>::__uninit_copy<Ogre::Vector2 *,Ogre::Vector2 *>(
          (char *)v10,
          (char *)v7,
          (_DWORD *)v7);
        *(_DWORD *)(a1 + 4) += v9;
        for ( j = (v10 - (int)a2) >> 3; j > 0; --j )
        {
          v10 -= 8;
          v7 -= 8;
          *(_DWORD *)v7 = *(_DWORD *)v10;
          *(_DWORD *)(v7 + 4) = *(_DWORD *)(v10 + 4);
        }
        v12 = a2;
        v13 = &a2[v9];
        while ( v12 != v13 )
        {
          *(_DWORD *)v12 = v27;
          *((_DWORD *)v12 + 1) = v25;
          v12 += 8;
        }
      }
    }
  }
}


//======================================================================
// std::vector<float,std::allocator<float>>::_M_fill_insert(__gnu_cxx::__normal_iterator<float *,std::vector<float,std::allocator<float>>>,unsigned int,float const&)
// address: 0x001408B4   size: 0x120 (288 bytes)
//======================================================================
void __fastcall std::vector<float>::_M_fill_insert(int a1, _DWORD *a2, unsigned int a3, void **a4)
{
  _DWORD *v5; // r5
  _BYTE *v7; // r7
  int v8; // r6
  _DWORD *v9; // r6
  void *v10; // r2
  unsigned int v11; // r3
  unsigned int v12; // r7
  unsigned int v13; // r7
  char *v14; // r2
  void *v15; // r1
  unsigned int v16; // r3
  int v17; // r0
  int v18; // r5
  unsigned int v20; // [sp+4h] [bp-10h]
  void *v21; // [sp+8h] [bp-Ch]
  char *v22; // [sp+8h] [bp-Ch]
  int v23; // [sp+Ch] [bp-8h]

  v5 = a2;
  if ( a3 != 0 )
  {
    v7 = *(_BYTE **)(a1 + 4);
    if ( (*(_DWORD *)(a1 + 8) - (int)v7) >> 2 < a3 )
    {
      v11 = (int)&v7[-*(_DWORD *)a1] >> 2;
      if ( 0x3FFFFFFF - v11 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v12 = a3;
      if ( a3 < v11 )
        v12 = v11;
      v13 = v12 + v11;
      if ( v13 < v11 || v13 > 0x3FFFFFFF )
        v13 = 0x3FFFFFFF;
      v23 = ((int)a2 - *(_DWORD *)a1) >> 2;
      if ( v13 != 0 )
        v22 = (char *)operator new(4 * v13);
      else
        v22 = nullptr;
      v14 = &v22[4 * v23];
      v15 = *a4;
      v16 = a3;
      do
      {
        --v16;
        *(_DWORD *)v14 = v15;
        v14 += 4;
      }
      while ( v16 != 0 );
      v17 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<float>(*(void **)a1, (int)v5, v22);
      v18 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<float>(
              v5,
              *(_DWORD *)(a1 + 4),
              (void *)(v17 + 4 * a3));
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)(a1 + 4) = v18;
      *(_DWORD *)a1 = v22;
      *(_DWORD *)(a1 + 8) = &v22[4 * v13];
    }
    else
    {
      v20 = (v7 - (_BYTE *)a2) >> 2;
      v21 = *a4;
      if ( v20 <= a3 )
      {
        memset32(v7, (int)v21, a3 - v20);
        v10 = (void *)(*(_DWORD *)(a1 + 4) + 4 * (a3 - v20));
        *(_DWORD *)(a1 + 4) = v10;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<float>(a2, (int)v7, v10);
        *(_DWORD *)(a1 + 4) += 4 * v20;
        while ( v5 != (_DWORD *)v7 )
          *v5++ = v21;
      }
      else
      {
        v8 = 4 * a3;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<float>(&v7[-4 * a3], (int)v7, v7);
        *(_DWORD *)(a1 + 4) += v8;
        if ( (&v7[-v8] - (_BYTE *)v5) >> 2 != 0 )
          j_memmove(&v7[-4 * ((&v7[-v8] - (_BYTE *)v5) >> 2)], v5, 4 * ((&v7[-v8] - (_BYTE *)v5) >> 2));
        v9 = &v5[v8 / 4u];
        while ( v5 != v9 )
          *v5++ = v21;
      }
    }
  }
}


//======================================================================
// std::vector<int,std::allocator<int>>::_M_fill_insert(__gnu_cxx::__normal_iterator<int *,std::vector<int,std::allocator<int>>>,unsigned int,int const&)
// address: 0x00140A70   size: 0x120 (288 bytes)
//======================================================================
void __fastcall std::vector<int>::_M_fill_insert(int a1, _DWORD *a2, unsigned int a3, void **a4)
{
  _DWORD *v5; // r5
  _BYTE *v7; // r7
  int v8; // r6
  _DWORD *v9; // r6
  void *v10; // r2
  unsigned int v11; // r3
  unsigned int v12; // r7
  unsigned int v13; // r7
  char *v14; // r2
  void *v15; // r1
  unsigned int v16; // r3
  int v17; // r0
  int v18; // r5
  unsigned int v20; // [sp+4h] [bp-10h]
  void *v21; // [sp+8h] [bp-Ch]
  char *v22; // [sp+8h] [bp-Ch]
  int v23; // [sp+Ch] [bp-8h]

  v5 = a2;
  if ( a3 != 0 )
  {
    v7 = *(_BYTE **)(a1 + 4);
    if ( (*(_DWORD *)(a1 + 8) - (int)v7) >> 2 < a3 )
    {
      v11 = (int)&v7[-*(_DWORD *)a1] >> 2;
      if ( 0x3FFFFFFF - v11 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v12 = a3;
      if ( a3 < v11 )
        v12 = v11;
      v13 = v12 + v11;
      if ( v13 < v11 || v13 > 0x3FFFFFFF )
        v13 = 0x3FFFFFFF;
      v23 = ((int)a2 - *(_DWORD *)a1) >> 2;
      if ( v13 != 0 )
        v22 = (char *)operator new(4 * v13);
      else
        v22 = nullptr;
      v14 = &v22[4 * v23];
      v15 = *a4;
      v16 = a3;
      do
      {
        --v16;
        *(_DWORD *)v14 = v15;
        v14 += 4;
      }
      while ( v16 != 0 );
      v17 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<int>(*(void **)a1, (int)v5, v22);
      v18 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<int>(
              v5,
              *(_DWORD *)(a1 + 4),
              (void *)(v17 + 4 * a3));
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)(a1 + 4) = v18;
      *(_DWORD *)a1 = v22;
      *(_DWORD *)(a1 + 8) = &v22[4 * v13];
    }
    else
    {
      v20 = (v7 - (_BYTE *)a2) >> 2;
      v21 = *a4;
      if ( v20 <= a3 )
      {
        memset32(v7, (int)v21, a3 - v20);
        v10 = (void *)(*(_DWORD *)(a1 + 4) + 4 * (a3 - v20));
        *(_DWORD *)(a1 + 4) = v10;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<int>(a2, (int)v7, v10);
        *(_DWORD *)(a1 + 4) += 4 * v20;
        while ( v5 != (_DWORD *)v7 )
          *v5++ = v21;
      }
      else
      {
        v8 = 4 * a3;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<int>(&v7[-4 * a3], (int)v7, v7);
        *(_DWORD *)(a1 + 4) += v8;
        if ( (&v7[-v8] - (_BYTE *)v5) >> 2 != 0 )
          j_memmove(&v7[-4 * ((&v7[-v8] - (_BYTE *)v5) >> 2)], v5, 4 * ((&v7[-v8] - (_BYTE *)v5) >> 2));
        v9 = &v5[v8 / 4u];
        while ( v5 != v9 )
          *v5++ = v21;
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T,std::allocator<Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T*,std::vector<Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T,std::allocator<Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T>>>,unsigned int,Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T const&)
// address: 0x00140D78   size: 0x1AA (426 bytes)
//======================================================================
void __fastcall std::vector<Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T,std::allocator<Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T>>::_M_fill_insert(
        void **a1,
        char *a2,
        unsigned int a3,
        const void *a4)
{
  char *v6; // r5
  int v7; // r2
  char *v8; // r6
  char *j; // r7
  int k; // r7
  char *v11; // r0
  char *v12; // r1
  char *v13; // r7
  unsigned int v14; // r6
  char *v15; // r6
  char *v16; // r7
  unsigned int v17; // r3
  unsigned int v18; // r5
  unsigned int v19; // r5
  int v20; // r7
  char *v21; // r7
  char *v22; // r7
  int v23; // r3
  char *v24; // r6
  char *v25; // r7
  char *v26; // [sp+4h] [bp-30h]
  unsigned int v27; // [sp+4h] [bp-30h]
  unsigned int v28; // [sp+4h] [bp-30h]
  char *i; // [sp+4h] [bp-30h]
  unsigned int v30; // [sp+8h] [bp-2Ch]
  int v31; // [sp+8h] [bp-2Ch]
  char *v32; // [sp+8h] [bp-2Ch]
  char *v34; // [sp+Ch] [bp-28h]
  _BYTE v36[24]; // [sp+1Ch] [bp-18h] BYREF

  if ( a3 != 0 )
  {
    v6 = (char *)a1[1];
    if ( -858993459 * (((_BYTE *)a1[2] - v6) >> 2) < a3 )
    {
      v17 = -858993459 * ((v6 - (_BYTE *)*a1) >> 2);
      if ( 214748364 - v17 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v18 = a3;
      if ( a3 < v17 )
        v18 = v17;
      v19 = v18 + v17;
      if ( v19 < v17 || v19 > 0xCCCCCCC )
        v19 = 214748364;
      v20 = -858993459 * ((a2 - (_BYTE *)*a1) >> 2);
      if ( v19 != 0 )
        v32 = (char *)operator new(20 * v19);
      else
        v32 = nullptr;
      v28 = a3;
      v21 = &v32[20 * v20];
      do
      {
        std::_Construct<Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T,Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T>(
          v21,
          a4);
        v21 += 20;
        --v28;
      }
      while ( v28 != 0 );
      v22 = v32;
      for ( i = (char *)*a1; i != a2; i += 20 )
      {
        std::_Construct<Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T,Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T>(
          v22,
          i);
        v22 += 20;
      }
      v23 = 20 * a3;
      v24 = i;
      v25 = &v22[v23];
      v34 = (char *)a1[1];
      while ( v24 != v34 )
      {
        std::_Construct<Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T,Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T>(
          v25,
          v24);
        v25 += 20;
        v24 += 20;
      }
      if ( *a1 != nullptr )
        operator delete(*a1);
      a1[1] = v25;
      *a1 = v32;
      a1[2] = &v32[20 * v19];
    }
    else
    {
      j_memcpy(v36, a4, 0x14u);
      v30 = -858993459 * ((v6 - a2) >> 2);
      if ( v30 <= a3 )
      {
        v13 = v6;
        v14 = a3 - v30;
        v27 = v14;
        while ( v14 != 0 )
        {
          std::_Construct<Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T,Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T>(
            v13,
            v36);
          --v14;
          v13 += 20;
        }
        v15 = a2;
        v16 = (char *)a1[1] + 20 * v27;
        a1[1] = v16;
        while ( v15 != v6 )
        {
          std::_Construct<Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T,Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T>(
            v16,
            v15);
          v16 += 20;
          v15 += 20;
        }
        v11 = a2;
        a1[1] = (char *)a1[1] + 4 * ((v6 - a2) >> 2);
        v12 = v15;
      }
      else
      {
        v7 = 20 * a3;
        v8 = &v6[-20 * a3];
        v31 = v7;
        v26 = v6;
        for ( j = v8; j != v6; j += 20 )
        {
          std::_Construct<Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T,Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T>(
            v26,
            j);
          v26 += 20;
        }
        a1[1] = (char *)a1[1] + v31;
        for ( k = -858993459 * ((v8 - a2) >> 2); k > 0; --k )
        {
          v6 -= 20;
          v8 -= 20;
          j_memcpy(v6, v8, 0x14u);
        }
        v11 = a2;
        v12 = &a2[v31];
      }
      std::__fill_a<Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T *,Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T>(
        v11,
        v12,
        v36);
    }
  }
}


//======================================================================
// std::vector<Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T,std::allocator<Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T*,std::vector<Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T,std::allocator<Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T>>>,unsigned int,Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T const&)
// address: 0x00140FF0   size: 0x190 (400 bytes)
//======================================================================
void __fastcall std::vector<Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T,std::allocator<Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T>>::_M_fill_insert(
        void **a1,
        char *a2,
        unsigned int a3,
        const void *a4)
{
  unsigned int v5; // r5
  int v6; // r5
  char *v7; // r7
  char *v8; // r6
  char *j; // r5
  int k; // r4
  char *v11; // r0
  char *v12; // r1
  char *v13; // r7
  unsigned int v14; // r5
  unsigned int i; // r6
  char *v16; // r6
  char *v17; // r5
  unsigned int v18; // r3
  unsigned int v19; // r2
  int v20; // r7
  unsigned int v21; // r6
  char *v22; // r7
  char *v23; // r6
  char *v24; // r7
  char *v25; // r7
  char *v26; // r5
  char *v27; // [sp+4h] [bp-38h]
  int v28; // [sp+4h] [bp-38h]
  unsigned int v29; // [sp+8h] [bp-34h]
  int v30; // [sp+8h] [bp-34h]
  char *v31; // [sp+8h] [bp-34h]
  _BYTE v34[36]; // [sp+18h] [bp-24h] BYREF

  v5 = a3;
  if ( a3 != 0 )
  {
    v27 = (char *)a1[1];
    if ( ((_BYTE *)a1[2] - v27) >> 5 < a3 )
    {
      v18 = (v27 - (_BYTE *)*a1) >> 5;
      if ( 0x7FFFFFF - v18 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      if ( a3 < v18 )
        a3 = (v27 - (_BYTE *)*a1) >> 5;
      v19 = a3 + v18;
      if ( v19 < v18 )
      {
        v28 = 0x7FFFFFF;
      }
      else
      {
        v28 = v19;
        if ( v19 > 0x7FFFFFF )
          v28 = 0x7FFFFFF;
      }
      v20 = (a2 - (_BYTE *)*a1) >> 5;
      if ( v28 != 0 )
        v31 = (char *)operator new(32 * v28);
      else
        v31 = nullptr;
      v21 = v5;
      v22 = &v31[32 * v20];
      do
      {
        --v21;
        std::_Construct<Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T,Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T>(
          v22,
          a4);
        v22 += 32;
      }
      while ( v21 != 0 );
      v23 = (char *)*a1;
      v24 = v31;
      while ( v23 != a2 )
      {
        std::_Construct<Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T,Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T>(
          v24,
          v23);
        v23 += 32;
        v24 += 32;
      }
      v25 = &v24[32 * v5];
      v26 = (char *)a1[1];
      while ( v23 != v26 )
      {
        std::_Construct<Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T,Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T>(
          v25,
          v23);
        v25 += 32;
        v23 += 32;
      }
      if ( *a1 != nullptr )
        operator delete(*a1);
      *a1 = v31;
      a1[1] = v25;
      a1[2] = &v31[32 * v28];
    }
    else
    {
      j_memcpy(v34, a4, 0x20u);
      v29 = (v27 - a2) >> 5;
      if ( v29 <= v5 )
      {
        v13 = v27;
        v14 = v5 - v29;
        for ( i = v14; i != 0; --i )
        {
          std::_Construct<Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T,Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T>(
            v13,
            v34);
          v13 += 32;
        }
        v16 = a2;
        v17 = (char *)a1[1] + 32 * v14;
        a1[1] = v17;
        while ( v16 != v27 )
        {
          std::_Construct<Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T,Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T>(
            v17,
            v16);
          v17 += 32;
          v16 += 32;
        }
        v11 = a2;
        a1[1] = (char *)a1[1] + 32 * v29;
        v12 = v16;
      }
      else
      {
        v6 = 32 * v5;
        v7 = &v27[-v6];
        v30 = v6;
        v8 = v27;
        for ( j = &v27[-v6]; j != v27; j += 32 )
        {
          std::_Construct<Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T,Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T>(
            v8,
            j);
          v8 += 32;
        }
        a1[1] = (char *)a1[1] + v30;
        for ( k = (v7 - a2) >> 5; k > 0; --k )
        {
          v7 -= 32;
          v27 -= 32;
          j_memcpy(v27, v7, 0x20u);
        }
        v11 = a2;
        v12 = &a2[v30];
      }
      std::__fill_a<Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T *,Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T>(
        v11,
        v12,
        v34);
    }
  }
}


//======================================================================
// std::vector<Ogre::BaseKeyFrameArray::AnimRange,std::allocator<Ogre::BaseKeyFrameArray::AnimRange>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::BaseKeyFrameArray::AnimRange*,std::vector<Ogre::BaseKeyFrameArray::AnimRange,std::allocator<Ogre::BaseKeyFrameArray::AnimRange>>>,unsigned int,Ogre::BaseKeyFrameArray::AnimRange const&)
// address: 0x00141230   size: 0x13A (314 bytes)
//======================================================================
void __fastcall std::vector<Ogre::BaseKeyFrameArray::AnimRange>::_M_fill_insert(
        int a1,
        char *a2,
        unsigned int a3,
        _DWORD *a4)
{
  char *v7; // r1
  int v8; // r7
  unsigned int v9; // r6
  int v10; // r5
  char *v11; // r6
  char *v12; // r5
  char *j; // r3
  _DWORD *v14; // r3
  unsigned int i; // r1
  void *v16; // r2
  char *v17; // r3
  unsigned int v18; // r3
  int v19; // r6
  unsigned int v20; // r6
  char *v21; // r3
  unsigned int v22; // r2
  int v23; // r0
  int v24; // r5
  char *v25; // [sp+4h] [bp-10h]
  char *v26; // [sp+4h] [bp-10h]
  int v27; // [sp+8h] [bp-Ch]
  int v28; // [sp+8h] [bp-Ch]

  if ( a3 != 0 )
  {
    v7 = *(char **)(a1 + 4);
    v25 = v7;
    if ( (*(_DWORD *)(a1 + 8) - (int)v7) >> 3 < a3 )
    {
      v18 = (int)&v7[-*(_DWORD *)a1] >> 3;
      if ( 0x1FFFFFFF - v18 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v19 = a3;
      if ( a3 < v18 )
        v19 = (int)&v7[-*(_DWORD *)a1] >> 3;
      v20 = v19 + v18;
      if ( v20 < v18 || v20 > 0x1FFFFFFF )
        v20 = 0x1FFFFFFF;
      v28 = (int)&a2[-*(_DWORD *)a1] >> 3;
      if ( v20 != 0 )
        v26 = (char *)operator new(8 * v20);
      else
        v26 = nullptr;
      v21 = &v26[8 * v28];
      v22 = a3;
      do
      {
        --v22;
        *(_DWORD *)v21 = *a4;
        *((_DWORD *)v21 + 1) = a4[1];
        v21 += 8;
      }
      while ( v22 != 0 );
      v23 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::BaseKeyFrameArray::AnimRange>(
              *(void **)a1,
              (int)a2,
              v26);
      v24 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::BaseKeyFrameArray::AnimRange>(
              a2,
              *(_DWORD *)(a1 + 4),
              (void *)(v23 + 8 * a3));
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)(a1 + 4) = v24;
      *(_DWORD *)a1 = v26;
      *(_DWORD *)(a1 + 8) = &v26[8 * v20];
    }
    else
    {
      v8 = a4[1];
      v27 = *a4;
      v9 = (v7 - a2) >> 3;
      if ( v9 <= a3 )
      {
        v14 = *(_DWORD **)(a1 + 4);
        for ( i = a3 - v9; i != 0; --i )
        {
          v14[1] = v8;
          *v14 = v27;
          v14 += 2;
        }
        v16 = (void *)(*(_DWORD *)(a1 + 4) + 8 * (a3 - v9));
        *(_DWORD *)(a1 + 4) = v16;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::BaseKeyFrameArray::AnimRange>(
          a2,
          (int)v25,
          v16);
        v17 = a2;
        *(_DWORD *)(a1 + 4) += 8 * v9;
        while ( v17 != v25 )
        {
          *((_DWORD *)v17 + 1) = v8;
          *(_DWORD *)v17 = v27;
          v17 += 8;
        }
      }
      else
      {
        v10 = 8 * a3;
        v11 = &v7[-8 * a3];
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::BaseKeyFrameArray::AnimRange>(
          v11,
          (int)v7,
          v7);
        *(_DWORD *)(a1 + 4) += v10;
        if ( (v11 - a2) >> 3 != 0 )
          j_memmove(&v25[-8 * ((v11 - a2) >> 3)], a2, 8 * ((v11 - a2) >> 3));
        v12 = &a2[v10];
        for ( j = a2; j != v12; j += 8 )
        {
          *((_DWORD *)j + 1) = v8;
          *(_DWORD *)j = v27;
        }
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::KeyFrameArray<float>::KEYFRAME_T,std::allocator<Ogre::KeyFrameArray<float>::KEYFRAME_T>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::KeyFrameArray<float>::KEYFRAME_T*,std::vector<Ogre::KeyFrameArray<float>::KEYFRAME_T,std::allocator<Ogre::KeyFrameArray<float>::KEYFRAME_T>>>,unsigned int,Ogre::KeyFrameArray<float>::KEYFRAME_T const&)
// address: 0x00141468   size: 0x1D6 (470 bytes)
//======================================================================
void __fastcall std::vector<Ogre::KeyFrameArray<float>::KEYFRAME_T,std::allocator<Ogre::KeyFrameArray<float>::KEYFRAME_T>>::_M_fill_insert(
        int a1,
        char *a2,
        unsigned int a3,
        unsigned __int8 *a4)
{
  int *v6; // r7
  int v7; // r6
  int v8; // r4
  int *v9; // r4
  int *j; // r3
  unsigned int v11; // r0
  int *v12; // r3
  void *v13; // r2
  int *i; // r3
  unsigned int v15; // r3
  int v16; // r1
  unsigned int v17; // r1
  int v18; // r6
  int v19; // r7
  char *v20; // r7
  int v21; // r0
  int v22; // r4
  unsigned int v24; // [sp+0h] [bp-14h]
  void *v25; // [sp+4h] [bp-10h]
  char *v26; // [sp+4h] [bp-10h]
  unsigned int v28; // [sp+Ch] [bp-8h]

  if ( a3 != 0 )
  {
    v6 = *(int **)(a1 + 4);
    if ( (*(_DWORD *)(a1 + 8) - (int)v6) >> 3 < a3 )
    {
      v15 = ((int)v6 - *(_DWORD *)a1) >> 3;
      if ( 0x1FFFFFFF - v15 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v16 = a3;
      if ( a3 < v15 )
        v16 = ((int)v6 - *(_DWORD *)a1) >> 3;
      v17 = v16 + v15;
      if ( v17 < v15 || (v18 = v17, v17 > 0x1FFFFFFF) )
        v18 = 0x1FFFFFFF;
      v19 = (int)&a2[-*(_DWORD *)a1] >> 3;
      if ( v18 != 0 )
        v26 = (char *)operator new(8 * v18);
      else
        v26 = nullptr;
      v28 = a3;
      v20 = &v26[8 * v19];
      do
      {
        *(_QWORD *)v20 = *(_QWORD *)a4;
        v20 += 8;
        --v28;
      }
      while ( v28 != 0 );
      v21 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::KeyFrameArray<float>::KEYFRAME_T>(
              *(void **)a1,
              (int)a2,
              v26);
      v22 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::KeyFrameArray<float>::KEYFRAME_T>(
              a2,
              *(_DWORD *)(a1 + 4),
              (void *)(v21 + 8 * a3));
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)(a1 + 4) = v22;
      *(_DWORD *)a1 = v26;
      *(_DWORD *)(a1 + 8) = &v26[8 * v18];
    }
    else
    {
      v7 = (a4[1] << 8) | *a4 | (a4[2] << 16) | (a4[3] << 24);
      v25 = (void *)((a4[7] << 24) | (a4[5] << 8) | a4[4] | (a4[6] << 16));
      v24 = ((char *)v6 - a2) >> 3;
      if ( v24 <= a3 )
      {
        v11 = a3 - v24;
        v12 = v6;
        while ( v11 != 0 )
        {
          *v12 = v7;
          v12[1] = (int)v25;
          --v11;
          v12 += 2;
        }
        v13 = (void *)(*(_DWORD *)(a1 + 4) + 8 * (a3 - v24));
        *(_DWORD *)(a1 + 4) = v13;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::KeyFrameArray<float>::KEYFRAME_T>(
          a2,
          (int)v6,
          v13);
        *(_DWORD *)(a1 + 4) += 8 * v24;
        for ( i = (int *)a2; i != v6; i += 2 )
        {
          *i = v7;
          i[1] = (int)v25;
        }
      }
      else
      {
        v8 = 8 * a3;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::KeyFrameArray<float>::KEYFRAME_T>(
          &v6[-2 * a3],
          (int)v6,
          v6);
        *(_DWORD *)(a1 + 4) += v8;
        if ( ((char *)&v6[v8 / 0xFFFFFFFC] - a2) >> 3 != 0 )
          j_memmove(
            &v6[-2 * (((char *)&v6[v8 / 0xFFFFFFFC] - a2) >> 3)],
            a2,
            8 * (((char *)&v6[v8 / 0xFFFFFFFC] - a2) >> 3));
        v9 = (int *)&a2[v8];
        for ( j = (int *)a2; j != v9; j += 2 )
        {
          *j = v7;
          j[1] = (int)v25;
        }
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::KeyFrameArray<float>::CONTROL_POINT_T,std::allocator<Ogre::KeyFrameArray<float>::CONTROL_POINT_T>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::KeyFrameArray<float>::CONTROL_POINT_T*,std::vector<Ogre::KeyFrameArray<float>::CONTROL_POINT_T,std::allocator<Ogre::KeyFrameArray<float>::CONTROL_POINT_T>>>,unsigned int,Ogre::KeyFrameArray<float>::CONTROL_POINT_T const&)
// address: 0x001416E0   size: 0x1B4 (436 bytes)
//======================================================================
void __fastcall std::vector<Ogre::KeyFrameArray<float>::CONTROL_POINT_T,std::allocator<Ogre::KeyFrameArray<float>::CONTROL_POINT_T>>::_M_fill_insert(
        int a1,
        char *a2,
        unsigned int a3,
        unsigned __int8 *a4)
{
  char *v6; // r6
  int v7; // r7
  int v8; // r4
  char *v9; // r4
  char *j; // r3
  unsigned int v11; // r0
  char *v12; // r3
  void *v13; // r2
  char *i; // r3
  unsigned int v15; // r6
  unsigned int v16; // r3
  unsigned int v17; // r3
  int v18; // r6
  int v19; // r7
  char *v20; // r7
  int v21; // r0
  int v22; // r4
  unsigned int v24; // [sp+0h] [bp-14h]
  void *v25; // [sp+4h] [bp-10h]
  char *v26; // [sp+4h] [bp-10h]
  unsigned int v28; // [sp+Ch] [bp-8h]

  if ( a3 != 0 )
  {
    v6 = *(char **)(a1 + 4);
    if ( (*(_DWORD *)(a1 + 8) - (int)v6) >> 3 < a3 )
    {
      v15 = (int)&v6[-*(_DWORD *)a1] >> 3;
      if ( 0x1FFFFFFF - v15 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v16 = a3;
      if ( a3 < v15 )
        v16 = v15;
      v17 = v16 + v15;
      if ( v17 < v15 || (v18 = v17, v17 > 0x1FFFFFFF) )
        v18 = 0x1FFFFFFF;
      v19 = (int)&a2[-*(_DWORD *)a1] >> 3;
      if ( v18 != 0 )
        v26 = (char *)operator new(8 * v18);
      else
        v26 = nullptr;
      v28 = a3;
      v20 = &v26[8 * v19];
      do
      {
        *(_QWORD *)v20 = *(_QWORD *)a4;
        v20 += 8;
        --v28;
      }
      while ( v28 != 0 );
      v21 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::KeyFrameArray<float>::CONTROL_POINT_T>(
              *(void **)a1,
              (int)a2,
              v26);
      v22 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::KeyFrameArray<float>::CONTROL_POINT_T>(
              a2,
              *(_DWORD *)(a1 + 4),
              (void *)(v21 + 8 * a3));
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)(a1 + 4) = v22;
      *(_DWORD *)a1 = v26;
      *(_DWORD *)(a1 + 8) = &v26[8 * v18];
    }
    else
    {
      v25 = (void *)((a4[3] << 24) | (a4[1] << 8) | *a4 | (a4[2] << 16));
      v7 = (a4[5] << 8) | a4[4] | (a4[6] << 16) | (a4[7] << 24);
      v24 = (v6 - a2) >> 3;
      if ( v24 <= a3 )
      {
        v11 = a3 - v24;
        v12 = v6;
        while ( v11 != 0 )
        {
          v12[4] = v7;
          --v11;
          *(_DWORD *)v12 = v25;
          v12[5] = BYTE1(v7);
          v12[6] = BYTE2(v7);
          v12[7] = HIBYTE(v7);
          v12 += 8;
        }
        v13 = (void *)(*(_DWORD *)(a1 + 4) + 8 * (a3 - v24));
        *(_DWORD *)(a1 + 4) = v13;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::KeyFrameArray<float>::CONTROL_POINT_T>(
          a2,
          (int)v6,
          v13);
        *(_DWORD *)(a1 + 4) += 8 * v24;
        for ( i = a2; i != v6; i += 8 )
        {
          i[4] = v7;
          *(_DWORD *)i = v25;
          i[5] = BYTE1(v7);
          i[6] = BYTE2(v7);
          i[7] = HIBYTE(v7);
        }
      }
      else
      {
        v8 = 8 * a3;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::KeyFrameArray<float>::CONTROL_POINT_T>(
          &v6[-8 * a3],
          (int)v6,
          v6);
        *(_DWORD *)(a1 + 4) += v8;
        if ( (&v6[-v8] - a2) >> 3 != 0 )
          j_memmove(&v6[-8 * ((&v6[-v8] - a2) >> 3)], a2, 8 * ((&v6[-v8] - a2) >> 3));
        v9 = &a2[v8];
        for ( j = a2; j != v9; j += 8 )
        {
          j[4] = v7;
          *(_DWORD *)j = v25;
          j[5] = BYTE1(v7);
          j[6] = BYTE2(v7);
          j[7] = HIBYTE(v7);
        }
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::RenderableObject *,std::allocator<Ogre::RenderableObject *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::RenderableObject **,std::vector<Ogre::RenderableObject *,std::allocator<Ogre::RenderableObject *>>>,Ogre::RenderableObject * const&)
// address: 0x00143F50   size: 0xA6 (166 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::RenderableObject *>::_M_insert_aux(__int64 a1, _DWORD *a2)
{
  _DWORD *v3; // r3
  __int64 v4; // r4
  int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r2
  int v8; // r6
  _DWORD *v9; // r3
  int v10; // r0
  __int64 v12; // [sp+0h] [bp-Ch]

  v12 = a1;
  v3 = *(_DWORD **)(a1 + 4);
  v4 = a1;
  if ( v3 != *(_DWORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
      *v3 = *(v3 - 1);
    LODWORD(a1) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v4 + 4) = a1 + 4;
    LODWORD(v4) = *a2;
    v5 = ((int)a1 - 4 - HIDWORD(a1)) >> 2;
    if ( v5 != 0 )
      j_memmove((void *)(a1 - 4 * v5), (const void *)HIDWORD(a1), 4 * v5);
    *(_DWORD *)HIDWORD(v4) = v4;
    return v12;
  }
  v6 = ((int)v3 - *(_DWORD *)a1) >> 2;
  if ( v6 == 0 )
  {
    v7 = 1;
    goto LABEL_11;
  }
  v7 = 2 * v6;
  v8 = 0x3FFFFFFF;
  if ( 2 * v6 >= v6 )
  {
LABEL_11:
    v8 = v7;
    if ( v7 > 0x3FFFFFFF )
      v8 = 0x3FFFFFFF;
  }
  LODWORD(v12) = (HIDWORD(a1) - *(_DWORD *)a1) >> 2;
  HIDWORD(v12) = 4 * v8;
  if ( v8 != 0 )
    v8 = operator new(4 * v8);
  v9 = (_DWORD *)(v8 + 4 * v12);
  if ( v9 != nullptr )
    *v9 = *a2;
  v10 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::RenderableObject *>(
          *(void **)v4,
          SHIDWORD(v4),
          (void *)v8);
  HIDWORD(v4) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::RenderableObject *>(
                  (void *)HIDWORD(v4),
                  *(_DWORD *)(v4 + 4),
                  (void *)(v10 + 4));
  if ( *(_DWORD *)v4 != 0 )
    operator delete(*(void **)v4);
  *(_DWORD *)v4 = v8;
  *(_DWORD *)(v4 + 4) = HIDWORD(v4);
  *(_DWORD *)(v4 + 8) = v8 + HIDWORD(v12);
  return v12;
}


//======================================================================
// std::vector<Ogre::PECollisionFace,std::allocator<Ogre::PECollisionFace>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::PECollisionFace*,std::vector<Ogre::PECollisionFace,std::allocator<Ogre::PECollisionFace>>>,unsigned int,Ogre::PECollisionFace const&)
// address: 0x00148B2C   size: 0x1BE (446 bytes)
//======================================================================
void __fastcall std::vector<Ogre::PECollisionFace>::_M_fill_insert(int *a1, int a2, unsigned int a3, int a4)
{
  unsigned int v5; // r5
  int v6; // r3
  int v7; // r6
  int v8; // r2
  int v9; // r5
  int j; // r7
  int k; // r7
  int m; // r4
  int v13; // r7
  unsigned int v14; // r5
  int v15; // r7
  int v16; // r5
  int i; // r4
  unsigned int v18; // r3
  unsigned int v19; // r2
  int v20; // r7
  unsigned int v21; // r6
  int v22; // r7
  int v23; // r6
  int v24; // r7
  int v25; // r7
  int v26; // r5
  unsigned int v27; // [sp+4h] [bp-D0h]
  int v28; // [sp+4h] [bp-D0h]
  int v29; // [sp+4h] [bp-D0h]
  int v30; // [sp+8h] [bp-CCh]
  unsigned int v31; // [sp+8h] [bp-CCh]
  int v32; // [sp+8h] [bp-CCh]
  _BYTE v35[184]; // [sp+1Ch] [bp-B8h] BYREF

  v5 = a3;
  if ( a3 != 0 )
  {
    v6 = a1[1];
    if ( -1527099483 * ((a1[2] - v6) >> 2) < a3 )
    {
      v18 = -1527099483 * ((v6 - *a1) >> 2);
      if ( 23860929 - v18 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      if ( a3 < v18 )
        a3 = v18;
      v19 = a3 + v18;
      if ( v19 < v18 )
      {
        v29 = 23860929;
      }
      else
      {
        v29 = v19;
        if ( v19 > 0x16C16C1 )
          v29 = 23860929;
      }
      v20 = -1527099483 * ((a2 - *a1) >> 2);
      if ( v29 != 0 )
        v32 = operator new(180 * v29);
      else
        v32 = 0;
      v21 = v5;
      v22 = v32 + 180 * v20;
      do
      {
        --v21;
        std::_Construct<Ogre::PECollisionFace,Ogre::PECollisionFace>(v22, a4);
        v22 += 180;
      }
      while ( v21 != 0 );
      v23 = *a1;
      v24 = v32;
      while ( v23 != a2 )
      {
        std::_Construct<Ogre::PECollisionFace,Ogre::PECollisionFace>(v24, v23);
        v23 += 180;
        v24 += 180;
      }
      v25 = v24 + 180 * v5;
      v26 = a1[1];
      while ( v23 != v26 )
      {
        std::_Construct<Ogre::PECollisionFace,Ogre::PECollisionFace>(v25, v23);
        v25 += 180;
        v23 += 180;
      }
      if ( *a1 != 0 )
        operator delete((void *)*a1);
      *a1 = v32;
      a1[1] = v25;
      a1[2] = v32 + 180 * v29;
    }
    else
    {
      Ogre::PECollisionFace::PECollisionFace((int)v35, a4);
      v7 = a1[1];
      v27 = -1527099483 * ((v7 - a2) >> 2);
      if ( v27 <= v5 )
      {
        v13 = a1[1];
        v14 = v5 - v27;
        v31 = v14;
        while ( v14 != 0 )
        {
          std::_Construct<Ogre::PECollisionFace,Ogre::PECollisionFace>(v13, (int)v35);
          --v14;
          v13 += 180;
        }
        v15 = a2;
        v16 = a1[1] + 180 * v31;
        a1[1] = v16;
        while ( v15 != v7 )
        {
          std::_Construct<Ogre::PECollisionFace,Ogre::PECollisionFace>(v16, v15);
          v16 += 180;
          v15 += 180;
        }
        a1[1] += 4 * ((v7 - a2) >> 2);
        for ( i = a2; i != v7; i += 180 )
          Ogre::PECollisionFace::operator=(i, (int)v35);
      }
      else
      {
        v8 = 180 * v5;
        v9 = v7 - 180 * v5;
        v28 = v8;
        v30 = a1[1];
        for ( j = v9; j != v7; j += 180 )
        {
          std::_Construct<Ogre::PECollisionFace,Ogre::PECollisionFace>(v30, j);
          v30 += 180;
        }
        a1[1] += v28;
        for ( k = -1527099483 * ((v9 - a2) >> 2); k > 0; --k )
        {
          v7 -= 180;
          v9 -= 180;
          Ogre::PECollisionFace::operator=(v7, v9);
        }
        for ( m = a2; m != a2 + v28; m += 180 )
          Ogre::PECollisionFace::operator=(m, (int)v35);
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::KeyFrameArray<Ogre::Vector3>::KEYFRAME_T,std::allocator<Ogre::KeyFrameArray<Ogre::Vector3>::KEYFRAME_T>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::KeyFrameArray<Ogre::Vector3>::KEYFRAME_T*,std::vector<Ogre::KeyFrameArray<Ogre::Vector3>::KEYFRAME_T,std::allocator<Ogre::KeyFrameArray<Ogre::Vector3>::KEYFRAME_T>>>,unsigned int,Ogre::KeyFrameArray<Ogre::Vector3>::KEYFRAME_T const&)
// address: 0x00148DD8   size: 0x25E (606 bytes)
//======================================================================
void __fastcall std::vector<Ogre::KeyFrameArray<Ogre::Vector3>::KEYFRAME_T,std::allocator<Ogre::KeyFrameArray<Ogre::Vector3>::KEYFRAME_T>>::_M_fill_insert(
        int a1,
        unsigned __int8 *a2,
        unsigned int a3,
        unsigned __int8 *a4)
{
  unsigned int v5; // r6
  int v7; // r3
  int v8; // r2
  int v9; // r3
  int v10; // r5
  int v11; // r6
  unsigned __int8 *v12; // r7
  int v13; // r6
  unsigned __int8 *j; // r5
  unsigned __int8 *v15; // r3
  int v16; // r0
  unsigned __int8 *v17; // r2
  int v18; // r1
  __int16 v19; // r2^2
  int v20; // r12
  unsigned __int8 *v21; // r3
  int v22; // r5
  unsigned __int8 v23; // r6
  unsigned __int8 v24; // r7
  unsigned __int8 *v25; // r1
  unsigned int v26; // r7
  int v27; // r6
  unsigned int i; // r5
  unsigned __int8 *v29; // r5
  int v30; // r7
  int v31; // r2
  int v32; // r7
  unsigned __int8 *v33; // r3
  int v34; // r12
  _DWORD *v35; // r1
  unsigned int v36; // r3
  unsigned int v37; // r2
  int v38; // r7
  int v39; // r7
  unsigned __int8 *v40; // r5
  int v41; // r7
  int v42; // r6
  unsigned __int8 *v43; // r7
  unsigned int v44; // [sp+0h] [bp-24h]
  int v45; // [sp+0h] [bp-24h]
  int v46; // [sp+0h] [bp-24h]
  unsigned int v47; // [sp+0h] [bp-24h]
  unsigned __int8 *v48; // [sp+4h] [bp-20h]
  int v49; // [sp+4h] [bp-20h]
  int v50; // [sp+8h] [bp-1Ch]
  int v51; // [sp+8h] [bp-1Ch]
  int v53; // [sp+10h] [bp-14h] BYREF
  int v54; // [sp+14h] [bp-10h]
  int v55; // [sp+18h] [bp-Ch]
  int v56; // [sp+1Ch] [bp-8h]

  v5 = a3;
  if ( a3 != 0 )
  {
    v48 = *(unsigned __int8 **)(a1 + 4);
    if ( (*(_DWORD *)(a1 + 8) - (int)v48) >> 4 < a3 )
    {
      v36 = (int)&v48[-*(_DWORD *)a1] >> 4;
      if ( 0xFFFFFFF - v36 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      if ( a3 < v36 )
        a3 = (int)&v48[-*(_DWORD *)a1] >> 4;
      v37 = a3 + v36;
      if ( v37 < v36 )
      {
        v49 = 0xFFFFFFF;
      }
      else
      {
        v49 = v37;
        if ( v37 > 0xFFFFFFF )
          v49 = 0xFFFFFFF;
      }
      v38 = (int)&a2[-*(_DWORD *)a1] >> 4;
      if ( v49 != 0 )
        v51 = operator new(16 * v49);
      else
        v51 = 0;
      v47 = v5;
      v39 = v51 + 16 * v38;
      do
      {
        std::_Construct<Ogre::KeyFrameArray<Ogre::Vector3>::KEYFRAME_T,Ogre::KeyFrameArray<Ogre::Vector3>::KEYFRAME_T>(
          v39,
          a4);
        v39 += 16;
        --v47;
      }
      while ( v47 != 0 );
      v40 = *(unsigned __int8 **)a1;
      v41 = v51;
      while ( v40 != a2 )
      {
        std::_Construct<Ogre::KeyFrameArray<Ogre::Vector3>::KEYFRAME_T,Ogre::KeyFrameArray<Ogre::Vector3>::KEYFRAME_T>(
          v41,
          v40);
        v40 += 16;
        v41 += 16;
      }
      v42 = v41 + 16 * v5;
      v43 = *(unsigned __int8 **)(a1 + 4);
      while ( v40 != v43 )
      {
        std::_Construct<Ogre::KeyFrameArray<Ogre::Vector3>::KEYFRAME_T,Ogre::KeyFrameArray<Ogre::Vector3>::KEYFRAME_T>(
          v42,
          v40);
        v42 += 16;
        v40 += 16;
      }
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)(a1 + 4) = v42;
      *(_DWORD *)a1 = v51;
      *(_DWORD *)(a1 + 8) = v51 + 16 * v49;
    }
    else
    {
      v7 = (a4[1] << 8) | *a4;
      v8 = a4[2];
      v55 = *((_DWORD *)a4 + 2);
      v53 = v7 | (v8 << 16) | (a4[3] << 24);
      v9 = *((_DWORD *)a4 + 1);
      v10 = *((_DWORD *)a4 + 3);
      v54 = v9;
      v56 = v10;
      v44 = (v48 - a2) >> 4;
      if ( v44 <= v5 )
      {
        v26 = v5 - v44;
        v27 = (int)v48;
        for ( i = v26; i != 0; --i )
        {
          std::_Construct<Ogre::KeyFrameArray<Ogre::Vector3>::KEYFRAME_T,Ogre::KeyFrameArray<Ogre::Vector3>::KEYFRAME_T>(
            v27,
            (unsigned __int8 *)&v53);
          v27 += 16;
        }
        v29 = a2;
        v30 = *(_DWORD *)(a1 + 4) + 16 * v26;
        *(_DWORD *)(a1 + 4) = v30;
        while ( v29 != v48 )
        {
          std::_Construct<Ogre::KeyFrameArray<Ogre::Vector3>::KEYFRAME_T,Ogre::KeyFrameArray<Ogre::Vector3>::KEYFRAME_T>(
            v30,
            v29);
          v30 += 16;
          v29 += 16;
        }
        v31 = v53;
        *(_DWORD *)(a1 + 4) += 16 * v44;
        v32 = v55;
        v46 = v56;
        v33 = a2;
        v34 = v54;
        while ( v33 != v48 )
        {
          *(_DWORD *)v33 = v31;
          *((_DWORD *)v33 + 1) = v34;
          v35 = v33 + 4;
          *((_DWORD *)v33 + 2) = v32;
          v33 += 16;
          v35[2] = v46;
        }
      }
      else
      {
        v11 = 16 * v5;
        v12 = &v48[-v11];
        v50 = v11;
        v13 = (int)v48;
        for ( j = v12; j != v48; j += 16 )
        {
          std::_Construct<Ogre::KeyFrameArray<Ogre::Vector3>::KEYFRAME_T,Ogre::KeyFrameArray<Ogre::Vector3>::KEYFRAME_T>(
            v13,
            j);
          v13 += 16;
        }
        *(_DWORD *)(a1 + 4) += v50;
        v15 = v48;
        v16 = (v12 - a2) >> 4;
        v17 = v12;
        while ( v16 > 0 )
        {
          v17 -= 16;
          v15 -= 16;
          --v16;
          v18 = (v17[1] << 8) | *v17 | (v17[2] << 16) | (v17[3] << 24);
          v15[1] = v17[1];
          *v15 = v18;
          v15[2] = BYTE2(v18);
          v15[3] = HIBYTE(v18);
          *((_DWORD *)v15 + 1) = *((_DWORD *)v17 + 1);
          *((_DWORD *)v15 + 2) = *((_DWORD *)v17 + 2);
          *((_DWORD *)v15 + 3) = *((_DWORD *)v17 + 3);
        }
        v19 = HIWORD(v53);
        v20 = v54;
        v21 = a2;
        v22 = v56;
        v45 = v55;
        v23 = v53;
        v24 = BYTE1(v53);
        while ( v21 != &a2[v50] )
        {
          *((_WORD *)v21 + 1) = v19;
          *v21 = v23;
          v21[1] = v24;
          *((_DWORD *)v21 + 1) = v20;
          v25 = v21 + 4;
          *((_DWORD *)v21 + 3) = v22;
          v21 += 16;
          *((_DWORD *)v25 + 1) = v45;
        }
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::KeyFrameArray<Ogre::Vector3>::CONTROL_POINT_T,std::allocator<Ogre::KeyFrameArray<Ogre::Vector3>::CONTROL_POINT_T>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::KeyFrameArray<Ogre::Vector3>::CONTROL_POINT_T*,std::vector<Ogre::KeyFrameArray<Ogre::Vector3>::CONTROL_POINT_T,std::allocator<Ogre::KeyFrameArray<Ogre::Vector3>::CONTROL_POINT_T>>>,unsigned int,Ogre::KeyFrameArray<Ogre::Vector3>::CONTROL_POINT_T const&)
// address: 0x001490E0   size: 0x24C (588 bytes)
//======================================================================
void __fastcall std::vector<Ogre::KeyFrameArray<Ogre::Vector3>::CONTROL_POINT_T,std::allocator<Ogre::KeyFrameArray<Ogre::Vector3>::CONTROL_POINT_T>>::_M_fill_insert(
        int a1,
        char *a2,
        unsigned int a3,
        int *a4)
{
  int v6; // r7
  int v7; // r1
  int v8; // r0
  int v9; // r2
  int v10; // r5
  unsigned int v11; // r5
  char *v12; // r5
  char *v13; // r7
  char *v14; // r3
  int v15; // r6
  char *v16; // r2
  char *v17; // r3
  int v18; // r4
  int v19; // r5
  int v20; // r6
  int v21; // r7
  int v22; // r12
  unsigned int v23; // r6
  char *v24; // r7
  char *v25; // r6
  _DWORD *v26; // r7
  int v27; // r7
  int v28; // r0
  char *v29; // r3
  int v30; // r12
  int v31; // r4
  int v32; // r7
  int v33; // r5
  int v34; // r6
  unsigned int v35; // r3
  unsigned int v36; // r2
  int v37; // r7
  unsigned int v38; // r6
  _DWORD *v39; // r7
  char *v40; // r5
  _DWORD *v41; // r6
  char *v42; // r7
  _DWORD *v43; // r6
  unsigned int v44; // [sp+0h] [bp-2Ch]
  char *v45; // [sp+0h] [bp-2Ch]
  int v46; // [sp+0h] [bp-2Ch]
  unsigned int v47; // [sp+0h] [bp-2Ch]
  int v48; // [sp+4h] [bp-28h]
  _DWORD *v49; // [sp+4h] [bp-28h]
  char *v50; // [sp+8h] [bp-24h]
  int v51; // [sp+8h] [bp-24h]
  int v53; // [sp+10h] [bp-1Ch] BYREF
  int v54; // [sp+14h] [bp-18h]
  int v55; // [sp+18h] [bp-14h]
  int v56; // [sp+1Ch] [bp-10h]
  int v57; // [sp+20h] [bp-Ch]
  int v58; // [sp+24h] [bp-8h]

  v44 = a3;
  if ( a3 != 0 )
  {
    v50 = *(char **)(a1 + 4);
    if ( -1431655765 * ((*(_DWORD *)(a1 + 8) - (int)v50) >> 3) < a3 )
    {
      v35 = -1431655765 * ((int)&v50[-*(_DWORD *)a1] >> 3);
      if ( 178956970 - v35 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      if ( a3 < v35 )
        a3 = -1431655765 * ((int)&v50[-*(_DWORD *)a1] >> 3);
      v36 = a3 - 1431655765 * ((int)&v50[-*(_DWORD *)a1] >> 3);
      if ( v36 < v35 )
      {
        v51 = 178956970;
      }
      else
      {
        v51 = v36;
        if ( v36 > 0xAAAAAAA )
          v51 = 178956970;
      }
      v37 = -1431655765 * ((int)&a2[-*(_DWORD *)a1] >> 3);
      if ( v51 != 0 )
        v49 = (_DWORD *)operator new(24 * v51);
      else
        v49 = nullptr;
      v38 = v44;
      v39 = &v49[6 * v37];
      do
      {
        --v38;
        std::_Construct<Ogre::KeyFrameArray<Ogre::Vector3>::CONTROL_POINT_T,Ogre::KeyFrameArray<Ogre::Vector3>::CONTROL_POINT_T>(
          v39,
          a4);
        v39 += 6;
      }
      while ( v38 != 0 );
      v40 = *(char **)a1;
      v41 = v49;
      while ( v40 != a2 )
      {
        std::_Construct<Ogre::KeyFrameArray<Ogre::Vector3>::CONTROL_POINT_T,Ogre::KeyFrameArray<Ogre::Vector3>::CONTROL_POINT_T>(
          v41,
          v40);
        v40 += 24;
        v41 += 6;
      }
      v42 = *(char **)(a1 + 4);
      v43 = &v41[6 * v44];
      while ( v40 != v42 )
      {
        std::_Construct<Ogre::KeyFrameArray<Ogre::Vector3>::CONTROL_POINT_T,Ogre::KeyFrameArray<Ogre::Vector3>::CONTROL_POINT_T>(
          v43,
          v40);
        v43 += 6;
        v40 += 24;
      }
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)(a1 + 4) = v43;
      *(_DWORD *)a1 = v49;
      *(_DWORD *)(a1 + 8) = &v49[6 * v51];
    }
    else
    {
      v6 = a4[3];
      v7 = a4[1];
      v53 = *a4;
      v8 = a4[4];
      v9 = a4[2];
      v56 = v6;
      v10 = a4[5];
      v57 = v8;
      v58 = v10;
      v54 = v7;
      v11 = -1431655765 * ((v50 - a2) >> 3);
      v55 = v9;
      if ( v11 <= v44 )
      {
        v47 = v44 - v11;
        v23 = v47;
        v24 = v50;
        while ( v23 != 0 )
        {
          std::_Construct<Ogre::KeyFrameArray<Ogre::Vector3>::CONTROL_POINT_T,Ogre::KeyFrameArray<Ogre::Vector3>::CONTROL_POINT_T>(
            v24,
            &v53);
          --v23;
          v24 += 24;
        }
        v25 = a2;
        v26 = (_DWORD *)(*(_DWORD *)(a1 + 4) + 24 * v47);
        *(_DWORD *)(a1 + 4) = v26;
        while ( v25 != v50 )
        {
          std::_Construct<Ogre::KeyFrameArray<Ogre::Vector3>::CONTROL_POINT_T,Ogre::KeyFrameArray<Ogre::Vector3>::CONTROL_POINT_T>(
            v26,
            v25);
          v26 += 6;
          v25 += 24;
        }
        v27 = v53;
        v28 = v55;
        v29 = a2;
        *(_DWORD *)(a1 + 4) += 8 * ((v50 - a2) >> 3);
        v30 = v27;
        v31 = v56;
        v32 = v54;
        v33 = v57;
        v34 = v58;
        while ( v29 != v50 )
        {
          *(_DWORD *)v29 = v30;
          *((_DWORD *)v29 + 2) = v28;
          *((_DWORD *)v29 + 1) = v32;
          *((_DWORD *)v29 + 3) = v31;
          *((_DWORD *)v29 + 4) = v33;
          *((_DWORD *)v29 + 5) = v34;
          v29 += 24;
        }
      }
      else
      {
        v48 = 24 * v44;
        v45 = &v50[-24 * v44];
        v12 = v45;
        v13 = v50;
        while ( v12 != v50 )
        {
          std::_Construct<Ogre::KeyFrameArray<Ogre::Vector3>::CONTROL_POINT_T,Ogre::KeyFrameArray<Ogre::Vector3>::CONTROL_POINT_T>(
            v13,
            v12);
          v12 += 24;
          v13 += 24;
        }
        *(_DWORD *)(a1 + 4) += v48;
        v14 = v50;
        v15 = -1431655765 * ((v45 - a2) >> 3);
        v16 = v45;
        while ( v15 > 0 )
        {
          v16 -= 24;
          v14 -= 24;
          --v15;
          *(_DWORD *)v14 = *(_DWORD *)v16;
          *((_DWORD *)v14 + 1) = *((_DWORD *)v16 + 1);
          *((_DWORD *)v14 + 2) = *((_DWORD *)v16 + 2);
          *((_DWORD *)v14 + 3) = *((_DWORD *)v16 + 3);
          *((_DWORD *)v14 + 4) = *((_DWORD *)v16 + 4);
          *((_DWORD *)v14 + 5) = *((_DWORD *)v16 + 5);
        }
        v17 = a2;
        v18 = v55;
        v19 = v56;
        v20 = v57;
        v21 = v58;
        v22 = v53;
        v46 = v54;
        while ( v17 != &a2[v48] )
        {
          *(_DWORD *)v17 = v22;
          *((_DWORD *)v17 + 2) = v18;
          *((_DWORD *)v17 + 1) = v46;
          *((_DWORD *)v17 + 3) = v19;
          *((_DWORD *)v17 + 4) = v20;
          *((_DWORD *)v17 + 5) = v21;
          v17 += 24;
        }
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::KeyFrameArray<float>::KEYFRAME_T,std::allocator<Ogre::KeyFrameArray<float>::KEYFRAME_T>>::resize(unsigned int,Ogre::KeyFrameArray<float>::KEYFRAME_T)
// address: 0x001493CC   size: 0x2A (42 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::KeyFrameArray<float>::KEYFRAME_T,std::allocator<Ogre::KeyFrameArray<float>::KEYFRAME_T>>::resize(
        __int64 a1,
        int a2,
        int a3)
{
  int v3; // r5
  char *v4; // r3
  unsigned int v5; // r2
  __int64 v7; // [sp+0h] [bp-Ch] BYREF
  int v8; // [sp+8h] [bp-4h]

  v7 = a1;
  v8 = a2;
  v3 = *(_DWORD *)a1;
  HIDWORD(v7) = a3;
  v4 = *(char **)(a1 + 4);
  LODWORD(v7) = a2;
  v5 = (int)&v4[-v3] >> 3;
  if ( HIDWORD(a1) <= v5 )
  {
    if ( HIDWORD(a1) < v5 )
      *(_DWORD *)(a1 + 4) = v3 + 8 * HIDWORD(a1);
  }
  else
  {
    std::vector<Ogre::KeyFrameArray<float>::KEYFRAME_T,std::allocator<Ogre::KeyFrameArray<float>::KEYFRAME_T>>::_M_fill_insert(
      a1,
      v4,
      HIDWORD(a1) - v5,
      (unsigned __int8 *)&v7);
  }
  return v7;
}


//======================================================================
// std::vector<Ogre::KeyFrameArray<float>::CONTROL_POINT_T,std::allocator<Ogre::KeyFrameArray<float>::CONTROL_POINT_T>>::resize(unsigned int,Ogre::KeyFrameArray<float>::CONTROL_POINT_T)
// address: 0x001493F6   size: 0x2A (42 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::KeyFrameArray<float>::CONTROL_POINT_T,std::allocator<Ogre::KeyFrameArray<float>::CONTROL_POINT_T>>::resize(
        __int64 a1,
        int a2,
        int a3)
{
  int v3; // r5
  char *v4; // r3
  unsigned int v5; // r2
  __int64 v7; // [sp+0h] [bp-Ch] BYREF
  int v8; // [sp+8h] [bp-4h]

  v7 = a1;
  v8 = a2;
  v3 = *(_DWORD *)a1;
  HIDWORD(v7) = a3;
  v4 = *(char **)(a1 + 4);
  LODWORD(v7) = a2;
  v5 = (int)&v4[-v3] >> 3;
  if ( HIDWORD(a1) <= v5 )
  {
    if ( HIDWORD(a1) < v5 )
      *(_DWORD *)(a1 + 4) = v3 + 8 * HIDWORD(a1);
  }
  else
  {
    std::vector<Ogre::KeyFrameArray<float>::CONTROL_POINT_T,std::allocator<Ogre::KeyFrameArray<float>::CONTROL_POINT_T>>::_M_fill_insert(
      a1,
      v4,
      HIDWORD(a1) - v5,
      (unsigned __int8 *)&v7);
  }
  return v7;
}


//======================================================================
// std::vector<Ogre::Resource *,std::allocator<Ogre::Resource *>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::Resource **,std::vector<Ogre::Resource *,std::allocator<Ogre::Resource *>>>,unsigned int,Ogre::Resource * const&)
// address: 0x00149440   size: 0x120 (288 bytes)
//======================================================================
void __fastcall std::vector<Ogre::Resource *>::_M_fill_insert(int a1, _DWORD *a2, unsigned int a3, void **a4)
{
  _DWORD *v5; // r5
  _BYTE *v7; // r7
  int v8; // r6
  _DWORD *v9; // r6
  void *v10; // r2
  unsigned int v11; // r3
  unsigned int v12; // r7
  unsigned int v13; // r7
  char *v14; // r2
  void *v15; // r1
  unsigned int v16; // r3
  int v17; // r0
  int v18; // r5
  unsigned int v20; // [sp+4h] [bp-10h]
  void *v21; // [sp+8h] [bp-Ch]
  char *v22; // [sp+8h] [bp-Ch]
  int v23; // [sp+Ch] [bp-8h]

  v5 = a2;
  if ( a3 != 0 )
  {
    v7 = *(_BYTE **)(a1 + 4);
    if ( (*(_DWORD *)(a1 + 8) - (int)v7) >> 2 < a3 )
    {
      v11 = (int)&v7[-*(_DWORD *)a1] >> 2;
      if ( 0x3FFFFFFF - v11 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v12 = a3;
      if ( a3 < v11 )
        v12 = v11;
      v13 = v12 + v11;
      if ( v13 < v11 || v13 > 0x3FFFFFFF )
        v13 = 0x3FFFFFFF;
      v23 = ((int)a2 - *(_DWORD *)a1) >> 2;
      if ( v13 != 0 )
        v22 = (char *)operator new(4 * v13);
      else
        v22 = nullptr;
      v14 = &v22[4 * v23];
      v15 = *a4;
      v16 = a3;
      do
      {
        --v16;
        *(_DWORD *)v14 = v15;
        v14 += 4;
      }
      while ( v16 != 0 );
      v17 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::Resource *>(
              *(void **)a1,
              (int)v5,
              v22);
      v18 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::Resource *>(
              v5,
              *(_DWORD *)(a1 + 4),
              (void *)(v17 + 4 * a3));
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)(a1 + 4) = v18;
      *(_DWORD *)a1 = v22;
      *(_DWORD *)(a1 + 8) = &v22[4 * v13];
    }
    else
    {
      v20 = (v7 - (_BYTE *)a2) >> 2;
      v21 = *a4;
      if ( v20 <= a3 )
      {
        memset32(v7, (int)v21, a3 - v20);
        v10 = (void *)(*(_DWORD *)(a1 + 4) + 4 * (a3 - v20));
        *(_DWORD *)(a1 + 4) = v10;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::Resource *>(a2, (int)v7, v10);
        *(_DWORD *)(a1 + 4) += 4 * v20;
        while ( v5 != (_DWORD *)v7 )
          *v5++ = v21;
      }
      else
      {
        v8 = 4 * a3;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::Resource *>(
          &v7[-4 * a3],
          (int)v7,
          v7);
        *(_DWORD *)(a1 + 4) += v8;
        if ( (&v7[-v8] - (_BYTE *)v5) >> 2 != 0 )
          j_memmove(&v7[-4 * ((&v7[-v8] - (_BYTE *)v5) >> 2)], v5, 4 * ((&v7[-v8] - (_BYTE *)v5) >> 2));
        v9 = &v5[v8 / 4u];
        while ( v5 != v9 )
          *v5++ = v21;
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::PackageDataStreamObject *,std::allocator<Ogre::PackageDataStreamObject *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::PackageDataStreamObject **,std::vector<Ogre::PackageDataStreamObject *,std::allocator<Ogre::PackageDataStreamObject *>>>,Ogre::PackageDataStreamObject * const&)
// address: 0x0014A098   size: 0xA6 (166 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::PackageDataStreamObject *>::_M_insert_aux(__int64 a1, _DWORD *a2)
{
  _DWORD *v3; // r3
  __int64 v4; // r4
  int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r2
  int v8; // r6
  _DWORD *v9; // r3
  int v10; // r0
  __int64 v12; // [sp+0h] [bp-Ch]

  v12 = a1;
  v3 = *(_DWORD **)(a1 + 4);
  v4 = a1;
  if ( v3 != *(_DWORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
      *v3 = *(v3 - 1);
    LODWORD(a1) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v4 + 4) = a1 + 4;
    LODWORD(v4) = *a2;
    v5 = ((int)a1 - 4 - HIDWORD(a1)) >> 2;
    if ( v5 != 0 )
      j_memmove((void *)(a1 - 4 * v5), (const void *)HIDWORD(a1), 4 * v5);
    *(_DWORD *)HIDWORD(v4) = v4;
    return v12;
  }
  v6 = ((int)v3 - *(_DWORD *)a1) >> 2;
  if ( v6 == 0 )
  {
    v7 = 1;
    goto LABEL_11;
  }
  v7 = 2 * v6;
  v8 = 0x3FFFFFFF;
  if ( 2 * v6 >= v6 )
  {
LABEL_11:
    v8 = v7;
    if ( v7 > 0x3FFFFFFF )
      v8 = 0x3FFFFFFF;
  }
  LODWORD(v12) = (HIDWORD(a1) - *(_DWORD *)a1) >> 2;
  HIDWORD(v12) = 4 * v8;
  if ( v8 != 0 )
    v8 = operator new(4 * v8);
  v9 = (_DWORD *)(v8 + 4 * v12);
  if ( v9 != nullptr )
    *v9 = *a2;
  v10 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::PackageDataStreamObject *>(
          *(void **)v4,
          SHIDWORD(v4),
          (void *)v8);
  HIDWORD(v4) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::PackageDataStreamObject *>(
                  (void *)HIDWORD(v4),
                  *(_DWORD *)(v4 + 4),
                  (void *)(v10 + 4));
  if ( *(_DWORD *)v4 != 0 )
    operator delete(*(void **)v4);
  *(_DWORD *)v4 = v8;
  *(_DWORD *)(v4 + 4) = HIDWORD(v4);
  *(_DWORD *)(v4 + 8) = v8 + HIDWORD(v12);
  return v12;
}


//======================================================================
// std::vector<Ogre::PkgFileInfo,std::allocator<Ogre::PkgFileInfo>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::PkgFileInfo*,std::vector<Ogre::PkgFileInfo,std::allocator<Ogre::PkgFileInfo>>>,unsigned int,Ogre::PkgFileInfo const&)
// address: 0x0014A398   size: 0x142 (322 bytes)
//======================================================================
void __fastcall std::vector<Ogre::PkgFileInfo>::_M_fill_insert(int a1, char *a2, unsigned int a3, _DWORD *a4)
{
  char *v6; // r7
  int v7; // r1
  int v8; // r6
  int v9; // r1
  int v10; // r6
  unsigned int v11; // r6
  int v12; // r5
  char *v13; // r1
  _DWORD *v14; // r0
  unsigned int v15; // r5
  void *v16; // r2
  unsigned int v17; // r7
  unsigned int v18; // r6
  unsigned int v19; // r6
  _DWORD *v20; // r7
  int v21; // r0
  int v22; // r5
  int v25; // [sp+Ch] [bp-20h]
  _DWORD v26[7]; // [sp+10h] [bp-1Ch] BYREF

  if ( a3 != 0 )
  {
    v6 = *(char **)(a1 + 4);
    if ( -1431655765 * ((*(_DWORD *)(a1 + 8) - (int)v6) >> 3) < a3 )
    {
      v17 = -1431655765 * ((int)&v6[-*(_DWORD *)a1] >> 3);
      if ( 178956970 - v17 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v18 = a3;
      if ( a3 < v17 )
        v18 = v17;
      v19 = v18 + v17;
      if ( v19 < v17 || v19 > 0xAAAAAAA )
        v19 = 178956970;
      v25 = -1431655765 * ((int)&a2[-*(_DWORD *)a1] >> 3);
      if ( v19 != 0 )
        v20 = (_DWORD *)operator new(24 * v19);
      else
        v20 = nullptr;
      std::__fill_n_a<Ogre::PkgFileInfo *,unsigned int,Ogre::PkgFileInfo>(&v20[6 * v25], a3, a4);
      v21 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::PkgFileInfo>(
              *(void **)a1,
              (int)a2,
              v20);
      v22 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::PkgFileInfo>(
              a2,
              *(_DWORD *)(a1 + 4),
              (void *)(v21 + 24 * a3));
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)a1 = v20;
      *(_DWORD *)(a1 + 4) = v22;
      *(_DWORD *)(a1 + 8) = &v20[6 * v19];
    }
    else
    {
      v7 = a4[1];
      v8 = a4[2];
      v26[0] = *a4;
      v26[1] = v7;
      v26[2] = v8;
      v9 = a4[4];
      v10 = a4[5];
      v26[3] = a4[3];
      v26[4] = v9;
      v26[5] = v10;
      v11 = -1431655765 * ((v6 - a2) >> 3);
      if ( v11 <= a3 )
      {
        v15 = a3 - v11;
        std::__fill_n_a<Ogre::PkgFileInfo *,unsigned int,Ogre::PkgFileInfo>(v6, a3 - v11, v26);
        v16 = (void *)(*(_DWORD *)(a1 + 4) + 24 * v15);
        *(_DWORD *)(a1 + 4) = v16;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::PkgFileInfo>(a2, (int)v6, v16);
        v14 = a2;
        v13 = v6;
        *(_DWORD *)(a1 + 4) += 8 * ((v6 - a2) >> 3);
      }
      else
      {
        v12 = 24 * a3;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::PkgFileInfo>(
          &v6[-24 * a3],
          (int)v6,
          v6);
        *(_DWORD *)(a1 + 4) += v12;
        if ( -1431655765 * ((&v6[-v12] - a2) >> 3) != 0 )
          j_memmove(&v6[-8 * ((&v6[-v12] - a2) >> 3)], a2, 8 * ((&v6[-v12] - a2) >> 3));
        v13 = &a2[v12];
        v14 = a2;
      }
      std::__fill_a<Ogre::PkgFileInfo *,Ogre::PkgFileInfo>(v14, v13, v26);
    }
  }
}


//======================================================================
// std::vector<Ogre::PkgFileInfo,std::allocator<Ogre::PkgFileInfo>>::resize(unsigned int,Ogre::PkgFileInfo)
// address: 0x0014A4E8   size: 0x38 (56 bytes)
//======================================================================
void std::vector<Ogre::PkgFileInfo>::resize(_DWORD *a1, unsigned int a2, ...)
{
  char *v2; // r3
  unsigned int v3; // r2
  va_list va; // [sp+10h] [bp-8h] BYREF

  va_start(va, a2);
  v2 = (char *)a1[1];
  v3 = -1431655765 * ((int)&v2[-*a1] >> 3);
  if ( a2 <= v3 )
  {
    if ( a2 < v3 )
      a1[1] = *a1 + 24 * a2;
  }
  else
  {
    std::vector<Ogre::PkgFileInfo>::_M_fill_insert((int)a1, v2, a2 - v3, (int *)va);
  }
}


//======================================================================
// std::vector<Ogre::TriggerDesc,std::allocator<Ogre::TriggerDesc>>::_M_check_len(unsigned int,char const*)const
// address: 0x0014ABF0   size: 0x2C (44 bytes)
//======================================================================
unsigned int __fastcall std::vector<Ogre::TriggerDesc>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = (a1[1] - *a1) >> 3;
  if ( 0x1FFFFFFF - v3 < a2 )
    sub_3BD058(a3);
  v4 = (a1[1] - *a1) >> 3;
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0x1FFFFFFF )
    return 0x1FFFFFFF;
  return result;
}


//======================================================================
// std::vector<Ogre::BoneTrack *,std::allocator<Ogre::BoneTrack *>>::_M_check_len(unsigned int,char const*)const
// address: 0x0014AC40   size: 0x2C (44 bytes)
//======================================================================
unsigned int __fastcall std::vector<Ogre::BoneTrack *>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = (a1[1] - *a1) >> 2;
  if ( 0x3FFFFFFF - v3 < a2 )
    sub_3BD058(a3);
  v4 = (a1[1] - *a1) >> 2;
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0x3FFFFFFF )
    return 0x3FFFFFFF;
  return result;
}


//======================================================================
// std::vector<Ogre::MaterialParamTrack *,std::allocator<Ogre::MaterialParamTrack *>>::_M_check_len(unsigned int,char const*)const
// address: 0x0014AC90   size: 0x2C (44 bytes)
//======================================================================
unsigned int __fastcall std::vector<Ogre::MaterialParamTrack *>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = (a1[1] - *a1) >> 2;
  if ( 0x3FFFFFFF - v3 < a2 )
    sub_3BD058(a3);
  v4 = (a1[1] - *a1) >> 2;
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0x3FFFFFFF )
    return 0x3FFFFFFF;
  return result;
}


//======================================================================
// std::vector<Ogre::TriggerDesc,std::allocator<Ogre::TriggerDesc>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::TriggerDesc*,std::vector<Ogre::TriggerDesc,std::allocator<Ogre::TriggerDesc>>>,unsigned int,Ogre::TriggerDesc const&)
// address: 0x0014ADD4   size: 0x11C (284 bytes)
//======================================================================
void __fastcall std::vector<Ogre::TriggerDesc>::_M_fill_insert(void **a1, char *a2, unsigned int a3, _DWORD *a4)
{
  char *v7; // r1
  int v8; // r7
  unsigned int v9; // r6
  int v10; // r6
  char *v11; // r5
  char *v12; // r6
  char *j; // r3
  _DWORD *v14; // r3
  unsigned int i; // r1
  char *v16; // r2
  _DWORD *v17; // r3
  unsigned int v18; // r0
  unsigned int v19; // r6
  char *v20; // r3
  unsigned int v21; // r2
  int v22; // r0
  int v23; // r5
  _DWORD *v24; // [sp+4h] [bp-10h]
  char *v25; // [sp+4h] [bp-10h]
  int v26; // [sp+8h] [bp-Ch]
  int v27; // [sp+8h] [bp-Ch]

  if ( a3 != 0 )
  {
    v7 = (char *)a1[1];
    v24 = v7;
    if ( ((_BYTE *)a1[2] - v7) >> 3 < a3 )
    {
      v18 = std::vector<Ogre::TriggerDesc>::_M_check_len(a1, a3, (int)"vector::_M_fill_insert");
      v19 = v18;
      v27 = (a2 - (_BYTE *)*a1) >> 3;
      if ( v18 != 0 )
      {
        if ( v18 > 0x1FFFFFFF )
          sub_3BCEB4();
        v25 = (char *)operator new(8 * v18);
      }
      else
      {
        v25 = nullptr;
      }
      v20 = &v25[8 * v27];
      v21 = a3;
      do
      {
        --v21;
        *(_DWORD *)v20 = *a4;
        *((_DWORD *)v20 + 1) = a4[1];
        v20 += 8;
      }
      while ( v21 != 0 );
      v22 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::TriggerDesc>(*a1, (int)a2, v25);
      v23 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::TriggerDesc>(
              a2,
              (int)a1[1],
              (void *)(v22 + 8 * a3));
      if ( *a1 != nullptr )
        operator delete(*a1);
      a1[1] = (void *)v23;
      *a1 = v25;
      a1[2] = &v25[8 * v19];
    }
    else
    {
      v8 = a4[1];
      v26 = *a4;
      v9 = (v7 - a2) >> 3;
      if ( v9 <= a3 )
      {
        v14 = a1[1];
        for ( i = a3 - v9; i != 0; --i )
        {
          v14[1] = v8;
          *v14 = v26;
          v14 += 2;
        }
        v16 = (char *)a1[1] + 8 * (a3 - v9);
        a1[1] = v16;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::TriggerDesc>(a2, (int)v24, v16);
        v17 = a2;
        a1[1] = (char *)a1[1] + 8 * v9;
        while ( v17 != v24 )
        {
          v17[1] = v8;
          *v17 = v26;
          v17 += 2;
        }
      }
      else
      {
        v10 = 8 * a3;
        v11 = &v7[-8 * a3];
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::TriggerDesc>(v11, (int)v7, v7);
        a1[1] = (char *)a1[1] + v10;
        std::__copy_move_backward<false,true,std::random_access_iterator_tag>::__copy_move_b<Ogre::TriggerDesc>(
          a2,
          (int)v11,
          (int)v24);
        v12 = &a2[v10];
        for ( j = a2; j != v12; j += 8 )
        {
          *((_DWORD *)j + 1) = v8;
          *(_DWORD *)j = v26;
        }
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::BoneTrack *,std::allocator<Ogre::BoneTrack *>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::BoneTrack **,std::vector<Ogre::BoneTrack *,std::allocator<Ogre::BoneTrack *>>>,unsigned int,Ogre::BoneTrack * const&)
// address: 0x0014B01C   size: 0x104 (260 bytes)
//======================================================================
void __fastcall std::vector<Ogre::BoneTrack *>::_M_fill_insert(void **a1, char *a2, unsigned int a3, void **a4)
{
  char *v5; // r5
  char *v7; // r7
  int v8; // r6
  char *v9; // r6
  char *v10; // r2
  unsigned int v11; // r0
  unsigned int v12; // r7
  char *v13; // r2
  void *v14; // r1
  unsigned int v15; // r3
  int v16; // r0
  int v17; // r5
  unsigned int v19; // [sp+4h] [bp-10h]
  void *v20; // [sp+8h] [bp-Ch]
  char *v21; // [sp+8h] [bp-Ch]
  int v22; // [sp+Ch] [bp-8h]

  v5 = a2;
  if ( a3 != 0 )
  {
    v7 = (char *)a1[1];
    if ( ((_BYTE *)a1[2] - v7) >> 2 < a3 )
    {
      v11 = std::vector<Ogre::BoneTrack *>::_M_check_len(a1, a3, (int)"vector::_M_fill_insert");
      v12 = v11;
      v22 = (v5 - (_BYTE *)*a1) >> 2;
      if ( v11 != 0 )
      {
        if ( v11 > 0x3FFFFFFF )
          sub_3BCEB4();
        v21 = (char *)operator new(4 * v11);
      }
      else
      {
        v21 = nullptr;
      }
      v13 = &v21[4 * v22];
      v14 = *a4;
      v15 = a3;
      do
      {
        --v15;
        *(_DWORD *)v13 = v14;
        v13 += 4;
      }
      while ( v15 != 0 );
      v16 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::BoneTrack *>(*a1, (int)v5, v21);
      v17 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::BoneTrack *>(
              v5,
              (int)a1[1],
              (void *)(v16 + 4 * a3));
      if ( *a1 != nullptr )
        operator delete(*a1);
      a1[1] = (void *)v17;
      *a1 = v21;
      a1[2] = &v21[4 * v12];
    }
    else
    {
      v19 = (v7 - a2) >> 2;
      v20 = *a4;
      if ( v19 <= a3 )
      {
        memset32(v7, (int)v20, a3 - v19);
        v10 = (char *)a1[1] + 4 * (a3 - v19);
        a1[1] = v10;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::BoneTrack *>(a2, (int)v7, v10);
        a1[1] = (char *)a1[1] + 4 * v19;
        while ( v5 != v7 )
        {
          *(_DWORD *)v5 = v20;
          v5 += 4;
        }
      }
      else
      {
        v8 = 4 * a3;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::BoneTrack *>(
          &v7[-4 * a3],
          (int)v7,
          v7);
        a1[1] = (char *)a1[1] + v8;
        std::copy_backward<Ogre::BoneTrack **,Ogre::BoneTrack **>(v5, (int)&v7[-v8], (int)v7);
        v9 = &v5[v8];
        while ( v5 != v9 )
        {
          *(_DWORD *)v5 = v20;
          v5 += 4;
        }
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::MaterialParamTrack *,std::allocator<Ogre::MaterialParamTrack *>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::MaterialParamTrack **,std::vector<Ogre::MaterialParamTrack *,std::allocator<Ogre::MaterialParamTrack *>>>,unsigned int,Ogre::MaterialParamTrack * const&)
// address: 0x0014B1D4   size: 0x104 (260 bytes)
//======================================================================
void __fastcall std::vector<Ogre::MaterialParamTrack *>::_M_fill_insert(
        void **a1,
        char *a2,
        unsigned int a3,
        void **a4)
{
  char *v5; // r5
  char *v7; // r7
  int v8; // r6
  char *v9; // r6
  char *v10; // r2
  unsigned int v11; // r0
  unsigned int v12; // r7
  char *v13; // r2
  void *v14; // r1
  unsigned int v15; // r3
  int v16; // r0
  int v17; // r5
  unsigned int v19; // [sp+4h] [bp-10h]
  void *v20; // [sp+8h] [bp-Ch]
  char *v21; // [sp+8h] [bp-Ch]
  int v22; // [sp+Ch] [bp-8h]

  v5 = a2;
  if ( a3 != 0 )
  {
    v7 = (char *)a1[1];
    if ( ((_BYTE *)a1[2] - v7) >> 2 < a3 )
    {
      v11 = std::vector<Ogre::MaterialParamTrack *>::_M_check_len(a1, a3, (int)"vector::_M_fill_insert");
      v12 = v11;
      v22 = (v5 - (_BYTE *)*a1) >> 2;
      if ( v11 != 0 )
      {
        if ( v11 > 0x3FFFFFFF )
          sub_3BCEB4();
        v21 = (char *)operator new(4 * v11);
      }
      else
      {
        v21 = nullptr;
      }
      v13 = &v21[4 * v22];
      v14 = *a4;
      v15 = a3;
      do
      {
        --v15;
        *(_DWORD *)v13 = v14;
        v13 += 4;
      }
      while ( v15 != 0 );
      v16 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MaterialParamTrack *>(
              *a1,
              (int)v5,
              v21);
      v17 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MaterialParamTrack *>(
              v5,
              (int)a1[1],
              (void *)(v16 + 4 * a3));
      if ( *a1 != nullptr )
        operator delete(*a1);
      a1[1] = (void *)v17;
      *a1 = v21;
      a1[2] = &v21[4 * v12];
    }
    else
    {
      v19 = (v7 - a2) >> 2;
      v20 = *a4;
      if ( v19 <= a3 )
      {
        memset32(v7, (int)v20, a3 - v19);
        v10 = (char *)a1[1] + 4 * (a3 - v19);
        a1[1] = v10;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MaterialParamTrack *>(
          a2,
          (int)v7,
          v10);
        a1[1] = (char *)a1[1] + 4 * v19;
        while ( v5 != v7 )
        {
          *(_DWORD *)v5 = v20;
          v5 += 4;
        }
      }
      else
      {
        v8 = 4 * a3;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MaterialParamTrack *>(
          &v7[-4 * a3],
          (int)v7,
          v7);
        a1[1] = (char *)a1[1] + v8;
        std::copy_backward<Ogre::MaterialParamTrack **,Ogre::MaterialParamTrack **>(v5, (int)&v7[-v8], (int)v7);
        v9 = &v5[v8];
        while ( v5 != v9 )
        {
          *(_DWORD *)v5 = v20;
          v5 += 4;
        }
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::SequenceDesc,std::allocator<Ogre::SequenceDesc>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::SequenceDesc*,std::vector<Ogre::SequenceDesc,std::allocator<Ogre::SequenceDesc>>>,unsigned int,Ogre::SequenceDesc const&)
// address: 0x0014B300   size: 0x118 (280 bytes)
//======================================================================
void __fastcall std::vector<Ogre::SequenceDesc>::_M_fill_insert(int a1, char *a2, unsigned int a3, _DWORD *a4)
{
  char *v6; // r7
  int v7; // r1
  int v8; // r6
  char *v9; // r1
  _DWORD *v10; // r0
  void *v11; // r2
  unsigned int v12; // r3
  unsigned int v13; // r7
  unsigned int v14; // r7
  int v15; // r6
  int v16; // r0
  int v17; // r5
  unsigned int v20; // [sp+4h] [bp-20h]
  char *v21; // [sp+4h] [bp-20h]
  int v22; // [sp+8h] [bp-1Ch]
  _DWORD v23[5]; // [sp+10h] [bp-14h] BYREF

  if ( a3 != 0 )
  {
    v6 = *(char **)(a1 + 4);
    if ( (*(_DWORD *)(a1 + 8) - (int)v6) >> 4 < a3 )
    {
      v12 = (int)&v6[-*(_DWORD *)a1] >> 4;
      if ( 0xFFFFFFF - v12 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v13 = a3;
      if ( a3 < v12 )
        v13 = v12;
      v14 = v13 + v12;
      if ( v14 < v12 || v14 > 0xFFFFFFF )
        v14 = 0xFFFFFFF;
      v15 = (int)&a2[-*(_DWORD *)a1] >> 4;
      v22 = 16 * v14;
      if ( v14 != 0 )
        v14 = operator new(16 * v14);
      std::__fill_n_a<Ogre::SequenceDesc *,unsigned int,Ogre::SequenceDesc>((_DWORD *)(v14 + 16 * v15), a3, a4);
      v16 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::SequenceDesc>(
              *(void **)a1,
              (int)a2,
              (void *)v14);
      v17 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::SequenceDesc>(
              a2,
              *(_DWORD *)(a1 + 4),
              (void *)(v16 + 16 * a3));
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)a1 = v14;
      *(_DWORD *)(a1 + 4) = v17;
      *(_DWORD *)(a1 + 8) = v14 + v22;
    }
    else
    {
      v7 = a4[1];
      v8 = a4[2];
      v23[0] = *a4;
      v23[1] = v7;
      v23[2] = v8;
      v23[3] = a4[3];
      v20 = (v6 - a2) >> 4;
      if ( v20 <= a3 )
      {
        std::__fill_n_a<Ogre::SequenceDesc *,unsigned int,Ogre::SequenceDesc>(v6, a3 - v20, v23);
        v11 = (void *)(*(_DWORD *)(a1 + 4) + 16 * (a3 - v20));
        *(_DWORD *)(a1 + 4) = v11;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::SequenceDesc>(a2, (int)v6, v11);
        v9 = v6;
        *(_DWORD *)(a1 + 4) += 16 * v20;
        v10 = a2;
      }
      else
      {
        v21 = &v6[-16 * a3];
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::SequenceDesc>(v21, (int)v6, v6);
        *(_DWORD *)(a1 + 4) += 16 * a3;
        if ( (v21 - a2) >> 4 != 0 )
          j_memmove(&v6[-16 * ((v21 - a2) >> 4)], a2, 16 * ((v21 - a2) >> 4));
        v9 = &a2[16 * a3];
        v10 = a2;
      }
      std::__fill_a<Ogre::SequenceDesc *,Ogre::SequenceDesc>(v10, v9, v23);
    }
  }
}


//======================================================================
// std::vector<Ogre::ColorbitToClient,std::allocator<Ogre::ColorbitToClient>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::ColorbitToClient*,std::vector<Ogre::ColorbitToClient,std::allocator<Ogre::ColorbitToClient>>>,Ogre::ColorbitToClient const&)
// address: 0x0014C3D8   size: 0xB6 (182 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::ColorbitToClient>::_M_insert_aux(__int64 a1, _DWORD *byte_count)
{
  _DWORD *v2; // r3
  __int64 v3; // r4
  int v5; // r2
  int v6; // r6
  int v7; // r2
  unsigned int v8; // r3
  unsigned int v9; // r2
  int v10; // r6
  _DWORD *v11; // r3
  int v12; // r0
  __int64 v14; // [sp+0h] [bp-Ch]

  v14 = a1;
  v2 = *(_DWORD **)(a1 + 4);
  v3 = a1;
  if ( v2 != *(_DWORD **)(a1 + 8) )
  {
    if ( v2 != nullptr )
    {
      *v2 = *(v2 - 2);
      v2[1] = *(v2 - 1);
    }
    LODWORD(a1) = *(_DWORD *)(a1 + 4);
    v5 = *(_DWORD *)(v3 + 4) - 8;
    *(_DWORD *)(v3 + 4) = a1 + 8;
    LODWORD(v3) = *byte_count;
    v6 = byte_count[1];
    v7 = (v5 - HIDWORD(a1)) >> 3;
    if ( v7 != 0 )
      j_memmove((void *)(a1 - 8 * v7), (const void *)HIDWORD(a1), 8 * v7);
    *(_DWORD *)HIDWORD(v3) = v3;
    *(_DWORD *)(HIDWORD(v3) + 4) = v6;
    return v14;
  }
  v8 = ((int)v2 - *(_DWORD *)a1) >> 3;
  if ( v8 == 0 )
  {
    v9 = 1;
    goto LABEL_11;
  }
  v9 = 2 * v8;
  v10 = 0x1FFFFFFF;
  if ( 2 * v8 >= v8 )
  {
LABEL_11:
    v10 = v9;
    if ( v9 > 0x1FFFFFFF )
      v10 = 0x1FFFFFFF;
  }
  LODWORD(v14) = (HIDWORD(a1) - *(_DWORD *)a1) >> 3;
  HIDWORD(v14) = 8 * v10;
  if ( v10 != 0 )
    v10 = operator new(8 * v10);
  v11 = (_DWORD *)(v10 + 8 * v14);
  if ( v11 != nullptr )
  {
    *v11 = *byte_count;
    v11[1] = byte_count[1];
  }
  v12 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ColorbitToClient>(
          *(void **)v3,
          SHIDWORD(v3),
          (void *)v10);
  HIDWORD(v3) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ColorbitToClient>(
                  (void *)HIDWORD(v3),
                  *(_DWORD *)(v3 + 4),
                  (void *)(v12 + 8));
  if ( *(_DWORD *)v3 != 0 )
    operator delete(*(void **)v3);
  *(_DWORD *)v3 = v10;
  *(_DWORD *)(v3 + 4) = HIDWORD(v3);
  *(_DWORD *)(v3 + 8) = v10 + HIDWORD(v14);
  return v14;
}


//======================================================================
// std::vector<Ogre::KeyFrameArray<Ogre::Quaternion>::KEYFRAME_T,std::allocator<Ogre::KeyFrameArray<Ogre::Quaternion>::KEYFRAME_T>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::KeyFrameArray<Ogre::Quaternion>::KEYFRAME_T*,std::vector<Ogre::KeyFrameArray<Ogre::Quaternion>::KEYFRAME_T,std::allocator<Ogre::KeyFrameArray<Ogre::Quaternion>::KEYFRAME_T>>>,unsigned int,Ogre::KeyFrameArray<Ogre::Quaternion>::KEYFRAME_T const&)
// address: 0x00153950   size: 0x27C (636 bytes)
//======================================================================
void __fastcall std::vector<Ogre::KeyFrameArray<Ogre::Quaternion>::KEYFRAME_T,std::allocator<Ogre::KeyFrameArray<Ogre::Quaternion>::KEYFRAME_T>>::_M_fill_insert(
        void **a1,
        char *a2,
        unsigned int a3,
        const void *a4)
{
  unsigned int v5; // r6
  unsigned int v6; // r5
  char *v7; // r7
  char *v8; // r6
  char *i; // r5
  char *v10; // r3
  int v11; // r4
  char *v12; // r2
  int v13; // r1
  __int16 v14; // r2^2
  char *v15; // r3
  int v16; // r12
  _DWORD *v17; // r1
  char v18; // r6
  char v19; // r7
  _DWORD *v20; // r0
  char *v21; // r7
  unsigned int v22; // r6
  char *v23; // r6
  char *v24; // r7
  int v25; // r2
  int v26; // r7
  int v27; // r3
  char *v28; // r3
  _DWORD *v29; // r1
  _DWORD *v30; // r0
  unsigned int v31; // r3
  unsigned int v32; // r2
  int v33; // r7
  char *v34; // r7
  unsigned int v35; // r5
  char *v36; // r5
  char *v37; // r7
  char *v38; // r7
  char *v39; // r6
  int v40; // [sp+4h] [bp-30h]
  int v41; // [sp+4h] [bp-30h]
  int v42; // [sp+8h] [bp-2Ch]
  int v43; // [sp+8h] [bp-2Ch]
  unsigned int v44; // [sp+8h] [bp-2Ch]
  int v45; // [sp+8h] [bp-2Ch]
  char *v46; // [sp+8h] [bp-2Ch]
  char *v47; // [sp+Ch] [bp-28h]
  char *v48; // [sp+Ch] [bp-28h]
  int v49; // [sp+Ch] [bp-28h]
  void *v51; // [sp+10h] [bp-24h]
  void *v52; // [sp+10h] [bp-24h]
  _DWORD v54[6]; // [sp+1Ch] [bp-18h] BYREF

  v5 = a3;
  if ( a3 != 0 )
  {
    v47 = (char *)a1[1];
    if ( -858993459 * (((_BYTE *)a1[2] - v47) >> 2) < a3 )
    {
      v31 = -858993459 * ((v47 - (_BYTE *)*a1) >> 2);
      if ( 214748364 - v31 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      if ( a3 < v31 )
        a3 = -858993459 * ((v47 - (_BYTE *)*a1) >> 2);
      v32 = a3 - 858993459 * ((v47 - (_BYTE *)*a1) >> 2);
      if ( v32 < v31 || (v49 = v32, v32 > 0xCCCCCCC) )
        v49 = 214748364;
      v33 = -858993459 * ((a2 - (_BYTE *)*a1) >> 2);
      if ( v49 != 0 )
        v46 = (char *)operator new(20 * v49);
      else
        v46 = nullptr;
      v34 = &v46[20 * v33];
      v35 = v5;
      do
      {
        --v35;
        std::_Construct<Ogre::KeyFrameArray<Ogre::Quaternion>::KEYFRAME_T,Ogre::KeyFrameArray<Ogre::Quaternion>::KEYFRAME_T>(
          v34,
          a4);
        v34 += 20;
      }
      while ( v35 != 0 );
      v36 = (char *)*a1;
      v37 = v46;
      while ( v36 != a2 )
      {
        std::_Construct<Ogre::KeyFrameArray<Ogre::Quaternion>::KEYFRAME_T,Ogre::KeyFrameArray<Ogre::Quaternion>::KEYFRAME_T>(
          v37,
          v36);
        v36 += 20;
        v37 += 20;
      }
      v38 = &v37[20 * v5];
      v39 = (char *)a1[1];
      while ( v36 != v39 )
      {
        std::_Construct<Ogre::KeyFrameArray<Ogre::Quaternion>::KEYFRAME_T,Ogre::KeyFrameArray<Ogre::Quaternion>::KEYFRAME_T>(
          v38,
          v36);
        v38 += 20;
        v36 += 20;
      }
      if ( *a1 != nullptr )
        operator delete(*a1);
      a1[1] = v38;
      *a1 = v46;
      a1[2] = &v46[20 * v49];
    }
    else
    {
      j_memcpy(v54, a4, 0x14u);
      v6 = -858993459 * ((v47 - a2) >> 2);
      if ( v6 <= v5 )
      {
        v21 = v47;
        v22 = v5 - v6;
        v44 = v22;
        while ( v22 != 0 )
        {
          std::_Construct<Ogre::KeyFrameArray<Ogre::Quaternion>::KEYFRAME_T,Ogre::KeyFrameArray<Ogre::Quaternion>::KEYFRAME_T>(
            v21,
            v54);
          --v22;
          v21 += 20;
        }
        v23 = a2;
        v24 = (char *)a1[1] + 20 * v44;
        a1[1] = v24;
        while ( v23 != v47 )
        {
          std::_Construct<Ogre::KeyFrameArray<Ogre::Quaternion>::KEYFRAME_T,Ogre::KeyFrameArray<Ogre::Quaternion>::KEYFRAME_T>(
            v24,
            v23);
          v24 += 20;
          v23 += 20;
        }
        v25 = v54[0];
        v26 = v54[3];
        v27 = v54[4];
        a1[1] = (char *)a1[1] + 4 * ((v47 - a2) >> 2);
        v41 = v27;
        v28 = a2;
        v52 = (void *)v54[2];
        v45 = v54[1];
        v29 = a2 + 12;
        while ( v28 != v47 )
        {
          *(_DWORD *)v28 = v25;
          *((_DWORD *)v28 + 1) = v45;
          v30 = v28 + 4;
          v28 += 20;
          v30[1] = v52;
          *v29 = v26;
          v29[1] = v41;
          v29 += 5;
        }
      }
      else
      {
        v42 = 20 * v5;
        v7 = &v47[-20 * v5];
        v8 = v47;
        for ( i = v7; i != v47; i += 20 )
        {
          std::_Construct<Ogre::KeyFrameArray<Ogre::Quaternion>::KEYFRAME_T,Ogre::KeyFrameArray<Ogre::Quaternion>::KEYFRAME_T>(
            v8,
            i);
          v8 += 20;
        }
        a1[1] = (char *)a1[1] + v42;
        v10 = v47;
        v11 = -858993459 * ((v7 - a2) >> 2);
        v12 = v7;
        while ( v11 > 0 )
        {
          v12 -= 20;
          v10 -= 20;
          --v11;
          v13 = ((unsigned __int8)v12[1] << 8)
              | (unsigned __int8)*v12
              | ((unsigned __int8)v12[2] << 16)
              | ((unsigned __int8)v12[3] << 24);
          v10[1] = v12[1];
          *v10 = v13;
          v10[2] = BYTE2(v13);
          v10[3] = HIBYTE(v13);
          *((_DWORD *)v10 + 1) = *((_DWORD *)v12 + 1);
          *((_DWORD *)v10 + 2) = *((_DWORD *)v12 + 2);
          *((_DWORD *)v10 + 3) = *((_DWORD *)v12 + 3);
          *((_DWORD *)v10 + 4) = *((_DWORD *)v12 + 4);
        }
        v14 = HIWORD(v54[0]);
        v48 = &a2[v42];
        v40 = v54[4];
        v15 = a2;
        v51 = (void *)v54[2];
        v16 = v54[3];
        v43 = v54[1];
        v17 = a2 + 12;
        v18 = v54[0];
        v19 = BYTE1(v54[0]);
        while ( v15 != v48 )
        {
          *((_WORD *)v15 + 1) = v14;
          *v15 = v18;
          v15[1] = v19;
          *((_DWORD *)v15 + 1) = v43;
          v20 = v15 + 4;
          v15 += 20;
          v20[1] = v51;
          *v17 = v16;
          v17[1] = v40;
          v17 += 5;
        }
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T,std::allocator<Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T*,std::vector<Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T,std::allocator<Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T>>>,unsigned int,Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T const&)
// address: 0x00153CB0   size: 0x14E (334 bytes)
//======================================================================
void __fastcall std::vector<Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T,std::allocator<Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T>>::_M_fill_insert(
        int a1,
        char *a2,
        unsigned int a3,
        void *a4)
{
  char *v7; // r6
  unsigned int v8; // r7
  char *v9; // r5
  char *v10; // r7
  int k; // r4
  char *m; // r4
  int v13; // r5
  char *v14; // r2
  char *i; // r4
  unsigned int v16; // r3
  unsigned int v17; // r6
  unsigned int v18; // r6
  char *v19; // r0
  char *v20; // r5
  char *j; // [sp+0h] [bp-34h]
  char *v22; // [sp+0h] [bp-34h]
  int v23; // [sp+4h] [bp-30h]
  int v25; // [sp+Ch] [bp-28h]
  _DWORD v26[9]; // [sp+10h] [bp-24h] BYREF

  if ( a3 != 0 )
  {
    v7 = *(char **)(a1 + 4);
    if ( (*(_DWORD *)(a1 + 8) - (int)v7) >> 5 < a3 )
    {
      v16 = (int)&v7[-*(_DWORD *)a1] >> 5;
      if ( 0x7FFFFFF - v16 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v17 = a3;
      if ( a3 < v16 )
        v17 = v16;
      v18 = v17 + v16;
      if ( v18 < v16 || v18 > 0x7FFFFFF )
        v18 = 0x7FFFFFF;
      v22 = (char *)(32 * v18);
      v23 = (int)&a2[-*(_DWORD *)a1] >> 5;
      if ( v18 != 0 )
        v18 = operator new(32 * v18);
      std::__uninitialized_fill_n<false>::__uninit_fill_n<Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T *,unsigned int,Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T>(
        (char *)(v18 + 32 * v23),
        a3,
        a4);
      v19 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T *,Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T *>(
              *(char **)a1,
              a2,
              (char *)v18);
      v20 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T *,Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T *>(
              a2,
              *(char **)(a1 + 4),
              &v19[32 * a3]);
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)a1 = v18;
      *(_DWORD *)(a1 + 4) = v20;
      *(_DWORD *)(a1 + 8) = &v22[v18];
    }
    else
    {
      j_memcpy(v26, a4, 0x20u);
      v8 = (v7 - a2) >> 5;
      if ( v8 <= a3 )
      {
        v13 = a3 - v8;
        std::__uninitialized_fill_n<false>::__uninit_fill_n<Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T *,unsigned int,Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T>(
          v7,
          v13,
          v26);
        v14 = (char *)(*(_DWORD *)(a1 + 4) + 32 * v13);
        *(_DWORD *)(a1 + 4) = v14;
        std::__uninitialized_copy<false>::__uninit_copy<Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T *,Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T *>(
          a2,
          v7,
          v14);
        *(_DWORD *)(a1 + 4) += 32 * v8;
        for ( i = a2; i != v7; i += 32 )
          Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T::operator=(i, v26);
      }
      else
      {
        v25 = 32 * a3;
        v9 = &v7[-32 * a3];
        v10 = v7;
        for ( j = v9; j != v7; j += 32 )
        {
          if ( v10 != nullptr )
            j_memcpy(v10, j, 0x20u);
          v10 += 32;
        }
        *(_DWORD *)(a1 + 4) += v25;
        for ( k = (v9 - a2) >> 5; k > 0; --k )
        {
          v7 -= 32;
          v9 -= 32;
          Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T::operator=(v7, v9);
        }
        for ( m = a2; m != &a2[v25]; m += 32 )
          Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T::operator=(m, v26);
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::ShaderMacro,std::allocator<Ogre::ShaderMacro>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::ShaderMacro*,std::vector<Ogre::ShaderMacro,std::allocator<Ogre::ShaderMacro>>>,Ogre::ShaderMacro const&)
// address: 0x00154568   size: 0xB6 (182 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::ShaderMacro>::_M_insert_aux(__int64 a1, _DWORD *byte_count)
{
  _DWORD *v2; // r3
  __int64 v3; // r4
  int v5; // r2
  int v6; // r6
  int v7; // r2
  unsigned int v8; // r3
  unsigned int v9; // r2
  int v10; // r6
  _DWORD *v11; // r3
  int v12; // r0
  __int64 v14; // [sp+0h] [bp-Ch]

  v14 = a1;
  v2 = *(_DWORD **)(a1 + 4);
  v3 = a1;
  if ( v2 != *(_DWORD **)(a1 + 8) )
  {
    if ( v2 != nullptr )
    {
      *v2 = *(v2 - 2);
      v2[1] = *(v2 - 1);
    }
    LODWORD(a1) = *(_DWORD *)(a1 + 4);
    v5 = *(_DWORD *)(v3 + 4) - 8;
    *(_DWORD *)(v3 + 4) = a1 + 8;
    LODWORD(v3) = *byte_count;
    v6 = byte_count[1];
    v7 = (v5 - HIDWORD(a1)) >> 3;
    if ( v7 != 0 )
      j_memmove((void *)(a1 - 8 * v7), (const void *)HIDWORD(a1), 8 * v7);
    *(_DWORD *)HIDWORD(v3) = v3;
    *(_DWORD *)(HIDWORD(v3) + 4) = v6;
    return v14;
  }
  v8 = ((int)v2 - *(_DWORD *)a1) >> 3;
  if ( v8 == 0 )
  {
    v9 = 1;
    goto LABEL_11;
  }
  v9 = 2 * v8;
  v10 = 0x1FFFFFFF;
  if ( 2 * v8 >= v8 )
  {
LABEL_11:
    v10 = v9;
    if ( v9 > 0x1FFFFFFF )
      v10 = 0x1FFFFFFF;
  }
  LODWORD(v14) = (HIDWORD(a1) - *(_DWORD *)a1) >> 3;
  HIDWORD(v14) = 8 * v10;
  if ( v10 != 0 )
    v10 = operator new(8 * v10);
  v11 = (_DWORD *)(v10 + 8 * v14);
  if ( v11 != nullptr )
  {
    *v11 = *byte_count;
    v11[1] = byte_count[1];
  }
  v12 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ShaderMacro>(
          *(void **)v3,
          SHIDWORD(v3),
          (void *)v10);
  HIDWORD(v3) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ShaderMacro>(
                  (void *)HIDWORD(v3),
                  *(_DWORD *)(v3 + 4),
                  (void *)(v12 + 8));
  if ( *(_DWORD *)v3 != 0 )
    operator delete(*(void **)v3);
  *(_DWORD *)v3 = v10;
  *(_DWORD *)(v3 + 4) = HIDWORD(v3);
  *(_DWORD *)(v3 + 8) = v10 + HIDWORD(v14);
  return v14;
}


//======================================================================
// std::vector<char const*,std::allocator<char const*>>::_M_insert_aux(__gnu_cxx::__normal_iterator<char const**,std::vector<char const*,std::allocator<char const*>>>,char const* const&)
// address: 0x001548D4   size: 0xA6 (166 bytes)
//======================================================================
__int64 __fastcall std::vector<char const*>::_M_insert_aux(__int64 a1, _DWORD *a2)
{
  _DWORD *v3; // r3
  __int64 v4; // r4
  int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r2
  int v8; // r6
  _DWORD *v9; // r3
  int v10; // r0
  __int64 v12; // [sp+0h] [bp-Ch]

  v12 = a1;
  v3 = *(_DWORD **)(a1 + 4);
  v4 = a1;
  if ( v3 != *(_DWORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
      *v3 = *(v3 - 1);
    LODWORD(a1) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v4 + 4) = a1 + 4;
    LODWORD(v4) = *a2;
    v5 = ((int)a1 - 4 - HIDWORD(a1)) >> 2;
    if ( v5 != 0 )
      j_memmove((void *)(a1 - 4 * v5), (const void *)HIDWORD(a1), 4 * v5);
    *(_DWORD *)HIDWORD(v4) = v4;
    return v12;
  }
  v6 = ((int)v3 - *(_DWORD *)a1) >> 2;
  if ( v6 == 0 )
  {
    v7 = 1;
    goto LABEL_11;
  }
  v7 = 2 * v6;
  v8 = 0x3FFFFFFF;
  if ( 2 * v6 >= v6 )
  {
LABEL_11:
    v8 = v7;
    if ( v7 > 0x3FFFFFFF )
      v8 = 0x3FFFFFFF;
  }
  LODWORD(v12) = (HIDWORD(a1) - *(_DWORD *)a1) >> 2;
  HIDWORD(v12) = 4 * v8;
  if ( v8 != 0 )
    v8 = operator new(4 * v8);
  v9 = (_DWORD *)(v8 + 4 * v12);
  if ( v9 != nullptr )
    *v9 = *a2;
  v10 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<char const*>(
          *(void **)v4,
          SHIDWORD(v4),
          (void *)v8);
  HIDWORD(v4) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<char const*>(
                  (void *)HIDWORD(v4),
                  *(_DWORD *)(v4 + 4),
                  (void *)(v10 + 4));
  if ( *(_DWORD *)v4 != 0 )
    operator delete(*(void **)v4);
  *(_DWORD *)v4 = v8;
  *(_DWORD *)(v4 + 4) = HIDWORD(v4);
  *(_DWORD *)(v4 + 8) = v8 + HIDWORD(v12);
  return v12;
}


//======================================================================
// std::vector<char const*,std::allocator<char const*>>::push_back(char const* const&)
// address: 0x00154980   size: 0x22 (34 bytes)
//======================================================================
int __fastcall std::vector<char const*>::push_back(__int64 a1)
{
  _DWORD *v1; // r2

  v1 = (_DWORD *)HIDWORD(a1);
  HIDWORD(a1) = *(_DWORD *)(a1 + 4);
  if ( HIDWORD(a1) == *(_DWORD *)(a1 + 8) )
  {
    LODWORD(a1) = std::vector<char const*>::_M_insert_aux(a1, v1);
  }
  else
  {
    if ( HIDWORD(a1) != 0 )
      *(_DWORD *)HIDWORD(a1) = *v1;
    *(_DWORD *)(a1 + 4) += 4;
  }
  return a1;
}


//======================================================================
// std::vector<Ogre::FontGlyphMapFreeType::FontFaceInfo,std::allocator<Ogre::FontGlyphMapFreeType::FontFaceInfo>>::~vector()
// address: 0x00154AEC   size: 0x24 (36 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIN4Ogre20FontGlyphMapFreeType12FontFaceInfoESaIS2_EED1Ev'
void **__fastcall std::vector<Ogre::FontGlyphMapFreeType::FontFaceInfo>::~vector(void **a1)
{
  char *v1; // r5
  char *v2; // r6

  v1 = (char *)*a1;
  v2 = (char *)a1[1];
  while ( v1 != v2 )
  {
    sub_3BDF80(v1);
    v1 += 12;
  }
  if ( *a1 != nullptr )
    operator delete(*a1);
  return a1;
}


//======================================================================
// std::vector<Ogre::FontGlyphMapFreeType::FontFaceInfo,std::allocator<Ogre::FontGlyphMapFreeType::FontFaceInfo>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::FontGlyphMapFreeType::FontFaceInfo*,std::vector<Ogre::FontGlyphMapFreeType::FontFaceInfo,std::allocator<Ogre::FontGlyphMapFreeType::FontFaceInfo>>>,Ogre::FontGlyphMapFreeType::FontFaceInfo const&)
// address: 0x00154D88   size: 0x162 (354 bytes)
//======================================================================
void __fastcall std::vector<Ogre::FontGlyphMapFreeType::FontFaceInfo>::_M_insert_aux(char **a1, char *a2, int a3)
{
  char *v4; // r5
  char *v6; // r4
  char *v7; // r4
  int v8; // r5
  int v9; // r2
  char *v10; // r1
  unsigned int v11; // r3
  int v12; // r5
  char *v13; // r5
  char *v14; // r5
  char *i; // r6
  char *v16; // r7
  char *v17; // r6
  char *v18; // r5
  char *v19; // r6
  int v20; // [sp+4h] [bp-20h]
  char *v22; // [sp+Ch] [bp-18h]
  char v23[4]; // [sp+14h] [bp-10h] BYREF
  int v24; // [sp+18h] [bp-Ch]
  int v25; // [sp+1Ch] [bp-8h]

  v4 = a1[1];
  if ( v4 != a1[2] )
  {
    if ( v4 != nullptr )
    {
      sub_3BEB1C(v4, v4 - 12);
      *((_DWORD *)v4 + 1) = *((_DWORD *)v4 - 2);
      *((_DWORD *)v4 + 2) = *((_DWORD *)v4 - 1);
    }
    a1[1] += 12;
    sub_3BEB1C(v23, a3);
    v6 = a1[1];
    v24 = *(_DWORD *)(a3 + 4);
    v7 = v6 - 24;
    v8 = -1431655765 * ((v7 - a2) >> 2);
    v25 = *(_DWORD *)(a3 + 8);
    while ( v8 > 0 )
    {
      v7 -= 12;
      sub_3BEBBC(v7 + 12);
      v9 = *((_DWORD *)v7 + 2);
      --v8;
      *((_DWORD *)v7 + 4) = *((_DWORD *)v7 + 1);
      *((_DWORD *)v7 + 5) = v9;
    }
    sub_3BEBBC(a2);
    *((_DWORD *)a2 + 1) = v24;
    *((_DWORD *)a2 + 2) = v25;
    sub_3BDF80(v23);
    return;
  }
  v10 = *a1;
  if ( -1431655765 * ((v4 - *a1) >> 2) == 0 )
  {
    v11 = 1;
    goto LABEL_12;
  }
  v11 = 1431655766 * ((v4 - v10) >> 2);
  v20 = 357913941;
  if ( v11 >= -1431655765 * ((v4 - v10) >> 2) )
  {
LABEL_12:
    v20 = v11;
    if ( v11 > 0x15555555 )
      v20 = 357913941;
  }
  v12 = -1431655765 * ((a2 - v10) >> 2);
  if ( v20 != 0 )
    v22 = (char *)operator new(12 * v20);
  else
    v22 = nullptr;
  v13 = &v22[12 * v12];
  if ( v13 != nullptr )
  {
    sub_3BEB1C(v13, a3);
    *((_DWORD *)v13 + 1) = *(_DWORD *)(a3 + 4);
    *((_DWORD *)v13 + 2) = *(_DWORD *)(a3 + 8);
  }
  v14 = *a1;
  for ( i = v22; ; i += 12 )
  {
    v16 = i + 12;
    if ( v14 == a2 )
      break;
    if ( i != nullptr )
    {
      sub_3BEB1C(i, v14);
      *((_DWORD *)i + 1) = *((_DWORD *)v14 + 1);
      *((_DWORD *)i + 2) = *((_DWORD *)v14 + 2);
    }
    v14 += 12;
  }
  v17 = a1[1];
  while ( v14 != v17 )
  {
    if ( v16 != nullptr )
    {
      sub_3BEB1C(v16, v14);
      *((_DWORD *)v16 + 1) = *((_DWORD *)v14 + 1);
      *((_DWORD *)v16 + 2) = *((_DWORD *)v14 + 2);
    }
    v16 += 12;
    v14 += 12;
  }
  v18 = *a1;
  v19 = a1[1];
  while ( v18 != v19 )
  {
    sub_3BDF80(v18);
    v18 += 12;
  }
  if ( *a1 != nullptr )
    operator delete(*a1);
  a1[1] = v16;
  *a1 = v22;
  a1[2] = &v22[12 * v20];
}


//======================================================================
// std::vector<Ogre::BoneInstance,std::allocator<Ogre::BoneInstance>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::BoneInstance*,std::vector<Ogre::BoneInstance,std::allocator<Ogre::BoneInstance>>>,unsigned int,Ogre::BoneInstance const&)
// address: 0x00155688   size: 0x1BE (446 bytes)
//======================================================================
void __fastcall std::vector<Ogre::BoneInstance>::_M_fill_insert(
        int a1,
        const Ogre::BoneInstance *a2,
        unsigned int a3,
        const Ogre::BoneInstance *a4)
{
  unsigned int v5; // r5
  int v6; // r3
  int v7; // r6
  int v8; // r2
  const Ogre::BoneInstance *v9; // r5
  const Ogre::BoneInstance *j; // r7
  int k; // r7
  int m; // r4
  Ogre::BoneInstance *v13; // r7
  unsigned int v14; // r5
  const Ogre::BoneInstance *v15; // r7
  Ogre::BoneInstance *v16; // r5
  int i; // r4
  unsigned int v18; // r3
  unsigned int v19; // r2
  int v20; // r7
  unsigned int v21; // r6
  Ogre::BoneInstance *v22; // r7
  const Ogre::BoneInstance *v23; // r6
  Ogre::BoneInstance *v24; // r7
  Ogre::BoneInstance *v25; // r7
  const Ogre::BoneInstance *v26; // r5
  unsigned int v27; // [sp+4h] [bp-98h]
  int v28; // [sp+4h] [bp-98h]
  int v29; // [sp+4h] [bp-98h]
  Ogre::BoneInstance *v30; // [sp+8h] [bp-94h]
  unsigned int v31; // [sp+8h] [bp-94h]
  Ogre::BoneInstance *v32; // [sp+8h] [bp-94h]
  _DWORD v35[32]; // [sp+1Ch] [bp-80h] BYREF

  v5 = a3;
  if ( a3 != 0 )
  {
    v6 = *(_DWORD *)(a1 + 4);
    if ( -1108378657 * ((*(_DWORD *)(a1 + 8) - v6) >> 2) < a3 )
    {
      v18 = -1108378657 * ((v6 - *(_DWORD *)a1) >> 2);
      if ( 34636833 - v18 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      if ( a3 < v18 )
        a3 = v18;
      v19 = a3 + v18;
      if ( v19 < v18 )
      {
        v29 = 34636833;
      }
      else
      {
        v29 = v19;
        if ( v19 > 0x2108421 )
          v29 = 34636833;
      }
      v20 = -1108378657 * (((int)a2 - *(_DWORD *)a1) >> 2);
      if ( v29 != 0 )
        v32 = (Ogre::BoneInstance *)operator new(124 * v29);
      else
        v32 = nullptr;
      v21 = v5;
      v22 = (Ogre::BoneInstance *)((char *)v32 + 124 * v20);
      do
      {
        --v21;
        std::_Construct<Ogre::BoneInstance,Ogre::BoneInstance>(v22, a4);
        v22 = (Ogre::BoneInstance *)((char *)v22 + 124);
      }
      while ( v21 != 0 );
      v23 = *(const Ogre::BoneInstance **)a1;
      v24 = v32;
      while ( v23 != a2 )
      {
        std::_Construct<Ogre::BoneInstance,Ogre::BoneInstance>(v24, v23);
        v23 = (const Ogre::BoneInstance *)((char *)v23 + 124);
        v24 = (Ogre::BoneInstance *)((char *)v24 + 124);
      }
      v25 = (Ogre::BoneInstance *)((char *)v24 + 124 * v5);
      v26 = *(const Ogre::BoneInstance **)(a1 + 4);
      while ( v23 != v26 )
      {
        std::_Construct<Ogre::BoneInstance,Ogre::BoneInstance>(v25, v23);
        v25 = (Ogre::BoneInstance *)((char *)v25 + 124);
        v23 = (const Ogre::BoneInstance *)((char *)v23 + 124);
      }
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)a1 = v32;
      *(_DWORD *)(a1 + 4) = v25;
      *(_DWORD *)(a1 + 8) = (char *)v32 + 124 * v29;
    }
    else
    {
      Ogre::BoneInstance::BoneInstance((Ogre::BoneInstance *)v35, a4);
      v7 = *(_DWORD *)(a1 + 4);
      v27 = -1108378657 * ((v7 - (int)a2) >> 2);
      if ( v27 <= v5 )
      {
        v13 = *(Ogre::BoneInstance **)(a1 + 4);
        v14 = v5 - v27;
        v31 = v14;
        while ( v14 != 0 )
        {
          std::_Construct<Ogre::BoneInstance,Ogre::BoneInstance>(v13, (const Ogre::BoneInstance *)v35);
          --v14;
          v13 = (Ogre::BoneInstance *)((char *)v13 + 124);
        }
        v15 = a2;
        v16 = (Ogre::BoneInstance *)(*(_DWORD *)(a1 + 4) + 124 * v31);
        *(_DWORD *)(a1 + 4) = v16;
        while ( v15 != (const Ogre::BoneInstance *)v7 )
        {
          std::_Construct<Ogre::BoneInstance,Ogre::BoneInstance>(v16, v15);
          v16 = (Ogre::BoneInstance *)((char *)v16 + 124);
          v15 = (const Ogre::BoneInstance *)((char *)v15 + 124);
        }
        *(_DWORD *)(a1 + 4) += 4 * ((v7 - (int)a2) >> 2);
        for ( i = (int)a2; i != v7; i += 124 )
          Ogre::BoneInstance::operator=(i, v35);
      }
      else
      {
        v8 = 124 * v5;
        v9 = (const Ogre::BoneInstance *)(v7 - 124 * v5);
        v28 = v8;
        v30 = *(Ogre::BoneInstance **)(a1 + 4);
        for ( j = v9; j != (const Ogre::BoneInstance *)v7; j = (const Ogre::BoneInstance *)((char *)j + 124) )
        {
          std::_Construct<Ogre::BoneInstance,Ogre::BoneInstance>(v30, j);
          v30 = (Ogre::BoneInstance *)((char *)v30 + 124);
        }
        *(_DWORD *)(a1 + 4) += v28;
        for ( k = -1108378657 * ((v9 - a2) >> 2); k > 0; --k )
        {
          v7 -= 124;
          v9 = (const Ogre::BoneInstance *)((char *)v9 - 124);
          Ogre::BoneInstance::operator=(v7, v9);
        }
        for ( m = (int)a2; (const Ogre::BoneInstance *)m != (const Ogre::BoneInstance *)((char *)a2 + v28); m += 124 )
          Ogre::BoneInstance::operator=(m, v35);
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::BoneData *,std::allocator<Ogre::BoneData *>>::_M_check_len(unsigned int,char const*)const
// address: 0x00155E4C   size: 0x2C (44 bytes)
//======================================================================
unsigned int __fastcall std::vector<Ogre::BoneData *>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = (a1[1] - *a1) >> 2;
  if ( 0x3FFFFFFF - v3 < a2 )
    sub_3BD058(a3);
  v4 = (a1[1] - *a1) >> 2;
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0x3FFFFFFF )
    return 0x3FFFFFFF;
  return result;
}


//======================================================================
// std::vector<Ogre::BoneData *,std::allocator<Ogre::BoneData *>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::BoneData **,std::vector<Ogre::BoneData *,std::allocator<Ogre::BoneData *>>>,unsigned int,Ogre::BoneData * const&)
// address: 0x00155F78   size: 0x104 (260 bytes)
//======================================================================
void __fastcall std::vector<Ogre::BoneData *>::_M_fill_insert(void **a1, char *a2, unsigned int a3, void **a4)
{
  char *v5; // r5
  char *v7; // r7
  int v8; // r6
  char *v9; // r6
  char *v10; // r2
  unsigned int v11; // r0
  unsigned int v12; // r7
  char *v13; // r2
  void *v14; // r1
  unsigned int v15; // r3
  int v16; // r0
  int v17; // r5
  unsigned int v19; // [sp+4h] [bp-10h]
  void *v20; // [sp+8h] [bp-Ch]
  char *v21; // [sp+8h] [bp-Ch]
  int v22; // [sp+Ch] [bp-8h]

  v5 = a2;
  if ( a3 != 0 )
  {
    v7 = (char *)a1[1];
    if ( ((_BYTE *)a1[2] - v7) >> 2 < a3 )
    {
      v11 = std::vector<Ogre::BoneData *>::_M_check_len(a1, a3, (int)"vector::_M_fill_insert");
      v12 = v11;
      v22 = (v5 - (_BYTE *)*a1) >> 2;
      if ( v11 != 0 )
      {
        if ( v11 > 0x3FFFFFFF )
          sub_3BCEB4();
        v21 = (char *)operator new(4 * v11);
      }
      else
      {
        v21 = nullptr;
      }
      v13 = &v21[4 * v22];
      v14 = *a4;
      v15 = a3;
      do
      {
        --v15;
        *(_DWORD *)v13 = v14;
        v13 += 4;
      }
      while ( v15 != 0 );
      v16 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::BoneData *>(*a1, (int)v5, v21);
      v17 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::BoneData *>(
              v5,
              (int)a1[1],
              (void *)(v16 + 4 * a3));
      if ( *a1 != nullptr )
        operator delete(*a1);
      a1[1] = (void *)v17;
      *a1 = v21;
      a1[2] = &v21[4 * v12];
    }
    else
    {
      v19 = (v7 - a2) >> 2;
      v20 = *a4;
      if ( v19 <= a3 )
      {
        memset32(v7, (int)v20, a3 - v19);
        v10 = (char *)a1[1] + 4 * (a3 - v19);
        a1[1] = v10;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::BoneData *>(a2, (int)v7, v10);
        a1[1] = (char *)a1[1] + 4 * v19;
        while ( v5 != v7 )
        {
          *(_DWORD *)v5 = v20;
          v5 += 4;
        }
      }
      else
      {
        v8 = 4 * a3;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::BoneData *>(
          &v7[-4 * a3],
          (int)v7,
          v7);
        a1[1] = (char *)a1[1] + v8;
        std::copy_backward<Ogre::BoneData **,Ogre::BoneData **>(v5, (int)&v7[-v8], (int)v7);
        v9 = &v5[v8];
        while ( v5 != v9 )
        {
          *(_DWORD *)v5 = v20;
          v5 += 4;
        }
      }
    }
  }
}


//======================================================================
// std::vector<std::string,std::allocator<std::string>>::~vector()
// address: 0x001575A4   size: 0x24 (36 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorISsSaISsEED1Ev'
void **__fastcall std::vector<std::string>::~vector(void **a1)
{
  char *v1; // r5
  char *v2; // r6

  v1 = (char *)*a1;
  v2 = (char *)a1[1];
  while ( v1 != v2 )
  {
    sub_3BDF80(v1);
    v1 += 4;
  }
  if ( *a1 != nullptr )
    operator delete(*a1);
  return a1;
}


//======================================================================
// std::vector<Ogre::BlockVertex,std::allocator<Ogre::BlockVertex>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::BlockVertex*,std::vector<Ogre::BlockVertex,std::allocator<Ogre::BlockVertex>>>,unsigned int,Ogre::BlockVertex const&)
// address: 0x00157744   size: 0x1F4 (500 bytes)
//======================================================================
void __fastcall std::vector<Ogre::BlockVertex>::_M_fill_insert(int a1, _DWORD *a2, unsigned int a3, _DWORD *a4)
{
  int v6; // r2
  int v7; // r3
  int v8; // r1
  int v9; // r2
  int v10; // r0
  int v11; // r3
  unsigned int v12; // r2
  _DWORD *v13; // r5
  _DWORD *k; // r7
  int m; // r7
  _DWORD *n; // r4
  _DWORD *v17; // r7
  unsigned int i; // r5
  _DWORD *v19; // r5
  _DWORD *v20; // r7
  _DWORD *j; // r4
  unsigned int v22; // r3
  unsigned int v23; // r2
  int v24; // r7
  _DWORD *v25; // r0
  unsigned int v26; // r6
  _DWORD *v27; // r7
  _DWORD *v28; // r5
  _DWORD *v29; // r6
  _DWORD *v30; // r7
  _DWORD *v31; // r6
  _DWORD *v32; // [sp+0h] [bp-3Ch]
  _DWORD *v33; // [sp+0h] [bp-3Ch]
  unsigned int v34; // [sp+4h] [bp-38h]
  int v35; // [sp+4h] [bp-38h]
  unsigned int v36; // [sp+4h] [bp-38h]
  _DWORD *v37; // [sp+8h] [bp-34h]
  int v38; // [sp+8h] [bp-34h]
  _DWORD v40[10]; // [sp+14h] [bp-28h] BYREF

  v34 = a3;
  if ( a3 != 0 )
  {
    v37 = *(_DWORD **)(a1 + 4);
    if ( 954437177 * ((*(_DWORD *)(a1 + 8) - (int)v37) >> 2) < a3 )
    {
      v22 = 954437177 * (((int)v37 - *(_DWORD *)a1) >> 2);
      if ( 119304647 - v22 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      if ( a3 < v22 )
        a3 = 954437177 * (((int)v37 - *(_DWORD *)a1) >> 2);
      v23 = a3 + v22;
      if ( v23 < v22 )
      {
        v38 = 119304647;
      }
      else
      {
        v38 = v23;
        if ( v23 > 0x71C71C7 )
          v38 = 119304647;
      }
      v24 = 954437177 * (((int)a2 - *(_DWORD *)a1) >> 2);
      if ( v38 != 0 )
        v25 = (_DWORD *)operator new(36 * v38);
      else
        v25 = nullptr;
      v33 = v25;
      v26 = v34;
      v27 = &v25[9 * v24];
      do
      {
        --v26;
        std::_Construct<Ogre::BlockVertex,Ogre::BlockVertex>(v27, a4);
        v27 += 9;
      }
      while ( v26 != 0 );
      v28 = *(_DWORD **)a1;
      v29 = v33;
      while ( v28 != a2 )
      {
        std::_Construct<Ogre::BlockVertex,Ogre::BlockVertex>(v29, v28);
        v28 += 9;
        v29 += 9;
      }
      v30 = *(_DWORD **)(a1 + 4);
      v31 = &v29[9 * v34];
      while ( v28 != v30 )
      {
        std::_Construct<Ogre::BlockVertex,Ogre::BlockVertex>(v31, v28);
        v31 += 9;
        v28 += 9;
      }
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)a1 = v33;
      *(_DWORD *)(a1 + 4) = v31;
      *(_DWORD *)(a1 + 8) = &v33[9 * v38];
    }
    else
    {
      v6 = a4[1];
      v7 = a4[2];
      v40[0] = *a4;
      v40[1] = v6;
      v8 = a4[4];
      v9 = a4[5];
      v10 = a4[3];
      v40[2] = v7;
      v40[4] = v8;
      v11 = a4[6];
      v40[5] = v9;
      v40[3] = v10;
      v40[6] = v11;
      v40[7] = a4[7];
      v12 = v34;
      v40[8] = a4[8];
      if ( 954437177 * (v37 - a2) <= v34 )
      {
        v17 = v37;
        v36 = v34 - 954437177 * (v37 - a2);
        for ( i = v36; i != 0; --i )
        {
          std::_Construct<Ogre::BlockVertex,Ogre::BlockVertex>(v17, v40);
          v17 += 9;
        }
        v19 = a2;
        v20 = (_DWORD *)(*(_DWORD *)(a1 + 4) + 36 * v36);
        *(_DWORD *)(a1 + 4) = v20;
        while ( v19 != v37 )
        {
          std::_Construct<Ogre::BlockVertex,Ogre::BlockVertex>(v20, v19);
          v20 += 9;
          v19 += 9;
        }
        *(_DWORD *)(a1 + 4) += 4 * (v37 - a2);
        for ( j = a2; j != v37; j += 9 )
          Ogre::BlockVertex::operator=(j, v40);
      }
      else
      {
        v35 = 9 * v34;
        v13 = &v37[-9 * v12];
        v32 = v37;
        for ( k = v13; k != v37; k += 9 )
        {
          std::_Construct<Ogre::BlockVertex,Ogre::BlockVertex>(v32, k);
          v32 += 9;
        }
        *(_DWORD *)(a1 + 4) += v35 * 4;
        for ( m = 954437177 * (v13 - a2); m > 0; --m )
        {
          v13 -= 9;
          v37 -= 9;
          Ogre::BlockVertex::operator=(v37, v13);
        }
        for ( n = a2; n != &a2[v35]; n += 9 )
          Ogre::BlockVertex::operator=(n, v40);
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::ColorQuad,std::allocator<Ogre::ColorQuad>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::ColorQuad*,std::vector<Ogre::ColorQuad,std::allocator<Ogre::ColorQuad>>>,unsigned int,Ogre::ColorQuad const&)
// address: 0x00158504   size: 0x132 (306 bytes)
//======================================================================
void __fastcall std::vector<Ogre::ColorQuad>::_M_fill_insert(int a1, char *a2, unsigned int a3, _DWORD *a4)
{
  char *v5; // r7
  char *v7; // r5
  char *v8; // r6
  int j; // r3
  char *v10; // r6
  _DWORD *v11; // r3
  unsigned int i; // r1
  _DWORD *v13; // r2
  unsigned int v14; // r3
  unsigned int v15; // r5
  unsigned int v16; // r5
  _DWORD *v17; // r3
  unsigned int v18; // r2
  _DWORD *v19; // r0
  _DWORD *v20; // r6
  unsigned int v21; // [sp+4h] [bp-10h]
  int v22; // [sp+4h] [bp-10h]
  _DWORD *v23; // [sp+4h] [bp-10h]
  int v25; // [sp+8h] [bp-Ch]
  int v26; // [sp+Ch] [bp-8h]

  v5 = a2;
  if ( a3 != 0 )
  {
    v7 = *(char **)(a1 + 4);
    if ( (*(_DWORD *)(a1 + 8) - (int)v7) >> 2 < a3 )
    {
      v14 = (int)&v7[-*(_DWORD *)a1] >> 2;
      if ( 0x3FFFFFFF - v14 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v15 = a3;
      if ( a3 < v14 )
        v15 = v14;
      v16 = v15 + v14;
      if ( v16 < v14 || v16 > 0x3FFFFFFF )
        v16 = 0x3FFFFFFF;
      v26 = (int)&a2[-*(_DWORD *)a1] >> 2;
      if ( v16 != 0 )
        v23 = (_DWORD *)operator new(4 * v16);
      else
        v23 = nullptr;
      v17 = &v23[v26];
      v18 = a3;
      do
      {
        if ( v17 != nullptr )
          *v17 = *a4;
        --v18;
        ++v17;
      }
      while ( v18 != 0 );
      v19 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::ColorQuad *,Ogre::ColorQuad *>(*(char **)a1, v5, v23);
      v20 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::ColorQuad *,Ogre::ColorQuad *>(
              v5,
              *(char **)(a1 + 4),
              &v19[a3]);
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)(a1 + 4) = v20;
      *(_DWORD *)a1 = v23;
      *(_DWORD *)(a1 + 8) = &v23[v16];
    }
    else
    {
      v21 = (v7 - a2) >> 2;
      v25 = *a4;
      if ( v21 <= a3 )
      {
        v11 = *(_DWORD **)(a1 + 4);
        for ( i = a3 - v21; i != 0; --i )
        {
          if ( v11 != nullptr )
            *v11 = v25;
          ++v11;
        }
        v13 = (_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * (a3 - v21));
        *(_DWORD *)(a1 + 4) = v13;
        std::__uninitialized_copy<false>::__uninit_copy<Ogre::ColorQuad *,Ogre::ColorQuad *>(v5, v7, v13);
        *(_DWORD *)(a1 + 4) += 4 * v21;
        while ( v5 != v7 )
        {
          *(_DWORD *)v5 = v25;
          v5 += 4;
        }
      }
      else
      {
        v22 = 4 * a3;
        v8 = &v7[-4 * a3];
        std::__uninitialized_copy<false>::__uninit_copy<Ogre::ColorQuad *,Ogre::ColorQuad *>(v8, v7, v7);
        *(_DWORD *)(a1 + 4) += v22;
        for ( j = (v8 - v5) >> 2; j > 0; --j )
        {
          v8 -= 4;
          v7 -= 4;
          *(_DWORD *)v7 = *(_DWORD *)v8;
        }
        v10 = &v5[v22];
        while ( v5 != v10 )
        {
          *(_DWORD *)v5 = v25;
          v5 += 4;
        }
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::ColorQuad,std::allocator<Ogre::ColorQuad>>::resize(unsigned int,Ogre::ColorQuad)
// address: 0x00158640   size: 0x28 (40 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::ColorQuad>::resize(__int64 a1, int a2)
{
  char *v2; // r3
  int v3; // r4
  unsigned int v4; // r2
  __int64 v6; // [sp+0h] [bp-8h] BYREF

  v6 = a1;
  v2 = *(char **)(a1 + 4);
  v3 = *(_DWORD *)a1;
  HIDWORD(v6) = a2;
  v4 = (int)&v2[-v3] >> 2;
  if ( HIDWORD(a1) <= v4 )
  {
    if ( HIDWORD(a1) < v4 )
      *(_DWORD *)(a1 + 4) = v3 + 4 * HIDWORD(a1);
  }
  else
  {
    std::vector<Ogre::ColorQuad>::_M_fill_insert(a1, v2, HIDWORD(a1) - v4, (_DWORD *)&v6 + 1);
  }
  return v6;
}


//======================================================================
// std::vector<Ogre::Vector3,std::allocator<Ogre::Vector3>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::Vector3*,std::vector<Ogre::Vector3,std::allocator<Ogre::Vector3>>>,unsigned int,Ogre::Vector3 const&)
// address: 0x001586A0   size: 0x198 (408 bytes)
//======================================================================
void __fastcall std::vector<Ogre::Vector3>::_M_fill_insert(int a1, char *a2, unsigned int a3, _DWORD *a4)
{
  int v6; // r7
  int v7; // r4
  int v8; // r5
  char *j; // r3
  _DWORD *v10; // r3
  unsigned int i; // r1
  _DWORD *v12; // r2
  char *v13; // r3
  unsigned int v14; // r7
  unsigned int v15; // r5
  unsigned int v16; // r5
  _DWORD *v17; // r7
  unsigned int v18; // r2
  _DWORD *v19; // r3
  _DWORD *v20; // r0
  _DWORD *v21; // r4
  unsigned int v23; // [sp+Ch] [bp-18h]
  int v24; // [sp+Ch] [bp-18h]
  int v25; // [sp+10h] [bp-14h]
  int v26; // [sp+10h] [bp-14h]
  int v28; // [sp+18h] [bp-Ch]
  int v29; // [sp+1Ch] [bp-8h]

  if ( a3 != 0 )
  {
    v6 = *(_DWORD *)(a1 + 4);
    if ( -1431655765 * ((*(_DWORD *)(a1 + 8) - v6) >> 2) < a3 )
    {
      v14 = -1431655765 * ((v6 - *(_DWORD *)a1) >> 2);
      if ( 357913941 - v14 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v15 = a3;
      if ( a3 < v14 )
        v15 = v14;
      v16 = v15 + v14;
      if ( v16 < v14 || v16 > 0x15555555 )
        v16 = 357913941;
      v26 = -1431655765 * ((int)&a2[-*(_DWORD *)a1] >> 2);
      if ( v16 != 0 )
        v17 = (_DWORD *)operator new(12 * v16);
      else
        v17 = nullptr;
      v18 = a3;
      v19 = &v17[3 * v26];
      do
      {
        if ( v19 != nullptr )
        {
          *v19 = *a4;
          v19[1] = a4[1];
          v19[2] = a4[2];
        }
        --v18;
        v19 += 3;
      }
      while ( v18 != 0 );
      v20 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::Vector3 *,Ogre::Vector3 *>(*(char **)a1, a2, v17);
      v21 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::Vector3 *,Ogre::Vector3 *>(
              a2,
              *(char **)(a1 + 4),
              &v20[3 * a3]);
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)a1 = v17;
      *(_DWORD *)(a1 + 4) = v21;
      *(_DWORD *)(a1 + 8) = &v17[3 * v16];
    }
    else
    {
      v25 = *a4;
      v28 = a4[1];
      v29 = a4[2];
      v23 = -1431655765 * ((v6 - (int)a2) >> 2);
      if ( v23 <= a3 )
      {
        v10 = *(_DWORD **)(a1 + 4);
        for ( i = a3 - v23; i != 0; --i )
        {
          if ( v10 != nullptr )
          {
            *v10 = v25;
            v10[1] = v28;
            v10[2] = v29;
          }
          v10 += 3;
        }
        v12 = (_DWORD *)(*(_DWORD *)(a1 + 4) + 12 * (a3 - v23));
        *(_DWORD *)(a1 + 4) = v12;
        std::__uninitialized_copy<false>::__uninit_copy<Ogre::Vector3 *,Ogre::Vector3 *>(a2, (char *)v6, v12);
        v13 = a2;
        *(_DWORD *)(a1 + 4) += 12 * v23;
        while ( v13 != (char *)v6 )
        {
          *(_DWORD *)v13 = v25;
          *((_DWORD *)v13 + 1) = v28;
          *((_DWORD *)v13 + 2) = v29;
          v13 += 12;
        }
      }
      else
      {
        v7 = v6 - 12 * a3;
        v24 = 12 * a3;
        std::__uninitialized_copy<false>::__uninit_copy<Ogre::Vector3 *,Ogre::Vector3 *>(
          (char *)v7,
          (char *)v6,
          (_DWORD *)v6);
        *(_DWORD *)(a1 + 4) += v24;
        v8 = -1431655765 * ((v7 - (int)a2) >> 2);
        while ( v8 > 0 )
        {
          v7 -= 12;
          v6 -= 12;
          --v8;
          *(_DWORD *)v6 = *(_DWORD *)v7;
          *(_DWORD *)(v6 + 4) = *(_DWORD *)(v7 + 4);
          *(_DWORD *)(v6 + 8) = *(_DWORD *)(v7 + 8);
        }
        for ( j = a2; j != &a2[v24]; j += 12 )
        {
          *(_DWORD *)j = v25;
          *((_DWORD *)j + 1) = v28;
          *((_DWORD *)j + 2) = v29;
        }
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::TileModel *,std::allocator<Ogre::TileModel *>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::TileModel **,std::vector<Ogre::TileModel *,std::allocator<Ogre::TileModel *>>>,unsigned int,Ogre::TileModel * const&)
// address: 0x001588EC   size: 0x120 (288 bytes)
//======================================================================
void __fastcall std::vector<Ogre::TileModel *>::_M_fill_insert(int a1, _DWORD *a2, unsigned int a3, void **a4)
{
  _DWORD *v5; // r5
  _BYTE *v7; // r7
  int v8; // r6
  _DWORD *v9; // r6
  void *v10; // r2
  unsigned int v11; // r3
  unsigned int v12; // r7
  unsigned int v13; // r7
  char *v14; // r2
  void *v15; // r1
  unsigned int v16; // r3
  int v17; // r0
  int v18; // r5
  unsigned int v20; // [sp+4h] [bp-10h]
  void *v21; // [sp+8h] [bp-Ch]
  char *v22; // [sp+8h] [bp-Ch]
  int v23; // [sp+Ch] [bp-8h]

  v5 = a2;
  if ( a3 != 0 )
  {
    v7 = *(_BYTE **)(a1 + 4);
    if ( (*(_DWORD *)(a1 + 8) - (int)v7) >> 2 < a3 )
    {
      v11 = (int)&v7[-*(_DWORD *)a1] >> 2;
      if ( 0x3FFFFFFF - v11 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v12 = a3;
      if ( a3 < v11 )
        v12 = v11;
      v13 = v12 + v11;
      if ( v13 < v11 || v13 > 0x3FFFFFFF )
        v13 = 0x3FFFFFFF;
      v23 = ((int)a2 - *(_DWORD *)a1) >> 2;
      if ( v13 != 0 )
        v22 = (char *)operator new(4 * v13);
      else
        v22 = nullptr;
      v14 = &v22[4 * v23];
      v15 = *a4;
      v16 = a3;
      do
      {
        --v16;
        *(_DWORD *)v14 = v15;
        v14 += 4;
      }
      while ( v16 != 0 );
      v17 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::TileModel *>(
              *(void **)a1,
              (int)v5,
              v22);
      v18 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::TileModel *>(
              v5,
              *(_DWORD *)(a1 + 4),
              (void *)(v17 + 4 * a3));
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)(a1 + 4) = v18;
      *(_DWORD *)a1 = v22;
      *(_DWORD *)(a1 + 8) = &v22[4 * v13];
    }
    else
    {
      v20 = (v7 - (_BYTE *)a2) >> 2;
      v21 = *a4;
      if ( v20 <= a3 )
      {
        memset32(v7, (int)v21, a3 - v20);
        v10 = (void *)(*(_DWORD *)(a1 + 4) + 4 * (a3 - v20));
        *(_DWORD *)(a1 + 4) = v10;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::TileModel *>(a2, (int)v7, v10);
        *(_DWORD *)(a1 + 4) += 4 * v20;
        while ( v5 != (_DWORD *)v7 )
          *v5++ = v21;
      }
      else
      {
        v8 = 4 * a3;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::TileModel *>(
          &v7[-4 * a3],
          (int)v7,
          v7);
        *(_DWORD *)(a1 + 4) += v8;
        if ( (&v7[-v8] - (_BYTE *)v5) >> 2 != 0 )
          j_memmove(&v7[-4 * ((&v7[-v8] - (_BYTE *)v5) >> 2)], v5, 4 * ((&v7[-v8] - (_BYTE *)v5) >> 2));
        v9 = &v5[v8 / 4u];
        while ( v5 != v9 )
          *v5++ = v21;
      }
    }
  }
}


//======================================================================
// std::vector<unsigned char,std::allocator<unsigned char>>::_M_fill_insert(__gnu_cxx::__normal_iterator<unsigned char *,std::vector<unsigned char,std::allocator<unsigned char>>>,unsigned int,unsigned char const&)
// address: 0x00158AB8   size: 0xF4 (244 bytes)
//======================================================================
void __fastcall std::vector<unsigned char>::_M_fill_insert(int a1, _BYTE *a2, size_t a3, unsigned __int8 *a4)
{
  _BYTE *v7; // r7
  size_t v8; // r2
  size_t v9; // r5
  void *v10; // r2
  size_t v11; // r3
  char *v12; // r1
  size_t v13; // r1
  size_t v14; // r7
  int v15; // r0
  int v16; // r5
  size_t v17; // [sp+4h] [bp-10h]
  size_t v18; // [sp+4h] [bp-10h]
  int v20; // [sp+8h] [bp-Ch]
  _BYTE *v21; // [sp+Ch] [bp-8h]

  if ( a3 != 0 )
  {
    v7 = *(_BYTE **)(a1 + 4);
    if ( *(_DWORD *)(a1 + 8) - (int)v7 < a3 )
    {
      v11 = (size_t)&v7[-*(_DWORD *)a1];
      if ( ~v11 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v12 = (char *)a3;
      if ( a3 < v11 )
        v12 = &v7[-*(_DWORD *)a1];
      v13 = (size_t)&v12[v11];
      if ( v13 >= v11 )
        v14 = v13;
      else
        v14 = -1;
      v21 = &a2[-*(_DWORD *)a1];
      if ( v14 != 0 )
        v18 = operator new(v14);
      else
        v18 = 0;
      j_memset(&v21[v18], *a4, a3);
      v15 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<unsigned char>(
              *(_BYTE **)a1,
              a2,
              (void *)v18);
      v16 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<unsigned char>(
              a2,
              *(_BYTE **)(a1 + 4),
              (void *)(v15 + a3));
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)(a1 + 4) = v16;
      *(_DWORD *)a1 = v18;
      *(_DWORD *)(a1 + 8) = v18 + v14;
    }
    else
    {
      v17 = v7 - a2;
      v20 = *a4;
      if ( v7 - a2 <= a3 )
      {
        v9 = a3 - v17;
        j_memset(v7, v20, a3 - v17);
        v10 = (void *)(*(_DWORD *)(a1 + 4) + v9);
        *(_DWORD *)(a1 + 4) = v10;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<unsigned char>(a2, v7, v10);
        v8 = v17;
        *(_DWORD *)(a1 + 4) += v17;
      }
      else
      {
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<unsigned char>(&v7[-a3], v7, v7);
        *(_DWORD *)(a1 + 4) += a3;
        if ( &v7[-a3] != a2 )
          j_memmove(&a2[a3], a2, &v7[-a3] - a2);
        v8 = a3;
      }
      j_memset(a2, v20, v8);
    }
  }
}


//======================================================================
// std::vector<Ogre::TerrainBlockSource *,std::allocator<Ogre::TerrainBlockSource *>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::TerrainBlockSource **,std::vector<Ogre::TerrainBlockSource *,std::allocator<Ogre::TerrainBlockSource *>>>,unsigned int,Ogre::TerrainBlockSource * const&)
// address: 0x00158D74   size: 0x120 (288 bytes)
//======================================================================
void __fastcall std::vector<Ogre::TerrainBlockSource *>::_M_fill_insert(int a1, _DWORD *a2, unsigned int a3, void **a4)
{
  _DWORD *v5; // r5
  _BYTE *v7; // r7
  int v8; // r6
  _DWORD *v9; // r6
  void *v10; // r2
  unsigned int v11; // r3
  unsigned int v12; // r7
  unsigned int v13; // r7
  char *v14; // r2
  void *v15; // r1
  unsigned int v16; // r3
  int v17; // r0
  int v18; // r5
  unsigned int v20; // [sp+4h] [bp-10h]
  void *v21; // [sp+8h] [bp-Ch]
  char *v22; // [sp+8h] [bp-Ch]
  int v23; // [sp+Ch] [bp-8h]

  v5 = a2;
  if ( a3 != 0 )
  {
    v7 = *(_BYTE **)(a1 + 4);
    if ( (*(_DWORD *)(a1 + 8) - (int)v7) >> 2 < a3 )
    {
      v11 = (int)&v7[-*(_DWORD *)a1] >> 2;
      if ( 0x3FFFFFFF - v11 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v12 = a3;
      if ( a3 < v11 )
        v12 = v11;
      v13 = v12 + v11;
      if ( v13 < v11 || v13 > 0x3FFFFFFF )
        v13 = 0x3FFFFFFF;
      v23 = ((int)a2 - *(_DWORD *)a1) >> 2;
      if ( v13 != 0 )
        v22 = (char *)operator new(4 * v13);
      else
        v22 = nullptr;
      v14 = &v22[4 * v23];
      v15 = *a4;
      v16 = a3;
      do
      {
        --v16;
        *(_DWORD *)v14 = v15;
        v14 += 4;
      }
      while ( v16 != 0 );
      v17 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::TerrainBlockSource *>(
              *(void **)a1,
              (int)v5,
              v22);
      v18 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::TerrainBlockSource *>(
              v5,
              *(_DWORD *)(a1 + 4),
              (void *)(v17 + 4 * a3));
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)(a1 + 4) = v18;
      *(_DWORD *)a1 = v22;
      *(_DWORD *)(a1 + 8) = &v22[4 * v13];
    }
    else
    {
      v20 = (v7 - (_BYTE *)a2) >> 2;
      v21 = *a4;
      if ( v20 <= a3 )
      {
        memset32(v7, (int)v21, a3 - v20);
        v10 = (void *)(*(_DWORD *)(a1 + 4) + 4 * (a3 - v20));
        *(_DWORD *)(a1 + 4) = v10;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::TerrainBlockSource *>(
          a2,
          (int)v7,
          v10);
        *(_DWORD *)(a1 + 4) += 4 * v20;
        while ( v5 != (_DWORD *)v7 )
          *v5++ = v21;
      }
      else
      {
        v8 = 4 * a3;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::TerrainBlockSource *>(
          &v7[-4 * a3],
          (int)v7,
          v7);
        *(_DWORD *)(a1 + 4) += v8;
        if ( (&v7[-v8] - (_BYTE *)v5) >> 2 != 0 )
          j_memmove(&v7[-4 * ((&v7[-v8] - (_BYTE *)v5) >> 2)], v5, 4 * ((&v7[-v8] - (_BYTE *)v5) >> 2));
        v9 = &v5[v8 / 4u];
        while ( v5 != v9 )
          *v5++ = v21;
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::TerrainLinkMeshData,std::allocator<Ogre::TerrainLinkMeshData>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::TerrainLinkMeshData*,std::vector<Ogre::TerrainLinkMeshData,std::allocator<Ogre::TerrainLinkMeshData>>>,unsigned int,Ogre::TerrainLinkMeshData const&)
// address: 0x00158F40   size: 0x13A (314 bytes)
//======================================================================
void __fastcall std::vector<Ogre::TerrainLinkMeshData>::_M_fill_insert(int a1, char *a2, unsigned int a3, _DWORD *a4)
{
  char *v7; // r1
  int v8; // r7
  unsigned int v9; // r6
  int v10; // r5
  char *v11; // r6
  char *v12; // r5
  char *j; // r3
  _DWORD *v14; // r3
  unsigned int i; // r1
  void *v16; // r2
  char *v17; // r3
  unsigned int v18; // r3
  int v19; // r6
  unsigned int v20; // r6
  char *v21; // r3
  unsigned int v22; // r2
  int v23; // r0
  int v24; // r5
  char *v25; // [sp+4h] [bp-10h]
  char *v26; // [sp+4h] [bp-10h]
  int v27; // [sp+8h] [bp-Ch]
  int v28; // [sp+8h] [bp-Ch]

  if ( a3 != 0 )
  {
    v7 = *(char **)(a1 + 4);
    v25 = v7;
    if ( (*(_DWORD *)(a1 + 8) - (int)v7) >> 3 < a3 )
    {
      v18 = (int)&v7[-*(_DWORD *)a1] >> 3;
      if ( 0x1FFFFFFF - v18 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v19 = a3;
      if ( a3 < v18 )
        v19 = (int)&v7[-*(_DWORD *)a1] >> 3;
      v20 = v19 + v18;
      if ( v20 < v18 || v20 > 0x1FFFFFFF )
        v20 = 0x1FFFFFFF;
      v28 = (int)&a2[-*(_DWORD *)a1] >> 3;
      if ( v20 != 0 )
        v26 = (char *)operator new(8 * v20);
      else
        v26 = nullptr;
      v21 = &v26[8 * v28];
      v22 = a3;
      do
      {
        --v22;
        *(_DWORD *)v21 = *a4;
        *((_DWORD *)v21 + 1) = a4[1];
        v21 += 8;
      }
      while ( v22 != 0 );
      v23 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::TerrainLinkMeshData>(
              *(void **)a1,
              (int)a2,
              v26);
      v24 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::TerrainLinkMeshData>(
              a2,
              *(_DWORD *)(a1 + 4),
              (void *)(v23 + 8 * a3));
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)(a1 + 4) = v24;
      *(_DWORD *)a1 = v26;
      *(_DWORD *)(a1 + 8) = &v26[8 * v20];
    }
    else
    {
      v8 = a4[1];
      v27 = *a4;
      v9 = (v7 - a2) >> 3;
      if ( v9 <= a3 )
      {
        v14 = *(_DWORD **)(a1 + 4);
        for ( i = a3 - v9; i != 0; --i )
        {
          v14[1] = v8;
          *v14 = v27;
          v14 += 2;
        }
        v16 = (void *)(*(_DWORD *)(a1 + 4) + 8 * (a3 - v9));
        *(_DWORD *)(a1 + 4) = v16;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::TerrainLinkMeshData>(
          a2,
          (int)v25,
          v16);
        v17 = a2;
        *(_DWORD *)(a1 + 4) += 8 * v9;
        while ( v17 != v25 )
        {
          *((_DWORD *)v17 + 1) = v8;
          *(_DWORD *)v17 = v27;
          v17 += 8;
        }
      }
      else
      {
        v10 = 8 * a3;
        v11 = &v7[-8 * a3];
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::TerrainLinkMeshData>(
          v11,
          (int)v7,
          v7);
        *(_DWORD *)(a1 + 4) += v10;
        if ( (v11 - a2) >> 3 != 0 )
          j_memmove(&v25[-8 * ((v11 - a2) >> 3)], a2, 8 * ((v11 - a2) >> 3));
        v12 = &a2[v10];
        for ( j = a2; j != v12; j += 8 )
        {
          *((_DWORD *)j + 1) = v8;
          *(_DWORD *)j = v27;
        }
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::CompiledShader *,std::allocator<Ogre::CompiledShader *>>::_M_check_len(unsigned int,char const*)const
// address: 0x00159748   size: 0x2C (44 bytes)
//======================================================================
unsigned int __fastcall std::vector<Ogre::CompiledShader *>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = (a1[1] - *a1) >> 2;
  if ( 0x3FFFFFFF - v3 < a2 )
    sub_3BD058(a3);
  v4 = (a1[1] - *a1) >> 2;
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0x3FFFFFFF )
    return 0x3FFFFFFF;
  return result;
}


//======================================================================
// std::vector<Ogre::CompiledShader *,std::allocator<Ogre::CompiledShader *>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::CompiledShader **,std::vector<Ogre::CompiledShader *,std::allocator<Ogre::CompiledShader *>>>,unsigned int,Ogre::CompiledShader * const&)
// address: 0x00159FDC   size: 0x104 (260 bytes)
//======================================================================
void __fastcall std::vector<Ogre::CompiledShader *>::_M_fill_insert(void **a1, char *a2, unsigned int a3, void **a4)
{
  char *v5; // r5
  char *v7; // r7
  int v8; // r6
  char *v9; // r6
  char *v10; // r2
  unsigned int v11; // r0
  unsigned int v12; // r7
  char *v13; // r2
  void *v14; // r1
  unsigned int v15; // r3
  int v16; // r0
  int v17; // r5
  unsigned int v19; // [sp+4h] [bp-10h]
  void *v20; // [sp+8h] [bp-Ch]
  char *v21; // [sp+8h] [bp-Ch]
  int v22; // [sp+Ch] [bp-8h]

  v5 = a2;
  if ( a3 != 0 )
  {
    v7 = (char *)a1[1];
    if ( ((_BYTE *)a1[2] - v7) >> 2 < a3 )
    {
      v11 = std::vector<Ogre::CompiledShader *>::_M_check_len(a1, a3, (int)"vector::_M_fill_insert");
      v12 = v11;
      v22 = (v5 - (_BYTE *)*a1) >> 2;
      if ( v11 != 0 )
      {
        if ( v11 > 0x3FFFFFFF )
          sub_3BCEB4();
        v21 = (char *)operator new(4 * v11);
      }
      else
      {
        v21 = nullptr;
      }
      v13 = &v21[4 * v22];
      v14 = *a4;
      v15 = a3;
      do
      {
        --v15;
        *(_DWORD *)v13 = v14;
        v13 += 4;
      }
      while ( v15 != 0 );
      v16 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::CompiledShader *>(
              *a1,
              (int)v5,
              v21);
      v17 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::CompiledShader *>(
              v5,
              (int)a1[1],
              (void *)(v16 + 4 * a3));
      if ( *a1 != nullptr )
        operator delete(*a1);
      a1[1] = (void *)v17;
      *a1 = v21;
      a1[2] = &v21[4 * v12];
    }
    else
    {
      v19 = (v7 - a2) >> 2;
      v20 = *a4;
      if ( v19 <= a3 )
      {
        memset32(v7, (int)v20, a3 - v19);
        v10 = (char *)a1[1] + 4 * (a3 - v19);
        a1[1] = v10;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::CompiledShader *>(a2, (int)v7, v10);
        a1[1] = (char *)a1[1] + 4 * v19;
        while ( v5 != v7 )
        {
          *(_DWORD *)v5 = v20;
          v5 += 4;
        }
      }
      else
      {
        v8 = 4 * a3;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::CompiledShader *>(
          &v7[-4 * a3],
          (int)v7,
          v7);
        a1[1] = (char *)a1[1] + v8;
        std::copy_backward<Ogre::CompiledShader **,Ogre::CompiledShader **>(v5, (int)&v7[-v8], (int)v7);
        v9 = &v5[v8];
        while ( v5 != v9 )
        {
          *(_DWORD *)v5 = v20;
          v5 += 4;
        }
      }
    }
  }
}


//======================================================================
// std::vector<int,std::allocator<int>>::_M_insert_aux(__gnu_cxx::__normal_iterator<int *,std::vector<int,std::allocator<int>>>,int const&)
// address: 0x0015A0E8   size: 0xA6 (166 bytes)
//======================================================================
__int64 __fastcall std::vector<int>::_M_insert_aux(__int64 a1, _DWORD *a2)
{
  _DWORD *v3; // r3
  __int64 v4; // r4
  int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r2
  int v8; // r6
  _DWORD *v9; // r3
  int v10; // r0
  __int64 v12; // [sp+0h] [bp-Ch]

  v12 = a1;
  v3 = *(_DWORD **)(a1 + 4);
  v4 = a1;
  if ( v3 != *(_DWORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
      *v3 = *(v3 - 1);
    LODWORD(a1) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v4 + 4) = a1 + 4;
    LODWORD(v4) = *a2;
    v5 = ((int)a1 - 4 - HIDWORD(a1)) >> 2;
    if ( v5 != 0 )
      j_memmove((void *)(a1 - 4 * v5), (const void *)HIDWORD(a1), 4 * v5);
    *(_DWORD *)HIDWORD(v4) = v4;
    return v12;
  }
  v6 = ((int)v3 - *(_DWORD *)a1) >> 2;
  if ( v6 == 0 )
  {
    v7 = 1;
    goto LABEL_11;
  }
  v7 = 2 * v6;
  v8 = 0x3FFFFFFF;
  if ( 2 * v6 >= v6 )
  {
LABEL_11:
    v8 = v7;
    if ( v7 > 0x3FFFFFFF )
      v8 = 0x3FFFFFFF;
  }
  LODWORD(v12) = (HIDWORD(a1) - *(_DWORD *)a1) >> 2;
  HIDWORD(v12) = 4 * v8;
  if ( v8 != 0 )
    v8 = operator new(4 * v8);
  v9 = (_DWORD *)(v8 + 4 * v12);
  if ( v9 != nullptr )
    *v9 = *a2;
  v10 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<int>(
          *(void **)v4,
          SHIDWORD(v4),
          (void *)v8);
  HIDWORD(v4) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<int>(
                  (void *)HIDWORD(v4),
                  *(_DWORD *)(v4 + 4),
                  (void *)(v10 + 4));
  if ( *(_DWORD *)v4 != 0 )
    operator delete(*(void **)v4);
  *(_DWORD *)v4 = v8;
  *(_DWORD *)(v4 + 4) = HIDWORD(v4);
  *(_DWORD *)(v4 + 8) = v8 + HIDWORD(v12);
  return v12;
}


//======================================================================
// std::vector<char,std::allocator<char>>::_M_fill_insert(__gnu_cxx::__normal_iterator<char *,std::vector<char,std::allocator<char>>>,unsigned int,char const&)
// address: 0x0015A4D0   size: 0xF4 (244 bytes)
//======================================================================
void __fastcall std::vector<char>::_M_fill_insert(int a1, _BYTE *a2, size_t a3, unsigned __int8 *a4)
{
  _BYTE *v7; // r7
  size_t v8; // r2
  size_t v9; // r5
  void *v10; // r2
  size_t v11; // r3
  char *v12; // r1
  size_t v13; // r1
  size_t v14; // r7
  int v15; // r0
  int v16; // r5
  size_t v17; // [sp+4h] [bp-10h]
  size_t v18; // [sp+4h] [bp-10h]
  int v20; // [sp+8h] [bp-Ch]
  _BYTE *v21; // [sp+Ch] [bp-8h]

  if ( a3 != 0 )
  {
    v7 = *(_BYTE **)(a1 + 4);
    if ( *(_DWORD *)(a1 + 8) - (int)v7 < a3 )
    {
      v11 = (size_t)&v7[-*(_DWORD *)a1];
      if ( ~v11 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v12 = (char *)a3;
      if ( a3 < v11 )
        v12 = &v7[-*(_DWORD *)a1];
      v13 = (size_t)&v12[v11];
      if ( v13 >= v11 )
        v14 = v13;
      else
        v14 = -1;
      v21 = &a2[-*(_DWORD *)a1];
      if ( v14 != 0 )
        v18 = operator new(v14);
      else
        v18 = 0;
      j_memset(&v21[v18], *a4, a3);
      v15 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<char>(*(_BYTE **)a1, a2, (void *)v18);
      v16 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<char>(
              a2,
              *(_BYTE **)(a1 + 4),
              (void *)(v15 + a3));
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)(a1 + 4) = v16;
      *(_DWORD *)a1 = v18;
      *(_DWORD *)(a1 + 8) = v18 + v14;
    }
    else
    {
      v17 = v7 - a2;
      v20 = *a4;
      if ( v7 - a2 <= a3 )
      {
        v9 = a3 - v17;
        j_memset(v7, v20, a3 - v17);
        v10 = (void *)(*(_DWORD *)(a1 + 4) + v9);
        *(_DWORD *)(a1 + 4) = v10;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<char>(a2, v7, v10);
        v8 = v17;
        *(_DWORD *)(a1 + 4) += v17;
      }
      else
      {
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<char>(&v7[-a3], v7, v7);
        *(_DWORD *)(a1 + 4) += a3;
        if ( &v7[-a3] != a2 )
          j_memmove(&a2[a3], a2, &v7[-a3] - a2);
        v8 = a3;
      }
      j_memset(a2, v20, v8);
    }
  }
}


//======================================================================
// std::vector<Ogre::RenderableEffectInfo,std::allocator<Ogre::RenderableEffectInfo>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::RenderableEffectInfo*,std::vector<Ogre::RenderableEffectInfo,std::allocator<Ogre::RenderableEffectInfo>>>,unsigned int,Ogre::RenderableEffectInfo const&)
// address: 0x0015B110   size: 0x134 (308 bytes)
//======================================================================
void __fastcall std::vector<Ogre::RenderableEffectInfo>::_M_fill_insert(int a1, char *a2, unsigned int a3, _DWORD *a4)
{
  _BYTE *v7; // r6
  unsigned int v8; // r7
  int v9; // r7
  char *v10; // r5
  char *v11; // r7
  char *i; // r3
  unsigned int v13; // r1
  _DWORD *v14; // r3
  void *v15; // r2
  _DWORD *v16; // r3
  unsigned int v17; // r3
  unsigned int v18; // r6
  unsigned int v19; // r6
  char *v20; // r3
  unsigned int v21; // r2
  int v22; // r0
  int v23; // r5
  int v24; // [sp+4h] [bp-10h]
  int v25; // [sp+4h] [bp-10h]
  void *v26; // [sp+8h] [bp-Ch]
  char *v27; // [sp+8h] [bp-Ch]

  if ( a3 != 0 )
  {
    v7 = *(_BYTE **)(a1 + 4);
    if ( (*(_DWORD *)(a1 + 8) - (int)v7) >> 3 < a3 )
    {
      v17 = (int)&v7[-*(_DWORD *)a1] >> 3;
      if ( 0x1FFFFFFF - v17 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v18 = a3;
      if ( a3 < v17 )
        v18 = v17;
      v19 = v18 + v17;
      if ( v19 < v17 || v19 > 0x1FFFFFFF )
        v19 = 0x1FFFFFFF;
      v25 = (int)&a2[-*(_DWORD *)a1] >> 3;
      if ( v19 != 0 )
        v27 = (char *)operator new(8 * v19);
      else
        v27 = nullptr;
      v20 = &v27[8 * v25];
      v21 = a3;
      do
      {
        --v21;
        *(_DWORD *)v20 = *a4;
        *((_DWORD *)v20 + 1) = a4[1];
        v20 += 8;
      }
      while ( v21 != 0 );
      v22 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::RenderableEffectInfo>(
              *(void **)a1,
              (int)a2,
              v27);
      v23 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::RenderableEffectInfo>(
              a2,
              *(_DWORD *)(a1 + 4),
              (void *)(v22 + 8 * a3));
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)(a1 + 4) = v23;
      *(_DWORD *)a1 = v27;
      *(_DWORD *)(a1 + 8) = &v27[8 * v19];
    }
    else
    {
      v26 = (void *)*a4;
      v24 = a4[1];
      v8 = (v7 - a2) >> 3;
      if ( v8 <= a3 )
      {
        v13 = a3 - v8;
        v14 = *(_DWORD **)(a1 + 4);
        while ( v13 != 0 )
        {
          --v13;
          *v14 = v26;
          v14[1] = v24;
          v14 += 2;
        }
        v15 = (void *)(*(_DWORD *)(a1 + 4) + 8 * (a3 - v8));
        *(_DWORD *)(a1 + 4) = v15;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::RenderableEffectInfo>(
          a2,
          (int)v7,
          v15);
        v16 = a2;
        *(_DWORD *)(a1 + 4) += 8 * v8;
        while ( v16 != (_DWORD *)v7 )
        {
          *v16 = v26;
          v16[1] = v24;
          v16 += 2;
        }
      }
      else
      {
        v9 = 8 * a3;
        v10 = &v7[-8 * a3];
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::RenderableEffectInfo>(
          v10,
          (int)v7,
          v7);
        *(_DWORD *)(a1 + 4) += v9;
        std::__copy_move_backward<false,true,std::random_access_iterator_tag>::__copy_move_b<Ogre::RenderableEffectInfo>(
          a2,
          (int)v10,
          (int)v7);
        v11 = &a2[v9];
        for ( i = a2; i != v11; i += 8 )
        {
          *(_DWORD *)i = v26;
          *((_DWORD *)i + 1) = v24;
        }
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::ContextQueDesc,std::allocator<Ogre::ContextQueDesc>>::_M_check_len(unsigned int,char const*)const
// address: 0x0015CD4C   size: 0x30 (48 bytes)
//======================================================================
unsigned int __fastcall std::vector<Ogre::ContextQueDesc>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = -1762037865 * ((a1[1] - *a1) >> 2);
  if ( 27531841 - v3 < a2 )
    sub_3BD058(a3);
  v4 = -1762037865 * ((a1[1] - *a1) >> 2);
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0x1A41A41 )
    return 27531841;
  return result;
}


//======================================================================
// std::vector<Ogre::ContextQueDesc,std::allocator<Ogre::ContextQueDesc>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::ContextQueDesc*,std::vector<Ogre::ContextQueDesc,std::allocator<Ogre::ContextQueDesc>>>,Ogre::ContextQueDesc const&)
// address: 0x0015CF44   size: 0xCA (202 bytes)
//======================================================================
void __fastcall std::vector<Ogre::ContextQueDesc>::_M_insert_aux(int a1, char *a2, const void *a3)
{
  char *v5; // r0
  char *v6; // r5
  unsigned int v7; // r0
  unsigned int v8; // r6
  char *v9; // r5
  char *v10; // r0
  char *v11; // r0
  char *v12; // r7
  int v14; // [sp+4h] [bp-A8h]
  _BYTE v15[156]; // [sp+Ch] [bp-A0h] BYREF

  v5 = *(char **)(a1 + 4);
  if ( v5 == *(char **)(a1 + 8) )
  {
    v7 = std::vector<Ogre::ContextQueDesc>::_M_check_len((_DWORD *)a1, 1u, (int)"vector::_M_insert_aux");
    v8 = v7;
    v14 = -1762037865 * ((int)&a2[-*(_DWORD *)a1] >> 2);
    if ( v7 != 0 )
    {
      if ( v7 > 0x1A41A41 )
        sub_3BCEB4(v7);
      v9 = (char *)operator new(156 * v7);
    }
    else
    {
      v9 = nullptr;
    }
    v10 = &v9[156 * v14];
    if ( v10 != nullptr )
      j_memcpy(v10, a3, 0x9Cu);
    v11 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::ContextQueDesc *,Ogre::ContextQueDesc *>(
            *(char **)a1,
            a2,
            v9);
    v12 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::ContextQueDesc *,Ogre::ContextQueDesc *>(
            a2,
            *(char **)(a1 + 4),
            v11 + 156);
    if ( *(_DWORD *)a1 != 0 )
      operator delete(*(void **)a1);
    *(_DWORD *)a1 = v9;
    *(_DWORD *)(a1 + 4) = v12;
    *(_DWORD *)(a1 + 8) = &v9[156 * v8];
  }
  else
  {
    if ( v5 != nullptr )
      j_memcpy(v5, v5 - 156, 0x9Cu);
    v6 = *(char **)(a1 + 4);
    *(_DWORD *)(a1 + 4) = v6 + 156;
    j_memcpy(v15, a3, sizeof(v15));
    std::__copy_move_backward<false,false,std::random_access_iterator_tag>::__copy_move_b<Ogre::ContextQueDesc *,Ogre::ContextQueDesc *>(
      (int)a2,
      v6 - 156,
      v6);
    j_memcpy(a2, v15, 0x9Cu);
  }
}


//======================================================================
// std::vector<Ogre::ContextQueDesc,std::allocator<Ogre::ContextQueDesc>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::ContextQueDesc*,std::vector<Ogre::ContextQueDesc,std::allocator<Ogre::ContextQueDesc>>>,unsigned int,Ogre::ContextQueDesc const&)
// address: 0x0015D06C   size: 0x11E (286 bytes)
//======================================================================
void __fastcall std::vector<Ogre::ContextQueDesc>::_M_fill_insert(int a1, char *a2, unsigned int a3, void *a4)
{
  unsigned int v6; // r6
  char *v7; // r1
  char *v8; // r0
  char *v9; // r2
  unsigned int v10; // r0
  unsigned int v11; // r6
  char *v12; // r5
  char *v13; // r0
  char *v14; // r7
  char *v15; // [sp+0h] [bp-B4h]
  int v16; // [sp+0h] [bp-B4h]
  _BYTE v19[160]; // [sp+14h] [bp-A0h] BYREF

  if ( a3 != 0 )
  {
    v15 = *(char **)(a1 + 4);
    if ( -1762037865 * ((*(_DWORD *)(a1 + 8) - (int)v15) >> 2) < a3 )
    {
      v10 = std::vector<Ogre::ContextQueDesc>::_M_check_len((_DWORD *)a1, a3, (int)"vector::_M_fill_insert");
      v11 = v10;
      v16 = -1762037865 * ((int)&a2[-*(_DWORD *)a1] >> 2);
      if ( v10 != 0 )
      {
        if ( v10 > 0x1A41A41 )
          sub_3BCEB4(v10);
        v12 = (char *)operator new(156 * v10);
      }
      else
      {
        v12 = nullptr;
      }
      std::__uninitialized_fill_n<false>::__uninit_fill_n<Ogre::ContextQueDesc *,unsigned int,Ogre::ContextQueDesc>(
        &v12[156 * v16],
        a3,
        a4);
      v13 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::ContextQueDesc *,Ogre::ContextQueDesc *>(
              *(char **)a1,
              a2,
              v12);
      v14 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::ContextQueDesc *,Ogre::ContextQueDesc *>(
              a2,
              *(char **)(a1 + 4),
              &v13[156 * a3]);
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)a1 = v12;
      *(_DWORD *)(a1 + 4) = v14;
      *(_DWORD *)(a1 + 8) = &v12[156 * v11];
    }
    else
    {
      j_memcpy(v19, a4, 0x9Cu);
      v6 = -1762037865 * ((v15 - a2) >> 2);
      if ( v6 <= a3 )
      {
        std::__uninitialized_fill_n<false>::__uninit_fill_n<Ogre::ContextQueDesc *,unsigned int,Ogre::ContextQueDesc>(
          v15,
          a3 - v6,
          v19);
        v9 = (char *)(*(_DWORD *)(a1 + 4) + 156 * (a3 - v6));
        *(_DWORD *)(a1 + 4) = v9;
        std::__uninitialized_copy<false>::__uninit_copy<Ogre::ContextQueDesc *,Ogre::ContextQueDesc *>(a2, v15, v9);
        v7 = v15;
        v8 = a2;
        *(_DWORD *)(a1 + 4) += 4 * ((v15 - a2) >> 2);
      }
      else
      {
        std::__uninitialized_copy<false>::__uninit_copy<Ogre::ContextQueDesc *,Ogre::ContextQueDesc *>(
          &v15[-156 * a3],
          v15,
          v15);
        *(_DWORD *)(a1 + 4) += 156 * a3;
        std::__copy_move_backward<false,false,std::random_access_iterator_tag>::__copy_move_b<Ogre::ContextQueDesc *,Ogre::ContextQueDesc *>(
          (int)a2,
          &v15[-156 * a3],
          v15);
        v7 = &a2[156 * a3];
        v8 = a2;
      }
      std::__fill_a<Ogre::ContextQueDesc *,Ogre::ContextQueDesc>(v8, v7, v19);
    }
  }
}


//======================================================================
// std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>>,Ogre::ShaderContext * const&)
// address: 0x0015D30C   size: 0x9C (156 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::ShaderContext *>::_M_insert_aux(__int64 a1, int *a2)
{
  _DWORD *v3; // r3
  int v5; // r2
  int v6; // r4
  unsigned int v7; // r3
  unsigned int v8; // r2
  int v9; // r5
  int *v10; // r3
  int v11; // r0
  __int64 v13; // [sp+0h] [bp-Ch]

  v13 = a1;
  v3 = *(_DWORD **)(a1 + 4);
  if ( v3 != *(_DWORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
      *v3 = *(v3 - 1);
    v5 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 4) = v5 + 4;
    v6 = *a2;
    std::__copy_move_backward<false,true,std::random_access_iterator_tag>::__copy_move_b<Ogre::ShaderContext *>(
      (void *)HIDWORD(a1),
      v5 - 4,
      v5);
    *(_DWORD *)HIDWORD(a1) = v6;
    return v13;
  }
  v7 = ((int)v3 - *(_DWORD *)a1) >> 2;
  if ( v7 == 0 )
  {
    v8 = 1;
    goto LABEL_9;
  }
  v8 = 2 * v7;
  v9 = 0x3FFFFFFF;
  if ( 2 * v7 >= v7 )
  {
LABEL_9:
    v9 = v8;
    if ( v8 > 0x3FFFFFFF )
      v9 = 0x3FFFFFFF;
  }
  LODWORD(v13) = (HIDWORD(a1) - *(_DWORD *)a1) >> 2;
  HIDWORD(v13) = 4 * v9;
  if ( v9 != 0 )
    v9 = operator new(4 * v9);
  v10 = (int *)(v9 + 4 * v13);
  if ( v10 != nullptr )
    *v10 = *a2;
  v11 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ShaderContext *>(
          *(void **)a1,
          SHIDWORD(a1),
          (void *)v9);
  std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ShaderContext *>(
    (void *)HIDWORD(a1),
    *(_DWORD *)(a1 + 4),
    (void *)(v11 + 4));
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v9;
  *(_DWORD *)(a1 + 4) = HIDWORD(a1);
  *(_DWORD *)(a1 + 8) = v9 + HIDWORD(v13);
  return v13;
}


//======================================================================
// std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>::push_back(Ogre::ShaderContext * const&)
// address: 0x0015D3AC   size: 0x22 (34 bytes)
//======================================================================
int __fastcall std::vector<Ogre::ShaderContext *>::push_back(__int64 a1)
{
  int *v1; // r2

  v1 = (int *)HIDWORD(a1);
  HIDWORD(a1) = *(_DWORD *)(a1 + 4);
  if ( HIDWORD(a1) == *(_DWORD *)(a1 + 8) )
  {
    LODWORD(a1) = std::vector<Ogre::ShaderContext *>::_M_insert_aux(a1, v1);
  }
  else
  {
    if ( HIDWORD(a1) != 0 )
      *(_DWORD *)HIDWORD(a1) = *v1;
    *(_DWORD *)(a1 + 4) += 4;
  }
  return a1;
}


//======================================================================
// std::vector<Ogre::ShaderContextPool::ValueParam,std::allocator<Ogre::ShaderContextPool::ValueParam>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::ShaderContextPool::ValueParam*,std::vector<Ogre::ShaderContextPool::ValueParam,std::allocator<Ogre::ShaderContextPool::ValueParam>>>,unsigned int,Ogre::ShaderContextPool::ValueParam const&)
// address: 0x0015DBF4   size: 0x142 (322 bytes)
//======================================================================
void __fastcall std::vector<Ogre::ShaderContextPool::ValueParam>::_M_fill_insert(
        int a1,
        char *a2,
        unsigned int a3,
        _DWORD *a4)
{
  char *v6; // r7
  int v7; // r1
  int v8; // r6
  int v9; // r1
  unsigned int v10; // r6
  int v11; // r5
  char *v12; // r1
  _DWORD *v13; // r0
  unsigned int v14; // r5
  void *v15; // r2
  unsigned int v16; // r7
  unsigned int v17; // r6
  unsigned int v18; // r6
  _DWORD *v19; // r7
  int v20; // r0
  int v21; // r5
  int v24; // [sp+Ch] [bp-20h]
  _DWORD v25[6]; // [sp+14h] [bp-18h] BYREF

  if ( a3 != 0 )
  {
    v6 = *(char **)(a1 + 4);
    if ( -858993459 * ((*(_DWORD *)(a1 + 8) - (int)v6) >> 2) < a3 )
    {
      v16 = -858993459 * ((int)&v6[-*(_DWORD *)a1] >> 2);
      if ( 214748364 - v16 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v17 = a3;
      if ( a3 < v16 )
        v17 = v16;
      v18 = v17 + v16;
      if ( v18 < v16 || v18 > 0xCCCCCCC )
        v18 = 214748364;
      v24 = -858993459 * ((int)&a2[-*(_DWORD *)a1] >> 2);
      if ( v18 != 0 )
        v19 = (_DWORD *)operator new(20 * v18);
      else
        v19 = nullptr;
      std::__fill_n_a<Ogre::ShaderContextPool::ValueParam *,unsigned int,Ogre::ShaderContextPool::ValueParam>(
        &v19[5 * v24],
        a3,
        a4);
      v20 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ShaderContextPool::ValueParam>(
              *(void **)a1,
              (int)a2,
              v19);
      v21 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ShaderContextPool::ValueParam>(
              a2,
              *(_DWORD *)(a1 + 4),
              (void *)(v20 + 20 * a3));
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)a1 = v19;
      *(_DWORD *)(a1 + 4) = v21;
      *(_DWORD *)(a1 + 8) = &v19[5 * v18];
    }
    else
    {
      v7 = a4[1];
      v8 = a4[2];
      v25[0] = *a4;
      v25[1] = v7;
      v25[2] = v8;
      v9 = a4[4];
      v25[3] = a4[3];
      v25[4] = v9;
      v10 = -858993459 * ((v6 - a2) >> 2);
      if ( v10 <= a3 )
      {
        v14 = a3 - v10;
        std::__fill_n_a<Ogre::ShaderContextPool::ValueParam *,unsigned int,Ogre::ShaderContextPool::ValueParam>(
          v6,
          a3 - v10,
          v25);
        v15 = (void *)(*(_DWORD *)(a1 + 4) + 20 * v14);
        *(_DWORD *)(a1 + 4) = v15;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ShaderContextPool::ValueParam>(
          a2,
          (int)v6,
          v15);
        v13 = a2;
        v12 = v6;
        *(_DWORD *)(a1 + 4) += 4 * ((v6 - a2) >> 2);
      }
      else
      {
        v11 = 20 * a3;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ShaderContextPool::ValueParam>(
          &v6[-20 * a3],
          (int)v6,
          v6);
        *(_DWORD *)(a1 + 4) += v11;
        if ( -858993459 * ((&v6[-v11] - a2) >> 2) != 0 )
          j_memmove(&v6[-4 * ((&v6[-v11] - a2) >> 2)], a2, 4 * ((&v6[-v11] - a2) >> 2));
        v12 = &a2[v11];
        v13 = a2;
      }
      std::__fill_a<Ogre::ShaderContextPool::ValueParam *,Ogre::ShaderContextPool::ValueParam>(v13, v12, v25);
    }
  }
}


//======================================================================
// std::vector<Ogre::ShaderContextPool::TexParam,std::allocator<Ogre::ShaderContextPool::TexParam>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::ShaderContextPool::TexParam*,std::vector<Ogre::ShaderContextPool::TexParam,std::allocator<Ogre::ShaderContextPool::TexParam>>>,unsigned int,Ogre::ShaderContextPool::TexParam const&)
// address: 0x0015E0A8   size: 0x182 (386 bytes)
//======================================================================
void __fastcall std::vector<Ogre::ShaderContextPool::TexParam>::_M_fill_insert(
        int a1,
        char *a2,
        unsigned int a3,
        _DWORD *a4)
{
  _BYTE *v6; // r7
  unsigned int v7; // r6
  char *v8; // r6
  char *i; // r3
  _DWORD *v10; // r3
  unsigned int v11; // r2
  unsigned int v12; // r1
  void *v13; // r2
  _DWORD *v14; // r3
  unsigned int v15; // r7
  unsigned int v16; // r5
  unsigned int v17; // r5
  char *v18; // r7
  unsigned int v19; // r2
  char *v20; // r3
  int v21; // r0
  int v22; // r6
  int v24; // [sp+4h] [bp-18h]
  int v25; // [sp+8h] [bp-14h]
  int v26; // [sp+8h] [bp-14h]
  int v28; // [sp+10h] [bp-Ch]
  int v29; // [sp+14h] [bp-8h]

  if ( a3 != 0 )
  {
    v6 = *(_BYTE **)(a1 + 4);
    if ( -1431655765 * ((*(_DWORD *)(a1 + 8) - (int)v6) >> 2) < a3 )
    {
      v15 = -1431655765 * ((int)&v6[-*(_DWORD *)a1] >> 2);
      if ( 357913941 - v15 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v16 = a3;
      if ( a3 < v15 )
        v16 = v15;
      v17 = v16 + v15;
      if ( v17 < v15 || v17 > 0x15555555 )
        v17 = 357913941;
      v26 = -1431655765 * ((int)&a2[-*(_DWORD *)a1] >> 2);
      if ( v17 != 0 )
        v18 = (char *)operator new(12 * v17);
      else
        v18 = nullptr;
      v19 = a3;
      v20 = &v18[12 * v26];
      do
      {
        --v19;
        *(_DWORD *)v20 = *a4;
        *((_DWORD *)v20 + 1) = a4[1];
        *((_DWORD *)v20 + 2) = a4[2];
        v20 += 12;
      }
      while ( v19 != 0 );
      v21 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ShaderContextPool::TexParam>(
              *(void **)a1,
              (int)a2,
              v18);
      v22 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ShaderContextPool::TexParam>(
              a2,
              *(_DWORD *)(a1 + 4),
              (void *)(v21 + 12 * a3));
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)a1 = v18;
      *(_DWORD *)(a1 + 4) = v22;
      *(_DWORD *)(a1 + 8) = &v18[12 * v17];
    }
    else
    {
      v25 = *a4;
      v29 = a4[1];
      v28 = a4[2];
      v7 = -1431655765 * ((v6 - a2) >> 2);
      if ( v7 <= a3 )
      {
        v10 = *(_DWORD **)(a1 + 4);
        v11 = a3 - v7;
        v12 = a3 - v7;
        while ( v12 != 0 )
        {
          --v12;
          *v10 = v25;
          v10[1] = v29;
          v10[2] = v28;
          v10 += 3;
        }
        v13 = (void *)(*(_DWORD *)(a1 + 4) + 12 * v11);
        *(_DWORD *)(a1 + 4) = v13;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ShaderContextPool::TexParam>(
          a2,
          (int)v6,
          v13);
        v14 = a2;
        *(_DWORD *)(a1 + 4) += 4 * ((v6 - a2) >> 2);
        while ( v14 != (_DWORD *)v6 )
        {
          *v14 = v25;
          v14[1] = v29;
          v14[2] = v28;
          v14 += 3;
        }
      }
      else
      {
        v8 = &v6[-12 * a3];
        v24 = 12 * a3;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ShaderContextPool::TexParam>(
          v8,
          (int)v6,
          v6);
        *(_DWORD *)(a1 + 4) += v24;
        if ( -1431655765 * ((v8 - a2) >> 2) != 0 )
          j_memmove(&v6[-4 * ((v8 - a2) >> 2)], a2, 4 * ((v8 - a2) >> 2));
        for ( i = a2; i != &a2[v24]; i += 12 )
        {
          *(_DWORD *)i = v25;
          *((_DWORD *)i + 1) = v29;
          *((_DWORD *)i + 2) = v28;
        }
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::CullResult::Record,std::allocator<Ogre::CullResult::Record>>::_M_check_len(unsigned int,char const*)const
// address: 0x0015EC94   size: 0x2C (44 bytes)
//======================================================================
unsigned int __fastcall std::vector<Ogre::CullResult::Record>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = (a1[1] - *a1) >> 4;
  if ( 0xFFFFFFF - v3 < a2 )
    sub_3BD058(a3);
  v4 = (a1[1] - *a1) >> 4;
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0xFFFFFFF )
    return 0xFFFFFFF;
  return result;
}


//======================================================================
// std::vector<Ogre::EffectObject *,std::allocator<Ogre::EffectObject *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::EffectObject **,std::vector<Ogre::EffectObject *,std::allocator<Ogre::EffectObject *>>>,Ogre::EffectObject * const&)
// address: 0x0015EE40   size: 0xA6 (166 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::EffectObject *>::_M_insert_aux(__int64 a1, _DWORD *a2)
{
  _DWORD *v3; // r3
  __int64 v4; // r4
  int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r2
  int v8; // r6
  _DWORD *v9; // r3
  int v10; // r0
  __int64 v12; // [sp+0h] [bp-Ch]

  v12 = a1;
  v3 = *(_DWORD **)(a1 + 4);
  v4 = a1;
  if ( v3 != *(_DWORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
      *v3 = *(v3 - 1);
    LODWORD(a1) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v4 + 4) = a1 + 4;
    LODWORD(v4) = *a2;
    v5 = ((int)a1 - 4 - HIDWORD(a1)) >> 2;
    if ( v5 != 0 )
      j_memmove((void *)(a1 - 4 * v5), (const void *)HIDWORD(a1), 4 * v5);
    *(_DWORD *)HIDWORD(v4) = v4;
    return v12;
  }
  v6 = ((int)v3 - *(_DWORD *)a1) >> 2;
  if ( v6 == 0 )
  {
    v7 = 1;
    goto LABEL_11;
  }
  v7 = 2 * v6;
  v8 = 0x3FFFFFFF;
  if ( 2 * v6 >= v6 )
  {
LABEL_11:
    v8 = v7;
    if ( v7 > 0x3FFFFFFF )
      v8 = 0x3FFFFFFF;
  }
  LODWORD(v12) = (HIDWORD(a1) - *(_DWORD *)a1) >> 2;
  HIDWORD(v12) = 4 * v8;
  if ( v8 != 0 )
    v8 = operator new(4 * v8);
  v9 = (_DWORD *)(v8 + 4 * v12);
  if ( v9 != nullptr )
    *v9 = *a2;
  v10 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::EffectObject *>(
          *(void **)v4,
          SHIDWORD(v4),
          (void *)v8);
  HIDWORD(v4) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::EffectObject *>(
                  (void *)HIDWORD(v4),
                  *(_DWORD *)(v4 + 4),
                  (void *)(v10 + 4));
  if ( *(_DWORD *)v4 != 0 )
    operator delete(*(void **)v4);
  *(_DWORD *)v4 = v8;
  *(_DWORD *)(v4 + 4) = HIDWORD(v4);
  *(_DWORD *)(v4 + 8) = v8 + HIDWORD(v12);
  return v12;
}


//======================================================================
// std::vector<Ogre::CullResult::Record,std::allocator<Ogre::CullResult::Record>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::CullResult::Record*,std::vector<Ogre::CullResult::Record,std::allocator<Ogre::CullResult::Record>>>,Ogre::CullResult::Record const&)
// address: 0x0015F00C   size: 0xBA (186 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::CullResult::Record>::_M_insert_aux(int a1, int a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  int v7; // r3
  int v8; // r7
  _DWORD *v9; // r2
  int v10; // r7
  int v11; // r4
  int v12; // r6
  unsigned int v13; // r0
  unsigned int v14; // r7
  _DWORD *v15; // r2
  int v16; // r1
  int v17; // r3
  _DWORD *v18; // r0
  _DWORD *v19; // r5
  __int64 byte_count; // [sp+0h] [bp-Ch]

  HIDWORD(byte_count) = a2;
  v5 = *(_DWORD **)(a1 + 4);
  if ( v5 == *(_DWORD **)(a1 + 8) )
  {
    v13 = std::vector<Ogre::CullResult::Record>::_M_check_len((_DWORD *)a1, 1u, (int)"vector::_M_insert_aux");
    LODWORD(byte_count) = 16 * v13;
    HIDWORD(byte_count) = (a2 - *(_DWORD *)a1) >> 4;
    if ( v13 != 0 )
    {
      if ( v13 > 0xFFFFFFF )
        sub_3BCEB4(v13);
      v13 = operator new(byte_count);
    }
    v14 = v13;
    if ( 16 * HIDWORD(byte_count) + v13 != 0 )
    {
      v15 = (_DWORD *)(16 * HIDWORD(byte_count) + v13);
      v16 = a3[1];
      v17 = a3[2];
      *v15 = *a3;
      v15[1] = v16;
      v15[2] = v17;
      v15[3] = a3[3];
    }
    v18 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::CullResult::Record *,Ogre::CullResult::Record *>(
            *(char **)a1,
            (char *)a2,
            (_DWORD *)v13);
    v19 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::CullResult::Record *,Ogre::CullResult::Record *>(
            (char *)a2,
            *(char **)(a1 + 4),
            v18 + 4);
    if ( *(_DWORD *)a1 != 0 )
      operator delete(*(void **)a1);
    *(_DWORD *)a1 = v14;
    *(_DWORD *)(a1 + 4) = v19;
    *(_DWORD *)(a1 + 8) = v14 + byte_count;
  }
  else
  {
    if ( v5 != nullptr )
    {
      v7 = *(v5 - 3);
      v8 = *(v5 - 2);
      *v5 = *(v5 - 4);
      v5[1] = v7;
      v5[2] = v8;
      v5[3] = *(v5 - 1);
    }
    v9 = *(_DWORD **)(a1 + 4);
    *(_DWORD *)(a1 + 4) = v9 + 4;
    v10 = *a3;
    v11 = a3[1];
    LODWORD(byte_count) = a3[2];
    v12 = a3[3];
    std::__copy_move_backward<false,false,std::random_access_iterator_tag>::__copy_move_b<Ogre::CullResult::Record *,Ogre::CullResult::Record *>(
      a2,
      v9 - 4,
      v9);
    *(_DWORD *)a2 = v10;
    *(_DWORD *)(a2 + 4) = v11;
    *(_DWORD *)(a2 + 12) = v12;
    *(_DWORD *)(a2 + 8) = byte_count;
  }
  return byte_count;
}


//======================================================================
// std::vector<Ogre::CullResult::Record,std::allocator<Ogre::CullResult::Record>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::CullResult::Record*,std::vector<Ogre::CullResult::Record,std::allocator<Ogre::CullResult::Record>>>,unsigned int,Ogre::CullResult::Record const&)
// address: 0x0015F11C   size: 0xFC (252 bytes)
//======================================================================
void __fastcall std::vector<Ogre::CullResult::Record>::_M_fill_insert(int a1, char *a2, unsigned int a3, _DWORD *a4)
{
  char *v6; // r6
  int v7; // r1
  int v8; // r7
  char *v9; // r1
  _DWORD *v10; // r2
  unsigned int v11; // r0
  int v12; // r7
  _DWORD *v13; // r6
  _DWORD *v14; // r0
  _DWORD *v15; // r5
  unsigned int v18; // [sp+4h] [bp-20h]
  int byte_count; // [sp+8h] [bp-1Ch]
  _DWORD v20[5]; // [sp+10h] [bp-14h] BYREF

  if ( a3 != 0 )
  {
    v6 = *(char **)(a1 + 4);
    if ( (*(_DWORD *)(a1 + 8) - (int)v6) >> 4 < a3 )
    {
      v11 = std::vector<Ogre::CullResult::Record>::_M_check_len((_DWORD *)a1, a3, (int)"vector::_M_fill_insert");
      byte_count = 4 * v11;
      v12 = (int)&a2[-*(_DWORD *)a1] >> 4;
      if ( v11 != 0 )
      {
        if ( v11 > 0xFFFFFFF )
          sub_3BCEB4(v11);
        v11 = operator new(byte_count * 4);
      }
      v13 = (_DWORD *)v11;
      std::__uninitialized_fill_n<false>::__uninit_fill_n<Ogre::CullResult::Record *,unsigned int,Ogre::CullResult::Record>(
        (_DWORD *)(v11 + 16 * v12),
        a3,
        a4);
      v14 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::CullResult::Record *,Ogre::CullResult::Record *>(
              *(char **)a1,
              a2,
              v13);
      v15 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::CullResult::Record *,Ogre::CullResult::Record *>(
              a2,
              *(char **)(a1 + 4),
              &v14[4 * a3]);
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)a1 = v13;
      *(_DWORD *)(a1 + 4) = v15;
      *(_DWORD *)(a1 + 8) = &v13[byte_count];
    }
    else
    {
      v7 = a4[1];
      v8 = a4[2];
      v20[0] = *a4;
      v20[1] = v7;
      v20[2] = v8;
      v20[3] = a4[3];
      v18 = (v6 - a2) >> 4;
      if ( v18 <= a3 )
      {
        std::__uninitialized_fill_n<false>::__uninit_fill_n<Ogre::CullResult::Record *,unsigned int,Ogre::CullResult::Record>(
          v6,
          a3 - v18,
          v20);
        v10 = (_DWORD *)(*(_DWORD *)(a1 + 4) + 16 * (a3 - v18));
        *(_DWORD *)(a1 + 4) = v10;
        std::__uninitialized_copy<false>::__uninit_copy<Ogre::CullResult::Record *,Ogre::CullResult::Record *>(
          a2,
          v6,
          v10);
        v9 = v6;
        *(_DWORD *)(a1 + 4) += 16 * v18;
      }
      else
      {
        std::__uninitialized_copy<false>::__uninit_copy<Ogre::CullResult::Record *,Ogre::CullResult::Record *>(
          &v6[-16 * a3],
          v6,
          v6);
        *(_DWORD *)(a1 + 4) += 16 * a3;
        std::__copy_move_backward<false,false,std::random_access_iterator_tag>::__copy_move_b<Ogre::CullResult::Record *,Ogre::CullResult::Record *>(
          (int)a2,
          &v6[-16 * a3],
          v6);
        v9 = &a2[16 * a3];
      }
      std::__fill_a<Ogre::CullResult::Record *,Ogre::CullResult::Record>(a2, v9, v20);
    }
  }
}


//======================================================================
// std::vector<Ogre::RenderableEffectInfo,std::allocator<Ogre::RenderableEffectInfo>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::RenderableEffectInfo*,std::vector<Ogre::RenderableEffectInfo,std::allocator<Ogre::RenderableEffectInfo>>>,Ogre::RenderableEffectInfo const&)
// address: 0x0015F308   size: 0xBA (186 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::RenderableEffectInfo>::_M_insert_aux(__int64 a1, _DWORD *byte_count)
{
  _DWORD *v2; // r3
  __int64 v3; // r4
  int v5; // r2
  int v6; // r6
  int v7; // r2
  unsigned int v8; // r3
  unsigned int v9; // r2
  int v10; // r6
  _DWORD *v11; // r3
  int v12; // r0
  __int64 v14; // [sp+0h] [bp-Ch]

  v14 = a1;
  v2 = *(_DWORD **)(a1 + 4);
  v3 = a1;
  if ( v2 != *(_DWORD **)(a1 + 8) )
  {
    if ( v2 != nullptr )
    {
      *v2 = *(v2 - 2);
      v2[1] = *(v2 - 1);
    }
    LODWORD(a1) = *(_DWORD *)(a1 + 4);
    v5 = *(_DWORD *)(v3 + 4) - 8;
    *(_DWORD *)(v3 + 4) = a1 + 8;
    LODWORD(v3) = *byte_count;
    v6 = byte_count[1];
    v7 = (v5 - HIDWORD(a1)) >> 3;
    if ( v7 != 0 )
      j_memmove((void *)(a1 - 8 * v7), (const void *)HIDWORD(a1), 8 * v7);
    *(_DWORD *)HIDWORD(v3) = v3;
    *(_DWORD *)(HIDWORD(v3) + 4) = v6;
    return v14;
  }
  v8 = ((int)v2 - *(_DWORD *)a1) >> 3;
  if ( v8 == 0 )
  {
    v9 = 1;
    goto LABEL_11;
  }
  v9 = 2 * v8;
  v10 = 0x1FFFFFFF;
  if ( 2 * v8 >= v8 )
  {
LABEL_11:
    v10 = v9;
    if ( v9 > 0x1FFFFFFF )
      v10 = 0x1FFFFFFF;
  }
  LODWORD(v14) = (HIDWORD(a1) - *(_DWORD *)a1) >> 3;
  HIDWORD(v14) = 8 * v10;
  if ( v10 != 0 )
    v10 = operator new(8 * v10);
  v11 = (_DWORD *)(v10 + 8 * v14);
  if ( v11 != nullptr )
  {
    *v11 = *byte_count;
    v11[1] = byte_count[1];
  }
  v12 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::RenderableEffectInfo>(
          *(void **)v3,
          SHIDWORD(v3),
          (void *)v10);
  HIDWORD(v3) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::RenderableEffectInfo>(
                  (void *)HIDWORD(v3),
                  *(_DWORD *)(v3 + 4),
                  (void *)(v12 + 8));
  if ( *(_DWORD *)v3 != 0 )
    operator delete(*(void **)v3);
  *(_DWORD *)v3 = v10;
  *(_DWORD *)(v3 + 4) = HIDWORD(v3);
  *(_DWORD *)(v3 + 8) = v10 + HIDWORD(v14);
  return v14;
}


//======================================================================
// std::vector<Ogre::MovableObject *,std::allocator<Ogre::MovableObject *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::MovableObject **,std::vector<Ogre::MovableObject *,std::allocator<Ogre::MovableObject *>>>,Ogre::MovableObject * const&)
// address: 0x00160C24   size: 0xA6 (166 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::MovableObject *>::_M_insert_aux(__int64 a1, _DWORD *a2)
{
  _DWORD *v3; // r3
  __int64 v4; // r4
  int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r2
  int v8; // r6
  _DWORD *v9; // r3
  int v10; // r0
  __int64 v12; // [sp+0h] [bp-Ch]

  v12 = a1;
  v3 = *(_DWORD **)(a1 + 4);
  v4 = a1;
  if ( v3 != *(_DWORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
      *v3 = *(v3 - 1);
    LODWORD(a1) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v4 + 4) = a1 + 4;
    LODWORD(v4) = *a2;
    v5 = ((int)a1 - 4 - HIDWORD(a1)) >> 2;
    if ( v5 != 0 )
      j_memmove((void *)(a1 - 4 * v5), (const void *)HIDWORD(a1), 4 * v5);
    *(_DWORD *)HIDWORD(v4) = v4;
    return v12;
  }
  v6 = ((int)v3 - *(_DWORD *)a1) >> 2;
  if ( v6 == 0 )
  {
    v7 = 1;
    goto LABEL_11;
  }
  v7 = 2 * v6;
  v8 = 0x3FFFFFFF;
  if ( 2 * v6 >= v6 )
  {
LABEL_11:
    v8 = v7;
    if ( v7 > 0x3FFFFFFF )
      v8 = 0x3FFFFFFF;
  }
  LODWORD(v12) = (HIDWORD(a1) - *(_DWORD *)a1) >> 2;
  HIDWORD(v12) = 4 * v8;
  if ( v8 != 0 )
    v8 = operator new(4 * v8);
  v9 = (_DWORD *)(v8 + 4 * v12);
  if ( v9 != nullptr )
    *v9 = *a2;
  v10 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MovableObject *>(
          *(void **)v4,
          SHIDWORD(v4),
          (void *)v8);
  HIDWORD(v4) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MovableObject *>(
                  (void *)HIDWORD(v4),
                  *(_DWORD *)(v4 + 4),
                  (void *)(v10 + 4));
  if ( *(_DWORD *)v4 != 0 )
    operator delete(*(void **)v4);
  *(_DWORD *)v4 = v8;
  *(_DWORD *)(v4 + 4) = HIDWORD(v4);
  *(_DWORD *)(v4 + 8) = v8 + HIDWORD(v12);
  return v12;
}


//======================================================================
// std::vector<Ogre::MovableObject *,std::allocator<Ogre::MovableObject *>>::push_back(Ogre::MovableObject * const&)
// address: 0x00160CD0   size: 0x22 (34 bytes)
//======================================================================
int __fastcall std::vector<Ogre::MovableObject *>::push_back(__int64 a1)
{
  _DWORD *v1; // r2

  v1 = (_DWORD *)HIDWORD(a1);
  HIDWORD(a1) = *(_DWORD *)(a1 + 4);
  if ( HIDWORD(a1) == *(_DWORD *)(a1 + 8) )
  {
    LODWORD(a1) = std::vector<Ogre::MovableObject *>::_M_insert_aux(a1, v1);
  }
  else
  {
    if ( HIDWORD(a1) != 0 )
      *(_DWORD *)HIDWORD(a1) = *v1;
    *(_DWORD *)(a1 + 4) += 4;
  }
  return a1;
}


//======================================================================
// std::vector<Ogre::DelayDeleteObject *,std::allocator<Ogre::DelayDeleteObject *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::DelayDeleteObject **,std::vector<Ogre::DelayDeleteObject *,std::allocator<Ogre::DelayDeleteObject *>>>,Ogre::DelayDeleteObject * const&)
// address: 0x00160DC4   size: 0xA6 (166 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::DelayDeleteObject *>::_M_insert_aux(__int64 a1, _DWORD *a2)
{
  _DWORD *v3; // r3
  __int64 v4; // r4
  int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r2
  int v8; // r6
  _DWORD *v9; // r3
  int v10; // r0
  __int64 v12; // [sp+0h] [bp-Ch]

  v12 = a1;
  v3 = *(_DWORD **)(a1 + 4);
  v4 = a1;
  if ( v3 != *(_DWORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
      *v3 = *(v3 - 1);
    LODWORD(a1) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v4 + 4) = a1 + 4;
    LODWORD(v4) = *a2;
    v5 = ((int)a1 - 4 - HIDWORD(a1)) >> 2;
    if ( v5 != 0 )
      j_memmove((void *)(a1 - 4 * v5), (const void *)HIDWORD(a1), 4 * v5);
    *(_DWORD *)HIDWORD(v4) = v4;
    return v12;
  }
  v6 = ((int)v3 - *(_DWORD *)a1) >> 2;
  if ( v6 == 0 )
  {
    v7 = 1;
    goto LABEL_11;
  }
  v7 = 2 * v6;
  v8 = 0x3FFFFFFF;
  if ( 2 * v6 >= v6 )
  {
LABEL_11:
    v8 = v7;
    if ( v7 > 0x3FFFFFFF )
      v8 = 0x3FFFFFFF;
  }
  LODWORD(v12) = (HIDWORD(a1) - *(_DWORD *)a1) >> 2;
  HIDWORD(v12) = 4 * v8;
  if ( v8 != 0 )
    v8 = operator new(4 * v8);
  v9 = (_DWORD *)(v8 + 4 * v12);
  if ( v9 != nullptr )
    *v9 = *a2;
  v10 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::DelayDeleteObject *>(
          *(void **)v4,
          SHIDWORD(v4),
          (void *)v8);
  HIDWORD(v4) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::DelayDeleteObject *>(
                  (void *)HIDWORD(v4),
                  *(_DWORD *)(v4 + 4),
                  (void *)(v10 + 4));
  if ( *(_DWORD *)v4 != 0 )
    operator delete(*(void **)v4);
  *(_DWORD *)v4 = v8;
  *(_DWORD *)(v4 + 4) = HIDWORD(v4);
  *(_DWORD *)(v4 + 8) = v8 + HIDWORD(v12);
  return v12;
}


//======================================================================
// std::vector<Ogre::TRect<float>,std::allocator<Ogre::TRect<float>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::TRect<float>*,std::vector<Ogre::TRect<float>,std::allocator<Ogre::TRect<float>>>>,Ogre::TRect<float> const&)
// address: 0x00162DD4   size: 0x14C (332 bytes)
//======================================================================
void __fastcall std::vector<Ogre::TRect<float>>::_M_insert_aux(int *a1, char *a2, int *a3)
{
  _DWORD *v4; // r3
  int v7; // r2
  int v8; // r6
  _DWORD *v9; // r3
  _DWORD *v10; // r2
  int i; // r1
  int v12; // r4
  int v13; // r6
  unsigned int v14; // r3
  unsigned int v15; // r2
  int v16; // r6
  int *v17; // r2
  int v18; // r1
  int v19; // r3
  char *v20; // r12
  int v21; // r2
  int v22; // r3
  char *v23; // r2
  unsigned int v24; // r12
  int v25; // r1
  int v26; // r3
  unsigned int v27; // r5
  int v28; // [sp+8h] [bp-14h]
  _DWORD *v29; // [sp+8h] [bp-14h]
  int v30; // [sp+Ch] [bp-10h]
  char *j; // [sp+Ch] [bp-10h]
  int v32; // [sp+10h] [bp-Ch]
  _DWORD *v33; // [sp+10h] [bp-Ch]
  int v34; // [sp+14h] [bp-8h]
  int v35; // [sp+14h] [bp-8h]
  _DWORD *v36; // [sp+14h] [bp-8h]
  char *v37; // [sp+14h] [bp-8h]

  v4 = (_DWORD *)a1[1];
  if ( v4 != (_DWORD *)a1[2] )
  {
    if ( v4 != nullptr )
    {
      v7 = *(v4 - 3);
      v8 = *(v4 - 2);
      *v4 = *(v4 - 4);
      v4[1] = v7;
      v4[2] = v8;
      v4[3] = *(v4 - 1);
    }
    v9 = (_DWORD *)a1[1];
    a1[1] = (int)(v9 + 4);
    v28 = *a3;
    v10 = v9 - 4;
    v30 = a3[1];
    v34 = a3[2];
    v32 = a3[3];
    for ( i = ((char *)(v9 - 4) - a2) >> 4; i > 0; --i )
    {
      v9 -= 4;
      v10 -= 4;
      v12 = v10[1];
      v13 = v10[2];
      *v9 = *v10;
      v9[1] = v12;
      v9[2] = v13;
      v9[3] = v10[3];
    }
    *(_DWORD *)a2 = v28;
    *((_DWORD *)a2 + 1) = v30;
    *((_DWORD *)a2 + 2) = v34;
    *((_DWORD *)a2 + 3) = v32;
    return;
  }
  v14 = ((int)v4 - *a1) >> 4;
  if ( v14 == 0 )
  {
    v15 = 1;
    goto LABEL_12;
  }
  v15 = 2 * v14;
  v16 = 0xFFFFFFF;
  if ( 2 * v14 >= v14 )
  {
LABEL_12:
    v16 = v15;
    if ( v15 > 0xFFFFFFF )
      v16 = 0xFFFFFFF;
  }
  v35 = (int)&a2[-*a1] >> 4;
  if ( v16 != 0 )
    v33 = (_DWORD *)operator new(16 * v16);
  else
    v33 = nullptr;
  if ( &v33[4 * v35] != nullptr )
  {
    v17 = &v33[4 * v35];
    v18 = a3[1];
    v19 = a3[2];
    *v17 = *a3;
    v17[1] = v18;
    v17[2] = v19;
    v17[3] = a3[3];
  }
  v20 = (char *)*a1;
  v36 = v33;
  for ( j = (char *)*a1; j != a2; j += 16 )
  {
    if ( v36 != nullptr )
    {
      v21 = *((_DWORD *)j + 1);
      v22 = *((_DWORD *)j + 2);
      *v36 = *(_DWORD *)j;
      v36[1] = v21;
      v36[2] = v22;
      v36[3] = *((_DWORD *)j + 3);
    }
    v36 += 4;
  }
  v23 = j;
  v24 = (unsigned int)&v33[4 * ((unsigned int)(j - v20) >> 4) + 4];
  v37 = (char *)a1[1];
  v29 = (_DWORD *)v24;
  while ( v23 != v37 )
  {
    if ( v29 != nullptr )
    {
      v25 = *((_DWORD *)v23 + 1);
      v26 = *((_DWORD *)v23 + 2);
      *v29 = *(_DWORD *)v23;
      v29[1] = v25;
      v29[2] = v26;
      v29[3] = *((_DWORD *)v23 + 3);
    }
    v23 += 16;
    v29 += 4;
  }
  v27 = 16 * ((unsigned int)(v23 - j) >> 4) + v24;
  if ( *a1 != 0 )
    operator delete((void *)*a1);
  a1[1] = v27;
  *a1 = (int)v33;
  a1[2] = (int)&v33[4 * v16];
}


//======================================================================
// std::vector<Ogre::UIScreenRect,std::allocator<Ogre::UIScreenRect>>::_M_check_len(unsigned int,char const*)const
// address: 0x00162F54   size: 0x30 (48 bytes)
//======================================================================
unsigned int __fastcall std::vector<Ogre::UIScreenRect>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = -858993459 * ((a1[1] - *a1) >> 3);
  if ( 107374182 - v3 < a2 )
    sub_3BD058(a3);
  v4 = -858993459 * ((a1[1] - *a1) >> 3);
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0x6666666 )
    return 107374182;
  return result;
}


//======================================================================
// std::vector<Ogre::UIScreenRect,std::allocator<Ogre::UIScreenRect>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::UIScreenRect*,std::vector<Ogre::UIScreenRect,std::allocator<Ogre::UIScreenRect>>>,Ogre::UIScreenRect const&)
// address: 0x00163084   size: 0xF2 (242 bytes)
//======================================================================
void __fastcall std::vector<Ogre::UIScreenRect>::_M_insert_aux(int a1, int a2, _DWORD *a3)
{
  _DWORD *v5; // r1
  int v6; // r6
  int v7; // r7
  _DWORD *v8; // r2
  int v9; // r6
  int v10; // r7
  _DWORD *v11; // r3
  int v12; // r0
  int v13; // r1
  int v14; // r6
  _DWORD *v15; // r2
  unsigned int v16; // r0
  unsigned int v17; // r7
  int v18; // r6
  _DWORD *v19; // r6
  _DWORD *v20; // r3
  int v21; // r1
  int v22; // r6
  int v23; // r1
  int v24; // r6
  int v25; // r1
  int v26; // r6
  _DWORD *v27; // r0
  _DWORD *v28; // r5
  _DWORD *v29; // [sp+4h] [bp-38h]
  int v31; // [sp+10h] [bp-2Ch]
  int v32; // [sp+14h] [bp-28h]
  int v33; // [sp+18h] [bp-24h]
  int v34; // [sp+1Ch] [bp-20h]
  int v35; // [sp+20h] [bp-1Ch]
  int v36; // [sp+24h] [bp-18h]
  int v37; // [sp+28h] [bp-14h]
  int v38; // [sp+2Ch] [bp-10h]
  int v39; // [sp+30h] [bp-Ch]
  int v40; // [sp+34h] [bp-8h]

  v5 = *(_DWORD **)(a1 + 4);
  if ( v5 == *(_DWORD **)(a1 + 8) )
  {
    v16 = std::vector<Ogre::UIScreenRect>::_M_check_len((_DWORD *)a1, 1u, (int)"vector::_M_insert_aux");
    v17 = v16;
    v18 = -858993459 * ((a2 - *(_DWORD *)a1) >> 3);
    if ( v16 != 0 )
    {
      if ( v16 > 0x6666666 )
        sub_3BCEB4(v16);
      v29 = (_DWORD *)operator new(40 * v16);
    }
    else
    {
      v29 = nullptr;
    }
    v19 = &v29[10 * v18];
    if ( v19 != nullptr )
    {
      v20 = v19;
      v21 = a3[1];
      v22 = a3[2];
      *v20 = *a3;
      v20[1] = v21;
      v20[2] = v22;
      v20 += 3;
      v23 = a3[4];
      v24 = a3[5];
      *v20 = a3[3];
      v20[1] = v23;
      v20[2] = v24;
      v20 += 3;
      v25 = a3[7];
      v26 = a3[8];
      *v20 = a3[6];
      v20[1] = v25;
      v20[2] = v26;
      v20[3] = a3[9];
    }
    v27 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::UIScreenRect *,Ogre::UIScreenRect *>(
            *(char **)a1,
            (char *)a2,
            v29);
    v28 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::UIScreenRect *,Ogre::UIScreenRect *>(
            (char *)a2,
            *(char **)(a1 + 4),
            v27 + 10);
    if ( *(_DWORD *)a1 != 0 )
      operator delete(*(void **)a1);
    *(_DWORD *)(a1 + 4) = v28;
    *(_DWORD *)a1 = v29;
    *(_DWORD *)(a1 + 8) = &v29[10 * v17];
  }
  else
  {
    if ( v5 != nullptr )
    {
      v6 = *(v5 - 9);
      v7 = *(v5 - 8);
      *v5 = *(v5 - 10);
      v5[1] = v6;
      v5[2] = v7;
      v9 = *(v5 - 6);
      v10 = *(v5 - 5);
      v8 = v5 - 4;
      v5[3] = *(v5 - 7);
      v5[4] = v9;
      v5[5] = v10;
      v11 = v5 + 6;
      v12 = *(v5 - 4);
      v13 = *(v5 - 3);
      v14 = v8[2];
      *v11 = v12;
      v11[1] = v13;
      v11[2] = v14;
      v11[3] = v8[3];
    }
    v15 = *(_DWORD **)(a1 + 4);
    *(_DWORD *)(a1 + 4) = v15 + 10;
    v31 = *a3;
    v32 = a3[1];
    v33 = a3[2];
    v34 = a3[3];
    v35 = a3[4];
    v36 = a3[5];
    v37 = a3[6];
    v38 = a3[7];
    v39 = a3[8];
    v40 = a3[9];
    std::__copy_move_backward<false,false,std::random_access_iterator_tag>::__copy_move_b<Ogre::UIScreenRect *,Ogre::UIScreenRect *>(
      a2,
      v15 - 10,
      v15);
    *(_DWORD *)a2 = v31;
    *(_DWORD *)(a2 + 4) = v32;
    *(_DWORD *)(a2 + 8) = v33;
    *(_DWORD *)(a2 + 12) = v34;
    *(_DWORD *)(a2 + 16) = v35;
    *(_DWORD *)(a2 + 20) = v36;
    *(_DWORD *)(a2 + 24) = v37;
    *(_DWORD *)(a2 + 28) = v38;
    *(_DWORD *)(a2 + 32) = v39;
    *(_DWORD *)(a2 + 36) = v40;
  }
}


//======================================================================
// std::vector<Ogre::UIScreenRect,std::allocator<Ogre::UIScreenRect>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::UIScreenRect*,std::vector<Ogre::UIScreenRect,std::allocator<Ogre::UIScreenRect>>>,unsigned int,Ogre::UIScreenRect const&)
// address: 0x00163420   size: 0x134 (308 bytes)
//======================================================================
void __fastcall std::vector<Ogre::UIScreenRect>::_M_fill_insert(int a1, char *a2, unsigned int a3, _DWORD *a4)
{
  char *v6; // r6
  int v7; // r1
  int v8; // r7
  int v9; // r1
  int v10; // r7
  int v11; // r1
  int v12; // r7
  char *v13; // r1
  char *v14; // r0
  _DWORD *v15; // r2
  unsigned int v16; // r0
  unsigned int v17; // r6
  int v18; // r7
  _DWORD *v19; // r0
  _DWORD *v20; // r5
  unsigned int v23; // [sp+4h] [bp-38h]
  _DWORD *v24; // [sp+8h] [bp-34h]
  _DWORD v25[11]; // [sp+10h] [bp-2Ch] BYREF

  if ( a3 != 0 )
  {
    v6 = *(char **)(a1 + 4);
    if ( -858993459 * ((*(_DWORD *)(a1 + 8) - (int)v6) >> 3) < a3 )
    {
      v16 = std::vector<Ogre::UIScreenRect>::_M_check_len((_DWORD *)a1, a3, (int)"vector::_M_fill_insert");
      v17 = v16;
      v18 = -858993459 * ((int)&a2[-*(_DWORD *)a1] >> 3);
      if ( v16 != 0 )
      {
        if ( v16 > 0x6666666 )
          sub_3BCEB4(v16);
        v24 = (_DWORD *)operator new(40 * v16);
      }
      else
      {
        v24 = nullptr;
      }
      std::__uninitialized_fill_n<false>::__uninit_fill_n<Ogre::UIScreenRect *,unsigned int,Ogre::UIScreenRect>(
        &v24[10 * v18],
        a3,
        a4);
      v19 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::UIScreenRect *,Ogre::UIScreenRect *>(
              *(char **)a1,
              a2,
              v24);
      v20 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::UIScreenRect *,Ogre::UIScreenRect *>(
              a2,
              *(char **)(a1 + 4),
              &v19[10 * a3]);
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)(a1 + 4) = v20;
      *(_DWORD *)a1 = v24;
      *(_DWORD *)(a1 + 8) = &v24[10 * v17];
    }
    else
    {
      v7 = a4[1];
      v8 = a4[2];
      v25[0] = *a4;
      v25[1] = v7;
      v25[2] = v8;
      v9 = a4[4];
      v10 = a4[5];
      v25[3] = a4[3];
      v25[4] = v9;
      v25[5] = v10;
      v11 = a4[7];
      v12 = a4[8];
      v25[6] = a4[6];
      v25[7] = v11;
      v25[8] = v12;
      v25[9] = a4[9];
      v23 = -858993459 * ((v6 - a2) >> 3);
      if ( v23 <= a3 )
      {
        std::__uninitialized_fill_n<false>::__uninit_fill_n<Ogre::UIScreenRect *,unsigned int,Ogre::UIScreenRect>(
          v6,
          a3 - v23,
          v25);
        v15 = (_DWORD *)(*(_DWORD *)(a1 + 4) + 40 * (a3 - v23));
        *(_DWORD *)(a1 + 4) = v15;
        std::__uninitialized_copy<false>::__uninit_copy<Ogre::UIScreenRect *,Ogre::UIScreenRect *>(a2, v6, v15);
        *(_DWORD *)(a1 + 4) += 8 * ((v6 - a2) >> 3);
        v14 = a2;
        v13 = v6;
      }
      else
      {
        std::__uninitialized_copy<false>::__uninit_copy<Ogre::UIScreenRect *,Ogre::UIScreenRect *>(
          &v6[-40 * a3],
          v6,
          v6);
        *(_DWORD *)(a1 + 4) += 40 * a3;
        std::__copy_move_backward<false,false,std::random_access_iterator_tag>::__copy_move_b<Ogre::UIScreenRect *,Ogre::UIScreenRect *>(
          (int)a2,
          &v6[-40 * a3],
          v6);
        v13 = &a2[40 * a3];
        v14 = a2;
      }
      std::__fill_a<Ogre::UIScreenRect *,Ogre::UIScreenRect>(v14, v13, v25);
    }
  }
}


//======================================================================
// std::vector<Ogre::DrawRect,std::allocator<Ogre::DrawRect>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::DrawRect*,std::vector<Ogre::DrawRect,std::allocator<Ogre::DrawRect>>>,unsigned int,Ogre::DrawRect const&)
// address: 0x00163630   size: 0x1B6 (438 bytes)
//======================================================================
void __fastcall std::vector<Ogre::DrawRect>::_M_fill_insert(int a1, int *a2, unsigned int a3, int *a4)
{
  int *v6; // r6
  int v7; // r1
  int v8; // r7
  int v9; // r1
  int v10; // r7
  int v11; // r1
  int v12; // r7
  int *v13; // r5
  int *i; // r7
  int v15; // r7
  int v16; // r1
  int v17; // r4
  int v18; // r1
  int v19; // r4
  int v20; // r1
  int v21; // r4
  int *v22; // r0
  int *v23; // r1
  unsigned int v24; // r5
  int *v25; // r7
  int *v26; // r7
  _DWORD *v27; // r5
  unsigned int v28; // r6
  unsigned int v29; // r3
  unsigned int v30; // r3
  int v31; // r7
  _DWORD *v32; // r0
  unsigned int v33; // r6
  _DWORD *v34; // r7
  int *v35; // r6
  _DWORD *v36; // r7
  _DWORD *v37; // r7
  int *v38; // r5
  int v39; // [sp+0h] [bp-3Ch]
  int *v41; // [sp+4h] [bp-38h]
  unsigned int v42; // [sp+4h] [bp-38h]
  unsigned int v43; // [sp+8h] [bp-34h]
  int v44; // [sp+8h] [bp-34h]
  _DWORD *v45; // [sp+8h] [bp-34h]
  int v47[10]; // [sp+14h] [bp-28h] BYREF

  if ( a3 != 0 )
  {
    v6 = *(int **)(a1 + 4);
    if ( 954437177 * ((*(_DWORD *)(a1 + 8) - (int)v6) >> 2) < a3 )
    {
      v28 = 954437177 * (((int)v6 - *(_DWORD *)a1) >> 2);
      if ( 119304647 - v28 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v29 = a3;
      if ( a3 < v28 )
        v29 = v28;
      v30 = v29 + v28;
      if ( v30 < v28 )
      {
        v39 = 119304647;
      }
      else
      {
        v39 = v30;
        if ( v30 > 0x71C71C7 )
          v39 = 119304647;
      }
      v31 = 954437177 * (((int)a2 - *(_DWORD *)a1) >> 2);
      if ( v39 != 0 )
        v32 = (_DWORD *)operator new(36 * v39);
      else
        v32 = nullptr;
      v45 = v32;
      v33 = a3;
      v34 = &v32[9 * v31];
      do
      {
        --v33;
        std::_Construct<Ogre::DrawRect,Ogre::DrawRect>(v34, a4);
        v34 += 9;
      }
      while ( v33 != 0 );
      v35 = *(int **)a1;
      v36 = v45;
      while ( v35 != a2 )
      {
        std::_Construct<Ogre::DrawRect,Ogre::DrawRect>(v36, v35);
        v35 += 9;
        v36 += 9;
      }
      v37 = &v36[9 * a3];
      v38 = *(int **)(a1 + 4);
      while ( v35 != v38 )
      {
        std::_Construct<Ogre::DrawRect,Ogre::DrawRect>(v37, v35);
        v37 += 9;
        v35 += 9;
      }
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)(a1 + 4) = v37;
      *(_DWORD *)a1 = v45;
      *(_DWORD *)(a1 + 8) = &v45[9 * v39];
    }
    else
    {
      v7 = a4[1];
      v8 = a4[2];
      v47[0] = *a4;
      v47[1] = v7;
      v47[2] = v8;
      v9 = a4[4];
      v10 = a4[5];
      v47[3] = a4[3];
      v47[4] = v9;
      v47[5] = v10;
      v11 = a4[7];
      v12 = a4[8];
      v47[6] = a4[6];
      v47[7] = v11;
      v47[8] = v12;
      v43 = 954437177 * (v6 - a2);
      if ( v43 <= a3 )
      {
        v24 = a3 - v43;
        v42 = a3 - v43;
        v25 = v6;
        while ( v24 != 0 )
        {
          std::_Construct<Ogre::DrawRect,Ogre::DrawRect>(v25, v47);
          --v24;
          v25 += 9;
        }
        v26 = a2;
        v27 = (_DWORD *)(*(_DWORD *)(a1 + 4) + 36 * v42);
        *(_DWORD *)(a1 + 4) = v27;
        while ( v26 != v6 )
        {
          std::_Construct<Ogre::DrawRect,Ogre::DrawRect>(v27, v26);
          v27 += 9;
          v26 += 9;
        }
        v22 = a2;
        *(_DWORD *)(a1 + 4) += 4 * (v6 - a2);
        v23 = v26;
      }
      else
      {
        v13 = &v6[-9 * a3];
        v44 = 9 * a3;
        v41 = v6;
        for ( i = v13; i != v6; i += 9 )
        {
          std::_Construct<Ogre::DrawRect,Ogre::DrawRect>(v41, i);
          v41 += 9;
        }
        *(_DWORD *)(a1 + 4) += v44 * 4;
        v15 = 954437177 * (v13 - a2);
        while ( v15 > 0 )
        {
          v6 -= 9;
          v13 -= 9;
          v16 = v13[1];
          v17 = v13[2];
          *v6 = *v13;
          v6[1] = v16;
          v6[2] = v17;
          v18 = v13[4];
          v19 = v13[5];
          v6[3] = v13[3];
          v6[4] = v18;
          v6[5] = v19;
          --v15;
          v20 = v13[7];
          v21 = v13[8];
          v6[6] = v13[6];
          v6[7] = v20;
          v6[8] = v21;
        }
        v22 = a2;
        v23 = &a2[v44];
      }
      std::__fill_a<Ogre::DrawRect *,Ogre::DrawRect>(v22, v23, v47);
    }
  }
}


//======================================================================
// std::vector<Ogre::IFont *,std::allocator<Ogre::IFont *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::IFont **,std::vector<Ogre::IFont *,std::allocator<Ogre::IFont *>>>,Ogre::IFont * const&)
// address: 0x001638A8   size: 0xA6 (166 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::IFont *>::_M_insert_aux(__int64 a1, _DWORD *a2)
{
  _DWORD *v3; // r3
  __int64 v4; // r4
  int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r2
  int v8; // r6
  _DWORD *v9; // r3
  int v10; // r0
  __int64 v12; // [sp+0h] [bp-Ch]

  v12 = a1;
  v3 = *(_DWORD **)(a1 + 4);
  v4 = a1;
  if ( v3 != *(_DWORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
      *v3 = *(v3 - 1);
    LODWORD(a1) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v4 + 4) = a1 + 4;
    LODWORD(v4) = *a2;
    v5 = ((int)a1 - 4 - HIDWORD(a1)) >> 2;
    if ( v5 != 0 )
      j_memmove((void *)(a1 - 4 * v5), (const void *)HIDWORD(a1), 4 * v5);
    *(_DWORD *)HIDWORD(v4) = v4;
    return v12;
  }
  v6 = ((int)v3 - *(_DWORD *)a1) >> 2;
  if ( v6 == 0 )
  {
    v7 = 1;
    goto LABEL_11;
  }
  v7 = 2 * v6;
  v8 = 0x3FFFFFFF;
  if ( 2 * v6 >= v6 )
  {
LABEL_11:
    v8 = v7;
    if ( v7 > 0x3FFFFFFF )
      v8 = 0x3FFFFFFF;
  }
  LODWORD(v12) = (HIDWORD(a1) - *(_DWORD *)a1) >> 2;
  HIDWORD(v12) = 4 * v8;
  if ( v8 != 0 )
    v8 = operator new(4 * v8);
  v9 = (_DWORD *)(v8 + 4 * v12);
  if ( v9 != nullptr )
    *v9 = *a2;
  v10 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::IFont *>(
          *(void **)v4,
          SHIDWORD(v4),
          (void *)v8);
  HIDWORD(v4) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::IFont *>(
                  (void *)HIDWORD(v4),
                  *(_DWORD *)(v4 + 4),
                  (void *)(v10 + 4));
  if ( *(_DWORD *)v4 != 0 )
    operator delete(*(void **)v4);
  *(_DWORD *)v4 = v8;
  *(_DWORD *)(v4 + 4) = HIDWORD(v4);
  *(_DWORD *)(v4 + 8) = v8 + HIDWORD(v12);
  return v12;
}


//======================================================================
// std::vector<Ogre::IFont *,std::allocator<Ogre::IFont *>>::push_back(Ogre::IFont * const&)
// address: 0x00163954   size: 0x22 (34 bytes)
//======================================================================
int __fastcall std::vector<Ogre::IFont *>::push_back(__int64 a1)
{
  _DWORD *v1; // r2

  v1 = (_DWORD *)HIDWORD(a1);
  HIDWORD(a1) = *(_DWORD *)(a1 + 4);
  if ( HIDWORD(a1) == *(_DWORD *)(a1 + 8) )
  {
    LODWORD(a1) = std::vector<Ogre::IFont *>::_M_insert_aux(a1, v1);
  }
  else
  {
    if ( HIDWORD(a1) != 0 )
      *(_DWORD *)HIDWORD(a1) = *v1;
    *(_DWORD *)(a1 + 4) += 4;
  }
  return a1;
}


//======================================================================
// std::vector<Ogre::VertexElement,std::allocator<Ogre::VertexElement>>::_M_check_len(unsigned int,char const*)const
// address: 0x001640B0   size: 0x2C (44 bytes)
//======================================================================
unsigned int __fastcall std::vector<Ogre::VertexElement>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = (a1[1] - *a1) >> 2;
  if ( 0x3FFFFFFF - v3 < a2 )
    sub_3BD058(a3);
  v4 = (a1[1] - *a1) >> 2;
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0x3FFFFFFF )
    return 0x3FFFFFFF;
  return result;
}


//======================================================================
// std::vector<Ogre::DynamicIndexBuffer *,std::allocator<Ogre::DynamicIndexBuffer *>>::_M_check_len(unsigned int,char const*)const
// address: 0x00164168   size: 0x2C (44 bytes)
//======================================================================
unsigned int __fastcall std::vector<Ogre::DynamicIndexBuffer *>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = (a1[1] - *a1) >> 2;
  if ( 0x3FFFFFFF - v3 < a2 )
    sub_3BD058(a3);
  v4 = (a1[1] - *a1) >> 2;
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0x3FFFFFFF )
    return 0x3FFFFFFF;
  return result;
}


//======================================================================
// std::vector<Ogre::DynamicVertexBuffer *,std::allocator<Ogre::DynamicVertexBuffer *>>::_M_check_len(unsigned int,char const*)const
// address: 0x001641B8   size: 0x2C (44 bytes)
//======================================================================
unsigned int __fastcall std::vector<Ogre::DynamicVertexBuffer *>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = (a1[1] - *a1) >> 2;
  if ( 0x3FFFFFFF - v3 < a2 )
    sub_3BD058(a3);
  v4 = (a1[1] - *a1) >> 2;
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0x3FFFFFFF )
    return 0x3FFFFFFF;
  return result;
}


//======================================================================
// std::vector<Ogre::VertexElement,std::allocator<Ogre::VertexElement>>::operator=(std::vector<Ogre::VertexElement,std::allocator<Ogre::VertexElement>> const&)
// address: 0x00164206   size: 0x7C (124 bytes)
//======================================================================
int __fastcall std::vector<Ogre::VertexElement>::operator=(int a1, int a2)
{
  int v4; // r7
  void *v5; // r6
  void *v6; // r2
  unsigned int v7; // r0
  char *v8; // r5
  unsigned int v9; // r1
  void *v10; // r0
  int v11; // r1
  int v13; // [sp+4h] [bp-8h]

  if ( a2 != a1 )
  {
    v4 = *(_DWORD *)(a2 + 4);
    v5 = *(void **)a2;
    v6 = *(void **)a1;
    v7 = (v4 - *(_DWORD *)a2) >> 2;
    v13 = 4 * v7;
    if ( v7 <= (*(_DWORD *)(a1 + 8) - *(_DWORD *)a1) >> 2 )
    {
      v9 = (*(_DWORD *)(a1 + 4) - (int)v6) >> 2;
      if ( v9 < v7 )
      {
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::VertexElement>(
          v5,
          (int)v5 + 4 * v9,
          v6);
        v6 = *(void **)(a1 + 4);
        v11 = *(_DWORD *)(a2 + 4);
        v10 = (void *)(*(_DWORD *)a2 + 4 * (((int)v6 - *(_DWORD *)a1) >> 2));
      }
      else
      {
        v10 = v5;
        v11 = v4;
      }
      std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::VertexElement>(v10, v11, v6);
    }
    else
    {
      v8 = (char *)sub_163C8C(v7);
      std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::VertexElement>(v5, v4, v8);
      sub_163C80(*(void **)a1);
      *(_DWORD *)a1 = v8;
      *(_DWORD *)(a1 + 8) = &v8[v13];
    }
    *(_DWORD *)(a1 + 4) = *(_DWORD *)a1 + v13;
  }
  return a1;
}


//======================================================================
// std::vector<Ogre::VertexElement,std::allocator<Ogre::VertexElement>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::VertexElement*,std::vector<Ogre::VertexElement,std::allocator<Ogre::VertexElement>>>,unsigned int,Ogre::VertexElement const&)
// address: 0x0016448C   size: 0xEA (234 bytes)
//======================================================================
void __fastcall std::vector<Ogre::VertexElement>::_M_fill_insert(void **a1, int *a2, unsigned int a3, int *a4)
{
  int *v5; // r5
  int *v7; // r6
  int v8; // r7
  int *v9; // r7
  char *v10; // r2
  int v11; // r6
  int *v12; // r6
  unsigned int v13; // r3
  int v14; // r0
  int v15; // r5
  unsigned int v16; // [sp+4h] [bp-10h]
  char *v17; // [sp+4h] [bp-10h]
  int v19; // [sp+Ch] [bp-8h]
  unsigned int v20; // [sp+Ch] [bp-8h]

  v5 = a2;
  if ( a3 != 0 )
  {
    v7 = (int *)a1[1];
    if ( ((_BYTE *)a1[2] - (_BYTE *)v7) >> 2 < a3 )
    {
      v20 = std::vector<Ogre::VertexElement>::_M_check_len(a1, a3, (int)"vector::_M_fill_insert");
      v11 = (char *)v5 - (_BYTE *)*a1;
      v17 = (char *)sub_163C8C(v20);
      v12 = (int *)&v17[4 * (v11 >> 2)];
      v13 = a3;
      do
      {
        --v13;
        *v12++ = *a4;
      }
      while ( v13 != 0 );
      v14 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::VertexElement>(
              *a1,
              (int)v5,
              v17);
      v15 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::VertexElement>(
              v5,
              (int)a1[1],
              (void *)(v14 + 4 * a3));
      sub_163C80(*a1);
      *a1 = v17;
      a1[1] = (void *)v15;
      a1[2] = &v17[4 * v20];
    }
    else
    {
      v16 = v7 - a2;
      v19 = *a4;
      if ( v16 <= a3 )
      {
        memset32(a1[1], v19, a3 - v16);
        v10 = (char *)a1[1] + 4 * (a3 - v16);
        a1[1] = v10;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::VertexElement>(a2, (int)v7, v10);
        a1[1] = (char *)a1[1] + 4 * v16;
        while ( v5 != v7 )
          *v5++ = v19;
      }
      else
      {
        v8 = 4 * a3;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::VertexElement>(
          &v7[-a3],
          (int)v7,
          v7);
        a1[1] = (char *)a1[1] + v8;
        std::__copy_move_backward<false,true,std::random_access_iterator_tag>::__copy_move_b<Ogre::VertexElement>(
          v5,
          (int)&v7[v8 / 0xFFFFFFFC],
          (int)v7);
        v9 = &v5[v8 / 4u];
        while ( v5 != v9 )
          *v5++ = v19;
      }
    }
  }
}


//======================================================================
// std::vector<char,std::allocator<char>>::resize(unsigned int,char)
// address: 0x001645FE   size: 0x26 (38 bytes)
//======================================================================
__int64 __fastcall std::vector<char>::resize(__int64 a1, int a2)
{
  _BYTE *v2; // r4
  int v3; // r5
  _BYTE *v4; // r2
  __int64 v6; // [sp+0h] [bp-Ch] BYREF
  int v7; // [sp+8h] [bp-4h]

  v6 = a1;
  v7 = a2;
  v2 = *(_BYTE **)(a1 + 4);
  v3 = *(_DWORD *)a1;
  HIBYTE(v6) = a2;
  v4 = &v2[-v3];
  if ( HIDWORD(a1) <= (unsigned int)&v2[-v3] )
  {
    if ( HIDWORD(a1) < (unsigned int)v4 )
      *(_DWORD *)(a1 + 4) = v3 + HIDWORD(a1);
  }
  else
  {
    std::vector<char>::_M_fill_insert(a1, v2, HIDWORD(a1) - (_DWORD)v4, (unsigned __int8 *)&v6 + 7);
  }
  return v6;
}


//======================================================================
// std::vector<unsigned short,std::allocator<unsigned short>>::_M_fill_insert(__gnu_cxx::__normal_iterator<unsigned short *,std::vector<unsigned short,std::allocator<unsigned short>>>,unsigned int,unsigned short const&)
// address: 0x00164834   size: 0x128 (296 bytes)
//======================================================================
void __fastcall std::vector<unsigned short>::_M_fill_insert(int a1, int a2, unsigned int a3, __int16 *a4)
{
  char *v5; // r5
  char *v7; // r7
  int v8; // r6
  char *v9; // r6
  _WORD *v10; // r1
  unsigned int i; // r3
  void *v12; // r2
  unsigned int v13; // r3
  unsigned int v14; // r7
  unsigned int v15; // r7
  char *v16; // r2
  __int16 v17; // r1
  unsigned int v18; // r3
  int v19; // r0
  int v20; // r5
  unsigned int v22; // [sp+4h] [bp-10h]
  char *v23; // [sp+4h] [bp-10h]
  __int16 v24; // [sp+8h] [bp-Ch]
  char *v25; // [sp+8h] [bp-Ch]
  int v26; // [sp+Ch] [bp-8h]

  v5 = (char *)a2;
  if ( a3 != 0 )
  {
    v7 = *(char **)(a1 + 4);
    if ( (*(_DWORD *)(a1 + 8) - (int)v7) >> 1 < a3 )
    {
      v13 = (int)&v7[-*(_DWORD *)a1] >> 1;
      if ( 0x7FFFFFFF - v13 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v14 = a3;
      if ( a3 < v13 )
        v14 = v13;
      v15 = v14 + v13;
      if ( v15 < v13 || v15 > 0x7FFFFFFF )
        v15 = 0x7FFFFFFF;
      v26 = (a2 - *(_DWORD *)a1) >> 1;
      if ( v15 != 0 )
        v25 = (char *)operator new(2 * v15);
      else
        v25 = nullptr;
      v16 = &v25[2 * v26];
      v17 = *a4;
      v18 = a3;
      do
      {
        --v18;
        *(_WORD *)v16 = v17;
        v16 += 2;
      }
      while ( v18 != 0 );
      v19 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<unsigned short>(
              *(void **)a1,
              (int)v5,
              v25);
      v20 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<unsigned short>(
              v5,
              *(_DWORD *)(a1 + 4),
              (void *)(v19 + 2 * a3));
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)(a1 + 4) = v20;
      *(_DWORD *)a1 = v25;
      *(_DWORD *)(a1 + 8) = &v25[2 * v15];
    }
    else
    {
      v24 = *a4;
      v22 = (int)&v7[-a2] >> 1;
      if ( v22 <= a3 )
      {
        v10 = *(_WORD **)(a1 + 4);
        for ( i = a3 - v22; i != 0; --i )
          *v10++ = v24;
        v12 = (void *)(*(_DWORD *)(a1 + 4) + 2 * (a3 - v22));
        *(_DWORD *)(a1 + 4) = v12;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<unsigned short>(v5, (int)v7, v12);
        *(_DWORD *)(a1 + 4) += 2 * v22;
        while ( v5 != v7 )
        {
          *(_WORD *)v5 = v24;
          v5 += 2;
        }
      }
      else
      {
        v8 = 2 * a3;
        v23 = &v7[-2 * a3];
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<unsigned short>(v23, (int)v7, v7);
        *(_DWORD *)(a1 + 4) += v8;
        if ( (v23 - v5) >> 1 != 0 )
          j_memmove(&v7[-2 * ((v23 - v5) >> 1)], v5, 2 * ((v23 - v5) >> 1));
        v9 = &v5[v8];
        while ( v5 != v9 )
        {
          *(_WORD *)v5 = v24;
          v5 += 2;
        }
      }
    }
  }
}


//======================================================================
// std::vector<unsigned short,std::allocator<unsigned short>>::resize(unsigned int,unsigned short)
// address: 0x00164964   size: 0x2A (42 bytes)
//======================================================================
__int64 __fastcall std::vector<unsigned short>::resize(__int64 a1, int a2)
{
  int v2; // r4
  int v3; // r5
  unsigned int v4; // r2
  __int64 v6; // [sp+0h] [bp-Ch] BYREF
  int v7; // [sp+8h] [bp-4h]

  v6 = a1;
  v7 = a2;
  v2 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)a1;
  HIWORD(v6) = a2;
  v4 = (v2 - v3) >> 1;
  if ( HIDWORD(a1) <= v4 )
  {
    if ( HIDWORD(a1) < v4 )
      *(_DWORD *)(a1 + 4) = v3 + 2 * HIDWORD(a1);
  }
  else
  {
    std::vector<unsigned short>::_M_fill_insert(a1, v2, HIDWORD(a1) - v4, (__int16 *)&v6 + 3);
  }
  return v6;
}


//======================================================================
// std::vector<Ogre::DynamicIndexBuffer *,std::allocator<Ogre::DynamicIndexBuffer *>>::push_back(Ogre::DynamicIndexBuffer * const&)
// address: 0x00164C24   size: 0x80 (128 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::DynamicIndexBuffer *>::push_back(__int64 a1)
{
  _DWORD *v1; // r5
  unsigned int v3; // r0
  unsigned int v4; // r6
  _DWORD *v5; // r3
  int v6; // r0
  int v7; // r5
  __int64 v9; // [sp+0h] [bp-Ch]

  v9 = a1;
  v1 = *(_DWORD **)(a1 + 4);
  if ( v1 == *(_DWORD **)(a1 + 8) )
  {
    v3 = std::vector<Ogre::DynamicIndexBuffer *>::_M_check_len((_DWORD *)a1, 1u, (int)"vector::_M_insert_aux");
    HIDWORD(v9) = 4 * v3;
    LODWORD(v9) = *(_DWORD *)a1;
    if ( v3 != 0 )
    {
      if ( v3 > 0x3FFFFFFF )
        sub_3BCEB4(v3);
      v3 = operator new(HIDWORD(v9));
    }
    v4 = v3;
    v5 = (_DWORD *)(v3 + 4 * ((int)((int)v1 - v9) >> 2));
    if ( v5 != nullptr )
      *v5 = *(_DWORD *)HIDWORD(a1);
    v6 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::DynamicIndexBuffer *>(
           *(void **)a1,
           (int)v1,
           (void *)v3);
    v7 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::DynamicIndexBuffer *>(
           v1,
           *(_DWORD *)(a1 + 4),
           (void *)(v6 + 4));
    sub_163CB4(*(void **)a1);
    *(_DWORD *)a1 = v4;
    *(_DWORD *)(a1 + 4) = v7;
    *(_DWORD *)(a1 + 8) = v4 + HIDWORD(v9);
  }
  else
  {
    if ( v1 != nullptr )
      *v1 = *(_DWORD *)HIDWORD(a1);
    *(_DWORD *)(a1 + 4) += 4;
  }
  return v9;
}


//======================================================================
// std::vector<Ogre::DynamicIndexBuffer *,std::allocator<Ogre::DynamicIndexBuffer *>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::DynamicIndexBuffer **,std::vector<Ogre::DynamicIndexBuffer *,std::allocator<Ogre::DynamicIndexBuffer *>>>,unsigned int,Ogre::DynamicIndexBuffer * const&)
// address: 0x00164D0C   size: 0x100 (256 bytes)
//======================================================================
void __fastcall std::vector<Ogre::DynamicIndexBuffer *>::_M_fill_insert(
        void **a1,
        char *a2,
        unsigned int a3,
        void **a4)
{
  char *v5; // r5
  char *v7; // r7
  int v8; // r6
  char *v9; // r6
  char *v10; // r2
  unsigned int v11; // r0
  unsigned int v12; // r7
  char *v13; // r2
  void *v14; // r1
  unsigned int v15; // r3
  int v16; // r0
  int v17; // r5
  unsigned int v19; // [sp+4h] [bp-10h]
  void *v20; // [sp+8h] [bp-Ch]
  char *v21; // [sp+8h] [bp-Ch]
  int v22; // [sp+Ch] [bp-8h]

  v5 = a2;
  if ( a3 != 0 )
  {
    v7 = (char *)a1[1];
    if ( ((_BYTE *)a1[2] - v7) >> 2 < a3 )
    {
      v11 = std::vector<Ogre::DynamicIndexBuffer *>::_M_check_len(a1, a3, (int)"vector::_M_fill_insert");
      v12 = v11;
      v22 = (v5 - (_BYTE *)*a1) >> 2;
      if ( v11 != 0 )
      {
        if ( v11 > 0x3FFFFFFF )
          sub_3BCEB4(v11);
        v21 = (char *)operator new(4 * v11);
      }
      else
      {
        v21 = nullptr;
      }
      v13 = &v21[4 * v22];
      v14 = *a4;
      v15 = a3;
      do
      {
        --v15;
        *(_DWORD *)v13 = v14;
        v13 += 4;
      }
      while ( v15 != 0 );
      v16 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::DynamicIndexBuffer *>(
              *a1,
              (int)v5,
              v21);
      v17 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::DynamicIndexBuffer *>(
              v5,
              (int)a1[1],
              (void *)(v16 + 4 * a3));
      sub_163CB4(*a1);
      a1[1] = (void *)v17;
      *a1 = v21;
      a1[2] = &v21[4 * v12];
    }
    else
    {
      v19 = (v7 - a2) >> 2;
      v20 = *a4;
      if ( v19 <= a3 )
      {
        memset32(v7, (int)v20, a3 - v19);
        v10 = (char *)a1[1] + 4 * (a3 - v19);
        a1[1] = v10;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::DynamicIndexBuffer *>(
          a2,
          (int)v7,
          v10);
        a1[1] = (char *)a1[1] + 4 * v19;
        while ( v5 != v7 )
        {
          *(_DWORD *)v5 = v20;
          v5 += 4;
        }
      }
      else
      {
        v8 = 4 * a3;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::DynamicIndexBuffer *>(
          &v7[-4 * a3],
          (int)v7,
          v7);
        a1[1] = (char *)a1[1] + v8;
        std::copy_backward<Ogre::DynamicIndexBuffer **,Ogre::DynamicIndexBuffer **>(v5, (int)&v7[-v8], (int)v7);
        v9 = &v5[v8];
        while ( v5 != v9 )
        {
          *(_DWORD *)v5 = v20;
          v5 += 4;
        }
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::DynamicVertexBuffer *,std::allocator<Ogre::DynamicVertexBuffer *>>::push_back(Ogre::DynamicVertexBuffer * const&)
// address: 0x00164E34   size: 0x80 (128 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::DynamicVertexBuffer *>::push_back(__int64 a1)
{
  _DWORD *v1; // r5
  unsigned int v3; // r0
  unsigned int v4; // r6
  _DWORD *v5; // r3
  int v6; // r0
  int v7; // r5
  __int64 v9; // [sp+0h] [bp-Ch]

  v9 = a1;
  v1 = *(_DWORD **)(a1 + 4);
  if ( v1 == *(_DWORD **)(a1 + 8) )
  {
    v3 = std::vector<Ogre::DynamicVertexBuffer *>::_M_check_len((_DWORD *)a1, 1u, (int)"vector::_M_insert_aux");
    HIDWORD(v9) = 4 * v3;
    LODWORD(v9) = *(_DWORD *)a1;
    if ( v3 != 0 )
    {
      if ( v3 > 0x3FFFFFFF )
        sub_3BCEB4(v3);
      v3 = operator new(HIDWORD(v9));
    }
    v4 = v3;
    v5 = (_DWORD *)(v3 + 4 * ((int)((int)v1 - v9) >> 2));
    if ( v5 != nullptr )
      *v5 = *(_DWORD *)HIDWORD(a1);
    v6 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::DynamicVertexBuffer *>(
           *(void **)a1,
           (int)v1,
           (void *)v3);
    v7 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::DynamicVertexBuffer *>(
           v1,
           *(_DWORD *)(a1 + 4),
           (void *)(v6 + 4));
    sub_163CA8(*(void **)a1);
    *(_DWORD *)a1 = v4;
    *(_DWORD *)(a1 + 4) = v7;
    *(_DWORD *)(a1 + 8) = v4 + HIDWORD(v9);
  }
  else
  {
    if ( v1 != nullptr )
      *v1 = *(_DWORD *)HIDWORD(a1);
    *(_DWORD *)(a1 + 4) += 4;
  }
  return v9;
}


//======================================================================
// std::vector<Ogre::DynamicVertexBuffer *,std::allocator<Ogre::DynamicVertexBuffer *>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::DynamicVertexBuffer **,std::vector<Ogre::DynamicVertexBuffer *,std::allocator<Ogre::DynamicVertexBuffer *>>>,unsigned int,Ogre::DynamicVertexBuffer * const&)
// address: 0x00164F24   size: 0x100 (256 bytes)
//======================================================================
void __fastcall std::vector<Ogre::DynamicVertexBuffer *>::_M_fill_insert(
        void **a1,
        char *a2,
        unsigned int a3,
        void **a4)
{
  char *v5; // r5
  char *v7; // r7
  int v8; // r6
  char *v9; // r6
  char *v10; // r2
  unsigned int v11; // r0
  unsigned int v12; // r7
  char *v13; // r2
  void *v14; // r1
  unsigned int v15; // r3
  int v16; // r0
  int v17; // r5
  unsigned int v19; // [sp+4h] [bp-10h]
  void *v20; // [sp+8h] [bp-Ch]
  char *v21; // [sp+8h] [bp-Ch]
  int v22; // [sp+Ch] [bp-8h]

  v5 = a2;
  if ( a3 != 0 )
  {
    v7 = (char *)a1[1];
    if ( ((_BYTE *)a1[2] - v7) >> 2 < a3 )
    {
      v11 = std::vector<Ogre::DynamicVertexBuffer *>::_M_check_len(a1, a3, (int)"vector::_M_fill_insert");
      v12 = v11;
      v22 = (v5 - (_BYTE *)*a1) >> 2;
      if ( v11 != 0 )
      {
        if ( v11 > 0x3FFFFFFF )
          sub_3BCEB4(v11);
        v21 = (char *)operator new(4 * v11);
      }
      else
      {
        v21 = nullptr;
      }
      v13 = &v21[4 * v22];
      v14 = *a4;
      v15 = a3;
      do
      {
        --v15;
        *(_DWORD *)v13 = v14;
        v13 += 4;
      }
      while ( v15 != 0 );
      v16 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::DynamicVertexBuffer *>(
              *a1,
              (int)v5,
              v21);
      v17 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::DynamicVertexBuffer *>(
              v5,
              (int)a1[1],
              (void *)(v16 + 4 * a3));
      sub_163CA8(*a1);
      a1[1] = (void *)v17;
      *a1 = v21;
      a1[2] = &v21[4 * v12];
    }
    else
    {
      v19 = (v7 - a2) >> 2;
      v20 = *a4;
      if ( v19 <= a3 )
      {
        memset32(v7, (int)v20, a3 - v19);
        v10 = (char *)a1[1] + 4 * (a3 - v19);
        a1[1] = v10;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::DynamicVertexBuffer *>(
          a2,
          (int)v7,
          v10);
        a1[1] = (char *)a1[1] + 4 * v19;
        while ( v5 != v7 )
        {
          *(_DWORD *)v5 = v20;
          v5 += 4;
        }
      }
      else
      {
        v8 = 4 * a3;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::DynamicVertexBuffer *>(
          &v7[-4 * a3],
          (int)v7,
          v7);
        a1[1] = (char *)a1[1] + v8;
        std::copy_backward<Ogre::DynamicVertexBuffer **,Ogre::DynamicVertexBuffer **>(v5, (int)&v7[-v8], (int)v7);
        v9 = &v5[v8];
        while ( v5 != v9 )
        {
          *(_DWORD *)v5 = v20;
          v5 += 4;
        }
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::SamplerDefine,std::allocator<Ogre::SamplerDefine>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::SamplerDefine*,std::vector<Ogre::SamplerDefine,std::allocator<Ogre::SamplerDefine>>>,Ogre::SamplerDefine const&)
// address: 0x001657CC   size: 0x120 (288 bytes)
//======================================================================
void __fastcall std::vector<Ogre::SamplerDefine>::_M_insert_aux(
        Ogre::FixedString ***a1,
        char *a2,
        Ogre::FixedString **a3)
{
  Ogre::FixedString **v4; // r3
  Ogre::FixedString **v5; // r0
  char *v7; // r0
  int i; // r4
  char *v9; // r6
  void *v10; // r1
  int v11; // r1
  unsigned int v12; // r0
  unsigned int v13; // r3
  int v14; // r5
  Ogre::FixedString **v15; // r0
  Ogre::FixedString **v16; // r6
  Ogre::FixedString **j; // r0
  Ogre::FixedString **v18; // r7
  Ogre::FixedString **v19; // r6
  Ogre::FixedString **v20; // [sp+4h] [bp-68h]
  Ogre::FixedString **v22; // [sp+8h] [bp-64h]
  Ogre::FixedString **v23; // [sp+8h] [bp-64h]
  Ogre::FixedString **v24; // [sp+8h] [bp-64h]
  int v25; // [sp+Ch] [bp-60h]
  Ogre::FixedString *v26[23]; // [sp+10h] [bp-5Ch] BYREF

  v4 = a1[2];
  v5 = a1[1];
  if ( v5 != v4 )
  {
    if ( v5 != nullptr )
      Ogre::SamplerDefine::SamplerDefine(v5, v5 - 22);
    a1[1] += 22;
    Ogre::SamplerDefine::SamplerDefine(v26, a3);
    v7 = (char *)(a1[1] - 44);
    for ( i = -1171354717 * ((v7 - a2) >> 3); i > 0; --i )
    {
      v9 = v7 - 88;
      Ogre::SamplerDefine::operator=(v7, (_DWORD *)v7 - 22);
      v7 = v9;
    }
    Ogre::SamplerDefine::operator=(a2, v26);
    Ogre::FixedString::~FixedString(v26, v10);
    return;
  }
  v11 = 48806446;
  v12 = -1171354717 * (((char *)v5 - (char *)*a1) >> 3);
  if ( v12 == 0 )
  {
    v13 = 1;
    goto LABEL_12;
  }
  v13 = 2 * v12;
  v14 = 48806446;
  if ( 2 * v12 >= v12 )
  {
LABEL_12:
    v14 = v13;
    if ( v13 > 0x2E8BA2E )
      v14 = 48806446;
  }
  v25 = -1171354717 * ((a2 - (char *)*a1) >> 3);
  if ( v14 != 0 )
    v20 = (Ogre::FixedString **)operator new(88 * v14);
  else
    v20 = nullptr;
  v15 = &v20[22 * v25];
  if ( v15 != nullptr )
    Ogre::SamplerDefine::SamplerDefine(v15, a3);
  v16 = *a1;
  for ( j = v20; ; j = v22 )
  {
    v22 = j + 22;
    if ( v16 == (Ogre::FixedString **)a2 )
      break;
    if ( j != nullptr )
      Ogre::SamplerDefine::SamplerDefine(j, v16);
    v16 += 22;
  }
  v18 = j + 22;
  v23 = a1[1];
  while ( v16 != v23 )
  {
    if ( v18 != nullptr )
      Ogre::SamplerDefine::SamplerDefine(v18, v16);
    v18 += 22;
    v16 += 22;
  }
  v19 = *a1;
  v24 = a1[1];
  while ( v19 != v24 )
  {
    Ogre::FixedString::~FixedString(v19, (void *)v11);
    v19 += 22;
  }
  if ( *a1 != nullptr )
    operator delete(*a1);
  a1[1] = v18;
  *a1 = v20;
  a1[2] = &v20[22 * v14];
}


//======================================================================
// std::vector<Ogre::MaterialTemplate::ParamDefine *,std::allocator<Ogre::MaterialTemplate::ParamDefine *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::MaterialTemplate::ParamDefine **,std::vector<Ogre::MaterialTemplate::ParamDefine *,std::allocator<Ogre::MaterialTemplate::ParamDefine *>>>,Ogre::MaterialTemplate::ParamDefine * const&)
// address: 0x00165F64   size: 0xA6 (166 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::MaterialTemplate::ParamDefine *>::_M_insert_aux(__int64 a1, _DWORD *a2)
{
  _DWORD *v3; // r3
  __int64 v4; // r4
  int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r2
  int v8; // r6
  _DWORD *v9; // r3
  int v10; // r0
  __int64 v12; // [sp+0h] [bp-Ch]

  v12 = a1;
  v3 = *(_DWORD **)(a1 + 4);
  v4 = a1;
  if ( v3 != *(_DWORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
      *v3 = *(v3 - 1);
    LODWORD(a1) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v4 + 4) = a1 + 4;
    LODWORD(v4) = *a2;
    v5 = ((int)a1 - 4 - HIDWORD(a1)) >> 2;
    if ( v5 != 0 )
      j_memmove((void *)(a1 - 4 * v5), (const void *)HIDWORD(a1), 4 * v5);
    *(_DWORD *)HIDWORD(v4) = v4;
    return v12;
  }
  v6 = ((int)v3 - *(_DWORD *)a1) >> 2;
  if ( v6 == 0 )
  {
    v7 = 1;
    goto LABEL_11;
  }
  v7 = 2 * v6;
  v8 = 0x3FFFFFFF;
  if ( 2 * v6 >= v6 )
  {
LABEL_11:
    v8 = v7;
    if ( v7 > 0x3FFFFFFF )
      v8 = 0x3FFFFFFF;
  }
  LODWORD(v12) = (HIDWORD(a1) - *(_DWORD *)a1) >> 2;
  HIDWORD(v12) = 4 * v8;
  if ( v8 != 0 )
    v8 = operator new(4 * v8);
  v9 = (_DWORD *)(v8 + 4 * v12);
  if ( v9 != nullptr )
    *v9 = *a2;
  v10 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MaterialTemplate::ParamDefine *>(
          *(void **)v4,
          SHIDWORD(v4),
          (void *)v8);
  HIDWORD(v4) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MaterialTemplate::ParamDefine *>(
                  (void *)HIDWORD(v4),
                  *(_DWORD *)(v4 + 4),
                  (void *)(v10 + 4));
  if ( *(_DWORD *)v4 != 0 )
    operator delete(*(void **)v4);
  *(_DWORD *)v4 = v8;
  *(_DWORD *)(v4 + 4) = HIDWORD(v4);
  *(_DWORD *)(v4 + 8) = v8 + HIDWORD(v12);
  return v12;
}


//======================================================================
// std::vector<Ogre::MaterialTemplate::TechCache *,std::allocator<Ogre::MaterialTemplate::TechCache *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::MaterialTemplate::TechCache **,std::vector<Ogre::MaterialTemplate::TechCache *,std::allocator<Ogre::MaterialTemplate::TechCache *>>>,Ogre::MaterialTemplate::TechCache * const&)
// address: 0x00166030   size: 0xA6 (166 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::MaterialTemplate::TechCache *>::_M_insert_aux(__int64 a1, _DWORD *a2)
{
  _DWORD *v3; // r3
  __int64 v4; // r4
  int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r2
  int v8; // r6
  _DWORD *v9; // r3
  int v10; // r0
  __int64 v12; // [sp+0h] [bp-Ch]

  v12 = a1;
  v3 = *(_DWORD **)(a1 + 4);
  v4 = a1;
  if ( v3 != *(_DWORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
      *v3 = *(v3 - 1);
    LODWORD(a1) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v4 + 4) = a1 + 4;
    LODWORD(v4) = *a2;
    v5 = ((int)a1 - 4 - HIDWORD(a1)) >> 2;
    if ( v5 != 0 )
      j_memmove((void *)(a1 - 4 * v5), (const void *)HIDWORD(a1), 4 * v5);
    *(_DWORD *)HIDWORD(v4) = v4;
    return v12;
  }
  v6 = ((int)v3 - *(_DWORD *)a1) >> 2;
  if ( v6 == 0 )
  {
    v7 = 1;
    goto LABEL_11;
  }
  v7 = 2 * v6;
  v8 = 0x3FFFFFFF;
  if ( 2 * v6 >= v6 )
  {
LABEL_11:
    v8 = v7;
    if ( v7 > 0x3FFFFFFF )
      v8 = 0x3FFFFFFF;
  }
  LODWORD(v12) = (HIDWORD(a1) - *(_DWORD *)a1) >> 2;
  HIDWORD(v12) = 4 * v8;
  if ( v8 != 0 )
    v8 = operator new(4 * v8);
  v9 = (_DWORD *)(v8 + 4 * v12);
  if ( v9 != nullptr )
    *v9 = *a2;
  v10 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MaterialTemplate::TechCache *>(
          *(void **)v4,
          SHIDWORD(v4),
          (void *)v8);
  HIDWORD(v4) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MaterialTemplate::TechCache *>(
                  (void *)HIDWORD(v4),
                  *(_DWORD *)(v4 + 4),
                  (void *)(v10 + 4));
  if ( *(_DWORD *)v4 != 0 )
    operator delete(*(void **)v4);
  *(_DWORD *)v4 = v8;
  *(_DWORD *)(v4 + 4) = HIDWORD(v4);
  *(_DWORD *)(v4 + 8) = v8 + HIDWORD(v12);
  return v12;
}


//======================================================================
// std::vector<Ogre::MaterialParam *,std::allocator<Ogre::MaterialParam *>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::MaterialParam **,std::vector<Ogre::MaterialParam *,std::allocator<Ogre::MaterialParam *>>>,unsigned int,Ogre::MaterialParam * const&)
// address: 0x0016687C   size: 0x120 (288 bytes)
//======================================================================
void __fastcall std::vector<Ogre::MaterialParam *>::_M_fill_insert(int a1, _DWORD *a2, unsigned int a3, void **a4)
{
  _DWORD *v5; // r5
  _BYTE *v7; // r7
  int v8; // r6
  _DWORD *v9; // r6
  void *v10; // r2
  unsigned int v11; // r3
  unsigned int v12; // r7
  unsigned int v13; // r7
  char *v14; // r2
  void *v15; // r1
  unsigned int v16; // r3
  int v17; // r0
  int v18; // r5
  unsigned int v20; // [sp+4h] [bp-10h]
  void *v21; // [sp+8h] [bp-Ch]
  char *v22; // [sp+8h] [bp-Ch]
  int v23; // [sp+Ch] [bp-8h]

  v5 = a2;
  if ( a3 != 0 )
  {
    v7 = *(_BYTE **)(a1 + 4);
    if ( (*(_DWORD *)(a1 + 8) - (int)v7) >> 2 < a3 )
    {
      v11 = (int)&v7[-*(_DWORD *)a1] >> 2;
      if ( 0x3FFFFFFF - v11 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v12 = a3;
      if ( a3 < v11 )
        v12 = v11;
      v13 = v12 + v11;
      if ( v13 < v11 || v13 > 0x3FFFFFFF )
        v13 = 0x3FFFFFFF;
      v23 = ((int)a2 - *(_DWORD *)a1) >> 2;
      if ( v13 != 0 )
        v22 = (char *)operator new(4 * v13);
      else
        v22 = nullptr;
      v14 = &v22[4 * v23];
      v15 = *a4;
      v16 = a3;
      do
      {
        --v16;
        *(_DWORD *)v14 = v15;
        v14 += 4;
      }
      while ( v16 != 0 );
      v17 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MaterialParam *>(
              *(void **)a1,
              (int)v5,
              v22);
      v18 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MaterialParam *>(
              v5,
              *(_DWORD *)(a1 + 4),
              (void *)(v17 + 4 * a3));
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)(a1 + 4) = v18;
      *(_DWORD *)a1 = v22;
      *(_DWORD *)(a1 + 8) = &v22[4 * v13];
    }
    else
    {
      v20 = (v7 - (_BYTE *)a2) >> 2;
      v21 = *a4;
      if ( v20 <= a3 )
      {
        memset32(v7, (int)v21, a3 - v20);
        v10 = (void *)(*(_DWORD *)(a1 + 4) + 4 * (a3 - v20));
        *(_DWORD *)(a1 + 4) = v10;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MaterialParam *>(a2, (int)v7, v10);
        *(_DWORD *)(a1 + 4) += 4 * v20;
        while ( v5 != (_DWORD *)v7 )
          *v5++ = v21;
      }
      else
      {
        v8 = 4 * a3;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MaterialParam *>(
          &v7[-4 * a3],
          (int)v7,
          v7);
        *(_DWORD *)(a1 + 4) += v8;
        if ( (&v7[-v8] - (_BYTE *)v5) >> 2 != 0 )
          j_memmove(&v7[-4 * ((&v7[-v8] - (_BYTE *)v5) >> 2)], v5, 4 * ((&v7[-v8] - (_BYTE *)v5) >> 2));
        v9 = &v5[v8 / 4u];
        while ( v5 != v9 )
          *v5++ = v21;
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::InputHandler *,std::allocator<Ogre::InputHandler *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::InputHandler **,std::vector<Ogre::InputHandler *,std::allocator<Ogre::InputHandler *>>>,Ogre::InputHandler * const&)
// address: 0x00166D90   size: 0xA6 (166 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::InputHandler *>::_M_insert_aux(__int64 a1, _DWORD *a2)
{
  _DWORD *v3; // r3
  __int64 v4; // r4
  int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r2
  int v8; // r6
  _DWORD *v9; // r3
  int v10; // r0
  __int64 v12; // [sp+0h] [bp-Ch]

  v12 = a1;
  v3 = *(_DWORD **)(a1 + 4);
  v4 = a1;
  if ( v3 != *(_DWORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
      *v3 = *(v3 - 1);
    LODWORD(a1) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v4 + 4) = a1 + 4;
    LODWORD(v4) = *a2;
    v5 = ((int)a1 - 4 - HIDWORD(a1)) >> 2;
    if ( v5 != 0 )
      j_memmove((void *)(a1 - 4 * v5), (const void *)HIDWORD(a1), 4 * v5);
    *(_DWORD *)HIDWORD(v4) = v4;
    return v12;
  }
  v6 = ((int)v3 - *(_DWORD *)a1) >> 2;
  if ( v6 == 0 )
  {
    v7 = 1;
    goto LABEL_11;
  }
  v7 = 2 * v6;
  v8 = 0x3FFFFFFF;
  if ( 2 * v6 >= v6 )
  {
LABEL_11:
    v8 = v7;
    if ( v7 > 0x3FFFFFFF )
      v8 = 0x3FFFFFFF;
  }
  LODWORD(v12) = (HIDWORD(a1) - *(_DWORD *)a1) >> 2;
  HIDWORD(v12) = 4 * v8;
  if ( v8 != 0 )
    v8 = operator new(4 * v8);
  v9 = (_DWORD *)(v8 + 4 * v12);
  if ( v9 != nullptr )
    *v9 = *a2;
  v10 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::InputHandler *>(
          *(void **)v4,
          SHIDWORD(v4),
          (void *)v8);
  HIDWORD(v4) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::InputHandler *>(
                  (void *)HIDWORD(v4),
                  *(_DWORD *)(v4 + 4),
                  (void *)(v10 + 4));
  if ( *(_DWORD *)v4 != 0 )
    operator delete(*(void **)v4);
  *(_DWORD *)v4 = v8;
  *(_DWORD *)(v4 + 4) = HIDWORD(v4);
  *(_DWORD *)(v4 + 8) = v8 + HIDWORD(v12);
  return v12;
}


//======================================================================
// std::vector<unsigned int,std::allocator<unsigned int>>::_M_fill_insert(__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int,std::allocator<unsigned int>>>,unsigned int,unsigned int const&)
// address: 0x00167A08   size: 0x120 (288 bytes)
//======================================================================
void __fastcall std::vector<unsigned int>::_M_fill_insert(int a1, _DWORD *a2, unsigned int a3, void **a4)
{
  _DWORD *v5; // r5
  _BYTE *v7; // r7
  int v8; // r6
  _DWORD *v9; // r6
  void *v10; // r2
  unsigned int v11; // r3
  unsigned int v12; // r7
  unsigned int v13; // r7
  char *v14; // r2
  void *v15; // r1
  unsigned int v16; // r3
  int v17; // r0
  int v18; // r5
  unsigned int v20; // [sp+4h] [bp-10h]
  void *v21; // [sp+8h] [bp-Ch]
  char *v22; // [sp+8h] [bp-Ch]
  int v23; // [sp+Ch] [bp-8h]

  v5 = a2;
  if ( a3 != 0 )
  {
    v7 = *(_BYTE **)(a1 + 4);
    if ( (*(_DWORD *)(a1 + 8) - (int)v7) >> 2 < a3 )
    {
      v11 = (int)&v7[-*(_DWORD *)a1] >> 2;
      if ( 0x3FFFFFFF - v11 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v12 = a3;
      if ( a3 < v11 )
        v12 = v11;
      v13 = v12 + v11;
      if ( v13 < v11 || v13 > 0x3FFFFFFF )
        v13 = 0x3FFFFFFF;
      v23 = ((int)a2 - *(_DWORD *)a1) >> 2;
      if ( v13 != 0 )
        v22 = (char *)operator new(4 * v13);
      else
        v22 = nullptr;
      v14 = &v22[4 * v23];
      v15 = *a4;
      v16 = a3;
      do
      {
        --v16;
        *(_DWORD *)v14 = v15;
        v14 += 4;
      }
      while ( v16 != 0 );
      v17 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<unsigned int>(
              *(void **)a1,
              (int)v5,
              v22);
      v18 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<unsigned int>(
              v5,
              *(_DWORD *)(a1 + 4),
              (void *)(v17 + 4 * a3));
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)(a1 + 4) = v18;
      *(_DWORD *)a1 = v22;
      *(_DWORD *)(a1 + 8) = &v22[4 * v13];
    }
    else
    {
      v20 = (v7 - (_BYTE *)a2) >> 2;
      v21 = *a4;
      if ( v20 <= a3 )
      {
        memset32(v7, (int)v21, a3 - v20);
        v10 = (void *)(*(_DWORD *)(a1 + 4) + 4 * (a3 - v20));
        *(_DWORD *)(a1 + 4) = v10;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<unsigned int>(a2, (int)v7, v10);
        *(_DWORD *)(a1 + 4) += 4 * v20;
        while ( v5 != (_DWORD *)v7 )
          *v5++ = v21;
      }
      else
      {
        v8 = 4 * a3;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<unsigned int>(&v7[-4 * a3], (int)v7, v7);
        *(_DWORD *)(a1 + 4) += v8;
        if ( (&v7[-v8] - (_BYTE *)v5) >> 2 != 0 )
          j_memmove(&v7[-4 * ((&v7[-v8] - (_BYTE *)v5) >> 2)], v5, 4 * ((&v7[-v8] - (_BYTE *)v5) >> 2));
        v9 = &v5[v8 / 4u];
        while ( v5 != v9 )
          *v5++ = v21;
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::MorphAnimData::AnimRange,std::allocator<Ogre::MorphAnimData::AnimRange>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::MorphAnimData::AnimRange*,std::vector<Ogre::MorphAnimData::AnimRange,std::allocator<Ogre::MorphAnimData::AnimRange>>>,unsigned int,Ogre::MorphAnimData::AnimRange const&)
// address: 0x00167BC4   size: 0x13A (314 bytes)
//======================================================================
void __fastcall std::vector<Ogre::MorphAnimData::AnimRange>::_M_fill_insert(
        int a1,
        char *a2,
        unsigned int a3,
        _DWORD *a4)
{
  char *v7; // r1
  int v8; // r7
  unsigned int v9; // r6
  int v10; // r5
  char *v11; // r6
  char *v12; // r5
  char *j; // r3
  _DWORD *v14; // r3
  unsigned int i; // r1
  void *v16; // r2
  char *v17; // r3
  unsigned int v18; // r3
  int v19; // r6
  unsigned int v20; // r6
  char *v21; // r3
  unsigned int v22; // r2
  int v23; // r0
  int v24; // r5
  char *v25; // [sp+4h] [bp-10h]
  char *v26; // [sp+4h] [bp-10h]
  int v27; // [sp+8h] [bp-Ch]
  int v28; // [sp+8h] [bp-Ch]

  if ( a3 != 0 )
  {
    v7 = *(char **)(a1 + 4);
    v25 = v7;
    if ( (*(_DWORD *)(a1 + 8) - (int)v7) >> 3 < a3 )
    {
      v18 = (int)&v7[-*(_DWORD *)a1] >> 3;
      if ( 0x1FFFFFFF - v18 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v19 = a3;
      if ( a3 < v18 )
        v19 = (int)&v7[-*(_DWORD *)a1] >> 3;
      v20 = v19 + v18;
      if ( v20 < v18 || v20 > 0x1FFFFFFF )
        v20 = 0x1FFFFFFF;
      v28 = (int)&a2[-*(_DWORD *)a1] >> 3;
      if ( v20 != 0 )
        v26 = (char *)operator new(8 * v20);
      else
        v26 = nullptr;
      v21 = &v26[8 * v28];
      v22 = a3;
      do
      {
        --v22;
        *(_DWORD *)v21 = *a4;
        *((_DWORD *)v21 + 1) = a4[1];
        v21 += 8;
      }
      while ( v22 != 0 );
      v23 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MorphAnimData::AnimRange>(
              *(void **)a1,
              (int)a2,
              v26);
      v24 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MorphAnimData::AnimRange>(
              a2,
              *(_DWORD *)(a1 + 4),
              (void *)(v23 + 8 * a3));
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)(a1 + 4) = v24;
      *(_DWORD *)a1 = v26;
      *(_DWORD *)(a1 + 8) = &v26[8 * v20];
    }
    else
    {
      v8 = a4[1];
      v27 = *a4;
      v9 = (v7 - a2) >> 3;
      if ( v9 <= a3 )
      {
        v14 = *(_DWORD **)(a1 + 4);
        for ( i = a3 - v9; i != 0; --i )
        {
          v14[1] = v8;
          *v14 = v27;
          v14 += 2;
        }
        v16 = (void *)(*(_DWORD *)(a1 + 4) + 8 * (a3 - v9));
        *(_DWORD *)(a1 + 4) = v16;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MorphAnimData::AnimRange>(
          a2,
          (int)v25,
          v16);
        v17 = a2;
        *(_DWORD *)(a1 + 4) += 8 * v9;
        while ( v17 != v25 )
        {
          *((_DWORD *)v17 + 1) = v8;
          *(_DWORD *)v17 = v27;
          v17 += 8;
        }
      }
      else
      {
        v10 = 8 * a3;
        v11 = &v7[-8 * a3];
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MorphAnimData::AnimRange>(
          v11,
          (int)v7,
          v7);
        *(_DWORD *)(a1 + 4) += v10;
        if ( (v11 - a2) >> 3 != 0 )
          j_memmove(&v25[-8 * ((v11 - a2) >> 3)], a2, 8 * ((v11 - a2) >> 3));
        v12 = &a2[v10];
        for ( j = a2; j != v12; j += 8 )
        {
          *((_DWORD *)j + 1) = v8;
          *(_DWORD *)j = v27;
        }
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::DynLib *,std::allocator<Ogre::DynLib *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::DynLib **,std::vector<Ogre::DynLib *,std::allocator<Ogre::DynLib *>>>,Ogre::DynLib * const&)
// address: 0x00168C48   size: 0xA6 (166 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::DynLib *>::_M_insert_aux(__int64 a1, _DWORD *a2)
{
  _DWORD *v3; // r3
  __int64 v4; // r4
  int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r2
  int v8; // r6
  _DWORD *v9; // r3
  int v10; // r0
  __int64 v12; // [sp+0h] [bp-Ch]

  v12 = a1;
  v3 = *(_DWORD **)(a1 + 4);
  v4 = a1;
  if ( v3 != *(_DWORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
      *v3 = *(v3 - 1);
    LODWORD(a1) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v4 + 4) = a1 + 4;
    LODWORD(v4) = *a2;
    v5 = ((int)a1 - 4 - HIDWORD(a1)) >> 2;
    if ( v5 != 0 )
      j_memmove((void *)(a1 - 4 * v5), (const void *)HIDWORD(a1), 4 * v5);
    *(_DWORD *)HIDWORD(v4) = v4;
    return v12;
  }
  v6 = ((int)v3 - *(_DWORD *)a1) >> 2;
  if ( v6 == 0 )
  {
    v7 = 1;
    goto LABEL_11;
  }
  v7 = 2 * v6;
  v8 = 0x3FFFFFFF;
  if ( 2 * v6 >= v6 )
  {
LABEL_11:
    v8 = v7;
    if ( v7 > 0x3FFFFFFF )
      v8 = 0x3FFFFFFF;
  }
  LODWORD(v12) = (HIDWORD(a1) - *(_DWORD *)a1) >> 2;
  HIDWORD(v12) = 4 * v8;
  if ( v8 != 0 )
    v8 = operator new(4 * v8);
  v9 = (_DWORD *)(v8 + 4 * v12);
  if ( v9 != nullptr )
    *v9 = *a2;
  v10 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::DynLib *>(
          *(void **)v4,
          SHIDWORD(v4),
          (void *)v8);
  HIDWORD(v4) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::DynLib *>(
                  (void *)HIDWORD(v4),
                  *(_DWORD *)(v4 + 4),
                  (void *)(v10 + 4));
  if ( *(_DWORD *)v4 != 0 )
    operator delete(*(void **)v4);
  *(_DWORD *)v4 = v8;
  *(_DWORD *)(v4 + 4) = HIDWORD(v4);
  *(_DWORD *)(v4 + 8) = v8 + HIDWORD(v12);
  return v12;
}


//======================================================================
// std::vector<Ogre::Plugin *,std::allocator<Ogre::Plugin *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::Plugin **,std::vector<Ogre::Plugin *,std::allocator<Ogre::Plugin *>>>,Ogre::Plugin * const&)
// address: 0x00168E5C   size: 0xA6 (166 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::Plugin *>::_M_insert_aux(__int64 a1, _DWORD *a2)
{
  _DWORD *v3; // r3
  __int64 v4; // r4
  int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r2
  int v8; // r6
  _DWORD *v9; // r3
  int v10; // r0
  __int64 v12; // [sp+0h] [bp-Ch]

  v12 = a1;
  v3 = *(_DWORD **)(a1 + 4);
  v4 = a1;
  if ( v3 != *(_DWORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
      *v3 = *(v3 - 1);
    LODWORD(a1) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v4 + 4) = a1 + 4;
    LODWORD(v4) = *a2;
    v5 = ((int)a1 - 4 - HIDWORD(a1)) >> 2;
    if ( v5 != 0 )
      j_memmove((void *)(a1 - 4 * v5), (const void *)HIDWORD(a1), 4 * v5);
    *(_DWORD *)HIDWORD(v4) = v4;
    return v12;
  }
  v6 = ((int)v3 - *(_DWORD *)a1) >> 2;
  if ( v6 == 0 )
  {
    v7 = 1;
    goto LABEL_11;
  }
  v7 = 2 * v6;
  v8 = 0x3FFFFFFF;
  if ( 2 * v6 >= v6 )
  {
LABEL_11:
    v8 = v7;
    if ( v7 > 0x3FFFFFFF )
      v8 = 0x3FFFFFFF;
  }
  LODWORD(v12) = (HIDWORD(a1) - *(_DWORD *)a1) >> 2;
  HIDWORD(v12) = 4 * v8;
  if ( v8 != 0 )
    v8 = operator new(4 * v8);
  v9 = (_DWORD *)(v8 + 4 * v12);
  if ( v9 != nullptr )
    *v9 = *a2;
  v10 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::Plugin *>(
          *(void **)v4,
          SHIDWORD(v4),
          (void *)v8);
  HIDWORD(v4) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::Plugin *>(
                  (void *)HIDWORD(v4),
                  *(_DWORD *)(v4 + 4),
                  (void *)(v10 + 4));
  if ( *(_DWORD *)v4 != 0 )
    operator delete(*(void **)v4);
  *(_DWORD *)v4 = v8;
  *(_DWORD *)(v4 + 4) = HIDWORD(v4);
  *(_DWORD *)(v4 + 8) = v8 + HIDWORD(v12);
  return v12;
}


//======================================================================
// std::vector<Ogre::Vector3,std::allocator<Ogre::Vector3>>::_M_check_len(unsigned int,char const*)const
// address: 0x0016A088   size: 0x30 (48 bytes)
//======================================================================
unsigned int __fastcall std::vector<Ogre::Vector3>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = -1431655765 * ((a1[1] - *a1) >> 2);
  if ( 357913941 - v3 < a2 )
    sub_3BD058(a3);
  v4 = -1431655765 * ((a1[1] - *a1) >> 2);
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0x15555555 )
    return 357913941;
  return result;
}


//======================================================================
// std::vector<Ogre::Vector3,std::allocator<Ogre::Vector3>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::Vector3*,std::vector<Ogre::Vector3,std::allocator<Ogre::Vector3>>>,Ogre::Vector3 const&)
// address: 0x0016A860   size: 0x13C (316 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::Vector3>::_M_insert_aux(__int64 a1, int *a2)
{
  int v2; // r4
  _DWORD *v3; // r3
  _DWORD *v5; // r3
  int v6; // r5
  int v7; // r4
  _DWORD *v8; // r2
  unsigned int v9; // r3
  unsigned int v10; // r2
  int v11; // r5
  _DWORD *v12; // r6
  int *v13; // r3
  char *v14; // r1
  _DWORD *v15; // r2
  char *i; // r3
  unsigned int v17; // r0
  _DWORD *v18; // r1
  char *v19; // r12
  char *j; // r2
  unsigned int v21; // r7
  __int64 v23; // [sp+0h] [bp-Ch]

  v23 = a1;
  v2 = a1;
  v3 = *(_DWORD **)(a1 + 4);
  if ( v3 != *(_DWORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
    {
      *v3 = *(v3 - 3);
      v3[1] = *(v3 - 2);
      v3[2] = *(v3 - 1);
    }
    v5 = *(_DWORD **)(a1 + 4);
    *(_DWORD *)(a1 + 4) = v5 + 3;
    v6 = *a2;
    v7 = a2[1];
    LODWORD(a1) = a2[2];
    v8 = v5 - 3;
    HIDWORD(a1) = -1431655765 * (((int)v5 - HIDWORD(a1) - 12) >> 2);
    while ( a1 > 0 )
    {
      v8 -= 3;
      v5 -= 3;
      --HIDWORD(a1);
      *v5 = *v8;
      v5[1] = v8[1];
      v5[2] = v8[2];
    }
    *(_DWORD *)HIDWORD(v23) = v6;
    *(_DWORD *)(HIDWORD(v23) + 4) = v7;
    *(_DWORD *)(HIDWORD(v23) + 8) = a1;
    return v23;
  }
  v9 = -1431655765 * (((int)v3 - *(_DWORD *)a1) >> 2);
  if ( v9 == 0 )
  {
    v10 = 1;
    goto LABEL_12;
  }
  v10 = 2 * v9;
  v11 = 357913941;
  if ( 2 * v9 >= v9 )
  {
LABEL_12:
    v11 = v10;
    if ( v10 > 0x15555555 )
      v11 = 357913941;
  }
  LODWORD(v23) = -1431655765 * ((HIDWORD(a1) - *(_DWORD *)a1) >> 2);
  if ( v11 != 0 )
    v12 = (_DWORD *)operator new(12 * v11);
  else
    v12 = nullptr;
  v13 = &v12[3 * v23];
  if ( v13 != nullptr )
  {
    *v13 = *a2;
    v13[1] = a2[1];
    v13[2] = a2[2];
  }
  v14 = *(char **)v2;
  v15 = v12;
  for ( i = *(char **)v2; i != (char *)HIDWORD(v23); i += 12 )
  {
    if ( v15 != nullptr )
    {
      *v15 = *(_DWORD *)i;
      v15[1] = *((_DWORD *)i + 1);
      v15[2] = *((_DWORD *)i + 2);
    }
    v15 += 3;
  }
  v17 = (unsigned int)&v12[3 * ((-1431655764 * ((unsigned int)(i - v14) >> 2)) >> 2) + 3];
  v18 = (_DWORD *)v17;
  v19 = *(char **)(v2 + 4);
  for ( j = i; j != v19; j += 12 )
  {
    if ( v18 != nullptr )
    {
      *v18 = *(_DWORD *)j;
      v18[1] = *((_DWORD *)j + 1);
      v18[2] = *((_DWORD *)j + 2);
    }
    v18 += 3;
  }
  v21 = v17 + 12 * ((-1431655764 * ((unsigned int)(j - i) >> 2)) >> 2);
  if ( *(_DWORD *)v2 != 0 )
    operator delete(*(void **)v2);
  *(_DWORD *)v2 = v12;
  *(_DWORD *)(v2 + 4) = v21;
  *(_DWORD *)(v2 + 8) = &v12[3 * v11];
  return v23;
}


//======================================================================
// std::vector<Ogre::Vector3,std::allocator<Ogre::Vector3>>::push_back(Ogre::Vector3 const&)
// address: 0x0016A9A8   size: 0x2A (42 bytes)
//======================================================================
int __fastcall std::vector<Ogre::Vector3>::push_back(__int64 a1)
{
  int *v1; // r2

  v1 = (int *)HIDWORD(a1);
  HIDWORD(a1) = *(_DWORD *)(a1 + 4);
  if ( HIDWORD(a1) == *(_DWORD *)(a1 + 8) )
  {
    LODWORD(a1) = std::vector<Ogre::Vector3>::_M_insert_aux(a1, v1);
  }
  else
  {
    if ( HIDWORD(a1) != 0 )
    {
      *(_QWORD *)HIDWORD(a1) = *(_QWORD *)v1;
      *(_DWORD *)(HIDWORD(a1) + 8) = v1[2];
    }
    *(_DWORD *)(a1 + 4) += 12;
  }
  return a1;
}


//======================================================================
// std::vector<float,std::allocator<float>>::_M_insert_aux(__gnu_cxx::__normal_iterator<float *,std::vector<float,std::allocator<float>>>,float const&)
// address: 0x0016A9D4   size: 0xA6 (166 bytes)
//======================================================================
__int64 __fastcall std::vector<float>::_M_insert_aux(__int64 a1, _DWORD *a2)
{
  _DWORD *v3; // r3
  __int64 v4; // r4
  int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r2
  int v8; // r6
  _DWORD *v9; // r3
  int v10; // r0
  __int64 v12; // [sp+0h] [bp-Ch]

  v12 = a1;
  v3 = *(_DWORD **)(a1 + 4);
  v4 = a1;
  if ( v3 != *(_DWORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
      *v3 = *(v3 - 1);
    LODWORD(a1) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v4 + 4) = a1 + 4;
    LODWORD(v4) = *a2;
    v5 = ((int)a1 - 4 - HIDWORD(a1)) >> 2;
    if ( v5 != 0 )
      j_memmove((void *)(a1 - 4 * v5), (const void *)HIDWORD(a1), 4 * v5);
    *(_DWORD *)HIDWORD(v4) = v4;
    return v12;
  }
  v6 = ((int)v3 - *(_DWORD *)a1) >> 2;
  if ( v6 == 0 )
  {
    v7 = 1;
    goto LABEL_11;
  }
  v7 = 2 * v6;
  v8 = 0x3FFFFFFF;
  if ( 2 * v6 >= v6 )
  {
LABEL_11:
    v8 = v7;
    if ( v7 > 0x3FFFFFFF )
      v8 = 0x3FFFFFFF;
  }
  LODWORD(v12) = (HIDWORD(a1) - *(_DWORD *)a1) >> 2;
  HIDWORD(v12) = 4 * v8;
  if ( v8 != 0 )
    v8 = operator new(4 * v8);
  v9 = (_DWORD *)(v8 + 4 * v12);
  if ( v9 != nullptr )
    *v9 = *a2;
  v10 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<float>(
          *(void **)v4,
          SHIDWORD(v4),
          (void *)v8);
  HIDWORD(v4) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<float>(
                  (void *)HIDWORD(v4),
                  *(_DWORD *)(v4 + 4),
                  (void *)(v10 + 4));
  if ( *(_DWORD *)v4 != 0 )
    operator delete(*(void **)v4);
  *(_DWORD *)v4 = v8;
  *(_DWORD *)(v4 + 4) = HIDWORD(v4);
  *(_DWORD *)(v4 + 8) = v8 + HIDWORD(v12);
  return v12;
}


//======================================================================
// std::vector<float,std::allocator<float>>::push_back(float const&)
// address: 0x0016AA80   size: 0x22 (34 bytes)
//======================================================================
int __fastcall std::vector<float>::push_back(__int64 a1)
{
  _DWORD *v1; // r2

  v1 = (_DWORD *)HIDWORD(a1);
  HIDWORD(a1) = *(_DWORD *)(a1 + 4);
  if ( HIDWORD(a1) == *(_DWORD *)(a1 + 8) )
  {
    LODWORD(a1) = std::vector<float>::_M_insert_aux(a1, v1);
  }
  else
  {
    if ( HIDWORD(a1) != 0 )
      *(_DWORD *)HIDWORD(a1) = *v1;
    *(_DWORD *)(a1 + 4) += 4;
  }
  return a1;
}


//======================================================================
// std::vector<Ogre::FilePkgBase *,std::allocator<Ogre::FilePkgBase *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::FilePkgBase **,std::vector<Ogre::FilePkgBase *,std::allocator<Ogre::FilePkgBase *>>>,Ogre::FilePkgBase * const&)
// address: 0x0016EB28   size: 0x9C (156 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::FilePkgBase *>::_M_insert_aux(__int64 a1, int *a2)
{
  _DWORD *v3; // r3
  int v5; // r2
  int v6; // r4
  unsigned int v7; // r3
  unsigned int v8; // r2
  int v9; // r5
  int *v10; // r3
  int v11; // r0
  __int64 v13; // [sp+0h] [bp-Ch]

  v13 = a1;
  v3 = *(_DWORD **)(a1 + 4);
  if ( v3 != *(_DWORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
      *v3 = *(v3 - 1);
    v5 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 4) = v5 + 4;
    v6 = *a2;
    std::__copy_move_backward<false,true,std::random_access_iterator_tag>::__copy_move_b<Ogre::FilePkgBase *>(
      (void *)HIDWORD(a1),
      v5 - 4,
      v5);
    *(_DWORD *)HIDWORD(a1) = v6;
    return v13;
  }
  v7 = ((int)v3 - *(_DWORD *)a1) >> 2;
  if ( v7 == 0 )
  {
    v8 = 1;
    goto LABEL_9;
  }
  v8 = 2 * v7;
  v9 = 0x3FFFFFFF;
  if ( 2 * v7 >= v7 )
  {
LABEL_9:
    v9 = v8;
    if ( v8 > 0x3FFFFFFF )
      v9 = 0x3FFFFFFF;
  }
  LODWORD(v13) = (HIDWORD(a1) - *(_DWORD *)a1) >> 2;
  HIDWORD(v13) = 4 * v9;
  if ( v9 != 0 )
    v9 = operator new(4 * v9);
  v10 = (int *)(v9 + 4 * v13);
  if ( v10 != nullptr )
    *v10 = *a2;
  v11 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::FilePkgBase *>(
          *(void **)a1,
          SHIDWORD(a1),
          (void *)v9);
  std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::FilePkgBase *>(
    (void *)HIDWORD(a1),
    *(_DWORD *)(a1 + 4),
    (void *)(v11 + 4));
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v9;
  *(_DWORD *)(a1 + 4) = HIDWORD(a1);
  *(_DWORD *)(a1 + 8) = v9 + HIDWORD(v13);
  return v13;
}


//======================================================================
// std::vector<ozcollide::Vec3f,std::allocator<ozcollide::Vec3f>>::_M_insert_aux(__gnu_cxx::__normal_iterator<ozcollide::Vec3f*,std::vector<ozcollide::Vec3f,std::allocator<ozcollide::Vec3f>>>,ozcollide::Vec3f const&)
// address: 0x0016F748   size: 0x13C (316 bytes)
//======================================================================
__int64 __fastcall std::vector<ozcollide::Vec3f>::_M_insert_aux(__int64 a1, int *a2)
{
  int v2; // r4
  _DWORD *v3; // r3
  _DWORD *v5; // r3
  int v6; // r5
  int v7; // r4
  _DWORD *v8; // r2
  unsigned int v9; // r3
  unsigned int v10; // r2
  int v11; // r5
  _DWORD *v12; // r6
  int *v13; // r3
  char *v14; // r1
  _DWORD *v15; // r2
  char *i; // r3
  unsigned int v17; // r0
  _DWORD *v18; // r1
  char *v19; // r12
  char *j; // r2
  unsigned int v21; // r7
  __int64 v23; // [sp+0h] [bp-Ch]

  v23 = a1;
  v2 = a1;
  v3 = *(_DWORD **)(a1 + 4);
  if ( v3 != *(_DWORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
    {
      *v3 = *(v3 - 3);
      v3[1] = *(v3 - 2);
      v3[2] = *(v3 - 1);
    }
    v5 = *(_DWORD **)(a1 + 4);
    *(_DWORD *)(a1 + 4) = v5 + 3;
    v6 = *a2;
    v7 = a2[1];
    LODWORD(a1) = a2[2];
    v8 = v5 - 3;
    HIDWORD(a1) = -1431655765 * (((int)v5 - HIDWORD(a1) - 12) >> 2);
    while ( a1 > 0 )
    {
      v8 -= 3;
      v5 -= 3;
      --HIDWORD(a1);
      *v5 = *v8;
      v5[1] = v8[1];
      v5[2] = v8[2];
    }
    *(_DWORD *)HIDWORD(v23) = v6;
    *(_DWORD *)(HIDWORD(v23) + 4) = v7;
    *(_DWORD *)(HIDWORD(v23) + 8) = a1;
    return v23;
  }
  v9 = -1431655765 * (((int)v3 - *(_DWORD *)a1) >> 2);
  if ( v9 == 0 )
  {
    v10 = 1;
    goto LABEL_12;
  }
  v10 = 2 * v9;
  v11 = 357913941;
  if ( 2 * v9 >= v9 )
  {
LABEL_12:
    v11 = v10;
    if ( v10 > 0x15555555 )
      v11 = 357913941;
  }
  LODWORD(v23) = -1431655765 * ((HIDWORD(a1) - *(_DWORD *)a1) >> 2);
  if ( v11 != 0 )
    v12 = (_DWORD *)operator new(12 * v11);
  else
    v12 = nullptr;
  v13 = &v12[3 * v23];
  if ( v13 != nullptr )
  {
    *v13 = *a2;
    v13[1] = a2[1];
    v13[2] = a2[2];
  }
  v14 = *(char **)v2;
  v15 = v12;
  for ( i = *(char **)v2; i != (char *)HIDWORD(v23); i += 12 )
  {
    if ( v15 != nullptr )
    {
      *v15 = *(_DWORD *)i;
      v15[1] = *((_DWORD *)i + 1);
      v15[2] = *((_DWORD *)i + 2);
    }
    v15 += 3;
  }
  v17 = (unsigned int)&v12[3 * ((-1431655764 * ((unsigned int)(i - v14) >> 2)) >> 2) + 3];
  v18 = (_DWORD *)v17;
  v19 = *(char **)(v2 + 4);
  for ( j = i; j != v19; j += 12 )
  {
    if ( v18 != nullptr )
    {
      *v18 = *(_DWORD *)j;
      v18[1] = *((_DWORD *)j + 1);
      v18[2] = *((_DWORD *)j + 2);
    }
    v18 += 3;
  }
  v21 = v17 + 12 * ((-1431655764 * ((unsigned int)(j - i) >> 2)) >> 2);
  if ( *(_DWORD *)v2 != 0 )
    operator delete(*(void **)v2);
  *(_DWORD *)v2 = v12;
  *(_DWORD *)(v2 + 4) = v21;
  *(_DWORD *)(v2 + 8) = &v12[3 * v11];
  return v23;
}


//======================================================================
// std::vector<ozcollide::Polygon,std::allocator<ozcollide::Polygon>>::_M_insert_aux(__gnu_cxx::__normal_iterator<ozcollide::Polygon*,std::vector<ozcollide::Polygon,std::allocator<ozcollide::Polygon>>>,ozcollide::Polygon const&)
// address: 0x0016FC20   size: 0x16E (366 bytes)
//======================================================================
void __fastcall std::vector<ozcollide::Polygon>::_M_insert_aux(int a1, char *a2, int *a3)
{
  _DWORD *v4; // r1
  int v6; // r6
  int v7; // r7
  int v8; // r6
  int v9; // r7
  _DWORD *v10; // r3
  int v11; // r0
  int v12; // r1
  _DWORD *v13; // r1
  int v14; // r4
  int v15; // r6
  int v16; // r4
  int v17; // r7
  int v18; // r7
  _DWORD *v19; // r4
  int i; // r12
  int v21; // r6
  int v22; // r7
  int v23; // r6
  int v24; // r7
  int v25; // r7
  int v26; // r4
  int v27; // r5
  int v28; // r6
  int v29; // r7
  int v30; // r5
  unsigned int v31; // r1
  unsigned int v32; // r3
  int v33; // r6
  int v34; // r7
  _DWORD *v35; // r7
  int v36; // r0
  int v37; // r1
  int v38; // r2
  int *v39; // r5
  int *v40; // r3
  int v41; // r0
  int v42; // r2
  int v43; // r7
  int v44; // r2
  char *v45; // r3
  char *v46; // r12
  int v47; // r5
  int v48; // r7
  int v49; // r5
  int v50; // r7
  int v51; // r5
  char *v52; // r12
  int v53; // r5
  int v54; // r7
  int v55; // r5
  int v56; // r7
  int v57; // r7
  unsigned int v58; // r7
  char *v59; // [sp+0h] [bp-34h]
  _DWORD *v60; // [sp+4h] [bp-30h]
  _DWORD *v61; // [sp+4h] [bp-30h]
  unsigned int v63; // [sp+8h] [bp-2Ch]
  _DWORD *v64; // [sp+Ch] [bp-28h]
  int v65; // [sp+10h] [bp-24h] BYREF
  int v66; // [sp+14h] [bp-20h]
  int v67; // [sp+18h] [bp-1Ch]
  int v68; // [sp+1Ch] [bp-18h]
  int v69; // [sp+20h] [bp-14h]
  int v70; // [sp+24h] [bp-10h]
  int v71; // [sp+28h] [bp-Ch]
  int v72; // [sp+2Ch] [bp-8h]

  v4 = *(_DWORD **)(a1 + 4);
  if ( v4 != *(_DWORD **)(a1 + 8) )
  {
    if ( v4 != nullptr )
    {
      v6 = *(v4 - 7);
      v7 = *(v4 - 6);
      *v4 = *(v4 - 8);
      v4[1] = v6;
      v4[2] = v7;
      v8 = *(v4 - 4);
      v9 = *(v4 - 3);
      v4[3] = *(v4 - 5);
      v4[4] = v8;
      v4[5] = v9;
      v10 = v4 + 6;
      v11 = *(v4 - 2);
      v12 = *(v4 - 1);
      *v10 = v11;
      v10[1] = v12;
    }
    v13 = *(_DWORD **)(a1 + 4);
    *(_DWORD *)(a1 + 4) = v13 + 8;
    v14 = a3[1];
    v15 = a3[2];
    v65 = *a3;
    v66 = v14;
    v67 = v15;
    v16 = a3[4];
    v17 = a3[5];
    v68 = a3[3];
    v69 = v16;
    v70 = v17;
    v18 = a3[7];
    v71 = a3[6];
    v72 = v18;
    v19 = v13 - 8;
    for ( i = ((char *)(v13 - 8) - a2) >> 5; i > 0; --i )
    {
      v13 -= 8;
      v19 -= 8;
      v21 = v19[1];
      v22 = v19[2];
      *v13 = *v19;
      v13[1] = v21;
      v13[2] = v22;
      v23 = v19[4];
      v24 = v19[5];
      v13[3] = v19[3];
      v13[4] = v23;
      v13[5] = v24;
      v25 = v19[7];
      v13[6] = v19[6];
      v13[7] = v25;
    }
    v26 = v66;
    v27 = v67;
    *(_DWORD *)a2 = v65;
    *((_DWORD *)a2 + 1) = v26;
    *((_DWORD *)a2 + 2) = v27;
    v28 = v69;
    v29 = v70;
    *((_DWORD *)a2 + 3) = v68;
    *((_DWORD *)a2 + 4) = v28;
    *((_DWORD *)a2 + 5) = v29;
    v30 = v72;
    *((_DWORD *)a2 + 6) = v71;
    *((_DWORD *)a2 + 7) = v30;
    ozcollide::Polygon::~Polygon((ozcollide::Polygon *)&v65);
    return;
  }
  v31 = ((int)v4 - *(_DWORD *)a1) >> 5;
  if ( v31 == 0 )
  {
    v32 = 1;
    goto LABEL_12;
  }
  v32 = 2 * v31;
  v33 = 0x7FFFFFF;
  if ( 2 * v31 >= v31 )
  {
LABEL_12:
    v33 = v32;
    if ( v32 > 0x7FFFFFF )
      v33 = 0x7FFFFFF;
  }
  v34 = (int)&a2[-*(_DWORD *)a1] >> 5;
  if ( v33 != 0 )
    v64 = (_DWORD *)operator new(32 * v33);
  else
    v64 = nullptr;
  v35 = &v64[8 * v34];
  if ( v35 != nullptr )
  {
    v36 = *a3;
    v37 = a3[1];
    v38 = a3[2];
    v39 = a3 + 3;
    *v35 = v36;
    v35[1] = v37;
    v35[2] = v38;
    v40 = v35 + 3;
    v41 = *v39;
    v42 = v39[1];
    v43 = v39[2];
    v39 += 3;
    *v40 = v41;
    v40[1] = v42;
    v40[2] = v43;
    v40 += 3;
    v44 = v39[1];
    *v40 = *v39;
    v40[1] = v44;
  }
  v45 = *(char **)a1;
  v46 = *(char **)a1;
  v60 = v64;
  while ( v45 != a2 )
  {
    if ( v60 != nullptr )
    {
      v47 = *((_DWORD *)v45 + 1);
      v48 = *((_DWORD *)v45 + 2);
      *v60 = *(_DWORD *)v45;
      v60[1] = v47;
      v60[2] = v48;
      v49 = *((_DWORD *)v45 + 4);
      v50 = *((_DWORD *)v45 + 5);
      v60[3] = *((_DWORD *)v45 + 3);
      v60[4] = v49;
      v60[5] = v50;
      v51 = *((_DWORD *)v45 + 7);
      v60[6] = *((_DWORD *)v45 + 6);
      v60[7] = v51;
    }
    v45 += 32;
    v60 += 8;
  }
  v63 = (unsigned int)&v64[8 * ((unsigned int)(v45 - v46) >> 5) + 8];
  v59 = v45;
  v61 = (_DWORD *)v63;
  v52 = *(char **)(a1 + 4);
  while ( v59 != v52 )
  {
    if ( v61 != nullptr )
    {
      v53 = *((_DWORD *)v59 + 1);
      v54 = *((_DWORD *)v59 + 2);
      *v61 = *(_DWORD *)v59;
      v61[1] = v53;
      v61[2] = v54;
      v55 = *((_DWORD *)v59 + 4);
      v56 = *((_DWORD *)v59 + 5);
      v61[3] = *((_DWORD *)v59 + 3);
      v61[4] = v55;
      v61[5] = v56;
      v57 = *((_DWORD *)v59 + 7);
      v61[6] = *((_DWORD *)v59 + 6);
      v61[7] = v57;
    }
    v61 += 8;
    v59 += 32;
  }
  v58 = v63 + 32 * ((unsigned int)(v59 - v45) >> 5);
  std::_Destroy_aux<false>::__destroy<ozcollide::Polygon *>(
    *(ozcollide::Polygon **)a1,
    *(ozcollide::Polygon **)(a1 + 4));
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)(a1 + 4) = v58;
  *(_DWORD *)a1 = v64;
  *(_DWORD *)(a1 + 8) = &v64[8 * v33];
}


//======================================================================
// std::vector<Ogre::PhysicsScene::CollideData *,std::allocator<Ogre::PhysicsScene::CollideData *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::PhysicsScene::CollideData **,std::vector<Ogre::PhysicsScene::CollideData *,std::allocator<Ogre::PhysicsScene::CollideData *>>>,Ogre::PhysicsScene::CollideData * const&)
// address: 0x0017008C   size: 0xA6 (166 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::PhysicsScene::CollideData *>::_M_insert_aux(__int64 a1, _DWORD *a2)
{
  _DWORD *v3; // r3
  __int64 v4; // r4
  int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r2
  int v8; // r6
  _DWORD *v9; // r3
  int v10; // r0
  __int64 v12; // [sp+0h] [bp-Ch]

  v12 = a1;
  v3 = *(_DWORD **)(a1 + 4);
  v4 = a1;
  if ( v3 != *(_DWORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
      *v3 = *(v3 - 1);
    LODWORD(a1) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v4 + 4) = a1 + 4;
    LODWORD(v4) = *a2;
    v5 = ((int)a1 - 4 - HIDWORD(a1)) >> 2;
    if ( v5 != 0 )
      j_memmove((void *)(a1 - 4 * v5), (const void *)HIDWORD(a1), 4 * v5);
    *(_DWORD *)HIDWORD(v4) = v4;
    return v12;
  }
  v6 = ((int)v3 - *(_DWORD *)a1) >> 2;
  if ( v6 == 0 )
  {
    v7 = 1;
    goto LABEL_11;
  }
  v7 = 2 * v6;
  v8 = 0x3FFFFFFF;
  if ( 2 * v6 >= v6 )
  {
LABEL_11:
    v8 = v7;
    if ( v7 > 0x3FFFFFFF )
      v8 = 0x3FFFFFFF;
  }
  LODWORD(v12) = (HIDWORD(a1) - *(_DWORD *)a1) >> 2;
  HIDWORD(v12) = 4 * v8;
  if ( v8 != 0 )
    v8 = operator new(4 * v8);
  v9 = (_DWORD *)(v8 + 4 * v12);
  if ( v9 != nullptr )
    *v9 = *a2;
  v10 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::PhysicsScene::CollideData *>(
          *(void **)v4,
          SHIDWORD(v4),
          (void *)v8);
  HIDWORD(v4) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::PhysicsScene::CollideData *>(
                  (void *)HIDWORD(v4),
                  *(_DWORD *)(v4 + 4),
                  (void *)(v10 + 4));
  if ( *(_DWORD *)v4 != 0 )
    operator delete(*(void **)v4);
  *(_DWORD *)v4 = v8;
  *(_DWORD *)(v4 + 4) = HIDWORD(v4);
  *(_DWORD *)(v4 + 8) = v8 + HIDWORD(v12);
  return v12;
}


//======================================================================
// std::vector<Ogre::RenderLines::LineVertex,std::allocator<Ogre::RenderLines::LineVertex>>::_M_check_len(unsigned int,char const*)const
// address: 0x00171820   size: 0x30 (48 bytes)
//======================================================================
unsigned int __fastcall std::vector<Ogre::RenderLines::LineVertex>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = -1431655765 * ((a1[1] - *a1) >> 3);
  if ( 178956970 - v3 < a2 )
    sub_3BD058(a3);
  v4 = -1431655765 * ((a1[1] - *a1) >> 3);
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0xAAAAAAA )
    return 178956970;
  return result;
}


//======================================================================
// std::vector<Ogre::RenderLines::LineVertex,std::allocator<Ogre::RenderLines::LineVertex>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::RenderLines::LineVertex*,std::vector<Ogre::RenderLines::LineVertex,std::allocator<Ogre::RenderLines::LineVertex>>>,Ogre::RenderLines::LineVertex const&)
// address: 0x001718C8   size: 0x116 (278 bytes)
//======================================================================
void __fastcall std::vector<Ogre::RenderLines::LineVertex>::_M_insert_aux(int a1, char *a2, _DWORD *a3)
{
  _DWORD *v4; // r3
  _DWORD *v7; // r6
  int v8; // r3
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r5
  int v13; // r5
  unsigned int v14; // r0
  unsigned int v15; // r6
  _DWORD *v16; // r3
  _DWORD *v17; // r0
  _DWORD *v18; // r5
  _DWORD *v19; // [sp+0h] [bp-24h]
  _DWORD *v20; // [sp+0h] [bp-24h]
  int v21; // [sp+4h] [bp-20h]
  _DWORD v22[7]; // [sp+8h] [bp-1Ch] BYREF

  v4 = *(_DWORD **)(a1 + 4);
  if ( v4 == *(_DWORD **)(a1 + 8) )
  {
    v14 = std::vector<Ogre::RenderLines::LineVertex>::_M_check_len((_DWORD *)a1, 1u, (int)"vector::_M_insert_aux");
    v15 = v14;
    v21 = -1431655765 * ((int)&a2[-*(_DWORD *)a1] >> 3);
    if ( v14 != 0 )
    {
      if ( v14 > 0xAAAAAAA )
        sub_3BCEB4(v14);
      v20 = (_DWORD *)operator new(24 * v14);
    }
    else
    {
      v20 = nullptr;
    }
    v16 = &v20[6 * v21];
    if ( v16 != nullptr )
    {
      *v16 = *a3;
      v16[1] = a3[1];
      v16[2] = a3[2];
      v16[3] = a3[3];
      v16[4] = a3[4];
      v16[5] = a3[5];
    }
    v17 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::RenderLines::LineVertex *,Ogre::RenderLines::LineVertex *>(
            *(char **)a1,
            a2,
            v20);
    v18 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::RenderLines::LineVertex *,Ogre::RenderLines::LineVertex *>(
            a2,
            *(char **)(a1 + 4),
            v17 + 6);
    if ( *(_DWORD *)a1 != 0 )
      operator delete(*(void **)a1);
    *(_DWORD *)(a1 + 4) = v18;
    *(_DWORD *)a1 = v20;
    *(_DWORD *)(a1 + 8) = &v20[6 * v15];
  }
  else
  {
    if ( v4 != nullptr )
    {
      *v4 = *(v4 - 6);
      v4[1] = *(v4 - 5);
      v4[2] = *(v4 - 4);
      v4[3] = *(v4 - 3);
      v4[4] = *(v4 - 2);
      v4[5] = *(v4 - 1);
    }
    v7 = *(_DWORD **)(a1 + 4);
    *(_DWORD *)(a1 + 4) = v7 + 6;
    v8 = a3[1];
    v9 = a3[2];
    v22[0] = *a3;
    v10 = a3[3];
    v22[1] = v8;
    v11 = a3[4];
    v12 = a3[5];
    v22[2] = v9;
    v22[3] = v10;
    v22[5] = v12;
    v13 = -1431655765 * (((char *)(v7 - 6) - a2) >> 3);
    v22[4] = v11;
    v19 = v7 - 6;
    while ( v13 > 0 )
    {
      v7 -= 6;
      v19 -= 6;
      --v13;
      Ogre::RenderLines::LineVertex::operator=(v7, v19);
    }
    Ogre::RenderLines::LineVertex::operator=(a2, v22);
  }
}


//======================================================================
// std::vector<Ogre::RenderLines::LineVertex,std::allocator<Ogre::RenderLines::LineVertex>>::push_back(Ogre::RenderLines::LineVertex const&)
// address: 0x001719EC   size: 0x36 (54 bytes)
//======================================================================
void __fastcall std::vector<Ogre::RenderLines::LineVertex>::push_back(int a1, _DWORD *a2)
{
  int v3; // r1

  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 == *(_DWORD *)(a1 + 8) )
  {
    std::vector<Ogre::RenderLines::LineVertex>::_M_insert_aux(a1, (char *)v3, a2);
  }
  else
  {
    if ( v3 != 0 )
    {
      *(_DWORD *)v3 = *a2;
      *(_DWORD *)(v3 + 4) = a2[1];
      *(_DWORD *)(v3 + 8) = a2[2];
      *(_DWORD *)(v3 + 12) = a2[3];
      *(_DWORD *)(v3 + 16) = a2[4];
      *(_DWORD *)(v3 + 20) = a2[5];
    }
    *(_DWORD *)(a1 + 4) += 24;
  }
}


//======================================================================
// std::vector<Ogre::RenderLines::LineVertex,std::allocator<Ogre::RenderLines::LineVertex>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::RenderLines::LineVertex*,std::vector<Ogre::RenderLines::LineVertex,std::allocator<Ogre::RenderLines::LineVertex>>>,unsigned int,Ogre::RenderLines::LineVertex const&)
// address: 0x00171C34   size: 0x162 (354 bytes)
//======================================================================
void __fastcall std::vector<Ogre::RenderLines::LineVertex>::_M_fill_insert(int a1, char *a2, unsigned int a3, int *a4)
{
  char *v7; // r5
  int v8; // r3
  int v9; // r1
  int v10; // r3
  int v11; // r2
  unsigned int v12; // r3
  char *v13; // r7
  int i; // r4
  char *v15; // r7
  _DWORD *v16; // r2
  unsigned int v17; // r0
  unsigned int v18; // r5
  _DWORD *v19; // r0
  _DWORD *v20; // r6
  unsigned int v21; // [sp+4h] [bp-28h]
  int v22; // [sp+4h] [bp-28h]
  _DWORD *v23; // [sp+8h] [bp-24h]
  int v25; // [sp+Ch] [bp-20h]
  _DWORD v26[7]; // [sp+10h] [bp-1Ch] BYREF

  if ( a3 != 0 )
  {
    v7 = *(char **)(a1 + 4);
    if ( -1431655765 * ((*(_DWORD *)(a1 + 8) - (int)v7) >> 3) < a3 )
    {
      v17 = std::vector<Ogre::RenderLines::LineVertex>::_M_check_len((_DWORD *)a1, a3, (int)"vector::_M_fill_insert");
      v18 = v17;
      v22 = -1431655765 * ((int)&a2[-*(_DWORD *)a1] >> 3);
      if ( v17 != 0 )
      {
        if ( v17 > 0xAAAAAAA )
          sub_3BCEB4(v17);
        v23 = (_DWORD *)operator new(24 * v17);
      }
      else
      {
        v23 = nullptr;
      }
      std::__uninitialized_fill_n<false>::__uninit_fill_n<Ogre::RenderLines::LineVertex *,unsigned int,Ogre::RenderLines::LineVertex>(
        &v23[6 * v22],
        a3,
        a4);
      v19 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::RenderLines::LineVertex *,Ogre::RenderLines::LineVertex *>(
              *(char **)a1,
              a2,
              v23);
      v20 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::RenderLines::LineVertex *,Ogre::RenderLines::LineVertex *>(
              a2,
              *(char **)(a1 + 4),
              &v19[6 * a3]);
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)(a1 + 4) = v20;
      *(_DWORD *)a1 = v23;
      *(_DWORD *)(a1 + 8) = &v23[6 * v18];
    }
    else
    {
      v8 = *a4;
      v26[1] = a4[1];
      v9 = a4[4];
      v26[0] = v8;
      v10 = a4[3];
      v26[4] = v9;
      v11 = a4[2];
      v26[3] = v10;
      v26[2] = v11;
      v12 = a3;
      v21 = -1431655765 * ((v7 - a2) >> 3);
      v26[5] = a4[5];
      if ( v21 <= a3 )
      {
        std::__uninitialized_fill_n<false>::__uninit_fill_n<Ogre::RenderLines::LineVertex *,unsigned int,Ogre::RenderLines::LineVertex>(
          v7,
          a3 - v21,
          v26);
        v16 = (_DWORD *)(*(_DWORD *)(a1 + 4) + 24 * (a3 - v21));
        *(_DWORD *)(a1 + 4) = v16;
        std::__uninitialized_copy<false>::__uninit_copy<Ogre::RenderLines::LineVertex *,Ogre::RenderLines::LineVertex *>(
          a2,
          v7,
          v16);
        *(_DWORD *)(a1 + 4) += 8 * ((v7 - a2) >> 3);
        while ( a2 != v7 )
        {
          Ogre::RenderLines::LineVertex::operator=(a2, v26);
          a2 += 24;
        }
      }
      else
      {
        v13 = &v7[-24 * a3];
        v25 = 24 * a3;
        std::__uninitialized_copy<false>::__uninit_copy<Ogre::RenderLines::LineVertex *,Ogre::RenderLines::LineVertex *>(
          &v7[-24 * v12],
          v7,
          v7);
        *(_DWORD *)(a1 + 4) += v25;
        for ( i = -1431655765 * ((v13 - a2) >> 3); i > 0; --i )
        {
          v7 -= 24;
          v13 -= 24;
          Ogre::RenderLines::LineVertex::operator=(v7, v13);
        }
        v15 = &a2[v25];
        while ( a2 != v15 )
        {
          Ogre::RenderLines::LineVertex::operator=(a2, v26);
          a2 += 24;
        }
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::RenderLines::LineVertex,std::allocator<Ogre::RenderLines::LineVertex>>::resize(unsigned int,Ogre::RenderLines::LineVertex)
// address: 0x00171DA4   size: 0x2C (44 bytes)
//======================================================================
void __fastcall std::vector<Ogre::RenderLines::LineVertex>::resize(int a1, unsigned int a2, int *a3)
{
  unsigned int v3; // r4

  v3 = -1431655765 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 3);
  if ( a2 <= v3 )
  {
    if ( a2 < v3 )
      *(_DWORD *)(a1 + 4) = *(_DWORD *)a1 + 24 * a2;
  }
  else
  {
    std::vector<Ogre::RenderLines::LineVertex>::_M_fill_insert(a1, *(char **)(a1 + 4), a2 - v3, a3);
  }
}


//======================================================================
// std::vector<Ogre::HardwarePixelBuffer *,std::allocator<Ogre::HardwarePixelBuffer *>>::~vector()
// address: 0x00171E16   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIPN4Ogre19HardwarePixelBufferESaIS2_EED1Ev'
void **__fastcall std::vector<Ogre::HardwarePixelBuffer *>::~vector(void **a1)
{
  void *v2; // r0

  v2 = *a1;
  if ( v2 != nullptr )
    operator delete(v2);
  return a1;
}


//======================================================================
// std::vector<Ogre::HardwarePixelBuffer *,std::allocator<Ogre::HardwarePixelBuffer *>>::erase(__gnu_cxx::__normal_iterator<Ogre::HardwarePixelBuffer **,std::vector<Ogre::HardwarePixelBuffer *,std::allocator<Ogre::HardwarePixelBuffer *>>>)
// address: 0x00171F98   size: 0x1E (30 bytes)
//======================================================================
char *__fastcall std::vector<Ogre::HardwarePixelBuffer *>::erase(int a1, char *a2)
{
  char *v4; // r0
  int v5; // r1

  v4 = a2 + 4;
  v5 = *(_DWORD *)(a1 + 4);
  if ( v4 != (char *)v5 )
    std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::HardwarePixelBuffer *>(v4, v5, a2);
  *(_DWORD *)(a1 + 4) -= 4;
  return a2;
}


//======================================================================
// std::vector<Ogre::HardwarePixelBuffer *,std::allocator<Ogre::HardwarePixelBuffer *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::HardwarePixelBuffer **,std::vector<Ogre::HardwarePixelBuffer *,std::allocator<Ogre::HardwarePixelBuffer *>>>,Ogre::HardwarePixelBuffer * const&)
// address: 0x00171FB8   size: 0xA6 (166 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::HardwarePixelBuffer *>::_M_insert_aux(__int64 a1, _DWORD *a2)
{
  _DWORD *v3; // r3
  __int64 v4; // r4
  int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r2
  int v8; // r6
  _DWORD *v9; // r3
  int v10; // r0
  __int64 v12; // [sp+0h] [bp-Ch]

  v12 = a1;
  v3 = *(_DWORD **)(a1 + 4);
  v4 = a1;
  if ( v3 != *(_DWORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
      *v3 = *(v3 - 1);
    LODWORD(a1) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v4 + 4) = a1 + 4;
    LODWORD(v4) = *a2;
    v5 = ((int)a1 - 4 - HIDWORD(a1)) >> 2;
    if ( v5 != 0 )
      j_memmove((void *)(a1 - 4 * v5), (const void *)HIDWORD(a1), 4 * v5);
    *(_DWORD *)HIDWORD(v4) = v4;
    return v12;
  }
  v6 = ((int)v3 - *(_DWORD *)a1) >> 2;
  if ( v6 == 0 )
  {
    v7 = 1;
    goto LABEL_11;
  }
  v7 = 2 * v6;
  v8 = 0x3FFFFFFF;
  if ( 2 * v6 >= v6 )
  {
LABEL_11:
    v8 = v7;
    if ( v7 > 0x3FFFFFFF )
      v8 = 0x3FFFFFFF;
  }
  LODWORD(v12) = (HIDWORD(a1) - *(_DWORD *)a1) >> 2;
  HIDWORD(v12) = 4 * v8;
  if ( v8 != 0 )
    v8 = operator new(4 * v8);
  v9 = (_DWORD *)(v8 + 4 * v12);
  if ( v9 != nullptr )
    *v9 = *a2;
  v10 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::HardwarePixelBuffer *>(
          *(void **)v4,
          SHIDWORD(v4),
          (void *)v8);
  HIDWORD(v4) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::HardwarePixelBuffer *>(
                  (void *)HIDWORD(v4),
                  *(_DWORD *)(v4 + 4),
                  (void *)(v10 + 4));
  if ( *(_DWORD *)v4 != 0 )
    operator delete(*(void **)v4);
  *(_DWORD *)v4 = v8;
  *(_DWORD *)(v4 + 4) = HIDWORD(v4);
  *(_DWORD *)(v4 + 8) = v8 + HIDWORD(v12);
  return v12;
}


//======================================================================
// std::vector<Ogre::HardwarePixelBuffer *,std::allocator<Ogre::HardwarePixelBuffer *>>::push_back(Ogre::HardwarePixelBuffer * const&)
// address: 0x00172064   size: 0x22 (34 bytes)
//======================================================================
int __fastcall std::vector<Ogre::HardwarePixelBuffer *>::push_back(__int64 a1)
{
  _DWORD *v1; // r2

  v1 = (_DWORD *)HIDWORD(a1);
  HIDWORD(a1) = *(_DWORD *)(a1 + 4);
  if ( HIDWORD(a1) == *(_DWORD *)(a1 + 8) )
  {
    LODWORD(a1) = std::vector<Ogre::HardwarePixelBuffer *>::_M_insert_aux(a1, v1);
  }
  else
  {
    if ( HIDWORD(a1) != 0 )
      *(_DWORD *)HIDWORD(a1) = *v1;
    *(_DWORD *)(a1 + 4) += 4;
  }
  return a1;
}


//======================================================================
// std::vector<Ogre::Particle,std::allocator<Ogre::Particle>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::Particle*,std::vector<Ogre::Particle,std::allocator<Ogre::Particle>>>,Ogre::Particle const&)
// address: 0x001755B0   size: 0x10E (270 bytes)
//======================================================================
void __fastcall std::vector<Ogre::Particle>::_M_insert_aux(int *a1, int a2, int a3)
{
  int v5; // r0
  int v6; // r0
  int i; // r6
  int v8; // r4
  unsigned int v9; // r0
  unsigned int v10; // r3
  int v11; // r5
  int v12; // r6
  int v13; // r0
  int v14; // r0
  int v15; // r7
  int v16; // [sp+0h] [bp-6Ch]
  int j; // [sp+0h] [bp-6Ch]
  int v19; // [sp+4h] [bp-68h]
  _BYTE v20[100]; // [sp+8h] [bp-64h] BYREF

  v5 = a1[1];
  if ( v5 != a1[2] )
  {
    if ( v5 != 0 )
      Ogre::Particle::Particle(v5, v5 - 96);
    a1[1] += 96;
    Ogre::Particle::Particle((int)v20, a3);
    v6 = a1[1] - 192;
    for ( i = -1431655765 * ((v6 - a2) >> 5); i > 0; --i )
    {
      v8 = v6 - 96;
      Ogre::Particle::operator=(v6, v6 - 96);
      v6 = v8;
    }
    Ogre::Particle::operator=(a2, (int)v20);
    return;
  }
  v9 = -1431655765 * ((v5 - *a1) >> 5);
  if ( v9 == 0 )
  {
    v10 = 1;
    goto LABEL_12;
  }
  v10 = 2 * v9;
  v11 = 44739242;
  if ( 2 * v9 >= v9 )
  {
LABEL_12:
    v11 = v10;
    if ( v10 > 0x2AAAAAA )
      v11 = 44739242;
  }
  v16 = -1431655765 * ((a2 - *a1) >> 5);
  if ( v11 != 0 )
    v12 = operator new(96 * v11);
  else
    v12 = 0;
  v13 = v12 + 96 * v16;
  if ( v13 != 0 )
    Ogre::Particle::Particle(v13, a3);
  v14 = v12;
  for ( j = *a1; ; j += 96 )
  {
    v15 = v14 + 96;
    if ( j == a2 )
      break;
    if ( v14 != 0 )
      Ogre::Particle::Particle(v14, j);
    v14 = v15;
  }
  v19 = a1[1];
  while ( j != v19 )
  {
    if ( v15 != 0 )
      Ogre::Particle::Particle(v15, j);
    v15 += 96;
    j += 96;
  }
  if ( *a1 != 0 )
    operator delete((void *)*a1);
  *a1 = v12;
  a1[1] = v15;
  a1[2] = v12 + 96 * v11;
}


//======================================================================
// std::vector<Ogre::Vector3,std::allocator<Ogre::Vector3>>::operator=(std::vector<Ogre::Vector3,std::allocator<Ogre::Vector3>> const&)
// address: 0x00179F3C   size: 0x100 (256 bytes)
//======================================================================
int __fastcall std::vector<Ogre::Vector3>::operator=(int a1, int a2)
{
  _DWORD *v3; // r3
  _DWORD *v4; // r4
  unsigned int v5; // r6
  unsigned int v6; // r0
  _DWORD *v7; // r7
  _DWORD *v8; // r3
  int v9; // r7
  int v10; // r0
  int v11; // r7
  _DWORD *v12; // r3
  _DWORD *v13; // r7
  _DWORD *v14; // r1
  _DWORD *i; // r2
  int v17; // [sp+0h] [bp-Ch]
  _DWORD *v18; // [sp+4h] [bp-8h]

  if ( a2 != a1 )
  {
    v3 = *(_DWORD **)a1;
    v18 = *(_DWORD **)(a2 + 4);
    v4 = *(_DWORD **)a2;
    v5 = -1431655765 * (((int)v18 - *(_DWORD *)a2) >> 2);
    v6 = -1431655765 * ((*(_DWORD *)(a1 + 8) - *(_DWORD *)a1) >> 2);
    v17 = v5;
    if ( v5 <= v6 )
    {
      if ( -1431655765 * ((*(_DWORD *)(a1 + 4) - (int)v3) >> 2) < v5 )
      {
        v10 = -1431655765 * ((4 * ((*(_DWORD *)(a1 + 4) - (int)v3) >> 2)) >> 2);
        while ( v10 > 0 )
        {
          --v10;
          *v3 = *v4;
          v3[1] = v4[1];
          v11 = v4[2];
          v4 += 3;
          v3[2] = v11;
          v3 += 3;
        }
        v12 = *(_DWORD **)(a1 + 4);
        v13 = *(_DWORD **)a2;
        v14 = *(_DWORD **)(a2 + 4);
        for ( i = &v13[((int)v12 - *(_DWORD *)a1) >> 2]; i != v14; i += 3 )
        {
          if ( v12 != nullptr )
          {
            *v12 = *i;
            v12[1] = i[1];
            v12[2] = i[2];
          }
          v12 += 3;
        }
      }
      else
      {
        while ( v17 > 0 )
        {
          *v3 = *v4;
          v3[1] = v4[1];
          v9 = v4[2];
          v4 += 3;
          v3[2] = v9;
          v3 += 3;
          --v17;
        }
      }
    }
    else
    {
      if ( v5 != 0 )
      {
        if ( v5 > 0x15555555 )
          sub_3BCEB4(v6);
        v7 = (_DWORD *)operator new(4 * (((int)v18 - *(_DWORD *)a2) >> 2));
      }
      else
      {
        v7 = nullptr;
      }
      v8 = v7;
      while ( v4 != v18 )
      {
        if ( v8 != nullptr )
        {
          *v8 = *v4;
          v8[1] = v4[1];
          v8[2] = v4[2];
        }
        v4 += 3;
        v8 += 3;
      }
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)a1 = v7;
      *(_DWORD *)(a1 + 8) = &v7[3 * v5];
    }
    *(_DWORD *)(a1 + 4) = *(_DWORD *)a1 + 12 * v5;
  }
  return a1;
}


//======================================================================
// std::vector<Ogre::Disturb,std::allocator<Ogre::Disturb>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::Disturb*,std::vector<Ogre::Disturb,std::allocator<Ogre::Disturb>>>,unsigned int,Ogre::Disturb const&)
// address: 0x0017A064   size: 0x252 (594 bytes)
//======================================================================
void __fastcall std::vector<Ogre::Disturb>::_M_fill_insert(int *a1, int a2, unsigned int a3, int a4)
{
  int v6; // r0
  int v7; // r7
  int v8; // r1
  int v9; // r2
  unsigned int v10; // r5
  int v11; // r5
  int v12; // r7
  int v13; // r3
  int v14; // r6
  int v15; // r2
  int v16; // r3
  int v17; // r4
  int v18; // r5
  int v19; // r6
  int v20; // r7
  char v21; // r12
  unsigned int v22; // r6
  int v23; // r7
  int v24; // r6
  int v25; // r7
  int v26; // r0
  int v27; // r6
  char v28; // r7
  int v29; // r3
  char v30; // r12
  int v31; // r4
  int v32; // r7
  int v33; // r5
  unsigned int v34; // r3
  unsigned int v35; // r2
  int v36; // r7
  unsigned int v37; // r6
  int v38; // r7
  int v39; // r5
  int v40; // r6
  int v41; // r7
  int v42; // r6
  unsigned int v43; // [sp+0h] [bp-2Ch]
  int v44; // [sp+0h] [bp-2Ch]
  int v45; // [sp+0h] [bp-2Ch]
  unsigned int v46; // [sp+0h] [bp-2Ch]
  int v47; // [sp+4h] [bp-28h]
  int v48; // [sp+4h] [bp-28h]
  int v49; // [sp+8h] [bp-24h]
  int v50; // [sp+8h] [bp-24h]
  char v52[4]; // [sp+10h] [bp-1Ch] BYREF
  int v53; // [sp+14h] [bp-18h]
  int v54; // [sp+18h] [bp-14h]
  int v55; // [sp+1Ch] [bp-10h]
  int v56; // [sp+20h] [bp-Ch]
  int v57; // [sp+24h] [bp-8h]

  v43 = a3;
  if ( a3 != 0 )
  {
    v47 = a1[1];
    if ( -1431655765 * ((a1[2] - v47) >> 3) < a3 )
    {
      v34 = -1431655765 * ((v47 - *a1) >> 3);
      if ( 178956970 - v34 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      if ( a3 < v34 )
        a3 = -1431655765 * ((v47 - *a1) >> 3);
      v35 = a3 - 1431655765 * ((v47 - *a1) >> 3);
      if ( v35 < v34 )
      {
        v48 = 178956970;
      }
      else
      {
        v48 = v35;
        if ( v35 > 0xAAAAAAA )
          v48 = 178956970;
      }
      v36 = -1431655765 * ((a2 - *a1) >> 3);
      if ( v48 != 0 )
        v50 = operator new(24 * v48);
      else
        v50 = 0;
      v37 = v43;
      v38 = v50 + 24 * v36;
      do
      {
        --v37;
        std::_Construct<Ogre::Disturb,Ogre::Disturb>(v38, a4);
        v38 += 24;
      }
      while ( v37 != 0 );
      v39 = *a1;
      v40 = v50;
      while ( v39 != a2 )
      {
        std::_Construct<Ogre::Disturb,Ogre::Disturb>(v40, v39);
        v39 += 24;
        v40 += 24;
      }
      v41 = a1[1];
      v42 = v40 + 24 * v43;
      while ( v39 != v41 )
      {
        std::_Construct<Ogre::Disturb,Ogre::Disturb>(v42, v39);
        v42 += 24;
        v39 += 24;
      }
      if ( *a1 != 0 )
        operator delete((void *)*a1);
      a1[1] = v42;
      *a1 = v50;
      a1[2] = v50 + 24 * v48;
    }
    else
    {
      v6 = *(_DWORD *)(a4 + 4);
      v7 = *(_DWORD *)(a4 + 16);
      v8 = *(_DWORD *)(a4 + 8);
      v52[0] = *(_BYTE *)a4;
      v53 = v6;
      v9 = *(_DWORD *)(a4 + 12);
      v56 = v7;
      v57 = *(_DWORD *)(a4 + 20);
      v54 = v8;
      v10 = -1431655765 * ((v47 - a2) >> 3);
      v55 = v9;
      if ( v10 <= v43 )
      {
        v46 = v43 - v10;
        v22 = v46;
        v23 = v47;
        while ( v22 != 0 )
        {
          std::_Construct<Ogre::Disturb,Ogre::Disturb>(v23, (int)v52);
          --v22;
          v23 += 24;
        }
        v24 = a2;
        v25 = a1[1] + 24 * v46;
        a1[1] = v25;
        while ( v24 != v47 )
        {
          std::_Construct<Ogre::Disturb,Ogre::Disturb>(v25, v24);
          v25 += 24;
          v24 += 24;
        }
        v26 = v54;
        v27 = v57;
        v28 = v52[0];
        v29 = a2;
        a1[1] += 8 * ((v47 - a2) >> 3);
        v30 = v28;
        v31 = v55;
        v32 = v53;
        v33 = v56;
        while ( v29 != v47 )
        {
          *(_BYTE *)v29 = v30;
          *(_DWORD *)(v29 + 4) = v32;
          *(_DWORD *)(v29 + 8) = v26;
          *(_DWORD *)(v29 + 12) = v31;
          *(_DWORD *)(v29 + 16) = v33;
          *(_DWORD *)(v29 + 20) = v27;
          v29 += 24;
        }
      }
      else
      {
        v49 = 24 * v43;
        v44 = v47 - 24 * v43;
        v11 = v44;
        v12 = v47;
        while ( v11 != v47 )
        {
          std::_Construct<Ogre::Disturb,Ogre::Disturb>(v12, v11);
          v11 += 24;
          v12 += 24;
        }
        a1[1] += v49;
        v13 = v47;
        v14 = -1431655765 * ((v44 - a2) >> 3);
        v15 = v44;
        while ( v14 > 0 )
        {
          v15 -= 24;
          v13 -= 24;
          *(_BYTE *)v13 = *(_BYTE *)v15;
          --v14;
          *(_DWORD *)(v13 + 4) = *(_DWORD *)(v15 + 4);
          *(_DWORD *)(v13 + 8) = *(_DWORD *)(v15 + 8);
          *(_DWORD *)(v13 + 12) = *(_DWORD *)(v15 + 12);
          *(_DWORD *)(v13 + 16) = *(_DWORD *)(v15 + 16);
          *(_DWORD *)(v13 + 20) = *(_DWORD *)(v15 + 20);
        }
        v16 = a2;
        v17 = v54;
        v18 = v55;
        v19 = v56;
        v20 = v57;
        v21 = v52[0];
        v45 = v53;
        while ( v16 != a2 + v49 )
        {
          *(_BYTE *)v16 = v21;
          *(_DWORD *)(v16 + 4) = v45;
          *(_DWORD *)(v16 + 8) = v17;
          *(_DWORD *)(v16 + 12) = v18;
          *(_DWORD *)(v16 + 16) = v19;
          *(_DWORD *)(v16 + 20) = v20;
          v16 += 24;
        }
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::PlantNode *,std::allocator<Ogre::PlantNode *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::PlantNode **,std::vector<Ogre::PlantNode *,std::allocator<Ogre::PlantNode *>>>,Ogre::PlantNode * const&)
// address: 0x0017A440   size: 0xA6 (166 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::PlantNode *>::_M_insert_aux(__int64 a1, _DWORD *a2)
{
  _DWORD *v3; // r3
  __int64 v4; // r4
  int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r2
  int v8; // r6
  _DWORD *v9; // r3
  int v10; // r0
  __int64 v12; // [sp+0h] [bp-Ch]

  v12 = a1;
  v3 = *(_DWORD **)(a1 + 4);
  v4 = a1;
  if ( v3 != *(_DWORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
      *v3 = *(v3 - 1);
    LODWORD(a1) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v4 + 4) = a1 + 4;
    LODWORD(v4) = *a2;
    v5 = ((int)a1 - 4 - HIDWORD(a1)) >> 2;
    if ( v5 != 0 )
      j_memmove((void *)(a1 - 4 * v5), (const void *)HIDWORD(a1), 4 * v5);
    *(_DWORD *)HIDWORD(v4) = v4;
    return v12;
  }
  v6 = ((int)v3 - *(_DWORD *)a1) >> 2;
  if ( v6 == 0 )
  {
    v7 = 1;
    goto LABEL_11;
  }
  v7 = 2 * v6;
  v8 = 0x3FFFFFFF;
  if ( 2 * v6 >= v6 )
  {
LABEL_11:
    v8 = v7;
    if ( v7 > 0x3FFFFFFF )
      v8 = 0x3FFFFFFF;
  }
  LODWORD(v12) = (HIDWORD(a1) - *(_DWORD *)a1) >> 2;
  HIDWORD(v12) = 4 * v8;
  if ( v8 != 0 )
    v8 = operator new(4 * v8);
  v9 = (_DWORD *)(v8 + 4 * v12);
  if ( v9 != nullptr )
    *v9 = *a2;
  v10 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::PlantNode *>(
          *(void **)v4,
          SHIDWORD(v4),
          (void *)v8);
  HIDWORD(v4) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::PlantNode *>(
                  (void *)HIDWORD(v4),
                  *(_DWORD *)(v4 + 4),
                  (void *)(v10 + 4));
  if ( *(_DWORD *)v4 != 0 )
    operator delete(*(void **)v4);
  *(_DWORD *)v4 = v8;
  *(_DWORD *)(v4 + 4) = HIDWORD(v4);
  *(_DWORD *)(v4 + 8) = v8 + HIDWORD(v12);
  return v12;
}


//======================================================================
// std::vector<Ogre::ObjectMotion *,std::allocator<Ogre::ObjectMotion *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::ObjectMotion **,std::vector<Ogre::ObjectMotion *,std::allocator<Ogre::ObjectMotion *>>>,Ogre::ObjectMotion * const&)
// address: 0x0017DA3C   size: 0xA6 (166 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::ObjectMotion *>::_M_insert_aux(__int64 a1, _DWORD *a2)
{
  _DWORD *v3; // r3
  __int64 v4; // r4
  int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r2
  int v8; // r6
  _DWORD *v9; // r3
  int v10; // r0
  __int64 v12; // [sp+0h] [bp-Ch]

  v12 = a1;
  v3 = *(_DWORD **)(a1 + 4);
  v4 = a1;
  if ( v3 != *(_DWORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
      *v3 = *(v3 - 1);
    LODWORD(a1) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v4 + 4) = a1 + 4;
    LODWORD(v4) = *a2;
    v5 = ((int)a1 - 4 - HIDWORD(a1)) >> 2;
    if ( v5 != 0 )
      j_memmove((void *)(a1 - 4 * v5), (const void *)HIDWORD(a1), 4 * v5);
    *(_DWORD *)HIDWORD(v4) = v4;
    return v12;
  }
  v6 = ((int)v3 - *(_DWORD *)a1) >> 2;
  if ( v6 == 0 )
  {
    v7 = 1;
    goto LABEL_11;
  }
  v7 = 2 * v6;
  v8 = 0x3FFFFFFF;
  if ( 2 * v6 >= v6 )
  {
LABEL_11:
    v8 = v7;
    if ( v7 > 0x3FFFFFFF )
      v8 = 0x3FFFFFFF;
  }
  LODWORD(v12) = (HIDWORD(a1) - *(_DWORD *)a1) >> 2;
  HIDWORD(v12) = 4 * v8;
  if ( v8 != 0 )
    v8 = operator new(4 * v8);
  v9 = (_DWORD *)(v8 + 4 * v12);
  if ( v9 != nullptr )
    *v9 = *a2;
  v10 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ObjectMotion *>(
          *(void **)v4,
          SHIDWORD(v4),
          (void *)v8);
  HIDWORD(v4) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ObjectMotion *>(
                  (void *)HIDWORD(v4),
                  *(_DWORD *)(v4 + 4),
                  (void *)(v10 + 4));
  if ( *(_DWORD *)v4 != 0 )
    operator delete(*(void **)v4);
  *(_DWORD *)v4 = v8;
  *(_DWORD *)(v4 + 4) = HIDWORD(v4);
  *(_DWORD *)(v4 + 8) = v8 + HIDWORD(v12);
  return v12;
}


//======================================================================
// std::vector<unsigned short,std::allocator<unsigned short>>::_M_insert_aux(__gnu_cxx::__normal_iterator<unsigned short *,std::vector<unsigned short,std::allocator<unsigned short>>>,unsigned short const&)
// address: 0x00180460   size: 0xA6 (166 bytes)
//======================================================================
__int64 __fastcall std::vector<unsigned short>::_M_insert_aux(__int64 a1, _WORD *a2)
{
  _WORD *v3; // r3
  __int64 v4; // r4
  int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r2
  int v8; // r6
  _WORD *v9; // r3
  int v10; // r0
  __int64 v12; // [sp+0h] [bp-Ch]

  v12 = a1;
  v3 = *(_WORD **)(a1 + 4);
  v4 = a1;
  if ( v3 != *(_WORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
      *v3 = *(v3 - 1);
    LODWORD(a1) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v4 + 4) = a1 + 2;
    LOWORD(v4) = *a2;
    v5 = ((int)a1 - 2 - HIDWORD(a1)) >> 1;
    if ( v5 != 0 )
      j_memmove((void *)(a1 - 2 * v5), (const void *)HIDWORD(a1), 2 * v5);
    *(_WORD *)HIDWORD(v4) = v4;
    return v12;
  }
  v6 = ((int)v3 - *(_DWORD *)a1) >> 1;
  if ( v6 == 0 )
  {
    v7 = 1;
    goto LABEL_11;
  }
  v7 = 2 * v6;
  v8 = 0x7FFFFFFF;
  if ( 2 * v6 >= v6 )
  {
LABEL_11:
    v8 = v7;
    if ( v7 > 0x7FFFFFFF )
      v8 = 0x7FFFFFFF;
  }
  LODWORD(v12) = (HIDWORD(a1) - *(_DWORD *)a1) >> 1;
  HIDWORD(v12) = 2 * v8;
  if ( v8 != 0 )
    v8 = operator new(2 * v8);
  v9 = (_WORD *)(v8 + 2 * v12);
  if ( v9 != nullptr )
    *v9 = *a2;
  v10 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<unsigned short>(
          *(void **)v4,
          SHIDWORD(v4),
          (void *)v8);
  HIDWORD(v4) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<unsigned short>(
                  (void *)HIDWORD(v4),
                  *(_DWORD *)(v4 + 4),
                  (void *)(v10 + 2));
  if ( *(_DWORD *)v4 != 0 )
    operator delete(*(void **)v4);
  *(_DWORD *)v4 = v8;
  *(_DWORD *)(v4 + 4) = HIDWORD(v4);
  *(_DWORD *)(v4 + 8) = v8 + HIDWORD(v12);
  return v12;
}


//======================================================================
// std::vector<unsigned short,std::allocator<unsigned short>>::push_back(unsigned short const&)
// address: 0x0018050C   size: 0x22 (34 bytes)
//======================================================================
int __fastcall std::vector<unsigned short>::push_back(__int64 a1)
{
  _WORD *v1; // r2

  v1 = (_WORD *)HIDWORD(a1);
  HIDWORD(a1) = *(_DWORD *)(a1 + 4);
  if ( HIDWORD(a1) == *(_DWORD *)(a1 + 8) )
  {
    LODWORD(a1) = std::vector<unsigned short>::_M_insert_aux(a1, v1);
  }
  else
  {
    if ( HIDWORD(a1) != 0 )
      *(_WORD *)HIDWORD(a1) = *v1;
    *(_DWORD *)(a1 + 4) += 2;
  }
  return a1;
}


//======================================================================
// std::vector<Ogre::EntityMotionData *,std::allocator<Ogre::EntityMotionData *>>::_M_check_len(unsigned int,char const*)const
// address: 0x00180E48   size: 0x2C (44 bytes)
//======================================================================
unsigned int __fastcall std::vector<Ogre::EntityMotionData *>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = (a1[1] - *a1) >> 2;
  if ( 0x3FFFFFFF - v3 < a2 )
    sub_3BD058(a3);
  v4 = (a1[1] - *a1) >> 2;
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0x3FFFFFFF )
    return 0x3FFFFFFF;
  return result;
}


//======================================================================
// std::vector<Ogre::EntityMotionData *,std::allocator<Ogre::EntityMotionData *>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::EntityMotionData **,std::vector<Ogre::EntityMotionData *,std::allocator<Ogre::EntityMotionData *>>>,unsigned int,Ogre::EntityMotionData * const&)
// address: 0x00180E98   size: 0x100 (256 bytes)
//======================================================================
void __fastcall std::vector<Ogre::EntityMotionData *>::_M_fill_insert(void **a1, char *a2, unsigned int a3, void **a4)
{
  char *v5; // r5
  char *v7; // r7
  int v8; // r6
  char *v9; // r6
  char *v10; // r2
  unsigned int v11; // r0
  unsigned int v12; // r7
  char *v13; // r2
  void *v14; // r1
  unsigned int v15; // r3
  int v16; // r0
  int v17; // r5
  unsigned int v19; // [sp+4h] [bp-10h]
  void *v20; // [sp+8h] [bp-Ch]
  char *v21; // [sp+8h] [bp-Ch]
  int v22; // [sp+Ch] [bp-8h]

  v5 = a2;
  if ( a3 != 0 )
  {
    v7 = (char *)a1[1];
    if ( ((_BYTE *)a1[2] - v7) >> 2 < a3 )
    {
      v11 = std::vector<Ogre::EntityMotionData *>::_M_check_len(a1, a3, (int)"vector::_M_fill_insert");
      v12 = v11;
      v22 = (v5 - (_BYTE *)*a1) >> 2;
      if ( v11 != 0 )
      {
        if ( v11 > 0x3FFFFFFF )
          sub_3BCEB4(v11);
        v21 = (char *)operator new(4 * v11);
      }
      else
      {
        v21 = nullptr;
      }
      v13 = &v21[4 * v22];
      v14 = *a4;
      v15 = a3;
      do
      {
        --v15;
        *(_DWORD *)v13 = v14;
        v13 += 4;
      }
      while ( v15 != 0 );
      v16 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::EntityMotionData *>(
              *a1,
              (int)v5,
              v21);
      v17 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::EntityMotionData *>(
              v5,
              (int)a1[1],
              (void *)(v16 + 4 * a3));
      sub_180D54(*a1);
      a1[1] = (void *)v17;
      *a1 = v21;
      a1[2] = &v21[4 * v12];
    }
    else
    {
      v19 = (v7 - a2) >> 2;
      v20 = *a4;
      if ( v19 <= a3 )
      {
        memset32(v7, (int)v20, a3 - v19);
        v10 = (char *)a1[1] + 4 * (a3 - v19);
        a1[1] = v10;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::EntityMotionData *>(
          a2,
          (int)v7,
          v10);
        a1[1] = (char *)a1[1] + 4 * v19;
        while ( v5 != v7 )
        {
          *(_DWORD *)v5 = v20;
          v5 += 4;
        }
      }
      else
      {
        v8 = 4 * a3;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::EntityMotionData *>(
          &v7[-4 * a3],
          (int)v7,
          v7);
        a1[1] = (char *)a1[1] + v8;
        std::copy_backward<Ogre::EntityMotionData **,Ogre::EntityMotionData **>(v5, (int)&v7[-v8], (int)v7);
        v9 = &v5[v8];
        while ( v5 != v9 )
        {
          *(_DWORD *)v5 = v20;
          v5 += 4;
        }
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::EffectObject *,std::allocator<Ogre::EffectObject *>>::push_back(Ogre::EffectObject * const&)
// address: 0x001828AA   size: 0x22 (34 bytes)
//======================================================================
int __fastcall std::vector<Ogre::EffectObject *>::push_back(__int64 a1)
{
  _DWORD *v1; // r2

  v1 = (_DWORD *)HIDWORD(a1);
  HIDWORD(a1) = *(_DWORD *)(a1 + 4);
  if ( HIDWORD(a1) == *(_DWORD *)(a1 + 8) )
  {
    LODWORD(a1) = std::vector<Ogre::EffectObject *>::_M_insert_aux(a1, v1);
  }
  else
  {
    if ( HIDWORD(a1) != 0 )
      *(_DWORD *)HIDWORD(a1) = *v1;
    *(_DWORD *)(a1 + 4) += 4;
  }
  return a1;
}


//======================================================================
// std::vector<Ogre::Footprints::OnePrint,std::allocator<Ogre::Footprints::OnePrint>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::Footprints::OnePrint*,std::vector<Ogre::Footprints::OnePrint,std::allocator<Ogre::Footprints::OnePrint>>>,Ogre::Footprints::OnePrint const&)
// address: 0x00183EDC   size: 0xFC (252 bytes)
//======================================================================
void __fastcall std::vector<Ogre::Footprints::OnePrint>::_M_insert_aux(int a1, char *a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  char *v6; // r0
  int i; // r4
  char *v8; // r6
  unsigned int v9; // r0
  unsigned int v10; // r3
  int v11; // r5
  _DWORD *v12; // r6
  _DWORD *v13; // r0
  _DWORD *v14; // r0
  _DWORD *v15; // r7
  int v16; // [sp+0h] [bp-4Ch]
  char *j; // [sp+0h] [bp-4Ch]
  char *v19; // [sp+4h] [bp-48h]
  _DWORD v20[17]; // [sp+8h] [bp-44h] BYREF

  v5 = *(_DWORD **)(a1 + 4);
  if ( v5 != *(_DWORD **)(a1 + 8) )
  {
    if ( v5 != nullptr )
      Ogre::Footprints::OnePrint::OnePrint(v5, v5 - 16);
    *(_DWORD *)(a1 + 4) += 64;
    Ogre::Footprints::OnePrint::OnePrint(v20, a3);
    v6 = (char *)(*(_DWORD *)(a1 + 4) - 128);
    for ( i = (v6 - a2) >> 6; i > 0; --i )
    {
      v8 = v6 - 64;
      Ogre::Footprints::OnePrint::operator=(v6, (_DWORD *)v6 - 16);
      v6 = v8;
    }
    Ogre::Footprints::OnePrint::operator=(a2, v20);
    return;
  }
  v9 = ((int)v5 - *(_DWORD *)a1) >> 6;
  if ( v9 == 0 )
  {
    v10 = 1;
    goto LABEL_12;
  }
  v10 = 2 * v9;
  v11 = 0x3FFFFFF;
  if ( 2 * v9 >= v9 )
  {
LABEL_12:
    v11 = v10;
    if ( v10 > 0x3FFFFFF )
      v11 = 0x3FFFFFF;
  }
  v16 = (int)&a2[-*(_DWORD *)a1] >> 6;
  if ( v11 != 0 )
    v12 = (_DWORD *)operator new(v11 << 6);
  else
    v12 = nullptr;
  v13 = &v12[16 * v16];
  if ( v13 != nullptr )
    Ogre::Footprints::OnePrint::OnePrint(v13, a3);
  v14 = v12;
  for ( j = *(char **)a1; ; j += 64 )
  {
    v15 = v14 + 16;
    if ( j == a2 )
      break;
    if ( v14 != nullptr )
      Ogre::Footprints::OnePrint::OnePrint(v14, j);
    v14 = v15;
  }
  v19 = *(char **)(a1 + 4);
  while ( j != v19 )
  {
    if ( v15 != nullptr )
      Ogre::Footprints::OnePrint::OnePrint(v15, j);
    v15 += 16;
    j += 64;
  }
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v12;
  *(_DWORD *)(a1 + 4) = v15;
  *(_DWORD *)(a1 + 8) = &v12[16 * v11];
}


//======================================================================
// std::vector<Ogre::SceneDebugger::stLine,std::allocator<Ogre::SceneDebugger::stLine>>::_M_check_len(unsigned int,char const*)const
// address: 0x001844D0   size: 0x30 (48 bytes)
//======================================================================
unsigned int __fastcall std::vector<Ogre::SceneDebugger::stLine>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = -1227133513 * ((a1[1] - *a1) >> 2);
  if ( 153391689 - v3 < a2 )
    sub_3BD058(a3);
  v4 = -1227133513 * ((a1[1] - *a1) >> 2);
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0x9249249 )
    return 153391689;
  return result;
}


//======================================================================
// std::vector<Ogre::SceneDebugger::stTriangle,std::allocator<Ogre::SceneDebugger::stTriangle>>::_M_check_len(unsigned int,char const*)const
// address: 0x00184508   size: 0x30 (48 bytes)
//======================================================================
unsigned int __fastcall std::vector<Ogre::SceneDebugger::stTriangle>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = -858993459 * ((a1[1] - *a1) >> 3);
  if ( 107374182 - v3 < a2 )
    sub_3BD058(a3);
  v4 = -858993459 * ((a1[1] - *a1) >> 3);
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0x6666666 )
    return 107374182;
  return result;
}


//======================================================================
// std::vector<Ogre::SceneDebugger::stLine,std::allocator<Ogre::SceneDebugger::stLine>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::SceneDebugger::stLine*,std::vector<Ogre::SceneDebugger::stLine,std::allocator<Ogre::SceneDebugger::stLine>>>,Ogre::SceneDebugger::stLine const&)
// address: 0x00184564   size: 0xE8 (232 bytes)
//======================================================================
void __fastcall std::vector<Ogre::SceneDebugger::stLine>::_M_insert_aux(void **a1, char *a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  char *v6; // r0
  int i; // r4
  char *v8; // r7
  int v9; // r2
  int v10; // r3
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r6
  unsigned int v15; // r0
  unsigned int v16; // r7
  _DWORD *v17; // r6
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  _DWORD *v20; // r5
  int v22; // [sp+4h] [bp-28h]
  _DWORD v23[8]; // [sp+Ch] [bp-20h] BYREF

  v5 = a1[1];
  if ( v5 == a1[2] )
  {
    v15 = std::vector<Ogre::SceneDebugger::stLine>::_M_check_len(a1, 1u, (int)"vector::_M_insert_aux");
    v16 = v15;
    v22 = -1227133513 * ((a2 - (_BYTE *)*a1) >> 2);
    if ( v15 != 0 )
    {
      if ( v15 > 0x9249249 )
        sub_3BCEB4(v15);
      v17 = (_DWORD *)operator new(28 * v15);
    }
    else
    {
      v17 = nullptr;
    }
    v18 = &v17[7 * v22];
    if ( v18 != nullptr )
      Ogre::SceneDebugger::stLine::stLine(v18, a3);
    v19 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::SceneDebugger::stLine *,Ogre::SceneDebugger::stLine *>(
            *a1,
            a2,
            v17);
    v20 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::SceneDebugger::stLine *,Ogre::SceneDebugger::stLine *>(
            a2,
            a1[1],
            v19 + 7);
    if ( *a1 != nullptr )
      operator delete(*a1);
    *a1 = v17;
    a1[1] = v20;
    a1[2] = &v17[7 * v16];
  }
  else
  {
    if ( v5 != nullptr )
      Ogre::SceneDebugger::stLine::stLine(v5, v5 - 7);
    a1[1] = (char *)a1[1] + 28;
    Ogre::SceneDebugger::stLine::stLine(v23, a3);
    v6 = (char *)a1[1] - 56;
    for ( i = -1227133513 * ((v6 - a2) >> 2); i > 0; --i )
    {
      v8 = v6 - 28;
      Ogre::SceneDebugger::stLine::operator=(v6, (_DWORD *)v6 - 7);
      v6 = v8;
    }
    v9 = v23[2];
    v10 = v23[0];
    *((_DWORD *)a2 + 1) = v23[1];
    *((_DWORD *)a2 + 2) = v9;
    v11 = v23[4];
    v12 = v23[5];
    *(_DWORD *)a2 = v10;
    v13 = v23[3];
    v14 = v23[6];
    *((_DWORD *)a2 + 4) = v11;
    *((_DWORD *)a2 + 3) = v13;
    *((_DWORD *)a2 + 5) = v12;
    *((_DWORD *)a2 + 6) = v14;
  }
}


//======================================================================
// std::vector<Ogre::SceneDebugger::stLine,std::allocator<Ogre::SceneDebugger::stLine>>::push_back(Ogre::SceneDebugger::stLine const&)
// address: 0x00184658   size: 0x28 (40 bytes)
//======================================================================
void __fastcall std::vector<Ogre::SceneDebugger::stLine>::push_back(int a1, _DWORD *a2)
{
  char *v3; // r1

  v3 = *(char **)(a1 + 4);
  if ( v3 == *(char **)(a1 + 8) )
  {
    std::vector<Ogre::SceneDebugger::stLine>::_M_insert_aux((void **)a1, v3, a2);
  }
  else
  {
    if ( v3 != nullptr )
      Ogre::SceneDebugger::stLine::stLine(*(_DWORD **)(a1 + 4), a2);
    *(_DWORD *)(a1 + 4) += 28;
  }
}


//======================================================================
// std::vector<Ogre::SceneDebugger::stLine,std::allocator<Ogre::SceneDebugger::stLine>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::SceneDebugger::stLine*,std::vector<Ogre::SceneDebugger::stLine,std::allocator<Ogre::SceneDebugger::stLine>>>,unsigned int,Ogre::SceneDebugger::stLine const&)
// address: 0x00184A70   size: 0x166 (358 bytes)
//======================================================================
void __fastcall std::vector<Ogre::SceneDebugger::stLine>::_M_fill_insert(
        void **a1,
        char *a2,
        unsigned int a3,
        _DWORD *a4)
{
  char *v6; // r1
  int v7; // r7
  char *v8; // r5
  int k; // r6
  char *v10; // r7
  char *m; // r4
  _DWORD *v12; // r5
  unsigned int v13; // r7
  unsigned int i; // r6
  _DWORD *v15; // r2
  char *j; // r4
  unsigned int v17; // r0
  int v18; // r6
  unsigned int v19; // r5
  _DWORD *v20; // r6
  _DWORD *v21; // r0
  _DWORD *v22; // r5
  char *v23; // [sp+4h] [bp-38h]
  unsigned int v24; // [sp+4h] [bp-38h]
  unsigned int v25; // [sp+8h] [bp-34h]
  _DWORD *v26; // [sp+8h] [bp-34h]
  _DWORD v29[8]; // [sp+1Ch] [bp-20h] BYREF

  if ( a3 != 0 )
  {
    if ( -1227133513 * (((_BYTE *)a1[2] - (_BYTE *)a1[1]) >> 2) < a3 )
    {
      v17 = std::vector<Ogre::SceneDebugger::stLine>::_M_check_len(a1, a3, (int)"vector::_M_fill_insert");
      v24 = v17;
      v18 = -1227133513 * ((a2 - (_BYTE *)*a1) >> 2);
      if ( v17 != 0 )
      {
        if ( v17 > 0x9249249 )
          sub_3BCEB4(v17);
        v26 = (_DWORD *)operator new(28 * v17);
      }
      else
      {
        v26 = nullptr;
      }
      v19 = a3;
      v20 = &v26[7 * v18];
      do
      {
        if ( v20 != nullptr )
          Ogre::SceneDebugger::stLine::stLine(v20, a4);
        --v19;
        v20 += 7;
      }
      while ( v19 != 0 );
      v21 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::SceneDebugger::stLine *,Ogre::SceneDebugger::stLine *>(
              *a1,
              a2,
              v26);
      v22 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::SceneDebugger::stLine *,Ogre::SceneDebugger::stLine *>(
              a2,
              a1[1],
              &v21[7 * a3]);
      if ( *a1 != nullptr )
        operator delete(*a1);
      *a1 = v26;
      a1[1] = v22;
      a1[2] = &v26[7 * v24];
    }
    else
    {
      Ogre::SceneDebugger::stLine::stLine(v29, a4);
      v6 = (char *)a1[1];
      v23 = v6;
      v25 = -1227133513 * ((v6 - a2) >> 2);
      if ( v25 <= a3 )
      {
        v12 = a1[1];
        v13 = a3 - v25;
        for ( i = v13; i != 0; --i )
        {
          if ( v12 != nullptr )
            Ogre::SceneDebugger::stLine::stLine(v12, v29);
          v12 += 7;
        }
        v15 = (char *)a1[1] + 28 * v13;
        a1[1] = v15;
        std::__uninitialized_copy<false>::__uninit_copy<Ogre::SceneDebugger::stLine *,Ogre::SceneDebugger::stLine *>(
          a2,
          v23,
          v15);
        a1[1] = (char *)a1[1] + 28 * v25;
        for ( j = a2; j != v23; j += 28 )
          Ogre::SceneDebugger::stLine::operator=(j, v29);
      }
      else
      {
        v7 = 28 * a3;
        v8 = &v6[-v7];
        std::__uninitialized_copy<false>::__uninit_copy<Ogre::SceneDebugger::stLine *,Ogre::SceneDebugger::stLine *>(
          &v6[-v7],
          v6,
          v6);
        a1[1] = (char *)a1[1] + v7;
        for ( k = -1227133513 * ((v8 - a2) >> 2); k > 0; --k )
        {
          v8 -= 28;
          v23 -= 28;
          Ogre::SceneDebugger::stLine::operator=(v23, v8);
        }
        v10 = &a2[v7];
        for ( m = a2; m != v10; m += 28 )
          Ogre::SceneDebugger::stLine::operator=(m, v29);
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::SceneDebugger::stLine,std::allocator<Ogre::SceneDebugger::stLine>>::resize(unsigned int,Ogre::SceneDebugger::stLine)
// address: 0x00184BE4   size: 0x2C (44 bytes)
//======================================================================
void __fastcall std::vector<Ogre::SceneDebugger::stLine>::resize(int a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v3; // r4

  v3 = -1227133513 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2);
  if ( a2 <= v3 )
  {
    if ( a2 < v3 )
      *(_DWORD *)(a1 + 4) = *(_DWORD *)a1 + 28 * a2;
  }
  else
  {
    std::vector<Ogre::SceneDebugger::stLine>::_M_fill_insert((void **)a1, *(char **)(a1 + 4), a2 - v3, a3);
  }
}


//======================================================================
// std::vector<Ogre::SceneDebugger::stTriangle,std::allocator<Ogre::SceneDebugger::stTriangle>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::SceneDebugger::stTriangle*,std::vector<Ogre::SceneDebugger::stTriangle,std::allocator<Ogre::SceneDebugger::stTriangle>>>,Ogre::SceneDebugger::stTriangle const&)
// address: 0x00184C38   size: 0xD4 (212 bytes)
//======================================================================
void __fastcall std::vector<Ogre::SceneDebugger::stTriangle>::_M_insert_aux(void **a1, char *a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  char *v6; // r0
  int i; // r4
  char *v8; // r6
  unsigned int v9; // r0
  unsigned int v10; // r6
  _DWORD *v11; // r5
  _DWORD *v12; // r0
  _DWORD *v13; // r0
  _DWORD *v14; // r7
  int v15; // [sp+0h] [bp-34h]
  _DWORD v17[11]; // [sp+8h] [bp-2Ch] BYREF

  v5 = a1[1];
  if ( v5 == a1[2] )
  {
    v9 = std::vector<Ogre::SceneDebugger::stTriangle>::_M_check_len(a1, 1u, (int)"vector::_M_insert_aux");
    v10 = v9;
    v15 = -858993459 * ((a2 - (_BYTE *)*a1) >> 3);
    if ( v9 != 0 )
    {
      if ( v9 > 0x6666666 )
        sub_3BCEB4(v9);
      v11 = (_DWORD *)operator new(40 * v9);
    }
    else
    {
      v11 = nullptr;
    }
    v12 = &v11[10 * v15];
    if ( v12 != nullptr )
      Ogre::SceneDebugger::stTriangle::stTriangle(v12, a3);
    v13 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::SceneDebugger::stTriangle *,Ogre::SceneDebugger::stTriangle *>(
            *a1,
            a2,
            v11);
    v14 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::SceneDebugger::stTriangle *,Ogre::SceneDebugger::stTriangle *>(
            a2,
            a1[1],
            v13 + 10);
    if ( *a1 != nullptr )
      operator delete(*a1);
    *a1 = v11;
    a1[1] = v14;
    a1[2] = &v11[10 * v10];
  }
  else
  {
    if ( v5 != nullptr )
      Ogre::SceneDebugger::stTriangle::stTriangle(v5, v5 - 10);
    a1[1] = (char *)a1[1] + 40;
    Ogre::SceneDebugger::stTriangle::stTriangle(v17, a3);
    v6 = (char *)a1[1] - 80;
    for ( i = -858993459 * ((v6 - a2) >> 3); i > 0; --i )
    {
      v8 = v6 - 40;
      Ogre::SceneDebugger::stTriangle::operator=(v6, (_DWORD *)v6 - 10);
      v6 = v8;
    }
    Ogre::SceneDebugger::stTriangle::operator=(a2, v17);
  }
}


//======================================================================
// std::vector<Ogre::SceneDebugger::stTriangle,std::allocator<Ogre::SceneDebugger::stTriangle>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::SceneDebugger::stTriangle*,std::vector<Ogre::SceneDebugger::stTriangle,std::allocator<Ogre::SceneDebugger::stTriangle>>>,unsigned int,Ogre::SceneDebugger::stTriangle const&)
// address: 0x00184D98   size: 0x166 (358 bytes)
//======================================================================
void __fastcall std::vector<Ogre::SceneDebugger::stTriangle>::_M_fill_insert(
        void **a1,
        char *a2,
        unsigned int a3,
        _DWORD *a4)
{
  char *v6; // r1
  int v7; // r7
  char *v8; // r5
  int k; // r6
  char *v10; // r7
  char *m; // r4
  _DWORD *v12; // r5
  unsigned int v13; // r7
  unsigned int i; // r6
  _DWORD *v15; // r2
  char *j; // r4
  unsigned int v17; // r0
  int v18; // r6
  unsigned int v19; // r5
  _DWORD *v20; // r6
  _DWORD *v21; // r0
  _DWORD *v22; // r5
  char *v23; // [sp+4h] [bp-40h]
  unsigned int v24; // [sp+4h] [bp-40h]
  unsigned int v25; // [sp+8h] [bp-3Ch]
  _DWORD *v26; // [sp+8h] [bp-3Ch]
  _DWORD v29[11]; // [sp+18h] [bp-2Ch] BYREF

  if ( a3 != 0 )
  {
    if ( -858993459 * (((_BYTE *)a1[2] - (_BYTE *)a1[1]) >> 3) < a3 )
    {
      v17 = std::vector<Ogre::SceneDebugger::stTriangle>::_M_check_len(a1, a3, (int)"vector::_M_fill_insert");
      v24 = v17;
      v18 = -858993459 * ((a2 - (_BYTE *)*a1) >> 3);
      if ( v17 != 0 )
      {
        if ( v17 > 0x6666666 )
          sub_3BCEB4(v17);
        v26 = (_DWORD *)operator new(40 * v17);
      }
      else
      {
        v26 = nullptr;
      }
      v19 = a3;
      v20 = &v26[10 * v18];
      do
      {
        if ( v20 != nullptr )
          Ogre::SceneDebugger::stTriangle::stTriangle(v20, a4);
        --v19;
        v20 += 10;
      }
      while ( v19 != 0 );
      v21 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::SceneDebugger::stTriangle *,Ogre::SceneDebugger::stTriangle *>(
              *a1,
              a2,
              v26);
      v22 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::SceneDebugger::stTriangle *,Ogre::SceneDebugger::stTriangle *>(
              a2,
              a1[1],
              &v21[10 * a3]);
      if ( *a1 != nullptr )
        operator delete(*a1);
      *a1 = v26;
      a1[1] = v22;
      a1[2] = &v26[10 * v24];
    }
    else
    {
      Ogre::SceneDebugger::stTriangle::stTriangle(v29, a4);
      v6 = (char *)a1[1];
      v23 = v6;
      v25 = -858993459 * ((v6 - a2) >> 3);
      if ( v25 <= a3 )
      {
        v12 = a1[1];
        v13 = a3 - v25;
        for ( i = v13; i != 0; --i )
        {
          if ( v12 != nullptr )
            Ogre::SceneDebugger::stTriangle::stTriangle(v12, v29);
          v12 += 10;
        }
        v15 = (char *)a1[1] + 40 * v13;
        a1[1] = v15;
        std::__uninitialized_copy<false>::__uninit_copy<Ogre::SceneDebugger::stTriangle *,Ogre::SceneDebugger::stTriangle *>(
          a2,
          v23,
          v15);
        a1[1] = (char *)a1[1] + 40 * v25;
        for ( j = a2; j != v23; j += 40 )
          Ogre::SceneDebugger::stTriangle::operator=(j, v29);
      }
      else
      {
        v7 = 40 * a3;
        v8 = &v6[-v7];
        std::__uninitialized_copy<false>::__uninit_copy<Ogre::SceneDebugger::stTriangle *,Ogre::SceneDebugger::stTriangle *>(
          &v6[-v7],
          v6,
          v6);
        a1[1] = (char *)a1[1] + v7;
        for ( k = -858993459 * ((v8 - a2) >> 3); k > 0; --k )
        {
          v8 -= 40;
          v23 -= 40;
          Ogre::SceneDebugger::stTriangle::operator=(v23, v8);
        }
        v10 = &a2[v7];
        for ( m = a2; m != v10; m += 40 )
          Ogre::SceneDebugger::stTriangle::operator=(m, v29);
      }
    }
  }
}


//======================================================================
// std::vector<std::string,std::allocator<std::string>>::_M_fill_insert(__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string,std::allocator<std::string>>>,unsigned int,std::string const&)
// address: 0x001863C0   size: 0x1B4 (436 bytes)
//======================================================================
void __fastcall std::vector<std::string>::_M_fill_insert(int *a1, int a2, unsigned int a3, int a4)
{
  unsigned int v5; // r5
  int v6; // r3
  int v7; // r7
  int v8; // r5
  int v9; // r6
  int j; // r5
  int k; // r4
  int m; // r4
  unsigned int v13; // r6
  int v14; // r5
  int v15; // r6
  int v16; // r5
  int i; // r4
  unsigned int v18; // r3
  unsigned int v19; // r2
  int v20; // r7
  unsigned int v21; // r6
  int v22; // r7
  int v23; // r6
  int v24; // r7
  int v25; // r5
  int v26; // r7
  int v27; // r6
  int v28; // r7
  unsigned int v29; // [sp+0h] [bp-1Ch]
  int v30; // [sp+0h] [bp-1Ch]
  int v31; // [sp+0h] [bp-1Ch]
  int v32; // [sp+4h] [bp-18h]
  int v34; // [sp+8h] [bp-14h]
  unsigned int v35; // [sp+8h] [bp-14h]
  _BYTE v37[8]; // [sp+14h] [bp-8h] BYREF

  v5 = a3;
  if ( a3 != 0 )
  {
    v6 = a1[1];
    if ( (a1[2] - v6) >> 2 < a3 )
    {
      v18 = (v6 - *a1) >> 2;
      if ( 0x3FFFFFFF - v18 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      if ( a3 < v18 )
        a3 = v18;
      v19 = a3 + v18;
      if ( v19 < v18 )
      {
        v32 = 0x3FFFFFFF;
      }
      else
      {
        v32 = v19;
        if ( v19 > 0x3FFFFFFF )
          v32 = 0x3FFFFFFF;
      }
      v20 = (a2 - *a1) >> 2;
      if ( v32 != 0 )
        v31 = operator new(4 * v32);
      else
        v31 = 0;
      v21 = v5;
      v22 = v31 + 4 * v20;
      do
      {
        --v21;
        std::_Construct<std::string,std::string>(v22, a4);
        v22 += 4;
      }
      while ( v21 != 0 );
      v23 = *a1;
      v24 = v31;
      while ( v23 != a2 )
      {
        std::_Construct<std::string,std::string>(v24, v23);
        v23 += 4;
        v24 += 4;
      }
      v25 = v24 + 4 * v5;
      v26 = a1[1];
      while ( v23 != v26 )
      {
        std::_Construct<std::string,std::string>(v25, v23);
        v25 += 4;
        v23 += 4;
      }
      v27 = *a1;
      v28 = a1[1];
      while ( v27 != v28 )
      {
        sub_3BDF80(v27);
        v27 += 4;
      }
      if ( *a1 != 0 )
        operator delete((void *)*a1);
      a1[1] = v25;
      *a1 = v31;
      a1[2] = v31 + 4 * v32;
    }
    else
    {
      sub_3BEB1C(v37, a4);
      v7 = a1[1];
      v29 = (v7 - a2) >> 2;
      if ( v29 <= v5 )
      {
        v35 = v5 - v29;
        v13 = v5 - v29;
        v14 = a1[1];
        while ( v13 != 0 )
        {
          std::_Construct<std::string,std::string>(v14, (int)v37);
          --v13;
          v14 += 4;
        }
        v15 = a2;
        v16 = a1[1] + 4 * v35;
        a1[1] = v16;
        while ( v15 != v7 )
        {
          std::_Construct<std::string,std::string>(v16, v15);
          v16 += 4;
          v15 += 4;
        }
        a1[1] += 4 * v29;
        for ( i = a2; i != v7; i += 4 )
          sub_3BEBBC(i);
      }
      else
      {
        v8 = 4 * v5;
        v9 = v7 - v8;
        v30 = v8;
        v34 = a1[1];
        for ( j = v7 - v8; j != v7; j += 4 )
        {
          std::_Construct<std::string,std::string>(v34, j);
          v34 += 4;
        }
        a1[1] += v30;
        for ( k = (v9 - a2) >> 2; k > 0; --k )
        {
          v7 -= 4;
          v9 -= 4;
          sub_3BEBBC(v7);
        }
        for ( m = a2; m != a2 + v30; m += 4 )
          sub_3BEBBC(m);
      }
      sub_3BDF80(v37);
    }
  }
}


//======================================================================
// std::vector<Ogre::FixedString,std::allocator<Ogre::FixedString>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::FixedString*,std::vector<Ogre::FixedString,std::allocator<Ogre::FixedString>>>,unsigned int,Ogre::FixedString const&)
// address: 0x00186F28   size: 0x1B2 (434 bytes)
//======================================================================
void __fastcall std::vector<Ogre::FixedString>::_M_fill_insert(int a1, int *a2, unsigned int a3, int *a4)
{
  unsigned int v5; // r7
  int v6; // r3
  void *v7; // r1
  int *v8; // r6
  int *v9; // r7
  int *j; // r5
  int k; // r4
  int v12; // r1
  int *m; // r4
  unsigned int v14; // r5
  int v15; // r7
  int *v16; // r5
  int v17; // r7
  int *i; // r4
  unsigned int v19; // r3
  unsigned int v20; // r2
  int v21; // r6
  unsigned int v22; // r5
  int v23; // r6
  void *v24; // r1
  int *v25; // r5
  int v26; // r6
  int v27; // r6
  int *v28; // r7
  Ogre::FixedString **v29; // r5
  Ogre::FixedString **v30; // r7
  unsigned int v31; // [sp+0h] [bp-1Ch]
  int v32; // [sp+0h] [bp-1Ch]
  int v33; // [sp+0h] [bp-1Ch]
  int v34; // [sp+4h] [bp-18h]
  unsigned int v35; // [sp+4h] [bp-18h]
  int v36; // [sp+4h] [bp-18h]
  Ogre::FixedString *v39[2]; // [sp+14h] [bp-8h] BYREF

  v5 = a3;
  if ( a3 != 0 )
  {
    v6 = *(_DWORD *)(a1 + 4);
    v7 = *(void **)(a1 + 8);
    if ( ((int)v7 - v6) >> 2 < a3 )
    {
      v19 = (v6 - *(_DWORD *)a1) >> 2;
      if ( 0x3FFFFFFF - v19 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      if ( a3 < v19 )
        a3 = v19;
      v20 = a3 + v19;
      if ( v20 < v19 )
      {
        v33 = 0x3FFFFFFF;
      }
      else
      {
        v33 = v20;
        if ( v20 > 0x3FFFFFFF )
          v33 = 0x3FFFFFFF;
      }
      v21 = ((int)a2 - *(_DWORD *)a1) >> 2;
      if ( v33 != 0 )
        v36 = operator new(4 * v33);
      else
        v36 = 0;
      v22 = v5;
      v23 = v36 + 4 * v21;
      do
      {
        --v22;
        std::_Construct<Ogre::FixedString,Ogre::FixedString>(v23, a4);
        v23 += 4;
      }
      while ( v22 != 0 );
      v25 = *(int **)a1;
      v26 = v36;
      while ( v25 != a2 )
      {
        std::_Construct<Ogre::FixedString,Ogre::FixedString>(v26, v25++);
        v26 += 4;
      }
      v27 = v26 + 4 * v5;
      v28 = *(int **)(a1 + 4);
      while ( v25 != v28 )
      {
        std::_Construct<Ogre::FixedString,Ogre::FixedString>(v27, v25);
        v27 += 4;
        ++v25;
      }
      v29 = *(Ogre::FixedString ***)a1;
      v30 = *(Ogre::FixedString ***)(a1 + 4);
      while ( v29 != v30 )
        Ogre::FixedString::~FixedString(v29++, v24);
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)(a1 + 4) = v27;
      *(_DWORD *)a1 = v36;
      *(_DWORD *)(a1 + 8) = v36 + 4 * v33;
    }
    else
    {
      v39[0] = (Ogre::FixedString *)*a4;
      Ogre::FixedString::addRef((int)v39[0], v7);
      v8 = *(int **)(a1 + 4);
      v31 = v8 - a2;
      if ( v31 <= v5 )
      {
        v35 = v5 - v31;
        v14 = v5 - v31;
        v15 = *(_DWORD *)(a1 + 4);
        while ( v14 != 0 )
        {
          std::_Construct<Ogre::FixedString,Ogre::FixedString>(v15, (int *)v39);
          --v14;
          v15 += 4;
        }
        v16 = a2;
        v17 = *(_DWORD *)(a1 + 4) + 4 * v35;
        *(_DWORD *)(a1 + 4) = v17;
        while ( v16 != v8 )
        {
          std::_Construct<Ogre::FixedString,Ogre::FixedString>(v17, v16);
          v17 += 4;
          ++v16;
        }
        v12 = v8 - a2;
        *(_DWORD *)(a1 + 4) += 4 * v31;
        for ( i = a2; i != v8; ++i )
          Ogre::FixedString::operator=(i, (int *)v39);
      }
      else
      {
        v32 = v5;
        v9 = &v8[-v5];
        v34 = *(_DWORD *)(a1 + 4);
        for ( j = v9; j != v8; ++j )
        {
          std::_Construct<Ogre::FixedString,Ogre::FixedString>(v34, j);
          v34 += 4;
        }
        *(_DWORD *)(a1 + 4) += v32 * 4;
        for ( k = v9 - a2; k > 0; --k )
          Ogre::FixedString::operator=(--v8, --v9);
        v12 = (int)a2;
        for ( m = a2; m != &a2[v32]; ++m )
          Ogre::FixedString::operator=(m, (int *)v39);
      }
      Ogre::FixedString::~FixedString(v39, (void *)v12);
    }
  }
}


//======================================================================
// std::vector<Ogre::KeyFrameArray<Ogre::Vector4>::KEYFRAME_T,std::allocator<Ogre::KeyFrameArray<Ogre::Vector4>::KEYFRAME_T>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::KeyFrameArray<Ogre::Vector4>::KEYFRAME_T*,std::vector<Ogre::KeyFrameArray<Ogre::Vector4>::KEYFRAME_T,std::allocator<Ogre::KeyFrameArray<Ogre::Vector4>::KEYFRAME_T>>>,unsigned int,Ogre::KeyFrameArray<Ogre::Vector4>::KEYFRAME_T const&)
// address: 0x001870F4   size: 0x27C (636 bytes)
//======================================================================
void __fastcall std::vector<Ogre::KeyFrameArray<Ogre::Vector4>::KEYFRAME_T,std::allocator<Ogre::KeyFrameArray<Ogre::Vector4>::KEYFRAME_T>>::_M_fill_insert(
        void **a1,
        char *a2,
        unsigned int a3,
        const void *a4)
{
  unsigned int v5; // r6
  unsigned int v6; // r5
  char *v7; // r7
  char *v8; // r6
  char *i; // r5
  char *v10; // r3
  int v11; // r4
  char *v12; // r2
  int v13; // r1
  __int16 v14; // r2^2
  char *v15; // r3
  int v16; // r12
  _DWORD *v17; // r1
  char v18; // r6
  char v19; // r7
  _DWORD *v20; // r0
  char *v21; // r7
  unsigned int v22; // r6
  char *v23; // r6
  char *v24; // r7
  int v25; // r2
  int v26; // r7
  int v27; // r3
  char *v28; // r3
  _DWORD *v29; // r1
  _DWORD *v30; // r0
  unsigned int v31; // r3
  unsigned int v32; // r2
  int v33; // r7
  char *v34; // r7
  unsigned int v35; // r5
  char *v36; // r5
  char *v37; // r7
  char *v38; // r7
  char *v39; // r6
  int v40; // [sp+4h] [bp-30h]
  int v41; // [sp+4h] [bp-30h]
  int v42; // [sp+8h] [bp-2Ch]
  int v43; // [sp+8h] [bp-2Ch]
  unsigned int v44; // [sp+8h] [bp-2Ch]
  int v45; // [sp+8h] [bp-2Ch]
  char *v46; // [sp+8h] [bp-2Ch]
  char *v47; // [sp+Ch] [bp-28h]
  char *v48; // [sp+Ch] [bp-28h]
  int v49; // [sp+Ch] [bp-28h]
  void *v51; // [sp+10h] [bp-24h]
  void *v52; // [sp+10h] [bp-24h]
  _DWORD v54[6]; // [sp+1Ch] [bp-18h] BYREF

  v5 = a3;
  if ( a3 != 0 )
  {
    v47 = (char *)a1[1];
    if ( -858993459 * (((_BYTE *)a1[2] - v47) >> 2) < a3 )
    {
      v31 = -858993459 * ((v47 - (_BYTE *)*a1) >> 2);
      if ( 214748364 - v31 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      if ( a3 < v31 )
        a3 = -858993459 * ((v47 - (_BYTE *)*a1) >> 2);
      v32 = a3 - 858993459 * ((v47 - (_BYTE *)*a1) >> 2);
      if ( v32 < v31 || (v49 = v32, v32 > 0xCCCCCCC) )
        v49 = 214748364;
      v33 = -858993459 * ((a2 - (_BYTE *)*a1) >> 2);
      if ( v49 != 0 )
        v46 = (char *)operator new(20 * v49);
      else
        v46 = nullptr;
      v34 = &v46[20 * v33];
      v35 = v5;
      do
      {
        --v35;
        std::_Construct<Ogre::KeyFrameArray<Ogre::Vector4>::KEYFRAME_T,Ogre::KeyFrameArray<Ogre::Vector4>::KEYFRAME_T>(
          v34,
          a4);
        v34 += 20;
      }
      while ( v35 != 0 );
      v36 = (char *)*a1;
      v37 = v46;
      while ( v36 != a2 )
      {
        std::_Construct<Ogre::KeyFrameArray<Ogre::Vector4>::KEYFRAME_T,Ogre::KeyFrameArray<Ogre::Vector4>::KEYFRAME_T>(
          v37,
          v36);
        v36 += 20;
        v37 += 20;
      }
      v38 = &v37[20 * v5];
      v39 = (char *)a1[1];
      while ( v36 != v39 )
      {
        std::_Construct<Ogre::KeyFrameArray<Ogre::Vector4>::KEYFRAME_T,Ogre::KeyFrameArray<Ogre::Vector4>::KEYFRAME_T>(
          v38,
          v36);
        v38 += 20;
        v36 += 20;
      }
      if ( *a1 != nullptr )
        operator delete(*a1);
      a1[1] = v38;
      *a1 = v46;
      a1[2] = &v46[20 * v49];
    }
    else
    {
      j_memcpy(v54, a4, 0x14u);
      v6 = -858993459 * ((v47 - a2) >> 2);
      if ( v6 <= v5 )
      {
        v21 = v47;
        v22 = v5 - v6;
        v44 = v22;
        while ( v22 != 0 )
        {
          std::_Construct<Ogre::KeyFrameArray<Ogre::Vector4>::KEYFRAME_T,Ogre::KeyFrameArray<Ogre::Vector4>::KEYFRAME_T>(
            v21,
            v54);
          --v22;
          v21 += 20;
        }
        v23 = a2;
        v24 = (char *)a1[1] + 20 * v44;
        a1[1] = v24;
        while ( v23 != v47 )
        {
          std::_Construct<Ogre::KeyFrameArray<Ogre::Vector4>::KEYFRAME_T,Ogre::KeyFrameArray<Ogre::Vector4>::KEYFRAME_T>(
            v24,
            v23);
          v24 += 20;
          v23 += 20;
        }
        v25 = v54[0];
        v26 = v54[3];
        v27 = v54[4];
        a1[1] = (char *)a1[1] + 4 * ((v47 - a2) >> 2);
        v41 = v27;
        v28 = a2;
        v52 = (void *)v54[2];
        v45 = v54[1];
        v29 = a2 + 12;
        while ( v28 != v47 )
        {
          *(_DWORD *)v28 = v25;
          *((_DWORD *)v28 + 1) = v45;
          v30 = v28 + 4;
          v28 += 20;
          v30[1] = v52;
          *v29 = v26;
          v29[1] = v41;
          v29 += 5;
        }
      }
      else
      {
        v42 = 20 * v5;
        v7 = &v47[-20 * v5];
        v8 = v47;
        for ( i = v7; i != v47; i += 20 )
        {
          std::_Construct<Ogre::KeyFrameArray<Ogre::Vector4>::KEYFRAME_T,Ogre::KeyFrameArray<Ogre::Vector4>::KEYFRAME_T>(
            v8,
            i);
          v8 += 20;
        }
        a1[1] = (char *)a1[1] + v42;
        v10 = v47;
        v11 = -858993459 * ((v7 - a2) >> 2);
        v12 = v7;
        while ( v11 > 0 )
        {
          v12 -= 20;
          v10 -= 20;
          --v11;
          v13 = ((unsigned __int8)v12[1] << 8)
              | (unsigned __int8)*v12
              | ((unsigned __int8)v12[2] << 16)
              | ((unsigned __int8)v12[3] << 24);
          v10[1] = v12[1];
          *v10 = v13;
          v10[2] = BYTE2(v13);
          v10[3] = HIBYTE(v13);
          *((_DWORD *)v10 + 1) = *((_DWORD *)v12 + 1);
          *((_DWORD *)v10 + 2) = *((_DWORD *)v12 + 2);
          *((_DWORD *)v10 + 3) = *((_DWORD *)v12 + 3);
          *((_DWORD *)v10 + 4) = *((_DWORD *)v12 + 4);
        }
        v14 = HIWORD(v54[0]);
        v48 = &a2[v42];
        v40 = v54[4];
        v15 = a2;
        v51 = (void *)v54[2];
        v16 = v54[3];
        v43 = v54[1];
        v17 = a2 + 12;
        v18 = v54[0];
        v19 = BYTE1(v54[0]);
        while ( v15 != v48 )
        {
          *((_WORD *)v15 + 1) = v14;
          *v15 = v18;
          v15[1] = v19;
          *((_DWORD *)v15 + 1) = v43;
          v20 = v15 + 4;
          v15 += 20;
          v20[1] = v51;
          *v17 = v16;
          v17[1] = v40;
          v17 += 5;
        }
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T,std::allocator<Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T*,std::vector<Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T,std::allocator<Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T>>>,unsigned int,Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T const&)
// address: 0x00187450   size: 0x14E (334 bytes)
//======================================================================
void __fastcall std::vector<Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T,std::allocator<Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T>>::_M_fill_insert(
        int a1,
        char *a2,
        unsigned int a3,
        void *a4)
{
  char *v7; // r6
  unsigned int v8; // r7
  char *v9; // r5
  char *v10; // r7
  int k; // r4
  char *m; // r4
  int v13; // r5
  char *v14; // r2
  char *i; // r4
  unsigned int v16; // r3
  unsigned int v17; // r6
  unsigned int v18; // r6
  char *v19; // r0
  char *v20; // r5
  char *j; // [sp+0h] [bp-34h]
  char *v22; // [sp+0h] [bp-34h]
  int v23; // [sp+4h] [bp-30h]
  int v25; // [sp+Ch] [bp-28h]
  _DWORD v26[9]; // [sp+10h] [bp-24h] BYREF

  if ( a3 != 0 )
  {
    v7 = *(char **)(a1 + 4);
    if ( (*(_DWORD *)(a1 + 8) - (int)v7) >> 5 < a3 )
    {
      v16 = (int)&v7[-*(_DWORD *)a1] >> 5;
      if ( 0x7FFFFFF - v16 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v17 = a3;
      if ( a3 < v16 )
        v17 = v16;
      v18 = v17 + v16;
      if ( v18 < v16 || v18 > 0x7FFFFFF )
        v18 = 0x7FFFFFF;
      v22 = (char *)(32 * v18);
      v23 = (int)&a2[-*(_DWORD *)a1] >> 5;
      if ( v18 != 0 )
        v18 = operator new(32 * v18);
      std::__uninitialized_fill_n<false>::__uninit_fill_n<Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T *,unsigned int,Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T>(
        (char *)(v18 + 32 * v23),
        a3,
        a4);
      v19 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T *,Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T *>(
              *(char **)a1,
              a2,
              (char *)v18);
      v20 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T *,Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T *>(
              a2,
              *(char **)(a1 + 4),
              &v19[32 * a3]);
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)a1 = v18;
      *(_DWORD *)(a1 + 4) = v20;
      *(_DWORD *)(a1 + 8) = &v22[v18];
    }
    else
    {
      j_memcpy(v26, a4, 0x20u);
      v8 = (v7 - a2) >> 5;
      if ( v8 <= a3 )
      {
        v13 = a3 - v8;
        std::__uninitialized_fill_n<false>::__uninit_fill_n<Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T *,unsigned int,Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T>(
          v7,
          v13,
          v26);
        v14 = (char *)(*(_DWORD *)(a1 + 4) + 32 * v13);
        *(_DWORD *)(a1 + 4) = v14;
        std::__uninitialized_copy<false>::__uninit_copy<Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T *,Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T *>(
          a2,
          v7,
          v14);
        *(_DWORD *)(a1 + 4) += 32 * v8;
        for ( i = a2; i != v7; i += 32 )
          Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T::operator=(i, v26);
      }
      else
      {
        v25 = 32 * a3;
        v9 = &v7[-32 * a3];
        v10 = v7;
        for ( j = v9; j != v7; j += 32 )
        {
          if ( v10 != nullptr )
            j_memcpy(v10, j, 0x20u);
          v10 += 32;
        }
        *(_DWORD *)(a1 + 4) += v25;
        for ( k = (v9 - a2) >> 5; k > 0; --k )
        {
          v7 -= 32;
          v9 -= 32;
          Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T::operator=(v7, v9);
        }
        for ( m = a2; m != &a2[v25]; m += 32 )
          Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T::operator=(m, v26);
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::EVENT_ITEM *,std::allocator<Ogre::EVENT_ITEM *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::EVENT_ITEM **,std::vector<Ogre::EVENT_ITEM *,std::allocator<Ogre::EVENT_ITEM *>>>,Ogre::EVENT_ITEM * const&)
// address: 0x00187654   size: 0xA6 (166 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::EVENT_ITEM *>::_M_insert_aux(__int64 a1, _DWORD *a2)
{
  _DWORD *v3; // r3
  __int64 v4; // r4
  int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r2
  int v8; // r6
  _DWORD *v9; // r3
  int v10; // r0
  __int64 v12; // [sp+0h] [bp-Ch]

  v12 = a1;
  v3 = *(_DWORD **)(a1 + 4);
  v4 = a1;
  if ( v3 != *(_DWORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
      *v3 = *(v3 - 1);
    LODWORD(a1) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v4 + 4) = a1 + 4;
    LODWORD(v4) = *a2;
    v5 = ((int)a1 - 4 - HIDWORD(a1)) >> 2;
    if ( v5 != 0 )
      j_memmove((void *)(a1 - 4 * v5), (const void *)HIDWORD(a1), 4 * v5);
    *(_DWORD *)HIDWORD(v4) = v4;
    return v12;
  }
  v6 = ((int)v3 - *(_DWORD *)a1) >> 2;
  if ( v6 == 0 )
  {
    v7 = 1;
    goto LABEL_11;
  }
  v7 = 2 * v6;
  v8 = 0x3FFFFFFF;
  if ( 2 * v6 >= v6 )
  {
LABEL_11:
    v8 = v7;
    if ( v7 > 0x3FFFFFFF )
      v8 = 0x3FFFFFFF;
  }
  LODWORD(v12) = (HIDWORD(a1) - *(_DWORD *)a1) >> 2;
  HIDWORD(v12) = 4 * v8;
  if ( v8 != 0 )
    v8 = operator new(4 * v8);
  v9 = (_DWORD *)(v8 + 4 * v12);
  if ( v9 != nullptr )
    *v9 = *a2;
  v10 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::EVENT_ITEM *>(
          *(void **)v4,
          SHIDWORD(v4),
          (void *)v8);
  HIDWORD(v4) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::EVENT_ITEM *>(
                  (void *)HIDWORD(v4),
                  *(_DWORD *)(v4 + 4),
                  (void *)(v10 + 4));
  if ( *(_DWORD *)v4 != 0 )
    operator delete(*(void **)v4);
  *(_DWORD *)v4 = v8;
  *(_DWORD *)(v4 + 4) = HIDWORD(v4);
  *(_DWORD *)(v4 + 8) = v8 + HIDWORD(v12);
  return v12;
}


//======================================================================
// std::vector<Ogre::MotionElementData *,std::allocator<Ogre::MotionElementData *>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::MotionElementData **,std::vector<Ogre::MotionElementData *,std::allocator<Ogre::MotionElementData *>>>,unsigned int,Ogre::MotionElementData * const&)
// address: 0x0018786C   size: 0x120 (288 bytes)
//======================================================================
void __fastcall std::vector<Ogre::MotionElementData *>::_M_fill_insert(int a1, _DWORD *a2, unsigned int a3, void **a4)
{
  _DWORD *v5; // r5
  _BYTE *v7; // r7
  int v8; // r6
  _DWORD *v9; // r6
  void *v10; // r2
  unsigned int v11; // r3
  unsigned int v12; // r7
  unsigned int v13; // r7
  char *v14; // r2
  void *v15; // r1
  unsigned int v16; // r3
  int v17; // r0
  int v18; // r5
  unsigned int v20; // [sp+4h] [bp-10h]
  void *v21; // [sp+8h] [bp-Ch]
  char *v22; // [sp+8h] [bp-Ch]
  int v23; // [sp+Ch] [bp-8h]

  v5 = a2;
  if ( a3 != 0 )
  {
    v7 = *(_BYTE **)(a1 + 4);
    if ( (*(_DWORD *)(a1 + 8) - (int)v7) >> 2 < a3 )
    {
      v11 = (int)&v7[-*(_DWORD *)a1] >> 2;
      if ( 0x3FFFFFFF - v11 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v12 = a3;
      if ( a3 < v11 )
        v12 = v11;
      v13 = v12 + v11;
      if ( v13 < v11 || v13 > 0x3FFFFFFF )
        v13 = 0x3FFFFFFF;
      v23 = ((int)a2 - *(_DWORD *)a1) >> 2;
      if ( v13 != 0 )
        v22 = (char *)operator new(4 * v13);
      else
        v22 = nullptr;
      v14 = &v22[4 * v23];
      v15 = *a4;
      v16 = a3;
      do
      {
        --v16;
        *(_DWORD *)v14 = v15;
        v14 += 4;
      }
      while ( v16 != 0 );
      v17 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MotionElementData *>(
              *(void **)a1,
              (int)v5,
              v22);
      v18 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MotionElementData *>(
              v5,
              *(_DWORD *)(a1 + 4),
              (void *)(v17 + 4 * a3));
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)(a1 + 4) = v18;
      *(_DWORD *)a1 = v22;
      *(_DWORD *)(a1 + 8) = &v22[4 * v13];
    }
    else
    {
      v20 = (v7 - (_BYTE *)a2) >> 2;
      v21 = *a4;
      if ( v20 <= a3 )
      {
        memset32(v7, (int)v21, a3 - v20);
        v10 = (void *)(*(_DWORD *)(a1 + 4) + 4 * (a3 - v20));
        *(_DWORD *)(a1 + 4) = v10;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MotionElementData *>(
          a2,
          (int)v7,
          v10);
        *(_DWORD *)(a1 + 4) += 4 * v20;
        while ( v5 != (_DWORD *)v7 )
          *v5++ = v21;
      }
      else
      {
        v8 = 4 * a3;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MotionElementData *>(
          &v7[-4 * a3],
          (int)v7,
          v7);
        *(_DWORD *)(a1 + 4) += v8;
        if ( (&v7[-v8] - (_BYTE *)v5) >> 2 != 0 )
          j_memmove(&v7[-4 * ((&v7[-v8] - (_BYTE *)v5) >> 2)], v5, 4 * ((&v7[-v8] - (_BYTE *)v5) >> 2));
        v9 = &v5[v8 / 4u];
        while ( v5 != v9 )
          *v5++ = v21;
      }
    }
  }
}


//======================================================================
// std::vector<std::string,std::allocator<std::string>>::reserve(unsigned int)
// address: 0x00188594   size: 0x8A (138 bytes)
//======================================================================
void __fastcall std::vector<std::string>::reserve(char **a1, unsigned int a2)
{
  char *v4; // r6
  char *v5; // r7
  char *v6; // r6
  char *v7; // r7
  char *v8; // [sp+4h] [bp-10h]
  char *v9; // [sp+8h] [bp-Ch]
  int v10; // [sp+Ch] [bp-8h]

  if ( a2 > 0x3FFFFFFF )
    sub_3BD058("vector::reserve");
  v4 = *a1;
  if ( (a1[2] - *a1) >> 2 < a2 )
  {
    v9 = a1[1];
    v10 = (v9 - v4) >> 2;
    if ( a2 != 0 )
      v8 = (char *)operator new(4 * a2);
    else
      v8 = nullptr;
    v5 = v8;
    while ( v4 != v9 )
    {
      if ( v5 != nullptr )
        sub_3BEB1C(v5, v4);
      v4 += 4;
      v5 += 4;
    }
    v6 = *a1;
    v7 = a1[1];
    while ( v6 != v7 )
    {
      sub_3BDF80(v6);
      v6 += 4;
    }
    if ( *a1 != nullptr )
      operator delete(*a1);
    *a1 = v8;
    a1[1] = &v8[4 * v10];
    a1[2] = &v8[4 * a2];
  }
}


//======================================================================
// std::vector<std::string,std::allocator<std::string>>::_M_insert_aux(__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string,std::allocator<std::string>>>,std::string const&)
// address: 0x001886B8   size: 0x106 (262 bytes)
//======================================================================
void __fastcall std::vector<std::string>::_M_insert_aux(int *a1, char *a2, int a3)
{
  int v4; // r3
  int v5; // r0
  int v8; // r0
  int i; // r4
  int v10; // r6
  unsigned int v11; // r0
  unsigned int v12; // r3
  int v13; // r5
  int v14; // r0
  char *v15; // r6
  int j; // r0
  int v17; // r7
  char *v18; // r6
  int v19; // [sp+0h] [bp-14h]
  int v20; // [sp+4h] [bp-10h]
  int v21; // [sp+4h] [bp-10h]
  char *v22; // [sp+4h] [bp-10h]
  char *v23; // [sp+4h] [bp-10h]
  _BYTE v24[8]; // [sp+Ch] [bp-8h] BYREF

  v4 = a1[2];
  v5 = a1[1];
  if ( v5 != v4 )
  {
    if ( v5 != 0 )
      sub_3BEB1C(v5, v5 - 4);
    a1[1] += 4;
    sub_3BEB1C(v24, a3);
    v8 = a1[1] - 8;
    for ( i = (v8 - (int)a2) >> 2; i > 0; --i )
    {
      v10 = v8 - 4;
      sub_3BEBBC(v8);
      v8 = v10;
    }
    sub_3BEBBC(a2);
    sub_3BDF80(v24);
    return;
  }
  v11 = (v5 - *a1) >> 2;
  if ( v11 == 0 )
  {
    v12 = 1;
    goto LABEL_12;
  }
  v12 = 2 * v11;
  v13 = 0x3FFFFFFF;
  if ( 2 * v11 >= v11 )
  {
LABEL_12:
    v13 = v12;
    if ( v12 > 0x3FFFFFFF )
      v13 = 0x3FFFFFFF;
  }
  v20 = (int)&a2[-*a1] >> 2;
  if ( v13 != 0 )
    v19 = operator new(4 * v13);
  else
    v19 = 0;
  v14 = v19 + 4 * v20;
  if ( v14 != 0 )
    sub_3BEB1C(v14, a3);
  v15 = (char *)*a1;
  for ( j = v19; ; j = v21 )
  {
    v21 = j + 4;
    if ( v15 == a2 )
      break;
    if ( j != 0 )
      sub_3BEB1C(j, v15);
    v15 += 4;
  }
  v17 = j + 4;
  v22 = (char *)a1[1];
  while ( v15 != v22 )
  {
    if ( v17 != 0 )
      sub_3BEB1C(v17, v15);
    v17 += 4;
    v15 += 4;
  }
  v18 = (char *)*a1;
  v23 = (char *)a1[1];
  while ( v18 != v23 )
  {
    sub_3BDF80(v18);
    v18 += 4;
  }
  if ( *a1 != 0 )
    operator delete((void *)*a1);
  a1[1] = v17;
  *a1 = v19;
  a1[2] = v19 + 4 * v13;
}


//======================================================================
// std::vector<std::string,std::allocator<std::string>>::push_back(std::string const&)
// address: 0x001887C4   size: 0x28 (40 bytes)
//======================================================================
void __fastcall std::vector<std::string>::push_back(int *a1, int a2)
{
  char *v3; // r1

  v3 = (char *)a1[1];
  if ( v3 == (char *)a1[2] )
  {
    std::vector<std::string>::_M_insert_aux(a1, v3, a2);
  }
  else
  {
    if ( v3 != nullptr )
      sub_3BEB1C(a1[1], a2);
    a1[1] += 4;
  }
}


//======================================================================
// std::vector<unsigned int,std::allocator<unsigned int>>::vector(unsigned int,unsigned int const&,std::allocator<unsigned int> const&)
// address: 0x00189E54   size: 0x46 (70 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIjSaIjEEC1EjRKjRKS0_'
_DWORD *__fastcall std::vector<unsigned int>::vector(_DWORD *a1, unsigned int a2, int *a3)
{
  int v6; // r6
  char *v7; // r0

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  v6 = 4 * a2;
  if ( a2 != 0 )
  {
    if ( a2 > 0x3FFFFFFF )
      sub_3BCEB4(a1);
    v7 = (char *)operator new(4 * a2);
  }
  else
  {
    v7 = nullptr;
  }
  *a1 = v7;
  a1[1] = v7;
  a1[2] = &v7[v6];
  memset32(v7, *a3, a2);
  a1[1] = a1[2];
  return a1;
}


//======================================================================
// std::vector<Ogre::SubMeshInstance *,std::allocator<Ogre::SubMeshInstance *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::SubMeshInstance **,std::vector<Ogre::SubMeshInstance *,std::allocator<Ogre::SubMeshInstance *>>>,Ogre::SubMeshInstance * const&)
// address: 0x0018AB08   size: 0xA6 (166 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::SubMeshInstance *>::_M_insert_aux(__int64 a1, _DWORD *a2)
{
  _DWORD *v3; // r3
  __int64 v4; // r4
  int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r2
  int v8; // r6
  _DWORD *v9; // r3
  int v10; // r0
  __int64 v12; // [sp+0h] [bp-Ch]

  v12 = a1;
  v3 = *(_DWORD **)(a1 + 4);
  v4 = a1;
  if ( v3 != *(_DWORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
      *v3 = *(v3 - 1);
    LODWORD(a1) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v4 + 4) = a1 + 4;
    LODWORD(v4) = *a2;
    v5 = ((int)a1 - 4 - HIDWORD(a1)) >> 2;
    if ( v5 != 0 )
      j_memmove((void *)(a1 - 4 * v5), (const void *)HIDWORD(a1), 4 * v5);
    *(_DWORD *)HIDWORD(v4) = v4;
    return v12;
  }
  v6 = ((int)v3 - *(_DWORD *)a1) >> 2;
  if ( v6 == 0 )
  {
    v7 = 1;
    goto LABEL_11;
  }
  v7 = 2 * v6;
  v8 = 0x3FFFFFFF;
  if ( 2 * v6 >= v6 )
  {
LABEL_11:
    v8 = v7;
    if ( v7 > 0x3FFFFFFF )
      v8 = 0x3FFFFFFF;
  }
  LODWORD(v12) = (HIDWORD(a1) - *(_DWORD *)a1) >> 2;
  HIDWORD(v12) = 4 * v8;
  if ( v8 != 0 )
    v8 = operator new(4 * v8);
  v9 = (_DWORD *)(v8 + 4 * v12);
  if ( v9 != nullptr )
    *v9 = *a2;
  v10 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::SubMeshInstance *>(
          *(void **)v4,
          SHIDWORD(v4),
          (void *)v8);
  HIDWORD(v4) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::SubMeshInstance *>(
                  (void *)HIDWORD(v4),
                  *(_DWORD *)(v4 + 4),
                  (void *)(v10 + 4));
  if ( *(_DWORD *)v4 != 0 )
    operator delete(*(void **)v4);
  *(_DWORD *)v4 = v8;
  *(_DWORD *)(v4 + 4) = HIDWORD(v4);
  *(_DWORD *)(v4 + 8) = v8 + HIDWORD(v12);
  return v12;
}


//======================================================================
// std::vector<Ogre::SubMeshInstance *,std::allocator<Ogre::SubMeshInstance *>>::push_back(Ogre::SubMeshInstance * const&)
// address: 0x0018ABB4   size: 0x22 (34 bytes)
//======================================================================
int __fastcall std::vector<Ogre::SubMeshInstance *>::push_back(__int64 a1)
{
  _DWORD *v1; // r2

  v1 = (_DWORD *)HIDWORD(a1);
  HIDWORD(a1) = *(_DWORD *)(a1 + 4);
  if ( HIDWORD(a1) == *(_DWORD *)(a1 + 8) )
  {
    LODWORD(a1) = std::vector<Ogre::SubMeshInstance *>::_M_insert_aux(a1, v1);
  }
  else
  {
    if ( HIDWORD(a1) != 0 )
      *(_DWORD *)HIDWORD(a1) = *v1;
    *(_DWORD *)(a1 + 4) += 4;
  }
  return a1;
}


//======================================================================
// std::vector<Ogre::MeshInstance *,std::allocator<Ogre::MeshInstance *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::MeshInstance **,std::vector<Ogre::MeshInstance *,std::allocator<Ogre::MeshInstance *>>>,Ogre::MeshInstance * const&)
// address: 0x0018AD68   size: 0xA6 (166 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::MeshInstance *>::_M_insert_aux(__int64 a1, _DWORD *a2)
{
  _DWORD *v3; // r3
  __int64 v4; // r4
  int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r2
  int v8; // r6
  _DWORD *v9; // r3
  int v10; // r0
  __int64 v12; // [sp+0h] [bp-Ch]

  v12 = a1;
  v3 = *(_DWORD **)(a1 + 4);
  v4 = a1;
  if ( v3 != *(_DWORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
      *v3 = *(v3 - 1);
    LODWORD(a1) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v4 + 4) = a1 + 4;
    LODWORD(v4) = *a2;
    v5 = ((int)a1 - 4 - HIDWORD(a1)) >> 2;
    if ( v5 != 0 )
      j_memmove((void *)(a1 - 4 * v5), (const void *)HIDWORD(a1), 4 * v5);
    *(_DWORD *)HIDWORD(v4) = v4;
    return v12;
  }
  v6 = ((int)v3 - *(_DWORD *)a1) >> 2;
  if ( v6 == 0 )
  {
    v7 = 1;
    goto LABEL_11;
  }
  v7 = 2 * v6;
  v8 = 0x3FFFFFFF;
  if ( 2 * v6 >= v6 )
  {
LABEL_11:
    v8 = v7;
    if ( v7 > 0x3FFFFFFF )
      v8 = 0x3FFFFFFF;
  }
  LODWORD(v12) = (HIDWORD(a1) - *(_DWORD *)a1) >> 2;
  HIDWORD(v12) = 4 * v8;
  if ( v8 != 0 )
    v8 = operator new(4 * v8);
  v9 = (_DWORD *)(v8 + 4 * v12);
  if ( v9 != nullptr )
    *v9 = *a2;
  v10 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MeshInstance *>(
          *(void **)v4,
          SHIDWORD(v4),
          (void *)v8);
  HIDWORD(v4) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MeshInstance *>(
                  (void *)HIDWORD(v4),
                  *(_DWORD *)(v4 + 4),
                  (void *)(v10 + 4));
  if ( *(_DWORD *)v4 != 0 )
    operator delete(*(void **)v4);
  *(_DWORD *)v4 = v8;
  *(_DWORD *)(v4 + 4) = HIDWORD(v4);
  *(_DWORD *)(v4 + 8) = v8 + HIDWORD(v12);
  return v12;
}


//======================================================================
// std::vector<Ogre::MeshInstance *,std::allocator<Ogre::MeshInstance *>>::push_back(Ogre::MeshInstance * const&)
// address: 0x0018AE14   size: 0x22 (34 bytes)
//======================================================================
int __fastcall std::vector<Ogre::MeshInstance *>::push_back(__int64 a1)
{
  _DWORD *v1; // r2

  v1 = (_DWORD *)HIDWORD(a1);
  HIDWORD(a1) = *(_DWORD *)(a1 + 4);
  if ( HIDWORD(a1) == *(_DWORD *)(a1 + 8) )
  {
    LODWORD(a1) = std::vector<Ogre::MeshInstance *>::_M_insert_aux(a1, v1);
  }
  else
  {
    if ( HIDWORD(a1) != 0 )
      *(_DWORD *)HIDWORD(a1) = *v1;
    *(_DWORD *)(a1 + 4) += 4;
  }
  return a1;
}


//======================================================================
// std::vector<std::pair<int,Ogre::FixedString>,std::allocator<std::pair<int,Ogre::FixedString>>>::clear(void)
// address: 0x0018C29A   size: 0x1C (28 bytes)
//======================================================================
void __fastcall std::vector<std::pair<int,Ogre::FixedString>>::clear(int *a1, void *a2)
{
  int v2; // r6
  int v3; // r7
  int i; // r4

  v2 = *a1;
  v3 = a1[1];
  for ( i = *a1; i != v3; i += 8 )
    Ogre::FixedString::~FixedString((Ogre::FixedString **)(i + 4), a2);
  a1[1] = v2;
}


//======================================================================
// std::vector<std::pair<Ogre::Material *,float>,std::allocator<std::pair<Ogre::Material *,float>>>::back(void)
// address: 0x0018C2B6   size: 0x6 (6 bytes)
//======================================================================
int __fastcall std::vector<std::pair<Ogre::Material *,float>>::back(int a1)
{
  return *(_DWORD *)(a1 + 4) - 8;
}


//======================================================================
// std::vector<Ogre::ACTION_INFO,std::allocator<Ogre::ACTION_INFO>>::~vector()
// address: 0x0018C536   size: 0x24 (36 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIN4Ogre11ACTION_INFOESaIS1_EED1Ev'
Ogre::FixedString ***__fastcall std::vector<Ogre::ACTION_INFO>::~vector(Ogre::FixedString ***a1, void *a2)
{
  Ogre::FixedString **v2; // r5
  Ogre::FixedString **v3; // r6

  v2 = *a1;
  v3 = a1[1];
  while ( v2 != v3 )
  {
    Ogre::FixedString::~FixedString(v2, a2);
    v2 += 4;
  }
  if ( *a1 != nullptr )
    operator delete(*a1);
  return a1;
}


//======================================================================
// std::vector<Ogre::ACTION_INFO,std::allocator<Ogre::ACTION_INFO>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::ACTION_INFO*,std::vector<Ogre::ACTION_INFO,std::allocator<Ogre::ACTION_INFO>>>,Ogre::ACTION_INFO const&)
// address: 0x0018C59C   size: 0x170 (368 bytes)
//======================================================================
void __fastcall std::vector<Ogre::ACTION_INFO>::_M_insert_aux(int a1, int a2, int a3)
{
  int v4; // r6
  int v6; // r0
  int v7; // r4
  int v8; // r2
  int v9; // r4
  int v10; // r5
  int v11; // r2
  int v12; // r3
  void *v13; // r1
  Ogre::FixedString **v14; // r1
  unsigned int v15; // r2
  unsigned int v16; // r3
  int v17; // r7
  int v18; // r6
  int v19; // r6
  Ogre::FixedString *v20; // r0
  Ogre::FixedString **v21; // r6
  int v22; // r5
  int v23; // r0
  int v24; // r5
  int v25; // r0
  Ogre::FixedString **v26; // r6
  int v27; // [sp+4h] [bp-20h]
  Ogre::FixedString **v29; // [sp+8h] [bp-1Ch]
  Ogre::FixedString **v30; // [sp+8h] [bp-1Ch]
  Ogre::FixedString *v31; // [sp+10h] [bp-14h] BYREF
  int v32; // [sp+14h] [bp-10h]
  char v33; // [sp+18h] [bp-Ch]
  int v34; // [sp+1Ch] [bp-8h]

  v4 = *(_DWORD *)(a1 + 4);
  if ( v4 != *(_DWORD *)(a1 + 8) )
  {
    if ( v4 != 0 )
    {
      v6 = *(_DWORD *)(v4 - 16);
      *(_DWORD *)v4 = v6;
      Ogre::FixedString::addRef(v6, (void *)a2);
      *(_DWORD *)(v4 + 4) = *(_DWORD *)(v4 - 12);
      *(_BYTE *)(v4 + 8) = *(_BYTE *)(v4 - 8);
      *(_DWORD *)(v4 + 12) = *(_DWORD *)(v4 - 4);
    }
    *(_DWORD *)(a1 + 4) += 16;
    v31 = *(Ogre::FixedString **)a3;
    Ogre::FixedString::addRef((int)v31, (void *)a2);
    v7 = *(_DWORD *)(a1 + 4);
    v8 = *(_DWORD *)(a3 + 4);
    v33 = *(_BYTE *)(a3 + 8);
    v9 = v7 - 32;
    v34 = *(_DWORD *)(a3 + 12);
    v32 = v8;
    v10 = (v9 - a2) >> 4;
    while ( v10 > 0 )
    {
      v9 -= 16;
      Ogre::FixedString::operator=((int *)(v9 + 16), (int *)v9);
      v11 = *(_DWORD *)(v9 + 4);
      --v10;
      *(_BYTE *)(v9 + 24) = *(_BYTE *)(v9 + 8);
      v12 = *(_DWORD *)(v9 + 12);
      *(_DWORD *)(v9 + 20) = v11;
      *(_DWORD *)(v9 + 28) = v12;
    }
    Ogre::FixedString::operator=((int *)a2, (int *)&v31);
    *(_DWORD *)(a2 + 4) = v32;
    *(_BYTE *)(a2 + 8) = v33;
    *(_DWORD *)(a2 + 12) = v34;
    Ogre::FixedString::~FixedString(&v31, v13);
    return;
  }
  v14 = *(Ogre::FixedString ***)a1;
  v15 = (v4 - *(_DWORD *)a1) >> 4;
  if ( v15 == 0 )
  {
    v16 = 1;
    goto LABEL_12;
  }
  v16 = 2 * v15;
  v17 = 0xFFFFFFF;
  if ( 2 * v15 >= v15 )
  {
LABEL_12:
    v17 = v16;
    if ( v16 > 0xFFFFFFF )
      v17 = 0xFFFFFFF;
  }
  v18 = (a2 - (int)v14) >> 4;
  if ( v17 != 0 )
    v27 = operator new(16 * v17);
  else
    v27 = 0;
  v19 = v27 + 16 * v18;
  if ( v19 != 0 )
  {
    v20 = *(Ogre::FixedString **)a3;
    *(_DWORD *)v19 = *(_DWORD *)a3;
    Ogre::FixedString::addRef((int)v20, v14);
    *(_DWORD *)(v19 + 4) = *(_DWORD *)(a3 + 4);
    *(_BYTE *)(v19 + 8) = *(_BYTE *)(a3 + 8);
    *(_DWORD *)(v19 + 12) = *(_DWORD *)(a3 + 12);
  }
  v21 = *(Ogre::FixedString ***)a1;
  v22 = v27;
  while ( v21 != (Ogre::FixedString **)a2 )
  {
    if ( v22 != 0 )
    {
      v23 = (int)*v21;
      *(_DWORD *)v22 = *v21;
      Ogre::FixedString::addRef(v23, v14);
      *(_DWORD *)(v22 + 4) = v21[1];
      *(_BYTE *)(v22 + 8) = *((_BYTE *)v21 + 8);
      *(_DWORD *)(v22 + 12) = v21[3];
    }
    v21 += 4;
    v22 += 16;
  }
  v24 = v22 + 16;
  v29 = *(Ogre::FixedString ***)(a1 + 4);
  while ( v21 != v29 )
  {
    if ( v24 != 0 )
    {
      v25 = (int)*v21;
      *(_DWORD *)v24 = *v21;
      Ogre::FixedString::addRef(v25, v14);
      *(_DWORD *)(v24 + 4) = v21[1];
      *(_BYTE *)(v24 + 8) = *((_BYTE *)v21 + 8);
      *(_DWORD *)(v24 + 12) = v21[3];
    }
    v24 += 16;
    v21 += 4;
  }
  v26 = *(Ogre::FixedString ***)a1;
  v30 = *(Ogre::FixedString ***)(a1 + 4);
  while ( v26 != v30 )
  {
    Ogre::FixedString::~FixedString(v26, v14);
    v26 += 4;
  }
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)(a1 + 4) = v24;
  *(_DWORD *)a1 = v27;
  *(_DWORD *)(a1 + 8) = v27 + 16 * v17;
}


//======================================================================
// std::vector<Ogre::ACTION_INFO,std::allocator<Ogre::ACTION_INFO>>::push_back(Ogre::ACTION_INFO const&)
// address: 0x0018C710   size: 0x38 (56 bytes)
//======================================================================
void __fastcall std::vector<Ogre::ACTION_INFO>::push_back(int a1, int *a2)
{
  int v2; // r4
  int v5; // r0

  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 == *(_DWORD *)(a1 + 8) )
  {
    std::vector<Ogre::ACTION_INFO>::_M_insert_aux(a1, *(_DWORD *)(a1 + 4), (int)a2);
  }
  else
  {
    if ( v2 != 0 )
    {
      v5 = *a2;
      *(_DWORD *)v2 = *a2;
      Ogre::FixedString::addRef(v5, a2);
      *(_DWORD *)(v2 + 4) = a2[1];
      *(_BYTE *)(v2 + 8) = *((_BYTE *)a2 + 8);
      *(_DWORD *)(v2 + 12) = a2[3];
    }
    *(_DWORD *)(a1 + 4) += 16;
  }
}


//======================================================================
// std::vector<std::pair<Ogre::Material *,float>,std::allocator<std::pair<Ogre::Material *,float>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<std::pair<Ogre::Material *,float>*,std::vector<std::pair<Ogre::Material *,float>,std::allocator<std::pair<Ogre::Material *,float>>>>,std::pair<Ogre::Material *,float> const&)
// address: 0x0018C924   size: 0xFC (252 bytes)
//======================================================================
__int64 __fastcall std::vector<std::pair<Ogre::Material *,float>>::_M_insert_aux(__int64 a1, int *a2)
{
  _DWORD *v2; // r3
  int v3; // r4
  _DWORD *v5; // r3
  int v6; // r4
  _DWORD *v7; // r2
  unsigned int v8; // r3
  unsigned int v9; // r2
  int v10; // r5
  _DWORD *v11; // r6
  int *v12; // r3
  char *v13; // r0
  _DWORD *v14; // r2
  char *i; // r3
  unsigned int v16; // r0
  char *v17; // r12
  char *v18; // r2
  _DWORD *v19; // r1
  unsigned int v20; // r7
  __int64 v22; // [sp+0h] [bp-Ch]

  v22 = a1;
  v2 = *(_DWORD **)(a1 + 4);
  v3 = a1;
  if ( v2 != *(_DWORD **)(a1 + 8) )
  {
    if ( v2 != nullptr )
    {
      *v2 = *(v2 - 2);
      v2[1] = *(v2 - 1);
    }
    v5 = *(_DWORD **)(a1 + 4);
    *(_DWORD *)(a1 + 4) = v5 + 2;
    v6 = *a2;
    LODWORD(a1) = a2[1];
    v7 = v5 - 2;
    HIDWORD(a1) = ((int)v5 - HIDWORD(a1) - 8) >> 3;
    while ( a1 > 0 )
    {
      v7 -= 2;
      v5 -= 2;
      --HIDWORD(a1);
      *v5 = *v7;
      v5[1] = v7[1];
    }
    *(_DWORD *)HIDWORD(v22) = v6;
    *(_DWORD *)(HIDWORD(v22) + 4) = a1;
    return v22;
  }
  v8 = ((int)v2 - *(_DWORD *)a1) >> 3;
  if ( v8 == 0 )
  {
    v9 = 1;
    goto LABEL_12;
  }
  v9 = 2 * v8;
  v10 = 0x1FFFFFFF;
  if ( 2 * v8 >= v8 )
  {
LABEL_12:
    v10 = v9;
    if ( v9 > 0x1FFFFFFF )
      v10 = 0x1FFFFFFF;
  }
  LODWORD(v22) = (HIDWORD(a1) - *(_DWORD *)a1) >> 3;
  if ( v10 != 0 )
    v11 = (_DWORD *)operator new(8 * v10);
  else
    v11 = nullptr;
  v12 = &v11[2 * v22];
  if ( v12 != nullptr )
  {
    *v12 = *a2;
    v12[1] = a2[1];
  }
  v13 = *(char **)v3;
  v14 = v11;
  for ( i = *(char **)v3; i != (char *)HIDWORD(v22); i += 8 )
  {
    if ( v14 != nullptr )
    {
      *v14 = *(_DWORD *)i;
      v14[1] = *((_DWORD *)i + 1);
    }
    v14 += 2;
  }
  v16 = (unsigned int)&v11[2 * ((unsigned int)(i - v13) >> 3) + 2];
  v17 = *(char **)(v3 + 4);
  v18 = i;
  v19 = (_DWORD *)v16;
  while ( v18 != v17 )
  {
    if ( v19 != nullptr )
    {
      *v19 = *(_DWORD *)v18;
      v19[1] = *((_DWORD *)v18 + 1);
    }
    v19 += 2;
    v18 += 8;
  }
  v20 = v16 + 8 * ((unsigned int)(v18 - i) >> 3);
  if ( *(_DWORD *)v3 != 0 )
    operator delete(*(void **)v3);
  *(_DWORD *)v3 = v11;
  *(_DWORD *)(v3 + 4) = v20;
  *(_DWORD *)(v3 + 8) = &v11[2 * v10];
  return v22;
}


//======================================================================
// std::vector<std::pair<int,Ogre::FixedString>,std::allocator<std::pair<int,Ogre::FixedString>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<std::pair<int,Ogre::FixedString>*,std::vector<std::pair<int,Ogre::FixedString>,std::allocator<std::pair<int,Ogre::FixedString>>>>,std::pair<int,Ogre::FixedString> const&)
// address: 0x0018CA68   size: 0x13C (316 bytes)
//======================================================================
void __fastcall std::vector<std::pair<int,Ogre::FixedString>>::_M_insert_aux(
        Ogre::FixedString ***a1,
        Ogre::FixedString **a2,
        Ogre::FixedString **a3)
{
  Ogre::FixedString **v4; // r3
  Ogre::FixedString **v6; // r7
  int v7; // r0
  Ogre::FixedString **v8; // r4
  int i; // r5
  void *v10; // r1
  int v11; // r1
  unsigned int v12; // r3
  unsigned int v13; // r2
  int v14; // r6
  Ogre::FixedString **v15; // r6
  int v16; // r0
  Ogre::FixedString **v17; // r5
  Ogre::FixedString **j; // r6
  int v19; // r0
  Ogre::FixedString **v20; // r6
  int v21; // r0
  Ogre::FixedString **v22; // r5
  Ogre::FixedString **v23; // r7
  int v24; // [sp+0h] [bp-1Ch]
  Ogre::FixedString **v25; // [sp+8h] [bp-14h]
  Ogre::FixedString **v26; // [sp+Ch] [bp-10h]
  Ogre::FixedString *v27; // [sp+10h] [bp-Ch]
  Ogre::FixedString *v28[2]; // [sp+14h] [bp-8h] BYREF

  v4 = a1[1];
  v6 = a2;
  if ( v4 != a1[2] )
  {
    if ( v4 != nullptr )
    {
      *v4 = *(v4 - 2);
      v7 = (int)*(v4 - 1);
      v4[1] = (Ogre::FixedString *)v7;
      Ogre::FixedString::addRef(v7, a2);
    }
    a1[1] += 2;
    v27 = *a3;
    v28[0] = a3[1];
    Ogre::FixedString::addRef((int)v28[0], a2);
    v8 = a1[1] - 4;
    for ( i = ((char *)v8 - (char *)v6) >> 3; i > 0; --i )
    {
      v8 -= 2;
      v8[2] = *v8;
      Ogre::FixedString::operator=((int *)v8 + 3, (int *)v8 + 1);
    }
    *v6 = v27;
    Ogre::FixedString::operator=((int *)v6 + 1, (int *)v28);
    Ogre::FixedString::~FixedString(v28, v10);
    return;
  }
  v11 = 0x1FFFFFFF;
  v12 = ((char *)v4 - (char *)*a1) >> 3;
  if ( v12 == 0 )
  {
    v13 = 1;
    goto LABEL_12;
  }
  v13 = 2 * v12;
  v24 = 0x1FFFFFFF;
  if ( 2 * v12 >= v12 )
  {
LABEL_12:
    v24 = v13;
    if ( v13 > 0x1FFFFFFF )
      v24 = 0x1FFFFFFF;
  }
  v14 = ((char *)v6 - (char *)*a1) >> 3;
  if ( v24 != 0 )
    v25 = (Ogre::FixedString **)operator new(8 * v24);
  else
    v25 = nullptr;
  v15 = &v25[2 * v14];
  if ( v15 != nullptr )
  {
    *v15 = *a3;
    v16 = (int)a3[1];
    v15[1] = (Ogre::FixedString *)v16;
    Ogre::FixedString::addRef(v16, (void *)v11);
  }
  v17 = v25;
  for ( j = *a1; j != v6; j += 2 )
  {
    if ( v17 != nullptr )
    {
      *v17 = *j;
      v19 = (int)j[1];
      v17[1] = (Ogre::FixedString *)v19;
      Ogre::FixedString::addRef(v19, (void *)v11);
    }
    v17 += 2;
  }
  v26 = a1[1];
  v20 = v17 + 2;
  while ( v6 != v26 )
  {
    if ( v20 != nullptr )
    {
      *v20 = *v6;
      v21 = (int)v6[1];
      v20[1] = (Ogre::FixedString *)v21;
      Ogre::FixedString::addRef(v21, (void *)v11);
    }
    v20 += 2;
    v6 += 2;
  }
  v22 = *a1;
  v23 = a1[1];
  while ( v22 != v23 )
  {
    Ogre::FixedString::~FixedString(v22 + 1, (void *)v11);
    v22 += 2;
  }
  if ( *a1 != nullptr )
    operator delete(*a1);
  a1[1] = v20;
  *a1 = v25;
  a1[2] = &v25[2 * v24];
}


//======================================================================
// std::vector<Ogre::ModelMotion *,std::allocator<Ogre::ModelMotion *>>::_M_check_len(unsigned int,char const*)const
// address: 0x0018CC2C   size: 0x2C (44 bytes)
//======================================================================
unsigned int __fastcall std::vector<Ogre::ModelMotion *>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = (a1[1] - *a1) >> 2;
  if ( 0x3FFFFFFF - v3 < a2 )
    sub_3BD058(a3);
  v4 = (a1[1] - *a1) >> 2;
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0x3FFFFFFF )
    return 0x3FFFFFFF;
  return result;
}


//======================================================================
// std::vector<Ogre::Entity::BindObj *,std::allocator<Ogre::Entity::BindObj *>>::erase(__gnu_cxx::__normal_iterator<Ogre::Entity::BindObj **,std::vector<Ogre::Entity::BindObj *,std::allocator<Ogre::Entity::BindObj *>>>)
// address: 0x0018CD04   size: 0x1E (30 bytes)
//======================================================================
char *__fastcall std::vector<Ogre::Entity::BindObj *>::erase(int a1, char *a2)
{
  char *v4; // r0
  int v5; // r1

  v4 = a2 + 4;
  v5 = *(_DWORD *)(a1 + 4);
  if ( v4 != (char *)v5 )
    std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::Entity::BindObj *>(v4, v5, a2);
  *(_DWORD *)(a1 + 4) -= 4;
  return a2;
}


//======================================================================
// std::vector<Ogre::MotionEventHandler *,std::allocator<Ogre::MotionEventHandler *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::MotionEventHandler **,std::vector<Ogre::MotionEventHandler *,std::allocator<Ogre::MotionEventHandler *>>>,Ogre::MotionEventHandler * const&)
// address: 0x0018CDD8   size: 0xA6 (166 bytes)
//======================================================================
unsigned __int64 __fastcall std::vector<Ogre::MotionEventHandler *>::_M_insert_aux(int a1, _DWORD *a2, int *a3)
{
  _DWORD *v3; // r3
  int v6; // r0
  int v7; // r4
  int v8; // r2
  unsigned int v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // r5
  int v12; // r7
  _DWORD *v13; // r7
  int v14; // r0
  int v15; // r6
  unsigned __int64 v17; // [sp+0h] [bp-Ch]

  v17 = __PAIR64__((unsigned int)a2, (unsigned int)a3);
  v3 = *(_DWORD **)(a1 + 4);
  if ( v3 != *(_DWORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
      *v3 = *(v3 - 1);
    v6 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 4) = v6 + 4;
    v7 = *a3;
    v8 = (v6 - 4 - (int)a2) >> 2;
    if ( v8 != 0 )
      j_memmove((void *)(v6 - 4 * v8), a2, 4 * v8);
    *a2 = v7;
    return v17;
  }
  v9 = ((int)v3 - *(_DWORD *)a1) >> 2;
  if ( v9 == 0 )
  {
    v10 = 1;
    goto LABEL_11;
  }
  v10 = 2 * v9;
  v11 = 0x3FFFFFFF;
  if ( 2 * v9 >= v9 )
  {
LABEL_11:
    v11 = v10;
    if ( v10 > 0x3FFFFFFF )
      v11 = 0x3FFFFFFF;
  }
  v12 = ((int)a2 - *(_DWORD *)a1) >> 2;
  if ( v11 != 0 )
    HIDWORD(v17) = sub_18B528(v11);
  else
    HIDWORD(v17) = 0;
  v13 = (_DWORD *)(HIDWORD(v17) + 4 * v12);
  if ( v13 != nullptr )
    *v13 = *(_DWORD *)v17;
  v14 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MotionEventHandler *>(
          *(void **)a1,
          (int)a2,
          (void *)HIDWORD(v17));
  v15 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MotionEventHandler *>(
          a2,
          *(_DWORD *)(a1 + 4),
          (void *)(v14 + 4));
  sub_18B51C(*(void **)a1);
  *(_DWORD *)(a1 + 4) = v15;
  *(_DWORD *)a1 = HIDWORD(v17);
  *(_DWORD *)(a1 + 8) = HIDWORD(v17) + 4 * v11;
  return v17;
}


//======================================================================
// std::vector<Ogre::MotionEventHandler *,std::allocator<Ogre::MotionEventHandler *>>::operator=(std::vector<Ogre::MotionEventHandler *,std::allocator<Ogre::MotionEventHandler *>> const&)
// address: 0x0018CE84   size: 0x84 (132 bytes)
//======================================================================
int __fastcall std::vector<Ogre::MotionEventHandler *>::operator=(int a1, int a2)
{
  int v4; // r7
  void *v5; // r6
  void *v6; // r2
  unsigned int v7; // r0
  unsigned int v8; // r5
  unsigned int v9; // r1
  void *v10; // r0
  int v11; // r1
  int v13; // [sp+4h] [bp-8h]

  if ( a2 != a1 )
  {
    v4 = *(_DWORD *)(a2 + 4);
    v5 = *(void **)a2;
    v6 = *(void **)a1;
    v7 = (v4 - *(_DWORD *)a2) >> 2;
    v13 = 4 * v7;
    if ( v7 <= (*(_DWORD *)(a1 + 8) - *(_DWORD *)a1) >> 2 )
    {
      v9 = (*(_DWORD *)(a1 + 4) - (int)v6) >> 2;
      if ( v9 < v7 )
      {
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MotionEventHandler *>(
          v5,
          (int)v5 + 4 * v9,
          v6);
        v6 = *(void **)(a1 + 4);
        v11 = *(_DWORD *)(a2 + 4);
        v10 = (void *)(*(_DWORD *)a2 + 4 * (((int)v6 - *(_DWORD *)a1) >> 2));
      }
      else
      {
        v10 = v5;
        v11 = v4;
      }
      std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MotionEventHandler *>(v10, v11, v6);
    }
    else
    {
      if ( v7 != 0 )
        v7 = sub_18B528(v7);
      v8 = v7;
      std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MotionEventHandler *>(
        v5,
        v4,
        (void *)v7);
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)a1 = v8;
      *(_DWORD *)(a1 + 8) = v8 + v13;
    }
    *(_DWORD *)(a1 + 4) = *(_DWORD *)a1 + v13;
  }
  return a1;
}


//======================================================================
// std::vector<Ogre::MotionEventHandler *,std::allocator<Ogre::MotionEventHandler *>>::vector(std::vector<Ogre::MotionEventHandler *,std::allocator<Ogre::MotionEventHandler *>> const&)
// address: 0x0018CF08   size: 0x3C (60 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIPN4Ogre18MotionEventHandlerESaIS2_EEC1ERKS4_'
_DWORD *__fastcall std::vector<Ogre::MotionEventHandler *>::vector(_DWORD *a1, int a2)
{
  unsigned int v4; // r6
  char *v5; // r2

  v4 = (*(_DWORD *)(a2 + 4) - *(_DWORD *)a2) >> 2;
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  if ( v4 != 0 )
    v5 = (char *)sub_18B528(v4);
  else
    v5 = nullptr;
  a1[2] = &v5[4 * v4];
  *a1 = v5;
  a1[1] = v5;
  a1[1] = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MotionEventHandler *>(
            *(void **)a2,
            *(_DWORD *)(a2 + 4),
            v5);
  return a1;
}


//======================================================================
// std::vector<Ogre::Entity::BindObj *,std::allocator<Ogre::Entity::BindObj *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::Entity::BindObj **,std::vector<Ogre::Entity::BindObj *,std::allocator<Ogre::Entity::BindObj *>>>,Ogre::Entity::BindObj * const&)
// address: 0x0018D124   size: 0x9C (156 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::Entity::BindObj *>::_M_insert_aux(__int64 a1, int *a2)
{
  _DWORD *v3; // r3
  int v5; // r2
  int v6; // r4
  unsigned int v7; // r3
  unsigned int v8; // r2
  int v9; // r5
  int *v10; // r3
  int v11; // r0
  __int64 v13; // [sp+0h] [bp-Ch]

  v13 = a1;
  v3 = *(_DWORD **)(a1 + 4);
  if ( v3 != *(_DWORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
      *v3 = *(v3 - 1);
    v5 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 4) = v5 + 4;
    v6 = *a2;
    std::__copy_move_backward<false,true,std::random_access_iterator_tag>::__copy_move_b<Ogre::Entity::BindObj *>(
      (void *)HIDWORD(a1),
      v5 - 4,
      v5);
    *(_DWORD *)HIDWORD(a1) = v6;
    return v13;
  }
  v7 = ((int)v3 - *(_DWORD *)a1) >> 2;
  if ( v7 == 0 )
  {
    v8 = 1;
    goto LABEL_9;
  }
  v8 = 2 * v7;
  v9 = 0x3FFFFFFF;
  if ( 2 * v7 >= v7 )
  {
LABEL_9:
    v9 = v8;
    if ( v8 > 0x3FFFFFFF )
      v9 = 0x3FFFFFFF;
  }
  LODWORD(v13) = (HIDWORD(a1) - *(_DWORD *)a1) >> 2;
  HIDWORD(v13) = 4 * v9;
  if ( v9 != 0 )
    v9 = operator new(4 * v9);
  v10 = (int *)(v9 + 4 * v13);
  if ( v10 != nullptr )
    *v10 = *a2;
  v11 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::Entity::BindObj *>(
          *(void **)a1,
          SHIDWORD(a1),
          (void *)v9);
  std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::Entity::BindObj *>(
    (void *)HIDWORD(a1),
    *(_DWORD *)(a1 + 4),
    (void *)(v11 + 4));
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v9;
  *(_DWORD *)(a1 + 4) = HIDWORD(a1);
  *(_DWORD *)(a1 + 8) = v9 + HIDWORD(v13);
  return v13;
}


//======================================================================
// std::vector<Ogre::Entity::BindObj *,std::allocator<Ogre::Entity::BindObj *>>::push_back(Ogre::Entity::BindObj * const&)
// address: 0x0018D1C4   size: 0x22 (34 bytes)
//======================================================================
int __fastcall std::vector<Ogre::Entity::BindObj *>::push_back(__int64 a1)
{
  int *v1; // r2

  v1 = (int *)HIDWORD(a1);
  HIDWORD(a1) = *(_DWORD *)(a1 + 4);
  if ( HIDWORD(a1) == *(_DWORD *)(a1 + 8) )
  {
    LODWORD(a1) = std::vector<Ogre::Entity::BindObj *>::_M_insert_aux(a1, v1);
  }
  else
  {
    if ( HIDWORD(a1) != 0 )
      *(_DWORD *)HIDWORD(a1) = *v1;
    *(_DWORD *)(a1 + 4) += 4;
  }
  return a1;
}


//======================================================================
// std::vector<Ogre::ModelMotion *,std::allocator<Ogre::ModelMotion *>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::ModelMotion **,std::vector<Ogre::ModelMotion *,std::allocator<Ogre::ModelMotion *>>>,unsigned int,Ogre::ModelMotion * const&)
// address: 0x0018E120   size: 0x104 (260 bytes)
//======================================================================
void __fastcall std::vector<Ogre::ModelMotion *>::_M_fill_insert(void **a1, char *a2, unsigned int a3, void **a4)
{
  char *v5; // r5
  char *v7; // r7
  int v8; // r6
  char *v9; // r6
  char *v10; // r2
  unsigned int v11; // r0
  unsigned int v12; // r7
  char *v13; // r2
  void *v14; // r1
  unsigned int v15; // r3
  int v16; // r0
  int v17; // r5
  unsigned int v19; // [sp+4h] [bp-10h]
  void *v20; // [sp+8h] [bp-Ch]
  char *v21; // [sp+8h] [bp-Ch]
  int v22; // [sp+Ch] [bp-8h]

  v5 = a2;
  if ( a3 != 0 )
  {
    v7 = (char *)a1[1];
    if ( ((_BYTE *)a1[2] - v7) >> 2 < a3 )
    {
      v11 = std::vector<Ogre::ModelMotion *>::_M_check_len(a1, a3, (int)"vector::_M_fill_insert");
      v12 = v11;
      v22 = (v5 - (_BYTE *)*a1) >> 2;
      if ( v11 != 0 )
      {
        if ( v11 > 0x3FFFFFFF )
          sub_3BCEB4(v11);
        v21 = (char *)operator new(4 * v11);
      }
      else
      {
        v21 = nullptr;
      }
      v13 = &v21[4 * v22];
      v14 = *a4;
      v15 = a3;
      do
      {
        --v15;
        *(_DWORD *)v13 = v14;
        v13 += 4;
      }
      while ( v15 != 0 );
      v16 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ModelMotion *>(
              *a1,
              (int)v5,
              v21);
      v17 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ModelMotion *>(
              v5,
              (int)a1[1],
              (void *)(v16 + 4 * a3));
      if ( *a1 != nullptr )
        operator delete(*a1);
      a1[1] = (void *)v17;
      *a1 = v21;
      a1[2] = &v21[4 * v12];
    }
    else
    {
      v19 = (v7 - a2) >> 2;
      v20 = *a4;
      if ( v19 <= a3 )
      {
        memset32(v7, (int)v20, a3 - v19);
        v10 = (char *)a1[1] + 4 * (a3 - v19);
        a1[1] = v10;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ModelMotion *>(a2, (int)v7, v10);
        a1[1] = (char *)a1[1] + 4 * v19;
        while ( v5 != v7 )
        {
          *(_DWORD *)v5 = v20;
          v5 += 4;
        }
      }
      else
      {
        v8 = 4 * a3;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ModelMotion *>(
          &v7[-4 * a3],
          (int)v7,
          v7);
        a1[1] = (char *)a1[1] + v8;
        std::copy_backward<Ogre::ModelMotion **,Ogre::ModelMotion **>(v5, (int)&v7[-v8], (int)v7);
        v9 = &v5[v8];
        while ( v5 != v9 )
        {
          *(_DWORD *)v5 = v20;
          v5 += 4;
        }
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::MovableObject *,std::allocator<Ogre::MovableObject *>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::MovableObject **,std::vector<Ogre::MovableObject *,std::allocator<Ogre::MovableObject *>>>,unsigned int,Ogre::MovableObject * const&)
// address: 0x0018E260   size: 0x120 (288 bytes)
//======================================================================
void __fastcall std::vector<Ogre::MovableObject *>::_M_fill_insert(int a1, _DWORD *a2, unsigned int a3, void **a4)
{
  _DWORD *v5; // r5
  _BYTE *v7; // r7
  int v8; // r6
  _DWORD *v9; // r6
  void *v10; // r2
  unsigned int v11; // r3
  unsigned int v12; // r7
  unsigned int v13; // r7
  char *v14; // r2
  void *v15; // r1
  unsigned int v16; // r3
  int v17; // r0
  int v18; // r5
  unsigned int v20; // [sp+4h] [bp-10h]
  void *v21; // [sp+8h] [bp-Ch]
  char *v22; // [sp+8h] [bp-Ch]
  int v23; // [sp+Ch] [bp-8h]

  v5 = a2;
  if ( a3 != 0 )
  {
    v7 = *(_BYTE **)(a1 + 4);
    if ( (*(_DWORD *)(a1 + 8) - (int)v7) >> 2 < a3 )
    {
      v11 = (int)&v7[-*(_DWORD *)a1] >> 2;
      if ( 0x3FFFFFFF - v11 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v12 = a3;
      if ( a3 < v11 )
        v12 = v11;
      v13 = v12 + v11;
      if ( v13 < v11 || v13 > 0x3FFFFFFF )
        v13 = 0x3FFFFFFF;
      v23 = ((int)a2 - *(_DWORD *)a1) >> 2;
      if ( v13 != 0 )
        v22 = (char *)operator new(4 * v13);
      else
        v22 = nullptr;
      v14 = &v22[4 * v23];
      v15 = *a4;
      v16 = a3;
      do
      {
        --v16;
        *(_DWORD *)v14 = v15;
        v14 += 4;
      }
      while ( v16 != 0 );
      v17 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MovableObject *>(
              *(void **)a1,
              (int)v5,
              v22);
      v18 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MovableObject *>(
              v5,
              *(_DWORD *)(a1 + 4),
              (void *)(v17 + 4 * a3));
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)(a1 + 4) = v18;
      *(_DWORD *)a1 = v22;
      *(_DWORD *)(a1 + 8) = &v22[4 * v13];
    }
    else
    {
      v20 = (v7 - (_BYTE *)a2) >> 2;
      v21 = *a4;
      if ( v20 <= a3 )
      {
        memset32(v7, (int)v21, a3 - v20);
        v10 = (void *)(*(_DWORD *)(a1 + 4) + 4 * (a3 - v20));
        *(_DWORD *)(a1 + 4) = v10;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MovableObject *>(a2, (int)v7, v10);
        *(_DWORD *)(a1 + 4) += 4 * v20;
        while ( v5 != (_DWORD *)v7 )
          *v5++ = v21;
      }
      else
      {
        v8 = 4 * a3;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MovableObject *>(
          &v7[-4 * a3],
          (int)v7,
          v7);
        *(_DWORD *)(a1 + 4) += v8;
        if ( (&v7[-v8] - (_BYTE *)v5) >> 2 != 0 )
          j_memmove(&v7[-4 * ((&v7[-v8] - (_BYTE *)v5) >> 2)], v5, 4 * ((&v7[-v8] - (_BYTE *)v5) >> 2));
        v9 = &v5[v8 / 4u];
        while ( v5 != v9 )
          *v5++ = v21;
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::FixedString,std::allocator<Ogre::FixedString>>::operator=(std::vector<Ogre::FixedString,std::allocator<Ogre::FixedString>> const&)
// address: 0x00191024   size: 0x118 (280 bytes)
//======================================================================
int __fastcall std::vector<Ogre::FixedString>::operator=(int a1, int **a2)
{
  int *v4; // r5
  int v5; // r7
  int *k; // r6
  int *v7; // r1
  int v8; // r0
  int *v9; // r5
  int *v10; // r6
  int v11; // r0
  int v12; // r7
  int v13; // r6
  int *v14; // r7
  int *v15; // r1
  Ogre::FixedString **v16; // r6
  Ogre::FixedString **j; // r5
  int *v18; // r5
  int *v19; // r1
  int *v20; // r6
  int *i; // r7
  int v22; // r0
  unsigned int v24; // [sp+4h] [bp-10h]
  int *v25; // [sp+8h] [bp-Ch]
  int *v26; // [sp+Ch] [bp-8h]

  if ( a2 != (int **)a1 )
  {
    v4 = *a2;
    v26 = a2[1];
    v24 = v26 - *a2;
    v25 = *(int **)a1;
    if ( v24 <= (*(_DWORD *)(a1 + 8) - *(_DWORD *)a1) >> 2 )
    {
      v12 = (*(_DWORD *)(a1 + 4) - (int)v25) >> 2;
      if ( v12 < v24 )
      {
        while ( v12 > 0 )
        {
          Ogre::FixedString::operator=(v25, v4++);
          --v12;
          ++v25;
        }
        v18 = *(int **)(a1 + 4);
        v19 = *a2;
        v20 = a2[1];
        for ( i = &v19[((int)v18 - *(_DWORD *)a1) >> 2]; i != v20; ++i )
        {
          if ( v18 != nullptr )
          {
            v22 = *i;
            *v18 = *i;
            Ogre::FixedString::addRef(v22, v19);
          }
          ++v18;
        }
      }
      else
      {
        v13 = v26 - *a2;
        v14 = *(int **)a1;
        while ( v13 > 0 )
        {
          Ogre::FixedString::operator=(v14++, v4++);
          --v13;
        }
        v15 = v25;
        v16 = *(Ogre::FixedString ***)(a1 + 4);
        for ( j = (Ogre::FixedString **)&v25[((int)~v24 >> 31) & v24]; j != v16; ++j )
          Ogre::FixedString::~FixedString(j, v15);
      }
    }
    else
    {
      if ( v24 != 0 )
      {
        if ( v24 > 0x3FFFFFFF )
          sub_3BCEB4(a1);
        v5 = operator new(4 * v24);
      }
      else
      {
        v5 = v26 - *a2;
      }
      for ( k = (int *)v5; ; ++k )
      {
        v7 = v26;
        if ( v4 == v26 )
          break;
        if ( k != nullptr )
        {
          v8 = *v4;
          *k = *v4;
          Ogre::FixedString::addRef(v8, v26);
        }
        ++v4;
      }
      v9 = *(int **)a1;
      v10 = *(int **)(a1 + 4);
      while ( v9 != v10 )
      {
        v11 = *v9++;
        Ogre::FixedString::release(v11, v7);
      }
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)a1 = v5;
      *(_DWORD *)(a1 + 8) = v5 + 4 * v24;
    }
    *(_DWORD *)(a1 + 4) = *(_DWORD *)a1 + 4 * v24;
  }
  return a1;
}


//======================================================================
// std::vector<Ogre::MotionEvent *,std::allocator<Ogre::MotionEvent *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::MotionEvent **,std::vector<Ogre::MotionEvent *,std::allocator<Ogre::MotionEvent *>>>,Ogre::MotionEvent * const&)
// address: 0x00191160   size: 0xA6 (166 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::MotionEvent *>::_M_insert_aux(__int64 a1, _DWORD *a2)
{
  _DWORD *v3; // r3
  __int64 v4; // r4
  int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r2
  int v8; // r6
  _DWORD *v9; // r3
  int v10; // r0
  __int64 v12; // [sp+0h] [bp-Ch]

  v12 = a1;
  v3 = *(_DWORD **)(a1 + 4);
  v4 = a1;
  if ( v3 != *(_DWORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
      *v3 = *(v3 - 1);
    LODWORD(a1) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v4 + 4) = a1 + 4;
    LODWORD(v4) = *a2;
    v5 = ((int)a1 - 4 - HIDWORD(a1)) >> 2;
    if ( v5 != 0 )
      j_memmove((void *)(a1 - 4 * v5), (const void *)HIDWORD(a1), 4 * v5);
    *(_DWORD *)HIDWORD(v4) = v4;
    return v12;
  }
  v6 = ((int)v3 - *(_DWORD *)a1) >> 2;
  if ( v6 == 0 )
  {
    v7 = 1;
    goto LABEL_11;
  }
  v7 = 2 * v6;
  v8 = 0x3FFFFFFF;
  if ( 2 * v6 >= v6 )
  {
LABEL_11:
    v8 = v7;
    if ( v7 > 0x3FFFFFFF )
      v8 = 0x3FFFFFFF;
  }
  LODWORD(v12) = (HIDWORD(a1) - *(_DWORD *)a1) >> 2;
  HIDWORD(v12) = 4 * v8;
  if ( v8 != 0 )
    v8 = operator new(4 * v8);
  v9 = (_DWORD *)(v8 + 4 * v12);
  if ( v9 != nullptr )
    *v9 = *a2;
  v10 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MotionEvent *>(
          *(void **)v4,
          SHIDWORD(v4),
          (void *)v8);
  HIDWORD(v4) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MotionEvent *>(
                  (void *)HIDWORD(v4),
                  *(_DWORD *)(v4 + 4),
                  (void *)(v10 + 4));
  if ( *(_DWORD *)v4 != 0 )
    operator delete(*(void **)v4);
  *(_DWORD *)v4 = v8;
  *(_DWORD *)(v4 + 4) = HIDWORD(v4);
  *(_DWORD *)(v4 + 8) = v8 + HIDWORD(v12);
  return v12;
}


//======================================================================
// std::vector<Ogre::DeathSceneObject *,std::allocator<Ogre::DeathSceneObject *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::DeathSceneObject **,std::vector<Ogre::DeathSceneObject *,std::allocator<Ogre::DeathSceneObject *>>>,Ogre::DeathSceneObject * const&)
// address: 0x00191A08   size: 0xA6 (166 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::DeathSceneObject *>::_M_insert_aux(__int64 a1, _DWORD *a2)
{
  _DWORD *v3; // r3
  __int64 v4; // r4
  int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r2
  int v8; // r6
  _DWORD *v9; // r3
  int v10; // r0
  __int64 v12; // [sp+0h] [bp-Ch]

  v12 = a1;
  v3 = *(_DWORD **)(a1 + 4);
  v4 = a1;
  if ( v3 != *(_DWORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
      *v3 = *(v3 - 1);
    LODWORD(a1) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v4 + 4) = a1 + 4;
    LODWORD(v4) = *a2;
    v5 = ((int)a1 - 4 - HIDWORD(a1)) >> 2;
    if ( v5 != 0 )
      j_memmove((void *)(a1 - 4 * v5), (const void *)HIDWORD(a1), 4 * v5);
    *(_DWORD *)HIDWORD(v4) = v4;
    return v12;
  }
  v6 = ((int)v3 - *(_DWORD *)a1) >> 2;
  if ( v6 == 0 )
  {
    v7 = 1;
    goto LABEL_11;
  }
  v7 = 2 * v6;
  v8 = 0x3FFFFFFF;
  if ( 2 * v6 >= v6 )
  {
LABEL_11:
    v8 = v7;
    if ( v7 > 0x3FFFFFFF )
      v8 = 0x3FFFFFFF;
  }
  LODWORD(v12) = (HIDWORD(a1) - *(_DWORD *)a1) >> 2;
  HIDWORD(v12) = 4 * v8;
  if ( v8 != 0 )
    v8 = operator new(4 * v8);
  v9 = (_DWORD *)(v8 + 4 * v12);
  if ( v9 != nullptr )
    *v9 = *a2;
  v10 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::DeathSceneObject *>(
          *(void **)v4,
          SHIDWORD(v4),
          (void *)v8);
  HIDWORD(v4) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::DeathSceneObject *>(
                  (void *)HIDWORD(v4),
                  *(_DWORD *)(v4 + 4),
                  (void *)(v10 + 4));
  if ( *(_DWORD *)v4 != 0 )
    operator delete(*(void **)v4);
  *(_DWORD *)v4 = v8;
  *(_DWORD *)(v4 + 4) = HIDWORD(v4);
  *(_DWORD *)(v4 + 8) = v8 + HIDWORD(v12);
  return v12;
}


//======================================================================
// std::vector<Ogre::AnimPlayTrack *,std::allocator<Ogre::AnimPlayTrack *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::AnimPlayTrack **,std::vector<Ogre::AnimPlayTrack *,std::allocator<Ogre::AnimPlayTrack *>>>,Ogre::AnimPlayTrack * const&)
// address: 0x00192C44   size: 0x9C (156 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::AnimPlayTrack *>::_M_insert_aux(__int64 a1, int *a2)
{
  _DWORD *v3; // r3
  int v5; // r2
  int v6; // r4
  unsigned int v7; // r3
  unsigned int v8; // r2
  int v9; // r5
  int *v10; // r3
  int v11; // r0
  __int64 v13; // [sp+0h] [bp-Ch]

  v13 = a1;
  v3 = *(_DWORD **)(a1 + 4);
  if ( v3 != *(_DWORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
      *v3 = *(v3 - 1);
    v5 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 4) = v5 + 4;
    v6 = *a2;
    std::copy_backward<Ogre::AnimPlayTrack **,Ogre::AnimPlayTrack **>((void *)HIDWORD(a1), v5 - 4, v5);
    *(_DWORD *)HIDWORD(a1) = v6;
    return v13;
  }
  v7 = ((int)v3 - *(_DWORD *)a1) >> 2;
  if ( v7 == 0 )
  {
    v8 = 1;
    goto LABEL_9;
  }
  v8 = 2 * v7;
  v9 = 0x3FFFFFFF;
  if ( 2 * v7 >= v7 )
  {
LABEL_9:
    v9 = v8;
    if ( v8 > 0x3FFFFFFF )
      v9 = 0x3FFFFFFF;
  }
  LODWORD(v13) = (HIDWORD(a1) - *(_DWORD *)a1) >> 2;
  HIDWORD(v13) = 4 * v9;
  if ( v9 != 0 )
    v9 = operator new(4 * v9);
  v10 = (int *)(v9 + 4 * v13);
  if ( v10 != nullptr )
    *v10 = *a2;
  v11 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::AnimPlayTrack *>(
          *(void **)a1,
          SHIDWORD(a1),
          (void *)v9);
  std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::AnimPlayTrack *>(
    (void *)HIDWORD(a1),
    *(_DWORD *)(a1 + 4),
    (void *)(v11 + 4));
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v9;
  *(_DWORD *)(a1 + 4) = HIDWORD(a1);
  *(_DWORD *)(a1 + 8) = v9 + HIDWORD(v13);
  return v13;
}


//======================================================================
// std::vector<Ogre::AnimPlayTrack *,std::allocator<Ogre::AnimPlayTrack *>>::push_back(Ogre::AnimPlayTrack * const&)
// address: 0x00192CE4   size: 0x22 (34 bytes)
//======================================================================
int __fastcall std::vector<Ogre::AnimPlayTrack *>::push_back(__int64 a1)
{
  int *v1; // r2

  v1 = (int *)HIDWORD(a1);
  HIDWORD(a1) = *(_DWORD *)(a1 + 4);
  if ( HIDWORD(a1) == *(_DWORD *)(a1 + 8) )
  {
    LODWORD(a1) = std::vector<Ogre::AnimPlayTrack *>::_M_insert_aux(a1, v1);
  }
  else
  {
    if ( HIDWORD(a1) != 0 )
      *(_DWORD *)HIDWORD(a1) = *v1;
    *(_DWORD *)(a1 + 4) += 4;
  }
  return a1;
}


//======================================================================
// std::vector<Ogre::AnimationData *,std::allocator<Ogre::AnimationData *>>::_M_check_len(unsigned int,char const*)const
// address: 0x001931B0   size: 0x2C (44 bytes)
//======================================================================
unsigned int __fastcall std::vector<Ogre::AnimationData *>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = (a1[1] - *a1) >> 2;
  if ( 0x3FFFFFFF - v3 < a2 )
    sub_3BD058(a3);
  v4 = (a1[1] - *a1) >> 2;
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0x3FFFFFFF )
    return 0x3FFFFFFF;
  return result;
}


//======================================================================
// std::vector<Ogre::SequenceDesc,std::allocator<Ogre::SequenceDesc>>::_M_check_len(unsigned int,char const*)const
// address: 0x001931E0   size: 0x2C (44 bytes)
//======================================================================
unsigned int __fastcall std::vector<Ogre::SequenceDesc>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = (a1[1] - *a1) >> 4;
  if ( 0xFFFFFFF - v3 < a2 )
    sub_3BD058(a3);
  v4 = (a1[1] - *a1) >> 4;
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0xFFFFFFF )
    return 0xFFFFFFF;
  return result;
}


//======================================================================
// std::vector<Ogre::AnimationData *,std::allocator<Ogre::AnimationData *>>::push_back(Ogre::AnimationData * const&)
// address: 0x00193230   size: 0x84 (132 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::AnimationData *>::push_back(__int64 a1)
{
  _DWORD *v1; // r5
  unsigned int v3; // r0
  unsigned int v4; // r6
  _DWORD *v5; // r3
  int v6; // r0
  int v7; // r5
  __int64 byte_count; // [sp+0h] [bp-Ch]

  byte_count = a1;
  v1 = *(_DWORD **)(a1 + 4);
  if ( v1 == *(_DWORD **)(a1 + 8) )
  {
    v3 = std::vector<Ogre::AnimationData *>::_M_check_len((_DWORD *)a1, 1u, (int)"vector::_M_insert_aux");
    LODWORD(byte_count) = 4 * v3;
    HIDWORD(byte_count) = *(_DWORD *)a1;
    if ( v3 != 0 )
    {
      if ( v3 > 0x3FFFFFFF )
        sub_3BCEB4(v3);
      v3 = operator new(byte_count);
    }
    v4 = v3;
    v5 = (_DWORD *)(v3 + 4 * (((int)v1 - HIDWORD(byte_count)) >> 2));
    if ( v5 != nullptr )
      *v5 = *(_DWORD *)HIDWORD(a1);
    v6 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::AnimationData *>(
           *(void **)a1,
           (int)v1,
           (void *)v3);
    v7 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::AnimationData *>(
           v1,
           *(_DWORD *)(a1 + 4),
           (void *)(v6 + 4));
    if ( *(_DWORD *)a1 != 0 )
      operator delete(*(void **)a1);
    *(_DWORD *)a1 = v4;
    *(_DWORD *)(a1 + 4) = v7;
    *(_DWORD *)(a1 + 8) = v4 + byte_count;
  }
  else
  {
    if ( v1 != nullptr )
      *v1 = *(_DWORD *)HIDWORD(a1);
    *(_DWORD *)(a1 + 4) += 4;
  }
  return byte_count;
}


//======================================================================
// std::vector<Ogre::AnimationData *,std::allocator<Ogre::AnimationData *>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::AnimationData **,std::vector<Ogre::AnimationData *,std::allocator<Ogre::AnimationData *>>>,unsigned int,Ogre::AnimationData * const&)
// address: 0x00193314   size: 0x104 (260 bytes)
//======================================================================
void __fastcall std::vector<Ogre::AnimationData *>::_M_fill_insert(void **a1, char *a2, unsigned int a3, void **a4)
{
  char *v5; // r5
  char *v7; // r7
  int v8; // r6
  char *v9; // r6
  char *v10; // r2
  unsigned int v11; // r0
  unsigned int v12; // r7
  char *v13; // r2
  void *v14; // r1
  unsigned int v15; // r3
  int v16; // r0
  int v17; // r5
  unsigned int v19; // [sp+4h] [bp-10h]
  void *v20; // [sp+8h] [bp-Ch]
  char *v21; // [sp+8h] [bp-Ch]
  int v22; // [sp+Ch] [bp-8h]

  v5 = a2;
  if ( a3 != 0 )
  {
    v7 = (char *)a1[1];
    if ( ((_BYTE *)a1[2] - v7) >> 2 < a3 )
    {
      v11 = std::vector<Ogre::AnimationData *>::_M_check_len(a1, a3, (int)"vector::_M_fill_insert");
      v12 = v11;
      v22 = (v5 - (_BYTE *)*a1) >> 2;
      if ( v11 != 0 )
      {
        if ( v11 > 0x3FFFFFFF )
          sub_3BCEB4(v11);
        v21 = (char *)operator new(4 * v11);
      }
      else
      {
        v21 = nullptr;
      }
      v13 = &v21[4 * v22];
      v14 = *a4;
      v15 = a3;
      do
      {
        --v15;
        *(_DWORD *)v13 = v14;
        v13 += 4;
      }
      while ( v15 != 0 );
      v16 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::AnimationData *>(
              *a1,
              (int)v5,
              v21);
      v17 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::AnimationData *>(
              v5,
              (int)a1[1],
              (void *)(v16 + 4 * a3));
      if ( *a1 != nullptr )
        operator delete(*a1);
      a1[1] = (void *)v17;
      *a1 = v21;
      a1[2] = &v21[4 * v12];
    }
    else
    {
      v19 = (v7 - a2) >> 2;
      v20 = *a4;
      if ( v19 <= a3 )
      {
        memset32(v7, (int)v20, a3 - v19);
        v10 = (char *)a1[1] + 4 * (a3 - v19);
        a1[1] = v10;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::AnimationData *>(a2, (int)v7, v10);
        a1[1] = (char *)a1[1] + 4 * v19;
        while ( v5 != v7 )
        {
          *(_DWORD *)v5 = v20;
          v5 += 4;
        }
      }
      else
      {
        v8 = 4 * a3;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::AnimationData *>(
          &v7[-4 * a3],
          (int)v7,
          v7);
        a1[1] = (char *)a1[1] + v8;
        std::copy_backward<Ogre::AnimationData **,Ogre::AnimationData **>(v5, (int)&v7[-v8], (int)v7);
        v9 = &v5[v8];
        while ( v5 != v9 )
        {
          *(_DWORD *)v5 = v20;
          v5 += 4;
        }
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::BoneTrack *,std::allocator<Ogre::BoneTrack *>>::operator=(std::vector<Ogre::BoneTrack *,std::allocator<Ogre::BoneTrack *>> const&)
// address: 0x001934A8   size: 0x94 (148 bytes)
//======================================================================
int __fastcall std::vector<Ogre::BoneTrack *>::operator=(int a1, int a2)
{
  int v4; // r7
  void *v5; // r6
  void *v6; // r2
  unsigned int v7; // r3
  char *v8; // r5
  unsigned int v9; // r1
  void *v10; // r0
  int v11; // r1
  int byte_count; // [sp+4h] [bp-8h]

  if ( a2 != a1 )
  {
    v4 = *(_DWORD *)(a2 + 4);
    v5 = *(void **)a2;
    v6 = *(void **)a1;
    v7 = (v4 - *(_DWORD *)a2) >> 2;
    byte_count = 4 * v7;
    if ( v7 <= (*(_DWORD *)(a1 + 8) - *(_DWORD *)a1) >> 2 )
    {
      v9 = (*(_DWORD *)(a1 + 4) - (int)v6) >> 2;
      if ( v9 < v7 )
      {
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::BoneTrack *>(
          v5,
          (int)v5 + 4 * v9,
          v6);
        v6 = *(void **)(a1 + 4);
        v11 = *(_DWORD *)(a2 + 4);
        v10 = (void *)(*(_DWORD *)a2 + 4 * (((int)v6 - *(_DWORD *)a1) >> 2));
      }
      else
      {
        v10 = v5;
        v11 = v4;
      }
      std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::BoneTrack *>(v10, v11, v6);
    }
    else
    {
      if ( v7 != 0 )
      {
        if ( v7 > 0x3FFFFFFF )
          sub_3BCEB4(4 * v7);
        v8 = (char *)operator new(byte_count);
      }
      else
      {
        v8 = nullptr;
      }
      std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::BoneTrack *>(v5, v4, v8);
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)a1 = v8;
      *(_DWORD *)(a1 + 8) = &v8[byte_count];
    }
    *(_DWORD *)(a1 + 4) = *(_DWORD *)a1 + byte_count;
  }
  return a1;
}


//======================================================================
// std::vector<Ogre::SequenceDesc,std::allocator<Ogre::SequenceDesc>>::operator=(std::vector<Ogre::SequenceDesc,std::allocator<Ogre::SequenceDesc>> const&)
// address: 0x00193540   size: 0x84 (132 bytes)
//======================================================================
int __fastcall std::vector<Ogre::SequenceDesc>::operator=(int a1, int a2)
{
  int v4; // r7
  void *v5; // r6
  void *v6; // r2
  unsigned int v7; // r0
  unsigned int v8; // r5
  unsigned int v9; // r1
  void *v10; // r0
  int v11; // r1
  int v13; // [sp+4h] [bp-8h]

  if ( a2 != a1 )
  {
    v4 = *(_DWORD *)(a2 + 4);
    v5 = *(void **)a2;
    v6 = *(void **)a1;
    v7 = (v4 - *(_DWORD *)a2) >> 4;
    v13 = 16 * v7;
    if ( v7 <= (*(_DWORD *)(a1 + 8) - *(_DWORD *)a1) >> 4 )
    {
      v9 = (*(_DWORD *)(a1 + 4) - (int)v6) >> 4;
      if ( v9 < v7 )
      {
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::SequenceDesc>(
          v5,
          (int)v5 + 16 * v9,
          v6);
        v6 = *(void **)(a1 + 4);
        v11 = *(_DWORD *)(a2 + 4);
        v10 = (void *)(*(_DWORD *)a2 + 16 * (((int)v6 - *(_DWORD *)a1) >> 4));
      }
      else
      {
        v10 = v5;
        v11 = v4;
      }
      std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::SequenceDesc>(v10, v11, v6);
    }
    else
    {
      if ( v7 != 0 )
        v7 = sub_192FB4(v7);
      v8 = v7;
      std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::SequenceDesc>(v5, v4, (void *)v7);
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)a1 = v8;
      *(_DWORD *)(a1 + 8) = v8 + v13;
    }
    *(_DWORD *)(a1 + 4) = *(_DWORD *)a1 + v13;
  }
  return a1;
}


//======================================================================
// std::vector<Ogre::TriggerDesc,std::allocator<Ogre::TriggerDesc>>::operator=(std::vector<Ogre::TriggerDesc,std::allocator<Ogre::TriggerDesc>> const&)
// address: 0x001935C4   size: 0x94 (148 bytes)
//======================================================================
int __fastcall std::vector<Ogre::TriggerDesc>::operator=(int a1, int a2)
{
  int v4; // r7
  void *v5; // r6
  void *v6; // r2
  unsigned int v7; // r3
  char *v8; // r5
  unsigned int v9; // r1
  void *v10; // r0
  int v11; // r1
  int byte_count; // [sp+4h] [bp-8h]

  if ( a2 != a1 )
  {
    v4 = *(_DWORD *)(a2 + 4);
    v5 = *(void **)a2;
    v6 = *(void **)a1;
    v7 = (v4 - *(_DWORD *)a2) >> 3;
    byte_count = 8 * v7;
    if ( v7 <= (*(_DWORD *)(a1 + 8) - *(_DWORD *)a1) >> 3 )
    {
      v9 = (*(_DWORD *)(a1 + 4) - (int)v6) >> 3;
      if ( v9 < v7 )
      {
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::TriggerDesc>(
          v5,
          (int)v5 + 8 * v9,
          v6);
        v6 = *(void **)(a1 + 4);
        v11 = *(_DWORD *)(a2 + 4);
        v10 = (void *)(*(_DWORD *)a2 + 8 * (((int)v6 - *(_DWORD *)a1) >> 3));
      }
      else
      {
        v10 = v5;
        v11 = v4;
      }
      std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::TriggerDesc>(v10, v11, v6);
    }
    else
    {
      if ( v7 != 0 )
      {
        if ( v7 > 0x1FFFFFFF )
          sub_3BCEB4(8 * v7);
        v8 = (char *)operator new(byte_count);
      }
      else
      {
        v8 = nullptr;
      }
      std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::TriggerDesc>(v5, v4, v8);
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)a1 = v8;
      *(_DWORD *)(a1 + 8) = &v8[byte_count];
    }
    *(_DWORD *)(a1 + 4) = *(_DWORD *)a1 + byte_count;
  }
  return a1;
}


//======================================================================
// std::vector<Ogre::BSPData::SufaceMtl,std::allocator<Ogre::BSPData::SufaceMtl>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::BSPData::SufaceMtl*,std::vector<Ogre::BSPData::SufaceMtl,std::allocator<Ogre::BSPData::SufaceMtl>>>,unsigned int,Ogre::BSPData::SufaceMtl const&)
// address: 0x001937EC   size: 0x120 (288 bytes)
//======================================================================
void __fastcall std::vector<Ogre::BSPData::SufaceMtl>::_M_fill_insert(int a1, int *a2, unsigned int a3, int *a4)
{
  int *v5; // r5
  int *v7; // r7
  int v8; // r6
  int *v9; // r6
  void *v10; // r2
  unsigned int v11; // r3
  unsigned int v12; // r7
  unsigned int v13; // r7
  int *v14; // r2
  unsigned int v15; // r3
  int v16; // r0
  int v17; // r5
  unsigned int v18; // [sp+4h] [bp-10h]
  int *v19; // [sp+4h] [bp-10h]
  char *v20; // [sp+4h] [bp-10h]
  int v22; // [sp+8h] [bp-Ch]
  int v23; // [sp+Ch] [bp-8h]

  v5 = a2;
  if ( a3 != 0 )
  {
    v7 = *(int **)(a1 + 4);
    if ( (*(_DWORD *)(a1 + 8) - (int)v7) >> 2 < a3 )
    {
      v11 = ((int)v7 - *(_DWORD *)a1) >> 2;
      if ( 0x3FFFFFFF - v11 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v12 = a3;
      if ( a3 < v11 )
        v12 = v11;
      v13 = v12 + v11;
      if ( v13 < v11 || v13 > 0x3FFFFFFF )
        v13 = 0x3FFFFFFF;
      v23 = ((int)a2 - *(_DWORD *)a1) >> 2;
      if ( v13 != 0 )
        v20 = (char *)operator new(4 * v13);
      else
        v20 = nullptr;
      v14 = (int *)&v20[4 * v23];
      v15 = a3;
      do
      {
        --v15;
        *v14++ = *a4;
      }
      while ( v15 != 0 );
      v16 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::BSPData::SufaceMtl>(
              *(void **)a1,
              (int)v5,
              v20);
      v17 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::BSPData::SufaceMtl>(
              v5,
              *(_DWORD *)(a1 + 4),
              (void *)(v16 + 4 * a3));
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)(a1 + 4) = v17;
      *(_DWORD *)a1 = v20;
      *(_DWORD *)(a1 + 8) = &v20[4 * v13];
    }
    else
    {
      v18 = v7 - a2;
      v22 = *a4;
      if ( v18 <= a3 )
      {
        memset32(v7, v22, a3 - v18);
        v10 = (void *)(*(_DWORD *)(a1 + 4) + 4 * (a3 - v18));
        *(_DWORD *)(a1 + 4) = v10;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::BSPData::SufaceMtl>(
          a2,
          (int)v7,
          v10);
        *(_DWORD *)(a1 + 4) += 4 * v18;
        while ( v5 != v7 )
          *v5++ = v22;
      }
      else
      {
        v8 = 4 * a3;
        v19 = &v7[-a3];
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::BSPData::SufaceMtl>(
          v19,
          (int)v7,
          v7);
        *(_DWORD *)(a1 + 4) += v8;
        if ( &v7[v8 / 0xFFFFFFFC] - v5 != 0 )
          j_memmove(&v7[-(v19 - v5)], v5, 4 * (v19 - v5));
        v9 = &v5[v8 / 4u];
        while ( v5 != v9 )
          *v5++ = v22;
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::MeshData *,std::allocator<Ogre::MeshData *>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::MeshData **,std::vector<Ogre::MeshData *,std::allocator<Ogre::MeshData *>>>,unsigned int,Ogre::MeshData * const&)
// address: 0x00193B14   size: 0x120 (288 bytes)
//======================================================================
void __fastcall std::vector<Ogre::MeshData *>::_M_fill_insert(int a1, _DWORD *a2, unsigned int a3, void **a4)
{
  _DWORD *v5; // r5
  _BYTE *v7; // r7
  int v8; // r6
  _DWORD *v9; // r6
  void *v10; // r2
  unsigned int v11; // r3
  unsigned int v12; // r7
  unsigned int v13; // r7
  char *v14; // r2
  void *v15; // r1
  unsigned int v16; // r3
  int v17; // r0
  int v18; // r5
  unsigned int v20; // [sp+4h] [bp-10h]
  void *v21; // [sp+8h] [bp-Ch]
  char *v22; // [sp+8h] [bp-Ch]
  int v23; // [sp+Ch] [bp-8h]

  v5 = a2;
  if ( a3 != 0 )
  {
    v7 = *(_BYTE **)(a1 + 4);
    if ( (*(_DWORD *)(a1 + 8) - (int)v7) >> 2 < a3 )
    {
      v11 = (int)&v7[-*(_DWORD *)a1] >> 2;
      if ( 0x3FFFFFFF - v11 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v12 = a3;
      if ( a3 < v11 )
        v12 = v11;
      v13 = v12 + v11;
      if ( v13 < v11 || v13 > 0x3FFFFFFF )
        v13 = 0x3FFFFFFF;
      v23 = ((int)a2 - *(_DWORD *)a1) >> 2;
      if ( v13 != 0 )
        v22 = (char *)operator new(4 * v13);
      else
        v22 = nullptr;
      v14 = &v22[4 * v23];
      v15 = *a4;
      v16 = a3;
      do
      {
        --v16;
        *(_DWORD *)v14 = v15;
        v14 += 4;
      }
      while ( v16 != 0 );
      v17 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MeshData *>(
              *(void **)a1,
              (int)v5,
              v22);
      v18 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MeshData *>(
              v5,
              *(_DWORD *)(a1 + 4),
              (void *)(v17 + 4 * a3));
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)(a1 + 4) = v18;
      *(_DWORD *)a1 = v22;
      *(_DWORD *)(a1 + 8) = &v22[4 * v13];
    }
    else
    {
      v20 = (v7 - (_BYTE *)a2) >> 2;
      v21 = *a4;
      if ( v20 <= a3 )
      {
        memset32(v7, (int)v21, a3 - v20);
        v10 = (void *)(*(_DWORD *)(a1 + 4) + 4 * (a3 - v20));
        *(_DWORD *)(a1 + 4) = v10;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MeshData *>(a2, (int)v7, v10);
        *(_DWORD *)(a1 + 4) += 4 * v20;
        while ( v5 != (_DWORD *)v7 )
          *v5++ = v21;
      }
      else
      {
        v8 = 4 * a3;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MeshData *>(
          &v7[-4 * a3],
          (int)v7,
          v7);
        *(_DWORD *)(a1 + 4) += v8;
        if ( (&v7[-v8] - (_BYTE *)v5) >> 2 != 0 )
          j_memmove(&v7[-4 * ((&v7[-v8] - (_BYTE *)v5) >> 2)], v5, 4 * ((&v7[-v8] - (_BYTE *)v5) >> 2));
        v9 = &v5[v8 / 4u];
        while ( v5 != v9 )
          *v5++ = v21;
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::SkeletonAnimData *,std::allocator<Ogre::SkeletonAnimData *>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::SkeletonAnimData **,std::vector<Ogre::SkeletonAnimData *,std::allocator<Ogre::SkeletonAnimData *>>>,unsigned int,Ogre::SkeletonAnimData * const&)
// address: 0x00193CE0   size: 0x120 (288 bytes)
//======================================================================
void __fastcall std::vector<Ogre::SkeletonAnimData *>::_M_fill_insert(int a1, _DWORD *a2, unsigned int a3, void **a4)
{
  _DWORD *v5; // r5
  _BYTE *v7; // r7
  int v8; // r6
  _DWORD *v9; // r6
  void *v10; // r2
  unsigned int v11; // r3
  unsigned int v12; // r7
  unsigned int v13; // r7
  char *v14; // r2
  void *v15; // r1
  unsigned int v16; // r3
  int v17; // r0
  int v18; // r5
  unsigned int v20; // [sp+4h] [bp-10h]
  void *v21; // [sp+8h] [bp-Ch]
  char *v22; // [sp+8h] [bp-Ch]
  int v23; // [sp+Ch] [bp-8h]

  v5 = a2;
  if ( a3 != 0 )
  {
    v7 = *(_BYTE **)(a1 + 4);
    if ( (*(_DWORD *)(a1 + 8) - (int)v7) >> 2 < a3 )
    {
      v11 = (int)&v7[-*(_DWORD *)a1] >> 2;
      if ( 0x3FFFFFFF - v11 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v12 = a3;
      if ( a3 < v11 )
        v12 = v11;
      v13 = v12 + v11;
      if ( v13 < v11 || v13 > 0x3FFFFFFF )
        v13 = 0x3FFFFFFF;
      v23 = ((int)a2 - *(_DWORD *)a1) >> 2;
      if ( v13 != 0 )
        v22 = (char *)operator new(4 * v13);
      else
        v22 = nullptr;
      v14 = &v22[4 * v23];
      v15 = *a4;
      v16 = a3;
      do
      {
        --v16;
        *(_DWORD *)v14 = v15;
        v14 += 4;
      }
      while ( v16 != 0 );
      v17 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::SkeletonAnimData *>(
              *(void **)a1,
              (int)v5,
              v22);
      v18 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::SkeletonAnimData *>(
              v5,
              *(_DWORD *)(a1 + 4),
              (void *)(v17 + 4 * a3));
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)(a1 + 4) = v18;
      *(_DWORD *)a1 = v22;
      *(_DWORD *)(a1 + 8) = &v22[4 * v13];
    }
    else
    {
      v20 = (v7 - (_BYTE *)a2) >> 2;
      v21 = *a4;
      if ( v20 <= a3 )
      {
        memset32(v7, (int)v21, a3 - v20);
        v10 = (void *)(*(_DWORD *)(a1 + 4) + 4 * (a3 - v20));
        *(_DWORD *)(a1 + 4) = v10;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::SkeletonAnimData *>(
          a2,
          (int)v7,
          v10);
        *(_DWORD *)(a1 + 4) += 4 * v20;
        while ( v5 != (_DWORD *)v7 )
          *v5++ = v21;
      }
      else
      {
        v8 = 4 * a3;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::SkeletonAnimData *>(
          &v7[-4 * a3],
          (int)v7,
          v7);
        *(_DWORD *)(a1 + 4) += v8;
        if ( (&v7[-v8] - (_BYTE *)v5) >> 2 != 0 )
          j_memmove(&v7[-4 * ((&v7[-v8] - (_BYTE *)v5) >> 2)], v5, 4 * ((&v7[-v8] - (_BYTE *)v5) >> 2));
        v9 = &v5[v8 / 4u];
        while ( v5 != v9 )
          *v5++ = v21;
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::ModelAnchor,std::allocator<Ogre::ModelAnchor>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::ModelAnchor*,std::vector<Ogre::ModelAnchor,std::allocator<Ogre::ModelAnchor>>>,unsigned int,Ogre::ModelAnchor const&)
// address: 0x00193E28   size: 0x13A (314 bytes)
//======================================================================
void __fastcall std::vector<Ogre::ModelAnchor>::_M_fill_insert(int a1, char *a2, unsigned int a3, _DWORD *a4)
{
  char *v7; // r1
  int v8; // r7
  unsigned int v9; // r6
  int v10; // r5
  char *v11; // r6
  char *v12; // r5
  char *j; // r3
  _DWORD *v14; // r3
  unsigned int i; // r1
  void *v16; // r2
  char *v17; // r3
  unsigned int v18; // r3
  int v19; // r6
  unsigned int v20; // r6
  char *v21; // r3
  unsigned int v22; // r2
  int v23; // r0
  int v24; // r5
  char *v25; // [sp+4h] [bp-10h]
  char *v26; // [sp+4h] [bp-10h]
  int v27; // [sp+8h] [bp-Ch]
  int v28; // [sp+8h] [bp-Ch]

  if ( a3 != 0 )
  {
    v7 = *(char **)(a1 + 4);
    v25 = v7;
    if ( (*(_DWORD *)(a1 + 8) - (int)v7) >> 3 < a3 )
    {
      v18 = (int)&v7[-*(_DWORD *)a1] >> 3;
      if ( 0x1FFFFFFF - v18 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v19 = a3;
      if ( a3 < v18 )
        v19 = (int)&v7[-*(_DWORD *)a1] >> 3;
      v20 = v19 + v18;
      if ( v20 < v18 || v20 > 0x1FFFFFFF )
        v20 = 0x1FFFFFFF;
      v28 = (int)&a2[-*(_DWORD *)a1] >> 3;
      if ( v20 != 0 )
        v26 = (char *)operator new(8 * v20);
      else
        v26 = nullptr;
      v21 = &v26[8 * v28];
      v22 = a3;
      do
      {
        --v22;
        *(_DWORD *)v21 = *a4;
        *((_DWORD *)v21 + 1) = a4[1];
        v21 += 8;
      }
      while ( v22 != 0 );
      v23 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ModelAnchor>(
              *(void **)a1,
              (int)a2,
              v26);
      v24 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ModelAnchor>(
              a2,
              *(_DWORD *)(a1 + 4),
              (void *)(v23 + 8 * a3));
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)(a1 + 4) = v24;
      *(_DWORD *)a1 = v26;
      *(_DWORD *)(a1 + 8) = &v26[8 * v20];
    }
    else
    {
      v8 = a4[1];
      v27 = *a4;
      v9 = (v7 - a2) >> 3;
      if ( v9 <= a3 )
      {
        v14 = *(_DWORD **)(a1 + 4);
        for ( i = a3 - v9; i != 0; --i )
        {
          v14[1] = v8;
          *v14 = v27;
          v14 += 2;
        }
        v16 = (void *)(*(_DWORD *)(a1 + 4) + 8 * (a3 - v9));
        *(_DWORD *)(a1 + 4) = v16;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ModelAnchor>(a2, (int)v25, v16);
        v17 = a2;
        *(_DWORD *)(a1 + 4) += 8 * v9;
        while ( v17 != v25 )
        {
          *((_DWORD *)v17 + 1) = v8;
          *(_DWORD *)v17 = v27;
          v17 += 8;
        }
      }
      else
      {
        v10 = 8 * a3;
        v11 = &v7[-8 * a3];
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ModelAnchor>(v11, (int)v7, v7);
        *(_DWORD *)(a1 + 4) += v10;
        if ( (v11 - a2) >> 3 != 0 )
          j_memmove(&v25[-8 * ((v11 - a2) >> 3)], a2, 8 * ((v11 - a2) >> 3));
        v12 = &a2[v10];
        for ( j = a2; j != v12; j += 8 )
        {
          *((_DWORD *)j + 1) = v8;
          *(_DWORD *)j = v27;
        }
      }
    }
  }
}


//======================================================================
// std::vector<float,std::allocator<float>>::operator=(std::vector<float,std::allocator<float>> const&)
// address: 0x00194330   size: 0x84 (132 bytes)
//======================================================================
int __fastcall std::vector<float>::operator=(int a1, int a2)
{
  int v4; // r7
  void *v5; // r6
  void *v6; // r2
  unsigned int v7; // r0
  unsigned int v8; // r5
  unsigned int v9; // r1
  void *v10; // r0
  int v11; // r1
  int v13; // [sp+4h] [bp-8h]

  if ( a2 != a1 )
  {
    v4 = *(_DWORD *)(a2 + 4);
    v5 = *(void **)a2;
    v6 = *(void **)a1;
    v7 = (v4 - *(_DWORD *)a2) >> 2;
    v13 = 4 * v7;
    if ( v7 <= (*(_DWORD *)(a1 + 8) - *(_DWORD *)a1) >> 2 )
    {
      v9 = (*(_DWORD *)(a1 + 4) - (int)v6) >> 2;
      if ( v9 < v7 )
      {
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<float>(v5, (int)v5 + 4 * v9, v6);
        v6 = *(void **)(a1 + 4);
        v11 = *(_DWORD *)(a2 + 4);
        v10 = (void *)(*(_DWORD *)a2 + 4 * (((int)v6 - *(_DWORD *)a1) >> 2));
      }
      else
      {
        v10 = v5;
        v11 = v4;
      }
      std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<float>(v10, v11, v6);
    }
    else
    {
      if ( v7 != 0 )
        v7 = sub_19416C(v7);
      v8 = v7;
      std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<float>(v5, v4, (void *)v7);
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)a1 = v8;
      *(_DWORD *)(a1 + 8) = v8 + v13;
    }
    *(_DWORD *)(a1 + 4) = *(_DWORD *)a1 + v13;
  }
  return a1;
}


//======================================================================
// std::vector<unsigned int,std::allocator<unsigned int>>::operator=(std::vector<unsigned int,std::allocator<unsigned int>> const&)
// address: 0x001943B4   size: 0x84 (132 bytes)
//======================================================================
int __fastcall std::vector<unsigned int>::operator=(int a1, int a2)
{
  int v4; // r7
  void *v5; // r6
  void *v6; // r2
  unsigned int v7; // r0
  unsigned int v8; // r5
  unsigned int v9; // r1
  void *v10; // r0
  int v11; // r1
  int v13; // [sp+4h] [bp-8h]

  if ( a2 != a1 )
  {
    v4 = *(_DWORD *)(a2 + 4);
    v5 = *(void **)a2;
    v6 = *(void **)a1;
    v7 = (v4 - *(_DWORD *)a2) >> 2;
    v13 = 4 * v7;
    if ( v7 <= (*(_DWORD *)(a1 + 8) - *(_DWORD *)a1) >> 2 )
    {
      v9 = (*(_DWORD *)(a1 + 4) - (int)v6) >> 2;
      if ( v9 < v7 )
      {
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<unsigned int>(v5, (int)v5 + 4 * v9, v6);
        v6 = *(void **)(a1 + 4);
        v11 = *(_DWORD *)(a2 + 4);
        v10 = (void *)(*(_DWORD *)a2 + 4 * (((int)v6 - *(_DWORD *)a1) >> 2));
      }
      else
      {
        v10 = v5;
        v11 = v4;
      }
      std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<unsigned int>(v10, v11, v6);
    }
    else
    {
      if ( v7 != 0 )
        v7 = sub_194184(v7);
      v8 = v7;
      std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<unsigned int>(v5, v4, (void *)v7);
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)a1 = v8;
      *(_DWORD *)(a1 + 8) = v8 + v13;
    }
    *(_DWORD *)(a1 + 4) = *(_DWORD *)a1 + v13;
  }
  return a1;
}


//======================================================================
// std::vector<unsigned int,std::allocator<unsigned int>>::resize(unsigned int,unsigned int)
// address: 0x00194438   size: 0x28 (40 bytes)
//======================================================================
__int64 __fastcall std::vector<unsigned int>::resize(__int64 a1, int a2)
{
  _DWORD *v2; // r3
  int v3; // r4
  unsigned int v4; // r2
  __int64 v6; // [sp+0h] [bp-8h] BYREF

  v6 = a1;
  v2 = *(_DWORD **)(a1 + 4);
  v3 = *(_DWORD *)a1;
  HIDWORD(v6) = a2;
  v4 = ((int)v2 - v3) >> 2;
  if ( HIDWORD(a1) <= v4 )
  {
    if ( HIDWORD(a1) < v4 )
      *(_DWORD *)(a1 + 4) = v3 + 4 * HIDWORD(a1);
  }
  else
  {
    std::vector<unsigned int>::_M_fill_insert(a1, v2, HIDWORD(a1) - v4, (void **)&v6 + 1);
  }
  return v6;
}


//======================================================================
// std::vector<Ogre::MaterialParam *,std::allocator<Ogre::MaterialParam *>>::_M_check_len(unsigned int,char const*)const
// address: 0x001961E8   size: 0x2C (44 bytes)
//======================================================================
unsigned int __fastcall std::vector<Ogre::MaterialParam *>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = (a1[1] - *a1) >> 2;
  if ( 0x3FFFFFFF - v3 < a2 )
    sub_3BD058(a3);
  v4 = (a1[1] - *a1) >> 2;
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0x3FFFFFFF )
    return 0x3FFFFFFF;
  return result;
}


//======================================================================
// std::vector<Ogre::Matrix4,std::allocator<Ogre::Matrix4>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::Matrix4*,std::vector<Ogre::Matrix4,std::allocator<Ogre::Matrix4>>>,unsigned int,Ogre::Matrix4 const&)
// address: 0x001976EC   size: 0x19C (412 bytes)
//======================================================================
void __fastcall std::vector<Ogre::Matrix4>::_M_fill_insert(
        int a1,
        const Ogre::Matrix4 *a2,
        unsigned int a3,
        const Ogre::Matrix4 *a4)
{
  unsigned int v5; // r5
  int v6; // r3
  const Ogre::Matrix4 *v7; // r7
  unsigned int v8; // r5
  char *v9; // r6
  const Ogre::Matrix4 *j; // r5
  int k; // r4
  const Ogre::Matrix4 *m; // r4
  unsigned int v13; // r6
  int v14; // r5
  const Ogre::Matrix4 *v15; // r6
  int v16; // r5
  const Ogre::Matrix4 *i; // r4
  unsigned int v18; // r3
  unsigned int v19; // r2
  int v20; // r7
  unsigned int v21; // r6
  int v22; // r7
  const Ogre::Matrix4 *v23; // r6
  int v24; // r7
  int v25; // r7
  const Ogre::Matrix4 *v26; // r5
  unsigned int v27; // [sp+4h] [bp-58h]
  unsigned int v28; // [sp+4h] [bp-58h]
  int v29; // [sp+4h] [bp-58h]
  int v30; // [sp+8h] [bp-54h]
  unsigned int v31; // [sp+8h] [bp-54h]
  int v32; // [sp+8h] [bp-54h]
  _BYTE v35[68]; // [sp+18h] [bp-44h] BYREF

  v5 = a3;
  if ( a3 != 0 )
  {
    v6 = *(_DWORD *)(a1 + 4);
    if ( (*(_DWORD *)(a1 + 8) - v6) >> 6 < a3 )
    {
      v18 = (v6 - *(_DWORD *)a1) >> 6;
      if ( 0x3FFFFFF - v18 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      if ( a3 < v18 )
        a3 = v18;
      v19 = a3 + v18;
      if ( v19 < v18 )
      {
        v29 = 0x3FFFFFF;
      }
      else
      {
        v29 = v19;
        if ( v19 > 0x3FFFFFF )
          v29 = 0x3FFFFFF;
      }
      v20 = ((int)a2 - *(_DWORD *)a1) >> 6;
      if ( v29 != 0 )
        v32 = operator new(v29 << 6);
      else
        v32 = 0;
      v21 = v5;
      v22 = v32 + (v20 << 6);
      do
      {
        --v21;
        std::_Construct<Ogre::Matrix4,Ogre::Matrix4>(v22, a4);
        v22 += 64;
      }
      while ( v21 != 0 );
      v23 = *(const Ogre::Matrix4 **)a1;
      v24 = v32;
      while ( v23 != a2 )
      {
        std::_Construct<Ogre::Matrix4,Ogre::Matrix4>(v24, v23);
        v23 = (const Ogre::Matrix4 *)((char *)v23 + 64);
        v24 += 64;
      }
      v25 = v24 + (v5 << 6);
      v26 = *(const Ogre::Matrix4 **)(a1 + 4);
      while ( v23 != v26 )
      {
        std::_Construct<Ogre::Matrix4,Ogre::Matrix4>(v25, v23);
        v25 += 64;
        v23 = (const Ogre::Matrix4 *)((char *)v23 + 64);
      }
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)(a1 + 4) = v25;
      *(_DWORD *)a1 = v32;
      *(_DWORD *)(a1 + 8) = v32 + (v29 << 6);
    }
    else
    {
      Ogre::Matrix4::Matrix4((int)v35, a4);
      v7 = *(const Ogre::Matrix4 **)(a1 + 4);
      v27 = (v7 - a2) >> 6;
      if ( v27 <= v5 )
      {
        v31 = v5 - v27;
        v13 = v5 - v27;
        v14 = *(_DWORD *)(a1 + 4);
        while ( v13 != 0 )
        {
          std::_Construct<Ogre::Matrix4,Ogre::Matrix4>(v14, (const Ogre::Matrix4 *)v35);
          --v13;
          v14 += 64;
        }
        v15 = a2;
        v16 = *(_DWORD *)(a1 + 4) + (v31 << 6);
        *(_DWORD *)(a1 + 4) = v16;
        while ( v15 != v7 )
        {
          std::_Construct<Ogre::Matrix4,Ogre::Matrix4>(v16, v15);
          v16 += 64;
          v15 = (const Ogre::Matrix4 *)((char *)v15 + 64);
        }
        *(_DWORD *)(a1 + 4) += v27 << 6;
        for ( i = a2; i != v7; i = (const Ogre::Matrix4 *)((char *)i + 64) )
          Ogre::Matrix4::operator=(i, v35);
      }
      else
      {
        v8 = v5 << 6;
        v9 = (char *)v7 - v8;
        v28 = v8;
        v30 = *(_DWORD *)(a1 + 4);
        for ( j = (const Ogre::Matrix4 *)((char *)v7 - v8); j != v7; j = (const Ogre::Matrix4 *)((char *)j + 64) )
        {
          std::_Construct<Ogre::Matrix4,Ogre::Matrix4>(v30, j);
          v30 += 64;
        }
        *(_DWORD *)(a1 + 4) += v28;
        for ( k = (v9 - (char *)a2) >> 6; k > 0; --k )
        {
          v7 = (const Ogre::Matrix4 *)((char *)v7 - 64);
          v9 -= 64;
          Ogre::Matrix4::operator=(v7, v9);
        }
        for ( m = a2; m != (const Ogre::Matrix4 *)((char *)a2 + v28); m = (const Ogre::Matrix4 *)((char *)m + 64) )
          Ogre::Matrix4::operator=(m, v35);
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::SubMeshData *,std::allocator<Ogre::SubMeshData *>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::SubMeshData **,std::vector<Ogre::SubMeshData *,std::allocator<Ogre::SubMeshData *>>>,unsigned int,Ogre::SubMeshData * const&)
// address: 0x0019792C   size: 0x120 (288 bytes)
//======================================================================
void __fastcall std::vector<Ogre::SubMeshData *>::_M_fill_insert(int a1, _DWORD *a2, unsigned int a3, void **a4)
{
  _DWORD *v5; // r5
  _BYTE *v7; // r7
  int v8; // r6
  _DWORD *v9; // r6
  void *v10; // r2
  unsigned int v11; // r3
  unsigned int v12; // r7
  unsigned int v13; // r7
  char *v14; // r2
  void *v15; // r1
  unsigned int v16; // r3
  int v17; // r0
  int v18; // r5
  unsigned int v20; // [sp+4h] [bp-10h]
  void *v21; // [sp+8h] [bp-Ch]
  char *v22; // [sp+8h] [bp-Ch]
  int v23; // [sp+Ch] [bp-8h]

  v5 = a2;
  if ( a3 != 0 )
  {
    v7 = *(_BYTE **)(a1 + 4);
    if ( (*(_DWORD *)(a1 + 8) - (int)v7) >> 2 < a3 )
    {
      v11 = (int)&v7[-*(_DWORD *)a1] >> 2;
      if ( 0x3FFFFFFF - v11 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v12 = a3;
      if ( a3 < v11 )
        v12 = v11;
      v13 = v12 + v11;
      if ( v13 < v11 || v13 > 0x3FFFFFFF )
        v13 = 0x3FFFFFFF;
      v23 = ((int)a2 - *(_DWORD *)a1) >> 2;
      if ( v13 != 0 )
        v22 = (char *)operator new(4 * v13);
      else
        v22 = nullptr;
      v14 = &v22[4 * v23];
      v15 = *a4;
      v16 = a3;
      do
      {
        --v16;
        *(_DWORD *)v14 = v15;
        v14 += 4;
      }
      while ( v16 != 0 );
      v17 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::SubMeshData *>(
              *(void **)a1,
              (int)v5,
              v22);
      v18 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::SubMeshData *>(
              v5,
              *(_DWORD *)(a1 + 4),
              (void *)(v17 + 4 * a3));
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)(a1 + 4) = v18;
      *(_DWORD *)a1 = v22;
      *(_DWORD *)(a1 + 8) = &v22[4 * v13];
    }
    else
    {
      v20 = (v7 - (_BYTE *)a2) >> 2;
      v21 = *a4;
      if ( v20 <= a3 )
      {
        memset32(v7, (int)v21, a3 - v20);
        v10 = (void *)(*(_DWORD *)(a1 + 4) + 4 * (a3 - v20));
        *(_DWORD *)(a1 + 4) = v10;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::SubMeshData *>(a2, (int)v7, v10);
        *(_DWORD *)(a1 + 4) += 4 * v20;
        while ( v5 != (_DWORD *)v7 )
          *v5++ = v21;
      }
      else
      {
        v8 = 4 * a3;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::SubMeshData *>(
          &v7[-4 * a3],
          (int)v7,
          v7);
        *(_DWORD *)(a1 + 4) += v8;
        if ( (&v7[-v8] - (_BYTE *)v5) >> 2 != 0 )
          j_memmove(&v7[-4 * ((&v7[-v8] - (_BYTE *)v5) >> 2)], v5, 4 * ((&v7[-v8] - (_BYTE *)v5) >> 2));
        v9 = &v5[v8 / 4u];
        while ( v5 != v9 )
          *v5++ = v21;
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::SkinPatch *,std::allocator<Ogre::SkinPatch *>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::SkinPatch **,std::vector<Ogre::SkinPatch *,std::allocator<Ogre::SkinPatch *>>>,unsigned int,Ogre::SkinPatch * const&)
// address: 0x00197B9C   size: 0x120 (288 bytes)
//======================================================================
void __fastcall std::vector<Ogre::SkinPatch *>::_M_fill_insert(int a1, _DWORD *a2, unsigned int a3, void **a4)
{
  _DWORD *v5; // r5
  _BYTE *v7; // r7
  int v8; // r6
  _DWORD *v9; // r6
  void *v10; // r2
  unsigned int v11; // r3
  unsigned int v12; // r7
  unsigned int v13; // r7
  char *v14; // r2
  void *v15; // r1
  unsigned int v16; // r3
  int v17; // r0
  int v18; // r5
  unsigned int v20; // [sp+4h] [bp-10h]
  void *v21; // [sp+8h] [bp-Ch]
  char *v22; // [sp+8h] [bp-Ch]
  int v23; // [sp+Ch] [bp-8h]

  v5 = a2;
  if ( a3 != 0 )
  {
    v7 = *(_BYTE **)(a1 + 4);
    if ( (*(_DWORD *)(a1 + 8) - (int)v7) >> 2 < a3 )
    {
      v11 = (int)&v7[-*(_DWORD *)a1] >> 2;
      if ( 0x3FFFFFFF - v11 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v12 = a3;
      if ( a3 < v11 )
        v12 = v11;
      v13 = v12 + v11;
      if ( v13 < v11 || v13 > 0x3FFFFFFF )
        v13 = 0x3FFFFFFF;
      v23 = ((int)a2 - *(_DWORD *)a1) >> 2;
      if ( v13 != 0 )
        v22 = (char *)operator new(4 * v13);
      else
        v22 = nullptr;
      v14 = &v22[4 * v23];
      v15 = *a4;
      v16 = a3;
      do
      {
        --v16;
        *(_DWORD *)v14 = v15;
        v14 += 4;
      }
      while ( v16 != 0 );
      v17 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::SkinPatch *>(
              *(void **)a1,
              (int)v5,
              v22);
      v18 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::SkinPatch *>(
              v5,
              *(_DWORD *)(a1 + 4),
              (void *)(v17 + 4 * a3));
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)(a1 + 4) = v18;
      *(_DWORD *)a1 = v22;
      *(_DWORD *)(a1 + 8) = &v22[4 * v13];
    }
    else
    {
      v20 = (v7 - (_BYTE *)a2) >> 2;
      v21 = *a4;
      if ( v20 <= a3 )
      {
        memset32(v7, (int)v21, a3 - v20);
        v10 = (void *)(*(_DWORD *)(a1 + 4) + 4 * (a3 - v20));
        *(_DWORD *)(a1 + 4) = v10;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::SkinPatch *>(a2, (int)v7, v10);
        *(_DWORD *)(a1 + 4) += 4 * v20;
        while ( v5 != (_DWORD *)v7 )
          *v5++ = v21;
      }
      else
      {
        v8 = 4 * a3;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::SkinPatch *>(
          &v7[-4 * a3],
          (int)v7,
          v7);
        *(_DWORD *)(a1 + 4) += v8;
        if ( (&v7[-v8] - (_BYTE *)v5) >> 2 != 0 )
          j_memmove(&v7[-4 * ((&v7[-v8] - (_BYTE *)v5) >> 2)], v5, 4 * ((&v7[-v8] - (_BYTE *)v5) >> 2));
        v9 = &v5[v8 / 4u];
        while ( v5 != v9 )
          *v5++ = v21;
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::ScreenRect,std::allocator<Ogre::ScreenRect>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::ScreenRect*,std::vector<Ogre::ScreenRect,std::allocator<Ogre::ScreenRect>>>,Ogre::ScreenRect const&)
// address: 0x00197E80   size: 0x146 (326 bytes)
//======================================================================
void __fastcall std::vector<Ogre::ScreenRect>::_M_insert_aux(void **a1, char *a2, void *a3)
{
  char *v4; // r0
  char *v6; // r5
  char *v7; // r7
  int i; // r6
  unsigned int v9; // r0
  unsigned int v10; // r3
  int v11; // r6
  char *v12; // r0
  _BYTE *v13; // r6
  char *v14; // r5
  char *j; // r7
  char *v16; // r5
  char *v17; // r6
  char *v18; // r5
  int v19; // [sp+0h] [bp-64h]
  char *v21; // [sp+4h] [bp-60h]
  char *v22; // [sp+8h] [bp-5Ch]
  char *v23; // [sp+Ch] [bp-58h]
  _BYTE v24[80]; // [sp+10h] [bp-54h] BYREF

  v4 = (char *)a1[1];
  if ( v4 != a1[2] )
  {
    if ( v4 != nullptr )
      j_memcpy(v4, v4 - 80, 0x50u);
    v6 = (char *)a1[1];
    a1[1] = v6 + 80;
    j_memcpy(v24, a3, sizeof(v24));
    v7 = v6 - 80;
    for ( i = -858993459 * ((v6 - 80 - a2) >> 4); i > 0; --i )
    {
      v6 -= 80;
      v7 -= 80;
      j_memcpy(v6, v7, 0x50u);
    }
    j_memcpy(a2, v24, 0x50u);
    return;
  }
  v9 = -858993459 * ((v4 - (_BYTE *)*a1) >> 4);
  if ( v9 == 0 )
  {
    v10 = 1;
    goto LABEL_12;
  }
  v10 = 2 * v9;
  v19 = 53687091;
  if ( 2 * v9 >= v9 )
  {
LABEL_12:
    v19 = v10;
    if ( v10 > 0x3333333 )
      v19 = 53687091;
  }
  v11 = -858993459 * ((a2 - (_BYTE *)*a1) >> 4);
  if ( v19 != 0 )
    v22 = (char *)operator new(80 * v19);
  else
    v22 = nullptr;
  v12 = &v22[80 * v11];
  if ( v12 != nullptr )
    j_memcpy(v12, a3, 0x50u);
  v13 = *a1;
  v14 = v22;
  for ( j = (char *)*a1; j != a2; j += 80 )
  {
    if ( v14 != nullptr )
      j_memcpy(v14, j, 0x50u);
    v14 += 80;
  }
  v16 = j;
  v21 = &v22[80 * ((214748365 * ((unsigned int)(j - v13) >> 4)) & 0xFFFFFFF) + 80];
  v17 = v21;
  v23 = (char *)a1[1];
  while ( v16 != v23 )
  {
    if ( v17 != nullptr )
      j_memcpy(v17, v16, 0x50u);
    v17 += 80;
    v16 += 80;
  }
  v18 = &v21[80 * ((214748365 * ((unsigned int)(v16 - j) >> 4)) & 0xFFFFFFF)];
  if ( *a1 != nullptr )
    operator delete(*a1);
  *a1 = v22;
  a1[1] = v18;
  a1[2] = &v22[80 * v19];
}


//======================================================================
// std::vector<Ogre::ScreenRect,std::allocator<Ogre::ScreenRect>>::push_back(Ogre::ScreenRect const&)
// address: 0x00197FD4   size: 0x2A (42 bytes)
//======================================================================
void __fastcall std::vector<Ogre::ScreenRect>::push_back(int a1, void *a2)
{
  char *v3; // r1

  v3 = *(char **)(a1 + 4);
  if ( v3 == *(char **)(a1 + 8) )
  {
    std::vector<Ogre::ScreenRect>::_M_insert_aux((void **)a1, v3, a2);
  }
  else
  {
    if ( v3 != nullptr )
      j_memcpy(*(void **)(a1 + 4), a2, 0x50u);
    *(_DWORD *)(a1 + 4) += 80;
  }
}


//======================================================================
// std::vector<Ogre::SurfaceData *,std::allocator<Ogre::SurfaceData *>>::_M_check_len(unsigned int,char const*)const
// address: 0x0019B128   size: 0x2C (44 bytes)
//======================================================================
unsigned int __fastcall std::vector<Ogre::SurfaceData *>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = (a1[1] - *a1) >> 2;
  if ( 0x3FFFFFFF - v3 < a2 )
    sub_3BD058(a3);
  v4 = (a1[1] - *a1) >> 2;
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0x3FFFFFFF )
    return 0x3FFFFFFF;
  return result;
}


//======================================================================
// std::vector<Ogre::SurfaceData *,std::allocator<Ogre::SurfaceData *>>::push_back(Ogre::SurfaceData * const&)
// address: 0x0019B79C   size: 0x84 (132 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::SurfaceData *>::push_back(__int64 a1)
{
  _DWORD *v1; // r5
  unsigned int v3; // r0
  unsigned int v4; // r6
  _DWORD *v5; // r3
  int v6; // r0
  int v7; // r5
  __int64 byte_count; // [sp+0h] [bp-Ch]

  byte_count = a1;
  v1 = *(_DWORD **)(a1 + 4);
  if ( v1 == *(_DWORD **)(a1 + 8) )
  {
    v3 = std::vector<Ogre::SurfaceData *>::_M_check_len((_DWORD *)a1, 1u, (int)"vector::_M_insert_aux");
    LODWORD(byte_count) = 4 * v3;
    HIDWORD(byte_count) = *(_DWORD *)a1;
    if ( v3 != 0 )
    {
      if ( v3 > 0x3FFFFFFF )
        sub_3BCEB4(v3);
      v3 = operator new(byte_count);
    }
    v4 = v3;
    v5 = (_DWORD *)(v3 + 4 * (((int)v1 - HIDWORD(byte_count)) >> 2));
    if ( v5 != nullptr )
      *v5 = *(_DWORD *)HIDWORD(a1);
    v6 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::SurfaceData *>(
           *(void **)a1,
           (int)v1,
           (void *)v3);
    v7 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::SurfaceData *>(
           v1,
           *(_DWORD *)(a1 + 4),
           (void *)(v6 + 4));
    if ( *(_DWORD *)a1 != 0 )
      operator delete(*(void **)a1);
    *(_DWORD *)a1 = v4;
    *(_DWORD *)(a1 + 4) = v7;
    *(_DWORD *)(a1 + 8) = v4 + byte_count;
  }
  else
  {
    if ( v1 != nullptr )
      *v1 = *(_DWORD *)HIDWORD(a1);
    *(_DWORD *)(a1 + 4) += 4;
  }
  return byte_count;
}


//======================================================================
// std::vector<Ogre::SurfaceData *,std::allocator<Ogre::SurfaceData *>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::SurfaceData **,std::vector<Ogre::SurfaceData *,std::allocator<Ogre::SurfaceData *>>>,unsigned int,Ogre::SurfaceData * const&)
// address: 0x0019C39C   size: 0x104 (260 bytes)
//======================================================================
void __fastcall std::vector<Ogre::SurfaceData *>::_M_fill_insert(void **a1, char *a2, unsigned int a3, void **a4)
{
  char *v5; // r5
  char *v7; // r7
  int v8; // r6
  char *v9; // r6
  char *v10; // r2
  unsigned int v11; // r0
  unsigned int v12; // r7
  char *v13; // r2
  void *v14; // r1
  unsigned int v15; // r3
  int v16; // r0
  int v17; // r5
  unsigned int v19; // [sp+4h] [bp-10h]
  void *v20; // [sp+8h] [bp-Ch]
  char *v21; // [sp+8h] [bp-Ch]
  int v22; // [sp+Ch] [bp-8h]

  v5 = a2;
  if ( a3 != 0 )
  {
    v7 = (char *)a1[1];
    if ( ((_BYTE *)a1[2] - v7) >> 2 < a3 )
    {
      v11 = std::vector<Ogre::SurfaceData *>::_M_check_len(a1, a3, (int)"vector::_M_fill_insert");
      v12 = v11;
      v22 = (v5 - (_BYTE *)*a1) >> 2;
      if ( v11 != 0 )
      {
        if ( v11 > 0x3FFFFFFF )
          sub_3BCEB4(v11);
        v21 = (char *)operator new(4 * v11);
      }
      else
      {
        v21 = nullptr;
      }
      v13 = &v21[4 * v22];
      v14 = *a4;
      v15 = a3;
      do
      {
        --v15;
        *(_DWORD *)v13 = v14;
        v13 += 4;
      }
      while ( v15 != 0 );
      v16 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::SurfaceData *>(
              *a1,
              (int)v5,
              v21);
      v17 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::SurfaceData *>(
              v5,
              (int)a1[1],
              (void *)(v16 + 4 * a3));
      if ( *a1 != nullptr )
        operator delete(*a1);
      a1[1] = (void *)v17;
      *a1 = v21;
      a1[2] = &v21[4 * v12];
    }
    else
    {
      v19 = (v7 - a2) >> 2;
      v20 = *a4;
      if ( v19 <= a3 )
      {
        memset32(v7, (int)v20, a3 - v19);
        v10 = (char *)a1[1] + 4 * (a3 - v19);
        a1[1] = v10;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::SurfaceData *>(a2, (int)v7, v10);
        a1[1] = (char *)a1[1] + 4 * v19;
        while ( v5 != v7 )
        {
          *(_DWORD *)v5 = v20;
          v5 += 4;
        }
      }
      else
      {
        v8 = 4 * a3;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::SurfaceData *>(
          &v7[-4 * a3],
          (int)v7,
          v7);
        a1[1] = (char *)a1[1] + v8;
        std::copy_backward<Ogre::SurfaceData **,Ogre::SurfaceData **>(v5, (int)&v7[-v8], (int)v7);
        v9 = &v5[v8];
        while ( v5 != v9 )
        {
          *(_DWORD *)v5 = v20;
          v5 += 4;
        }
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::SurfaceData *,std::allocator<Ogre::SurfaceData *>>::resize(unsigned int,Ogre::SurfaceData *)
// address: 0x0019C4A8   size: 0x28 (40 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::SurfaceData *>::resize(__int64 a1, int a2)
{
  char *v2; // r3
  int v3; // r4
  unsigned int v4; // r2
  __int64 v6; // [sp+0h] [bp-8h] BYREF

  v6 = a1;
  v2 = *(char **)(a1 + 4);
  v3 = *(_DWORD *)a1;
  HIDWORD(v6) = a2;
  v4 = (int)&v2[-v3] >> 2;
  if ( HIDWORD(a1) <= v4 )
  {
    if ( HIDWORD(a1) < v4 )
      *(_DWORD *)(a1 + 4) = v3 + 4 * HIDWORD(a1);
  }
  else
  {
    std::vector<Ogre::SurfaceData *>::_M_fill_insert((void **)a1, v2, HIDWORD(a1) - v4, (void **)&v6 + 1);
  }
  return v6;
}


//======================================================================
// std::vector<Ogre::Texture *,std::allocator<Ogre::Texture *>>::_M_check_len(unsigned int,char const*)const
// address: 0x0019CF88   size: 0x2C (44 bytes)
//======================================================================
unsigned int __fastcall std::vector<Ogre::Texture *>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = (a1[1] - *a1) >> 2;
  if ( 0x3FFFFFFF - v3 < a2 )
    sub_3BD058(a3);
  v4 = (a1[1] - *a1) >> 2;
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0x3FFFFFFF )
    return 0x3FFFFFFF;
  return result;
}


//======================================================================
// std::vector<Ogre::Texture *,std::allocator<Ogre::Texture *>>::push_back(Ogre::Texture * const&)
// address: 0x0019CFD8   size: 0x84 (132 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::Texture *>::push_back(__int64 a1)
{
  _DWORD *v1; // r5
  unsigned int v3; // r0
  unsigned int v4; // r6
  _DWORD *v5; // r3
  int v6; // r0
  int v7; // r5
  __int64 byte_count; // [sp+0h] [bp-Ch]

  byte_count = a1;
  v1 = *(_DWORD **)(a1 + 4);
  if ( v1 == *(_DWORD **)(a1 + 8) )
  {
    v3 = std::vector<Ogre::Texture *>::_M_check_len((_DWORD *)a1, 1u, (int)"vector::_M_insert_aux");
    LODWORD(byte_count) = 4 * v3;
    HIDWORD(byte_count) = *(_DWORD *)a1;
    if ( v3 != 0 )
    {
      if ( v3 > 0x3FFFFFFF )
        sub_3BCEB4(v3);
      v3 = operator new(byte_count);
    }
    v4 = v3;
    v5 = (_DWORD *)(v3 + 4 * (((int)v1 - HIDWORD(byte_count)) >> 2));
    if ( v5 != nullptr )
      *v5 = *(_DWORD *)HIDWORD(a1);
    v6 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::Texture *>(
           *(void **)a1,
           (int)v1,
           (void *)v3);
    v7 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::Texture *>(
           v1,
           *(_DWORD *)(a1 + 4),
           (void *)(v6 + 4));
    if ( *(_DWORD *)a1 != 0 )
      operator delete(*(void **)a1);
    *(_DWORD *)a1 = v4;
    *(_DWORD *)(a1 + 4) = v7;
    *(_DWORD *)(a1 + 8) = v4 + byte_count;
  }
  else
  {
    if ( v1 != nullptr )
      *v1 = *(_DWORD *)HIDWORD(a1);
    *(_DWORD *)(a1 + 4) += 4;
  }
  return byte_count;
}


//======================================================================
// std::vector<Ogre::Texture *,std::allocator<Ogre::Texture *>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::Texture **,std::vector<Ogre::Texture *,std::allocator<Ogre::Texture *>>>,unsigned int,Ogre::Texture * const&)
// address: 0x0019D064   size: 0x104 (260 bytes)
//======================================================================
void __fastcall std::vector<Ogre::Texture *>::_M_fill_insert(void **a1, char *a2, unsigned int a3, void **a4)
{
  char *v5; // r5
  char *v7; // r7
  int v8; // r6
  char *v9; // r6
  char *v10; // r2
  unsigned int v11; // r0
  unsigned int v12; // r7
  char *v13; // r2
  void *v14; // r1
  unsigned int v15; // r3
  int v16; // r0
  int v17; // r5
  unsigned int v19; // [sp+4h] [bp-10h]
  void *v20; // [sp+8h] [bp-Ch]
  char *v21; // [sp+8h] [bp-Ch]
  int v22; // [sp+Ch] [bp-8h]

  v5 = a2;
  if ( a3 != 0 )
  {
    v7 = (char *)a1[1];
    if ( ((_BYTE *)a1[2] - v7) >> 2 < a3 )
    {
      v11 = std::vector<Ogre::Texture *>::_M_check_len(a1, a3, (int)"vector::_M_fill_insert");
      v12 = v11;
      v22 = (v5 - (_BYTE *)*a1) >> 2;
      if ( v11 != 0 )
      {
        if ( v11 > 0x3FFFFFFF )
          sub_3BCEB4(v11);
        v21 = (char *)operator new(4 * v11);
      }
      else
      {
        v21 = nullptr;
      }
      v13 = &v21[4 * v22];
      v14 = *a4;
      v15 = a3;
      do
      {
        --v15;
        *(_DWORD *)v13 = v14;
        v13 += 4;
      }
      while ( v15 != 0 );
      v16 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::Texture *>(*a1, (int)v5, v21);
      v17 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::Texture *>(
              v5,
              (int)a1[1],
              (void *)(v16 + 4 * a3));
      if ( *a1 != nullptr )
        operator delete(*a1);
      a1[1] = (void *)v17;
      *a1 = v21;
      a1[2] = &v21[4 * v12];
    }
    else
    {
      v19 = (v7 - a2) >> 2;
      v20 = *a4;
      if ( v19 <= a3 )
      {
        memset32(v7, (int)v20, a3 - v19);
        v10 = (char *)a1[1] + 4 * (a3 - v19);
        a1[1] = v10;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::Texture *>(a2, (int)v7, v10);
        a1[1] = (char *)a1[1] + 4 * v19;
        while ( v5 != v7 )
        {
          *(_DWORD *)v5 = v20;
          v5 += 4;
        }
      }
      else
      {
        v8 = 4 * a3;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::Texture *>(
          &v7[-4 * a3],
          (int)v7,
          v7);
        a1[1] = (char *)a1[1] + v8;
        std::copy_backward<Ogre::Texture **,Ogre::Texture **>(v5, (int)&v7[-v8], (int)v7);
        v9 = &v5[v8];
        while ( v5 != v9 )
        {
          *(_DWORD *)v5 = v20;
          v5 += 4;
        }
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::ModelInstanceData,std::allocator<Ogre::ModelInstanceData>>::_M_check_len(unsigned int,char const*)const
// address: 0x0019ED78   size: 0x2C (44 bytes)
//======================================================================
unsigned int __fastcall std::vector<Ogre::ModelInstanceData>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = (a1[1] - *a1) >> 6;
  if ( 0x3FFFFFF - v3 < a2 )
    sub_3BD058(a3);
  v4 = (a1[1] - *a1) >> 6;
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0x3FFFFFF )
    return 0x3FFFFFF;
  return result;
}


//======================================================================
// std::vector<unsigned int,std::allocator<unsigned int>>::vector(std::vector<unsigned int,std::allocator<unsigned int>> const&)
// address: 0x0019EEB4   size: 0x42 (66 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIjSaIjEEC1ERKS1_'
unsigned int *__fastcall std::vector<unsigned int>::vector(unsigned int *a1, int a2)
{
  unsigned int v4; // r2
  int v5; // r6

  v4 = (*(_DWORD *)(a2 + 4) - *(_DWORD *)a2) >> 2;
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  v5 = 4 * v4;
  if ( v4 != 0 )
  {
    if ( v4 > 0x3FFFFFFF )
      sub_3BCEB4(a1);
    v4 = operator new(4 * v4);
  }
  a1[2] = v4 + v5;
  *a1 = v4;
  a1[1] = v4;
  a1[1] = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<unsigned int>(
            *(void **)a2,
            *(_DWORD *)(a2 + 4),
            (void *)v4);
  return a1;
}


//======================================================================
// std::vector<Ogre::SoundNode *,std::allocator<Ogre::SoundNode *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::SoundNode **,std::vector<Ogre::SoundNode *,std::allocator<Ogre::SoundNode *>>>,Ogre::SoundNode * const&)
// address: 0x0019F490   size: 0xA6 (166 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::SoundNode *>::_M_insert_aux(__int64 a1, _DWORD *a2)
{
  _DWORD *v3; // r3
  __int64 v4; // r4
  int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r2
  int v8; // r6
  _DWORD *v9; // r3
  int v10; // r0
  __int64 v12; // [sp+0h] [bp-Ch]

  v12 = a1;
  v3 = *(_DWORD **)(a1 + 4);
  v4 = a1;
  if ( v3 != *(_DWORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
      *v3 = *(v3 - 1);
    LODWORD(a1) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v4 + 4) = a1 + 4;
    LODWORD(v4) = *a2;
    v5 = ((int)a1 - 4 - HIDWORD(a1)) >> 2;
    if ( v5 != 0 )
      j_memmove((void *)(a1 - 4 * v5), (const void *)HIDWORD(a1), 4 * v5);
    *(_DWORD *)HIDWORD(v4) = v4;
    return v12;
  }
  v6 = ((int)v3 - *(_DWORD *)a1) >> 2;
  if ( v6 == 0 )
  {
    v7 = 1;
    goto LABEL_11;
  }
  v7 = 2 * v6;
  v8 = 0x3FFFFFFF;
  if ( 2 * v6 >= v6 )
  {
LABEL_11:
    v8 = v7;
    if ( v7 > 0x3FFFFFFF )
      v8 = 0x3FFFFFFF;
  }
  LODWORD(v12) = (HIDWORD(a1) - *(_DWORD *)a1) >> 2;
  HIDWORD(v12) = 4 * v8;
  if ( v8 != 0 )
    v8 = operator new(4 * v8);
  v9 = (_DWORD *)(v8 + 4 * v12);
  if ( v9 != nullptr )
    *v9 = *a2;
  v10 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::SoundNode *>(
          *(void **)v4,
          SHIDWORD(v4),
          (void *)v8);
  HIDWORD(v4) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::SoundNode *>(
                  (void *)HIDWORD(v4),
                  *(_DWORD *)(v4 + 4),
                  (void *)(v10 + 4));
  if ( *(_DWORD *)v4 != 0 )
    operator delete(*(void **)v4);
  *(_DWORD *)v4 = v8;
  *(_DWORD *)(v4 + 4) = HIDWORD(v4);
  *(_DWORD *)(v4 + 8) = v8 + HIDWORD(v12);
  return v12;
}


//======================================================================
// std::vector<Ogre::ModelInstanceData,std::allocator<Ogre::ModelInstanceData>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::ModelInstanceData*,std::vector<Ogre::ModelInstanceData,std::allocator<Ogre::ModelInstanceData>>>,Ogre::ModelInstanceData const&)
// address: 0x0019F8A0   size: 0xB4 (180 bytes)
//======================================================================
void __fastcall std::vector<Ogre::ModelInstanceData>::_M_insert_aux(int *a1, int a2, int a3)
{
  int v5; // r0
  unsigned int v7; // r0
  int v8; // r5
  int v9; // r0
  int v10; // r0
  int v11; // r6
  size_t byte_count; // [sp+0h] [bp-4Ch]
  int v13; // [sp+4h] [bp-48h]
  _BYTE v14[68]; // [sp+8h] [bp-44h] BYREF

  v5 = a1[1];
  if ( v5 == a1[2] )
  {
    v7 = std::vector<Ogre::ModelInstanceData>::_M_check_len(a1, 1u, (int)"vector::_M_insert_aux");
    v13 = (a2 - *a1) >> 6;
    byte_count = v7 << 6;
    if ( v7 != 0 )
    {
      if ( v7 > 0x3FFFFFF )
        sub_3BCEB4(v7);
      v7 = operator new(byte_count);
    }
    v8 = v7;
    v9 = v7 + (v13 << 6);
    if ( v9 != 0 )
      Ogre::ModelInstanceData::ModelInstanceData(v9, a3);
    v10 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::ModelInstanceData *,Ogre::ModelInstanceData *>(
            *a1,
            a2,
            v8);
    v11 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::ModelInstanceData *,Ogre::ModelInstanceData *>(
            a2,
            a1[1],
            v10 + 64);
    if ( *a1 != 0 )
      operator delete((void *)*a1);
    *a1 = v8;
    a1[1] = v11;
    a1[2] = v8 + byte_count;
  }
  else
  {
    if ( v5 != 0 )
      Ogre::ModelInstanceData::ModelInstanceData(v5, v5 - 64);
    a1[1] += 64;
    Ogre::ModelInstanceData::ModelInstanceData((int)v14, a3);
    std::__copy_move_backward<false,false,std::random_access_iterator_tag>::__copy_move_b<Ogre::ModelInstanceData *,Ogre::ModelInstanceData *>(
      a2,
      a1[1] - 128,
      a1[1] - 64);
    Ogre::ModelInstanceData::operator=(a2, (int)v14);
  }
}


//======================================================================
// std::vector<Ogre::ModelInstanceData,std::allocator<Ogre::ModelInstanceData>>::push_back(Ogre::ModelInstanceData const&)
// address: 0x0019F95C   size: 0x28 (40 bytes)
//======================================================================
void __fastcall std::vector<Ogre::ModelInstanceData>::push_back(int *a1, int a2)
{
  int v3; // r1

  v3 = a1[1];
  if ( v3 == a1[2] )
  {
    std::vector<Ogre::ModelInstanceData>::_M_insert_aux(a1, v3, a2);
  }
  else
  {
    if ( v3 != 0 )
      Ogre::ModelInstanceData::ModelInstanceData(a1[1], a2);
    a1[1] += 64;
  }
}


//======================================================================
// std::vector<Ogre::ModelInstanceData,std::allocator<Ogre::ModelInstanceData>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::ModelInstanceData*,std::vector<Ogre::ModelInstanceData,std::allocator<Ogre::ModelInstanceData>>>,unsigned int,Ogre::ModelInstanceData const&)
// address: 0x0019F984   size: 0x136 (310 bytes)
//======================================================================
void __fastcall std::vector<Ogre::ModelInstanceData>::_M_fill_insert(int *a1, int a2, unsigned int a3, int a4)
{
  int v6; // r6
  unsigned int v7; // r7
  unsigned int v8; // r7
  int j; // r4
  int v10; // r5
  unsigned int v11; // r7
  int v12; // r2
  int i; // r4
  unsigned int v14; // r0
  int v15; // r5
  int v16; // r6
  int v17; // r5
  int v18; // r0
  int v19; // r5
  unsigned int v20; // [sp+0h] [bp-54h]
  unsigned int v21; // [sp+0h] [bp-54h]
  unsigned int v22; // [sp+4h] [bp-50h]
  unsigned int v25; // [sp+Ch] [bp-48h]
  _BYTE v26[68]; // [sp+10h] [bp-44h] BYREF

  if ( a3 != 0 )
  {
    if ( (a1[2] - a1[1]) >> 6 < a3 )
    {
      v14 = std::vector<Ogre::ModelInstanceData>::_M_check_len(a1, a3, (int)"vector::_M_fill_insert");
      v21 = v14;
      v15 = (a2 - *a1) >> 6;
      if ( v14 != 0 )
      {
        if ( v14 > 0x3FFFFFF )
          sub_3BCEB4(v14);
        v16 = operator new(v14 << 6);
      }
      else
      {
        v16 = 0;
      }
      v17 = v16 + (v15 << 6);
      v22 = a3;
      do
      {
        if ( v17 != 0 )
          Ogre::ModelInstanceData::ModelInstanceData(v17, a4);
        v17 += 64;
        --v22;
      }
      while ( v22 != 0 );
      v18 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::ModelInstanceData *,Ogre::ModelInstanceData *>(
              *a1,
              a2,
              v16);
      v19 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::ModelInstanceData *,Ogre::ModelInstanceData *>(
              a2,
              a1[1],
              v18 + (a3 << 6));
      if ( *a1 != 0 )
        operator delete((void *)*a1);
      *a1 = v16;
      a1[1] = v19;
      a1[2] = v16 + (v21 << 6);
    }
    else
    {
      Ogre::ModelInstanceData::ModelInstanceData((int)v26, a4);
      v6 = a1[1];
      v20 = (v6 - a2) >> 6;
      if ( v20 <= a3 )
      {
        v10 = a1[1];
        v11 = a3 - v20;
        v25 = v11;
        while ( v11 != 0 )
        {
          if ( v10 != 0 )
            Ogre::ModelInstanceData::ModelInstanceData(v10, (int)v26);
          --v11;
          v10 += 64;
        }
        v12 = a1[1] + (v25 << 6);
        a1[1] = v12;
        std::__uninitialized_copy<false>::__uninit_copy<Ogre::ModelInstanceData *,Ogre::ModelInstanceData *>(
          a2,
          v6,
          v12);
        a1[1] += v20 << 6;
        for ( i = a2; i != v6; i += 64 )
          Ogre::ModelInstanceData::operator=(i, (int)v26);
      }
      else
      {
        v7 = a3 << 6;
        std::__uninitialized_copy<false>::__uninit_copy<Ogre::ModelInstanceData *,Ogre::ModelInstanceData *>(
          v6 - v7,
          v6,
          v6);
        a1[1] += v7;
        std::__copy_move_backward<false,false,std::random_access_iterator_tag>::__copy_move_b<Ogre::ModelInstanceData *,Ogre::ModelInstanceData *>(
          a2,
          v6 - v7,
          v6);
        v8 = a2 + v7;
        for ( j = a2; j != v8; j += 64 )
          Ogre::ModelInstanceData::operator=(j, (int)v26);
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::ModelInstanceData,std::allocator<Ogre::ModelInstanceData>>::resize(unsigned int,Ogre::ModelInstanceData)
// address: 0x0019FAC4   size: 0x26 (38 bytes)
//======================================================================
void __fastcall std::vector<Ogre::ModelInstanceData>::resize(int *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r4

  v3 = (a1[1] - *a1) >> 6;
  if ( a2 <= v3 )
  {
    if ( a2 < v3 )
      a1[1] = *a1 + (a2 << 6);
  }
  else
  {
    std::vector<Ogre::ModelInstanceData>::_M_fill_insert(a1, a1[1], a2 - v3, a3);
  }
}


//======================================================================
// std::vector<Ogre::TerrainSceneNode::BackLoadInfo,std::allocator<Ogre::TerrainSceneNode::BackLoadInfo>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::TerrainSceneNode::BackLoadInfo*,std::vector<Ogre::TerrainSceneNode::BackLoadInfo,std::allocator<Ogre::TerrainSceneNode::BackLoadInfo>>>,Ogre::TerrainSceneNode::BackLoadInfo const&)
// address: 0x0019FF30   size: 0xF0 (240 bytes)
//======================================================================
void __fastcall std::vector<Ogre::TerrainSceneNode::BackLoadInfo>::_M_insert_aux(int a1, _DWORD *a2, int *a3)
{
  _DWORD *v4; // r3
  int v6; // r6
  int v7; // r7
  int v8; // r7
  int v9; // r0
  unsigned int v10; // r3
  unsigned int v11; // r1
  int v12; // r6
  int v13; // r7
  char *v14; // r7
  char *v15; // r2
  int v16; // r3
  int v17; // r7
  int v18; // r3
  int v19; // r0
  int v20; // r5
  char *v21; // [sp+4h] [bp-28h]
  int v23; // [sp+14h] [bp-18h]
  int v24; // [sp+18h] [bp-14h]
  int v25; // [sp+1Ch] [bp-10h]
  int v26; // [sp+20h] [bp-Ch]
  int v27; // [sp+24h] [bp-8h]

  v4 = *(_DWORD **)(a1 + 4);
  if ( v4 != *(_DWORD **)(a1 + 8) )
  {
    if ( v4 != nullptr )
    {
      v6 = *(v4 - 4);
      v7 = *(v4 - 3);
      *v4 = *(v4 - 5);
      v4[1] = v6;
      v4[2] = v7;
      v8 = *(v4 - 1);
      v4[3] = *(v4 - 2);
      v4[4] = v8;
    }
    v9 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 4) += 20;
    v23 = *a3;
    v24 = a3[1];
    v25 = a3[2];
    v26 = a3[3];
    v27 = a3[4];
    if ( -858993459 * ((v9 - 20 - (int)a2) >> 2) != 0 )
      j_memmove((void *)(v9 - 4 * ((v9 - 20 - (int)a2) >> 2)), a2, 4 * ((v9 - 20 - (int)a2) >> 2));
    *a2 = v23;
    a2[1] = v24;
    a2[2] = v25;
    a2[3] = v26;
    a2[4] = v27;
    return;
  }
  v10 = -858993459 * (((int)v4 - *(_DWORD *)a1) >> 2);
  if ( v10 == 0 )
  {
    v11 = 1;
    goto LABEL_11;
  }
  v11 = 2 * v10;
  v12 = 214748364;
  if ( 2 * v10 >= v10 )
  {
LABEL_11:
    v12 = v11;
    if ( v11 > 0xCCCCCCC )
      v12 = 214748364;
  }
  v13 = -858993459 * (((int)a2 - *(_DWORD *)a1) >> 2);
  if ( v12 != 0 )
    v21 = (char *)operator new(20 * v12);
  else
    v21 = nullptr;
  v14 = &v21[20 * v13];
  if ( v14 != nullptr )
  {
    v15 = v14;
    v16 = a3[1];
    v17 = a3[2];
    *(_DWORD *)v15 = *a3;
    *((_DWORD *)v15 + 1) = v16;
    *((_DWORD *)v15 + 2) = v17;
    v15 += 12;
    v18 = a3[4];
    *(_DWORD *)v15 = a3[3];
    *((_DWORD *)v15 + 1) = v18;
  }
  v19 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::TerrainSceneNode::BackLoadInfo>(
          *(void **)a1,
          (int)a2,
          v21);
  v20 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::TerrainSceneNode::BackLoadInfo>(
          a2,
          *(_DWORD *)(a1 + 4),
          (void *)(v19 + 20));
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)(a1 + 4) = v20;
  *(_DWORD *)a1 = v21;
  *(_DWORD *)(a1 + 8) = &v21[20 * v12];
}


//======================================================================
// std::vector<int,std::allocator<int>>::push_back(int const&)
// address: 0x001A03B0   size: 0x22 (34 bytes)
//======================================================================
int __fastcall std::vector<int>::push_back(__int64 a1)
{
  _DWORD *v1; // r2

  v1 = (_DWORD *)HIDWORD(a1);
  HIDWORD(a1) = *(_DWORD *)(a1 + 4);
  if ( HIDWORD(a1) == *(_DWORD *)(a1 + 8) )
  {
    LODWORD(a1) = std::vector<int>::_M_insert_aux(a1, v1);
  }
  else
  {
    if ( HIDWORD(a1) != 0 )
      *(_DWORD *)HIDWORD(a1) = *v1;
    *(_DWORD *)(a1 + 4) += 4;
  }
  return a1;
}


//======================================================================
// std::vector<Ogre::TerrainSceneNode *,std::allocator<Ogre::TerrainSceneNode *>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::TerrainSceneNode **,std::vector<Ogre::TerrainSceneNode *,std::allocator<Ogre::TerrainSceneNode *>>>,unsigned int,Ogre::TerrainSceneNode * const&)
// address: 0x001A0564   size: 0x120 (288 bytes)
//======================================================================
void __fastcall std::vector<Ogre::TerrainSceneNode *>::_M_fill_insert(int a1, _DWORD *a2, unsigned int a3, void **a4)
{
  _DWORD *v5; // r5
  _BYTE *v7; // r7
  int v8; // r6
  _DWORD *v9; // r6
  void *v10; // r2
  unsigned int v11; // r3
  unsigned int v12; // r7
  unsigned int v13; // r7
  char *v14; // r2
  void *v15; // r1
  unsigned int v16; // r3
  int v17; // r0
  int v18; // r5
  unsigned int v20; // [sp+4h] [bp-10h]
  void *v21; // [sp+8h] [bp-Ch]
  char *v22; // [sp+8h] [bp-Ch]
  int v23; // [sp+Ch] [bp-8h]

  v5 = a2;
  if ( a3 != 0 )
  {
    v7 = *(_BYTE **)(a1 + 4);
    if ( (*(_DWORD *)(a1 + 8) - (int)v7) >> 2 < a3 )
    {
      v11 = (int)&v7[-*(_DWORD *)a1] >> 2;
      if ( 0x3FFFFFFF - v11 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v12 = a3;
      if ( a3 < v11 )
        v12 = v11;
      v13 = v12 + v11;
      if ( v13 < v11 || v13 > 0x3FFFFFFF )
        v13 = 0x3FFFFFFF;
      v23 = ((int)a2 - *(_DWORD *)a1) >> 2;
      if ( v13 != 0 )
        v22 = (char *)operator new(4 * v13);
      else
        v22 = nullptr;
      v14 = &v22[4 * v23];
      v15 = *a4;
      v16 = a3;
      do
      {
        --v16;
        *(_DWORD *)v14 = v15;
        v14 += 4;
      }
      while ( v16 != 0 );
      v17 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::TerrainSceneNode *>(
              *(void **)a1,
              (int)v5,
              v22);
      v18 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::TerrainSceneNode *>(
              v5,
              *(_DWORD *)(a1 + 4),
              (void *)(v17 + 4 * a3));
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)(a1 + 4) = v18;
      *(_DWORD *)a1 = v22;
      *(_DWORD *)(a1 + 8) = &v22[4 * v13];
    }
    else
    {
      v20 = (v7 - (_BYTE *)a2) >> 2;
      v21 = *a4;
      if ( v20 <= a3 )
      {
        memset32(v7, (int)v21, a3 - v20);
        v10 = (void *)(*(_DWORD *)(a1 + 4) + 4 * (a3 - v20));
        *(_DWORD *)(a1 + 4) = v10;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::TerrainSceneNode *>(
          a2,
          (int)v7,
          v10);
        *(_DWORD *)(a1 + 4) += 4 * v20;
        while ( v5 != (_DWORD *)v7 )
          *v5++ = v21;
      }
      else
      {
        v8 = 4 * a3;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::TerrainSceneNode *>(
          &v7[-4 * a3],
          (int)v7,
          v7);
        *(_DWORD *)(a1 + 4) += v8;
        if ( (&v7[-v8] - (_BYTE *)v5) >> 2 != 0 )
          j_memmove(&v7[-4 * ((&v7[-v8] - (_BYTE *)v5) >> 2)], v5, 4 * ((&v7[-v8] - (_BYTE *)v5) >> 2));
        v9 = &v5[v8 / 4u];
        while ( v5 != v9 )
          *v5++ = v21;
      }
    }
  }
}


//======================================================================
// std::vector<Ogre::TerrainTile *,std::allocator<Ogre::TerrainTile *>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::TerrainTile **,std::vector<Ogre::TerrainTile *,std::allocator<Ogre::TerrainTile *>>>,unsigned int,Ogre::TerrainTile * const&)
// address: 0x001A07B8   size: 0x120 (288 bytes)
//======================================================================
void __fastcall std::vector<Ogre::TerrainTile *>::_M_fill_insert(int a1, _DWORD *a2, unsigned int a3, void **a4)
{
  _DWORD *v5; // r5
  _BYTE *v7; // r7
  int v8; // r6
  _DWORD *v9; // r6
  void *v10; // r2
  unsigned int v11; // r3
  unsigned int v12; // r7
  unsigned int v13; // r7
  char *v14; // r2
  void *v15; // r1
  unsigned int v16; // r3
  int v17; // r0
  int v18; // r5
  unsigned int v20; // [sp+4h] [bp-10h]
  void *v21; // [sp+8h] [bp-Ch]
  char *v22; // [sp+8h] [bp-Ch]
  int v23; // [sp+Ch] [bp-8h]

  v5 = a2;
  if ( a3 != 0 )
  {
    v7 = *(_BYTE **)(a1 + 4);
    if ( (*(_DWORD *)(a1 + 8) - (int)v7) >> 2 < a3 )
    {
      v11 = (int)&v7[-*(_DWORD *)a1] >> 2;
      if ( 0x3FFFFFFF - v11 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v12 = a3;
      if ( a3 < v11 )
        v12 = v11;
      v13 = v12 + v11;
      if ( v13 < v11 || v13 > 0x3FFFFFFF )
        v13 = 0x3FFFFFFF;
      v23 = ((int)a2 - *(_DWORD *)a1) >> 2;
      if ( v13 != 0 )
        v22 = (char *)operator new(4 * v13);
      else
        v22 = nullptr;
      v14 = &v22[4 * v23];
      v15 = *a4;
      v16 = a3;
      do
      {
        --v16;
        *(_DWORD *)v14 = v15;
        v14 += 4;
      }
      while ( v16 != 0 );
      v17 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::TerrainTile *>(
              *(void **)a1,
              (int)v5,
              v22);
      v18 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::TerrainTile *>(
              v5,
              *(_DWORD *)(a1 + 4),
              (void *)(v17 + 4 * a3));
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)(a1 + 4) = v18;
      *(_DWORD *)a1 = v22;
      *(_DWORD *)(a1 + 8) = &v22[4 * v13];
    }
    else
    {
      v20 = (v7 - (_BYTE *)a2) >> 2;
      v21 = *a4;
      if ( v20 <= a3 )
      {
        memset32(v7, (int)v21, a3 - v20);
        v10 = (void *)(*(_DWORD *)(a1 + 4) + 4 * (a3 - v20));
        *(_DWORD *)(a1 + 4) = v10;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::TerrainTile *>(a2, (int)v7, v10);
        *(_DWORD *)(a1 + 4) += 4 * v20;
        while ( v5 != (_DWORD *)v7 )
          *v5++ = v21;
      }
      else
      {
        v8 = 4 * a3;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::TerrainTile *>(
          &v7[-4 * a3],
          (int)v7,
          v7);
        *(_DWORD *)(a1 + 4) += v8;
        if ( (&v7[-v8] - (_BYTE *)v5) >> 2 != 0 )
          j_memmove(&v7[-4 * ((&v7[-v8] - (_BYTE *)v5) >> 2)], v5, 4 * ((&v7[-v8] - (_BYTE *)v5) >> 2));
        v9 = &v5[v8 / 4u];
        while ( v5 != v9 )
          *v5++ = v21;
      }
    }
  }
}


//======================================================================
// std::vector<UIFont,std::allocator<UIFont>>::_M_insert_aux(__gnu_cxx::__normal_iterator<UIFont*,std::vector<UIFont,std::allocator<UIFont>>>,UIFont const&)
// address: 0x001A1EBC   size: 0x118 (280 bytes)
//======================================================================
void __fastcall std::vector<UIFont>::_M_insert_aux(int *a1, int a2, int a3)
{
  int v4; // r3
  int v5; // r0
  int v8; // r0
  int i; // r4
  int v10; // r6
  unsigned int v11; // r0
  unsigned int v12; // r3
  int v13; // r5
  int v14; // r0
  int v15; // r6
  int j; // r0
  int v17; // r7
  int v18; // r6
  int v19; // [sp+0h] [bp-2Ch]
  int v20; // [sp+4h] [bp-28h]
  int v21; // [sp+4h] [bp-28h]
  int v22; // [sp+4h] [bp-28h]
  int v23; // [sp+4h] [bp-28h]
  char v24[4]; // [sp+8h] [bp-24h] BYREF
  char v25[32]; // [sp+Ch] [bp-20h] BYREF

  v4 = a1[2];
  v5 = a1[1];
  if ( v5 != v4 )
  {
    if ( v5 != 0 )
      UIFont::UIFont(v5, v5 - 32);
    a1[1] += 32;
    UIFont::UIFont((int)v24, a3);
    v8 = a1[1] - 64;
    for ( i = (v8 - a2) >> 5; i > 0; --i )
    {
      v10 = v8 - 32;
      UIFont::operator=(v8, v8 - 32);
      v8 = v10;
    }
    UIFont::operator=(a2, (int)v24);
    sub_3BDF80(v25);
    sub_3BDF80(v24);
    return;
  }
  v11 = (v5 - *a1) >> 5;
  if ( v11 == 0 )
  {
    v12 = 1;
    goto LABEL_12;
  }
  v12 = 2 * v11;
  v13 = 0x7FFFFFF;
  if ( 2 * v11 >= v11 )
  {
LABEL_12:
    v13 = v12;
    if ( v12 > 0x7FFFFFF )
      v13 = 0x7FFFFFF;
  }
  v20 = (a2 - *a1) >> 5;
  if ( v13 != 0 )
    v19 = operator new(32 * v13);
  else
    v19 = 0;
  v14 = v19 + 32 * v20;
  if ( v14 != 0 )
    UIFont::UIFont(v14, a3);
  v15 = *a1;
  for ( j = v19; ; j = v21 )
  {
    v21 = j + 32;
    if ( v15 == a2 )
      break;
    if ( j != 0 )
      UIFont::UIFont(j, v15);
    v15 += 32;
  }
  v17 = j + 32;
  v22 = a1[1];
  while ( v15 != v22 )
  {
    if ( v17 != 0 )
      UIFont::UIFont(v17, v15);
    v17 += 32;
    v15 += 32;
  }
  v18 = *a1;
  v23 = a1[1];
  while ( v18 != v23 )
  {
    sub_3BDF80(v18 + 4);
    sub_3BDF80(v18);
    v18 += 32;
  }
  if ( *a1 != 0 )
    operator delete((void *)*a1);
  a1[1] = v17;
  *a1 = v19;
  a1[2] = v19 + 32 * v13;
}


//======================================================================
// std::vector<AccelItem,std::allocator<AccelItem>>::_M_insert_aux(__gnu_cxx::__normal_iterator<AccelItem*,std::vector<AccelItem,std::allocator<AccelItem>>>,AccelItem const&)
// address: 0x001A2010   size: 0x180 (384 bytes)
//======================================================================
void __fastcall std::vector<AccelItem>::_M_insert_aux(void **a1, char *a2, void *a3)
{
  char *v5; // r0
  char *v6; // r5
  char *v7; // r7
  int i; // r6
  unsigned int v9; // r0
  unsigned int v10; // r3
  int v11; // r6
  char *v12; // r0
  _BYTE *v13; // r6
  char *v14; // r5
  char *j; // r7
  char *v16; // r6
  char *k; // r5
  char *v18; // r5
  int v19; // [sp+4h] [bp-128h]
  char *v21; // [sp+8h] [bp-124h]
  char *v22; // [sp+Ch] [bp-120h]
  char *v23; // [sp+10h] [bp-11Ch]
  _BYTE v24[264]; // [sp+1Ch] [bp-110h] BYREF

  v5 = (char *)a1[1];
  if ( v5 != a1[2] )
  {
    if ( v5 != nullptr )
      j_memcpy(v5, v5 - 264, 0x108u);
    v6 = (char *)a1[1];
    a1[1] = v6 + 264;
    j_memcpy(v24, a3, sizeof(v24));
    v7 = v6 - 264;
    for ( i = 1041204193 * ((v6 - 264 - a2) >> 3); i > 0; --i )
    {
      v6 -= 264;
      v7 -= 264;
      j_memcpy(v6, v7, 0x107u);
    }
    j_memcpy(a2, v24, 0x107u);
    return;
  }
  v9 = 1041204193 * ((v5 - (_BYTE *)*a1) >> 3);
  if ( v9 == 0 )
  {
    v10 = 1;
    goto LABEL_12;
  }
  v10 = 2 * v9;
  v19 = 16268815;
  if ( 2 * v9 >= v9 )
  {
LABEL_12:
    v19 = v10;
    if ( v10 > 0xF83E0F )
      v19 = 16268815;
  }
  v11 = 1041204193 * ((a2 - (_BYTE *)*a1) >> 3);
  if ( v19 != 0 )
    v22 = (char *)operator new(264 * v19);
  else
    v22 = nullptr;
  v12 = &v22[264 * v11];
  if ( v12 != nullptr )
    j_memcpy(v12, a3, 0x108u);
  v13 = *a1;
  v14 = v22;
  for ( j = (char *)*a1; j != a2; j += 264 )
  {
    if ( v14 != nullptr )
      j_memcpy(v14, j, 0x108u);
    v14 += 264;
  }
  v16 = &v22[8 * ((unsigned int)(j - v13) >> 3) + 264];
  v21 = v16;
  v23 = (char *)a1[1];
  for ( k = j; k != v23; k += 264 )
  {
    if ( v16 != nullptr )
      j_memcpy(v16, k, 0x108u);
    v16 += 264;
  }
  v18 = &v21[8 * ((unsigned int)(k - j) >> 3)];
  if ( *a1 != nullptr )
    operator delete(*a1);
  a1[1] = v18;
  *a1 = v22;
  a1[2] = &v22[264 * v19];
}


//======================================================================
// std::vector<Frame *,std::allocator<Frame *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,Frame * const&)
// address: 0x001A397C   size: 0xAA (170 bytes)
//======================================================================
unsigned __int64 __fastcall std::vector<Frame *>::_M_insert_aux(unsigned int a1, _DWORD *a2, int *a3)
{
  _DWORD *v3; // r3
  int v6; // r0
  int v7; // r4
  int v8; // r2
  unsigned int v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // r5
  int v12; // r7
  _DWORD *v13; // r7
  int v14; // r0
  int v15; // r6
  unsigned __int64 v17; // [sp+0h] [bp-Ch]

  v17 = __PAIR64__((unsigned int)a3, a1);
  v3 = *(_DWORD **)(a1 + 4);
  if ( v3 != *(_DWORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
      *v3 = *(v3 - 1);
    v6 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 4) = v6 + 4;
    v7 = *a3;
    v8 = (v6 - 4 - (int)a2) >> 2;
    if ( v8 != 0 )
      j_memmove((void *)(v6 - 4 * v8), a2, 4 * v8);
    *a2 = v7;
    return v17;
  }
  v9 = ((int)v3 - *(_DWORD *)a1) >> 2;
  if ( v9 == 0 )
  {
    v10 = 1;
    goto LABEL_11;
  }
  v10 = 2 * v9;
  v11 = 0x3FFFFFFF;
  if ( 2 * v9 >= v9 )
  {
LABEL_11:
    v11 = v10;
    if ( v10 > 0x3FFFFFFF )
      v11 = 0x3FFFFFFF;
  }
  v12 = ((int)a2 - *(_DWORD *)a1) >> 2;
  if ( v11 != 0 )
    LODWORD(v17) = sub_1A0E20(v11);
  else
    LODWORD(v17) = 0;
  v13 = (_DWORD *)(v17 + 4 * v12);
  if ( v13 != nullptr )
    *v13 = *(_DWORD *)HIDWORD(v17);
  v14 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Frame *>(
          *(void **)a1,
          (int)a2,
          (void *)v17);
  v15 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Frame *>(
          a2,
          *(_DWORD *)(a1 + 4),
          (void *)(v14 + 4));
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)(a1 + 4) = v15;
  *(_DWORD *)a1 = v17;
  *(_DWORD *)(a1 + 8) = v17 + 4 * v11;
  return v17;
}


//======================================================================
// std::vector<Frame *,std::allocator<Frame *>>::operator=(std::vector<Frame *,std::allocator<Frame *>> const&)
// address: 0x001A3D90   size: 0x84 (132 bytes)
//======================================================================
int __fastcall std::vector<Frame *>::operator=(int a1, int a2)
{
  int v4; // r7
  void *v5; // r6
  void *v6; // r2
  unsigned int v7; // r0
  unsigned int v8; // r5
  unsigned int v9; // r1
  void *v10; // r0
  int v11; // r1
  int v13; // [sp+4h] [bp-8h]

  if ( a2 != a1 )
  {
    v4 = *(_DWORD *)(a2 + 4);
    v5 = *(void **)a2;
    v6 = *(void **)a1;
    v7 = (v4 - *(_DWORD *)a2) >> 2;
    v13 = 4 * v7;
    if ( v7 <= (*(_DWORD *)(a1 + 8) - *(_DWORD *)a1) >> 2 )
    {
      v9 = (*(_DWORD *)(a1 + 4) - (int)v6) >> 2;
      if ( v9 < v7 )
      {
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Frame *>(v5, (int)v5 + 4 * v9, v6);
        v6 = *(void **)(a1 + 4);
        v11 = *(_DWORD *)(a2 + 4);
        v10 = (void *)(*(_DWORD *)a2 + 4 * (((int)v6 - *(_DWORD *)a1) >> 2));
      }
      else
      {
        v10 = v5;
        v11 = v4;
      }
      std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Frame *>(v10, v11, v6);
    }
    else
    {
      if ( v7 != 0 )
        v7 = sub_1A0E20(v7);
      v8 = v7;
      std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Frame *>(v5, v4, (void *)v7);
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)a1 = v8;
      *(_DWORD *)(a1 + 8) = v8 + v13;
    }
    *(_DWORD *)(a1 + 4) = *(_DWORD *)a1 + v13;
  }
  return a1;
}


//======================================================================
// std::vector<Frame *,std::allocator<Frame *>>::vector(std::vector<Frame *,std::allocator<Frame *>> const&)
// address: 0x001A3E14   size: 0x3C (60 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIP5FrameSaIS1_EEC1ERKS3_'
_DWORD *__fastcall std::vector<Frame *>::vector(_DWORD *a1, int a2)
{
  unsigned int v4; // r6
  char *v5; // r2

  v4 = (*(_DWORD *)(a2 + 4) - *(_DWORD *)a2) >> 2;
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  if ( v4 != 0 )
    v5 = (char *)sub_1A0E20(v4);
  else
    v5 = nullptr;
  a1[2] = &v5[4 * v4];
  *a1 = v5;
  a1[1] = v5;
  a1[1] = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Frame *>(
            *(void **)a2,
            *(_DWORD *)(a2 + 4),
            v5);
  return a1;
}


//======================================================================
// std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>>,LayoutFrame * const&)
// address: 0x001A4714   size: 0xA6 (166 bytes)
//======================================================================
__int64 __fastcall std::vector<LayoutFrame *>::_M_insert_aux(__int64 a1, _DWORD *a2)
{
  _DWORD *v3; // r3
  __int64 v4; // r4
  int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r2
  int v8; // r6
  _DWORD *v9; // r3
  int v10; // r0
  __int64 v12; // [sp+0h] [bp-Ch]

  v12 = a1;
  v3 = *(_DWORD **)(a1 + 4);
  v4 = a1;
  if ( v3 != *(_DWORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
      *v3 = *(v3 - 1);
    LODWORD(a1) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v4 + 4) = a1 + 4;
    LODWORD(v4) = *a2;
    v5 = ((int)a1 - 4 - HIDWORD(a1)) >> 2;
    if ( v5 != 0 )
      j_memmove((void *)(a1 - 4 * v5), (const void *)HIDWORD(a1), 4 * v5);
    *(_DWORD *)HIDWORD(v4) = v4;
    return v12;
  }
  v6 = ((int)v3 - *(_DWORD *)a1) >> 2;
  if ( v6 == 0 )
  {
    v7 = 1;
    goto LABEL_11;
  }
  v7 = 2 * v6;
  v8 = 0x3FFFFFFF;
  if ( 2 * v6 >= v6 )
  {
LABEL_11:
    v8 = v7;
    if ( v7 > 0x3FFFFFFF )
      v8 = 0x3FFFFFFF;
  }
  LODWORD(v12) = (HIDWORD(a1) - *(_DWORD *)a1) >> 2;
  HIDWORD(v12) = 4 * v8;
  if ( v8 != 0 )
    v8 = operator new(4 * v8);
  v9 = (_DWORD *)(v8 + 4 * v12);
  if ( v9 != nullptr )
    *v9 = *a2;
  v10 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<LayoutFrame *>(
          *(void **)v4,
          SHIDWORD(v4),
          (void *)v8);
  HIDWORD(v4) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<LayoutFrame *>(
                  (void *)HIDWORD(v4),
                  *(_DWORD *)(v4 + 4),
                  (void *)(v10 + 4));
  if ( *(_DWORD *)v4 != 0 )
    operator delete(*(void **)v4);
  *(_DWORD *)v4 = v8;
  *(_DWORD *)(v4 + 4) = HIDWORD(v4);
  *(_DWORD *)(v4 + 8) = v8 + HIDWORD(v12);
  return v12;
}


//======================================================================
// std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>::push_back(LayoutFrame * const&)
// address: 0x001A47C0   size: 0x22 (34 bytes)
//======================================================================
int __fastcall std::vector<LayoutFrame *>::push_back(__int64 a1)
{
  _DWORD *v1; // r2

  v1 = (_DWORD *)HIDWORD(a1);
  HIDWORD(a1) = *(_DWORD *)(a1 + 4);
  if ( HIDWORD(a1) == *(_DWORD *)(a1 + 8) )
  {
    LODWORD(a1) = std::vector<LayoutFrame *>::_M_insert_aux(a1, v1);
  }
  else
  {
    if ( HIDWORD(a1) != 0 )
      *(_DWORD *)HIDWORD(a1) = *v1;
    *(_DWORD *)(a1 + 4) += 4;
  }
  return a1;
}


//======================================================================
// std::vector<Frame *,std::allocator<Frame *>>::push_back(Frame * const&)
// address: 0x001B80F0   size: 0x22 (34 bytes)
//======================================================================
unsigned int __fastcall std::vector<Frame *>::push_back(unsigned int result, int *a2)
{
  int *v3; // r1

  v3 = *(int **)(result + 4);
  if ( v3 == *(int **)(result + 8) )
    return std::vector<Frame *>::_M_insert_aux(result, v3, a2);
  if ( v3 != nullptr )
    *v3 = *a2;
  *(_DWORD *)(result + 4) += 4;
  return result;
}


//======================================================================
// std::vector<ListBox::ListGroup,std::allocator<ListBox::ListGroup>>::_M_insert_aux(__gnu_cxx::__normal_iterator<ListBox::ListGroup*,std::vector<ListBox::ListGroup,std::allocator<ListBox::ListGroup>>>,ListBox::ListGroup const&)
// address: 0x001B8264   size: 0x16E (366 bytes)
//======================================================================
void __fastcall std::vector<ListBox::ListGroup>::_M_insert_aux(int a1, int a2, int a3)
{
  _DWORD *v5; // r1
  _DWORD *v7; // r3
  _DWORD *v8; // r0
  int v9; // r2
  int v10; // r1
  int v11; // r4
  int i; // r7
  int v13; // r1
  char v14; // r2
  unsigned int v15; // r1
  unsigned int v16; // r3
  int v17; // r5
  int v18; // r0
  int v19; // r0
  int v20; // r7
  int v21; // r6
  int v22; // r6
  int v23; // [sp+4h] [bp-28h]
  int v24; // [sp+8h] [bp-24h]
  int j; // [sp+8h] [bp-24h]
  int v26; // [sp+8h] [bp-24h]
  int v27; // [sp+Ch] [bp-20h]
  int v28; // [sp+10h] [bp-1Ch]
  int v29; // [sp+14h] [bp-18h]
  char v30; // [sp+18h] [bp-14h]
  void *v31[4]; // [sp+1Ch] [bp-10h] BYREF

  v5 = *(_DWORD **)(a1 + 4);
  if ( v5 != *(_DWORD **)(a1 + 8) )
  {
    if ( v5 != nullptr )
    {
      v7 = v5 - 6;
      v8 = v5 + 3;
      *v5 = *(v5 - 6);
      v9 = *(v5 - 5);
      v10 = (int)(v5 - 3);
      *(_DWORD *)(v10 + 16) = v9;
      *(_BYTE *)(v10 + 20) = *((_BYTE *)v7 + 8);
      std::vector<Frame *>::vector(v8, v10);
    }
    *(_DWORD *)(a1 + 4) += 24;
    v28 = *(_DWORD *)a3;
    v29 = *(_DWORD *)(a3 + 4);
    v30 = *(_BYTE *)(a3 + 8);
    std::vector<Frame *>::vector(v31, a3 + 12);
    v11 = *(_DWORD *)(a1 + 4) - 48;
    for ( i = -1431655765 * ((v11 - a2) >> 3); i > 0; --i )
    {
      v11 -= 24;
      v13 = *(_DWORD *)v11;
      *(_DWORD *)(v11 + 28) = *(_DWORD *)(v11 + 4);
      v14 = *(_BYTE *)(v11 + 8);
      *(_DWORD *)(v11 + 24) = v13;
      *(_BYTE *)(v11 + 32) = v14;
      std::vector<Frame *>::operator=(v11 + 36, v11 + 12);
    }
    *(_DWORD *)a2 = v28;
    *(_DWORD *)(a2 + 4) = v29;
    *(_BYTE *)(a2 + 8) = v30;
    std::vector<Frame *>::operator=(a2 + 12, (int)v31);
    std::_Vector_base<Frame *>::~_Vector_base(v31);
    return;
  }
  v15 = -1431655765 * (((int)v5 - *(_DWORD *)a1) >> 3);
  if ( v15 == 0 )
  {
    v16 = 1;
    goto LABEL_12;
  }
  v16 = 2 * v15;
  v17 = 178956970;
  if ( 2 * v15 >= v15 )
  {
LABEL_12:
    v17 = v16;
    if ( v16 > 0xAAAAAAA )
      v17 = 178956970;
  }
  v24 = -1431655765 * ((a2 - *(_DWORD *)a1) >> 3);
  if ( v17 != 0 )
    v23 = operator new(24 * v17);
  else
    v23 = 0;
  v18 = v23 + 24 * v24;
  if ( v18 != 0 )
    ListBox::ListGroup::ListGroup(v18, a3);
  v19 = v23;
  for ( j = *(_DWORD *)a1; ; j += 24 )
  {
    v20 = v19 + 24;
    if ( j == a2 )
      break;
    if ( v19 != 0 )
      ListBox::ListGroup::ListGroup(v19, j);
    v19 = v20;
  }
  v21 = j;
  v27 = *(_DWORD *)(a1 + 4);
  while ( v21 != v27 )
  {
    if ( v20 != 0 )
      ListBox::ListGroup::ListGroup(v20, v21);
    v20 += 24;
    v21 += 24;
  }
  v22 = *(_DWORD *)a1;
  v26 = *(_DWORD *)(a1 + 4);
  while ( v22 != v26 )
  {
    std::_Vector_base<Frame *>::~_Vector_base((void **)(v22 + 12));
    v22 += 24;
  }
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)(a1 + 4) = v20;
  *(_DWORD *)a1 = v23;
  *(_DWORD *)(a1 + 8) = v23 + 24 * v17;
}


//======================================================================
// std::vector<UICursor::CursorDesc,std::allocator<UICursor::CursorDesc>>::_M_insert_aux(__gnu_cxx::__normal_iterator<UICursor::CursorDesc*,std::vector<UICursor::CursorDesc,std::allocator<UICursor::CursorDesc>>>,UICursor::CursorDesc const&)
// address: 0x001B9E2C   size: 0xFA (250 bytes)
//======================================================================
void __fastcall std::vector<UICursor::CursorDesc>::_M_insert_aux(int a1, void *a2, const void *a3)
{
  char *v5; // r0
  int v6; // r5
  unsigned int v7; // r0
  unsigned int v8; // r3
  int v9; // r5
  char *v10; // r7
  char *v11; // r0
  int v12; // r0
  int v13; // r6
  int v15; // [sp+8h] [bp-74h]
  _BYTE v16[96]; // [sp+14h] [bp-68h] BYREF

  v5 = *(char **)(a1 + 4);
  if ( v5 != *(char **)(a1 + 8) )
  {
    if ( v5 != nullptr )
      j_memcpy(v5, v5 - 96, 0x60u);
    v6 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 4) = v6 + 96;
    j_memcpy(v16, a3, sizeof(v16));
    if ( -1431655765 * ((v6 - 96 - (int)a2) >> 5) != 0 )
      j_memmove((void *)(v6 - 32 * ((v6 - 96 - (int)a2) >> 5)), a2, 32 * ((v6 - 96 - (int)a2) >> 5));
    j_memcpy(a2, v16, 0x60u);
    return;
  }
  v7 = -1431655765 * ((int)&v5[-*(_DWORD *)a1] >> 5);
  if ( v7 == 0 )
  {
    v8 = 1;
    goto LABEL_11;
  }
  v8 = 2 * v7;
  v9 = 44739242;
  if ( 2 * v7 >= v7 )
  {
LABEL_11:
    v9 = v8;
    if ( v8 > 0x2AAAAAA )
      v9 = 44739242;
  }
  v15 = -1431655765 * (((int)a2 - *(_DWORD *)a1) >> 5);
  if ( v9 != 0 )
    v10 = (char *)operator new(96 * v9);
  else
    v10 = nullptr;
  v11 = &v10[96 * v15];
  if ( v11 != nullptr )
    j_memcpy(v11, a3, 0x60u);
  v12 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<UICursor::CursorDesc>(
          *(void **)a1,
          (int)a2,
          v10);
  v13 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<UICursor::CursorDesc>(
          a2,
          *(_DWORD *)(a1 + 4),
          (void *)(v12 + 96));
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v10;
  *(_DWORD *)(a1 + 4) = v13;
  *(_DWORD *)(a1 + 8) = &v10[96 * v9];
}


//======================================================================
// std::vector<Frame::DrawObj,std::allocator<Frame::DrawObj>>::_M_check_len(unsigned int,char const*)const
// address: 0x001BB8DC   size: 0x2C (44 bytes)
//======================================================================
unsigned int __fastcall std::vector<Frame::DrawObj>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = (a1[1] - *a1) >> 3;
  if ( 0x1FFFFFFF - v3 < a2 )
    sub_3BD058(a3);
  v4 = (a1[1] - *a1) >> 3;
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0x1FFFFFFF )
    return 0x1FFFFFFF;
  return result;
}


//======================================================================
// std::vector<Frame *,std::allocator<Frame *>>::_M_check_len(unsigned int,char const*)const
// address: 0x001BB92C   size: 0x2C (44 bytes)
//======================================================================
unsigned int __fastcall std::vector<Frame *>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = (a1[1] - *a1) >> 2;
  if ( 0x3FFFFFFF - v3 < a2 )
    sub_3BD058(a3);
  v4 = (a1[1] - *a1) >> 2;
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0x3FFFFFFF )
    return 0x3FFFFFFF;
  return result;
}


//======================================================================
// std::vector<Frame *,std::allocator<Frame *>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,unsigned int,Frame * const&)
// address: 0x001BBCAC   size: 0xF4 (244 bytes)
//======================================================================
void __fastcall std::vector<Frame *>::_M_fill_insert(void **a1, char *a2, unsigned int a3, void **a4)
{
  char *v5; // r5
  char *v7; // r7
  int v8; // r6
  char *v9; // r6
  char *v10; // r2
  unsigned int v11; // r0
  int v12; // r7
  void *v13; // r2
  char *v14; // r7
  unsigned int v15; // r3
  int v16; // r0
  int v17; // r5
  void *v18; // [sp+4h] [bp-10h]
  char *v19; // [sp+4h] [bp-10h]
  unsigned int v20; // [sp+8h] [bp-Ch]
  unsigned int v21; // [sp+8h] [bp-Ch]

  v5 = a2;
  if ( a3 != 0 )
  {
    v7 = (char *)a1[1];
    if ( ((_BYTE *)a1[2] - v7) >> 2 < a3 )
    {
      v11 = std::vector<Frame *>::_M_check_len(a1, a3, (int)"vector::_M_fill_insert");
      v21 = v11;
      v12 = (v5 - (_BYTE *)*a1) >> 2;
      if ( v11 != 0 )
        v19 = (char *)sub_1BA244(v11);
      else
        v19 = nullptr;
      v13 = *a4;
      v14 = &v19[4 * v12];
      v15 = a3;
      do
      {
        --v15;
        *(_DWORD *)v14 = v13;
        v14 += 4;
      }
      while ( v15 != 0 );
      v16 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Frame *>(*a1, (int)v5, v19);
      v17 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Frame *>(
              v5,
              (int)a1[1],
              (void *)(v16 + 4 * a3));
      sub_1BA238(*a1);
      a1[1] = (void *)v17;
      *a1 = v19;
      a1[2] = &v19[4 * v21];
    }
    else
    {
      v20 = (v7 - a2) >> 2;
      v18 = *a4;
      if ( v20 <= a3 )
      {
        memset32(v7, (int)v18, a3 - v20);
        v10 = (char *)a1[1] + 4 * (a3 - v20);
        a1[1] = v10;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Frame *>(a2, (int)v7, v10);
        a1[1] = (char *)a1[1] + 4 * v20;
        while ( v5 != v7 )
        {
          *(_DWORD *)v5 = v18;
          v5 += 4;
        }
      }
      else
      {
        v8 = 4 * a3;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Frame *>(&v7[-4 * a3], (int)v7, v7);
        a1[1] = (char *)a1[1] + v8;
        std::copy_backward<Frame **,Frame **>(v5, (int)&v7[-v8], (int)v7);
        v9 = &v5[v8];
        while ( v5 != v9 )
        {
          *(_DWORD *)v5 = v18;
          v5 += 4;
        }
      }
    }
  }
}


//======================================================================
// std::vector<Frame::DrawObj,std::allocator<Frame::DrawObj>>::push_back(Frame::DrawObj const&)
// address: 0x001BBDE0   size: 0x8E (142 bytes)
//======================================================================
__int64 __fastcall std::vector<Frame::DrawObj>::push_back(__int64 a1)
{
  _QWORD *v1; // r5
  unsigned int v3; // r0
  unsigned int v4; // r6
  _QWORD *v5; // r3
  int v6; // r0
  int v7; // r5
  __int64 byte_count; // [sp+0h] [bp-Ch]

  byte_count = a1;
  v1 = *(_QWORD **)(a1 + 4);
  if ( v1 == *(_QWORD **)(a1 + 8) )
  {
    v3 = std::vector<Frame::DrawObj>::_M_check_len((_DWORD *)a1, 1u, (int)"vector::_M_insert_aux");
    LODWORD(byte_count) = 8 * v3;
    HIDWORD(byte_count) = *(_DWORD *)a1;
    if ( v3 != 0 )
    {
      if ( v3 > 0x1FFFFFFF )
        sub_3BCEB4(v3);
      v3 = operator new(byte_count);
    }
    v4 = v3;
    v5 = (_QWORD *)(v3 + 8 * (((int)v1 - HIDWORD(byte_count)) >> 3));
    if ( v5 != nullptr )
      *v5 = *(_QWORD *)HIDWORD(a1);
    v6 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Frame::DrawObj>(
           *(void **)a1,
           (int)v1,
           (void *)v3);
    v7 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Frame::DrawObj>(
           v1,
           *(_DWORD *)(a1 + 4),
           (void *)(v6 + 8));
    if ( *(_DWORD *)a1 != 0 )
      operator delete(*(void **)a1);
    *(_DWORD *)a1 = v4;
    *(_DWORD *)(a1 + 4) = v7;
    *(_DWORD *)(a1 + 8) = v4 + byte_count;
  }
  else
  {
    if ( v1 != nullptr )
      *v1 = *(_QWORD *)HIDWORD(a1);
    *(_DWORD *)(a1 + 4) += 8;
  }
  return byte_count;
}


//======================================================================
// std::vector<Frame::DrawObj,std::allocator<Frame::DrawObj>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Frame::DrawObj*,std::vector<Frame::DrawObj,std::allocator<Frame::DrawObj>>>,unsigned int,Frame::DrawObj const&)
// address: 0x001BBF30   size: 0x11C (284 bytes)
//======================================================================
void __fastcall std::vector<Frame::DrawObj>::_M_fill_insert(void **a1, char *a2, unsigned int a3, _DWORD *a4)
{
  char *v7; // r1
  int v8; // r7
  unsigned int v9; // r6
  int v10; // r6
  char *v11; // r5
  char *v12; // r6
  char *j; // r3
  _DWORD *v14; // r3
  unsigned int i; // r1
  char *v16; // r2
  _DWORD *v17; // r3
  unsigned int v18; // r0
  unsigned int v19; // r6
  char *v20; // r3
  unsigned int v21; // r2
  int v22; // r0
  int v23; // r5
  _DWORD *v24; // [sp+4h] [bp-10h]
  char *v25; // [sp+4h] [bp-10h]
  int v26; // [sp+8h] [bp-Ch]
  int v27; // [sp+8h] [bp-Ch]

  if ( a3 != 0 )
  {
    v7 = (char *)a1[1];
    v24 = v7;
    if ( ((_BYTE *)a1[2] - v7) >> 3 < a3 )
    {
      v18 = std::vector<Frame::DrawObj>::_M_check_len(a1, a3, (int)"vector::_M_fill_insert");
      v19 = v18;
      v27 = (a2 - (_BYTE *)*a1) >> 3;
      if ( v18 != 0 )
      {
        if ( v18 > 0x1FFFFFFF )
          sub_3BCEB4(v18);
        v25 = (char *)operator new(8 * v18);
      }
      else
      {
        v25 = nullptr;
      }
      v20 = &v25[8 * v27];
      v21 = a3;
      do
      {
        --v21;
        *(_DWORD *)v20 = *a4;
        *((_DWORD *)v20 + 1) = a4[1];
        v20 += 8;
      }
      while ( v21 != 0 );
      v22 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Frame::DrawObj>(*a1, (int)a2, v25);
      v23 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Frame::DrawObj>(
              a2,
              (int)a1[1],
              (void *)(v22 + 8 * a3));
      if ( *a1 != nullptr )
        operator delete(*a1);
      a1[1] = (void *)v23;
      *a1 = v25;
      a1[2] = &v25[8 * v19];
    }
    else
    {
      v8 = a4[1];
      v26 = *a4;
      v9 = (v7 - a2) >> 3;
      if ( v9 <= a3 )
      {
        v14 = a1[1];
        for ( i = a3 - v9; i != 0; --i )
        {
          v14[1] = v8;
          *v14 = v26;
          v14 += 2;
        }
        v16 = (char *)a1[1] + 8 * (a3 - v9);
        a1[1] = v16;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Frame::DrawObj>(a2, (int)v24, v16);
        v17 = a2;
        a1[1] = (char *)a1[1] + 8 * v9;
        while ( v17 != v24 )
        {
          v17[1] = v8;
          *v17 = v26;
          v17 += 2;
        }
      }
      else
      {
        v10 = 8 * a3;
        v11 = &v7[-8 * a3];
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Frame::DrawObj>(v11, (int)v7, v7);
        a1[1] = (char *)a1[1] + v10;
        std::__copy_move_backward<false,true,std::random_access_iterator_tag>::__copy_move_b<Frame::DrawObj>(
          a2,
          (int)v11,
          (int)v24);
        v12 = &a2[v10];
        for ( j = a2; j != v12; j += 8 )
        {
          *((_DWORD *)j + 1) = v8;
          *(_DWORD *)j = v26;
        }
      }
    }
  }
}


//======================================================================
// std::vector<std::string,std::allocator<std::string>>::_M_check_len(unsigned int,char const*)const
// address: 0x001BDC7C   size: 0x2C (44 bytes)
//======================================================================
unsigned int __fastcall std::vector<std::string>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = (a1[1] - *a1) >> 2;
  if ( 0x3FFFFFFF - v3 < a2 )
    sub_3BD058(a3);
  v4 = (a1[1] - *a1) >> 2;
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0x3FFFFFFF )
    return 0x3FFFFFFF;
  return result;
}


//======================================================================
// std::vector<std::string,std::allocator<std::string>>::operator=(std::vector<std::string,std::allocator<std::string>> const&)
// address: 0x001BDD72   size: 0xEC (236 bytes)
//======================================================================
int *__fastcall std::vector<std::string>::operator=(int *a1, int *a2)
{
  int v4; // r5
  int v5; // r7
  int v6; // r6
  int v7; // r7
  int v8; // r6
  int v9; // r7
  int v10; // r6
  unsigned int i; // r5
  int v13; // [sp+4h] [bp-10h]
  unsigned int v14; // [sp+8h] [bp-Ch]
  int v15; // [sp+Ch] [bp-8h]

  if ( a2 != a1 )
  {
    v4 = *a2;
    v15 = a2[1];
    v14 = (v15 - *a2) >> 2;
    v13 = *a1;
    if ( v14 <= (a1[2] - *a1) >> 2 )
    {
      v7 = (a1[1] - v13) >> 2;
      if ( v7 < v14 )
      {
        while ( v7 > 0 )
        {
          sub_3BEBBC(v13);
          v4 += 4;
          --v7;
          v13 += 4;
        }
        std::__uninitialized_copy<false>::__uninit_copy<std::string *,std::string *>(
          *a2 + 4 * ((a1[1] - *a1) >> 2),
          a2[1],
          a1[1]);
      }
      else
      {
        v8 = (v15 - *a2) >> 2;
        v9 = *a1;
        while ( v8 > 0 )
        {
          sub_3BEBBC(v9);
          v4 += 4;
          v9 += 4;
          --v8;
        }
        v10 = a1[1];
        for ( i = v13 + 4 * (((int)~v14 >> 31) & v14); i != v10; i += 4 )
          sub_3BDF80(i);
      }
    }
    else
    {
      if ( v14 != 0 )
        v5 = sub_1BCD34(v14);
      else
        v5 = (v15 - *a2) >> 2;
      v6 = v5;
      while ( v4 != v15 )
      {
        if ( v6 != 0 )
          sub_3BEB1C(v6, v4);
        v4 += 4;
        v6 += 4;
      }
      std::_Destroy_aux<false>::__destroy<std::string *>(*a1, a1[1]);
      sub_1BCD28((void *)*a1);
      *a1 = v5;
      a1[2] = v5 + 4 * v14;
    }
    a1[1] = *a1 + 4 * v14;
  }
  return a1;
}


//======================================================================
// std::vector<Ogre::Entity *,std::allocator<Ogre::Entity *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::Entity **,std::vector<Ogre::Entity *,std::allocator<Ogre::Entity *>>>,Ogre::Entity * const&)
// address: 0x001C05F4   size: 0xA6 (166 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::Entity *>::_M_insert_aux(__int64 a1, _DWORD *a2)
{
  _DWORD *v3; // r3
  __int64 v4; // r4
  int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r2
  int v8; // r6
  _DWORD *v9; // r3
  int v10; // r0
  __int64 v12; // [sp+0h] [bp-Ch]

  v12 = a1;
  v3 = *(_DWORD **)(a1 + 4);
  v4 = a1;
  if ( v3 != *(_DWORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
      *v3 = *(v3 - 1);
    LODWORD(a1) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v4 + 4) = a1 + 4;
    LODWORD(v4) = *a2;
    v5 = ((int)a1 - 4 - HIDWORD(a1)) >> 2;
    if ( v5 != 0 )
      j_memmove((void *)(a1 - 4 * v5), (const void *)HIDWORD(a1), 4 * v5);
    *(_DWORD *)HIDWORD(v4) = v4;
    return v12;
  }
  v6 = ((int)v3 - *(_DWORD *)a1) >> 2;
  if ( v6 == 0 )
  {
    v7 = 1;
    goto LABEL_11;
  }
  v7 = 2 * v6;
  v8 = 0x3FFFFFFF;
  if ( 2 * v6 >= v6 )
  {
LABEL_11:
    v8 = v7;
    if ( v7 > 0x3FFFFFFF )
      v8 = 0x3FFFFFFF;
  }
  LODWORD(v12) = (HIDWORD(a1) - *(_DWORD *)a1) >> 2;
  HIDWORD(v12) = 4 * v8;
  if ( v8 != 0 )
    v8 = operator new(4 * v8);
  v9 = (_DWORD *)(v8 + 4 * v12);
  if ( v9 != nullptr )
    *v9 = *a2;
  v10 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::Entity *>(
          *(void **)v4,
          SHIDWORD(v4),
          (void *)v8);
  HIDWORD(v4) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::Entity *>(
                  (void *)HIDWORD(v4),
                  *(_DWORD *)(v4 + 4),
                  (void *)(v10 + 4));
  if ( *(_DWORD *)v4 != 0 )
    operator delete(*(void **)v4);
  *(_DWORD *)v4 = v8;
  *(_DWORD *)(v4 + 4) = HIDWORD(v4);
  *(_DWORD *)(v4 + 8) = v8 + HIDWORD(v12);
  return v12;
}


//======================================================================
// std::vector<RichTextText *,std::allocator<RichTextText *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<RichTextText **,std::vector<RichTextText *,std::allocator<RichTextText *>>>,RichTextText * const&)
// address: 0x001C40D0   size: 0xA6 (166 bytes)
//======================================================================
__int64 __fastcall std::vector<RichTextText *>::_M_insert_aux(__int64 a1, _DWORD *a2)
{
  _DWORD *v3; // r3
  __int64 v4; // r4
  int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r2
  int v8; // r6
  _DWORD *v9; // r3
  int v10; // r0
  __int64 v12; // [sp+0h] [bp-Ch]

  v12 = a1;
  v3 = *(_DWORD **)(a1 + 4);
  v4 = a1;
  if ( v3 != *(_DWORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
      *v3 = *(v3 - 1);
    LODWORD(a1) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v4 + 4) = a1 + 4;
    LODWORD(v4) = *a2;
    v5 = ((int)a1 - 4 - HIDWORD(a1)) >> 2;
    if ( v5 != 0 )
      j_memmove((void *)(a1 - 4 * v5), (const void *)HIDWORD(a1), 4 * v5);
    *(_DWORD *)HIDWORD(v4) = v4;
    return v12;
  }
  v6 = ((int)v3 - *(_DWORD *)a1) >> 2;
  if ( v6 == 0 )
  {
    v7 = 1;
    goto LABEL_11;
  }
  v7 = 2 * v6;
  v8 = 0x3FFFFFFF;
  if ( 2 * v6 >= v6 )
  {
LABEL_11:
    v8 = v7;
    if ( v7 > 0x3FFFFFFF )
      v8 = 0x3FFFFFFF;
  }
  LODWORD(v12) = (HIDWORD(a1) - *(_DWORD *)a1) >> 2;
  HIDWORD(v12) = 4 * v8;
  if ( v8 != 0 )
    v8 = operator new(4 * v8);
  v9 = (_DWORD *)(v8 + 4 * v12);
  if ( v9 != nullptr )
    *v9 = *a2;
  v10 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<RichTextText *>(
          *(void **)v4,
          SHIDWORD(v4),
          (void *)v8);
  HIDWORD(v4) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<RichTextText *>(
                  (void *)HIDWORD(v4),
                  *(_DWORD *)(v4 + 4),
                  (void *)(v10 + 4));
  if ( *(_DWORD *)v4 != 0 )
    operator delete(*(void **)v4);
  *(_DWORD *)v4 = v8;
  *(_DWORD *)(v4 + 4) = HIDWORD(v4);
  *(_DWORD *)(v4 + 8) = v8 + HIDWORD(v12);
  return v12;
}


//======================================================================
// std::vector<stRichChar,std::allocator<stRichChar>>::_M_insert_aux(__gnu_cxx::__normal_iterator<stRichChar*,std::vector<stRichChar,std::allocator<stRichChar>>>,stRichChar const&)
// address: 0x001C57A4   size: 0x168 (360 bytes)
//======================================================================
void __fastcall std::vector<stRichChar>::_M_insert_aux(int *a1, char *a2, _DWORD *a3)
{
  _DWORD *v4; // r3
  int v5; // r4
  int v6; // r6
  int v7; // r4
  int v8; // r6
  char *v9; // r4
  int v10; // r2
  int v11; // r7
  unsigned int v12; // r2
  unsigned int v13; // r7
  char *v14; // r6
  int i; // r7
  int v16; // r4
  unsigned int v17; // r3
  unsigned int v18; // r2
  int v19; // r5
  _DWORD *v20; // r5
  int v21; // r1
  int v22; // r2
  _DWORD *v23; // r3
  int v24; // r1
  int v25; // r5
  char *v26; // r12
  char *j; // r3
  int v28; // r5
  int v29; // r6
  int v30; // r5
  int v31; // r6
  char *v32; // r12
  int v33; // r2
  int v34; // r6
  int v35; // r2
  int v36; // r6
  unsigned int v37; // r6
  char *v39; // [sp+0h] [bp-2Ch]
  _DWORD *v41; // [sp+4h] [bp-28h]
  _DWORD *v42; // [sp+8h] [bp-24h]
  _DWORD *v43; // [sp+Ch] [bp-20h]
  unsigned int v44; // [sp+Ch] [bp-20h]
  _QWORD v45[3]; // [sp+10h] [bp-1Ch] BYREF

  v4 = (_DWORD *)a1[1];
  if ( v4 != (_DWORD *)a1[2] )
  {
    if ( v4 != nullptr )
    {
      v5 = *(v4 - 5);
      v6 = *(v4 - 4);
      *v4 = *(v4 - 6);
      v4[1] = v5;
      v4[2] = v6;
      v7 = *(v4 - 2);
      v8 = *(v4 - 1);
      v4[3] = *(v4 - 3);
      v4[4] = v7;
      v4[5] = v8;
    }
    v9 = (char *)a1[1];
    a1[1] = (int)(v9 + 24);
    v10 = a3[1];
    v11 = a3[2];
    LODWORD(v45[0]) = *a3;
    HIDWORD(v45[0]) = v10;
    LODWORD(v45[1]) = v11;
    v12 = a3[4];
    v13 = a3[5];
    HIDWORD(v45[1]) = a3[3];
    v45[2] = __PAIR64__(v13, v12);
    v14 = v9 - 24;
    for ( i = -1431655765 * ((v9 - 24 - a2) >> 3); i > 0; --i )
    {
      v9 -= 24;
      v14 -= 24;
      j_memcpy(v9, v14, 0x16u);
    }
    j_memcpy(a2, v45, 0x16u);
    return;
  }
  v16 = 178956970;
  v17 = -1431655765 * (((int)v4 - *a1) >> 3);
  if ( v17 == 0 )
  {
    v18 = 1;
    goto LABEL_12;
  }
  v18 = 2 * v17;
  if ( 2 * v17 >= v17 )
  {
LABEL_12:
    v16 = v18;
    if ( v18 > 0xAAAAAAA )
      v16 = 178956970;
  }
  v19 = -1431655765 * ((int)&a2[-*a1] >> 3);
  if ( v16 != 0 )
    v42 = (_DWORD *)operator new(24 * v16);
  else
    v42 = nullptr;
  v20 = &v42[6 * v19];
  if ( v20 != nullptr )
  {
    v21 = a3[1];
    v22 = a3[2];
    *v20 = *a3;
    v20[1] = v21;
    v20[2] = v22;
    v23 = v20 + 3;
    v24 = a3[4];
    v25 = a3[5];
    *v23 = a3[3];
    v23[1] = v24;
    v23[2] = v25;
  }
  v26 = (char *)*a1;
  v43 = v42;
  for ( j = (char *)*a1; j != a2; j += 24 )
  {
    if ( v43 != nullptr )
    {
      v28 = *((_DWORD *)j + 1);
      v29 = *((_DWORD *)j + 2);
      *v43 = *(_DWORD *)j;
      v43[1] = v28;
      v43[2] = v29;
      v30 = *((_DWORD *)j + 4);
      v31 = *((_DWORD *)j + 5);
      v43[3] = *((_DWORD *)j + 3);
      v43[4] = v30;
      v43[5] = v31;
    }
    v43 += 6;
  }
  v39 = j;
  v44 = (unsigned int)&v42[6 * ((178956971 * ((unsigned int)(j - v26) >> 3)) & 0x1FFFFFFF) + 6];
  v41 = (_DWORD *)v44;
  v32 = (char *)a1[1];
  while ( v39 != v32 )
  {
    if ( v41 != nullptr )
    {
      v33 = *((_DWORD *)v39 + 1);
      v34 = *((_DWORD *)v39 + 2);
      *v41 = *(_DWORD *)v39;
      v41[1] = v33;
      v41[2] = v34;
      v35 = *((_DWORD *)v39 + 4);
      v36 = *((_DWORD *)v39 + 5);
      v41[3] = *((_DWORD *)v39 + 3);
      v41[4] = v35;
      v41[5] = v36;
    }
    v41 += 6;
    v39 += 24;
  }
  v37 = v44 + 24 * ((178956971 * ((unsigned int)(v39 - j) >> 3)) & 0x1FFFFFFF);
  if ( *a1 != 0 )
    operator delete((void *)*a1);
  a1[1] = v37;
  *a1 = (int)v42;
  a1[2] = (int)&v42[6 * v16];
}


//======================================================================
// std::vector<LineInfo,std::allocator<LineInfo>>::_M_insert_aux(__gnu_cxx::__normal_iterator<LineInfo*,std::vector<LineInfo,std::allocator<LineInfo>>>,LineInfo const&)
// address: 0x001C6EF0   size: 0x170 (368 bytes)
//======================================================================
void __fastcall std::vector<LineInfo>::_M_insert_aux(int *a1, char *a2, int *a3)
{
  _DWORD *v4; // r3
  int v5; // r5
  int v6; // r6
  int v7; // r5
  _DWORD *v8; // r2
  _DWORD *v9; // r1
  int v10; // r7
  int v11; // r5
  int v12; // r6
  int v13; // r6
  int v14; // r6
  unsigned int v15; // r3
  unsigned int v16; // r2
  int v17; // r5
  int *v18; // r7
  int v19; // r1
  int v20; // r3
  _DWORD *v21; // r2
  int v22; // r7
  char *v23; // r12
  char *i; // r3
  int v25; // r5
  int v26; // r7
  int v27; // r5
  char *v28; // r12
  int v29; // r2
  int v30; // r7
  int v31; // r7
  unsigned int v32; // r7
  char *v34; // [sp+0h] [bp-2Ch]
  _DWORD *v36; // [sp+4h] [bp-28h]
  _DWORD *v37; // [sp+8h] [bp-24h]
  _DWORD *v38; // [sp+Ch] [bp-20h]
  unsigned int v39; // [sp+Ch] [bp-20h]
  int v40; // [sp+14h] [bp-18h]
  int v41; // [sp+18h] [bp-14h]
  int v42; // [sp+1Ch] [bp-10h]
  int v43; // [sp+20h] [bp-Ch]
  int v44; // [sp+24h] [bp-8h]

  v4 = (_DWORD *)a1[1];
  if ( v4 != (_DWORD *)a1[2] )
  {
    if ( v4 != nullptr )
    {
      v5 = *(v4 - 4);
      v6 = *(v4 - 3);
      *v4 = *(v4 - 5);
      v4[1] = v5;
      v4[2] = v6;
      v7 = *(v4 - 1);
      v4[3] = *(v4 - 2);
      v4[4] = v7;
    }
    v8 = (_DWORD *)a1[1];
    a1[1] = (int)(v8 + 5);
    v40 = *a3;
    v41 = a3[1];
    v42 = a3[2];
    v43 = a3[3];
    v44 = a3[4];
    v9 = v8 - 5;
    v10 = -858993459 * (((char *)(v8 - 5) - a2) >> 2);
    while ( v10 > 0 )
    {
      v8 -= 5;
      v9 -= 5;
      v11 = v9[1];
      v12 = v9[2];
      *v8 = *v9;
      v8[1] = v11;
      v8[2] = v12;
      --v10;
      v13 = v9[4];
      v8[3] = v9[3];
      v8[4] = v13;
    }
    *(_DWORD *)a2 = v40;
    *((_DWORD *)a2 + 1) = v41;
    *((_DWORD *)a2 + 2) = v42;
    *((_DWORD *)a2 + 3) = v43;
    *((_DWORD *)a2 + 4) = v44;
    return;
  }
  v14 = 214748364;
  v15 = -858993459 * (((int)v4 - *a1) >> 2);
  if ( v15 == 0 )
  {
    v16 = 1;
    goto LABEL_12;
  }
  v16 = 2 * v15;
  if ( 2 * v15 >= v15 )
  {
LABEL_12:
    v14 = v16;
    if ( v16 > 0xCCCCCCC )
      v14 = 214748364;
  }
  v17 = -858993459 * ((int)&a2[-*a1] >> 2);
  if ( v14 != 0 )
    v37 = (_DWORD *)operator new(20 * v14);
  else
    v37 = nullptr;
  v18 = &v37[5 * v17];
  if ( v18 != nullptr )
  {
    v19 = a3[1];
    v20 = a3[2];
    *v18 = *a3;
    v18[1] = v19;
    v18[2] = v20;
    v21 = v18 + 3;
    v22 = a3[4];
    *v21 = a3[3];
    v21[1] = v22;
  }
  v23 = (char *)*a1;
  v38 = v37;
  for ( i = (char *)*a1; i != a2; i += 20 )
  {
    if ( v38 != nullptr )
    {
      v25 = *((_DWORD *)i + 1);
      v26 = *((_DWORD *)i + 2);
      *v38 = *(_DWORD *)i;
      v38[1] = v25;
      v38[2] = v26;
      v27 = *((_DWORD *)i + 4);
      v38[3] = *((_DWORD *)i + 3);
      v38[4] = v27;
    }
    v38 += 5;
  }
  v34 = i;
  v39 = (unsigned int)&v37[5 * ((858993460 * ((unsigned int)(i - v23) >> 2)) >> 2) + 5];
  v36 = (_DWORD *)v39;
  v28 = (char *)a1[1];
  while ( v34 != v28 )
  {
    if ( v36 != nullptr )
    {
      v29 = *((_DWORD *)v34 + 1);
      v30 = *((_DWORD *)v34 + 2);
      *v36 = *(_DWORD *)v34;
      v36[1] = v29;
      v36[2] = v30;
      v31 = *((_DWORD *)v34 + 4);
      v36[3] = *((_DWORD *)v34 + 3);
      v36[4] = v31;
    }
    v36 += 5;
    v34 += 20;
  }
  v32 = v39 + 20 * ((858993460 * ((unsigned int)(v34 - i) >> 2)) >> 2);
  if ( *a1 != 0 )
    operator delete((void *)*a1);
  a1[1] = v32;
  *a1 = (int)v37;
  a1[2] = (int)&v37[5 * v14];
}


//======================================================================
// std::vector<IconBarIcon,std::allocator<IconBarIcon>>::operator=(std::vector<IconBarIcon,std::allocator<IconBarIcon>> const&)
// address: 0x001CA758   size: 0x94 (148 bytes)
//======================================================================
int __fastcall std::vector<IconBarIcon>::operator=(int a1, int a2)
{
  int v4; // r7
  void *v5; // r6
  void *v6; // r2
  unsigned int v7; // r3
  char *v8; // r5
  unsigned int v9; // r1
  void *v10; // r0
  int v11; // r1
  int byte_count; // [sp+4h] [bp-8h]

  if ( a2 != a1 )
  {
    v4 = *(_DWORD *)(a2 + 4);
    v5 = *(void **)a2;
    v6 = *(void **)a1;
    v7 = (v4 - *(_DWORD *)a2) >> 4;
    byte_count = 16 * v7;
    if ( v7 <= (*(_DWORD *)(a1 + 8) - *(_DWORD *)a1) >> 4 )
    {
      v9 = (*(_DWORD *)(a1 + 4) - (int)v6) >> 4;
      if ( v9 < v7 )
      {
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<IconBarIcon>(v5, (int)v5 + 16 * v9, v6);
        v6 = *(void **)(a1 + 4);
        v11 = *(_DWORD *)(a2 + 4);
        v10 = (void *)(*(_DWORD *)a2 + 16 * (((int)v6 - *(_DWORD *)a1) >> 4));
      }
      else
      {
        v10 = v5;
        v11 = v4;
      }
      std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<IconBarIcon>(v10, v11, v6);
    }
    else
    {
      if ( v7 != 0 )
      {
        if ( v7 > 0xFFFFFFF )
          sub_3BCEB4(16 * v7);
        v8 = (char *)operator new(byte_count);
      }
      else
      {
        v8 = nullptr;
      }
      std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<IconBarIcon>(v5, v4, v8);
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)a1 = v8;
      *(_DWORD *)(a1 + 8) = &v8[byte_count];
    }
    *(_DWORD *)(a1 + 4) = *(_DWORD *)a1 + byte_count;
  }
  return a1;
}


//======================================================================
// std::vector<IconRenderInfo,std::allocator<IconRenderInfo>>::operator=(std::vector<IconRenderInfo,std::allocator<IconRenderInfo>> const&)
// address: 0x001CA810   size: 0x94 (148 bytes)
//======================================================================
int __fastcall std::vector<IconRenderInfo>::operator=(int a1, int a2)
{
  int v4; // r7
  void *v5; // r6
  void *v6; // r2
  unsigned int v7; // r3
  char *v8; // r5
  unsigned int v9; // r1
  void *v10; // r0
  int v11; // r1
  int byte_count; // [sp+4h] [bp-8h]

  if ( a2 != a1 )
  {
    v4 = *(_DWORD *)(a2 + 4);
    v5 = *(void **)a2;
    v6 = *(void **)a1;
    v7 = (v4 - *(_DWORD *)a2) >> 3;
    byte_count = 8 * v7;
    if ( v7 <= (*(_DWORD *)(a1 + 8) - *(_DWORD *)a1) >> 3 )
    {
      v9 = (*(_DWORD *)(a1 + 4) - (int)v6) >> 3;
      if ( v9 < v7 )
      {
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<IconRenderInfo>(v5, (int)v5 + 8 * v9, v6);
        v6 = *(void **)(a1 + 4);
        v11 = *(_DWORD *)(a2 + 4);
        v10 = (void *)(*(_DWORD *)a2 + 8 * (((int)v6 - *(_DWORD *)a1) >> 3));
      }
      else
      {
        v10 = v5;
        v11 = v4;
      }
      std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<IconRenderInfo>(v10, v11, v6);
    }
    else
    {
      if ( v7 != 0 )
      {
        if ( v7 > 0x1FFFFFFF )
          sub_3BCEB4(8 * v7);
        v8 = (char *)operator new(byte_count);
      }
      else
      {
        v8 = nullptr;
      }
      std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<IconRenderInfo>(v5, v4, v8);
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)a1 = v8;
      *(_DWORD *)(a1 + 8) = &v8[byte_count];
    }
    *(_DWORD *)(a1 + 4) = *(_DWORD *)a1 + byte_count;
  }
  return a1;
}


//======================================================================
// std::vector<IconRenderInfo,std::allocator<IconRenderInfo>>::_M_fill_insert(__gnu_cxx::__normal_iterator<IconRenderInfo*,std::vector<IconRenderInfo,std::allocator<IconRenderInfo>>>,unsigned int,IconRenderInfo const&)
// address: 0x001CA930   size: 0x13A (314 bytes)
//======================================================================
void __fastcall std::vector<IconRenderInfo>::_M_fill_insert(int a1, char *a2, unsigned int a3, _DWORD *a4)
{
  char *v7; // r1
  int v8; // r7
  unsigned int v9; // r6
  int v10; // r5
  char *v11; // r6
  char *v12; // r5
  char *j; // r3
  _DWORD *v14; // r3
  unsigned int i; // r1
  void *v16; // r2
  char *v17; // r3
  unsigned int v18; // r3
  int v19; // r6
  unsigned int v20; // r6
  char *v21; // r3
  unsigned int v22; // r2
  int v23; // r0
  int v24; // r5
  char *v25; // [sp+4h] [bp-10h]
  char *v26; // [sp+4h] [bp-10h]
  int v27; // [sp+8h] [bp-Ch]
  int v28; // [sp+8h] [bp-Ch]

  if ( a3 != 0 )
  {
    v7 = *(char **)(a1 + 4);
    v25 = v7;
    if ( (*(_DWORD *)(a1 + 8) - (int)v7) >> 3 < a3 )
    {
      v18 = (int)&v7[-*(_DWORD *)a1] >> 3;
      if ( 0x1FFFFFFF - v18 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v19 = a3;
      if ( a3 < v18 )
        v19 = (int)&v7[-*(_DWORD *)a1] >> 3;
      v20 = v19 + v18;
      if ( v20 < v18 || v20 > 0x1FFFFFFF )
        v20 = 0x1FFFFFFF;
      v28 = (int)&a2[-*(_DWORD *)a1] >> 3;
      if ( v20 != 0 )
        v26 = (char *)operator new(8 * v20);
      else
        v26 = nullptr;
      v21 = &v26[8 * v28];
      v22 = a3;
      do
      {
        --v22;
        *(_DWORD *)v21 = *a4;
        *((_DWORD *)v21 + 1) = a4[1];
        v21 += 8;
      }
      while ( v22 != 0 );
      v23 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<IconRenderInfo>(
              *(void **)a1,
              (int)a2,
              v26);
      v24 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<IconRenderInfo>(
              a2,
              *(_DWORD *)(a1 + 4),
              (void *)(v23 + 8 * a3));
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)(a1 + 4) = v24;
      *(_DWORD *)a1 = v26;
      *(_DWORD *)(a1 + 8) = &v26[8 * v20];
    }
    else
    {
      v8 = a4[1];
      v27 = *a4;
      v9 = (v7 - a2) >> 3;
      if ( v9 <= a3 )
      {
        v14 = *(_DWORD **)(a1 + 4);
        for ( i = a3 - v9; i != 0; --i )
        {
          v14[1] = v8;
          *v14 = v27;
          v14 += 2;
        }
        v16 = (void *)(*(_DWORD *)(a1 + 4) + 8 * (a3 - v9));
        *(_DWORD *)(a1 + 4) = v16;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<IconRenderInfo>(a2, (int)v25, v16);
        v17 = a2;
        *(_DWORD *)(a1 + 4) += 8 * v9;
        while ( v17 != v25 )
        {
          *((_DWORD *)v17 + 1) = v8;
          *(_DWORD *)v17 = v27;
          v17 += 8;
        }
      }
      else
      {
        v10 = 8 * a3;
        v11 = &v7[-8 * a3];
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<IconRenderInfo>(v11, (int)v7, v7);
        *(_DWORD *)(a1 + 4) += v10;
        if ( (v11 - a2) >> 3 != 0 )
          j_memmove(&v25[-8 * ((v11 - a2) >> 3)], a2, 8 * ((v11 - a2) >> 3));
        v12 = &a2[v10];
        for ( j = a2; j != v12; j += 8 )
        {
          *((_DWORD *)j + 1) = v8;
          *(_DWORD *)j = v27;
        }
      }
    }
  }
}


//======================================================================
// std::vector<IconBarIcon,std::allocator<IconBarIcon>>::_M_fill_insert(__gnu_cxx::__normal_iterator<IconBarIcon*,std::vector<IconBarIcon,std::allocator<IconBarIcon>>>,unsigned int,IconBarIcon const&)
// address: 0x001CAAF8   size: 0x118 (280 bytes)
//======================================================================
void __fastcall std::vector<IconBarIcon>::_M_fill_insert(int a1, char *a2, unsigned int a3, _DWORD *a4)
{
  char *v6; // r7
  int v7; // r1
  int v8; // r6
  char *v9; // r1
  _DWORD *v10; // r0
  void *v11; // r2
  unsigned int v12; // r3
  unsigned int v13; // r7
  unsigned int v14; // r7
  int v15; // r6
  int v16; // r0
  int v17; // r5
  unsigned int v20; // [sp+4h] [bp-20h]
  char *v21; // [sp+4h] [bp-20h]
  int v22; // [sp+8h] [bp-1Ch]
  _DWORD v23[5]; // [sp+10h] [bp-14h] BYREF

  if ( a3 != 0 )
  {
    v6 = *(char **)(a1 + 4);
    if ( (*(_DWORD *)(a1 + 8) - (int)v6) >> 4 < a3 )
    {
      v12 = (int)&v6[-*(_DWORD *)a1] >> 4;
      if ( 0xFFFFFFF - v12 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v13 = a3;
      if ( a3 < v12 )
        v13 = v12;
      v14 = v13 + v12;
      if ( v14 < v12 || v14 > 0xFFFFFFF )
        v14 = 0xFFFFFFF;
      v15 = (int)&a2[-*(_DWORD *)a1] >> 4;
      v22 = 16 * v14;
      if ( v14 != 0 )
        v14 = operator new(16 * v14);
      std::__fill_n_a<IconBarIcon *,unsigned int,IconBarIcon>((_DWORD *)(v14 + 16 * v15), a3, a4);
      v16 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<IconBarIcon>(
              *(void **)a1,
              (int)a2,
              (void *)v14);
      v17 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<IconBarIcon>(
              a2,
              *(_DWORD *)(a1 + 4),
              (void *)(v16 + 16 * a3));
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)a1 = v14;
      *(_DWORD *)(a1 + 4) = v17;
      *(_DWORD *)(a1 + 8) = v14 + v22;
    }
    else
    {
      v7 = a4[1];
      v8 = a4[2];
      v23[0] = *a4;
      v23[1] = v7;
      v23[2] = v8;
      v23[3] = a4[3];
      v20 = (v6 - a2) >> 4;
      if ( v20 <= a3 )
      {
        std::__fill_n_a<IconBarIcon *,unsigned int,IconBarIcon>(v6, a3 - v20, v23);
        v11 = (void *)(*(_DWORD *)(a1 + 4) + 16 * (a3 - v20));
        *(_DWORD *)(a1 + 4) = v11;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<IconBarIcon>(a2, (int)v6, v11);
        v9 = v6;
        *(_DWORD *)(a1 + 4) += 16 * v20;
        v10 = a2;
      }
      else
      {
        v21 = &v6[-16 * a3];
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<IconBarIcon>(v21, (int)v6, v6);
        *(_DWORD *)(a1 + 4) += 16 * a3;
        if ( (v21 - a2) >> 4 != 0 )
          j_memmove(&v6[-16 * ((v21 - a2) >> 4)], a2, 16 * ((v21 - a2) >> 4));
        v9 = &a2[16 * a3];
        v10 = a2;
      }
      std::__fill_a<IconBarIcon *,IconBarIcon>(v10, v9, v23);
    }
  }
}


//======================================================================
// std::vector<void *,std::allocator<void *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<void **,std::vector<void *,std::allocator<void *>>>,void * const&)
// address: 0x0025E58C   size: 0xA6 (166 bytes)
//======================================================================
__int64 __fastcall std::vector<void *>::_M_insert_aux(__int64 a1, _DWORD *a2)
{
  _DWORD *v3; // r3
  __int64 v4; // r4
  int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r2
  int v8; // r6
  _DWORD *v9; // r3
  int v10; // r0
  __int64 v12; // [sp+0h] [bp-Ch]

  v12 = a1;
  v3 = *(_DWORD **)(a1 + 4);
  v4 = a1;
  if ( v3 != *(_DWORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
      *v3 = *(v3 - 1);
    LODWORD(a1) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v4 + 4) = a1 + 4;
    LODWORD(v4) = *a2;
    v5 = ((int)a1 - 4 - HIDWORD(a1)) >> 2;
    if ( v5 != 0 )
      j_memmove((void *)(a1 - 4 * v5), (const void *)HIDWORD(a1), 4 * v5);
    *(_DWORD *)HIDWORD(v4) = v4;
    return v12;
  }
  v6 = ((int)v3 - *(_DWORD *)a1) >> 2;
  if ( v6 == 0 )
  {
    v7 = 1;
    goto LABEL_11;
  }
  v7 = 2 * v6;
  v8 = 0x3FFFFFFF;
  if ( 2 * v6 >= v6 )
  {
LABEL_11:
    v8 = v7;
    if ( v7 > 0x3FFFFFFF )
      v8 = 0x3FFFFFFF;
  }
  LODWORD(v12) = (HIDWORD(a1) - *(_DWORD *)a1) >> 2;
  HIDWORD(v12) = 4 * v8;
  if ( v8 != 0 )
    v8 = operator new(4 * v8);
  v9 = (_DWORD *)(v8 + 4 * v12);
  if ( v9 != nullptr )
    *v9 = *a2;
  v10 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<void *>(
          *(void **)v4,
          SHIDWORD(v4),
          (void *)v8);
  HIDWORD(v4) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<void *>(
                  (void *)HIDWORD(v4),
                  *(_DWORD *)(v4 + 4),
                  (void *)(v10 + 4));
  if ( *(_DWORD *)v4 != 0 )
    operator delete(*(void **)v4);
  *(_DWORD *)v4 = v8;
  *(_DWORD *)(v4 + 4) = HIDWORD(v4);
  *(_DWORD *)(v4 + 8) = v8 + HIDWORD(v12);
  return v12;
}


//======================================================================
// std::vector<void *,std::allocator<void *>>::push_back(void * const&)
// address: 0x0025E638   size: 0x22 (34 bytes)
//======================================================================
int __fastcall std::vector<void *>::push_back(__int64 a1)
{
  _DWORD *v1; // r2

  v1 = (_DWORD *)HIDWORD(a1);
  HIDWORD(a1) = *(_DWORD *)(a1 + 4);
  if ( HIDWORD(a1) == *(_DWORD *)(a1 + 8) )
  {
    LODWORD(a1) = std::vector<void *>::_M_insert_aux(a1, v1);
  }
  else
  {
    if ( HIDWORD(a1) != 0 )
      *(_DWORD *)HIDWORD(a1) = *v1;
    *(_DWORD *)(a1 + 4) += 4;
  }
  return a1;
}


//======================================================================
// std::vector<Ogre::OGLTextureRenderTarget *,std::allocator<Ogre::OGLTextureRenderTarget *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::OGLTextureRenderTarget **,std::vector<Ogre::OGLTextureRenderTarget *,std::allocator<Ogre::OGLTextureRenderTarget *>>>,Ogre::OGLTextureRenderTarget * const&)
// address: 0x0025FBB4   size: 0xA6 (166 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::OGLTextureRenderTarget *>::_M_insert_aux(__int64 a1, _DWORD *a2)
{
  _DWORD *v3; // r3
  __int64 v4; // r4
  int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r2
  int v8; // r6
  _DWORD *v9; // r3
  int v10; // r0
  __int64 v12; // [sp+0h] [bp-Ch]

  v12 = a1;
  v3 = *(_DWORD **)(a1 + 4);
  v4 = a1;
  if ( v3 != *(_DWORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
      *v3 = *(v3 - 1);
    LODWORD(a1) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v4 + 4) = a1 + 4;
    LODWORD(v4) = *a2;
    v5 = ((int)a1 - 4 - HIDWORD(a1)) >> 2;
    if ( v5 != 0 )
      j_memmove((void *)(a1 - 4 * v5), (const void *)HIDWORD(a1), 4 * v5);
    *(_DWORD *)HIDWORD(v4) = v4;
    return v12;
  }
  v6 = ((int)v3 - *(_DWORD *)a1) >> 2;
  if ( v6 == 0 )
  {
    v7 = 1;
    goto LABEL_11;
  }
  v7 = 2 * v6;
  v8 = 0x3FFFFFFF;
  if ( 2 * v6 >= v6 )
  {
LABEL_11:
    v8 = v7;
    if ( v7 > 0x3FFFFFFF )
      v8 = 0x3FFFFFFF;
  }
  LODWORD(v12) = (HIDWORD(a1) - *(_DWORD *)a1) >> 2;
  HIDWORD(v12) = 4 * v8;
  if ( v8 != 0 )
    v8 = operator new(4 * v8);
  v9 = (_DWORD *)(v8 + 4 * v12);
  if ( v9 != nullptr )
    *v9 = *a2;
  v10 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::OGLTextureRenderTarget *>(
          *(void **)v4,
          SHIDWORD(v4),
          (void *)v8);
  HIDWORD(v4) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::OGLTextureRenderTarget *>(
                  (void *)HIDWORD(v4),
                  *(_DWORD *)(v4 + 4),
                  (void *)(v10 + 4));
  if ( *(_DWORD *)v4 != 0 )
    operator delete(*(void **)v4);
  *(_DWORD *)v4 = v8;
  *(_DWORD *)(v4 + 4) = HIDWORD(v4);
  *(_DWORD *)(v4 + 8) = v8 + HIDWORD(v12);
  return v12;
}


//======================================================================
// std::vector<Ogre::OGLHardwarePixelBufferManager::BufferObject,std::allocator<Ogre::OGLHardwarePixelBufferManager::BufferObject>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::OGLHardwarePixelBufferManager::BufferObject*,std::vector<Ogre::OGLHardwarePixelBufferManager::BufferObject,std::allocator<Ogre::OGLHardwarePixelBufferManager::BufferObject>>>,Ogre::OGLHardwarePixelBufferManager::BufferObject const&)
// address: 0x0025FCE4   size: 0xCC (204 bytes)
//======================================================================
void __fastcall std::vector<Ogre::OGLHardwarePixelBufferManager::BufferObject>::_M_insert_aux(
        int a1,
        _DWORD *a2,
        int *a3)
{
  _DWORD *v4; // r3
  int v7; // r2
  int v8; // r7
  int v9; // r0
  int v10; // r7
  int v11; // r4
  int v12; // r6
  int v13; // r2
  unsigned int v14; // r3
  unsigned int v15; // r2
  int v16; // r7
  int *v17; // r2
  int v18; // r1
  int v19; // r3
  int v20; // r0
  int v21; // r5
  int v22; // [sp+8h] [bp-Ch]
  int v23; // [sp+8h] [bp-Ch]
  int v24; // [sp+Ch] [bp-8h]

  v4 = *(_DWORD **)(a1 + 4);
  if ( v4 != *(_DWORD **)(a1 + 8) )
  {
    if ( v4 != nullptr )
    {
      v7 = *(v4 - 3);
      v8 = *(v4 - 2);
      *v4 = *(v4 - 4);
      v4[1] = v7;
      v4[2] = v8;
      v4[3] = *(v4 - 1);
    }
    v9 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 4) += 16;
    v10 = *a3;
    v11 = a3[1];
    v22 = a3[2];
    v12 = a3[3];
    v13 = (v9 - 16 - (int)a2) >> 4;
    if ( v13 != 0 )
      j_memmove((void *)(v9 - 16 * v13), a2, 16 * v13);
    *a2 = v10;
    a2[1] = v11;
    a2[3] = v12;
    a2[2] = v22;
    return;
  }
  v14 = ((int)v4 - *(_DWORD *)a1) >> 4;
  if ( v14 == 0 )
  {
    v15 = 1;
    goto LABEL_11;
  }
  v15 = 2 * v14;
  v16 = 0xFFFFFFF;
  if ( 2 * v14 >= v14 )
  {
LABEL_11:
    v16 = v15;
    if ( v15 > 0xFFFFFFF )
      v16 = 0xFFFFFFF;
  }
  v24 = ((int)a2 - *(_DWORD *)a1) >> 4;
  v23 = 16 * v16;
  if ( v16 != 0 )
    v16 = operator new(16 * v16);
  if ( 16 * v24 + v16 != 0 )
  {
    v17 = (int *)(16 * v24 + v16);
    v18 = a3[1];
    v19 = a3[2];
    *v17 = *a3;
    v17[1] = v18;
    v17[2] = v19;
    v17[3] = a3[3];
  }
  v20 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::OGLHardwarePixelBufferManager::BufferObject>(
          *(void **)a1,
          (int)a2,
          (void *)v16);
  v21 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::OGLHardwarePixelBufferManager::BufferObject>(
          a2,
          *(_DWORD *)(a1 + 4),
          (void *)(v20 + 16));
  if ( *(_DWORD *)a1 != 0 )
    operator delete(*(void **)a1);
  *(_DWORD *)a1 = v16;
  *(_DWORD *)(a1 + 4) = v21;
  *(_DWORD *)(a1 + 8) = v16 + v23;
}


//======================================================================
// std::vector<Ogre::OGLRenderWindow *,std::allocator<Ogre::OGLRenderWindow *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::OGLRenderWindow **,std::vector<Ogre::OGLRenderWindow *,std::allocator<Ogre::OGLRenderWindow *>>>,Ogre::OGLRenderWindow * const&)
// address: 0x0026495C   size: 0xA6 (166 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::OGLRenderWindow *>::_M_insert_aux(__int64 a1, _DWORD *a2)
{
  _DWORD *v3; // r3
  __int64 v4; // r4
  int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r2
  int v8; // r6
  _DWORD *v9; // r3
  int v10; // r0
  __int64 v12; // [sp+0h] [bp-Ch]

  v12 = a1;
  v3 = *(_DWORD **)(a1 + 4);
  v4 = a1;
  if ( v3 != *(_DWORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
      *v3 = *(v3 - 1);
    LODWORD(a1) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v4 + 4) = a1 + 4;
    LODWORD(v4) = *a2;
    v5 = ((int)a1 - 4 - HIDWORD(a1)) >> 2;
    if ( v5 != 0 )
      j_memmove((void *)(a1 - 4 * v5), (const void *)HIDWORD(a1), 4 * v5);
    *(_DWORD *)HIDWORD(v4) = v4;
    return v12;
  }
  v6 = ((int)v3 - *(_DWORD *)a1) >> 2;
  if ( v6 == 0 )
  {
    v7 = 1;
    goto LABEL_11;
  }
  v7 = 2 * v6;
  v8 = 0x3FFFFFFF;
  if ( 2 * v6 >= v6 )
  {
LABEL_11:
    v8 = v7;
    if ( v7 > 0x3FFFFFFF )
      v8 = 0x3FFFFFFF;
  }
  LODWORD(v12) = (HIDWORD(a1) - *(_DWORD *)a1) >> 2;
  HIDWORD(v12) = 4 * v8;
  if ( v8 != 0 )
    v8 = operator new(4 * v8);
  v9 = (_DWORD *)(v8 + 4 * v12);
  if ( v9 != nullptr )
    *v9 = *a2;
  v10 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::OGLRenderWindow *>(
          *(void **)v4,
          SHIDWORD(v4),
          (void *)v8);
  HIDWORD(v4) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::OGLRenderWindow *>(
                  (void *)HIDWORD(v4),
                  *(_DWORD *)(v4 + 4),
                  (void *)(v10 + 4));
  if ( *(_DWORD *)v4 != 0 )
    operator delete(*(void **)v4);
  *(_DWORD *)v4 = v8;
  *(_DWORD *)(v4 + 4) = HIDWORD(v4);
  *(_DWORD *)(v4 + 8) = v8 + HIDWORD(v12);
  return v12;
}


//======================================================================
// std::vector<Ogre::OGLRenderWindow *,std::allocator<Ogre::OGLRenderWindow *>>::push_back(Ogre::OGLRenderWindow * const&)
// address: 0x00264A08   size: 0x22 (34 bytes)
//======================================================================
int __fastcall std::vector<Ogre::OGLRenderWindow *>::push_back(__int64 a1)
{
  _DWORD *v1; // r2

  v1 = (_DWORD *)HIDWORD(a1);
  HIDWORD(a1) = *(_DWORD *)(a1 + 4);
  if ( HIDWORD(a1) == *(_DWORD *)(a1 + 8) )
  {
    LODWORD(a1) = std::vector<Ogre::OGLRenderWindow *>::_M_insert_aux(a1, v1);
  }
  else
  {
    if ( HIDWORD(a1) != 0 )
      *(_DWORD *)HIDWORD(a1) = *v1;
    *(_DWORD *)(a1 + 4) += 4;
  }
  return a1;
}


//======================================================================
// std::vector<Ogre::OGLVertexDecl *,std::allocator<Ogre::OGLVertexDecl *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Ogre::OGLVertexDecl **,std::vector<Ogre::OGLVertexDecl *,std::allocator<Ogre::OGLVertexDecl *>>>,Ogre::OGLVertexDecl * const&)
// address: 0x00264BCC   size: 0xA6 (166 bytes)
//======================================================================
__int64 __fastcall std::vector<Ogre::OGLVertexDecl *>::_M_insert_aux(__int64 a1, _DWORD *a2)
{
  _DWORD *v3; // r3
  __int64 v4; // r4
  int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r2
  int v8; // r6
  _DWORD *v9; // r3
  int v10; // r0
  __int64 v12; // [sp+0h] [bp-Ch]

  v12 = a1;
  v3 = *(_DWORD **)(a1 + 4);
  v4 = a1;
  if ( v3 != *(_DWORD **)(a1 + 8) )
  {
    if ( v3 != nullptr )
      *v3 = *(v3 - 1);
    LODWORD(a1) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v4 + 4) = a1 + 4;
    LODWORD(v4) = *a2;
    v5 = ((int)a1 - 4 - HIDWORD(a1)) >> 2;
    if ( v5 != 0 )
      j_memmove((void *)(a1 - 4 * v5), (const void *)HIDWORD(a1), 4 * v5);
    *(_DWORD *)HIDWORD(v4) = v4;
    return v12;
  }
  v6 = ((int)v3 - *(_DWORD *)a1) >> 2;
  if ( v6 == 0 )
  {
    v7 = 1;
    goto LABEL_11;
  }
  v7 = 2 * v6;
  v8 = 0x3FFFFFFF;
  if ( 2 * v6 >= v6 )
  {
LABEL_11:
    v8 = v7;
    if ( v7 > 0x3FFFFFFF )
      v8 = 0x3FFFFFFF;
  }
  LODWORD(v12) = (HIDWORD(a1) - *(_DWORD *)a1) >> 2;
  HIDWORD(v12) = 4 * v8;
  if ( v8 != 0 )
    v8 = operator new(4 * v8);
  v9 = (_DWORD *)(v8 + 4 * v12);
  if ( v9 != nullptr )
    *v9 = *a2;
  v10 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::OGLVertexDecl *>(
          *(void **)v4,
          SHIDWORD(v4),
          (void *)v8);
  HIDWORD(v4) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::OGLVertexDecl *>(
                  (void *)HIDWORD(v4),
                  *(_DWORD *)(v4 + 4),
                  (void *)(v10 + 4));
  if ( *(_DWORD *)v4 != 0 )
    operator delete(*(void **)v4);
  *(_DWORD *)v4 = v8;
  *(_DWORD *)(v4 + 4) = HIDWORD(v4);
  *(_DWORD *)(v4 + 8) = v8 + HIDWORD(v12);
  return v12;
}


//======================================================================
// std::vector<Ogre::VertexDeclElement,std::allocator<Ogre::VertexDeclElement>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Ogre::VertexDeclElement*,std::vector<Ogre::VertexDeclElement,std::allocator<Ogre::VertexDeclElement>>>,unsigned int,Ogre::VertexDeclElement const&)
// address: 0x00264CA4   size: 0x142 (322 bytes)
//======================================================================
void __fastcall std::vector<Ogre::VertexDeclElement>::_M_fill_insert(int a1, char *a2, unsigned int a3, _DWORD *a4)
{
  char *v6; // r7
  int v7; // r1
  int v8; // r6
  int v9; // r1
  int v10; // r6
  unsigned int v11; // r6
  int v12; // r5
  char *v13; // r1
  _DWORD *v14; // r0
  unsigned int v15; // r5
  void *v16; // r2
  unsigned int v17; // r7
  unsigned int v18; // r6
  unsigned int v19; // r6
  _DWORD *v20; // r7
  int v21; // r0
  int v22; // r5
  int v25; // [sp+Ch] [bp-20h]
  _DWORD v26[7]; // [sp+10h] [bp-1Ch] BYREF

  if ( a3 != 0 )
  {
    v6 = *(char **)(a1 + 4);
    if ( -1431655765 * ((*(_DWORD *)(a1 + 8) - (int)v6) >> 3) < a3 )
    {
      v17 = -1431655765 * ((int)&v6[-*(_DWORD *)a1] >> 3);
      if ( 178956970 - v17 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v18 = a3;
      if ( a3 < v17 )
        v18 = v17;
      v19 = v18 + v17;
      if ( v19 < v17 || v19 > 0xAAAAAAA )
        v19 = 178956970;
      v25 = -1431655765 * ((int)&a2[-*(_DWORD *)a1] >> 3);
      if ( v19 != 0 )
        v20 = (_DWORD *)operator new(24 * v19);
      else
        v20 = nullptr;
      std::__fill_n_a<Ogre::VertexDeclElement *,unsigned int,Ogre::VertexDeclElement>(&v20[6 * v25], a3, a4);
      v21 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::VertexDeclElement>(
              *(void **)a1,
              (int)a2,
              v20);
      v22 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::VertexDeclElement>(
              a2,
              *(_DWORD *)(a1 + 4),
              (void *)(v21 + 24 * a3));
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)a1 = v20;
      *(_DWORD *)(a1 + 4) = v22;
      *(_DWORD *)(a1 + 8) = &v20[6 * v19];
    }
    else
    {
      v7 = a4[1];
      v8 = a4[2];
      v26[0] = *a4;
      v26[1] = v7;
      v26[2] = v8;
      v9 = a4[4];
      v10 = a4[5];
      v26[3] = a4[3];
      v26[4] = v9;
      v26[5] = v10;
      v11 = -1431655765 * ((v6 - a2) >> 3);
      if ( v11 <= a3 )
      {
        v15 = a3 - v11;
        std::__fill_n_a<Ogre::VertexDeclElement *,unsigned int,Ogre::VertexDeclElement>(v6, a3 - v11, v26);
        v16 = (void *)(*(_DWORD *)(a1 + 4) + 24 * v15);
        *(_DWORD *)(a1 + 4) = v16;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::VertexDeclElement>(
          a2,
          (int)v6,
          v16);
        v14 = a2;
        v13 = v6;
        *(_DWORD *)(a1 + 4) += 8 * ((v6 - a2) >> 3);
      }
      else
      {
        v12 = 24 * a3;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::VertexDeclElement>(
          &v6[-24 * a3],
          (int)v6,
          v6);
        *(_DWORD *)(a1 + 4) += v12;
        if ( -1431655765 * ((&v6[-v12] - a2) >> 3) != 0 )
          j_memmove(&v6[-8 * ((&v6[-v12] - a2) >> 3)], a2, 8 * ((&v6[-v12] - a2) >> 3));
        v13 = &a2[v12];
        v14 = a2;
      }
      std::__fill_a<Ogre::VertexDeclElement *,Ogre::VertexDeclElement>(v14, v13, v26);
    }
  }
}


//======================================================================
// std::vector<int,std::allocator<int>>::_M_default_append(unsigned int)
// address: 0x002652FC   size: 0xAA (170 bytes)
//======================================================================
__int64 __fastcall std::vector<int>::_M_default_append(__int64 a1)
{
  __int64 v1; // r4
  _DWORD *v2; // r3
  int i; // r2
  unsigned int v4; // r3
  unsigned int v5; // r6
  unsigned int v6; // r6
  int v7; // r3
  int v8; // r7
  _DWORD *v9; // r7
  _DWORD *v10; // r2
  int v11; // r3
  __int64 v13; // [sp+0h] [bp-Ch]

  v13 = a1;
  v1 = a1;
  if ( HIDWORD(a1) == 0 )
    return v13;
  v2 = *(_DWORD **)(a1 + 4);
  if ( (unsigned int)((*(_DWORD *)(a1 + 8) - (int)v2) >> 2) >= HIDWORD(a1) )
  {
    for ( i = HIDWORD(a1); i != 0; --i )
      *v2++ = 0;
    *(_DWORD *)(a1 + 4) += 4 * HIDWORD(a1);
    return v13;
  }
  v4 = ((int)v2 - *(_DWORD *)a1) >> 2;
  if ( 0x3FFFFFFF - v4 < HIDWORD(a1) )
    sub_3BD058("vector::_M_default_append");
  v5 = v4;
  if ( v4 < HIDWORD(a1) )
    v5 = HIDWORD(a1);
  v6 = v5 + v4;
  if ( v6 < v4 || v6 > 0x3FFFFFFF )
  {
    v6 = 0x3FFFFFFF;
LABEL_15:
    HIDWORD(v13) = operator new(4 * v6);
    goto LABEL_16;
  }
  HIDWORD(v13) = 0;
  if ( v6 != 0 )
    goto LABEL_15;
LABEL_16:
  v7 = (*(_DWORD *)(v1 + 4) - *(_DWORD *)v1) >> 2;
  v8 = 4 * v7;
  if ( v7 != 0 )
    j_memmove((void *)HIDWORD(v13), *(const void **)v1, 4 * v7);
  v9 = (_DWORD *)(HIDWORD(v13) + v8);
  v10 = v9;
  v11 = HIDWORD(v1);
  do
  {
    --v11;
    *v10++ = 0;
  }
  while ( v11 != 0 );
  HIDWORD(v1) = &v9[HIDWORD(v1)];
  if ( *(_DWORD *)v1 != 0 )
    operator delete(*(void **)v1);
  *(_DWORD *)(v1 + 4) = HIDWORD(v1);
  *(_DWORD *)v1 = HIDWORD(v13);
  *(_DWORD *)(v1 + 8) = HIDWORD(v13) + 4 * v6;
  return v13;
}


//======================================================================
// std::vector<ParticleVertex,std::allocator<ParticleVertex>>::~vector()
// address: 0x00267E4C   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorI14ParticleVertexSaIS0_EED1Ev'
void **__fastcall std::vector<ParticleVertex>::~vector(void **a1)
{
  void *v2; // r0

  v2 = *a1;
  if ( v2 != nullptr )
    operator delete(v2);
  return a1;
}


//======================================================================
// std::vector<ParticleVertex,std::allocator<ParticleVertex>>::_M_default_append(unsigned int)
// address: 0x00268534   size: 0xF8 (248 bytes)
//======================================================================
void __fastcall std::vector<ParticleVertex>::_M_default_append(int *a1, unsigned int a2)
{
  char *v4; // r6
  unsigned int i; // r7
  unsigned int v6; // r6
  unsigned int v7; // r3
  unsigned int v8; // r3
  int v9; // r7
  _DWORD *v10; // r6
  char *v11; // r1
  char *v12; // r12
  char *v13; // r3
  _DWORD *v14; // r2
  char *v15; // r5
  unsigned int v16; // [sp+4h] [bp-10h]
  char *v17; // [sp+8h] [bp-Ch]
  char *v18; // [sp+Ch] [bp-8h]

  if ( a2 == 0 )
    return;
  v4 = (char *)a1[1];
  if ( -1431655765 * ((a1[2] - (int)v4) >> 3) >= a2 )
  {
    for ( i = a2; i != 0; --i )
    {
      std::_Construct<ParticleVertex<>>(v4);
      v4 += 24;
    }
    a1[1] += 24 * a2;
    return;
  }
  v6 = -1431655765 * ((int)&v4[-*a1] >> 3);
  if ( 178956970 - v6 < a2 )
    sub_3BD058("vector::_M_default_append");
  v7 = v6;
  if ( v6 < a2 )
    v7 = a2;
  v8 = v7 + v6;
  if ( v8 < v6 || (v9 = v8, v8 > 0xAAAAAAA) )
  {
    v9 = 178956970;
  }
  else
  {
    v10 = nullptr;
    if ( v8 == 0 )
      goto LABEL_16;
  }
  v10 = (_DWORD *)operator new(24 * v9);
LABEL_16:
  v11 = (char *)*a1;
  v12 = (char *)a1[1];
  v13 = (char *)*a1;
  v14 = v10;
  while ( v13 != v12 )
  {
    if ( v14 != nullptr )
    {
      *v14 = *(_DWORD *)v13;
      v14[1] = *((_DWORD *)v13 + 1);
      v14[2] = *((_DWORD *)v13 + 2);
      v14[3] = *((_DWORD *)v13 + 3);
      v14[4] = *((_DWORD *)v13 + 4);
      v14[5] = *((_DWORD *)v13 + 5);
    }
    v13 += 24;
    v14 += 6;
  }
  v18 = (char *)&v10[6 * ((178956971 * ((unsigned int)(v13 - v11) >> 3)) & 0x1FFFFFFF)];
  v16 = a2;
  v17 = v18;
  do
  {
    std::_Construct<ParticleVertex<>>(v17);
    --v16;
    v17 += 24;
  }
  while ( v16 != 0 );
  v15 = &v18[24 * a2];
  if ( *a1 != 0 )
    operator delete((void *)*a1);
  *a1 = (int)v10;
  a1[1] = (int)v15;
  a1[2] = (int)&v10[6 * v9];
}


//======================================================================
// std::vector<ParticleVertex,std::allocator<ParticleVertex>>::resize(unsigned int)
// address: 0x0026863C   size: 0x28 (40 bytes)
//======================================================================
void __fastcall std::vector<ParticleVertex>::resize(int *a1, unsigned int a2)
{
  unsigned int v2; // r3

  v2 = -1431655765 * ((a1[1] - *a1) >> 3);
  if ( a2 <= v2 )
  {
    if ( a2 < v2 )
      a1[1] = *a1 + 24 * a2;
  }
  else
  {
    std::vector<ParticleVertex>::_M_default_append(a1, a2 - v2);
  }
}


//======================================================================
// std::vector<AttribModified,std::allocator<AttribModified>>::_M_default_append(unsigned int)
// address: 0x0026A8EC   size: 0xAA (170 bytes)
//======================================================================
__int64 __fastcall std::vector<AttribModified>::_M_default_append(__int64 a1)
{
  __int64 v1; // r4
  _DWORD *v2; // r3
  int i; // r2
  unsigned int v4; // r3
  unsigned int v5; // r6
  unsigned int v6; // r6
  int v7; // r3
  int v8; // r7
  _DWORD *v9; // r7
  _DWORD *v10; // r2
  int v11; // r3
  __int64 v13; // [sp+0h] [bp-Ch]

  v13 = a1;
  v1 = a1;
  if ( HIDWORD(a1) == 0 )
    return v13;
  v2 = *(_DWORD **)(a1 + 4);
  if ( (unsigned int)((*(_DWORD *)(a1 + 8) - (int)v2) >> 2) >= HIDWORD(a1) )
  {
    for ( i = HIDWORD(a1); i != 0; --i )
      *v2++ = 0;
    *(_DWORD *)(a1 + 4) += 4 * HIDWORD(a1);
    return v13;
  }
  v4 = ((int)v2 - *(_DWORD *)a1) >> 2;
  if ( 0x3FFFFFFF - v4 < HIDWORD(a1) )
    sub_3BD058("vector::_M_default_append");
  v5 = v4;
  if ( v4 < HIDWORD(a1) )
    v5 = HIDWORD(a1);
  v6 = v5 + v4;
  if ( v6 < v4 || v6 > 0x3FFFFFFF )
  {
    v6 = 0x3FFFFFFF;
LABEL_15:
    HIDWORD(v13) = operator new(4 * v6);
    goto LABEL_16;
  }
  HIDWORD(v13) = 0;
  if ( v6 != 0 )
    goto LABEL_15;
LABEL_16:
  v7 = (*(_DWORD *)(v1 + 4) - *(_DWORD *)v1) >> 2;
  v8 = 4 * v7;
  if ( v7 != 0 )
    j_memmove((void *)HIDWORD(v13), *(const void **)v1, 4 * v7);
  v9 = (_DWORD *)(HIDWORD(v13) + v8);
  v10 = v9;
  v11 = HIDWORD(v1);
  do
  {
    --v11;
    *v10++ = 0;
  }
  while ( v11 != 0 );
  HIDWORD(v1) = &v9[HIDWORD(v1)];
  if ( *(_DWORD *)v1 != 0 )
    operator delete(*(void **)v1);
  *(_DWORD *)(v1 + 4) = HIDWORD(v1);
  *(_DWORD *)v1 = HIDWORD(v13);
  *(_DWORD *)(v1 + 8) = HIDWORD(v13) + 4 * v6;
  return v13;
}


//======================================================================
// std::vector<AttribModified,std::allocator<AttribModified>>::resize(unsigned int)
// address: 0x0026A9A0   size: 0x22 (34 bytes)
//======================================================================
int __fastcall std::vector<AttribModified>::resize(__int64 a1)
{
  unsigned int v1; // r3

  v1 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  if ( HIDWORD(a1) <= v1 )
  {
    if ( HIDWORD(a1) < v1 )
      *(_DWORD *)(a1 + 4) = *(_DWORD *)a1 + 4 * HIDWORD(a1);
  }
  else
  {
    HIDWORD(a1) -= v1;
    LODWORD(a1) = std::vector<AttribModified>::_M_default_append(a1);
  }
  return a1;
}


//======================================================================
// std::vector<ActorBuff,std::allocator<ActorBuff>>::_M_default_append(unsigned int)
// address: 0x0026AA90   size: 0xA2 (162 bytes)
//======================================================================
__int64 __fastcall std::vector<ActorBuff>::_M_default_append(__int64 a1)
{
  __int64 v1; // r4
  int v2; // r6
  unsigned int v3; // r6
  int v4; // r3
  int v5; // r7
  _DWORD *v6; // r7
  char *v7; // r7
  __int64 v9; // [sp+0h] [bp-Ch]

  v9 = a1;
  v1 = a1;
  if ( HIDWORD(a1) == 0 )
    return v9;
  LODWORD(a1) = *(_DWORD *)(a1 + 4);
  HIDWORD(v9) = 16 * HIDWORD(a1);
  if ( (unsigned int)((*(_DWORD *)(v1 + 8) - (int)a1) >> 4) >= HIDWORD(a1) )
  {
    std::__uninitialized_default_n_1<true>::__uninit_default_n<ActorBuff *,unsigned int>((_DWORD *)a1, SHIDWORD(a1));
    *(_DWORD *)(v1 + 4) += HIDWORD(v9);
    return v9;
  }
  LODWORD(a1) = ((int)a1 - *(_DWORD *)v1) >> 4;
  if ( (unsigned int)(0xFFFFFFF - a1) < HIDWORD(a1) )
    sub_3BD058("vector::_M_default_append");
  v2 = a1;
  if ( (unsigned int)a1 < HIDWORD(a1) )
    v2 = HIDWORD(a1);
  v3 = v2 + a1;
  if ( v3 < (unsigned int)a1 || v3 > 0xFFFFFFF )
  {
    v3 = 0xFFFFFFF;
LABEL_13:
    LODWORD(v9) = operator new(16 * v3);
    goto LABEL_14;
  }
  LODWORD(v9) = 0;
  if ( v3 != 0 )
    goto LABEL_13;
LABEL_14:
  v4 = (*(_DWORD *)(v1 + 4) - *(_DWORD *)v1) >> 4;
  v5 = 16 * v4;
  if ( v4 != 0 )
    j_memmove((void *)v9, *(const void **)v1, 16 * v4);
  v6 = (_DWORD *)(v9 + v5);
  std::__uninitialized_default_n_1<true>::__uninit_default_n<ActorBuff *,unsigned int>(v6, SHIDWORD(v1));
  v7 = (char *)v6 + HIDWORD(v9);
  if ( *(_DWORD *)v1 != 0 )
    operator delete(*(void **)v1);
  *(_DWORD *)(v1 + 4) = v7;
  *(_DWORD *)v1 = v9;
  *(_DWORD *)(v1 + 8) = v9 + 16 * v3;
  return v9;
}


//======================================================================
// std::vector<ActorBuff,std::allocator<ActorBuff>>::resize(unsigned int)
// address: 0x0026AB3C   size: 0x22 (34 bytes)
//======================================================================
int __fastcall std::vector<ActorBuff>::resize(__int64 a1)
{
  unsigned int v1; // r3

  v1 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 4;
  if ( HIDWORD(a1) <= v1 )
  {
    if ( HIDWORD(a1) < v1 )
      *(_DWORD *)(a1 + 4) = *(_DWORD *)a1 + 16 * HIDWORD(a1);
  }
  else
  {
    HIDWORD(a1) -= v1;
    LODWORD(a1) = std::vector<ActorBuff>::_M_default_append(a1);
  }
  return a1;
}


//======================================================================
// std::vector<BuddyAchievement,std::allocator<BuddyAchievement>>::operator=(std::vector<BuddyAchievement,std::allocator<BuddyAchievement>> const&)
// address: 0x00296670   size: 0x94 (148 bytes)
//======================================================================
int __fastcall std::vector<BuddyAchievement>::operator=(int a1, int a2)
{
  int v4; // r7
  void *v5; // r6
  void *v6; // r2
  unsigned int v7; // r3
  char *v8; // r5
  unsigned int v9; // r1
  void *v10; // r0
  int v11; // r1
  int byte_count; // [sp+4h] [bp-8h]

  if ( a2 != a1 )
  {
    v4 = *(_DWORD *)(a2 + 4);
    v5 = *(void **)a2;
    v6 = *(void **)a1;
    v7 = (v4 - *(_DWORD *)a2) >> 3;
    byte_count = 8 * v7;
    if ( v7 <= (*(_DWORD *)(a1 + 8) - *(_DWORD *)a1) >> 3 )
    {
      v9 = (*(_DWORD *)(a1 + 4) - (int)v6) >> 3;
      if ( v9 < v7 )
      {
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<BuddyAchievement>(
          v5,
          (int)v5 + 8 * v9,
          v6);
        v6 = *(void **)(a1 + 4);
        v11 = *(_DWORD *)(a2 + 4);
        v10 = (void *)(*(_DWORD *)a2 + 8 * (((int)v6 - *(_DWORD *)a1) >> 3));
      }
      else
      {
        v10 = v5;
        v11 = v4;
      }
      std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<BuddyAchievement>(v10, v11, v6);
    }
    else
    {
      if ( v7 != 0 )
      {
        if ( v7 > 0x1FFFFFFF )
          sub_3BCEB4(8 * v7);
        v8 = (char *)operator new(byte_count);
      }
      else
      {
        v8 = nullptr;
      }
      std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<BuddyAchievement>(v5, v4, v8);
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)a1 = v8;
      *(_DWORD *)(a1 + 8) = &v8[byte_count];
    }
    *(_DWORD *)(a1 + 4) = *(_DWORD *)a1 + byte_count;
  }
  return a1;
}


//======================================================================
// std::vector<BuddyWorldDesc,std::allocator<BuddyWorldDesc>>::operator=(std::vector<BuddyWorldDesc,std::allocator<BuddyWorldDesc>> const&)
// address: 0x00296910   size: 0x19C (412 bytes)
//======================================================================
int __fastcall std::vector<BuddyWorldDesc>::operator=(int a1, const BuddyWorldDesc **a2)
{
  const BuddyWorldDesc *v4; // r5
  unsigned int v5; // r1
  int v6; // r0
  BuddyWorldDesc *v7; // r7
  BuddyWorldDesc *v8; // r6
  BuddyWorldDesc *v9; // r5
  BuddyWorldDesc *v10; // r6
  int v11; // r6
  int v12; // r7
  BuddyWorldDesc *v13; // r6
  BuddyWorldDesc *j; // r5
  int i; // r7
  const BuddyWorldDesc *v16; // r0
  BuddyWorldDesc *v17; // r6
  BuddyWorldDesc *v18; // r7
  BuddyWorldDesc *v20; // [sp+4h] [bp-10h]
  BuddyWorldDesc *v21; // [sp+4h] [bp-10h]
  unsigned int v22; // [sp+8h] [bp-Ch]
  const BuddyWorldDesc *v23; // [sp+Ch] [bp-8h]

  if ( a2 != (const BuddyWorldDesc **)a1 )
  {
    v4 = *a2;
    v23 = a2[1];
    v5 = -858993459 * ((v23 - *a2) >> 3);
    v6 = *(_DWORD *)(a1 + 8);
    v22 = v5;
    v20 = *(BuddyWorldDesc **)a1;
    if ( v5 <= -858993459 * ((v6 - *(_DWORD *)a1) >> 3) )
    {
      if ( -858993459 * ((*(_DWORD *)(a1 + 4) - (int)v20) >> 3) < v5 )
      {
        for ( i = -858993459 * ((8 * ((*(_DWORD *)(a1 + 4) - (int)v20) >> 3)) >> 3); i > 0; --i )
        {
          BuddyWorldDesc::operator=((int)v20, (int)v4);
          v4 = (const BuddyWorldDesc *)((char *)v4 + 40);
          v20 = (BuddyWorldDesc *)((char *)v20 + 40);
        }
        v16 = *a2;
        v17 = a2[1];
        v21 = (const BuddyWorldDesc *)((char *)v16 + 8 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 3));
        v18 = *(BuddyWorldDesc **)(a1 + 4);
        while ( v21 != v17 )
        {
          if ( v18 != nullptr )
            BuddyWorldDesc::BuddyWorldDesc(v18, v21);
          v18 = (BuddyWorldDesc *)((char *)v18 + 40);
          v21 = (BuddyWorldDesc *)((char *)v21 + 40);
        }
      }
      else
      {
        v11 = v5;
        v12 = *(_DWORD *)a1;
        while ( v11 > 0 )
        {
          BuddyWorldDesc::operator=(v12, (int)v4);
          v4 = (const BuddyWorldDesc *)((char *)v4 + 40);
          v12 += 40;
          --v11;
        }
        v13 = *(BuddyWorldDesc **)(a1 + 4);
        for ( j = (BuddyWorldDesc *)((char *)v20 + 40 * (((int)~v22 >> 31) & v22));
              j != v13;
              j = (BuddyWorldDesc *)((char *)j + 40) )
        {
          BuddyWorldDesc::~BuddyWorldDesc(j);
        }
      }
    }
    else
    {
      if ( v5 != 0 )
      {
        if ( v5 > 0x6666666 )
          sub_3BCEB4(v6);
        v7 = (BuddyWorldDesc *)operator new(40 * v5);
      }
      else
      {
        v7 = nullptr;
      }
      v8 = v7;
      while ( v4 != v23 )
      {
        if ( v8 != nullptr )
          BuddyWorldDesc::BuddyWorldDesc(v8, v4);
        v4 = (const BuddyWorldDesc *)((char *)v4 + 40);
        v8 = (BuddyWorldDesc *)((char *)v8 + 40);
      }
      v9 = *(BuddyWorldDesc **)a1;
      v10 = *(BuddyWorldDesc **)(a1 + 4);
      while ( v9 != v10 )
      {
        BuddyWorldDesc::~BuddyWorldDesc(v9);
        v9 = (BuddyWorldDesc *)((char *)v9 + 40);
      }
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)a1 = v7;
      *(_DWORD *)(a1 + 8) = (char *)v7 + 40 * v22;
    }
    *(_DWORD *)(a1 + 4) = *(_DWORD *)a1 + 40 * v22;
  }
  return a1;
}


//======================================================================
// std::vector<tagOWorld,std::allocator<tagOWorld>>::operator=(std::vector<tagOWorld,std::allocator<tagOWorld>> const&)
// address: 0x00296B48   size: 0xBA (186 bytes)
//======================================================================
int __fastcall std::vector<tagOWorld>::operator=(int a1, int a2)
{
  void *v4; // r7
  unsigned int v5; // r5
  void *v6; // r2
  char *v7; // r6
  void *v8; // r0
  int v9; // r1
  int v11; // [sp+4h] [bp-8h]

  if ( a2 != a1 )
  {
    v4 = *(void **)a2;
    v11 = *(_DWORD *)(a2 + 4);
    v5 = 438261969 * ((v11 - *(_DWORD *)a2) >> 4);
    v6 = *(void **)a1;
    if ( v5 <= 438261969 * ((*(_DWORD *)(a1 + 8) - *(_DWORD *)a1) >> 4) )
    {
      if ( 438261969 * ((*(_DWORD *)(a1 + 4) - (int)v6) >> 4) < v5 )
      {
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<tagOWorld>(
          v4,
          (int)v4 + 16 * ((*(_DWORD *)(a1 + 4) - (int)v6) >> 4),
          v6);
        v6 = *(void **)(a1 + 4);
        v9 = *(_DWORD *)(a2 + 4);
        v8 = (void *)(*(_DWORD *)a2 + 16 * (((int)v6 - *(_DWORD *)a1) >> 4));
      }
      else
      {
        v8 = *(void **)a2;
        v9 = *(_DWORD *)(a2 + 4);
      }
      std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<tagOWorld>(v8, v9, v6);
    }
    else
    {
      if ( v5 != 0 )
      {
        if ( v5 > 0x539782 )
          sub_3BCEB4(a1);
        v7 = (char *)operator new(16 * ((v11 - (int)v4) >> 4));
      }
      else
      {
        v7 = nullptr;
      }
      std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<tagOWorld>(v4, v11, v7);
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)a1 = v7;
      *(_DWORD *)(a1 + 8) = &v7[784 * v5];
    }
    *(_DWORD *)(a1 + 4) = *(_DWORD *)a1 + 784 * v5;
  }
  return a1;
}


//======================================================================
// std::vector<BlockGeomVert,std::allocator<BlockGeomVert>>::operator=(std::vector<BlockGeomVert,std::allocator<BlockGeomVert>> const&)
// address: 0x0029A4A0   size: 0x116 (278 bytes)
//======================================================================
void **__fastcall std::vector<BlockGeomVert>::operator=(void **a1, char **a2)
{
  char *v4; // r5
  int v5; // r7
  int v6; // r5
  char *v7; // r6
  int i; // r7
  char *v9; // r5
  char *v10; // r1
  char *v11; // r6
  char *j; // r7
  char *v14; // [sp+4h] [bp-10h]
  unsigned int v15; // [sp+8h] [bp-Ch]
  char *v16; // [sp+Ch] [bp-8h]

  if ( a2 != (char **)a1 )
  {
    v16 = a2[1];
    v14 = *a2;
    v4 = (char *)*a1;
    v15 = -858993459 * ((v16 - *a2) >> 2);
    v5 = v15;
    if ( v15 <= -858993459 * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 2) )
    {
      if ( -858993459 * (((_BYTE *)a1[1] - v4) >> 2) < v15 )
      {
        for ( i = -858993459 * ((4 * (((_BYTE *)a1[1] - v4) >> 2)) >> 2); i > 0; --i )
        {
          j_memcpy(v4, v14, 0x14u);
          v4 += 20;
          v14 += 20;
        }
        v9 = (char *)a1[1];
        v10 = *a2;
        v11 = a2[1];
        for ( j = &v10[4 * ((v9 - (_BYTE *)*a1) >> 2)]; j != v11; j += 20 )
        {
          if ( v9 != nullptr )
            j_memcpy(v9, j, 0x14u);
          v9 += 20;
        }
      }
      else
      {
        while ( v5 > 0 )
        {
          j_memcpy(v4, v14, 0x14u);
          v4 += 20;
          --v5;
          v14 += 20;
        }
      }
    }
    else
    {
      if ( v15 != 0 )
      {
        if ( v15 > 0xCCCCCCC )
          sub_3BCEB4(a1);
        v6 = operator new(4 * ((v16 - *a2) >> 2));
      }
      else
      {
        v6 = -858993459 * ((v16 - *a2) >> 2);
      }
      v7 = (char *)v6;
      while ( v14 != v16 )
      {
        if ( v7 != nullptr )
          j_memcpy(v7, v14, 0x14u);
        v7 += 20;
        v14 += 20;
      }
      if ( *a1 != nullptr )
        operator delete(*a1);
      *a1 = (void *)v6;
      a1[2] = (void *)(v6 + 20 * v15);
    }
    a1[1] = (char *)*a1 + 20 * v15;
  }
  return a1;
}


//======================================================================
// std::vector<BlockGeomVert,std::allocator<BlockGeomVert>>::push_back(BlockGeomVert const&)
// address: 0x0029A684   size: 0x26 (38 bytes)
//======================================================================
void __fastcall std::vector<BlockGeomVert>::push_back(int a1, void *a2)
{
  void *v3; // r3
  void *v4; // r0

  v3 = *(void **)(a1 + 8);
  v4 = *(void **)(a1 + 4);
  if ( v4 == v3 )
  {
    std::vector<BlockGeomVert>::_M_emplace_back_aux<BlockGeomVert const&>((void **)a1, a2);
  }
  else
  {
    if ( v4 != nullptr )
      j_memcpy(v4, a2, 0x14u);
    *(_DWORD *)(a1 + 4) += 20;
  }
}


//======================================================================
// std::vector<BlockGeomMesh *,std::allocator<BlockGeomMesh *>>::_M_default_append(unsigned int)
// address: 0x0029A6AC   size: 0xAA (170 bytes)
//======================================================================
__int64 __fastcall std::vector<BlockGeomMesh *>::_M_default_append(__int64 a1)
{
  __int64 v1; // r4
  _DWORD *v2; // r3
  int i; // r2
  unsigned int v4; // r3
  unsigned int v5; // r6
  unsigned int v6; // r6
  int v7; // r3
  int v8; // r7
  _DWORD *v9; // r7
  _DWORD *v10; // r2
  int v11; // r3
  __int64 v13; // [sp+0h] [bp-Ch]

  v13 = a1;
  v1 = a1;
  if ( HIDWORD(a1) == 0 )
    return v13;
  v2 = *(_DWORD **)(a1 + 4);
  if ( (unsigned int)((*(_DWORD *)(a1 + 8) - (int)v2) >> 2) >= HIDWORD(a1) )
  {
    for ( i = HIDWORD(a1); i != 0; --i )
      *v2++ = 0;
    *(_DWORD *)(a1 + 4) += 4 * HIDWORD(a1);
    return v13;
  }
  v4 = ((int)v2 - *(_DWORD *)a1) >> 2;
  if ( 0x3FFFFFFF - v4 < HIDWORD(a1) )
    sub_3BD058("vector::_M_default_append");
  v5 = v4;
  if ( v4 < HIDWORD(a1) )
    v5 = HIDWORD(a1);
  v6 = v5 + v4;
  if ( v6 < v4 || v6 > 0x3FFFFFFF )
  {
    v6 = 0x3FFFFFFF;
LABEL_15:
    HIDWORD(v13) = operator new(4 * v6);
    goto LABEL_16;
  }
  HIDWORD(v13) = 0;
  if ( v6 != 0 )
    goto LABEL_15;
LABEL_16:
  v7 = (*(_DWORD *)(v1 + 4) - *(_DWORD *)v1) >> 2;
  v8 = 4 * v7;
  if ( v7 != 0 )
    j_memmove((void *)HIDWORD(v13), *(const void **)v1, 4 * v7);
  v9 = (_DWORD *)(HIDWORD(v13) + v8);
  v10 = v9;
  v11 = HIDWORD(v1);
  do
  {
    --v11;
    *v10++ = 0;
  }
  while ( v11 != 0 );
  HIDWORD(v1) = &v9[HIDWORD(v1)];
  if ( *(_DWORD *)v1 != 0 )
    operator delete(*(void **)v1);
  *(_DWORD *)(v1 + 4) = HIDWORD(v1);
  *(_DWORD *)v1 = HIDWORD(v13);
  *(_DWORD *)(v1 + 8) = HIDWORD(v13) + 4 * v6;
  return v13;
}


//======================================================================
// std::vector<BlockGeomMesh *,std::allocator<BlockGeomMesh *>>::resize(unsigned int)
// address: 0x0029A760   size: 0x22 (34 bytes)
//======================================================================
int __fastcall std::vector<BlockGeomMesh *>::resize(__int64 a1)
{
  unsigned int v1; // r3

  v1 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  if ( HIDWORD(a1) <= v1 )
  {
    if ( HIDWORD(a1) < v1 )
      *(_DWORD *)(a1 + 4) = *(_DWORD *)a1 + 4 * HIDWORD(a1);
  }
  else
  {
    HIDWORD(a1) -= v1;
    LODWORD(a1) = std::vector<BlockGeomMesh *>::_M_default_append(a1);
  }
  return a1;
}


//======================================================================
// std::vector<unsigned short,std::allocator<unsigned short>>::_M_check_len(unsigned int,char const*)const
// address: 0x0029A784   size: 0x2C (44 bytes)
//======================================================================
unsigned int __fastcall std::vector<unsigned short>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = (a1[1] - *a1) >> 1;
  if ( 0x7FFFFFFF - v3 < a2 )
    sub_3BD058(a3);
  v4 = (a1[1] - *a1) >> 1;
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0x7FFFFFFF )
    return 0x7FFFFFFF;
  return result;
}


//======================================================================
// std::vector<unsigned short,std::allocator<unsigned short>>::_M_default_append(unsigned int)
// address: 0x0029A7D4   size: 0x82 (130 bytes)
//======================================================================
void __fastcall std::vector<unsigned short>::_M_default_append(void **a1, unsigned int a2)
{
  _WORD *v4; // r3
  unsigned int i; // r2
  signed int v6; // r0
  signed int v7; // r6
  char *v8; // r7
  int v9; // r0
  unsigned int v10; // r3
  _WORD *v11; // r2
  unsigned int v12; // r5

  if ( a2 != 0 )
  {
    v4 = a1[1];
    if ( ((_BYTE *)a1[2] - (_BYTE *)v4) >> 1 < a2 )
    {
      v6 = std::vector<unsigned short>::_M_check_len(a1, a2, (int)"vector::_M_default_append");
      v7 = v6;
      if ( v6 != 0 )
      {
        if ( v6 < 0 )
          sub_3BCEB4(v6);
        v8 = (char *)operator new(2 * v6);
      }
      else
      {
        v8 = nullptr;
      }
      v9 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<unsigned short>(*a1, (int)a1[1], v8);
      v10 = a2;
      v11 = (_WORD *)v9;
      do
      {
        --v10;
        *v11++ = 0;
      }
      while ( v10 != 0 );
      v12 = v9 + 2 * a2;
      if ( *a1 != nullptr )
        operator delete(*a1);
      *a1 = v8;
      a1[1] = (void *)v12;
      a1[2] = &v8[2 * v7];
    }
    else
    {
      for ( i = a2; i != 0; --i )
        *v4++ = 0;
      a1[1] = (char *)a1[1] + 2 * a2;
    }
  }
}


//======================================================================
// std::vector<unsigned short,std::allocator<unsigned short>>::resize(unsigned int)
// address: 0x0029A85C   size: 0x22 (34 bytes)
//======================================================================
void __fastcall std::vector<unsigned short>::resize(int a1, unsigned int a2)
{
  unsigned int v2; // r3

  v2 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 1;
  if ( a2 <= v2 )
  {
    if ( a2 < v2 )
      *(_DWORD *)(a1 + 4) = *(_DWORD *)a1 + 2 * a2;
  }
  else
  {
    std::vector<unsigned short>::_M_default_append((void **)a1, a2 - v2);
  }
}


//======================================================================
// std::vector<ClientActor *,std::allocator<ClientActor *>>::_M_check_len(unsigned int,char const*)const
// address: 0x0029BEE0   size: 0x2C (44 bytes)
//======================================================================
unsigned int __fastcall std::vector<ClientActor *>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = (a1[1] - *a1) >> 2;
  if ( 0x3FFFFFFF - v3 < a2 )
    sub_3BD058(a3);
  v4 = (a1[1] - *a1) >> 2;
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0x3FFFFFFF )
    return 0x3FFFFFFF;
  return result;
}


//======================================================================
// std::vector<ClientActor *,std::allocator<ClientActor *>>::_M_default_append(unsigned int)
// address: 0x0029BF30   size: 0x80 (128 bytes)
//======================================================================
void __fastcall std::vector<ClientActor *>::_M_default_append(void **a1, unsigned int a2)
{
  _DWORD *v4; // r2
  unsigned int i; // r3
  unsigned int v6; // r0
  unsigned int v7; // r6
  char *v8; // r7
  int v9; // r0
  unsigned int v10; // r3
  _DWORD *v11; // r2
  unsigned int v12; // r5

  if ( a2 != 0 )
  {
    v4 = a1[1];
    if ( ((_BYTE *)a1[2] - (_BYTE *)v4) >> 2 < a2 )
    {
      v6 = std::vector<ClientActor *>::_M_check_len(a1, a2, (int)"vector::_M_default_append");
      v7 = v6;
      if ( v6 != 0 )
      {
        if ( v6 > 0x3FFFFFFF )
          sub_3BCEB4(v6);
        v8 = (char *)operator new(4 * v6);
      }
      else
      {
        v8 = nullptr;
      }
      v9 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<ClientActor *>(*a1, (int)a1[1], v8);
      v10 = a2;
      v11 = (_DWORD *)v9;
      do
      {
        --v10;
        *v11++ = 0;
      }
      while ( v10 != 0 );
      v12 = v9 + 4 * a2;
      if ( *a1 != nullptr )
        operator delete(*a1);
      *a1 = v8;
      a1[1] = (void *)v12;
      a1[2] = &v8[4 * v7];
    }
    else
    {
      for ( i = a2; i != 0; --i )
        *v4++ = 0;
      a1[1] = (char *)a1[1] + 4 * a2;
    }
  }
}


//======================================================================
// std::vector<BiomeGenBase *,std::allocator<BiomeGenBase *>>::_M_check_len(unsigned int,char const*)const
// address: 0x002A1DC8   size: 0x2C (44 bytes)
//======================================================================
unsigned int __fastcall std::vector<BiomeGenBase *>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = (a1[1] - *a1) >> 2;
  if ( 0x3FFFFFFF - v3 < a2 )
    sub_3BD058(a3);
  v4 = (a1[1] - *a1) >> 2;
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0x3FFFFFFF )
    return 0x3FFFFFFF;
  return result;
}


//======================================================================
// std::vector<BiomeGenBase *,std::allocator<BiomeGenBase *>>::_M_default_append(unsigned int)
// address: 0x002A1E18   size: 0x80 (128 bytes)
//======================================================================
void __fastcall std::vector<BiomeGenBase *>::_M_default_append(void **a1, unsigned int a2)
{
  _DWORD *v4; // r2
  unsigned int i; // r3
  unsigned int v6; // r0
  unsigned int v7; // r6
  char *v8; // r7
  int v9; // r0
  unsigned int v10; // r3
  _DWORD *v11; // r2
  unsigned int v12; // r5

  if ( a2 != 0 )
  {
    v4 = a1[1];
    if ( ((_BYTE *)a1[2] - (_BYTE *)v4) >> 2 < a2 )
    {
      v6 = std::vector<BiomeGenBase *>::_M_check_len(a1, a2, (int)"vector::_M_default_append");
      v7 = v6;
      if ( v6 != 0 )
      {
        if ( v6 > 0x3FFFFFFF )
          sub_3BCEB4(v6);
        v8 = (char *)operator new(4 * v6);
      }
      else
      {
        v8 = nullptr;
      }
      v9 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<BiomeGenBase *>(*a1, (int)a1[1], v8);
      v10 = a2;
      v11 = (_DWORD *)v9;
      do
      {
        --v10;
        *v11++ = 0;
      }
      while ( v10 != 0 );
      v12 = v9 + 4 * a2;
      if ( *a1 != nullptr )
        operator delete(*a1);
      *a1 = v8;
      a1[1] = (void *)v12;
      a1[2] = &v8[4 * v7];
    }
    else
    {
      for ( i = a2; i != 0; --i )
        *v4++ = 0;
      a1[1] = (char *)a1[1] + 4 * a2;
    }
  }
}


//======================================================================
// std::vector<BiomeGenBase *,std::allocator<BiomeGenBase *>>::resize(unsigned int)
// address: 0x002A1EA0   size: 0x22 (34 bytes)
//======================================================================
void __fastcall std::vector<BiomeGenBase *>::resize(int a1, unsigned int a2)
{
  unsigned int v2; // r3

  v2 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  if ( a2 <= v2 )
  {
    if ( a2 < v2 )
      *(_DWORD *)(a1 + 4) = *(_DWORD *)a1 + 4 * a2;
  }
  else
  {
    std::vector<BiomeGenBase *>::_M_default_append((void **)a1, a2 - v2);
  }
}


//======================================================================
// std::vector<BiomeGenBase *,std::allocator<BiomeGenBase *>>::_M_fill_insert(__gnu_cxx::__normal_iterator<BiomeGenBase **,std::vector<BiomeGenBase *,std::allocator<BiomeGenBase *>>>,unsigned int,BiomeGenBase * const&)
// address: 0x002A1FB0   size: 0x10C (268 bytes)
//======================================================================
void __fastcall std::vector<BiomeGenBase *>::_M_fill_insert(void **a1, char *a2, unsigned int a3, void **a4)
{
  char *v5; // r5
  char *v7; // r7
  int v8; // r6
  char *v9; // r6
  char *v10; // r2
  unsigned int v11; // r0
  unsigned int v12; // r7
  char *v13; // r2
  void *v14; // r1
  unsigned int v15; // r3
  int v16; // r0
  int v17; // r5
  unsigned int v19; // [sp+4h] [bp-10h]
  void *v20; // [sp+8h] [bp-Ch]
  char *v21; // [sp+8h] [bp-Ch]
  int v22; // [sp+Ch] [bp-8h]

  v5 = a2;
  if ( a3 != 0 )
  {
    v7 = (char *)a1[1];
    if ( ((_BYTE *)a1[2] - v7) >> 2 < a3 )
    {
      v11 = std::vector<BiomeGenBase *>::_M_check_len(a1, a3, (int)"vector::_M_fill_insert");
      v12 = v11;
      v22 = (v5 - (_BYTE *)*a1) >> 2;
      if ( v11 != 0 )
      {
        if ( v11 > 0x3FFFFFFF )
          sub_3BCEB4(v11);
        v21 = (char *)operator new(4 * v11);
      }
      else
      {
        v21 = nullptr;
      }
      v13 = &v21[4 * v22];
      v14 = *a4;
      v15 = a3;
      do
      {
        --v15;
        *(_DWORD *)v13 = v14;
        v13 += 4;
      }
      while ( v15 != 0 );
      v16 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<BiomeGenBase *>(*a1, (int)v5, v21);
      v17 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<BiomeGenBase *>(
              v5,
              (int)a1[1],
              (void *)(v16 + 4 * a3));
      if ( *a1 != nullptr )
        operator delete(*a1);
      a1[1] = (void *)v17;
      *a1 = v21;
      a1[2] = &v21[4 * v12];
    }
    else
    {
      v19 = (v7 - a2) >> 2;
      v20 = *a4;
      if ( v19 <= a3 )
      {
        memset32(v7, (int)v20, a3 - v19);
        v10 = (char *)a1[1] + 4 * (a3 - v19);
        a1[1] = v10;
        std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<BiomeGenBase *>(a2, (int)v7, v10);
        a1[1] = (char *)a1[1] + 4 * v19;
        while ( v5 != v7 )
        {
          *(_DWORD *)v5 = v20;
          v5 += 4;
        }
      }
      else
      {
        v8 = 4 * a3;
        std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<BiomeGenBase *>(&v7[-4 * a3], (int)v7, v7);
        a1[1] = (char *)a1[1] + v8;
        if ( (&v7[-v8] - v5) >> 2 != 0 )
          j_memmove(&v7[-4 * ((&v7[-v8] - v5) >> 2)], v5, 4 * ((&v7[-v8] - v5) >> 2));
        v9 = &v5[v8];
        while ( v5 != v9 )
        {
          *(_DWORD *)v5 = v20;
          v5 += 4;
        }
      }
    }
  }
}


//======================================================================
// std::vector<BiomeGenBase *,std::allocator<BiomeGenBase *>>::resize(unsigned int,BiomeGenBase * const&)
// address: 0x002A20C4   size: 0x26 (38 bytes)
//======================================================================
void __fastcall std::vector<BiomeGenBase *>::resize(int a1, unsigned int a2, void **a3)
{
  unsigned int v3; // r4

  v3 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  if ( a2 <= v3 )
  {
    if ( a2 < v3 )
      *(_DWORD *)(a1 + 4) = *(_DWORD *)a1 + 4 * a2;
  }
  else
  {
    std::vector<BiomeGenBase *>::_M_fill_insert((void **)a1, *(char **)(a1 + 4), a2 - v3, a3);
  }
}


//======================================================================
// std::vector<BiomeDef *,std::allocator<BiomeDef *>>::_M_fill_insert(__gnu_cxx::__normal_iterator<BiomeDef **,std::vector<BiomeDef *,std::allocator<BiomeDef *>>>,unsigned int,BiomeDef * const&)
// address: 0x002AC254   size: 0x120 (288 bytes)
//======================================================================
void __fastcall std::vector<BiomeDef *>::_M_fill_insert(int a1, _DWORD *a2, unsigned int a3, void **a4)
{
  _DWORD *v5; // r5
  _BYTE *v7; // r7
  int v8; // r6
  _DWORD *v9; // r6
  void *v10; // r2
  unsigned int v11; // r3
  unsigned int v12; // r7
  unsigned int v13; // r7
  char *v14; // r2
  void *v15; // r1
  unsigned int v16; // r3
  int v17; // r0
  int v18; // r5
  unsigned int v20; // [sp+4h] [bp-10h]
  void *v21; // [sp+8h] [bp-Ch]
  char *v22; // [sp+8h] [bp-Ch]
  int v23; // [sp+Ch] [bp-8h]

  v5 = a2;
  if ( a3 != 0 )
  {
    v7 = *(_BYTE **)(a1 + 4);
    if ( (*(_DWORD *)(a1 + 8) - (int)v7) >> 2 < a3 )
    {
      v11 = (int)&v7[-*(_DWORD *)a1] >> 2;
      if ( 0x3FFFFFFF - v11 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v12 = a3;
      if ( a3 < v11 )
        v12 = v11;
      v13 = v12 + v11;
      if ( v13 < v11 || v13 > 0x3FFFFFFF )
        v13 = 0x3FFFFFFF;
      v23 = ((int)a2 - *(_DWORD *)a1) >> 2;
      if ( v13 != 0 )
        v22 = (char *)operator new(4 * v13);
      else
        v22 = nullptr;
      v14 = &v22[4 * v23];
      v15 = *a4;
      v16 = a3;
      do
      {
        --v16;
        *(_DWORD *)v14 = v15;
        v14 += 4;
      }
      while ( v16 != 0 );
      v17 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<BiomeDef *>(
              *(void **)a1,
              (int)v5,
              v22);
      v18 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<BiomeDef *>(
              v5,
              *(_DWORD *)(a1 + 4),
              (void *)(v17 + 4 * a3));
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)(a1 + 4) = v18;
      *(_DWORD *)a1 = v22;
      *(_DWORD *)(a1 + 8) = &v22[4 * v13];
    }
    else
    {
      v20 = (v7 - (_BYTE *)a2) >> 2;
      v21 = *a4;
      if ( v20 <= a3 )
      {
        memset32(v7, (int)v21, a3 - v20);
        v10 = (void *)(*(_DWORD *)(a1 + 4) + 4 * (a3 - v20));
        *(_DWORD *)(a1 + 4) = v10;
        std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<BiomeDef *>(a2, (int)v7, v10);
        *(_DWORD *)(a1 + 4) += 4 * v20;
        while ( v5 != (_DWORD *)v7 )
          *v5++ = v21;
      }
      else
      {
        v8 = 4 * a3;
        std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<BiomeDef *>(&v7[-4 * a3], (int)v7, v7);
        *(_DWORD *)(a1 + 4) += v8;
        if ( (&v7[-v8] - (_BYTE *)v5) >> 2 != 0 )
          j_memmove(&v7[-4 * ((&v7[-v8] - (_BYTE *)v5) >> 2)], v5, 4 * ((&v7[-v8] - (_BYTE *)v5) >> 2));
        v9 = &v5[v8 / 4u];
        while ( v5 != v9 )
          *v5++ = v21;
      }
    }
  }
}


//======================================================================
// std::vector<BlockDef *,std::allocator<BlockDef *>>::_M_fill_insert(__gnu_cxx::__normal_iterator<BlockDef **,std::vector<BlockDef *,std::allocator<BlockDef *>>>,unsigned int,BlockDef * const&)
// address: 0x002AC39C   size: 0x120 (288 bytes)
//======================================================================
void __fastcall std::vector<BlockDef *>::_M_fill_insert(int a1, _DWORD *a2, unsigned int a3, void **a4)
{
  _DWORD *v5; // r5
  _BYTE *v7; // r7
  int v8; // r6
  _DWORD *v9; // r6
  void *v10; // r2
  unsigned int v11; // r3
  unsigned int v12; // r7
  unsigned int v13; // r7
  char *v14; // r2
  void *v15; // r1
  unsigned int v16; // r3
  int v17; // r0
  int v18; // r5
  unsigned int v20; // [sp+4h] [bp-10h]
  void *v21; // [sp+8h] [bp-Ch]
  char *v22; // [sp+8h] [bp-Ch]
  int v23; // [sp+Ch] [bp-8h]

  v5 = a2;
  if ( a3 != 0 )
  {
    v7 = *(_BYTE **)(a1 + 4);
    if ( (*(_DWORD *)(a1 + 8) - (int)v7) >> 2 < a3 )
    {
      v11 = (int)&v7[-*(_DWORD *)a1] >> 2;
      if ( 0x3FFFFFFF - v11 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v12 = a3;
      if ( a3 < v11 )
        v12 = v11;
      v13 = v12 + v11;
      if ( v13 < v11 || v13 > 0x3FFFFFFF )
        v13 = 0x3FFFFFFF;
      v23 = ((int)a2 - *(_DWORD *)a1) >> 2;
      if ( v13 != 0 )
        v22 = (char *)operator new(4 * v13);
      else
        v22 = nullptr;
      v14 = &v22[4 * v23];
      v15 = *a4;
      v16 = a3;
      do
      {
        --v16;
        *(_DWORD *)v14 = v15;
        v14 += 4;
      }
      while ( v16 != 0 );
      v17 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<BlockDef *>(
              *(void **)a1,
              (int)v5,
              v22);
      v18 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<BlockDef *>(
              v5,
              *(_DWORD *)(a1 + 4),
              (void *)(v17 + 4 * a3));
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)(a1 + 4) = v18;
      *(_DWORD *)a1 = v22;
      *(_DWORD *)(a1 + 8) = &v22[4 * v13];
    }
    else
    {
      v20 = (v7 - (_BYTE *)a2) >> 2;
      v21 = *a4;
      if ( v20 <= a3 )
      {
        memset32(v7, (int)v21, a3 - v20);
        v10 = (void *)(*(_DWORD *)(a1 + 4) + 4 * (a3 - v20));
        *(_DWORD *)(a1 + 4) = v10;
        std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<BlockDef *>(a2, (int)v7, v10);
        *(_DWORD *)(a1 + 4) += 4 * v20;
        while ( v5 != (_DWORD *)v7 )
          *v5++ = v21;
      }
      else
      {
        v8 = 4 * a3;
        std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<BlockDef *>(&v7[-4 * a3], (int)v7, v7);
        *(_DWORD *)(a1 + 4) += v8;
        if ( (&v7[-v8] - (_BYTE *)v5) >> 2 != 0 )
          j_memmove(&v7[-4 * ((&v7[-v8] - (_BYTE *)v5) >> 2)], v5, 4 * ((&v7[-v8] - (_BYTE *)v5) >> 2));
        v9 = &v5[v8 / 4u];
        while ( v5 != v9 )
          *v5++ = v21;
      }
    }
  }
}


//======================================================================
// std::vector<ItemDef *,std::allocator<ItemDef *>>::_M_fill_insert(__gnu_cxx::__normal_iterator<ItemDef **,std::vector<ItemDef *,std::allocator<ItemDef *>>>,unsigned int,ItemDef * const&)
// address: 0x002AC4E4   size: 0x120 (288 bytes)
//======================================================================
void __fastcall std::vector<ItemDef *>::_M_fill_insert(int a1, _DWORD *a2, unsigned int a3, void **a4)
{
  _DWORD *v5; // r5
  _BYTE *v7; // r7
  int v8; // r6
  _DWORD *v9; // r6
  void *v10; // r2
  unsigned int v11; // r3
  unsigned int v12; // r7
  unsigned int v13; // r7
  char *v14; // r2
  void *v15; // r1
  unsigned int v16; // r3
  int v17; // r0
  int v18; // r5
  unsigned int v20; // [sp+4h] [bp-10h]
  void *v21; // [sp+8h] [bp-Ch]
  char *v22; // [sp+8h] [bp-Ch]
  int v23; // [sp+Ch] [bp-8h]

  v5 = a2;
  if ( a3 != 0 )
  {
    v7 = *(_BYTE **)(a1 + 4);
    if ( (*(_DWORD *)(a1 + 8) - (int)v7) >> 2 < a3 )
    {
      v11 = (int)&v7[-*(_DWORD *)a1] >> 2;
      if ( 0x3FFFFFFF - v11 < a3 )
        sub_3BD058("vector::_M_fill_insert");
      v12 = a3;
      if ( a3 < v11 )
        v12 = v11;
      v13 = v12 + v11;
      if ( v13 < v11 || v13 > 0x3FFFFFFF )
        v13 = 0x3FFFFFFF;
      v23 = ((int)a2 - *(_DWORD *)a1) >> 2;
      if ( v13 != 0 )
        v22 = (char *)operator new(4 * v13);
      else
        v22 = nullptr;
      v14 = &v22[4 * v23];
      v15 = *a4;
      v16 = a3;
      do
      {
        --v16;
        *(_DWORD *)v14 = v15;
        v14 += 4;
      }
      while ( v16 != 0 );
      v17 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<ItemDef *>(*(void **)a1, (int)v5, v22);
      v18 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<ItemDef *>(
              v5,
              *(_DWORD *)(a1 + 4),
              (void *)(v17 + 4 * a3));
      if ( *(_DWORD *)a1 != 0 )
        operator delete(*(void **)a1);
      *(_DWORD *)(a1 + 4) = v18;
      *(_DWORD *)a1 = v22;
      *(_DWORD *)(a1 + 8) = &v22[4 * v13];
    }
    else
    {
      v20 = (v7 - (_BYTE *)a2) >> 2;
      v21 = *a4;
      if ( v20 <= a3 )
      {
        memset32(v7, (int)v21, a3 - v20);
        v10 = (void *)(*(_DWORD *)(a1 + 4) + 4 * (a3 - v20));
        *(_DWORD *)(a1 + 4) = v10;
        std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<ItemDef *>(a2, (int)v7, v10);
        *(_DWORD *)(a1 + 4) += 4 * v20;
        while ( v5 != (_DWORD *)v7 )
          *v5++ = v21;
      }
      else
      {
        v8 = 4 * a3;
        std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<ItemDef *>(&v7[-4 * a3], (int)v7, v7);
        *(_DWORD *)(a1 + 4) += v8;
        if ( (&v7[-v8] - (_BYTE *)v5) >> 2 != 0 )
          j_memmove(&v7[-4 * ((&v7[-v8] - (_BYTE *)v5) >> 2)], v5, 4 * ((&v7[-v8] - (_BYTE *)v5) >> 2));
        v9 = &v5[v8 / 4u];
        while ( v5 != v9 )
          *v5++ = v21;
      }
    }
  }
}


//======================================================================
// std::vector<BackPackGrid,std::allocator<BackPackGrid>>::_M_default_append(unsigned int)
// address: 0x002B59C0   size: 0xBA (186 bytes)
//======================================================================
__int64 __fastcall std::vector<BackPackGrid>::_M_default_append(__int64 a1)
{
  __int64 v1; // r4
  int v2; // r6
  unsigned int v3; // r6
  char *v4; // r7
  int v5; // r3
  __int64 v7; // [sp+0h] [bp-Ch]
  int v8; // [sp+4h] [bp-8h]

  v7 = a1;
  v1 = a1;
  if ( HIDWORD(a1) == 0 )
    return v7;
  LODWORD(a1) = *(_DWORD *)(a1 + 4);
  if ( (unsigned int)(-991146299 * ((*(_DWORD *)(v1 + 8) - (int)a1) >> 2)) >= HIDWORD(a1) )
  {
    std::__uninitialized_default_n_1<true>::__uninit_default_n<BackPackGrid *,unsigned int>((char *)a1, SHIDWORD(a1));
    *(_DWORD *)(v1 + 4) += 52 * HIDWORD(v1);
    return v7;
  }
  LODWORD(a1) = -991146299 * (((int)a1 - *(_DWORD *)v1) >> 2);
  if ( (unsigned int)(82595524 - a1) < HIDWORD(a1) )
    sub_3BD058("vector::_M_default_append");
  v2 = a1;
  if ( (unsigned int)a1 < HIDWORD(a1) )
    v2 = HIDWORD(a1);
  v3 = v2 + a1;
  if ( v3 < (unsigned int)a1 || v3 > 0x4EC4EC4 )
  {
    v3 = 82595524;
LABEL_13:
    v4 = (char *)operator new(52 * v3);
    goto LABEL_14;
  }
  v4 = nullptr;
  if ( v3 != 0 )
    goto LABEL_13;
LABEL_14:
  v5 = (*(_DWORD *)(v1 + 4) - *(_DWORD *)v1) >> 2;
  v8 = -991146299 * v5;
  if ( -991146299 * v5 != 0 )
    j_memmove(v4, *(const void **)v1, 4 * v5);
  HIDWORD(v7) = &v4[52 * v8];
  std::__uninitialized_default_n_1<true>::__uninit_default_n<BackPackGrid *,unsigned int>(
    (char *)HIDWORD(v7),
    SHIDWORD(v1));
  HIDWORD(v1) = HIDWORD(v7) + 52 * HIDWORD(v1);
  if ( *(_DWORD *)v1 != 0 )
    operator delete(*(void **)v1);
  *(_DWORD *)v1 = v4;
  *(_DWORD *)(v1 + 4) = HIDWORD(v1);
  *(_DWORD *)(v1 + 8) = &v4[52 * v3];
  return v7;
}


//======================================================================
// std::vector<char,std::allocator<char>>::vector(unsigned int,std::allocator<char> const&)
// address: 0x002B5E4C   size: 0x30 (48 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIcSaIcEEC1EjRKS0_'
_DWORD *__fastcall std::vector<char>::vector(_DWORD *a1, size_t a2)
{
  char *v4; // r0
  char *v5; // r5

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  v4 = (char *)a2;
  if ( a2 != 0 )
    v4 = (char *)operator new(a2);
  v5 = &v4[a2];
  a1[2] = v5;
  *a1 = v4;
  a1[1] = v4;
  j_memset(v4, 0, v5 - v4);
  a1[1] = a1[2];
  return a1;
}


//======================================================================
// std::vector<unsigned int,std::allocator<unsigned int>>::push_back(unsigned int const&)
// address: 0x002B609C   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::vector<unsigned int>::push_back(int a1, _DWORD *a2)
{
  _DWORD *v2; // r3

  v2 = *(_DWORD **)(a1 + 4);
  if ( v2 == *(_DWORD **)(a1 + 8) )
  {
    std::vector<unsigned int>::_M_emplace_back_aux<unsigned int const&>(a1, a2);
  }
  else
  {
    if ( v2 != nullptr )
      *v2 = *a2;
    *(_DWORD *)(a1 + 4) += 4;
  }
}


//======================================================================
// std::vector<std::vector<tinyobj::vertex_index,std::allocator<tinyobj::vertex_index>>,std::allocator<std::vector<tinyobj::vertex_index,std::allocator<tinyobj::vertex_index>>>>::clear(void)
// address: 0x002B6A26   size: 0x12 (18 bytes)
//======================================================================
void __fastcall std::vector<std::vector<tinyobj::vertex_index>>::clear(void ***a1)
{
  void **v1; // r5

  v1 = *a1;
  std::_Destroy_aux<false>::__destroy<std::vector<tinyobj::vertex_index> *>(*a1, a1[1]);
  a1[1] = v1;
}


//======================================================================
// std::vector<std::vector<tinyobj::vertex_index,std::allocator<tinyobj::vertex_index>>,std::allocator<std::vector<tinyobj::vertex_index,std::allocator<tinyobj::vertex_index>>>>::~vector()
// address: 0x002B6A38   size: 0x1A (26 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIS_IN7tinyobj12vertex_indexESaIS1_EESaIS3_EED1Ev'
void ***__fastcall std::vector<std::vector<tinyobj::vertex_index>>::~vector(void ***a1)
{
  std::_Destroy_aux<false>::__destroy<std::vector<tinyobj::vertex_index> *>(*a1, a1[1]);
  if ( *a1 != nullptr )
    operator delete(*a1);
  return a1;
}


//======================================================================
// std::vector<float,std::allocator<float>>::vector(std::vector<float,std::allocator<float>> const&)
// address: 0x002B6FF4   size: 0x3C (60 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIfSaIfEEC1ERKS1_'
_DWORD *__fastcall std::vector<float>::vector(_DWORD *a1, int a2)
{
  unsigned int v4; // r6
  char *v5; // r2

  v4 = (*(_DWORD *)(a2 + 4) - *(_DWORD *)a2) >> 2;
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  if ( v4 != 0 )
    v5 = (char *)sub_2B5E34(v4);
  else
    v5 = nullptr;
  a1[2] = &v5[4 * v4];
  *a1 = v5;
  a1[1] = v5;
  a1[1] = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<float>(
            *(void **)a2,
            *(_DWORD *)(a2 + 4),
            v5);
  return a1;
}


//======================================================================
// std::vector<tinyobj::material_t,std::allocator<tinyobj::material_t>>::push_back(tinyobj::material_t const&)
// address: 0x002B74DC   size: 0x24 (36 bytes)
//======================================================================
tinyobj::material_t *__fastcall std::vector<tinyobj::material_t>::push_back(int a1, const tinyobj::material_t *a2)
{
  tinyobj::material_t *v3; // r3
  tinyobj::material_t *result; // r0

  v3 = *(tinyobj::material_t **)(a1 + 8);
  result = *(tinyobj::material_t **)(a1 + 4);
  if ( result == v3 )
    return (tinyobj::material_t *)std::vector<tinyobj::material_t>::_M_emplace_back_aux<tinyobj::material_t const&>(
                                    a1,
                                    a2);
  if ( result != nullptr )
    result = tinyobj::material_t::material_t(result, a2);
  *(_DWORD *)(a1 + 4) += 120;
  return result;
}


//======================================================================
// std::vector<tinyobj::shape_t,std::allocator<tinyobj::shape_t>>::push_back(tinyobj::shape_t const&)
// address: 0x002B7C74   size: 0x22 (34 bytes)
//======================================================================
_DWORD *__fastcall std::vector<tinyobj::shape_t>::push_back(int a1, int a2)
{
  int v3; // r1
  _DWORD *result; // r0

  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 == *(_DWORD *)(a1 + 8) )
    return (_DWORD *)std::vector<tinyobj::shape_t>::_M_emplace_back_aux<tinyobj::shape_t const&>(a1, a2);
  result = __gnu_cxx::new_allocator<tinyobj::shape_t>::construct<tinyobj::shape_t<tinyobj::shape_t const&>>(a1, v3, a2);
  *(_DWORD *)(a1 + 4) += 64;
  return result;
}


//======================================================================
// std::vector<NoiseGeneratorPerlin *,std::allocator<NoiseGeneratorPerlin *>>::_M_default_append(unsigned int)
// address: 0x002B8CDC   size: 0xAA (170 bytes)
//======================================================================
__int64 __fastcall std::vector<NoiseGeneratorPerlin *>::_M_default_append(__int64 a1)
{
  __int64 v1; // r4
  _DWORD *v2; // r3
  int i; // r2
  unsigned int v4; // r3
  unsigned int v5; // r6
  unsigned int v6; // r6
  int v7; // r3
  int v8; // r7
  _DWORD *v9; // r7
  _DWORD *v10; // r2
  int v11; // r3
  __int64 v13; // [sp+0h] [bp-Ch]

  v13 = a1;
  v1 = a1;
  if ( HIDWORD(a1) == 0 )
    return v13;
  v2 = *(_DWORD **)(a1 + 4);
  if ( (unsigned int)((*(_DWORD *)(a1 + 8) - (int)v2) >> 2) >= HIDWORD(a1) )
  {
    for ( i = HIDWORD(a1); i != 0; --i )
      *v2++ = 0;
    *(_DWORD *)(a1 + 4) += 4 * HIDWORD(a1);
    return v13;
  }
  v4 = ((int)v2 - *(_DWORD *)a1) >> 2;
  if ( 0x3FFFFFFF - v4 < HIDWORD(a1) )
    sub_3BD058("vector::_M_default_append");
  v5 = v4;
  if ( v4 < HIDWORD(a1) )
    v5 = HIDWORD(a1);
  v6 = v5 + v4;
  if ( v6 < v4 || v6 > 0x3FFFFFFF )
  {
    v6 = 0x3FFFFFFF;
LABEL_15:
    HIDWORD(v13) = operator new(4 * v6);
    goto LABEL_16;
  }
  HIDWORD(v13) = 0;
  if ( v6 != 0 )
    goto LABEL_15;
LABEL_16:
  v7 = (*(_DWORD *)(v1 + 4) - *(_DWORD *)v1) >> 2;
  v8 = 4 * v7;
  if ( v7 != 0 )
    j_memmove((void *)HIDWORD(v13), *(const void **)v1, 4 * v7);
  v9 = (_DWORD *)(HIDWORD(v13) + v8);
  v10 = v9;
  v11 = HIDWORD(v1);
  do
  {
    --v11;
    *v10++ = 0;
  }
  while ( v11 != 0 );
  HIDWORD(v1) = &v9[HIDWORD(v1)];
  if ( *(_DWORD *)v1 != 0 )
    operator delete(*(void **)v1);
  *(_DWORD *)(v1 + 4) = HIDWORD(v1);
  *(_DWORD *)v1 = HIDWORD(v13);
  *(_DWORD *)(v1 + 8) = HIDWORD(v13) + 4 * v6;
  return v13;
}


//======================================================================
// std::vector<double,std::allocator<double>>::_M_default_append(unsigned int)
// address: 0x002B8DF0   size: 0xAE (174 bytes)
//======================================================================
__int64 __fastcall std::vector<double>::_M_default_append(__int64 a1)
{
  __int64 v1; // r4
  _DWORD *v2; // r3
  int v3; // r2
  unsigned int v4; // r3
  unsigned int v5; // r6
  unsigned int v6; // r6
  int v7; // r3
  int v8; // r7
  int v9; // r3
  _DWORD *v10; // r7
  _DWORD *v11; // r2
  __int64 v13; // [sp+0h] [bp-Ch]

  v13 = a1;
  v1 = a1;
  if ( HIDWORD(a1) == 0 )
    return v13;
  v2 = *(_DWORD **)(a1 + 4);
  if ( (unsigned int)((*(_DWORD *)(a1 + 8) - (int)v2) >> 3) >= HIDWORD(a1) )
  {
    v3 = HIDWORD(a1);
    do
    {
      --v3;
      *v2 = 0;
      v2[1] = 0;
      v2 += 2;
    }
    while ( v3 != 0 );
    *(_DWORD *)(a1 + 4) += 8 * HIDWORD(a1);
    return v13;
  }
  v4 = ((int)v2 - *(_DWORD *)a1) >> 3;
  if ( 0x1FFFFFFF - v4 < HIDWORD(a1) )
    sub_3BD058("vector::_M_default_append");
  v5 = v4;
  if ( v4 < HIDWORD(a1) )
    v5 = HIDWORD(a1);
  v6 = v5 + v4;
  if ( v6 < v4 || v6 > 0x1FFFFFFF )
  {
    v6 = 0x1FFFFFFF;
LABEL_15:
    HIDWORD(v13) = operator new(8 * v6);
    goto LABEL_16;
  }
  HIDWORD(v13) = 0;
  if ( v6 != 0 )
    goto LABEL_15;
LABEL_16:
  v7 = (*(_DWORD *)(v1 + 4) - *(_DWORD *)v1) >> 3;
  v8 = 8 * v7;
  if ( v7 != 0 )
    j_memmove((void *)HIDWORD(v13), *(const void **)v1, 8 * v7);
  v9 = HIDWORD(v1);
  v10 = (_DWORD *)(HIDWORD(v13) + v8);
  v11 = v10;
  do
  {
    --v9;
    *v11 = 0;
    v11[1] = 0;
    v11 += 2;
  }
  while ( v9 != 0 );
  HIDWORD(v1) = &v10[2 * HIDWORD(v1)];
  if ( *(_DWORD *)v1 != 0 )
    operator delete(*(void **)v1);
  *(_DWORD *)(v1 + 4) = HIDWORD(v1);
  *(_DWORD *)v1 = HIDWORD(v13);
  *(_DWORD *)(v1 + 8) = HIDWORD(v13) + 8 * v6;
  return v13;
}


//======================================================================
// std::vector<WorldDesc,std::allocator<WorldDesc>>::erase(__gnu_cxx::__normal_iterator<WorldDesc*,std::vector<WorldDesc,std::allocator<WorldDesc>>>)
// address: 0x002BA054   size: 0xE8 (232 bytes)
//======================================================================
int __fastcall std::vector<WorldDesc>::erase(int a1, int a2)
{
  int v2; // r6
  int v3; // r4
  int v6; // r6
  _DWORD *v7; // r3
  _DWORD *v8; // r3
  _DWORD *v9; // r3
  _DWORD *v10; // r3
  WorldDesc *v11; // r0

  v2 = *(_DWORD *)(a1 + 4);
  v3 = a2 + 184;
  if ( a2 + 184 != v2 )
  {
    v6 = -373475417 * ((v2 - v3) >> 3);
    while ( v6 > 0 )
    {
      v7 = (_DWORD *)(v3 - 184);
      *v7 = *(_DWORD *)v3;
      v7[1] = *(_DWORD *)(v3 + 4);
      sub_3BD870(v3 - 176, v3 + 8);
      v8 = (_DWORD *)(v3 - 172);
      *v8 = *(_DWORD *)(v3 + 12);
      v8[1] = *(_DWORD *)(v3 + 16);
      sub_3BD870(v3 - 164, v3 + 20);
      v9 = (_DWORD *)(v3 - 160);
      *v9 = *(_DWORD *)(v3 + 24);
      v9[1] = *(_DWORD *)(v3 + 28);
      v9[2] = *(_DWORD *)(v3 + 32);
      --v6;
      v9[3] = *(_DWORD *)(v3 + 36);
      v9[4] = *(_DWORD *)(v3 + 40);
      v9[5] = *(_DWORD *)(v3 + 44);
      v9[6] = *(_DWORD *)(v3 + 48);
      v9[7] = *(_DWORD *)(v3 + 52);
      v9[8] = *(_DWORD *)(v3 + 56);
      sub_3BD870(v3 - 124, v3 + 60);
      v10 = (_DWORD *)(v3 - 120);
      *v10 = *(_DWORD *)(v3 + 64);
      v10[1] = *(_DWORD *)(v3 + 68);
      v10[2] = *(_DWORD *)(v3 + 72);
      v10[3] = *(_DWORD *)(v3 + 76);
      v10[4] = *(_DWORD *)(v3 + 80);
      v10[5] = *(_DWORD *)(v3 + 84);
      sub_3BD870(v3 - 96, v3 + 88);
      *(_DWORD *)(v3 - 92) = *(_DWORD *)(v3 + 92);
      sub_3BD870(v3 - 88, v3 + 96);
      *(_BYTE *)(v3 - 84) = *(_BYTE *)(v3 + 100);
      j_memcpy((void *)(v3 - 80), (const void *)(v3 + 104), 0x50u);
      v3 += 184;
    }
  }
  v11 = (WorldDesc *)(*(_DWORD *)(a1 + 4) - 184);
  *(_DWORD *)(a1 + 4) = v11;
  WorldDesc::~WorldDesc(v11);
  return a2;
}


//======================================================================
// std::vector<WorldDesc,std::allocator<WorldDesc>>::~vector()
// address: 0x002BA168   size: 0x1A (26 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorI9WorldDescSaIS0_EED1Ev'
WorldDesc **__fastcall std::vector<WorldDesc>::~vector(WorldDesc **a1)
{
  std::_Destroy_aux<false>::__destroy<WorldDesc *>(*a1, a1[1]);
  if ( *a1 != nullptr )
    operator delete(*a1);
  return a1;
}


//======================================================================
// std::vector<int,std::allocator<int>>::erase(__gnu_cxx::__normal_iterator<int *,std::vector<int,std::allocator<int>>>)
// address: 0x002BA39A   size: 0x1E (30 bytes)
//======================================================================
char *__fastcall std::vector<int>::erase(int a1, char *a2)
{
  char *v4; // r0
  int v5; // r1

  v4 = a2 + 4;
  v5 = *(_DWORD *)(a1 + 4);
  if ( v4 != (char *)v5 )
    std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<int>(v4, v5, a2);
  *(_DWORD *)(a1 + 4) -= 4;
  return a2;
}


//======================================================================
// std::vector<tagOWorld,std::allocator<tagOWorld>>::erase(__gnu_cxx::__normal_iterator<tagOWorld*,std::vector<tagOWorld,std::allocator<tagOWorld>>>)
// address: 0x002BA54C   size: 0x24 (36 bytes)
//======================================================================
char *__fastcall std::vector<tagOWorld>::erase(int a1, char *a2)
{
  char *v4; // r0
  int v5; // r1

  v4 = a2 + 784;
  v5 = *(_DWORD *)(a1 + 4);
  if ( v4 != (char *)v5 )
    std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<tagOWorld>(v4, v5, a2);
  *(_DWORD *)(a1 + 4) -= 784;
  return a2;
}


//======================================================================
// std::vector<tagOWorld,std::allocator<tagOWorld>>::push_back(tagOWorld const&)
// address: 0x002BA728   size: 0x2C (44 bytes)
//======================================================================
int __fastcall std::vector<tagOWorld>::push_back(__int64 a1)
{
  int v1; // r4
  int v2; // r2

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 8);
  LODWORD(a1) = *(_DWORD *)(a1 + 4);
  if ( (_DWORD)a1 == v2 )
  {
    LODWORD(a1) = v1;
    LODWORD(a1) = std::vector<tagOWorld>::_M_emplace_back_aux<tagOWorld const&>(a1);
  }
  else
  {
    if ( (_DWORD)a1 != 0 )
      LODWORD(a1) = j_memcpy((void *)a1, (const void *)HIDWORD(a1), 0x310u);
    *(_DWORD *)(v1 + 4) += 784;
  }
  return a1;
}


//======================================================================
// std::vector<WorldDesc,std::allocator<WorldDesc>>::push_back(WorldDesc const&)
// address: 0x002BA8C8   size: 0x24 (36 bytes)
//======================================================================
void __fastcall std::vector<WorldDesc>::push_back(int a1, const WorldDesc *a2)
{
  WorldDesc *v3; // r3
  WorldDesc *v4; // r0

  v3 = *(WorldDesc **)(a1 + 8);
  v4 = *(WorldDesc **)(a1 + 4);
  if ( v4 == v3 )
  {
    std::vector<WorldDesc>::_M_emplace_back_aux<WorldDesc const&>(a1, a2);
  }
  else
  {
    if ( v4 != nullptr )
      WorldDesc::WorldDesc(v4, a2);
    *(_DWORD *)(a1 + 4) += 184;
  }
}


//======================================================================
// std::vector<ChunkIndex,std::allocator<ChunkIndex>>::_M_check_len(unsigned int,char const*)const
// address: 0x002BB6FC   size: 0x2C (44 bytes)
//======================================================================
unsigned int __fastcall std::vector<ChunkIndex>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = (a1[1] - *a1) >> 3;
  if ( 0x1FFFFFFF - v3 < a2 )
    sub_3BD058(a3);
  v4 = (a1[1] - *a1) >> 3;
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0x1FFFFFFF )
    return 0x1FFFFFFF;
  return result;
}


//======================================================================
// std::vector<ChunkIndex,std::allocator<ChunkIndex>>::push_back(ChunkIndex const&)
// address: 0x002BB7B0   size: 0x7A (122 bytes)
//======================================================================
void __fastcall std::vector<ChunkIndex>::push_back(int a1, _DWORD *a2)
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
// std::vector<ClientActor *,std::allocator<ClientActor *>>::push_back(ClientActor * const&)
// address: 0x002BDDF4   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::vector<ClientActor *>::push_back(int a1, _DWORD *a2)
{
  _DWORD *v2; // r3

  v2 = *(_DWORD **)(a1 + 4);
  if ( v2 == *(_DWORD **)(a1 + 8) )
  {
    std::vector<ClientActor *>::_M_emplace_back_aux<ClientActor * const&>(a1, a2);
  }
  else
  {
    if ( v2 != nullptr )
      *v2 = *a2;
    *(_DWORD *)(a1 + 4) += 4;
  }
}


//======================================================================
// std::vector<BlockMaterial *,std::allocator<BlockMaterial *>>::_M_check_len(unsigned int,char const*)const
// address: 0x002C2B1C   size: 0x2C (44 bytes)
//======================================================================
unsigned int __fastcall std::vector<BlockMaterial *>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = (a1[1] - *a1) >> 2;
  if ( 0x3FFFFFFF - v3 < a2 )
    sub_3BD058(a3);
  v4 = (a1[1] - *a1) >> 2;
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0x3FFFFFFF )
    return 0x3FFFFFFF;
  return result;
}


//======================================================================
// std::vector<BlockGeomVert,std::allocator<BlockGeomVert>>::_M_default_append(unsigned int)
// address: 0x002C3CAC   size: 0xFA (250 bytes)
//======================================================================
void __fastcall std::vector<BlockGeomVert>::_M_default_append(void **a1, unsigned int a2)
{
  char *v3; // r4
  unsigned int i; // r5
  unsigned int v5; // r4
  unsigned int v6; // r3
  unsigned int v7; // r3
  _BYTE *v8; // r6
  char *v9; // r5
  char *j; // r4
  unsigned int v11; // r6
  unsigned int v12; // r4
  char *v13; // r6
  char *v14; // r5
  char *v15; // r6
  int v17; // [sp+4h] [bp-10h]
  char *v18; // [sp+8h] [bp-Ch]
  char *v19; // [sp+Ch] [bp-8h]

  if ( a2 == 0 )
    return;
  v3 = (char *)a1[1];
  if ( -858993459 * (((_BYTE *)a1[2] - v3) >> 2) >= a2 )
  {
    for ( i = a2; i != 0; --i )
    {
      std::_Construct<BlockGeomVert<>>(v3);
      v3 += 20;
    }
    a1[1] = (char *)a1[1] + 20 * a2;
    return;
  }
  v5 = -858993459 * ((v3 - (_BYTE *)*a1) >> 2);
  if ( 214748364 - v5 < a2 )
    sub_3BD058("vector::_M_default_append");
  v6 = v5;
  if ( v5 < a2 )
    v6 = a2;
  v7 = v6 + v5;
  if ( v7 < v5 || (v17 = v7, v7 > 0xCCCCCCC) )
  {
    v17 = 214748364;
  }
  else
  {
    v18 = nullptr;
    if ( v7 == 0 )
      goto LABEL_16;
  }
  v18 = (char *)operator new(20 * v17);
LABEL_16:
  v8 = *a1;
  v9 = v18;
  v19 = (char *)a1[1];
  for ( j = (char *)*a1; j != v19; j += 20 )
  {
    if ( v9 != nullptr )
      j_memcpy(v9, j, 0x14u);
    v9 += 20;
  }
  v11 = 20 * ((858993460 * ((unsigned int)(j - v8) >> 2)) >> 2);
  v12 = a2;
  v13 = &v18[v11];
  v14 = v13;
  do
  {
    --v12;
    std::_Construct<BlockGeomVert<>>(v14);
    v14 += 20;
  }
  while ( v12 != 0 );
  v15 = &v13[20 * a2];
  if ( *a1 != nullptr )
    operator delete(*a1);
  *a1 = v18;
  a1[1] = v15;
  a1[2] = &v18[20 * v17];
}


//======================================================================
// std::vector<BlockMaterial *,std::allocator<BlockMaterial *>>::_M_fill_insert(__gnu_cxx::__normal_iterator<BlockMaterial **,std::vector<BlockMaterial *,std::allocator<BlockMaterial *>>>,unsigned int,BlockMaterial * const&)
// address: 0x002C4414   size: 0x10C (268 bytes)
//======================================================================
void __fastcall std::vector<BlockMaterial *>::_M_fill_insert(void **a1, char *a2, unsigned int a3, void **a4)
{
  char *v5; // r5
  char *v7; // r7
  int v8; // r6
  char *v9; // r6
  char *v10; // r2
  unsigned int v11; // r0
  unsigned int v12; // r7
  char *v13; // r2
  void *v14; // r1
  unsigned int v15; // r3
  int v16; // r0
  int v17; // r5
  unsigned int v19; // [sp+4h] [bp-10h]
  void *v20; // [sp+8h] [bp-Ch]
  char *v21; // [sp+8h] [bp-Ch]
  int v22; // [sp+Ch] [bp-8h]

  v5 = a2;
  if ( a3 != 0 )
  {
    v7 = (char *)a1[1];
    if ( ((_BYTE *)a1[2] - v7) >> 2 < a3 )
    {
      v11 = std::vector<BlockMaterial *>::_M_check_len(a1, a3, (int)"vector::_M_fill_insert");
      v12 = v11;
      v22 = (v5 - (_BYTE *)*a1) >> 2;
      if ( v11 != 0 )
      {
        if ( v11 > 0x3FFFFFFF )
          sub_3BCEB4(v11);
        v21 = (char *)operator new(4 * v11);
      }
      else
      {
        v21 = nullptr;
      }
      v13 = &v21[4 * v22];
      v14 = *a4;
      v15 = a3;
      do
      {
        --v15;
        *(_DWORD *)v13 = v14;
        v13 += 4;
      }
      while ( v15 != 0 );
      v16 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<BlockMaterial *>(*a1, (int)v5, v21);
      v17 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<BlockMaterial *>(
              v5,
              (int)a1[1],
              (void *)(v16 + 4 * a3));
      if ( *a1 != nullptr )
        operator delete(*a1);
      a1[1] = (void *)v17;
      *a1 = v21;
      a1[2] = &v21[4 * v12];
    }
    else
    {
      v19 = (v7 - a2) >> 2;
      v20 = *a4;
      if ( v19 <= a3 )
      {
        memset32(v7, (int)v20, a3 - v19);
        v10 = (char *)a1[1] + 4 * (a3 - v19);
        a1[1] = v10;
        std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<BlockMaterial *>(a2, (int)v7, v10);
        a1[1] = (char *)a1[1] + 4 * v19;
        while ( v5 != v7 )
        {
          *(_DWORD *)v5 = v20;
          v5 += 4;
        }
      }
      else
      {
        v8 = 4 * a3;
        std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<BlockMaterial *>(
          &v7[-4 * a3],
          (int)v7,
          v7);
        a1[1] = (char *)a1[1] + v8;
        if ( (&v7[-v8] - v5) >> 2 != 0 )
          j_memmove(&v7[-4 * ((&v7[-v8] - v5) >> 2)], v5, 4 * ((&v7[-v8] - v5) >> 2));
        v9 = &v5[v8];
        while ( v5 != v9 )
        {
          *(_DWORD *)v5 = v20;
          v5 += 4;
        }
      }
    }
  }
}


//======================================================================
// std::vector<ClientPlayer *,std::allocator<ClientPlayer *>>::push_back(ClientPlayer * const&)
// address: 0x002C82D4   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::vector<ClientPlayer *>::push_back(int a1, _DWORD *a2)
{
  _DWORD *v2; // r3

  v2 = *(_DWORD **)(a1 + 4);
  if ( v2 == *(_DWORD **)(a1 + 8) )
  {
    std::vector<ClientPlayer *>::_M_emplace_back_aux<ClientPlayer * const&>(a1, a2);
  }
  else
  {
    if ( v2 != nullptr )
      *v2 = *a2;
    *(_DWORD *)(a1 + 4) += 4;
  }
}


//======================================================================
// std::vector<tagGridChg,std::allocator<tagGridChg>>::erase(__gnu_cxx::__normal_iterator<tagGridChg*,std::vector<tagGridChg,std::allocator<tagGridChg>>>)
// address: 0x002CADCE   size: 0x20 (32 bytes)
//======================================================================
char *__fastcall std::vector<tagGridChg>::erase(int a1, char *a2)
{
  int v5; // r1
  char *v6; // r0

  v5 = *(_DWORD *)(a1 + 4);
  v6 = a2 + 32;
  if ( v6 != (char *)v5 )
    std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<tagGridChg>(v6, v5, a2);
  *(_DWORD *)(a1 + 4) -= 32;
  return a2;
}


//======================================================================
// std::vector<ClientActor *,std::allocator<ClientActor *>>::resize(unsigned int)
// address: 0x002CAF5E   size: 0x22 (34 bytes)
//======================================================================
void __fastcall std::vector<ClientActor *>::resize(int a1, unsigned int a2)
{
  unsigned int v2; // r3

  v2 = (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2;
  if ( a2 <= v2 )
  {
    if ( a2 < v2 )
      *(_DWORD *)(a1 + 4) = *(_DWORD *)a1 + 4 * a2;
  }
  else
  {
    std::vector<ClientActor *>::_M_default_append((void **)a1, a2 - v2);
  }
}


//======================================================================
// std::vector<BlockGeomVert,std::allocator<BlockGeomVert>>::resize(unsigned int)
// address: 0x002CDF50   size: 0x28 (40 bytes)
//======================================================================
void __fastcall std::vector<BlockGeomVert>::resize(int a1, unsigned int a2)
{
  unsigned int v2; // r3

  v2 = -858993459 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2);
  if ( a2 <= v2 )
  {
    if ( a2 < v2 )
      *(_DWORD *)(a1 + 4) = *(_DWORD *)a1 + 20 * a2;
  }
  else
  {
    std::vector<BlockGeomVert>::_M_default_append((void **)a1, a2 - v2);
  }
}


//======================================================================
// std::vector<Ogre::RenderableEffectInfo,std::allocator<Ogre::RenderableEffectInfo>>::push_back(Ogre::RenderableEffectInfo const&)
// address: 0x002CF0AC   size: 0x24 (36 bytes)
//======================================================================
void __fastcall std::vector<Ogre::RenderableEffectInfo>::push_back(int a1, _DWORD *a2)
{
  _DWORD *v2; // r3

  v2 = *(_DWORD **)(a1 + 4);
  if ( v2 == *(_DWORD **)(a1 + 8) )
  {
    std::vector<Ogre::RenderableEffectInfo>::_M_emplace_back_aux<Ogre::RenderableEffectInfo const&>(a1, a2);
  }
  else
  {
    if ( v2 != nullptr )
    {
      *v2 = *a2;
      v2[1] = a2[1];
    }
    *(_DWORD *)(a1 + 4) += 8;
  }
}


//======================================================================
// std::vector<int,std::allocator<int>>::_M_check_len(unsigned int,char const*)const
// address: 0x002D0B34   size: 0x2C (44 bytes)
//======================================================================
unsigned int __fastcall std::vector<int>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = (a1[1] - *a1) >> 2;
  if ( 0x3FFFFFFF - v3 < a2 )
    sub_3BD058(a3);
  v4 = (a1[1] - *a1) >> 2;
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0x3FFFFFFF )
    return 0x3FFFFFFF;
  return result;
}


//======================================================================
// std::vector<BuddyChatMsg,std::allocator<BuddyChatMsg>>::~vector()
// address: 0x002D2340   size: 0x26 (38 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorI12BuddyChatMsgSaIS0_EED1Ev'
void **__fastcall std::vector<BuddyChatMsg>::~vector(void **a1)
{
  char *v1; // r5
  char *v2; // r6

  v1 = (char *)*a1;
  v2 = (char *)a1[1];
  while ( v1 != v2 )
  {
    sub_3BDF80(v1 + 8);
    v1 += 12;
  }
  if ( *a1 != nullptr )
    operator delete(*a1);
  return a1;
}


//======================================================================
// std::vector<BuddyChatMsg,std::allocator<BuddyChatMsg>>::push_back(BuddyChatMsg const&)
// address: 0x002D26AC   size: 0x30 (48 bytes)
//======================================================================
_DWORD *__fastcall std::vector<BuddyChatMsg>::push_back(int *a1, _DWORD *a2)
{
  _DWORD *v3; // r3
  _DWORD *result; // r0

  v3 = (_DWORD *)a1[2];
  result = (_DWORD *)a1[1];
  if ( result == v3 )
    return (_DWORD *)std::vector<BuddyChatMsg>::_M_emplace_back_aux<BuddyChatMsg const&>(a1, a2);
  if ( result != nullptr )
  {
    *result = *a2;
    result[1] = a2[1];
    result = (_DWORD *)sub_3BEB1C(result + 2, a2 + 2);
  }
  a1[1] += 12;
  return result;
}


//======================================================================
// std::vector<BuddyWorldDesc,std::allocator<BuddyWorldDesc>>::~vector()
// address: 0x002D295A   size: 0x1A (26 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorI14BuddyWorldDescSaIS0_EED1Ev'
BuddyWorldDesc **__fastcall std::vector<BuddyWorldDesc>::~vector(BuddyWorldDesc **a1)
{
  std::_Destroy_aux<false>::__destroy<BuddyWorldDesc *>(*a1, a1[1]);
  if ( *a1 != nullptr )
    operator delete(*a1);
  return a1;
}


//======================================================================
// std::vector<ActorAction *,std::allocator<ActorAction *>>::_M_check_len(unsigned int,char const*)const
// address: 0x002D3A40   size: 0x2C (44 bytes)
//======================================================================
unsigned int __fastcall std::vector<ActorAction *>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = (a1[1] - *a1) >> 2;
  if ( 0x3FFFFFFF - v3 < a2 )
    sub_3BD058(a3);
  v4 = (a1[1] - *a1) >> 2;
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0x3FFFFFFF )
    return 0x3FFFFFFF;
  return result;
}


//======================================================================
// std::vector<ActorAction *,std::allocator<ActorAction *>>::_M_default_append(unsigned int)
// address: 0x002D3D2C   size: 0x80 (128 bytes)
//======================================================================
void __fastcall std::vector<ActorAction *>::_M_default_append(void **a1, unsigned int a2)
{
  _DWORD *v4; // r2
  unsigned int i; // r3
  unsigned int v6; // r0
  unsigned int v7; // r6
  char *v8; // r7
  int v9; // r0
  unsigned int v10; // r3
  _DWORD *v11; // r2
  unsigned int v12; // r5

  if ( a2 != 0 )
  {
    v4 = a1[1];
    if ( ((_BYTE *)a1[2] - (_BYTE *)v4) >> 2 < a2 )
    {
      v6 = std::vector<ActorAction *>::_M_check_len(a1, a2, (int)"vector::_M_default_append");
      v7 = v6;
      if ( v6 != 0 )
      {
        if ( v6 > 0x3FFFFFFF )
          sub_3BCEB4(v6);
        v8 = (char *)operator new(4 * v6);
      }
      else
      {
        v8 = nullptr;
      }
      v9 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<ActorAction *>(*a1, (int)a1[1], v8);
      v10 = a2;
      v11 = (_DWORD *)v9;
      do
      {
        --v10;
        *v11++ = 0;
      }
      while ( v10 != 0 );
      v12 = v9 + 4 * a2;
      if ( *a1 != nullptr )
        operator delete(*a1);
      *a1 = v8;
      a1[1] = (void *)v12;
      a1[2] = &v8[4 * v7];
    }
    else
    {
      for ( i = a2; i != 0; --i )
        *v4++ = 0;
      a1[1] = (char *)a1[1] + 4 * a2;
    }
  }
}


//======================================================================
// std::vector<ActorAction *,std::allocator<ActorAction *>>::push_back(ActorAction * const&)
// address: 0x002D3E00   size: 0x74 (116 bytes)
//======================================================================
void __fastcall std::vector<ActorAction *>::push_back(void **a1, _DWORD *a2)
{
  _DWORD *v3; // r3
  unsigned int v5; // r0
  int v6; // r6
  unsigned int v7; // r5
  _DWORD *v8; // r3
  int v9; // r7

  v3 = a1[1];
  if ( v3 == a1[2] )
  {
    v5 = std::vector<ActorAction *>::_M_check_len(a1, 1u, (int)"vector::_M_emplace_back_aux");
    v6 = 4 * v5;
    if ( v5 != 0 )
    {
      if ( v5 > 0x3FFFFFFF )
        sub_3BCEB4(v5);
      v5 = operator new(4 * v5);
    }
    v7 = v5;
    v8 = (_DWORD *)(v5 + 4 * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2));
    if ( v8 != nullptr )
      *v8 = *a2;
    v9 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<ActorAction *>(
           *a1,
           (int)a1[1],
           (void *)v5)
       + 4;
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
    a1[1] = (char *)a1[1] + 4;
  }
}


//======================================================================
// std::vector<PathFinderNode *,std::allocator<PathFinderNode *>>::_M_check_len(unsigned int,char const*)const
// address: 0x002D6A58   size: 0x2C (44 bytes)
//======================================================================
unsigned int __fastcall std::vector<PathFinderNode *>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = (a1[1] - *a1) >> 2;
  if ( 0x3FFFFFFF - v3 < a2 )
    sub_3BD058(a3);
  v4 = (a1[1] - *a1) >> 2;
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0x3FFFFFFF )
    return 0x3FFFFFFF;
  return result;
}


//======================================================================
// std::vector<PathFinderNode *,std::allocator<PathFinderNode *>>::resize(unsigned int)
// address: 0x002D6AA8   size: 0x92 (146 bytes)
//======================================================================
void __fastcall std::vector<PathFinderNode *>::resize(void **a1, unsigned int a2)
{
  char *v2; // r3
  unsigned int v4; // r5
  unsigned int v5; // r5
  unsigned int i; // r2
  unsigned int v7; // r0
  unsigned int v8; // r6
  char *v9; // r7
  int v10; // r0
  unsigned int v11; // r3
  _DWORD *v12; // r2
  unsigned int v13; // r5

  v2 = (char *)a1[1];
  v4 = (v2 - (_BYTE *)*a1) >> 2;
  if ( a2 <= v4 )
  {
    if ( a2 < v4 )
      a1[1] = (char *)*a1 + 4 * a2;
  }
  else
  {
    v5 = a2 - v4;
    if ( v5 != 0 )
    {
      if ( ((_BYTE *)a1[2] - v2) >> 2 < v5 )
      {
        v7 = std::vector<PathFinderNode *>::_M_check_len(a1, v5, (int)"vector::_M_default_append");
        v8 = v7;
        if ( v7 != 0 )
        {
          if ( v7 > 0x3FFFFFFF )
            sub_3BCEB4(v7);
          v9 = (char *)operator new(4 * v7);
        }
        else
        {
          v9 = nullptr;
        }
        v10 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<PathFinderNode *>(
                *a1,
                (int)a1[1],
                v9);
        v11 = v5;
        v12 = (_DWORD *)v10;
        do
        {
          --v11;
          *v12++ = 0;
        }
        while ( v11 != 0 );
        v13 = v10 + 4 * v5;
        sub_2D5A2C(*a1);
        *a1 = v9;
        a1[1] = (void *)v13;
        a1[2] = &v9[4 * v8];
      }
      else
      {
        for ( i = v5; i != 0; --i )
        {
          *(_DWORD *)v2 = 0;
          v2 += 4;
        }
        a1[1] = (char *)a1[1] + 4 * v5;
      }
    }
  }
}


//======================================================================
// std::vector<MovingBlock *,std::allocator<MovingBlock *>>::_M_check_len(unsigned int,char const*)const
// address: 0x002D8510   size: 0x2C (44 bytes)
//======================================================================
unsigned int __fastcall std::vector<MovingBlock *>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = (a1[1] - *a1) >> 2;
  if ( 0x3FFFFFFF - v3 < a2 )
    sub_3BD058(a3);
  v4 = (a1[1] - *a1) >> 2;
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0x3FFFFFFF )
    return 0x3FFFFFFF;
  return result;
}


//======================================================================
// std::vector<MovingBlock *,std::allocator<MovingBlock *>>::_M_default_append(unsigned int)
// address: 0x002D8560   size: 0x80 (128 bytes)
//======================================================================
void __fastcall std::vector<MovingBlock *>::_M_default_append(void **a1, unsigned int a2)
{
  _DWORD *v4; // r2
  unsigned int i; // r3
  unsigned int v6; // r0
  unsigned int v7; // r6
  char *v8; // r7
  int v9; // r0
  unsigned int v10; // r3
  _DWORD *v11; // r2
  unsigned int v12; // r5

  if ( a2 != 0 )
  {
    v4 = a1[1];
    if ( ((_BYTE *)a1[2] - (_BYTE *)v4) >> 2 < a2 )
    {
      v6 = std::vector<MovingBlock *>::_M_check_len(a1, a2, (int)"vector::_M_default_append");
      v7 = v6;
      if ( v6 != 0 )
      {
        if ( v6 > 0x3FFFFFFF )
          sub_3BCEB4(v6);
        v8 = (char *)operator new(4 * v6);
      }
      else
      {
        v8 = nullptr;
      }
      v9 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<MovingBlock *>(*a1, (int)a1[1], v8);
      v10 = a2;
      v11 = (_DWORD *)v9;
      do
      {
        --v10;
        *v11++ = 0;
      }
      while ( v10 != 0 );
      v12 = v9 + 4 * a2;
      if ( *a1 != nullptr )
        operator delete(*a1);
      *a1 = v8;
      a1[1] = (void *)v12;
      a1[2] = &v8[4 * v7];
    }
    else
    {
      for ( i = a2; i != 0; --i )
        *v4++ = 0;
      a1[1] = (char *)a1[1] + 4 * a2;
    }
  }
}


//======================================================================
// std::vector<WorldContainer *,std::allocator<WorldContainer *>>::_M_check_len(unsigned int,char const*)const
// address: 0x002DBA80   size: 0x2C (44 bytes)
//======================================================================
unsigned int __fastcall std::vector<WorldContainer *>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = (a1[1] - *a1) >> 2;
  if ( 0x3FFFFFFF - v3 < a2 )
    sub_3BD058(a3);
  v4 = (a1[1] - *a1) >> 2;
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0x3FFFFFFF )
    return 0x3FFFFFFF;
  return result;
}


//======================================================================
// std::vector<WorldContainer *,std::allocator<WorldContainer *>>::_M_default_append(unsigned int)
// address: 0x002DBAD0   size: 0x80 (128 bytes)
//======================================================================
void __fastcall std::vector<WorldContainer *>::_M_default_append(void **a1, unsigned int a2)
{
  _DWORD *v4; // r2
  unsigned int i; // r3
  unsigned int v6; // r0
  unsigned int v7; // r6
  char *v8; // r7
  int v9; // r0
  unsigned int v10; // r3
  _DWORD *v11; // r2
  unsigned int v12; // r5

  if ( a2 != 0 )
  {
    v4 = a1[1];
    if ( ((_BYTE *)a1[2] - (_BYTE *)v4) >> 2 < a2 )
    {
      v6 = std::vector<WorldContainer *>::_M_check_len(a1, a2, (int)"vector::_M_default_append");
      v7 = v6;
      if ( v6 != 0 )
      {
        if ( v6 > 0x3FFFFFFF )
          sub_3BCEB4(v6);
        v8 = (char *)operator new(4 * v6);
      }
      else
      {
        v8 = nullptr;
      }
      v9 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<WorldContainer *>(*a1, (int)a1[1], v8);
      v10 = a2;
      v11 = (_DWORD *)v9;
      do
      {
        --v10;
        *v11++ = 0;
      }
      while ( v10 != 0 );
      v12 = v9 + 4 * a2;
      if ( *a1 != nullptr )
        operator delete(*a1);
      *a1 = v8;
      a1[1] = (void *)v12;
      a1[2] = &v8[4 * v7];
    }
    else
    {
      for ( i = a2; i != 0; --i )
        *v4++ = 0;
      a1[1] = (char *)a1[1] + 4 * a2;
    }
  }
}


//======================================================================
// std::vector<WCoord,std::allocator<WCoord>>::_M_check_len(unsigned int,char const*)const
// address: 0x002DC984   size: 0x30 (48 bytes)
//======================================================================
unsigned int __fastcall std::vector<WCoord>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = -1431655765 * ((a1[1] - *a1) >> 2);
  if ( 357913941 - v3 < a2 )
    sub_3BD058(a3);
  v4 = -1431655765 * ((a1[1] - *a1) >> 2);
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0x15555555 )
    return 357913941;
  return result;
}


//======================================================================
// std::vector<int,std::allocator<int>>::vector(std::vector<int,std::allocator<int>> const&)
// address: 0x002DE318   size: 0x52 (82 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIiSaIiEEC1ERKS1_'
unsigned int *__fastcall std::vector<int>::vector(unsigned int *a1, const void **a2)
{
  unsigned int v4; // r5
  int v5; // r7
  const void *v6; // r1
  int v7; // r3
  int v8; // r6

  v4 = ((_BYTE *)a2[1] - (_BYTE *)*a2) >> 2;
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  v5 = 4 * v4;
  if ( v4 != 0 )
  {
    if ( v4 > 0x3FFFFFFF )
      sub_3BCEB4(a1);
    v4 = operator new(4 * v4);
  }
  *a1 = v4;
  a1[1] = v4;
  a1[2] = v4 + v5;
  v6 = *a2;
  v7 = ((_BYTE *)a2[1] - (_BYTE *)*a2) >> 2;
  v8 = 4 * v7;
  if ( v7 != 0 )
    j_memmove((void *)v4, v6, 4 * v7);
  a1[1] = v4 + v8;
  return a1;
}


//======================================================================
// std::vector<BackPackGrid,std::allocator<BackPackGrid>>::push_back(BackPackGrid const&)
// address: 0x002DE6D8   size: 0x26 (38 bytes)
//======================================================================
int __fastcall std::vector<BackPackGrid>::push_back(__int64 a1)
{
  int v1; // r4
  int v2; // r3

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 8);
  LODWORD(a1) = *(_DWORD *)(a1 + 4);
  if ( (_DWORD)a1 == v2 )
  {
    LODWORD(a1) = v1;
    LODWORD(a1) = std::vector<BackPackGrid>::_M_emplace_back_aux<BackPackGrid const&>(a1);
  }
  else
  {
    if ( (_DWORD)a1 != 0 )
      LODWORD(a1) = j_memcpy((void *)a1, (const void *)HIDWORD(a1), 0x34u);
    *(_DWORD *)(v1 + 4) += 52;
  }
  return a1;
}


//======================================================================
// std::vector<GenLayer *,std::allocator<GenLayer *>>::~vector()
// address: 0x002DF5F8   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZNSt6vectorIP8GenLayerSaIS1_EED1Ev'
void **__fastcall std::vector<GenLayer *>::~vector(void **a1)
{
  void *v2; // r0

  v2 = *a1;
  if ( v2 != nullptr )
    operator delete(v2);
  return a1;
}


//======================================================================
// std::vector<Chunk *,std::allocator<Chunk *>>::_M_default_append(unsigned int)
// address: 0x002E0A54   size: 0xAA (170 bytes)
//======================================================================
__int64 __fastcall std::vector<Chunk *>::_M_default_append(__int64 a1)
{
  __int64 v1; // r4
  _DWORD *v2; // r3
  int i; // r2
  unsigned int v4; // r3
  unsigned int v5; // r6
  unsigned int v6; // r6
  int v7; // r3
  int v8; // r7
  _DWORD *v9; // r7
  _DWORD *v10; // r2
  int v11; // r3
  __int64 v13; // [sp+0h] [bp-Ch]

  v13 = a1;
  v1 = a1;
  if ( HIDWORD(a1) == 0 )
    return v13;
  v2 = *(_DWORD **)(a1 + 4);
  if ( (unsigned int)((*(_DWORD *)(a1 + 8) - (int)v2) >> 2) >= HIDWORD(a1) )
  {
    for ( i = HIDWORD(a1); i != 0; --i )
      *v2++ = 0;
    *(_DWORD *)(a1 + 4) += 4 * HIDWORD(a1);
    return v13;
  }
  v4 = ((int)v2 - *(_DWORD *)a1) >> 2;
  if ( 0x3FFFFFFF - v4 < HIDWORD(a1) )
    sub_3BD058("vector::_M_default_append");
  v5 = v4;
  if ( v4 < HIDWORD(a1) )
    v5 = HIDWORD(a1);
  v6 = v5 + v4;
  if ( v6 < v4 || v6 > 0x3FFFFFFF )
  {
    v6 = 0x3FFFFFFF;
LABEL_15:
    HIDWORD(v13) = operator new(4 * v6);
    goto LABEL_16;
  }
  HIDWORD(v13) = 0;
  if ( v6 != 0 )
    goto LABEL_15;
LABEL_16:
  v7 = (*(_DWORD *)(v1 + 4) - *(_DWORD *)v1) >> 2;
  v8 = 4 * v7;
  if ( v7 != 0 )
    j_memmove((void *)HIDWORD(v13), *(const void **)v1, 4 * v7);
  v9 = (_DWORD *)(HIDWORD(v13) + v8);
  v10 = v9;
  v11 = HIDWORD(v1);
  do
  {
    --v11;
    *v10++ = 0;
  }
  while ( v11 != 0 );
  HIDWORD(v1) = &v9[HIDWORD(v1)];
  if ( *(_DWORD *)v1 != 0 )
    operator delete(*(void **)v1);
  *(_DWORD *)(v1 + 4) = HIDWORD(v1);
  *(_DWORD *)v1 = HIDWORD(v13);
  *(_DWORD *)(v1 + 8) = HIDWORD(v13) + 4 * v6;
  return v13;
}


//======================================================================
// std::vector<AutoCorrectCache,std::allocator<AutoCorrectCache>>::_M_default_append(unsigned int)
// address: 0x002E25D0   size: 0xBA (186 bytes)
//======================================================================
__int64 __fastcall std::vector<AutoCorrectCache>::_M_default_append(__int64 a1)
{
  __int64 v1; // r4
  int v2; // r6
  unsigned int v3; // r6
  char *v4; // r7
  int v5; // r3
  __int64 v7; // [sp+0h] [bp-Ch]
  int v8; // [sp+4h] [bp-8h]

  v7 = a1;
  v1 = a1;
  if ( HIDWORD(a1) == 0 )
    return v7;
  LODWORD(a1) = *(_DWORD *)(a1 + 4);
  if ( (unsigned int)(-1431655765 * ((*(_DWORD *)(v1 + 8) - (int)a1) >> 5)) >= HIDWORD(a1) )
  {
    std::__uninitialized_default_n_1<true>::__uninit_default_n<AutoCorrectCache *,unsigned int>(
      (char *)a1,
      SHIDWORD(a1));
    *(_DWORD *)(v1 + 4) += 96 * HIDWORD(v1);
    return v7;
  }
  LODWORD(a1) = -1431655765 * (((int)a1 - *(_DWORD *)v1) >> 5);
  if ( (unsigned int)(44739242 - a1) < HIDWORD(a1) )
    sub_3BD058("vector::_M_default_append");
  v2 = a1;
  if ( (unsigned int)a1 < HIDWORD(a1) )
    v2 = HIDWORD(a1);
  v3 = v2 + a1;
  if ( v3 < (unsigned int)a1 || v3 > 0x2AAAAAA )
  {
    v3 = 44739242;
LABEL_13:
    v4 = (char *)operator new(96 * v3);
    goto LABEL_14;
  }
  v4 = nullptr;
  if ( v3 != 0 )
    goto LABEL_13;
LABEL_14:
  v5 = (*(_DWORD *)(v1 + 4) - *(_DWORD *)v1) >> 5;
  v8 = -1431655765 * v5;
  if ( -1431655765 * v5 != 0 )
    j_memmove(v4, *(const void **)v1, 32 * v5);
  HIDWORD(v7) = &v4[96 * v8];
  std::__uninitialized_default_n_1<true>::__uninit_default_n<AutoCorrectCache *,unsigned int>(
    (char *)HIDWORD(v7),
    SHIDWORD(v1));
  HIDWORD(v1) = HIDWORD(v7) + 96 * HIDWORD(v1);
  if ( *(_DWORD *)v1 != 0 )
    operator delete(*(void **)v1);
  *(_DWORD *)v1 = v4;
  *(_DWORD *)(v1 + 4) = HIDWORD(v1);
  *(_DWORD *)(v1 + 8) = &v4[96 * v3];
  return v7;
}


//======================================================================
// std::vector<AutoCorrectCache,std::allocator<AutoCorrectCache>>::resize(unsigned int)
// address: 0x002E2698   size: 0x28 (40 bytes)
//======================================================================
int __fastcall std::vector<AutoCorrectCache>::resize(__int64 a1)
{
  unsigned int v1; // r3

  v1 = -1431655765 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 5);
  if ( HIDWORD(a1) <= v1 )
  {
    if ( HIDWORD(a1) < v1 )
      *(_DWORD *)(a1 + 4) = *(_DWORD *)a1 + 96 * HIDWORD(a1);
  }
  else
  {
    HIDWORD(a1) -= v1;
    LODWORD(a1) = std::vector<AutoCorrectCache>::_M_default_append(a1);
  }
  return a1;
}


//======================================================================
// std::vector<BlockEventData,std::allocator<BlockEventData>>::_M_check_len(unsigned int,char const*)const
// address: 0x002EE324   size: 0x30 (48 bytes)
//======================================================================
unsigned int __fastcall std::vector<BlockEventData>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = -1431655765 * ((a1[1] - *a1) >> 3);
  if ( 178956970 - v3 < a2 )
    sub_3BD058(a3);
  v4 = -1431655765 * ((a1[1] - *a1) >> 3);
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0xAAAAAAA )
    return 178956970;
  return result;
}


//======================================================================
// std::vector<BlockEventData,std::allocator<BlockEventData>>::_M_default_append(unsigned int)
// address: 0x002EE4CC   size: 0xDA (218 bytes)
//======================================================================
void __fastcall std::vector<BlockEventData>::_M_default_append(char **a1, unsigned int a2)
{
  char *v3; // r5
  unsigned int j; // r6
  unsigned int v5; // r0
  _DWORD *v6; // r2
  char *v7; // r12
  char *i; // r3
  int v9; // r6
  int v10; // r7
  int v11; // r6
  int v12; // r7
  char *v13; // r7
  unsigned int v14; // r5
  char *v15; // r6
  char *v16; // r7
  char *v17; // [sp+0h] [bp-14h]
  unsigned int v19; // [sp+8h] [bp-Ch]
  _DWORD *v20; // [sp+Ch] [bp-8h]

  if ( a2 != 0 )
  {
    v3 = a1[1];
    if ( -1431655765 * ((a1[2] - v3) >> 3) < a2 )
    {
      v5 = std::vector<BlockEventData>::_M_check_len(a1, a2, (int)"vector::_M_default_append");
      v19 = v5;
      if ( v5 != 0 )
      {
        if ( v5 > 0xAAAAAAA )
          sub_3BCEB4(v5);
        v20 = (_DWORD *)operator new(24 * v5);
      }
      else
      {
        v20 = nullptr;
      }
      v6 = v20;
      v17 = *a1;
      v7 = a1[1];
      for ( i = *a1; i != v7; i += 24 )
      {
        if ( v6 != nullptr )
        {
          v9 = *((_DWORD *)i + 1);
          v10 = *((_DWORD *)i + 2);
          *v6 = *(_DWORD *)i;
          v6[1] = v9;
          v6[2] = v10;
          v11 = *((_DWORD *)i + 4);
          v12 = *((_DWORD *)i + 5);
          v6[3] = *((_DWORD *)i + 3);
          v6[4] = v11;
          v6[5] = v12;
        }
        v6 += 6;
      }
      v13 = (char *)&v20[6 * ((178956971 * ((unsigned int)(i - v17) >> 3)) & 0x1FFFFFFF)];
      v14 = a2;
      v15 = v13;
      do
      {
        --v14;
        std::_Construct<BlockEventData<>>(v15);
        v15 += 24;
      }
      while ( v14 != 0 );
      v16 = &v13[24 * a2];
      if ( *a1 != nullptr )
        operator delete(*a1);
      *a1 = (char *)v20;
      a1[1] = v16;
      a1[2] = (char *)&v20[6 * v19];
    }
    else
    {
      for ( j = a2; j != 0; --j )
      {
        std::_Construct<BlockEventData<>>(v3);
        v3 += 24;
      }
      a1[1] += 24 * a2;
    }
  }
}


//======================================================================
// std::vector<BlockOperate *,std::allocator<BlockOperate *>>::_M_default_append(unsigned int)
// address: 0x002EE864   size: 0xAA (170 bytes)
//======================================================================
__int64 __fastcall std::vector<BlockOperate *>::_M_default_append(__int64 a1)
{
  __int64 v1; // r4
  _DWORD *v2; // r3
  int i; // r2
  unsigned int v4; // r3
  unsigned int v5; // r6
  unsigned int v6; // r6
  int v7; // r3
  int v8; // r7
  _DWORD *v9; // r7
  _DWORD *v10; // r2
  int v11; // r3
  __int64 v13; // [sp+0h] [bp-Ch]

  v13 = a1;
  v1 = a1;
  if ( HIDWORD(a1) == 0 )
    return v13;
  v2 = *(_DWORD **)(a1 + 4);
  if ( (unsigned int)((*(_DWORD *)(a1 + 8) - (int)v2) >> 2) >= HIDWORD(a1) )
  {
    for ( i = HIDWORD(a1); i != 0; --i )
      *v2++ = 0;
    *(_DWORD *)(a1 + 4) += 4 * HIDWORD(a1);
    return v13;
  }
  v4 = ((int)v2 - *(_DWORD *)a1) >> 2;
  if ( 0x3FFFFFFF - v4 < HIDWORD(a1) )
    sub_3BD058("vector::_M_default_append");
  v5 = v4;
  if ( v4 < HIDWORD(a1) )
    v5 = HIDWORD(a1);
  v6 = v5 + v4;
  if ( v6 < v4 || v6 > 0x3FFFFFFF )
  {
    v6 = 0x3FFFFFFF;
LABEL_15:
    HIDWORD(v13) = operator new(4 * v6);
    goto LABEL_16;
  }
  HIDWORD(v13) = 0;
  if ( v6 != 0 )
    goto LABEL_15;
LABEL_16:
  v7 = (*(_DWORD *)(v1 + 4) - *(_DWORD *)v1) >> 2;
  v8 = 4 * v7;
  if ( v7 != 0 )
    j_memmove((void *)HIDWORD(v13), *(const void **)v1, 4 * v7);
  v9 = (_DWORD *)(HIDWORD(v13) + v8);
  v10 = v9;
  v11 = HIDWORD(v1);
  do
  {
    --v11;
    *v10++ = 0;
  }
  while ( v11 != 0 );
  HIDWORD(v1) = &v9[HIDWORD(v1)];
  if ( *(_DWORD *)v1 != 0 )
    operator delete(*(void **)v1);
  *(_DWORD *)(v1 + 4) = HIDWORD(v1);
  *(_DWORD *)v1 = HIDWORD(v13);
  *(_DWORD *)(v1 + 8) = HIDWORD(v13) + 4 * v6;
  return v13;
}


//======================================================================
// std::vector<WCoord,std::allocator<WCoord>>::_M_default_append(unsigned int)
// address: 0x002EE9F4   size: 0xB2 (178 bytes)
//======================================================================
void __fastcall std::vector<WCoord>::_M_default_append(int *a1, unsigned int a2)
{
  int v4; // r2
  unsigned int v5; // r3
  int v6; // r6
  unsigned int v7; // r6
  _DWORD *v8; // r7
  _DWORD *v9; // r2
  char *v10; // r12
  char *v11; // r1
  char *i; // r3
  unsigned int v13; // r5

  if ( a2 == 0 )
    return;
  v4 = a1[1];
  if ( -1431655765 * ((a1[2] - v4) >> 2) >= a2 )
  {
    a1[1] = v4 + 12 * a2;
    return;
  }
  v5 = -1431655765 * ((v4 - *a1) >> 2);
  if ( 357913941 - v5 < a2 )
    sub_3BD058("vector::_M_default_append");
  v6 = -1431655765 * ((v4 - *a1) >> 2);
  if ( v5 < a2 )
    v6 = a2;
  v7 = v6 - 1431655765 * ((v4 - *a1) >> 2);
  if ( v7 < v5 || v7 > 0x15555555 )
  {
    v7 = 357913941;
  }
  else
  {
    v8 = nullptr;
    if ( v7 == 0 )
      goto LABEL_14;
  }
  v8 = (_DWORD *)operator new(12 * v7);
LABEL_14:
  v9 = v8;
  v10 = (char *)a1[1];
  v11 = (char *)*a1;
  for ( i = (char *)*a1; i != v10; i += 12 )
  {
    if ( v9 != nullptr )
    {
      *v9 = *(_DWORD *)i;
      v9[1] = *((_DWORD *)i + 1);
      v9[2] = *((_DWORD *)i + 2);
    }
    v9 += 3;
  }
  v13 = (unsigned int)&v8[3 * ((-1431655764 * ((unsigned int)(i - v11) >> 2)) >> 2) + 3 * a2];
  if ( *a1 != 0 )
    operator delete((void *)*a1);
  *a1 = (int)v8;
  a1[1] = v13;
  a1[2] = (int)&v8[3 * v7];
}


//======================================================================
// std::vector<ChunkViewer *,std::allocator<ChunkViewer *>>::operator=(std::vector<ChunkViewer *,std::allocator<ChunkViewer *>> const&)
// address: 0x002EF7F8   size: 0x90 (144 bytes)
//======================================================================
int __fastcall std::vector<ChunkViewer *>::operator=(int a1, int a2)
{
  int v4; // r7
  void *v5; // r6
  void *v6; // r2
  unsigned int v7; // r3
  char *v8; // r5
  unsigned int v9; // r1
  void *v10; // r0
  int v11; // r1
  int byte_count; // [sp+4h] [bp-8h]

  if ( a2 != a1 )
  {
    v4 = *(_DWORD *)(a2 + 4);
    v5 = *(void **)a2;
    v6 = *(void **)a1;
    v7 = (v4 - *(_DWORD *)a2) >> 2;
    byte_count = 4 * v7;
    if ( v7 <= (*(_DWORD *)(a1 + 8) - *(_DWORD *)a1) >> 2 )
    {
      v9 = (*(_DWORD *)(a1 + 4) - (int)v6) >> 2;
      if ( v9 < v7 )
      {
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<ChunkViewer *>(v5, (int)v5 + 4 * v9, v6);
        v6 = *(void **)(a1 + 4);
        v11 = *(_DWORD *)(a2 + 4);
        v10 = (void *)(*(_DWORD *)a2 + 4 * (((int)v6 - *(_DWORD *)a1) >> 2));
      }
      else
      {
        v10 = v5;
        v11 = v4;
      }
      std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<ChunkViewer *>(v10, v11, v6);
    }
    else
    {
      if ( v7 != 0 )
      {
        if ( v7 > 0x3FFFFFFF )
          sub_3BCEB4(4 * v7);
        v8 = (char *)operator new(byte_count);
      }
      else
      {
        v8 = nullptr;
      }
      std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<ChunkViewer *>(v5, v4, v8);
      sub_2EECD2(*(void **)a1);
      *(_DWORD *)a1 = v8;
      *(_DWORD *)(a1 + 8) = &v8[byte_count];
    }
    *(_DWORD *)(a1 + 4) = *(_DWORD *)a1 + byte_count;
  }
  return a1;
}


//======================================================================
// std::vector<WorldBossData,std::allocator<WorldBossData>>::push_back(WorldBossData const&)
// address: 0x002F0D64   size: 0x26 (38 bytes)
//======================================================================
void __fastcall std::vector<WorldBossData>::push_back(int *a1, int *a2)
{
  _DWORD *v2; // r3
  _DWORD *v3; // r1
  int v4; // r4
  int v5; // r5
  int v6; // r6
  int v7; // r4
  int v8; // r5

  v2 = (_DWORD *)a1[1];
  if ( v2 == (_DWORD *)a1[2] )
  {
    std::vector<WorldBossData>::_M_emplace_back_aux<WorldBossData const&>(a1, a2);
  }
  else
  {
    if ( v2 != nullptr )
    {
      v4 = *a2;
      v5 = a2[1];
      v6 = a2[2];
      v3 = a2 + 3;
      *v2 = v4;
      v2[1] = v5;
      v2[2] = v6;
      v7 = v3[1];
      v8 = v3[2];
      v2[3] = *v3;
      v2[4] = v7;
      v2[5] = v8;
    }
    a1[1] += 24;
  }
}


//======================================================================
// std::vector<flatbuffers::Offset<FBSave::WorldMapBoss>,std::allocator<flatbuffers::Offset<FBSave::WorldMapBoss>>>::_M_default_append(unsigned int)
// address: 0x002F0DC8   size: 0xBC (188 bytes)
//======================================================================
void __fastcall std::vector<flatbuffers::Offset<FBSave::WorldMapBoss>>::_M_default_append(int *a1, unsigned int a2)
{
  _DWORD *v4; // r3
  unsigned int i; // r2
  unsigned int v6; // r3
  unsigned int v7; // r6
  unsigned int v8; // r6
  _DWORD *v9; // r7
  char *v10; // r1
  _DWORD *v11; // r2
  char *v12; // r12
  char *j; // r3
  _DWORD *v14; // r3
  unsigned int v15; // r1
  _DWORD *v16; // r2
  _DWORD *v17; // r5

  if ( a2 == 0 )
    return;
  v4 = (_DWORD *)a1[1];
  if ( (a1[2] - (int)v4) >> 2 >= a2 )
  {
    for ( i = a2; i != 0; --i )
    {
      if ( v4 != nullptr )
        *v4 = 0;
      ++v4;
    }
    a1[1] += 4 * a2;
    return;
  }
  v6 = ((int)v4 - *a1) >> 2;
  if ( 0x3FFFFFFF - v6 < a2 )
    sub_3BD058("vector::_M_default_append");
  v7 = v6;
  if ( v6 < a2 )
    v7 = a2;
  v8 = v7 + v6;
  if ( v8 < v6 || v8 > 0x3FFFFFFF )
  {
    v8 = 0x3FFFFFFF;
LABEL_17:
    v9 = (_DWORD *)operator new(4 * v8);
    goto LABEL_18;
  }
  v9 = nullptr;
  if ( v8 != 0 )
    goto LABEL_17;
LABEL_18:
  v10 = (char *)*a1;
  v11 = v9;
  v12 = (char *)a1[1];
  for ( j = (char *)*a1; j != v12; j += 4 )
  {
    if ( v11 != nullptr )
      *v11 = *(_DWORD *)j;
    ++v11;
  }
  v14 = &v9[(unsigned int)(j - v10) >> 2];
  v15 = a2;
  v16 = v14;
  do
  {
    if ( v16 != nullptr )
      *v16 = 0;
    --v15;
    ++v16;
  }
  while ( v15 != 0 );
  v17 = &v14[a2];
  if ( *a1 != 0 )
    operator delete((void *)*a1);
  *a1 = (int)v9;
  a1[1] = (int)v17;
  a1[2] = (int)&v9[v8];
}


//======================================================================
// std::vector<WorldManager::TeleportInfo,std::allocator<WorldManager::TeleportInfo>>::_M_check_len(unsigned int,char const*)const
// address: 0x002F0F14   size: 0x2C (44 bytes)
//======================================================================
unsigned int __fastcall std::vector<WorldManager::TeleportInfo>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = (a1[1] - *a1) >> 3;
  if ( 0x1FFFFFFF - v3 < a2 )
    sub_3BD058(a3);
  v4 = (a1[1] - *a1) >> 3;
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0x1FFFFFFF )
    return 0x1FFFFFFF;
  return result;
}


//======================================================================
// std::vector<WorldManager::TeleportInfo,std::allocator<WorldManager::TeleportInfo>>::_M_default_append(unsigned int)
// address: 0x002F1A9C   size: 0x88 (136 bytes)
//======================================================================
void __fastcall std::vector<WorldManager::TeleportInfo>::_M_default_append(void **a1, unsigned int a2)
{
  _DWORD *v4; // r3
  unsigned int v5; // r2
  unsigned int v6; // r0
  unsigned int v7; // r6
  char *v8; // r7
  int v9; // r0
  unsigned int v10; // r2
  _DWORD *v11; // r3
  unsigned int v12; // r5

  if ( a2 != 0 )
  {
    v4 = a1[1];
    if ( ((_BYTE *)a1[2] - (_BYTE *)v4) >> 3 < a2 )
    {
      v6 = std::vector<WorldManager::TeleportInfo>::_M_check_len(a1, a2, (int)"vector::_M_default_append");
      v7 = v6;
      if ( v6 != 0 )
      {
        if ( v6 > 0x1FFFFFFF )
          sub_3BCEB4(v6);
        v8 = (char *)operator new(8 * v6);
      }
      else
      {
        v8 = nullptr;
      }
      v9 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<WorldManager::TeleportInfo>(
             *a1,
             (int)a1[1],
             v8);
      v10 = a2;
      v11 = (_DWORD *)v9;
      do
      {
        --v10;
        *v11 = 0;
        v11[1] = 0;
        v11 += 2;
      }
      while ( v10 != 0 );
      v12 = v9 + 8 * a2;
      if ( *a1 != nullptr )
        operator delete(*a1);
      *a1 = v8;
      a1[1] = (void *)v12;
      a1[2] = &v8[8 * v7];
    }
    else
    {
      v5 = a2;
      do
      {
        --v5;
        *v4 = 0;
        v4[1] = 0;
        v4 += 2;
      }
      while ( v5 != 0 );
      a1[1] = (char *)a1[1] + 8 * a2;
    }
  }
}


//======================================================================
// std::vector<WorldDesc *,std::allocator<WorldDesc *>>::_M_check_len(unsigned int,char const*)const
// address: 0x002F2468   size: 0x2C (44 bytes)
//======================================================================
unsigned int __fastcall std::vector<WorldDesc *>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = (a1[1] - *a1) >> 2;
  if ( 0x3FFFFFFF - v3 < a2 )
    sub_3BD058(a3);
  v4 = (a1[1] - *a1) >> 2;
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0x3FFFFFFF )
    return 0x3FFFFFFF;
  return result;
}


//======================================================================
// std::vector<WorldDesc *,std::allocator<WorldDesc *>>::_M_default_append(unsigned int)
// address: 0x002F24F0   size: 0x80 (128 bytes)
//======================================================================
void __fastcall std::vector<WorldDesc *>::_M_default_append(void **a1, unsigned int a2)
{
  _DWORD *v4; // r2
  unsigned int i; // r3
  unsigned int v6; // r0
  unsigned int v7; // r6
  char *v8; // r7
  int v9; // r0
  unsigned int v10; // r3
  _DWORD *v11; // r2
  unsigned int v12; // r5

  if ( a2 != 0 )
  {
    v4 = a1[1];
    if ( ((_BYTE *)a1[2] - (_BYTE *)v4) >> 2 < a2 )
    {
      v6 = std::vector<WorldDesc *>::_M_check_len(a1, a2, (int)"vector::_M_default_append");
      v7 = v6;
      if ( v6 != 0 )
      {
        if ( v6 > 0x3FFFFFFF )
          sub_3BCEB4(v6);
        v8 = (char *)operator new(4 * v6);
      }
      else
      {
        v8 = nullptr;
      }
      v9 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<WorldDesc *>(*a1, (int)a1[1], v8);
      v10 = a2;
      v11 = (_DWORD *)v9;
      do
      {
        --v10;
        *v11++ = 0;
      }
      while ( v10 != 0 );
      v12 = v9 + 4 * a2;
      if ( *a1 != nullptr )
        operator delete(*a1);
      *a1 = v8;
      a1[1] = (void *)v12;
      a1[2] = &v8[4 * v7];
    }
    else
    {
      for ( i = a2; i != 0; --i )
        *v4++ = 0;
      a1[1] = (char *)a1[1] + 4 * a2;
    }
  }
}


//======================================================================
// std::vector<WorldDesc *,std::allocator<WorldDesc *>>::push_back(WorldDesc * const&)
// address: 0x002F25C0   size: 0x74 (116 bytes)
//======================================================================
void __fastcall std::vector<WorldDesc *>::push_back(void **a1, _DWORD *a2)
{
  _DWORD *v3; // r3
  unsigned int v5; // r0
  int v6; // r6
  unsigned int v7; // r5
  _DWORD *v8; // r3
  int v9; // r7

  v3 = a1[1];
  if ( v3 == a1[2] )
  {
    v5 = std::vector<WorldDesc *>::_M_check_len(a1, 1u, (int)"vector::_M_emplace_back_aux");
    v6 = 4 * v5;
    if ( v5 != 0 )
    {
      if ( v5 > 0x3FFFFFFF )
        sub_3BCEB4(v5);
      v5 = operator new(4 * v5);
    }
    v7 = v5;
    v8 = (_DWORD *)(v5 + 4 * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2));
    if ( v8 != nullptr )
      *v8 = *a2;
    v9 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<WorldDesc *>(*a1, (int)a1[1], (void *)v5)
       + 4;
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
    a1[1] = (char *)a1[1] + 4;
  }
}


//======================================================================
// std::vector<GenerateItemDesc,std::allocator<GenerateItemDesc>>::_M_check_len(unsigned int,char const*)const
// address: 0x002FA770   size: 0x2C (44 bytes)
//======================================================================
unsigned int __fastcall std::vector<GenerateItemDesc>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = (a1[1] - *a1) >> 3;
  if ( 0x1FFFFFFF - v3 < a2 )
    sub_3BD058(a3);
  v4 = (a1[1] - *a1) >> 3;
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0x1FFFFFFF )
    return 0x1FFFFFFF;
  return result;
}


//======================================================================
// std::vector<GenerateItemDesc,std::allocator<GenerateItemDesc>>::_M_default_append(unsigned int)
// address: 0x002FA7F0   size: 0x88 (136 bytes)
//======================================================================
void __fastcall std::vector<GenerateItemDesc>::_M_default_append(void **a1, unsigned int a2)
{
  _DWORD *v4; // r3
  unsigned int v5; // r2
  unsigned int v6; // r0
  unsigned int v7; // r6
  char *v8; // r7
  int Item; // r0
  unsigned int v10; // r2
  _DWORD *v11; // r3
  unsigned int v12; // r5

  if ( a2 != 0 )
  {
    v4 = a1[1];
    if ( ((_BYTE *)a1[2] - (_BYTE *)v4) >> 3 < a2 )
    {
      v6 = std::vector<GenerateItemDesc>::_M_check_len(a1, a2, (int)"vector::_M_default_append");
      v7 = v6;
      if ( v6 != 0 )
      {
        if ( v6 > 0x1FFFFFFF )
          sub_3BCEB4(v6);
        v8 = (char *)operator new(8 * v6);
      }
      else
      {
        v8 = nullptr;
      }
      Item = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<GenerateItemDesc>(
               *a1,
               (int)a1[1],
               v8);
      v10 = a2;
      v11 = (_DWORD *)Item;
      do
      {
        --v10;
        *v11 = 0;
        v11[1] = 0;
        v11 += 2;
      }
      while ( v10 != 0 );
      v12 = Item + 8 * a2;
      if ( *a1 != nullptr )
        operator delete(*a1);
      *a1 = v8;
      a1[1] = (void *)v12;
      a1[2] = &v8[8 * v7];
    }
    else
    {
      v5 = a2;
      do
      {
        --v5;
        *v4 = 0;
        v4[1] = 0;
        v4 += 2;
      }
      while ( v5 != 0 );
      a1[1] = (char *)a1[1] + 8 * a2;
    }
  }
}


//======================================================================
// std::vector<GenerateItemDesc,std::allocator<GenerateItemDesc>>::push_back(GenerateItemDesc const&)
// address: 0x002FA880   size: 0x7E (126 bytes)
//======================================================================
void __fastcall std::vector<GenerateItemDesc>::push_back(void **a1, _DWORD *a2)
{
  _DWORD *v3; // r3
  unsigned int v5; // r0
  int v6; // r7
  unsigned int v7; // r5
  _DWORD *v8; // r3
  int v9; // r6

  v3 = a1[1];
  if ( v3 == a1[2] )
  {
    v5 = std::vector<GenerateItemDesc>::_M_check_len(a1, 1u, (int)"vector::_M_emplace_back_aux");
    v6 = 8 * v5;
    if ( v5 != 0 )
    {
      if ( v5 > 0x1FFFFFFF )
        sub_3BCEB4(v5);
      v5 = operator new(8 * v5);
    }
    v7 = v5;
    v8 = (_DWORD *)(v5 + 8 * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3));
    if ( v8 != nullptr )
    {
      *v8 = *a2;
      v8[1] = a2[1];
    }
    v9 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<GenerateItemDesc>(
           *a1,
           (int)a1[1],
           (void *)v5)
       + 8;
    if ( *a1 != nullptr )
      operator delete(*a1);
    *a1 = (void *)v7;
    a1[1] = (void *)v9;
    a1[2] = (void *)(v7 + v6);
  }
  else
  {
    if ( v3 != nullptr )
    {
      *v3 = *a2;
      v3[1] = a2[1];
    }
    a1[1] = (char *)a1[1] + 8;
  }
}


//======================================================================
// std::vector<GameEvent *,std::allocator<GameEvent *>>::push_back(GameEvent * const&)
// address: 0x002FC69C   size: 0x20 (32 bytes)
//======================================================================
void __fastcall std::vector<GameEvent *>::push_back(int a1, _DWORD *a2)
{
  _DWORD *v2; // r3

  v2 = *(_DWORD **)(a1 + 4);
  if ( v2 == *(_DWORD **)(a1 + 8) )
  {
    std::vector<GameEvent *>::_M_emplace_back_aux<GameEvent * const&>(a1, a2);
  }
  else
  {
    if ( v2 != nullptr )
      *v2 = *a2;
    *(_DWORD *)(a1 + 4) += 4;
  }
}


//======================================================================
// std::vector<void *,std::allocator<void *>>::_M_check_len(unsigned int,char const*)const
// address: 0x002FEA5C   size: 0x2C (44 bytes)
//======================================================================
unsigned int __fastcall std::vector<void *>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = (a1[1] - *a1) >> 2;
  if ( 0x3FFFFFFF - v3 < a2 )
    sub_3BD058(a3);
  v4 = (a1[1] - *a1) >> 2;
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0x3FFFFFFF )
    return 0x3FFFFFFF;
  return result;
}


//======================================================================
// std::vector<CollideAABB,std::allocator<CollideAABB>>::_M_check_len(unsigned int,char const*)const
// address: 0x00301344   size: 0x30 (48 bytes)
//======================================================================
unsigned int __fastcall std::vector<CollideAABB>::_M_check_len(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0
  unsigned int result; // r0

  v3 = -1431655765 * ((a1[1] - *a1) >> 3);
  if ( 178956970 - v3 < a2 )
    sub_3BD058(a3);
  v4 = -1431655765 * ((a1[1] - *a1) >> 3);
  if ( v3 < a2 )
    v4 = a2;
  result = v4 + v3;
  if ( result < v3 || result > 0xAAAAAAA )
    return 178956970;
  return result;
}


//======================================================================
// std::vector<CollideAABB,std::allocator<CollideAABB>>::_M_default_append(unsigned int)
// address: 0x003015BC   size: 0xDA (218 bytes)
//======================================================================
void __fastcall std::vector<CollideAABB>::_M_default_append(char **a1, unsigned int a2)
{
  char *v3; // r5
  unsigned int j; // r6
  unsigned int v5; // r0
  _DWORD *v6; // r2
  char *v7; // r12
  char *i; // r3
  int v9; // r6
  int v10; // r7
  int v11; // r6
  int v12; // r7
  char *v13; // r7
  unsigned int v14; // r5
  char *v15; // r6
  char *v16; // r7
  char *v17; // [sp+0h] [bp-14h]
  unsigned int v19; // [sp+8h] [bp-Ch]
  _DWORD *v20; // [sp+Ch] [bp-8h]

  if ( a2 != 0 )
  {
    v3 = a1[1];
    if ( -1431655765 * ((a1[2] - v3) >> 3) < a2 )
    {
      v5 = std::vector<CollideAABB>::_M_check_len(a1, a2, (int)"vector::_M_default_append");
      v19 = v5;
      if ( v5 != 0 )
      {
        if ( v5 > 0xAAAAAAA )
          sub_3BCEB4(v5);
        v20 = (_DWORD *)operator new(24 * v5);
      }
      else
      {
        v20 = nullptr;
      }
      v6 = v20;
      v17 = *a1;
      v7 = a1[1];
      for ( i = *a1; i != v7; i += 24 )
      {
        if ( v6 != nullptr )
        {
          v9 = *((_DWORD *)i + 1);
          v10 = *((_DWORD *)i + 2);
          *v6 = *(_DWORD *)i;
          v6[1] = v9;
          v6[2] = v10;
          v11 = *((_DWORD *)i + 4);
          v12 = *((_DWORD *)i + 5);
          v6[3] = *((_DWORD *)i + 3);
          v6[4] = v11;
          v6[5] = v12;
        }
        v6 += 6;
      }
      v13 = (char *)&v20[6 * ((178956971 * ((unsigned int)(i - v17) >> 3)) & 0x1FFFFFFF)];
      v14 = a2;
      v15 = v13;
      do
      {
        --v14;
        std::_Construct<CollideAABB<>>(v15);
        v15 += 24;
      }
      while ( v14 != 0 );
      v16 = &v13[24 * a2];
      if ( *a1 != nullptr )
        operator delete(*a1);
      *a1 = (char *)v20;
      a1[1] = v16;
      a1[2] = (char *)&v20[6 * v19];
    }
    else
    {
      for ( j = a2; j != 0; --j )
      {
        std::_Construct<CollideAABB<>>(v3);
        v3 += 24;
      }
      a1[1] += 24 * a2;
    }
  }
}


//======================================================================
// std::vector<CollideAABB,std::allocator<CollideAABB>>::resize(unsigned int)
// address: 0x003016A8   size: 0x28 (40 bytes)
//======================================================================
void __fastcall std::vector<CollideAABB>::resize(int a1, unsigned int a2)
{
  unsigned int v2; // r3

  v2 = -1431655765 * ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 3);
  if ( a2 <= v2 )
  {
    if ( a2 < v2 )
      *(_DWORD *)(a1 + 4) = *(_DWORD *)a1 + 24 * a2;
  }
  else
  {
    std::vector<CollideAABB>::_M_default_append((char **)a1, a2 - v2);
  }
}


//======================================================================
// std::vector<AITaskEntry,std::allocator<AITaskEntry>>::erase(__gnu_cxx::__normal_iterator<AITaskEntry*,std::vector<AITaskEntry,std::allocator<AITaskEntry>>>)
// address: 0x00303F6C   size: 0x34 (52 bytes)
//======================================================================
int __fastcall std::vector<AITaskEntry>::erase(int a1, int a2)
{
  int v2; // r6
  char *v3; // r4
  int i; // r6

  v2 = *(_DWORD *)(a1 + 4);
  v3 = (char *)(a2 + 8);
  if ( a2 + 8 != v2 )
  {
    for ( i = (v2 - (int)v3) >> 3; i > 0; --i )
    {
      j_memcpy(v3 - 8, v3, 5u);
      v3 += 8;
    }
  }
  *(_DWORD *)(a1 + 4) -= 8;
  return a2;
}


//======================================================================
// std::vector<AITaskEntry,std::allocator<AITaskEntry>>::push_back(AITaskEntry const&)
// address: 0x00304050   size: 0x24 (36 bytes)
//======================================================================
void __fastcall std::vector<AITaskEntry>::push_back(int *a1, _DWORD *a2)
{
  _DWORD *v2; // r3

  v2 = (_DWORD *)a1[1];
  if ( v2 == (_DWORD *)a1[2] )
  {
    std::vector<AITaskEntry>::_M_emplace_back_aux<AITaskEntry const&>(a1, a2);
  }
  else
  {
    if ( v2 != nullptr )
    {
      *v2 = *a2;
      v2[1] = a2[1];
    }
    a1[1] += 8;
  }
}

