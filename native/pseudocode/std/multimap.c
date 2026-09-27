// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: std::multimap

//======================================================================
// std::multimap<int,int,std::less<int>,std::allocator<std::pair<int const,int>>>::~multimap()
// address: 0x0029EC4C   size: 0xE (14 bytes)
//======================================================================
// Alternative name is '_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEED1Ev'
int __fastcall std::multimap<int,int>::~multimap(int a1)
{
  std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::_M_erase(
    a1,
    *(_DWORD **)(a1 + 8));
  return a1;
}

