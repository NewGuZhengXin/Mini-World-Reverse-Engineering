// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WorldGenDungeons

//======================================================================
// WorldGenDungeons::~WorldGenDungeons()
// address: 0x002D3F74   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN16WorldGenDungeonsD1Ev'
void __fastcall WorldGenDungeons::~WorldGenDungeons(WorldGenDungeons *this)
{
  *(_DWORD *)this = &off_45B6E0;
}


//======================================================================
// WorldGenDungeons::~WorldGenDungeons()
// address: 0x002D3F84   size: 0x16 (22 bytes)
//======================================================================
void __fastcall WorldGenDungeons::~WorldGenDungeons(WorldGenDungeons *this)
{
  *(_DWORD *)this = &off_45B6E0;
  operator delete(this);
}


//======================================================================
// WorldGenDungeons::generate(World *,ChunkRandGen &,WCoord const&)
// address: 0x002D3FA0   size: 0x2A4 (676 bytes)
//======================================================================
int __fastcall WorldGenDungeons::generate(
        WorldGenDungeons *this,
        WorldContainerMgr **a2,
        ChunkRandGen *a3,
        const WCoord *a4)
{
  int v5; // r5
  int i; // r4
  int v7; // r6
  int isBlockSolid; // r0
  int v9; // r3
  int v10; // r2
  int j; // r6
  int k; // r4
  int v13; // r7
  int v14; // r5
  int v15; // r2
  unsigned int v16; // r5
  unsigned int v17; // r0
  int v18; // r7
  int v19; // r6
  int *v20; // r4
  int n; // r5
  int v22; // r12
  int v23; // r3
  int v24; // r2
  int v27; // [sp+14h] [bp-50h]
  int v28; // [sp+14h] [bp-50h]
  int v29; // [sp+18h] [bp-4Ch]
  int v30; // [sp+18h] [bp-4Ch]
  int v31; // [sp+1Ch] [bp-48h]
  int m; // [sp+1Ch] [bp-48h]
  int v33; // [sp+24h] [bp-40h]
  int v34; // [sp+28h] [bp-3Ch]
  int v35; // [sp+2Ch] [bp-38h]
  int v37; // [sp+34h] [bp-30h]
  int v38; // [sp+38h] [bp-2Ch]
  int v39; // [sp+3Ch] [bp-28h]
  int v40; // [sp+40h] [bp-24h]
  unsigned int v42; // [sp+48h] [bp-1Ch] BYREF
  int v43; // [sp+4Ch] [bp-18h]
  int v44; // [sp+50h] [bp-14h]
  int v45; // [sp+54h] [bp-10h] BYREF
  int v46; // [sp+58h] [bp-Ch]
  int v47; // [sp+5Ch] [bp-8h]

  v39 = (ChunkRandGen::get(a3) & 1) + 2;
  v35 = (ChunkRandGen::get(a3) & 1) + 2;
  v31 = *(_DWORD *)a4 - v39 - 1;
  v5 = v31;
  v29 = 0;
  v40 = *(_DWORD *)a4;
  v33 = *((_DWORD *)a4 + 1);
  v38 = *((_DWORD *)a4 + 2);
  v27 = *(_DWORD *)a4 + v39 + 1;
  while ( v5 <= v27 )
  {
    for ( i = v33 - 1; i <= v33 + 4; ++i )
    {
      v7 = v38 - v35 - 1;
      v37 = v38 + v35 + 1;
      while ( v7 <= v37 )
      {
        isBlockSolid = World::isBlockSolid((World *)a2, v5, i, v7);
        v9 = v33 - 1;
        if ( (i == v33 - 1 || i == v33 + 4) && isBlockSolid == 0 )
          return 0;
        if ( v5 == v31 || (v9 = v27, v5 == v27) || v7 == v38 - v35 - 1 || v7 == v37 )
        {
          if ( i == v33 )
          {
            v45 = v5;
            v46 = i;
            v47 = v7;
            if ( World::getBlockID((World *)a2, (const WCoord *)&v45, v33, v9) == 0 )
            {
              v46 = i + 1;
              v45 = v5;
              v47 = v7;
              v29 += World::getBlockID((World *)a2, (const WCoord *)&v45, v10, i + 1) == 0;
            }
          }
        }
        ++v7;
      }
    }
    ++v5;
  }
  if ( (unsigned int)(v29 - 1) > 4 )
    return 0;
  for ( j = v31; j <= v27; ++j )
  {
    for ( k = v33 + 3; ; --k )
    {
      v13 = v33 - 1;
      if ( k < v33 - 1 )
        break;
      v14 = v38 - v35 - 1;
      v34 = v38 + v35 + 1;
      while ( v14 <= v34 )
      {
        v15 = v31;
        v42 = j;
        v43 = k;
        v44 = v14;
        if ( (j == v31 || k == v13 || v14 == v38 - v35 - 1 || j == v27 || k == v33 + 4 || v14 == v34)
          && (k < 0
           || (v46 = k + dword_51665C,
               v45 = j + dword_516658,
               v47 = v14 + dword_516660,
               World::isBlockSolid((World *)a2, (const WCoord *)&v45, v14 + dword_516660) != 0)) )
        {
          if ( World::isBlockSolid((World *)a2, (const WCoord *)&v42, v15) != 0 )
          {
            if ( k == v13 )
              ChunkRandGen::get(a3);
            v45 = j;
            v46 = k;
            v47 = v14;
            World::setBlockAll((World *)a2, (const WCoord *)&v45, 505, 0, 2);
          }
        }
        else
        {
          World::setBlockAll((World *)a2, (const WCoord *)&v42, 0, 0, 2);
        }
        ++v14;
      }
    }
  }
  for ( m = 2; m != 0; --m )
  {
    v28 = 3;
    while ( 1 )
    {
      v30 = *((_DWORD *)this + 2);
      v16 = v40 + ChunkRandGen::get(a3) % (unsigned int)(2 * v39 + 1) - v39;
      v17 = ChunkRandGen::get(a3);
      v42 = v16;
      v43 = v33;
      v44 = v38 + v17 % (2 * v35 + 1) - v35;
      if ( World::getBlockID((World *)a2, (const WCoord *)&v42, v38, v35) == 0 )
      {
        v18 = 0;
        v19 = 0;
        v20 = g_DirectionCoord;
        for ( n = 0; n != 4; ++n )
        {
          v22 = v43 + v20[1];
          v23 = v44 + v20[2];
          v24 = *v20;
          v45 = v42 + *v20;
          v46 = v22;
          v47 = v23;
          if ( World::isBlockSolid((World *)a2, (const WCoord *)&v45, v24) != 0 )
          {
            v18 = n + 1;
            if ( (n & 1) != 0 )
              v18 = n - 1;
            ++v19;
          }
          v20 += 3;
        }
        if ( v19 == 1 )
          break;
      }
      if ( --v28 == 0 )
        goto LABEL_55;
    }
    World::setBlockAll((World *)a2, (const WCoord *)&v42, v30, v18, 2);
    WorldContainerMgr::addDungeonChest(a2[32], (const WCoord *)&v42, v30, a3);
LABEL_55:
    ;
  }
  return 1;
}

