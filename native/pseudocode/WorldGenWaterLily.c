// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WorldGenWaterLily

//======================================================================
// WorldGenWaterLily::generate(World *,ChunkRandGen &,WCoord const&)
// address: 0x002B481C   size: 0x4 (4 bytes)
//======================================================================
int WorldGenWaterLily::generate()
{
  return 1;
}


//======================================================================
// WorldGenWaterLily::~WorldGenWaterLily()
// address: 0x002B4820   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN17WorldGenWaterLilyD1Ev'
void __fastcall WorldGenWaterLily::~WorldGenWaterLily(WorldGenWaterLily *this)
{
  *(_DWORD *)this = &off_45B6E0;
}


//======================================================================
// WorldGenWaterLily::~WorldGenWaterLily()
// address: 0x002B4830   size: 0x16 (22 bytes)
//======================================================================
void __fastcall WorldGenWaterLily::~WorldGenWaterLily(WorldGenWaterLily *this)
{
  *(_DWORD *)this = &off_45B6E0;
  operator delete(this);
}

