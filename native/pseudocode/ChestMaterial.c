// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ChestMaterial

//======================================================================
// ChestMaterial::newObject(void)
// address: 0x002C1556   size: 0x12 (18 bytes)
//======================================================================
ChestMaterial *__fastcall ChestMaterial::newObject(ChestMaterial *this)
{
  ChestMaterial *v1; // r4

  v1 = (ChestMaterial *)operator new(0x3Cu);
  ChestMaterial::ChestMaterial(v1);
  return v1;
}


//======================================================================
// ChestMaterial::getGeomName(void)
// address: 0x002FBE38   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall ChestMaterial::getGeomName(ChestMaterial *this)
{
  return "chest";
}


//======================================================================
// ChestMaterial::~ChestMaterial()
// address: 0x002FBE44   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN13ChestMaterialD1Ev'
void __fastcall ChestMaterial::~ChestMaterial(ChestMaterial *this)
{
  *(_DWORD *)this = &off_4629C8;
  ModelBlockMaterial::~ModelBlockMaterial(this);
}


//======================================================================
// ChestMaterial::~ChestMaterial()
// address: 0x002FBE60   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ChestMaterial::~ChestMaterial(ChestMaterial *this)
{
  ChestMaterial::~ChestMaterial(this);
  operator delete(this);
}


//======================================================================
// ChestMaterial::createBlockProtoMesh(BlockInstanceData *)
// address: 0x002FBE72   size: 0x4C (76 bytes)
//======================================================================
SectionMesh *__fastcall ChestMaterial::createBlockProtoMesh(int a1)
{
  SectionMesh *v2; // r4
  Ogre::Material *SubMesh; // r6
  __int64 v4; // r0
  _DWORD v6[4]; // [sp+8h] [bp-10h] BYREF

  v2 = (SectionMesh *)operator new(0x114u);
  SectionMesh::SectionMesh(v2, true);
  SubMesh = SectionMesh::getSubMesh(v2, *(Ogre::Material **)(a1 + 56));
  BlockGeomTemplate::getFaceVerts(*(_DWORD *)(a1 + 40), v6, 0);
  SectionSubMesh::addTriangleList(SubMesh, (const void *)v6[2], v6[0], v6[3], v6[1], nullptr);
  LODWORD(v4) = v2;
  SectionMesh::onCreate(v4);
  return v2;
}


//======================================================================
// ChestMaterial::onBlockAdded(World *,WCoord const&)
// address: 0x002FBEC8   size: 0x16 (22 bytes)
//======================================================================
int __fastcall ChestMaterial::onBlockAdded(ChestMaterial *this, World *a2, const WCoord *a3)
{
  World ***v3; // r5

  v3 = (World ***)((char *)a2 + 4);
  BlockMaterial::onBlockAdded();
  return WorldContainerMgr::addStorageBox(v3[31], *(_DWORD *)a3, *((_DWORD *)a3 + 1), *((_DWORD *)a3 + 2));
}


//======================================================================
// ChestMaterial::onBlockRemoved(World *,WCoord const&,int,int)
// address: 0x002FBEDE   size: 0x26 (38 bytes)
//======================================================================
int __fastcall ChestMaterial::onBlockRemoved(ChestMaterial *this, World ***a2, const WCoord *a3, int a4, int a5)
{
  WorldContainerMgr::destroyContainer(a2[32], a3);
  BlockMaterial::onBlockRemoved();
  return a5;
}


//======================================================================
// ChestMaterial::createBlockMesh(ClientSection *,WCoord const&,SectionSubMesh *)
// address: 0x002FBF04   size: 0xE6 (230 bytes)
//======================================================================
void *__fastcall ChestMaterial::createBlockMesh(
        ChestMaterial *this,
        ClientSection *a2,
        const WCoord *a3,
        SectionSubMesh *a4)
{
  int v6; // r3
  int v7; // r2
  __int16 *v8; // r7
  int i; // r5
  unsigned __int16 *NeighborBlock; // r0
  int v11; // r3
  _BOOL4 v12; // r2
  unsigned int v13; // r7
  int v15; // [sp+14h] [bp-48h]
  int v16; // [sp+18h] [bp-44h]
  SectionSubMesh *v18; // [sp+1Ch] [bp-40h]
  int v20[4]; // [sp+28h] [bp-34h] BYREF
  float v21[9]; // [sp+38h] [bp-24h] BYREF

  v6 = *((_DWORD *)a2 + 5);
  v7 = *(_DWORD *)a3;
  if ( v6 != 0 )
    v8 = (__int16 *)(v6 + 2 * ((*((_DWORD *)a3 + 1) << 8) | (16 * *((_DWORD *)a3 + 2)) | v7));
  else
    v8 = &Section::m_EmptyBlock;
  for ( i = 0; i != 4; ++i )
  {
    NeighborBlock = (unsigned __int16 *)Section::getNeighborBlock((int)a2, (int *)a3, i);
    if ( NeighborBlock != nullptr && (unsigned __int16)*v8 << 20 == *NeighborBlock << 20 )
      break;
  }
  v11 = (int)(unsigned __int16)*v8 >> 12;
  v16 = v11 & 3;
  if ( i == 4 )
  {
    v15 = 0;
    v13 = 0;
    goto LABEL_18;
  }
  if ( (v11 & 3) == 0 )
  {
    i -= 3;
LABEL_15:
    v12 = i == 0;
    goto LABEL_17;
  }
  if ( v16 == 1 )
  {
    i -= 2;
    goto LABEL_15;
  }
  if ( v16 == 2 )
    goto LABEL_15;
  v12 = false;
  if ( v16 == 3 )
  {
    --i;
    goto LABEL_15;
  }
LABEL_17:
  v15 = v12;
  v13 = 2;
LABEL_18:
  if ( v11 > 3 )
    ++v13;
  ClientSection::getBlockVertexLight(a2, a3, v21);
  v18 = BlockMaterial::blockMeshOutput(this, a4, (SectionMesh **)a2, *((Ogre::Material **)this + 13));
  BlockGeomTemplate::getFaceVerts(*((_DWORD *)this + 10), v20, v13, 1065353216, 0, v16, v15, nullptr);
  return SectionSubMesh::addGeomBlockLight(v18, v20, a3, v21, nullptr);
}


//======================================================================
// ChestMaterial::ChestMaterial(void)
// address: 0x002FBFF0   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN13ChestMaterialC2Ev'
void __fastcall ChestMaterial::ChestMaterial(ChestMaterial *this)
{
  ModelBlockMaterial::ModelBlockMaterial(this);
  *(_DWORD *)this = &off_4629C8;
}


//======================================================================
// ChestMaterial::isThereANeighborChest(World *,WCoord const&)
// address: 0x002FC00C   size: 0x62 (98 bytes)
//======================================================================
int __fastcall ChestMaterial::isThereANeighborChest(ChestMaterial *this, World *a2, const WCoord *a3, int a4)
{
  int *v8; // r4
  int v9; // r2
  int v10; // r12
  _DWORD v11[4]; // [sp+Ch] [bp-10h] BYREF

  if ( World::getBlockID(a2, a3, (int)a3, a4) != *((_DWORD *)this + 8) )
    return 0;
  v8 = g_DirectionCoord;
  while ( 1 )
  {
    v9 = *((_DWORD *)a3 + 1) + v8[1];
    v10 = *((_DWORD *)a3 + 2) + v8[2];
    v11[0] = *(_DWORD *)a3 + *v8;
    v11[1] = v9;
    v11[2] = v10;
    if ( World::getBlockID(a2, (const WCoord *)v11, v9, v10) == *((_DWORD *)this + 8) )
      break;
    v8 += 3;
    if ( v8 == &dword_516658 )
      return 0;
  }
  return 1;
}


//======================================================================
// ChestMaterial::canPlaceBlockAt(World *,WCoord const&)
// address: 0x002FC074   size: 0x94 (148 bytes)
//======================================================================
int __fastcall ChestMaterial::canPlaceBlockAt(ChestMaterial *this, World *a2, const WCoord *a3)
{
  int *v4; // r4
  int *v6; // r6
  int v7; // r2
  int v8; // r3
  int v9; // r12
  int v10; // r0
  int v11; // r2
  int result; // r0
  int v13; // r1
  int v14; // r3
  int v15; // [sp+4h] [bp-20h]
  _DWORD v17[4]; // [sp+14h] [bp-10h] BYREF

  v4 = g_DirectionCoord;
  v6 = g_DirectionCoord;
  v15 = 0;
  do
  {
    v7 = *((_DWORD *)a3 + 1) + v6[1];
    v8 = *(_DWORD *)a3;
    v9 = *((_DWORD *)a3 + 2) + v6[2];
    v10 = *v6;
    v6 += 3;
    v17[0] = *(_DWORD *)a3 + v10;
    v17[1] = v7;
    v17[2] = v9;
    v11 = v15 + (World::getBlockID(a2, (const WCoord *)v17, v9, v8) == *((_DWORD *)this + 8));
    v15 = v11;
  }
  while ( v6 != &dword_516658 );
  result = 0;
  if ( v11 <= 1 )
  {
    while ( 1 )
    {
      v13 = *((_DWORD *)a3 + 1) + v4[1];
      v14 = *((_DWORD *)a3 + 2) + v4[2];
      v17[0] = *(_DWORD *)a3 + *v4;
      v17[1] = v13;
      v17[2] = v14;
      if ( ChestMaterial::isThereANeighborChest(this, a2, (const WCoord *)v17, v14) != 0 )
        break;
      v4 += 3;
      if ( v4 == &dword_516658 )
        return 1;
    }
    return 0;
  }
  return result;
}

