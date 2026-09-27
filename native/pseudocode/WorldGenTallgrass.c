// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WorldGenTallgrass

//======================================================================
// WorldGenTallgrass::~WorldGenTallgrass()
// address: 0x002DF320   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN17WorldGenTallgrassD1Ev'
void __fastcall WorldGenTallgrass::~WorldGenTallgrass(WorldGenTallgrass *this)
{
  *(_DWORD *)this = &off_45B6E0;
}


//======================================================================
// WorldGenTallgrass::~WorldGenTallgrass()
// address: 0x002DF330   size: 0x16 (22 bytes)
//======================================================================
void __fastcall WorldGenTallgrass::~WorldGenTallgrass(WorldGenTallgrass *this)
{
  *(_DWORD *)this = &off_45B6E0;
  operator delete(this);
}


//======================================================================
// WorldGenTallgrass::generate(World *,ChunkRandGen &,WCoord const&)
// address: 0x002DF34C   size: 0x108 (264 bytes)
//======================================================================
int __fastcall WorldGenTallgrass::generate(WorldGenTallgrass *this, World *a2, ChunkRandGen *a3, const WCoord *a4)
{
  int v5; // r0
  int v6; // r1
  int v7; // r3
  int BlockID; // r0
  char v10; // r5
  char v11; // r7
  int v12; // r5
  char v13; // r7
  char v14; // r0
  int Material; // r0
  int j; // r5
  int v17; // r2
  int v19; // [sp+Ch] [bp-28h]
  int i; // [sp+10h] [bp-24h]
  int v22; // [sp+18h] [bp-1Ch] BYREF
  int v23; // [sp+1Ch] [bp-18h]
  int v24; // [sp+20h] [bp-14h]
  int v25; // [sp+24h] [bp-10h] BYREF
  int v26; // [sp+28h] [bp-Ch]
  int v27; // [sp+2Ch] [bp-8h]

  v5 = *(_DWORD *)a4;
  v6 = *((_DWORD *)a4 + 1);
  v7 = *((_DWORD *)a4 + 2);
  v22 = v5;
  v23 = v6;
  v24 = v7;
  while ( 1 )
  {
    BlockID = World::getBlockID(a2, (const WCoord *)&v22, (int)a3, v7);
    if ( BlockID != 0 && (unsigned int)(BlockID - 218) > 5 )
      break;
    if ( v23 <= 0 )
      break;
    v7 = --v23;
  }
  for ( i = 0; i < *((_DWORD *)this + 4); ++i )
  {
    v10 = ChunkRandGen::get(a3);
    v19 = (v10 & 7) - (ChunkRandGen::get(a3) & 7);
    v11 = ChunkRandGen::get(a3);
    v12 = (v11 & 3) - (ChunkRandGen::get(a3) & 3);
    v13 = ChunkRandGen::get(a3);
    v14 = ChunkRandGen::get(a3);
    v27 = (v13 & 7) - (v14 & 7) + v24;
    v25 = v22 + v19;
    v26 = v12 + v23;
    if ( World::getBlockID(a2, (const WCoord *)&v25, v12 + v23, v22 + v19) == 0 )
    {
      Material = BlockMaterialMgr::getMaterial(
                   (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                   *((_DWORD *)this + 2));
      if ( (*(int (__fastcall **)(int, World *, int *))(*(_DWORD *)Material + 152))(Material, a2, &v25) != 0 )
      {
        World::setBlockAll(a2, (const WCoord *)&v25, *((_DWORD *)this + 2), 0, 2);
        for ( j = 1; j < *((_DWORD *)this + 3); ++j )
        {
          v17 = *((_DWORD *)this + 2);
          ++v26;
          World::setBlockAll(a2, (const WCoord *)&v25, v17, 8, 2);
        }
      }
    }
  }
  return 1;
}


//======================================================================
// WorldGenTallgrass::WorldGenTallgrass(int,int)
// address: 0x002DF458   size: 0x32 (50 bytes)
//======================================================================
// Alternative name is '_ZN17WorldGenTallgrassC2Eii'
void __fastcall WorldGenTallgrass::WorldGenTallgrass(WorldGenTallgrass *this, int a2, int a3)
{
  *((_BYTE *)this + 4) = 0;
  *((_DWORD *)this + 4) = a3;
  *(_DWORD *)this = &off_461218;
  *((_DWORD *)this + 2) = a2;
  *((_DWORD *)this + 3) = *(_DWORD *)(DefManager::getBlockDef(
                                        (DefManager *)Ogre::Singleton<DefManager>::ms_Singleton,
                                        a2)
                                    + 76);
}

