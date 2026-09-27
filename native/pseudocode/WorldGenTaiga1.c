// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WorldGenTaiga1

//======================================================================
// WorldGenTaiga1::~WorldGenTaiga1()
// address: 0x002DC1B8   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN14WorldGenTaiga1D1Ev'
void __fastcall WorldGenTaiga1::~WorldGenTaiga1(WorldGenTaiga1 *this)
{
  *(_DWORD *)this = &off_45B6E0;
}


//======================================================================
// WorldGenTaiga1::~WorldGenTaiga1()
// address: 0x002DC1C8   size: 0x16 (22 bytes)
//======================================================================
void __fastcall WorldGenTaiga1::~WorldGenTaiga1(WorldGenTaiga1 *this)
{
  *(_DWORD *)this = &off_45B6E0;
  operator delete(this);
}


//======================================================================
// WorldGenTaiga1::generate(World *,ChunkRandGen &,WCoord const&)
// address: 0x002DC1E4   size: 0x23A (570 bytes)
//======================================================================
int __fastcall WorldGenTaiga1::generate(WorldGenTaiga1 *this, World *a2, ChunkRandGen *a3, const WCoord *a4)
{
  __int16 v6; // r6
  unsigned int v7; // r7
  int v8; // r0
  unsigned int v9; // r3
  int v11; // r5
  unsigned int v12; // r4
  int v13; // r6
  int j; // r7
  int BlockID; // r0
  int v16; // r3
  int v17; // r4
  int k; // r5
  int m; // r6
  int n; // r4
  int v21; // r0
  int v22; // [sp+14h] [bp-40h]
  int v23; // [sp+18h] [bp-3Ch]
  int v24; // [sp+1Ch] [bp-38h]
  int v25; // [sp+20h] [bp-34h]
  int i; // [sp+28h] [bp-2Ch]
  unsigned int v28; // [sp+2Ch] [bp-28h]
  unsigned int v29; // [sp+30h] [bp-24h]
  signed int v31; // [sp+38h] [bp-1Ch]
  int v32; // [sp+3Ch] [bp-18h]
  _DWORD v33[4]; // [sp+44h] [bp-10h] BYREF

  ChunkRandGen::_dorand48((unsigned __int16 *)a3);
  v29 = ((*((unsigned __int16 *)a3 + 2) << 16) | (unsigned int)*((unsigned __int16 *)a3 + 1)) % 5;
  ChunkRandGen::_dorand48((unsigned __int16 *)a3);
  v6 = *((_WORD *)a3 + 1);
  ChunkRandGen::_dorand48((unsigned __int16 *)a3);
  v7 = v29 + 7;
  v8 = *((unsigned __int16 *)a3 + 2);
  v9 = *((unsigned __int16 *)a3 + 1);
  v23 = *(_DWORD *)a4;
  v22 = *((_DWORD *)a4 + 1);
  v24 = *((_DWORD *)a4 + 2);
  if ( v22 <= 0 )
    return 0;
  v25 = v22 + v7;
  if ( (int)(v22 + v7) > 127 )
    return 0;
  v11 = 1;
  v28 = v7 - (v6 & 1) - 3;
  v12 = v22;
  v31 = ((v8 << 16) | v9) % ((v6 & 1u) + 4) + 1;
  v32 = v22 + 1 + v7;
  while ( (int)v12 <= v32 )
  {
    if ( v11 == 0 )
      return 0;
    v13 = -((v28 >> 31) + (v12 - v22 >= v28) + ((int)(v12 - v22) >> 31)) & v31;
    for ( i = v23 - v13; i <= v23 + v13 && v11 != 0; ++i )
    {
      for ( j = v24 - v13; j <= v24 + v13 && v11 != 0; ++j )
      {
        if ( v12 <= 0x7F )
        {
          v33[0] = i;
          v33[1] = v12;
          v33[2] = j;
          BlockID = World::getBlockID(a2, (const WCoord *)v33, i, v24 + v13);
          if ( BlockID == 0 || (unsigned int)(BlockID - 218) <= 5 )
            continue;
        }
        v11 = 0;
      }
    }
    ++v12;
  }
  if ( v11 == 0 )
    return 0;
  v33[0] = v23;
  v33[1] = v22 - 1;
  v33[2] = v24;
  if ( (unsigned int)(World::getBlockID(a2, (const WCoord *)v33, v24, v32) - 100) > 1 || v22 >= (int)(120 - v29) )
    return 0;
  v33[2] = v24;
  v16 = *((unsigned __int8 *)this + 4);
  v33[0] = v23;
  v33[1] = v22 - 1;
  if ( v16 != 0 )
    World::setBlockAll(a2, (const WCoord *)v33, 101, 0, 3);
  else
    World::setBlockAll(a2, (const WCoord *)v33, 101, 0, 2);
  v17 = 0;
  while ( v25 >= (int)(v22 + v28) )
  {
    for ( k = v23 - v17; k <= v23 + v17; ++k )
    {
      for ( m = v24 - v17; m <= v24 + v17; ++m )
      {
        if ( (((k - v23 + ((k - v23) >> 31)) ^ ((k - v23) >> 31)) != v17
           || ((m - v24 + ((m - v24) >> 31)) ^ ((m - v24) >> 31)) != v17
           || v17 == 0)
          && World::isBlockOpaqueCube(a2, k, v25, m) == 0 )
        {
          WorldGenerator::setBlockAndMetadata(this, a2, k, v25, m, 219, 0);
        }
      }
    }
    if ( v17 > 0 && v25 == v22 + v28 + 1 )
    {
      --v17;
    }
    else if ( v17 < v31 )
    {
      ++v17;
    }
    --v25;
  }
  for ( n = v22; n - v22 < (int)(v29 + 6); ++n )
  {
    v33[0] = v23;
    v33[1] = n;
    v33[2] = v24;
    v21 = World::getBlockID(a2, (const WCoord *)v33, v24, v23);
    if ( v21 == 0 || (unsigned int)(v21 - 218) <= 5 )
      WorldGenerator::setBlockAndMetadata(this, a2, v23, n, v24, 201, 0);
  }
  return 1;
}

