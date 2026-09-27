// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: __gnu_cxx::__enable_if

//======================================================================
// __gnu_cxx::__enable_if<std::__is_char<char>::__value,bool>::__type std::operator==<char>(std::basic_string<char,std::char_traits<char>,std::allocator<char>> const&,std::basic_string<char,std::char_traits<char>,std::allocator<char>> const&)
// address: 0x0016EA0E   size: 0x24 (36 bytes)
//======================================================================
bool __fastcall std::operator==<char>(const void **a1, const void **a2)
{
  _DWORD *v2; // r0
  const void *v3; // r1
  size_t v4; // r2
  int v5; // r3

  v2 = *a1;
  v3 = *a2;
  v4 = *(v2 - 3);
  v5 = 0;
  if ( v4 == *((_DWORD *)v3 - 3) )
    return j_memcmp(v2, v3, v4) == 0;
  return v5;
}

