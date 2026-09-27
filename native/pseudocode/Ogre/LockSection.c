// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::LockSection

//======================================================================
// Ogre::LockSection::LockSection(void)
// address: 0x0015614C   size: 0xE (14 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11LockSectionC1Ev'
pthread_mutex_t *__fastcall Ogre::LockSection::LockSection(pthread_mutex_t *this)
{
  j_pthread_mutex_init(this, nullptr);
  return this;
}


//======================================================================
// Ogre::LockSection::~LockSection()
// address: 0x0015615A   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11LockSectionD2Ev'
void __fastcall Ogre::LockSection::~LockSection(pthread_mutex_t *this)
{
  j_pthread_mutex_destroy(this);
}


//======================================================================
// Ogre::LockSection::Lock(void)
// address: 0x00156166   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::LockSection::Lock(pthread_mutex_t *this)
{
  return j_pthread_mutex_lock(this);
}


//======================================================================
// Ogre::LockSection::Unlock(void)
// address: 0x0015616E   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::LockSection::Unlock(pthread_mutex_t *this)
{
  return j_pthread_mutex_unlock(this);
}

