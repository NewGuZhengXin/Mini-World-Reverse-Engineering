// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockMobSpawner

//======================================================================
// BlockMobSpawner::getGeomName(void)
// address: 0x002C135C   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall BlockMobSpawner::getGeomName(BlockMobSpawner *this)
{
  return "mobspawner";
}


//======================================================================
// BlockMobSpawner::~BlockMobSpawner()
// address: 0x002C13D8   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN15BlockMobSpawnerD1Ev'
void __fastcall BlockMobSpawner::~BlockMobSpawner(BlockMobSpawner *this)
{
  *(_DWORD *)this = &off_45F520;
  ModelBlockMaterial::~ModelBlockMaterial(this);
}


//======================================================================
// BlockMobSpawner::~BlockMobSpawner()
// address: 0x002C13F4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BlockMobSpawner::~BlockMobSpawner(BlockMobSpawner *this)
{
  BlockMobSpawner::~BlockMobSpawner(this);
  operator delete(this);
}


//======================================================================
// BlockMobSpawner::newObject(void)
// address: 0x002C1AE0   size: 0x1C (28 bytes)
//======================================================================
ModelBlockMaterial *__fastcall BlockMobSpawner::newObject(BlockMobSpawner *this)
{
  ModelBlockMaterial *v1; // r4

  v1 = (ModelBlockMaterial *)operator new(0x3Cu);
  ModelBlockMaterial::ModelBlockMaterial(v1);
  *(_DWORD *)v1 = &off_45F520;
  return v1;
}

