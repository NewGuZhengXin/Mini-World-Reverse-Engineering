// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: CarpetMaterial

//======================================================================
// CarpetMaterial::canBlocksMovement(World *,WCoord const&)
// address: 0x002B4F26   size: 0x4 (4 bytes)
//======================================================================
int CarpetMaterial::canBlocksMovement()
{
  return 0;
}


//======================================================================
// CarpetMaterial::getBlockHeight(int)
// address: 0x002B4F2A   size: 0x6 (6 bytes)
//======================================================================
int __fastcall CarpetMaterial::getBlockHeight(CarpetMaterial *this, int a2)
{
  return 1031798784;
}


//======================================================================
// CarpetMaterial::isOpaque(void)
// address: 0x002B4F30   size: 0x4 (4 bytes)
//======================================================================
int __fastcall CarpetMaterial::isOpaque(CarpetMaterial *this)
{
  return 0;
}


//======================================================================
// CarpetMaterial::isOpaqueCube(void)
// address: 0x002B4F34   size: 0x4 (4 bytes)
//======================================================================
int __fastcall CarpetMaterial::isOpaqueCube(CarpetMaterial *this)
{
  return 0;
}


//======================================================================
// CarpetMaterial::renderAsNormalBlock(void)
// address: 0x002B4F38   size: 0x4 (4 bytes)
//======================================================================
int __fastcall CarpetMaterial::renderAsNormalBlock(CarpetMaterial *this)
{
  return 0;
}


//======================================================================
// CarpetMaterial::hasSolidTopSurface(int)
// address: 0x002B4F3C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall CarpetMaterial::hasSolidTopSurface(CarpetMaterial *this, int a2)
{
  return 0;
}


//======================================================================
// CarpetMaterial::canPlaceBlockAt(World *,WCoord const&)
// address: 0x002B4F40   size: 0x32 (50 bytes)
//======================================================================
bool __fastcall CarpetMaterial::canPlaceBlockAt(CarpetMaterial *this, World *a2, const WCoord *a3, int a4)
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
  return World::getBlockID(a2, (const WCoord *)&v8) != 0;
}


//======================================================================
// CarpetMaterial::~CarpetMaterial()
// address: 0x002B4F78   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN14CarpetMaterialD1Ev'
void __fastcall CarpetMaterial::~CarpetMaterial(CarpetMaterial *this)
{
  *(_DWORD *)this = &off_45E2B8;
  BasicBlockMaterial::~BasicBlockMaterial(this);
}


//======================================================================
// CarpetMaterial::~CarpetMaterial()
// address: 0x002B4F94   size: 0x12 (18 bytes)
//======================================================================
void __fastcall CarpetMaterial::~CarpetMaterial(CarpetMaterial *this)
{
  CarpetMaterial::~CarpetMaterial(this);
  operator delete(this);
}


//======================================================================
// CarpetMaterial::onNeighborBlockChange(World *,WCoord const&,int)
// address: 0x002B4FA6   size: 0x42 (66 bytes)
//======================================================================
__int64 __fastcall CarpetMaterial::onNeighborBlockChange(__int64 this, const WCoord *a2, int a3)
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
// CarpetMaterial::newObject(void)
// address: 0x002C1B64   size: 0x1C (28 bytes)
//======================================================================
BasicBlockMaterial *__fastcall CarpetMaterial::newObject(CarpetMaterial *this)
{
  BasicBlockMaterial *v1; // r4

  v1 = (BasicBlockMaterial *)operator new(0x74u);
  BasicBlockMaterial::BasicBlockMaterial(v1);
  *(_DWORD *)v1 = &off_45E2B8;
  return v1;
}

