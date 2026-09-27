// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: StructureStart

//======================================================================
// StructureStart::generateStructure(World *,ChunkRandGen &,StructureBoundingBox &)
// address: 0x002D098C   size: 0x82 (130 bytes)
//======================================================================
unsigned __int64 __fastcall StructureStart::generateStructure(
        StructureStart *this,
        World *a2,
        ChunkRandGen *a3,
        StructureBoundingBox *a4)
{
  _DWORD *v4; // r6
  _DWORD *v7; // r4
  char *v8; // r2
  _BYTE *v9; // r1
  int v10; // r2
  unsigned __int64 v12; // [sp+0h] [bp-Ch]

  v4 = *((_DWORD **)this + 1);
  v12 = __PAIR64__((unsigned int)a3, (unsigned int)a2);
  while ( v4 != *((_DWORD **)this + 2) )
  {
    v7 = (_DWORD *)*v4;
    if ( *(_DWORD *)(*v4 + 16) < *(_DWORD *)a4
      || v7[1] > *((_DWORD *)a4 + 3)
      || v7[6] < *((_DWORD *)a4 + 2)
      || v7[3] > *((_DWORD *)a4 + 5)
      || v7[5] < *((_DWORD *)a4 + 1)
      || v7[2] > *((_DWORD *)a4 + 4)
      || (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD, StructureBoundingBox *))(*v7 + 4))(*v4, v12, HIDWORD(v12), a4) != 0 )
    {
      ++v4;
    }
    else
    {
      operator delete(v7);
      v8 = *((char **)this + 2);
      v9 = v4 + 1;
      if ( v4 + 1 != (_DWORD *)v8 )
      {
        v10 = (v8 - v9) >> 2;
        if ( v10 != 0 )
          j_memmove(v4, v9, 4 * v10);
      }
      *((_DWORD *)this + 2) -= 4;
    }
  }
  return v12;
}


//======================================================================
// StructureStart::updateBoundingBox(void)
// address: 0x002D0A10   size: 0x6C (108 bytes)
//======================================================================
_DWORD *__fastcall StructureStart::updateBoundingBox(_DWORD *this)
{
  int v1; // r4
  int v2; // r2
  _DWORD *v3; // r3
  int v4; // r1
  int v5; // r1
  int v6; // r1
  int v7; // r1
  int v8; // r1
  int v9; // r3

  *(this + 4) = 0x7FFFFFFF;
  *(this + 5) = 0x7FFFFFFF;
  *(this + 6) = 0x7FFFFFFF;
  v1 = *(this + 2);
  v2 = *(this + 1);
  *(this + 7) = 0x80000000;
  *(this + 8) = 0x80000000;
  *(this + 9) = 0x80000000;
  while ( v2 != v1 )
  {
    v3 = *(_DWORD **)v2;
    v4 = *(_DWORD *)(*(_DWORD *)v2 + 4);
    if ( v4 > *(this + 4) )
      v4 = *(this + 4);
    *(this + 4) = v4;
    v5 = v3[2];
    if ( v5 > *(this + 5) )
      v5 = *(this + 5);
    *(this + 5) = v5;
    v6 = v3[3];
    if ( v6 > *(this + 6) )
      v6 = *(this + 6);
    *(this + 6) = v6;
    v7 = v3[4];
    if ( v7 < *(this + 7) )
      v7 = *(this + 7);
    *(this + 7) = v7;
    v8 = v3[5];
    if ( v8 < *(this + 8) )
      v8 = *(this + 8);
    *(this + 8) = v8;
    v9 = v3[6];
    if ( v9 < *(this + 9) )
      v9 = *(this + 9);
    *(this + 9) = v9;
    v2 += 4;
  }
  return this;
}


//======================================================================
// StructureStart::markAvailableHeight(World *,ChunkRandGen &,int)
// address: 0x002D0A80   size: 0x5A (90 bytes)
//======================================================================
_DWORD *__fastcall StructureStart::markAvailableHeight(StructureStart *this, World *a2, ChunkRandGen *a3, int a4)
{
  int v5; // r3
  int v7; // r5
  unsigned int v8; // r7
  int v9; // r5
  _DWORD *result; // r0
  int *i; // r6
  int v12; // r0

  v5 = 63 - a4;
  v7 = *((_DWORD *)this + 8) - *((_DWORD *)this + 5) + 2;
  if ( v7 < v5 )
  {
    v8 = v5 - v7;
    ChunkRandGen::_dorand48((unsigned __int16 *)a3);
    v7 += ((*((unsigned __int16 *)a3 + 2) << 16) | (unsigned int)*((unsigned __int16 *)a3 + 1)) % v8;
  }
  v9 = v7 - *((_DWORD *)this + 8);
  result = StructureBoundingBox::offset((_DWORD *)this + 4, 0, v9, 0);
  for ( i = *((int **)this + 1); i != *((int **)this + 2); ++i )
  {
    v12 = *i;
    result = StructureBoundingBox::offset((_DWORD *)(v12 + 4), 0, v9, 0);
  }
  return result;
}


//======================================================================
// StructureStart::setRandomHeight(World *,ChunkRandGen &,int,int)
// address: 0x002D0ADA   size: 0x5A (90 bytes)
//======================================================================
_DWORD *__fastcall StructureStart::setRandomHeight(StructureStart *this, World *a2, ChunkRandGen *a3, int a4, int a5)
{
  int v6; // r5
  int v8; // r7
  int v9; // r5
  _DWORD *result; // r0
  int *i; // r6
  int v12; // r0

  v6 = a4;
  v8 = a5 - a4 - (*((_DWORD *)this + 8) - *((_DWORD *)this + 5));
  if ( v8 > 1 )
  {
    ChunkRandGen::_dorand48((unsigned __int16 *)a3);
    v6 += ((*((unsigned __int16 *)a3 + 2) << 16) | (unsigned int)*((unsigned __int16 *)a3 + 1)) % v8;
  }
  v9 = v6 - *((_DWORD *)this + 5);
  result = StructureBoundingBox::offset((_DWORD *)this + 4, 0, v9, 0);
  for ( i = *((int **)this + 1); i != *((int **)this + 2); ++i )
  {
    v12 = *i;
    result = StructureBoundingBox::offset((_DWORD *)(v12 + 4), 0, v9, 0);
  }
  return result;
}

