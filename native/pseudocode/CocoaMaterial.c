// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: CocoaMaterial

//======================================================================
// CocoaMaterial::newObject(void)
// address: 0x002C1572   size: 0x12 (18 bytes)
//======================================================================
CocoaMaterial *__fastcall CocoaMaterial::newObject(CocoaMaterial *this)
{
  CocoaMaterial *v1; // r4

  v1 = (CocoaMaterial *)operator new(0x48u);
  CocoaMaterial::CocoaMaterial(v1);
  return v1;
}


//======================================================================
// CocoaMaterial::getTickRandomly(void)
// address: 0x002C4BA0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall CocoaMaterial::getTickRandomly(CocoaMaterial *this)
{
  return 1;
}


//======================================================================
// CocoaMaterial::getGeomName(void)
// address: 0x002C4BA4   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall CocoaMaterial::getGeomName(CocoaMaterial *this)
{
  return "cocoa";
}


//======================================================================
// CocoaMaterial::createBlockProtoMesh(BlockInstanceData *)
// address: 0x002C4BB0   size: 0x4 (4 bytes)
//======================================================================
int CocoaMaterial::createBlockProtoMesh()
{
  return 0;
}


//======================================================================
// CocoaMaterial::getBaseTexName(char *,BlockDef const*,int &)
// address: 0x002C4BB4   size: 0xA (10 bytes)
//======================================================================
int __fastcall CocoaMaterial::getBaseTexName(int a1, int a2, int a3, _DWORD *a4)
{
  *a4 = 4;
  return a3 + 212;
}


//======================================================================
// CocoaMaterial::onBlockPlaced(World *,WCoord const&,DirectionType,float,float,float,int)
// address: 0x002C4BBE   size: 0x12 (18 bytes)
//======================================================================
int __fastcall CocoaMaterial::onBlockPlaced(int a1, int a2, int a3, int a4)
{
  int result; // r0

  result = 0;
  if ( a4 <= 3 )
  {
    result = a4 + 1;
    if ( (a4 & 1) != 0 )
      return a4 - 1;
  }
  return result;
}


//======================================================================
// CocoaMaterial::~CocoaMaterial()
// address: 0x002C4BD0   size: 0x3C (60 bytes)
//======================================================================
// Alternative name is '_ZN13CocoaMaterialD1Ev'
void __fastcall CocoaMaterial::~CocoaMaterial(CocoaMaterial *this)
{
  int v2; // r5
  _DWORD *v3; // r0
  int v4; // r2

  v2 = 0;
  *(_DWORD *)this = &off_45F6D8;
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
// CocoaMaterial::~CocoaMaterial()
// address: 0x002C4C10   size: 0x12 (18 bytes)
//======================================================================
void __fastcall CocoaMaterial::~CocoaMaterial(CocoaMaterial *this)
{
  CocoaMaterial::~CocoaMaterial(this);
  operator delete(this);
}


//======================================================================
// CocoaMaterial::getDestroyTexture(Block *,BlockTexDesc &)
// address: 0x002C4C22   size: 0x32 (50 bytes)
//======================================================================
int __fastcall CocoaMaterial::getDestroyTexture(int a1, int a2, int a3)
{
  BlockTexElement *v3; // r0
  int v4; // r1

  *(_DWORD *)a3 = 1;
  *(_BYTE *)(a3 + 4) = 0;
  v3 = *(BlockTexElement **)(a1 + 48);
  if ( *((_DWORD *)v3 + 9) != 0 )
    v4 = *((_DWORD *)v3 + 8) * *((_DWORD *)v3 + 7);
  else
    v4 = (*((_DWORD *)v3 + 11) - *((_DWORD *)v3 + 10)) >> 2;
  return BlockTexElement::getTexture(v3, v4 - ((unsigned int)((v4 >> 31) - v4) >> 31));
}


//======================================================================
// CocoaMaterial::blockTick(World *,WCoord const&)
// address: 0x002C4C54   size: 0x82 (130 bytes)
//======================================================================
int __fastcall CocoaMaterial::blockTick(CocoaMaterial *this, World *a2, const WCoord *a3)
{
  int result; // r0
  int BlockData; // [sp+Ch] [bp-8h]

  BlockData = World::getBlockData(a2, a3);
  if ( (*(int (__fastcall **)(CocoaMaterial *, World *, const WCoord *))(*(_DWORD *)this + 160))(this, a2, a3) != 0 )
  {
    result = World::genRandomInt(a2, 0, 4);
    if ( result == 0 && BlockData >> 2 <= 1 )
      return World::setBlockData(a2, a3, BlockData & 3 | (4 * ((BlockData >> 2) + 1)), 2);
  }
  else
  {
    (*(void (__fastcall **)(CocoaMaterial *, World *, const WCoord *, int, int, int))(*(_DWORD *)this + 180))(
      this,
      a2,
      a3,
      BlockData,
      1,
      1065353216);
    return World::setBlockAll(a2, a3, 0, 0, 2);
  }
  return result;
}


//======================================================================
// CocoaMaterial::canBlockStay(World *,WCoord const&)
// address: 0x002C4CD8   size: 0x4A (74 bytes)
//======================================================================
bool __fastcall CocoaMaterial::canBlockStay(CocoaMaterial *this, World *a2, const WCoord *a3, int a4)
{
  char BlockData; // r0
  int v7; // r6
  int *v8; // r3
  int v9; // r1
  int v10; // r0
  int v11; // r3
  int v12; // r2
  int v13; // r0
  World *v15; // [sp+4h] [bp-Ch] BYREF
  const WCoord *v16; // [sp+8h] [bp-8h]
  int v17; // [sp+Ch] [bp-4h]

  v15 = a2;
  v16 = a3;
  v17 = a4;
  BlockData = World::getBlockData(a2, a3);
  v7 = *((_DWORD *)a3 + 2);
  v8 = &g_DirectionCoord[3 * (BlockData & 3)];
  v9 = *((_DWORD *)a3 + 1) + v8[1];
  v10 = v8[2];
  v11 = *v8;
  v16 = (const WCoord *)v9;
  v12 = v7 + v10;
  v13 = *(_DWORD *)a3;
  v17 = v12;
  v15 = (World *)(v13 + v11);
  return World::getBlockID(a2, (const WCoord *)&v15) == 203;
}


//======================================================================
// CocoaMaterial::onFertilized(World *,WCoord const&,int)
// address: 0x002C4D28   size: 0x38 (56 bytes)
//======================================================================
int __fastcall CocoaMaterial::onFertilized(CocoaMaterial *this, World *a2, const WCoord *a3, int a4)
{
  int BlockData; // r6
  int v7; // r3

  BlockData = World::getBlockData(a2, a3);
  v7 = (BlockData >> 2) + GenRandomInt(0, 1);
  if ( v7 > 2 )
    v7 = 2;
  World::setBlockData(a2, a3, (4 * v7) | BlockData & 3, 2);
  return 1;
}


//======================================================================
// CocoaMaterial::dropBlockAsItem(World *,WCoord const&,int,BLOCK_MINE_TYPE,float)
// address: 0x002C4D60   size: 0x34 (52 bytes)
//======================================================================
int __fastcall CocoaMaterial::dropBlockAsItem(BlockMaterial *this, World *a2, const WCoord *a3, int a4)
{
  int v6; // r6
  int i; // r4
  int result; // r0

  if ( a4 <= 7 )
    v6 = 1;
  else
    v6 = 3;
  for ( i = 0; i < v6; ++i )
    result = BlockMaterial::doDropItem(this, a2, a3, *(unsigned __int16 *)(*((_DWORD *)this + 9) + 84), 1);
  return result;
}


//======================================================================
// CocoaMaterial::onNeighborBlockChange(World *,WCoord const&,int)
// address: 0x002C4D94   size: 0x50 (80 bytes)
//======================================================================
int __fastcall CocoaMaterial::onNeighborBlockChange(CocoaMaterial *this, World *a2, const WCoord *a3, int a4)
{
  int result; // r0
  int BlockData; // r3
  void (__fastcall *v9)(CocoaMaterial *, World *, const WCoord *, int, int, int); // [sp+Ch] [bp-8h]

  result = (*(int (__fastcall **)(CocoaMaterial *))(*(_DWORD *)this + 160))(this);
  if ( result == 0 )
  {
    v9 = *(void (__fastcall **)(CocoaMaterial *, World *, const WCoord *, int, int, int))(*(_DWORD *)this + 180);
    BlockData = World::getBlockData(a2, a3);
    v9(this, a2, a3, BlockData, 1, 1065353216);
    return World::setBlockAll(a2, a3, 0, 0, 2);
  }
  return result;
}


//======================================================================
// CocoaMaterial::createBlockMesh(ClientSection *,WCoord const&,SectionSubMesh *)
// address: 0x002C4DE4   size: 0x88 (136 bytes)
//======================================================================
int __fastcall CocoaMaterial::createBlockMesh(
        CocoaMaterial *this,
        ClientSection *a2,
        const WCoord *a3,
        SectionSubMesh *a4)
{
  int v6; // r0
  int v9; // r6
  int v10; // r3
  int v11; // r2
  __int16 *v12; // r2
  signed int v13; // r6
  int v14; // r2
  SectionSubMesh *v16; // [sp+18h] [bp-3Ch]
  char v17; // [sp+1Ch] [bp-38h]
  _DWORD v18[4]; // [sp+20h] [bp-34h] BYREF
  float v19[9]; // [sp+30h] [bp-24h] BYREF

  v6 = *((_DWORD *)a2 + 5);
  v9 = *((_DWORD *)a3 + 1);
  v10 = *(_DWORD *)a3;
  v11 = *((_DWORD *)a3 + 2);
  if ( v6 != 0 )
    v12 = (__int16 *)(v6 + 2 * ((16 * v11) | (v9 << 8) | v10));
  else
    v12 = &Section::m_EmptyBlock;
  v13 = (unsigned __int16)*v12;
  v14 = v13 >> 12;
  v13 >>= 14;
  v17 = v14;
  v16 = BlockMaterial::blockMeshOutput(this, a4, (SectionMesh **)a2, *((Ogre::Material **)this + v13 + 15));
  ClientSection::getBlockVertexLight(a2, a3, v19);
  BlockGeomTemplate::getFaceVerts(*((_DWORD *)this + 10), v18, v13, 1065353216, 0, v17 & 3, 0, nullptr);
  return SectionSubMesh::addGeomBlockLight(v16, v18, a3, v19, 0);
}


//======================================================================
// CocoaMaterial::CocoaMaterial(void)
// address: 0x002C4E70   size: 0x1E (30 bytes)
//======================================================================
// Alternative name is '_ZN13CocoaMaterialC2Ev'
void __fastcall CocoaMaterial::CocoaMaterial(CocoaMaterial *this)
{
  ModelBlockMaterial::ModelBlockMaterial(this);
  *(_DWORD *)this = &off_45F6D8;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
}


//======================================================================
// CocoaMaterial::init(int)
// address: 0x002C4E94   size: 0xAC (172 bytes)
//======================================================================
void __fastcall CocoaMaterial::init(__int64 this, int a2)
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

