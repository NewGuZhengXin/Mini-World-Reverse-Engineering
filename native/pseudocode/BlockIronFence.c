// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockIronFence

//======================================================================
// BlockIronFence::getGeomName(void)
// address: 0x002C1368   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall BlockIronFence::getGeomName(BlockIronFence *this)
{
  return "ironfence";
}


//======================================================================
// BlockIronFence::singleNeedCross(void)
// address: 0x002C1374   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BlockIronFence::singleNeedCross(BlockIronFence *this)
{
  return 1;
}


//======================================================================
// BlockIronFence::~BlockIronFence()
// address: 0x002C13A8   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN14BlockIronFenceD1Ev'
void __fastcall BlockIronFence::~BlockIronFence(BlockIronFence *this)
{
  *(_DWORD *)this = &off_45F5F0;
  FenceMaterial::~FenceMaterial(this);
}


//======================================================================
// BlockIronFence::~BlockIronFence()
// address: 0x002C13C4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BlockIronFence::~BlockIronFence(BlockIronFence *this)
{
  BlockIronFence::~BlockIronFence(this);
  operator delete(this);
}


//======================================================================
// BlockIronFence::newObject(void)
// address: 0x002C1740   size: 0x1C (28 bytes)
//======================================================================
ModelBlockMaterial *__fastcall BlockIronFence::newObject(BlockIronFence *this)
{
  ModelBlockMaterial *v1; // r4

  v1 = (ModelBlockMaterial *)operator new(0x3Cu);
  ModelBlockMaterial::ModelBlockMaterial(v1);
  *(_DWORD *)v1 = &off_45F5F0;
  return v1;
}

