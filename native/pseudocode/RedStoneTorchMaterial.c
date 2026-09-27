// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: RedStoneTorchMaterial

//======================================================================
// RedStoneTorchMaterial::getTickRandomly(void)
// address: 0x002A8C1E   size: 0x4 (4 bytes)
//======================================================================
int __fastcall RedStoneTorchMaterial::getTickRandomly(RedStoneTorchMaterial *this)
{
  return 1;
}


//======================================================================
// RedStoneTorchMaterial::tickRate(void)
// address: 0x002A8C22   size: 0x4 (4 bytes)
//======================================================================
int __fastcall RedStoneTorchMaterial::tickRate(RedStoneTorchMaterial *this)
{
  return 2;
}


//======================================================================
// RedStoneTorchMaterial::canProvidePower(void)
// address: 0x002A8C26   size: 0x4 (4 bytes)
//======================================================================
int __fastcall RedStoneTorchMaterial::canProvidePower(RedStoneTorchMaterial *this)
{
  return 1;
}


//======================================================================
// RedStoneTorchMaterial::isAssociatedBlockID(int)
// address: 0x002A8C2C   size: 0x22 (34 bytes)
//======================================================================
bool __fastcall RedStoneTorchMaterial::isAssociatedBlockID(RedStoneTorchMaterial *this, int a2)
{
  return a2 == RedStoneTorchMaterial::ACTIVE_ID || a2 == RedStoneTorchMaterial::IDLE_ID;
}


//======================================================================
// RedStoneTorchMaterial::~RedStoneTorchMaterial()
// address: 0x002A8C88   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN21RedStoneTorchMaterialD1Ev'
void __fastcall RedStoneTorchMaterial::~RedStoneTorchMaterial(RedStoneTorchMaterial *this)
{
  *(_DWORD *)this = &off_45D890;
  TorchMaterial::~TorchMaterial(this);
}


//======================================================================
// RedStoneTorchMaterial::~RedStoneTorchMaterial()
// address: 0x002A8CA4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall RedStoneTorchMaterial::~RedStoneTorchMaterial(RedStoneTorchMaterial *this)
{
  RedStoneTorchMaterial::~RedStoneTorchMaterial(this);
  operator delete(this);
}


//======================================================================
// RedStoneTorchMaterial::init(int)
// address: 0x002A8CB8   size: 0x2A (42 bytes)
//======================================================================
int __fastcall RedStoneTorchMaterial::init(RedStoneTorchMaterial *this, int a2)
{
  int result; // r0
  _BOOL4 v5; // r3
  int **v6; // r3

  result = TorchMaterial::init(this, a2);
  v5 = *(_DWORD *)(*((_DWORD *)this + 9) + 56) != 0;
  *((_BYTE *)this + 60) = v5;
  if ( v5 )
    v6 = RedStoneTorchMaterial::ACTIVE_ID;
  else
    v6 = RedStoneTorchMaterial::IDLE_ID;
  **v6 = a2;
  return result;
}


//======================================================================
// RedStoneTorchMaterial::isProvidingStrongPower(World *,WCoord const&,DirectionType)
// address: 0x002A8CEC   size: 0x16 (22 bytes)
//======================================================================
int __fastcall RedStoneTorchMaterial::isProvidingStrongPower(int a1, int a2, int a3, int a4)
{
  int v4; // r4

  v4 = 0;
  if ( a4 == 5 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 168))(a1);
  return v4;
}


//======================================================================
// RedStoneTorchMaterial::isProvidingWeakPower(World *,WCoord const&,DirectionType)
// address: 0x002A8D02   size: 0x24 (36 bytes)
//======================================================================
int __fastcall RedStoneTorchMaterial::isProvidingWeakPower(int a1, World *this, WCoord *a3, int a4)
{
  int v5; // r3
  int result; // r0

  v5 = *(unsigned __int8 *)(a1 + 60);
  result = 0;
  if ( v5 != 0 )
    return World::getBlockData(this, a3) != a4 ? 0xF : 0;
  return result;
}


//======================================================================
// RedStoneTorchMaterial::randomDisplayTick(ClientWorld *,WCoord const&)
// address: 0x002A8D28   size: 0x9E (158 bytes)
//======================================================================
_BYTE *__fastcall RedStoneTorchMaterial::randomDisplayTick(
        RedStoneTorchMaterial *this,
        ClientWorld *a2,
        const WCoord *a3)
{
  _BYTE *result; // r0
  int BlockData; // r0
  int v7; // r2
  int v8; // r1
  int v9; // r3
  int v10; // r2
  int v11; // r3
  EffectParticle *v12; // r6
  _DWORD v13[3]; // [sp+Ch] [bp-Ch] BYREF

  result = (char *)this + 60;
  if ( *result != 0 )
  {
    BlockData = World::getBlockData(a2, a3);
    v7 = 100 * *(_DWORD *)a3;
    v8 = 100 * *((_DWORD *)a3 + 1);
    v9 = 100 * *((_DWORD *)a3 + 2);
    v13[0] = v7 + 50;
    v13[1] = v8 + 60;
    v13[2] = v9 + 50;
    if ( BlockData <= 3 )
    {
      v13[1] = v8 + 80;
      if ( BlockData != 0 )
      {
        if ( BlockData != 1 )
        {
          if ( BlockData == 2 )
          {
            v11 = v9 + 35;
          }
          else
          {
            if ( BlockData != 3 )
              goto LABEL_13;
            v11 = v9 + 65;
          }
          v13[2] = v11;
          goto LABEL_13;
        }
        v10 = v7 + 65;
      }
      else
      {
        v10 = v7 + 35;
      }
      v13[0] = v10;
    }
LABEL_13:
    v12 = (EffectParticle *)operator new(0x14u);
    EffectParticle::EffectParticle(v12, a2, (Ogre::FixedString *)"particles/item_701.ent", (const WCoord *)v13, 20);
    return (_BYTE *)EffectManager::addEffect((EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton, v12);
  }
  return result;
}


//======================================================================
// RedStoneTorchMaterial::onBlockRemoved(World *,WCoord const&,int,int)
// address: 0x002A8DD0   size: 0x5C (92 bytes)
//======================================================================
_DWORD *__fastcall RedStoneTorchMaterial::onBlockRemoved(_DWORD *this, World *a2, const WCoord *a3, int a4, int a5)
{
  _DWORD *v5; // r6
  int *v8; // r4
  int v9; // r2
  int v10; // r12
  int v11; // r0
  int v12; // r2
  _DWORD v13[4]; // [sp+Ch] [bp-10h] BYREF

  v5 = this;
  if ( *((_BYTE *)this + 60) != 0 )
  {
    World::notifyBlocksOfNeighborChange(a2, a3, *(this + 8));
    v8 = g_DirectionCoord;
    do
    {
      v9 = *((_DWORD *)a3 + 1) + v8[1];
      v10 = *((_DWORD *)a3 + 2) + v8[2];
      v11 = *v8;
      v8 += 3;
      v13[0] = *(_DWORD *)a3 + v11;
      v13[1] = v9;
      v12 = v5[8];
      v13[2] = v10;
      World::notifyBlocksOfNeighborChange(a2, (const WCoord *)v13, v12);
      this = &slotelements;
    }
    while ( v8 != (int *)&slotelements );
  }
  return this;
}


//======================================================================
// RedStoneTorchMaterial::onBlockAdded(World *,WCoord const&)
// address: 0x002A8E30   size: 0x5C (92 bytes)
//======================================================================
_DWORD *__fastcall RedStoneTorchMaterial::onBlockAdded(_DWORD *this, World *a2, const WCoord *a3)
{
  _DWORD *v3; // r6
  int *v6; // r4
  int v7; // r2
  int v8; // r12
  int v9; // r0
  int v10; // r2
  _DWORD v11[4]; // [sp+Ch] [bp-10h] BYREF

  v3 = this;
  if ( *((_BYTE *)this + 60) != 0 )
  {
    World::notifyBlocksOfNeighborChange(a2, a3, *(this + 8));
    v6 = g_DirectionCoord;
    do
    {
      v7 = *((_DWORD *)a3 + 1) + v6[1];
      v8 = *((_DWORD *)a3 + 2) + v6[2];
      v9 = *v6;
      v6 += 3;
      v11[0] = *(_DWORD *)a3 + v9;
      v11[1] = v7;
      v10 = v3[8];
      v11[2] = v8;
      World::notifyBlocksOfNeighborChange(a2, (const WCoord *)v11, v10);
      this = &slotelements;
    }
    while ( v6 != (int *)&slotelements );
  }
  return this;
}


//======================================================================
// RedStoneTorchMaterial::RedStoneTorchMaterial(void)
// address: 0x002A8E90   size: 0x1E (30 bytes)
//======================================================================
// Alternative name is '_ZN21RedStoneTorchMaterialC1Ev'
void __fastcall RedStoneTorchMaterial::RedStoneTorchMaterial(RedStoneTorchMaterial *this)
{
  ModelBlockMaterial::ModelBlockMaterial(this);
  *(_DWORD *)this = &off_45D890;
  *((_BYTE *)this + 60) = 0;
}


//======================================================================
// RedStoneTorchMaterial::isIndirectlyPowered(World *,WCoord const&)
// address: 0x002A8EB4   size: 0x50 (80 bytes)
//======================================================================
unsigned int __fastcall RedStoneTorchMaterial::isIndirectlyPowered(
        RedStoneTorchMaterial *this,
        World *a2,
        const WCoord *a3)
{
  int BlockData; // r5
  int *v6; // r3
  int v7; // r0
  int v8; // r2
  int v9; // r3
  int v10; // r2
  int IndirectPowerLevelTo; // r0
  _DWORD v13[4]; // [sp+4h] [bp-10h] BYREF

  BlockData = World::getBlockData(a2, a3);
  v6 = &g_DirectionCoord[3 * BlockData];
  v7 = *((_DWORD *)a3 + 1) + v6[1];
  v8 = *((_DWORD *)a3 + 2) + v6[2];
  v9 = *(_DWORD *)a3 + *v6;
  v13[2] = v8;
  v13[0] = v9;
  v13[1] = v7;
  v10 = BlockData + 1;
  if ( (BlockData & 1) != 0 )
    v10 = BlockData - 1;
  IndirectPowerLevelTo = World::getIndirectPowerLevelTo(a2, v13, v10, BlockData << 31);
  return (unsigned int)((IndirectPowerLevelTo >> 31) - IndirectPowerLevelTo) >> 31;
}


//======================================================================
// RedStoneTorchMaterial::blockTick(World *,WCoord const&)
// address: 0x002A8F08   size: 0x44 (68 bytes)
//======================================================================
RedStoneTorchMaterial *__fastcall RedStoneTorchMaterial::blockTick(
        RedStoneTorchMaterial *this,
        World *a2,
        const WCoord *a3)
{
  _BYTE *v3; // r6
  unsigned int isIndirectlyPowered; // r0
  int **v7; // r3
  int v8; // r6
  int BlockData; // r0
  RedStoneTorchMaterial *v11; // [sp+0h] [bp-8h]

  v11 = this;
  v3 = (char *)this + 60;
  isIndirectlyPowered = RedStoneTorchMaterial::isIndirectlyPowered(this, a2, a3);
  if ( *v3 != 0 )
  {
    if ( isIndirectlyPowered != 0 )
    {
      v7 = RedStoneTorchMaterial::IDLE_ID;
LABEL_6:
      v8 = **v7;
      BlockData = World::getBlockData(a2, a3);
      World::setBlockAll(a2, a3, v8, BlockData, 3);
    }
  }
  else if ( isIndirectlyPowered == 0 )
  {
    v7 = RedStoneTorchMaterial::ACTIVE_ID;
    goto LABEL_6;
  }
  return v11;
}


//======================================================================
// RedStoneTorchMaterial::onNeighborBlockChange(World *,WCoord const&,int)
// address: 0x002A8F54   size: 0x48 (72 bytes)
//======================================================================
unsigned int __fastcall RedStoneTorchMaterial::onNeighborBlockChange(
        RedStoneTorchMaterial *this,
        BlockTickMgr **a2,
        const WCoord *a3,
        int a4)
{
  unsigned int result; // r0
  BlockTickMgr *v8; // r7
  int v9; // r0
  int v10; // [sp+Ch] [bp-8h]

  result = TorchMaterial::checkDrop(this, (World *)a2, a3);
  if ( result == 0 )
  {
    result = RedStoneTorchMaterial::isIndirectlyPowered(this, (World *)a2, a3);
    if ( *((unsigned __int8 *)this + 60) == result )
    {
      v10 = *((_DWORD *)this + 8);
      v8 = a2[34];
      v9 = (*(int (__fastcall **)(RedStoneTorchMaterial *))(*(_DWORD *)this + 100))(this);
      return BlockTickMgr::scheduleBlockUpdate(v8, a3, v10, v9, 0);
    }
  }
  return result;
}


//======================================================================
// RedStoneTorchMaterial::newObject(void)
// address: 0x002C153A   size: 0x12 (18 bytes)
//======================================================================
RedStoneTorchMaterial *__fastcall RedStoneTorchMaterial::newObject(RedStoneTorchMaterial *this)
{
  RedStoneTorchMaterial *v1; // r4

  v1 = (RedStoneTorchMaterial *)operator new(0x40u);
  RedStoneTorchMaterial::RedStoneTorchMaterial(v1);
  return v1;
}

