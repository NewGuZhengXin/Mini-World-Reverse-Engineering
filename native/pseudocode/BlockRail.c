// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockRail

//======================================================================
// BlockRail::newObject(void)
// address: 0x002C145A   size: 0x12 (18 bytes)
//======================================================================
BlockRail *__fastcall BlockRail::newObject(BlockRail *this)
{
  BlockRail *v1; // r4

  v1 = (BlockRail *)operator new(0x3Cu);
  BlockRail::BlockRail(v1);
  return v1;
}


//======================================================================
// BlockRail::init(int)
// address: 0x002D534E   size: 0x8 (8 bytes)
//======================================================================
int __fastcall BlockRail::init(BlockRail *this, int a2)
{
  return BlockRailBase::init(this, a2);
}


//======================================================================
// BlockRail::~BlockRail()
// address: 0x002D5358   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN9BlockRailD1Ev'
void __fastcall BlockRail::~BlockRail(BlockRail *this)
{
  *(_DWORD *)this = &off_460910;
  BlockRailBase::~BlockRailBase(this);
}


//======================================================================
// BlockRail::~BlockRail()
// address: 0x002D5374   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BlockRail::~BlockRail(BlockRail *this)
{
  BlockRail::~BlockRail(this);
  operator delete(this);
}


//======================================================================
// BlockRail::updateNeighborChange(World *,WCoord const&,int,int,int)
// address: 0x002D5388   size: 0x6A (106 bytes)
//======================================================================
void __fastcall BlockRail::updateNeighborChange(BlockRail *this, World *a2, const WCoord *a3, int a4, int a5, int a6)
{
  int Material; // r0
  void *v10[10]; // [sp+4h] [bp-28h] BYREF

  if ( a6 > 0 )
  {
    Material = BlockMaterialMgr::getMaterial((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, a6);
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)Material + 68))(Material) != 0 )
    {
      BlockBaseRailLogic::BlockBaseRailLogic((BlockBaseRailLogic *)v10, this, a2, a3);
      if ( BlockBaseRailLogic::getNumberOfAdjacentTracks((BlockBaseRailLogic *)v10) == 3 )
        BlockRailBase::refreshTrackShape(this, a2, a3, false);
      if ( v10[5] != nullptr )
        operator delete(v10[5]);
    }
  }
}


//======================================================================
// BlockRail::BlockRail(void)
// address: 0x002D53F8   size: 0x22 (34 bytes)
//======================================================================
// Alternative name is '_ZN9BlockRailC2Ev'
void __fastcall BlockRail::BlockRail(BlockRail *this)
{
  BlockMaterial::BlockMaterial(this);
  *((_BYTE *)this + 48) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *(_DWORD *)this = &off_460910;
}

