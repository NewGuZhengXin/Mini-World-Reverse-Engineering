// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: RedstoneLightMaterial

//======================================================================
// RedstoneLightMaterial::newObject(void)
// address: 0x002C19D8   size: 0x1C (28 bytes)
//======================================================================
BasicBlockMaterial *__fastcall RedstoneLightMaterial::newObject(RedstoneLightMaterial *this)
{
  BasicBlockMaterial *v1; // r4

  v1 = (BasicBlockMaterial *)operator new(0x78u);
  BasicBlockMaterial::BasicBlockMaterial(v1);
  *(_DWORD *)v1 = &off_460608;
  return v1;
}


//======================================================================
// RedstoneLightMaterial::init(int)
// address: 0x002D3588   size: 0x2A (42 bytes)
//======================================================================
__int64 __fastcall RedstoneLightMaterial::init(__int64 this)
{
  __int64 result; // r0
  _BOOL4 v3; // r3
  int **v4; // r3

  result = BasicBlockMaterial::init(this);
  v3 = *(_DWORD *)(*(_DWORD *)(this + 36) + 56) != 0;
  *(_BYTE *)(this + 116) = v3;
  if ( v3 )
    v4 = RedstoneLightMaterial::ACTIVE_ID;
  else
    v4 = &RedstoneLightMaterial::IDLE_ID;
  **v4 = HIDWORD(this);
  return result;
}


//======================================================================
// RedstoneLightMaterial::onBlockAdded(World *,WCoord const&)
// address: 0x002D35BC   size: 0x5A (90 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> RedstoneLightMaterial::onBlockAdded(
        RedstoneLightMaterial *this,
        BlockTickMgr **a2,
        const WCoord *a3)
{
  _BYTE *v3; // r7

  v3 = (char *)this + 116;
  if ( *((_BYTE *)this + 116) != 0 && World::isBlockIndirectlyGettingPowered((World *)a2, a3) == 0 )
  {
    BlockTickMgr::scheduleBlockUpdate(a2[34], a3, *((_DWORD *)this + 8), 4, 0);
  }
  else if ( *v3 == 0 && World::isBlockIndirectlyGettingPowered((World *)a2, a3) != 0 )
  {
    World::setBlockAll((World *)a2, a3, RedstoneLightMaterial::ACTIVE_ID, 0, 3);
  }
}


//======================================================================
// RedstoneLightMaterial::onNeighborBlockChange(World *,WCoord const&,int)
// address: 0x002D361C   size: 0x5A (90 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> RedstoneLightMaterial::onNeighborBlockChange(
        RedstoneLightMaterial *this,
        BlockTickMgr **a2,
        const WCoord *a3,
        int a4)
{
  _BYTE *v4; // r7

  v4 = (char *)this + 116;
  if ( *((_BYTE *)this + 116) != 0 && World::isBlockIndirectlyGettingPowered((World *)a2, a3) == 0 )
  {
    BlockTickMgr::scheduleBlockUpdate(a2[34], a3, *((_DWORD *)this + 8), 4, 0);
  }
  else if ( *v4 == 0 && World::isBlockIndirectlyGettingPowered((World *)a2, a3) != 0 )
  {
    World::setBlockAll((World *)a2, a3, RedstoneLightMaterial::ACTIVE_ID, 0, 3);
  }
}


//======================================================================
// RedstoneLightMaterial::~RedstoneLightMaterial()
// address: 0x002D367C   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN21RedstoneLightMaterialD1Ev'
void __fastcall RedstoneLightMaterial::~RedstoneLightMaterial(RedstoneLightMaterial *this)
{
  *(_DWORD *)this = &off_460608;
  BasicBlockMaterial::~BasicBlockMaterial(this);
}


//======================================================================
// RedstoneLightMaterial::~RedstoneLightMaterial()
// address: 0x002D3698   size: 0x12 (18 bytes)
//======================================================================
void __fastcall RedstoneLightMaterial::~RedstoneLightMaterial(RedstoneLightMaterial *this)
{
  RedstoneLightMaterial::~RedstoneLightMaterial(this);
  operator delete(this);
}


//======================================================================
// RedstoneLightMaterial::blockTick(World *,WCoord const&)
// address: 0x002D36AC   size: 0x30 (48 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> RedstoneLightMaterial::blockTick(
        RedstoneLightMaterial *this,
        World *a2,
        const WCoord *a3)
{
  if ( *((_BYTE *)this + 116) != 0 && World::isBlockIndirectlyGettingPowered(a2, a3) == 0 )
    World::setBlockAll(a2, a3, RedstoneLightMaterial::IDLE_ID, 0, 3);
}

