// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: void_std::__merge_without_buffer

//======================================================================
// void std::__merge_without_buffer<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>>,int,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>>,__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>>,__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>>,int,int,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*))
// address: 0x0015D86E   size: 0xC6 (198 bytes)
//======================================================================
int __fastcall std::__merge_without_buffer<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>,int,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(
        int result,
        int *a2,
        int a3,
        int a4,
        int a5,
        int (__fastcall *a6)(int, int))
{
  int *v6; // r5
  int v8; // r3
  int *v9; // r7
  int *v10; // r6
  int *v11; // r4
  int v13; // [sp+Ch] [bp-10h]
  int v14; // [sp+10h] [bp-Ch]

  v6 = (int *)result;
  if ( a4 != 0 )
  {
    result = a5;
    if ( a5 != 0 )
    {
      if ( a4 + a5 == 2 )
      {
        result = a6(*a2, *v6);
        if ( result != 0 )
        {
          v8 = *v6;
          result = *a2;
          *v6 = *a2;
          *a2 = v8;
        }
      }
      else
      {
        if ( a4 <= a5 )
        {
          v10 = &a2[a5 / 2];
          v14 = a5 / 2;
          v9 = std::upper_bound<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>,Ogre::ShaderContext *,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(
                 v6,
                 (int)a2,
                 v10,
                 a6);
          v13 = v9 - v6;
        }
        else
        {
          v9 = &v6[a4 / 2];
          v13 = a4 / 2;
          v10 = std::lower_bound<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>,Ogre::ShaderContext *,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(
                  a2,
                  a3,
                  v9,
                  a6);
          v14 = v10 - a2;
        }
        std::__rotate<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>>(
          (int)v9,
          a2,
          v10);
        v11 = &v9[v10 - a2];
        std::__merge_without_buffer<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>,int,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(
          v6,
          v9,
          v11,
          v13,
          v14,
          a6);
        return std::__merge_without_buffer<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>,int,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(
                 v11,
                 v10,
                 a3,
                 a4 - v13,
                 a5 - v14,
                 a6);
      }
    }
  }
  return result;
}


//======================================================================
// void std::__merge_without_buffer<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,int,bool (*)(LayoutFrame const*,LayoutFrame const*)>(__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,int,int,bool (*)(LayoutFrame const*,LayoutFrame const*))
// address: 0x001B8FA4   size: 0xC6 (198 bytes)
//======================================================================
int __fastcall std::__merge_without_buffer<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,int,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
        int result,
        int *a2,
        int a3,
        int a4,
        int a5,
        int (__fastcall *a6)(int, int))
{
  int *v6; // r5
  int v8; // r3
  int *v9; // r7
  int *v10; // r6
  int *v11; // r4
  int v13; // [sp+Ch] [bp-10h]
  int v14; // [sp+10h] [bp-Ch]

  v6 = (int *)result;
  if ( a4 != 0 )
  {
    result = a5;
    if ( a5 != 0 )
    {
      if ( a4 + a5 == 2 )
      {
        result = a6(*a2, *v6);
        if ( result != 0 )
        {
          v8 = *v6;
          result = *a2;
          *v6 = *a2;
          *a2 = v8;
        }
      }
      else
      {
        if ( a4 <= a5 )
        {
          v10 = &a2[a5 / 2];
          v14 = a5 / 2;
          v9 = std::upper_bound<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,Frame *,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
                 v6,
                 (int)a2,
                 v10,
                 a6);
          v13 = v9 - v6;
        }
        else
        {
          v9 = &v6[a4 / 2];
          v13 = a4 / 2;
          v10 = std::lower_bound<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,Frame *,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
                  a2,
                  a3,
                  v9,
                  a6);
          v14 = v10 - a2;
        }
        std::__rotate<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>>((int)v9, a2, v10);
        v11 = &v9[v10 - a2];
        std::__merge_without_buffer<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,int,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
          v6,
          v9,
          v11,
          v13,
          v14,
          a6);
        return std::__merge_without_buffer<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,int,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
                 v11,
                 v10,
                 a3,
                 a4 - v13,
                 a5 - v14,
                 a6);
      }
    }
  }
  return result;
}


//======================================================================
// void std::__merge_without_buffer<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>>,int,bool (*)(LayoutFrame const*,LayoutFrame const*)>(__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>>,__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>>,__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>>,int,int,bool (*)(LayoutFrame const*,LayoutFrame const*))
// address: 0x001B989C   size: 0xC6 (198 bytes)
//======================================================================
int __fastcall std::__merge_without_buffer<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,int,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
        int result,
        int *a2,
        int a3,
        int a4,
        int a5,
        int (__fastcall *a6)(int, int))
{
  int *v6; // r5
  int v8; // r3
  int *v9; // r7
  int *v10; // r6
  int *v11; // r4
  int v13; // [sp+Ch] [bp-10h]
  int v14; // [sp+10h] [bp-Ch]

  v6 = (int *)result;
  if ( a4 != 0 )
  {
    result = a5;
    if ( a5 != 0 )
    {
      if ( a4 + a5 == 2 )
      {
        result = a6(*a2, *v6);
        if ( result != 0 )
        {
          v8 = *v6;
          result = *a2;
          *v6 = *a2;
          *a2 = v8;
        }
      }
      else
      {
        if ( a4 <= a5 )
        {
          v10 = &a2[a5 / 2];
          v14 = a5 / 2;
          v9 = std::upper_bound<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,LayoutFrame *,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
                 v6,
                 (int)a2,
                 v10,
                 a6);
          v13 = v9 - v6;
        }
        else
        {
          v9 = &v6[a4 / 2];
          v13 = a4 / 2;
          v10 = std::lower_bound<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,LayoutFrame *,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
                  a2,
                  a3,
                  v9,
                  a6);
          v14 = v10 - a2;
        }
        std::__rotate<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>>((int)v9, a2, v10);
        v11 = &v9[v10 - a2];
        std::__merge_without_buffer<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,int,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
          v6,
          v9,
          v11,
          v13,
          v14,
          a6);
        return std::__merge_without_buffer<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,int,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
                 v11,
                 v10,
                 a3,
                 a4 - v13,
                 a5 - v14,
                 a6);
      }
    }
  }
  return result;
}

