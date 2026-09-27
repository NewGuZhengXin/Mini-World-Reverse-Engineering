// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: TripWireHookMaterial

//======================================================================
// TripWireHookMaterial::getGeomName(void)
// address: 0x002A5254   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall TripWireHookMaterial::getGeomName(TripWireHookMaterial *this)
{
  return "tripwire";
}


//======================================================================
// TripWireHookMaterial::~TripWireHookMaterial()
// address: 0x002A5260   size: 0x32 (50 bytes)
//======================================================================
// Alternative name is '_ZN20TripWireHookMaterialD1Ev'
void __fastcall TripWireHookMaterial::~TripWireHookMaterial(TripWireHookMaterial *this)
{
  _DWORD *v2; // r0
  int v3; // r3

  *(_DWORD *)this = &off_45CDB0;
  v2 = *((_DWORD **)this + 15);
  if ( v2 != nullptr )
  {
    v3 = v2[1] - 1;
    v2[1] = v3;
    if ( v3 <= 0 )
      (*(void (__fastcall **)(_DWORD *))(*v2 + 24))(v2);
    *((_DWORD *)this + 15) = 0;
  }
  ModelBlockMaterial::~ModelBlockMaterial(this);
}


//======================================================================
// TripWireHookMaterial::~TripWireHookMaterial()
// address: 0x002A5298   size: 0x12 (18 bytes)
//======================================================================
void __fastcall TripWireHookMaterial::~TripWireHookMaterial(TripWireHookMaterial *this)
{
  TripWireHookMaterial::~TripWireHookMaterial(this);
  operator delete(this);
}


//======================================================================
// TripWireHookMaterial::createBlockProtoMesh(BlockInstanceData *)
// address: 0x002A52AA   size: 0x6A (106 bytes)
//======================================================================
SectionMesh *__fastcall TripWireHookMaterial::createBlockProtoMesh(int a1)
{
  SectionMesh *v2; // r5
  int SubMesh; // r7
  _DWORD v5[5]; // [sp+8h] [bp-14h] BYREF

  v2 = (SectionMesh *)operator new(0x114u);
  SectionMesh::SectionMesh(v2, true);
  SubMesh = SectionMesh::getSubMesh(v2, *(Ogre::Material **)(a1 + 56));
  BlockGeomTemplate::getFaceVerts(*(_DWORD *)(a1 + 40), v5, 0);
  SectionSubMesh::addTriangleList(SubMesh, v5[2], v5[0], v5[3], v5[1], 0);
  BlockGeomTemplate::getFaceVerts(*(_DWORD *)(a1 + 40), v5, 1u);
  SectionSubMesh::addTriangleList(SubMesh, v5[2], v5[0], v5[3], v5[1], 0);
  SectionMesh::onCreate(v2);
  return v2;
}


//======================================================================
// TripWireHookMaterial::createBlockMesh(ClientSection *,WCoord const&,SectionSubMesh *)
// address: 0x002A5320   size: 0xB4 (180 bytes)
//======================================================================
int __fastcall TripWireHookMaterial::createBlockMesh(
        TripWireHookMaterial *this,
        ClientSection *a2,
        const WCoord *a3,
        SectionSubMesh *a4)
{
  int v8; // r1
  int v9; // r0
  int v10; // r3
  int v11; // r2
  __int16 *v12; // r3
  int SubMesh; // r7
  int v15; // [sp+1Ch] [bp-40h]
  int v16; // [sp+20h] [bp-3Ch]
  int v17; // [sp+24h] [bp-38h]
  _DWORD v18[4]; // [sp+28h] [bp-34h] BYREF
  float v19[9]; // [sp+38h] [bp-24h] BYREF

  v8 = *(_DWORD *)a3;
  v9 = *((_DWORD *)a3 + 1);
  v10 = *((_DWORD *)a3 + 2);
  v11 = *((_DWORD *)a2 + 5);
  if ( v11 != 0 )
    v12 = (__int16 *)(v11 + 2 * ((16 * v10) | (v9 << 8) | v8));
  else
    v12 = &Section::m_EmptyBlock;
  v17 = (unsigned __int16)*v12;
  v16 = (unsigned int)(v17 << 18) >> 30;
  ClientSection::getBlockVertexLight(a2, a3, v19);
  v15 = BlockMaterial::blockMeshOutput(this, a4, a2, *((Ogre::Material **)this + 15));
  BlockGeomTemplate::getFaceVerts(*((_DWORD *)this + 10), v18, 0, 1065353216, 0, v16, 0, nullptr);
  SectionSubMesh::addGeomBlockLight(v15, v18, a3, v19, 0);
  SubMesh = SectionMesh::getSubMesh(*((SectionMesh **)a2 + 14), *((Ogre::Material **)this + 13));
  BlockGeomTemplate::getFaceVerts(*((_DWORD *)this + 10), v18, (v17 >> 14) + 1, 1065353216, 0, v16, 0, nullptr);
  return SectionSubMesh::addGeomBlockLight(SubMesh, v18, a3, v19, 0);
}


//======================================================================
// TripWireHookMaterial::TripWireHookMaterial(void)
// address: 0x002A53D8   size: 0x1A (26 bytes)
//======================================================================
// Alternative name is '_ZN20TripWireHookMaterialC1Ev'
void __fastcall TripWireHookMaterial::TripWireHookMaterial(TripWireHookMaterial *this)
{
  ModelBlockMaterial::ModelBlockMaterial(this);
  *(_DWORD *)this = &off_45CDB0;
  *((_DWORD *)this + 15) = 0;
}


//======================================================================
// TripWireHookMaterial::init(int)
// address: 0x002A53F8   size: 0x82 (130 bytes)
//======================================================================
__int64 __fastcall TripWireHookMaterial::init(__int64 this, int a2)
{
  int v2; // r5
  BlockMaterialMgr *v3; // r6
  int v4; // r2
  BlockTexElement *TexElement; // r7
  void *v6; // r1
  int v7; // r2
  int v8; // r3
  Ogre::Material *v9; // r6
  void *v10; // r1
  Ogre::Material *v11; // r5
  int v12; // r2
  int v13; // r3
  Ogre::Texture *Texture; // r0
  void *v15; // r1
  __int64 v17; // [sp+0h] [bp-Ch] BYREF
  int v18; // [sp+8h] [bp-4h]

  v17 = this;
  v18 = a2;
  v2 = this;
  ModelBlockMaterial::init((ModelBlockMaterial *)this, SHIDWORD(this));
  v3 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  HIDWORD(v17) = Ogre::FixedString::insert(
                   (Ogre::FixedString *)(*(_DWORD *)(v2 + 36) + 244),
                   (const char *)0xFFFFFFFF,
                   v4,
                   (int)&Ogre::Singleton<BlockMaterialMgr>::ms_Singleton);
  TexElement = (BlockTexElement *)BlockMaterialMgr::getTexElement(v3, (const Ogre::FixedString *)((char *)&v17 + 4), 0);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)&v17 + 1, v6);
  HIDWORD(v17) = Ogre::FixedString::insert((Ogre::FixedString *)"block", (const char *)0xFFFFFFFF, v7, v8);
  v9 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v9, (const Ogre::FixedString *)((char *)&v17 + 4));
  *(_DWORD *)(v2 + 60) = v9;
  Ogre::FixedString::~FixedString((Ogre::FixedString **)&v17 + 1, v10);
  v11 = *(Ogre::Material **)(v2 + 60);
  HIDWORD(v17) = Ogre::FixedString::insert((Ogre::FixedString *)"g_DiffuseTex", (const char *)0xFFFFFFFF, v12, v13);
  Texture = (Ogre::Texture *)BlockTexElement::getTexture(TexElement, 0);
  Ogre::Material::setParamTexture(v11, (const Ogre::FixedString *)((char *)&v17 + 4), Texture, 0);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)&v17 + 1, v15);
  return v17;
}


//======================================================================
// TripWireHookMaterial::newObject(void)
// address: 0x002C14CA   size: 0x12 (18 bytes)
//======================================================================
TripWireHookMaterial *__fastcall TripWireHookMaterial::newObject(TripWireHookMaterial *this)
{
  TripWireHookMaterial *v1; // r4

  v1 = (TripWireHookMaterial *)operator new(0x40u);
  TripWireHookMaterial::TripWireHookMaterial(v1);
  return v1;
}

