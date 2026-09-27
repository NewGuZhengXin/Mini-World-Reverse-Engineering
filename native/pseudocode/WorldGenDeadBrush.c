// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WorldGenDeadBrush

//======================================================================
// WorldGenDeadBrush::~WorldGenDeadBrush()
// address: 0x002F8DD4   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN17WorldGenDeadBrushD1Ev'
void __fastcall WorldGenDeadBrush::~WorldGenDeadBrush(WorldGenDeadBrush *this)
{
  *(_DWORD *)this = &off_45B6E0;
}


//======================================================================
// WorldGenDeadBrush::~WorldGenDeadBrush()
// address: 0x002F8DE4   size: 0x16 (22 bytes)
//======================================================================
void __fastcall WorldGenDeadBrush::~WorldGenDeadBrush(WorldGenDeadBrush *this)
{
  *(_DWORD *)this = &off_45B6E0;
  operator delete(this);
}


//======================================================================
// WorldGenDeadBrush::generate(World *,ChunkRandGen &,WCoord const&)
// address: 0x002F8E00   size: 0xE6 (230 bytes)
//======================================================================
int __fastcall WorldGenDeadBrush::generate(WorldGenDeadBrush *this, World *a2, ChunkRandGen *a3, const WCoord *a4)
{
  int v5; // r0
  int v6; // r1
  int v7; // r3
  int BlockID; // r0
  int i; // r2
  char v11; // r5
  char v12; // r7
  int v13; // r5
  char v14; // r7
  char v15; // r0
  int Material; // r0
  int v18; // [sp+Ch] [bp-28h]
  int v19; // [sp+10h] [bp-24h]
  int v21; // [sp+18h] [bp-1Ch] BYREF
  int v22; // [sp+1Ch] [bp-18h]
  int v23; // [sp+20h] [bp-14h]
  _DWORD v24[4]; // [sp+24h] [bp-10h] BYREF

  v5 = *(_DWORD *)a4;
  v6 = *((_DWORD *)a4 + 1);
  v7 = *((_DWORD *)a4 + 2);
  v21 = v5;
  v22 = v6;
  v23 = v7;
  while ( v22 > 0 )
  {
    BlockID = World::getBlockID(a2, (const WCoord *)&v21, (int)a3, v22);
    if ( BlockID != 0 && (unsigned int)(BlockID - 218) > 5 )
      break;
    --v22;
  }
  for ( i = 0; ; i = v18 + 1 )
  {
    v18 = i;
    if ( i >= *((_DWORD *)this + 3) )
      break;
    v11 = ChunkRandGen::get(a3);
    v19 = (v11 & 7) - (ChunkRandGen::get(a3) & 7);
    v12 = ChunkRandGen::get(a3);
    v13 = (v12 & 3) - (ChunkRandGen::get(a3) & 3);
    v14 = ChunkRandGen::get(a3);
    v15 = ChunkRandGen::get(a3);
    v24[2] = (v14 & 7) - (v15 & 7) + v23;
    v24[0] = v21 + v19;
    v24[1] = v13 + v22;
    if ( World::getBlockID(a2, (const WCoord *)v24, v13 + v22, v21 + v19) == 0 )
    {
      Material = BlockMaterialMgr::getMaterial(
                   (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                   *((_DWORD *)this + 2));
      if ( (*(int (__fastcall **)(int, World *, _DWORD *))(*(_DWORD *)Material + 160))(Material, a2, v24) != 0 )
        World::setBlockAll(a2, (const WCoord *)v24, *((_DWORD *)this + 2), 0, 2);
    }
  }
  return 1;
}

