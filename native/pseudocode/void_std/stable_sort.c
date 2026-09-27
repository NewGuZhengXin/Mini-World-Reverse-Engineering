// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: void_std::stable_sort

//======================================================================
// void std::stable_sort<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,bool (*)(LayoutFrame const*,LayoutFrame const*)>(__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,bool (*)(LayoutFrame const*,LayoutFrame const*))
// address: 0x001B90AC   size: 0x52 (82 bytes)
//======================================================================
void __fastcall std::stable_sort<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
        char *a1,
        char *a2,
        int (__fastcall *a3)(int, int))
{
  int i; // r6
  char *v5; // r5

  for ( i = (a2 - a1) >> 2; ; i >>= 1 )
  {
    if ( i <= 0 )
    {
      v5 = nullptr;
      std::__inplace_stable_sort<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
        (int)a1,
        a2,
        a3);
      goto LABEL_7;
    }
    v5 = (char *)operator new(4 * i, (const std::nothrow_t *)&std::nothrow);
    if ( v5 != nullptr )
      break;
  }
  std::__stable_sort_adaptive<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,Frame **,int,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
    a1,
    a2,
    v5,
    i,
    a3);
LABEL_7:
  operator delete(v5, (const std::nothrow_t *)&std::nothrow);
}

