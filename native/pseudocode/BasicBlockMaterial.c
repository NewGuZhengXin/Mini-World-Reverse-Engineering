// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BasicBlockMaterial

//======================================================================
// BasicBlockMaterial::getTextureType(void)
// address: 0x0029FB58   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BasicBlockMaterial::getTextureType(BasicBlockMaterial *this)
{
  return 1;
}


//======================================================================
// BasicBlockMaterial::~BasicBlockMaterial()
// address: 0x0029FB5C   size: 0x32 (50 bytes)
//======================================================================
// Alternative name is '_ZN18BasicBlockMaterialD1Ev'
void __fastcall BasicBlockMaterial::~BasicBlockMaterial(BasicBlockMaterial *this)
{
  _DWORD *v2; // r0
  int v3; // r3

  *(_DWORD *)this = &off_45C798;
  v2 = *((_DWORD **)this + 28);
  if ( v2 != nullptr )
  {
    v3 = v2[1] - 1;
    v2[1] = v3;
    if ( v3 <= 0 )
      (*(void (__fastcall **)(_DWORD *))(*v2 + 24))(v2);
    *((_DWORD *)this + 28) = 0;
  }
  CubeBlockMaterial::~CubeBlockMaterial(this);
}


//======================================================================
// BasicBlockMaterial::~BasicBlockMaterial()
// address: 0x0029FB94   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BasicBlockMaterial::~BasicBlockMaterial(BasicBlockMaterial *this)
{
  BasicBlockMaterial::~BasicBlockMaterial(this);
  operator delete(this);
}


//======================================================================
// BasicBlockMaterial::BasicBlockMaterial(void)
// address: 0x0029FBA8   size: 0x1C (28 bytes)
//======================================================================
// Alternative name is '_ZN18BasicBlockMaterialC1Ev'
void __fastcall BasicBlockMaterial::BasicBlockMaterial(BasicBlockMaterial *this)
{
  CubeBlockMaterial::CubeBlockMaterial(this);
  *(_DWORD *)this = &off_45C798;
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 28) = 0;
}


//======================================================================
// BasicBlockMaterial::init(int)
// address: 0x0029FBC8   size: 0xB8 (184 bytes)
//======================================================================
__int64 __fastcall BasicBlockMaterial::init(__int64 this)
{
  int *v1; // r4
  BlockMaterialMgr *v2; // r6
  int v3; // r2
  unsigned __int8 *v4; // r0
  int v5; // r3
  int v6; // r0
  void *v7; // r1
  int v8; // r2
  int v9; // r3
  Ogre::Material *v10; // r6
  void *v11; // r1
  Ogre::Material *v12; // r6
  int v13; // r2
  int v14; // r3
  Ogre::Texture *Texture; // r0
  void *v16; // r1
  int i; // r5
  int v18; // r1
  __int64 v20; // [sp+0h] [bp-8h] BYREF

  v20 = this;
  v1 = (int *)this;
  SolidBlockMaterial::init((SolidBlockMaterial *)this, SHIDWORD(this));
  v2 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  v4 = Ogre::FixedString::insert(
         (Ogre::FixedString *)(v1[9] + 212),
         (const char *)0xFFFFFFFF,
         v3,
         (int)&Ogre::Singleton<BlockMaterialMgr>::ms_Singleton);
  v5 = *v1;
  HIDWORD(v20) = v4;
  v6 = (*(int (__fastcall **)(int *))(v5 + 216))(v1);
  v1[27] = BlockMaterialMgr::getTexElement(v2, (const Ogre::FixedString *)((char *)&v20 + 4), v6);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)&v20 + 1, v7);
  HIDWORD(v20) = Ogre::FixedString::insert((Ogre::FixedString *)"block", (const char *)0xFFFFFFFF, v8, v9);
  v10 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v10, (const Ogre::FixedString *)((char *)&v20 + 4));
  v1[28] = (int)v10;
  Ogre::FixedString::~FixedString((Ogre::FixedString **)&v20 + 1, v11);
  v12 = (Ogre::Material *)v1[28];
  HIDWORD(v20) = Ogre::FixedString::insert((Ogre::FixedString *)"g_DiffuseTex", (const char *)0xFFFFFFFF, v13, v14);
  Texture = (Ogre::Texture *)BlockTexElement::getTexture((BlockTexElement *)v1[27], 0);
  Ogre::Material::setParamTexture(v12, (const Ogre::FixedString *)((char *)&v20 + 4), Texture, 0);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)&v20 + 1, v16);
  for ( i = 0; i != 6; ++i )
  {
    v18 = i;
    CubeBlockMaterial::setFaceMtl(v1, v18, v1[28], v1[27]);
  }
  return v20;
}


//======================================================================
// BasicBlockMaterial::newObject(void)
// address: 0x002C16C2   size: 0x12 (18 bytes)
//======================================================================
BasicBlockMaterial *__fastcall BasicBlockMaterial::newObject(BasicBlockMaterial *this)
{
  BasicBlockMaterial *v1; // r4

  v1 = (BasicBlockMaterial *)operator new(0x74u);
  BasicBlockMaterial::BasicBlockMaterial(v1);
  return v1;
}

