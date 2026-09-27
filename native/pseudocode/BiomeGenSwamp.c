// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BiomeGenSwamp

//======================================================================
// BiomeGenSwamp::getRandomWorldGenForTrees(ChunkRandGen *)
// address: 0x002E6E04   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BiomeGenSwamp::getRandomWorldGenForTrees(BiomeGenSwamp *this, ChunkRandGen *a2)
{
  return *((_DWORD *)this + 21);
}


//======================================================================
// BiomeGenSwamp::~BiomeGenSwamp()
// address: 0x002E6EE0   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN13BiomeGenSwampD1Ev'
void __fastcall BiomeGenSwamp::~BiomeGenSwamp(BiomeGenSwamp *this)
{
  *(_DWORD *)this = &off_461B50;
  BiomeGenBase::~BiomeGenBase(this);
}


//======================================================================
// BiomeGenSwamp::~BiomeGenSwamp()
// address: 0x002E6EFC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BiomeGenSwamp::~BiomeGenSwamp(BiomeGenSwamp *this)
{
  BiomeGenSwamp::~BiomeGenSwamp(this);
  operator delete(this);
}

