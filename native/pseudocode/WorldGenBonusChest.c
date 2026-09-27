// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WorldGenBonusChest

//======================================================================
// WorldGenBonusChest::~WorldGenBonusChest()
// address: 0x002AFB04   size: 0x26 (38 bytes)
//======================================================================
// Alternative name is '_ZN18WorldGenBonusChestD1Ev'
void __fastcall WorldGenBonusChest::~WorldGenBonusChest(WorldGenBonusChest *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_45DC70;
  v2 = *((void **)this + 3);
  if ( v2 != nullptr )
    operator delete(v2);
  *(_DWORD *)this = &off_45B6E0;
}


//======================================================================
// WorldGenBonusChest::~WorldGenBonusChest()
// address: 0x002AFB34   size: 0x12 (18 bytes)
//======================================================================
void __fastcall WorldGenBonusChest::~WorldGenBonusChest(WorldGenBonusChest *this)
{
  WorldGenBonusChest::~WorldGenBonusChest(this);
  operator delete(this);
}


//======================================================================
// WorldGenBonusChest::generate(World *,ChunkRandGen &,WCoord const&)
// address: 0x002AFB68   size: 0x18A (394 bytes)
//======================================================================
int __fastcall WorldGenBonusChest::generate(
        WorldGenBonusChest *this,
        WorldContainerMgr **a2,
        ChunkRandGen *a3,
        const WCoord *a4)
{
  int v4; // r4
  int BlockID; // r0
  char v8; // r5
  unsigned int v9; // r5
  char v10; // r0
  int *v11; // r4
  int v12; // r2
  int v13; // r0
  int v15; // [sp+0h] [bp-4Ch]
  int v16; // [sp+4h] [bp-48h]
  int HaveSolidTopSurface; // [sp+4h] [bp-48h]
  int v19; // [sp+Ch] [bp-40h]
  unsigned int v20; // [sp+10h] [bp-3Ch]
  int v22; // [sp+1Ch] [bp-30h]
  int v23; // [sp+24h] [bp-28h] BYREF
  int v24; // [sp+28h] [bp-24h]
  int v25; // [sp+2Ch] [bp-20h]
  int v26; // [sp+30h] [bp-1Ch] BYREF
  int v27; // [sp+34h] [bp-18h]
  int v28; // [sp+38h] [bp-14h]
  _DWORD v29[4]; // [sp+3Ch] [bp-10h] BYREF

  v22 = *(_DWORD *)a4;
  v4 = *((_DWORD *)a4 + 1);
  v19 = *((_DWORD *)a4 + 2);
  while ( 1 )
  {
    BlockID = World::getBlockID((World *)a2, a4);
    if ( BlockID != 0 && (unsigned int)(BlockID - 218) > 5 )
      break;
    if ( v4 <= 1 )
      break;
    --v4;
  }
  if ( v4 <= 0 )
    return 0;
  v15 = 4;
  while ( 1 )
  {
    v8 = ChunkRandGen::get(a3);
    v16 = (v8 & 3) - (ChunkRandGen::get(a3) & 3);
    v9 = ChunkRandGen::get(a3);
    v20 = v9 % 3 - ChunkRandGen::get(a3) % 3u;
    LOBYTE(v9) = ChunkRandGen::get(a3);
    v10 = ChunkRandGen::get(a3);
    v23 = v22 + v16;
    v24 = v4 + 1 + v20;
    v25 = v19 + (v9 & 3) - (v10 & 3);
    if ( World::getBlockID((World *)a2, (const WCoord *)&v23) == 0 )
    {
      v29[0] = v23 + dword_516658;
      v29[1] = v24 + dword_51665C;
      v29[2] = v25 + dword_516660;
      HaveSolidTopSurface = World::doesBlockHaveSolidTopSurface((World *)a2, (const WCoord *)v29);
      if ( HaveSolidTopSurface != 0 )
        break;
    }
    if ( --v15 == 0 )
      return 0;
  }
  WorldGenerator::setBlock(this, (World *)a2, (const WCoord *)&v23, 801);
  WorldContainerMgr::addStorageBox(a2[32], v23, v24, v25);
  v11 = g_DirectionCoord;
  do
  {
    v12 = v24 + v11[1];
    v13 = v11[2] + v25;
    v26 = v23 + *v11;
    v28 = v13;
    v27 = v12;
    if ( World::getBlockID((World *)a2, (const WCoord *)&v26) == 0 )
    {
      v29[0] = v26 + dword_516658;
      v29[1] = v27 + dword_51665C;
      v29[2] = v28 + dword_516660;
      if ( World::doesBlockHaveSolidTopSurface((World *)a2, (const WCoord *)v29) != 0 )
        WorldGenerator::setBlock(this, (World *)a2, (const WCoord *)&v26, 817);
    }
    v11 += 3;
  }
  while ( v11 != &dword_516658 );
  return HaveSolidTopSurface;
}

