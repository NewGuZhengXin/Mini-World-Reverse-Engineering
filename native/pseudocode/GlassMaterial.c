// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: GlassMaterial

//======================================================================
// GlassMaterial::newObject(void)
// address: 0x002C1B90   size: 0x1C (28 bytes)
//======================================================================
BasicBlockMaterial *__fastcall GlassMaterial::newObject(GlassMaterial *this)
{
  BasicBlockMaterial *v1; // r4

  v1 = (BasicBlockMaterial *)operator new(0x74u);
  BasicBlockMaterial::BasicBlockMaterial(v1);
  *(_DWORD *)v1 = &off_4617C8;
  return v1;
}


//======================================================================
// GlassMaterial::isOpaque(void)
// address: 0x002E44F4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall GlassMaterial::isOpaque(GlassMaterial *this)
{
  return 0;
}


//======================================================================
// GlassMaterial::isOpaqueCube(void)
// address: 0x002E44F8   size: 0x4 (4 bytes)
//======================================================================
int __fastcall GlassMaterial::isOpaqueCube(GlassMaterial *this)
{
  return 0;
}


//======================================================================
// GlassMaterial::renderAsNormalBlock(void)
// address: 0x002E44FC   size: 0x4 (4 bytes)
//======================================================================
int __fastcall GlassMaterial::renderAsNormalBlock(GlassMaterial *this)
{
  return 0;
}


//======================================================================
// GlassMaterial::coverNeighbor(World *,WCoord const&,DirectionType)
// address: 0x002E4500   size: 0x4 (4 bytes)
//======================================================================
int GlassMaterial::coverNeighbor()
{
  return 0;
}


//======================================================================
// GlassMaterial::getFaceTexture(DirectionType,BlockTexDesc &)
// address: 0x002E4504   size: 0x12 (18 bytes)
//======================================================================
int __fastcall GlassMaterial::getFaceTexture(int a1, int a2, int a3)
{
  *(_BYTE *)(a3 + 4) = 0;
  *(_DWORD *)a3 = 2;
  return BlockTexElement::getTexture(*(BlockTexElement **)(a1 + 60), 0);
}


//======================================================================
// GlassMaterial::~GlassMaterial()
// address: 0x002E4518   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN13GlassMaterialD1Ev'
void __fastcall GlassMaterial::~GlassMaterial(GlassMaterial *this)
{
  *(_DWORD *)this = &off_4617C8;
  BasicBlockMaterial::~BasicBlockMaterial(this);
}


//======================================================================
// GlassMaterial::~GlassMaterial()
// address: 0x002E4534   size: 0x12 (18 bytes)
//======================================================================
void __fastcall GlassMaterial::~GlassMaterial(GlassMaterial *this)
{
  GlassMaterial::~GlassMaterial(this);
  operator delete(this);
}


//======================================================================
// GlassMaterial::init(int)
// address: 0x002E4548   size: 0x2A (42 bytes)
//======================================================================
__int64 __fastcall GlassMaterial::init(__int64 this)
{
  int v1; // r4
  Ogre::Material *v2; // r4
  int v3; // r2
  int v4; // r3
  void *v5; // r1
  __int64 v7; // [sp+0h] [bp-8h] BYREF

  v7 = this;
  v1 = this;
  BasicBlockMaterial::init(this);
  v2 = *(Ogre::Material **)(v1 + 84);
  HIDWORD(v7) = Ogre::FixedString::insert((Ogre::FixedString *)"BLEND_MODE", (const char *)0xFFFFFFFF, v3, v4);
  v5 = (void *)(Ogre::Material::setParamMacro(v2, (const Ogre::FixedString *)((char *)&v7 + 4), 2u) >> 32);
  Ogre::FixedString::release(SHIDWORD(v7), v5);
  return v7;
}

