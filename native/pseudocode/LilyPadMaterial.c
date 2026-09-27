// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: LilyPadMaterial

//======================================================================
// LilyPadMaterial::getRenderColor(void)
// address: 0x002B4EB0   size: 0x8 (8 bytes)
//======================================================================
int __fastcall LilyPadMaterial::getRenderColor(LilyPadMaterial *this)
{
  return -13598688;
}


//======================================================================
// LilyPadMaterial::onBlockPlaced(World *,WCoord const&,DirectionType,float,float,float,int)
// address: 0x002B4EBC   size: 0x4 (4 bytes)
//======================================================================
int LilyPadMaterial::onBlockPlaced()
{
  return 4;
}


//======================================================================
// LilyPadMaterial::canPlaceBlockAt(World *,WCoord const&)
// address: 0x002B4EC0   size: 0x34 (52 bytes)
//======================================================================
bool __fastcall LilyPadMaterial::canPlaceBlockAt(LilyPadMaterial *this, World *a2, const WCoord *a3, int a4)
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
  return World::getBlockID(a2, (const WCoord *)&v8) == 3;
}


//======================================================================
// LilyPadMaterial::~LilyPadMaterial()
// address: 0x002B4EF8   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN15LilyPadMaterialD1Ev'
void __fastcall LilyPadMaterial::~LilyPadMaterial(LilyPadMaterial *this)
{
  *(_DWORD *)this = &off_45E1D8;
  FlatPieceMaterial::~FlatPieceMaterial(this);
}


//======================================================================
// LilyPadMaterial::~LilyPadMaterial()
// address: 0x002B4F14   size: 0x12 (18 bytes)
//======================================================================
void __fastcall LilyPadMaterial::~LilyPadMaterial(LilyPadMaterial *this)
{
  LilyPadMaterial::~LilyPadMaterial(this);
  operator delete(this);
}


//======================================================================
// LilyPadMaterial::newObject(void)
// address: 0x002C1B38   size: 0x1C (28 bytes)
//======================================================================
FlatPieceMaterial *__fastcall LilyPadMaterial::newObject(LilyPadMaterial *this)
{
  FlatPieceMaterial *v1; // r4

  v1 = (FlatPieceMaterial *)operator new(0x38u);
  FlatPieceMaterial::FlatPieceMaterial(v1);
  *(_DWORD *)v1 = &off_45E1D8;
  return v1;
}

