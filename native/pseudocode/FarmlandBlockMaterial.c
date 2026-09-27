// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: FarmlandBlockMaterial

//======================================================================
// FarmlandBlockMaterial::isOpaqueCube(void)
// address: 0x002A5CDC   size: 0x4 (4 bytes)
//======================================================================
int __fastcall FarmlandBlockMaterial::isOpaqueCube(FarmlandBlockMaterial *this)
{
  return 0;
}


//======================================================================
// FarmlandBlockMaterial::renderAsNormalBlock(void)
// address: 0x002A5CE0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall FarmlandBlockMaterial::renderAsNormalBlock(FarmlandBlockMaterial *this)
{
  return 0;
}


//======================================================================
// FarmlandBlockMaterial::getTickRandomly(void)
// address: 0x002A5CE4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall FarmlandBlockMaterial::getTickRandomly(FarmlandBlockMaterial *this)
{
  return 1;
}


//======================================================================
// FarmlandBlockMaterial::getFaceMtl(DirectionType,int)
// address: 0x002A5CE8   size: 0x16 (22 bytes)
//======================================================================
int __fastcall FarmlandBlockMaterial::getFaceMtl(_DWORD *a1, int a2, int a3)
{
  if ( a2 != 5 )
    return a1[20];
  if ( a3 != 0 )
    return a1[19];
  return a1[18];
}


//======================================================================
// FarmlandBlockMaterial::getBlockHeight(int)
// address: 0x002A5D00   size: 0x4 (4 bytes)
//======================================================================
int __fastcall FarmlandBlockMaterial::getBlockHeight(FarmlandBlockMaterial *this, int a2)
{
  return 1064304640;
}


//======================================================================
// FarmlandBlockMaterial::getDestroyTexture(Block *,BlockTexDesc &)
// address: 0x002A5D08   size: 0x10 (16 bytes)
//======================================================================
int __fastcall FarmlandBlockMaterial::getDestroyTexture(int a1, int a2, int a3)
{
  *(_DWORD *)a3 = 0;
  *(_BYTE *)(a3 + 4) = 0;
  return BlockTexElement::getTexture(*(BlockTexElement **)(a1 + 68), 0);
}


//======================================================================
// FarmlandBlockMaterial::getFaceTexture(DirectionType,BlockTexDesc &)
// address: 0x002A5D18   size: 0x1A (26 bytes)
//======================================================================
int __fastcall FarmlandBlockMaterial::getFaceTexture(int a1, int a2, int a3)
{
  BlockTexElement *v3; // r0

  *(_DWORD *)a3 = 0;
  *(_BYTE *)(a3 + 4) = 0;
  if ( a2 == 5 )
    v3 = *(BlockTexElement **)(a1 + 60);
  else
    v3 = *(BlockTexElement **)(a1 + 68);
  return BlockTexElement::getTexture(v3, 0);
}


//======================================================================
// FarmlandBlockMaterial::onNeighborBlockChange(World *,WCoord const&,int)
// address: 0x002A5D32   size: 0x2E (46 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> FarmlandBlockMaterial::onNeighborBlockChange(
        FarmlandBlockMaterial *this,
        World *a2,
        const WCoord *a3,
        int a4)
{
  BlockMaterial::onNeighborBlockChange(this, a2, a3, a4);
  if ( World::isBlockSolid(a2, *(_DWORD *)a3, *((_DWORD *)a3 + 1) + 1, *((_DWORD *)a3 + 2)) != 0 )
    World::setBlockAll(a2, a3, 101, 0, 3);
}


//======================================================================
// FarmlandBlockMaterial::~FarmlandBlockMaterial()
// address: 0x002A5D60   size: 0x42 (66 bytes)
//======================================================================
// Alternative name is '_ZN21FarmlandBlockMaterialD1Ev'
void __fastcall FarmlandBlockMaterial::~FarmlandBlockMaterial(FarmlandBlockMaterial *this)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r0

  *(_DWORD *)this = &off_45CFB0;
  v2 = *((_DWORD **)this + 18);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 18) = 0;
  }
  v3 = *((_DWORD **)this + 19);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)this + 19) = 0;
  }
  v4 = *((_DWORD **)this + 20);
  if ( v4 != nullptr )
  {
    Ogre::BaseObject::release(v4);
    *((_DWORD *)this + 20) = 0;
  }
  SolidBlockMaterial::~SolidBlockMaterial(this);
}


//======================================================================
// FarmlandBlockMaterial::~FarmlandBlockMaterial()
// address: 0x002A5DA8   size: 0x12 (18 bytes)
//======================================================================
void __fastcall FarmlandBlockMaterial::~FarmlandBlockMaterial(FarmlandBlockMaterial *this)
{
  FarmlandBlockMaterial::~FarmlandBlockMaterial(this);
  operator delete(this);
}


//======================================================================
// FarmlandBlockMaterial::FarmlandBlockMaterial(void)
// address: 0x002A5DBC   size: 0x20 (32 bytes)
//======================================================================
// Alternative name is '_ZN21FarmlandBlockMaterialC1Ev'
void __fastcall FarmlandBlockMaterial::FarmlandBlockMaterial(FarmlandBlockMaterial *this)
{
  SolidBlockMaterial::SolidBlockMaterial(this);
  *(_DWORD *)this = &off_45CFB0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
}


//======================================================================
// FarmlandBlockMaterial::isWaterNearby(World *,WCoord const&)
// address: 0x002A5DE0   size: 0x54 (84 bytes)
//======================================================================
int __fastcall FarmlandBlockMaterial::isWaterNearby(FarmlandBlockMaterial *this, World *a2, const WCoord *a3)
{
  int i; // r5
  int v5; // r6
  int j; // r7
  _DWORD v9[4]; // [sp+Ch] [bp-10h] BYREF

  for ( i = *((_DWORD *)a3 + 1); ; ++i )
  {
    if ( i > *((_DWORD *)a3 + 1) + 1 )
      return 0;
    v5 = *(_DWORD *)a3 - 4;
LABEL_4:
    if ( v5 <= *(_DWORD *)a3 + 4 )
      break;
  }
  for ( j = *((_DWORD *)a3 + 2) - 4; ; ++j )
  {
    if ( j > *((_DWORD *)a3 + 2) + 4 )
    {
      ++v5;
      goto LABEL_4;
    }
    v9[0] = v5;
    v9[1] = i;
    v9[2] = j;
    if ( (unsigned int)(World::getBlockID(a2, (const WCoord *)v9) - 3) <= 1 )
      break;
  }
  return 1;
}


//======================================================================
// FarmlandBlockMaterial::isCropsNearby(World *,WCoord const&)
// address: 0x002A5E34   size: 0x52 (82 bytes)
//======================================================================
int __fastcall FarmlandBlockMaterial::isCropsNearby(FarmlandBlockMaterial *this, World *a2, const WCoord *a3)
{
  int v3; // r5
  int i; // r6
  int BlockID; // r0
  _DWORD v9[4]; // [sp+4h] [bp-10h] BYREF

  v3 = *(_DWORD *)a3;
LABEL_2:
  if ( v3 > *(_DWORD *)a3 )
    return 0;
  for ( i = *((_DWORD *)a3 + 2); ; ++i )
  {
    if ( i > *((_DWORD *)a3 + 2) )
    {
      ++v3;
      goto LABEL_2;
    }
    v9[1] = *((_DWORD *)a3 + 1) + 1;
    v9[0] = v3;
    v9[2] = i;
    BlockID = World::getBlockID(a2, (const WCoord *)v9);
    if ( (BlockID & 0xFFFFFFFD) == 0xE5 || (unsigned int)(BlockID - 240) <= 1 || BlockID == 236 )
      break;
  }
  return 1;
}


//======================================================================
// FarmlandBlockMaterial::blockTick(World *,WCoord const&)
// address: 0x002A5E86   size: 0x78 (120 bytes)
//======================================================================
int __fastcall FarmlandBlockMaterial::blockTick(FarmlandBlockMaterial *this, World *a2, const WCoord *a3)
{
  int v6; // r2
  int v7; // r3
  int BlockData; // r0
  int v9; // r2
  const WCoord *v10; // r1
  World *v11; // r0
  int result; // r0
  _DWORD v13[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( FarmlandBlockMaterial::isWaterNearby(this, a2, a3) != 0
    || (v6 = *(_DWORD *)a3,
        v13[1] = *((_DWORD *)a3 + 1) + 1,
        v7 = *((_DWORD *)a3 + 2),
        v13[0] = v6,
        v13[2] = v7,
        World::canLightningStrikeAt(a2, (const WCoord *)v13) != 0) )
  {
    v11 = a2;
    v10 = a3;
    v9 = 7;
    return World::setBlockData(v11, v10, v9, 2);
  }
  BlockData = World::getBlockData(a2, a3);
  if ( BlockData > 0 )
  {
    v9 = BlockData - 1;
    v10 = a3;
    v11 = a2;
    return World::setBlockData(v11, v10, v9, 2);
  }
  result = FarmlandBlockMaterial::isCropsNearby(this, a2, a3);
  if ( result == 0 )
    return World::setBlockAll(a2, a3, 101, 0, 3);
  return result;
}


//======================================================================
// FarmlandBlockMaterial::init(int)
// address: 0x002A5F00   size: 0x1A6 (422 bytes)
//======================================================================
void __fastcall FarmlandBlockMaterial::init(BlockTexElement **this, int a2)
{
  int v3; // r2
  void *v4; // r1
  int v5; // r2
  void *v6; // r1
  int v7; // r2
  Ogre::Material *v8; // r5
  void *v9; // r1
  Ogre::Material *v10; // r5
  int v11; // r2
  Ogre::Texture *Texture; // r0
  void *v13; // r1
  int v14; // r2
  Ogre::Material *v15; // r5
  void *v16; // r1
  Ogre::Material *v17; // r5
  int v18; // r2
  Ogre::Texture *v19; // r0
  void *v20; // r1
  BlockMaterialMgr *v21; // r5
  int v22; // r2
  void *v23; // r1
  int v24; // r2
  Ogre::Material *v25; // r5
  void *v26; // r1
  Ogre::Material *v27; // r5
  int v28; // r2
  Ogre::Texture *v29; // r0
  void *v30; // r1
  BlockMaterialMgr *v31; // [sp+8h] [bp-114h]
  BlockMaterialMgr *v32; // [sp+8h] [bp-114h]
  Ogre::FixedString *v33; // [sp+10h] [bp-10Ch] BYREF
  char s[256]; // [sp+14h] [bp-108h] BYREF

  SolidBlockMaterial::init((SolidBlockMaterial *)this, a2);
  j_sprintf(s, "%s_dry", (const char *)*(this + 9) + 212);
  v31 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v33, (Ogre::FixedString *)s, v3);
  *(this + 15) = (BlockTexElement *)BlockMaterialMgr::getTexElement(v31, (const Ogre::FixedString *)&v33, 1);
  Ogre::FixedString::~FixedString(&v33, v4);
  j_sprintf(s, "%s_wet", (const char *)*(this + 9) + 212);
  v32 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v33, (Ogre::FixedString *)s, v5);
  *(this + 16) = (BlockTexElement *)BlockMaterialMgr::getTexElement(v32, (const Ogre::FixedString *)&v33, 1);
  Ogre::FixedString::~FixedString(&v33, v6);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v33, (Ogre::FixedString *)"block", v7);
  v8 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v8, (const Ogre::FixedString *)&v33);
  *(this + 18) = v8;
  Ogre::FixedString::~FixedString(&v33, v9);
  v10 = *(this + 18);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v33, (Ogre::FixedString *)"g_DiffuseTex", v11);
  Texture = (Ogre::Texture *)BlockTexElement::getTexture(*(this + 15), 0);
  Ogre::Material::setParamTexture(v10, (const Ogre::FixedString *)&v33, Texture, 0);
  Ogre::FixedString::~FixedString(&v33, v13);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v33, (Ogre::FixedString *)"block", v14);
  v15 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v15, (const Ogre::FixedString *)&v33);
  *(this + 19) = v15;
  Ogre::FixedString::~FixedString(&v33, v16);
  v17 = *(this + 19);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v33, (Ogre::FixedString *)"g_DiffuseTex", v18);
  v19 = (Ogre::Texture *)BlockTexElement::getTexture(*(this + 16), 0);
  Ogre::Material::setParamTexture(v17, (const Ogre::FixedString *)&v33, v19, 0);
  Ogre::FixedString::~FixedString(&v33, v20);
  v21 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v33, (BlockTexElement *)((char *)*(this + 9) + 244), v22);
  *(this + 17) = (BlockTexElement *)BlockMaterialMgr::getTexElement(v21, (const Ogre::FixedString *)&v33, 1);
  Ogre::FixedString::~FixedString(&v33, v23);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v33, (Ogre::FixedString *)"block", v24);
  v25 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v25, (const Ogre::FixedString *)&v33);
  *(this + 20) = v25;
  Ogre::FixedString::~FixedString(&v33, v26);
  v27 = *(this + 20);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v33, (Ogre::FixedString *)"g_DiffuseTex", v28);
  v29 = (Ogre::Texture *)BlockTexElement::getTexture(*(this + 17), 0);
  Ogre::Material::setParamTexture(v27, (const Ogre::FixedString *)&v33, v29, 0);
  Ogre::FixedString::~FixedString(&v33, v30);
}


//======================================================================
// FarmlandBlockMaterial::newObject(void)
// address: 0x002C16A6   size: 0x12 (18 bytes)
//======================================================================
FarmlandBlockMaterial *__fastcall FarmlandBlockMaterial::newObject(FarmlandBlockMaterial *this)
{
  FarmlandBlockMaterial *v1; // r4

  v1 = (FarmlandBlockMaterial *)operator new(0x54u);
  FarmlandBlockMaterial::FarmlandBlockMaterial(v1);
  return v1;
}

