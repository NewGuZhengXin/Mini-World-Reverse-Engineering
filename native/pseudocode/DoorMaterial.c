// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: DoorMaterial

//======================================================================
// DoorMaterial::newObject(void)
// address: 0x002C15FE   size: 0x12 (18 bytes)
//======================================================================
DoorMaterial *__fastcall DoorMaterial::newObject(DoorMaterial *this)
{
  DoorMaterial *v1; // r4

  v1 = (DoorMaterial *)operator new(0x44u);
  DoorMaterial::DoorMaterial(v1);
  return v1;
}


//======================================================================
// DoorMaterial::getGeomName(void)
// address: 0x002D7DA0   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall DoorMaterial::getGeomName(DoorMaterial *this)
{
  return "door";
}


//======================================================================
// DoorMaterial::createBlockProtoMesh(BlockInstanceData *)
// address: 0x002D7DAC   size: 0x4 (4 bytes)
//======================================================================
int DoorMaterial::createBlockProtoMesh()
{
  return 0;
}


//======================================================================
// DoorMaterial::~DoorMaterial()
// address: 0x002D7DB0   size: 0x32 (50 bytes)
//======================================================================
// Alternative name is '_ZN12DoorMaterialD1Ev'
void __fastcall DoorMaterial::~DoorMaterial(DoorMaterial *this)
{
  _DWORD *v2; // r0
  int v3; // r3

  *(_DWORD *)this = &off_460C88;
  v2 = *((_DWORD **)this + 16);
  if ( v2 != nullptr )
  {
    v3 = v2[1] - 1;
    v2[1] = v3;
    if ( v3 <= 0 )
      (*(void (__fastcall **)(_DWORD *))(*v2 + 24))(v2);
    *((_DWORD *)this + 16) = 0;
  }
  ModelBlockMaterial::~ModelBlockMaterial(this);
}


//======================================================================
// DoorMaterial::~DoorMaterial()
// address: 0x002D7DE8   size: 0x12 (18 bytes)
//======================================================================
void __fastcall DoorMaterial::~DoorMaterial(DoorMaterial *this)
{
  DoorMaterial::~DoorMaterial(this);
  operator delete(this);
}


//======================================================================
// DoorMaterial::getBaseTexName(char *,BlockDef const*,int &)
// address: 0x002D7DFC   size: 0x18 (24 bytes)
//======================================================================
char *__fastcall DoorMaterial::getBaseTexName(int a1, char *s, int a3, _DWORD *a4)
{
  *a4 = 1;
  j_sprintf(s, "%s_lower", (const char *)(a3 + 212));
  return s;
}


//======================================================================
// DoorMaterial::canBlocksMovement(World *,WCoord const&)
// address: 0x002D7E18   size: 0x12 (18 bytes)
//======================================================================
bool __fastcall DoorMaterial::canBlocksMovement(DoorMaterial *this, World *a2, const WCoord *a3, int a4)
{
  return (World::getBlockData(a2, a3, (int)a3, a4) & 8) == 0;
}


//======================================================================
// DoorMaterial::dropBlockAsItem(World *,WCoord const&,int,BLOCK_MINE_TYPE,float)
// address: 0x002D7E2A   size: 0x14 (20 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> DoorMaterial::dropBlockAsItem(
        int a1,
        World *a2,
        const WCoord *a3,
        char a4,
        int a5,
        float a6)
{
  if ( (a4 & 4) == 0 )
    BlockMaterial::dropBlockAsItem(a1, a2, a3, a4, a5, a6);
}


//======================================================================
// DoorMaterial::canPlaceBlockAt(World *,WCoord const&)
// address: 0x002D7E3E   size: 0x50 (80 bytes)
//======================================================================
int __fastcall DoorMaterial::canPlaceBlockAt(DoorMaterial *this, World *a2, const WCoord *a3)
{
  int v3; // r3
  int v5; // r2
  int v6; // r3
  int result; // r0
  int v10; // r2
  int v11; // r3
  int v12; // r5
  int v13; // [sp+4h] [bp-10h] BYREF
  int v14; // [sp+8h] [bp-Ch]
  int v15; // [sp+Ch] [bp-8h]

  v3 = *((_DWORD *)a3 + 1);
  v5 = *(_DWORD *)a3;
  v14 = v3 - 1;
  v6 = *((_DWORD *)a3 + 2);
  v13 = v5;
  v15 = v6;
  result = World::doesBlockHaveSolidTopSurface(a2, (const WCoord *)&v13);
  if ( result != 0 )
  {
    result = BlockMaterial::canPlaceBlockAt(this, a2, a3);
    if ( result != 0 )
    {
      v10 = *((_DWORD *)a3 + 2);
      v11 = *((_DWORD *)a3 + 1);
      v12 = *(_DWORD *)a3;
      v15 = v10;
      v13 = v12;
      v14 = v11 + 1;
      return BlockMaterial::canPlaceBlockAt(this, a2, (const WCoord *)&v13);
    }
  }
  return result;
}


//======================================================================
// DoorMaterial::DoorMaterial(void)
// address: 0x002D7E90   size: 0x1A (26 bytes)
//======================================================================
// Alternative name is '_ZN12DoorMaterialC2Ev'
void __fastcall DoorMaterial::DoorMaterial(DoorMaterial *this)
{
  ModelBlockMaterial::ModelBlockMaterial(this);
  *(_DWORD *)this = &off_460C88;
  *((_DWORD *)this + 16) = 0;
}


//======================================================================
// DoorMaterial::ParseDoorData(World *,WCoord const&,bool &,bool &,bool &)
// address: 0x002D7EB0   size: 0x96 (150 bytes)
//======================================================================
int __fastcall DoorMaterial::ParseDoorData(
        DoorMaterial *this,
        World *a2,
        const WCoord *a3,
        bool *a4,
        bool *a5,
        bool *a6)
{
  char BlockData; // r0
  char v9; // r7
  int v10; // r3
  int v11; // r2
  int v12; // r4
  int result; // r0
  int v14; // r3
  int v15; // r2
  int v16; // r4
  int v17; // r0
  _DWORD v19[4]; // [sp+Ch] [bp-10h] BYREF

  BlockData = World::getBlockData(a2, a3, (int)a3, (int)a4);
  *a4 = (BlockData & 4) != 0;
  *a5 = (BlockData & 8) != 0;
  v9 = BlockData;
  if ( *a4 )
  {
    *a6 = BlockData & 1;
    v10 = *((_DWORD *)a3 + 1);
    v11 = *((_DWORD *)a3 + 2);
    v12 = *(_DWORD *)a3;
    v19[1] = v10 - 1;
    v19[2] = v11;
    v19[0] = v12;
    result = World::getBlockData(a2, (const WCoord *)v19, v11, v10 - 1) & 3;
  }
  else
  {
    v14 = *((_DWORD *)a3 + 1);
    v15 = *((_DWORD *)a3 + 2);
    v16 = *(_DWORD *)a3;
    v19[1] = v14 + 1;
    v19[2] = v15;
    v19[0] = v16;
    *a6 = World::getBlockData(a2, (const WCoord *)v19, v15, v14 + 1) & 1;
    result = v9 & 3;
  }
  if ( *a5 )
  {
    v17 = 4 * result;
    if ( *a6 )
      return *(_DWORD *)((char *)&unk_446988 + v17);
    else
      return *(_DWORD *)((char *)&unk_446988 + v17 + 16);
  }
  return result;
}


//======================================================================
// DoorMaterial::createBlockMesh(ClientSection *,WCoord const&,SectionSubMesh *)
// address: 0x002D7F50   size: 0xDC (220 bytes)
//======================================================================
void *__fastcall DoorMaterial::createBlockMesh(
        DoorMaterial *this,
        ClientSection *a2,
        const WCoord *a3,
        SectionSubMesh *a4)
{
  World *v6; // r1
  int v8; // r12
  int v9; // r12
  int v10; // r0
  SectionSubMesh *v11; // r6
  Ogre::Material *v13; // [sp+10h] [bp-28h]
  Ogre::Material *v14; // [sp+10h] [bp-28h]
  bool v16; // [sp+25h] [bp-13h] BYREF
  bool v17; // [sp+26h] [bp-12h] BYREF
  bool v18; // [sp+27h] [bp-11h] BYREF
  int v19[4]; // [sp+28h] [bp-10h] BYREF
  float v20[9]; // [sp+38h] [bp+0h] BYREF

  v6 = *(World **)(*((_DWORD *)a2 + 1) + 1432);
  v8 = *((_DWORD *)a3 + 1) + *((_DWORD *)a2 + 3);
  v13 = (Ogre::Material *)(*((_DWORD *)a3 + 2) + *((_DWORD *)a2 + 4));
  LODWORD(v20[0]) = *(_DWORD *)a3 + *((_DWORD *)a2 + 2);
  LODWORD(v20[1]) = v8;
  LODWORD(v20[2]) = v13;
  v9 = DoorMaterial::ParseDoorData(this, v6, (const WCoord *)v20, &v16, &v17, &v18);
  if ( v17 )
    v18 ^= 1u;
  v10 = *((_DWORD *)this + 10);
  if ( v16 )
  {
    v14 = *((Ogre::Material **)this + 16);
    BlockGeomTemplate::getFaceVerts(v10, v19, 1u, 1065353216, 0, v9, v18, nullptr);
  }
  else
  {
    v14 = *((Ogre::Material **)this + 13);
    BlockGeomTemplate::getFaceVerts(v10, v19, 0, 1065353216, 0, v9, v18, nullptr);
  }
  v11 = BlockMaterial::blockMeshOutput(this, a4, (SectionMesh **)a2, v14);
  ClientSection::getBlockVertexLight(a2, a3, v20);
  return SectionSubMesh::addGeomBlockLight(v11, v19, a3, v20, nullptr);
}


//======================================================================
// DoorMaterial::createCollideData(CollisionDetect *,World *,WCoord const&)
// address: 0x002D802C   size: 0x8C (140 bytes)
//======================================================================
int __fastcall DoorMaterial::createCollideData(DoorMaterial *this, CollisionDetect *a2, World *a3, const WCoord *a4)
{
  int result; // r0
  const WCoord *v7; // r1
  int v8; // r5
  int v9; // r2
  int v10; // r4
  int v11; // r2
  int v12; // r3
  int v13; // r5
  int v14; // r3
  bool v15; // [sp+9h] [bp-2Bh] BYREF
  bool v16; // [sp+Ah] [bp-2Ah] BYREF
  bool v17; // [sp+Bh] [bp-29h] BYREF
  _DWORD v18[3]; // [sp+Ch] [bp-28h] BYREF
  _DWORD v19[3]; // [sp+18h] [bp-1Ch] BYREF
  _DWORD v20[4]; // [sp+24h] [bp-10h] BYREF

  result = DoorMaterial::ParseDoorData(this, a3, a4, &v15, &v16, &v17);
  v7 = (const WCoord *)v18;
  v8 = 100 * *(_DWORD *)a4;
  v9 = *((_DWORD *)a4 + 1);
  v18[0] = v8;
  v10 = 100 * v9;
  v11 = *((_DWORD *)a4 + 2);
  v18[1] = v10;
  v12 = 100 * v11;
  v18[2] = 100 * v11;
  if ( result == 0 )
  {
    v13 = v8 + 12;
LABEL_10:
    v20[0] = v13;
    v14 = v12 + 100;
    v20[1] = v10 + 100;
    goto LABEL_11;
  }
  if ( result == 1 )
  {
    v7 = (const WCoord *)v19;
    v19[0] = v8 + 88;
    v19[1] = v10;
    v19[2] = 100 * v11;
LABEL_9:
    v13 = v8 + 100;
    goto LABEL_10;
  }
  if ( result != 2 )
  {
    if ( result != 3 )
      return result;
    v7 = (const WCoord *)v19;
    v19[0] = v8;
    v19[1] = v10;
    v19[2] = v12 + 88;
    goto LABEL_9;
  }
  v20[0] = v8 + 100;
  v20[1] = v10 + 100;
  v14 = v12 + 12;
LABEL_11:
  v20[2] = v14;
  return CollisionDetect::addObstacle(a2, v7, (const WCoord *)v20);
}


//======================================================================
// DoorMaterial::onBlockActivated(World *,WCoord const&,DirectionType,ClientPlayer *)
// address: 0x002D80B8   size: 0x6C (108 bytes)
//======================================================================
int __fastcall DoorMaterial::onBlockActivated(DoorMaterial *a1, World *a2, const WCoord *a3)
{
  int v5; // r2
  int v6; // r3
  int BlockData; // r0
  int v8; // r1
  int v9; // r3
  int v10; // r0
  bool v12; // [sp+9h] [bp-13h] BYREF
  bool v13; // [sp+Ah] [bp-12h] BYREF
  bool v14; // [sp+Bh] [bp-11h] BYREF
  int v15; // [sp+Ch] [bp-10h] BYREF
  int v16; // [sp+10h] [bp-Ch]
  int v17; // [sp+14h] [bp-8h]

  DoorMaterial::ParseDoorData(a1, a2, a3, &v12, &v13, &v14);
  BlockData = World::getBlockData(a2, a3, v5, v6);
  World::setBlockData(a2, a3, BlockData ^ 8, 3);
  v8 = *((_DWORD *)a3 + 1);
  v9 = *((_DWORD *)a3 + 2);
  v15 = *(_DWORD *)a3;
  v16 = (v12 ? -1 : 1) + v8;
  v17 = v9;
  v10 = World::getBlockData(a2, (const WCoord *)&v15, v16, v9);
  World::setBlockData(a2, (const WCoord *)&v15, v10 ^ 8, 3);
  return 1;
}


//======================================================================
// DoorMaterial::onPoweredBlockChange(World *,WCoord const&,bool)
// address: 0x002D8124   size: 0x76 (118 bytes)
//======================================================================
unsigned int *__fastcall DoorMaterial::onPoweredBlockChange(DoorMaterial *this, World *a2, const WCoord *a3, int a4)
{
  unsigned int *result; // r0
  int v7; // r2
  int BlockData; // r0
  int v9; // r2
  int v10; // r3
  int v11; // r4
  int v12; // r0
  bool v14; // [sp+11h] [bp+11h] BYREF
  bool v15; // [sp+12h] [bp+12h] BYREF
  bool v16; // [sp+13h] [bp+13h] BYREF
  _DWORD v17[4]; // [sp+14h] [bp+14h] BYREF

  result = (unsigned int *)DoorMaterial::ParseDoorData(this, a2, a3, &v14, &v15, &v16);
  if ( v15 != a4 )
  {
    BlockData = World::getBlockData(a2, a3, v7, v15);
    World::setBlockData(a2, a3, BlockData ^ 8, 3);
    v9 = (v14 ? -1 : 1) + *((_DWORD *)a3 + 1);
    v10 = *((_DWORD *)a3 + 2);
    v11 = *(_DWORD *)a3;
    v17[1] = v9;
    v17[2] = v10;
    v17[0] = v11;
    v12 = World::getBlockData(a2, (const WCoord *)v17, v9, v10);
    return World::setBlockData(a2, (const WCoord *)v17, v12 ^ 8, 3);
  }
  return result;
}


//======================================================================
// DoorMaterial::onNeighborBlockChange(World *,WCoord const&,int)
// address: 0x002D819C   size: 0x138 (312 bytes)
//======================================================================
unsigned int *__fastcall DoorMaterial::onNeighborBlockChange(DoorMaterial *this, World *a2, const WCoord *a3, int a4)
{
  int v7; // r7
  int v8; // r1
  int v9; // r3
  int v10; // r2
  unsigned int *result; // r0
  int (__fastcall *v12)(DoorMaterial *, World *, _DWORD *, int); // r3
  int (__fastcall *v13)(DoorMaterial *, World *, _DWORD *, int); // r12
  int v14; // r3
  int v15; // r4
  int v16; // r3
  int v17; // r2
  int v18; // r2
  int v19; // r3
  int Material; // r0
  int v21; // r3
  int BlockData; // [sp+8h] [bp-24h]
  _DWORD v24[3]; // [sp+10h] [bp-1Ch] BYREF
  _DWORD v25[4]; // [sp+1Ch] [bp-10h] BYREF

  BlockData = World::getBlockData(a2, a3, (int)a3, a4);
  v7 = BlockData & 4;
  v8 = *((_DWORD *)a3 + 1);
  v9 = *((_DWORD *)a3 + 2);
  v10 = *(_DWORD *)a3;
  if ( (BlockData & 4) == 0 )
  {
    v24[1] = v8 + 1;
    v24[0] = v10;
    v24[2] = v9;
    if ( World::getBlockID(a2, (const WCoord *)v24, v10, v9) != *((_DWORD *)this + 8) )
    {
      World::setBlockAir(a2, a3);
      v7 = 1;
    }
    v16 = *((_DWORD *)a3 + 1);
    v17 = *((_DWORD *)a3 + 2);
    v25[0] = *(_DWORD *)a3;
    v25[1] = v16 - 1;
    v25[2] = v17;
    if ( World::doesBlockHaveSolidTopSurface(a2, (const WCoord *)v25) != 0 )
    {
      if ( v7 == 0 )
      {
        if ( World::isBlockIndirectlyGettingPowered(a2, a3) != 0
          || World::isBlockIndirectlyGettingPowered(a2, (const WCoord *)v24) != 0 )
        {
          v21 = 1;
        }
        else
        {
          Material = BlockMaterialMgr::getMaterial(
                       (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                       a4);
          result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)Material + 68))(Material);
          if ( result == nullptr )
            return result;
          v21 = 0;
          if ( a4 == *((_DWORD *)this + 8) )
            return result;
        }
        return DoorMaterial::onPoweredBlockChange(this, a2, a3, v21);
      }
    }
    else
    {
      World::setBlockAir(a2, a3);
      if ( World::getBlockID(a2, (const WCoord *)v24, v18, v19) == *((_DWORD *)this + 8) )
        World::setBlockAir(a2, (const WCoord *)v24);
    }
    return (unsigned int *)(*(int (__fastcall **)(DoorMaterial *, World *, const WCoord *, int, int, int))(*(_DWORD *)this + 180))(
                             this,
                             a2,
                             a3,
                             BlockData,
                             1,
                             1065353216);
  }
  v25[1] = v8 - 1;
  v25[0] = v10;
  v25[2] = v9;
  result = (unsigned int *)World::getBlockID(a2, (const WCoord *)v25, v10, v9);
  if ( result != *((unsigned int **)this + 8) )
    result = (unsigned int *)World::setBlockAir(a2, a3);
  if ( a4 > 0 && a4 != *((_DWORD *)this + 8) )
  {
    v12 = *(int (__fastcall **)(DoorMaterial *, World *, _DWORD *, int))(*(_DWORD *)this + 144);
    v25[2] = *((_DWORD *)a3 + 2);
    v13 = v12;
    v14 = *((_DWORD *)a3 + 1);
    v15 = *(_DWORD *)a3;
    v25[1] = v14 - 1;
    v25[0] = v15;
    return (unsigned int *)v13(this, a2, v25, a4);
  }
  return result;
}


//======================================================================
// DoorMaterial::init(int)
// address: 0x002D82D8   size: 0xD4 (212 bytes)
//======================================================================
void __fastcall DoorMaterial::init(__int64 this, int a2)
{
  int v2; // r5
  int v3; // r2
  void *v4; // r1
  int v5; // r2
  Ogre::Material *v6; // r7
  void *v7; // r1
  Ogre::Material *v8; // r7
  int v9; // r2
  void *v10; // r1
  Ogre::Material *v11; // r7
  int v12; // r2
  Ogre::Texture *Texture; // r0
  void *v14; // r1
  BlockMaterialMgr *v15; // [sp+4h] [bp-8h]
  Ogre::FixedString *v16; // [sp+8h] [bp-4h] BYREF
  char v17[256]; // [sp+Ch] [bp+0h] BYREF

  v2 = this;
  ModelBlockMaterial::init(this, a2);
  j_sprintf(v17, "%s_upper", (const char *)(*(_DWORD *)(v2 + 36) + 212));
  v15 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v16, (Ogre::FixedString *)v17, v3);
  *(_DWORD *)(v2 + 60) = BlockMaterialMgr::getTexElement(v15, (const char **)&v16, 1u);
  Ogre::FixedString::~FixedString(&v16, v4);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v16, (Ogre::FixedString *)"block", v5);
  v6 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v6, (const Ogre::FixedString *)&v16);
  *(_DWORD *)(v2 + 64) = v6;
  Ogre::FixedString::~FixedString(&v16, v7);
  v8 = *(Ogre::Material **)(v2 + 64);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v16, (Ogre::FixedString *)"BLEND_MODE", v9);
  v10 = (void *)(Ogre::Material::setParamMacro(v8, (const Ogre::FixedString *)&v16, 1u) >> 32);
  Ogre::FixedString::~FixedString(&v16, v10);
  v11 = *(Ogre::Material **)(v2 + 64);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v16, (Ogre::FixedString *)"g_DiffuseTex", v12);
  Texture = (Ogre::Texture *)BlockTexElement::getTexture(*(BlockTexElement **)(v2 + 60), 0);
  Ogre::Material::setParamTexture(v11, (const Ogre::FixedString *)&v16, Texture, 0);
  Ogre::FixedString::~FixedString(&v16, v14);
}

