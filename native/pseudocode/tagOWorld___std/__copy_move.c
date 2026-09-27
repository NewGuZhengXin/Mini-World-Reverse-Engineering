// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: tagOWorld___std::__copy_move

//======================================================================
// tagOWorld * std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<tagOWorld>(tagOWorld const*,tagOWorld const*,tagOWorld *)
// address: 0x00296B1C   size: 0x28 (40 bytes)
//======================================================================
int __fastcall std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<tagOWorld>(
        void *a1,
        int a2,
        void *a3)
{
  int v3; // r4

  v3 = 438261969 * ((a2 - (int)a1) >> 4);
  if ( v3 != 0 )
    j_memmove(a3, a1, 16 * ((a2 - (int)a1) >> 4));
  return (int)a3 + 784 * v3;
}


//======================================================================
// tagOWorld * std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<tagOWorld>(tagOWorld const*,tagOWorld const*,tagOWorld *)
// address: 0x002BA520   size: 0x28 (40 bytes)
//======================================================================
int __fastcall std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<tagOWorld>(
        void *a1,
        int a2,
        void *a3)
{
  int v3; // r4

  v3 = 438261969 * ((a2 - (int)a1) >> 4);
  if ( v3 != 0 )
    j_memmove(a3, a1, 16 * ((a2 - (int)a1) >> 4));
  return (int)a3 + 784 * v3;
}

