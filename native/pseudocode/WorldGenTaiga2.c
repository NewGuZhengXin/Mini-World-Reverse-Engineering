// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WorldGenTaiga2

//======================================================================
// WorldGenTaiga2::~WorldGenTaiga2()
// address: 0x0029CE84   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN14WorldGenTaiga2D1Ev'
void __fastcall WorldGenTaiga2::~WorldGenTaiga2(WorldGenTaiga2 *this)
{
  *(_DWORD *)this = &off_45B6E0;
}


//======================================================================
// WorldGenTaiga2::~WorldGenTaiga2()
// address: 0x0029CE94   size: 0x16 (22 bytes)
//======================================================================
void __fastcall WorldGenTaiga2::~WorldGenTaiga2(WorldGenTaiga2 *this)
{
  *(_DWORD *)this = &off_45B6E0;
  operator delete(this);
}


//======================================================================
// WorldGenTaiga2::generate(World *,ChunkRandGen &,WCoord const&)
// address: 0x0029CEE0   size: 0x244 (580 bytes)
//======================================================================
int __fastcall WorldGenTaiga2::generate(WorldGenTaiga2 *this, World *a2, ChunkRandGen *a3, const WCoord *a4)
{
  char v5; // r4
  char v6; // r0
  unsigned int v8; // r4
  int v9; // r5
  int v10; // r6
  int i; // r2
  int j; // r7
  int BlockID; // r0
  int v14; // r3
  int v15; // r7
  int v16; // r4
  int k; // r5
  int m; // r6
  int v19; // r3
  int v20; // r3
  int v21; // r4
  unsigned int v22; // r5
  int v23; // r0
  int v24; // [sp+10h] [bp-4Ch]
  int v25; // [sp+10h] [bp-4Ch]
  int v26; // [sp+14h] [bp-48h]
  int v27; // [sp+18h] [bp-44h]
  int v28; // [sp+1Ch] [bp-40h]
  int v30; // [sp+24h] [bp-38h]
  int v31; // [sp+24h] [bp-38h]
  int v33; // [sp+2Ch] [bp-30h]
  int v34; // [sp+30h] [bp-2Ch]
  unsigned int v35; // [sp+34h] [bp-28h]
  int v36; // [sp+38h] [bp-24h]
  _DWORD v38[4]; // [sp+4Ch] [bp-10h] BYREF

  v30 = ChunkRandGen::get(a3) & 3;
  v33 = v30 + 6;
  v5 = ChunkRandGen::get(a3);
  v6 = ChunkRandGen::get(a3);
  v26 = *(_DWORD *)a4;
  v27 = *((_DWORD *)a4 + 1);
  v28 = *((_DWORD *)a4 + 2);
  if ( v27 <= 0 || v27 + v33 > 255 )
    return 0;
  v35 = (v5 & 1) + 1;
  v8 = *((_DWORD *)a4 + 1);
  v9 = 1;
  v36 = (v6 & 1) + 2;
  while ( (int)v8 <= v27 + 1 + v33 )
  {
    if ( v9 == 0 )
      return 0;
    v10 = -((v35 >> 31) + (v8 - v27 >= v35) + ((int)(v8 - v27) >> 31)) & v36;
    for ( i = v26 - v10; ; i = v24 + 1 )
    {
      v24 = i;
      if ( i > v26 + v10 || v9 == 0 )
        break;
      for ( j = v28 - v10; j <= v28 + v10 && v9 != 0; ++j )
      {
        if ( v8 <= 0xFF )
        {
          v38[1] = v8;
          v38[0] = v24;
          v38[2] = j;
          BlockID = World::getBlockID(a2, (const WCoord *)v38);
          if ( BlockID == 0 || (unsigned int)(BlockID - 218) <= 5 )
            continue;
        }
        v9 = 0;
      }
    }
    ++v8;
  }
  if ( v9 == 0 )
    return 0;
  v38[2] = v28;
  v38[0] = v26;
  v38[1] = v27 - 1;
  if ( (unsigned int)(World::getBlockID(a2, (const WCoord *)v38) - 100) > 1 || v27 >= 249 - v30 )
    return 0;
  v38[2] = v28;
  v14 = *((unsigned __int8 *)this + 4);
  v38[0] = v26;
  v38[1] = v27 - 1;
  if ( v14 != 0 )
    World::setBlockAll(a2, (const WCoord *)v38, 101, 0, 3);
  else
    World::setBlockAll(a2, (const WCoord *)v38, 101, 0, 2);
  v15 = 0;
  v16 = ChunkRandGen::get(a3) & 1;
  v31 = 0;
  v25 = 1;
  while ( 1 )
  {
    v34 = v27 + v33 - v31;
    for ( k = v26 - v16; k <= v26 + v16; ++k )
    {
      for ( m = v28 - v16; m <= v28 + v16; ++m )
      {
        if ( (((k - v26 + ((k - v26) >> 31)) ^ ((k - v26) >> 31)) != v16
           || ((m - v28 + ((m - v28) >> 31)) ^ ((m - v28) >> 31)) != v16
           || v16 == 0)
          && World::isBlockOpaqueCube(a2, k, v34, m) == 0 )
        {
          WorldGenerator::setBlockAndMetadata(this, a2, k, v34, m, 219, 0);
        }
      }
    }
    v19 = v25;
    if ( v16 < v25 )
    {
      v20 = v15;
      v15 = v16 + 1;
    }
    else
    {
      ++v25;
      if ( v19 + 1 > v36 )
        v25 = v36;
      v20 = 1;
    }
    if ( ++v31 > (int)(v33 - v35) )
      break;
    v16 = v15;
    v15 = v20;
  }
  v21 = v27;
  v22 = ChunkRandGen::get(a3) % 3u;
  while ( v21 - v27 < (int)(v33 - v22) )
  {
    v38[0] = v26;
    v38[1] = v21;
    v38[2] = v28;
    v23 = World::getBlockID(a2, (const WCoord *)v38);
    if ( v23 == 0 || (unsigned int)(v23 - 218) <= 5 )
      WorldGenerator::setBlockAndMetadata(this, a2, v26, v21, v28, 201, 0);
    ++v21;
  }
  return 1;
}

