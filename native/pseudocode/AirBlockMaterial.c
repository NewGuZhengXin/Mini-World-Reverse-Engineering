// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: AirBlockMaterial

//======================================================================
// AirBlockMaterial::isSolid(void)
// address: 0x002C134A   size: 0x4 (4 bytes)
//======================================================================
int __fastcall AirBlockMaterial::isSolid(AirBlockMaterial *this)
{
  return 0;
}


//======================================================================
// AirBlockMaterial::~AirBlockMaterial()
// address: 0x002C1710   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN16AirBlockMaterialD1Ev'
void __fastcall AirBlockMaterial::~AirBlockMaterial(AirBlockMaterial *this)
{
  *(_DWORD *)this = &off_45F370;
  BlockMaterial::~BlockMaterial(this);
}


//======================================================================
// AirBlockMaterial::~AirBlockMaterial()
// address: 0x002C172C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall AirBlockMaterial::~AirBlockMaterial(AirBlockMaterial *this)
{
  AirBlockMaterial::~AirBlockMaterial(this);
  operator delete(this);
}


//======================================================================
// AirBlockMaterial::newObject(void)
// address: 0x002C1980   size: 0x1C (28 bytes)
//======================================================================
BlockMaterial *__fastcall AirBlockMaterial::newObject(AirBlockMaterial *this)
{
  BlockMaterial *v1; // r4

  v1 = (BlockMaterial *)operator new(0x30u);
  BlockMaterial::BlockMaterial(v1);
  *(_DWORD *)v1 = &off_45F370;
  return v1;
}

