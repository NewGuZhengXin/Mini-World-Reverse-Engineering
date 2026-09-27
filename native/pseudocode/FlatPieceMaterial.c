// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: FlatPieceMaterial

//======================================================================
// FlatPieceMaterial::getRenderColor(void)
// address: 0x00267CB8   size: 0x14 (20 bytes)
//======================================================================
int __fastcall FlatPieceMaterial::getRenderColor(FlatPieceMaterial *this)
{
  return -1;
}


//======================================================================
// FlatPieceMaterial::isDoubleSide(void)
// address: 0x00267CCC   size: 0x4 (4 bytes)
//======================================================================
int __fastcall FlatPieceMaterial::isDoubleSide(FlatPieceMaterial *this)
{
  return 0;
}


//======================================================================
// FlatPieceMaterial::getGeomName(void)
// address: 0x002A60D0   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall FlatPieceMaterial::getGeomName(FlatPieceMaterial *this)
{
  return "flatpiece";
}


//======================================================================
// FlatPieceMaterial::~FlatPieceMaterial()
// address: 0x002A60DC   size: 0x32 (50 bytes)
//======================================================================
// Alternative name is '_ZN17FlatPieceMaterialD1Ev'
void __fastcall FlatPieceMaterial::~FlatPieceMaterial(FlatPieceMaterial *this)
{
  _DWORD *v2; // r0
  int v3; // r3

  *(_DWORD *)this = &off_45D0A0;
  v2 = *((_DWORD **)this + 13);
  if ( v2 != nullptr )
  {
    v3 = v2[1] - 1;
    v2[1] = v3;
    if ( v3 <= 0 )
      (*(void (__fastcall **)(_DWORD *))(*v2 + 24))(v2);
    *((_DWORD *)this + 13) = 0;
  }
  BlockMaterial::~BlockMaterial(this);
}


//======================================================================
// FlatPieceMaterial::~FlatPieceMaterial()
// address: 0x002A6114   size: 0x12 (18 bytes)
//======================================================================
void __fastcall FlatPieceMaterial::~FlatPieceMaterial(FlatPieceMaterial *this)
{
  FlatPieceMaterial::~FlatPieceMaterial(this);
  operator delete(this);
}


//======================================================================
// FlatPieceMaterial::getDestroyTexture(Block *,BlockTexDesc &)
// address: 0x002A6126   size: 0x12 (18 bytes)
//======================================================================
int __fastcall FlatPieceMaterial::getDestroyTexture(int a1, int a2, int a3)
{
  *(_DWORD *)a3 = 1;
  *(_BYTE *)(a3 + 4) = 0;
  return BlockTexElement::getTexture(*(BlockTexElement **)(a1 + 48), 0);
}


//======================================================================
// FlatPieceMaterial::createBlockMesh(ClientSection *,WCoord const&,SectionSubMesh *)
// address: 0x002A6138   size: 0x78 (120 bytes)
//======================================================================
int __fastcall FlatPieceMaterial::createBlockMesh(
        FlatPieceMaterial *this,
        ClientSection *a2,
        const WCoord *a3,
        SectionSubMesh *a4)
{
  int v7; // r1
  int v8; // r0
  int v9; // r3
  int v10; // r2
  __int16 *v11; // r3
  int result; // r0
  int v13; // r6
  int v15; // [sp+14h] [bp-38h] BYREF
  _DWORD v16[4]; // [sp+18h] [bp-34h] BYREF
  float v17[9]; // [sp+28h] [bp-24h] BYREF

  v7 = *(_DWORD *)a3;
  v8 = *((_DWORD *)a3 + 1);
  v9 = *((_DWORD *)a3 + 2);
  v10 = *((_DWORD *)a2 + 5);
  if ( v10 != 0 )
    v11 = (__int16 *)(v10 + 2 * ((16 * v9) | (v8 << 8) | v7));
  else
    v11 = &Section::m_EmptyBlock;
  result = BlockGeomTemplate::getFaceVerts(*((_DWORD *)this + 10), v16, (int)(unsigned __int16)*v11 >> 12);
  if ( result != 0 )
  {
    ClientSection::getBlockVertexLight(a2, a3, v17);
    v13 = BlockMaterial::blockMeshOutput(this, a4, a2, *((Ogre::Material **)this + 13));
    v15 = (*(int (__fastcall **)(FlatPieceMaterial *))(*(_DWORD *)this + 188))(this);
    return SectionSubMesh::addGeomBlockLight(v13, v16, a3, v17, &v15);
  }
  return result;
}


//======================================================================
// FlatPieceMaterial::createCollideData(CollisionDetect *,World *,WCoord const&)
// address: 0x002A61B4   size: 0x92 (146 bytes)
//======================================================================
int __fastcall FlatPieceMaterial::createCollideData(
        FlatPieceMaterial *this,
        CollisionDetect *a2,
        World *a3,
        const WCoord *a4)
{
  int BlockData; // r0
  const WCoord *v7; // r1
  int v8; // r6
  int v9; // r2
  int v10; // r4
  int v11; // r2
  int v12; // r3
  int v13; // r4
  int v14; // r3
  _DWORD v16[3]; // [sp+4h] [bp-28h] BYREF
  _DWORD v17[3]; // [sp+10h] [bp-1Ch] BYREF
  _DWORD v18[4]; // [sp+1Ch] [bp-10h] BYREF

  BlockData = World::getBlockData(a3, a4);
  v7 = (const WCoord *)v16;
  v8 = 100 * *(_DWORD *)a4;
  v9 = *((_DWORD *)a4 + 1);
  v16[0] = v8;
  v10 = 100 * v9;
  v11 = *((_DWORD *)a4 + 2);
  v16[1] = v10;
  v12 = 100 * v11;
  v16[2] = 100 * v11;
  switch ( BlockData )
  {
    case 0:
      v18[0] = v8 + 10;
LABEL_15:
      v18[1] = v10 + 100;
      v14 = v12 + 100;
      goto LABEL_16;
    case 1:
      v7 = (const WCoord *)v17;
      v17[0] = v8 + 90;
      v17[1] = v10;
LABEL_13:
      v17[2] = 100 * v11;
      goto LABEL_14;
    case 2:
      v18[0] = v8 + 100;
      v13 = v10 + 100;
      break;
    case 3:
      v7 = (const WCoord *)v17;
      v17[0] = v8;
      v17[1] = v10;
      v17[2] = v12 + 90;
LABEL_14:
      v18[0] = v8 + 100;
      goto LABEL_15;
    case 4:
      v18[0] = v8 + 100;
      v13 = v10 + 10;
      break;
    default:
      v7 = (const WCoord *)v17;
      v17[0] = v8;
      v17[1] = v10 + 90;
      goto LABEL_13;
  }
  v18[1] = v13;
  v14 = v12 + 10;
LABEL_16:
  v18[2] = v14;
  return CollisionDetect::addObstacle(a2, v7, (const WCoord *)v18);
}


//======================================================================
// FlatPieceMaterial::init(int)
// address: 0x002A6248   size: 0x116 (278 bytes)
//======================================================================
int __fastcall FlatPieceMaterial::init(BlockTexElement **this, int a2)
{
  BlockMaterialMgr *v3; // r6
  int v4; // r2
  void *v5; // r1
  int v6; // r2
  Ogre::Material *v7; // r6
  void *v8; // r1
  Ogre::Material *v9; // r6
  int v10; // r2
  void *v11; // r1
  int v12; // r2
  Ogre::Material *v13; // r6
  void *v14; // r1
  Ogre::Material *v15; // r6
  Ogre::Texture *Texture; // r0
  void *v17; // r1
  int result; // r0
  Ogre::FixedString *v19; // r4
  Ogre::FixedString *v20[7]; // [sp+4h] [bp-1Ch] BYREF

  BlockMaterial::init((BlockMaterial *)this, a2);
  v3 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v20, (BlockTexElement *)((char *)*(this + 9) + 212), v4);
  *(this + 12) = (BlockTexElement *)BlockMaterialMgr::getTexElement(v3, (const Ogre::FixedString *)v20, 1);
  Ogre::FixedString::~FixedString(v20, v5);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v20, (Ogre::FixedString *)"block", v6);
  v7 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v7, (const Ogre::FixedString *)v20);
  *(this + 13) = v7;
  Ogre::FixedString::~FixedString(v20, v8);
  v9 = *(this + 13);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v20, (Ogre::FixedString *)"BLEND_MODE", v10);
  v11 = (void *)(Ogre::Material::setParamMacro(v9, (const Ogre::FixedString *)v20, 1u) >> 32);
  Ogre::FixedString::~FixedString(v20, v11);
  if ( (*((int (__fastcall **)(BlockTexElement **))*this + 48))(this) != 0 )
  {
    v13 = *(this + 13);
    Ogre::FixedString::FixedString((Ogre::FixedString *)v20, (Ogre::FixedString *)"DOUBLE_SIDE", v12);
    v14 = (void *)(Ogre::Material::setParamMacro(v13, (const Ogre::FixedString *)v20, 1u) >> 32);
    Ogre::FixedString::~FixedString(v20, v14);
  }
  v15 = *(this + 13);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v20, (Ogre::FixedString *)"g_DiffuseTex", v12);
  Texture = (Ogre::Texture *)BlockTexElement::getTexture(*(this + 12), 0);
  Ogre::Material::setParamTexture(v15, (const Ogre::FixedString *)v20, Texture, 0);
  Ogre::FixedString::~FixedString(v20, v17);
  result = BlockTexElement::getTexture(*(this + 12), 0);
  *(this + 2) = (BlockTexElement *)result;
  if ( result != 0 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)result + 4))(result);
    *(this + 7) = (BlockTexElement *)(*((int (__fastcall **)(BlockTexElement **))*this + 47))(this);
    result = (*(int (__fastcall **)(_DWORD, Ogre::FixedString **))(*(_DWORD *)*(this + 2) + 28))(*(this + 2), v20);
    v19 = v20[2];
    *(this + 5) = v20[1];
    *(this + 6) = v19;
    *(this + 3) = nullptr;
    *(this + 4) = nullptr;
  }
  return result;
}


//======================================================================
// FlatPieceMaterial::FlatPieceMaterial(void)
// address: 0x002A6374   size: 0x1A (26 bytes)
//======================================================================
// Alternative name is '_ZN17FlatPieceMaterialC1Ev'
void __fastcall FlatPieceMaterial::FlatPieceMaterial(FlatPieceMaterial *this)
{
  BlockMaterial::BlockMaterial(this);
  *(_DWORD *)this = &off_45D0A0;
  *((_DWORD *)this + 13) = 0;
}

