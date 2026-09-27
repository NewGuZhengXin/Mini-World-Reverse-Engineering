// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: StairMaterial

//======================================================================
// StairMaterial::newObject(void)
// address: 0x002C1C14   size: 0x1C (28 bytes)
//======================================================================
ModelBlockMaterial *__fastcall StairMaterial::newObject(StairMaterial *this)
{
  ModelBlockMaterial *v1; // r4

  v1 = (ModelBlockMaterial *)operator new(0x3Cu);
  ModelBlockMaterial::ModelBlockMaterial(v1);
  *(_DWORD *)v1 = &off_461A10;
  return v1;
}


//======================================================================
// StairMaterial::getGeomName(void)
// address: 0x002E66F4   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall StairMaterial::getGeomName(StairMaterial *this)
{
  return "stair";
}


//======================================================================
// StairMaterial::hasSolidTopSurface(int)
// address: 0x002E6700   size: 0x6 (6 bytes)
//======================================================================
unsigned int __fastcall StairMaterial::hasSolidTopSurface(StairMaterial *this, int a2)
{
  return (unsigned int)(a2 << 29) >> 31;
}


//======================================================================
// StairMaterial::~StairMaterial()
// address: 0x002E6708   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN13StairMaterialD1Ev'
void __fastcall StairMaterial::~StairMaterial(StairMaterial *this)
{
  *(_DWORD *)this = &off_461A10;
  ModelBlockMaterial::~ModelBlockMaterial(this);
}


//======================================================================
// StairMaterial::~StairMaterial()
// address: 0x002E6724   size: 0x12 (18 bytes)
//======================================================================
void __fastcall StairMaterial::~StairMaterial(StairMaterial *this)
{
  StairMaterial::~StairMaterial(this);
  operator delete(this);
}


//======================================================================
// StairMaterial::createBlockProtoMesh(BlockInstanceData *)
// address: 0x002E6736   size: 0x5A (90 bytes)
//======================================================================
SectionMesh *__fastcall StairMaterial::createBlockProtoMesh(int a1)
{
  SectionMesh *v2; // r4
  Ogre::Material *SubMesh; // r7
  __int64 v4; // r0
  _DWORD v6[5]; // [sp+10h] [bp-14h] BYREF

  v2 = (SectionMesh *)operator new(0x114u);
  SectionMesh::SectionMesh(v2, true);
  SubMesh = SectionMesh::getSubMesh(v2, *(Ogre::Material **)(a1 + 56));
  BlockGeomTemplate::getFaceVerts(*(_DWORD *)(a1 + 40), v6, 0, 1065353216, 0, 2, 0, nullptr);
  SectionSubMesh::addTriangleList(SubMesh, (const void *)v6[2], v6[0], v6[3], v6[1], nullptr);
  LODWORD(v4) = v2;
  SectionMesh::onCreate(v4);
  return v2;
}


//======================================================================
// StairMaterial::onBlockPlaced(World *,WCoord const&,DirectionType,float,float,float,int)
// address: 0x002E679C   size: 0x38 (56 bytes)
//======================================================================
int __fastcall StairMaterial::onBlockPlaced(int a1, int a2, int *a3, int a4, float a5, float a6)
{
  int CurPlaceDir; // r0
  int v8; // r4

  CurPlaceDir = BlockOperateMgr::getCurPlaceDir(
                  (BlockOperateMgr *)Ogre::Singleton<BlockOperateMgr>::ms_Singleton,
                  *a3,
                  a3[1],
                  a3[2]);
  v8 = CurPlaceDir;
  if ( a4 == 5 || a4 != 4 && a6 > 0.5 )
    return CurPlaceDir | 4;
  return v8;
}


//======================================================================
// StairMaterial::createBlockMesh(ClientSection *,WCoord const&,SectionSubMesh *)
// address: 0x002E68E8   size: 0x70 (112 bytes)
//======================================================================
void *__fastcall StairMaterial::createBlockMesh(
        StairMaterial *this,
        ClientSection *a2,
        const WCoord *a3,
        SectionSubMesh *a4)
{
  SectionSubMesh *v8; // r7
  unsigned int v10; // [sp+1Ch] [bp-40h]
  bool v11; // [sp+23h] [bp-39h] BYREF
  int v12; // [sp+24h] [bp-38h] BYREF
  int v13[4]; // [sp+28h] [bp-34h] BYREF
  float v14[9]; // [sp+38h] [bp-24h] BYREF

  v10 = sub_2E67D8((int)a2, (int *)a3, &v12, &v11);
  ClientSection::getBlockVertexLight(a2, a3, v14);
  v8 = BlockMaterial::blockMeshOutput(this, a4, (SectionMesh **)a2, *((Ogre::Material **)this + 13));
  BlockGeomTemplate::getFaceVerts(*((_DWORD *)this + 10), v13, v10, 1065353216, 0, v12, 2 * v11, nullptr);
  return SectionSubMesh::addGeomBlockLight(v8, v13, a3, v14, nullptr);
}


//======================================================================
// StairMaterial::createCollideData(CollisionDetect *,World *,WCoord const&)
// address: 0x002E69DC   size: 0x1DA (474 bytes)
//======================================================================
void __fastcall StairMaterial::createCollideData(StairMaterial *this, CollisionDetect *a2, World *a3, const WCoord *a4)
{
  _DWORD *Section; // r0
  int v6; // r3
  int v7; // r4
  int v8; // r5
  int v9; // r3
  int v10; // r0
  int *v11; // r3
  int v12; // [sp+Ch] [bp-40h]
  char v14; // [sp+1Fh] [bp-2Dh] BYREF
  int v15; // [sp+20h] [bp-2Ch] BYREF
  int v16[3]; // [sp+24h] [bp-28h] BYREF
  int v17[3]; // [sp+30h] [bp-1Ch] BYREF
  int v18; // [sp+3Ch] [bp-10h] BYREF
  int v19; // [sp+40h] [bp-Ch]
  int v20; // [sp+44h] [bp-8h]

  Section = (_DWORD *)World::getSection(a3, a4);
  v6 = *((_DWORD *)a4 + 2) - Section[4];
  v7 = *(_DWORD *)a4;
  v8 = Section[2];
  v19 = *((_DWORD *)a4 + 1) - Section[3];
  v20 = v6;
  v18 = v7 - v8;
  v12 = sub_2E67D8((int)Section, &v18, &v15, (bool *)&v14);
  v9 = 100 * *((_DWORD *)a4 + 2);
  v10 = *((_DWORD *)a4 + 1);
  v16[0] = 100 * *(_DWORD *)a4;
  v16[1] = 100 * v10;
  v16[2] = v9;
  memset(v17, 0, sizeof(v17));
  v19 = 50;
  v20 = 100;
  v18 = 100;
  sub_2E6958(a2, v16, v17, &v18, v14);
  if ( (dword_51746C & 1) == 0 && _cxa_guard_acquire(&dword_51746C) != 0 )
  {
    dword_517470[0] = 50;
    dword_517474 = 50;
    dword_517478 = 0;
    dword_51747C = 100;
    dword_517480 = 100;
    dword_517484 = 100;
    dword_517488 = 0;
    dword_51748C = 50;
    dword_517490 = 0;
    dword_517494 = 50;
    dword_517498 = 100;
    dword_51749C = 100;
    dword_5174A0 = 0;
    dword_5174A4 = 50;
    dword_5174A8 = 50;
    dword_5174AC = 100;
    dword_5174B0 = 100;
    dword_5174B4 = 100;
    dword_5174B8 = 0;
    dword_5174BC = 50;
    dword_5174C0 = 0;
    dword_5174C4 = 100;
    dword_5174C8 = 100;
    dword_5174CC = 50;
    _cxa_guard_release(&dword_51746C);
  }
  if ( (dword_5174D0 & 1) == 0 && _cxa_guard_acquire(&dword_5174D0) != 0 )
  {
    dword_5174EC = 0;
    dword_5174F0 = 50;
    dword_5174F4 = 0;
    dword_5174F8 = 50;
    dword_5174FC = 100;
    dword_517500 = 50;
    dword_517504 = 0;
    dword_517508 = 50;
    dword_51750C = 50;
    dword_517510 = 50;
    dword_517514 = 100;
    dword_517518 = 100;
    dword_51751C = 50;
    dword_517520 = 50;
    dword_517524 = 0;
    dword_517528 = 100;
    dword_5174D4[0] = 50;
    dword_5174D8 = 50;
    dword_5174DC = 50;
    dword_5174E0 = 100;
    dword_5174E4 = 100;
    dword_5174E8 = 100;
    dword_51752C = 100;
    dword_517530 = 50;
    _cxa_guard_release(&dword_5174D0);
  }
  switch ( v12 )
  {
    case 0:
      v11 = dword_517470;
LABEL_11:
      sub_2E6958(a2, v16, &v11[6 * v15], &v11[6 * v15 + 3], v14);
      return;
    case 1:
      v11 = dword_5174D4;
      goto LABEL_11;
    case 2:
      sub_2E6958(a2, v16, &dword_517470[6 * v15], &dword_517470[6 * v15 + 3], v14);
      sub_2E6958(a2, v16, &dword_5174D4[6 * dword_446C58[v15]], &dword_5174D4[6 * dword_446C58[v15] + 3], v14);
      break;
    default:
      break;
  }
}

