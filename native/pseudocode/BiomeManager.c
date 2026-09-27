// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BiomeManager

//======================================================================
// BiomeManager::~BiomeManager()
// address: 0x002A1B00   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN12BiomeManagerD1Ev'
void __fastcall BiomeManager::~BiomeManager(BiomeManager *this)
{
  *(_DWORD *)this = &off_45CAD0;
}


//======================================================================
// BiomeManager::~BiomeManager()
// address: 0x002A1B58   size: 0x16 (22 bytes)
//======================================================================
void __fastcall BiomeManager::~BiomeManager(BiomeManager *this)
{
  *(_DWORD *)this = &off_45CAD0;
  operator delete(this);
}


//======================================================================
// BiomeManager::BiomeManager(void)
// address: 0x002A1B88   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN12BiomeManagerC1Ev'
void __fastcall BiomeManager::BiomeManager(BiomeManager *this)
{
  *(_DWORD *)this = &off_45CAD0;
}

