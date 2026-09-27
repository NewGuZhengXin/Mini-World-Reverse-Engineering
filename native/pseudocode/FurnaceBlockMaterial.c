// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: FurnaceBlockMaterial

//======================================================================
// FurnaceBlockMaterial::newObject(void)
// address: 0x002C168A   size: 0x12 (18 bytes)
//======================================================================
FurnaceBlockMaterial *__fastcall FurnaceBlockMaterial::newObject(FurnaceBlockMaterial *this)
{
  FurnaceBlockMaterial *v1; // r4

  v1 = (FurnaceBlockMaterial *)operator new(0x58u);
  FurnaceBlockMaterial::FurnaceBlockMaterial(v1);
  return v1;
}


//======================================================================
// FurnaceBlockMaterial::getDestroyTexture(Block *,BlockTexDesc &)
// address: 0x002F6D58   size: 0x10 (16 bytes)
//======================================================================
int __fastcall FurnaceBlockMaterial::getDestroyTexture(int a1, int a2, int a3)
{
  *(_DWORD *)a3 = 0;
  *(_BYTE *)(a3 + 4) = 0;
  return BlockTexElement::getTexture(*(BlockTexElement **)(a1 + 60), 0);
}


//======================================================================
// FurnaceBlockMaterial::onBlockRemoved(World *,WCoord const&,int,int)
// address: 0x002F6D68   size: 0x26 (38 bytes)
//======================================================================
int __fastcall FurnaceBlockMaterial::onBlockRemoved(
        FurnaceBlockMaterial *this,
        WorldContainerMgr **a2,
        const WCoord *a3,
        int a4,
        int a5)
{
  WorldContainerMgr::destroyContainer(a2[32], a3);
  BlockMaterial::onBlockRemoved();
  return a5;
}


//======================================================================
// FurnaceBlockMaterial::onBlockPlaced(World *,WCoord const&,DirectionType,float,float,float,int)
// address: 0x002F6D90   size: 0x18 (24 bytes)
//======================================================================
int __fastcall FurnaceBlockMaterial::onBlockPlaced(int a1, int a2, int *a3)
{
  return BlockOperateMgr::getCurPlaceDir(
           (BlockOperateMgr *)Ogre::Singleton<BlockOperateMgr>::ms_Singleton,
           *a3,
           a3[1],
           a3[2]);
}


//======================================================================
// FurnaceBlockMaterial::getFaceMtl(DirectionType,int)
// address: 0x002F6DAC   size: 0x24 (36 bytes)
//======================================================================
int __fastcall FurnaceBlockMaterial::getFaceMtl(_DWORD *a1, int a2, char a3)
{
  if ( (unsigned int)(a2 - 4) <= 1 )
    return a1[21];
  if ( a2 != (a3 & 3) )
    return a1[20];
  if ( (a3 & 4) != 0 )
    return a1[19];
  return a1[18];
}


//======================================================================
// FurnaceBlockMaterial::getFaceTexture(DirectionType,BlockTexDesc &)
// address: 0x002F6DD0   size: 0x24 (36 bytes)
//======================================================================
int __fastcall FurnaceBlockMaterial::getFaceTexture(_DWORD *a1, int a2, int a3)
{
  BlockTexElement *v3; // r0

  *(_DWORD *)a3 = 0;
  *(_BYTE *)(a3 + 4) = 0;
  if ( a2 == 2 )
  {
    v3 = (BlockTexElement *)a1[15];
  }
  else if ( (unsigned int)(a2 - 4) > 1 )
  {
    v3 = (BlockTexElement *)a1[16];
  }
  else
  {
    v3 = (BlockTexElement *)a1[17];
  }
  return BlockTexElement::getTexture(v3, 0);
}


//======================================================================
// FurnaceBlockMaterial::~FurnaceBlockMaterial()
// address: 0x002F6DF4   size: 0x50 (80 bytes)
//======================================================================
// Alternative name is '_ZN20FurnaceBlockMaterialD1Ev'
void __fastcall FurnaceBlockMaterial::~FurnaceBlockMaterial(FurnaceBlockMaterial *this)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r0
  _DWORD *v5; // r0

  *(_DWORD *)this = &off_462648;
  v2 = *((_DWORD **)this + 19);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 19) = 0;
  }
  v3 = *((_DWORD **)this + 18);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)this + 18) = 0;
  }
  v4 = *((_DWORD **)this + 21);
  if ( v4 != nullptr )
  {
    Ogre::BaseObject::release(v4);
    *((_DWORD *)this + 21) = 0;
  }
  v5 = *((_DWORD **)this + 20);
  if ( v5 != nullptr )
  {
    Ogre::BaseObject::release(v5);
    *((_DWORD *)this + 20) = 0;
  }
  SolidBlockMaterial::~SolidBlockMaterial(this);
}


//======================================================================
// FurnaceBlockMaterial::~FurnaceBlockMaterial()
// address: 0x002F6E48   size: 0x12 (18 bytes)
//======================================================================
void __fastcall FurnaceBlockMaterial::~FurnaceBlockMaterial(FurnaceBlockMaterial *this)
{
  FurnaceBlockMaterial::~FurnaceBlockMaterial(this);
  operator delete(this);
}


//======================================================================
// FurnaceBlockMaterial::FurnaceBlockMaterial(void)
// address: 0x002F6E5C   size: 0x20 (32 bytes)
//======================================================================
// Alternative name is '_ZN20FurnaceBlockMaterialC2Ev'
void __fastcall FurnaceBlockMaterial::FurnaceBlockMaterial(FurnaceBlockMaterial *this)
{
  SolidBlockMaterial::SolidBlockMaterial(this);
  *(_DWORD *)this = &off_462648;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
}


//======================================================================
// FurnaceBlockMaterial::init(int)
// address: 0x002F6E80   size: 0x204 (516 bytes)
//======================================================================
void __fastcall FurnaceBlockMaterial::init(__int64 this, int a2)
{
  int v2; // r4
  int v3; // r2
  void *v4; // r1
  int v5; // r2
  void *v6; // r1
  BlockMaterialMgr *v7; // r5
  int v8; // r2
  void *v9; // r1
  int v10; // r2
  Ogre::Material *v11; // r5
  void *v12; // r1
  Ogre::Material *v13; // r5
  int v14; // r2
  Ogre::Texture *Texture; // r0
  void *v16; // r1
  int v17; // r2
  Ogre::Material *v18; // r5
  void *v19; // r1
  Ogre::Material *v20; // r5
  int v21; // r2
  Ogre::Texture *v22; // r0
  void *v23; // r1
  int v24; // r2
  Ogre::Material *v25; // r5
  void *v26; // r1
  Ogre::Material *v27; // r5
  int v28; // r2
  Ogre::Texture *v29; // r0
  void *v30; // r1
  int v31; // r2
  Ogre::Material *v32; // r5
  void *v33; // r1
  Ogre::Material *v34; // r5
  int v35; // r2
  Ogre::Texture *v36; // r0
  void *v37; // r1
  BlockMaterialMgr *v38; // [sp+8h] [bp-114h]
  BlockMaterialMgr *v39; // [sp+8h] [bp-114h]
  Ogre::FixedString *v40; // [sp+10h] [bp-10Ch] BYREF
  char s[256]; // [sp+14h] [bp-108h] BYREF

  v2 = this;
  SolidBlockMaterial::init(this, a2);
  j_sprintf(s, "%s_front", (const char *)(*(_DWORD *)(v2 + 36) + 212));
  v38 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v40, (Ogre::FixedString *)s, v3);
  *(_DWORD *)(v2 + 60) = BlockMaterialMgr::getTexElement(v38, (const char **)&v40, 2u);
  Ogre::FixedString::~FixedString(&v40, v4);
  j_sprintf(s, "%s_top", (const char *)(*(_DWORD *)(v2 + 36) + 212));
  v39 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v40, (Ogre::FixedString *)s, v5);
  *(_DWORD *)(v2 + 68) = BlockMaterialMgr::getTexElement(v39, (const char **)&v40, 1u);
  Ogre::FixedString::~FixedString(&v40, v6);
  j_sprintf(s, "%s_side", (const char *)(*(_DWORD *)(v2 + 36) + 212));
  v7 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v40, (Ogre::FixedString *)s, v8);
  *(_DWORD *)(v2 + 64) = BlockMaterialMgr::getTexElement(v7, (const char **)&v40, 1u);
  Ogre::FixedString::~FixedString(&v40, v9);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v40, (Ogre::FixedString *)"block", v10);
  v11 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v11, (const Ogre::FixedString *)&v40);
  *(_DWORD *)(v2 + 72) = v11;
  Ogre::FixedString::~FixedString(&v40, v12);
  v13 = *(Ogre::Material **)(v2 + 72);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v40, (Ogre::FixedString *)"g_DiffuseTex", v14);
  Texture = (Ogre::Texture *)BlockTexElement::getTexture(*(BlockTexElement **)(v2 + 60), 0);
  Ogre::Material::setParamTexture(v13, (const Ogre::FixedString *)&v40, Texture, 0);
  Ogre::FixedString::~FixedString(&v40, v16);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v40, (Ogre::FixedString *)"block", v17);
  v18 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v18, (const Ogre::FixedString *)&v40);
  *(_DWORD *)(v2 + 76) = v18;
  Ogre::FixedString::~FixedString(&v40, v19);
  v20 = *(Ogre::Material **)(v2 + 76);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v40, (Ogre::FixedString *)"g_DiffuseTex", v21);
  v22 = (Ogre::Texture *)BlockTexElement::getTexture(*(BlockTexElement **)(v2 + 60), 1);
  Ogre::Material::setParamTexture(v20, (const Ogre::FixedString *)&v40, v22, 0);
  Ogre::FixedString::~FixedString(&v40, v23);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v40, (Ogre::FixedString *)"block", v24);
  v25 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v25, (const Ogre::FixedString *)&v40);
  *(_DWORD *)(v2 + 80) = v25;
  Ogre::FixedString::~FixedString(&v40, v26);
  v27 = *(Ogre::Material **)(v2 + 80);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v40, (Ogre::FixedString *)"g_DiffuseTex", v28);
  v29 = (Ogre::Texture *)BlockTexElement::getTexture(*(BlockTexElement **)(v2 + 64), 0);
  Ogre::Material::setParamTexture(v27, (const Ogre::FixedString *)&v40, v29, 0);
  Ogre::FixedString::~FixedString(&v40, v30);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v40, (Ogre::FixedString *)"block", v31);
  v32 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v32, (const Ogre::FixedString *)&v40);
  *(_DWORD *)(v2 + 84) = v32;
  Ogre::FixedString::~FixedString(&v40, v33);
  v34 = *(Ogre::Material **)(v2 + 84);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v40, (Ogre::FixedString *)"g_DiffuseTex", v35);
  v36 = (Ogre::Texture *)BlockTexElement::getTexture(*(BlockTexElement **)(v2 + 68), 0);
  Ogre::Material::setParamTexture(v34, (const Ogre::FixedString *)&v40, v36, 0);
  Ogre::FixedString::~FixedString(&v40, v37);
}

