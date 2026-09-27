// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockPistonExtension

//======================================================================
// BlockPistonExtension::newObject(void)
// address: 0x002C17F4   size: 0x1C (28 bytes)
//======================================================================
BlockMaterial *__fastcall BlockPistonExtension::newObject(BlockPistonExtension *this)
{
  BlockMaterial *v1; // r4

  v1 = (BlockMaterial *)operator new(0x30u);
  BlockMaterial::BlockMaterial(v1);
  *(_DWORD *)v1 = &off_461938;
  return v1;
}


//======================================================================
// BlockPistonExtension::canPlaceBlockAt(World *,WCoord const&)
// address: 0x002E6580   size: 0x4 (4 bytes)
//======================================================================
int BlockPistonExtension::canPlaceBlockAt()
{
  return 0;
}


//======================================================================
// BlockPistonExtension::canPlaceBlockOnSide(World *,WCoord const&,int)
// address: 0x002E6584   size: 0x4 (4 bytes)
//======================================================================
int BlockPistonExtension::canPlaceBlockOnSide()
{
  return 0;
}


//======================================================================
// BlockPistonExtension::~BlockPistonExtension()
// address: 0x002E6588   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN20BlockPistonExtensionD1Ev'
void __fastcall BlockPistonExtension::~BlockPistonExtension(BlockPistonExtension *this)
{
  *(_DWORD *)this = &off_461938;
  BlockMaterial::~BlockMaterial(this);
}


//======================================================================
// BlockPistonExtension::~BlockPistonExtension()
// address: 0x002E65A4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BlockPistonExtension::~BlockPistonExtension(BlockPistonExtension *this)
{
  BlockPistonExtension::~BlockPistonExtension(this);
  operator delete(this);
}


//======================================================================
// BlockPistonExtension::onNeighborBlockChange(World *,WCoord const&,int)
// address: 0x002E65B8   size: 0x86 (134 bytes)
//======================================================================
int __fastcall BlockPistonExtension::onNeighborBlockChange(
        BlockPistonExtension *this,
        World *a2,
        const WCoord *a3,
        int a4)
{
  int v7; // r0
  int v8; // r3
  int *v9; // r3
  int v10; // r1
  int v11; // r0
  int v12; // r3
  int v13; // r2
  int v14; // r0
  int BlockID; // r1
  int Material; // r0
  _DWORD v18[4]; // [sp+Ch] [bp-10h] BYREF

  v7 = World::getBlockData(a2, a3, (int)a3, a4) & 7;
  v8 = v7 + 1;
  if ( (v7 & 1) != 0 )
    v8 = v7 - 1;
  v9 = &g_DirectionCoord[3 * v8];
  v10 = *((_DWORD *)a3 + 1) + v9[1];
  v11 = v9[2];
  v12 = *v9;
  v13 = *((_DWORD *)a3 + 2) + v11;
  v14 = *(_DWORD *)a3;
  v18[1] = v10;
  v18[0] = v14 + v12;
  v18[2] = v13;
  BlockID = World::getBlockID(a2, (const WCoord *)v18, v13, v14 + v12);
  if ( (unsigned int)(BlockID - 718) > 1 )
    return World::setBlockAll(a2, a3, 0, 0, 3);
  Material = BlockMaterialMgr::getMaterial((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, BlockID);
  return (*(int (__fastcall **)(int, World *, _DWORD *, int))(*(_DWORD *)Material + 144))(Material, a2, v18, a4);
}


//======================================================================
// BlockPistonExtension::onBlockRemoved(World *,WCoord const&,int,int)
// address: 0x002E664C   size: 0x9A (154 bytes)
//======================================================================
int __fastcall BlockPistonExtension::onBlockRemoved(
        BlockPistonExtension *this,
        World *a2,
        const WCoord *a3,
        int a4,
        char a5)
{
  int v7; // r3
  int v8; // r0
  int *v9; // r3
  int v10; // r1
  int v11; // r4
  int v12; // r3
  int v13; // r2
  int BlockID; // r6
  int result; // r0
  int Material; // r0
  int v17[3]; // [sp+Ch] [bp-Ch] BYREF

  BlockMaterial::onBlockRemoved();
  v7 = (a5 & 7) + 1;
  if ( (a5 & 1) != 0 )
    v7 = (a5 & 7) - 1;
  v8 = *((_DWORD *)a3 + 2);
  v9 = &g_DirectionCoord[3 * v7];
  v10 = *((_DWORD *)a3 + 1) + v9[1];
  v11 = v9[2];
  v12 = *v9;
  v17[1] = v10;
  v17[0] = *(_DWORD *)a3 + v12;
  v17[2] = v8 + v11;
  BlockID = World::getBlockID(a2, (const WCoord *)v17, v8 + v11, v17[0]);
  result = -718;
  if ( (unsigned int)(BlockID - 718) <= 1 )
  {
    result = World::getBlockData(a2, (const WCoord *)v17, v13, BlockID - 718);
    if ( (result & 8) != 0 )
    {
      Material = BlockMaterialMgr::getMaterial(
                   (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                   BlockID);
      (*(void (__fastcall **)(int, World *, int *, _DWORD, int, int))(*(_DWORD *)Material + 180))(
        Material,
        a2,
        v17,
        0,
        1,
        1065353216);
      return World::setBlockAll(a2, (const WCoord *)v17, 0, 0, 3);
    }
  }
  return result;
}

