// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockPistonMoving

//======================================================================
// BlockPistonMoving::newObject(void)
// address: 0x002C1E50   size: 0x1C (28 bytes)
//======================================================================
BlockMaterial *__fastcall BlockPistonMoving::newObject(BlockPistonMoving *this)
{
  BlockMaterial *v1; // r4

  v1 = (BlockMaterial *)operator new(0x30u);
  BlockMaterial::BlockMaterial(v1);
  *(_DWORD *)v1 = &off_4628F0;
  return v1;
}


//======================================================================
// BlockPistonMoving::canPlaceBlockAt(World *,WCoord const&)
// address: 0x002FAB2C   size: 0x4 (4 bytes)
//======================================================================
int BlockPistonMoving::canPlaceBlockAt()
{
  return 0;
}


//======================================================================
// BlockPistonMoving::canPlaceBlockOnSide(World *,WCoord const&,int)
// address: 0x002FAB30   size: 0x4 (4 bytes)
//======================================================================
int BlockPistonMoving::canPlaceBlockOnSide()
{
  return 0;
}


//======================================================================
// BlockPistonMoving::onNeighborBlockChange(World *,WCoord const&,int)
// address: 0x002FAB34   size: 0x2 (2 bytes)
//======================================================================
void BlockPistonMoving::onNeighborBlockChange()
{
  ;
}


//======================================================================
// BlockPistonMoving::onBlockRemoved(World *,WCoord const&,int,int)
// address: 0x002FAB38   size: 0x4E (78 bytes)
//======================================================================
void __fastcall BlockPistonMoving::onBlockRemoved(
        BlockPistonMoving *this,
        WorldContainerMgr **a2,
        const WCoord *a3,
        int a4,
        int a5)
{
  World ***v5; // r5
  _DWORD *Container; // r0

  v5 = (World ***)(a2 + 1);
  Container = WorldContainerMgr::getContainer(a2[32], a3);
  if ( Container != nullptr
    && _dynamic_cast(
         Container,
         (const struct __class_type_info *)&`typeinfo for'WorldContainer,
         (const struct __class_type_info *)&`typeinfo for'WorldPiston,
         0) != nullptr )
  {
    WorldContainerMgr::destroyContainer(v5[31], a3);
  }
  else
  {
    BlockMaterial::onBlockRemoved();
  }
}


//======================================================================
// BlockPistonMoving::onBlockActivated(World *,WCoord const&,DirectionType,ClientPlayer *)
// address: 0x002FAB90   size: 0x2A (42 bytes)
//======================================================================
int __fastcall BlockPistonMoving::onBlockActivated(int a1, WorldContainerMgr **a2, WCoord *a3)
{
  _DWORD *Container; // r0
  int v6; // r3

  Container = WorldContainerMgr::getContainer(a2[32], a3);
  v6 = 0;
  if ( Container == nullptr )
  {
    World::setBlockAll((World *)a2, a3, 0, 0, 3);
    return 1;
  }
  return v6;
}


//======================================================================
// BlockPistonMoving::~BlockPistonMoving()
// address: 0x002FABBC   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN17BlockPistonMovingD1Ev'
void __fastcall BlockPistonMoving::~BlockPistonMoving(BlockPistonMoving *this)
{
  *(_DWORD *)this = &off_4628F0;
  BlockMaterial::~BlockMaterial(this);
}


//======================================================================
// BlockPistonMoving::~BlockPistonMoving()
// address: 0x002FABD8   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BlockPistonMoving::~BlockPistonMoving(BlockPistonMoving *this)
{
  BlockPistonMoving::~BlockPistonMoving(this);
  operator delete(this);
}


//======================================================================
// BlockPistonMoving::dropBlockAsItem(World *,WCoord const&,int,BLOCK_MINE_TYPE,float)
// address: 0x002FAC18   size: 0xC (12 bytes)
//======================================================================
_DWORD *__fastcall BlockPistonMoving::dropBlockAsItem(int a1, WorldContainerMgr **a2, WCoord *a3)
{
  return GetWorldPiston(a2, a3);
}


//======================================================================
// BlockPistonMoving::getAABB(CollideAABB &,World *,WCoord const&,int,float,int)
// address: 0x002FAC24   size: 0xB4 (180 bytes)
//======================================================================
int __fastcall BlockPistonMoving::getAABB(
        BlockPistonMoving *this,
        CollideAABB *a2,
        World *a3,
        const WCoord *a4,
        int a5,
        float a6,
        int a7)
{
  int v10; // r6
  int Material; // r0
  int v12; // r0
  int *v13; // r7
  int v14; // r2
  int v15; // r3
  int v16; // r0

  if ( a5 == 0 )
    return 0;
  if ( a5 == *((_DWORD *)this + 8) )
    return 0;
  Material = BlockMaterialMgr::getMaterial((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, a5);
  v10 = (*(int (__fastcall **)(int, CollideAABB *, World *, const WCoord *))(*(_DWORD *)Material + 40))(
          Material,
          a2,
          a3,
          a4);
  if ( v10 == 0 )
    return 0;
  v12 = (int)(float)(a6 * 100.0);
  v13 = &g_DirectionCoord[3 * a7];
  v14 = *v13 * v12;
  v15 = v13[1] * v12;
  v16 = v12 * v13[2];
  if ( *v13 >= 0 )
    *((_DWORD *)a2 + 3) -= v14;
  else
    *(_DWORD *)a2 -= v14;
  if ( g_DirectionCoord[3 * a7 + 1] >= 0 )
    *((_DWORD *)a2 + 4) -= v15;
  else
    *((_DWORD *)a2 + 1) -= v15;
  if ( g_DirectionCoord[3 * a7 + 2] >= 0 )
    *((_DWORD *)a2 + 5) -= v16;
  else
    *((_DWORD *)a2 + 2) -= v16;
  return v10;
}

