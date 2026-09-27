// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BiomeGenTaiga

//======================================================================
// BiomeGenTaiga::~BiomeGenTaiga()
// address: 0x002E6E98   size: 0x30 (48 bytes)
//======================================================================
// Alternative name is '_ZN13BiomeGenTaigaD1Ev'
void __fastcall BiomeGenTaiga::~BiomeGenTaiga(BiomeGenTaiga *this)
{
  int v2; // r0
  int v3; // r0

  *(_DWORD *)this = &off_461B70;
  v2 = *((_DWORD *)this + 23);
  if ( v2 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  v3 = *((_DWORD *)this + 24);
  if ( v3 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  BiomeGenBase::~BiomeGenBase(this);
}


//======================================================================
// BiomeGenTaiga::~BiomeGenTaiga()
// address: 0x002E6ECC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BiomeGenTaiga::~BiomeGenTaiga(BiomeGenTaiga *this)
{
  BiomeGenTaiga::~BiomeGenTaiga(this);
  operator delete(this);
}


//======================================================================
// BiomeGenTaiga::getRandomWorldGenForTrees(ChunkRandGen *)
// address: 0x002E6F70   size: 0x1C (28 bytes)
//======================================================================
int __fastcall BiomeGenTaiga::getRandomWorldGenForTrees(BiomeGenTaiga *this, ChunkRandGen *a2)
{
  if ( ChunkRandGen::get(a2) % 3u != 0 )
    return *((_DWORD *)this + 24);
  else
    return *((_DWORD *)this + 23);
}

