// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: void_std::__final_insertion_sort

//======================================================================
// void std::__final_insertion_sort<std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,bool (*)(ChunkIndex,ChunkIndex)>(std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,bool (*)(ChunkIndex,ChunkIndex))
// address: 0x002B0A92   size: 0x94 (148 bytes)
//======================================================================
_DWORD *__fastcall std::__final_insertion_sort<std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,bool (*)(ChunkIndex,ChunkIndex)>(
        _DWORD *a1,
        _DWORD *a2,
        int (__fastcall *a3)(int, int, _DWORD, _DWORD))
{
  int v5; // r3
  int v6; // r3
  int v7; // r3
  _DWORD *result; // r0
  int v9; // r3
  _DWORD v11[4]; // [sp+8h] [bp-44h] BYREF
  _DWORD *v12; // [sp+18h] [bp-34h] BYREF
  _DWORD *v13[4]; // [sp+28h] [bp-24h] BYREF
  int *v14[5]; // [sp+38h] [bp-14h] BYREF

  if ( std::operator-<ChunkIndex,ChunkIndex&,ChunkIndex*>(a2, a1) <= 16 )
  {
    std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v13, a1);
    std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v14, a2);
    return std::__insertion_sort<std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,bool (*)(ChunkIndex,ChunkIndex)>(
             v13,
             v14,
             a3,
             v9);
  }
  else
  {
    std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v14, a1);
    std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::operator+(v13, a1, 16, v5);
    std::__insertion_sort<std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,bool (*)(ChunkIndex,ChunkIndex)>(
      v14,
      v13,
      a3,
      v6);
    std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::operator+(v11, a1, 16, v7);
    std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(&v12, a2);
    result = std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v13, v11);
    while ( v13[0] != v12 )
    {
      std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v14, v13);
      std::__unguarded_linear_insert<std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,bool (*)(ChunkIndex,ChunkIndex)>(
        v14,
        a3);
      result = std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::operator++((int *)v13);
    }
  }
  return result;
}

