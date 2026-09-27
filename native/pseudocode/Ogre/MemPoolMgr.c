// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::MemPoolMgr

//======================================================================
// Ogre::MemPoolMgr::MemPoolMgr(void)
// address: 0x00159444   size: 0x2E (46 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10MemPoolMgrC1Ev'
Ogre::MemPoolMgr *__fastcall Ogre::MemPoolMgr::MemPoolMgr(Ogre::MemPoolMgr *this)
{
  unsigned int v2; // r4
  unsigned int *v3; // r6

  v2 = 4;
  Ogre::Singleton<Ogre::MemPoolMgr>::ms_Singleton = (int)this;
  do
  {
    v3 = (unsigned int *)operator new(0x14u);
    Ogre::FixedSizePool::FixedSizePool(v3, v2);
    *(_DWORD *)((char *)this + v2 - 4) = v3;
    v2 += 4;
  }
  while ( v2 != 1028 );
  return this;
}


//======================================================================
// Ogre::MemPoolMgr::~MemPoolMgr()
// address: 0x0015947C   size: 0x30 (48 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10MemPoolMgrD1Ev'
void __fastcall Ogre::MemPoolMgr::~MemPoolMgr(Ogre::MemPoolMgr *this)
{
  int i; // r4
  void *v3; // r5

  for ( i = 0; i != 1024; i += 4 )
  {
    v3 = *(void **)((char *)this + i);
    if ( v3 != nullptr )
    {
      Ogre::FixedSizePool::~FixedSizePool(*(Ogre::FixedSizePool **)((char *)this + i));
      operator delete(v3);
    }
  }
  Ogre::Singleton<Ogre::MemPoolMgr>::ms_Singleton = 0;
}


//======================================================================
// Ogre::MemPoolMgr::Alloc(unsigned int)
// address: 0x001594B0   size: 0x1C (28 bytes)
//======================================================================
_DWORD *__fastcall Ogre::MemPoolMgr::Alloc(Ogre::FixedSizePool **this, size_t byte_count)
{
  size_t v2; // r3

  v2 = (byte_count - 1) >> 2;
  if ( v2 <= 0xFF )
    return Ogre::FixedSizePool::AllocUnit(*(this + v2));
  else
    return j_malloc(byte_count);
}


//======================================================================
// Ogre::MemPoolMgr::Free(void *,unsigned int)
// address: 0x001594CC   size: 0x1C (28 bytes)
//======================================================================
void __fastcall Ogre::MemPoolMgr::Free(Ogre::MemPoolMgr *this, _DWORD *p, unsigned int a3)
{
  unsigned int v3; // r2

  v3 = (a3 - 1) >> 2;
  if ( v3 <= 0xFF )
    Ogre::FixedSizePool::FreeUnit(*((_DWORD *)this + v3), p);
  else
    j_free(p);
}

