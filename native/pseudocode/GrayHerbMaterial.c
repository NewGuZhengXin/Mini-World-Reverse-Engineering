// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: GrayHerbMaterial

//======================================================================
// GrayHerbMaterial::getGeomName(void)
// address: 0x002657F8   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall GrayHerbMaterial::getGeomName(GrayHerbMaterial *this)
{
  return "hurbs";
}


//======================================================================
// GrayHerbMaterial::getDestroyTexture(Block *,BlockTexDesc &)
// address: 0x0026584E   size: 0x1C (28 bytes)
//======================================================================
int __fastcall GrayHerbMaterial::getDestroyTexture(int a1, unsigned __int16 *a2, int a3)
{
  BlockTexElement *v3; // r0

  *(_DWORD *)a3 = 1;
  *(_BYTE *)(a3 + 4) = 1;
  if ( (int)*a2 >> 12 != 0 )
    v3 = *(BlockTexElement **)(a1 + 52);
  else
    v3 = *(BlockTexElement **)(a1 + 48);
  return BlockTexElement::getTexture(v3, 0);
}


//======================================================================
// GrayHerbMaterial::createCollideData(CollisionDetect *,World *,WCoord const&)
// address: 0x00265884   size: 0x3E (62 bytes)
//======================================================================
int __fastcall GrayHerbMaterial::createCollideData(
        GrayHerbMaterial *this,
        CollisionDetect *a2,
        World *a3,
        const WCoord *a4)
{
  int v4; // r6
  int v5; // r4
  int v6; // r5
  _DWORD v8[3]; // [sp+0h] [bp-18h] BYREF
  _DWORD v9[3]; // [sp+Ch] [bp-Ch] BYREF

  v4 = 100 * *(_DWORD *)a4;
  v5 = 100 * *((_DWORD *)a4 + 2);
  v6 = 100 * *((_DWORD *)a4 + 1);
  v8[0] = v4 + 16;
  v8[2] = v5 + 16;
  v8[1] = v6;
  v9[0] = v4 + 84;
  v9[1] = v6 + 68;
  v9[2] = v5 + 84;
  return CollisionDetect::addObstacle(a2, (const WCoord *)v8, (const WCoord *)v9);
}


//======================================================================
// GrayHerbMaterial::createBlockMesh(ClientSection *,WCoord const&,SectionSubMesh *)
// address: 0x002658C4   size: 0x104 (260 bytes)
//======================================================================
int __fastcall GrayHerbMaterial::createBlockMesh(
        GrayHerbMaterial *this,
        ClientSection *a2,
        const WCoord *a3,
        SectionSubMesh *a4)
{
  int v7; // r7
  _WORD *NeighborBlock; // r0
  BiomeGenBase *BiomeGen; // r0
  Ogre::Material *v10; // r3
  int v11; // r0
  int v12; // r7
  float v13; // r0
  float v15; // [sp+10h] [bp-18h]
  float v16; // [sp+14h] [bp-14h]
  float v18; // [sp+1Ch] [bp-Ch]
  int GrassColor; // [sp+24h] [bp-4h] BYREF
  _BYTE v20[8]; // [sp+28h] [bp+0h] BYREF
  _BYTE v21[16]; // [sp+30h] [bp+8h] BYREF
  float v22[9]; // [sp+40h] [bp+18h] BYREF

  ChunkRandGen::ChunkRandGen((ChunkRandGen *)v20);
  ChunkRandGen::setSeed(
    (ChunkRandGen *)v20,
    *((_DWORD *)a2 + 3)
  + *((_DWORD *)a3 + 1)
  + 29791
  + 31 * (31 * (*((_DWORD *)a2 + 2) + *(_DWORD *)a3) + *((_DWORD *)a2 + 4) + *((_DWORD *)a3 + 2)));
  v7 = *((_DWORD *)this + 15);
  if ( v7 != 0 )
  {
    NeighborBlock = (_WORD *)Section::getNeighborBlock(a2, a3, 4);
    v7 = *((_DWORD *)this + 8)
       - (*NeighborBlock & 0xFFF)
       + ((*NeighborBlock & 0xFFF) == *((_DWORD *)this + 8))
       + (*NeighborBlock & 0xFFF)
       - *((_DWORD *)this + 8);
  }
  BiomeGen = (BiomeGenBase *)Chunk::getBiomeGen(*((Chunk **)a2 + 1), *(_DWORD *)a3, *((_DWORD *)a3 + 2));
  GrassColor = BiomeGenBase::getGrassColor(BiomeGen);
  if ( v7 != 0 )
    v10 = *((Ogre::Material **)this + 15);
  else
    v10 = *((Ogre::Material **)this + 14);
  v11 = BlockMaterial::blockMeshOutput(this, a4, a2, v10);
  *(_BYTE *)(v11 + 37) = 1;
  v12 = v11;
  ClientSection::getBlockVertexLight(a2, a3, v22);
  v15 = COERCE_FLOAT(ChunkRandGen::getFloat((ChunkRandGen *)v20));
  v16 = COERCE_FLOAT(ChunkRandGen::getFloat((ChunkRandGen *)v20));
  v18 = COERCE_FLOAT(ChunkRandGen::getFloat((ChunkRandGen *)v20));
  v13 = COERCE_FLOAT(ChunkRandGen::getFloat((ChunkRandGen *)v20));
  BlockGeomTemplate::getModelFaceVerts(
    *((_DWORD *)this + 10),
    v21,
    0,
    2,
    (float)(v15 - v16) * 0.4,
    0,
    (float)(v18 - v13) * 0.4);
  return SectionSubMesh::addGeomBlockLight(v12, v21, a3, v22, &GrassColor);
}


//======================================================================
// GrayHerbMaterial::~GrayHerbMaterial()
// address: 0x00265B2C   size: 0x34 (52 bytes)
//======================================================================
// Alternative name is '_ZN16GrayHerbMaterialD1Ev'
void __fastcall GrayHerbMaterial::~GrayHerbMaterial(GrayHerbMaterial *this)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0

  *(_DWORD *)this = &off_45B538;
  v2 = *((_DWORD **)this + 14);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 14) = 0;
  }
  v3 = *((_DWORD **)this + 15);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)this + 15) = 0;
  }
  HerbMaterial::~HerbMaterial(this);
}


//======================================================================
// GrayHerbMaterial::~GrayHerbMaterial()
// address: 0x00265B64   size: 0x12 (18 bytes)
//======================================================================
void __fastcall GrayHerbMaterial::~GrayHerbMaterial(GrayHerbMaterial *this)
{
  GrayHerbMaterial::~GrayHerbMaterial(this);
  operator delete(this);
}


//======================================================================
// GrayHerbMaterial::init(int)
// address: 0x00265B78   size: 0x24A (586 bytes)
//======================================================================
int __fastcall GrayHerbMaterial::init(BlockTexElement **this, int a2)
{
  int v3; // r2
  void *v4; // r1
  int v5; // r2
  BlockMaterialMgr *v6; // r7
  int v7; // r2
  void *v8; // r1
  Ogre::Material *v9; // r6
  void *v10; // r1
  int v11; // r2
  void *v12; // r1
  Ogre::Material *v13; // r7
  int v14; // r2
  void *v15; // r1
  int v16; // r2
  Ogre::Texture *Texture; // r0
  void *v18; // r1
  int v19; // r2
  void *v20; // r1
  int v21; // r2
  Ogre::Material *v22; // r7
  void *v23; // r1
  Ogre::Material *v24; // r7
  int v25; // r2
  void *v26; // r1
  Ogre::Material *v27; // r7
  int v28; // r2
  void *v29; // r1
  Ogre::Material *v30; // r7
  int v31; // r2
  Ogre::Texture *v32; // r0
  void *v33; // r1
  int result; // r0
  Ogre::FixedString *v35; // r1
  BlockMaterialMgr *v36; // [sp+0h] [bp-134h]
  BlockMaterialMgr *v37; // [sp+0h] [bp-134h]
  BlockMaterialMgr *v38; // [sp+0h] [bp-134h]
  Ogre::Material *v39; // [sp+4h] [bp-130h]
  Ogre::Material *v40; // [sp+4h] [bp-130h]
  Ogre::FixedString *v41[7]; // [sp+10h] [bp-124h] BYREF
  char s[256]; // [sp+2Ch] [bp-108h] BYREF

  BlockMaterial::init((BlockMaterial *)this, a2);
  v36 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v41, (BlockTexElement *)((char *)*(this + 9) + 212), v3);
  *(this + 12) = (BlockTexElement *)BlockMaterialMgr::getTexElement(v36, (const Ogre::FixedString *)v41, 0);
  Ogre::FixedString::~FixedString(v41, v4);
  v5 = 0;
  v37 = nullptr;
  if ( *(this + 12) == nullptr )
  {
    j_sprintf(s, "%s_bottom", (const char *)*(this + 9) + 212);
    v6 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
    Ogre::FixedString::FixedString((Ogre::FixedString *)v41, (Ogre::FixedString *)s, v7);
    *(this + 12) = (BlockTexElement *)BlockMaterialMgr::getTexElement(v6, (const Ogre::FixedString *)v41, 1);
    Ogre::FixedString::~FixedString(v41, v8);
    v5 = 1;
    v37 = (BlockMaterialMgr *)(&dword_0 + 1);
  }
  Ogre::FixedString::FixedString((Ogre::FixedString *)v41, (Ogre::FixedString *)"block", v5);
  v9 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v9, (const Ogre::FixedString *)v41);
  *(this + 14) = v9;
  Ogre::FixedString::~FixedString(v41, v10);
  v39 = *(this + 14);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v41, (Ogre::FixedString *)"BLEND_MODE", v11);
  v12 = (void *)(Ogre::Material::setParamMacro(v39, (const Ogre::FixedString *)v41, 1u) >> 32);
  Ogre::FixedString::~FixedString(v41, v12);
  v13 = *(this + 14);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v41, (Ogre::FixedString *)"DOUBLE_SIDE", v14);
  v15 = (void *)(Ogre::Material::setParamMacro(v13, (const Ogre::FixedString *)v41, 1u) >> 32);
  Ogre::FixedString::~FixedString(v41, v15);
  v40 = *(this + 14);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v41, (Ogre::FixedString *)"g_DiffuseTex", v16);
  Texture = (Ogre::Texture *)BlockTexElement::getTexture(*(this + 12), 0);
  Ogre::Material::setParamTexture(v40, (const Ogre::FixedString *)v41, Texture, 0);
  Ogre::FixedString::~FixedString(v41, v18);
  *(this + 2) = (BlockTexElement *)BlockTexElement::getTexture(*(this + 12), 0);
  if ( v37 != nullptr )
  {
    j_sprintf(s, "%s_top", (const char *)*(this + 9) + 212);
    v38 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
    Ogre::FixedString::FixedString((Ogre::FixedString *)v41, (Ogre::FixedString *)s, v19);
    *(this + 13) = (BlockTexElement *)BlockMaterialMgr::getTexElement(v38, (const Ogre::FixedString *)v41, 1);
    Ogre::FixedString::~FixedString(v41, v20);
    Ogre::FixedString::FixedString((Ogre::FixedString *)v41, (Ogre::FixedString *)"block", v21);
    v22 = (Ogre::Material *)operator new(0x2Cu);
    Ogre::Material::Material(v22, (const Ogre::FixedString *)v41);
    *(this + 15) = v22;
    Ogre::FixedString::~FixedString(v41, v23);
    v24 = *(this + 15);
    Ogre::FixedString::FixedString((Ogre::FixedString *)v41, (Ogre::FixedString *)"BLEND_MODE", v25);
    v26 = (void *)(Ogre::Material::setParamMacro(v24, (const Ogre::FixedString *)v41, 1u) >> 32);
    Ogre::FixedString::~FixedString(v41, v26);
    v27 = *(this + 15);
    Ogre::FixedString::FixedString((Ogre::FixedString *)v41, (Ogre::FixedString *)"DOUBLE_SIDE", v28);
    v29 = (void *)(Ogre::Material::setParamMacro(v27, (const Ogre::FixedString *)v41, 1u) >> 32);
    Ogre::FixedString::~FixedString(v41, v29);
    v30 = *(this + 15);
    Ogre::FixedString::FixedString((Ogre::FixedString *)v41, (Ogre::FixedString *)"g_DiffuseTex", v31);
    v32 = (Ogre::Texture *)BlockTexElement::getTexture(*(this + 13), 0);
    Ogre::Material::setParamTexture(v30, (const Ogre::FixedString *)v41, v32, 0);
    Ogre::FixedString::~FixedString(v41, v33);
    *(this + 2) = (BlockTexElement *)BlockTexElement::getTexture(*(this + 13), 0);
  }
  result = (int)*(this + 2);
  if ( result != 0 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)result + 4))(result);
    result = (*(int (__fastcall **)(_DWORD, Ogre::FixedString **))(*(_DWORD *)*(this + 2) + 28))(*(this + 2), v41);
    v35 = v41[1];
    *(this + 6) = v41[2];
    *(this + 3) = nullptr;
    *(this + 4) = nullptr;
    *((_BYTE *)this + 28) = 80;
    *((_BYTE *)this + 30) = 80;
    *(this + 5) = v35;
    *((_BYTE *)this + 29) = -56;
    *((_BYTE *)this + 31) = -1;
  }
  return result;
}


//======================================================================
// GrayHerbMaterial::GrayHerbMaterial(void)
// address: 0x00265FF4   size: 0x1C (28 bytes)
//======================================================================
// Alternative name is '_ZN16GrayHerbMaterialC1Ev'
void __fastcall GrayHerbMaterial::GrayHerbMaterial(GrayHerbMaterial *this)
{
  BlockMaterial::BlockMaterial(this);
  *(_DWORD *)this = &off_45B538;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
}


//======================================================================
// GrayHerbMaterial::newObject(void)
// address: 0x002C1652   size: 0x12 (18 bytes)
//======================================================================
GrayHerbMaterial *__fastcall GrayHerbMaterial::newObject(GrayHerbMaterial *this)
{
  GrayHerbMaterial *v1; // r4

  v1 = (GrayHerbMaterial *)operator new(0x40u);
  GrayHerbMaterial::GrayHerbMaterial(v1);
  return v1;
}

