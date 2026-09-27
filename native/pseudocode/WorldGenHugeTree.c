// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WorldGenHugeTree

//======================================================================
// WorldGenHugeTree::~WorldGenHugeTree()
// address: 0x002E029C   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN16WorldGenHugeTreeD1Ev'
void __fastcall WorldGenHugeTree::~WorldGenHugeTree(WorldGenHugeTree *this)
{
  *(_DWORD *)this = &off_45B6E0;
}


//======================================================================
// WorldGenHugeTree::~WorldGenHugeTree()
// address: 0x002E02AC   size: 0x16 (22 bytes)
//======================================================================
void __fastcall WorldGenHugeTree::~WorldGenHugeTree(WorldGenHugeTree *this)
{
  *(_DWORD *)this = &off_45B6E0;
  operator delete(this);
}


//======================================================================
// WorldGenHugeTree::WorldGenHugeTree(bool,int,int,int)
// address: 0x002E02E0   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN16WorldGenHugeTreeC2Ebiii'
void __fastcall WorldGenHugeTree::WorldGenHugeTree(WorldGenHugeTree *this, bool a2, int a3, int a4, int a5)
{
  *((_BYTE *)this + 4) = a2;
  *((_DWORD *)this + 3) = a4;
  *((_DWORD *)this + 2) = a3;
  *((_DWORD *)this + 4) = a5;
  *(_DWORD *)this = &off_4614D8;
}


//======================================================================
// WorldGenHugeTree::growLeaves(World *,int,int,int,int,ChunkRandGen &)
// address: 0x002E02FC   size: 0x104 (260 bytes)
//======================================================================
int __fastcall WorldGenHugeTree::growLeaves(int this, World *a2, int a3, int a4, int a5, int a6, ChunkRandGen *a7)
{
  int v7; // r6
  int v8; // r5
  int v9; // r7
  int v10; // r4
  int v11; // r3
  int v12; // r2
  int BlockID; // r0
  int v14; // [sp+14h] [bp-40h]
  int i; // [sp+18h] [bp-3Ch]
  int v16; // [sp+1Ch] [bp-38h]
  int v17; // [sp+20h] [bp-34h]
  int *v18; // [sp+24h] [bp-30h]
  _DWORD v22[4]; // [sp+44h] [bp-10h] BYREF

  v7 = -3 - a6;
  v18 = (int *)this;
  v14 = a5 - 2;
  v8 = a6 + 4;
LABEL_2:
  if ( v14 <= a5 )
  {
    v9 = v7;
    for ( i = v7 + a3; ; ++i )
    {
      if ( i > v8 + a3 )
      {
        ++v7;
        --v8;
        ++v14;
        goto LABEL_2;
      }
      v16 = v7 + a4;
      v17 = v9 * v9;
      v10 = v7;
      while ( v16 <= v8 + a4 )
      {
        if ( v9 >= 0 )
        {
          if ( v9 != 0 )
            goto LABEL_12;
        }
        else if ( v10 < 0 )
        {
          v11 = v17 + v10 * v10;
          v12 = (v8 - 1) * (v8 - 1);
          goto LABEL_13;
        }
        if ( v10 > 0 )
        {
LABEL_12:
          v11 = v17 + v10 * v10;
          v12 = v8 * v8;
LABEL_13:
          if ( v11 > v12 )
            goto LABEL_18;
        }
        this = ChunkRandGen::get(a7);
        if ( this << 30 != 0 || v17 + v10 * v10 <= (v8 - 2) * (v8 - 2) )
        {
          v22[0] = i;
          v22[1] = v14;
          v22[2] = v16;
          BlockID = World::getBlockID(a2, (const WCoord *)v22, v16, v14);
          if ( BlockID == 0 || (unsigned int)(this = BlockID - 218) <= 5 )
            this = WorldGenerator::setBlockAndMetadata((WorldGenerator *)v18, a2, i, v14, v16, v18[4], 0);
        }
LABEL_18:
        ++v10;
        ++v16;
      }
      ++v9;
    }
  }
  return this;
}


//======================================================================
// WorldGenHugeTree::generate(World *,ChunkRandGen &,WCoord const&)
// address: 0x002E0400   size: 0x5D6 (1494 bytes)
//======================================================================
int __fastcall WorldGenHugeTree::generate(WorldGenHugeTree *this, World *a2, ChunkRandGen *a3, const WCoord *a4)
{
  signed int v8; // r4
  int v9; // r5
  int j; // r2
  int BlockID; // r0
  double v12; // r4
  float v13; // r0
  float v14; // r0
  int v15; // r4
  float v16; // r0
  signed int m; // r3
  int v18; // r4
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v31; // [sp+14h] [bp-48h]
  int k; // [sp+14h] [bp-48h]
  int v33; // [sp+14h] [bp-48h]
  int v34; // [sp+18h] [bp-44h]
  int v35; // [sp+1Ch] [bp-40h]
  float v36; // [sp+1Ch] [bp-40h]
  int v37; // [sp+20h] [bp-3Ch]
  int v38; // [sp+24h] [bp-38h]
  int v39; // [sp+24h] [bp-38h]
  int i; // [sp+28h] [bp-34h]
  int v41; // [sp+28h] [bp-34h]
  int v43; // [sp+30h] [bp-2Ch]
  signed int v44; // [sp+34h] [bp-28h]
  signed int v45; // [sp+38h] [bp-24h]
  float v46; // [sp+38h] [bp-24h]
  int v47; // [sp+40h] [bp-1Ch]
  int v48; // [sp+44h] [bp-18h]
  _DWORD v49[4]; // [sp+4Ch] [bp-10h] BYREF

  v44 = ChunkRandGen::get(a3) % 3u + *((_DWORD *)this + 2);
  v34 = *(_DWORD *)a4;
  v43 = *((_DWORD *)a4 + 1);
  v37 = *((_DWORD *)a4 + 2);
  if ( v43 <= 0 )
    return 0;
  v35 = v43 + v44;
  if ( v43 + v44 > 255 )
    return 0;
  v8 = *((_DWORD *)a4 + 1);
  v38 = 1;
  v45 = v43 + 1 + v44;
  while ( v8 <= v45 )
  {
    v9 = 2 - (v8 == v43);
    if ( v8 >= v45 - 2 )
      v9 = 2;
    for ( i = v34 - v9; i <= v34 + v9 && v38 != 0; ++i )
    {
      for ( j = v37 - v9; ; j = v31 + 1 )
      {
        v31 = j;
        if ( j > v37 + v9 || v38 == 0 )
          break;
        if ( (unsigned int)v8 <= 0xFF )
        {
          v49[0] = i;
          v49[1] = v8;
          v49[2] = j;
          BlockID = World::getBlockID(a2, (const WCoord *)v49, i, j);
          if ( BlockID == 0
            || (unsigned int)(BlockID - 100) <= 1
            || (unsigned int)(BlockID - 200) <= 6
            || (unsigned int)(BlockID - 212) <= 0xB )
          {
            continue;
          }
        }
        v38 = 0;
      }
    }
    ++v8;
  }
  if ( v38 == 0 )
    return 0;
  v49[1] = v43 - 1;
  v49[0] = v34;
  v49[2] = v37;
  if ( (unsigned int)(World::getBlockID(a2, (const WCoord *)v49, v37, v34) - 100) > 1 || v43 >= 255 - v44 )
    return 0;
  v49[0] = v34;
  v49[1] = v43 - 1;
  v49[2] = v37;
  World::setBlockAll(a2, (const WCoord *)v49, 101, 0, 2);
  v49[0] = v34 + 1;
  v39 = v34 + 1;
  v49[1] = v43 - 1;
  v49[2] = v37;
  World::setBlockAll(a2, (const WCoord *)v49, 101, 0, 2);
  v41 = v37 + 1;
  v49[0] = v34;
  v49[1] = v43 - 1;
  v49[2] = v37 + 1;
  World::setBlockAll(a2, (const WCoord *)v49, 101, 0, 2);
  v49[0] = v34 + 1;
  v49[1] = v43 - 1;
  v49[2] = v37 + 1;
  World::setBlockAll(a2, (const WCoord *)v49, 101, 0, 2);
  WorldGenHugeTree::growLeaves((int)this, a2, v34, v37, v35, 2, a3);
  for ( k = v35 - 2 - (ChunkRandGen::get(a3) & 3); k > v43 + v44 / 2; k -= (ChunkRandGen::get(a3) & 3) + 2 )
  {
    v12 = (float)((float)(ChunkRandGen::getFloat(a3) * 360.0) * 0.017453);
    v13 = j_cos(v12);
    v36 = v13;
    v14 = j_sin(v12);
    v46 = v14;
    v15 = 0;
    WorldGenHugeTree::growLeaves(
      (int)this,
      a2,
      v34 + (int)(float)((float)(v36 * 4.0) + 0.5),
      v37 + (int)(float)((float)(v14 * 4.0) + 0.5),
      k,
      0,
      a3);
    do
    {
      v16 = (float)v15;
      v47 = v34 + (int)(float)((float)(v36 * (float)v15) + 1.5);
      v48 = k - 3 + (v15++ >> 1);
      WorldGenerator::setBlockAndMetadata(
        this,
        a2,
        v47,
        v48,
        v37 + (int)(float)((float)(v46 * v16) + 1.5),
        *((_DWORD *)this + 3),
        0);
    }
    while ( v15 != 5 );
  }
  for ( m = 0; ; m = v33 + 1 )
  {
    v33 = m;
    if ( m >= v44 )
      break;
    v18 = m + v43;
    v49[1] = m + v43;
    v49[0] = v34;
    v49[2] = v37;
    v19 = World::getBlockID(a2, (const WCoord *)v49, v34, v37);
    if ( v19 == 0 || (unsigned int)(v19 - 218) <= 5 )
    {
      WorldGenerator::setBlockAndMetadata(this, a2, v34, v18, v37, *((_DWORD *)this + 3), 0);
      if ( v33 > 0 )
      {
        if ( ChunkRandGen::get(a3) % 3u != 0 && World::isAirBlock(a2, v34 - 1, v18, v37) )
          WorldGenerator::setBlockAndMetadata(this, a2, v34 - 1, v18, v37, 232, 1);
        if ( ChunkRandGen::get(a3) % 3u != 0 && World::isAirBlock(a2, v34, v18, v37 - 1) )
          WorldGenerator::setBlockAndMetadata(this, a2, v34, v18, v37 - 1, 232, 3);
      }
    }
    if ( v33 < v44 - 1 )
    {
      v49[0] = v34 + 1;
      v49[1] = v33 + v43;
      v49[2] = v37;
      v20 = World::getBlockID(a2, (const WCoord *)v49, v37, v39);
      if ( v20 == 0 || (unsigned int)(v20 - 218) <= 5 )
      {
        WorldGenerator::setBlockAndMetadata(this, a2, v39, v18, v37, *((_DWORD *)this + 3), 0);
        if ( v33 > 0 )
        {
          if ( ChunkRandGen::get(a3) % 3u != 0 && World::isAirBlock(a2, v34 + 2, v18, v37) )
            WorldGenerator::setBlockAndMetadata(this, a2, v34 + 2, v18, v37, 232, 0);
          if ( ChunkRandGen::get(a3) % 3u != 0 && World::isAirBlock(a2, v39, v18, v37 - 1) )
            WorldGenerator::setBlockAndMetadata(this, a2, v39, v18, v37 - 1, 232, 3);
        }
      }
      v49[0] = v34 + 1;
      v49[1] = v33 + v43;
      v49[2] = v37 + 1;
      v21 = World::getBlockID(a2, (const WCoord *)v49, v41, v39);
      if ( v21 == 0 || (unsigned int)(v21 - 218) <= 5 )
      {
        WorldGenerator::setBlockAndMetadata(this, a2, v39, v18, v41, *((_DWORD *)this + 3), 0);
        if ( v33 > 0 )
        {
          if ( ChunkRandGen::get(a3) % 3u != 0 && World::isAirBlock(a2, v34 + 2, v18, v41) )
            WorldGenerator::setBlockAndMetadata(this, a2, v34 + 2, v18, v41, 232, 0);
          if ( ChunkRandGen::get(a3) % 3u != 0 && World::isAirBlock(a2, v39, v18, v37 + 2) )
            WorldGenerator::setBlockAndMetadata(this, a2, v39, v18, v37 + 2, 232, 2);
        }
      }
      v49[0] = v34;
      v49[1] = v33 + v43;
      v49[2] = v37 + 1;
      v22 = World::getBlockID(a2, (const WCoord *)v49, v41, v34);
      if ( v22 == 0 || (unsigned int)(v22 - 218) <= 5 )
      {
        WorldGenerator::setBlockAndMetadata(this, a2, v34, v18, v41, *((_DWORD *)this + 3), 0);
        if ( v33 > 0 )
        {
          if ( ChunkRandGen::get(a3) % 3u != 0 && World::isAirBlock(a2, v34 - 1, v18, v41) )
            WorldGenerator::setBlockAndMetadata(this, a2, v34 - 1, v18, v41, 232, 1);
          if ( ChunkRandGen::get(a3) % 3u != 0 && World::isAirBlock(a2, v34, v18, v37 + 2) )
            WorldGenerator::setBlockAndMetadata(this, a2, v34, v18, v37 + 2, 232, 2);
        }
      }
    }
  }
  return 1;
}

