// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockAnvil

//======================================================================
// BlockAnvil::newObject(void)
// address: 0x002C1406   size: 0x12 (18 bytes)
//======================================================================
BlockAnvil *__fastcall BlockAnvil::newObject(BlockAnvil *this)
{
  BlockAnvil *v1; // r4

  v1 = (BlockAnvil *)operator new(0x48u);
  BlockAnvil::BlockAnvil(v1);
  return v1;
}


//======================================================================
// BlockAnvil::getGeomName(void)
// address: 0x002D5420   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall BlockAnvil::getGeomName(BlockAnvil *this)
{
  return "anvil";
}


//======================================================================
// BlockAnvil::getBaseTexName(char *,BlockDef const*,int &)
// address: 0x002D542C   size: 0xA (10 bytes)
//======================================================================
int __fastcall BlockAnvil::getBaseTexName(int a1, int a2, int a3, _DWORD *a4)
{
  *a4 = 4;
  return a3 + 212;
}


//======================================================================
// BlockAnvil::~BlockAnvil()
// address: 0x002D5438   size: 0x3C (60 bytes)
//======================================================================
// Alternative name is '_ZN10BlockAnvilD1Ev'
void __fastcall BlockAnvil::~BlockAnvil(BlockAnvil *this)
{
  int v2; // r5
  _DWORD *v3; // r0
  int v4; // r2

  v2 = 0;
  *(_DWORD *)this = &off_4609E8;
  do
  {
    v3 = *(_DWORD **)((char *)this + v2 + 60);
    if ( v3 != nullptr )
    {
      v4 = v3[1] - 1;
      v3[1] = v4;
      if ( v4 <= 0 )
        (*(void (__fastcall **)(_DWORD *))(*v3 + 24))(v3);
      *(_DWORD *)((char *)this + v2 + 60) = 0;
    }
    v2 += 4;
  }
  while ( v2 != 12 );
  ModelBlockMaterial::~ModelBlockMaterial(this);
}


//======================================================================
// BlockAnvil::~BlockAnvil()
// address: 0x002D5478   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BlockAnvil::~BlockAnvil(BlockAnvil *this)
{
  BlockAnvil::~BlockAnvil(this);
  operator delete(this);
}


//======================================================================
// BlockAnvil::onBlockPlaced(World *,WCoord const&,DirectionType,float,float,float,int)
// address: 0x002D548C   size: 0x18 (24 bytes)
//======================================================================
int __fastcall BlockAnvil::onBlockPlaced(int a1, int a2, int *a3)
{
  return BlockOperateMgr::getCurPlaceDir(
           (BlockOperateMgr *)Ogre::Singleton<BlockOperateMgr>::ms_Singleton,
           *a3,
           a3[1],
           a3[2]);
}


//======================================================================
// BlockAnvil::createBlockMesh(ClientSection *,WCoord const&,SectionSubMesh *)
// address: 0x002D54A8   size: 0x88 (136 bytes)
//======================================================================
unsigned int __fastcall BlockAnvil::createBlockMesh(
        BlockAnvil *this,
        ClientSection *a2,
        const WCoord *a3,
        SectionSubMesh *a4)
{
  int v6; // r3
  unsigned int result; // r0
  int v10; // r7
  int v11; // r2
  __int16 *v12; // r2
  int v13; // r2
  int v14; // r2
  SectionSubMesh *v15; // [sp+10h] [bp-3Ch]
  int v16; // [sp+14h] [bp-38h]
  int v17[4]; // [sp+18h] [bp-34h] BYREF
  float v18[9]; // [sp+28h] [bp-24h] BYREF

  v6 = *((_DWORD *)a2 + 5);
  result = *(_DWORD *)a3;
  v10 = *((_DWORD *)a3 + 1);
  v11 = *((_DWORD *)a3 + 2);
  if ( v6 != 0 )
    v12 = (__int16 *)(v6 + 2 * ((16 * v11) | (v10 << 8) | result));
  else
    v12 = &Section::m_EmptyBlock;
  v13 = (unsigned __int16)*v12;
  v16 = v13 >> 12;
  v14 = v13 >> 14;
  if ( v14 != 3 )
  {
    v15 = BlockMaterial::blockMeshOutput(this, a4, (SectionMesh **)a2, *((Ogre::Material **)this + v14 + 15));
    ClientSection::getBlockVertexLight(a2, a3, v18);
    BlockGeomTemplate::getFaceVerts(*((_DWORD *)this + 10), v17, 0, 1065353216, 0, v16 & 3, 0, nullptr);
    return (unsigned int)SectionSubMesh::addGeomBlockLight(v15, v17, a3, v18, nullptr);
  }
  return result;
}


//======================================================================
// BlockAnvil::BlockAnvil(void)
// address: 0x002D5534   size: 0x22 (34 bytes)
//======================================================================
// Alternative name is '_ZN10BlockAnvilC2Ev'
void __fastcall BlockAnvil::BlockAnvil(BlockAnvil *this)
{
  ModelBlockMaterial::ModelBlockMaterial(this);
  *(_DWORD *)this = &off_4609E8;
  j_memset((char *)this + 60, 0, 0xCu);
}


//======================================================================
// BlockAnvil::init(int)
// address: 0x002D555C   size: 0xAC (172 bytes)
//======================================================================
void __fastcall BlockAnvil::init(__int64 this, int a2)
{
  int v2; // r5
  Ogre::Material *v3; // r6
  int v4; // r2
  void *v5; // r1
  int v6; // r2
  Ogre::Material **v7; // r6
  Ogre::Material *v8; // r7
  void *v9; // r1
  Ogre::Material *v10; // r7
  int v11; // r2
  void *v12; // r1
  Ogre::Material *v13; // r7
  int v14; // r2
  Ogre::Texture *Texture; // r0
  void *v16; // r1
  int i; // [sp+4h] [bp-10h]
  Ogre::FixedString *v18[2]; // [sp+Ch] [bp-8h] BYREF

  v2 = this;
  ModelBlockMaterial::init(this, a2);
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(v2 + 52) + 4))(*(_DWORD *)(v2 + 52));
  v3 = *(Ogre::Material **)(v2 + 52);
  *(_DWORD *)(v2 + 60) = v3;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v18, (Ogre::FixedString *)"BLEND_MODE", v4);
  v5 = (void *)(Ogre::Material::setParamMacro(v3, (const Ogre::FixedString *)v18, 1u) >> 32);
  Ogre::FixedString::~FixedString(v18, v5);
  v7 = (Ogre::Material **)(v2 + 64);
  for ( i = 1; i != 3; ++i )
  {
    Ogre::FixedString::FixedString((Ogre::FixedString *)v18, (Ogre::FixedString *)"block", v6);
    v8 = (Ogre::Material *)operator new(0x2Cu);
    Ogre::Material::Material(v8, (const Ogre::FixedString *)v18);
    *v7 = v8;
    Ogre::FixedString::~FixedString(v18, v9);
    v10 = *v7;
    Ogre::FixedString::FixedString((Ogre::FixedString *)v18, (Ogre::FixedString *)"BLEND_MODE", v11);
    v12 = (void *)(Ogre::Material::setParamMacro(v10, (const Ogre::FixedString *)v18, 1u) >> 32);
    Ogre::FixedString::~FixedString(v18, v12);
    v13 = *v7;
    Ogre::FixedString::FixedString((Ogre::FixedString *)v18, (Ogre::FixedString *)"g_DiffuseTex", v14);
    Texture = (Ogre::Texture *)BlockTexElement::getTexture(*(BlockTexElement **)(v2 + 48), i);
    Ogre::Material::setParamTexture(v13, (const Ogre::FixedString *)v18, Texture, 0);
    Ogre::FixedString::~FixedString(v18, v16);
    ++v7;
  }
}

