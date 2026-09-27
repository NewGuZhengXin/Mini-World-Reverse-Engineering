// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BigMushroomStemMaterial

//======================================================================
// BigMushroomStemMaterial::newObject(void)
// address: 0x002C18A4   size: 0x1C (28 bytes)
//======================================================================
CubeBlockMaterial *__fastcall BigMushroomStemMaterial::newObject(BigMushroomStemMaterial *this)
{
  CubeBlockMaterial *v1; // r4

  v1 = (CubeBlockMaterial *)operator new(0x6Cu);
  CubeBlockMaterial::CubeBlockMaterial(v1);
  *(_DWORD *)v1 = &off_460278;
  return v1;
}


//======================================================================
// BigMushroomStemMaterial::~BigMushroomStemMaterial()
// address: 0x002D04A4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN23BigMushroomStemMaterialD1Ev'
void __fastcall BigMushroomStemMaterial::~BigMushroomStemMaterial(BigMushroomStemMaterial *this)
{
  *(_DWORD *)this = &off_460278;
  CubeBlockMaterial::~CubeBlockMaterial(this);
}


//======================================================================
// BigMushroomStemMaterial::~BigMushroomStemMaterial()
// address: 0x002D04C0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BigMushroomStemMaterial::~BigMushroomStemMaterial(BigMushroomStemMaterial *this)
{
  BigMushroomStemMaterial::~BigMushroomStemMaterial(this);
  operator delete(this);
}


//======================================================================
// BigMushroomStemMaterial::init(int)
// address: 0x002D06CC   size: 0x12C (300 bytes)
//======================================================================
_DWORD *__fastcall BigMushroomStemMaterial::init(__int64 this, int a2)
{
  int v2; // r6
  BlockMaterialMgr *v3; // r5
  int v4; // r2
  BlockTexElement *TexElement; // r5
  void *v6; // r1
  int v7; // r2
  void *v8; // r1
  int v9; // r2
  Ogre::Texture *Texture; // r0
  void *v11; // r1
  BlockMaterialMgr *v12; // r7
  int v13; // r2
  void *v14; // r1
  int v15; // r2
  Ogre::Material *v16; // r7
  void *v17; // r1
  int v18; // r2
  Ogre::Texture *v19; // r0
  void *v20; // r1
  Ogre::BaseObject *v22; // [sp+0h] [bp-14h]
  BlockTexElement *v23; // [sp+4h] [bp-10h]
  Ogre::FixedString *v24[2]; // [sp+Ch] [bp-8h] BYREF

  v2 = this;
  SolidBlockMaterial::init(this, a2);
  v3 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v24, (Ogre::FixedString *)(*(_DWORD *)(v2 + 36) + 212), v4);
  TexElement = (BlockTexElement *)BlockMaterialMgr::getTexElement(v3, (const char **)v24, 1u);
  Ogre::FixedString::~FixedString(v24, v6);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v24, (Ogre::FixedString *)"block", v7);
  v22 = (Ogre::BaseObject *)operator new(0x2Cu);
  Ogre::Material::Material(v22, (const Ogre::FixedString *)v24);
  Ogre::FixedString::~FixedString(v24, v8);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v24, (Ogre::FixedString *)"g_DiffuseTex", v9);
  Texture = (Ogre::Texture *)BlockTexElement::getTexture(TexElement, 0);
  Ogre::Material::setParamTexture(v22, (const Ogre::FixedString *)v24, Texture, 0);
  Ogre::FixedString::~FixedString(v24, v11);
  CubeBlockMaterial::setFaceMtl(v2, 5, (int)v22, (int)TexElement);
  CubeBlockMaterial::setFaceMtl(v2, 4, (int)v22, (int)TexElement);
  v12 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v24, (Ogre::FixedString *)(*(_DWORD *)(v2 + 36) + 244), v13);
  v23 = (BlockTexElement *)BlockMaterialMgr::getTexElement(v12, (const char **)v24, 1u);
  Ogre::FixedString::~FixedString(v24, v14);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v24, (Ogre::FixedString *)"block", v15);
  v16 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v16, (const Ogre::FixedString *)v24);
  Ogre::FixedString::~FixedString(v24, v17);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v24, (Ogre::FixedString *)"g_DiffuseTex", v18);
  v19 = (Ogre::Texture *)BlockTexElement::getTexture(v23, 0);
  Ogre::Material::setParamTexture(v16, (const Ogre::FixedString *)v24, v19, 0);
  Ogre::FixedString::~FixedString(v24, v20);
  CubeBlockMaterial::setFaceMtl(v2, 0, (int)v16, (int)v23);
  CubeBlockMaterial::setFaceMtl(v2, 1, (int)v16, (int)v23);
  CubeBlockMaterial::setFaceMtl(v2, 2, (int)v16, (int)v23);
  CubeBlockMaterial::setFaceMtl(v2, 3, (int)v16, (int)v23);
  Ogre::BaseObject::release(v22);
  return Ogre::BaseObject::release(v16);
}

