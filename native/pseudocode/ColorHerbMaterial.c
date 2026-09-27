// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ColorHerbMaterial

//======================================================================
// ColorHerbMaterial::getGeomName(void)
// address: 0x00267348   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall ColorHerbMaterial::getGeomName(ColorHerbMaterial *this)
{
  return "hurbs";
}


//======================================================================
// ColorHerbMaterial::createBlockMesh(ClientSection *,WCoord const&,SectionSubMesh *)
// address: 0x00267354   size: 0xE2 (226 bytes)
//======================================================================
int __fastcall ColorHerbMaterial::createBlockMesh(
        ColorHerbMaterial *this,
        Chunk **a2,
        const WCoord *a3,
        SectionSubMesh *a4)
{
  int v7; // r0
  Ogre::Material *v8; // r3
  int v9; // r0
  int result; // r0
  int v11; // r0
  int v12; // r0
  int v13; // [sp+8h] [bp-44h]
  int v15; // [sp+14h] [bp-38h]
  _BYTE v16[16]; // [sp+18h] [bp-34h] BYREF
  float v17[9]; // [sp+28h] [bp-24h] BYREF

  v15 = *(_WORD *)Section::getNeighborBlock(a2, a3, 4) & 0xFFF;
  v13 = *((_DWORD *)this + 8);
  ClientSection::getBlockVertexLight((ClientSection *)a2, a3, v17);
  Chunk::getBiome(a2[1], *(_DWORD *)a3, *((_DWORD *)a3 + 2));
  v7 = *((_DWORD *)this + 10);
  if ( v15 != v13 || *((_DWORD *)this + 17) == 0 )
  {
    BlockGeomTemplate::getFaceVerts(v7, v16, 0);
    v8 = *((Ogre::Material **)this + 16);
LABEL_8:
    v12 = BlockMaterial::blockMeshOutput(this, a4, (ClientSection *)a2, v8);
    *(_BYTE *)(v12 + 37) = 1;
    return SectionSubMesh::addGeomBlockLight(v12, v16, a3, v17, 0);
  }
  BlockGeomTemplate::getFaceVerts(v7, v16, 0);
  v9 = BlockMaterial::blockMeshOutput(this, a4, (ClientSection *)a2, *((Ogre::Material **)this + 17));
  *(_BYTE *)(v9 + 37) = 1;
  result = SectionSubMesh::addGeomBlockLight(v9, v16, a3, v17, 0);
  if ( *((_DWORD *)this + 18) != 0 )
  {
    BlockGeomTemplate::getFaceVerts(*((_DWORD *)this + 10), v16, 1);
    v11 = BlockMaterial::blockMeshOutput(this, a4, (ClientSection *)a2, *((Ogre::Material **)this + 18));
    *(_BYTE *)(v11 + 37) = 1;
    result = SectionSubMesh::addGeomBlockLight(v11, v16, a3, v17, 0);
  }
  if ( *((_DWORD *)this + 19) != 0 )
  {
    BlockGeomTemplate::getFaceVerts(*((_DWORD *)this + 10), v16, 2);
    v8 = *((Ogre::Material **)this + 19);
    goto LABEL_8;
  }
  return result;
}


//======================================================================
// ColorHerbMaterial::getDestroyTexture(Block *,BlockTexDesc &)
// address: 0x00267436   size: 0x26 (38 bytes)
//======================================================================
int __fastcall ColorHerbMaterial::getDestroyTexture(int a1, unsigned __int16 *a2, int a3)
{
  BlockTexElement *v4; // r0

  *(_BYTE *)(a3 + 4) = 0;
  *(_DWORD *)a3 = 1;
  if ( (int)*a2 >> 12 == 0 || (v4 = *(BlockTexElement **)(a1 + 52)) == nullptr )
    v4 = *(BlockTexElement **)(a1 + 48);
  return BlockTexElement::getTexture(v4, 0);
}


//======================================================================
// ColorHerbMaterial::~ColorHerbMaterial()
// address: 0x0026745C   size: 0x50 (80 bytes)
//======================================================================
// Alternative name is '_ZN17ColorHerbMaterialD1Ev'
void __fastcall ColorHerbMaterial::~ColorHerbMaterial(ColorHerbMaterial *this)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r0
  _DWORD *v5; // r0

  *(_DWORD *)this = &off_45B860;
  v2 = *((_DWORD **)this + 16);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 16) = 0;
  }
  v3 = *((_DWORD **)this + 17);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)this + 17) = 0;
  }
  v4 = *((_DWORD **)this + 18);
  if ( v4 != nullptr )
  {
    Ogre::BaseObject::release(v4);
    *((_DWORD *)this + 18) = 0;
  }
  v5 = *((_DWORD **)this + 19);
  if ( v5 != nullptr )
  {
    Ogre::BaseObject::release(v5);
    *((_DWORD *)this + 19) = 0;
  }
  HerbMaterial::~HerbMaterial(this);
}


//======================================================================
// ColorHerbMaterial::~ColorHerbMaterial()
// address: 0x002674B0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ColorHerbMaterial::~ColorHerbMaterial(ColorHerbMaterial *this)
{
  ColorHerbMaterial::~ColorHerbMaterial(this);
  operator delete(this);
}


//======================================================================
// ColorHerbMaterial::init(int)
// address: 0x002674C4   size: 0x3E4 (996 bytes)
//======================================================================
int __fastcall ColorHerbMaterial::init(BlockTexElement **this, int a2)
{
  int v3; // r2
  void *v4; // r1
  int v5; // r2
  int v6; // r2
  void *v7; // r1
  Ogre::Material *v8; // r5
  void *v9; // r1
  int v10; // r2
  void *v11; // r1
  Ogre::Material *v12; // r6
  int v13; // r2
  void *v14; // r1
  int v15; // r2
  Ogre::Texture *Texture; // r0
  void *v17; // r1
  int v18; // r2
  void *v19; // r1
  int v20; // r2
  Ogre::Material *v21; // r6
  void *v22; // r1
  Ogre::Material *v23; // r6
  int v24; // r2
  void *v25; // r1
  Ogre::Material *v26; // r6
  int v27; // r2
  void *v28; // r1
  Ogre::Material *v29; // r6
  int v30; // r2
  Ogre::Texture *v31; // r0
  void *v32; // r1
  BlockTexElement *v33; // r0
  const char *v34; // r2
  int v35; // r2
  void *v36; // r1
  int v37; // r2
  void *v38; // r1
  int v39; // r2
  void *v40; // r1
  int v41; // r2
  Ogre::Texture *v42; // r0
  void *v43; // r1
  BlockTexElement *v44; // r0
  const char *v45; // r2
  BlockMaterialMgr *v46; // r7
  int v47; // r2
  void *v48; // r1
  int v49; // r2
  Ogre::Material *v50; // r5
  void *v51; // r1
  Ogre::Material *v52; // r5
  int v53; // r2
  void *v54; // r1
  Ogre::Material *v55; // r5
  int v56; // r2
  Ogre::Texture *v57; // r0
  void *v58; // r1
  int result; // r0
  int v60; // r0
  Ogre::FixedString *v61; // r5
  Ogre::Material *v62; // [sp+4h] [bp-130h]
  Ogre::Material *v63; // [sp+4h] [bp-130h]
  Ogre::Material *v64; // [sp+4h] [bp-130h]
  Ogre::Material *v65; // [sp+4h] [bp-130h]
  Ogre::Material *v66; // [sp+4h] [bp-130h]
  Ogre::Material *v67; // [sp+4h] [bp-130h]
  Ogre::Material *v68; // [sp+4h] [bp-130h]
  Ogre::Material *v69; // [sp+4h] [bp-130h]
  Ogre::Material *v70; // [sp+8h] [bp-12Ch]
  Ogre::Material *v71; // [sp+8h] [bp-12Ch]
  Ogre::FixedString *v72[7]; // [sp+10h] [bp-124h] BYREF
  char s[256]; // [sp+2Ch] [bp-108h] BYREF

  BlockMaterial::init((BlockMaterial *)this, a2);
  v62 = (Ogre::Material *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v72, (BlockTexElement *)((char *)*(this + 9) + 212), v3);
  *(this + 12) = (BlockTexElement *)BlockMaterialMgr::getTexElement(v62, (const Ogre::FixedString *)v72, 0);
  Ogre::FixedString::~FixedString(v72, v4);
  v63 = nullptr;
  if ( *(this + 12) == nullptr )
  {
    j_sprintf(s, "%s_bottom", (const char *)*(this + 9) + 212);
    v64 = (Ogre::Material *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
    Ogre::FixedString::FixedString((Ogre::FixedString *)v72, (Ogre::FixedString *)s, v6);
    *(this + 12) = (BlockTexElement *)BlockMaterialMgr::getTexElement(v64, (const Ogre::FixedString *)v72, 1);
    Ogre::FixedString::~FixedString(v72, v7);
    v63 = (Ogre::Material *)(&dword_0 + 1);
  }
  Ogre::FixedString::FixedString((Ogre::FixedString *)v72, (Ogre::FixedString *)"block", v5);
  v8 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v8, (const Ogre::FixedString *)v72);
  *(this + 16) = v8;
  Ogre::FixedString::~FixedString(v72, v9);
  v70 = *(this + 16);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v72, (Ogre::FixedString *)"BLEND_MODE", v10);
  v11 = (void *)(Ogre::Material::setParamMacro(v70, (const Ogre::FixedString *)v72, 1u) >> 32);
  Ogre::FixedString::~FixedString(v72, v11);
  v12 = *(this + 16);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v72, (Ogre::FixedString *)"DOUBLE_SIDE", v13);
  v14 = (void *)(Ogre::Material::setParamMacro(v12, (const Ogre::FixedString *)v72, 1u) >> 32);
  Ogre::FixedString::~FixedString(v72, v14);
  v71 = *(this + 16);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v72, (Ogre::FixedString *)"g_DiffuseTex", v15);
  Texture = (Ogre::Texture *)BlockTexElement::getTexture(*(this + 12), 0);
  Ogre::Material::setParamTexture(v71, (const Ogre::FixedString *)v72, Texture, 0);
  Ogre::FixedString::~FixedString(v72, v17);
  *(this + 2) = (BlockTexElement *)BlockTexElement::getTexture(*(this + 12), 0);
  if ( v63 != nullptr )
  {
    j_sprintf(s, "%s_top", (const char *)*(this + 9) + 212);
    v65 = (Ogre::Material *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
    Ogre::FixedString::FixedString((Ogre::FixedString *)v72, (Ogre::FixedString *)s, v18);
    *(this + 13) = (BlockTexElement *)BlockMaterialMgr::getTexElement(v65, (const Ogre::FixedString *)v72, 1);
    Ogre::FixedString::~FixedString(v72, v19);
    Ogre::FixedString::FixedString((Ogre::FixedString *)v72, (Ogre::FixedString *)"block", v20);
    v21 = (Ogre::Material *)operator new(0x2Cu);
    Ogre::Material::Material(v21, (const Ogre::FixedString *)v72);
    *(this + 17) = v21;
    Ogre::FixedString::~FixedString(v72, v22);
    v23 = *(this + 17);
    Ogre::FixedString::FixedString((Ogre::FixedString *)v72, (Ogre::FixedString *)"BLEND_MODE", v24);
    v25 = (void *)(Ogre::Material::setParamMacro(v23, (const Ogre::FixedString *)v72, 1u) >> 32);
    Ogre::FixedString::~FixedString(v72, v25);
    v26 = *(this + 17);
    Ogre::FixedString::FixedString((Ogre::FixedString *)v72, (Ogre::FixedString *)"DOUBLE_SIDE", v27);
    v28 = (void *)(Ogre::Material::setParamMacro(v26, (const Ogre::FixedString *)v72, 1u) >> 32);
    Ogre::FixedString::~FixedString(v72, v28);
    v29 = *(this + 17);
    Ogre::FixedString::FixedString((Ogre::FixedString *)v72, (Ogre::FixedString *)"g_DiffuseTex", v30);
    v31 = (Ogre::Texture *)BlockTexElement::getTexture(*(this + 13), 0);
    Ogre::Material::setParamTexture(v29, (const Ogre::FixedString *)v72, v31, 0);
    Ogre::FixedString::~FixedString(v72, v32);
    v33 = (BlockTexElement *)BlockTexElement::getTexture(*(this + 13), 0);
    v34 = (char *)*(this + 9) + 212;
    *(this + 2) = v33;
    j_sprintf(s, "%s_front", v34);
    v66 = (Ogre::Material *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
    Ogre::FixedString::FixedString((Ogre::FixedString *)v72, (Ogre::FixedString *)s, v35);
    *(this + 14) = (BlockTexElement *)BlockMaterialMgr::getTexElement(v66, (const Ogre::FixedString *)v72, 0);
    Ogre::FixedString::~FixedString(v72, v36);
    if ( *(this + 14) != nullptr )
    {
      Ogre::FixedString::FixedString((Ogre::FixedString *)v72, (Ogre::FixedString *)"block", v37);
      v67 = (Ogre::Material *)operator new(0x2Cu);
      Ogre::Material::Material(v67, (const Ogre::FixedString *)v72);
      *(this + 18) = v67;
      Ogre::FixedString::~FixedString(v72, v38);
      v68 = *(this + 18);
      Ogre::FixedString::FixedString((Ogre::FixedString *)v72, (Ogre::FixedString *)"BLEND_MODE", v39);
      v40 = (void *)(Ogre::Material::setParamMacro(v68, (const Ogre::FixedString *)v72, 1u) >> 32);
      Ogre::FixedString::~FixedString(v72, v40);
      v69 = *(this + 18);
      Ogre::FixedString::FixedString((Ogre::FixedString *)v72, (Ogre::FixedString *)"g_DiffuseTex", v41);
      v42 = (Ogre::Texture *)BlockTexElement::getTexture(*(this + 14), 0);
      Ogre::Material::setParamTexture(v69, (const Ogre::FixedString *)v72, v42, 0);
      Ogre::FixedString::~FixedString(v72, v43);
      v44 = (BlockTexElement *)BlockTexElement::getTexture(*(this + 14), 0);
      v45 = (char *)*(this + 9) + 212;
      *(this + 2) = v44;
      j_sprintf(s, "%s_back", v45);
      v46 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
      Ogre::FixedString::FixedString((Ogre::FixedString *)v72, (Ogre::FixedString *)s, v47);
      *(this + 15) = (BlockTexElement *)BlockMaterialMgr::getTexElement(v46, (const Ogre::FixedString *)v72, 1);
      Ogre::FixedString::~FixedString(v72, v48);
      Ogre::FixedString::FixedString((Ogre::FixedString *)v72, (Ogre::FixedString *)"block", v49);
      v50 = (Ogre::Material *)operator new(0x2Cu);
      Ogre::Material::Material(v50, (const Ogre::FixedString *)v72);
      *(this + 19) = v50;
      Ogre::FixedString::~FixedString(v72, v51);
      v52 = *(this + 19);
      Ogre::FixedString::FixedString((Ogre::FixedString *)v72, (Ogre::FixedString *)"BLEND_MODE", v53);
      v54 = (void *)(Ogre::Material::setParamMacro(v52, (const Ogre::FixedString *)v72, 1u) >> 32);
      Ogre::FixedString::~FixedString(v72, v54);
      v55 = *(this + 19);
      Ogre::FixedString::FixedString((Ogre::FixedString *)v72, (Ogre::FixedString *)"g_DiffuseTex", v56);
      v57 = (Ogre::Texture *)BlockTexElement::getTexture(*(this + 15), 0);
      Ogre::Material::setParamTexture(v55, (const Ogre::FixedString *)v72, v57, 0);
      Ogre::FixedString::~FixedString(v72, v58);
    }
  }
  result = (int)*(this + 2);
  if ( result != 0 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)result + 4))(result);
    v60 = (int)*(this + 2);
    *((_BYTE *)this + 28) = -1;
    *((_BYTE *)this + 29) = -1;
    *((_BYTE *)this + 30) = -1;
    *((_BYTE *)this + 31) = -1;
    result = (*(int (__fastcall **)(int, Ogre::FixedString **))(*(_DWORD *)v60 + 28))(v60, v72);
    v61 = v72[2];
    *(this + 5) = v72[1];
    *(this + 6) = v61;
    *(this + 3) = nullptr;
    *(this + 4) = nullptr;
  }
  return result;
}


//======================================================================
// ColorHerbMaterial::ColorHerbMaterial(void)
// address: 0x002678A8   size: 0x28 (40 bytes)
//======================================================================
// Alternative name is '_ZN17ColorHerbMaterialC1Ev'
void __fastcall ColorHerbMaterial::ColorHerbMaterial(ColorHerbMaterial *this)
{
  BlockMaterial::BlockMaterial(this);
  *(_DWORD *)this = &off_45B860;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
}


//======================================================================
// ColorHerbMaterial::newObject(void)
// address: 0x002C1636   size: 0x12 (18 bytes)
//======================================================================
ColorHerbMaterial *__fastcall ColorHerbMaterial::newObject(ColorHerbMaterial *this)
{
  ColorHerbMaterial *v1; // r4

  v1 = (ColorHerbMaterial *)operator new(0x50u);
  ColorHerbMaterial::ColorHerbMaterial(v1);
  return v1;
}

