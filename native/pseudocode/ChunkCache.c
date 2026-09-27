// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ChunkCache

//======================================================================
// ChunkCache::getBlockID(WCoord const&)
// address: 0x002E09D8   size: 0x7C (124 bytes)
//======================================================================
int __fastcall ChunkCache::getBlockID(_DWORD *a1, int *a2)
{
  int v4; // r7
  signed int v5; // r5
  int v6; // r6
  signed int v7; // r0
  Chunk *v8; // r0
  int v10; // [sp+4h] [bp-10h]
  signed int v11; // [sp+8h] [bp-Ch]
  unsigned int v12; // [sp+Ch] [bp-8h]

  v12 = a2[1];
  v4 = 0;
  if ( v12 <= 0xFF )
  {
    v10 = *a2;
    v5 = BlockDivSection(*a2) - a1[1];
    if ( v5 >= 0 )
    {
      v11 = a1[3];
      if ( v5 < v11 )
      {
        v6 = a2[2];
        v7 = BlockDivSection(v6) - a1[2];
        if ( v7 >= 0 && v7 < a1[4] )
        {
          v8 = *(Chunk **)(4 * (v7 * v11 + v5) + a1[5]);
          if ( v8 != nullptr )
            return *Chunk::getBlock(
                      v8,
                      v10 - *((_DWORD *)v8 + 69),
                      v12 - *((_DWORD *)v8 + 70),
                      v6 - *((_DWORD *)v8 + 71))
                 & 0xFFF;
        }
      }
    }
  }
  return v4;
}


//======================================================================
// ChunkCache::ChunkCache(World *,WCoord const&,WCoord const&)
// address: 0x002E0B08   size: 0x94 (148 bytes)
//======================================================================
// Alternative name is '_ZN10ChunkCacheC1EP5WorldRK6WCoordS4_'
void __fastcall ChunkCache::ChunkCache(ChunkCache *this, World *a2, const WCoord *a3, const WCoord *a4)
{
  unsigned int v7; // r0
  unsigned int v8; // r7
  unsigned int v9; // r0
  __int64 v10; // r0
  int i; // r6
  _DWORD *v12; // r7
  int j; // r5
  int v14; // r3

  *(_DWORD *)this = a2;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  v7 = BlockDivSection(*(_DWORD *)a3);
  *((_DWORD *)this + 1) = v7;
  v8 = BlockDivSection(*(_DWORD *)a4) - v7 + 1;
  *((_DWORD *)this + 3) = v8;
  v9 = BlockDivSection(*((_DWORD *)a3 + 2));
  *((_DWORD *)this + 2) = v9;
  HIDWORD(v10) = BlockDivSection(*((_DWORD *)a4 + 2)) - v9 + 1;
  *((_DWORD *)this + 4) = HIDWORD(v10);
  HIDWORD(v10) *= v8;
  if ( HIDWORD(v10) != 0 )
  {
    LODWORD(v10) = (char *)this + 20;
    std::vector<Chunk *>::_M_default_append(v10);
  }
  for ( i = 0; i < *((_DWORD *)this + 4); ++i )
  {
    for ( j = 0; ; ++j )
    {
      v14 = *((_DWORD *)this + 3);
      if ( j >= v14 )
        break;
      v12 = (_DWORD *)(*((_DWORD *)this + 5) + 4 * (v14 * i + j));
      *v12 = World::getChunk(*(_DWORD *)this, j + *((_DWORD *)this + 1), i + *((_DWORD *)this + 2));
    }
  }
}

