// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockSpringBase

//======================================================================
// BlockSpringBase::newObject(void)
// address: 0x002C1820   size: 0x1C (28 bytes)
//======================================================================
ModelBlockMaterial *__fastcall BlockSpringBase::newObject(BlockSpringBase *this)
{
  ModelBlockMaterial *v1; // r4

  v1 = (ModelBlockMaterial *)operator new(0x3Cu);
  ModelBlockMaterial::ModelBlockMaterial(v1);
  *(_DWORD *)v1 = &off_45F9D8;
  return v1;
}


//======================================================================
// BlockSpringBase::getGeomName(void)
// address: 0x002CC314   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall BlockSpringBase::getGeomName(BlockSpringBase *this)
{
  return "spring";
}


//======================================================================
// BlockSpringBase::isOpaqueCube(void)
// address: 0x002CC320   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BlockSpringBase::isOpaqueCube(BlockSpringBase *this)
{
  return 0;
}


//======================================================================
// BlockSpringBase::onBlockActivated(World *,WCoord const&,DirectionType,ClientPlayer *)
// address: 0x002CC324   size: 0x4 (4 bytes)
//======================================================================
int BlockSpringBase::onBlockActivated()
{
  return 0;
}


//======================================================================
// BlockSpringBase::getProtoBlockGeomID(int *,int *)
// address: 0x002CC328   size: 0xA (10 bytes)
//======================================================================
int __fastcall BlockSpringBase::getProtoBlockGeomID(BlockSpringBase *this, int *a2, int *a3)
{
  *a2 = 2;
  *a3 = 2;
  return 1;
}


//======================================================================
// BlockSpringBase::~BlockSpringBase()
// address: 0x002CC334   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN15BlockSpringBaseD1Ev'
void __fastcall BlockSpringBase::~BlockSpringBase(BlockSpringBase *this)
{
  *(_DWORD *)this = &off_45F9D8;
  ModelBlockMaterial::~ModelBlockMaterial(this);
}


//======================================================================
// BlockSpringBase::~BlockSpringBase()
// address: 0x002CC350   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BlockSpringBase::~BlockSpringBase(BlockSpringBase *this)
{
  BlockSpringBase::~BlockSpringBase(this);
  operator delete(this);
}


//======================================================================
// BlockSpringBase::getBlockGeomID(int *,int *,Section *,WCoord const&)
// address: 0x002CC362   size: 0x48 (72 bytes)
//======================================================================
int __fastcall BlockSpringBase::getBlockGeomID(int a1, unsigned int *a2, int *a3, int a4, _DWORD *a5)
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
// BlockSpringBase::pushActors(World *,WCoord const&,int,int)
// address: 0x002CC3F4   size: 0x172 (370 bytes)
//======================================================================
void __fastcall BlockSpringBase::pushActors(BlockSpringBase *this, World *a2, const WCoord *a3, int a4, int a5)
{
  int v5; // r5
  int v6; // r0
  int v7; // r6
  int v8; // r0
  int *v9; // r7
  int v10; // r3
  int v11; // r0
  int v12; // r3
  int v13; // r6
  int v14; // r4
  int v15; // r3
  int v16; // r5
  int v17; // r6
  int v18; // r12
  int v19; // r3
  int v20; // r5
  int v21; // r4
  int v22; // r3
  float v23; // r0
  float v24; // r3
  unsigned int i; // r7
  float *v26; // r6
  int v27; // [sp+0h] [bp-44h]
  int v28; // [sp+4h] [bp-40h]
  int v29; // [sp+8h] [bp-3Ch]
  void *v31; // [sp+10h] [bp-34h] BYREF
  _BYTE *v32; // [sp+14h] [bp-30h]
  int v33; // [sp+18h] [bp-2Ch]
  float v34; // [sp+1Ch] [bp-28h] BYREF
  float v35; // [sp+20h] [bp-24h]
  float v36; // [sp+24h] [bp-20h]
  int v37; // [sp+28h] [bp-1Ch] BYREF
  int v38; // [sp+2Ch] [bp-18h]
  int v39; // [sp+30h] [bp-14h]
  int v40; // [sp+34h] [bp-10h]
  int v41; // [sp+38h] [bp-Ch]
  int v42; // [sp+3Ch] [bp-8h]

  v5 = 100 * *(_DWORD *)a3;
  v6 = *((_DWORD *)a3 + 1);
  v40 = 100;
  v41 = 100;
  v7 = 100 * v6;
  v8 = *((_DWORD *)a3 + 2);
  v28 = v7;
  v42 = 100;
  v29 = 100 * v8;
  v38 = v7;
  v9 = &g_DirectionCoord[3 * a4];
  v10 = v9[1];
  v39 = 100 * v8;
  v11 = v10 * a5;
  v12 = v9[2] * a5;
  v13 = *v9;
  v37 = v5;
  v31 = (void *)(a5 * v13);
  v32 = (_BYTE *)v11;
  v33 = v12;
  operator+(&v34, (int *)a3, (int *)&v31);
  v27 = 100 * LODWORD(v35);
  v14 = 100 * LODWORD(v36);
  v15 = 100 * LODWORD(v34);
  if ( 100 * LODWORD(v34) > v5 )
    v15 = v5;
  v16 = 100 * LODWORD(v35);
  v37 = v15;
  if ( v27 > v28 )
    v16 = v28;
  v38 = v16;
  v17 = 100 * LODWORD(v36);
  if ( v14 > v29 )
    v17 = v29;
  v39 = v17;
  v18 = v15 + 100;
  if ( v15 + 100 < 100 * LODWORD(v34) + 100 )
    v18 = 100 * LODWORD(v34) + 100;
  v40 = v18 - v15;
  v19 = v16 + 100;
  if ( v16 + 100 < v27 + 100 )
    v19 = v27 + 100;
  v20 = v19 - v16;
  v21 = v14 + 100;
  v22 = v17 + 100;
  v41 = v20;
  if ( v17 + 100 < v21 )
    v22 = v21;
  v31 = nullptr;
  v32 = nullptr;
  v33 = 0;
  v42 = v22 - v17;
  World::getActorsInBox(a2, &v31, &v37);
  if ( v31 != v32 )
  {
    v23 = (float)v9[2] * 200.0;
    v24 = (float)v9[1] * 200.0;
    v34 = (float)*v9 * 200.0;
    v35 = v24;
    v36 = v23;
    for ( i = 0; i < (v32 - (_BYTE *)v31) >> 2; ++i )
    {
      v26 = *(float **)(*((_DWORD *)v31 + i) + 68);
      ActorLocoMotion::doMoveStep((ActorLocoMotion *)v26, (const Ogre::Vector3 *)&v34);
      v26[18] = v26[18] + v34;
      v26[19] = v26[19] + v35;
      v26[20] = v26[20] + v36;
    }
  }
  if ( v31 != nullptr )
    operator delete(v31);
}


//======================================================================
// BlockSpringBase::tryExtend(World *,WCoord const&,int)
// address: 0x002CC570   size: 0x1EE (494 bytes)
//======================================================================
int __fastcall BlockSpringBase::tryExtend(BlockSpringBase *this, World *a2, const WCoord *a3, int a4)
{
  int v6; // r2
  int BlockID; // r0
  int v9; // r6
  _DWORD *Material; // r0
  int v11; // r3
  int v12; // r2
  int v13; // r3
  int v14; // r2
  int v15; // r3
  int v16; // r6
  ActorFlyingBlock *v17; // r5
  float *v18; // r6
  float v19; // r0
  __int64 v20; // r0
  int v21; // r3
  int v22; // r2
  int i; // [sp+10h] [bp-44h]
  int v24; // [sp+10h] [bp-44h]
  int BlockData; // [sp+14h] [bp-40h]
  float v26; // [sp+14h] [bp-40h]
  int *v27; // [sp+18h] [bp-3Ch]
  int *v30; // [sp+24h] [bp-30h]
  int v31; // [sp+2Ch] [bp-28h] BYREF
  int v32; // [sp+30h] [bp-24h]
  int v33; // [sp+34h] [bp-20h]
  int v34; // [sp+38h] [bp-1Ch] BYREF
  int v35; // [sp+3Ch] [bp-18h]
  int v36; // [sp+40h] [bp-14h]
  _DWORD v37[4]; // [sp+44h] [bp-10h] BYREF

  v27 = &g_DirectionCoord[3 * a4];
  operator+(&v31, (int *)a3, v27);
  v6 = 0;
  for ( i = 0; ; ++i )
  {
    if ( (unsigned int)(v32 - 1) > 0xFD )
      return 0;
    BlockID = World::getBlockID(a2, (const WCoord *)&v31, v6, v32 - 1);
    v9 = BlockID;
    if ( BlockID == 0 )
      goto LABEL_10;
    if ( sub_2CC3AC(BlockID) == 0 )
      return 0;
    Material = (_DWORD *)BlockMaterialMgr::getMaterial(
                           (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                           v9);
    if ( *(_DWORD *)(Material[9] + 20) == 1 )
      break;
    if ( i == 3 )
      return 0;
    operator+(v37, &v31, v27);
    v6 = v37[1];
    v31 = v37[0];
    v32 = v37[1];
    v33 = v37[2];
  }
  (*(void (__fastcall **)(_DWORD *, World *, int *, _DWORD, int, int))(*Material + 180))(
    Material,
    a2,
    &v31,
    0,
    1,
    1065353216);
  World::setBlockAir(a2, (const WCoord *)&v31);
LABEL_10:
  operator+(&v34, (int *)a3, v27);
  BlockSpringBase::pushActors(this, a2, (const WCoord *)&v34, a4, i);
  v11 = a4 + 1;
  if ( (a4 & 1) != 0 )
    v11 = a4 - 1;
  v30 = &g_DirectionCoord[3 * v11];
  while ( 1 )
  {
    v12 = v31;
    v13 = *(_DWORD *)a3;
    if ( v31 == *(_DWORD *)a3 )
    {
      v12 = *((_DWORD *)a3 + 1);
      if ( v32 == v12 )
      {
        v13 = v33;
        if ( v33 == *((_DWORD *)a3 + 2) )
          break;
      }
    }
    v24 = World::getBlockID(a2, (const WCoord *)&v31, v12, v13);
    BlockData = World::getBlockData(a2, (const WCoord *)&v31, v14, v15);
    if ( v24 != 0 )
    {
      v16 = 24;
      if ( *((_DWORD *)this + 8) == 842 )
        v16 = 12;
      v17 = (ActorFlyingBlock *)operator new(0xD0u);
      ActorFlyingBlock::ActorFlyingBlock(v17, a2, (const WCoord *)&v31, v24, BlockData, v16);
      v18 = *((float **)v17 + 17);
      v26 = (float)v27[2] * 100.0;
      v19 = (float)*v27;
      v18[19] = (float)v27[1] * 100.0;
      v18[20] = v26;
      v18[18] = v19 * 100.0;
      LODWORD(v20) = *((_DWORD *)a2 + 33);
      HIDWORD(v20) = v17;
      ClientActorMgr::spawnActor(v20, 1);
    }
    operator+(&v34, &v31, v30);
    if ( v34 == *(_DWORD *)a3
      && (v21 = *((_DWORD *)a3 + 1), v35 == v21)
      && (v22 = *((_DWORD *)a3 + 2), v36 == v22)
      && World::getBlockID(a2, (const WCoord *)&v34, v22, v21) == *((_DWORD *)this + 8) )
    {
      World::setBlockAll(a2, (const WCoord *)&v31, 843, a4, 4);
    }
    else
    {
      World::setBlockAir(a2, (const WCoord *)&v31);
    }
    v31 = v34;
    v33 = v36;
    v32 = v35;
  }
  return 1;
}


//======================================================================
// BlockSpringBase::isIndirectlyPowered(World *,WCoord const&,int)
// address: 0x002CC774   size: 0x4C (76 bytes)
//======================================================================
int __fastcall BlockSpringBase::isIndirectlyPowered(BlockSpringBase *this, World *a2, const WCoord *a3, int a4)
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
      if ( World::getIndirectPowerLevelTo(a2, (const WCoord *)v10, v8) > 0 )
        break;
    }
    if ( ++v6 == 6 )
      return 0;
  }
  return 1;
}


//======================================================================
// BlockSpringBase::updateSpringState(World *,WCoord const&)
// address: 0x002CC7C4   size: 0xE0 (224 bytes)
//======================================================================
int __fastcall BlockSpringBase::updateSpringState(BlockSpringBase *this, BlockTickMgr **a2, const WCoord *a3, int a4)
{
  int result; // r0
  char v7; // r6
  int v8; // r2
  int BlockID; // r0
  int v10; // r7
  int v11; // [sp+8h] [bp-2Ch]
  int v12; // [sp+Ch] [bp-28h]
  int v14; // [sp+18h] [bp-1Ch] BYREF
  int v15; // [sp+1Ch] [bp-18h]
  int v16; // [sp+20h] [bp-14h]
  _DWORD v17[4]; // [sp+24h] [bp-10h] BYREF

  result = World::getBlockData((World *)a2, a3, (int)a3, a4);
  v7 = result;
  v11 = result & 7;
  if ( v11 != 7 )
  {
    result = BlockSpringBase::isIndirectlyPowered(this, (World *)a2, a3, result & 7);
    if ( result != 0 )
    {
      if ( (v7 & 8) == 0 )
      {
        result = (int)operator+(&v14, (int *)a3, &g_DirectionCoord[3 * v11]);
        v12 = 4;
        while ( (unsigned int)(v15 - 1) <= 0xFD )
        {
          BlockID = World::getBlockID((World *)a2, (const WCoord *)&v14, v8, v15 - 1);
          v10 = BlockID;
          if ( BlockID == 0 )
            return BlockTickMgr::addBlockEvent(a2[34], a3, *((_DWORD *)this + 8), 0, v11);
          result = sub_2CC3AC(BlockID);
          if ( result == 0 )
            return result;
          result = DefManager::getBlockDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, v10);
          if ( *(_DWORD *)(result + 20) == 1 )
            return BlockTickMgr::addBlockEvent(a2[34], a3, *((_DWORD *)this + 8), 0, v11);
          if ( --v12 == 0 )
            return result;
          result = (int)operator+(v17, &v14, &g_DirectionCoord[3 * v11]);
          v14 = v17[0];
          v15 = v17[1];
          v16 = v17[2];
        }
      }
    }
    else if ( (v7 & 8) != 0 )
    {
      World::setBlockData((World *)a2, a3, v11, 2);
      return BlockTickMgr::addBlockEvent(a2[34], a3, *((_DWORD *)this + 8), 1, v11);
    }
  }
  return result;
}


//======================================================================
// BlockSpringBase::onBlockPlacedBy(World *,WCoord const&,ClientPlayer *)
// address: 0x002CC8AC   size: 0xB6 (182 bytes)
//======================================================================
int __fastcall BlockSpringBase::onBlockPlacedBy(BlockSpringBase *this, World *a2, const WCoord *a3, ClientPlayer *a4)
{
  int v5; // r7
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r0
  int v10; // r3
  int v13; // [sp+8h] [bp-24h]
  int v15; // [sp+10h] [bp-1Ch]
  _DWORD v17[4]; // [sp+1Ch] [bp-10h] BYREF

  v5 = 100 * *(_DWORD *)a3;
  v13 = *((_DWORD *)a3 + 1);
  v15 = *((_DWORD *)a3 + 2);
  ClientActor::getPosition((ClientActor *)v17);
  v6 = *((_DWORD *)a4 + 17);
  if ( ((v17[0] - v5 + ((v17[0] - v5) >> 31)) ^ ((v17[0] - v5) >> 31)) > 199
    || ((v17[2] - 100 * v15 + ((v17[2] - 100 * v15) >> 31)) ^ ((v17[2] - 100 * v15) >> 31)) > 199
    || (v7 = v17[1] + 182 - *(_DWORD *)(v6 + 28), v8 = 5, v7 - 100 * v13 <= 200) && (v8 = 4, 100 * v13 - v7 <= 0) )
  {
    v9 = (int)(float)((float)((float)(*(float *)(v6 + 4) + 180.0) / 90.0) + 0.5) & 3;
    v8 = 2;
    if ( v9 != 0 )
    {
      if ( v9 == 1 )
      {
        v8 = 0;
      }
      else
      {
        v8 = 1;
        if ( v9 == 2 )
          v8 = 3;
      }
    }
  }
  World::setBlockData(a2, a3, v8, 2);
  return BlockSpringBase::updateSpringState(this, (BlockTickMgr **)a2, a3, v10);
}


//======================================================================
// BlockSpringBase::onNeighborBlockChange(World *,WCoord const&,int)
// address: 0x002CC96C   size: 0x8 (8 bytes)
//======================================================================
int __fastcall BlockSpringBase::onNeighborBlockChange(
        BlockSpringBase *this,
        BlockTickMgr **a2,
        const WCoord *a3,
        int a4)
{
  return BlockSpringBase::updateSpringState(this, a2, a3, a4);
}


//======================================================================
// BlockSpringBase::onBlockAdded(World *,WCoord const&)
// address: 0x002CC974   size: 0x8 (8 bytes)
//======================================================================
int __fastcall BlockSpringBase::onBlockAdded(BlockSpringBase *this, BlockTickMgr **a2, const WCoord *a3, int a4)
{
  return BlockSpringBase::updateSpringState(this, a2, a3, a4);
}


//======================================================================
// BlockSpringBase::onBlockEventReceived(World *,WCoord const&,int,int)
// address: 0x002CC97C   size: 0xEC (236 bytes)
//======================================================================
int __fastcall BlockSpringBase::onBlockEventReceived(
        BlockSpringBase *this,
        World *a2,
        const WCoord *a3,
        int a4,
        int a5)
{
  int v7; // r4
  EffectManager *v8; // r7
  EffectManager *v9; // r6
  float v11; // [sp+0h] [bp-2Ch]
  float v12; // [sp+0h] [bp-2Ch]
  _DWORD v15[4]; // [sp+1Ch] [bp-10h] BYREF

  if ( BlockSpringBase::isIndirectlyPowered(this, a2, a3, a5) != 0 )
  {
    if ( a4 == 1 )
    {
      World::setBlockData(a2, a3, a5 | 8, 2);
    }
    else
    {
      v7 = 1;
      if ( a4 != 0 )
        return v7;
      v7 = BlockSpringBase::tryExtend(this, a2, a3, a5);
      if ( v7 != 0 )
      {
        World::setBlockData(a2, a3, a5 | 8, 2);
        v8 = (EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton;
        BlockCenterCoord(v15, a3);
        v11 = (float)(GenRandomFloat() * 0.25) + 0.6;
        EffectManager::playSound(v8, (const WCoord *)v15, "tile.piston.out", 0.5, v11, true);
        return v7;
      }
    }
  }
  else if ( a4 != 0 )
  {
    v7 = 1;
    if ( a4 == 1 )
    {
      operator+(v15, (int *)a3, &g_DirectionCoord[3 * a5]);
      World::setBlockAir(a2, (const WCoord *)v15);
      v9 = (EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton;
      BlockCenterCoord(v15, a3);
      v12 = (float)(GenRandomFloat() * 0.15) + 0.6;
      EffectManager::playSound(v9, (const WCoord *)v15, "tile.piston.in", 0.5, v12, true);
    }
    return v7;
  }
  return 0;
}


//======================================================================
// BlockSpringBase::init(int)
// address: 0x002CCA84   size: 0x8 (8 bytes)
//======================================================================
void __fastcall BlockSpringBase::init(__int64 this, int a2)
{
  ModelBlockMaterial::init(this, a2);
}

