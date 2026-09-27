// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: void_std::__merge_adaptive

//======================================================================
// void std::__merge_adaptive<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>>,int,Ogre::ShaderContext **,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>>,__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>>,__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>>,int,int,Ogre::ShaderContext **,int,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*))
// address: 0x0015D628   size: 0x1CC (460 bytes)
//======================================================================
char *__fastcall std::__merge_adaptive<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>,int,Ogre::ShaderContext **,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(
        int *a1,
        int *a2,
        int *a3,
        int a4,
        int a5,
        char *a6,
        int a7,
        int (__fastcall *a8)(int, int))
{
  int *v9; // r6
  int *v11; // r4
  char *result; // r0
  int *v13; // r7
  int v14; // r5
  int v15; // r3
  int v16; // r1
  int v17; // r1
  char *v18; // r0
  int v19; // r2
  int *v20; // r7
  int *v21; // r5
  char *v22; // r6
  int *v23; // r6
  int v24; // r7
  int v25; // r7
  int v26; // r0
  int v27; // r7
  int *v28; // [sp+10h] [bp-1Ch]
  int v30; // [sp+18h] [bp-14h]
  int v32; // [sp+20h] [bp-Ch]
  int v33; // [sp+24h] [bp-8h]

  v9 = a2;
  v11 = (int *)a6;
  if ( a4 > a5 )
  {
    if ( a5 > a7 )
    {
      v32 = a4 / 2;
      v23 = &a1[a4 / 2];
      v28 = std::lower_bound<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>,Ogre::ShaderContext *,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(
              a2,
              (int)a3,
              v23,
              a8);
      v30 = v28 - a2;
LABEL_26:
      v33 = a4 - v32;
      if ( a4 - v32 <= v30 || v30 > a7 )
      {
        if ( v33 > a7 )
        {
          std::__rotate<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>>(
            (int)v23,
            a2,
            v28);
          v24 = (int)&v23[v28 - a2];
          goto LABEL_35;
        }
        v24 = (int)v28;
        if ( v33 != 0 )
        {
          v27 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ShaderContext *>(
                  v23,
                  (int)a2,
                  a6);
          std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ShaderContext *>(
            a2,
            (int)v28,
            v23);
          v26 = std::__copy_move_backward<false,true,std::random_access_iterator_tag>::__copy_move_b<Ogre::ShaderContext *>(
                  a6,
                  v27,
                  (int)v28);
          goto LABEL_33;
        }
      }
      else
      {
        v24 = (int)v23;
        if ( v30 != 0 )
        {
          v25 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ShaderContext *>(
                  a2,
                  (int)v28,
                  a6);
          std::__copy_move_backward<false,true,std::random_access_iterator_tag>::__copy_move_b<Ogre::ShaderContext *>(
            v23,
            (int)a2,
            (int)v28);
          v26 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ShaderContext *>(
                  a6,
                  v25,
                  v23);
LABEL_33:
          v24 = v26;
        }
      }
LABEL_35:
      std::__merge_adaptive<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>,int,Ogre::ShaderContext **,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(
        (int)a1,
        (int)v23,
        v24,
        v32,
        v30,
        a6,
        a7,
        (int)a8);
      return (char *)std::__merge_adaptive<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>,int,Ogre::ShaderContext **,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(
                       v24,
                       (int)v28,
                       (int)a3,
                       v33,
                       a5 - v30,
                       a6,
                       a7,
                       (int)a8);
    }
  }
  else
  {
    if ( a4 <= a7 )
    {
      result = (char *)std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ShaderContext *>(
                         a1,
                         (int)a2,
                         a6);
      v13 = a1;
      v14 = (int)result;
      while ( v11 != (int *)v14 )
      {
        if ( v9 == a3 )
          return (char *)std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ShaderContext *>(
                           v11,
                           v14,
                           v13);
        result = (char *)a8(*v9, *v11);
        if ( result != nullptr )
        {
          v15 = *v9++;
          *v13 = v15;
        }
        else
        {
          v16 = *v11++;
          *v13 = v16;
        }
        ++v13;
      }
      return result;
    }
    if ( a5 > a7 )
    {
      v30 = a5 / 2;
      v28 = &a2[a5 / 2];
      v23 = std::upper_bound<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>,Ogre::ShaderContext *,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(
              a1,
              (int)a2,
              v28,
              a8);
      v32 = v23 - a1;
      goto LABEL_26;
    }
  }
  result = (char *)std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ShaderContext *>(
                     a2,
                     (int)a3,
                     a6);
  v17 = (int)result;
  if ( a1 == a2 )
  {
    v18 = a6;
    v19 = (int)a3;
  }
  else
  {
    if ( a6 == result )
      return result;
    v20 = a3;
    v21 = a2 - 1;
    v22 = result - 4;
    while ( 1 )
    {
      while ( 1 )
      {
        --v20;
        result = (char *)a8(*(_DWORD *)v22, *v21);
        if ( result != nullptr )
          break;
        *v20 = *(_DWORD *)v22;
        if ( a6 == v22 )
          return result;
        v22 -= 4;
      }
      *v20 = *v21;
      if ( v21 == a1 )
        break;
      --v21;
    }
    v17 = (int)(v22 + 4);
    v18 = a6;
    v19 = (int)v20;
  }
  return (char *)std::__copy_move_backward<false,true,std::random_access_iterator_tag>::__copy_move_b<Ogre::ShaderContext *>(
                   v18,
                   v17,
                   v19);
}


//======================================================================
// void std::__merge_adaptive<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,int,Frame **,bool (*)(LayoutFrame const*,LayoutFrame const*)>(__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,int,int,Frame **,int,bool (*)(LayoutFrame const*,LayoutFrame const*))
// address: 0x001B8D5E   size: 0x1CC (460 bytes)
//======================================================================
char *__fastcall std::__merge_adaptive<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,int,Frame **,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
        int *a1,
        int *a2,
        int *a3,
        int a4,
        int a5,
        char *a6,
        int a7,
        int (__fastcall *a8)(int, int))
{
  int *v9; // r6
  int *v11; // r4
  char *result; // r0
  int *v13; // r7
  int v14; // r5
  int v15; // r3
  int v16; // r1
  int v17; // r1
  char *v18; // r0
  int v19; // r2
  int *v20; // r7
  int *v21; // r5
  char *v22; // r6
  int *v23; // r6
  int v24; // r7
  int v25; // r7
  int v26; // r0
  int v27; // r7
  int *v28; // [sp+10h] [bp-1Ch]
  int v30; // [sp+18h] [bp-14h]
  int v32; // [sp+20h] [bp-Ch]
  int v33; // [sp+24h] [bp-8h]

  v9 = a2;
  v11 = (int *)a6;
  if ( a4 > a5 )
  {
    if ( a5 > a7 )
    {
      v32 = a4 / 2;
      v23 = &a1[a4 / 2];
      v28 = std::lower_bound<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,Frame *,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
              a2,
              (int)a3,
              v23,
              a8);
      v30 = v28 - a2;
LABEL_26:
      v33 = a4 - v32;
      if ( a4 - v32 <= v30 || v30 > a7 )
      {
        if ( v33 > a7 )
        {
          std::__rotate<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>>((int)v23, a2, v28);
          v24 = (int)&v23[v28 - a2];
          goto LABEL_35;
        }
        v24 = (int)v28;
        if ( v33 != 0 )
        {
          v27 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Frame *>(v23, (int)a2, a6);
          std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Frame *>(a2, (int)v28, v23);
          v26 = std::__copy_move_backward<false,true,std::random_access_iterator_tag>::__copy_move_b<Frame *>(
                  a6,
                  v27,
                  (int)v28);
          goto LABEL_33;
        }
      }
      else
      {
        v24 = (int)v23;
        if ( v30 != 0 )
        {
          v25 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Frame *>(a2, (int)v28, a6);
          std::__copy_move_backward<false,true,std::random_access_iterator_tag>::__copy_move_b<Frame *>(
            v23,
            (int)a2,
            (int)v28);
          v26 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Frame *>(a6, v25, v23);
LABEL_33:
          v24 = v26;
        }
      }
LABEL_35:
      std::__merge_adaptive<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,int,Frame **,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
        (int)a1,
        (int)v23,
        v24,
        v32,
        v30,
        a6,
        a7,
        (int)a8);
      return (char *)std::__merge_adaptive<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,int,Frame **,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
                       v24,
                       (int)v28,
                       (int)a3,
                       v33,
                       a5 - v30,
                       a6,
                       a7,
                       (int)a8);
    }
  }
  else
  {
    if ( a4 <= a7 )
    {
      result = (char *)std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Frame *>(a1, (int)a2, a6);
      v13 = a1;
      v14 = (int)result;
      while ( v11 != (int *)v14 )
      {
        if ( v9 == a3 )
          return (char *)std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Frame *>(v11, v14, v13);
        result = (char *)a8(*v9, *v11);
        if ( result != nullptr )
        {
          v15 = *v9++;
          *v13 = v15;
        }
        else
        {
          v16 = *v11++;
          *v13 = v16;
        }
        ++v13;
      }
      return result;
    }
    if ( a5 > a7 )
    {
      v30 = a5 / 2;
      v28 = &a2[a5 / 2];
      v23 = std::upper_bound<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,Frame *,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
              a1,
              (int)a2,
              v28,
              a8);
      v32 = v23 - a1;
      goto LABEL_26;
    }
  }
  result = (char *)std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Frame *>(a2, (int)a3, a6);
  v17 = (int)result;
  if ( a1 == a2 )
  {
    v18 = a6;
    v19 = (int)a3;
  }
  else
  {
    if ( a6 == result )
      return result;
    v20 = a3;
    v21 = a2 - 1;
    v22 = result - 4;
    while ( 1 )
    {
      while ( 1 )
      {
        --v20;
        result = (char *)a8(*(_DWORD *)v22, *v21);
        if ( result != nullptr )
          break;
        *v20 = *(_DWORD *)v22;
        if ( a6 == v22 )
          return result;
        v22 -= 4;
      }
      *v20 = *v21;
      if ( v21 == a1 )
        break;
      --v21;
    }
    v17 = (int)(v22 + 4);
    v18 = a6;
    v19 = (int)v20;
  }
  return (char *)std::__copy_move_backward<false,true,std::random_access_iterator_tag>::__copy_move_b<Frame *>(
                   v18,
                   v17,
                   v19);
}


//======================================================================
// void std::__merge_adaptive<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>>,int,LayoutFrame **,bool (*)(LayoutFrame const*,LayoutFrame const*)>(__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>>,__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>>,__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>>,int,int,LayoutFrame **,int,bool (*)(LayoutFrame const*,LayoutFrame const*))
// address: 0x001B9656   size: 0x1CC (460 bytes)
//======================================================================
char *__fastcall std::__merge_adaptive<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,int,LayoutFrame **,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
        int *a1,
        int *a2,
        int *a3,
        int a4,
        int a5,
        char *a6,
        int a7,
        int (__fastcall *a8)(int, int))
{
  int *v9; // r6
  int *v11; // r4
  char *result; // r0
  int *v13; // r7
  int v14; // r5
  int v15; // r3
  int v16; // r1
  int v17; // r1
  char *v18; // r0
  int v19; // r2
  int *v20; // r7
  int *v21; // r5
  char *v22; // r6
  int *v23; // r6
  int v24; // r7
  int v25; // r7
  int v26; // r0
  int v27; // r7
  int *v28; // [sp+10h] [bp-1Ch]
  int v30; // [sp+18h] [bp-14h]
  int v32; // [sp+20h] [bp-Ch]
  int v33; // [sp+24h] [bp-8h]

  v9 = a2;
  v11 = (int *)a6;
  if ( a4 > a5 )
  {
    if ( a5 > a7 )
    {
      v32 = a4 / 2;
      v23 = &a1[a4 / 2];
      v28 = std::lower_bound<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,LayoutFrame *,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
              a2,
              (int)a3,
              v23,
              a8);
      v30 = v28 - a2;
LABEL_26:
      v33 = a4 - v32;
      if ( a4 - v32 <= v30 || v30 > a7 )
      {
        if ( v33 > a7 )
        {
          std::__rotate<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>>((int)v23, a2, v28);
          v24 = (int)&v23[v28 - a2];
          goto LABEL_35;
        }
        v24 = (int)v28;
        if ( v33 != 0 )
        {
          v27 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<LayoutFrame *>(v23, (int)a2, a6);
          std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<LayoutFrame *>(a2, (int)v28, v23);
          v26 = std::__copy_move_backward<false,true,std::random_access_iterator_tag>::__copy_move_b<LayoutFrame *>(
                  a6,
                  v27,
                  (int)v28);
          goto LABEL_33;
        }
      }
      else
      {
        v24 = (int)v23;
        if ( v30 != 0 )
        {
          v25 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<LayoutFrame *>(a2, (int)v28, a6);
          std::__copy_move_backward<false,true,std::random_access_iterator_tag>::__copy_move_b<LayoutFrame *>(
            v23,
            (int)a2,
            (int)v28);
          v26 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<LayoutFrame *>(a6, v25, v23);
LABEL_33:
          v24 = v26;
        }
      }
LABEL_35:
      std::__merge_adaptive<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,int,LayoutFrame **,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
        (int)a1,
        (int)v23,
        v24,
        v32,
        v30,
        a6,
        a7,
        (int)a8);
      return (char *)std::__merge_adaptive<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,int,LayoutFrame **,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
                       v24,
                       (int)v28,
                       (int)a3,
                       v33,
                       a5 - v30,
                       a6,
                       a7,
                       (int)a8);
    }
  }
  else
  {
    if ( a4 <= a7 )
    {
      result = (char *)std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<LayoutFrame *>(
                         a1,
                         (int)a2,
                         a6);
      v13 = a1;
      v14 = (int)result;
      while ( v11 != (int *)v14 )
      {
        if ( v9 == a3 )
          return (char *)std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<LayoutFrame *>(
                           v11,
                           v14,
                           v13);
        result = (char *)a8(*v9, *v11);
        if ( result != nullptr )
        {
          v15 = *v9++;
          *v13 = v15;
        }
        else
        {
          v16 = *v11++;
          *v13 = v16;
        }
        ++v13;
      }
      return result;
    }
    if ( a5 > a7 )
    {
      v30 = a5 / 2;
      v28 = &a2[a5 / 2];
      v23 = std::upper_bound<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,LayoutFrame *,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
              a1,
              (int)a2,
              v28,
              a8);
      v32 = v23 - a1;
      goto LABEL_26;
    }
  }
  result = (char *)std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<LayoutFrame *>(
                     a2,
                     (int)a3,
                     a6);
  v17 = (int)result;
  if ( a1 == a2 )
  {
    v18 = a6;
    v19 = (int)a3;
  }
  else
  {
    if ( a6 == result )
      return result;
    v20 = a3;
    v21 = a2 - 1;
    v22 = result - 4;
    while ( 1 )
    {
      while ( 1 )
      {
        --v20;
        result = (char *)a8(*(_DWORD *)v22, *v21);
        if ( result != nullptr )
          break;
        *v20 = *(_DWORD *)v22;
        if ( a6 == v22 )
          return result;
        v22 -= 4;
      }
      *v20 = *v21;
      if ( v21 == a1 )
        break;
      --v21;
    }
    v17 = (int)(v22 + 4);
    v18 = a6;
    v19 = (int)v20;
  }
  return (char *)std::__copy_move_backward<false,true,std::random_access_iterator_tag>::__copy_move_b<LayoutFrame *>(
                   v18,
                   v17,
                   v19);
}

