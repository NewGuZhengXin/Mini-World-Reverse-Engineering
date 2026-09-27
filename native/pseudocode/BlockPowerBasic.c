// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockPowerBasic

//======================================================================
// BlockPowerBasic::canProvidePower(void)
// address: 0x002C134E   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BlockPowerBasic::canProvidePower(BlockPowerBasic *this)
{
  return 1;
}


//======================================================================
// BlockPowerBasic::isProvidingWeakPower(World *,WCoord const&,DirectionType)
// address: 0x002C1352   size: 0x4 (4 bytes)
//======================================================================
int BlockPowerBasic::isProvidingWeakPower()
{
  return 15;
}


//======================================================================
// BlockPowerBasic::~BlockPowerBasic()
// address: 0x002C16E0   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN15BlockPowerBasicD1Ev'
void __fastcall BlockPowerBasic::~BlockPowerBasic(BlockPowerBasic *this)
{
  *(_DWORD *)this = &off_45F438;
  BasicBlockMaterial::~BasicBlockMaterial(this);
}


//======================================================================
// BlockPowerBasic::~BlockPowerBasic()
// address: 0x002C16FC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BlockPowerBasic::~BlockPowerBasic(BlockPowerBasic *this)
{
  BlockPowerBasic::~BlockPowerBasic(this);
  operator delete(this);
}


//======================================================================
// BlockPowerBasic::newObject(void)
// address: 0x002C184C   size: 0x1C (28 bytes)
//======================================================================
BasicBlockMaterial *__fastcall BlockPowerBasic::newObject(BlockPowerBasic *this)
{
  BasicBlockMaterial *v1; // r4

  v1 = (BasicBlockMaterial *)operator new(0x74u);
  BasicBlockMaterial::BasicBlockMaterial(v1);
  *(_DWORD *)v1 = &off_45F438;
  return v1;
}

