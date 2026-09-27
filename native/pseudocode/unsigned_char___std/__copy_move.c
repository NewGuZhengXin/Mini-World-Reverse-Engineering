// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unsigned_char___std::__copy_move

//======================================================================
// unsigned char * std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<unsigned char>(unsigned char const*,unsigned char const*,unsigned char *)
// address: 0x00158AA0   size: 0x18 (24 bytes)
//======================================================================
int __fastcall std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<unsigned char>(
        _BYTE *a1,
        _BYTE *a2,
        void *a3)
{
  size_t v4; // r4

  v4 = a2 - a1;
  if ( a2 != a1 )
    j_memmove(a3, a1, v4);
  return (int)a3 + v4;
}

