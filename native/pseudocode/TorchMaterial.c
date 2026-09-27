// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: TorchMaterial

//======================================================================
// TorchMaterial::~TorchMaterial()
// address: 0x002A8C58   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN13TorchMaterialD1Ev'
void __fastcall TorchMaterial::~TorchMaterial(TorchMaterial *this)
{
  *(_DWORD *)this = &off_45DC98;
  ModelBlockMaterial::~ModelBlockMaterial(this);
}


//======================================================================
// TorchMaterial::~TorchMaterial()
// address: 0x002A8C74   size: 0x12 (18 bytes)
//======================================================================
void __fastcall TorchMaterial::~TorchMaterial(TorchMaterial *this)
{
  TorchMaterial::~TorchMaterial(this);
  operator delete(this);
}


//======================================================================
// TorchMaterial::getGeomName(void)
// address: 0x002AFD00   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall TorchMaterial::getGeomName(TorchMaterial *this)
{
  return "torch";
}


//======================================================================
// TorchMaterial::createBlockProtoMesh(BlockInstanceData *)
// address: 0x002AFD0C   size: 0x4 (4 bytes)
//======================================================================
int TorchMaterial::createBlockProtoMesh()
{
  return 0;
}


//======================================================================
// TorchMaterial::createBlockMesh(ClientSection *,WCoord const&,SectionSubMesh *)
// address: 0x002AFD10   size: 0x82 (130 bytes)
//======================================================================
int __fastcall TorchMaterial::createBlockMesh(
        Ogre::Material **this,
        ClientSection *a2,
        const WCoord *a3,
        SectionSubMesh *a4)
{
  int v7; // r1
  int v8; // r4
  int v9; // r0
  int v10; // r2
  __int16 *v11; // r4
  int v12; // r0
  unsigned int v13; // r3
  int v15; // [sp+14h] [bp-38h]
  _DWORD v16[4]; // [sp+18h] [bp-34h] BYREF
  float v17[9]; // [sp+28h] [bp-24h] BYREF

  v7 = *(_DWORD *)a3;
  v8 = *((_DWORD *)a3 + 1);
  v9 = *((_DWORD *)a3 + 2);
  v10 = *((_DWORD *)a2 + 5);
  if ( v10 != 0 )
    v11 = (__int16 *)(v10 + 2 * ((v8 << 8) | (16 * v9) | v7));
  else
    v11 = &Section::m_EmptyBlock;
  v15 = BlockMaterial::blockMeshOutput((BlockMaterial *)this, a4, a2, *(this + 13));
  ClientSection::getBlockVertexLight(a2, a3, v17);
  v12 = (int)*(this + 10);
  v13 = (int)(unsigned __int16)*v11 >> 12;
  if ( v13 > 3 )
    BlockGeomTemplate::getFaceVerts(v12, v16, 1u);
  else
    BlockGeomTemplate::getFaceVerts(v12, v16, 0, 1065353216, 0, v13, 0, nullptr);
  return SectionSubMesh::addGeomBlockLight(v15, v16, a3, v17, 0);
}


//======================================================================
// TorchMaterial::randomDisplayTick(ClientWorld *,WCoord const&)
// address: 0x002AFD98   size: 0x8A (138 bytes)
//======================================================================
int __fastcall TorchMaterial::randomDisplayTick(TorchMaterial *this, ClientWorld *a2, const WCoord *a3)
{
  int BlockData; // r0
  int v6; // r2
  int v7; // r1
  int v8; // r3
  int v9; // r2
  int v10; // r3
  EffectParticle *v11; // r6
  _DWORD v13[3]; // [sp+Ch] [bp-Ch] BYREF

  BlockData = World::getBlockData(a2, a3);
  v6 = 100 * *(_DWORD *)a3;
  v7 = 100 * *((_DWORD *)a3 + 1);
  v8 = 100 * *((_DWORD *)a3 + 2);
  v13[0] = v6 + 50;
  v13[1] = v7 + 60;
  v13[2] = v8 + 50;
  if ( BlockData <= 3 )
  {
    v13[1] = v7 + 80;
    if ( BlockData != 0 )
    {
      if ( BlockData != 1 )
      {
        if ( BlockData == 2 )
        {
          v10 = v8 + 35;
        }
        else
        {
          if ( BlockData != 3 )
            goto LABEL_12;
          v10 = v8 + 65;
        }
        v13[2] = v10;
        goto LABEL_12;
      }
      v9 = v6 + 65;
    }
    else
    {
      v9 = v6 + 35;
    }
    v13[0] = v9;
  }
LABEL_12:
  v11 = (EffectParticle *)operator new(0x14u);
  EffectParticle::EffectParticle(v11, a2, (Ogre::FixedString *)"particles/1017.ent", (const WCoord *)v13, 20);
  return EffectManager::addEffect((EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton, v11);
}


//======================================================================
// TorchMaterial::createCollideData(CollisionDetect *,World *,WCoord const&)
// address: 0x002AFE34   size: 0x80 (128 bytes)
//======================================================================
int __fastcall TorchMaterial::createCollideData(TorchMaterial *this, CollisionDetect *a2, World *a3, const WCoord *a4)
{
  int BlockData; // r0
  int v7; // r6
  int v8; // r7
  int v10; // [sp+10h] [bp-3Ch]
  int v12[3]; // [sp+18h] [bp-34h] BYREF
  int v13[3]; // [sp+24h] [bp-28h] BYREF
  _DWORD v14[3]; // [sp+30h] [bp-1Ch] BYREF
  _DWORD v15[4]; // [sp+3Ch] [bp-10h] BYREF

  BlockData = World::getBlockData(a3, a4);
  v10 = 100 * *(_DWORD *)a4;
  v7 = 100 * *((_DWORD *)a4 + 2);
  v8 = 100 * *((_DWORD *)a4 + 1);
  BlockGeomTemplate::getBoundBox(*((_DWORD **)this + 10), v12, v13, BlockData == 4, 1.0, BlockData & 3, 0);
  v14[0] = v12[0] + v10;
  v14[1] = v8 + v12[1];
  v14[2] = v7 + v12[2];
  v15[0] = v13[0] + v10;
  v15[1] = v8 + v13[1];
  v15[2] = v7 + v13[2];
  return CollisionDetect::addObstacle(a2, (const WCoord *)v14, (const WCoord *)v15);
}


//======================================================================
// TorchMaterial::canPlaceTorchOn(World *,WCoord const&)
// address: 0x002AFEB4   size: 0x30 (48 bytes)
//======================================================================
int __fastcall TorchMaterial::canPlaceTorchOn(TorchMaterial *this, World *a2, const WCoord *a3)
{
  int result; // r0
  int BlockID; // r0

  result = World::doesBlockHaveSolidTopSurface(a2, a3);
  if ( result == 0 )
  {
    BlockID = World::getBlockID(a2, a3);
    return BlockID == 534 || BlockID == 538;
  }
  return result;
}


//======================================================================
// TorchMaterial::onBlockPlaced(World *,WCoord const&,DirectionType,float,float,float,int)
// address: 0x002AFEEC   size: 0x60 (96 bytes)
//======================================================================
int __fastcall TorchMaterial::onBlockPlaced(TorchMaterial *a1, World *a2, const WCoord *a3, int a4)
{
  int v7; // r4
  int *v8; // r3
  int v9; // r0
  int v10; // r1
  int v11; // r3
  int v12; // r12
  int v13; // r2
  int v15; // [sp+4h] [bp-18h]
  _DWORD v16[4]; // [sp+Ch] [bp-10h] BYREF

  if ( a4 == 4 )
    TorchMaterial::canPlaceTorchOn(a1, a2, a3);
  v7 = 0;
  v15 = 4;
  do
  {
    if ( a4 == v7 )
    {
      v8 = &g_DirectionCoord[3 * a4];
      v9 = *((_DWORD *)a3 + 1) + v8[1];
      v10 = v8[2];
      v11 = *v8;
      v12 = *((_DWORD *)a3 + 2) + v10;
      v13 = *(_DWORD *)a3;
      v16[1] = v9;
      v16[0] = v13 + v11;
      v16[2] = v12;
      if ( World::isBlockNormalCubeDefault(a2, (const WCoord *)v16, true) != 0 )
        v15 = a4;
    }
    ++v7;
  }
  while ( v7 != 4 );
  return v15;
}


//======================================================================
// TorchMaterial::canPlaceBlockAt(World *,WCoord const&)
// address: 0x002AFF50   size: 0x66 (102 bytes)
//======================================================================
int __fastcall TorchMaterial::canPlaceBlockAt(TorchMaterial *this, World *a2, const WCoord *a3)
{
  int *v3; // r4
  int v6; // r0
  int v7; // r1
  int v8; // r3
  int result; // r0
  int v10; // r0
  int v11; // r3
  int v12; // r6
  int v14; // [sp+Ch] [bp-10h] BYREF
  int v15; // [sp+10h] [bp-Ch]
  int v16; // [sp+14h] [bp-8h]

  v3 = g_DirectionCoord;
  while ( 1 )
  {
    v6 = *((_DWORD *)a3 + 2);
    v7 = v3[2];
    v8 = *(_DWORD *)a3;
    v15 = *((_DWORD *)a3 + 1) + v3[1];
    v14 = v8 + *v3;
    v16 = v6 + v7;
    result = World::isBlockNormalCubeDefault(a2, (const WCoord *)&v14, true);
    if ( result != 0 )
      break;
    v3 += 3;
    if ( v3 == &dword_516658 )
    {
      v10 = *((_DWORD *)a3 + 2);
      v11 = *((_DWORD *)a3 + 1);
      v12 = *(_DWORD *)a3;
      v16 = v10;
      v14 = v12;
      v15 = v11 - 1;
      return TorchMaterial::canPlaceTorchOn(this, a2, (const WCoord *)&v14);
    }
  }
  return result;
}


//======================================================================
// TorchMaterial::dropTorchIfCantStay(World *,WCoord const&)
// address: 0x002AFFBC   size: 0x52 (82 bytes)
//======================================================================
int __fastcall TorchMaterial::dropTorchIfCantStay(TorchMaterial *this, World *a2, const WCoord *a3)
{
  int v6; // r4

  v6 = (*(int (__fastcall **)(TorchMaterial *))(*(_DWORD *)this + 152))(this);
  if ( v6 == 0 && World::getBlockID(a2, a3) == *((_DWORD *)this + 8) )
  {
    (*(void (__fastcall **)(TorchMaterial *, World *, const WCoord *, _DWORD, int))(*(_DWORD *)this + 180))(
      this,
      a2,
      a3,
      0,
      1);
    World::setBlockAll(a2, a3, 0, 0, 3);
  }
  return v6;
}


//======================================================================
// TorchMaterial::checkDrop(World *,WCoord const&)
// address: 0x002B0010   size: 0xAC (172 bytes)
//======================================================================
int __fastcall TorchMaterial::checkDrop(TorchMaterial *this, World *a2, const WCoord *a3)
{
  int v6; // r6
  int BlockData; // r0
  int *v8; // r3
  int v9; // r0
  int v10; // r2
  int v11; // r3
  int canPlaceTorchOn; // r0
  int v13; // r1
  int v14; // r3
  _DWORD v16[4]; // [sp+Ch] [bp-10h] BYREF

  v6 = TorchMaterial::dropTorchIfCantStay(this, a2, a3);
  if ( v6 == 0 )
    return 1;
  BlockData = World::getBlockData(a2, a3);
  if ( BlockData > 3 )
  {
    if ( BlockData != 4 )
      return 0;
    v13 = *(_DWORD *)a3;
    v16[1] = *((_DWORD *)a3 + 1) - 1;
    v14 = *((_DWORD *)a3 + 2);
    v16[0] = v13;
    v16[2] = v14;
    canPlaceTorchOn = TorchMaterial::canPlaceTorchOn(this, a2, (const WCoord *)v16);
  }
  else
  {
    v8 = &g_DirectionCoord[3 * BlockData];
    v9 = *((_DWORD *)a3 + 1) + v8[1];
    v10 = *((_DWORD *)a3 + 2) + v8[2];
    v11 = *(_DWORD *)a3 + *v8;
    v16[1] = v9;
    v16[2] = v10;
    v16[0] = v11;
    canPlaceTorchOn = World::isBlockNormalCubeDefault(a2, (const WCoord *)v16, true);
  }
  if ( canPlaceTorchOn != 0 )
    return 0;
  (*(void (__fastcall **)(TorchMaterial *, World *, const WCoord *, _DWORD, int, int))(*(_DWORD *)this + 180))(
    this,
    a2,
    a3,
    0,
    1,
    1065353216);
  World::setBlockAll(a2, a3, 0, 0, 3);
  return v6;
}


//======================================================================
// TorchMaterial::onNeighborBlockChange(World *,WCoord const&,int)
// address: 0x002B00C0   size: 0x8 (8 bytes)
//======================================================================
int __fastcall TorchMaterial::onNeighborBlockChange(TorchMaterial *this, World *a2, const WCoord *a3, int a4)
{
  return TorchMaterial::checkDrop(this, a2, a3);
}


//======================================================================
// TorchMaterial::init(int)
// address: 0x002B00C8   size: 0x3C (60 bytes)
//======================================================================
int __fastcall TorchMaterial::init(BlockTexElement **this, int a2)
{
  int result; // r0
  BlockTexElement *v4; // r5
  _DWORD v5[8]; // [sp+4h] [bp-20h] BYREF

  ModelBlockMaterial::init((ModelBlockMaterial *)this, a2);
  result = BlockTexElement::getTexture(*(this + 12), 0);
  *(this + 2) = (BlockTexElement *)result;
  if ( result != 0 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)result + 4))(result);
    result = (*(int (__fastcall **)(_DWORD, _DWORD *))(*(_DWORD *)*(this + 2) + 28))(*(this + 2), v5);
    v4 = (BlockTexElement *)v5[2];
    *(this + 5) = (BlockTexElement *)v5[1];
    *(this + 6) = v4;
    *(this + 3) = nullptr;
    *(this + 4) = nullptr;
  }
  return result;
}


//======================================================================
// TorchMaterial::newObject(void)
// address: 0x002C1C40   size: 0x1C (28 bytes)
//======================================================================
ModelBlockMaterial *__fastcall TorchMaterial::newObject(TorchMaterial *this)
{
  ModelBlockMaterial *v1; // r4

  v1 = (ModelBlockMaterial *)operator new(0x3Cu);
  ModelBlockMaterial::ModelBlockMaterial(v1);
  *(_DWORD *)v1 = &off_45DC98;
  return v1;
}

