// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: SnowBlockMaterial

//======================================================================
// SnowBlockMaterial::canBlocksMovement(World *,WCoord const&)
// address: 0x002A792C   size: 0x4 (4 bytes)
//======================================================================
int SnowBlockMaterial::canBlocksMovement()
{
  return 0;
}


//======================================================================
// SnowBlockMaterial::getBlockHeight(int)
// address: 0x002A7930   size: 0x12 (18 bytes)
//======================================================================
float __fastcall SnowBlockMaterial::getBlockHeight(SnowBlockMaterial *this, int a2)
{
  return (float)(a2 + 1) * 0.125;
}


//======================================================================
// SnowBlockMaterial::isOpaque(void)
// address: 0x002A7942   size: 0x4 (4 bytes)
//======================================================================
int __fastcall SnowBlockMaterial::isOpaque(SnowBlockMaterial *this)
{
  return 0;
}


//======================================================================
// SnowBlockMaterial::isOpaqueCube(void)
// address: 0x002A7946   size: 0x4 (4 bytes)
//======================================================================
int __fastcall SnowBlockMaterial::isOpaqueCube(SnowBlockMaterial *this)
{
  return 0;
}


//======================================================================
// SnowBlockMaterial::renderAsNormalBlock(void)
// address: 0x002A794A   size: 0x4 (4 bytes)
//======================================================================
int __fastcall SnowBlockMaterial::renderAsNormalBlock(SnowBlockMaterial *this)
{
  return 0;
}


//======================================================================
// SnowBlockMaterial::hasSolidTopSurface(int)
// address: 0x002A794E   size: 0x8 (8 bytes)
//======================================================================
bool __fastcall SnowBlockMaterial::hasSolidTopSurface(SnowBlockMaterial *this, int a2)
{
  return a2 == 7;
}


//======================================================================
// SnowBlockMaterial::~SnowBlockMaterial()
// address: 0x002A7958   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN17SnowBlockMaterialD1Ev'
void __fastcall SnowBlockMaterial::~SnowBlockMaterial(SnowBlockMaterial *this)
{
  *(_DWORD *)this = &off_45D370;
  BasicBlockMaterial::~BasicBlockMaterial(this);
}


//======================================================================
// SnowBlockMaterial::~SnowBlockMaterial()
// address: 0x002A7974   size: 0x12 (18 bytes)
//======================================================================
void __fastcall SnowBlockMaterial::~SnowBlockMaterial(SnowBlockMaterial *this)
{
  SnowBlockMaterial::~SnowBlockMaterial(this);
  operator delete(this);
}


//======================================================================
// SnowBlockMaterial::onNeighborBlockChange(World *,WCoord const&,int)
// address: 0x002A79B6   size: 0x42 (66 bytes)
//======================================================================
__int64 __fastcall SnowBlockMaterial::onNeighborBlockChange(__int64 this, const WCoord *a2, int a3)
{
  __int64 v6; // [sp+0h] [bp-Ch]

  v6 = this;
  if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)this + 152))(this) == 0 )
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
// SnowBlockMaterial::canPlaceBlockAt(World *,WCoord const&)
// address: 0x002A79F8   size: 0x9C (156 bytes)
//======================================================================
bool __fastcall SnowBlockMaterial::canPlaceBlockAt(SnowBlockMaterial *this, World *a2, const WCoord *a3)
{
  int v4; // r7
  int v5; // r3
  int v6; // r7
  int BlockID; // r0
  int v8; // r7
  int v10; // r1
  int v11; // r0
  _DWORD *Material; // r4
  _DWORD v15[4]; // [sp+Ch] [bp-10h] BYREF

  v4 = *((_DWORD *)a3 + 2);
  v15[1] = *((_DWORD *)a3 + 1) + dword_51665C;
  v5 = v4 + dword_516660;
  v6 = *(_DWORD *)a3;
  v15[2] = v5;
  v15[0] = v6 + dword_516658;
  BlockID = World::getBlockID(a2, (const WCoord *)v15);
  v8 = BlockID;
  if ( BlockID == 0 )
    return false;
  if ( BlockID == *((_DWORD *)this + 8) )
  {
    v10 = *((_DWORD *)a3 + 2);
    v15[1] = *((_DWORD *)a3 + 1) + dword_51665C;
    v11 = *(_DWORD *)a3;
    v15[2] = v10 + dword_516660;
    v15[0] = v11 + dword_516658;
    if ( World::getBlockData(a2, (const WCoord *)v15) == 7 )
      return true;
  }
  if ( (unsigned int)(v8 - 218) <= 5 )
    return true;
  Material = (_DWORD *)BlockMaterialMgr::getMaterial(
                         (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                         v8);
  if ( (*(int (__fastcall **)(_DWORD *))(*Material + 60))(Material) == 0 )
    return false;
  return *(_DWORD *)(Material[9] + 12) == 1;
}


//======================================================================
// SnowBlockMaterial::newObject(void)
// address: 0x002C1BE8   size: 0x1C (28 bytes)
//======================================================================
BasicBlockMaterial *__fastcall SnowBlockMaterial::newObject(SnowBlockMaterial *this)
{
  BasicBlockMaterial *v1; // r4

  v1 = (BasicBlockMaterial *)operator new(0x74u);
  BasicBlockMaterial::BasicBlockMaterial(v1);
  *(_DWORD *)v1 = &off_45D370;
  return v1;
}

