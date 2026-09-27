// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::LockFunctor

//======================================================================
// Ogre::LockFunctor::LockFunctor(Ogre::LockSection *)
// address: 0x00149D06   size: 0x14 (20 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11LockFunctorC1EPNS_11LockSectionE'
Ogre::LockFunctor *__fastcall Ogre::LockFunctor::LockFunctor(Ogre::LockFunctor *this, Ogre::LockSection *a2)
{
  *(_DWORD *)this = a2;
  if ( a2 != nullptr )
    Ogre::LockSection::Lock(a2);
  return this;
}


//======================================================================
// Ogre::LockFunctor::~LockFunctor()
// address: 0x00149D1A   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11LockFunctorD1Ev'
void __fastcall Ogre::LockFunctor::~LockFunctor(Ogre::LockSection **this)
{
  Ogre::LockSection *v1; // r0

  v1 = *this;
  if ( v1 != nullptr )
    Ogre::LockSection::Unlock(v1);
}

