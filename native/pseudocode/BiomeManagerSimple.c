// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BiomeManagerSimple

//======================================================================
// BiomeManagerSimple::~BiomeManagerSimple()
// address: 0x002A1B18   size: 0x28 (40 bytes)
//======================================================================
// Alternative name is '_ZN18BiomeManagerSimpleD1Ev'
void __fastcall BiomeManagerSimple::~BiomeManagerSimple(BiomeManagerSimple *this)
{
  int v2; // r0

  *(_DWORD *)this = &off_45CB28;
  v2 = *((_DWORD *)this + 1);
  if ( v2 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  *(_DWORD *)this = &off_45CAD0;
}


//======================================================================
// BiomeManagerSimple::getBiomeGen(int)
// address: 0x002A1B48   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BiomeManagerSimple::getBiomeGen(BiomeManagerSimple *this, int a2)
{
  return *((_DWORD *)this + 1);
}


//======================================================================
// BiomeManagerSimple::findBiomePosition(WCoord &,int,int,int,ChunkRandGen &)
// address: 0x002A1B4C   size: 0xC (12 bytes)
//======================================================================
int __fastcall BiomeManagerSimple::findBiomePosition(int a1, _DWORD *a2)
{
  *a2 = 0;
  a2[1] = 0;
  a2[2] = 0;
  return 1;
}


//======================================================================
// BiomeManagerSimple::~BiomeManagerSimple()
// address: 0x002A1B74   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BiomeManagerSimple::~BiomeManagerSimple(BiomeManagerSimple *this)
{
  BiomeManagerSimple::~BiomeManagerSimple(this);
  operator delete(this);
}


//======================================================================
// BiomeManagerSimple::BiomeManagerSimple(int)
// address: 0x002A1B98   size: 0x2C (44 bytes)
//======================================================================
// Alternative name is '_ZN18BiomeManagerSimpleC2Ei'
void __fastcall BiomeManagerSimple::BiomeManagerSimple(BiomeManagerSimple *this, int a2)
{
  BiomeManager::BiomeManager(this);
  *(_DWORD *)this = &off_45CB28;
  *((_DWORD *)this + 1) = BiomeGenBase::createBiomeGen(*(_DWORD *)(4 * a2
                                                                 + *(_DWORD *)Ogre::Singleton<DefManager>::ms_Singleton));
}


//======================================================================
// BiomeManagerSimple::getBiomesForGeneration(std::vector<BiomeGenBase *,std::allocator<BiomeGenBase *>> &,int,int,int,int)
// address: 0x002A20EA   size: 0x16 (22 bytes)
//======================================================================
void __fastcall BiomeManagerSimple::getBiomesForGeneration(int a1, int a2, int a3, int a4, int a5, int a6)
{
  std::vector<BiomeGenBase *>::resize(a2, a6 * a5, (void **)(a1 + 4));
}


//======================================================================
// BiomeManagerSimple::getBiomeGenAt(std::vector<BiomeGenBase *,std::allocator<BiomeGenBase *>> &,int,int,int,int)
// address: 0x002A2100   size: 0x16 (22 bytes)
//======================================================================
void __fastcall BiomeManagerSimple::getBiomeGenAt(int a1, int a2, int a3, int a4, int a5, int a6)
{
  std::vector<BiomeGenBase *>::resize(a2, a6 * a5, (void **)(a1 + 4));
}

