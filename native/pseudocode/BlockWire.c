// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockWire

//======================================================================
// BlockWire::getGeomName(void)
// address: 0x002BC2C4   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall BlockWire::getGeomName(BlockWire *this)
{
  return "wire";
}


//======================================================================
// BlockWire::getProtoBlockGeomID(int *,int *)
// address: 0x002BC2D0   size: 0xA (10 bytes)
//======================================================================
int __fastcall BlockWire::getProtoBlockGeomID(BlockWire *this, int *a2, int *a3)
{
  *a2 = 0;
  *a3 = 0;
  return 1;
}


//======================================================================
// BlockWire::onBlockPlaced(World *,WCoord const&,DirectionType,float,float,float,int)
// address: 0x002BC2DC   size: 0x18 (24 bytes)
//======================================================================
int __fastcall BlockWire::onBlockPlaced(int a1, int a2, int *a3)
{
  return BlockOperateMgr::getCurPlaceDir(
           (BlockOperateMgr *)Ogre::Singleton<BlockOperateMgr>::ms_Singleton,
           *a3,
           a3[1],
           a3[2]);
}


//======================================================================
// BlockWire::~BlockWire()
// address: 0x002BC2F8   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN9BlockWireD1Ev'
void __fastcall BlockWire::~BlockWire(BlockWire *this)
{
  *(_DWORD *)this = &off_45E948;
  ModelBlockMaterial::~ModelBlockMaterial(this);
}


//======================================================================
// BlockWire::~BlockWire()
// address: 0x002BC314   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BlockWire::~BlockWire(BlockWire *this)
{
  BlockWire::~BlockWire(this);
  operator delete(this);
}


//======================================================================
// BlockWire::getBlockGeomID(int *,int *,Section *,WCoord const&)
// address: 0x002BC328   size: 0x2E (46 bytes)
//======================================================================
int __fastcall BlockWire::getBlockGeomID(int a1, _DWORD *a2, int *a3, int a4, _DWORD *a5)
{
  int v5; // r0
  __int16 *v6; // r3
  int v7; // r3

  v5 = *(_DWORD *)(a4 + 20);
  if ( v5 != 0 )
    v6 = (__int16 *)(v5 + 2 * ((16 * a5[2]) | (a5[1] << 8) | *a5));
  else
    v6 = &Section::m_EmptyBlock;
  v7 = (unsigned __int16)*v6;
  *a2 = 0;
  *a3 = v7 >> 12;
  return 1;
}


//======================================================================
// BlockWire::newObject(void)
// address: 0x002C1C6C   size: 0x1C (28 bytes)
//======================================================================
ModelBlockMaterial *__fastcall BlockWire::newObject(BlockWire *this)
{
  ModelBlockMaterial *v1; // r4

  v1 = (ModelBlockMaterial *)operator new(0x3Cu);
  ModelBlockMaterial::ModelBlockMaterial(v1);
  *(_DWORD *)v1 = &off_45E948;
  return v1;
}

