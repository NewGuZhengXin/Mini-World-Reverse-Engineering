// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: RepeaterMaterial

//======================================================================
// RepeaterMaterial::getGeomName(void)
// address: 0x0029B438   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall RepeaterMaterial::getGeomName(RepeaterMaterial *this)
{
  return "repeater";
}


//======================================================================
// RepeaterMaterial::isAssociatedBlockID(int)
// address: 0x0029B444   size: 0x22 (34 bytes)
//======================================================================
bool __fastcall RepeaterMaterial::isAssociatedBlockID(RepeaterMaterial *this, int a2)
{
  return a2 == RepeaterMaterial::ACTIVE_ID || a2 == RepeaterMaterial::IDLE_ID;
}


//======================================================================
// RepeaterMaterial::getTickRate(int)
// address: 0x0029B470   size: 0x8 (8 bytes)
//======================================================================
int __fastcall RepeaterMaterial::getTickRate(RepeaterMaterial *this, int a2)
{
  return 2 * ((a2 >> 2) + 1);
}


//======================================================================
// RepeaterMaterial::getDelayTicks(int)
// address: 0x0029B478   size: 0x8 (8 bytes)
//======================================================================
int __fastcall RepeaterMaterial::getDelayTicks(RepeaterMaterial *this, int a2)
{
  return 2 * ((a2 >> 2) + 1);
}


//======================================================================
// RepeaterMaterial::canSideBlockProvidePower(int)
// address: 0x0029B480   size: 0x22 (34 bytes)
//======================================================================
bool __fastcall RepeaterMaterial::canSideBlockProvidePower(RepeaterMaterial *this, int a2)
{
  return a2 == RepeaterMaterial::ACTIVE_ID || a2 == ComparatorMaterial::ACTIVE_ID;
}


//======================================================================
// RepeaterMaterial::~RepeaterMaterial()
// address: 0x0029B4DC   size: 0x32 (50 bytes)
//======================================================================
// Alternative name is '_ZN16RepeaterMaterialD1Ev'
void __fastcall RepeaterMaterial::~RepeaterMaterial(RepeaterMaterial *this)
{
  _DWORD *v2; // r0
  int v3; // r3

  *(_DWORD *)this = &off_45C2B8;
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
// RepeaterMaterial::~RepeaterMaterial()
// address: 0x0029B514   size: 0x12 (18 bytes)
//======================================================================
void __fastcall RepeaterMaterial::~RepeaterMaterial(RepeaterMaterial *this)
{
  RepeaterMaterial::~RepeaterMaterial(this);
  operator delete(this);
}


//======================================================================
// RepeaterMaterial::createBlockProtoMesh(BlockInstanceData *)
// address: 0x0029B526   size: 0x6A (106 bytes)
//======================================================================
SectionMesh *__fastcall RepeaterMaterial::createBlockProtoMesh(int a1)
{
  SectionMesh *v2; // r5
  int SubMesh; // r7
  _DWORD v5[5]; // [sp+8h] [bp-14h] BYREF

  v2 = (SectionMesh *)operator new(0x114u);
  SectionMesh::SectionMesh(v2, true);
  SubMesh = SectionMesh::getSubMesh(v2, *(Ogre::Material **)(a1 + 56));
  BlockGeomTemplate::getFaceVerts(*(_DWORD *)(a1 + 40), v5, 0);
  SectionSubMesh::addTriangleList(SubMesh, v5[2], v5[0], v5[3], v5[1], 0);
  BlockGeomTemplate::getFaceVerts(*(_DWORD *)(a1 + 40), v5, 1u);
  SectionSubMesh::addTriangleList(SubMesh, v5[2], v5[0], v5[3], v5[1], 0);
  SectionMesh::onCreate(v2);
  return v2;
}


//======================================================================
// RepeaterMaterial::onBlockActivated(World *,WCoord const&,DirectionType,ClientPlayer *)
// address: 0x0029B59A   size: 0x2A (42 bytes)
//======================================================================
int __fastcall RepeaterMaterial::onBlockActivated(int a1, World *this, WCoord *a3)
{
  int BlockData; // r0

  BlockData = World::getBlockData(this, a3);
  World::setBlockData(this, a3, (4 * (((BlockData >> 2) + 1) & 3)) | BlockData & 3, 3);
  return 1;
}


//======================================================================
// RepeaterMaterial::getActiveMaterial(void)
// address: 0x0029B5C4   size: 0x18 (24 bytes)
//======================================================================
int __fastcall RepeaterMaterial::getActiveMaterial(RepeaterMaterial *this)
{
  return BlockMaterialMgr::getMaterial(
           (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
           RepeaterMaterial::ACTIVE_ID);
}


//======================================================================
// RepeaterMaterial::getIdleMaterial(void)
// address: 0x0029B5E4   size: 0x18 (24 bytes)
//======================================================================
int __fastcall RepeaterMaterial::getIdleMaterial(RepeaterMaterial *this)
{
  return BlockMaterialMgr::getMaterial(
           (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
           RepeaterMaterial::IDLE_ID);
}


//======================================================================
// RepeaterMaterial::isPowerStateLocked(World *,WCoord const&,int)
// address: 0x0029B604   size: 0xE (14 bytes)
//======================================================================
unsigned int __fastcall RepeaterMaterial::isPowerStateLocked(
        RepeaterMaterial *this,
        World *a2,
        const WCoord *a3,
        int a4)
{
  int SidePower; // r0

  SidePower = RedstoneLogicMaterial::getSidePower(this, a2, a3, a4);
  return (unsigned int)((SidePower >> 31) - SidePower) >> 31;
}


//======================================================================
// RepeaterMaterial::createBlockMesh(ClientSection *,WCoord const&,SectionSubMesh *)
// address: 0x0029B614   size: 0x130 (304 bytes)
//======================================================================
int __fastcall RepeaterMaterial::createBlockMesh(
        RepeaterMaterial *this,
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
  _BOOL4 v14; // r7
  int v16; // [sp+20h] [bp-54h]
  int v17; // [sp+24h] [bp-50h]
  int v18; // [sp+2Ch] [bp-48h]
  _DWORD v19[4]; // [sp+40h] [bp-34h] BYREF
  float v20[9]; // [sp+50h] [bp-24h] BYREF

  v8 = *(_DWORD *)a3;
  v9 = *((_DWORD *)a3 + 1);
  v10 = *((_DWORD *)a3 + 2);
  v11 = *((_DWORD *)a2 + 5);
  if ( v11 != 0 )
    v12 = (__int16 *)(v11 + 2 * ((16 * v10) | (v9 << 8) | v8));
  else
    v12 = &Section::m_EmptyBlock;
  v13 = (unsigned __int16)*v12;
  v18 = v13 >> 14;
  v16 = (v13 >> 12) & 3;
  if ( *((_BYTE *)this + 60) != 0 )
  {
    v20[1] = 1.0;
    v20[0] = 1.0;
  }
  else
  {
    ClientSection::getBlockVertexLight(a2, a3, v20);
  }
  v17 = BlockMaterial::blockMeshOutput(this, a4, a2, *((Ogre::Material **)this + 13));
  BlockGeomTemplate::getFaceVerts(*((_DWORD *)this + 10), v19, 0, 1065353216, 0, v16, 0, nullptr);
  SectionSubMesh::addGeomBlockLight(v17, v19, a3, v20, 0);
  BlockGeomTemplate::getFaceVerts(*((_DWORD *)this + 10), v19, 1u, 1065353216, 0, v16, 0, nullptr);
  SectionSubMesh::addGeomBlockLight(v17, v19, a3, v20, 0);
  v14 = (*(int (__fastcall **)(RepeaterMaterial *, _DWORD))(*(_DWORD *)this + 220))(
          this,
          *(_DWORD *)(*((_DWORD *)a2 + 1) + 1432)) != 0;
  BlockGeomTemplate::getModelFaceVerts(*((_DWORD *)this + 10), v19, v14 + 2, v16, 0, 0, COERCE_INT((float)-v18 * 0.125));
  return SectionSubMesh::addGeomBlockLight(v17, v19, a3, v20, 0);
}


//======================================================================
// RepeaterMaterial::init(int)
// address: 0x0029B748   size: 0xA6 (166 bytes)
//======================================================================
void __fastcall RepeaterMaterial::init(Ogre::Material **this, int a2)
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
  int **v17; // r3
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
    v17 = RepeaterMaterial::ACTIVE_ID;
  else
    v17 = RepeaterMaterial::IDLE_ID;
  **v17 = a2;
}


//======================================================================
// RepeaterMaterial::RepeaterMaterial(void)
// address: 0x0029B818   size: 0x1A (26 bytes)
//======================================================================
// Alternative name is '_ZN16RepeaterMaterialC1Ev'
void __fastcall RepeaterMaterial::RepeaterMaterial(RepeaterMaterial *this)
{
  ModelBlockMaterial::ModelBlockMaterial(this);
  *(_DWORD *)this = &off_45C2B8;
  *((_DWORD *)this + 16) = 0;
}


//======================================================================
// RepeaterMaterial::newObject(void)
// address: 0x002C14AE   size: 0x12 (18 bytes)
//======================================================================
RepeaterMaterial *__fastcall RepeaterMaterial::newObject(RepeaterMaterial *this)
{
  RepeaterMaterial *v1; // r4

  v1 = (RepeaterMaterial *)operator new(0x44u);
  RepeaterMaterial::RepeaterMaterial(v1);
  return v1;
}

