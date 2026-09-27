// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: RedstoneLogicMaterial

//======================================================================
// RedstoneLogicMaterial::renderAsNormalBlock(void)
// address: 0x0029B410   size: 0x4 (4 bytes)
//======================================================================
int __fastcall RedstoneLogicMaterial::renderAsNormalBlock(RedstoneLogicMaterial *this)
{
  return 0;
}


//======================================================================
// RedstoneLogicMaterial::isOpaqueCube(void)
// address: 0x0029B414   size: 0x4 (4 bytes)
//======================================================================
int __fastcall RedstoneLogicMaterial::isOpaqueCube(RedstoneLogicMaterial *this)
{
  return 0;
}


//======================================================================
// RedstoneLogicMaterial::canProvidePower(void)
// address: 0x0029B418   size: 0x4 (4 bytes)
//======================================================================
int __fastcall RedstoneLogicMaterial::canProvidePower(RedstoneLogicMaterial *this)
{
  return 1;
}


//======================================================================
// RedstoneLogicMaterial::isGettingInput(World *,WCoord const&,int)
// address: 0x0029B41C   size: 0x12 (18 bytes)
//======================================================================
unsigned int __fastcall RedstoneLogicMaterial::isGettingInput(int a1)
{
  int v1; // r0

  v1 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 216))(a1);
  return (unsigned int)((v1 >> 31) - v1) >> 31;
}


//======================================================================
// RedstoneLogicMaterial::canOutputPower(int)
// address: 0x0029B42E   size: 0x6 (6 bytes)
//======================================================================
int __fastcall RedstoneLogicMaterial::canOutputPower(RedstoneLogicMaterial *this, int a2)
{
  return *((unsigned __int8 *)this + 60);
}


//======================================================================
// RedstoneLogicMaterial::getOutputPowerStrength(World *,WCoord const&,int)
// address: 0x0029B434   size: 0x4 (4 bytes)
//======================================================================
int RedstoneLogicMaterial::getOutputPowerStrength()
{
  return 15;
}


//======================================================================
// RedstoneLogicMaterial::~RedstoneLogicMaterial()
// address: 0x0029B4AC   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN21RedstoneLogicMaterialD1Ev'
void __fastcall RedstoneLogicMaterial::~RedstoneLogicMaterial(RedstoneLogicMaterial *this)
{
  *(_DWORD *)this = &off_45E650;
  ModelBlockMaterial::~ModelBlockMaterial(this);
}


//======================================================================
// RedstoneLogicMaterial::~RedstoneLogicMaterial()
// address: 0x0029B4C8   size: 0x12 (18 bytes)
//======================================================================
void __fastcall RedstoneLogicMaterial::~RedstoneLogicMaterial(RedstoneLogicMaterial *this)
{
  RedstoneLogicMaterial::~RedstoneLogicMaterial(this);
  operator delete(this);
}


//======================================================================
// RedstoneLogicMaterial::isPowerStateLocked(World *,WCoord const&,int)
// address: 0x002A7AF8   size: 0x4 (4 bytes)
//======================================================================
int RedstoneLogicMaterial::isPowerStateLocked()
{
  return 0;
}


//======================================================================
// RedstoneLogicMaterial::isProvidingStrongPower(World *,WCoord const&,DirectionType)
// address: 0x002BABE4   size: 0xC (12 bytes)
//======================================================================
int __fastcall RedstoneLogicMaterial::isProvidingStrongPower(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 168))(a1);
}


//======================================================================
// RedstoneLogicMaterial::onBlockAdded(World *,WCoord const&)
// address: 0x002BABF0   size: 0xC (12 bytes)
//======================================================================
int __fastcall RedstoneLogicMaterial::onBlockAdded(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 240))(a1);
}


//======================================================================
// RedstoneLogicMaterial::blockTick(World *,WCoord const&)
// address: 0x002BABFC   size: 0xB4 (180 bytes)
//======================================================================
int __fastcall RedstoneLogicMaterial::blockTick(RedstoneLogicMaterial *this, World *a2, const WCoord *a3)
{
  int BlockData; // r7
  int result; // r0
  int v8; // r0
  BlockTickMgr *v9; // r6
  int v10; // r0
  int v11; // [sp+8h] [bp-Ch]
  int v12; // [sp+Ch] [bp-8h]

  BlockData = World::getBlockData(a2, a3);
  result = (*(int (__fastcall **)(RedstoneLogicMaterial *, World *, const WCoord *, int))(*(_DWORD *)this + 220))(
             this,
             a2,
             a3,
             BlockData);
  if ( result == 0 )
  {
    result = (*(int (__fastcall **)(RedstoneLogicMaterial *, World *, const WCoord *, int))(*(_DWORD *)this + 212))(
               this,
               a2,
               a3,
               BlockData & 3);
    v12 = result;
    if ( *((_BYTE *)this + 60) != 0 )
    {
      if ( result == 0 )
      {
        v8 = (*(int (__fastcall **)(RedstoneLogicMaterial *))(*(_DWORD *)this + 204))(this);
        return World::setBlockAll(a2, a3, *(_DWORD *)(v8 + 32), BlockData, 2);
      }
    }
    else
    {
      v11 = *(_DWORD *)((*(int (__fastcall **)(RedstoneLogicMaterial *))(*(_DWORD *)this + 200))(this) + 32);
      result = World::setBlockAll(a2, a3, v11, BlockData, 2);
      if ( v12 == 0 )
      {
        v9 = *((BlockTickMgr **)a2 + 34);
        v10 = (*(int (__fastcall **)(RedstoneLogicMaterial *, int))(*(_DWORD *)this + 208))(this, BlockData);
        return BlockTickMgr::scheduleBlockUpdate(v9, a3, v11, v10, -1);
      }
    }
  }
  return result;
}


//======================================================================
// RedstoneLogicMaterial::canSideBlockProvidePower(int)
// address: 0x002BACB0   size: 0x16 (22 bytes)
//======================================================================
int __fastcall RedstoneLogicMaterial::canSideBlockProvidePower(RedstoneLogicMaterial *this, int a2)
{
  int Material; // r0

  Material = BlockMaterialMgr::getMaterial((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, a2);
  return (*(int (__fastcall **)(int))(*(_DWORD *)Material + 68))(Material);
}


//======================================================================
// RedstoneLogicMaterial::onBlockPlacedBy(World *,WCoord const&,ClientPlayer *)
// address: 0x002BACCC   size: 0x48 (72 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> RedstoneLogicMaterial::onBlockPlacedBy(
        RedstoneLogicMaterial *this,
        BlockTickMgr **a2,
        const WCoord *a3,
        ClientPlayer *a4)
{
  int v7; // r7

  v7 = RotateYaw2PlaceDir(*(float *)(*((_DWORD *)a4 + 17) + 4));
  World::setBlockData((World *)a2, a3, v7, 3);
  if ( (*(int (__fastcall **)(RedstoneLogicMaterial *, BlockTickMgr **, const WCoord *, int))(*(_DWORD *)this + 212))(
         this,
         a2,
         a3,
         v7) != 0 )
    BlockTickMgr::scheduleBlockUpdate(a2[34], a3, *((_DWORD *)this + 8), 1, 0);
}


//======================================================================
// RedstoneLogicMaterial::canPlaceBlockAt(World *,WCoord const&)
// address: 0x002BAD14   size: 0x2C (44 bytes)
//======================================================================
int __fastcall RedstoneLogicMaterial::canPlaceBlockAt(RedstoneLogicMaterial *this, World *a2, const WCoord *a3)
{
  int result; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r4
  _DWORD v9[4]; // [sp+4h] [bp-10h] BYREF

  result = BlockMaterial::canPlaceBlockAt(this, a2, a3);
  if ( result != 0 )
  {
    v6 = *((_DWORD *)a3 + 1);
    v7 = *((_DWORD *)a3 + 2);
    v8 = *(_DWORD *)a3;
    v9[1] = v6 - 1;
    v9[0] = v8;
    v9[2] = v7;
    return World::doesBlockHaveSolidTopSurface(a2, (const WCoord *)v9);
  }
  return result;
}


//======================================================================
// RedstoneLogicMaterial::canBlockStay(World *,WCoord const&)
// address: 0x002BAD40   size: 0x2C (44 bytes)
//======================================================================
int __fastcall RedstoneLogicMaterial::canBlockStay(RedstoneLogicMaterial *this, World *a2, const WCoord *a3)
{
  int result; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r4
  _DWORD v9[4]; // [sp+4h] [bp-10h] BYREF

  result = BlockMaterial::canBlockStay(this, a2, a3);
  if ( result != 0 )
  {
    v6 = *((_DWORD *)a3 + 1);
    v7 = *((_DWORD *)a3 + 2);
    v8 = *(_DWORD *)a3;
    v9[1] = v6 - 1;
    v9[0] = v8;
    v9[2] = v7;
    return World::doesBlockHaveSolidTopSurface(a2, (const WCoord *)v9);
  }
  return result;
}


//======================================================================
// RedstoneLogicMaterial::createCollideData(CollisionDetect *,World *,WCoord const&)
// address: 0x002BAD6C   size: 0x36 (54 bytes)
//======================================================================
int __fastcall RedstoneLogicMaterial::createCollideData(
        RedstoneLogicMaterial *this,
        CollisionDetect *a2,
        World *a3,
        const WCoord *a4)
{
  int v4; // r4
  int v5; // r5
  _DWORD v7[3]; // [sp+0h] [bp-18h] BYREF
  _DWORD v8[3]; // [sp+Ch] [bp-Ch] BYREF

  v4 = 100 * *((_DWORD *)a4 + 2);
  v5 = 100 * *((_DWORD *)a4 + 1);
  v7[0] = 100 * *(_DWORD *)a4;
  v7[1] = v5;
  v7[2] = v4;
  v8[0] = v7[0] + 100;
  v8[1] = v5 + 25;
  v8[2] = v4 + 100;
  return CollisionDetect::addObstacle(a2, (const WCoord *)v7, (const WCoord *)v8);
}


//======================================================================
// RedstoneLogicMaterial::onBlockDestroyedByPlayer(World *,WCoord const&,int)
// address: 0x002BADA4   size: 0x62 (98 bytes)
//======================================================================
int __fastcall RedstoneLogicMaterial::onBlockDestroyedByPlayer(
        RedstoneLogicMaterial *this,
        World *a2,
        const WCoord *a3,
        int a4)
{
  int *v8; // r4
  int v9; // r2
  int v10; // r12
  int v11; // r0
  int v12; // r2
  _DWORD v14[4]; // [sp+Ch] [bp-10h] BYREF

  if ( *((_BYTE *)this + 60) != 0 )
  {
    v8 = g_DirectionCoord;
    do
    {
      v9 = *((_DWORD *)a3 + 1) + v8[1];
      v10 = *((_DWORD *)a3 + 2) + v8[2];
      v11 = *v8;
      v8 += 3;
      v14[0] = *(_DWORD *)a3 + v11;
      v14[1] = v9;
      v12 = *((_DWORD *)this + 8);
      v14[2] = v10;
      World::notifyBlocksOfNeighborChange(a2, (const WCoord *)v14, v12);
    }
    while ( v8 != (int *)&slotelements );
  }
  return BlockMaterial::onBlockDestroyedByPlayer(this, a2, a3, a4);
}


//======================================================================
// RedstoneLogicMaterial::onNeighborBlockChange(World *,WCoord const&,int)
// address: 0x002BAE0C   size: 0x92 (146 bytes)
//======================================================================
void *__fastcall RedstoneLogicMaterial::onNeighborBlockChange(
        RedstoneLogicMaterial *this,
        World *a2,
        const WCoord *a3,
        int a4)
{
  int v7; // r0
  int v8; // r3
  int *v9; // r4
  int v10; // r2
  int v11; // r12
  int v12; // r0
  int v13; // r2
  void *result; // r0
  _DWORD v16[4]; // [sp+14h] [bp-10h] BYREF

  v7 = (*(int (__fastcall **)(RedstoneLogicMaterial *))(*(_DWORD *)this + 160))(this);
  v8 = *(_DWORD *)this;
  if ( v7 != 0 )
    return (void *)(*(int (__fastcall **)(RedstoneLogicMaterial *, World *, const WCoord *, int))(v8 + 232))(
                     this,
                     a2,
                     a3,
                     a4);
  (*(void (__fastcall **)(RedstoneLogicMaterial *, World *, const WCoord *, _DWORD, int, int))(v8 + 180))(
    this,
    a2,
    a3,
    0,
    1,
    1065353216);
  World::setBlockAll(a2, a3, 0, 0, 3);
  v9 = g_DirectionCoord;
  do
  {
    v10 = *((_DWORD *)a3 + 1) + v9[1];
    v11 = *((_DWORD *)a3 + 2) + v9[2];
    v12 = *v9;
    v9 += 3;
    v16[0] = *(_DWORD *)a3 + v12;
    v16[1] = v10;
    v13 = *((_DWORD *)this + 8);
    v16[2] = v11;
    World::notifyBlocksOfNeighborChange(a2, (const WCoord *)v16, v13);
    result = &slotelements;
  }
  while ( v9 != (int *)&slotelements );
  return result;
}


//======================================================================
// RedstoneLogicMaterial::isProvidingWeakPower(World *,WCoord const&,DirectionType)
// address: 0x002BAEB2   size: 0x4A (74 bytes)
//======================================================================
int __fastcall RedstoneLogicMaterial::isProvidingWeakPower(int a1, World *this, WCoord *a3, int a4)
{
  int BlockData; // r0
  char v7; // r7
  int v8; // r5

  BlockData = World::getBlockData(this, a3);
  v7 = BlockData;
  v8 = 0;
  if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 224))(a1, BlockData) != 0 && a4 == ReverseDirection(v7 & 3) )
    return (*(int (__fastcall **)(int, World *, WCoord *, int))(*(_DWORD *)a1 + 228))(a1, this, a3, a4);
  return v8;
}


//======================================================================
// RedstoneLogicMaterial::getInputStrength(World *,WCoord const&,int)
// address: 0x002BAEFC   size: 0x72 (114 bytes)
//======================================================================
int __fastcall RedstoneLogicMaterial::getInputStrength(
        RedstoneLogicMaterial *this,
        World *a2,
        const WCoord *a3,
        char a4)
{
  int v5; // r0
  int v6; // r7
  int *v7; // r1
  int v8; // r4
  int v9; // r3
  int v10; // r7
  int v11; // r2
  int v12; // r0
  int IndirectPowerLevelTo; // r6
  int BlockID; // r0
  int BlockData; // r3
  _DWORD v17[4]; // [sp+4h] [bp-10h] BYREF

  v5 = a4 & 3;
  v6 = *((_DWORD *)a3 + 2);
  v7 = &g_DirectionCoord[3 * v5];
  v8 = v7[2];
  v17[1] = *((_DWORD *)a3 + 1) + v7[1];
  v9 = v6 + v8;
  v10 = *(_DWORD *)a3;
  v11 = *v7;
  v17[2] = v9;
  v17[0] = v10 + v11;
  v12 = ReverseDirection(v5);
  IndirectPowerLevelTo = World::getIndirectPowerLevelTo(a2, (const WCoord *)v17, v12);
  if ( IndirectPowerLevelTo <= 14 )
  {
    BlockID = World::getBlockID(a2, (const WCoord *)v17);
    BlockData = 0;
    if ( BlockID == RedStoneDustMaterial::BLOCK_ID )
      BlockData = World::getBlockData(a2, (const WCoord *)v17);
    if ( IndirectPowerLevelTo < BlockData )
      return BlockData;
  }
  return IndirectPowerLevelTo;
}


//======================================================================
// RedstoneLogicMaterial::notifyOutputBlocks(World *,WCoord const&)
// address: 0x002BAF78   size: 0x62 (98 bytes)
//======================================================================
int __fastcall RedstoneLogicMaterial::notifyOutputBlocks(RedstoneLogicMaterial *this, World *a2, const WCoord *a3)
{
  int v6; // r6
  int *v7; // r3
  int v8; // r1
  int v9; // r2
  int v10; // r0
  int v11; // r3
  int v12; // r12
  int v13; // r2
  _DWORD v15[4]; // [sp+4h] [bp-10h] BYREF

  v6 = World::getBlockData(a2, a3) & 3;
  v7 = &g_DirectionCoord[3 * ReverseDirection(v6)];
  v8 = *((_DWORD *)a3 + 1) + v7[1];
  v9 = v7[2];
  v10 = *((_DWORD *)a3 + 2);
  v11 = *v7;
  v15[1] = v8;
  v12 = v10 + v9;
  v15[0] = *(_DWORD *)a3 + v11;
  v13 = *((_DWORD *)this + 8);
  v15[2] = v12;
  World::notifyOneBlockOfNeighborChange(a2, (const WCoord *)v15, v13);
  return World::notifyBlocksOfNeighborChangeExcept(a2, v15, *((_DWORD *)this + 8), v6);
}


//======================================================================
// RedstoneLogicMaterial::func_83011_d(World *,WCoord const&,int)
// address: 0x002BAFE0   size: 0x74 (116 bytes)
//======================================================================
bool __fastcall RedstoneLogicMaterial::func_83011_d(RedstoneLogicMaterial *this, World *a2, const WCoord *a3, char a4)
{
  int v5; // r5
  int *v7; // r3
  int v8; // r1
  int v9; // r0
  int v10; // r3
  int v11; // r2
  int v12; // r0
  int BlockID; // r0
  int v14; // r3
  _DWORD v16[4]; // [sp+4h] [bp-10h] BYREF

  v5 = a4 & 3;
  v7 = &g_DirectionCoord[3 * ReverseDirection(v5)];
  v8 = *((_DWORD *)a3 + 1) + v7[1];
  v9 = v7[2];
  v10 = *v7;
  v11 = *((_DWORD *)a3 + 2) + v9;
  v12 = *(_DWORD *)a3;
  v16[1] = v8;
  v16[0] = v12 + v10;
  v16[2] = v11;
  BlockID = World::getBlockID(a2, (const WCoord *)v16);
  if ( BlockID == RepeaterMaterial::ACTIVE_ID )
    return (World::getBlockData(a2, (const WCoord *)v16) & 3) != v5;
  v14 = 0;
  if ( BlockID == RepeaterMaterial::IDLE_ID )
    return (World::getBlockData(a2, (const WCoord *)v16) & 3) != v5;
  return v14;
}


//======================================================================
// RedstoneLogicMaterial::updateOnNeighborChange(World *,WCoord const&,int)
// address: 0x002BB060   size: 0xA8 (168 bytes)
//======================================================================
int __fastcall RedstoneLogicMaterial::updateOnNeighborChange(
        RedstoneLogicMaterial *this,
        BlockTickMgr **a2,
        const WCoord *a3,
        int a4)
{
  int result; // r0
  BlockTickMgr **v8; // r7
  int v9; // r6
  BlockTickMgr *v10; // r7
  int v11; // r0
  int v12; // [sp+8h] [bp-Ch]
  int BlockData; // [sp+Ch] [bp-8h]

  BlockData = World::getBlockData((World *)a2, a3);
  result = (*(int (__fastcall **)(RedstoneLogicMaterial *, BlockTickMgr **, const WCoord *, int))(*(_DWORD *)this + 220))(
             this,
             a2,
             a3,
             BlockData);
  if ( result == 0 )
  {
    result = (*(int (__fastcall **)(RedstoneLogicMaterial *, BlockTickMgr **, const WCoord *, int))(*(_DWORD *)this + 212))(
               this,
               a2,
               a3,
               BlockData & 3);
    if ( *((_BYTE *)this + 60) != 0 )
    {
      if ( result != 0 )
        return result;
    }
    else if ( result == 0 )
    {
      return result;
    }
    v8 = a2 + 34;
    result = BlockTickMgr::isBlockTickScheduledThisTick(a2[34], a3, *((_DWORD *)this + 8));
    if ( result == 0 )
    {
      if ( RedstoneLogicMaterial::func_83011_d(this, (World *)a2, a3, BlockData) )
        v9 = -3;
      else
        v9 = ~(*((_BYTE *)this + 60) != 0);
      v12 = *((_DWORD *)this + 8);
      v10 = *v8;
      v11 = (*(int (__fastcall **)(RedstoneLogicMaterial *, int))(*(_DWORD *)this + 236))(this, BlockData);
      return BlockTickMgr::scheduleBlockUpdate(v10, a3, v12, v11, v9);
    }
  }
  return result;
}


//======================================================================
// RedstoneLogicMaterial::getOneSideBlockPower(World *,WCoord const&,DirectionType)
// address: 0x002BB108   size: 0x46 (70 bytes)
//======================================================================
int __fastcall RedstoneLogicMaterial::getOneSideBlockPower(int a1, World *this, WCoord *a3, int a4)
{
  int BlockID; // r6
  int v8; // r3
  int result; // r0

  BlockID = World::getBlockID(this, a3);
  v8 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 244))(a1, BlockID);
  result = 0;
  if ( v8 != 0 )
  {
    if ( BlockID == RedStoneDustMaterial::BLOCK_ID )
      return World::getBlockData(this, a3);
    else
      return World::isBlockProvidingPowerTo(this, a3, a4);
  }
  return result;
}


//======================================================================
// RedstoneLogicMaterial::getSidePower(World *,WCoord const&,int)
// address: 0x002BB154   size: 0x86 (134 bytes)
//======================================================================
int __fastcall RedstoneLogicMaterial::getSidePower(RedstoneLogicMaterial *this, World *a2, const WCoord *a3, char a4)
{
  int v7; // r0
  int v8; // r0
  int v9; // r1
  int v10; // r3
  int v11; // r7
  RedstoneLogicMaterial *v12; // r0
  World *v13; // r1
  int v14; // r3
  int OneSideBlockPower; // r0
  int v16; // r3
  int v17; // r1
  int v18; // r4
  int result; // r0
  int v20; // [sp+4h] [bp-20h]
  _DWORD v21[3]; // [sp+8h] [bp-1Ch] BYREF
  _DWORD v22[4]; // [sp+14h] [bp-10h] BYREF

  v20 = *((_DWORD *)a3 + 2);
  v7 = *(_DWORD *)a3;
  v21[1] = *((_DWORD *)a3 + 1);
  if ( (a4 & 3u) - 2 > 1 )
  {
    v21[0] = v7;
    v21[2] = v20 - 1;
    OneSideBlockPower = RedstoneLogicMaterial::getOneSideBlockPower((int)this, a2, (WCoord *)v21, 3);
    v16 = *((_DWORD *)a3 + 2);
    v17 = *((_DWORD *)a3 + 1);
    v18 = *(_DWORD *)a3;
    v11 = OneSideBlockPower;
    v22[1] = v17;
    v22[2] = v16 + 1;
    v22[0] = v18;
    v12 = this;
    v13 = a2;
    v14 = 2;
  }
  else
  {
    v21[2] = v20;
    v21[0] = v7 - 1;
    v8 = RedstoneLogicMaterial::getOneSideBlockPower((int)this, a2, (WCoord *)v21, 1);
    v9 = *((_DWORD *)a3 + 1);
    v10 = *((_DWORD *)a3 + 2);
    v22[0] = *(_DWORD *)a3 + 1;
    v11 = v8;
    v22[1] = v9;
    v22[2] = v10;
    v12 = this;
    v13 = a2;
    v14 = 0;
  }
  result = RedstoneLogicMaterial::getOneSideBlockPower((int)v12, v13, (WCoord *)v22, v14);
  if ( result < v11 )
    return v11;
  return result;
}


//======================================================================
// RedstoneLogicMaterial::isLogicBlock(int)
// address: 0x002C8620   size: 0x2A (42 bytes)
//======================================================================
bool __fastcall RedstoneLogicMaterial::isLogicBlock(RedstoneLogicMaterial *this, int a2)
{
  int v4; // r3
  _BOOL4 result; // r0

  v4 = *(_DWORD *)((*(int (__fastcall **)(RedstoneLogicMaterial *))(*(_DWORD *)this + 200))(this) + 32);
  result = true;
  if ( v4 != a2 )
    return *(_DWORD *)((*(int (__fastcall **)(RedstoneLogicMaterial *))(*(_DWORD *)this + 204))(this) + 32) == a2;
  return result;
}

