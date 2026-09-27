// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: std::_Deque_base

//======================================================================
// std::_Deque_base<Chunk *,std::allocator<Chunk *>>::_Deque_base(void)
// address: 0x002B0488   size: 0x58 (88 bytes)
//======================================================================
// Alternative name is '_ZNSt11_Deque_baseIP5ChunkSaIS1_EEC1Ev'
_DWORD *__fastcall std::_Deque_base<Chunk *>::_Deque_base(_DWORD *a1)
{
  int v2; // r0
  int v3; // r5
  int *v4; // r5
  int v5; // r2
  int v6; // r3
  int v7; // r3

  *a1 = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[9] = 0;
  a1[1] = 8;
  v2 = operator new(0x20u);
  v3 = a1[1];
  *a1 = v2;
  v4 = (int *)(v2 + 4 * ((unsigned int)(v3 - 1) >> 1));
  *v4 = operator new(0x200u);
  a1[5] = v4;
  v5 = *v4;
  v6 = *v4 + 512;
  a1[9] = v4;
  a1[3] = v5;
  a1[4] = v6;
  v7 = *v4;
  a1[2] = v5;
  a1[7] = v7;
  a1[8] = v7 + 512;
  a1[6] = v7;
  return a1;
}


//======================================================================
// std::_Deque_base<LightingArea *,std::allocator<LightingArea *>>::_M_initialize_map(unsigned int)
// address: 0x002E3BDC   size: 0x9A (154 bytes)
//======================================================================
__int64 __fastcall std::_Deque_base<LightingArea *>::_M_initialize_map(_DWORD *a1, unsigned int a2)
{
  int v3; // r6
  unsigned int v4; // r0
  char v5; // r7
  int v6; // r0
  int v7; // r1
  _DWORD *v8; // r5
  _DWORD *i; // r6
  int v10; // r2
  int v11; // r3
  __int64 v13; // [sp+0h] [bp-Ch]

  LODWORD(v13) = a1;
  v3 = (a2 >> 7) + 1;
  v4 = (a2 >> 7) + 3;
  v5 = a2;
  if ( v4 < 8 )
    v4 = 8;
  a1[1] = v4;
  v6 = operator new(4 * v4);
  v7 = a1[1];
  *a1 = v6;
  v8 = (_DWORD *)(v6 + 4 * ((unsigned int)(v7 - v3) >> 1));
  HIDWORD(v13) = &v8[v3];
  for ( i = v8; (unsigned int)i < HIDWORD(v13); ++i )
    *i = operator new(0x200u);
  a1[5] = v8;
  v10 = *v8;
  a1[4] = *v8 + 512;
  a1[3] = v10;
  a1[9] = HIDWORD(v13) - 4;
  v11 = *(_DWORD *)(HIDWORD(v13) - 4);
  a1[2] = v10;
  a1[7] = v11;
  a1[8] = v11 + 512;
  a1[6] = v11 + 4 * (v5 & 0x7F);
  return v13;
}

