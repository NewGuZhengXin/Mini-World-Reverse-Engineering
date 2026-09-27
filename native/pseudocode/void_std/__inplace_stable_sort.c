// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: void_std::__inplace_stable_sort

//======================================================================
// void std::__inplace_stable_sort<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>>,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>>,__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>>,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*))
// address: 0x0015D934   size: 0x42 (66 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> std::__inplace_stable_sort<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(
        int a1,
        _DWORD *a2,
        int (__fastcall *a3)(int, int))
{
  int *v6; // r6

  if ( (int)a2 - a1 > 59 )
  {
    v6 = (int *)(a1 + 4 * (((int)a2 - a1) >> 3));
    ((void (*)(void))std::__inplace_stable_sort<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>)();
    std::__inplace_stable_sort<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(
      v6,
      a2,
      a3);
    std::__merge_without_buffer<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>,int,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(
      a1,
      v6,
      (int)a2,
      ((int)v6 - a1) >> 2,
      a2 - v6,
      a3);
  }
  else
  {
    std::__insertion_sort<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(
      a1,
      a2,
      a3);
  }
}


//======================================================================
// void std::__inplace_stable_sort<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,bool (*)(LayoutFrame const*,LayoutFrame const*)>(__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,bool (*)(LayoutFrame const*,LayoutFrame const*))
// address: 0x001B906A   size: 0x42 (66 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> std::__inplace_stable_sort<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
        int a1,
        _DWORD *a2,
        int (__fastcall *a3)(int, int))
{
  int *v6; // r6

  if ( (int)a2 - a1 > 59 )
  {
    v6 = (int *)(a1 + 4 * (((int)a2 - a1) >> 3));
    ((void (*)(void))std::__inplace_stable_sort<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,bool (*)(LayoutFrame const*,LayoutFrame const*)>)();
    std::__inplace_stable_sort<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
      v6,
      a2,
      a3);
    std::__merge_without_buffer<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,int,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
      a1,
      v6,
      (int)a2,
      ((int)v6 - a1) >> 2,
      a2 - v6,
      a3);
  }
  else
  {
    std::__insertion_sort<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
      a1,
      a2,
      a3);
  }
}


//======================================================================
// void std::__inplace_stable_sort<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>>,bool (*)(LayoutFrame const*,LayoutFrame const*)>(__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>>,__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *,std::allocator<LayoutFrame *>>>,bool (*)(LayoutFrame const*,LayoutFrame const*))
// address: 0x001B9962   size: 0x42 (66 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> std::__inplace_stable_sort<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
        int a1,
        _DWORD *a2,
        int (__fastcall *a3)(int, int))
{
  int *v6; // r6

  if ( (int)a2 - a1 > 59 )
  {
    v6 = (int *)(a1 + 4 * (((int)a2 - a1) >> 3));
    ((void (*)(void))std::__inplace_stable_sort<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,bool (*)(LayoutFrame const*,LayoutFrame const*)>)();
    std::__inplace_stable_sort<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
      v6,
      a2,
      a3);
    std::__merge_without_buffer<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,int,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
      a1,
      v6,
      (int)a2,
      ((int)v6 - a1) >> 2,
      a2 - v6,
      a3);
  }
  else
  {
    std::__insertion_sort<__gnu_cxx::__normal_iterator<LayoutFrame **,std::vector<LayoutFrame *>>,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
      a1,
      a2,
      a3);
  }
}

