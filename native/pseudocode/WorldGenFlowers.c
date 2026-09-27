// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WorldGenFlowers

//======================================================================
// WorldGenFlowers::~WorldGenFlowers()
// address: 0x002B4140   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN15WorldGenFlowersD1Ev'
void __fastcall WorldGenFlowers::~WorldGenFlowers(WorldGenFlowers *this)
{
  *(_DWORD *)this = &off_45B6E0;
}


//======================================================================
// WorldGenFlowers::~WorldGenFlowers()
// address: 0x002B4150   size: 0x16 (22 bytes)
//======================================================================
void __fastcall WorldGenFlowers::~WorldGenFlowers(WorldGenFlowers *this)
{
  *(_DWORD *)this = &off_45B6E0;
  operator delete(this);
}


//======================================================================
// WorldGenFlowers::generate(World *,ChunkRandGen &,WCoord const&)
// address: 0x002B416C   size: 0x102 (258 bytes)
//======================================================================
int __fastcall WorldGenFlowers::generate(WorldGenFlowers *this, World *a2, ChunkRandGen *a3, const WCoord *a4)
{
  char v7; // r6
  char v8; // r6
  char v9; // r6
  char v10; // r0
  int v11; // r12
  int v12; // r3
  int j; // r6
  int v14; // r2
  int v16; // [sp+10h] [bp-2Ch]
  int v17; // [sp+14h] [bp-28h]
  int i; // [sp+1Ch] [bp-20h]
  int Material; // [sp+20h] [bp-1Ch]
  int v21; // [sp+24h] [bp-18h]
  int v22; // [sp+2Ch] [bp-10h] BYREF
  int v23; // [sp+30h] [bp-Ch]
  int v24; // [sp+34h] [bp-8h]

  v21 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)a2 + 31) + 44))(*((_DWORD *)a2 + 31)) - 1;
  Material = BlockMaterialMgr::getMaterial(
               (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
               *((_DWORD *)this + 2));
  for ( i = 0; i < *((_DWORD *)this + 4); ++i )
  {
    v7 = ChunkRandGen::get(a3);
    v16 = (v7 & 7) - (ChunkRandGen::get(a3) & 7);
    v8 = ChunkRandGen::get(a3);
    v17 = (v8 & 3) - (ChunkRandGen::get(a3) & 3);
    v9 = ChunkRandGen::get(a3);
    v10 = ChunkRandGen::get(a3);
    v11 = v17 + *((_DWORD *)a4 + 1);
    v12 = (v9 & 7) - (v10 & 7) + *((_DWORD *)a4 + 2);
    v22 = *(_DWORD *)a4 + v16;
    v23 = v11;
    v24 = v12;
    if ( World::getBlockID(a2, (const WCoord *)&v22) == 0
      && v23 < v21
      && (*(int (__fastcall **)(int, World *, int *))(*(_DWORD *)Material + 152))(Material, a2, &v22) != 0 )
    {
      World::setBlockAll(a2, (const WCoord *)&v22, *((_DWORD *)this + 2), 0, 2);
      for ( j = 1; j < *((_DWORD *)this + 3); ++j )
      {
        v14 = *((_DWORD *)this + 2);
        ++v23;
        World::setBlockAll(a2, (const WCoord *)&v22, v14, 8, 2);
      }
    }
  }
  return 1;
}


//======================================================================
// WorldGenFlowers::WorldGenFlowers(int,int)
// address: 0x002B4274   size: 0x32 (50 bytes)
//======================================================================
// Alternative name is '_ZN15WorldGenFlowersC2Eii'
void __fastcall WorldGenFlowers::WorldGenFlowers(WorldGenFlowers *this, int a2, int a3)
{
  *((_BYTE *)this + 4) = 0;
  *((_DWORD *)this + 4) = a3;
  *(_DWORD *)this = &off_45DEC0;
  *((_DWORD *)this + 2) = a2;
  *((_DWORD *)this + 3) = *(_DWORD *)(DefManager::getBlockDef(
                                        (DefManager *)Ogre::Singleton<DefManager>::ms_Singleton,
                                        a2)
                                    + 76);
}

