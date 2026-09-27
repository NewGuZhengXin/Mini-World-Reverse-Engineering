// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: SlabMaterial

//======================================================================
// SlabMaterial::newObject(void)
// address: 0x002C1BBC   size: 0x1C (28 bytes)
//======================================================================
CubeBlockMaterial *__fastcall SlabMaterial::newObject(SlabMaterial *this)
{
  CubeBlockMaterial *v1; // r4

  v1 = (CubeBlockMaterial *)operator new(0x6Cu);
  CubeBlockMaterial::CubeBlockMaterial(v1);
  *(_DWORD *)v1 = &off_462AA8;
  return v1;
}


//======================================================================
// SlabMaterial::onBlockPlaced(World *,WCoord const&,DirectionType,float,float,float,int)
// address: 0x002FC10C   size: 0x28 (40 bytes)
//======================================================================
bool __fastcall SlabMaterial::onBlockPlaced(int a1, int a2, int a3, int a4, float a5, float a6)
{
  if ( a4 == 4 )
    return false;
  if ( a4 == 5 )
    return true;
  return a6 > 0.5;
}


//======================================================================
// SlabMaterial::isOpaqueCube(void)
// address: 0x002FC134   size: 0x4 (4 bytes)
//======================================================================
int __fastcall SlabMaterial::isOpaqueCube(SlabMaterial *this)
{
  return 0;
}


//======================================================================
// SlabMaterial::hasSolidTopSurface(int)
// address: 0x002FC138   size: 0x8 (8 bytes)
//======================================================================
bool __fastcall SlabMaterial::hasSolidTopSurface(SlabMaterial *this, int a2)
{
  return a2 != 0;
}


//======================================================================
// SlabMaterial::getBlockHeight(int)
// address: 0x002FC140   size: 0x18 (24 bytes)
//======================================================================
int __fastcall SlabMaterial::getBlockHeight(SlabMaterial *this, int a2)
{
  int v2; // r0

  if ( a2 != 0 )
  {
    v2 = 254;
    if ( a2 == 1 )
      return -1090519040;
  }
  else
  {
    v2 = 252;
  }
  return v2 << 22;
}


//======================================================================
// SlabMaterial::~SlabMaterial()
// address: 0x002FC158   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN12SlabMaterialD1Ev'
void __fastcall SlabMaterial::~SlabMaterial(SlabMaterial *this)
{
  *(_DWORD *)this = &off_462AA8;
  CubeBlockMaterial::~CubeBlockMaterial(this);
}


//======================================================================
// SlabMaterial::~SlabMaterial()
// address: 0x002FC174   size: 0x12 (18 bytes)
//======================================================================
void __fastcall SlabMaterial::~SlabMaterial(SlabMaterial *this)
{
  SlabMaterial::~SlabMaterial(this);
  operator delete(this);
}


//======================================================================
// SlabMaterial::init(int)
// address: 0x002FC188   size: 0x2F0 (752 bytes)
//======================================================================
_DWORD *__fastcall SlabMaterial::init(__int64 this, int a2)
{
  void *v2; // r1
  int v3; // r2
  BlockMaterialMgr *v4; // r5
  void *v5; // r1
  int v6; // r2
  Ogre::Material *v7; // r5
  void *v8; // r1
  int v9; // r2
  Ogre::Texture *v10; // r0
  void *v11; // r1
  Ogre::Material *v12; // r7
  Ogre::Material *v13; // r6
  BlockMaterialMgr *v14; // r7
  void *v15; // r1
  BlockMaterialMgr *v16; // r6
  int v17; // r2
  BlockMaterialMgr *v18; // r5
  int v19; // r2
  void *v20; // r1
  int v21; // r2
  void *v22; // r1
  int v23; // r2
  Ogre::Texture *Texture; // r0
  void *v25; // r1
  int v26; // r2
  void *v27; // r1
  int v28; // r2
  Ogre::Texture *v29; // r0
  void *v30; // r1
  int v31; // r2
  void *v32; // r1
  int v33; // r2
  Ogre::Texture *v34; // r0
  void *v35; // r1
  BlockTexElement *v37; // [sp+8h] [bp-1Ch]
  BlockTexElement *TexElement; // [sp+8h] [bp-1Ch]
  int v39; // [sp+Ch] [bp-18h]
  BlockTexElement *v40; // [sp+10h] [bp-14h]
  BlockTexElement *v41; // [sp+14h] [bp-10h]
  Ogre::FixedString *v42; // [sp+20h] [bp-4h] BYREF
  char s[256]; // [sp+24h] [bp+0h] BYREF

  v39 = this;
  SolidBlockMaterial::init(this, a2);
  j_sprintf(s, "%s_top", (const char *)(*(_DWORD *)(v39 + 36) + 212));
  v37 = (BlockTexElement *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString(
    (Ogre::FixedString *)&v42,
    (Ogre::FixedString *)s,
    Ogre::Singleton<BlockMaterialMgr>::ms_Singleton);
  TexElement = (BlockTexElement *)BlockMaterialMgr::getTexElement(v37, (const char **)&v42, 0);
  Ogre::FixedString::~FixedString(&v42, v2);
  v3 = *(_DWORD *)(v39 + 36);
  if ( TexElement != nullptr )
  {
    if ( *(_BYTE *)(v3 + 244) != 0 )
    {
      v14 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
      Ogre::FixedString::FixedString((Ogre::FixedString *)&v42, (Ogre::FixedString *)(v3 + 244), v3);
      v41 = (BlockTexElement *)BlockMaterialMgr::getTexElement(v14, (const char **)&v42, 1u);
    }
    else
    {
      j_sprintf(s, "%s_side", (const char *)(v3 + 212));
      v16 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
      Ogre::FixedString::FixedString((Ogre::FixedString *)&v42, (Ogre::FixedString *)s, v17);
      v41 = (BlockTexElement *)BlockMaterialMgr::getTexElement(v16, (const char **)&v42, 1u);
    }
    Ogre::FixedString::~FixedString(&v42, v15);
    j_sprintf(s, "%s_bottom", (const char *)(*(_DWORD *)(v39 + 36) + 212));
    v18 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
    Ogre::FixedString::FixedString((Ogre::FixedString *)&v42, (Ogre::FixedString *)s, v19);
    v40 = (BlockTexElement *)BlockMaterialMgr::getTexElement(v18, (const char **)&v42, 0);
    Ogre::FixedString::~FixedString(&v42, v20);
    if ( v40 == nullptr )
    {
      v21 = (int)TexElement;
      v40 = TexElement;
    }
    Ogre::FixedString::FixedString((Ogre::FixedString *)&v42, (Ogre::FixedString *)"block", v21);
    v7 = (Ogre::Material *)operator new(0x2Cu);
    Ogre::Material::Material(v7, (const Ogre::FixedString *)&v42);
    Ogre::FixedString::~FixedString(&v42, v22);
    Ogre::FixedString::FixedString((Ogre::FixedString *)&v42, (Ogre::FixedString *)"g_DiffuseTex", v23);
    Texture = (Ogre::Texture *)BlockTexElement::getTexture(TexElement, 0);
    Ogre::Material::setParamTexture(v7, (const Ogre::FixedString *)&v42, Texture, 0);
    Ogre::FixedString::~FixedString(&v42, v25);
    Ogre::FixedString::FixedString((Ogre::FixedString *)&v42, (Ogre::FixedString *)"block", v26);
    v13 = (Ogre::Material *)operator new(0x2Cu);
    Ogre::Material::Material(v13, (const Ogre::FixedString *)&v42);
    Ogre::FixedString::~FixedString(&v42, v27);
    Ogre::FixedString::FixedString((Ogre::FixedString *)&v42, (Ogre::FixedString *)"g_DiffuseTex", v28);
    v29 = (Ogre::Texture *)BlockTexElement::getTexture(v41, 0);
    Ogre::Material::setParamTexture(v13, (const Ogre::FixedString *)&v42, v29, 0);
    Ogre::FixedString::~FixedString(&v42, v30);
    if ( v40 == TexElement )
    {
      v12 = v7;
      (*(void (__fastcall **)(Ogre::Material *))(*(_DWORD *)v7 + 4))(v7);
      TexElement = v40;
    }
    else
    {
      Ogre::FixedString::FixedString((Ogre::FixedString *)&v42, (Ogre::FixedString *)"block", v31);
      v12 = (Ogre::Material *)operator new(0x2Cu);
      Ogre::Material::Material(v12, (const Ogre::FixedString *)&v42);
      Ogre::FixedString::~FixedString(&v42, v32);
      Ogre::FixedString::FixedString((Ogre::FixedString *)&v42, (Ogre::FixedString *)"g_DiffuseTex", v33);
      v34 = (Ogre::Texture *)BlockTexElement::getTexture(v40, 0);
      Ogre::Material::setParamTexture(v12, (const Ogre::FixedString *)&v42, v34, 0);
      Ogre::FixedString::~FixedString(&v42, v35);
    }
    CubeBlockMaterial::setFaceMtl(v39, 1, (int)v13, (int)v41);
  }
  else
  {
    v4 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
    Ogre::FixedString::FixedString((Ogre::FixedString *)&v42, (Ogre::FixedString *)(v3 + 212), v3);
    TexElement = (BlockTexElement *)BlockMaterialMgr::getTexElement(v4, (const char **)&v42, 1u);
    Ogre::FixedString::~FixedString(&v42, v5);
    Ogre::FixedString::FixedString((Ogre::FixedString *)&v42, (Ogre::FixedString *)"block", v6);
    v7 = (Ogre::Material *)operator new(0x2Cu);
    Ogre::Material::Material(v7, (const Ogre::FixedString *)&v42);
    Ogre::FixedString::~FixedString(&v42, v8);
    Ogre::FixedString::FixedString((Ogre::FixedString *)&v42, (Ogre::FixedString *)"g_DiffuseTex", v9);
    v10 = (Ogre::Texture *)BlockTexElement::getTexture(TexElement, 0);
    Ogre::Material::setParamTexture(v7, (const Ogre::FixedString *)&v42, v10, 0);
    Ogre::FixedString::~FixedString(&v42, v11);
    v12 = v7;
    (*(void (__fastcall **)(Ogre::Material *))(*(_DWORD *)v7 + 4))(v7);
    v13 = v7;
    (*(void (__fastcall **)(Ogre::Material *))(*(_DWORD *)v7 + 4))(v7);
    v40 = TexElement;
    v41 = TexElement;
    CubeBlockMaterial::setFaceMtl(v39, 1, (int)v7, (int)TexElement);
  }
  CubeBlockMaterial::setFaceMtl(v39, 2, (int)v13, (int)v41);
  CubeBlockMaterial::setFaceMtl(v39, 0, (int)v13, (int)v41);
  CubeBlockMaterial::setFaceMtl(v39, 3, (int)v13, (int)v41);
  CubeBlockMaterial::setFaceMtl(v39, 5, (int)v7, (int)TexElement);
  CubeBlockMaterial::setFaceMtl(v39, 4, (int)v12, (int)v40);
  Ogre::BaseObject::release(v13);
  Ogre::BaseObject::release(v7);
  return Ogre::BaseObject::release(v12);
}

