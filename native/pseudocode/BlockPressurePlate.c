// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockPressurePlate

//======================================================================
// BlockPressurePlate::getPowerSupply(int)
// address: 0x002A8FBC   size: 0xC (12 bytes)
//======================================================================
int __fastcall BlockPressurePlate::getPowerSupply(BlockPressurePlate *this, int a2)
{
  int result; // r0

  result = 0;
  if ( a2 == 1 )
    return 15;
  return result;
}


//======================================================================
// BlockPressurePlate::getBlockdataFromWeight(int)
// address: 0x002A8FC8   size: 0x8 (8 bytes)
//======================================================================
unsigned int __fastcall BlockPressurePlate::getBlockdataFromWeight(BlockPressurePlate *this, int a2)
{
  return (unsigned int)((a2 >> 31) - a2) >> 31;
}


//======================================================================
// BlockPressurePlate::~BlockPressurePlate()
// address: 0x002A900C   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN18BlockPressurePlateD1Ev'
void __fastcall BlockPressurePlate::~BlockPressurePlate(BlockPressurePlate *this)
{
  *(_DWORD *)this = &off_45DA58;
  BlockBasePressurePlate::~BlockBasePressurePlate(this);
}


//======================================================================
// BlockPressurePlate::~BlockPressurePlate()
// address: 0x002A9028   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BlockPressurePlate::~BlockPressurePlate(BlockPressurePlate *this)
{
  BlockPressurePlate::~BlockPressurePlate(this);
  operator delete(this);
}


//======================================================================
// BlockPressurePlate::init(int)
// address: 0x002A90B4   size: 0x1A (26 bytes)
//======================================================================
int __fastcall BlockPressurePlate::init(BlockPressurePlate *this, int a2)
{
  int result; // r0

  result = ModelBlockMaterial::init(this, a2);
  *((_DWORD *)this + 15) = a2 != 711;
  return result;
}


//======================================================================
// BlockPressurePlate::getPlateState(World *,WCoord const&)
// address: 0x002A9346   size: 0x68 (104 bytes)
//======================================================================
int __fastcall BlockPressurePlate::getPlateState(BlockPressurePlate *this, World *a2, const WCoord *a3)
{
  int v5; // r3
  int v6; // r4
  void *v8; // [sp+4h] [bp-28h] BYREF
  int v9; // [sp+8h] [bp-24h]
  int v10; // [sp+Ch] [bp-20h]
  _DWORD v11[7]; // [sp+10h] [bp-1Ch] BYREF

  v9 = 0;
  v10 = 0;
  v8 = nullptr;
  BlockBasePressurePlate::getSensitiveAABB((int)this, v11, a3);
  v5 = *((_DWORD *)this + 15);
  if ( v5 != 0 )
  {
    if ( v5 == 1 )
      World::getActorsOfTypeInBox(a2, &v8, v11, 0);
  }
  else
  {
    World::getActorsInBox(a2, &v8, v11);
  }
  v6 = (v9 - (int)v8) >> 2;
  if ( v6 != 0 )
    v6 = 15;
  if ( v8 != nullptr )
    operator delete(v8);
  return v6;
}


//======================================================================
// BlockPressurePlate::newObject(void)
// address: 0x002C17C8   size: 0x1C (28 bytes)
//======================================================================
ModelBlockMaterial *__fastcall BlockPressurePlate::newObject(BlockPressurePlate *this)
{
  ModelBlockMaterial *v1; // r4

  v1 = (ModelBlockMaterial *)operator new(0x40u);
  ModelBlockMaterial::ModelBlockMaterial(v1);
  *(_DWORD *)v1 = &off_45DA58;
  return v1;
}

