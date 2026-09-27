// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: TrapDoorMaterial

//======================================================================
// TrapDoorMaterial::getGeomName(void)
// address: 0x00267214   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall TrapDoorMaterial::getGeomName(TrapDoorMaterial *this)
{
  return "trapdoor";
}


//======================================================================
// TrapDoorMaterial::~TrapDoorMaterial()
// address: 0x00267220   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN16TrapDoorMaterialD1Ev'
void __fastcall TrapDoorMaterial::~TrapDoorMaterial(TrapDoorMaterial *this)
{
  *(_DWORD *)this = &off_45B780;
  ModelBlockMaterial::~ModelBlockMaterial(this);
}


//======================================================================
// TrapDoorMaterial::~TrapDoorMaterial()
// address: 0x0026723C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall TrapDoorMaterial::~TrapDoorMaterial(TrapDoorMaterial *this)
{
  TrapDoorMaterial::~TrapDoorMaterial(this);
  operator delete(this);
}


//======================================================================
// TrapDoorMaterial::createBlockProtoMesh(BlockInstanceData *)
// address: 0x0026724E   size: 0x4C (76 bytes)
//======================================================================
SectionMesh *__fastcall TrapDoorMaterial::createBlockProtoMesh(int a1)
{
  SectionMesh *v2; // r4
  int SubMesh; // r6
  _DWORD v5[4]; // [sp+8h] [bp-10h] BYREF

  v2 = (SectionMesh *)operator new(0x114u);
  SectionMesh::SectionMesh(v2, true);
  SubMesh = SectionMesh::getSubMesh(v2, *(Ogre::Material **)(a1 + 56));
  BlockGeomTemplate::getFaceVerts(*(_DWORD *)(a1 + 40), v5, 0);
  SectionSubMesh::addTriangleList(SubMesh, v5[2], v5[0], v5[3], v5[1], 0);
  SectionMesh::onCreate(v2);
  return v2;
}


//======================================================================
// TrapDoorMaterial::createBlockMesh(ClientSection *,WCoord const&,SectionSubMesh *)
// address: 0x002672A4   size: 0x84 (132 bytes)
//======================================================================
int __fastcall TrapDoorMaterial::createBlockMesh(
        Ogre::Material **this,
        ClientSection *a2,
        const WCoord *a3,
        SectionSubMesh *a4)
{
  int v7; // r1
  int v8; // r0
  int v9; // r3
  int v10; // r2
  __int16 *v11; // r3
  int v12; // r6
  int v14; // [sp+10h] [bp-3Ch]
  _BYTE v16[16]; // [sp+18h] [bp-34h] BYREF
  float v17[9]; // [sp+28h] [bp-24h] BYREF

  v7 = *(_DWORD *)a3;
  v8 = *((_DWORD *)a3 + 1);
  v9 = *((_DWORD *)a3 + 2);
  v10 = *((_DWORD *)a2 + 5);
  if ( v10 != 0 )
    v11 = (__int16 *)(v10 + 2 * ((16 * v9) | (v8 << 8) | v7));
  else
    v11 = &Section::m_EmptyBlock;
  v14 = (int)(unsigned __int16)*v11 >> 12;
  ClientSection::getBlockVertexLight(a2, a3, v17);
  v12 = BlockMaterial::blockMeshOutput((BlockMaterial *)this, a4, a2, *(this + 13));
  BlockGeomTemplate::getFaceVerts(*(this + 10), v16, v14 > 3, 1065353216, 0, v14 & 3, 0, 0);
  return SectionSubMesh::addGeomBlockLight(v12, v16, a3, v17, 0);
}


//======================================================================
// TrapDoorMaterial::TrapDoorMaterial(void)
// address: 0x0026732C   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN16TrapDoorMaterialC1Ev'
void __fastcall TrapDoorMaterial::TrapDoorMaterial(TrapDoorMaterial *this)
{
  ModelBlockMaterial::ModelBlockMaterial(this);
  *(_DWORD *)this = &off_45B780;
}


//======================================================================
// TrapDoorMaterial::newObject(void)
// address: 0x002C1502   size: 0x12 (18 bytes)
//======================================================================
TrapDoorMaterial *__fastcall TrapDoorMaterial::newObject(TrapDoorMaterial *this)
{
  TrapDoorMaterial *v1; // r4

  v1 = (TrapDoorMaterial *)operator new(0x3Cu);
  TrapDoorMaterial::TrapDoorMaterial(v1);
  return v1;
}

