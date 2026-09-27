// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WheatMaterial

//======================================================================
// WheatMaterial::newObject(void)
// address: 0x002C15E2   size: 0x12 (18 bytes)
//======================================================================
WheatMaterial *__fastcall WheatMaterial::newObject(WheatMaterial *this)
{
  WheatMaterial *v1; // r4

  v1 = (WheatMaterial *)operator new(0x64u);
  WheatMaterial::WheatMaterial(v1);
  return v1;
}


//======================================================================
// WheatMaterial::getTickRandomly(void)
// address: 0x002D5630   size: 0x4 (4 bytes)
//======================================================================
int __fastcall WheatMaterial::getTickRandomly(WheatMaterial *this)
{
  return 1;
}


//======================================================================
// WheatMaterial::getMaxGrowStage(void)
// address: 0x002D5634   size: 0x4 (4 bytes)
//======================================================================
int __fastcall WheatMaterial::getMaxGrowStage(WheatMaterial *this)
{
  return 7;
}


//======================================================================
// WheatMaterial::getGeomName(void)
// address: 0x002D5638   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall WheatMaterial::getGeomName(WheatMaterial *this)
{
  return "wheat";
}


//======================================================================
// WheatMaterial::canThisPlantGrowOnThisBlockID(int)
// address: 0x002D5644   size: 0xA (10 bytes)
//======================================================================
bool __fastcall WheatMaterial::canThisPlantGrowOnThisBlockID(WheatMaterial *this, int a2)
{
  return a2 == 102;
}


//======================================================================
// WheatMaterial::~WheatMaterial()
// address: 0x002D5650   size: 0x3C (60 bytes)
//======================================================================
// Alternative name is '_ZN13WheatMaterialD1Ev'
void __fastcall WheatMaterial::~WheatMaterial(WheatMaterial *this)
{
  int v2; // r5
  _DWORD *v3; // r0
  int v4; // r2

  v2 = 0;
  *(_DWORD *)this = &off_460AC8;
  do
  {
    v3 = *(_DWORD **)((char *)this + v2 + 72);
    if ( v3 != nullptr )
    {
      v4 = v3[1] - 1;
      v3[1] = v4;
      if ( v4 <= 0 )
        (*(void (__fastcall **)(_DWORD *))(*v3 + 24))(v3);
      *(_DWORD *)((char *)this + v2 + 72) = 0;
    }
    v2 += 4;
  }
  while ( v2 != 24 );
  HerbMaterial::~HerbMaterial(this);
}


//======================================================================
// WheatMaterial::~WheatMaterial()
// address: 0x002D5690   size: 0x12 (18 bytes)
//======================================================================
void __fastcall WheatMaterial::~WheatMaterial(WheatMaterial *this)
{
  WheatMaterial::~WheatMaterial(this);
  operator delete(this);
}


//======================================================================
// WheatMaterial::getDestroyTexture(Block *,BlockTexDesc &)
// address: 0x002D56A2   size: 0x18 (24 bytes)
//======================================================================
int __fastcall WheatMaterial::getDestroyTexture(int a1, int a2, int a3)
{
  *(_BYTE *)(a3 + 4) = 0;
  *(_DWORD *)a3 = 1;
  return BlockTexElement::getTexture(*(BlockTexElement **)(4 * (*(_DWORD *)(a1 + 96) + 11) + a1), 0);
}


//======================================================================
// WheatMaterial::onFertilized(World *,WCoord const&,int)
// address: 0x002D56BA   size: 0x2E (46 bytes)
//======================================================================
int __fastcall WheatMaterial::onFertilized(WheatMaterial *this, World *a2, const WCoord *a3, int a4)
{
  int BlockData; // r6
  int v7; // r2

  BlockData = World::getBlockData(a2, a3, (int)a3, a4);
  v7 = BlockData + GenRandomInt(2, 4);
  if ( v7 > 7 )
    v7 = 7;
  World::setBlockData(a2, a3, v7, 3);
  return 1;
}


//======================================================================
// WheatMaterial::blockTick(World *,WCoord const&)
// address: 0x002D56E8   size: 0x6A (106 bytes)
//======================================================================
unsigned int *__fastcall WheatMaterial::blockTick(WheatMaterial *this, World *a2, const WCoord *a3)
{
  int v6; // r2
  int v7; // r3
  unsigned int *result; // r0
  int v9; // r2
  int v10; // r3
  unsigned int *v11; // r7
  float v12; // r0
  _DWORD v13[4]; // [sp+4h] [bp-10h] BYREF

  HerbMaterial::blockTick(this, a2, a3);
  v6 = *(_DWORD *)a3;
  v13[1] = *((_DWORD *)a3 + 1) + 1;
  v7 = *((_DWORD *)a3 + 2);
  v13[0] = v6;
  v13[2] = v7;
  result = (unsigned int *)World::getBlockLightValue(a2, (const WCoord *)v13, 1, v7);
  if ( (int)result > 8 )
  {
    result = (unsigned int *)World::getBlockData(a2, a3, v9, v10);
    v11 = result;
    if ( (int)result <= 6 )
    {
      v12 = COERCE_FLOAT(HerbMaterial::getGrowRate(this, a2, a3));
      result = (unsigned int *)GenRandomInt(0, (int)(float)(25.0 / v12));
      if ( result == nullptr )
        return World::setBlockData(a2, a3, (int)v11 + 1, 2);
    }
  }
  return result;
}


//======================================================================
// WheatMaterial::dropBlockAsItem(World *,WCoord const&,int,BLOCK_MINE_TYPE,float)
// address: 0x002D5758   size: 0x60 (96 bytes)
//======================================================================
int __fastcall WheatMaterial::dropBlockAsItem(
        BlockMaterial *a1,
        World *a2,
        const WCoord *a3,
        int a4,
        float a5,
        float a6)
{
  int result; // r0
  int v10; // r5
  int v11; // r7

  result = GenRandomFloat() > a6;
  if ( result == 0 )
  {
    result = BlockMaterial::doDropItem(a1, a2, a3, *(unsigned __int16 *)(*((_DWORD *)a1 + 9) + 88), 1);
    if ( a4 > 6 )
    {
      result = GenRandomInt(1, 3);
      v10 = 0;
      v11 = result;
      while ( v10 < v11 )
      {
        result = BlockMaterial::doDropItem(a1, a2, a3, *(unsigned __int16 *)(*((_DWORD *)a1 + 9) + 84), 1);
        ++v10;
      }
    }
  }
  return result;
}


//======================================================================
// WheatMaterial::createBlockMesh(ClientSection *,WCoord const&,SectionSubMesh *)
// address: 0x002D57B8   size: 0xB2 (178 bytes)
//======================================================================
void *__fastcall WheatMaterial::createBlockMesh(
        WheatMaterial *this,
        ClientSection *a2,
        const WCoord *a3,
        SectionSubMesh *a4)
{
  int v5; // r3
  int v8; // r2
  __int16 *v9; // r6
  int v10; // r6
  int v11; // r0
  int v12; // r0
  int v13; // r3
  SectionSubMesh *v14; // r6
  int v17[4]; // [sp+10h] [bp-34h] BYREF
  float v18[9]; // [sp+20h] [bp-24h] BYREF

  v5 = *((_DWORD *)a2 + 5);
  v8 = *(_DWORD *)a3;
  if ( v5 != 0 )
    v9 = (__int16 *)(v5 + 2 * ((*((_DWORD *)a3 + 1) << 8) | (16 * *((_DWORD *)a3 + 2)) | v8));
  else
    v9 = &Section::m_EmptyBlock;
  ClientSection::getBlockVertexLight(a2, a3, v18);
  Chunk::getBiome(*((Chunk **)a2 + 1), *(_DWORD *)a3, *((_DWORD *)a3 + 2));
  v10 = (((int)(unsigned __int16)*v9 >> 12) + 1) * *((_DWORD *)this + 24);
  v11 = (*(int (__fastcall **)(WheatMaterial *))(*(_DWORD *)this + 192))(this);
  v12 = ((int)(float)((float)(v10 / (v11 + 1)) + 0.5) - 1) & (~((int)(float)((float)(v10 / (v11 + 1)) + 0.5) - 1) >> 31);
  v13 = *((_DWORD *)this + 24);
  if ( v12 >= v13 )
    v12 = v13 - 1;
  v14 = BlockMaterial::blockMeshOutput(this, a4, (SectionMesh **)a2, *((Ogre::Material **)this + v12 + 18));
  BlockGeomTemplate::getFaceVerts(*((_DWORD *)this + 10), v17, 0);
  return SectionSubMesh::addGeomBlockLight(v14, v17, a3, v18, nullptr);
}


//======================================================================
// WheatMaterial::init(int)
// address: 0x002D5870   size: 0x174 (372 bytes)
//======================================================================
void __fastcall WheatMaterial::init(__int64 this, int a2)
{
  int v2; // r4
  Ogre::Material **v3; // r6
  int v4; // r2
  void *v5; // r1
  int v6; // r2
  void *v7; // r1
  int v8; // r2
  void *v9; // r1
  int v10; // r2
  void *v11; // r1
  int v12; // r2
  Ogre::Texture *Texture; // r0
  void *v14; // r1
  int v15; // r3
  int v16; // r0
  int v17; // r0
  int v18; // r5
  Ogre::Material *v19; // [sp+0h] [bp-134h]
  Ogre::Material *v20; // [sp+0h] [bp-134h]
  Ogre::Material *v21; // [sp+0h] [bp-134h]
  int i; // [sp+4h] [bp-130h]
  Ogre::Material *v23; // [sp+8h] [bp-12Ch]
  Ogre::Material *v24; // [sp+8h] [bp-12Ch]
  _DWORD v25[7]; // [sp+10h] [bp-124h] BYREF
  char s[256]; // [sp+2Ch] [bp-108h] BYREF

  v2 = this;
  v3 = (Ogre::Material **)(this + 72);
  BlockMaterial::init(this, a2);
  *(_DWORD *)(v2 + 96) = 0;
  for ( i = 0; i != 6; ++i )
  {
    j_sprintf(s, "%s_stage_%d", (const char *)(*(_DWORD *)(v2 + 36) + 212), i);
    v19 = (Ogre::Material *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
    Ogre::FixedString::FixedString((Ogre::FixedString *)v25, (Ogre::FixedString *)s, v4);
    *(v3 - 6) = (Ogre::Material *)BlockMaterialMgr::getTexElement(v19, (const char **)v25, 0);
    Ogre::FixedString::~FixedString((Ogre::FixedString **)v25, v5);
    if ( *(v3 - 6) == nullptr )
      break;
    Ogre::FixedString::FixedString((Ogre::FixedString *)v25, (Ogre::FixedString *)"block", v6);
    v20 = (Ogre::Material *)operator new(0x2Cu);
    Ogre::Material::Material(v20, (const Ogre::FixedString *)v25);
    *v3 = v20;
    Ogre::FixedString::~FixedString((Ogre::FixedString **)v25, v7);
    v21 = *v3;
    Ogre::FixedString::FixedString((Ogre::FixedString *)v25, (Ogre::FixedString *)"BLEND_MODE", v8);
    v9 = (void *)(Ogre::Material::setParamMacro(v21, (const Ogre::FixedString *)v25, 1u) >> 32);
    Ogre::FixedString::~FixedString((Ogre::FixedString **)v25, v9);
    v23 = *v3;
    Ogre::FixedString::FixedString((Ogre::FixedString *)v25, (Ogre::FixedString *)"DOUBLE_SIDE", v10);
    v11 = (void *)(Ogre::Material::setParamMacro(v23, (const Ogre::FixedString *)v25, 1u) >> 32);
    Ogre::FixedString::~FixedString((Ogre::FixedString **)v25, v11);
    v24 = *v3;
    Ogre::FixedString::FixedString((Ogre::FixedString *)v25, (Ogre::FixedString *)"g_DiffuseTex", v12);
    Texture = (Ogre::Texture *)BlockTexElement::getTexture(*(v3 - 6), 0);
    Ogre::Material::setParamTexture(v24, (const Ogre::FixedString *)v25, Texture, 0);
    Ogre::FixedString::~FixedString((Ogre::FixedString **)v25, v14);
    ++v3;
    ++*(_DWORD *)(v2 + 96);
  }
  v15 = *(_DWORD *)(v2 + 96);
  if ( v15 != 0 )
  {
    v16 = BlockTexElement::getTexture(*(BlockTexElement **)(4 * (v15 + 11) + v2), 0);
    *(_DWORD *)(v2 + 8) = v16;
    if ( v16 != 0 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 4))(v16);
      v17 = *(_DWORD *)(v2 + 8);
      *(_BYTE *)(v2 + 28) = -1;
      *(_BYTE *)(v2 + 29) = -1;
      *(_BYTE *)(v2 + 30) = -1;
      *(_BYTE *)(v2 + 31) = -1;
      (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)v17 + 28))(v17, v25);
      v18 = v25[2];
      *(_DWORD *)(v2 + 20) = v25[1];
      *(_DWORD *)(v2 + 24) = v18;
      *(_DWORD *)(v2 + 12) = 0;
      *(_DWORD *)(v2 + 16) = 0;
    }
  }
}


//======================================================================
// WheatMaterial::WheatMaterial(void)
// address: 0x002D5A00   size: 0x26 (38 bytes)
//======================================================================
// Alternative name is '_ZN13WheatMaterialC2Ev'
void __fastcall WheatMaterial::WheatMaterial(WheatMaterial *this)
{
  int i; // r3
  char *v3; // r2

  BlockMaterial::BlockMaterial(this);
  *(_DWORD *)this = &off_460AC8;
  for ( i = 0; i != 24; i += 4 )
  {
    v3 = (char *)this + i;
    *((_DWORD *)v3 + 12) = 0;
    *((_DWORD *)v3 + 18) = 0;
  }
}

