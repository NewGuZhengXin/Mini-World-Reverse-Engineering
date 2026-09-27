// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::HardwareBufferManager

//======================================================================
// Ogre::HardwareBufferManager::~HardwareBufferManager()
// address: 0x001986D8   size: 0x26 (38 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre21HardwareBufferManagerD1Ev'
void __fastcall Ogre::HardwareBufferManager::~HardwareBufferManager(Ogre::HardwareBufferManager *this)
{
  void *v1; // r0

  *(_DWORD *)this = &off_458758;
  v1 = *((void **)this + 1);
  if ( v1 != nullptr )
    operator delete(v1);
  Ogre::Singleton<Ogre::HardwareBufferManager>::ms_Singleton = 0;
}


//======================================================================
// Ogre::HardwareBufferManager::~HardwareBufferManager()
// address: 0x00198708   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::HardwareBufferManager::~HardwareBufferManager(Ogre::HardwareBufferManager *this)
{
  Ogre::HardwareBufferManager::~HardwareBufferManager(this);
  operator delete(this);
}


//======================================================================
// Ogre::HardwareBufferManager::HardwareBufferManager(void)
// address: 0x0019871C   size: 0x1C (28 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre21HardwareBufferManagerC1Ev'
_DWORD *__fastcall Ogre::HardwareBufferManager::HardwareBufferManager(_DWORD *this)
{
  Ogre::Singleton<Ogre::HardwareBufferManager>::ms_Singleton = (int)this;
  *this = &off_458758;
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  return this;
}


//======================================================================
// Ogre::HardwareBufferManager::getTmpBuffer(unsigned int)
// address: 0x00198740   size: 0x24 (36 bytes)
//======================================================================
int __fastcall Ogre::HardwareBufferManager::getTmpBuffer(Ogre::HardwareBufferManager *this, unsigned int a2, int a3)
{
  _BYTE *v3; // r5
  _BYTE *v5; // r2
  unsigned __int8 v7[5]; // [sp+7h] [bp-5h] BYREF

  v7[0] = HIBYTE(a2);
  *(_DWORD *)&v7[1] = a3;
  v3 = *((_BYTE **)this + 2);
  v5 = &v3[-*((_DWORD *)this + 1)];
  if ( a2 > (unsigned int)v5 )
  {
    v7[0] = 0;
    std::vector<char>::_M_fill_insert((int)this + 4, v3, a2 - (_DWORD)v5, v7);
  }
  return *((_DWORD *)this + 1);
}

