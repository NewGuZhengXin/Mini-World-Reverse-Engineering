// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: void_std::__stable_sort_adaptive

//======================================================================
// void std::__stable_sort_adaptive<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>>,Ogre::ShaderContext **,int,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>>,__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>>,Ogre::ShaderContext **,int,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*))
// address: 0x0015D7F4   size: 0x7A (122 bytes)
//======================================================================
char *__fastcall std::__stable_sort_adaptive<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>,Ogre::ShaderContext **,int,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(
        char *a1,
        char *a2,
        char *a3,
        int a4,
        int (__fastcall *a5)(int, int))
{
  int v7; // r3
  char *v10; // r4

  v7 = (((a2 - a1) >> 2) + 1) / 2;
  v10 = &a1[4 * v7];
  if ( v7 <= a4 )
  {
    std::__merge_sort_with_buffer<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>,Ogre::ShaderContext **,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(
      a1,
      &a1[4 * v7],
      a3,
      a5);
    std::__merge_sort_with_buffer<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>,Ogre::ShaderContext **,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(
      v10,
      a2,
      a3,
      a5);
  }
  else
  {
    std::__stable_sort_adaptive<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>,Ogre::ShaderContext **,int,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(a1);
    std::__stable_sort_adaptive<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>,Ogre::ShaderContext **,int,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(v10);
  }
  return std::__merge_adaptive<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>,int,Ogre::ShaderContext **,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(
           (int *)a1,
           (int *)v10,
           (int *)a2,
           (v10 - a1) >> 2,
           (a2 - v10) >> 2,
           a3,
           a4,
           a5);
}


//======================================================================
// void std::__stable_sort_adaptive<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,Frame **,int,bool (*)(LayoutFrame const*,LayoutFrame const*)>(__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,Frame **,int,bool (*)(LayoutFrame const*,LayoutFrame const*))
// address: 0x001B8F2A   size: 0x7A (122 bytes)
//======================================================================
char *__fastcall std::__stable_sort_adaptive<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,Frame **,int,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
        char *a1,
        char *a2,
        char *a3,
        int a4,
        int (__fastcall *a5)(int, int))
{
  int v7; // r3
  char *v10; // r4

  v7 = (((a2 - a1) >> 2) + 1) / 2;
  v10 = &a1[4 * v7];
  if ( v7 <= a4 )
  {
    std::__merge_sort_with_buffer<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,Frame **,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
      a1,
      &a1[4 * v7],
      a3,
      a5);
    std::__merge_sort_with_buffer<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,Frame **,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
      v10,
      a2,
      a3,
      a5);
  }
  else
  {
    std::__stable_sort_adaptive<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,Frame **,int,bool (*)(LayoutFrame const*,LayoutFrame const*)>(a1);
    std::__stable_sort_adaptive<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,Frame **,int,bool (*)(LayoutFrame const*,LayoutFrame const*)>(v10);
  }
  return std::__merge_adaptive<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,int,Frame **,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
           (int *)a1,
           (int *)v10,
           (int *)a2,
           (v10 - a1) >> 2,
           (a2 - v10) >> 2,
           a3,
           a4,
           a5);
}


//======================================================================
// void std::__stable_sort_adaptive<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>>,LayoutFrame **,int,bool (*)(LayoutFrame const*,LayoutFrame const*)>(__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>>,__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>>,LayoutFrame **,int,bool (*)(LayoutFrame const*,LayoutFrame const*))
// address: 0x001B9822   size: 0x7A (122 bytes)
//======================================================================
char *__fastcall std::__stable_sort_adaptive<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,LayoutFrame **,int,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
        char *a1,
        char *a2,
        char *a3,
        int a4,
        int (__fastcall *a5)(int, int))
{
  int v7; // r3
  char *v10; // r4

  v7 = (((a2 - a1) >> 2) + 1) / 2;
  v10 = &a1[4 * v7];
  if ( v7 <= a4 )
  {
    std::__merge_sort_with_buffer<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,LayoutFrame **,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
      a1,
      &a1[4 * v7],
      a3,
      a5);
    std::__merge_sort_with_buffer<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,LayoutFrame **,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
      v10,
      a2,
      a3,
      a5);
  }
  else
  {
    std::__stable_sort_adaptive<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,LayoutFrame **,int,bool (*)(LayoutFrame const*,LayoutFrame const*)>(a1);
    std::__stable_sort_adaptive<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,LayoutFrame **,int,bool (*)(LayoutFrame const*,LayoutFrame const*)>(v10);
  }
  return std::__merge_adaptive<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,int,LayoutFrame **,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
           (int *)a1,
           (int *)v10,
           (int *)a2,
           (v10 - a1) >> 2,
           (a2 - v10) >> 2,
           a3,
           a4,
           a5);
}

