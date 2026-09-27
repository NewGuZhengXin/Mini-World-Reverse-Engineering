// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: void_std::__push_heap

//======================================================================
// void std::__push_heap<std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,int,ChunkIndex,bool (*)(ChunkIndex,ChunkIndex)>(std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,int,int,ChunkIndex,bool (*)(ChunkIndex,ChunkIndex))
// address: 0x002B0B26   size: 0x88 (136 bytes)
//======================================================================
_DWORD *__fastcall std::__push_heap<std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,int,ChunkIndex,bool (*)(ChunkIndex,ChunkIndex)>(
        _DWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int (__fastcall *a6)(_DWORD, _DWORD, int, int))
{
  int v6; // r3
  int v8; // r4
  _DWORD *result; // r0
  int v10; // r3
  _DWORD *v11; // r4
  int v12; // r3
  _DWORD *v13; // r3
  int i; // [sp+0h] [bp-18h]
  _DWORD *v16; // [sp+8h] [bp-10h] BYREF
  _DWORD var14[11]; // [sp+18h] [bp+0h] BYREF
  int varg_r3; // [sp+44h] [bp+2Ch]

  v6 = a2 - 1;
  v8 = a2;
  for ( i = (a2 - 1) / 2; v8 > a3; i = v6 )
  {
    std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::operator+(var14, a1, i, v6);
    if ( a6(*(_DWORD *)var14[0], *(_DWORD *)(var14[0] + 4), varg_r3, a5) == 0 )
      break;
    std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::operator+(var14, a1, v8, v6);
    v11 = (_DWORD *)var14[0];
    std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::operator+(&v16, a1, i, v12);
    v13 = v16;
    *v11 = *v16;
    v11[1] = v13[1];
    v8 = i;
    v6 = (i - 1) / 2;
  }
  result = std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::operator+(var14, a1, v8, v6);
  v10 = var14[0];
  *(_DWORD *)var14[0] = varg_r3;
  *(_DWORD *)(v10 + 4) = a5;
  return result;
}

