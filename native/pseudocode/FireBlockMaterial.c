// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: FireBlockMaterial

//======================================================================
// FireBlockMaterial::getTickRandomly(void)
// address: 0x002A48B4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall FireBlockMaterial::getTickRandomly(FireBlockMaterial *this)
{
  return 1;
}


//======================================================================
// FireBlockMaterial::tickRate(void)
// address: 0x002A48B8   size: 0x4 (4 bytes)
//======================================================================
int __fastcall FireBlockMaterial::tickRate(FireBlockMaterial *this)
{
  return 30;
}


//======================================================================
// FireBlockMaterial::canTickImmediate(void)
// address: 0x002A48BC   size: 0x4 (4 bytes)
//======================================================================
int __fastcall FireBlockMaterial::canTickImmediate(FireBlockMaterial *this)
{
  return 0;
}


//======================================================================
// FireBlockMaterial::getGeomName(void)
// address: 0x002A48C0   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall FireBlockMaterial::getGeomName(FireBlockMaterial *this)
{
  return "fire";
}


//======================================================================
// FireBlockMaterial::~FireBlockMaterial()
// address: 0x002A48CC   size: 0x3C (60 bytes)
//======================================================================
// Alternative name is '_ZN17FireBlockMaterialD1Ev'
void __fastcall FireBlockMaterial::~FireBlockMaterial(FireBlockMaterial *this)
{
  int v2; // r5
  _DWORD *v3; // r0
  int v4; // r2

  v2 = 0;
  *(_DWORD *)this = &off_45CCD8;
  do
  {
    v3 = *(_DWORD **)((char *)this + v2 + 56);
    if ( v3 != nullptr )
    {
      v4 = v3[1] - 1;
      v3[1] = v4;
      if ( v4 <= 0 )
        (*(void (__fastcall **)(_DWORD *))(*v3 + 24))(v3);
      *(_DWORD *)((char *)this + v2 + 56) = 0;
    }
    v2 += 4;
  }
  while ( v2 != 8 );
  BlockMaterial::~BlockMaterial(this);
}


//======================================================================
// FireBlockMaterial::~FireBlockMaterial()
// address: 0x002A490C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall FireBlockMaterial::~FireBlockMaterial(FireBlockMaterial *this)
{
  FireBlockMaterial::~FireBlockMaterial(this);
  operator delete(this);
}


//======================================================================
// FireBlockMaterial::update(unsigned int)
// address: 0x002A49E8   size: 0xC2 (194 bytes)
//======================================================================
void __fastcall FireBlockMaterial::update(FireBlockMaterial *this, unsigned int a2)
{
  FireBlockMaterial *v3; // r5
  _DWORD *v4; // r4
  unsigned int v5; // r0
  int v6; // r2
  unsigned int v7; // r1
  unsigned int v8; // r7
  float v9; // r0
  Ogre::Material *v10; // r7
  void *v11; // r1
  int v12; // [sp+8h] [bp-1Ch]
  FireBlockMaterial *v13; // [sp+Ch] [bp-18h]
  Ogre::FixedString *v14; // [sp+14h] [bp-10h] BYREF
  float v15[3]; // [sp+18h] [bp-Ch] BYREF

  *((_DWORD *)this + 16) += a2;
  v3 = this;
  v13 = (FireBlockMaterial *)((char *)this + 8);
  do
  {
    v4 = *((_DWORD **)v3 + 12);
    v5 = *((_DWORD *)this + 16) / v4[6];
    if ( v4[9] != 0 )
    {
      v6 = v4[7];
      v7 = v4[8] * v6;
    }
    else
    {
      v6 = v4[10];
      v7 = (v4[11] - v6) >> 2;
    }
    v8 = v4[7];
    v12 = v4[8];
    v15[0] = (float)(v5 % v7 % v8) * (float)(1.0 / (float)(int)v8);
    v9 = (float)(v5 % v7 / v8);
    v10 = *((Ogre::Material **)v3 + 14);
    v15[1] = v9 * (float)(1.0 / (float)v12);
    Ogre::FixedString::FixedString((Ogre::FixedString *)&v14, (Ogre::FixedString *)"g_UVTranslate", v6);
    Ogre::Material::setParamValue(v10, (const Ogre::FixedString *)&v14, v15);
    Ogre::FixedString::~FixedString(&v14, v11);
    v3 = (FireBlockMaterial *)((char *)v3 + 4);
  }
  while ( v3 != v13 );
}


//======================================================================
// FireBlockMaterial::init(int)
// address: 0x002A4AB8   size: 0xF8 (248 bytes)
//======================================================================
int __fastcall FireBlockMaterial::init(BlockTexElement **this, int a2)
{
  int *v3; // r6
  Ogre::FixedString *v4; // r1
  void *v5; // r1
  int v6; // r2
  void *v7; // r1
  void *v8; // r1
  int v9; // r2
  Ogre::Texture *Texture; // r0
  void *v11; // r1
  BlockTexElement *v12; // r0
  _DWORD *v13; // r4
  int v14; // r6
  int result; // r0
  Ogre::Material *v16; // [sp+4h] [bp-18h]
  Ogre::Material *v17; // [sp+4h] [bp-18h]
  Ogre::Material *v18; // [sp+4h] [bp-18h]
  Ogre::Material *v19; // [sp+4h] [bp-18h]
  int i; // [sp+8h] [bp-14h]
  Ogre::FixedString *v21[2]; // [sp+14h] [bp-8h] BYREF

  BlockMaterial::init((BlockMaterial *)this, a2);
  v3 = (int *)(this + 14);
  for ( i = 0; i != 2; ++i )
  {
    v4 = (BlockTexElement *)((char *)*(this + 9) + 244);
    if ( i == 0 )
      v4 = (BlockTexElement *)((char *)*(this + 9) + 212);
    v16 = (Ogre::Material *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
    Ogre::FixedString::FixedString((Ogre::FixedString *)v21, v4, i);
    *(v3 - 2) = BlockMaterialMgr::getTexElement(v16, (const Ogre::FixedString *)v21, 3);
    Ogre::FixedString::~FixedString(v21, v5);
    Ogre::FixedString::FixedString((Ogre::FixedString *)v21, (Ogre::FixedString *)"block_uvanim", v6);
    v17 = (Ogre::Material *)operator new(0x2Cu);
    Ogre::Material::Material(v17, (const Ogre::FixedString *)v21);
    *v3 = (int)v17;
    Ogre::FixedString::~FixedString(v21, v7);
    v18 = (Ogre::Material *)*v3;
    Ogre::FixedString::FixedString((Ogre::FixedString *)v21, (Ogre::FixedString *)"BLEND_MODE", *v3);
    v8 = (void *)(Ogre::Material::setParamMacro(v18, (const Ogre::FixedString *)v21, 2u) >> 32);
    Ogre::FixedString::~FixedString(v21, v8);
    v19 = (Ogre::Material *)*v3;
    Ogre::FixedString::FixedString((Ogre::FixedString *)v21, (Ogre::FixedString *)"g_DiffuseTex", v9);
    Texture = (Ogre::Texture *)BlockTexElement::getTexture((BlockTexElement *)*(v3 - 2), 0);
    Ogre::Material::setParamTexture(v19, (const Ogre::FixedString *)v21, Texture, 0);
    Ogre::FixedString::~FixedString(v21, v11);
    ++v3;
  }
  v12 = (BlockTexElement *)BlockTexElement::getTexture(*(this + 12), 0);
  *(this + 2) = v12;
  if ( v12 != nullptr )
    (*(void (__fastcall **)(BlockTexElement *))(*(_DWORD *)v12 + 4))(v12);
  v13 = *(this + 12);
  v14 = v13[4] / v13[7];
  result = v13[5] / v13[8];
  *(this + 3) = nullptr;
  *(this + 4) = nullptr;
  *(this + 5) = (BlockTexElement *)v14;
  *(this + 6) = (BlockTexElement *)result;
  return result;
}


//======================================================================
// FireBlockMaterial::onNeighborBlockChange(World *,WCoord const&,int)
// address: 0x002A4BDC   size: 0x1C (28 bytes)
//======================================================================
int __fastcall FireBlockMaterial::onNeighborBlockChange(FireBlockMaterial *this, World *a2, const WCoord *a3, int a4)
{
  int result; // r0

  result = (*(int (__fastcall **)(FireBlockMaterial *))(*(_DWORD *)this + 152))(this);
  if ( result == 0 )
    return World::setBlockAir(a2, a3);
  return result;
}


//======================================================================
// FireBlockMaterial::onBlockAdded(World *,WCoord const&)
// address: 0x002A4BF8   size: 0x70 (112 bytes)
//======================================================================
int __fastcall FireBlockMaterial::onBlockAdded(FireBlockMaterial *this, BlockTickMgr **a2, const WCoord *a3)
{
  int result; // r0
  BlockTickMgr *v7; // r7
  int v8; // r6
  int v9; // r4
  unsigned int v10; // r0
  _DWORD v11[4]; // [sp+Ch] [bp+0h] BYREF

  operator+(v11, (int *)a3, &dword_516658);
  result = World::getBlockID((World *)a2, (const WCoord *)v11);
  if ( result != 112 )
  {
    if ( (*(int (__fastcall **)(FireBlockMaterial *, BlockTickMgr **, const WCoord *))(*(_DWORD *)this + 152))(
           this,
           a2,
           a3) != 0 )
    {
      v7 = a2[34];
      v8 = *((_DWORD *)this + 8);
      v9 = (*(int (__fastcall **)(FireBlockMaterial *))(*(_DWORD *)this + 100))(this);
      v10 = GenRandomInt(0xAu);
      return BlockTickMgr::scheduleBlockUpdate(v7, a3, v8, v9 + v10, 0);
    }
    else
    {
      return World::setBlockAir((World *)a2, a3);
    }
  }
  return result;
}


//======================================================================
// FireBlockMaterial::FireBlockMaterial(void)
// address: 0x002A4C6C   size: 0x22 (34 bytes)
//======================================================================
// Alternative name is '_ZN17FireBlockMaterialC1Ev'
void __fastcall FireBlockMaterial::FireBlockMaterial(FireBlockMaterial *this)
{
  BlockMaterial::BlockMaterial(this);
  *(_DWORD *)this = &off_45CCD8;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
}


//======================================================================
// FireBlockMaterial::tryToCatchBlockOnFire(World *,WCoord const&,int,int)
// address: 0x002A4C94   size: 0xA2 (162 bytes)
//======================================================================
int __fastcall FireBlockMaterial::tryToCatchBlockOnFire(
        FireBlockMaterial *this,
        World *a2,
        const WCoord *a3,
        unsigned int a4,
        int a5)
{
  int BlockID; // r6
  int result; // r0
  int v10; // r3
  int Material; // r0
  int BlockDef; // [sp+8h] [bp-Ch]

  BlockID = World::getBlockID(a2, a3);
  BlockDef = DefManager::getBlockDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, BlockID);
  result = GenRandomInt(a4);
  if ( result < *(_DWORD *)(BlockDef + 52) )
  {
    if ( (int)GenRandomInt(a5 + 10) > 4 || World::canLightningStrikeAt(a2, a3) != 0 )
    {
      result = World::setBlockAir(a2, a3);
    }
    else
    {
      v10 = a5 + (int)GenRandomInt(5u) / 4;
      if ( v10 > 15 )
        v10 = 15;
      result = World::setBlockAll(a2, a3, *((_DWORD *)this + 8), v10, 3);
    }
    if ( BlockID == 834 )
    {
      Material = BlockMaterialMgr::getMaterial((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, 834);
      return (*(int (__fastcall **)(int, World *, const WCoord *, int))(*(_DWORD *)Material + 124))(Material, a2, a3, 1);
    }
  }
  return result;
}


//======================================================================
// FireBlockMaterial::getChanceToEncourageFire(World *,WCoord const&,int)
// address: 0x002A4D44   size: 0x28 (40 bytes)
//======================================================================
int __fastcall FireBlockMaterial::getChanceToEncourageFire(
        FireBlockMaterial *this,
        World *a2,
        const WCoord *a3,
        int a4)
{
  DefManager *v5; // r4
  int BlockID; // r0
  int v7; // r2
  int result; // r0

  v5 = (DefManager *)Ogre::Singleton<DefManager>::ms_Singleton;
  BlockID = World::getBlockID(a2, a3);
  v7 = *(_DWORD *)(DefManager::getBlockDef(v5, BlockID) + 48);
  result = a4;
  if ( a4 < v7 )
    return v7;
  return result;
}


//======================================================================
// FireBlockMaterial::getChanceOfNeighborsEncouragingFire(World *,WCoord const&)
// address: 0x002A4D70   size: 0x50 (80 bytes)
//======================================================================
int __fastcall FireBlockMaterial::getChanceOfNeighborsEncouragingFire(
        FireBlockMaterial *this,
        World *a2,
        const WCoord *a3)
{
  int BlockID; // r0
  int v5; // r3
  int v6; // r5
  int *v7; // r4
  int ChanceToEncourageFire; // r0
  _DWORD v12[4]; // [sp+14h] [bp-10h] BYREF

  BlockID = World::getBlockID(a2, a3);
  v5 = 0;
  if ( BlockID == 0 )
  {
    v6 = 0;
    v7 = g_DirectionCoord;
    do
    {
      operator+(v12, (int *)a3, v7);
      ChanceToEncourageFire = FireBlockMaterial::getChanceToEncourageFire(this, a2, (const WCoord *)v12, v6);
      v7 += 3;
      v6 = ChanceToEncourageFire;
    }
    while ( v7 != (int *)&slotelements );
    return ChanceToEncourageFire;
  }
  return v5;
}


//======================================================================
// FireBlockMaterial::canBlockCatchFire(World *,WCoord const&)
// address: 0x002A4DC4   size: 0x24 (36 bytes)
//======================================================================
unsigned int __fastcall FireBlockMaterial::canBlockCatchFire(FireBlockMaterial *this, World *a2, const WCoord *a3)
{
  DefManager *v3; // r4
  int BlockID; // r0
  int BlockDef; // r0

  v3 = (DefManager *)Ogre::Singleton<DefManager>::ms_Singleton;
  BlockID = World::getBlockID(a2, a3);
  BlockDef = DefManager::getBlockDef(v3, BlockID);
  return (unsigned int)((*(int *)(BlockDef + 48) >> 31) - *(_DWORD *)(BlockDef + 48)) >> 31;
}


//======================================================================
// FireBlockMaterial::canNeighborBurn(World *,WCoord const&)
// address: 0x002A4DEC   size: 0x3C (60 bytes)
//======================================================================
unsigned int __fastcall FireBlockMaterial::canNeighborBurn(FireBlockMaterial *this, World *a2, const WCoord *a3)
{
  int *v4; // r4
  unsigned int result; // r0
  _DWORD v8[4]; // [sp+Ch] [bp-10h] BYREF

  v4 = g_DirectionCoord;
  do
  {
    operator+(v8, (int *)a3, v4);
    result = FireBlockMaterial::canBlockCatchFire(this, a2, (const WCoord *)v8);
    if ( result != 0 )
      break;
    v4 += 3;
  }
  while ( v4 != (int *)&slotelements );
  return result;
}


//======================================================================
// FireBlockMaterial::canPlaceBlockAt(World *,WCoord const&)
// address: 0x002A4E2C   size: 0x3C (60 bytes)
//======================================================================
unsigned int __fastcall FireBlockMaterial::canPlaceBlockAt(FireBlockMaterial *this, World *a2, const WCoord *a3)
{
  int HaveSolidTopSurface; // r3
  unsigned int result; // r0
  _DWORD v8[4]; // [sp+4h] [bp+0h] BYREF

  operator+(v8, (int *)a3, &dword_516658);
  HaveSolidTopSurface = World::doesBlockHaveSolidTopSurface(a2, (const WCoord *)v8);
  result = 1;
  if ( HaveSolidTopSurface == 0 )
    return FireBlockMaterial::canNeighborBurn(this, a2, a3);
  return result;
}


//======================================================================
// FireBlockMaterial::blockTick(World *,WCoord const&)
// address: 0x002A4E6C   size: 0x236 (566 bytes)
//======================================================================
int __fastcall FireBlockMaterial::blockTick(FireBlockMaterial *this, BlockTickMgr **a2, const WCoord *a3)
{
  int result; // r0
  signed int v6; // r0
  int v7; // r5
  BlockTickMgr *v8; // r6
  unsigned int v9; // r0
  int *v10; // r5
  int v11; // r3
  unsigned int v12; // r6
  int v13; // r5
  int v14; // r3
  int v15; // [sp+8h] [bp-2Ch]
  unsigned int v16; // [sp+8h] [bp-2Ch]
  int k; // [sp+8h] [bp-2Ch]
  int BlockData; // [sp+10h] [bp-24h]
  int i; // [sp+14h] [bp-20h]
  int j; // [sp+18h] [bp-1Ch]
  _BOOL4 v22; // [sp+1Ch] [bp-18h]
  _DWORD v23[4]; // [sp+24h] [bp-10h] BYREF

  if ( (*(int (__fastcall **)(FireBlockMaterial *))(*(_DWORD *)this + 152))(this) == 0 )
    World::setBlockAir((World *)a2, a3);
  if ( sub_2A499C((World *)a2, a3) != 0 )
    return World::setBlockAir((World *)a2, a3);
  BlockData = World::getBlockData((World *)a2, a3);
  if ( BlockData <= 14 )
  {
    v6 = GenRandomInt(3u);
    World::setBlockData((World *)a2, a3, BlockData + v6 / 2, 4);
  }
  v7 = *((_DWORD *)this + 8);
  v8 = a2[34];
  v15 = (*(int (__fastcall **)(FireBlockMaterial *))(*(_DWORD *)this + 100))(this);
  v9 = GenRandomInt(0xAu);
  BlockTickMgr::scheduleBlockUpdate(v8, a3, v7, v15 + v9, 0);
  v10 = g_DirectionCoord;
  if ( FireBlockMaterial::canNeighborBurn(this, (World *)a2, a3) != 0 )
  {
    operator+(v23, (int *)a3, &dword_516658);
    if ( FireBlockMaterial::canBlockCatchFire(this, (World *)a2, (const WCoord *)v23) == 0
      && BlockData == 15
      && GenRandomInt(4u) == 0 )
    {
      return World::setBlockAir((World *)a2, a3);
    }
    v22 = *(float *)(*(_DWORD *)(World::getBiomeGen((World *)a2, *(_DWORD *)a3, *((_DWORD *)a3 + 2)) + 4) + 48) > 0.85;
    v16 = 250;
    if ( !v22 )
      v16 = 300;
    do
    {
      operator+(v23, (int *)a3, v10);
      result = FireBlockMaterial::tryToCatchBlockOnFire(this, (World *)a2, (const WCoord *)v23, v16, BlockData);
      v10 += 3;
    }
    while ( v10 != (int *)&slotelements );
    for ( i = *(_DWORD *)a3 - 1; i <= *(_DWORD *)a3 + 1; ++i )
    {
      for ( j = *((_DWORD *)a3 + 2) - 1; j <= *((_DWORD *)a3 + 2) + 1; ++j )
      {
        for ( k = *((_DWORD *)a3 + 1) - 1; ; ++k )
        {
          v11 = *((_DWORD *)a3 + 1);
          if ( k > v11 + 4 )
            break;
          v23[0] = i;
          v23[1] = k;
          v23[2] = j;
          if ( i != *(_DWORD *)a3 || k != v11 || j != *((_DWORD *)a3 + 2) )
          {
            v12 = 100;
            if ( k > v11 + 1 )
              v12 = 100 * (k + ~v11) + 100;
            result = FireBlockMaterial::getChanceOfNeighborsEncouragingFire(this, (World *)a2, (const WCoord *)v23);
            if ( result > 0 )
            {
              result = (result + 40) / (BlockData + 30);
              v13 = result;
              if ( v22 )
                v13 = result / 2;
              if ( v13 > 0 )
              {
                result = GenRandomInt(v12);
                if ( result <= v13 )
                {
                  result = sub_2A499C((World *)a2, (const WCoord *)v23);
                  if ( result == 0 )
                  {
                    v14 = BlockData + (int)GenRandomInt(5u) / 4;
                    if ( v14 > 15 )
                      v14 = 15;
                    result = World::setBlockAll((World *)a2, (const WCoord *)v23, *((_DWORD *)this + 8), v14, 3);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
    operator+(v23, (int *)a3, &dword_516658);
    result = World::doesBlockHaveSolidTopSurface((World *)a2, (const WCoord *)v23);
    if ( result == 0 || BlockData > 3 )
      return World::setBlockAir((World *)a2, a3);
  }
  return result;
}


//======================================================================
// FireBlockMaterial::createBlockMesh(ClientSection *,WCoord const&,SectionSubMesh *)
// address: 0x002A50AC   size: 0x19E (414 bytes)
//======================================================================
unsigned int __fastcall FireBlockMaterial::createBlockMesh(
        FireBlockMaterial *this,
        ClientSection *a2,
        const WCoord *a3,
        SectionSubMesh *a4)
{
  int i; // r5
  unsigned int result; // r0
  int v8; // r7
  int v9; // r5
  World *v10; // [sp+14h] [bp-14h]
  int v12; // [sp+1Ch] [bp-Ch]
  int v14[3]; // [sp+28h] [bp+0h] BYREF
  _DWORD v15[3]; // [sp+34h] [bp+Ch] BYREF
  _DWORD v16[3]; // [sp+40h] [bp+18h] BYREF
  _DWORD v17[4]; // [sp+4Ch] [bp+24h] BYREF
  _DWORD v18[4]; // [sp+5Ch] [bp+34h] BYREF
  float v19[10]; // [sp+6Ch] [bp+44h] BYREF

  v10 = *(World **)(*((_DWORD *)a2 + 1) + 1432);
  operator+(v14, (int *)a3, (int *)a2 + 2);
  operator+(v15, v14, &dword_516658);
  v12 = BlockMaterial::blockMeshOutput(this, a4, a2, *((Ogre::Material **)this + 14));
  v17[0] = 1065353216;
  v17[1] = 1065353216;
  v17[2] = 1065353216;
  v17[3] = 1065353216;
  if ( World::doesBlockHaveSolidTopSurface(v10, (const WCoord *)v15) != 0
    || FireBlockMaterial::canBlockCatchFire(this, v10, (const WCoord *)v15) != 0 )
  {
    v8 = BlockMaterial::blockMeshOutput(this, a4, a2, *((Ogre::Material **)this + 15));
    sub_2A4920(v19, *((_DWORD *)this + 13));
    v9 = 0;
    BlockGeomTemplate::getFaceVerts(*((_DWORD *)this + 10), v18, 1u, 1065353216, 0, 2, 0, (int *)v19);
    SectionSubMesh::addGeomBlockLight(v8, v18, a3, v17, 0);
    do
    {
      sub_2A4920(v19, *((_DWORD *)this + 12));
      BlockGeomTemplate::getFaceVerts(*((_DWORD *)this + 10), v18, 2u, 1065353216, 0, v9++, 0, (int *)v19);
      result = SectionSubMesh::addGeomBlockLight(v12, v18, a3, v17, 0);
    }
    while ( v9 != 4 );
  }
  else
  {
    for ( i = 0; i != 4; ++i )
    {
      operator+(v16, v14, &g_DirectionCoord[3 * i]);
      if ( FireBlockMaterial::canBlockCatchFire(this, v10, (const WCoord *)v16) != 0 )
      {
        sub_2A4920(v19, *((_DWORD *)this + 12));
        BlockGeomTemplate::getFaceVerts(*((_DWORD *)this + 10), v18, 2u, 1065353216, 0, i, 0, (int *)v19);
        SectionSubMesh::addGeomBlockLight(v12, v18, a3, v17, 0);
      }
    }
    operator+(v16, v14, &dword_516664);
    result = FireBlockMaterial::canBlockCatchFire(this, v10, (const WCoord *)v16);
    if ( result != 0 )
    {
      sub_2A4920(v19, *((_DWORD *)this + 12));
      BlockGeomTemplate::getFaceVerts(*((_DWORD *)this + 10), v18, 0, 1065353216, 0, 2, 0, (int *)v19);
      return SectionSubMesh::addGeomBlockLight(v12, v18, a3, v17, 0);
    }
  }
  return result;
}


//======================================================================
// FireBlockMaterial::newObject(void)
// address: 0x002C1476   size: 0x12 (18 bytes)
//======================================================================
FireBlockMaterial *__fastcall FireBlockMaterial::newObject(FireBlockMaterial *this)
{
  FireBlockMaterial *v1; // r4

  v1 = (FireBlockMaterial *)operator new(0x44u);
  FireBlockMaterial::FireBlockMaterial(v1);
  return v1;
}

