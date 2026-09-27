// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: void_std::__introsort_loop

//======================================================================
// void std::__introsort_loop<__gnu_cxx::__normal_iterator<Ogre::RenderableEffectInfo *,std::vector<Ogre::RenderableEffectInfo,std::allocator<Ogre::RenderableEffectInfo>>>,int>(__gnu_cxx::__normal_iterator<Ogre::RenderableEffectInfo *,std::vector<Ogre::RenderableEffectInfo,std::allocator<Ogre::RenderableEffectInfo>>>,__gnu_cxx::__normal_iterator<Ogre::RenderableEffectInfo *,std::vector<Ogre::RenderableEffectInfo,std::allocator<Ogre::RenderableEffectInfo>>>,int)
// address: 0x0015AF2A   size: 0x160 (352 bytes)
//======================================================================
int __fastcall std::__introsort_loop<__gnu_cxx::__normal_iterator<Ogre::RenderableEffectInfo *,std::vector<Ogre::RenderableEffectInfo>>,int>(
        int result,
        int *a2,
        int a3)
{
  int v3; // r4
  int v4; // r2
  int v5; // r5
  int i; // r6
  int *j; // r5
  int v8; // r3
  int v9; // r5
  int v10; // r7
  int v11; // r6
  int v12; // r3
  int v13; // r2
  int *k; // r6
  _DWORD *v15; // r7
  int *v16; // r5
  float v17; // r3
  int *v18; // r7
  int v19; // r3
  float *v20; // [sp+Ch] [bp-28h]
  float v21; // [sp+Ch] [bp-28h]
  float v22; // [sp+10h] [bp-24h]
  float v23; // [sp+10h] [bp-24h]
  float v25; // [sp+18h] [bp-1Ch]
  float v27; // [sp+20h] [bp-14h]
  _DWORD *v28; // [sp+24h] [bp-10h]

  v3 = result;
  while ( 1 )
  {
    v4 = (int)a2 - v3;
    if ( (int)a2 - v3 <= 135 )
      return result;
    if ( a3 == 0 )
    {
      v5 = v4 >> 3;
      for ( i = ((v4 >> 3) - 2) >> 1; ; --i )
      {
        result = std::__adjust_heap<__gnu_cxx::__normal_iterator<Ogre::RenderableEffectInfo *,std::vector<Ogre::RenderableEffectInfo>>,int,Ogre::RenderableEffectInfo>(
                   v3,
                   i,
                   v5,
                   *(_DWORD *)(v3 + 8 * i),
                   *(float *)(v3 + 8 * i + 4));
        if ( i == 0 )
          break;
      }
      for ( j = a2;
            ;
            result = std::__pop_heap<__gnu_cxx::__normal_iterator<Ogre::RenderableEffectInfo *,std::vector<Ogre::RenderableEffectInfo>>>(
                       (int *)v3,
                       (int)j,
                       j) )
      {
        v8 = (int)j - v3;
        j -= 2;
        if ( v8 <= 15 )
          break;
      }
      return result;
    }
    v9 = v3 + 8 * (v4 >> 4);
    --a3;
    v28 = (_DWORD *)(v3 + 8);
    v22 = *(float *)(v3 + 12);
    v27 = *(float *)(v9 + 4);
    v10 = *(_DWORD *)v3;
    v11 = *(_DWORD *)(v3 + 4);
    v20 = (float *)(a2 - 1);
    if ( v22 <= v27 )
    {
      if ( v22 <= *v20 )
      {
        if ( v27 <= *v20 )
        {
          *(_DWORD *)v3 = *(_DWORD *)v9;
          *(_DWORD *)(v3 + 4) = *(_DWORD *)(v9 + 4);
          goto LABEL_21;
        }
LABEL_19:
        *(_DWORD *)v3 = *(a2 - 2);
        *(_DWORD *)(v3 + 4) = *(a2 - 1);
        *(a2 - 2) = v10;
        *(_DWORD *)v20 = v11;
        goto LABEL_22;
      }
      v13 = *(_DWORD *)(v3 + 12);
      *(_DWORD *)v3 = *(_DWORD *)(v3 + 8);
      *(_DWORD *)(v3 + 4) = v13;
    }
    else
    {
      v25 = *((float *)a2 - 1);
      if ( v27 > v25 )
      {
        *(_DWORD *)v3 = *(_DWORD *)v9;
        *(_DWORD *)(v3 + 4) = *(_DWORD *)(v9 + 4);
LABEL_21:
        *(_DWORD *)v9 = v10;
        *(_DWORD *)(v9 + 4) = v11;
        goto LABEL_22;
      }
      if ( v22 > v25 )
        goto LABEL_19;
      v12 = *(_DWORD *)(v3 + 12);
      *(_DWORD *)v3 = *(_DWORD *)(v3 + 8);
      *(_DWORD *)(v3 + 4) = v12;
    }
    *(_DWORD *)(v3 + 8) = v10;
    *(_DWORD *)(v3 + 12) = v11;
LABEL_22:
    for ( k = a2; ; *((float *)k + 1) = v21 )
    {
      v15 = v28;
      v23 = *(float *)(v3 + 4);
      do
      {
        v16 = v15;
        v17 = *((float *)v15 + 1);
        v15 += 2;
        v21 = v17;
      }
      while ( v17 > v23 );
      v18 = k - 2;
      do
      {
        k = v18;
        v18 -= 2;
      }
      while ( v23 > *((float *)v18 + 3) );
      if ( v16 >= k )
        break;
      v19 = *v16;
      *v16 = *k;
      v16[1] = k[1];
      *k = v19;
      v28 = v16 + 2;
    }
    result = std::__introsort_loop<__gnu_cxx::__normal_iterator<Ogre::RenderableEffectInfo *,std::vector<Ogre::RenderableEffectInfo>>,int>(
               v16,
               a2,
               a3);
    a2 = v16;
  }
}


//======================================================================
// void std::__introsort_loop<__gnu_cxx::__normal_iterator<Ogre::FilePkgBase **,std::vector<Ogre::FilePkgBase *,std::allocator<Ogre::FilePkgBase *>>>,int,bool (*)(Ogre::FilePkgBase *,Ogre::FilePkgBase *)>(__gnu_cxx::__normal_iterator<Ogre::FilePkgBase **,std::vector<Ogre::FilePkgBase *,std::allocator<Ogre::FilePkgBase *>>>,__gnu_cxx::__normal_iterator<Ogre::FilePkgBase **,std::vector<Ogre::FilePkgBase *,std::allocator<Ogre::FilePkgBase *>>>,int,bool (*)(Ogre::FilePkgBase *,Ogre::FilePkgBase *))
// address: 0x0016ECA8   size: 0xC2 (194 bytes)
//======================================================================
int __fastcall std::__introsort_loop<__gnu_cxx::__normal_iterator<Ogre::FilePkgBase **,std::vector<Ogre::FilePkgBase *>>,int,bool (*)(Ogre::FilePkgBase *,Ogre::FilePkgBase *)>(
        int result,
        int *a2,
        int a3,
        int (__fastcall *a4)(int, int))
{
  int *v4; // r4
  int v5; // r7
  int v6; // r7
  int i; // r5
  int *j; // r5
  int v9; // r3
  int v10; // r3
  int *v11; // r5
  int *k; // r7
  int *v13; // r3
  int *v14; // r5
  int v15; // r0
  int *v16; // r6
  int v17; // r0
  int v18; // r3

  v4 = (int *)result;
  while ( 1 )
  {
    v5 = (char *)a2 - (char *)v4;
    if ( (char *)a2 - (char *)v4 <= 67 )
      break;
    if ( a3 == 0 )
    {
      v6 = v5 >> 2;
      for ( i = (v6 - 2) >> 1; ; --i )
      {
        result = std::__adjust_heap<__gnu_cxx::__normal_iterator<Ogre::FilePkgBase **,std::vector<Ogre::FilePkgBase *>>,int,Ogre::FilePkgBase *,bool (*)(Ogre::FilePkgBase *,Ogre::FilePkgBase *)>(
                   (int)v4,
                   i,
                   v6,
                   v4[i],
                   (int (__fastcall *)(_DWORD, int, unsigned int))a4);
        if ( i == 0 )
          break;
      }
      for ( j = a2;
            ;
            result = std::__adjust_heap<__gnu_cxx::__normal_iterator<Ogre::FilePkgBase **,std::vector<Ogre::FilePkgBase *>>,int,Ogre::FilePkgBase *,bool (*)(Ogre::FilePkgBase *,Ogre::FilePkgBase *)>(
                       (int)v4,
                       0,
                       j - v4,
                       v10,
                       (int (__fastcall *)(_DWORD, int, unsigned int))a4) )
      {
        v9 = (char *)j-- - (char *)v4;
        if ( v9 <= 7 )
          break;
        v10 = *j;
        *j = *v4;
      }
      return result;
    }
    --a3;
    v11 = v4 + 1;
    std::__move_median_to_first<__gnu_cxx::__normal_iterator<Ogre::FilePkgBase **,std::vector<Ogre::FilePkgBase *>>,bool (*)(Ogre::FilePkgBase *,Ogre::FilePkgBase *)>(
      v4,
      v4 + 1,
      &v4[v5 >> 3],
      a2 - 1,
      a4);
    for ( k = a2; ; *k = v18 )
    {
      v13 = v11;
      do
      {
        v14 = v13;
        v15 = a4(*v13, *v4);
        v13 = v14 + 1;
      }
      while ( v15 != 0 );
      v16 = k - 1;
      do
      {
        v17 = a4(*v4, *v16);
        k = v16--;
      }
      while ( v17 != 0 );
      if ( v14 >= k )
        break;
      v18 = *v14;
      *v14 = *k;
      v11 = v14 + 1;
    }
    result = std::__introsort_loop<__gnu_cxx::__normal_iterator<Ogre::FilePkgBase **,std::vector<Ogre::FilePkgBase *>>,int,bool (*)(Ogre::FilePkgBase *,Ogre::FilePkgBase *)>(
               v14,
               a2,
               a3,
               a4);
    a2 = v14;
  }
  return result;
}


//======================================================================
// void std::__introsort_loop<__gnu_cxx::__normal_iterator<Ogre::Entity::BindObj **,std::vector<Ogre::Entity::BindObj *,std::allocator<Ogre::Entity::BindObj *>>>,int,bool (*)(Ogre::Entity::BindObj const*,Ogre::Entity::BindObj const*)>(__gnu_cxx::__normal_iterator<Ogre::Entity::BindObj **,std::vector<Ogre::Entity::BindObj *,std::allocator<Ogre::Entity::BindObj *>>>,__gnu_cxx::__normal_iterator<Ogre::Entity::BindObj **,std::vector<Ogre::Entity::BindObj *,std::allocator<Ogre::Entity::BindObj *>>>,int,bool (*)(Ogre::Entity::BindObj const*,Ogre::Entity::BindObj const*))
// address: 0x0018D3E8   size: 0xC2 (194 bytes)
//======================================================================
int __fastcall std::__introsort_loop<__gnu_cxx::__normal_iterator<Ogre::Entity::BindObj **,std::vector<Ogre::Entity::BindObj *>>,int,bool (*)(Ogre::Entity::BindObj const*,Ogre::Entity::BindObj const*)>(
        int result,
        int *a2,
        int a3,
        int (__fastcall *a4)(int, int))
{
  int *v4; // r4
  int v5; // r7
  int v6; // r7
  int i; // r5
  int *j; // r5
  int v9; // r3
  int v10; // r3
  int *v11; // r5
  int *k; // r7
  int *v13; // r3
  int *v14; // r5
  int v15; // r0
  int *v16; // r6
  int v17; // r0
  int v18; // r3

  v4 = (int *)result;
  while ( 1 )
  {
    v5 = (char *)a2 - (char *)v4;
    if ( (char *)a2 - (char *)v4 <= 67 )
      break;
    if ( a3 == 0 )
    {
      v6 = v5 >> 2;
      for ( i = (v6 - 2) >> 1; ; --i )
      {
        result = std::__adjust_heap<__gnu_cxx::__normal_iterator<Ogre::Entity::BindObj **,std::vector<Ogre::Entity::BindObj *>>,int,Ogre::Entity::BindObj *,bool (*)(Ogre::Entity::BindObj const*,Ogre::Entity::BindObj const*)>(
                   (int)v4,
                   i,
                   v6,
                   v4[i],
                   (int (__fastcall *)(_DWORD, int, unsigned int))a4);
        if ( i == 0 )
          break;
      }
      for ( j = a2;
            ;
            result = std::__adjust_heap<__gnu_cxx::__normal_iterator<Ogre::Entity::BindObj **,std::vector<Ogre::Entity::BindObj *>>,int,Ogre::Entity::BindObj *,bool (*)(Ogre::Entity::BindObj const*,Ogre::Entity::BindObj const*)>(
                       (int)v4,
                       0,
                       j - v4,
                       v10,
                       (int (__fastcall *)(_DWORD, int, unsigned int))a4) )
      {
        v9 = (char *)j-- - (char *)v4;
        if ( v9 <= 7 )
          break;
        v10 = *j;
        *j = *v4;
      }
      return result;
    }
    --a3;
    v11 = v4 + 1;
    std::__move_median_to_first<__gnu_cxx::__normal_iterator<Ogre::Entity::BindObj **,std::vector<Ogre::Entity::BindObj *>>,bool (*)(Ogre::Entity::BindObj const*,Ogre::Entity::BindObj const*)>(
      v4,
      v4 + 1,
      &v4[v5 >> 3],
      a2 - 1,
      a4);
    for ( k = a2; ; *k = v18 )
    {
      v13 = v11;
      do
      {
        v14 = v13;
        v15 = a4(*v13, *v4);
        v13 = v14 + 1;
      }
      while ( v15 != 0 );
      v16 = k - 1;
      do
      {
        v17 = a4(*v4, *v16);
        k = v16--;
      }
      while ( v17 != 0 );
      if ( v14 >= k )
        break;
      v18 = *v14;
      *v14 = *k;
      v11 = v14 + 1;
    }
    result = std::__introsort_loop<__gnu_cxx::__normal_iterator<Ogre::Entity::BindObj **,std::vector<Ogre::Entity::BindObj *>>,int,bool (*)(Ogre::Entity::BindObj const*,Ogre::Entity::BindObj const*)>(
               v14,
               a2,
               a3,
               a4);
    a2 = v14;
  }
  return result;
}


//======================================================================
// void std::__introsort_loop<Ogre::AnimPlayTrack **,int,bool (*)(Ogre::AnimPlayTrack *,Ogre::AnimPlayTrack *)>(Ogre::AnimPlayTrack **,Ogre::AnimPlayTrack **,int,bool (*)(Ogre::AnimPlayTrack *,Ogre::AnimPlayTrack *))
// address: 0x001929E4   size: 0x11E (286 bytes)
//======================================================================
int __fastcall std::__introsort_loop<Ogre::AnimPlayTrack **,int,bool (*)(Ogre::AnimPlayTrack *,Ogre::AnimPlayTrack *)>(
        int result,
        int *a2,
        int a3,
        int (__fastcall *a4)(int, int))
{
  int *v4; // r4
  int v5; // r7
  int v6; // r7
  int i; // r5
  int v8; // r3
  int *v9; // r7
  int *v10; // r5
  int *v11; // r6
  int v12; // r3
  int v13; // r0
  int v14; // r0
  int *j; // r6
  int v16; // r3

  v4 = (int *)result;
  while ( 1 )
  {
    v5 = (char *)a2 - (char *)v4;
    if ( (char *)a2 - (char *)v4 <= 67 )
      return result;
    if ( a3 == 0 )
    {
      v6 = v5 >> 2;
      for ( i = (v6 - 2) >> 1; ; --i )
      {
        result = std::__adjust_heap<Ogre::AnimPlayTrack **,int,Ogre::AnimPlayTrack *,bool (*)(Ogre::AnimPlayTrack *,Ogre::AnimPlayTrack *)>(
                   (int)v4,
                   i,
                   v6,
                   v4[i],
                   a4);
        if ( i == 0 )
          break;
      }
      while ( (char *)a2 - (char *)v4 > 7 )
      {
        v8 = *--a2;
        *a2 = *v4;
        result = std::__adjust_heap<Ogre::AnimPlayTrack **,int,Ogre::AnimPlayTrack *,bool (*)(Ogre::AnimPlayTrack *,Ogre::AnimPlayTrack *)>(
                   (int)v4,
                   0,
                   a2 - v4,
                   v8,
                   a4);
      }
      return result;
    }
    v9 = &v4[v5 >> 3];
    --a3;
    v10 = v4 + 1;
    v11 = a2 - 1;
    if ( a4(v4[1], *v9) != 0 )
    {
      if ( a4(*v9, *v11) != 0 )
      {
        v12 = *v4;
        *v4 = *v9;
LABEL_20:
        *v9 = v12;
        goto LABEL_21;
      }
      v13 = a4(v4[1], *v11);
      v12 = *v4;
      if ( v13 != 0 )
        goto LABEL_18;
      *v4 = v4[1];
    }
    else
    {
      if ( a4(v4[1], *v11) == 0 )
      {
        v14 = a4(*v9, *v11);
        v12 = *v4;
        if ( v14 == 0 )
        {
          *v4 = *v9;
          goto LABEL_20;
        }
LABEL_18:
        *v4 = *v11;
        *v11 = v12;
        goto LABEL_21;
      }
      v12 = *v4;
      *v4 = v4[1];
    }
    v4[1] = v12;
LABEL_21:
    for ( j = a2; ; *j = v16 )
    {
      while ( a4(*v10, *v4) != 0 )
        ++v10;
      do
        --j;
      while ( a4(*v4, *j) != 0 );
      if ( v10 >= j )
        break;
      v16 = *v10;
      *v10++ = *j;
    }
    result = std::__introsort_loop<Ogre::AnimPlayTrack **,int,bool (*)(Ogre::AnimPlayTrack *,Ogre::AnimPlayTrack *)>(
               v10,
               a2,
               a3,
               a4);
    a2 = v10;
  }
}


//======================================================================
// void std::__introsort_loop<__gnu_cxx::__normal_iterator<Ogre::MaterialParam **,std::vector<Ogre::MaterialParam *,std::allocator<Ogre::MaterialParam *>>>,int,bool (*)(Ogre::MaterialParam *,Ogre::MaterialParam *)>(__gnu_cxx::__normal_iterator<Ogre::MaterialParam **,std::vector<Ogre::MaterialParam *,std::allocator<Ogre::MaterialParam *>>>,__gnu_cxx::__normal_iterator<Ogre::MaterialParam **,std::vector<Ogre::MaterialParam *,std::allocator<Ogre::MaterialParam *>>>,int,bool (*)(Ogre::MaterialParam *,Ogre::MaterialParam *))
// address: 0x00196340   size: 0xC2 (194 bytes)
//======================================================================
int __fastcall std::__introsort_loop<__gnu_cxx::__normal_iterator<Ogre::MaterialParam **,std::vector<Ogre::MaterialParam *>>,int,bool (*)(Ogre::MaterialParam *,Ogre::MaterialParam *)>(
        int result,
        int *a2,
        int a3,
        int (__fastcall *a4)(int, int))
{
  int *v4; // r4
  int v5; // r7
  int v6; // r7
  int i; // r5
  int *j; // r5
  int v9; // r3
  int v10; // r3
  int *v11; // r5
  int *k; // r7
  int *v13; // r3
  int *v14; // r5
  int v15; // r0
  int *v16; // r6
  int v17; // r0
  int v18; // r3

  v4 = (int *)result;
  while ( 1 )
  {
    v5 = (char *)a2 - (char *)v4;
    if ( (char *)a2 - (char *)v4 <= 67 )
      break;
    if ( a3 == 0 )
    {
      v6 = v5 >> 2;
      for ( i = (v6 - 2) >> 1; ; --i )
      {
        result = std::__adjust_heap<__gnu_cxx::__normal_iterator<Ogre::MaterialParam **,std::vector<Ogre::MaterialParam *>>,int,Ogre::MaterialParam *,bool (*)(Ogre::MaterialParam *,Ogre::MaterialParam *)>(
                   (int)v4,
                   i,
                   v6,
                   v4[i],
                   (int (__fastcall *)(_DWORD, int, unsigned int))a4);
        if ( i == 0 )
          break;
      }
      for ( j = a2;
            ;
            result = std::__adjust_heap<__gnu_cxx::__normal_iterator<Ogre::MaterialParam **,std::vector<Ogre::MaterialParam *>>,int,Ogre::MaterialParam *,bool (*)(Ogre::MaterialParam *,Ogre::MaterialParam *)>(
                       (int)v4,
                       0,
                       j - v4,
                       v10,
                       (int (__fastcall *)(_DWORD, int, unsigned int))a4) )
      {
        v9 = (char *)j-- - (char *)v4;
        if ( v9 <= 7 )
          break;
        v10 = *j;
        *j = *v4;
      }
      return result;
    }
    --a3;
    v11 = v4 + 1;
    std::__move_median_to_first<__gnu_cxx::__normal_iterator<Ogre::MaterialParam **,std::vector<Ogre::MaterialParam *>>,bool (*)(Ogre::MaterialParam *,Ogre::MaterialParam *)>(
      v4,
      v4 + 1,
      &v4[v5 >> 3],
      a2 - 1,
      a4);
    for ( k = a2; ; *k = v18 )
    {
      v13 = v11;
      do
      {
        v14 = v13;
        v15 = a4(*v13, *v4);
        v13 = v14 + 1;
      }
      while ( v15 != 0 );
      v16 = k - 1;
      do
      {
        v17 = a4(*v4, *v16);
        k = v16--;
      }
      while ( v17 != 0 );
      if ( v14 >= k )
        break;
      v18 = *v14;
      *v14 = *k;
      v11 = v14 + 1;
    }
    result = std::__introsort_loop<__gnu_cxx::__normal_iterator<Ogre::MaterialParam **,std::vector<Ogre::MaterialParam *>>,int,bool (*)(Ogre::MaterialParam *,Ogre::MaterialParam *)>(
               v14,
               a2,
               a3,
               a4);
    a2 = v14;
  }
  return result;
}


//======================================================================
// void std::__introsort_loop<__gnu_cxx::__normal_iterator<Ogre::TileModel **,std::vector<Ogre::TileModel *,std::allocator<Ogre::TileModel *>>>,int,bool (*)(Ogre::TileModel *,Ogre::TileModel *)>(__gnu_cxx::__normal_iterator<Ogre::TileModel **,std::vector<Ogre::TileModel *,std::allocator<Ogre::TileModel *>>>,__gnu_cxx::__normal_iterator<Ogre::TileModel **,std::vector<Ogre::TileModel *,std::allocator<Ogre::TileModel *>>>,int,bool (*)(Ogre::TileModel *,Ogre::TileModel *))
// address: 0x0019FB88   size: 0xC2 (194 bytes)
//======================================================================
int __fastcall std::__introsort_loop<__gnu_cxx::__normal_iterator<Ogre::TileModel **,std::vector<Ogre::TileModel *>>,int,bool (*)(Ogre::TileModel *,Ogre::TileModel *)>(
        int result,
        int *a2,
        int a3,
        int (__fastcall *a4)(int, int))
{
  int *v4; // r4
  int v5; // r7
  int v6; // r7
  int i; // r5
  int *j; // r5
  int v9; // r3
  int v10; // r3
  int *v11; // r5
  int *k; // r7
  int *v13; // r3
  int *v14; // r5
  int v15; // r0
  int *v16; // r6
  int v17; // r0
  int v18; // r3

  v4 = (int *)result;
  while ( 1 )
  {
    v5 = (char *)a2 - (char *)v4;
    if ( (char *)a2 - (char *)v4 <= 67 )
      break;
    if ( a3 == 0 )
    {
      v6 = v5 >> 2;
      for ( i = (v6 - 2) >> 1; ; --i )
      {
        result = std::__adjust_heap<__gnu_cxx::__normal_iterator<Ogre::TileModel **,std::vector<Ogre::TileModel *>>,int,Ogre::TileModel *,bool (*)(Ogre::TileModel *,Ogre::TileModel *)>(
                   (int)v4,
                   i,
                   v6,
                   v4[i],
                   (int (__fastcall *)(_DWORD, int, unsigned int))a4);
        if ( i == 0 )
          break;
      }
      for ( j = a2;
            ;
            result = std::__adjust_heap<__gnu_cxx::__normal_iterator<Ogre::TileModel **,std::vector<Ogre::TileModel *>>,int,Ogre::TileModel *,bool (*)(Ogre::TileModel *,Ogre::TileModel *)>(
                       (int)v4,
                       0,
                       j - v4,
                       v10,
                       (int (__fastcall *)(_DWORD, int, unsigned int))a4) )
      {
        v9 = (char *)j-- - (char *)v4;
        if ( v9 <= 7 )
          break;
        v10 = *j;
        *j = *v4;
      }
      return result;
    }
    --a3;
    v11 = v4 + 1;
    std::__move_median_to_first<__gnu_cxx::__normal_iterator<Ogre::TileModel **,std::vector<Ogre::TileModel *>>,bool (*)(Ogre::TileModel *,Ogre::TileModel *)>(
      v4,
      v4 + 1,
      &v4[v5 >> 3],
      a2 - 1,
      a4);
    for ( k = a2; ; *k = v18 )
    {
      v13 = v11;
      do
      {
        v14 = v13;
        v15 = a4(*v13, *v4);
        v13 = v14 + 1;
      }
      while ( v15 != 0 );
      v16 = k - 1;
      do
      {
        v17 = a4(*v4, *v16);
        k = v16--;
      }
      while ( v17 != 0 );
      if ( v14 >= k )
        break;
      v18 = *v14;
      *v14 = *k;
      v11 = v14 + 1;
    }
    result = std::__introsort_loop<__gnu_cxx::__normal_iterator<Ogre::TileModel **,std::vector<Ogre::TileModel *>>,int,bool (*)(Ogre::TileModel *,Ogre::TileModel *)>(
               v14,
               a2,
               a3,
               a4);
    a2 = v14;
  }
  return result;
}


//======================================================================
// void std::__introsort_loop<__gnu_cxx::__normal_iterator<Ogre::ModelInstanceData *,std::vector<Ogre::ModelInstanceData,std::allocator<Ogre::ModelInstanceData>>>,int>(__gnu_cxx::__normal_iterator<Ogre::ModelInstanceData *,std::vector<Ogre::ModelInstanceData,std::allocator<Ogre::ModelInstanceData>>>,__gnu_cxx::__normal_iterator<Ogre::ModelInstanceData *,std::vector<Ogre::ModelInstanceData,std::allocator<Ogre::ModelInstanceData>>>,int)
// address: 0x0019FC70   size: 0x112 (274 bytes)
//======================================================================
int __fastcall std::__introsort_loop<__gnu_cxx::__normal_iterator<Ogre::ModelInstanceData *,std::vector<Ogre::ModelInstanceData>>,int>(
        int result,
        unsigned int a2,
        int a3)
{
  int v3; // r4
  int v4; // r7
  int i; // r5
  int j; // r5
  int v7; // r3
  int v8; // r7
  int v9; // r5
  int v10; // r6
  int v11; // r0
  int v12; // r1
  unsigned int v13; // r7
  _BOOL4 v14; // r0
  unsigned int v15; // r6
  int v16; // r5
  _BOOL4 v17; // r0
  _BYTE v20[64]; // [sp+8h] [bp-84h] BYREF
  _BYTE v21[68]; // [sp+48h] [bp-44h] BYREF

  v3 = result;
  while ( 1 )
  {
    v4 = a2 - v3;
    if ( (int)(a2 - v3) <= 1087 )
      return result;
    if ( a3 == 0 )
    {
      for ( i = ((v4 >> 6) - 2) >> 1; ; --i )
      {
        Ogre::ModelInstanceData::ModelInstanceData((int)v20, v3 + (i << 6));
        Ogre::ModelInstanceData::ModelInstanceData((int)v21, (int)v20);
        result = std::__adjust_heap<__gnu_cxx::__normal_iterator<Ogre::ModelInstanceData *,std::vector<Ogre::ModelInstanceData>>,int,Ogre::ModelInstanceData>(
                   v3,
                   i,
                   v4 >> 6,
                   (int)v21);
        if ( i == 0 )
          break;
      }
      for ( j = a2;
            ;
            result = std::__pop_heap<__gnu_cxx::__normal_iterator<Ogre::ModelInstanceData *,std::vector<Ogre::ModelInstanceData>>>(
                       v3,
                       j,
                       j) )
      {
        v7 = j - v3;
        j -= 64;
        if ( v7 <= 127 )
          break;
      }
      return result;
    }
    v8 = v3 + (v4 >> 7 << 6);
    v9 = v3 + 64;
    --a3;
    v10 = a2 - 64;
    if ( Ogre::operator<(v3 + 64, v8) )
    {
      if ( Ogre::operator<(v8, v10) )
        goto LABEL_18;
      if ( Ogre::operator<(v3 + 64, v10) )
        goto LABEL_17;
    }
    else if ( !Ogre::operator<(v3 + 64, v10) )
    {
      if ( !Ogre::operator<(v8, v10) )
      {
LABEL_18:
        v11 = v3;
        v12 = v8;
        goto LABEL_19;
      }
LABEL_17:
      v11 = v3;
      v12 = a2 - 64;
      goto LABEL_19;
    }
    v11 = v3;
    v12 = v3 + 64;
LABEL_19:
    std::swap<Ogre::ModelInstanceData>(v11, v12);
    v13 = a2;
    while ( 1 )
    {
      do
      {
        v14 = Ogre::operator<(v9, v3);
        v15 = v9;
        v9 += 64;
      }
      while ( v14 );
      v16 = v13 - 64;
      do
      {
        v17 = Ogre::operator<(v3, v16);
        v13 = v16;
        v16 -= 64;
      }
      while ( v17 );
      if ( v15 >= v13 )
        break;
      std::swap<Ogre::ModelInstanceData>(v15, v13);
      v9 = v15 + 64;
    }
    result = std::__introsort_loop<__gnu_cxx::__normal_iterator<Ogre::ModelInstanceData *,std::vector<Ogre::ModelInstanceData>>,int>();
    a2 = v15;
  }
}


//======================================================================
// void std::__introsort_loop<std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,int,bool (*)(ChunkIndex,ChunkIndex)>(std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,int,bool (*)(ChunkIndex,ChunkIndex))
// address: 0x002B0DBA   size: 0x108 (264 bytes)
//======================================================================
int __fastcall std::__introsort_loop<std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,int,bool (*)(ChunkIndex,ChunkIndex)>(
        _DWORD *a1,
        _DWORD *a2,
        int a3,
        int (__fastcall *a4)(_DWORD, _DWORD, int, int))
{
  int result; // r0
  _DWORD v9[4]; // [sp+10h] [bp-84h] BYREF
  _DWORD v10[4]; // [sp+20h] [bp-74h] BYREF
  _DWORD v11[4]; // [sp+30h] [bp-64h] BYREF
  _DWORD v12[4]; // [sp+40h] [bp-54h] BYREF
  _DWORD v13[4]; // [sp+50h] [bp-44h] BYREF
  __int128 v14; // [sp+60h] [bp-34h] BYREF
  _DWORD v15[4]; // [sp+70h] [bp-24h] BYREF
  int *v16[5]; // [sp+80h] [bp-14h] BYREF

  while ( 1 )
  {
    result = std::operator-<ChunkIndex,ChunkIndex&,ChunkIndex*>(a2, a1);
    if ( result <= 16 )
      break;
    if ( a3 == 0 )
    {
      std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v9, a1);
      std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v10, a2);
      std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v11, a2);
      std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v16, v9);
      std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v15, v10);
      std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(&v14, v11);
      std::__heap_select<std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,bool (*)(ChunkIndex,ChunkIndex)>(
        v16,
        v15,
        &v14,
        a4);
      std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v13, v9);
      std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v12, v10);
      while ( 1 )
      {
        result = std::operator-<ChunkIndex,ChunkIndex&,ChunkIndex*>(v12, v13);
        if ( result <= 1 )
          break;
        std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::operator--(v12);
        std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v16, v13);
        std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v15, v12);
        std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(&v14, v12);
        std::__pop_heap<std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,bool (*)(ChunkIndex,ChunkIndex)>(
          v16,
          v15,
          (int **)&v14,
          a4);
      }
      return result;
    }
    --a3;
    std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v15, a1);
    std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v16, a2);
    std::__unguarded_partition_pivot<std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,bool (*)(ChunkIndex,ChunkIndex)>(
      &v14,
      v15,
      v16,
      a4);
    std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v15, &v14);
    std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v16, a2);
    std::__introsort_loop<std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,int,bool (*)(ChunkIndex,ChunkIndex)>(
      v15,
      v16,
      a3,
      a4);
    *(_OWORD *)a2 = v14;
  }
  return result;
}


//======================================================================
// void std::__introsort_loop<__gnu_cxx::__normal_iterator<ChunkIndex *,std::vector<ChunkIndex,std::allocator<ChunkIndex>>>,int,bool (*)(ChunkIndex,ChunkIndex)>(__gnu_cxx::__normal_iterator<ChunkIndex *,std::vector<ChunkIndex,std::allocator<ChunkIndex>>>,__gnu_cxx::__normal_iterator<ChunkIndex *,std::vector<ChunkIndex,std::allocator<ChunkIndex>>>,int,bool (*)(ChunkIndex,ChunkIndex))
// address: 0x002BBD1C   size: 0x17A (378 bytes)
//======================================================================
int __fastcall std::__introsort_loop<__gnu_cxx::__normal_iterator<ChunkIndex *,std::vector<ChunkIndex>>,int,bool (*)(ChunkIndex,ChunkIndex)>(
        int result,
        int *a2,
        int a3,
        int (__fastcall *a4)(int, int, int, int))
{
  int *v4; // r4
  int v5; // r5
  int v6; // r5
  int i; // r6
  int *j; // r5
  int v9; // r3
  int *v10; // r5
  int *v11; // r6
  int v12; // r2
  int v13; // r3
  int v14; // r0
  int v15; // r1
  int v16; // r5
  int v17; // r0
  int *v18; // r6
  int *v19; // r7
  int *v20; // r5
  int v21; // r0
  int v22; // r0
  int v23; // r2
  int v24; // r3
  int *v25; // [sp+8h] [bp-1Ch]
  int *v26; // [sp+8h] [bp-1Ch]

  v4 = (int *)result;
  while ( 1 )
  {
    v5 = (char *)a2 - (char *)v4;
    if ( (char *)a2 - (char *)v4 <= 135 )
      return result;
    if ( a3 == 0 )
    {
      v6 = v5 >> 3;
      for ( i = (v6 - 2) >> 1; ; --i )
      {
        result = std::__adjust_heap<__gnu_cxx::__normal_iterator<ChunkIndex *,std::vector<ChunkIndex>>,int,ChunkIndex,bool (*)(ChunkIndex,ChunkIndex)>(
                   (int)v4,
                   i,
                   v6,
                   v4[2 * i],
                   v4[2 * i + 1],
                   a4);
        if ( i == 0 )
          break;
      }
      for ( j = a2;
            ;
            result = std::__pop_heap<__gnu_cxx::__normal_iterator<ChunkIndex *,std::vector<ChunkIndex>>,bool (*)(ChunkIndex,ChunkIndex)>(
                       v4,
                       (int)j,
                       j,
                       a4) )
      {
        v9 = (char *)j - (char *)v4;
        j -= 2;
        if ( v9 <= 15 )
          break;
      }
      return result;
    }
    --a3;
    v10 = &v4[2 * (v5 >> 4)];
    v25 = v4 + 2;
    v11 = a2 - 2;
    if ( a4(v4[2], v4[3], *v10, v10[1]) != 0 )
    {
      if ( a4(*v10, v10[1], *(a2 - 2), *(a2 - 1)) != 0 )
      {
        v12 = *v4;
        v13 = v4[1];
        *v4 = *v10;
        v4[1] = v10[1];
LABEL_21:
        *v10 = v12;
        v10[1] = v13;
        goto LABEL_22;
      }
      v14 = a4(v4[2], v4[3], *(a2 - 2), *(a2 - 1));
      v12 = *v4;
      v13 = v4[1];
      if ( v14 != 0 )
        goto LABEL_19;
      v15 = v4[3];
      *v4 = v4[2];
      v4[1] = v15;
    }
    else
    {
      if ( a4(v4[2], v4[3], *(a2 - 2), *(a2 - 1)) == 0 )
      {
        v17 = a4(*v10, v10[1], *(a2 - 2), *(a2 - 1));
        v12 = *v4;
        v13 = v4[1];
        if ( v17 == 0 )
        {
          *v4 = *v10;
          v4[1] = v10[1];
          goto LABEL_21;
        }
LABEL_19:
        *v4 = *v11;
        v4[1] = *(a2 - 1);
        *v11 = v12;
        *(a2 - 1) = v13;
        goto LABEL_22;
      }
      v16 = v4[3];
      v12 = *v4;
      v13 = v4[1];
      *v4 = v4[2];
      v4[1] = v16;
    }
    v4[2] = v12;
    v4[3] = v13;
LABEL_22:
    v18 = a2;
    while ( 1 )
    {
      v19 = v25;
      do
      {
        v20 = v19;
        v21 = a4(*v19, v19[1], *v4, v4[1]);
        v19 += 2;
      }
      while ( v21 != 0 );
      v26 = v18 - 2;
      do
      {
        v18 = v26;
        v22 = a4(*v4, v4[1], *v26, v26[1]);
        v26 -= 2;
      }
      while ( v22 != 0 );
      if ( v20 >= v18 )
        break;
      v23 = *v20;
      v24 = v20[1];
      *v20 = *v18;
      v20[1] = v18[1];
      *v18 = v23;
      v18[1] = v24;
      v25 = v20 + 2;
    }
    result = std::__introsort_loop<__gnu_cxx::__normal_iterator<ChunkIndex *,std::vector<ChunkIndex>>,int,bool (*)(ChunkIndex,ChunkIndex)>(
               v20,
               a2,
               a3,
               a4);
    a2 = v20;
  }
}


//======================================================================
// void std::__introsort_loop<__gnu_cxx::__normal_iterator<SubMeshInfo *,std::vector<SubMeshInfo,std::allocator<SubMeshInfo>>>,int>(__gnu_cxx::__normal_iterator<SubMeshInfo *,std::vector<SubMeshInfo,std::allocator<SubMeshInfo>>>,__gnu_cxx::__normal_iterator<SubMeshInfo *,std::vector<SubMeshInfo,std::allocator<SubMeshInfo>>>,int)
// address: 0x002CF6CC   size: 0xE4 (228 bytes)
//======================================================================
int __fastcall std::__introsort_loop<__gnu_cxx::__normal_iterator<SubMeshInfo *,std::vector<SubMeshInfo>>,int>(
        int result,
        int *a2,
        int a3)
{
  int *v3; // r4
  int v6; // r1
  int v7; // r7
  int i; // r6
  int v9; // r3
  int *v10; // r6
  int *v11; // r1
  unsigned int v12; // r2
  unsigned int v13; // r3
  unsigned int v14; // r0
  int *v15; // r0
  unsigned int v16; // r2
  int *v17; // r3
  int *v18; // r6
  unsigned int v19; // r1
  int *v20; // r3
  int *v21; // [sp+Ch] [bp-18h]

  v3 = (int *)result;
  while ( (char *)a2 - (char *)v3 > 203 )
  {
    v6 = a2 - v3;
    if ( a3 == 0 )
    {
      v7 = -1431655765 * v6;
      for ( i = (-1431655765 * v6 - 2) >> 1; ; --i )
      {
        result = std::__adjust_heap<__gnu_cxx::__normal_iterator<SubMeshInfo *,std::vector<SubMeshInfo>>,int,SubMeshInfo>(
                   (int)v3,
                   i,
                   v7,
                   v3[3 * i],
                   v3[3 * i + 1],
                   v3[3 * i + 2]);
        if ( i == 0 )
          break;
      }
      while ( 1 )
      {
        v9 = (char *)a2 - (char *)v3;
        a2 -= 3;
        if ( v9 <= 23 )
          break;
        result = std::__pop_heap<__gnu_cxx::__normal_iterator<SubMeshInfo *,std::vector<SubMeshInfo>>>(v3, (int)a2, a2);
      }
      return result;
    }
    v10 = v3 + 3;
    v11 = &v3[3 * ((-1431655765 * v6) >> 1)];
    v12 = v3[4];
    v13 = v11[1];
    --a3;
    v14 = *(a2 - 2);
    if ( v12 >= v13 )
    {
      if ( v12 >= v14 )
      {
        if ( v13 >= v14 )
        {
LABEL_17:
          v15 = v3;
          goto LABEL_18;
        }
LABEL_16:
        v15 = v3;
        v11 = a2 - 3;
        goto LABEL_18;
      }
    }
    else
    {
      if ( v13 < v14 )
        goto LABEL_17;
      if ( v12 < v14 )
        goto LABEL_16;
    }
    v15 = v3;
    v11 = v3 + 3;
LABEL_18:
    std::swap<SubMeshInfo>(v15, v11);
    v21 = a2;
    while ( 1 )
    {
      v16 = v3[1];
      v17 = v10;
      do
      {
        v18 = v17;
        v19 = v17[1];
        v17 += 3;
      }
      while ( v19 < v16 );
      v20 = v21 - 3;
      do
      {
        v21 = v20;
        v20 -= 3;
      }
      while ( v16 < v20[4] );
      if ( v18 >= v21 )
        break;
      std::swap<SubMeshInfo>(v18, v21);
      v10 = v18 + 3;
    }
    result = std::__introsort_loop<__gnu_cxx::__normal_iterator<SubMeshInfo *,std::vector<SubMeshInfo>>,int>();
    a2 = v18;
  }
  return result;
}


//======================================================================
// void std::__introsort_loop<__gnu_cxx::__normal_iterator<BackPackGrid *,std::vector<BackPackGrid,std::allocator<BackPackGrid>>>,int,bool (*)(BackPackGrid const&,BackPackGrid const&)>(__gnu_cxx::__normal_iterator<BackPackGrid *,std::vector<BackPackGrid,std::allocator<BackPackGrid>>>,__gnu_cxx::__normal_iterator<BackPackGrid *,std::vector<BackPackGrid,std::allocator<BackPackGrid>>>,int,bool (*)(BackPackGrid const&,BackPackGrid const&))
// address: 0x002DEA14   size: 0x12C (300 bytes)
//======================================================================
void *__fastcall std::__introsort_loop<__gnu_cxx::__normal_iterator<BackPackGrid *,std::vector<BackPackGrid>>,int,bool (*)(BackPackGrid const&,BackPackGrid const&)>(
        char *a1,
        char *a2,
        int a3,
        int (__fastcall *a4)(int, int))
{
  void *result; // r0
  int v7; // r7
  int i; // r6
  char *j; // r6
  int v10; // r3
  char *v11; // r7
  int v12; // r6
  char *v13; // r0
  char *v14; // r1
  char *v15; // r3
  char *v16; // r6
  int v17; // r0
  char *v18; // r7
  int v19; // r0
  char *v20; // [sp+3Ch] [bp-48h]
  char *v21; // [sp+3Ch] [bp-48h]
  int v24[13]; // [sp+4Ch] [bp-38h] BYREF

  while ( 1 )
  {
    result = a2;
    if ( a2 - a1 <= 883 )
      return result;
    v7 = (a2 - a1) >> 2;
    if ( a3 == 0 )
    {
      for ( i = (-991146299 * v7 - 2) >> 1; ; --i )
      {
        j_memcpy(v24, &a1[52 * i], sizeof(v24));
        result = std::__adjust_heap<__gnu_cxx::__normal_iterator<BackPackGrid *,std::vector<BackPackGrid>>,int,BackPackGrid,bool (*)(BackPackGrid const&,BackPackGrid const&)>(
                   (int)a1,
                   i,
                   -991146299 * v7,
                   v24[0],
                   v24[1],
                   v24[2],
                   v24[3],
                   v24[4],
                   v24[5],
                   v24[6],
                   v24[7],
                   v24[8],
                   v24[9],
                   v24[10],
                   v24[11],
                   v24[12],
                   a4);
        if ( i == 0 )
          break;
      }
      for ( j = a2;
            ;
            result = std::__pop_heap<__gnu_cxx::__normal_iterator<BackPackGrid *,std::vector<BackPackGrid>>,bool (*)(BackPackGrid const&,BackPackGrid const&)>(
                       a1,
                       (int)j,
                       j,
                       a4) )
      {
        v10 = j - a1;
        j -= 52;
        if ( v10 <= 103 )
          break;
      }
      return result;
    }
    v20 = &a1[52 * ((-991146299 * v7) >> 1)];
    v11 = a1 + 52;
    --a3;
    v12 = (int)(a2 - 52);
    if ( a4((int)(a1 + 52), (int)v20) != 0 )
    {
      if ( a4((int)v20, v12) != 0 )
        goto LABEL_17;
      if ( a4((int)(a1 + 52), v12) != 0 )
        goto LABEL_16;
    }
    else if ( a4((int)(a1 + 52), v12) == 0 )
    {
      if ( a4((int)v20, v12) == 0 )
      {
LABEL_17:
        v14 = v20;
        v13 = a1;
        goto LABEL_18;
      }
LABEL_16:
      v13 = a1;
      v14 = a2 - 52;
      goto LABEL_18;
    }
    v13 = a1;
    v14 = a1 + 52;
LABEL_18:
    std::swap<BackPackGrid>(v13, v14);
    v21 = a2;
    while ( 1 )
    {
      v15 = v11;
      do
      {
        v16 = v15;
        v17 = a4((int)v15, (int)a1);
        v15 = v16 + 52;
      }
      while ( v17 != 0 );
      v18 = v21 - 52;
      do
      {
        v21 = v18;
        v19 = a4((int)a1, (int)v18);
        v18 -= 52;
      }
      while ( v19 != 0 );
      if ( v16 >= v21 )
        break;
      std::swap<BackPackGrid>(v16, v21);
      v11 = v16 + 52;
    }
    std::__introsort_loop<__gnu_cxx::__normal_iterator<BackPackGrid *,std::vector<BackPackGrid>>,int,bool (*)(BackPackGrid const&,BackPackGrid const&)>();
    a2 = v16;
  }
}

