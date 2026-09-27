// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WorldGenForest

//======================================================================
// WorldGenForest::~WorldGenForest()
// address: 0x002FCB9C   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN14WorldGenForestD1Ev'
void __fastcall WorldGenForest::~WorldGenForest(WorldGenForest *this)
{
  *(_DWORD *)this = &off_45B6E0;
}


//======================================================================
// WorldGenForest::~WorldGenForest()
// address: 0x002FCBAC   size: 0x16 (22 bytes)
//======================================================================
void __fastcall WorldGenForest::~WorldGenForest(WorldGenForest *this)
{
  *(_DWORD *)this = &off_45B6E0;
  operator delete(this);
}


//======================================================================
// WorldGenForest::generate(World *,ChunkRandGen &,WCoord const&)
// address: 0x002FCBC8   size: 0x210 (528 bytes)
//======================================================================
int __fastcall WorldGenForest::generate(WorldGenForest *this, World *a2, ChunkRandGen *a3, const WCoord *a4)
{
  signed int v6; // r4
  int v7; // r5
  int i; // r6
  int j; // r7
  int BlockID; // r0
  int v11; // r3
  int k; // r4
  int v13; // r3
  int v14; // r7
  int m; // r5
  int n; // r6
  int v17; // r2
  int v18; // r3
  int v19; // r0
  int v20; // r4
  int v21; // r0
  int v22; // [sp+14h] [bp-40h]
  int v23; // [sp+18h] [bp-3Ch]
  int v24; // [sp+1Ch] [bp-38h]
  int v26; // [sp+24h] [bp-30h]
  signed int v28; // [sp+2Ch] [bp-28h]
  unsigned int v29; // [sp+30h] [bp-24h]
  signed int v30; // [sp+34h] [bp-20h]
  int v31; // [sp+38h] [bp-1Ch]
  _DWORD v33[4]; // [sp+44h] [bp-10h] BYREF

  ChunkRandGen::_dorand48((unsigned __int16 *)a3);
  v29 = ((*((unsigned __int16 *)a3 + 2) << 16) | (unsigned int)*((unsigned __int16 *)a3 + 1)) % 3;
  v28 = v29 + 5;
  v23 = *(_DWORD *)a4;
  v22 = *((_DWORD *)a4 + 1);
  v24 = *((_DWORD *)a4 + 2);
  if ( v22 <= 0 )
    return 0;
  v31 = v22 + v28;
  if ( v22 + v28 > 255 )
    return 0;
  v6 = *((_DWORD *)a4 + 1);
  v26 = 1;
  v30 = v22 + 1 + v28;
  while ( v6 <= v30 )
  {
    v7 = 2;
    if ( v6 < v30 - 2 )
      v7 = v6 != v22;
    for ( i = v23 - v7; i <= v23 + v7 && v26 != 0; ++i )
    {
      for ( j = v24 - v7; j <= v24 + v7 && v26 != 0; ++j )
      {
        if ( (unsigned int)v6 <= 0xFF )
        {
          v33[0] = i;
          v33[1] = v6;
          v33[2] = j;
          BlockID = World::getBlockID(a2, (const WCoord *)v33, v24, v26);
          if ( BlockID == 0 || (unsigned int)(BlockID - 218) <= 5 )
            continue;
        }
        v26 = 0;
      }
    }
    ++v6;
  }
  if ( v26 == 0 )
    return 0;
  v33[0] = v23;
  v33[1] = v22 - 1;
  v33[2] = v24;
  if ( (unsigned int)(World::getBlockID(a2, (const WCoord *)v33, v23, v24) - 100) > 1 || v22 >= (int)(250 - v29) )
    return 0;
  v33[0] = v23;
  v11 = *((unsigned __int8 *)this + 4);
  v33[1] = v22 - 1;
  v33[2] = v24;
  if ( v11 != 0 )
    World::setBlockAll(a2, (const WCoord *)v33, 101, 0, 3);
  else
    World::setBlockAll(a2, (const WCoord *)v33, 101, 0, 2);
  for ( k = v22 - 3 + v28; ; ++k )
  {
    v13 = v22 + v28;
    if ( k > v31 )
      break;
    v14 = (k - v31) / -2 + 1;
    for ( m = v23 - v14; m <= v23 + v14; ++m )
    {
      for ( n = v24 - v14; n <= v24 + v14; ++n )
      {
        v17 = m - v23;
        v18 = (m - v23 + ((m - v23) >> 31)) ^ ((m - v23) >> 31);
        if ( v18 == v14 )
        {
          v17 = v24;
          v18 = (n - v24 + ((n - v24) >> 31)) ^ ((n - v24) >> 31);
          if ( v18 == v14 )
          {
            ChunkRandGen::_dorand48((unsigned __int16 *)a3);
            v18 = *((unsigned __int16 *)a3 + 1);
            if ( (v18 & 1) == 0 )
              continue;
            v17 = k - v31;
            if ( k == v31 )
              continue;
          }
        }
        v33[0] = m;
        v33[1] = k;
        v33[2] = n;
        v19 = World::getBlockID(a2, (const WCoord *)v33, v17, v18);
        if ( v19 == 0 || (unsigned int)(v19 - 218) <= 5 )
          WorldGenerator::setBlockAndMetadata(this, a2, m, k, n, 220, 0);
      }
    }
  }
  v20 = v22;
  do
  {
    v33[0] = v23;
    v33[1] = v20;
    v33[2] = v24;
    v21 = World::getBlockID(a2, (const WCoord *)v33, v24, v13);
    if ( v21 == 0 || (unsigned int)(v21 - 218) <= 5 )
      WorldGenerator::setBlockAndMetadata(this, a2, v23, v20, v24, 202, 0);
    v13 = ++v20 - v22;
  }
  while ( v20 - v22 < v28 );
  return 1;
}

