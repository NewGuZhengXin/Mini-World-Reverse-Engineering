// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: LeverMaterial

//======================================================================
// LeverMaterial::getGeomName(void)
// address: 0x002B42BC   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall LeverMaterial::getGeomName(LeverMaterial *this)
{
  return "lever";
}


//======================================================================
// LeverMaterial::canProvidePower(void)
// address: 0x002B42C8   size: 0x4 (4 bytes)
//======================================================================
int __fastcall LeverMaterial::canProvidePower(LeverMaterial *this)
{
  return 1;
}


//======================================================================
// LeverMaterial::~LeverMaterial()
// address: 0x002B42CC   size: 0x32 (50 bytes)
//======================================================================
// Alternative name is '_ZN13LeverMaterialD1Ev'
void __fastcall LeverMaterial::~LeverMaterial(LeverMaterial *this)
{
  _DWORD *v2; // r0
  int v3; // r3

  *(_DWORD *)this = &off_45DEE8;
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
// LeverMaterial::~LeverMaterial()
// address: 0x002B4304   size: 0x12 (18 bytes)
//======================================================================
void __fastcall LeverMaterial::~LeverMaterial(LeverMaterial *this)
{
  LeverMaterial::~LeverMaterial(this);
  operator delete(this);
}


//======================================================================
// LeverMaterial::createBlockProtoMesh(BlockInstanceData *)
// address: 0x002B4316   size: 0x7C (124 bytes)
//======================================================================
SectionMesh *__fastcall LeverMaterial::createBlockProtoMesh(int a1)
{
  SectionMesh *v2; // r4
  int SubMesh; // r7
  _DWORD v5[5]; // [sp+8h] [bp-14h] BYREF

  v2 = (SectionMesh *)operator new(0x114u);
  SectionMesh::SectionMesh(v2, true);
  SubMesh = SectionMesh::getSubMesh(v2, *(Ogre::Material **)(a1 + 56));
  BlockGeomTemplate::getFaceVerts(*(_DWORD *)(a1 + 40), v5, 1u);
  SectionSubMesh::addTriangleList(SubMesh, v5[2], v5[0], v5[3], v5[1], 0);
  BlockGeomTemplate::getFaceVerts(*(_DWORD *)(a1 + 40), v5, 3u);
  SectionSubMesh::addTriangleList(SubMesh, v5[2], v5[0], v5[3], v5[1], 0);
  SectionMesh::onCreate(v2);
  *((_DWORD *)v2 + 9) = 0x40000000;
  *((_DWORD *)v2 + 10) = 0x40000000;
  *((_DWORD *)v2 + 11) = 0x40000000;
  (*(void (__fastcall **)(SectionMesh *))(*(_DWORD *)v2 + 64))(v2);
  return v2;
}


//======================================================================
// LeverMaterial::isProvidingStrongPower(World *,WCoord const&,DirectionType)
// address: 0x002B439C   size: 0x26 (38 bytes)
//======================================================================
int __fastcall LeverMaterial::isProvidingStrongPower(int a1, World *this, WCoord *a3, int a4)
{
  char BlockData; // r0
  int v6; // r2
  unsigned int v7; // r0

  BlockData = World::getBlockData(this, a3);
  v6 = 0;
  if ( (BlockData & 8) != 0 )
  {
    v7 = BlockData & 7;
    if ( v7 > 5 )
      v7 -= 2;
    if ( v7 == a4 )
      return 15;
  }
  return v6;
}


//======================================================================
// LeverMaterial::isProvidingWeakPower(World *,WCoord const&,DirectionType)
// address: 0x002B43C2   size: 0x14 (20 bytes)
//======================================================================
int __fastcall LeverMaterial::isProvidingWeakPower(int a1, World *this, WCoord *a3)
{
  int result; // r0

  result = World::getBlockData(this, a3) & 8;
  if ( result != 0 )
    return 15;
  return result;
}


//======================================================================
// LeverMaterial::createCollideData(CollisionDetect *,World *,WCoord const&)
// address: 0x002B43D6   size: 0x9E (158 bytes)
//======================================================================
int __fastcall LeverMaterial::createCollideData(LeverMaterial *this, CollisionDetect *a2, World *a3, const WCoord *a4)
{
  char BlockData; // r0
  int v7; // r1
  unsigned int v8; // r5
  int v9; // r2
  int result; // r0
  _DWORD v11[3]; // [sp+Ch] [bp-28h] BYREF
  _DWORD v12[3]; // [sp+18h] [bp-1Ch] BYREF
  _DWORD v13[4]; // [sp+24h] [bp-10h] BYREF

  BlockData = World::getBlockData(a3, a4);
  v7 = 100 * *((_DWORD *)a4 + 1);
  v8 = BlockData & 7;
  v9 = 100 * *((_DWORD *)a4 + 2);
  v11[0] = 100 * *(_DWORD *)a4;
  v11[1] = v7;
  v11[2] = v9;
  if ( v8 > 3 )
  {
    result = BlockData & 5;
    if ( result == 4 )
    {
      v12[0] = 12;
      v12[1] = 0;
      v13[0] = 88;
      v12[2] = 20;
      v13[1] = 20;
      v13[2] = 80;
      v8 -= 4;
    }
    else
    {
      if ( result != 5 )
        return result;
      v12[0] = 12;
      v12[2] = 20;
      v13[0] = 88;
      v12[1] = 80;
      v13[1] = 100;
      v13[2] = 80;
      v8 -= 5;
    }
  }
  else
  {
    v12[0] = 0;
    v12[1] = 12;
    v12[2] = 20;
    v13[0] = 20;
    v13[1] = 88;
    v13[2] = 80;
  }
  return CollisionDetect::addObstacle(a2, (const WCoord *)v12, (const WCoord *)v13, (const WCoord *)v11, v8);
}


//======================================================================
// LeverMaterial::createBlockMesh(ClientSection *,WCoord const&,SectionSubMesh *)
// address: 0x002B4474   size: 0x102 (258 bytes)
//======================================================================
int __fastcall LeverMaterial::createBlockMesh(
        LeverMaterial *this,
        ClientSection *a2,
        const WCoord *a3,
        SectionSubMesh *a4)
{
  int v7; // r1
  int v8; // r0
  int v9; // r3
  int v10; // r2
  __int16 *v11; // r3
  int v12; // r3
  unsigned int v13; // r4
  int v14; // r3
  int v15; // r6
  unsigned int v17; // [sp+14h] [bp-50h]
  int v18; // [sp+14h] [bp-50h]
  unsigned int v21; // [sp+28h] [bp-3Ch]
  int v22; // [sp+2Ch] [bp-38h]
  _DWORD v23[4]; // [sp+30h] [bp-34h] BYREF
  float v24[9]; // [sp+40h] [bp-24h] BYREF

  v7 = *(_DWORD *)a3;
  v8 = *((_DWORD *)a3 + 1);
  v9 = *((_DWORD *)a3 + 2);
  v10 = *((_DWORD *)a2 + 5);
  if ( v10 != 0 )
    v11 = (__int16 *)(v10 + 2 * ((16 * v9) | (v8 << 8) | v7));
  else
    v11 = &Section::m_EmptyBlock;
  v12 = (int)(unsigned __int16)*v11 >> 12;
  v13 = v12 & 7;
  v14 = v12 & 8;
  if ( v13 > 3 )
  {
    switch ( v13 )
    {
      case 4u:
        v15 = 0;
        break;
      case 6u:
        v15 = 0;
        v13 = 2;
        goto LABEL_14;
      case 5u:
        v15 = 2;
        v13 = 0;
        goto LABEL_14;
      default:
        v15 = 2;
        break;
    }
    v13 = v15;
LABEL_14:
    v17 = 1;
    goto LABEL_15;
  }
  v15 = 0;
  v17 = 0;
LABEL_15:
  v21 = v17 + 2 + 2 * (v14 != 0);
  ClientSection::getBlockVertexLight(a2, a3, v24);
  v22 = BlockMaterial::blockMeshOutput(this, a4, a2, *((Ogre::Material **)this + 15));
  BlockGeomTemplate::getFaceVerts(*((_DWORD *)this + 10), v23, v17, 1065353216, 0, v13, v15, nullptr);
  SectionSubMesh::addGeomBlockLight(v22, v23, a3, v24, 0);
  v18 = BlockMaterial::blockMeshOutput(this, a4, a2, *((Ogre::Material **)this + 13));
  BlockGeomTemplate::getFaceVerts(*((_DWORD *)this + 10), v23, v21, 1065353216, 0, v13, v15, nullptr);
  return SectionSubMesh::addGeomBlockLight(v18, v23, a3, v24, 0);
}


//======================================================================
// LeverMaterial::onBlockPlaced(World *,WCoord const&,DirectionType,float,float,float,int)
// address: 0x002B457C   size: 0x28 (40 bytes)
//======================================================================
int __fastcall LeverMaterial::onBlockPlaced(int a1, int a2, int *a3, int a4)
{
  int v4; // r4

  v4 = a4;
  if ( a4 > 3
    && (unsigned int)(BlockOperateMgr::getCurPlaceDir(
                        (BlockOperateMgr *)Ogre::Singleton<BlockOperateMgr>::ms_Singleton,
                        *a3,
                        a3[1],
                        a3[2])
                    - 2) <= 1 )
  {
    v4 += 2;
  }
  return v4;
}


//======================================================================
// LeverMaterial::canPlaceBlockAt(World *,WCoord const&)
// address: 0x002B45A8   size: 0x44 (68 bytes)
//======================================================================
int __fastcall LeverMaterial::canPlaceBlockAt(LeverMaterial *this, World *a2, const WCoord *a3)
{
  int *v4; // r4
  int v6; // r2
  int v7; // r12
  int result; // r0
  _DWORD v9[4]; // [sp+4h] [bp-10h] BYREF

  v4 = g_DirectionCoord;
  do
  {
    v6 = *((_DWORD *)a3 + 1) + v4[1];
    v7 = *((_DWORD *)a3 + 2) + v4[2];
    v9[0] = *(_DWORD *)a3 + *v4;
    v9[1] = v6;
    v9[2] = v7;
    result = World::isBlockNormalCube(a2, (const WCoord *)v9);
    if ( result != 0 )
      break;
    v4 += 3;
  }
  while ( v4 != (int *)&slotelements );
  return result;
}


//======================================================================
// LeverMaterial::canPlaceBlockOnSide(World *,WCoord const&,int)
// address: 0x002B45F0   size: 0x34 (52 bytes)
//======================================================================
int __fastcall LeverMaterial::canPlaceBlockOnSide(LeverMaterial *this, World *a2, const WCoord *a3, int a4)
{
  int v4; // r0
  int v5; // r6
  int v6; // r2
  int *v7; // r4
  int v8; // r3
  int v9; // r0
  int v10; // r3
  World *v12; // [sp+4h] [bp-Ch] BYREF
  const WCoord *v13; // [sp+8h] [bp-8h]
  int v14; // [sp+Ch] [bp-4h]

  v12 = a2;
  v13 = a3;
  v14 = a4;
  v4 = *((_DWORD *)a3 + 1);
  v5 = *((_DWORD *)a3 + 2);
  v6 = *(_DWORD *)a3;
  v7 = &g_DirectionCoord[3 * a4];
  v8 = v7[2];
  v13 = (const WCoord *)(v4 + v7[1]);
  v9 = v5 + v8;
  v10 = *v7;
  v14 = v9;
  v12 = (World *)(v6 + v10);
  return World::isBlockNormalCube(a2, (const WCoord *)&v12);
}


//======================================================================
// LeverMaterial::LeverMaterial(void)
// address: 0x002B4628   size: 0x1A (26 bytes)
//======================================================================
// Alternative name is '_ZN13LeverMaterialC1Ev'
void __fastcall LeverMaterial::LeverMaterial(LeverMaterial *this)
{
  ModelBlockMaterial::ModelBlockMaterial(this);
  *(_DWORD *)this = &off_45DEE8;
  *((_DWORD *)this + 15) = 0;
}


//======================================================================
// LeverMaterial::onNeighborBlockChange(World *,WCoord const&,int)
// address: 0x002B4680   size: 0x5E (94 bytes)
//======================================================================
int __fastcall LeverMaterial::onNeighborBlockChange(LeverMaterial *this, World *a2, const WCoord *a3, int a4)
{
  int result; // r0
  int BlockData; // [sp+Ch] [bp-18h]
  _DWORD v9[4]; // [sp+14h] [bp-10h] BYREF

  BlockData = World::getBlockData(a2, a3);
  LeverNeighborCoord(v9, (int *)a3, BlockData & 7);
  result = World::isBlockNormalCube(a2, (const WCoord *)v9);
  if ( result == 0 )
  {
    (*(void (__fastcall **)(LeverMaterial *, World *, const WCoord *, int, int, int))(*(_DWORD *)this + 180))(
      this,
      a2,
      a3,
      BlockData,
      1,
      1065353216);
    return World::setBlockAll(a2, a3, 0, 0, 3);
  }
  return result;
}


//======================================================================
// LeverMaterial::onBlockActivated(World *,WCoord const&,DirectionType,ClientPlayer *)
// address: 0x002B46DE   size: 0x4E (78 bytes)
//======================================================================
int __fastcall LeverMaterial::onBlockActivated(int a1, World *this, WCoord *a3)
{
  int BlockData; // r0
  int v7; // r7
  _DWORD v9[4]; // [sp+Ch] [bp-10h] BYREF

  BlockData = World::getBlockData(this, a3);
  v7 = BlockData & 7;
  World::setBlockData(this, a3, ~BlockData & 8 | v7, 3);
  World::notifyBlocksOfNeighborChange(this, a3, *(_DWORD *)(a1 + 32));
  LeverNeighborCoord(v9, (int *)a3, v7);
  World::notifyBlocksOfNeighborChange(this, (const WCoord *)v9, *(_DWORD *)(a1 + 32));
  return 1;
}


//======================================================================
// LeverMaterial::onBlockRemoved(World *,WCoord const&,int,int)
// address: 0x002B472C   size: 0x4A (74 bytes)
//======================================================================
int __fastcall LeverMaterial::onBlockRemoved(LeverMaterial *this, World *a2, const WCoord *a3, int a4, int a5)
{
  _DWORD v10[4]; // [sp+14h] [bp-10h] BYREF

  if ( (a5 & 8) != 0 )
  {
    World::notifyBlocksOfNeighborChange(a2, a3, *((_DWORD *)this + 8));
    LeverNeighborCoord(v10, (int *)a3, a5 & 7);
    World::notifyBlocksOfNeighborChange(a2, (const WCoord *)v10, *((_DWORD *)this + 8));
  }
  return BlockMaterial::onBlockRemoved(this, a2, a3, a4, a5);
}


//======================================================================
// LeverMaterial::init(int)
// address: 0x002B4778   size: 0x82 (130 bytes)
//======================================================================
__int64 __fastcall LeverMaterial::init(__int64 this, int a2)
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
// LeverMaterial::newObject(void)
// address: 0x002C14E6   size: 0x12 (18 bytes)
//======================================================================
LeverMaterial *__fastcall LeverMaterial::newObject(LeverMaterial *this)
{
  LeverMaterial *v1; // r4

  v1 = (LeverMaterial *)operator new(0x40u);
  LeverMaterial::LeverMaterial(v1);
  return v1;
}

