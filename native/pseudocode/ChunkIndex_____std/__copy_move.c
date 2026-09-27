// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ChunkIndex_____std::__copy_move

//======================================================================
// ChunkIndex * * std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<ChunkIndex *>(ChunkIndex * const*,ChunkIndex * const*,ChunkIndex * *)
// address: 0x002B0EC2   size: 0x1E (30 bytes)
//======================================================================
int __fastcall std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<ChunkIndex *>(
        void *a1,
        int a2,
        void *a3)
{
  int v3; // r1
  size_t v5; // r4

  v3 = (a2 - (int)a1) >> 2;
  v5 = 4 * v3;
  if ( v3 != 0 )
    j_memmove(a3, a1, v5);
  return (int)a3 + v5;
}

