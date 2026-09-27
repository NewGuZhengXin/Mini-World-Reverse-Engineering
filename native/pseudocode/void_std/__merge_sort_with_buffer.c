// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: void_std::__merge_sort_with_buffer

//======================================================================
// void std::__merge_sort_with_buffer<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>>,Ogre::ShaderContext **,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>>,__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>>,Ogre::ShaderContext **,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*))
// address: 0x0015D480   size: 0xD6 (214 bytes)
//======================================================================
int __fastcall std::__merge_sort_with_buffer<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>,Ogre::ShaderContext **,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(
        char *a1,
        char *a2,
        _DWORD *a3,
        int (__fastcall *a4)(int, int))
{
  char *i; // r4
  int v7; // r0
  int v8; // r3
  int result; // r0
  int v10; // r4
  int *v11; // r0
  _DWORD *v12; // r3
  int v13; // r2
  int *v14; // r7
  char *v15; // r3
  int *v16; // r0
  int v17; // r2
  int *v18; // r7
  int v19; // [sp+Ch] [bp-20h]
  int v22; // [sp+18h] [bp-14h]
  int *v23; // [sp+1Ch] [bp-10h]
  int v24; // [sp+20h] [bp-Ch]
  int v25; // [sp+24h] [bp-8h]

  v24 = (a2 - a1) >> 2;
  v23 = &a3[v24];
  for ( i = a1;
        ;
        std::__insertion_sort<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(
          v7,
          i,
          a4) )
  {
    v7 = (int)i;
    v8 = a2 - i;
    i += 28;
    if ( v8 <= 27 )
      break;
  }
  result = std::__insertion_sort<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(
             v7,
             a2,
             a4);
  v10 = 7;
  while ( v10 < v24 )
  {
    v25 = 2 * v10;
    v11 = (int *)a1;
    v12 = a3;
    v19 = 2 * v10;
    while ( 1 )
    {
      v13 = (a2 - (char *)v11) >> 2;
      if ( v13 < v19 )
        break;
      v14 = &v11[v25];
      v12 = (_DWORD *)std::__move_merge<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>,__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>,Ogre::ShaderContext **,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(
                        v11,
                        &v11[v10],
                        &v11[v10],
                        &v11[v25],
                        v12,
                        a4);
      v11 = v14;
    }
    if ( v13 > v10 )
      v13 = v10;
    std::__move_merge<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>,__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>,Ogre::ShaderContext **,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(
      v11,
      &v11[v13],
      &v11[v13],
      (int *)a2,
      v12,
      a4);
    v15 = a1;
    v16 = a3;
    v10 *= 4;
    v22 = 2 * v19;
    while ( 1 )
    {
      v17 = v23 - v16;
      if ( v17 < v10 )
        break;
      v18 = &v16[v22];
      v15 = (char *)std::__move_merge<Ogre::ShaderContext **,Ogre::ShaderContext **,__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(
                      v16,
                      &v16[v25],
                      &v16[v25],
                      &v16[v22],
                      v15,
                      a4);
      v16 = v18;
    }
    if ( v17 > v19 )
      v17 = v19;
    result = std::__move_merge<Ogre::ShaderContext **,Ogre::ShaderContext **,__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(
               v16,
               &v16[v17],
               &v16[v17],
               v23,
               v15,
               a4);
  }
  return result;
}


//======================================================================
// void std::__merge_sort_with_buffer<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,Frame **,bool (*)(LayoutFrame const*,LayoutFrame const*)>(__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,Frame **,bool (*)(LayoutFrame const*,LayoutFrame const*))
// address: 0x001B8BB6   size: 0xD6 (214 bytes)
//======================================================================
int __fastcall std::__merge_sort_with_buffer<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,Frame **,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
        char *a1,
        char *a2,
        _DWORD *a3,
        int (__fastcall *a4)(int, int))
{
  char *i; // r4
  int v7; // r0
  int v8; // r3
  int result; // r0
  int v10; // r4
  int *v11; // r0
  _DWORD *v12; // r3
  int v13; // r2
  int *v14; // r7
  char *v15; // r3
  int *v16; // r0
  int v17; // r2
  int *v18; // r7
  int v19; // [sp+Ch] [bp-20h]
  int v22; // [sp+18h] [bp-14h]
  int *v23; // [sp+1Ch] [bp-10h]
  int v24; // [sp+20h] [bp-Ch]
  int v25; // [sp+24h] [bp-8h]

  v24 = (a2 - a1) >> 2;
  v23 = &a3[v24];
  for ( i = a1;
        ;
        std::__insertion_sort<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
          v7,
          i,
          a4) )
  {
    v7 = (int)i;
    v8 = a2 - i;
    i += 28;
    if ( v8 <= 27 )
      break;
  }
  result = std::__insertion_sort<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
             v7,
             a2,
             a4);
  v10 = 7;
  while ( v10 < v24 )
  {
    v25 = 2 * v10;
    v11 = (int *)a1;
    v12 = a3;
    v19 = 2 * v10;
    while ( 1 )
    {
      v13 = (a2 - (char *)v11) >> 2;
      if ( v13 < v19 )
        break;
      v14 = &v11[v25];
      v12 = (_DWORD *)std::__move_merge<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,Frame **,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
                        v11,
                        &v11[v10],
                        &v11[v10],
                        &v11[v25],
                        v12,
                        a4);
      v11 = v14;
    }
    if ( v13 > v10 )
      v13 = v10;
    std::__move_merge<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,Frame **,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
      v11,
      &v11[v13],
      &v11[v13],
      (int *)a2,
      v12,
      a4);
    v15 = a1;
    v16 = a3;
    v10 *= 4;
    v22 = 2 * v19;
    while ( 1 )
    {
      v17 = v23 - v16;
      if ( v17 < v10 )
        break;
      v18 = &v16[v22];
      v15 = (char *)std::__move_merge<Frame **,Frame **,__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
                      v16,
                      &v16[v25],
                      &v16[v25],
                      &v16[v22],
                      v15,
                      a4);
      v16 = v18;
    }
    if ( v17 > v19 )
      v17 = v19;
    result = std::__move_merge<Frame **,Frame **,__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
               v16,
               &v16[v17],
               &v16[v17],
               v23,
               v15,
               a4);
  }
  return result;
}


//======================================================================
// void std::__merge_sort_with_buffer<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>>,LayoutFrame **,bool (*)(LayoutFrame const*,LayoutFrame const*)>(__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>>,__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>>,LayoutFrame **,bool (*)(LayoutFrame const*,LayoutFrame const*))
// address: 0x001B94AE   size: 0xD6 (214 bytes)
//======================================================================
int __fastcall std::__merge_sort_with_buffer<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,LayoutFrame **,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
        char *a1,
        char *a2,
        _DWORD *a3,
        int (__fastcall *a4)(int, int))
{
  char *i; // r4
  int v7; // r0
  int v8; // r3
  int result; // r0
  int v10; // r4
  int *v11; // r0
  _DWORD *v12; // r3
  int v13; // r2
  int *v14; // r7
  char *v15; // r3
  int *v16; // r0
  int v17; // r2
  int *v18; // r7
  int v19; // [sp+Ch] [bp-20h]
  int v22; // [sp+18h] [bp-14h]
  int *v23; // [sp+1Ch] [bp-10h]
  int v24; // [sp+20h] [bp-Ch]
  int v25; // [sp+24h] [bp-8h]

  v24 = (a2 - a1) >> 2;
  v23 = &a3[v24];
  for ( i = a1;
        ;
        std::__insertion_sort<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
          v7,
          i,
          a4) )
  {
    v7 = (int)i;
    v8 = a2 - i;
    i += 28;
    if ( v8 <= 27 )
      break;
  }
  result = std::__insertion_sort<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
             v7,
             a2,
             a4);
  v10 = 7;
  while ( v10 < v24 )
  {
    v25 = 2 * v10;
    v11 = (int *)a1;
    v12 = a3;
    v19 = 2 * v10;
    while ( 1 )
    {
      v13 = (a2 - (char *)v11) >> 2;
      if ( v13 < v19 )
        break;
      v14 = &v11[v25];
      v12 = (_DWORD *)std::__move_merge<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,LayoutFrame **,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
                        v11,
                        &v11[v10],
                        &v11[v10],
                        &v11[v25],
                        v12,
                        a4);
      v11 = v14;
    }
    if ( v13 > v10 )
      v13 = v10;
    std::__move_merge<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,LayoutFrame **,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
      v11,
      &v11[v13],
      &v11[v13],
      (int *)a2,
      v12,
      a4);
    v15 = a1;
    v16 = a3;
    v10 *= 4;
    v22 = 2 * v19;
    while ( 1 )
    {
      v17 = v23 - v16;
      if ( v17 < v10 )
        break;
      v18 = &v16[v22];
      v15 = (char *)std::__move_merge<LayoutFrame **,LayoutFrame **,__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
                      v16,
                      &v16[v25],
                      &v16[v25],
                      &v16[v22],
                      v15,
                      a4);
      v16 = v18;
    }
    if ( v17 > v19 )
      v17 = v19;
    result = std::__move_merge<LayoutFrame **,LayoutFrame **,__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
               v16,
               &v16[v17],
               &v16[v17],
               v23,
               v15,
               a4);
  }
  return result;
}

