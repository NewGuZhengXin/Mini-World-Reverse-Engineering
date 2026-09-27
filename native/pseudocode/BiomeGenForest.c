// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BiomeGenForest

//======================================================================
// BiomeGenForest::~BiomeGenForest()
// address: 0x002E6F10   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN14BiomeGenForestD1Ev'
void __fastcall BiomeGenForest::~BiomeGenForest(BiomeGenForest *this)
{
  *(_DWORD *)this = &off_461B30;
  BiomeGenBase::~BiomeGenBase(this);
}


//======================================================================
// BiomeGenForest::~BiomeGenForest()
// address: 0x002E6F2C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BiomeGenForest::~BiomeGenForest(BiomeGenForest *this)
{
  BiomeGenForest::~BiomeGenForest(this);
  operator delete(this);
}


//======================================================================
// BiomeGenForest::getRandomWorldGenForTrees(ChunkRandGen *)
// address: 0x002E6F3E   size: 0x32 (50 bytes)
//======================================================================
int __fastcall BiomeGenForest::getRandomWorldGenForTrees(BiomeGenForest *this, ChunkRandGen *a2)
{
  if ( ChunkRandGen::get(a2) % 5u == 0 )
    return *((_DWORD *)this + 20);
  if ( ChunkRandGen::get(a2) % 0xAu != 0 )
    return *((_DWORD *)this + 18);
  return *((_DWORD *)this + 19);
}

