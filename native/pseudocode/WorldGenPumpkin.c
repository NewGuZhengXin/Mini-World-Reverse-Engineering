// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WorldGenPumpkin

//======================================================================
// WorldGenPumpkin::~WorldGenPumpkin()
// address: 0x002DFC54   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN15WorldGenPumpkinD1Ev'
void __fastcall WorldGenPumpkin::~WorldGenPumpkin(WorldGenPumpkin *this)
{
  *(_DWORD *)this = &off_45B6E0;
}


//======================================================================
// WorldGenPumpkin::~WorldGenPumpkin()
// address: 0x002DFC64   size: 0x16 (22 bytes)
//======================================================================
void __fastcall WorldGenPumpkin::~WorldGenPumpkin(WorldGenPumpkin *this)
{
  *(_DWORD *)this = &off_45B6E0;
  operator delete(this);
}


//======================================================================
// WorldGenPumpkin::generate(World *,ChunkRandGen &,WCoord const&)
// address: 0x002DFC80   size: 0xF0 (240 bytes)
//======================================================================
int __fastcall WorldGenPumpkin::generate(WorldGenPumpkin *this, World *a2, ChunkRandGen *a3, const WCoord *a4)
{
  char v7; // r5
  char v8; // r5
  int v9; // r5
  char v10; // r0
  int v11; // r12
  int v12; // r3
  int v13; // r0
  int Material; // r0
  int v16; // [sp+8h] [bp-2Ch]
  char v17; // [sp+Ch] [bp-28h]
  int i; // [sp+14h] [bp-20h]
  int v20; // [sp+18h] [bp-1Ch] BYREF
  int v21; // [sp+1Ch] [bp-18h]
  int v22; // [sp+20h] [bp-14h]
  _DWORD v23[4]; // [sp+24h] [bp-10h] BYREF

  for ( i = 0; i < *((_DWORD *)this + 3); ++i )
  {
    v7 = ChunkRandGen::get(a3);
    v16 = (v7 & 7) - (ChunkRandGen::get(a3) & 7);
    v8 = ChunkRandGen::get(a3);
    v9 = (v8 & 3) - (ChunkRandGen::get(a3) & 3);
    v17 = ChunkRandGen::get(a3);
    v10 = ChunkRandGen::get(a3);
    v11 = *((_DWORD *)a4 + 1) + v9;
    v12 = *(_DWORD *)a4;
    v13 = (v17 & 7) - (v10 & 7) + *((_DWORD *)a4 + 2);
    v20 = *(_DWORD *)a4 + v16;
    v22 = v13;
    v21 = v11;
    if ( World::getBlockID(a2, (const WCoord *)&v20, v11, v12) == 0 )
    {
      v23[1] = v21 + dword_51665C;
      v23[0] = v20 + dword_516658;
      v23[2] = v22 + dword_516660;
      if ( World::getBlockID(a2, (const WCoord *)v23, v22 + dword_516660, v20 + dword_516658) == 100 )
      {
        Material = BlockMaterialMgr::getMaterial(
                     (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                     *((_DWORD *)this + 2));
        if ( (*(int (__fastcall **)(int, World *, int *))(*(_DWORD *)Material + 152))(Material, a2, &v20) != 0 )
          World::setBlockAll(a2, (const WCoord *)&v20, *((_DWORD *)this + 2), 0, 2);
      }
    }
  }
  return 1;
}

