// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ModelBlockMaterial

//======================================================================
// ModelBlockMaterial::getBaseTexName(char *,BlockDef const*,int &)
// address: 0x002BE18E   size: 0xA (10 bytes)
//======================================================================
int __fastcall ModelBlockMaterial::getBaseTexName(int a1, int a2, int a3, _DWORD *a4)
{
  *a4 = 1;
  return a3 + 212;
}


//======================================================================
// ModelBlockMaterial::getProtoBlockGeomID(int *,int *)
// address: 0x002BE198   size: 0xC (12 bytes)
//======================================================================
int __fastcall ModelBlockMaterial::getProtoBlockGeomID(ModelBlockMaterial *this, int *a2, int *a3)
{
  *a2 = 0;
  *a3 = 2;
  return 1;
}


//======================================================================
// ModelBlockMaterial::isOpaque(void)
// address: 0x002BE1A4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ModelBlockMaterial::isOpaque(ModelBlockMaterial *this)
{
  return 0;
}


//======================================================================
// ModelBlockMaterial::isOpaqueCube(void)
// address: 0x002BE1A8   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ModelBlockMaterial::isOpaqueCube(ModelBlockMaterial *this)
{
  return 0;
}


//======================================================================
// ModelBlockMaterial::renderAsNormalBlock(void)
// address: 0x002BE1AC   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ModelBlockMaterial::renderAsNormalBlock(ModelBlockMaterial *this)
{
  return 0;
}


//======================================================================
// ModelBlockMaterial::hasSolidTopSurface(int)
// address: 0x002BE1B0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ModelBlockMaterial::hasSolidTopSurface(ModelBlockMaterial *this, int a2)
{
  return 0;
}


//======================================================================
// ModelBlockMaterial::getDestroyTexture(Block *,BlockTexDesc &)
// address: 0x002BE298   size: 0x12 (18 bytes)
//======================================================================
int __fastcall ModelBlockMaterial::getDestroyTexture(int a1, int a2, int a3)
{
  *(_DWORD *)a3 = 1;
  *(_BYTE *)(a3 + 4) = 0;
  return BlockTexElement::getTexture(*(BlockTexElement **)(a1 + 48), 0);
}


//======================================================================
// ModelBlockMaterial::createBlockProtoMesh(BlockInstanceData *)
// address: 0x002BE2AA   size: 0x90 (144 bytes)
//======================================================================
SectionMesh *__fastcall ModelBlockMaterial::createBlockProtoMesh(int a1)
{
  SectionMesh *v2; // r4
  int i; // [sp+14h] [bp-120h]
  int SubMesh; // [sp+18h] [bp-11Ch]
  int v6; // [sp+1Ch] [bp-118h]
  _DWORD v7[4]; // [sp+20h] [bp-114h] BYREF
  _DWORD v8[32]; // [sp+30h] [bp-104h] BYREF
  _DWORD v9[33]; // [sp+B0h] [bp-84h] BYREF

  v2 = (SectionMesh *)operator new(0x114u);
  SectionMesh::SectionMesh(v2, true);
  SubMesh = SectionMesh::getSubMesh(v2, *(Ogre::Material **)(a1 + 56));
  v6 = (*(int (__fastcall **)(int, _DWORD *, _DWORD *))(*(_DWORD *)a1 + 196))(a1, v8, v9);
  for ( i = 0; i < v6; ++i )
  {
    BlockGeomTemplate::getFaceVerts(*(_DWORD *)(a1 + 40), v7, v8[i], 1065353216, 0, v9[i], 0, nullptr);
    SectionSubMesh::addTriangleList(SubMesh, v7[2], v7[0], v7[3], v7[1], 0);
  }
  SectionMesh::onCreate(v2);
  return v2;
}


//======================================================================
// ModelBlockMaterial::getBlockGeomID(int *,int *,Section *,WCoord const&)
// address: 0x002BE33C   size: 0x30 (48 bytes)
//======================================================================
int __fastcall ModelBlockMaterial::getBlockGeomID(int a1, _DWORD *a2, unsigned int *a3, int a4, _DWORD *a5)
{
  int v5; // r0
  __int16 *v6; // r3

  v5 = *(_DWORD *)(a4 + 20);
  if ( v5 != 0 )
    v6 = (__int16 *)(v5 + 2 * ((16 * a5[2]) | (a5[1] << 8) | *a5));
  else
    v6 = &Section::m_EmptyBlock;
  *a2 = 0;
  *a3 = (unsigned int)((unsigned __int16)*v6 << 18) >> 30;
  return 1;
}


//======================================================================
// ModelBlockMaterial::createCollideData(CollisionDetect *,World *,WCoord const&)
// address: 0x002BE44C   size: 0xC8 (200 bytes)
//======================================================================
int __fastcall ModelBlockMaterial::createCollideData(
        ModelBlockMaterial *this,
        CollisionDetect *a2,
        World *a3,
        const WCoord *a4)
{
  int result; // r0
  int v7; // r6
  int v8; // r4
  int v9; // [sp+14h] [bp-98h]
  int v10; // [sp+18h] [bp-94h]
  int v11; // [sp+20h] [bp-8Ch]
  int v13[3]; // [sp+38h] [bp-74h] BYREF
  int v14[3]; // [sp+44h] [bp-68h] BYREF
  _DWORD v15[3]; // [sp+50h] [bp-5Ch] BYREF
  _DWORD v16[3]; // [sp+5Ch] [bp-50h] BYREF
  _DWORD v17[8]; // [sp+68h] [bp-44h] BYREF
  _DWORD v18[9]; // [sp+88h] [bp-24h] BYREF

  World::getSection(a3, a4);
  result = (*(int (__fastcall **)(ModelBlockMaterial *, _DWORD *, _DWORD *))(*(_DWORD *)this + 192))(this, v17, v18);
  v9 = 100 * *(_DWORD *)a4;
  v11 = result;
  v10 = 100 * *((_DWORD *)a4 + 1);
  v7 = 100 * *((_DWORD *)a4 + 2);
  v8 = 0;
  while ( v8 < v11 )
  {
    BlockGeomTemplate::getBoundBox(*((_DWORD **)this + 10), v13, v14, v17[v8], 1.0, v18[v8], 0);
    ++v8;
    v15[0] = v13[0] + v9;
    v15[1] = v10 + v13[1];
    v15[2] = v7 + v13[2];
    v16[0] = v14[0] + v9;
    v16[1] = v10 + v14[1];
    v16[2] = v7 + v14[2];
    result = CollisionDetect::addObstacle(a2, (const WCoord *)v15, (const WCoord *)v16);
  }
  return result;
}


//======================================================================
// ModelBlockMaterial::~ModelBlockMaterial()
// address: 0x002BE5B4   size: 0x34 (52 bytes)
//======================================================================
// Alternative name is '_ZN18ModelBlockMaterialD1Ev'
void __fastcall ModelBlockMaterial::~ModelBlockMaterial(ModelBlockMaterial *this)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0

  *(_DWORD *)this = &off_45F018;
  v2 = *((_DWORD **)this + 13);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 13) = 0;
  }
  v3 = *((_DWORD **)this + 14);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)this + 14) = 0;
  }
  BlockMaterial::~BlockMaterial(this);
}


//======================================================================
// ModelBlockMaterial::~ModelBlockMaterial()
// address: 0x002BE5EC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ModelBlockMaterial::~ModelBlockMaterial(ModelBlockMaterial *this)
{
  ModelBlockMaterial::~ModelBlockMaterial(this);
  operator delete(this);
}


//======================================================================
// ModelBlockMaterial::init(int)
// address: 0x002BE728   size: 0x19C (412 bytes)
//======================================================================
void __fastcall ModelBlockMaterial::init(__int64 this, int a2)
{
  int v3; // r1
  Ogre::FixedString *v4; // r0
  int v5; // r2
  void *v6; // r1
  int v7; // r0
  Ogre::FixedString *v8; // r0
  BlockMaterialMgr *v9; // r6
  int v10; // r2
  void *v11; // r1
  int v12; // r2
  Ogre::Material *v13; // r6
  void *v14; // r1
  Ogre::Material *v15; // r6
  int v16; // r2
  Ogre::Texture *Texture; // r0
  void *v18; // r1
  int v19; // r2
  Ogre::Material *v20; // r6
  void *v21; // r1
  Ogre::Material *v22; // r6
  int v23; // r2
  void *v24; // r1
  Ogre::Material *v25; // r6
  int v26; // r2
  Ogre::Texture *v27; // r0
  void *v28; // r1
  Ogre::Material *v29; // r6
  int v30; // r2
  void *v31; // r1
  BlockMaterialMgr *v32; // [sp+4h] [bp-128h]
  int v33; // [sp+Ch] [bp-120h] BYREF
  Ogre::FixedString *v34; // [sp+10h] [bp-11Ch] BYREF
  Ogre::FixedString *v35[4]; // [sp+14h] [bp-118h] BYREF
  _BYTE v36[256]; // [sp+24h] [bp-108h] BYREF

  v3 = (unsigned __int64)BlockMaterial::init(this, a2) >> 32;
  v32 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  v4 = (Ogre::FixedString *)(*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)this + 16))(this, v3);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v35, v4, v5);
  *(_DWORD *)(this + 40) = BlockMaterialMgr::getGeomTemplate(v32, (const Ogre::FixedString *)v35);
  Ogre::FixedString::~FixedString(v35, v6);
  if ( *(_DWORD *)(this + 40) == 0 )
  {
    Ogre::LogSetCurParam(
      (int)"D:/work/oworldsrc/client/iworld/BlockMaterial.cpp",
      (_BYTE *)&stru_298.st_value + 3,
      8,
      0);
    v7 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)this + 16))(this);
    Ogre::LogMessage((Ogre *)&unk_421AE2, (const char *)HIDWORD(this), v7);
  }
  v8 = (Ogre::FixedString *)(*(int (__fastcall **)(_DWORD, _BYTE *, _DWORD, int *))(*(_DWORD *)this + 188))(
                              this,
                              v36,
                              *(_DWORD *)(this + 36),
                              &v33);
  v9 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v35, v8, v10);
  *(_DWORD *)(this + 48) = BlockMaterialMgr::getTexElement(v9, (const Ogre::FixedString *)v35, v33);
  Ogre::FixedString::~FixedString(v35, v11);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v35, (Ogre::FixedString *)"block", v12);
  v13 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v13, (const Ogre::FixedString *)v35);
  *(_DWORD *)(this + 52) = v13;
  Ogre::FixedString::~FixedString(v35, v14);
  v15 = *(Ogre::Material **)(this + 52);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v35, (Ogre::FixedString *)"g_DiffuseTex", v16);
  Texture = (Ogre::Texture *)BlockTexElement::getTexture(*(BlockTexElement **)(this + 48), 0);
  Ogre::Material::setParamTexture(v15, (const Ogre::FixedString *)v35, Texture, 0);
  Ogre::FixedString::~FixedString(v35, v18);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v35, (Ogre::FixedString *)"blockitem", v19);
  v20 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v20, (const Ogre::FixedString *)v35);
  *(_DWORD *)(this + 56) = v20;
  Ogre::FixedString::~FixedString(v35, v21);
  v22 = *(Ogre::Material **)(this + 56);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v35, (Ogre::FixedString *)"USE_TEXTURE", v23);
  v24 = (void *)(Ogre::Material::setParamMacro(v22, (const Ogre::FixedString *)v35, 1u) >> 32);
  Ogre::FixedString::~FixedString(v35, v24);
  v25 = *(Ogre::Material **)(this + 56);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v35, (Ogre::FixedString *)"g_DiffuseTex", v26);
  v27 = (Ogre::Texture *)BlockTexElement::getTexture(*(BlockTexElement **)(this + 48), 0);
  Ogre::Material::setParamTexture(v25, (const Ogre::FixedString *)v35, v27, 0);
  Ogre::FixedString::~FixedString(v35, v28);
  v29 = *(Ogre::Material **)(this + 56);
  v35[0] = (Ogre::FixedString *)1065353216;
  v35[1] = (Ogre::FixedString *)1065353216;
  v35[2] = (Ogre::FixedString *)1065353216;
  v35[3] = (Ogre::FixedString *)1065353216;
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v34, (Ogre::FixedString *)"GrassColor", v30);
  Ogre::Material::setParamValue(v29, (const Ogre::FixedString *)&v34, v35);
  Ogre::FixedString::~FixedString(&v34, v31);
}


//======================================================================
// ModelBlockMaterial::createBlockMesh(ClientSection *,WCoord const&,SectionSubMesh *)
// address: 0x002BEA68   size: 0x7C (124 bytes)
//======================================================================
SectionSubMesh *__fastcall ModelBlockMaterial::createBlockMesh(
        ModelBlockMaterial *this,
        ClientSection *a2,
        const WCoord *a3,
        SectionSubMesh *a4)
{
  SectionSubMesh *result; // r0
  int v9; // r5
  int v10; // [sp+18h] [bp-13Ch]
  SectionSubMesh *v11; // [sp+1Ch] [bp-138h]
  _DWORD v12[4]; // [sp+20h] [bp-134h] BYREF
  float v13[8]; // [sp+30h] [bp-124h] BYREF
  _DWORD v14[32]; // [sp+50h] [bp-104h] BYREF
  _DWORD v15[33]; // [sp+D0h] [bp-84h] BYREF

  ClientSection::getBlockVertexLight(a2, a3, v13);
  v10 = (*(int (__fastcall **)(ModelBlockMaterial *, _DWORD *, _DWORD *, ClientSection *, const WCoord *))(*(_DWORD *)this + 192))(
          this,
          v14,
          v15,
          a2,
          a3);
  result = BlockMaterial::blockMeshOutput(this, a4, (SectionMesh **)a2, *((Ogre::Material **)this + 13));
  v9 = 0;
  v11 = result;
  while ( v9 < v10 )
  {
    BlockGeomTemplate::getFaceVerts(*((_DWORD *)this + 10), v12, v14[v9], 1065353216, 0, v15[v9], 0, nullptr);
    result = (SectionSubMesh *)SectionSubMesh::addGeomBlockLight(v11, v12, a3, v13, 0);
    ++v9;
  }
  return result;
}


//======================================================================
// ModelBlockMaterial::ModelBlockMaterial(void)
// address: 0x002BED90   size: 0x1C (28 bytes)
//======================================================================
// Alternative name is '_ZN18ModelBlockMaterialC1Ev'
void __fastcall ModelBlockMaterial::ModelBlockMaterial(ModelBlockMaterial *this)
{
  BlockMaterial::BlockMaterial(this);
  *(_DWORD *)this = &off_45F018;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
}

