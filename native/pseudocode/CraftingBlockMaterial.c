// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: CraftingBlockMaterial

//======================================================================
// CraftingBlockMaterial::~CraftingBlockMaterial()
// address: 0x002A8560   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN21CraftingBlockMaterialD1Ev'
void __fastcall CraftingBlockMaterial::~CraftingBlockMaterial(CraftingBlockMaterial *this)
{
  *(_DWORD *)this = &off_45D778;
  CubeBlockMaterial::~CubeBlockMaterial(this);
}


//======================================================================
// CraftingBlockMaterial::~CraftingBlockMaterial()
// address: 0x002A857C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall CraftingBlockMaterial::~CraftingBlockMaterial(CraftingBlockMaterial *this)
{
  CraftingBlockMaterial::~CraftingBlockMaterial(this);
  operator delete(this);
}


//======================================================================
// CraftingBlockMaterial::init(int)
// address: 0x002A8590   size: 0x296 (662 bytes)
//======================================================================
_DWORD *__fastcall CraftingBlockMaterial::init(CraftingBlockMaterial *this, int a2)
{
  int v3; // r2
  void *v4; // r1
  int v5; // r2
  void *v6; // r1
  int v7; // r2
  void *v8; // r1
  BlockMaterialMgr *v9; // r6
  int v10; // r2
  void *v11; // r1
  int v12; // r2
  void *v13; // r1
  int v14; // r2
  Ogre::Texture *Texture; // r0
  void *v16; // r1
  int v17; // r2
  void *v18; // r1
  int v19; // r2
  Ogre::Texture *v20; // r0
  void *v21; // r1
  int v22; // r2
  Ogre::Material *v23; // r4
  void *v24; // r1
  int v25; // r2
  Ogre::Texture *v26; // r0
  void *v27; // r1
  int v28; // r2
  Ogre::Material *v29; // r5
  void *v30; // r1
  int v31; // r2
  Ogre::Texture *v32; // r0
  void *v33; // r1
  Ogre::BaseObject *v35; // [sp+4h] [bp-128h]
  Ogre::BaseObject *v36; // [sp+4h] [bp-128h]
  Ogre::BaseObject *v37; // [sp+4h] [bp-128h]
  Ogre::BaseObject *v38; // [sp+8h] [bp-124h]
  Ogre::BaseObject *v39; // [sp+8h] [bp-124h]
  BlockTexElement *TexElement; // [sp+Ch] [bp-120h]
  BlockTexElement *v41; // [sp+10h] [bp-11Ch]
  BlockTexElement *v42; // [sp+14h] [bp-118h]
  BlockTexElement *v43; // [sp+18h] [bp-114h]
  Ogre::FixedString *v44; // [sp+20h] [bp-10Ch] BYREF
  char s[256]; // [sp+24h] [bp-108h] BYREF

  SolidBlockMaterial::init(this, a2);
  j_sprintf(s, "%s_front", (const char *)(*((_DWORD *)this + 9) + 212));
  v38 = (Ogre::BaseObject *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v44, (Ogre::FixedString *)s, v3);
  TexElement = (BlockTexElement *)BlockMaterialMgr::getTexElement(v38, (const Ogre::FixedString *)&v44, 1);
  Ogre::FixedString::~FixedString(&v44, v4);
  j_sprintf(s, "%s_top", (const char *)(*((_DWORD *)this + 9) + 212));
  v35 = (Ogre::BaseObject *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v44, (Ogre::FixedString *)s, v5);
  v42 = (BlockTexElement *)BlockMaterialMgr::getTexElement(v35, (const Ogre::FixedString *)&v44, 1);
  Ogre::FixedString::~FixedString(&v44, v6);
  j_sprintf(s, "%s_side", (const char *)(*((_DWORD *)this + 9) + 212));
  v36 = (Ogre::BaseObject *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v44, (Ogre::FixedString *)s, v7);
  v41 = (BlockTexElement *)BlockMaterialMgr::getTexElement(v36, (const Ogre::FixedString *)&v44, 1);
  Ogre::FixedString::~FixedString(&v44, v8);
  v9 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v44, (Ogre::FixedString *)(*((_DWORD *)this + 9) + 244), v10);
  v43 = (BlockTexElement *)BlockMaterialMgr::getTexElement(v9, (const Ogre::FixedString *)&v44, 1);
  Ogre::FixedString::~FixedString(&v44, v11);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v44, (Ogre::FixedString *)"block", v12);
  v37 = (Ogre::BaseObject *)operator new(0x2Cu);
  Ogre::Material::Material(v37, (const Ogre::FixedString *)&v44);
  Ogre::FixedString::~FixedString(&v44, v13);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v44, (Ogre::FixedString *)"g_DiffuseTex", v14);
  Texture = (Ogre::Texture *)BlockTexElement::getTexture(TexElement, 0);
  Ogre::Material::setParamTexture(v37, (const Ogre::FixedString *)&v44, Texture, 0);
  Ogre::FixedString::~FixedString(&v44, v16);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v44, (Ogre::FixedString *)"block", v17);
  v39 = (Ogre::BaseObject *)operator new(0x2Cu);
  Ogre::Material::Material(v39, (const Ogre::FixedString *)&v44);
  Ogre::FixedString::~FixedString(&v44, v18);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v44, (Ogre::FixedString *)"g_DiffuseTex", v19);
  v20 = (Ogre::Texture *)BlockTexElement::getTexture(v42, 0);
  Ogre::Material::setParamTexture(v39, (const Ogre::FixedString *)&v44, v20, 0);
  Ogre::FixedString::~FixedString(&v44, v21);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v44, (Ogre::FixedString *)"block", v22);
  v23 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v23, (const Ogre::FixedString *)&v44);
  Ogre::FixedString::~FixedString(&v44, v24);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v44, (Ogre::FixedString *)"g_DiffuseTex", v25);
  v26 = (Ogre::Texture *)BlockTexElement::getTexture(v41, 0);
  Ogre::Material::setParamTexture(v23, (const Ogre::FixedString *)&v44, v26, 0);
  Ogre::FixedString::~FixedString(&v44, v27);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v44, (Ogre::FixedString *)"block", v28);
  v29 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v29, (const Ogre::FixedString *)&v44);
  Ogre::FixedString::~FixedString(&v44, v30);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v44, (Ogre::FixedString *)"g_DiffuseTex", v31);
  v32 = (Ogre::Texture *)BlockTexElement::getTexture(v43, 0);
  Ogre::Material::setParamTexture(v29, (const Ogre::FixedString *)&v44, v32, 0);
  Ogre::FixedString::~FixedString(&v44, v33);
  CubeBlockMaterial::setFaceMtl(this, 1, v37, TexElement);
  CubeBlockMaterial::setFaceMtl(this, 2, v37, TexElement);
  CubeBlockMaterial::setFaceMtl(this, 0, v23, v41);
  CubeBlockMaterial::setFaceMtl(this, 3, v23, v41);
  CubeBlockMaterial::setFaceMtl(this, 5, v39, v42);
  CubeBlockMaterial::setFaceMtl(this, 4, v29, v43);
  Ogre::BaseObject::release(v37);
  Ogre::BaseObject::release(v23);
  Ogre::BaseObject::release(v39);
  return Ogre::BaseObject::release(v29);
}


//======================================================================
// CraftingBlockMaterial::newObject(void)
// address: 0x002C1D74   size: 0x1C (28 bytes)
//======================================================================
CubeBlockMaterial *__fastcall CraftingBlockMaterial::newObject(CraftingBlockMaterial *this)
{
  CubeBlockMaterial *v1; // r4

  v1 = (CubeBlockMaterial *)operator new(0x6Cu);
  CubeBlockMaterial::CubeBlockMaterial(v1);
  *(_DWORD *)v1 = &off_45D778;
  return v1;
}

