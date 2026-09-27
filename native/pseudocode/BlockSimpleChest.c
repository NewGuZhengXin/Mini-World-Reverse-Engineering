// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockSimpleChest

//======================================================================
// BlockSimpleChest::getGeomName(void)
// address: 0x002B4DE4   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall BlockSimpleChest::getGeomName(BlockSimpleChest *this)
{
  return "box";
}


//======================================================================
// BlockSimpleChest::getProtoBlockGeomID(int *,int *)
// address: 0x002B4DF0   size: 0xC (12 bytes)
//======================================================================
int __fastcall BlockSimpleChest::getProtoBlockGeomID(BlockSimpleChest *this, int *a2, int *a3)
{
  *a2 = 0;
  *a3 = 2;
  return 1;
}


//======================================================================
// BlockSimpleChest::onBlockAdded(World *,WCoord const&)
// address: 0x002B4DFC   size: 0x16 (22 bytes)
//======================================================================
int __fastcall BlockSimpleChest::onBlockAdded(BlockSimpleChest *this, World *a2, const WCoord *a3)
{
  WorldContainerMgr **v3; // r5

  v3 = (WorldContainerMgr **)((char *)a2 + 4);
  BlockMaterial::onBlockAdded(this, a2, a3);
  return WorldContainerMgr::addStorageBox(v3[31], *(_DWORD *)a3, *((_DWORD *)a3 + 1), *((_DWORD *)a3 + 2));
}


//======================================================================
// BlockSimpleChest::onBlockRemoved(World *,WCoord const&,int,int)
// address: 0x002B4E12   size: 0x26 (38 bytes)
//======================================================================
int __fastcall BlockSimpleChest::onBlockRemoved(
        BlockSimpleChest *this,
        WorldContainerMgr **a2,
        const WCoord *a3,
        int a4,
        int a5)
{
  int v10; // [sp+0h] [bp-Ch]

  WorldContainerMgr::destroyContainer(a2[32], a3);
  BlockMaterial::onBlockRemoved(this, (World *)a2, a3, a4, a5);
  return v10;
}


//======================================================================
// BlockSimpleChest::onBlockPlaced(World *,WCoord const&,DirectionType,float,float,float,int)
// address: 0x002B4E38   size: 0x18 (24 bytes)
//======================================================================
int __fastcall BlockSimpleChest::onBlockPlaced(int a1, int a2, int *a3)
{
  return BlockOperateMgr::getCurPlaceDir(
           (BlockOperateMgr *)Ogre::Singleton<BlockOperateMgr>::ms_Singleton,
           *a3,
           a3[1],
           a3[2]);
}


//======================================================================
// BlockSimpleChest::~BlockSimpleChest()
// address: 0x002B4E54   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN16BlockSimpleChestD1Ev'
void __fastcall BlockSimpleChest::~BlockSimpleChest(BlockSimpleChest *this)
{
  *(_DWORD *)this = &off_45E0F8;
  ModelBlockMaterial::~ModelBlockMaterial(this);
}


//======================================================================
// BlockSimpleChest::~BlockSimpleChest()
// address: 0x002B4E70   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BlockSimpleChest::~BlockSimpleChest(BlockSimpleChest *this)
{
  BlockSimpleChest::~BlockSimpleChest(this);
  operator delete(this);
}


//======================================================================
// BlockSimpleChest::getBlockGeomID(int *,int *,Section *,WCoord const&)
// address: 0x002B4E82   size: 0x2E (46 bytes)
//======================================================================
int __fastcall BlockSimpleChest::getBlockGeomID(int a1, _DWORD *a2, int *a3, int a4, _DWORD *a5)
{
  int v5; // r3

  v5 = *(_DWORD *)(a4 + 20);
  if ( v5 != 0 )
    v5 = (int)*(unsigned __int16 *)(2 * ((16 * a5[2]) | (a5[1] << 8) | *a5) + v5) >> 12;
  *a3 = v5 & 3;
  *a2 = (v5 & 4) != 0;
  return 1;
}


//======================================================================
// BlockSimpleChest::newObject(void)
// address: 0x002C1A5C   size: 0x1C (28 bytes)
//======================================================================
ModelBlockMaterial *__fastcall BlockSimpleChest::newObject(BlockSimpleChest *this)
{
  ModelBlockMaterial *v1; // r4

  v1 = (ModelBlockMaterial *)operator new(0x3Cu);
  ModelBlockMaterial::ModelBlockMaterial(v1);
  *(_DWORD *)v1 = &off_45E0F8;
  return v1;
}

