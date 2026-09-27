// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unsigned_short___std::__copy_move

//======================================================================
// unsigned short * std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<unsigned short>(unsigned short const*,unsigned short const*,unsigned short *)
// address: 0x00164814   size: 0x1E (30 bytes)
//======================================================================
int __fastcall std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<unsigned short>(
        void *a1,
        int a2,
        void *a3)
{
  int v3; // r1
  size_t v5; // r4

  v3 = (a2 - (int)a1) >> 1;
  v5 = 2 * v3;
  if ( v3 != 0 )
    j_memmove(a3, a1, v5);
  return (int)a3 + v5;
}


//======================================================================
// unsigned short * std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<unsigned short>(unsigned short const*,unsigned short const*,unsigned short *)
// address: 0x0029A7B4   size: 0x1E (30 bytes)
//======================================================================
int __fastcall std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<unsigned short>(
        void *a1,
        int a2,
        void *a3)
{
  int v3; // r1
  size_t v5; // r4

  v3 = (a2 - (int)a1) >> 1;
  v5 = 2 * v3;
  if ( v3 != 0 )
    j_memmove(a3, a1, v5);
  return (int)a3 + v5;
}

