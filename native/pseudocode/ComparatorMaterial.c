// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ComparatorMaterial

//======================================================================
// ComparatorMaterial::getGeomName(void)
// address: 0x002A7AFC   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall ComparatorMaterial::getGeomName(ComparatorMaterial *this)
{
  return "comparator";
}


//======================================================================
// ComparatorMaterial::getTickRate(int)
// address: 0x002A7B08   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ComparatorMaterial::getTickRate(ComparatorMaterial *this, int a2)
{
  return 2;
}


//======================================================================
// ComparatorMaterial::getDelayTicks(int)
// address: 0x002A7B0C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ComparatorMaterial::getDelayTicks(ComparatorMaterial *this, int a2)
{
  return 2;
}


//======================================================================
// ComparatorMaterial::~ComparatorMaterial()
// address: 0x002A7B10   size: 0x32 (50 bytes)
//======================================================================
// Alternative name is '_ZN18ComparatorMaterialD1Ev'
void __fastcall ComparatorMaterial::~ComparatorMaterial(ComparatorMaterial *this)
{
  _DWORD *v2; // r0
  int v3; // r3

  *(_DWORD *)this = &off_45D468;
  v2 = *((_DWORD **)this + 16);
  if ( v2 != nullptr )
  {
    v3 = v2[1] - 1;
    v2[1] = v3;
    if ( v3 <= 0 )
      (*(void (__fastcall **)(_DWORD *))(*v2 + 24))(v2);
    *((_DWORD *)this + 16) = 0;
  }
  RedstoneLogicMaterial::~RedstoneLogicMaterial(this);
}


//======================================================================
// ComparatorMaterial::~ComparatorMaterial()
// address: 0x002A7B48   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ComparatorMaterial::~ComparatorMaterial(ComparatorMaterial *this)
{
  ComparatorMaterial::~ComparatorMaterial(this);
  operator delete(this);
}


//======================================================================
// ComparatorMaterial::getActiveMaterial(void)
// address: 0x002A7B5C   size: 0x18 (24 bytes)
//======================================================================
int __fastcall ComparatorMaterial::getActiveMaterial(ComparatorMaterial *this)
{
  return BlockMaterialMgr::getMaterial(
           (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
           ComparatorMaterial::ACTIVE_ID);
}


//======================================================================
// ComparatorMaterial::getIdleMaterial(void)
// address: 0x002A7B7C   size: 0x18 (24 bytes)
//======================================================================
int __fastcall ComparatorMaterial::getIdleMaterial(ComparatorMaterial *this)
{
  return BlockMaterialMgr::getMaterial(
           (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
           ComparatorMaterial::IDLE_ID);
}


//======================================================================
// ComparatorMaterial::getOutputPowerStrength(World *,WCoord const&,int)
// address: 0x002A7BD0   size: 0xC (12 bytes)
//======================================================================
const void *__fastcall ComparatorMaterial::getOutputPowerStrength(
        ComparatorMaterial *this,
        World *a2,
        const WCoord *a3,
        int a4)
{
  return sub_2A7B9C((int)a2, a3);
}


//======================================================================
// ComparatorMaterial::isGettingInput(World *,WCoord const&,int)
// address: 0x002A7BDC   size: 0x4A (74 bytes)
//======================================================================
unsigned int __fastcall ComparatorMaterial::isGettingInput(
        ComparatorMaterial *this,
        World *a2,
        const WCoord *a3,
        int a4)
{
  int v7; // r4
  unsigned int result; // r0
  int SidePower; // r0

  v7 = (*(int (__fastcall **)(ComparatorMaterial *))(*(_DWORD *)this + 216))(this);
  result = 1;
  if ( v7 <= 14 )
  {
    result = 0;
    if ( v7 != 0 )
    {
      SidePower = RedstoneLogicMaterial::getSidePower(this, a2, a3, a4);
      if ( (a4 & 4) != 0 )
        return (unsigned int)(((v7 - SidePower) >> 31) - (v7 - SidePower)) >> 31;
      else
        return (unsigned __int8)((SidePower < 0) + (v7 >= (unsigned int)SidePower) + (v7 >> 31));
    }
  }
  return result;
}


//======================================================================
// ComparatorMaterial::onBlockAdded(World *,WCoord const&)
// address: 0x002A7C26   size: 0x20 (32 bytes)
//======================================================================
int __fastcall ComparatorMaterial::onBlockAdded(ComparatorMaterial *this, World *a2, const WCoord *a3)
{
  WorldContainerMgr **v4; // r5
  int v6; // [sp+0h] [bp-Ch]

  v4 = (WorldContainerMgr **)((char *)a2 + 4);
  RedstoneLogicMaterial::onBlockAdded(this, a2, a3);
  WorldContainerMgr::spawnComparator(v4[31], a3, 0, 0, false);
  return v6;
}


//======================================================================
// ComparatorMaterial::onBlockRemoved(World *,WCoord const&,int,int)
// address: 0x002A7C46   size: 0x2C (44 bytes)
//======================================================================
int __fastcall ComparatorMaterial::onBlockRemoved(
        ComparatorMaterial *this,
        WorldContainerMgr **a2,
        const WCoord *a3,
        int a4,
        int a5)
{
  int v9; // [sp+0h] [bp-8h]

  BlockMaterial::onBlockRemoved(this, (World *)a2, a3, a4, a5);
  WorldContainerMgr::destroyContainer(a2[32], a3);
  (*(void (__fastcall **)(ComparatorMaterial *, WorldContainerMgr **, const WCoord *))(*(_DWORD *)this + 240))(
    this,
    a2,
    a3);
  return v9;
}


//======================================================================
// ComparatorMaterial::createBlockMesh(ClientSection *,WCoord const&,SectionSubMesh *)
// address: 0x002A7C74   size: 0x100 (256 bytes)
//======================================================================
int __fastcall ComparatorMaterial::createBlockMesh(
        ComparatorMaterial *this,
        ClientSection *a2,
        const WCoord *a3,
        SectionSubMesh *a4)
{
  int v8; // r1
  int v9; // r0
  int v10; // r3
  int v11; // r2
  __int16 *v12; // r3
  int v13; // r3
  int v14; // r0
  int v16; // [sp+10h] [bp-44h]
  int v17; // [sp+18h] [bp-3Ch]
  int v18; // [sp+1Ch] [bp-38h]
  _DWORD v19[4]; // [sp+20h] [bp-34h] BYREF
  float v20[9]; // [sp+30h] [bp-24h] BYREF

  v8 = *(_DWORD *)a3;
  v9 = *((_DWORD *)a3 + 1);
  v10 = *((_DWORD *)a3 + 2);
  v11 = *((_DWORD *)a2 + 5);
  if ( v11 != 0 )
    v12 = (__int16 *)(v11 + 2 * ((16 * v10) | (v9 << 8) | v8));
  else
    v12 = &Section::m_EmptyBlock;
  v13 = (int)(unsigned __int16)*v12 >> 12;
  v17 = v13 & 3;
  v18 = v13 & 4;
  if ( *((_BYTE *)this + 60) != 0 )
  {
    v20[1] = 1.0;
    v20[0] = 1.0;
  }
  else
  {
    ClientSection::getBlockVertexLight(a2, a3, v20);
  }
  v16 = BlockMaterial::blockMeshOutput(this, a4, a2, *((Ogre::Material **)this + 13));
  BlockGeomTemplate::getFaceVerts(*((_DWORD *)this + 10), v19, 0, 1065353216, 0, v17, 0, nullptr);
  SectionSubMesh::addGeomBlockLight(v16, v19, a3, v20, 0);
  BlockGeomTemplate::getFaceVerts(*((_DWORD *)this + 10), v19, 1u, 1065353216, 0, v17, 0, nullptr);
  SectionSubMesh::addGeomBlockLight(v16, v19, a3, v20, 0);
  v14 = *((_DWORD *)this + 10);
  if ( v18 != 0 )
    BlockGeomTemplate::getFaceVerts(v14, v19, 3u, 1065353216, 0, v17, 0, nullptr);
  else
    BlockGeomTemplate::getFaceVerts(v14, v19, 2u, 1065353216, 0, v17, 0, nullptr);
  return SectionSubMesh::addGeomBlockLight(v16, v19, a3, v20, 0);
}


//======================================================================
// ComparatorMaterial::getInputStrength(World *,WCoord const&,int)
// address: 0x002A7D78   size: 0xE8 (232 bytes)
//======================================================================
int __fastcall ComparatorMaterial::getInputStrength(ComparatorMaterial *this, World *a2, const WCoord *a3, int a4)
{
  int v5; // r4
  int *v6; // r6
  int v7; // r0
  int v8; // r1
  int v9; // r3
  int v10; // r1
  int v11; // r0
  int Material; // r7
  int v13; // r1
  int (__fastcall *v14)(int, World *, int *, int); // r5
  int v15; // r3
  int v16; // r0
  World *v17; // r1
  int v18; // r1
  int v19; // r3
  int v20; // r1
  int v21; // r0
  int v22; // r4
  BlockMaterial *BlockID; // [sp+0h] [bp-24h]
  int v25; // [sp+4h] [bp-20h]
  int InputStrength; // [sp+8h] [bp-1Ch]
  int v28; // [sp+14h] [bp-10h] BYREF
  int v29; // [sp+18h] [bp-Ch]
  int v30; // [sp+1Ch] [bp-8h]

  v5 = a4 & 3;
  InputStrength = RedstoneLogicMaterial::getInputStrength(this, a2, a3, a4);
  v6 = &g_DirectionCoord[3 * v5];
  v25 = v5;
  v7 = *((_DWORD *)a3 + 2);
  v8 = v6[2];
  v29 = *((_DWORD *)a3 + 1) + v6[1];
  v9 = v7 + v8;
  v10 = *(_DWORD *)a3;
  v11 = *v6;
  v30 = v9;
  v28 = v10 + v11;
  BlockID = (BlockMaterial *)World::getBlockID(a2, (const WCoord *)&v28);
  Material = BlockMaterialMgr::getMaterial(
               (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
               (int)BlockID);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)Material + 172))(Material) != 0 )
  {
    v14 = *(int (__fastcall **)(int, World *, int *, int))(*(_DWORD *)Material + 176);
    v15 = v5 + 1;
    if ( (v5 & 1) != 0 )
      v15 = v5 - 1;
    v16 = Material;
    v17 = a2;
    return v14(v16, v17, &v28, v15);
  }
  if ( InputStrength <= 14 && BlockMaterial::isNormalCube(BlockID, v13) != 0 )
  {
    v18 = v6[2];
    v29 += v6[1];
    v19 = v30 + v18;
    v20 = *v6;
    v30 = v19;
    v28 += v20;
    v21 = World::getBlockID(a2, (const WCoord *)&v28);
    v22 = BlockMaterialMgr::getMaterial((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, v21);
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v22 + 172))(v22) != 0 )
    {
      v14 = *(int (__fastcall **)(int, World *, int *, int))(*(_DWORD *)v22 + 176);
      v15 = v25 + 1;
      if ( (v25 & 1) != 0 )
        v15 = v25 - 1;
      v17 = a2;
      v16 = v22;
      return v14(v16, v17, &v28, v15);
    }
  }
  return InputStrength;
}


//======================================================================
// ComparatorMaterial::init(int)
// address: 0x002A7E68   size: 0xA6 (166 bytes)
//======================================================================
void __fastcall ComparatorMaterial::init(Ogre::Material **this, int a2)
{
  BlockMaterialMgr *v4; // r6
  int v5; // r2
  void *v6; // r1
  int v7; // r2
  int v8; // r3
  Ogre::Material *v9; // r6
  void *v10; // r1
  Ogre::Material *v11; // r6
  int v12; // r2
  int v13; // r3
  Ogre::Texture *Texture; // r0
  void *v15; // r1
  _BOOL4 v16; // r3
  int *v17; // r3
  BlockTexElement *TexElement; // [sp+4h] [bp-10h]
  Ogre::FixedString *v19[2]; // [sp+Ch] [bp-8h] BYREF

  ModelBlockMaterial::init((ModelBlockMaterial *)this, a2);
  v4 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  v19[0] = (Ogre::FixedString *)Ogre::FixedString::insert(
                                  (Ogre::Material *)((char *)*(this + 9) + 244),
                                  (const char *)0xFFFFFFFF,
                                  v5,
                                  (int)&Ogre::Singleton<BlockMaterialMgr>::ms_Singleton);
  TexElement = (BlockTexElement *)BlockMaterialMgr::getTexElement(v4, (const Ogre::FixedString *)v19, 0);
  Ogre::FixedString::~FixedString(v19, v6);
  v19[0] = (Ogre::FixedString *)Ogre::FixedString::insert(
                                  (Ogre::FixedString *)"block",
                                  (const char *)0xFFFFFFFF,
                                  v7,
                                  v8);
  v9 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v9, (const Ogre::FixedString *)v19);
  *(this + 16) = v9;
  Ogre::FixedString::~FixedString(v19, v10);
  v11 = *(this + 16);
  v19[0] = (Ogre::FixedString *)Ogre::FixedString::insert(
                                  (Ogre::FixedString *)"g_DiffuseTex",
                                  (const char *)0xFFFFFFFF,
                                  v12,
                                  v13);
  Texture = (Ogre::Texture *)BlockTexElement::getTexture(TexElement, 0);
  Ogre::Material::setParamTexture(v11, (const Ogre::FixedString *)v19, Texture, 0);
  Ogre::FixedString::~FixedString(v19, v15);
  v16 = *((_DWORD *)*(this + 9) + 14) != 0;
  *((_BYTE *)this + 60) = v16;
  if ( v16 )
    v17 = ComparatorMaterial::ACTIVE_ID;
  else
    v17 = (int *)&ComparatorMaterial::IDLE_ID;
  *(_DWORD *)*v17 = a2;
}


//======================================================================
// ComparatorMaterial::ComparatorMaterial(void)
// address: 0x002A7F38   size: 0x1A (26 bytes)
//======================================================================
// Alternative name is '_ZN18ComparatorMaterialC1Ev'
void __fastcall ComparatorMaterial::ComparatorMaterial(ComparatorMaterial *this)
{
  ModelBlockMaterial::ModelBlockMaterial(this);
  *(_DWORD *)this = &off_45D468;
  *((_DWORD *)this + 16) = 0;
}


//======================================================================
// ComparatorMaterial::calculateOutput(World *,WCoord const&,int)
// address: 0x002A7F58   size: 0x3C (60 bytes)
//======================================================================
int __fastcall ComparatorMaterial::calculateOutput(ComparatorMaterial *this, World *a2, const WCoord *a3, int a4)
{
  int v7; // r6
  int SidePower; // r0
  int v9; // r4

  v7 = (*(int (__fastcall **)(ComparatorMaterial *))(*(_DWORD *)this + 216))(this);
  SidePower = RedstoneLogicMaterial::getSidePower(this, a2, a3, a4);
  v9 = a4 & 4;
  if ( v9 != 0 )
    return (v7 - SidePower) & (~(v7 - SidePower) >> 31);
  if ( v7 >= SidePower )
    return v7;
  return v9;
}


//======================================================================
// ComparatorMaterial::updateOnNeighborChange(World *,WCoord const&,int)
// address: 0x002A7F94   size: 0x6A (106 bytes)
//======================================================================
const void *__fastcall ComparatorMaterial::updateOnNeighborChange(
        ComparatorMaterial *this,
        BlockTickMgr **a2,
        const WCoord *a3,
        int a4)
{
  BlockTickMgr **v5; // r7
  const void *result; // r0
  int v9; // r3
  int BlockData; // [sp+8h] [bp-Ch]
  int v11; // [sp+Ch] [bp-8h]

  v5 = a2 + 34;
  result = (const void *)BlockTickMgr::isBlockTickScheduledThisTick(a2[34], a3, *((_DWORD *)this + 8));
  if ( result == nullptr )
  {
    BlockData = World::getBlockData((World *)a2, a3);
    v11 = ComparatorMaterial::calculateOutput(this, (World *)a2, a3, BlockData);
    result = sub_2A7B9C((int)a2, a3);
    if ( (const void *)v11 != result )
    {
      v9 = RedstoneLogicMaterial::func_83011_d(this, (World *)a2, a3, BlockData);
      if ( v9 != 0 )
        v9 = -1;
      return (const void *)BlockTickMgr::scheduleBlockUpdate(*v5, a3, *((_DWORD *)this + 8), 2, v9);
    }
  }
  return result;
}


//======================================================================
// ComparatorMaterial::comparatorChange(World *,WCoord const&)
// address: 0x002A8000   size: 0x98 (152 bytes)
//======================================================================
int __fastcall ComparatorMaterial::comparatorChange(ComparatorMaterial *this, WorldContainerMgr **a2, const WCoord *a3)
{
  int BlockData; // r7
  int Comparator; // r0
  int result; // r0
  int **v9; // r3
  int v10; // [sp+8h] [bp-Ch]
  int v11; // [sp+Ch] [bp-8h]

  BlockData = World::getBlockData((World *)a2, a3);
  v11 = ComparatorMaterial::calculateOutput(this, (World *)a2, a3, BlockData);
  Comparator = WorldContainerMgr::getComparator(a2[32], a3);
  if ( Comparator != 0 )
  {
    v10 = *(_DWORD *)(Comparator + 48);
    *(_DWORD *)(Comparator + 48) = v11;
  }
  else
  {
    v10 = 0;
  }
  result = (*(int (__fastcall **)(ComparatorMaterial *, WorldContainerMgr **, const WCoord *, int))(*(_DWORD *)this + 212))(
             this,
             a2,
             a3,
             BlockData);
  if ( *((_BYTE *)this + 60) != 0 )
  {
    if ( result == 0 )
    {
      v9 = &ComparatorMaterial::IDLE_ID;
      return World::setBlockAll((World *)a2, a3, **v9, BlockData, 3);
    }
  }
  else if ( result != 0 )
  {
    v9 = (int **)ComparatorMaterial::ACTIVE_ID;
    return World::setBlockAll((World *)a2, a3, **v9, BlockData, 3);
  }
  if ( v11 != v10 )
    return (*(int (__fastcall **)(ComparatorMaterial *, WorldContainerMgr **, const WCoord *))(*(_DWORD *)this + 240))(
             this,
             a2,
             a3);
  return result;
}


//======================================================================
// ComparatorMaterial::onBlockActivated(World *,WCoord const&,DirectionType,ClientPlayer *)
// address: 0x002A80A0   size: 0x38 (56 bytes)
//======================================================================
int __fastcall ComparatorMaterial::onBlockActivated(ComparatorMaterial *a1, World *this, WCoord *a3)
{
  char BlockData; // r0

  BlockData = World::getBlockData(this, a3);
  World::setBlockData(this, a3, (4 * ((BlockData & 4) == 0)) | BlockData & 3, 3);
  ComparatorMaterial::comparatorChange(a1, (WorldContainerMgr **)this, a3);
  return 1;
}


//======================================================================
// ComparatorMaterial::blockTick(World *,WCoord const&)
// address: 0x002A80D8   size: 0x8 (8 bytes)
//======================================================================
int __fastcall ComparatorMaterial::blockTick(ComparatorMaterial *this, WorldContainerMgr **a2, const WCoord *a3)
{
  return ComparatorMaterial::comparatorChange(this, a2, a3);
}


//======================================================================
// ComparatorMaterial::newObject(void)
// address: 0x002C1492   size: 0x12 (18 bytes)
//======================================================================
ComparatorMaterial *__fastcall ComparatorMaterial::newObject(ComparatorMaterial *this)
{
  ComparatorMaterial *v1; // r4

  v1 = (ComparatorMaterial *)operator new(0x44u);
  ComparatorMaterial::ComparatorMaterial(v1);
  return v1;
}

