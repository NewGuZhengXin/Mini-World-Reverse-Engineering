// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockBasePressurePlate

//======================================================================
// BlockBasePressurePlate::getGeomName(void)
// address: 0x002A8F9C   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall BlockBasePressurePlate::getGeomName(BlockBasePressurePlate *this)
{
  return "pressure";
}


//======================================================================
// BlockBasePressurePlate::getTickRandomly(void)
// address: 0x002A8FA8   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BlockBasePressurePlate::getTickRandomly(BlockBasePressurePlate *this)
{
  return 1;
}


//======================================================================
// BlockBasePressurePlate::tickRate(void)
// address: 0x002A8FAC   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BlockBasePressurePlate::tickRate(BlockBasePressurePlate *this)
{
  return 20;
}


//======================================================================
// BlockBasePressurePlate::isOpaqueCube(void)
// address: 0x002A8FB0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BlockBasePressurePlate::isOpaqueCube(BlockBasePressurePlate *this)
{
  return 0;
}


//======================================================================
// BlockBasePressurePlate::renderAsNormalBlock(void)
// address: 0x002A8FB4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BlockBasePressurePlate::renderAsNormalBlock(BlockBasePressurePlate *this)
{
  return 0;
}


//======================================================================
// BlockBasePressurePlate::canProvidePower(void)
// address: 0x002A8FB8   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BlockBasePressurePlate::canProvidePower(BlockBasePressurePlate *this)
{
  return 1;
}


//======================================================================
// BlockBasePressurePlate::getProtoBlockGeomID(int *,int *)
// address: 0x002A8FD0   size: 0xA (10 bytes)
//======================================================================
int __fastcall BlockBasePressurePlate::getProtoBlockGeomID(BlockBasePressurePlate *this, int *a2, int *a3)
{
  *a2 = 0;
  *a3 = 0;
  return 1;
}


//======================================================================
// BlockBasePressurePlate::~BlockBasePressurePlate()
// address: 0x002A8FDC   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN22BlockBasePressurePlateD1Ev'
void __fastcall BlockBasePressurePlate::~BlockBasePressurePlate(BlockBasePressurePlate *this)
{
  *(_DWORD *)this = &off_45D978;
  ModelBlockMaterial::~ModelBlockMaterial(this);
}


//======================================================================
// BlockBasePressurePlate::~BlockBasePressurePlate()
// address: 0x002A8FF8   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BlockBasePressurePlate::~BlockBasePressurePlate(BlockBasePressurePlate *this)
{
  BlockBasePressurePlate::~BlockBasePressurePlate(this);
  operator delete(this);
}


//======================================================================
// BlockBasePressurePlate::blockTick(World *,WCoord const&)
// address: 0x002A903A   size: 0x30 (48 bytes)
//======================================================================
int __fastcall BlockBasePressurePlate::blockTick(BlockBasePressurePlate *this, World *a2, const WCoord *a3)
{
  int (__fastcall *v5)(BlockBasePressurePlate *, int); // r7
  int BlockData; // r0
  int result; // r0

  v5 = *(int (__fastcall **)(BlockBasePressurePlate *, int))(*(_DWORD *)this + 200);
  BlockData = World::getBlockData(a2, a3);
  result = v5(this, BlockData);
  if ( result > 0 )
    return (*(int (__fastcall **)(BlockBasePressurePlate *, World *, const WCoord *, int))(*(_DWORD *)this + 212))(
             this,
             a2,
             a3,
             result);
  return result;
}


//======================================================================
// BlockBasePressurePlate::onActorCollidedWithBlock(World *,WCoord const&,ClientActor *)
// address: 0x002A906A   size: 0x30 (48 bytes)
//======================================================================
int __fastcall BlockBasePressurePlate::onActorCollidedWithBlock(
        BlockBasePressurePlate *this,
        World *a2,
        const WCoord *a3,
        ClientActor *a4)
{
  int (__fastcall *v6)(BlockBasePressurePlate *, int); // r7
  int BlockData; // r0
  int result; // r0

  v6 = *(int (__fastcall **)(BlockBasePressurePlate *, int))(*(_DWORD *)this + 200);
  BlockData = World::getBlockData(a2, a3);
  result = v6(this, BlockData);
  if ( result == 0 )
    return (*(int (__fastcall **)(BlockBasePressurePlate *, World *, const WCoord *))(*(_DWORD *)this + 212))(
             this,
             a2,
             a3);
  return result;
}


//======================================================================
// BlockBasePressurePlate::isProvidingWeakPower(World *,WCoord const&,DirectionType)
// address: 0x002A909A   size: 0x1A (26 bytes)
//======================================================================
int __fastcall BlockBasePressurePlate::isProvidingWeakPower(int a1, World *this, WCoord *a3)
{
  int (__fastcall *v4)(int, int); // r5
  int BlockData; // r0

  v4 = *(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 200);
  BlockData = World::getBlockData(this, a3);
  return v4(a1, BlockData);
}


//======================================================================
// BlockBasePressurePlate::isProvidingStrongPower(World *,WCoord const&,DirectionType)
// address: 0x002A90D4   size: 0x20 (32 bytes)
//======================================================================
int __fastcall BlockBasePressurePlate::isProvidingStrongPower(int a1, World *this, WCoord *a3, int a4)
{
  int result; // r0
  int (__fastcall *v6)(int, int); // r5
  int BlockData; // r0

  result = 0;
  if ( a4 == 4 )
  {
    v6 = *(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 200);
    BlockData = World::getBlockData(this, a3);
    return v6(a1, BlockData);
  }
  return result;
}


//======================================================================
// BlockBasePressurePlate::getBlockGeomID(int *,int *,Section *,WCoord const&)
// address: 0x002A90F4   size: 0x42 (66 bytes)
//======================================================================
int __fastcall BlockBasePressurePlate::getBlockGeomID(int a1, _DWORD *a2, _DWORD *a3, int a4, _DWORD *a5)
{
  int v5; // r3
  int v8; // r1

  v5 = *(_DWORD *)(a4 + 20);
  if ( v5 != 0 )
    v8 = (int)*(unsigned __int16 *)(2 * ((16 * a5[2]) | (a5[1] << 8) | *a5) + v5) >> 12;
  else
    v8 = 0;
  *a2 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 200))(a1, v8) > 0;
  *a3 = 0;
  return 1;
}


//======================================================================
// BlockBasePressurePlate::onNeighborBlockChange(World *,WCoord const&,int)
// address: 0x002A9136   size: 0x42 (66 bytes)
//======================================================================
__int64 __fastcall BlockBasePressurePlate::onNeighborBlockChange(__int64 this, const WCoord *a2, int a3)
{
  __int64 v6; // [sp+0h] [bp-Ch]

  v6 = this;
  if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)this + 152))(this) == 0 )
  {
    HIDWORD(v6) = 1065353216;
    (*(void (__fastcall **)(_DWORD, _DWORD, const WCoord *, _DWORD, int))(*(_DWORD *)this + 180))(
      this,
      HIDWORD(this),
      a2,
      0,
      1);
    World::setBlockAll((World *)HIDWORD(this), a2, 0, 0, 3);
  }
  return v6;
}


//======================================================================
// BlockBasePressurePlate::canPlaceBlockAt(World *,WCoord const&)
// address: 0x002A9178   size: 0x2E (46 bytes)
//======================================================================
int __fastcall BlockBasePressurePlate::canPlaceBlockAt(
        BlockBasePressurePlate *this,
        World *a2,
        const WCoord *a3,
        int a4)
{
  int v4; // r0
  int v5; // r6
  int v6; // r2
  World *v8; // [sp+4h] [bp-Ch] BYREF
  const WCoord *v9; // [sp+8h] [bp-8h]
  int v10; // [sp+Ch] [bp-4h]

  v8 = a2;
  v9 = a3;
  v10 = a4;
  v4 = *((_DWORD *)a3 + 1);
  v5 = *((_DWORD *)a3 + 2);
  v6 = *(_DWORD *)a3;
  v9 = (const WCoord *)(v4 + dword_51665C);
  v8 = (World *)(v6 + dword_516658);
  v10 = v5 + dword_516660;
  return World::doesBlockHaveSolidTopSurface(a2, (const WCoord *)&v8);
}


//======================================================================
// BlockBasePressurePlate::doNotify(World *,WCoord const&)
// address: 0x002A91AC   size: 0x40 (64 bytes)
//======================================================================
int __fastcall BlockBasePressurePlate::doNotify(BlockBasePressurePlate *this, World *a2, const WCoord *a3)
{
  int v6; // r2
  int v7; // r3
  int v8; // r2
  _DWORD v10[4]; // [sp+4h] [bp-10h] BYREF

  World::notifyBlocksOfNeighborChange(a2, a3, *((_DWORD *)this + 8));
  v6 = *((_DWORD *)a3 + 2) + dword_516660;
  v7 = *(_DWORD *)a3 + dword_516658;
  v10[1] = *((_DWORD *)a3 + 1) + dword_51665C;
  v10[2] = v6;
  v8 = *((_DWORD *)this + 8);
  v10[0] = v7;
  return World::notifyBlocksOfNeighborChange(a2, (const WCoord *)v10, v8);
}


//======================================================================
// BlockBasePressurePlate::onBlockRemoved(World *,WCoord const&,int,int)
// address: 0x002A91F0   size: 0x34 (52 bytes)
//======================================================================
int __fastcall BlockBasePressurePlate::onBlockRemoved(
        BlockBasePressurePlate *this,
        World *a2,
        const WCoord *a3,
        int a4,
        int a5)
{
  int v10; // [sp+0h] [bp-Ch]

  if ( (*(int (__fastcall **)(BlockBasePressurePlate *, int))(*(_DWORD *)this + 200))(this, a5) > 0 )
    BlockBasePressurePlate::doNotify(this, a2, a3);
  BlockMaterial::onBlockRemoved(this, a2, a3, a4, a5);
  return v10;
}


//======================================================================
// BlockBasePressurePlate::setStateIfMobInteractsWithPlate(World *,WCoord const&,int)
// address: 0x002A9224   size: 0xDE (222 bytes)
//======================================================================
int __fastcall BlockBasePressurePlate::setStateIfMobInteractsWithPlate(
        BlockBasePressurePlate *this,
        BlockTickMgr **a2,
        const WCoord *a3,
        int a4)
{
  int v7; // r0
  int v8; // r7
  int v9; // r0
  int v10; // r12
  int result; // r0
  BlockTickMgr *v12; // r7
  int v13; // r6
  int v14; // r0
  _DWORD v16[4]; // [sp+14h] [bp-10h] BYREF

  v7 = (*(int (__fastcall **)(BlockBasePressurePlate *))(*(_DWORD *)this + 204))(this);
  v8 = v7;
  if ( a4 != v7 )
  {
    v9 = (*(int (__fastcall **)(BlockBasePressurePlate *, int))(*(_DWORD *)this + 208))(this, v7);
    World::setBlockData((World *)a2, a3, v9, 2);
    BlockBasePressurePlate::doNotify(this, (World *)a2, a3);
    World::markBlockForUpdate((World *)a2, a3, a3);
  }
  v10 = 100 * *((_DWORD *)a3 + 2) + 50;
  result = 100 * *((_DWORD *)a3 + 1) + 10;
  v16[0] = 100 * *(_DWORD *)a3 + 50;
  v16[1] = result;
  v16[2] = v10;
  if ( v8 > 0 )
  {
    if ( (a4 >> 31) - a4 >= 0 )
      EffectManager::playSound(
        (EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton,
        (const WCoord *)v16,
        "random.click",
        0.3,
        0.6,
        true);
    v12 = a2[34];
    v13 = *((_DWORD *)this + 8);
    v14 = (*(int (__fastcall **)(BlockBasePressurePlate *))(*(_DWORD *)this + 100))(this);
    return BlockTickMgr::scheduleBlockUpdate(v12, a3, v13, v14, 0);
  }
  else if ( (a4 >> 31) - a4 < 0 )
  {
    return EffectManager::playSound(
             (EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton,
             (const WCoord *)v16,
             "random.click",
             0.3,
             0.5,
             true);
  }
  return result;
}


//======================================================================
// BlockBasePressurePlate::getSensitiveAABB(CollideAABB &,WCoord const&)
// address: 0x002A931C   size: 0x2A (42 bytes)
//======================================================================
int __fastcall BlockBasePressurePlate::getSensitiveAABB(int a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // r4
  int result; // r0

  v3 = 100 * a3[1];
  result = 100 * a3[2] + 12;
  *a2 = 100 * *a3 + 12;
  a2[1] = v3;
  a2[2] = result;
  a2[3] = 75;
  a2[4] = 25;
  a2[5] = 75;
  return result;
}

