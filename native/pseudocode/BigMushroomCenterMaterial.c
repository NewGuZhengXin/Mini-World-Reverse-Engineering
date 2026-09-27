// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BigMushroomCenterMaterial

//======================================================================
// BigMushroomCenterMaterial::newObject(void)
// address: 0x002C1878   size: 0x1C (28 bytes)
//======================================================================
BigMushroomMaterial *__fastcall BigMushroomCenterMaterial::newObject(BigMushroomCenterMaterial *this)
{
  BigMushroomMaterial *v1; // r4

  v1 = (BigMushroomMaterial *)operator new(0x4Cu);
  BigMushroomMaterial::BigMushroomMaterial(v1);
  *(_DWORD *)v1 = &off_460198;
  return v1;
}


//======================================================================
// BigMushroomCenterMaterial::getFaceMtl(DirectionType,int)
// address: 0x002D0474   size: 0xE (14 bytes)
//======================================================================
int __fastcall BigMushroomCenterMaterial::getFaceMtl(int a1, int a2, int a3)
{
  if ( a3 == a2 )
    return *(_DWORD *)(a1 + 68);
  else
    return *(_DWORD *)(a1 + 72);
}


//======================================================================
// BigMushroomCenterMaterial::~BigMushroomCenterMaterial()
// address: 0x002D0568   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN25BigMushroomCenterMaterialD1Ev'
void __fastcall BigMushroomCenterMaterial::~BigMushroomCenterMaterial(BigMushroomCenterMaterial *this)
{
  *(_DWORD *)this = &off_460198;
  BigMushroomMaterial::~BigMushroomMaterial(this);
}


//======================================================================
// BigMushroomCenterMaterial::~BigMushroomCenterMaterial()
// address: 0x002D0584   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BigMushroomCenterMaterial::~BigMushroomCenterMaterial(BigMushroomCenterMaterial *this)
{
  BigMushroomCenterMaterial::~BigMushroomCenterMaterial(this);
  operator delete(this);
}

