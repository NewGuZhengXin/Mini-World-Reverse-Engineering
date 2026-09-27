// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: MelonStemMaterial

//======================================================================
// MelonStemMaterial::newObject(void)
// address: 0x002C15C6   size: 0x12 (18 bytes)
//======================================================================
MelonStemMaterial *__fastcall MelonStemMaterial::newObject(MelonStemMaterial *this)
{
  MelonStemMaterial *v1; // r4

  v1 = (MelonStemMaterial *)operator new(0x40u);
  MelonStemMaterial::MelonStemMaterial(v1);
  return v1;
}


//======================================================================
// MelonStemMaterial::getTickRandomly(void)
// address: 0x002DFD78   size: 0x4 (4 bytes)
//======================================================================
int __fastcall MelonStemMaterial::getTickRandomly(MelonStemMaterial *this)
{
  return 1;
}


//======================================================================
// MelonStemMaterial::getGeomName(void)
// address: 0x002DFD7C   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall MelonStemMaterial::getGeomName(MelonStemMaterial *this)
{
  return "hurbs";
}


//======================================================================
// MelonStemMaterial::onBlockPlaced(World *,WCoord const&,DirectionType,float,float,float,int)
// address: 0x002DFD88   size: 0x4 (4 bytes)
//======================================================================
int __fastcall MelonStemMaterial::onBlockPlaced(int a1, int a2, int a3, int a4)
{
  return a4;
}


//======================================================================
// MelonStemMaterial::canThisPlantGrowOnThisBlockID(int)
// address: 0x002DFD8C   size: 0xA (10 bytes)
//======================================================================
bool __fastcall MelonStemMaterial::canThisPlantGrowOnThisBlockID(MelonStemMaterial *this, int a2)
{
  return a2 == 102;
}


//======================================================================
// MelonStemMaterial::getDestroyTexture(Block *,BlockTexDesc &)
// address: 0x002DFD96   size: 0x12 (18 bytes)
//======================================================================
int __fastcall MelonStemMaterial::getDestroyTexture(int a1, int a2, int a3)
{
  *(_BYTE *)(a3 + 4) = 1;
  *(_DWORD *)a3 = 1;
  return BlockTexElement::getTexture(*(BlockTexElement **)(a1 + 52), 0);
}


//======================================================================
// MelonStemMaterial::onFertilized(World *,WCoord const&,int)
// address: 0x002DFDA8   size: 0x2E (46 bytes)
//======================================================================
int __fastcall MelonStemMaterial::onFertilized(MelonStemMaterial *this, World *a2, const WCoord *a3, int a4)
{
  int BlockData; // r6
  int v7; // r2

  BlockData = World::getBlockData(a2, a3, (int)a3, a4);
  v7 = BlockData + GenRandomInt(2, 5);
  if ( v7 > 7 )
    v7 = 7;
  World::setBlockData(a2, a3, v7, 2);
  return 1;
}


//======================================================================
// MelonStemMaterial::dropBlockAsItem(World *,WCoord const&,int,BLOCK_MINE_TYPE,float)
// address: 0x002DFDD6   size: 0x4A (74 bytes)
//======================================================================
int __fastcall MelonStemMaterial::dropBlockAsItem(
        BlockMaterial *a1,
        World *a2,
        const WCoord *a3,
        unsigned int a4,
        float a5,
        float a6)
{
  int result; // r0
  int v11; // r4
  int v12; // [sp+Ch] [bp-8h]

  result = GenRandomFloat() > a6;
  if ( result == 0 )
  {
    v12 = 2 - ((a4 <= 6) + (a4 >> 31));
    v11 = 0;
    do
    {
      result = BlockMaterial::doDropItem(a1, a2, a3, *(unsigned __int16 *)(*((_DWORD *)a1 + 9) + 84), 1);
      ++v11;
    }
    while ( v11 < v12 );
  }
  return result;
}


//======================================================================
// MelonStemMaterial::createBlockMesh(ClientSection *,WCoord const&,SectionSubMesh *)
// address: 0x002DFE20   size: 0xCC (204 bytes)
//======================================================================
void *__fastcall MelonStemMaterial::createBlockMesh(
        MelonStemMaterial *this,
        ClientSection *a2,
        const WCoord *a3,
        SectionSubMesh *a4)
{
  int v5; // r3
  int v8; // r2
  __int16 *v9; // r7
  int v10; // r7
  float v11; // r7
  Ogre::Material *v12; // r3
  SectionSubMesh *v13; // r5
  float v15; // [sp+14h] [bp-48h]
  int v16; // [sp+18h] [bp-44h]
  int GrassColor; // [sp+24h] [bp-38h] BYREF
  int v19[4]; // [sp+28h] [bp-34h] BYREF
  float v20[9]; // [sp+38h] [bp-24h] BYREF

  v5 = *((_DWORD *)a2 + 5);
  v8 = *(_DWORD *)a3;
  if ( v5 != 0 )
    v9 = (__int16 *)(v5 + 2 * ((*((_DWORD *)a3 + 1) << 8) | (16 * *((_DWORD *)a3 + 2)) | v8));
  else
    v9 = &Section::m_EmptyBlock;
  ClientSection::getBlockVertexLight(a2, a3, v20);
  v10 = (int)(unsigned __int16)*v9 >> 12;
  v16 = *((_DWORD *)this + 10);
  if ( (unsigned int)v10 > 7 )
  {
    BlockGeomTemplate::getFaceVerts(v16, v19, 0);
    v12 = *((Ogre::Material **)this + 14);
    v15 = 1.0;
  }
  else
  {
    v15 = (float)v10 / 7.0;
    v11 = (float)(v10 + 1) / 5.0;
    if ( v11 > 1.0 )
      v11 = 1.0;
    BlockGeomTemplate::getFaceVerts(v16, v19, 0, SLODWORD(v11), 2, 2, 0, nullptr);
    v12 = *((Ogre::Material **)this + 15);
  }
  v13 = BlockMaterial::blockMeshOutput(this, a4, (SectionMesh **)a2, v12);
  GrassColor = BlockMaterialMgr::getGrassColor(
                 (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                 0.0,
                 v15);
  return SectionSubMesh::addGeomBlockLight(v13, v19, a3, v20, &GrassColor);
}


//======================================================================
// MelonStemMaterial::blockTick(World *,WCoord const&)
// address: 0x002DFEFC   size: 0x10E (270 bytes)
//======================================================================
unsigned int *__fastcall MelonStemMaterial::blockTick(MelonStemMaterial *this, World *a2, const WCoord *a3)
{
  int v6; // r2
  int v7; // r3
  unsigned int *result; // r0
  float v9; // r0
  int v10; // r2
  int v11; // r3
  int BlockData; // r0
  int v13; // r3
  int *v14; // r5
  int v15; // r3
  int v16; // r0
  int v17; // r12
  int v18; // r3
  int v19; // r0
  int v20; // r2
  int *v21; // r0
  int v22; // r5
  int v23; // r4
  int v24; // r3
  int v25; // r2
  int v26; // r3
  int BlockID; // r5
  int v28; // r2
  int v29; // r3
  int v30; // [sp+10h] [bp-24h]
  _DWORD v31[3]; // [sp+18h] [bp-1Ch] BYREF
  int v32; // [sp+24h] [bp-10h] BYREF
  int v33; // [sp+28h] [bp-Ch]
  int v34; // [sp+2Ch] [bp-8h]

  HerbMaterial::blockTick(this, a2, a3);
  v6 = *((_DWORD *)a3 + 2);
  v7 = *((_DWORD *)a3 + 1);
  v32 = *(_DWORD *)a3;
  v34 = v6;
  v33 = v7 + 1;
  result = (unsigned int *)World::getBlockLightValue(a2, (const WCoord *)&v32, 1, v7 + 1);
  if ( (int)result > 8 )
  {
    v9 = COERCE_FLOAT(HerbMaterial::getGrowRate(this, a2, a3));
    result = (unsigned int *)GenRandomInt(0, (int)(float)(25.0 / v9));
    if ( result == nullptr )
    {
      BlockData = World::getBlockData(a2, a3, v10, v11);
      if ( BlockData > 6 )
      {
        v13 = *((_DWORD *)this + 8);
        v14 = g_DirectionCoord;
        v30 = v13 - 1;
        while ( 1 )
        {
          v15 = *((_DWORD *)a3 + 2);
          v16 = v14[2];
          v33 = *((_DWORD *)a3 + 1) + v14[1];
          v17 = v15 + v16;
          v18 = *(_DWORD *)a3;
          v32 = *(_DWORD *)a3 + *v14;
          v34 = v17;
          result = (unsigned int *)World::getBlockID(a2, (const WCoord *)&v32, v33, v18);
          if ( result == (unsigned int *)v30 )
            break;
          v14 += 3;
          if ( v14 == &dword_516658 )
          {
            v19 = GenRandomInt(0, 3);
            v20 = *(_DWORD *)a3;
            v21 = &g_DirectionCoord[3 * v19];
            v22 = *((_DWORD *)a3 + 1);
            v23 = *((_DWORD *)a3 + 2);
            v24 = v21[1];
            v31[0] = v20 + *v21;
            v32 = v31[0];
            v25 = v22 + v24;
            v26 = v21[2];
            v31[1] = v25;
            v31[2] = v23 + v26;
            v34 = v23 + v26;
            v33 = v25 - 1;
            BlockID = World::getBlockID(a2, (const WCoord *)&v32, v25 - 1, v23 + v26);
            result = (unsigned int *)World::getBlockID(a2, (const WCoord *)v31, v28, v29);
            if ( result == nullptr && (unsigned int)(BlockID - 100) <= 2 )
              return (unsigned int *)World::setBlockAll(a2, (const WCoord *)v31, v30, 0, 3);
            return result;
          }
        }
      }
      else
      {
        return World::setBlockData(a2, a3, BlockData + 1, 2);
      }
    }
  }
  return result;
}


//======================================================================
// MelonStemMaterial::~MelonStemMaterial()
// address: 0x002E0014   size: 0x34 (52 bytes)
//======================================================================
// Alternative name is '_ZN17MelonStemMaterialD1Ev'
void __fastcall MelonStemMaterial::~MelonStemMaterial(MelonStemMaterial *this)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0

  *(_DWORD *)this = &off_461400;
  v2 = *((_DWORD **)this + 14);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 14) = 0;
  }
  v3 = *((_DWORD **)this + 15);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)this + 15) = 0;
  }
  HerbMaterial::~HerbMaterial(this);
}


//======================================================================
// MelonStemMaterial::~MelonStemMaterial()
// address: 0x002E004C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall MelonStemMaterial::~MelonStemMaterial(MelonStemMaterial *this)
{
  MelonStemMaterial::~MelonStemMaterial(this);
  operator delete(this);
}


//======================================================================
// MelonStemMaterial::init(int)
// address: 0x002E0060   size: 0x1E8 (488 bytes)
//======================================================================
int __fastcall MelonStemMaterial::init(__int64 this, int a2)
{
  int v2; // r4
  int v3; // r2
  void *v4; // r1
  BlockMaterialMgr *v5; // r6
  int v6; // r2
  void *v7; // r1
  int v8; // r2
  Ogre::Material *v9; // r5
  void *v10; // r1
  Ogre::Material *v11; // r5
  int v12; // r2
  void *v13; // r1
  Ogre::Material *v14; // r5
  int v15; // r2
  void *v16; // r1
  Ogre::Material *v17; // r5
  int v18; // r2
  Ogre::Texture *Texture; // r0
  void *v20; // r1
  int v21; // r2
  Ogre::Material *v22; // r5
  void *v23; // r1
  Ogre::Material *v24; // r5
  int v25; // r2
  void *v26; // r1
  Ogre::Material *v27; // r5
  int v28; // r2
  void *v29; // r1
  Ogre::Material *v30; // r5
  int v31; // r2
  Ogre::Texture *v32; // r0
  void *v33; // r1
  int result; // r0
  int v35; // r0
  int v36; // r7
  BlockMaterialMgr *v37; // [sp+8h] [bp-12Ch]
  _DWORD v38[7]; // [sp+10h] [bp-124h] BYREF
  char s[256]; // [sp+2Ch] [bp-108h] BYREF

  v2 = this;
  BlockMaterial::init(this, a2);
  j_sprintf(s, "%s_connected", (const char *)(*(_DWORD *)(v2 + 36) + 212));
  v37 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v38, (Ogre::FixedString *)s, v3);
  *(_DWORD *)(v2 + 48) = BlockMaterialMgr::getTexElement(v37, (const char **)v38, 0);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)v38, v4);
  j_sprintf(s, "%s_disconnected", (const char *)(*(_DWORD *)(v2 + 36) + 212));
  v5 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v38, (Ogre::FixedString *)s, v6);
  *(_DWORD *)(v2 + 52) = BlockMaterialMgr::getTexElement(v5, (const char **)v38, 0);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)v38, v7);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v38, (Ogre::FixedString *)"block", v8);
  v9 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v9, (const Ogre::FixedString *)v38);
  *(_DWORD *)(v2 + 56) = v9;
  Ogre::FixedString::~FixedString((Ogre::FixedString **)v38, v10);
  v11 = *(Ogre::Material **)(v2 + 56);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v38, (Ogre::FixedString *)"BLEND_MODE", v12);
  v13 = (void *)(Ogre::Material::setParamMacro(v11, (const Ogre::FixedString *)v38, 1u) >> 32);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)v38, v13);
  v14 = *(Ogre::Material **)(v2 + 56);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v38, (Ogre::FixedString *)"DOUBLE_SIDE", v15);
  v16 = (void *)(Ogre::Material::setParamMacro(v14, (const Ogre::FixedString *)v38, 1u) >> 32);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)v38, v16);
  v17 = *(Ogre::Material **)(v2 + 56);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v38, (Ogre::FixedString *)"g_DiffuseTex", v18);
  Texture = (Ogre::Texture *)BlockTexElement::getTexture(*(BlockTexElement **)(v2 + 48), 0);
  Ogre::Material::setParamTexture(v17, (const Ogre::FixedString *)v38, Texture, 0);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)v38, v20);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v38, (Ogre::FixedString *)"block", v21);
  v22 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v22, (const Ogre::FixedString *)v38);
  *(_DWORD *)(v2 + 60) = v22;
  Ogre::FixedString::~FixedString((Ogre::FixedString **)v38, v23);
  v24 = *(Ogre::Material **)(v2 + 60);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v38, (Ogre::FixedString *)"BLEND_MODE", v25);
  v26 = (void *)(Ogre::Material::setParamMacro(v24, (const Ogre::FixedString *)v38, 1u) >> 32);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)v38, v26);
  v27 = *(Ogre::Material **)(v2 + 60);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v38, (Ogre::FixedString *)"DOUBLE_SIDE", v28);
  v29 = (void *)(Ogre::Material::setParamMacro(v27, (const Ogre::FixedString *)v38, 1u) >> 32);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)v38, v29);
  v30 = *(Ogre::Material **)(v2 + 60);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v38, (Ogre::FixedString *)"g_DiffuseTex", v31);
  v32 = (Ogre::Texture *)BlockTexElement::getTexture(*(BlockTexElement **)(v2 + 52), 0);
  Ogre::Material::setParamTexture(v30, (const Ogre::FixedString *)v38, v32, 0);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)v38, v33);
  result = BlockTexElement::getTexture(*(BlockTexElement **)(v2 + 52), 0);
  *(_DWORD *)(v2 + 8) = result;
  if ( result != 0 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)result + 4))(result);
    v35 = *(_DWORD *)(v2 + 8);
    *(_BYTE *)(v2 + 28) = -1;
    *(_BYTE *)(v2 + 29) = -1;
    *(_BYTE *)(v2 + 30) = -1;
    *(_BYTE *)(v2 + 31) = -1;
    result = (*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v35 + 28))(v35, v38);
    v36 = v38[2];
    *(_DWORD *)(v2 + 20) = v38[1];
    *(_DWORD *)(v2 + 24) = v36;
    *(_DWORD *)(v2 + 12) = 0;
    *(_DWORD *)(v2 + 16) = 0;
  }
  return result;
}


//======================================================================
// MelonStemMaterial::MelonStemMaterial(void)
// address: 0x002E0278   size: 0x20 (32 bytes)
//======================================================================
// Alternative name is '_ZN17MelonStemMaterialC2Ev'
void __fastcall MelonStemMaterial::MelonStemMaterial(MelonStemMaterial *this)
{
  BlockMaterial::BlockMaterial(this);
  *(_DWORD *)this = &off_461400;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 14) = 0;
}

