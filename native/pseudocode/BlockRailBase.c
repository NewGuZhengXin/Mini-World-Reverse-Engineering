// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockRailBase

//======================================================================
// BlockRailBase::isRailBlockAt(World *,WCoord const&)
// address: 0x002A6904   size: 0x1A (26 bytes)
//======================================================================
bool __fastcall BlockRailBase::isRailBlockAt(BlockRailBase *this, World *a2, const WCoord *a3)
{
  int BlockID; // r0

  BlockID = World::getBlockID(this, a2);
  return BlockID == 725 || BlockID == 729;
}


//======================================================================
// BlockRailBase::getGeomName(void)
// address: 0x002F3280   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall BlockRailBase::getGeomName(BlockRailBase *this)
{
  return "dustplane";
}


//======================================================================
// BlockRailBase::getDestroyTexture(Block *,BlockTexDesc &)
// address: 0x002F328C   size: 0xC (12 bytes)
//======================================================================
int __fastcall BlockRailBase::getDestroyTexture(int a1, int a2, int a3)
{
  *(_DWORD *)a3 = 1;
  *(_BYTE *)(a3 + 4) = 0;
  return *(_DWORD *)(a1 + 8);
}


//======================================================================
// BlockRailBase::onNeighborBlockChange(World *,WCoord const&,int)
// address: 0x002F3298   size: 0xF6 (246 bytes)
//======================================================================
int __fastcall BlockRailBase::onNeighborBlockChange(BlockRailBase *this, World *a2, const WCoord *a3, int a4)
{
  int BlockData; // r0
  int v8; // r2
  int v9; // r3
  int v10; // r2
  int v11; // r3
  int v12; // r2
  int v13; // r3
  int v15; // [sp+8h] [bp-24h]
  int v16; // [sp+Ch] [bp-20h]
  int v17; // [sp+10h] [bp-1Ch]
  _DWORD v19[4]; // [sp+1Ch] [bp-10h] BYREF

  BlockData = World::getBlockData(a2, a3, (int)a3, a4);
  v17 = BlockData;
  v16 = BlockData;
  if ( *((_BYTE *)this + 48) != 0 )
    v16 = BlockData & 7;
  v8 = *(_DWORD *)a3;
  v19[1] = *((_DWORD *)a3 + 1) - 1;
  v9 = *((_DWORD *)a3 + 2);
  v19[0] = v8;
  v19[2] = v9;
  v15 = (unsigned __int8)World::doesBlockHaveSolidTopSurface(a2, (const WCoord *)v19) ^ 1;
  if ( v16 == 2 )
  {
    v10 = *((_DWORD *)a3 + 1);
    v19[0] = *(_DWORD *)a3 + 1;
    v19[1] = v10;
    v11 = *((_DWORD *)a3 + 2);
  }
  else
  {
    switch ( v16 )
    {
      case 3:
        v12 = *((_DWORD *)a3 + 2);
        v19[0] = *(_DWORD *)a3 - 1;
        v13 = *((_DWORD *)a3 + 1);
        v19[2] = v12;
        v19[1] = v13;
        goto LABEL_15;
      case 4:
        v11 = *((_DWORD *)a3 + 2) - 1;
        v19[0] = *(_DWORD *)a3;
        break;
      case 5:
        v11 = *((_DWORD *)a3 + 2) + 1;
        v19[0] = *(_DWORD *)a3;
        break;
      default:
        goto LABEL_10;
    }
    v19[1] = *((_DWORD *)a3 + 1);
  }
  v19[2] = v11;
LABEL_15:
  if ( World::doesBlockHaveSolidTopSurface(a2, (const WCoord *)v19) == 0 )
  {
LABEL_16:
    (*(void (__fastcall **)(BlockRailBase *, World *, const WCoord *, _DWORD, int, int))(*(_DWORD *)this + 180))(
      this,
      a2,
      a3,
      0,
      1,
      1065353216);
    return World::setBlockAll(a2, a3, 0, 0, 3);
  }
LABEL_10:
  if ( v15 != 0 )
    goto LABEL_16;
  return (*(int (__fastcall **)(BlockRailBase *, World *, const WCoord *, int, int, int))(*(_DWORD *)this + 188))(
           this,
           a2,
           a3,
           v17,
           v16,
           a4);
}


//======================================================================
// BlockRailBase::createBlockMesh(ClientSection *,WCoord const&,SectionSubMesh *)
// address: 0x002F3390   size: 0xEA (234 bytes)
//======================================================================
void *__fastcall BlockRailBase::createBlockMesh(
        BlockRailBase *this,
        ClientSection *a2,
        const WCoord *a3,
        SectionSubMesh *a4)
{
  unsigned int v4; // r4
  Ogre::Material *v7; // r7
  int v8; // r2
  __int16 *v9; // r3
  int v10; // r2
  int v11; // r3
  int v12; // r2
  SectionSubMesh *v13; // r0
  int v17[4]; // [sp+20h] [bp-34h] BYREF
  float v18[9]; // [sp+30h] [bp-24h] BYREF

  ClientSection::getBlockVertexLight(a2, a3, v18);
  v7 = *((Ogre::Material **)this + 13);
  v8 = *((_DWORD *)a2 + 5);
  if ( v8 != 0 )
    v9 = (__int16 *)(v8 + 2 * ((16 * *((_DWORD *)a3 + 2)) | (*((_DWORD *)a3 + 1) << 8) | *(_DWORD *)a3));
  else
    v9 = &Section::m_EmptyBlock;
  v10 = (int)(unsigned __int16)*v9 >> 12;
  v11 = v10;
  if ( *((_BYTE *)this + 48) != 0 )
  {
    v11 = v10 & 7;
    if ( (v10 & 8) != 0 )
      v7 = *((Ogre::Material **)this + 14);
  }
  switch ( v11 )
  {
    case 0:
      goto LABEL_23;
    case 1:
      goto LABEL_21;
    case 2:
      v12 = 0;
LABEL_29:
      v4 = 6;
      goto LABEL_30;
    case 3:
      v12 = 0;
LABEL_27:
      v4 = 7;
      goto LABEL_30;
    case 4:
      v12 = 2;
      goto LABEL_27;
    case 5:
      v12 = 2;
      goto LABEL_29;
    case 6:
      v7 = *((Ogre::Material **)this + 14);
LABEL_23:
      v12 = 2;
      goto LABEL_22;
    case 7:
      v7 = *((Ogre::Material **)this + 14);
      v12 = 1;
LABEL_22:
      v4 = 4;
      goto LABEL_30;
    case 8:
      v7 = *((Ogre::Material **)this + 14);
      v12 = 3;
      goto LABEL_22;
    default:
      break;
  }
  v12 = 2;
  if ( v11 == 9 )
  {
    v7 = *((Ogre::Material **)this + 14);
LABEL_21:
    v12 = 0;
    goto LABEL_22;
  }
LABEL_30:
  BlockGeomTemplate::getFaceVerts(*((_DWORD *)this + 10), v17, v4, 1065353216, 0, v12, 0, nullptr);
  v13 = BlockMaterial::blockMeshOutput(this, a4, (SectionMesh **)a2, v7);
  return SectionSubMesh::addGeomBlockLight(v13, v17, a3, v18, nullptr);
}


//======================================================================
// BlockRailBase::createCollideData(CollisionDetect *,World *,WCoord const&)
// address: 0x002F3480   size: 0x74 (116 bytes)
//======================================================================
int __fastcall BlockRailBase::createCollideData(BlockRailBase *this, CollisionDetect *a2, World *a3, const WCoord *a4)
{
  _BYTE *v5; // r6
  int BlockData; // r0
  unsigned int v8; // r7
  int v9; // r6
  int v10; // r0
  int v11; // r3
  _DWORD v13[3]; // [sp+0h] [bp-1Ch] BYREF
  _DWORD v14[4]; // [sp+Ch] [bp-10h] BYREF

  v5 = (char *)this + 48;
  BlockData = World::getBlockData(a3, a4, (int)a3, (int)a4);
  if ( *v5 != 0 )
    BlockData &= 7u;
  v8 = BlockData - 2;
  v9 = *(_DWORD *)a4;
  v10 = *((_DWORD *)a4 + 1);
  v11 = *((_DWORD *)a4 + 2);
  v13[0] = 100 * *(_DWORD *)a4;
  v13[1] = 100 * v10;
  v13[2] = 100 * v11;
  if ( v8 > 3 )
    v14[1] = 100 * v10 + 10;
  else
    v14[1] = 100 * v10 + 100;
  v14[0] = 100 * v9 + 100;
  v14[2] = 100 * v11 + 100;
  return CollisionDetect::addObstacle(a2, (const WCoord *)v13, (const WCoord *)v14);
}


//======================================================================
// BlockRailBase::onBlockRemoved(World *,WCoord const&,int,int)
// address: 0x002F34F4   size: 0x9A (154 bytes)
//======================================================================
void __fastcall BlockRailBase::onBlockRemoved(BlockRailBase *this, World *a2, const WCoord *a3, int a4, int a5)
{
  int v8; // r7
  int v9; // r2
  int v10; // r7
  int v11; // r2
  int v12; // r3
  _DWORD v14[4]; // [sp+14h] [bp-10h] BYREF

  v8 = a5;
  if ( *((_BYTE *)this + 48) != 0 )
    v8 = a5 & 7;
  BlockMaterial::onBlockRemoved();
  if ( (unsigned int)(v8 - 2) <= 3 )
  {
    v9 = *((_DWORD *)a3 + 2) + dword_51666C;
    v10 = *(_DWORD *)a3;
    v14[1] = *((_DWORD *)a3 + 1) + dword_516668;
    v14[2] = v9;
    v14[0] = v10 + dword_516664;
    World::notifyBlocksOfNeighborChange(a2, (const WCoord *)v14, a4);
  }
  if ( *((_BYTE *)this + 48) != 0 )
  {
    World::notifyBlocksOfNeighborChange(a2, a3, a4);
    v11 = *((_DWORD *)a3 + 2) + dword_516660;
    v12 = *(_DWORD *)a3 + dword_516658;
    v14[1] = *((_DWORD *)a3 + 1) + dword_51665C;
    v14[2] = v11;
    v14[0] = v12;
    World::notifyBlocksOfNeighborChange(a2, (const WCoord *)v14, a4);
  }
}


//======================================================================
// BlockRailBase::canPlaceBlockAt(World *,WCoord const&)
// address: 0x002F3598   size: 0x2E (46 bytes)
//======================================================================
int __fastcall BlockRailBase::canPlaceBlockAt(BlockRailBase *this, World *a2, const WCoord *a3, int a4)
{
  int v4; // r0
  int v5; // r6
  int v6; // r2
  World *v8; // [sp+4h] [bp-Ch] BYREF
  const WCoord *v9; // [sp+8h] [bp-8h]
  int v10; // [sp+Ch] [bp-4h]

  v8 = a2;
  v9 = a3;
  v10 = a4;
  v4 = *((_DWORD *)a3 + 1);
  v5 = *((_DWORD *)a3 + 2);
  v6 = *(_DWORD *)a3;
  v9 = (const WCoord *)(v4 + dword_51665C);
  v8 = (World *)(v6 + dword_516658);
  v10 = v5 + dword_516660;
  return World::doesBlockHaveSolidTopSurface(a2, (const WCoord *)&v8);
}


//======================================================================
// BlockRailBase::~BlockRailBase()
// address: 0x002F35CC   size: 0x34 (52 bytes)
//======================================================================
// Alternative name is '_ZN13BlockRailBaseD1Ev'
void __fastcall BlockRailBase::~BlockRailBase(BlockRailBase *this)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0

  *(_DWORD *)this = &off_4623D0;
  v2 = *((_DWORD **)this + 13);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 13) = 0;
  }
  v3 = *((_DWORD **)this + 14);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)this + 14) = 0;
  }
  BlockMaterial::~BlockMaterial(this);
}


//======================================================================
// BlockRailBase::~BlockRailBase()
// address: 0x002F3604   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BlockRailBase::~BlockRailBase(BlockRailBase *this)
{
  BlockRailBase::~BlockRailBase(this);
  operator delete(this);
}


//======================================================================
// BlockRailBase::init(int)
// address: 0x002F3618   size: 0x146 (326 bytes)
//======================================================================
void __fastcall BlockRailBase::init(__int64 this, int a2)
{
  _DWORD *v2; // r5
  BlockMaterialMgr *v3; // r6
  int v4; // r2
  BlockTexElement *TexElement; // r7
  void *v6; // r1
  int v7; // r2
  Ogre::Material *v8; // r6
  void *v9; // r1
  Ogre::Material *v10; // r6
  int v11; // r2
  void *v12; // r1
  Ogre::Material *v13; // r6
  int v14; // r2
  Ogre::Texture *Texture; // r0
  void *v16; // r1
  int v17; // r0
  int v18; // r2
  BlockMaterialMgr *v19; // r6
  BlockTexElement *v20; // r7
  void *v21; // r1
  int v22; // r2
  Ogre::Material *v23; // r6
  void *v24; // r1
  Ogre::Material *v25; // r6
  int v26; // r2
  void *v27; // r1
  Ogre::Material *v28; // r5
  int v29; // r2
  Ogre::Texture *v30; // r0
  void *v31; // r1
  _DWORD v32[8]; // [sp+Ch] [bp-20h] BYREF

  v2 = (_DWORD *)this;
  BlockMaterial::init(this, a2);
  v3 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v32, (Ogre::FixedString *)(v2[9] + 212), v4);
  TexElement = (BlockTexElement *)BlockMaterialMgr::getTexElement(v3, (const char **)v32, 0);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)v32, v6);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v32, (Ogre::FixedString *)"block", v7);
  v8 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v8, (const Ogre::FixedString *)v32);
  v2[13] = v8;
  Ogre::FixedString::~FixedString((Ogre::FixedString **)v32, v9);
  v10 = (Ogre::Material *)v2[13];
  Ogre::FixedString::FixedString((Ogre::FixedString *)v32, (Ogre::FixedString *)"BLEND_MODE", v11);
  v12 = (void *)(Ogre::Material::setParamMacro(v10, (const Ogre::FixedString *)v32, 1u) >> 32);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)v32, v12);
  v13 = (Ogre::Material *)v2[13];
  Ogre::FixedString::FixedString((Ogre::FixedString *)v32, (Ogre::FixedString *)"g_DiffuseTex", v14);
  Texture = (Ogre::Texture *)BlockTexElement::getTexture(TexElement, 0);
  Ogre::Material::setParamTexture(v13, (const Ogre::FixedString *)v32, Texture, 0);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)v32, v16);
  v17 = BlockTexElement::getTexture(TexElement, 0);
  v2[2] = v17;
  if ( v17 != 0 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 4))(v17);
    (*(void (__fastcall **)(_DWORD, _DWORD *))(*(_DWORD *)v2[2] + 28))(v2[2], v32);
    v2[3] = 0;
    v2[4] = 0;
    v2[5] = v32[1];
    v2[6] = v32[2];
  }
  v19 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v32, (Ogre::FixedString *)(v2[9] + 244), v18);
  v20 = (BlockTexElement *)BlockMaterialMgr::getTexElement(v19, (const char **)v32, 0);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)v32, v21);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v32, (Ogre::FixedString *)"block", v22);
  v23 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v23, (const Ogre::FixedString *)v32);
  v2[14] = v23;
  Ogre::FixedString::~FixedString((Ogre::FixedString **)v32, v24);
  v25 = (Ogre::Material *)v2[14];
  Ogre::FixedString::FixedString((Ogre::FixedString *)v32, (Ogre::FixedString *)"BLEND_MODE", v26);
  v27 = (void *)(Ogre::Material::setParamMacro(v25, (const Ogre::FixedString *)v32, 1u) >> 32);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)v32, v27);
  v28 = (Ogre::Material *)v2[14];
  Ogre::FixedString::FixedString((Ogre::FixedString *)v32, (Ogre::FixedString *)"g_DiffuseTex", v29);
  v30 = (Ogre::Texture *)BlockTexElement::getTexture(v20, 0);
  Ogre::Material::setParamTexture(v28, (const Ogre::FixedString *)v32, v30, 0);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)v32, v31);
}


//======================================================================
// BlockRailBase::refreshTrackShape(World *,WCoord const&,bool)
// address: 0x002F379C   size: 0x50 (80 bytes)
//======================================================================
unsigned __int64 __fastcall BlockRailBase::refreshTrackShape(
        BlockRailBase *this,
        World *a2,
        const WCoord *a3,
        unsigned int a4)
{
  BlockBaseRailLogic *v7; // r4
  int isBlockIndirectlyGettingPowered; // r0
  void *v9; // r0
  unsigned __int64 v11; // [sp+0h] [bp-Ch]

  v11 = __PAIR64__(a4, (unsigned int)this);
  v7 = (BlockBaseRailLogic *)operator new(0x24u);
  BlockBaseRailLogic::BlockBaseRailLogic(v7, this, a2, a3);
  isBlockIndirectlyGettingPowered = World::isBlockIndirectlyGettingPowered(a2, a3);
  BlockBaseRailLogic::updateBlock(v7, isBlockIndirectlyGettingPowered, SHIDWORD(v11));
  if ( v7 != nullptr )
  {
    v9 = *((void **)v7 + 5);
    if ( v9 != nullptr )
      operator delete(v9);
    operator delete(v7);
  }
  return v11;
}


//======================================================================
// BlockRailBase::onBlockAdded(World *,WCoord const&)
// address: 0x002F37EC   size: 0x2A (42 bytes)
//======================================================================
int __fastcall BlockRailBase::onBlockAdded(BlockRailBase *this, World *a2, const WCoord *a3)
{
  int result; // r0

  result = BlockRailBase::refreshTrackShape(this, a2, a3, 1u);
  if ( *((_BYTE *)this + 48) != 0 )
    return (*(int (__fastcall **)(BlockRailBase *, World *, const WCoord *, _DWORD))(*(_DWORD *)this + 144))(
             this,
             a2,
             a3,
             *((_DWORD *)this + 8));
  return result;
}

