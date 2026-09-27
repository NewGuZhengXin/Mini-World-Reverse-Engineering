// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: CactusMaterial

//======================================================================
// CactusMaterial::getTickRandomly(void)
// address: 0x002B5260   size: 0x4 (4 bytes)
//======================================================================
int __fastcall CactusMaterial::getTickRandomly(CactusMaterial *this)
{
  return 1;
}


//======================================================================
// CactusMaterial::getGeomName(void)
// address: 0x002B5264   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall CactusMaterial::getGeomName(CactusMaterial *this)
{
  return "cactus";
}


//======================================================================
// CactusMaterial::isOpaqueCube(void)
// address: 0x002B5270   size: 0x4 (4 bytes)
//======================================================================
int __fastcall CactusMaterial::isOpaqueCube(CactusMaterial *this)
{
  return 0;
}


//======================================================================
// CactusMaterial::renderAsNormalBlock(void)
// address: 0x002B5274   size: 0x4 (4 bytes)
//======================================================================
int __fastcall CactusMaterial::renderAsNormalBlock(CactusMaterial *this)
{
  return 0;
}


//======================================================================
// CactusMaterial::coverNeighbor(World *,WCoord const&,DirectionType)
// address: 0x002B5278   size: 0x4 (4 bytes)
//======================================================================
int CactusMaterial::coverNeighbor()
{
  return 0;
}


//======================================================================
// CactusMaterial::getFaceMtl(DirectionType,int)
// address: 0x002B527C   size: 0x16 (22 bytes)
//======================================================================
int __fastcall CactusMaterial::getFaceMtl(_DWORD *a1, int a2)
{
  if ( a2 == 5 )
    return a1[18];
  if ( a2 == 4 )
    return a1[19];
  return a1[20];
}


//======================================================================
// CactusMaterial::getDestroyTexture(Block *,BlockTexDesc &)
// address: 0x002B5292   size: 0x12 (18 bytes)
//======================================================================
int __fastcall CactusMaterial::getDestroyTexture(int a1, int a2, int a3)
{
  *(_BYTE *)(a3 + 4) = 0;
  *(_DWORD *)a3 = 1;
  return BlockTexElement::getTexture(*(BlockTexElement **)(a1 + 60), 0);
}


//======================================================================
// CactusMaterial::onNeighborBlockChange(World *,WCoord const&,int)
// address: 0x002B52A4   size: 0x1E (30 bytes)
//======================================================================
int __fastcall CactusMaterial::onNeighborBlockChange(CactusMaterial *this, World *a2, const WCoord *a3, int a4)
{
  int result; // r0

  result = (*(int (__fastcall **)(CactusMaterial *))(*(_DWORD *)this + 160))(this);
  if ( result == 0 )
    return World::destroyBlock(a2);
  return result;
}


//======================================================================
// CactusMaterial::getFaceTexture(DirectionType,BlockTexDesc &)
// address: 0x002B52C2   size: 0x24 (36 bytes)
//======================================================================
int __fastcall CactusMaterial::getFaceTexture(_DWORD *a1, int a2, int a3)
{
  BlockTexElement *v3; // r0

  *(_BYTE *)(a3 + 4) = 0;
  *(_DWORD *)a3 = 1;
  if ( a2 == 5 )
  {
    v3 = (BlockTexElement *)a1[15];
  }
  else if ( a2 == 4 )
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
// CactusMaterial::canPlaceBlockAt(World *,WCoord const&)
// address: 0x002B52E6   size: 0x20 (32 bytes)
//======================================================================
int __fastcall CactusMaterial::canPlaceBlockAt(CactusMaterial *this, World *a2, const WCoord *a3)
{
  int result; // r0

  result = BlockMaterial::canPlaceBlockAt(this, a2, a3);
  if ( result != 0 )
    return (*(int (__fastcall **)(CactusMaterial *, World *, const WCoord *))(*(_DWORD *)this + 160))(this, a2, a3);
  return result;
}


//======================================================================
// CactusMaterial::blockTick(World *,WCoord const&)
// address: 0x002B5306   size: 0xA0 (160 bytes)
//======================================================================
int __fastcall CactusMaterial::blockTick(CactusMaterial *this, World *a2, const WCoord *a3)
{
  int v4; // r3
  int v5; // r1
  int v7; // r2
  int result; // r0
  int v10; // r3
  int BlockData; // r0
  int v12; // [sp+Ch] [bp-20h]
  _DWORD v13[3]; // [sp+10h] [bp-1Ch] BYREF
  _DWORD v14[4]; // [sp+1Ch] [bp-10h] BYREF

  v4 = *((_DWORD *)a3 + 1);
  v5 = *(_DWORD *)a3;
  v7 = *((_DWORD *)a3 + 2);
  v13[0] = v5;
  v13[1] = v4 + 1;
  v13[2] = v7;
  result = World::getBlockID(a2, (const WCoord *)v13);
  v12 = 1;
  if ( result == 0 )
  {
    while ( 1 )
    {
      v14[1] = *((_DWORD *)a3 + 1) - v12;
      v10 = *((_DWORD *)a3 + 2);
      v14[0] = *(_DWORD *)a3;
      v14[2] = v10;
      result = World::getBlockID(a2, (const WCoord *)v14);
      if ( result != *((_DWORD *)this + 8) )
        break;
      ++v12;
    }
    if ( v12 <= 2 )
    {
      BlockData = World::getBlockData(a2, a3);
      if ( BlockData == 15 )
      {
        World::setBlockAll(a2, (const WCoord *)v13, *((_DWORD *)this + 8), 0, 3);
        World::setBlockData(a2, a3, 0, 4);
        return (*(int (__fastcall **)(CactusMaterial *, World *, _DWORD *, _DWORD))(*(_DWORD *)this + 144))(
                 this,
                 a2,
                 v13,
                 *((_DWORD *)this + 8));
      }
      else
      {
        return World::setBlockData(a2, a3, BlockData + 1, 4);
      }
    }
  }
  return result;
}


//======================================================================
// CactusMaterial::canBlockStay(World *,WCoord const&)
// address: 0x002B53A8   size: 0x84 (132 bytes)
//======================================================================
bool __fastcall CactusMaterial::canBlockStay(CactusMaterial *this, World *a2, const WCoord *a3)
{
  int *v3; // r4
  int v5; // r0
  int v6; // r1
  int v7; // r3
  int v8; // r1
  int v9; // r0
  int BlockID; // r0
  int v14; // [sp+14h] [bp-10h] BYREF
  int v15; // [sp+18h] [bp-Ch]
  int v16; // [sp+1Ch] [bp-8h]

  v3 = g_DirectionCoord;
  do
  {
    v5 = *((_DWORD *)a3 + 2);
    v6 = v3[2];
    v7 = *(_DWORD *)a3;
    v15 = *((_DWORD *)a3 + 1) + v3[1];
    v14 = v7 + *v3;
    v16 = v5 + v6;
    if ( World::isBlockSolid(a2, (const WCoord *)&v14) != 0 )
      return false;
    v3 += 3;
  }
  while ( v3 != &dword_516658 );
  v8 = *((_DWORD *)a3 + 2);
  v15 = *((_DWORD *)a3 + 1) + dword_51665C;
  v9 = *(_DWORD *)a3;
  v16 = v8 + dword_516660;
  v14 = v9 + dword_516658;
  BlockID = World::getBlockID(a2, (const WCoord *)&v14);
  return BlockID == *((_DWORD *)this + 8) || BlockID == 106;
}


//======================================================================
// CactusMaterial::~CactusMaterial()
// address: 0x002B5430   size: 0x42 (66 bytes)
//======================================================================
// Alternative name is '_ZN14CactusMaterialD1Ev'
void __fastcall CactusMaterial::~CactusMaterial(CactusMaterial *this)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r0

  *(_DWORD *)this = &off_45E400;
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
// CactusMaterial::~CactusMaterial()
// address: 0x002B5478   size: 0x12 (18 bytes)
//======================================================================
void __fastcall CactusMaterial::~CactusMaterial(CactusMaterial *this)
{
  CactusMaterial::~CactusMaterial(this);
  operator delete(this);
}


//======================================================================
// CactusMaterial::CactusMaterial(void)
// address: 0x002B548C   size: 0x24 (36 bytes)
//======================================================================
// Alternative name is '_ZN14CactusMaterialC1Ev'
void __fastcall CactusMaterial::CactusMaterial(CactusMaterial *this)
{
  SolidBlockMaterial::SolidBlockMaterial(this);
  *(_DWORD *)this = &off_45E400;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
}


//======================================================================
// CactusMaterial::init(int)
// address: 0x002B54B4   size: 0x218 (536 bytes)
//======================================================================
void __fastcall CactusMaterial::init(BlockTexElement **this, int a2)
{
  int v3; // r2
  void *v4; // r1
  int v5; // r2
  Ogre::Material *v6; // r6
  void *v7; // r1
  Ogre::Material *v8; // r6
  int v9; // r2
  void *v10; // r1
  Ogre::Material *v11; // r6
  int v12; // r2
  Ogre::Texture *Texture; // r0
  void *v14; // r1
  BlockMaterialMgr *v15; // r6
  int v16; // r2
  void *v17; // r1
  int v18; // r2
  Ogre::Material *v19; // r6
  void *v20; // r1
  Ogre::Material *v21; // r6
  int v22; // r2
  void *v23; // r1
  Ogre::Material *v24; // r6
  int v25; // r2
  Ogre::Texture *v26; // r0
  void *v27; // r1
  BlockMaterialMgr *v28; // r6
  int v29; // r2
  void *v30; // r1
  int v31; // r2
  Ogre::Material *v32; // r5
  void *v33; // r1
  Ogre::Material *v34; // r5
  int v35; // r2
  void *v36; // r1
  Ogre::Material *v37; // r5
  int v38; // r2
  Ogre::Texture *v39; // r0
  void *v40; // r1
  BlockMaterialMgr *v41; // [sp+4h] [bp-118h]
  Ogre::FixedString *v42; // [sp+10h] [bp-10Ch] BYREF
  char s[256]; // [sp+14h] [bp-108h] BYREF

  SolidBlockMaterial::init((SolidBlockMaterial *)this, a2);
  j_sprintf(s, "%s_top", (const char *)*(this + 9) + 212);
  v41 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v42, (Ogre::FixedString *)s, v3);
  *(this + 15) = (BlockTexElement *)BlockMaterialMgr::getTexElement(v41, (const Ogre::FixedString *)&v42, 1);
  Ogre::FixedString::~FixedString(&v42, v4);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v42, (Ogre::FixedString *)"block", v5);
  v6 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v6, (const Ogre::FixedString *)&v42);
  *(this + 18) = v6;
  Ogre::FixedString::~FixedString(&v42, v7);
  v8 = *(this + 18);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v42, (Ogre::FixedString *)"BLEND_MODE", v9);
  v10 = (void *)(Ogre::Material::setParamMacro(v8, (const Ogre::FixedString *)&v42, 1u) >> 32);
  Ogre::FixedString::~FixedString(&v42, v10);
  v11 = *(this + 18);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v42, (Ogre::FixedString *)"g_DiffuseTex", v12);
  Texture = (Ogre::Texture *)BlockTexElement::getTexture(*(this + 15), 0);
  Ogre::Material::setParamTexture(v11, (const Ogre::FixedString *)&v42, Texture, 0);
  Ogre::FixedString::~FixedString(&v42, v14);
  j_sprintf(s, "%s_bottom", (const char *)*(this + 9) + 212);
  v15 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v42, (Ogre::FixedString *)s, v16);
  *(this + 16) = (BlockTexElement *)BlockMaterialMgr::getTexElement(v15, (const Ogre::FixedString *)&v42, 1);
  Ogre::FixedString::~FixedString(&v42, v17);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v42, (Ogre::FixedString *)"block", v18);
  v19 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v19, (const Ogre::FixedString *)&v42);
  *(this + 19) = v19;
  Ogre::FixedString::~FixedString(&v42, v20);
  v21 = *(this + 19);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v42, (Ogre::FixedString *)"BLEND_MODE", v22);
  v23 = (void *)(Ogre::Material::setParamMacro(v21, (const Ogre::FixedString *)&v42, 1u) >> 32);
  Ogre::FixedString::~FixedString(&v42, v23);
  v24 = *(this + 19);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v42, (Ogre::FixedString *)"g_DiffuseTex", v25);
  v26 = (Ogre::Texture *)BlockTexElement::getTexture(*(this + 16), 0);
  Ogre::Material::setParamTexture(v24, (const Ogre::FixedString *)&v42, v26, 0);
  Ogre::FixedString::~FixedString(&v42, v27);
  j_sprintf(s, "%s_side", (const char *)*(this + 9) + 212);
  v28 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v42, (Ogre::FixedString *)s, v29);
  *(this + 17) = (BlockTexElement *)BlockMaterialMgr::getTexElement(v28, (const Ogre::FixedString *)&v42, 1);
  Ogre::FixedString::~FixedString(&v42, v30);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v42, (Ogre::FixedString *)"block", v31);
  v32 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v32, (const Ogre::FixedString *)&v42);
  *(this + 20) = v32;
  Ogre::FixedString::~FixedString(&v42, v33);
  v34 = *(this + 20);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v42, (Ogre::FixedString *)"BLEND_MODE", v35);
  v36 = (void *)(Ogre::Material::setParamMacro(v34, (const Ogre::FixedString *)&v42, 1u) >> 32);
  Ogre::FixedString::~FixedString(&v42, v36);
  v37 = *(this + 20);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v42, (Ogre::FixedString *)"g_DiffuseTex", v38);
  v39 = (Ogre::Texture *)BlockTexElement::getTexture(*(this + 17), 0);
  Ogre::Material::setParamTexture(v37, (const Ogre::FixedString *)&v42, v39, 0);
  Ogre::FixedString::~FixedString(&v42, v40);
}


//======================================================================
// CactusMaterial::newObject(void)
// address: 0x002C158E   size: 0x12 (18 bytes)
//======================================================================
CactusMaterial *__fastcall CactusMaterial::newObject(CactusMaterial *this)
{
  CactusMaterial *v1; // r4

  v1 = (CactusMaterial *)operator new(0x54u);
  CactusMaterial::CactusMaterial(v1);
  return v1;
}

