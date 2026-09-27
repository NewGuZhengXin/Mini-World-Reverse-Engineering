// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: SolidBlockMaterial

//======================================================================
// SolidBlockMaterial::canBlocksMovement(World *,WCoord const&)
// address: 0x00269190   size: 0x4 (4 bytes)
//======================================================================
int SolidBlockMaterial::canBlocksMovement()
{
  return 1;
}


//======================================================================
// SolidBlockMaterial::getFaceUVTile(DirectionType)
// address: 0x0026AF0E   size: 0x4 (4 bytes)
//======================================================================
int SolidBlockMaterial::getFaceUVTile()
{
  return 0;
}


//======================================================================
// SolidBlockMaterial::getGeomName(void)
// address: 0x002BE154   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall SolidBlockMaterial::getGeomName(SolidBlockMaterial *this)
{
  return "cube";
}


//======================================================================
// SolidBlockMaterial::isOpaque(void)
// address: 0x002BE160   size: 0x4 (4 bytes)
//======================================================================
int __fastcall SolidBlockMaterial::isOpaque(SolidBlockMaterial *this)
{
  return 1;
}


//======================================================================
// SolidBlockMaterial::isOpaqueCube(void)
// address: 0x002BE164   size: 0x4 (4 bytes)
//======================================================================
int __fastcall SolidBlockMaterial::isOpaqueCube(SolidBlockMaterial *this)
{
  return 1;
}


//======================================================================
// SolidBlockMaterial::renderAsNormalBlock(void)
// address: 0x002BE168   size: 0x4 (4 bytes)
//======================================================================
int __fastcall SolidBlockMaterial::renderAsNormalBlock(SolidBlockMaterial *this)
{
  return 1;
}


//======================================================================
// SolidBlockMaterial::getProtoBlockData(void)
// address: 0x002BE16C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall SolidBlockMaterial::getProtoBlockData(SolidBlockMaterial *this)
{
  return 0;
}


//======================================================================
// SolidBlockMaterial::getBlockHeight(int)
// address: 0x002BE170   size: 0x6 (6 bytes)
//======================================================================
int __fastcall SolidBlockMaterial::getBlockHeight(SolidBlockMaterial *this, int a2)
{
  return 1065353216;
}


//======================================================================
// SolidBlockMaterial::needBiomeColor(DirectionType)
// address: 0x002BE176   size: 0x4 (4 bytes)
//======================================================================
int SolidBlockMaterial::needBiomeColor()
{
  return 0;
}


//======================================================================
// SolidBlockMaterial::coverNeighbor(World *,WCoord const&,DirectionType)
// address: 0x002BE204   size: 0x66 (102 bytes)
//======================================================================
int __fastcall SolidBlockMaterial::coverNeighbor(int a1, World *this, WCoord *a3, int a4)
{
  unsigned __int16 *Block; // r0
  float v7; // r5
  int v8; // r4

  Block = (unsigned __int16 *)World::getBlock(this, a3);
  v7 = COERCE_FLOAT((*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 208))(a1, (int)*Block >> 12));
  v8 = 1;
  if ( v7 != 1.0 && v7 != -1.0 )
  {
    if ( v7 <= 0.0 )
    {
      v8 = v7 < 0.0;
      if ( v7 < 0.0 )
      {
        v8 = 3;
        if ( a4 == 5 )
          return 1;
      }
    }
    else
    {
      return (a4 != 4) + 1;
    }
  }
  return v8;
}


//======================================================================
// SolidBlockMaterial::createCollideData(CollisionDetect *,World *,WCoord const&)
// address: 0x002BE3A8   size: 0xA0 (160 bytes)
//======================================================================
int __fastcall SolidBlockMaterial::createCollideData(
        SolidBlockMaterial *this,
        CollisionDetect *a2,
        World *a3,
        const WCoord *a4)
{
  int (__fastcall *v6)(SolidBlockMaterial *, int); // r6
  int BlockData; // r0
  int v8; // r7
  int v9; // r5
  const WCoord *v10; // r6
  int v11; // r5
  float v13; // [sp+0h] [bp-3Ch]
  int v14; // [sp+4h] [bp-38h]
  _DWORD v16[3]; // [sp+14h] [bp-28h] BYREF
  _DWORD v17[3]; // [sp+20h] [bp-1Ch] BYREF
  _DWORD v18[4]; // [sp+2Ch] [bp-10h] BYREF

  v6 = *(int (__fastcall **)(SolidBlockMaterial *, int))(*(_DWORD *)this + 208);
  BlockData = World::getBlockData(a3, a4);
  v13 = COERCE_FLOAT(v6(this, BlockData));
  v14 = 100 * *(_DWORD *)a4;
  v8 = 100 * *((_DWORD *)a4 + 2);
  v9 = 100 * *((_DWORD *)a4 + 1);
  v16[1] = v9;
  v16[0] = v14;
  v16[2] = v8;
  v10 = (const WCoord *)v16;
  if ( v13 < 0.0 )
  {
    v10 = (const WCoord *)v17;
    v17[0] = v14;
    v17[1] = v9 + (int)(float)((float)(v13 + 1.0) * 100.0);
    v17[2] = v8;
    v18[0] = v14 + 100;
    v11 = v9 + 100;
  }
  else
  {
    v18[0] = v14 + 100;
    v11 = v9 + (int)(float)(v13 * 100.0);
  }
  v18[1] = v11;
  v18[2] = v8 + 100;
  return CollisionDetect::addObstacle(a2, v10, (const WCoord *)v18);
}


//======================================================================
// SolidBlockMaterial::prepareBlock(ClientSection *,WCoord const&)
// address: 0x002BE514   size: 0x24 (36 bytes)
//======================================================================
__int16 *__fastcall SolidBlockMaterial::prepareBlock(int a1, int a2, int *a3)
{
  int v3; // r3
  int v4; // r4
  int v5; // r0
  int v6; // r2

  v3 = *(_DWORD *)(a2 + 20);
  v4 = *a3;
  v5 = a3[1];
  v6 = a3[2];
  if ( v3 != 0 )
    return (__int16 *)(v3 + 2 * ((v5 << 8) | (16 * v6) | v4));
  else
    return &Section::m_EmptyBlock;
}


//======================================================================
// SolidBlockMaterial::~SolidBlockMaterial()
// address: 0x002BE600   size: 0x3C (60 bytes)
//======================================================================
// Alternative name is '_ZN18SolidBlockMaterialD1Ev'
void __fastcall SolidBlockMaterial::~SolidBlockMaterial(SolidBlockMaterial *this)
{
  unsigned int v2; // r5
  _DWORD **v3; // r0

  v2 = 0;
  *(_DWORD *)this = &off_45EE58;
  while ( 1 )
  {
    v3 = *((_DWORD ***)this + 12);
    if ( v2 >= (*((_DWORD *)this + 13) - (int)v3) >> 4 )
      break;
    Ogre::BaseObject::release(v3[4 * v2++ + 3]);
  }
  if ( v3 != nullptr )
    operator delete(v3);
  BlockMaterial::~BlockMaterial(this);
}


//======================================================================
// SolidBlockMaterial::~SolidBlockMaterial()
// address: 0x002BE640   size: 0x12 (18 bytes)
//======================================================================
void __fastcall SolidBlockMaterial::~SolidBlockMaterial(SolidBlockMaterial *this)
{
  SolidBlockMaterial::~SolidBlockMaterial(this);
  operator delete(this);
}


//======================================================================
// SolidBlockMaterial::init(int)
// address: 0x002BE720   size: 0x8 (8 bytes)
//======================================================================
__int64 __fastcall SolidBlockMaterial::init(__int64 this, int a2)
{
  return BlockMaterial::init(this, a2);
}


//======================================================================
// SolidBlockMaterial::createBlockMesh(ClientSection *,WCoord const&,SectionSubMesh *)
// address: 0x002BE93C   size: 0x128 (296 bytes)
//======================================================================
int __fastcall SolidBlockMaterial::createBlockMesh(
        SolidBlockMaterial *this,
        Chunk **a2,
        const WCoord *a3,
        SectionSubMesh *a4)
{
  int v7; // r3
  BiomeGenBase *BiomeGen; // r0
  unsigned int v9; // r4
  int result; // r0
  Ogre::Material *v11; // r0
  int v12; // r0
  float v13; // [sp+14h] [bp-50h]
  SectionSubMesh *v14; // [sp+18h] [bp-4Ch]
  int v15; // [sp+1Ch] [bp-48h]
  unsigned __int16 *v16; // [sp+20h] [bp-44h]
  int LeafColor; // [sp+2Ch] [bp-38h] BYREF
  _DWORD v19[4]; // [sp+30h] [bp-34h] BYREF
  _BYTE v20[36]; // [sp+40h] [bp-24h] BYREF

  v16 = (unsigned __int16 *)(*(int (__fastcall **)(SolidBlockMaterial *))(*(_DWORD *)this + 188))(this);
  v13 = COERCE_FLOAT((*(int (__fastcall **)(SolidBlockMaterial *, int))(*(_DWORD *)this + 208))(this, (int)*v16 >> 12));
  if ( v13 > 0.0 && v13 < 1.0 )
  {
    v15 = 5;
  }
  else
  {
    if ( v13 >= 0.0 )
      v7 = -1;
    else
      v7 = v13 <= -1.0 ? -1 : 4;
    v15 = v7;
  }
  BiomeGen = (BiomeGenBase *)Chunk::getBiomeGen(a2[1], *(_DWORD *)a3, *((_DWORD *)a3 + 2));
  v9 = 0;
  LeafColor = BiomeGenBase::getLeafColor(BiomeGen);
  do
  {
    if ( v9 == v15 )
    {
      result = 0;
    }
    else
    {
      result = ClientSection::getNeighborCover(a2, a3, v9);
      if ( result == 1 )
        goto LABEL_17;
    }
    ClientSection::calVertexLights(a2, v16, a3, v9, result, v20, 1);
    v11 = (Ogre::Material *)(*(int (__fastcall **)(SolidBlockMaterial *, unsigned int, int))(*(_DWORD *)this + 192))(
                              this,
                              v9,
                              (int)*v16 >> 12);
    v14 = BlockMaterial::blockMeshOutput(this, a4, a2, v11);
    v12 = *((_DWORD *)this + 10);
    if ( v13 == 1.0 )
      BlockGeomTemplate::getFaceVerts(v12, v19, v9);
    else
      BlockGeomTemplate::getFaceVerts(v12, v19, v9, SLODWORD(v13), 1, 2, 0, nullptr);
    if ( (*(int (__fastcall **)(SolidBlockMaterial *, unsigned int))(*(_DWORD *)this + 212))(this, v9) != 0 )
      result = SectionSubMesh::addGeomFaceLight(v14, v19, a3, v20, &LeafColor);
    else
      result = SectionSubMesh::addGeomFaceLight(v14, v19, a3, v20, 0);
LABEL_17:
    ++v9;
  }
  while ( v9 != 6 );
  return result;
}


//======================================================================
// SolidBlockMaterial::SolidBlockMaterial(void)
// address: 0x002BED0C   size: 0x1E (30 bytes)
//======================================================================
// Alternative name is '_ZN18SolidBlockMaterialC1Ev'
void __fastcall SolidBlockMaterial::SolidBlockMaterial(SolidBlockMaterial *this)
{
  BlockMaterial::BlockMaterial(this);
  *(_DWORD *)this = &off_45EE58;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
}


//======================================================================
// SolidBlockMaterial::insertItemMtl(Ogre::Texture *,Ogre::BlendMode,bool)
// address: 0x002BEE34   size: 0x1AE (430 bytes)
//======================================================================
Ogre::Material *__fastcall SolidBlockMaterial::insertItemMtl(_DWORD *a1, Ogre::Texture *a2, unsigned int a3, int a4)
{
  int v5; // r3
  int v6; // r1
  int i; // r2
  Ogre::Material *v9; // r7
  void *v10; // r1
  Ogre::Material *v11; // r7
  int v12; // r2
  void *v13; // r1
  Ogre::Material *v14; // r7
  int v15; // r2
  void *v16; // r1
  int v17; // r2
  void *v18; // r1
  Ogre::Material *v19; // r5
  int v20; // r2
  void *v21; // r1
  unsigned int *v22; // r3
  unsigned int v23; // r5
  Ogre::Texture *v24; // r7
  Ogre::Material *v27; // [sp+8h] [bp-24h]
  Ogre::FixedString *v29; // [sp+14h] [bp-18h] BYREF
  unsigned int v30; // [sp+18h] [bp-14h] BYREF
  unsigned int v31; // [sp+1Ch] [bp-10h]
  Ogre::Texture *v32; // [sp+20h] [bp-Ch]
  Ogre::Material *v33; // [sp+24h] [bp-8h]

  v5 = a1[12];
  v6 = (a1[13] - v5) >> 4;
  for ( i = 0; i != v6; ++i )
  {
    if ( *(_DWORD *)v5 == a3 && *(Ogre::Texture **)(v5 + 8) == a2 && *(unsigned __int8 *)(v5 + 4) == a4 )
      return *(Ogre::Material **)(v5 + 12);
    v5 += 16;
  }
  if ( (dword_5134A8 & 1) == 0 && _cxa_guard_acquire(&dword_5134A8) != 0 )
  {
    dword_5134AC = 1065353216;
    dword_5134B0 = 1065353216;
    dword_5134B4 = 1065353216;
    dword_5134B8 = 1065353216;
    _cxa_guard_release(&dword_5134A8);
  }
  if ( (dword_5134BC & 1) == 0 && _cxa_guard_acquire(&dword_5134BC) != 0 )
  {
    dword_5134C0 = 1055957975;
    dword_5134C8 = 1055957975;
    dword_5134C4 = 1061662228;
    dword_5134CC = 1065353216;
    _cxa_guard_release(&dword_5134BC);
  }
  LOBYTE(v31) = a4;
  v32 = a2;
  v30 = a3;
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v29, (Ogre::FixedString *)"blockitem", i);
  v9 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v9, (const Ogre::FixedString *)&v29);
  v33 = v9;
  Ogre::FixedString::~FixedString(&v29, v10);
  v11 = v33;
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v29, (Ogre::FixedString *)"BLEND_MODE", v12);
  v13 = (void *)(Ogre::Material::setParamMacro(v11, (const Ogre::FixedString *)&v29, a3) >> 32);
  Ogre::FixedString::~FixedString(&v29, v13);
  v14 = v33;
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v29, (Ogre::FixedString *)"USE_TEXTURE", v15);
  v16 = (void *)(Ogre::Material::setParamMacro(v14, (const Ogre::FixedString *)&v29, 1u) >> 32);
  Ogre::FixedString::~FixedString(&v29, v16);
  v27 = v33;
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v29, (Ogre::FixedString *)"g_DiffuseTex", v17);
  Ogre::Material::setParamTexture(v27, (const Ogre::FixedString *)&v29, a2, 0);
  Ogre::FixedString::~FixedString(&v29, v18);
  v19 = v33;
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v29, (Ogre::FixedString *)"GrassColor", v20);
  if ( a4 != 0 )
    Ogre::Material::setParamValue(v19, (const Ogre::FixedString *)&v29, &dword_5134C0);
  else
    Ogre::Material::setParamValue(v19, (const Ogre::FixedString *)&v29, &dword_5134AC);
  Ogre::FixedString::~FixedString(&v29, v21);
  v22 = (unsigned int *)a1[13];
  if ( v22 == (unsigned int *)a1[14] )
  {
    std::vector<SolidBlockMaterial::ItemMaterial>::_M_emplace_back_aux<SolidBlockMaterial::ItemMaterial const&>(
      (int)(a1 + 12),
      &v30);
  }
  else
  {
    if ( v22 != nullptr )
    {
      v23 = v31;
      v24 = v32;
      *v22 = v30;
      v22[1] = v23;
      v22[2] = (unsigned int)v24;
      v22[3] = (unsigned int)v33;
    }
    a1[13] += 16;
  }
  return v33;
}


//======================================================================
// SolidBlockMaterial::createBlockProtoMesh(BlockInstanceData *)
// address: 0x002BF014   size: 0x114 (276 bytes)
//======================================================================
SectionMesh *__fastcall SolidBlockMaterial::createBlockProtoMesh(_DWORD *a1, int a2)
{
  SectionMesh *v4; // r5
  int v5; // r3
  unsigned __int8 v6; // r7
  Ogre::Material *v7; // r1
  Ogre::Texture *v8; // r0
  Ogre::Material *inserted; // r0
  int v10; // r0
  unsigned int i; // [sp+10h] [bp-44h]
  int SubMesh; // [sp+14h] [bp-40h]
  int v14; // [sp+18h] [bp-3Ch]
  float v15; // [sp+1Ch] [bp-38h]
  unsigned int v16; // [sp+20h] [bp-34h] BYREF
  unsigned __int8 v17; // [sp+24h] [bp-30h]
  _BYTE v18[36]; // [sp+30h] [bp-24h] BYREF

  if ( a2 != 0 )
  {
    Block::getHeight(*(Block **)(a2 + 16));
    v4 = *(SectionMesh **)(a2 + 20);
    v14 = (int)**(unsigned __int16 **)(a2 + 16) >> 12;
  }
  else
  {
    v4 = nullptr;
    v14 = (*(int (__fastcall **)(_DWORD *))(*a1 + 204))(a1);
  }
  v15 = COERCE_FLOAT((*(int (__fastcall **)(_DWORD *, int))(*a1 + 208))(a1, v14));
  if ( v4 != nullptr )
  {
    SectionMesh::reset(v4, true);
  }
  else
  {
    v4 = (SectionMesh *)operator new(0x114u);
    SectionMesh::SectionMesh(v4, true);
  }
  for ( i = 0; i != 6; ++i )
  {
    v5 = *a1;
    if ( a2 != 0 )
    {
      v6 = 0;
      v7 = (Ogre::Material *)(*(int (__fastcall **)(_DWORD *, unsigned int, int))(v5 + 192))(a1, i, v14);
    }
    else
    {
      v17 = 0;
      v16 = 0;
      v8 = (Ogre::Texture *)(*(int (__fastcall **)(_DWORD *, unsigned int, unsigned int *))(v5 + 196))(a1, i, &v16);
      inserted = SolidBlockMaterial::insertItemMtl(a1, v8, v16, v17);
      v6 = v17;
      v7 = inserted;
    }
    SubMesh = SectionMesh::getSubMesh(v4, v7);
    *(_BYTE *)(SubMesh + 36) = v6;
    v10 = a1[10];
    if ( v15 == 1.0 )
      BlockGeomTemplate::getFaceVerts(v10, &v16, i);
    else
      BlockGeomTemplate::getFaceVerts(v10, &v16, i, SLODWORD(v15), 1, 2, 0, nullptr);
    if ( a2 != 0 )
    {
      ClientSection::getFaceVertexLight(*(_DWORD *)a2, a2 + 4, i, v18);
      SectionSubMesh::addGeomFaceLight(SubMesh, &v16, 0, v18, 0);
    }
    else
    {
      SectionSubMesh::addGeomFaceLight(SubMesh, &v16, 0, &unk_468B7C, 0);
    }
  }
  SectionMesh::onCreate(v4);
  return v4;
}

