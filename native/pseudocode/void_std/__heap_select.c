// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: void_std::__heap_select

//======================================================================
// void std::__heap_select<std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,bool (*)(ChunkIndex,ChunkIndex)>(std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,bool (*)(ChunkIndex,ChunkIndex))
// address: 0x002B0CDA   size: 0xE0 (224 bytes)
//======================================================================
_DWORD *__fastcall std::__heap_select<std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,bool (*)(ChunkIndex,ChunkIndex)>(
        int **a1,
        _DWORD *a2,
        _DWORD *a3,
        int (__fastcall *a4)(_DWORD, _DWORD, int, int))
{
  int v5; // r0
  int v6; // r3
  int i; // r7
  _DWORD *result; // r0
  unsigned int v9; // r3
  int v10; // r3
  int v11; // [sp+10h] [bp-54h]
  _DWORD *v15; // [sp+20h] [bp-44h] BYREF
  int v16; // [sp+24h] [bp-40h]
  unsigned int v17; // [sp+2Ch] [bp-38h]
  int *v18[4]; // [sp+30h] [bp-34h] BYREF
  _DWORD v19[4]; // [sp+40h] [bp-24h] BYREF
  int *v20[5]; // [sp+50h] [bp-14h] BYREF

  std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v18, a1);
  std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v19, a2);
  v5 = std::operator-<ChunkIndex,ChunkIndex&,ChunkIndex*>(v19, v18);
  v11 = v5;
  if ( v5 > 1 )
  {
    for ( i = (v5 - 2) >> 1; ; --i )
    {
      std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::operator+(v20, v18, i, v6);
      v15 = (_DWORD *)*v20[0];
      v16 = v20[0][1];
      std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v20, v18);
      std::__adjust_heap<std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,int,ChunkIndex,bool (*)(ChunkIndex,ChunkIndex)>(
        v20,
        i,
        v11,
        (int)v15,
        v16,
        a4);
      if ( i == 0 )
        break;
    }
  }
  for ( result = std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(&v15, a2);
        ;
        result = std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::operator++((int *)&v15) )
  {
    v9 = a3[3];
    v10 = v17 == v9 ? -((unsigned int)v15 < *a3) : -(v17 < v9);
    if ( v10 == 0 )
      break;
    if ( a4(*v15, v15[1], **a1, (*a1)[1]) != 0 )
    {
      std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v18, a1);
      std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v19, a2);
      std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v20, &v15);
      std::__pop_heap<std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,bool (*)(ChunkIndex,ChunkIndex)>(
        v18,
        v19,
        v20,
        a4);
    }
  }
  return result;
}

