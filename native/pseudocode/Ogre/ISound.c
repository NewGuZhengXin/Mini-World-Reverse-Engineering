// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ISound

//======================================================================
// Ogre::ISound::release(void)
// address: 0x0014D518   size: 0xE (14 bytes)
//======================================================================
int __fastcall Ogre::ISound::release(int this)
{
  if ( this != 0 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)this + 4))(this);
  return this;
}


//======================================================================
// Ogre::ISound::~ISound()
// address: 0x0016B244   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre6ISoundD1Ev'
void __fastcall Ogre::ISound::~ISound(Ogre::ISound *this)
{
  *(_DWORD *)this = &off_457138;
}


//======================================================================
// Ogre::ISound::~ISound()
// address: 0x0016B2D4   size: 0x16 (22 bytes)
//======================================================================
void __fastcall Ogre::ISound::~ISound(Ogre::ISound *this)
{
  *(_DWORD *)this = &off_457138;
  operator delete(this);
}

