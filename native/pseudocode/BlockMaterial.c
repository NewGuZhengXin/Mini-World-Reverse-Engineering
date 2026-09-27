// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockMaterial

//======================================================================
// BlockMaterial::isContainerBlock(void)
// address: 0x00264FA8   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BlockMaterial::isContainerBlock(BlockMaterial *this)
{
  return 0;
}


//======================================================================
// BlockMaterial::getTickRandomly(void)
// address: 0x002657EE   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BlockMaterial::getTickRandomly(BlockMaterial *this)
{
  return 0;
}


//======================================================================
// BlockMaterial::update(unsigned int)
// address: 0x002BE06C   size: 0x2 (2 bytes)
//======================================================================
void __fastcall BlockMaterial::update(BlockMaterial *this, unsigned int a2)
{
  ;
}


//======================================================================
// BlockMaterial::getGeomName(void)
// address: 0x002BE070   size: 0x6 (6 bytes)
//======================================================================
void *__fastcall BlockMaterial::getGeomName(BlockMaterial *this)
{
  return &unk_3FB8EA;
}


//======================================================================
// BlockMaterial::getCollisionBoundingBox(CollideAABB &,World *,WCoord const&)
// address: 0x002BE07C   size: 0x24 (36 bytes)
//======================================================================
int __fastcall BlockMaterial::getCollisionBoundingBox(int a1, _DWORD *a2, int a3, _DWORD *a4)
{
  int v4; // r0
  int v5; // r5

  v4 = a4[1];
  v5 = a4[2];
  *a2 = 100 * *a4;
  a2[2] = 100 * v5;
  a2[1] = 100 * v4;
  a2[3] = 100;
  a2[4] = 100;
  a2[5] = 100;
  return 1;
}


//======================================================================
// BlockMaterial::createBlockMesh(ClientSection *,WCoord const&,SectionSubMesh *)
// address: 0x002BE0A0   size: 0x2 (2 bytes)
//======================================================================
void BlockMaterial::createBlockMesh()
{
  ;
}


//======================================================================
// BlockMaterial::createDecalMesh(SectionSubMesh *,ClientSection *,WCoord const&)
// address: 0x002BE0A2   size: 0x2 (2 bytes)
//======================================================================
void BlockMaterial::createDecalMesh()
{
  ;
}


//======================================================================
// BlockMaterial::createBlockProtoMesh(BlockInstanceData *)
// address: 0x002BE0A4   size: 0x4 (4 bytes)
//======================================================================
int BlockMaterial::createBlockProtoMesh()
{
  return 0;
}


//======================================================================
// BlockMaterial::getDestroyTexture(Block *,BlockTexDesc &)
// address: 0x002BE0A8   size: 0x4 (4 bytes)
//======================================================================
int BlockMaterial::getDestroyTexture()
{
  return 0;
}


//======================================================================
// BlockMaterial::coverNeighbor(World *,WCoord const&,DirectionType)
// address: 0x002BE0AC   size: 0x4 (4 bytes)
//======================================================================
int BlockMaterial::coverNeighbor()
{
  return 0;
}


//======================================================================
// BlockMaterial::isOpaque(void)
// address: 0x002BE0B0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BlockMaterial::isOpaque(BlockMaterial *this)
{
  return 0;
}


//======================================================================
// BlockMaterial::isOpaqueCube(void)
// address: 0x002BE0B4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BlockMaterial::isOpaqueCube(BlockMaterial *this)
{
  return 0;
}


//======================================================================
// BlockMaterial::isSolid(void)
// address: 0x002BE0B8   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BlockMaterial::isSolid(BlockMaterial *this)
{
  return 1;
}


//======================================================================
// BlockMaterial::isLiquid(void)
// address: 0x002BE0BC   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BlockMaterial::isLiquid(BlockMaterial *this)
{
  return 0;
}


//======================================================================
// BlockMaterial::isReplaceable(void)
// address: 0x002BE0C0   size: 0xC (12 bytes)
//======================================================================
unsigned int __fastcall BlockMaterial::isReplaceable(BlockMaterial *this)
{
  return (unsigned int)((*(int *)(*((_DWORD *)this + 9) + 28) >> 31) - *(_DWORD *)(*((_DWORD *)this + 9) + 28)) >> 31;
}


//======================================================================
// BlockMaterial::renderAsNormalBlock(void)
// address: 0x002BE0CC   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BlockMaterial::renderAsNormalBlock(BlockMaterial *this)
{
  return 0;
}


//======================================================================
// BlockMaterial::canProvidePower(void)
// address: 0x002BE0D0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BlockMaterial::canProvidePower(BlockMaterial *this)
{
  return 0;
}


//======================================================================
// BlockMaterial::hasSolidTopSurface(int)
// address: 0x002BE0D4   size: 0x1E (30 bytes)
//======================================================================
int __fastcall BlockMaterial::hasSolidTopSurface(BlockMaterial *this, int a2)
{
  int result; // r0

  if ( (*(int (__fastcall **)(BlockMaterial *, int))(*(_DWORD *)this + 60))(this, a2) == 0 )
    return 0;
  result = (*(int (__fastcall **)(BlockMaterial *))(*(_DWORD *)this + 64))(this);
  if ( result == 0 )
    return 0;
  return result;
}


//======================================================================
// BlockMaterial::isAssociatedBlockID(int)
// address: 0x002BE0F2   size: 0xA (10 bytes)
//======================================================================
bool __fastcall BlockMaterial::isAssociatedBlockID(BlockMaterial *this, int a2)
{
  return *((_DWORD *)this + 8) == a2;
}


//======================================================================
// BlockMaterial::canBlocksMovement(World *,WCoord const&)
// address: 0x002BE0FC   size: 0xC (12 bytes)
//======================================================================
bool __fastcall BlockMaterial::canBlocksMovement(int a1)
{
  return *(_DWORD *)(*(_DWORD *)(a1 + 36) + 12) == 1;
}


//======================================================================
// BlockMaterial::blockTick(World *,WCoord const&)
// address: 0x002BE108   size: 0x2 (2 bytes)
//======================================================================
void BlockMaterial::blockTick()
{
  ;
}


//======================================================================
// BlockMaterial::randomDisplayTick(ClientWorld *,WCoord const&)
// address: 0x002BE10A   size: 0x2 (2 bytes)
//======================================================================
void BlockMaterial::randomDisplayTick()
{
  ;
}


//======================================================================
// BlockMaterial::tickRate(void)
// address: 0x002BE10C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BlockMaterial::tickRate(BlockMaterial *this)
{
  return 10;
}


//======================================================================
// BlockMaterial::canTickImmediate(void)
// address: 0x002BE110   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BlockMaterial::canTickImmediate(BlockMaterial *this)
{
  return 1;
}


//======================================================================
// BlockMaterial::onBlockAdded(World *,WCoord const&)
// address: 0x002BE114   size: 0x2 (2 bytes)
//======================================================================
void BlockMaterial::onBlockAdded()
{
  ;
}


//======================================================================
// BlockMaterial::onBlockRemoved(World *,WCoord const&,int,int)
// address: 0x002BE116   size: 0x2 (2 bytes)
//======================================================================
void BlockMaterial::onBlockRemoved()
{
  ;
}


//======================================================================
// BlockMaterial::onBlockPlaced(World *,WCoord const&,DirectionType,float,float,float,int)
// address: 0x002BE118   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BlockMaterial::onBlockPlaced(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return a8;
}


//======================================================================
// BlockMaterial::onBlockPlacedBy(World *,WCoord const&,ClientPlayer *)
// address: 0x002BE11C   size: 0x2 (2 bytes)
//======================================================================
void BlockMaterial::onBlockPlacedBy()
{
  ;
}


//======================================================================
// BlockMaterial::onBlockDestroyedByPlayer(World *,WCoord const&,int)
// address: 0x002BE11E   size: 0x2 (2 bytes)
//======================================================================
void BlockMaterial::onBlockDestroyedByPlayer()
{
  ;
}


//======================================================================
// BlockMaterial::onBlockActivated(World *,WCoord const&,DirectionType,ClientPlayer *)
// address: 0x002BE120   size: 0x4 (4 bytes)
//======================================================================
int BlockMaterial::onBlockActivated()
{
  return 0;
}


//======================================================================
// BlockMaterial::onBlockEventReceived(World *,WCoord const&,int,int)
// address: 0x002BE124   size: 0x4 (4 bytes)
//======================================================================
int BlockMaterial::onBlockEventReceived()
{
  return 0;
}


//======================================================================
// BlockMaterial::onActorCollidedWithBlock(World *,WCoord const&,ClientActor *)
// address: 0x002BE128   size: 0x2 (2 bytes)
//======================================================================
void BlockMaterial::onActorCollidedWithBlock()
{
  ;
}


//======================================================================
// BlockMaterial::onActorWalking(World *,WCoord const&,ClientActor *)
// address: 0x002BE12A   size: 0x2 (2 bytes)
//======================================================================
void BlockMaterial::onActorWalking()
{
  ;
}


//======================================================================
// BlockMaterial::onNeighborBlockChange(World *,WCoord const&,int)
// address: 0x002BE12C   size: 0x2 (2 bytes)
//======================================================================
void BlockMaterial::onNeighborBlockChange()
{
  ;
}


//======================================================================
// BlockMaterial::onFertilized(World *,WCoord const&,int)
// address: 0x002BE12E   size: 0x4 (4 bytes)
//======================================================================
int BlockMaterial::onFertilized()
{
  return 0;
}


//======================================================================
// BlockMaterial::canPlaceBlockOnSide(World *,WCoord const&,int)
// address: 0x002BE132   size: 0xC (12 bytes)
//======================================================================
int __fastcall BlockMaterial::canPlaceBlockOnSide(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 152))(a1);
}


//======================================================================
// BlockMaterial::canBlockStay(World *,WCoord const&)
// address: 0x002BE13E   size: 0x4 (4 bytes)
//======================================================================
int BlockMaterial::canBlockStay()
{
  return 1;
}


//======================================================================
// BlockMaterial::isProvidingStrongPower(World *,WCoord const&,DirectionType)
// address: 0x002BE142   size: 0x4 (4 bytes)
//======================================================================
int BlockMaterial::isProvidingStrongPower()
{
  return 0;
}


//======================================================================
// BlockMaterial::isProvidingWeakPower(World *,WCoord const&,DirectionType)
// address: 0x002BE146   size: 0x4 (4 bytes)
//======================================================================
int BlockMaterial::isProvidingWeakPower()
{
  return 0;
}


//======================================================================
// BlockMaterial::hasComparatorInputOverride(void)
// address: 0x002BE14A   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BlockMaterial::hasComparatorInputOverride(BlockMaterial *this)
{
  return 0;
}


//======================================================================
// BlockMaterial::getComparatorInputOverride(World *,WCoord const&,DirectionType)
// address: 0x002BE14E   size: 0x4 (4 bytes)
//======================================================================
int BlockMaterial::getComparatorInputOverride()
{
  return 0;
}


//======================================================================
// BlockMaterial::canPlaceBlockAt(World *,WCoord const&)
// address: 0x002BE1D8   size: 0x26 (38 bytes)
//======================================================================
int __fastcall BlockMaterial::canPlaceBlockAt(BlockMaterial *this, World *a2, const WCoord *a3)
{
  int BlockID; // r1
  int result; // r0
  int Material; // r0

  BlockID = World::getBlockID(a2, a3);
  result = 1;
  if ( BlockID != 0 )
  {
    Material = BlockMaterialMgr::getMaterial(
                 (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                 BlockID);
    return (*(int (__fastcall **)(int))(*(_DWORD *)Material + 52))(Material);
  }
  return result;
}


//======================================================================
// BlockMaterial::createCollideData(CollisionDetect *,World *,WCoord const&)
// address: 0x002BE370   size: 0x36 (54 bytes)
//======================================================================
int __fastcall BlockMaterial::createCollideData(BlockMaterial *this, CollisionDetect *a2, World *a3, const WCoord *a4)
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
  v8[1] = v5 + 100;
  v8[2] = v4 + 100;
  return CollisionDetect::addObstacle(a2, (const WCoord *)v7, (const WCoord *)v8);
}


//======================================================================
// BlockMaterial::~BlockMaterial()
// address: 0x002BE53C   size: 0x2E (46 bytes)
//======================================================================
// Alternative name is '_ZN13BlockMaterialD1Ev'
void __fastcall BlockMaterial::~BlockMaterial(BlockMaterial *this)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0

  *(_DWORD *)this = &off_45ECC8;
  v2 = *((_DWORD **)this + 11);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 11) = 0;
  }
  v3 = *((_DWORD **)this + 2);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)this + 2) = 0;
  }
}


//======================================================================
// BlockMaterial::~BlockMaterial()
// address: 0x002BE570   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BlockMaterial::~BlockMaterial(BlockMaterial *this)
{
  BlockMaterial::~BlockMaterial(this);
  operator delete(this);
}


//======================================================================
// BlockMaterial::init(int)
// address: 0x002BE69C   size: 0x74 (116 bytes)
//======================================================================
__int64 __fastcall BlockMaterial::init(__int64 this, int a2)
{
  int BlockDef; // r0
  int v4; // r3
  Ogre::FixedString *v5; // r0
  int v6; // r2
  BlockMaterialMgr *v7; // r7
  void *v8; // r1
  __int64 v10; // [sp+0h] [bp-Ch] BYREF
  int v11; // [sp+8h] [bp-4h]

  v10 = this;
  v11 = a2;
  *(_DWORD *)(this + 32) = HIDWORD(this);
  BlockDef = DefManager::getBlockDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, SHIDWORD(this));
  v4 = *(_DWORD *)this;
  *(_DWORD *)(this + 36) = BlockDef;
  v5 = (Ogre::FixedString *)(*(int (__fastcall **)(_DWORD))(v4 + 16))(this);
  if ( *(_BYTE *)v5 != 0 )
  {
    v7 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
    Ogre::FixedString::FixedString((Ogre::FixedString *)((char *)&v10 + 4), v5, v6);
    *(_DWORD *)(this + 40) = BlockMaterialMgr::getGeomTemplate(v7, (const Ogre::FixedString *)((char *)&v10 + 4));
    Ogre::FixedString::~FixedString((Ogre::FixedString **)&v10 + 1, v8);
    if ( *(_DWORD *)(this + 40) == 0 )
    {
      Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/BlockMaterial.cpp", (const char *)&word_30 + 1, 8, 0);
      Ogre::LogMessage((Ogre *)&unk_421AC3, (const char *)HIDWORD(this));
    }
  }
  else
  {
    *(_DWORD *)(this + 40) = *(unsigned __int8 *)v5;
  }
  return v10;
}


//======================================================================
// BlockMaterial::BlockMaterial(void)
// address: 0x002BE8F0   size: 0x1E (30 bytes)
//======================================================================
// Alternative name is '_ZN13BlockMaterialC1Ev'
void __fastcall BlockMaterial::BlockMaterial(BlockMaterial *this)
{
  *(_DWORD *)this = &off_45ECC8;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 7) = -1;
}


//======================================================================
// BlockMaterial::getBlockProtoMesh(void)
// address: 0x002BE914   size: 0x16 (22 bytes)
//======================================================================
int __fastcall BlockMaterial::getBlockProtoMesh(BlockMaterial *this)
{
  if ( *((_DWORD *)this + 11) == 0 )
    *((_DWORD *)this + 11) = (*(int (__fastcall **)(BlockMaterial *))(*(_DWORD *)this + 28))(this);
  return *((_DWORD *)this + 11);
}


//======================================================================
// BlockMaterial::blockMeshOutput(SectionSubMesh *,ClientSection *,Ogre::Material *)
// address: 0x002BE92A   size: 0x10 (16 bytes)
//======================================================================
SectionSubMesh *__fastcall BlockMaterial::blockMeshOutput(
        BlockMaterial *this,
        SectionSubMesh *a2,
        SectionMesh **a3,
        Ogre::Material *a4)
{
  SectionSubMesh *result; // r0

  result = a2;
  if ( a2 == nullptr )
    return (SectionSubMesh *)SectionMesh::getSubMesh(a3[14], a4);
  return result;
}


//======================================================================
// BlockMaterial::isNormalCube(int)
// address: 0x002BEAE4   size: 0x3E (62 bytes)
//======================================================================
int __fastcall BlockMaterial::isNormalCube(BlockMaterial *this, int a2)
{
  int Material; // r4

  Material = BlockMaterialMgr::getMaterial(
               (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
               (int)this);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)Material + 60))(Material) != 0
    && (*(int (__fastcall **)(int))(*(_DWORD *)Material + 64))(Material) != 0 )
  {
    return (*(unsigned __int8 (__fastcall **)(int))(*(_DWORD *)Material + 68))(Material) ^ 1;
  }
  else
  {
    return 0;
  }
}


//======================================================================
// BlockMaterial::isAssociatedBlockID(int,int)
// address: 0x002BEB28   size: 0x24 (36 bytes)
//======================================================================
int __fastcall BlockMaterial::isAssociatedBlockID(BlockMaterial *this, BlockMaterial *a2, int a3)
{
  int result; // r0
  int Material; // r0

  result = 1;
  if ( this != a2 )
  {
    Material = BlockMaterialMgr::getMaterial(
                 (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                 (int)this);
    return (*(int (__fastcall **)(int, BlockMaterial *))(*(_DWORD *)Material + 76))(Material, a2);
  }
  return result;
}


//======================================================================
// BlockMaterial::isSameType(int,int)
// address: 0x002BEB50   size: 0x2E (46 bytes)
//======================================================================
bool __fastcall BlockMaterial::isSameType(BlockMaterial *this, BlockMaterial *a2, int a3)
{
  _BOOL4 result; // r0
  int v6; // r6

  result = true;
  if ( this != a2 )
  {
    v6 = *(_DWORD *)(BlockMaterialMgr::getMaterial(
                       (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                       (int)this)
                   + 4);
    return v6 == *(_DWORD *)(BlockMaterialMgr::getMaterial(
                               (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                               (int)a2)
                           + 4);
  }
  return result;
}


//======================================================================
// BlockMaterial::doDropItem(World *,WCoord const&,int,int)
// address: 0x002BEB84   size: 0x4A (74 bytes)
//======================================================================
int __fastcall BlockMaterial::doDropItem(BlockMaterial *this, World *a2, const WCoord *a3, int a4, int a5)
{
  int v5; // r6
  int v6; // r5
  ClientActorMgr *v7; // r0
  int result; // r0
  _DWORD v9[3]; // [sp+14h] [bp-Ch] BYREF

  if ( a4 > 0 )
  {
    v5 = 100 * *((_DWORD *)a3 + 1) + 50;
    v6 = 100 * *((_DWORD *)a3 + 2);
    v9[0] = 100 * *(_DWORD *)a3 + 50;
    v7 = *((ClientActorMgr **)a2 + 33);
    v9[1] = v5;
    v9[2] = v6 + 50;
    return ClientActorMgr::spawnItem(v7, (const WCoord *)v9, a4, a5, -1, true, 0, nullptr);
  }
  return result;
}


//======================================================================
// BlockMaterial::dropBlockAsItem(World *,WCoord const&,int,BLOCK_MINE_TYPE,float)
// address: 0x002BEBD0   size: 0x82 (130 bytes)
//======================================================================
int __fastcall BlockMaterial::dropBlockAsItem(int result, World *a2, const WCoord *a3, int a4, int a5, float a6)
{
  BlockMaterial *v6; // r6
  int v8; // r7
  int v9; // r4
  int v10; // r0
  int v11; // r1
  int v12; // r3
  int v13; // r3

  v6 = (BlockMaterial *)result;
  if ( a5 != 0 )
  {
    result = GenRandomFloat() > a6;
    v8 = result;
    if ( result == 0 )
    {
      v9 = *((_DWORD *)v6 + 9);
      v10 = j_lrand48();
      v11 = v10 % 10000;
      result = v10 / 10000;
      if ( a5 == 1 )
      {
        if ( v11 >= *(unsigned __int16 *)(v9 + 94) )
          return result;
        v12 = *(unsigned __int16 *)(v9 + 92);
      }
      else if ( a5 == 3 )
      {
        v12 = *(_DWORD *)(v9 + 96);
      }
      else
      {
        v13 = *(unsigned __int16 *)(v9 + 86);
        if ( v11 >= v13 )
        {
          if ( v11 >= v13 + *(unsigned __int16 *)(v9 + 90) )
            return result;
          v8 = 1;
        }
        v12 = *(unsigned __int16 *)(v9 + 4 * (v8 + 20) + 4);
      }
      if ( v12 > 0 )
        return BlockMaterial::doDropItem(v6, a2, a3, v12, 1);
    }
  }
  return result;
}


//======================================================================
// BlockMaterial::hasActorCollided(World *,WCoord const&)
// address: 0x002BEC58   size: 0xB4 (180 bytes)
//======================================================================
int __fastcall BlockMaterial::hasActorCollided(BlockMaterial *this, World *a2, const WCoord *a3)
{
  unsigned int i; // r6
  int v7; // r0
  int v8; // r5
  void *v10; // [sp+4h] [bp-68h] BYREF
  int v11; // [sp+8h] [bp-64h]
  int v12; // [sp+Ch] [bp-60h]
  _DWORD v13[6]; // [sp+10h] [bp-5Ch] BYREF
  _BYTE v14[28]; // [sp+28h] [bp-44h] BYREF
  int v15; // [sp+44h] [bp-28h]
  int v16; // [sp+48h] [bp-24h]
  int v17; // [sp+4Ch] [bp-20h]
  int v18; // [sp+50h] [bp-1Ch]
  int v19; // [sp+54h] [bp-18h]
  int v20; // [sp+58h] [bp-14h]

  CollisionDetect::CollisionDetect((CollisionDetect *)v14);
  CollisionDetect::reset((CollisionDetect *)v14);
  (*(void (__fastcall **)(BlockMaterial *, _BYTE *, World *, const WCoord *))(*(_DWORD *)this + 36))(this, v14, a2, a3);
  v13[1] = v16;
  v13[2] = v17;
  v13[0] = v15;
  v13[4] = v19 - v16;
  v13[3] = v18 - v15;
  v13[5] = v20 - v17;
  v11 = 0;
  v12 = 0;
  v10 = nullptr;
  World::getActorsInBox(a2, &v10, v13);
  for ( i = 0; ; ++i )
  {
    if ( i >= (v11 - (int)v10) >> 2 )
    {
      v8 = 0;
      goto LABEL_8;
    }
    v7 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)v10 + i) + 24))(*((_DWORD *)v10 + i));
    if ( v7 == 0 || (unsigned int)(v7 - 5) <= 1 )
      break;
  }
  v8 = 1;
LABEL_8:
  if ( v10 != nullptr )
    operator delete(v10);
  CollisionDetect::~CollisionDetect((CollisionDetect *)v14);
  return v8;
}

