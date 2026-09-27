// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WorldGenVoxelModel

//======================================================================
// WorldGenVoxelModel::~WorldGenVoxelModel()
// address: 0x002E1A14   size: 0x36 (54 bytes)
//======================================================================
// Alternative name is '_ZN18WorldGenVoxelModelD1Ev'
void __fastcall WorldGenVoxelModel::~WorldGenVoxelModel(WorldGenVoxelModel *this)
{
  void **v1; // r5

  v1 = *((void ***)this + 3);
  *(_DWORD *)this = &off_4615F0;
  if ( v1 != nullptr )
  {
    VoxelModel::~VoxelModel(v1);
    operator delete(v1);
  }
  sub_3BDF80((char *)this + 8);
  *(_DWORD *)this = &off_45B6E0;
}


//======================================================================
// WorldGenVoxelModel::~WorldGenVoxelModel()
// address: 0x002E1A54   size: 0x12 (18 bytes)
//======================================================================
void __fastcall WorldGenVoxelModel::~WorldGenVoxelModel(WorldGenVoxelModel *this)
{
  WorldGenVoxelModel::~WorldGenVoxelModel(this);
  operator delete(this);
}


//======================================================================
// WorldGenVoxelModel::generate(World *,ChunkRandGen &,WCoord const&)
// address: 0x002E1A68   size: 0x9C (156 bytes)
//======================================================================
int __fastcall WorldGenVoxelModel::generate(WorldGenVoxelModel *this, World *a2, ChunkRandGen *a3, const WCoord *a4)
{
  int v5; // r1
  int v7; // r0
  int v8; // r2
  int v9; // r4
  int BlockID; // r1
  int v12; // [sp+8h] [bp-1Ch] BYREF
  int v13; // [sp+Ch] [bp-18h]
  int v14; // [sp+10h] [bp-14h]
  _DWORD v15[4]; // [sp+14h] [bp-10h] BYREF

  v5 = *((_DWORD *)this + 3);
  v7 = *((_DWORD *)a4 + 1);
  v8 = *(_DWORD *)(v5 + 12);
  v9 = *((_DWORD *)a4 + 2);
  v12 = *(_DWORD *)a4 - *(_DWORD *)(v5 + 4) / 2;
  v13 = v7;
  v14 = v9 - v8 / 2;
  while ( v13 > 0 )
  {
    v15[2] = v14 + dword_516660;
    v15[1] = v13 + dword_51665C;
    v15[0] = v12 + dword_516658;
    BlockID = World::getBlockID(a2, (const WCoord *)v15, v13 + dword_51665C, v12 + dword_516658);
    if ( BlockID > 0
      && *(_DWORD *)(*(_DWORD *)(BlockMaterialMgr::getMaterial(
                                   (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                                   BlockID)
                               + 36)
                   + 12) == 1 )
    {
      break;
    }
    --v13;
  }
  if ( v13 <= 0 )
    return 0;
  VoxelModel::placeInWorld(*((VoxelModel **)this + 3), a2, (const WCoord *)&v12, *((_DWORD *)this + 4), true, 2);
  return 1;
}


//======================================================================
// WorldGenVoxelModel::WorldGenVoxelModel(char const*,int)
// address: 0x002E1B0C   size: 0x92 (146 bytes)
//======================================================================
// Alternative name is '_ZN18WorldGenVoxelModelC1EPKci'
void __fastcall WorldGenVoxelModel::WorldGenVoxelModel(WorldGenVoxelModel *this, char *a2, int a3)
{
  VoxelModel *v6; // r5
  char s[256]; // [sp+Ch] [bp-108h] BYREF

  *((_BYTE *)this + 4) = 0;
  *(_DWORD *)this = &off_4615F0;
  sub_3BF0BC((int)this + 8, a2);
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = a3;
  j_sprintf(s, "voxel/%s.vox", a2);
  v6 = (VoxelModel *)operator new(0x10u);
  VoxelModel::VoxelModel(v6);
  *((_DWORD *)this + 3) = v6;
  VoxelModel::loadVoxelFile(v6, s);
}

