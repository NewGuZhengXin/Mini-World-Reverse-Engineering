// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Frame____std::__move_merge

//======================================================================
// Frame ** std::__move_merge<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,Frame **,bool (*)(LayoutFrame const*,LayoutFrame const*)>(__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *,std::allocator<Frame *>>>,Frame **,bool (*)(LayoutFrame const*,LayoutFrame const*))
// address: 0x001B8B2E   size: 0x44 (68 bytes)
//======================================================================
int __fastcall std::__move_merge<__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,__gnu_cxx::__normal_iterator<Frame **,std::vector<Frame *>>,Frame **,bool (*)(LayoutFrame const*,LayoutFrame const*)>(
        int *a1,
        int *a2,
        int *a3,
        int *a4,
        _DWORD *a5,
        int (__fastcall *a6)(int, int))
{
  int v10; // r3
  void *v11; // r0

  while ( a1 != a2 && a3 != a4 )
  {
    if ( a6(*a3, *a1) != 0 )
      v10 = *a3++;
    else
      v10 = *a1++;
    *a5++ = v10;
  }
  v11 = (void *)std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Frame *>(a1, (int)a2, a5);
  return std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Frame *>(a3, (int)a4, v11);
}

