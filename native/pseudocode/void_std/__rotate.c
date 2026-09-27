// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: void_std::__rotate

//======================================================================
// void std::__rotate<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>>>(__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>>,__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>>,__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>>,std::random_access_iterator_tag)
// address: 0x0015D556   size: 0xD2 (210 bytes)
//======================================================================
int __fastcall std::__rotate<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>>(
        int result,
        _DWORD *a2,
        _DWORD *a3)
{
  int v3; // r6
  int *v4; // r4
  int v5; // r0
  int v6; // r5
  int v7; // r6
  int v8; // r6
  int v9; // r1
  _DWORD *v10; // r5
  int *v11; // r2
  int *v12; // r1
  int v13; // r3
  int v14; // r12
  int v15; // r1
  int *v16; // r2
  int v17; // r5
  int *v18; // r7
  int *v19; // r3
  int v20; // r1
  int v21; // r12
  int v22; // r1
  _DWORD *v23; // r3
  int v24; // r2

  v3 = result;
  v4 = (int *)result;
  if ( (_DWORD *)result != a2 && a3 != a2 )
  {
    v5 = ((int)a3 - result) >> 2;
    v6 = ((int)a2 - v3) >> 2;
    if ( v6 != v5 - v6 )
    {
      while ( 1 )
      {
        v7 = v5 - v6;
        if ( v6 >= v5 - v6 )
        {
          v16 = &v4[v5];
          if ( v7 == 1 )
          {
            v17 = *(v16 - 1);
            result = std::__copy_move_backward<false,true,std::random_access_iterator_tag>::__copy_move_b<Ogre::ShaderContext *>(
                       v4,
                       (int)(v16 - 1),
                       (int)v16);
            *v4 = v17;
            return result;
          }
          v18 = &v16[-v7];
          v19 = v18;
          v20 = 0;
          while ( v20 < v6 )
          {
            --v19;
            --v16;
            ++v20;
            v21 = *v19;
            *v19 = *v16;
            *v16 = v21;
          }
          v22 = v5 % v7;
          result = v5 / v7;
          v4 = &v18[-(v6 & (~v6 >> 31))];
          v6 = v22;
          if ( v22 == 0 )
            return result;
        }
        else
        {
          if ( v6 == 1 )
          {
            v8 = *v4;
            v9 = (int)&v4[v5];
            v10 = (_DWORD *)(v9 - 4);
            result = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ShaderContext *>(
                       v4 + 1,
                       v9,
                       v4);
            *v10 = v8;
            return result;
          }
          v11 = &v4[v6];
          v12 = v4;
          v13 = 0;
          while ( v13 < v7 )
          {
            ++v13;
            v14 = *v12;
            *v12++ = *v11;
            *v11++ = v14;
          }
          v4 += v7 & (~v7 >> 31);
          v15 = v5 % v6;
          result = v5 / v6;
          if ( v15 == 0 )
            return result;
          v7 = v6;
          v6 -= v15;
        }
        v5 = v7;
      }
    }
    v23 = a2;
    result = v3;
    do
    {
      v24 = *(_DWORD *)result;
      *(_DWORD *)result = *v23;
      result += 4;
      *v23++ = v24;
    }
    while ( a2 != (_DWORD *)result );
  }
  return result;
}


//======================================================================
// void std::__rotate<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>>(__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,std::random_access_iterator_tag)
// address: 0x001B8C8C   size: 0xD2 (210 bytes)
//======================================================================
int __fastcall std::__rotate<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>>(
        int result,
        _DWORD *a2,
        _DWORD *a3)
{
  int v3; // r6
  int *v4; // r4
  int v5; // r0
  int v6; // r5
  int v7; // r6
  int v8; // r6
  int v9; // r1
  _DWORD *v10; // r5
  int *v11; // r2
  int *v12; // r1
  int v13; // r3
  int v14; // r12
  int v15; // r1
  int *v16; // r2
  int v17; // r5
  int *v18; // r7
  int *v19; // r3
  int v20; // r1
  int v21; // r12
  int v22; // r1
  _DWORD *v23; // r3
  int v24; // r2

  v3 = result;
  v4 = (int *)result;
  if ( (_DWORD *)result != a2 && a3 != a2 )
  {
    v5 = ((int)a3 - result) >> 2;
    v6 = ((int)a2 - v3) >> 2;
    if ( v6 != v5 - v6 )
    {
      while ( 1 )
      {
        v7 = v5 - v6;
        if ( v6 >= v5 - v6 )
        {
          v16 = &v4[v5];
          if ( v7 == 1 )
          {
            v17 = *(v16 - 1);
            result = std::__copy_move_backward<false,true,std::random_access_iterator_tag>::__copy_move_b<Frame *>(
                       v4,
                       (int)(v16 - 1),
                       (int)v16);
            *v4 = v17;
            return result;
          }
          v18 = &v16[-v7];
          v19 = v18;
          v20 = 0;
          while ( v20 < v6 )
          {
            --v19;
            --v16;
            ++v20;
            v21 = *v19;
            *v19 = *v16;
            *v16 = v21;
          }
          v22 = v5 % v7;
          result = v5 / v7;
          v4 = &v18[-(v6 & (~v6 >> 31))];
          v6 = v22;
          if ( v22 == 0 )
            return result;
        }
        else
        {
          if ( v6 == 1 )
          {
            v8 = *v4;
            v9 = (int)&v4[v5];
            v10 = (_DWORD *)(v9 - 4);
            result = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Frame *>(v4 + 1, v9, v4);
            *v10 = v8;
            return result;
          }
          v11 = &v4[v6];
          v12 = v4;
          v13 = 0;
          while ( v13 < v7 )
          {
            ++v13;
            v14 = *v12;
            *v12++ = *v11;
            *v11++ = v14;
          }
          v4 += v7 & (~v7 >> 31);
          v15 = v5 % v6;
          result = v5 / v6;
          if ( v15 == 0 )
            return result;
          v7 = v6;
          v6 -= v15;
        }
        v5 = v7;
      }
    }
    v23 = a2;
    result = v3;
    do
    {
      v24 = *(_DWORD *)result;
      *(_DWORD *)result = *v23;
      result += 4;
      *v23++ = v24;
    }
    while ( a2 != (_DWORD *)result );
  }
  return result;
}


//======================================================================
// void std::__rotate<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>>>(__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>>,__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>>,__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>>,std::random_access_iterator_tag)
// address: 0x001B9584   size: 0xD2 (210 bytes)
//======================================================================
int __fastcall std::__rotate<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>>(
        int result,
        _DWORD *a2,
        _DWORD *a3)
{
  int v3; // r6
  int *v4; // r4
  int v5; // r0
  int v6; // r5
  int v7; // r6
  int v8; // r6
  int v9; // r1
  _DWORD *v10; // r5
  int *v11; // r2
  int *v12; // r1
  int v13; // r3
  int v14; // r12
  int v15; // r1
  int *v16; // r2
  int v17; // r5
  int *v18; // r7
  int *v19; // r3
  int v20; // r1
  int v21; // r12
  int v22; // r1
  _DWORD *v23; // r3
  int v24; // r2

  v3 = result;
  v4 = (int *)result;
  if ( (_DWORD *)result != a2 && a3 != a2 )
  {
    v5 = ((int)a3 - result) >> 2;
    v6 = ((int)a2 - v3) >> 2;
    if ( v6 != v5 - v6 )
    {
      while ( 1 )
      {
        v7 = v5 - v6;
        if ( v6 >= v5 - v6 )
        {
          v16 = &v4[v5];
          if ( v7 == 1 )
          {
            v17 = *(v16 - 1);
            result = std::__copy_move_backward<false,true,std::random_access_iterator_tag>::__copy_move_b<LayoutFrame *>(
                       v4,
                       (int)(v16 - 1),
                       (int)v16);
            *v4 = v17;
            return result;
          }
          v18 = &v16[-v7];
          v19 = v18;
          v20 = 0;
          while ( v20 < v6 )
          {
            --v19;
            --v16;
            ++v20;
            v21 = *v19;
            *v19 = *v16;
            *v16 = v21;
          }
          v22 = v5 % v7;
          result = v5 / v7;
          v4 = &v18[-(v6 & (~v6 >> 31))];
          v6 = v22;
          if ( v22 == 0 )
            return result;
        }
        else
        {
          if ( v6 == 1 )
          {
            v8 = *v4;
            v9 = (int)&v4[v5];
            v10 = (_DWORD *)(v9 - 4);
            result = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<LayoutFrame *>(
                       v4 + 1,
                       v9,
                       v4);
            *v10 = v8;
            return result;
          }
          v11 = &v4[v6];
          v12 = v4;
          v13 = 0;
          while ( v13 < v7 )
          {
            ++v13;
            v14 = *v12;
            *v12++ = *v11;
            *v11++ = v14;
          }
          v4 += v7 & (~v7 >> 31);
          v15 = v5 % v6;
          result = v5 / v6;
          if ( v15 == 0 )
            return result;
          v7 = v6;
          v6 -= v15;
        }
        v5 = v7;
      }
    }
    v23 = a2;
    result = v3;
    do
    {
      v24 = *(_DWORD *)result;
      *(_DWORD *)result = *v23;
      result += 4;
      *v23++ = v24;
    }
    while ( a2 != (_DWORD *)result );
  }
  return result;
}

