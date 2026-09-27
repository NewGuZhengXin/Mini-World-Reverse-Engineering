// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WorldGenSwamp

//======================================================================
// WorldGenSwamp::~WorldGenSwamp()
// address: 0x002A885C   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN13WorldGenSwampD1Ev'
void __fastcall WorldGenSwamp::~WorldGenSwamp(WorldGenSwamp *this)
{
  *(_DWORD *)this = &off_45B6E0;
}


//======================================================================
// WorldGenSwamp::~WorldGenSwamp()
// address: 0x002A886C   size: 0x16 (22 bytes)
//======================================================================
void __fastcall WorldGenSwamp::~WorldGenSwamp(WorldGenSwamp *this)
{
  *(_DWORD *)this = &off_45B6E0;
  operator delete(this);
}


//======================================================================
// WorldGenSwamp::generateVines(World *,int,int,int,int)
// address: 0x002A88B8   size: 0x58 (88 bytes)
//======================================================================
int __fastcall WorldGenSwamp::generateVines(WorldGenSwamp *this, World *a2, int a3, int a4, int a5, int a6)
{
  int v6; // r4
  int result; // r0
  int v11; // [sp+14h] [bp-8h]

  v6 = a4;
  WorldGenerator::setBlockAndMetadata(this, a2, a3, a4, a5, 232, a6);
  v11 = v6 - 5;
  while ( 1 )
  {
    result = World::getBlockID(a2, a3, --v6, a5);
    if ( result != 0 || v6 == v11 )
      break;
    WorldGenerator::setBlockAndMetadata(this, a2, a3, v6, a5, 232, a6);
  }
  return result;
}


//======================================================================
// WorldGenSwamp::generate(World *,ChunkRandGen &,WCoord const&)
// address: 0x002A8910   size: 0x30E (782 bytes)
//======================================================================
int __fastcall WorldGenSwamp::generate(WorldGenSwamp *this, World *a2, ChunkRandGen *a3, const WCoord *a4)
{
  int v4; // r4
  int v6; // r5
  int v7; // r6
  int v8; // r7
  int BlockID; // r0
  int i; // r4
  int v11; // r7
  int j; // r5
  int k; // r6
  int v14; // r4
  int v15; // r0
  int v16; // r7
  int m; // r4
  int n; // r5
  int v19; // [sp+8h] [bp-34h]
  int v20; // [sp+8h] [bp-34h]
  int v22; // [sp+10h] [bp-2Ch]
  int v23; // [sp+14h] [bp-28h]
  int v24; // [sp+18h] [bp-24h]
  int v25; // [sp+1Ch] [bp-20h]
  int v28; // [sp+28h] [bp-14h]
  int v29; // [sp+2Ch] [bp-10h]
  int v30; // [sp+30h] [bp-Ch]
  int v31; // [sp+34h] [bp-8h]

  v4 = *((_DWORD *)a4 + 1);
  v23 = *((_DWORD *)a4 + 2);
  v22 = *(_DWORD *)a4;
  v30 = ChunkRandGen::get(a3) & 3;
  v29 = v30 + 5;
  while ( 1 )
  {
    v25 = v4 - 1;
    if ( (unsigned int)(World::getBlockID(a2, v22, v4 - 1, v23) - 3) > 1 )
      break;
    --v4;
  }
  v24 = v4;
  if ( v4 <= 0 )
    return 0;
  v28 = v4 + v29;
  if ( v4 + v29 > 127 )
    return 0;
  v6 = 1;
  v31 = v4 + 1 + v29;
  while ( v4 <= v31 )
  {
    v7 = 3;
    if ( v4 < v31 - 2 )
      v7 = v4 != v24;
    v19 = v22 - v7;
    while ( 2 )
    {
      if ( v19 <= v22 + v7 && v6 != 0 )
      {
        v8 = v23 - v7;
LABEL_15:
        if ( v8 > v23 + v7 || v6 == 0 )
        {
          ++v19;
          continue;
        }
        if ( (unsigned int)v4 <= 0x7F )
        {
          BlockID = World::getBlockID(a2, v19, v4, v8);
          if ( BlockID != 0 && (unsigned int)(BlockID - 218) > 5 )
          {
            if ( (unsigned int)(BlockID - 3) > 1 )
              goto LABEL_18;
            v6 = (unsigned __int8)((v24 >> 31) + (v24 >= (unsigned int)v4) + (v4 < 0));
          }
        }
        else
        {
LABEL_18:
          v6 = 0;
        }
        ++v8;
        goto LABEL_15;
      }
      break;
    }
    ++v4;
  }
  if ( v6 == 0 || (unsigned int)(World::getBlockID(a2, v22, v25, v23) - 100) > 1 || v24 >= 122 - v30 )
    return 0;
  WorldGenerator::setBlock(this, a2, v22, v25, v23, 101);
  v20 = v24 - 3 + v29;
  for ( i = v20; i <= v28; ++i )
  {
    v11 = (i - v28) / -2 + 2;
    for ( j = v22 - v11; j <= v22 + v11; ++j )
    {
      for ( k = v23 - v11; k <= v23 + v11; ++k )
      {
        if ( (((j - v22 + ((j - v22) >> 31)) ^ ((j - v22) >> 31)) != v11
           || ((k - v23 + ((k - v23) >> 31)) ^ ((k - v23) >> 31)) != v11
           || (ChunkRandGen::get(a3) & 1) != 0 && i != v28)
          && World::isBlockOpaqueCube(a2, j, i, k) == 0 )
        {
          WorldGenerator::setBlock(this, a2, j, i, k, 218);
        }
      }
    }
  }
  v14 = v24;
  do
  {
    v15 = World::getBlockID(a2, v22, v14, v23);
    if ( v15 == 0 || (unsigned int)(v15 - 218) <= 5 || (unsigned int)(v15 - 3) <= 1 )
      WorldGenerator::setBlock(this, a2, v22, v14, v23, 200);
    ++v14;
  }
  while ( v14 - v24 < v29 );
  while ( v20 <= v28 )
  {
    v16 = (v20 - v28) / -2 + 2;
    for ( m = v22 - v16; m <= v22 + v16; ++m )
    {
      for ( n = v23 - v16; n <= v23 + v16; ++n )
      {
        if ( (unsigned int)(World::getBlockID(a2, m, v20, n) - 218) <= 5 )
        {
          if ( ChunkRandGen::get(a3) << 30 == 0 && World::getBlockID(a2, m - 1, v20, n) == 0 )
            WorldGenSwamp::generateVines(this, a2, m - 1, v20, n, 1);
          if ( ChunkRandGen::get(a3) << 30 == 0 && World::getBlockID(a2, m + 1, v20, n) == 0 )
            WorldGenSwamp::generateVines(this, a2, m + 1, v20, n, 0);
          if ( (ChunkRandGen::get(a3) & 3) == 0 && World::getBlockID(a2, m, v20, n - 1) == 0 )
            WorldGenSwamp::generateVines(this, a2, m, v20, n - 1, 3);
          if ( ChunkRandGen::get(a3) << 30 == 0 && World::getBlockID(a2, m, v20, n + 1) == 0 )
            WorldGenSwamp::generateVines(this, a2, m, v20, n + 1, 2);
        }
      }
    }
    ++v20;
  }
  return 1;
}

