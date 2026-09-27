// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockPistonBase

//======================================================================
// BlockPistonBase::getGeomName(void)
// address: 0x0029FE28   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall BlockPistonBase::getGeomName(BlockPistonBase *this)
{
  return "piston";
}


//======================================================================
// BlockPistonBase::isOpaqueCube(void)
// address: 0x0029FE34   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BlockPistonBase::isOpaqueCube(BlockPistonBase *this)
{
  return 0;
}


//======================================================================
// BlockPistonBase::onBlockActivated(World *,WCoord const&,DirectionType,ClientPlayer *)
// address: 0x0029FE38   size: 0x4 (4 bytes)
//======================================================================
int BlockPistonBase::onBlockActivated()
{
  return 0;
}


//======================================================================
// BlockPistonBase::getProtoBlockGeomID(int *,int *)
// address: 0x0029FE3C   size: 0xA (10 bytes)
//======================================================================
int __fastcall BlockPistonBase::getProtoBlockGeomID(BlockPistonBase *this, int *a2, int *a3)
{
  *a2 = 2;
  *a3 = 2;
  return 1;
}


//======================================================================
// BlockPistonBase::~BlockPistonBase()
// address: 0x0029FED4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN15BlockPistonBaseD1Ev'
void __fastcall BlockPistonBase::~BlockPistonBase(BlockPistonBase *this)
{
  *(_DWORD *)this = &off_45C8B8;
  ModelBlockMaterial::~ModelBlockMaterial(this);
}


//======================================================================
// BlockPistonBase::~BlockPistonBase()
// address: 0x0029FEF0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BlockPistonBase::~BlockPistonBase(BlockPistonBase *this)
{
  BlockPistonBase::~BlockPistonBase(this);
  operator delete(this);
}


//======================================================================
// BlockPistonBase::getBlockGeomID(int *,int *,Section *,WCoord const&)
// address: 0x0029FF02   size: 0x48 (72 bytes)
//======================================================================
int __fastcall BlockPistonBase::getBlockGeomID(int a1, unsigned int *a2, int *a3, int a4, _DWORD *a5)
{
  int v5; // r0
  int v6; // r3
  unsigned int v7; // r0
  _BOOL4 v8; // r3
  int v9; // r0

  v5 = *(_DWORD *)(a4 + 20);
  if ( v5 != 0 )
    v5 = (int)*(unsigned __int16 *)(2 * ((16 * a5[2]) | (a5[1] << 8) | *a5) + v5) >> 12;
  v6 = v5 & 7;
  v7 = (unsigned int)(v5 << 28) >> 31;
  if ( v6 == 4 )
  {
    v8 = v7 == 0;
    v9 = 5;
  }
  else
  {
    if ( v6 != 5 )
    {
      *a2 = v7;
      goto LABEL_9;
    }
    v8 = v7 == 0;
    v9 = 3;
  }
  *a2 = v9 - v8;
  v6 = 2;
LABEL_9:
  *a3 = v6;
  return 1;
}


//======================================================================
// BlockPistonBase::tryExtend(World *,WCoord const&,int)
// address: 0x0029FFAC   size: 0x230 (560 bytes)
//======================================================================
int __fastcall BlockPistonBase::tryExtend(BlockPistonBase *this, WorldContainerMgr **a2, const WCoord *a3, int a4)
{
  int v5; // r7
  int BlockID; // r0
  int v8; // r6
  _DWORD *Material; // r0
  int v10; // r3
  int BlockData; // r0
  int v12; // r7
  int v13; // r7
  WorldPiston *v14; // r6
  int v15; // [sp+14h] [bp-80h]
  int *v17; // [sp+1Ch] [bp-78h]
  int v18; // [sp+1Ch] [bp-78h]
  int *v20; // [sp+24h] [bp-70h]
  int v22; // [sp+2Ch] [bp-68h]
  int v23; // [sp+30h] [bp-64h]
  int v24; // [sp+34h] [bp-60h]
  int v25; // [sp+38h] [bp-5Ch] BYREF
  int v26; // [sp+3Ch] [bp-58h]
  int v27; // [sp+40h] [bp-54h]
  int v28; // [sp+44h] [bp-50h] BYREF
  int v29; // [sp+48h] [bp-4Ch]
  int v30; // [sp+4Ch] [bp-48h]
  _DWORD v31[17]; // [sp+50h] [bp-44h] BYREF

  v17 = &g_DirectionCoord[3 * a4];
  v5 = 13;
  operator+(&v25, (int *)a3, v17);
  while ( 1 )
  {
    if ( (unsigned int)(v26 - 1) > 0xFD )
      return 0;
    BlockID = World::getBlockID((World *)a2, (const WCoord *)&v25);
    v8 = BlockID;
    if ( BlockID == 0 )
      goto LABEL_10;
    if ( sub_29FE48(BlockID, (World *)a2, (WCoord *)&v25, 1) == 0 )
      return 0;
    Material = (_DWORD *)BlockMaterialMgr::getMaterial(
                           (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                           v8);
    if ( *(_DWORD *)(Material[9] + 20) == 1 )
      break;
    if ( --v5 == 0 )
      return 0;
    operator+(v31, &v25, v17);
    v26 = v31[1];
    v25 = v31[0];
    v27 = v31[2];
  }
  (*(void (__fastcall **)(_DWORD *, WorldContainerMgr **, int *, _DWORD, int, int))(*Material + 180))(
    Material,
    a2,
    &v25,
    0,
    1,
    1065353216);
  World::setBlockAir((World *)a2, (const WCoord *)&v25);
LABEL_10:
  v24 = v25;
  v22 = v27;
  v23 = v26;
  v10 = a4 + 1;
  if ( (a4 & 1) != 0 )
    v10 = a4 - 1;
  v20 = &g_DirectionCoord[3 * v10];
  v18 = 0;
  while ( v25 != *(_DWORD *)a3 || v26 != *((_DWORD *)a3 + 1) || v27 != *((_DWORD *)a3 + 2) )
  {
    operator+(&v28, &v25, v20);
    v15 = World::getBlockID((World *)a2, (const WCoord *)&v28);
    BlockData = World::getBlockData((World *)a2, (const WCoord *)&v28);
    v12 = BlockData;
    if ( v15 == *((_DWORD *)this + 8)
      && v28 == *(_DWORD *)a3
      && v29 == *((_DWORD *)a3 + 1)
      && v30 == *((_DWORD *)a3 + 2) )
    {
      World::setBlockAll((World *)a2, (const WCoord *)&v25, 841, (8 * (*((_BYTE *)this + 60) != 0)) | a4, 4);
      v14 = (WorldPiston *)operator new(0x50u);
      WorldPiston::WorldPiston(v14, (const WCoord *)&v25, 840, (8 * (*((_BYTE *)this + 60) != 0)) | a4, a4, true, false);
    }
    else
    {
      World::setBlockAll((World *)a2, (const WCoord *)&v25, 841, BlockData, 4);
      v14 = (WorldPiston *)operator new(0x50u);
      WorldPiston::WorldPiston(v14, (const WCoord *)&v25, v15, v12, a4, true, false);
    }
    WorldContainerMgr::spawnContainer(a2[32], v14, true);
    v31[v18 + 3] = v15;
    v27 = v30;
    v25 = v28;
    ++v18;
    v26 = v29;
  }
  v25 = v24;
  v26 = v23;
  v27 = v22;
  v13 = 0;
  while ( v25 != *(_DWORD *)a3 || v26 != *((_DWORD *)a3 + 1) || v27 != *((_DWORD *)a3 + 2) )
  {
    operator+(&v28, &v25, v20);
    World::notifyBlocksOfNeighborChange((World *)a2, (const WCoord *)&v28, v31[v13 + 3]);
    v26 = v29;
    v25 = v28;
    v27 = v30;
    ++v13;
  }
  return 1;
}


//======================================================================
// BlockPistonBase::isIndirectlyPowered(World *,WCoord const&,int)
// address: 0x002A01E8   size: 0x4C (76 bytes)
//======================================================================
int __fastcall BlockPistonBase::isIndirectlyPowered(BlockPistonBase *this, World *a2, const WCoord *a3, int a4)
{
  int v6; // r4
  int v8; // r2
  _DWORD v10[4]; // [sp+Ch] [bp-10h] BYREF

  v6 = 0;
  while ( 1 )
  {
    if ( a4 != v6 )
    {
      operator+(v10, (int *)a3, &g_DirectionCoord[3 * v6]);
      v8 = v6 + 1;
      if ( (v6 & 1) != 0 )
        v8 = v6 - 1;
      if ( World::getIndirectPowerLevelTo(a2, v10, v8, v6 << 31) > 0 )
        break;
    }
    if ( ++v6 == 6 )
      return 0;
  }
  return 1;
}


//======================================================================
// BlockPistonBase::updatePistonState(World *,WCoord const&)
// address: 0x002A0238   size: 0xE6 (230 bytes)
//======================================================================
_DWORD *__fastcall BlockPistonBase::updatePistonState(BlockPistonBase *this, BlockTickMgr **a2, const WCoord *a3)
{
  _DWORD *result; // r0
  char v6; // r5
  int BlockID; // r0
  int v8; // r7
  int v9; // [sp+8h] [bp-2Ch]
  int v10; // [sp+Ch] [bp-28h]
  int v12; // [sp+18h] [bp-1Ch] BYREF
  int v13; // [sp+1Ch] [bp-18h]
  int v14; // [sp+20h] [bp-14h]
  _DWORD v15[4]; // [sp+24h] [bp-10h] BYREF

  result = (_DWORD *)World::getBlockData((World *)a2, a3);
  v6 = (char)result;
  v9 = (unsigned __int8)result & 7;
  if ( v9 != 7 )
  {
    result = (_DWORD *)BlockPistonBase::isIndirectlyPowered(this, (World *)a2, a3, (unsigned __int8)result & 7);
    if ( result != nullptr )
    {
      if ( (v6 & 8) == 0 )
      {
        result = operator+(&v12, (int *)a3, &g_DirectionCoord[3 * v9]);
        v10 = 13;
        while ( (unsigned int)(v13 - 1) <= 0xFD )
        {
          BlockID = World::getBlockID((World *)a2, (const WCoord *)&v12);
          v8 = BlockID;
          if ( BlockID == 0 )
            return (_DWORD *)BlockTickMgr::addBlockEvent(a2[34], a3, *((_DWORD *)this + 8), 0, v9);
          result = (_DWORD *)sub_29FE48(BlockID, (World *)a2, (WCoord *)&v12, 1);
          if ( result == nullptr )
            return result;
          result = (_DWORD *)DefManager::getBlockDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, v8);
          if ( result[5] == 1 )
            return (_DWORD *)BlockTickMgr::addBlockEvent(a2[34], a3, *((_DWORD *)this + 8), 0, v9);
          if ( --v10 == 0 )
            return result;
          result = operator+(v15, &v12, &g_DirectionCoord[3 * v9]);
          v12 = v15[0];
          v13 = v15[1];
          v14 = v15[2];
        }
      }
    }
    else if ( (v6 & 8) != 0 )
    {
      World::setBlockData((World *)a2, a3, v9, 2);
      return (_DWORD *)BlockTickMgr::addBlockEvent(a2[34], a3, *((_DWORD *)this + 8), 1, v9);
    }
  }
  return result;
}


//======================================================================
// BlockPistonBase::onBlockPlacedBy(World *,WCoord const&,ClientPlayer *)
// address: 0x002A0328   size: 0x8A (138 bytes)
//======================================================================
_DWORD *__fastcall BlockPistonBase::onBlockPlacedBy(
        BlockPistonBase *this,
        World *a2,
        const WCoord *a3,
        ClientPlayer *a4)
{
  int v5; // r7
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v11; // [sp+8h] [bp-24h]
  int v13; // [sp+10h] [bp-1Ch]
  _DWORD v15[4]; // [sp+1Ch] [bp-10h] BYREF

  v5 = 100 * *(_DWORD *)a3;
  v11 = *((_DWORD *)a3 + 1);
  v13 = *((_DWORD *)a3 + 2);
  ClientActor::getPosition((ClientActor *)v15);
  v6 = *((_DWORD *)a4 + 17);
  if ( ((v15[0] - v5 + ((v15[0] - v5) >> 31)) ^ ((v15[0] - v5) >> 31)) > 199
    || ((v15[2] - 100 * v13 + ((v15[2] - 100 * v13) >> 31)) ^ ((v15[2] - 100 * v13) >> 31)) > 199
    || (v7 = v15[1] + 182 - *(_DWORD *)(v6 + 28), v8 = 5, v7 - 100 * v11 <= 200) && (v8 = 4, 100 * v11 - v7 <= 0) )
  {
    v8 = RotateYaw2PlaceDir(*(float *)(v6 + 4));
  }
  World::setBlockData(a2, a3, v8, 2);
  return BlockPistonBase::updatePistonState(this, (BlockTickMgr **)a2, a3);
}


//======================================================================
// BlockPistonBase::onNeighborBlockChange(World *,WCoord const&,int)
// address: 0x002A03B2   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall BlockPistonBase::onNeighborBlockChange(
        BlockPistonBase *this,
        BlockTickMgr **a2,
        const WCoord *a3,
        int a4)
{
  return BlockPistonBase::updatePistonState(this, a2, a3);
}


//======================================================================
// BlockPistonBase::onBlockAdded(World *,WCoord const&)
// address: 0x002A03BA   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall BlockPistonBase::onBlockAdded(BlockPistonBase *this, BlockTickMgr **a2, const WCoord *a3)
{
  return BlockPistonBase::updatePistonState(this, a2, a3);
}


//======================================================================
// BlockPistonBase::onBlockEventReceived(World *,WCoord const&,int,int)
// address: 0x002A03C4   size: 0x28E (654 bytes)
//======================================================================
int __fastcall BlockPistonBase::onBlockEventReceived(
        BlockPistonBase *this,
        World *a2,
        const WCoord *a3,
        int a4,
        int a5)
{
  int v7; // r5
  EffectManager *v8; // r6
  int *v9; // r5
  const void *Container; // r0
  WorldPiston *v11; // r0
  WorldPiston *v12; // r6
  int v13; // r3
  int v14; // r1
  const void *v15; // r0
  WorldPiston *v16; // r0
  World *v17; // r0
  const WCoord *v18; // r1
  EffectManager *v19; // r6
  WorldPiston *v20; // r5
  float v22; // [sp+0h] [bp-44h]
  float v23; // [sp+0h] [bp-44h]
  BlockPistonBase *BlockID; // [sp+14h] [bp-30h]
  struct __class_type_info *lpstype; // [sp+1Ch] [bp-28h]
  struct __class_type_info *lpstypea; // [sp+1Ch] [bp-28h]
  WorldContainerMgr *s2da; // [sp+20h] [bp-24h]
  ptrdiff_t s2d; // [sp+20h] [bp-24h]
  _DWORD v31[3]; // [sp+28h] [bp-1Ch] BYREF
  int v32[4]; // [sp+34h] [bp-10h] BYREF

  if ( BlockPistonBase::isIndirectlyPowered(this, a2, a3, a5) == 0 )
  {
    if ( a4 == 0 )
      return 0;
    v7 = 1;
    if ( a4 != 1 )
      return v7;
    lpstype = *((struct __class_type_info **)a2 + 32);
    v9 = &g_DirectionCoord[3 * a5];
    operator+(v32, (int *)a3, v9);
    Container = (const void *)WorldContainerMgr::getContainer(lpstype, (const WCoord *)v32);
    if ( Container != nullptr )
    {
      v11 = (WorldPiston *)_dynamic_cast(
                             Container,
                             (const struct __class_type_info *)&`typeinfo for'WorldContainer,
                             (const struct __class_type_info *)&`typeinfo for'WorldPiston,
                             0);
      if ( v11 != nullptr )
        WorldPiston::clearPistonTileEntity(v11);
    }
    World::setBlockAll(a2, a3, 841, a5, 3);
    s2da = *((WorldContainerMgr **)a2 + 32);
    v12 = (WorldPiston *)operator new(0x50u);
    WorldPiston::WorldPiston(v12, a3, *((_DWORD *)this + 8), a5, a5, false, true);
    WorldContainerMgr::spawnContainer(s2da, v12, true);
    if ( *((_BYTE *)this + 60) == 0 )
      goto LABEL_24;
    v13 = 2 * v9[2];
    v14 = 2 * v9[1];
    v32[0] = 2 * *v9;
    v32[1] = v14;
    v32[2] = v13;
    operator+(v31, (int *)a3, v32);
    BlockID = (BlockPistonBase *)World::getBlockID(a2, (const WCoord *)v31);
    s2d = World::getBlockData(a2, (const WCoord *)v31);
    if ( BlockID == (BlockPistonBase *)((char *)&stru_348.st_name + 1) )
    {
      v15 = (const void *)WorldContainerMgr::getContainer(*((WorldContainerMgr **)a2 + 32), (const WCoord *)v31);
      if ( v15 != nullptr )
      {
        v16 = (WorldPiston *)_dynamic_cast(
                               v15,
                               (const struct __class_type_info *)&`typeinfo for'WorldContainer,
                               (const struct __class_type_info *)&`typeinfo for'WorldPiston,
                               0);
        if ( v16 != nullptr && *((_DWORD *)v16 + 13) == a5 && *((_BYTE *)v16 + 56) != 0 )
        {
          WorldPiston::clearPistonTileEntity(v16);
LABEL_26:
          v7 = 1;
          v19 = (EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton;
          BlockCenterCoord(v32, a3);
          v23 = (float)(GenRandomFloat() * 0.15) + 0.6;
          EffectManager::playSound(v19, (const WCoord *)v32, "tile.piston.in", 0.5, v23, true);
          return v7;
        }
      }
    }
    else if ( (int)BlockID <= 0 )
    {
      goto LABEL_24;
    }
    if ( sub_29FE48((int)BlockID, a2, (WCoord *)v31, 0) != 0
      && (*(_DWORD *)(DefManager::getBlockDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, (int)BlockID) + 20) == 0
       || (unsigned int)BlockID - 718 <= 1) )
    {
      operator+(v32, (int *)a3, v9);
      World::setBlockAll(a2, (const WCoord *)v32, 841, s2d, 3);
      lpstypea = *((struct __class_type_info **)a2 + 32);
      v20 = (WorldPiston *)operator new(0x50u);
      WorldPiston::WorldPiston(v20, (const WCoord *)v32, (int)BlockID, s2d, a5, false, false);
      WorldContainerMgr::spawnContainer(lpstypea, v20, true);
      v17 = a2;
      v18 = (const WCoord *)v31;
      goto LABEL_25;
    }
LABEL_24:
    operator+(v32, (int *)a3, v9);
    v17 = a2;
    v18 = (const WCoord *)v32;
LABEL_25:
    World::setBlockAir(v17, v18);
    goto LABEL_26;
  }
  if ( a4 == 1 )
  {
    World::setBlockData(a2, a3, a5 | 8, 2);
  }
  else
  {
    v7 = 1;
    if ( a4 != 0 )
      return v7;
    v7 = BlockPistonBase::tryExtend(this, (WorldContainerMgr **)a2, a3, a5);
    if ( v7 != 0 )
    {
      World::setBlockData(a2, a3, a5 | 8, 2);
      v8 = (EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton;
      BlockCenterCoord(v32, a3);
      v22 = (float)(GenRandomFloat() * 0.25) + 0.6;
      EffectManager::playSound(v8, (const WCoord *)v32, "tile.piston.out", 0.5, v22, true);
      return v7;
    }
  }
  return 0;
}


//======================================================================
// BlockPistonBase::init(int)
// address: 0x002A0684   size: 0x1C (28 bytes)
//======================================================================
int __fastcall BlockPistonBase::init(BlockPistonBase *this, int a2)
{
  int result; // r0

  result = ModelBlockMaterial::init(this, a2);
  *((_BYTE *)this + 60) = a2 == 718;
  return result;
}


//======================================================================
// BlockPistonBase::newObject(void)
// address: 0x002C1E24   size: 0x1C (28 bytes)
//======================================================================
ModelBlockMaterial *__fastcall BlockPistonBase::newObject(BlockPistonBase *this)
{
  ModelBlockMaterial *v1; // r4

  v1 = (ModelBlockMaterial *)operator new(0x40u);
  ModelBlockMaterial::ModelBlockMaterial(v1);
  *(_DWORD *)v1 = &off_45C8B8;
  return v1;
}

