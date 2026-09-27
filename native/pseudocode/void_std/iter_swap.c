// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: void_std::iter_swap

//======================================================================
// void std::iter_swap<std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>>(std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>)
// address: 0x002B0730   size: 0x16 (22 bytes)
//======================================================================
int __fastcall std::iter_swap<std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>>(
        int **a1,
        int **a2)
{
  int *v2; // r3
  int *v3; // r2
  int v4; // r4
  int result; // r0
  int v6; // r1

  v2 = *a2;
  v3 = *a1;
  v4 = **a2;
  result = **a1;
  v6 = v3[1];
  *v3 = v4;
  v3[1] = v2[1];
  *v2 = result;
  v2[1] = v6;
  return result;
}

