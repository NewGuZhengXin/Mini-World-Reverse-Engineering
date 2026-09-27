// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockButton

//======================================================================
// BlockButton::newObject(void)
// address: 0x002C1DCC   size: 0x1C (28 bytes)
//======================================================================
ModelBlockMaterial *__fastcall BlockButton::newObject(BlockButton *this)
{
  ModelBlockMaterial *v1; // r4

  v1 = (ModelBlockMaterial *)operator new(0x40u);
  ModelBlockMaterial::ModelBlockMaterial(v1);
  *(_DWORD *)v1 = &off_460DB0;
  return v1;
}


//======================================================================
// BlockButton::canProvidePower(void)
// address: 0x002D8EE8   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BlockButton::canProvidePower(BlockButton *this)
{
  return 1;
}


//======================================================================
// BlockButton::tickRate(void)
// address: 0x002D8EEC   size: 0x10 (16 bytes)
//======================================================================
int __fastcall BlockButton::tickRate(BlockButton *this)
{
  int v1; // r3
  int result; // r0

  v1 = *((unsigned __int8 *)this + 60);
  result = 20;
  if ( v1 != 0 )
    return 30;
  return result;
}


//======================================================================
// BlockButton::getGeomName(void)
// address: 0x002D8EFC   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall BlockButton::getGeomName(BlockButton *this)
{
  return "button";
}


//======================================================================
// BlockButton::onBlockPlaced(World *,WCoord const&,DirectionType,float,float,float,int)
// address: 0x002D8F08   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BlockButton::onBlockPlaced(int a1, int a2, int a3, int a4)
{
  return a4;
}


//======================================================================
// BlockButton::isProvidingWeakPower(World *,WCoord const&,DirectionType)
// address: 0x002D8F0C   size: 0x14 (20 bytes)
//======================================================================
int __fastcall BlockButton::isProvidingWeakPower(int a1, World *this, WCoord *a3, int a4)
{
  int result; // r0

  result = World::getBlockData(this, a3, (int)a3, a4) & 4;
  if ( result != 0 )
    return 15;
  return result;
}


//======================================================================
// BlockButton::isProvidingStrongPower(World *,WCoord const&,DirectionType)
// address: 0x002D8F20   size: 0x22 (34 bytes)
//======================================================================
int __fastcall BlockButton::isProvidingStrongPower(int a1, World *this, WCoord *a3, int a4)
{
  char BlockData; // r0
  int v6; // r2

  BlockData = World::getBlockData(this, a3, (int)a3, a4);
  v6 = BlockData & 4;
  if ( (BlockData & 4) != 0 )
  {
    v6 = 0;
    if ( (BlockData & 3) == a4 )
      return 15;
  }
  return v6;
}


//======================================================================
// BlockButton::~BlockButton()
// address: 0x002D8F44   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN11BlockButtonD1Ev'
void __fastcall BlockButton::~BlockButton(BlockButton *this)
{
  *(_DWORD *)this = &off_460DB0;
  ModelBlockMaterial::~ModelBlockMaterial(this);
}


//======================================================================
// BlockButton::~BlockButton()
// address: 0x002D8F60   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BlockButton::~BlockButton(BlockButton *this)
{
  BlockButton::~BlockButton(this);
  operator delete(this);
}


//======================================================================
// BlockButton::getBlockGeomID(int *,int *,Section *,WCoord const&)
// address: 0x002D8F74   size: 0x34 (52 bytes)
//======================================================================
int __fastcall BlockButton::getBlockGeomID(int a1, _DWORD *a2, int *a3, int a4, _DWORD *a5)
{
  int v5; // r0
  __int16 *v6; // r3
  int v8; // r3

  v5 = *(_DWORD *)(a4 + 20);
  if ( v5 != 0 )
    v6 = (__int16 *)(v5 + 2 * ((16 * a5[2]) | (a5[1] << 8) | *a5));
  else
    v6 = &Section::m_EmptyBlock;
  v8 = (int)(unsigned __int16)*v6 >> 12;
  *a2 = (v8 & 4) != 0;
  *a3 = v8 & 3;
  return 1;
}


//======================================================================
// BlockButton::onNeighborBlockChange(World *,WCoord const&,int)
// address: 0x002D8FAC   size: 0x76 (118 bytes)
//======================================================================
int __fastcall BlockButton::onNeighborBlockChange(BlockButton *this, World *a2, const WCoord *a3, int a4)
{
  int *v7; // r3
  int v8; // r0
  int v9; // r2
  int v10; // r3
  int result; // r0
  _DWORD v12[4]; // [sp+Ch] [bp-10h] BYREF

  v7 = &g_DirectionCoord[3 * (World::getBlockData(a2, a3, (int)a3, a4) & 3)];
  v8 = *((_DWORD *)a3 + 1) + v7[1];
  v9 = *((_DWORD *)a3 + 2) + v7[2];
  v10 = *(_DWORD *)a3 + *v7;
  v12[1] = v8;
  v12[0] = v10;
  v12[2] = v9;
  result = World::isBlockNormalCube(a2, (const WCoord *)v12);
  if ( result == 0 )
  {
    (*(void (__fastcall **)(BlockButton *, World *, const WCoord *, _DWORD, int, int))(*(_DWORD *)this + 180))(
      this,
      a2,
      a3,
      0,
      1,
      1065353216);
    return World::setBlockAll(a2, a3, 0, 0, 3);
  }
  return result;
}


//======================================================================
// BlockButton::canPlaceBlockAt(World *,WCoord const&)
// address: 0x002D9028   size: 0x44 (68 bytes)
//======================================================================
int __fastcall BlockButton::canPlaceBlockAt(BlockButton *this, World *a2, const WCoord *a3)
{
  int *v4; // r4
  int v6; // r2
  int v7; // r12
  int result; // r0
  _DWORD v9[4]; // [sp+4h] [bp-10h] BYREF

  v4 = g_DirectionCoord;
  do
  {
    v6 = *((_DWORD *)a3 + 1) + v4[1];
    v7 = *((_DWORD *)a3 + 2) + v4[2];
    v9[0] = *(_DWORD *)a3 + *v4;
    v9[1] = v6;
    v9[2] = v7;
    result = World::isBlockNormalCube(a2, (const WCoord *)v9);
    if ( result != 0 )
      break;
    v4 += 3;
  }
  while ( v4 != &dword_516658 );
  return result;
}


//======================================================================
// BlockButton::canPlaceBlockOnSide(World *,WCoord const&,int)
// address: 0x002D9070   size: 0x3E (62 bytes)
//======================================================================
int __fastcall BlockButton::canPlaceBlockOnSide(BlockButton *this, World *a2, const WCoord *a3, int a4)
{
  int v4; // r0
  int v5; // r6
  int v6; // r2
  int *v7; // r4
  int v8; // r3
  int v9; // r0
  int v10; // r3
  World *v12; // [sp+4h] [bp-Ch] BYREF
  const WCoord *v13; // [sp+8h] [bp-8h]
  int v14; // [sp+Ch] [bp-4h]

  v12 = a2;
  v13 = a3;
  v14 = a4;
  if ( (unsigned int)(a4 - 4) <= 1 )
    return 0;
  v4 = *((_DWORD *)a3 + 1);
  v5 = *((_DWORD *)a3 + 2);
  v6 = *(_DWORD *)a3;
  v7 = &g_DirectionCoord[3 * a4];
  v8 = v7[2];
  v13 = (const WCoord *)(v4 + v7[1]);
  v9 = v5 + v8;
  v10 = *v7;
  v14 = v9;
  v12 = (World *)(v6 + v10);
  return World::isBlockNormalCube(a2, (const WCoord *)&v12);
}


//======================================================================
// BlockButton::onChangeState(World *,WCoord const&,int)
// address: 0x002D90B4   size: 0x48 (72 bytes)
//======================================================================
void *__fastcall BlockButton::onChangeState(BlockButton *this, World *a2, const WCoord *a3, int a4)
{
  int *v8; // r4
  int v9; // r2
  int v10; // r3
  int v11; // r2
  _DWORD v13[4]; // [sp+4h] [bp-10h] BYREF

  World::notifyBlocksOfNeighborChange(a2, a3, *((_DWORD *)this + 8));
  v8 = &g_DirectionCoord[3 * a4];
  v9 = *((_DWORD *)a3 + 1) + v8[1];
  v10 = *((_DWORD *)a3 + 2) + v8[2];
  v13[0] = *(_DWORD *)a3 + *v8;
  v13[1] = v9;
  v11 = *((_DWORD *)this + 8);
  v13[2] = v10;
  return World::notifyBlocksOfNeighborChange(a2, (const WCoord *)v13, v11);
}


//======================================================================
// BlockButton::onBlockRemoved(World *,WCoord const&,int,int)
// address: 0x002D9100   size: 0x2E (46 bytes)
//======================================================================
int __fastcall BlockButton::onBlockRemoved(BlockButton *this, World *a2, const WCoord *a3, int a4, int a5)
{
  if ( (a5 & 4) != 0 )
    BlockButton::onChangeState(this, a2, a3, a5 & 3);
  BlockMaterial::onBlockRemoved();
  return a5;
}


//======================================================================
// BlockButton::onBlockActivated(World *,WCoord const&,DirectionType,ClientPlayer *)
// address: 0x002D9130   size: 0x92 (146 bytes)
//======================================================================
int __fastcall BlockButton::onBlockActivated(BlockButton *a1, BlockTickMgr **this, WCoord *a3, int a4)
{
  int BlockData; // r0
  char v8; // r7
  BlockTickMgr *v9; // r5
  int v10; // r7
  int v11; // r0
  EffectManager *v13; // [sp+14h] [bp-18h]
  _DWORD v14[4]; // [sp+1Ch] [bp-10h] BYREF

  BlockData = World::getBlockData((World *)this, a3, (int)a3, a4);
  v8 = BlockData;
  if ( (BlockData & 4) == 0 )
  {
    World::setBlockData((World *)this, a3, BlockData | 4, 3);
    World::markBlockForUpdate((World *)this, a3);
    v13 = (EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton;
    BlockCenterCoord(v14, a3);
    EffectManager::playSound(v13, (const WCoord *)v14, "random.click", 0.3, 0.6, true);
    BlockButton::onChangeState(a1, (World *)this, a3, v8 & 3);
    v9 = *(this + 34);
    v10 = *((_DWORD *)a1 + 8);
    v11 = (*(int (__fastcall **)(BlockButton *))(*(_DWORD *)a1 + 100))(a1);
    BlockTickMgr::scheduleBlockUpdate(v9, a3, v10, v11, 0);
  }
  return 1;
}


//======================================================================
// BlockButton::actorCollide(World *,WCoord const&)
// address: 0x002D91D4   size: 0xF0 (240 bytes)
//======================================================================
int __fastcall BlockButton::actorCollide(BlockButton *this, BlockTickMgr **a2, const WCoord *a3, int a4)
{
  char BlockData; // r0
  _BOOL4 v8; // r7
  int result; // r0
  BlockTickMgr *v10; // r7
  int v11; // r5
  int v12; // r0
  EffectManager *v13; // r6
  int v14; // [sp+Ch] [bp-18h]
  EffectManager *v15; // [sp+Ch] [bp-18h]
  _DWORD v16[4]; // [sp+14h] [bp-10h] BYREF

  BlockData = World::getBlockData((World *)a2, a3, (int)a3, a4);
  v14 = BlockData & 3;
  v8 = (BlockData & 4) != 0;
  result = BlockMaterial::hasActorCollided(this, (World *)a2, a3);
  if ( result != 0 )
  {
    if ( !v8 )
    {
      World::setBlockData((World *)a2, a3, v14 | 4, 3);
      BlockButton::onChangeState(this, (World *)a2, a3, v14);
      World::markBlockForUpdate((World *)a2, a3);
      v15 = (EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton;
      BlockCenterCoord(v16, a3);
      EffectManager::playSound(v15, (const WCoord *)v16, "random.click", 0.3, 0.6, true);
    }
    v10 = a2[34];
    v11 = *((_DWORD *)this + 8);
    v12 = (*(int (__fastcall **)(BlockButton *))(*(_DWORD *)this + 100))(this);
    return BlockTickMgr::scheduleBlockUpdate(v10, a3, v11, v12, 0);
  }
  else if ( v8 )
  {
    World::setBlockData((World *)a2, a3, v14, 3);
    BlockButton::onChangeState(this, (World *)a2, a3, v14);
    World::markBlockForUpdate((World *)a2, a3);
    v13 = (EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton;
    BlockCenterCoord(v16, a3);
    return EffectManager::playSound(v13, (const WCoord *)v16, "random.click", 0.3, 0.5, true);
  }
  return result;
}


//======================================================================
// BlockButton::onActorCollidedWithBlock(World *,WCoord const&,ClientActor *)
// address: 0x002D92DC   size: 0x2A (42 bytes)
//======================================================================
int __fastcall BlockButton::onActorCollidedWithBlock(int this, World *a2, const WCoord *a3, ClientActor *a4)
{
  BlockButton *v4; // r6

  v4 = (BlockButton *)this;
  if ( *(_BYTE *)(this + 60) != 0 )
  {
    this = World::getBlockData(a2, a3, (int)a3, *(unsigned __int8 *)(this + 60));
    if ( (this & 4) == 0 )
      return BlockButton::actorCollide(v4, (BlockTickMgr **)a2, a3, this << 29);
  }
  return this;
}


//======================================================================
// BlockButton::blockTick(World *,WCoord const&)
// address: 0x002D9308   size: 0x7E (126 bytes)
//======================================================================
int __fastcall BlockButton::blockTick(BlockButton *this, World *a2, const WCoord *a3, int a4)
{
  int result; // r0
  int v8; // r7
  EffectManager *v9; // r7
  _DWORD v10[4]; // [sp+Ch] [bp-10h] BYREF

  result = World::getBlockData(a2, a3, (int)a3, a4);
  if ( (result & 4) != 0 )
  {
    if ( *((_BYTE *)this + 60) != 0 )
    {
      return BlockButton::actorCollide(this, (BlockTickMgr **)a2, a3, *((unsigned __int8 *)this + 60));
    }
    else
    {
      v8 = result & 3;
      World::setBlockData(a2, a3, v8, 3);
      BlockButton::onChangeState(this, a2, a3, v8);
      v9 = (EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton;
      BlockCenterCoord(v10, a3);
      EffectManager::playSound(v9, (const WCoord *)v10, "random.click", 0.3, 0.5, true);
      return (int)World::markBlockForUpdate(a2, a3);
    }
  }
  return result;
}


//======================================================================
// BlockButton::init(int)
// address: 0x002D9394   size: 0x1C (28 bytes)
//======================================================================
void __fastcall BlockButton::init(__int64 this, int a2)
{
  ModelBlockMaterial::init(this, a2);
  *(_BYTE *)(this + 60) = HIDWORD(this) == 715;
}

