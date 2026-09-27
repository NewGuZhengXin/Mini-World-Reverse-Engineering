// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockFenceGate

//======================================================================
// BlockFenceGate::getGeomName(void)
// address: 0x002A93B0   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall BlockFenceGate::getGeomName(BlockFenceGate *this)
{
  return "fencegate";
}


//======================================================================
// BlockFenceGate::onBlockPlaced(World *,WCoord const&,DirectionType,float,float,float,int)
// address: 0x002A93BC   size: 0x18 (24 bytes)
//======================================================================
int __fastcall BlockFenceGate::onBlockPlaced(int a1, int a2, int *a3)
{
  return BlockOperateMgr::getCurPlaceDir(
           (BlockOperateMgr *)Ogre::Singleton<BlockOperateMgr>::ms_Singleton,
           *a3,
           a3[1],
           a3[2]);
}


//======================================================================
// BlockFenceGate::canPlaceBlockAt(World *,WCoord const&)
// address: 0x002A93D8   size: 0x42 (66 bytes)
//======================================================================
int __fastcall BlockFenceGate::canPlaceBlockAt(BlockFenceGate *this, World *a2, const WCoord *a3)
{
  int v6; // r0
  int v7; // r2
  int v8; // r7
  int result; // r0
  _DWORD v10[4]; // [sp+4h] [bp-10h] BYREF

  v6 = *((_DWORD *)a3 + 1) + dword_51665C;
  v7 = *((_DWORD *)a3 + 2) + dword_516660;
  v8 = *(_DWORD *)a3;
  v10[1] = v6;
  v10[0] = v8 + dword_516658;
  v10[2] = v7;
  result = World::isBlockSolid(a2, (const WCoord *)v10);
  if ( result != 0 )
    return BlockMaterial::canPlaceBlockAt(this, a2, a3);
  return result;
}


//======================================================================
// BlockFenceGate::canBlocksMovement(World *,WCoord const&)
// address: 0x002A9420   size: 0x12 (18 bytes)
//======================================================================
bool __fastcall BlockFenceGate::canBlocksMovement(BlockFenceGate *this, World *a2, const WCoord *a3)
{
  return (int)World::getBlockData(a2, a3) >> 2 == 0;
}


//======================================================================
// BlockFenceGate::onBlockActivated(World *,WCoord const&,DirectionType,ClientPlayer *)
// address: 0x002A9432   size: 0x20 (32 bytes)
//======================================================================
int __fastcall BlockFenceGate::onBlockActivated(int a1, World *this, WCoord *a3)
{
  int BlockData; // r0

  BlockData = World::getBlockData(this, a3);
  World::setBlockData(this, a3, BlockData ^ 4, 2);
  return 1;
}


//======================================================================
// BlockFenceGate::onNeighborBlockChange(World *,WCoord const&,int)
// address: 0x002A9454   size: 0x5A (90 bytes)
//======================================================================
int __fastcall BlockFenceGate::onNeighborBlockChange(BlockFenceGate *this, World *a2, const WCoord *a3, int a4)
{
  int BlockData; // r4
  int result; // r0
  int Material; // r0
  int v10; // r2

  BlockData = World::getBlockData(a2, a3);
  result = World::isBlockIndirectlyGettingPowered(a2, a3);
  if ( result != 0 )
  {
    if ( (BlockData & 4) == 0 )
    {
      v10 = BlockData | 4;
      return World::setBlockData(a2, a3, v10, 2);
    }
  }
  else if ( a4 > 0 )
  {
    Material = BlockMaterialMgr::getMaterial((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, a4);
    result = (*(int (__fastcall **)(int))(*(_DWORD *)Material + 68))(Material);
    if ( result != 0 && (BlockData & 4) != 0 )
    {
      v10 = BlockData & 3;
      return World::setBlockData(a2, a3, v10, 2);
    }
  }
  return result;
}


//======================================================================
// BlockFenceGate::createCollideData(CollisionDetect *,World *,WCoord const&)
// address: 0x002A94B4   size: 0xCA (202 bytes)
//======================================================================
int __fastcall BlockFenceGate::createCollideData(
        BlockFenceGate *this,
        CollisionDetect *a2,
        World *a3,
        const WCoord *a4)
{
  int BlockData; // r0
  bool v6; // zf
  int v7; // r3
  int v8; // r6
  int v9; // r0
  int v10; // r1
  int v11; // r1
  int v12; // r3
  int v13; // r2
  int v14; // r3
  int v15; // r1
  int v17; // [sp+8h] [bp-34h]
  _DWORD v19[3]; // [sp+14h] [bp-28h] BYREF
  int v20; // [sp+20h] [bp-1Ch] BYREF
  int v21; // [sp+24h] [bp-18h]
  int v22; // [sp+28h] [bp-14h]
  int v23; // [sp+2Ch] [bp-10h] BYREF
  int v24; // [sp+30h] [bp-Ch]
  int v25; // [sp+34h] [bp-8h]

  BlockData = World::getBlockData(a3, a4);
  v17 = BlockData & 3;
  v7 = BlockData >> 2;
  v6 = BlockData >> 2 == 0;
  v8 = *((_DWORD *)a4 + 2);
  v9 = *((_DWORD *)a4 + 1);
  v10 = *(_DWORD *)a4;
  if ( v6 )
  {
    v19[1] = v7;
    v19[2] = v7;
    v19[0] = 42;
    v20 = 58;
    v21 = 160;
    v22 = 100;
    v23 = 100 * v10;
    v24 = 100 * v9;
    v25 = 100 * v8;
  }
  else
  {
    v19[0] = 50;
    v19[1] = 0;
    v19[2] = 84;
    v20 = 100;
    v21 = 160;
    v24 = 100 * v9;
    v22 = 100;
    v23 = 100 * v10;
    v25 = 100 * v8;
    CollisionDetect::addObstacle(a2, (const WCoord *)v19, (const WCoord *)&v20, (const WCoord *)&v23, v17);
    v19[1] = 0;
    v19[2] = 0;
    v19[0] = 50;
    v21 = 160;
    v22 = 16;
    v11 = *((_DWORD *)a4 + 2);
    v12 = *((_DWORD *)a4 + 1);
    v20 = 100;
    v13 = 100 * v12;
    v14 = 100 * v11;
    v15 = *(_DWORD *)a4;
    v25 = v14;
    v24 = v13;
    v23 = 100 * v15;
  }
  return CollisionDetect::addObstacle(a2, (const WCoord *)v19, (const WCoord *)&v20, (const WCoord *)&v23, v17);
}


//======================================================================
// BlockFenceGate::~BlockFenceGate()
// address: 0x002A9580   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN14BlockFenceGateD1Ev'
void __fastcall BlockFenceGate::~BlockFenceGate(BlockFenceGate *this)
{
  *(_DWORD *)this = &off_45DB48;
  ModelBlockMaterial::~ModelBlockMaterial(this);
}


//======================================================================
// BlockFenceGate::~BlockFenceGate()
// address: 0x002A959C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BlockFenceGate::~BlockFenceGate(BlockFenceGate *this)
{
  BlockFenceGate::~BlockFenceGate(this);
  operator delete(this);
}


//======================================================================
// BlockFenceGate::getBlockGeomID(int *,int *,Section *,WCoord const&)
// address: 0x002A95B0   size: 0x34 (52 bytes)
//======================================================================
int __fastcall BlockFenceGate::getBlockGeomID(int a1, _DWORD *a2, unsigned int *a3, int a4, _DWORD *a5)
{
  int v5; // r0
  __int16 *v6; // r3
  unsigned __int64 v7; // kr00_8

  v5 = *(_DWORD *)(a4 + 20);
  if ( v5 != 0 )
    v6 = (__int16 *)(v5 + 2 * ((16 * a5[2]) | (a5[1] << 8) | *a5));
  else
    v6 = &Section::m_EmptyBlock;
  v7 = (unsigned __int64)(unsigned __int16)*v6 << 18;
  *a2 = HIDWORD(v7) != 0;
  *a3 = (unsigned int)v7 >> 30;
  return 1;
}


//======================================================================
// BlockFenceGate::newObject(void)
// address: 0x002C1A88   size: 0x1C (28 bytes)
//======================================================================
ModelBlockMaterial *__fastcall BlockFenceGate::newObject(BlockFenceGate *this)
{
  ModelBlockMaterial *v1; // r4

  v1 = (ModelBlockMaterial *)operator new(0x3Cu);
  ModelBlockMaterial::ModelBlockMaterial(v1);
  *(_DWORD *)v1 = &off_45DB48;
  return v1;
}

