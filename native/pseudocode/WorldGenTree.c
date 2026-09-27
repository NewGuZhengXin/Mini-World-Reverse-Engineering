// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WorldGenTree

//======================================================================
// WorldGenTree::~WorldGenTree()
// address: 0x002E7454   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN12WorldGenTreeD1Ev'
void __fastcall WorldGenTree::~WorldGenTree(WorldGenTree *this)
{
  *(_DWORD *)this = &off_45B6E0;
}


//======================================================================
// WorldGenTree::~WorldGenTree()
// address: 0x002E7464   size: 0x16 (22 bytes)
//======================================================================
void __fastcall WorldGenTree::~WorldGenTree(WorldGenTree *this)
{
  *(_DWORD *)this = &off_45B6E0;
  operator delete(this);
}


//======================================================================
// WorldGenTree::growVines(World *,int,int,int,int)
// address: 0x002E749E   size: 0x58 (88 bytes)
//======================================================================
int __fastcall WorldGenTree::growVines(WorldGenTree *this, World *a2, int a3, int a4, int a5, int a6)
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
// WorldGenTree::generate(World *,ChunkRandGen &,WCoord const&)
// address: 0x002E74F8   size: 0x4BE (1214 bytes)
//======================================================================
int __fastcall WorldGenTree::generate(WorldGenTree *this, World *a2, ChunkRandGen *a3, const WCoord *a4)
{
  unsigned int v5; // r1
  int v6; // r7
  int v7; // r1
  int v8; // r4
  int v9; // r5
  int i; // r6
  int j; // r7
  int BlockID; // r0
  int k; // r5
  int v15; // r7
  int m; // r6
  int n; // r4
  int v18; // r0
  int ii; // r6
  int v20; // r4
  int v21; // r0
  int v22; // r7
  int v23; // r7
  int jj; // r4
  int kk; // r5
  int *v26; // r5
  int nn; // r4
  unsigned int v28; // r0
  int v29; // r12
  int v30; // r3
  int v31; // r0
  unsigned int v32; // r1
  int v33; // [sp+18h] [bp-44h]
  int v34; // [sp+1Ch] [bp-40h]
  int v35; // [sp+1Ch] [bp-40h]
  unsigned int mm; // [sp+1Ch] [bp-40h]
  int v38; // [sp+24h] [bp-38h]
  int v39; // [sp+28h] [bp-34h]
  int v40; // [sp+2Ch] [bp-30h]
  int v41; // [sp+2Ch] [bp-30h]
  int v44; // [sp+38h] [bp-24h]
  int v45; // [sp+3Ch] [bp-20h]
  int v46; // [sp+40h] [bp-1Ch]
  _DWORD v47[4]; // [sp+4Ch] [bp-10h] BYREF

  v5 = ChunkRandGen::get(a3) % 3u;
  v38 = *(_DWORD *)a4;
  v6 = *((_DWORD *)a4 + 1);
  v7 = v5 + *((_DWORD *)this + 2);
  v45 = v7;
  v40 = v6;
  v39 = *((_DWORD *)a4 + 2);
  if ( v6 <= 0 )
    return 0;
  v46 = v6 + v7;
  if ( v6 + v7 > 255 )
    return 0;
  v8 = *((_DWORD *)a4 + 1);
  v34 = 1;
  v44 = v6 + 1 + v7;
  while ( v8 <= v44 )
  {
    v9 = 2;
    if ( v8 < v44 - 2 )
      v9 = v8 != v40;
    for ( i = v38 - v9; i <= v38 + v9 && v34 != 0; ++i )
    {
      for ( j = v39 - v9; j <= v39 + v9 && v34 != 0; ++j )
      {
        if ( (unsigned int)v8 <= 0xFF )
        {
          BlockID = World::getBlockID(a2, i, v8, j);
          if ( BlockID == 0
            || (unsigned int)(BlockID - 218) <= 5
            || (unsigned int)(BlockID - 100) <= 1
            || (unsigned int)(BlockID - 200) <= 6 )
          {
            continue;
          }
        }
        v34 = 0;
      }
    }
    ++v8;
  }
  if ( v34 == 0 || (unsigned int)(World::getBlockID(a2, v38, v40 - 1, v39) - 100) > 1 || v40 >= 255 - v45 )
    return 0;
  v47[0] = v38;
  v47[1] = v40 - 1;
  v47[2] = v39;
  sub_2E7480(*((unsigned __int8 *)this + 4), a2, (WCoord *)v47, 101, 0);
  v35 = v40 - 3 + v45;
  for ( k = v35; k <= v46; ++k )
  {
    v15 = (k - v46) / -2 + 1;
    for ( m = v38 - v15; m <= v38 + v15; ++m )
    {
      for ( n = v39 - v15; n <= v39 + v15; ++n )
      {
        if ( ((m - v38 + ((m - v38) >> 31)) ^ ((m - v38) >> 31)) != v15
          || ((n - v39 + ((n - v39) >> 31)) ^ ((n - v39) >> 31)) != v15
          || (ChunkRandGen::get(a3) & 1) != 0 && k != v46 )
        {
          v18 = World::getBlockID(a2, m, k, n);
          if ( v18 == 0 || (unsigned int)(v18 - 218) <= 5 )
          {
            v31 = *((unsigned __int8 *)this + 4);
            v33 = *((_DWORD *)this + 5);
            v47[1] = k;
            v47[2] = n;
            v47[0] = m;
            sub_2E7480(v31, a2, (WCoord *)v47, v33, 0);
          }
        }
      }
    }
  }
  for ( ii = 0; ii < v45; ++ii )
  {
    v20 = ii + v40;
    v21 = World::getBlockID(a2, v38, ii + v40, v39);
    if ( v21 == 0 || (unsigned int)(v21 - 218) <= 5 )
    {
      v22 = *((_DWORD *)this + 4);
      v47[1] = ii + v40;
      v47[0] = v38;
      v47[2] = v39;
      sub_2E7480(*((unsigned __int8 *)this + 4), a2, (WCoord *)v47, v22, 0);
      if ( *((_BYTE *)this + 12) != 0 && ii > 0 )
      {
        v32 = ChunkRandGen::get(a3) % 3u;
        if ( v32 != 0 && World::getBlockID(a2, v38 - 1, v20, v39) == 0 )
          WorldGenerator::setBlockAndMetadata(this, a2, v38 - 1, v20, v39, 232, 1);
        if ( ChunkRandGen::get(a3) % 3u != 0 && World::getBlockID(a2, v38 + 1, v20, v39) == 0 )
          WorldGenerator::setBlockAndMetadata(this, a2, v38 + 1, v20, v39, 232, 0);
        if ( ChunkRandGen::get(a3) % 3u != 0 && World::getBlockID(a2, v38, v20, v39 - 1) == 0 )
          WorldGenerator::setBlockAndMetadata(this, a2, v38, v20, v39 - 1, 232, 3);
        if ( ChunkRandGen::get(a3) % 3u != 0 && World::getBlockID(a2, v38, v20, v39 + 1) == 0 )
          WorldGenerator::setBlockAndMetadata(this, a2, v38, v20, v39 + 1, 232, 2);
      }
    }
  }
  if ( *((_BYTE *)this + 12) != 0 )
  {
    while ( v35 <= v46 )
    {
      v23 = (v35 - v46) / -2 + 2;
      for ( jj = v38 - v23; jj <= v38 + v23; ++jj )
      {
        for ( kk = v39 - v23; kk <= v39 + v23; ++kk )
        {
          if ( (unsigned int)(World::getBlockID(a2, jj, v35, kk) - 218) <= 5 )
          {
            if ( ChunkRandGen::get(a3) << 30 == 0 && World::getBlockID(a2, jj - 1, v35, kk) == 0 )
              WorldGenTree::growVines(this, a2, jj - 1, v35, kk, 1);
            if ( ChunkRandGen::get(a3) << 30 == 0 && World::getBlockID(a2, jj + 1, v35, kk) == 0 )
              WorldGenTree::growVines(this, a2, jj + 1, v35, kk, 0);
            if ( (ChunkRandGen::get(a3) & 3) == 0 && World::getBlockID(a2, jj, v35, kk - 1) == 0 )
              WorldGenTree::growVines(this, a2, jj, v35, kk - 1, 3);
            if ( ChunkRandGen::get(a3) << 30 == 0 && World::getBlockID(a2, jj, v35, kk + 1) == 0 )
              WorldGenTree::growVines(this, a2, jj, v35, kk + 1, 2);
          }
        }
      }
      ++v35;
    }
    if ( ChunkRandGen::get(a3) % 5u == 0 && v45 > 5 )
    {
      for ( mm = 4; mm != 2; --mm )
      {
        v26 = g_DirectionCoord;
        for ( nn = 0; nn != 4; ++nn )
        {
          if ( ChunkRandGen::get(a3) % mm == 0 )
          {
            v28 = ChunkRandGen::get(a3);
            v29 = v26[1] + v46 - 1 - mm;
            v41 = v39 + v26[2];
            v47[0] = v38 + *v26;
            v47[1] = v29;
            v47[2] = v41;
            v30 = nn + 1;
            if ( (nn & 1) != 0 )
              v30 = nn - 1;
            sub_2E7480(*((unsigned __int8 *)this + 4), a2, (WCoord *)v47, 237, v30 | (4 * (v28 % 3)));
          }
          v26 += 3;
        }
      }
    }
  }
  return 1;
}

