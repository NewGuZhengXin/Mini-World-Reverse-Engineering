// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockSpringExten

//======================================================================
// BlockSpringExten::canPlaceBlockAt(World *,WCoord const&)
// address: 0x002B4B60   size: 0x4 (4 bytes)
//======================================================================
int BlockSpringExten::canPlaceBlockAt()
{
  return 0;
}


//======================================================================
// BlockSpringExten::canPlaceBlockOnSide(World *,WCoord const&,int)
// address: 0x002B4B64   size: 0x4 (4 bytes)
//======================================================================
int BlockSpringExten::canPlaceBlockOnSide()
{
  return 0;
}


//======================================================================
// BlockSpringExten::~BlockSpringExten()
// address: 0x002B4B68   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN16BlockSpringExtenD1Ev'
void __fastcall BlockSpringExten::~BlockSpringExten(BlockSpringExten *this)
{
  *(_DWORD *)this = &off_45DFF0;
  BlockMaterial::~BlockMaterial(this);
}


//======================================================================
// BlockSpringExten::~BlockSpringExten()
// address: 0x002B4B84   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BlockSpringExten::~BlockSpringExten(BlockSpringExten *this)
{
  BlockSpringExten::~BlockSpringExten(this);
  operator delete(this);
}


//======================================================================
// BlockSpringExten::onNeighborBlockChange(World *,WCoord const&,int)
// address: 0x002B4B98   size: 0x8C (140 bytes)
//======================================================================
int __fastcall BlockSpringExten::onNeighborBlockChange(BlockSpringExten *this, World *a2, const WCoord *a3, int a4)
{
  int v7; // r0
  int v8; // r3
  int *v9; // r3
  int v10; // r1
  int v11; // r0
  int v12; // r3
  int v13; // r2
  int v14; // r0
  int BlockID; // r0
  int Material; // r0
  _DWORD v18[4]; // [sp+Ch] [bp-10h] BYREF

  v7 = World::getBlockData(a2, a3) & 7;
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
  BlockID = World::getBlockID(a2, (const WCoord *)v18);
  if ( BlockID != 844 && BlockID != 842 )
    return World::setBlockAll(a2, a3, 0, 0, 3);
  Material = BlockMaterialMgr::getMaterial((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, BlockID);
  return (*(int (__fastcall **)(int, World *, _DWORD *, int))(*(_DWORD *)Material + 144))(Material, a2, v18, a4);
}


//======================================================================
// BlockSpringExten::onBlockRemoved(World *,WCoord const&,int,int)
// address: 0x002B4C30   size: 0xA0 (160 bytes)
//======================================================================
int __fastcall BlockSpringExten::onBlockRemoved(BlockSpringExten *this, World *a2, const WCoord *a3, int a4, int a5)
{
  int v7; // r3
  int *v8; // r3
  int v9; // r1
  int v10; // r4
  int v11; // r3
  int v12; // r2
  int v13; // r0
  int result; // r0
  int v15; // r6
  int Material; // r0
  _DWORD v17[3]; // [sp+Ch] [bp-Ch] BYREF

  BlockMaterial::onBlockRemoved(this, a2, a3, a4, a5);
  v7 = (a5 & 7) + 1;
  if ( (a5 & 1) != 0 )
    v7 = (a5 & 7) - 1;
  v8 = &g_DirectionCoord[3 * v7];
  v9 = *((_DWORD *)a3 + 1) + v8[1];
  v10 = v8[2];
  v11 = *v8;
  v12 = *((_DWORD *)a3 + 2) + v10;
  v13 = *(_DWORD *)a3;
  v17[1] = v9;
  v17[0] = v13 + v11;
  v17[2] = v12;
  result = World::getBlockID(a2, (const WCoord *)v17);
  v15 = result;
  if ( result == 842 || result == 844 )
  {
    result = World::getBlockData(a2, (const WCoord *)v17);
    if ( (result & 8) != 0 )
    {
      Material = BlockMaterialMgr::getMaterial((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, v15);
      (*(void (__fastcall **)(int, World *, _DWORD *, _DWORD, int, int))(*(_DWORD *)Material + 180))(
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


//======================================================================
// BlockSpringExten::newObject(void)
// address: 0x002C1DA0   size: 0x1C (28 bytes)
//======================================================================
BlockMaterial *__fastcall BlockSpringExten::newObject(BlockSpringExten *this)
{
  BlockMaterial *v1; // r4

  v1 = (BlockMaterial *)operator new(0x30u);
  BlockMaterial::BlockMaterial(v1);
  *(_DWORD *)v1 = &off_45DFF0;
  return v1;
}

