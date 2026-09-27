// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::FmodSoundResource

//======================================================================
// Ogre::FmodSoundResource::getFModSound(void)
// address: 0x0016B5EE   size: 0x1A (26 bytes)
//======================================================================
int __fastcall Ogre::FmodSoundResource::getFModSound(Ogre::FmodSoundResource *this)
{
  int result; // r0

  result = *((_DWORD *)this + 6);
  if ( result != 0 )
    return *((_DWORD *)this + j_lrand48() % *((_DWORD *)this + 6));
  return result;
}


//======================================================================
// Ogre::FmodSoundResource::~FmodSoundResource()
// address: 0x0016B608   size: 0x1C (28 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre17FmodSoundResourceD1Ev'
void __fastcall Ogre::FmodSoundResource::~FmodSoundResource(FMOD::Sound **this)
{
  int i; // r4

  for ( i = 0; i < (int)*(this + 6); ++i )
    FMOD::Sound::release(*(this + i));
}

