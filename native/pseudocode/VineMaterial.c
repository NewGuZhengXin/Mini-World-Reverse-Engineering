// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: VineMaterial

//======================================================================
// VineMaterial::getTickRandomly(void)
// address: 0x00264FAC   size: 0x4 (4 bytes)
//======================================================================
int __fastcall VineMaterial::getTickRandomly(VineMaterial *this)
{
  return 1;
}


//======================================================================
// VineMaterial::isDoubleSide(void)
// address: 0x00264FB0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall VineMaterial::isDoubleSide(VineMaterial *this)
{
  return 1;
}


//======================================================================
// VineMaterial::getRenderColor(void)
// address: 0x00264FB4   size: 0x1E (30 bytes)
//======================================================================
int __fastcall VineMaterial::getRenderColor(VineMaterial *this)
{
  return -10158236;
}


//======================================================================
// VineMaterial::onBlockPlaced(World *,WCoord const&,DirectionType,float,float,float,int)
// address: 0x00264FD2   size: 0x4 (4 bytes)
//======================================================================
int __fastcall VineMaterial::onBlockPlaced(int a1, int a2, int a3, int a4)
{
  return a4;
}


//======================================================================
// VineMaterial::blockTick(World *,WCoord const&)
// address: 0x00264FD6   size: 0x2 (2 bytes)
//======================================================================
void VineMaterial::blockTick()
{
  ;
}


//======================================================================
// VineMaterial::~VineMaterial()
// address: 0x00264FD8   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN12VineMaterialD1Ev'
void __fastcall VineMaterial::~VineMaterial(VineMaterial *this)
{
  *(_DWORD *)this = &off_45B288;
  FlatPieceMaterial::~FlatPieceMaterial(this);
}


//======================================================================
// VineMaterial::~VineMaterial()
// address: 0x00264FF4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall VineMaterial::~VineMaterial(VineMaterial *this)
{
  VineMaterial::~VineMaterial(this);
  operator delete(this);
}


//======================================================================
// VineMaterial::createBlockMesh(ClientSection *,WCoord const&,SectionSubMesh *)
// address: 0x00265008   size: 0x7E (126 bytes)
//======================================================================
int __fastcall VineMaterial::createBlockMesh(
        VineMaterial *this,
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
  BiomeGenBase *BiomeGen; // r0
  int v14; // r0
  int LeafColor; // [sp+14h] [bp-38h] BYREF
  _BYTE v17[16]; // [sp+18h] [bp-34h] BYREF
  float v18[9]; // [sp+28h] [bp-24h] BYREF

  v7 = *(_DWORD *)a3;
  v8 = *((_DWORD *)a3 + 1);
  v9 = *((_DWORD *)a3 + 2);
  v10 = *((_DWORD *)a2 + 5);
  if ( v10 != 0 )
    v11 = (__int16 *)(v10 + 2 * ((16 * v9) | (v8 << 8) | v7));
  else
    v11 = &Section::m_EmptyBlock;
  result = BlockGeomTemplate::getFaceVerts(*((_DWORD *)this + 10), v17, (int)(unsigned __int16)*v11 >> 12);
  if ( result != 0 )
  {
    BiomeGen = (BiomeGenBase *)Chunk::getBiomeGen(*((Chunk **)a2 + 1), *(_DWORD *)a3, *((_DWORD *)a3 + 2));
    LeafColor = BiomeGenBase::getLeafColor(BiomeGen);
    ClientSection::getBlockVertexLight(a2, a3, v18);
    v14 = BlockMaterial::blockMeshOutput(this, a4, a2, *((Ogre::Material **)this + 13));
    *(_BYTE *)(v14 + 37) = 1;
    return SectionSubMesh::addGeomBlockLight(v14, v17, a3, v18, &LeafColor);
  }
  return result;
}


//======================================================================
// VineMaterial::canPlacedOn(int)
// address: 0x0026508C   size: 0x2A (42 bytes)
//======================================================================
bool __fastcall VineMaterial::canPlacedOn(VineMaterial *this, int a2)
{
  _DWORD *Material; // r4
  int v3; // r0
  int v4; // r3

  Material = (_DWORD *)BlockMaterialMgr::getMaterial(
                         (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                         a2);
  v3 = (*(int (__fastcall **)(_DWORD *))(*Material + 64))(Material);
  v4 = 0;
  if ( v3 != 0 )
    return *(_DWORD *)(Material[9] + 12) == 1;
  return v4;
}


//======================================================================
// VineMaterial::canPlaceBlockOnSide(World *,WCoord const&,int)
// address: 0x002650BC   size: 0x4A (74 bytes)
//======================================================================
bool __fastcall VineMaterial::canPlaceBlockOnSide(VineMaterial *this, World *a2, const WCoord *a3, int a4)
{
  int v5; // r0
  int v6; // r7
  int v7; // r2
  int *v8; // r4
  int v9; // r3
  int v10; // r0
  int v11; // r3
  int BlockID; // r0
  _DWORD v14[4]; // [sp+4h] [bp-10h] BYREF

  if ( (unsigned int)(a4 - 4) <= 1 )
    return false;
  v5 = *((_DWORD *)a3 + 1);
  v6 = *((_DWORD *)a3 + 2);
  v7 = *(_DWORD *)a3;
  v8 = &g_DirectionCoord[3 * a4];
  v9 = v8[2];
  v14[1] = v5 + v8[1];
  v10 = v6 + v9;
  v11 = *v8;
  v14[2] = v10;
  v14[0] = v7 + v11;
  BlockID = World::getBlockID(a2, (const WCoord *)v14);
  return VineMaterial::canPlacedOn(this, BlockID);
}


//======================================================================
// VineMaterial::canVineStay(World *,WCoord const&)
// address: 0x0026510C   size: 0x82 (130 bytes)
//======================================================================
bool __fastcall VineMaterial::canVineStay(VineMaterial *this, World *a2, const WCoord *a3)
{
  int BlockData; // r0
  int v6; // r2
  int v7; // r5
  int v8; // r1
  int v9; // r0
  int v10; // r3
  int BlockID; // r0
  _BOOL4 canPlacedOn; // r7
  int v13; // r2
  int v14; // r3
  int v16; // [sp+0h] [bp-1Ch]
  int v18; // [sp+Ch] [bp-10h] BYREF
  int v19; // [sp+10h] [bp-Ch]
  int v20; // [sp+14h] [bp-8h]

  BlockData = World::getBlockData(a2, a3);
  v6 = 3 * BlockData;
  v16 = BlockData;
  v7 = *((_DWORD *)a3 + 2);
  v8 = *((_DWORD *)a3 + 1) + g_DirectionCoord[3 * BlockData + 1];
  v9 = g_DirectionCoord[3 * BlockData + 2];
  v10 = g_DirectionCoord[v6];
  v19 = v8;
  v18 = *(_DWORD *)a3 + v10;
  v20 = v7 + v9;
  BlockID = World::getBlockID(a2, (const WCoord *)&v18);
  canPlacedOn = VineMaterial::canPlacedOn(this, BlockID);
  if ( !canPlacedOn )
  {
    v13 = *(_DWORD *)a3;
    v19 = *((_DWORD *)a3 + 1) + 1;
    v14 = *((_DWORD *)a3 + 2);
    v18 = v13;
    v20 = v14;
    if ( World::getBlockID(a2, (const WCoord *)&v18) == *((_DWORD *)this + 8) )
      return World::getBlockData(a2, a3) == v16;
  }
  return canPlacedOn;
}


//======================================================================
// VineMaterial::onNeighborBlockChange(World *,WCoord const&,int)
// address: 0x00265194   size: 0x48 (72 bytes)
//======================================================================
__int64 __fastcall VineMaterial::onNeighborBlockChange(__int64 this, const WCoord *a2, int a3)
{
  __int64 v6; // [sp+0h] [bp-Ch]

  v6 = this;
  if ( *(_BYTE *)(HIDWORD(this) + 68) == 0
    && !VineMaterial::canVineStay((VineMaterial *)this, (World *)HIDWORD(this), a2) )
  {
    HIDWORD(v6) = 1065353216;
    (*(void (__fastcall **)(_DWORD, _DWORD, const WCoord *, _DWORD, int))(*(_DWORD *)this + 180))(
      this,
      HIDWORD(this),
      a2,
      0,
      1);
    World::setBlockAll((World *)HIDWORD(this), a2, 0, 0, 3);
  }
  return v6;
}


//======================================================================
// VineMaterial::newObject(void)
// address: 0x002C1B0C   size: 0x1C (28 bytes)
//======================================================================
FlatPieceMaterial *__fastcall VineMaterial::newObject(VineMaterial *this)
{
  FlatPieceMaterial *v1; // r4

  v1 = (FlatPieceMaterial *)operator new(0x38u);
  FlatPieceMaterial::FlatPieceMaterial(v1);
  *(_DWORD *)v1 = &off_45B288;
  return v1;
}

