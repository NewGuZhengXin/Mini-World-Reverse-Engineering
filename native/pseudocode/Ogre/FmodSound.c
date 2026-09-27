// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::FmodSound

//======================================================================
// Ogre::FmodSound::~FmodSound()
// address: 0x0016B340   size: 0x22 (34 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9FmodSoundD1Ev'
void __fastcall Ogre::FmodSound::~FmodSound(FMOD::Channel **this)
{
  *this = (FMOD::Channel *)&off_457220;
  FMOD::Channel::stop(*(this + 1));
  *this = (FMOD::Channel *)&off_457138;
}


//======================================================================
// Ogre::FmodSound::~FmodSound()
// address: 0x0016B36C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::FmodSound::~FmodSound(FMOD::Channel **this)
{
  Ogre::FmodSound::~FmodSound(this);
  operator delete(this);
}


//======================================================================
// Ogre::FmodSound::stop(void)
// address: 0x0016B37E   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::FmodSound::stop(FMOD::Channel **this)
{
  return FMOD::Channel::stop(*(this + 1));
}


//======================================================================
// Ogre::FmodSound::isPlaying(void)
// address: 0x0016B388   size: 0x12 (18 bytes)
//======================================================================
bool __fastcall Ogre::FmodSound::isPlaying(FMOD::Channel **this, int a2)
{
  bool v3; // [sp+7h] [bp-1h] BYREF

  v3 = HIBYTE(a2);
  FMOD::Channel::isPlaying(*(this + 1), &v3);
  return v3;
}


//======================================================================
// Ogre::FmodSound::setPaused(bool)
// address: 0x0016B3CC   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::FmodSound::setPaused(FMOD::Channel **this, bool a2)
{
  return FMOD::Channel::setPaused(*(this + 1), a2);
}


//======================================================================
// Ogre::FmodSound::setPosition(Ogre::Vector3 const&)
// address: 0x0016B3D6   size: 0xC (12 bytes)
//======================================================================
int __fastcall Ogre::FmodSound::setPosition(Ogre::FmodSound *this, const Ogre::Vector3 *a2)
{
  return FMOD::Channel::set3DAttributes();
}


//======================================================================
// Ogre::FmodSound::setVelocity(Ogre::Vector3 const&)
// address: 0x0016B3E2   size: 0xE (14 bytes)
//======================================================================
int __fastcall Ogre::FmodSound::setVelocity(Ogre::FmodSound *this, const Ogre::Vector3 *a2)
{
  return FMOD::Channel::set3DAttributes();
}


//======================================================================
// Ogre::FmodSound::setDistance(float,float)
// address: 0x0016B3F0   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::FmodSound::setDistance(FMOD::Channel **this, float a2, float a3)
{
  return FMOD::Channel::set3DMinMaxDistance(*(this + 1), a2, a3);
}


//======================================================================
// Ogre::FmodSound::setVolume(float)
// address: 0x0016B5D2   size: 0x1C (28 bytes)
//======================================================================
int __fastcall Ogre::FmodSound::setVolume(Ogre::FmodSound *this, float a2)
{
  int result; // r0

  result = *((float *)this + 2) == a2;
  if ( result == 0 )
  {
    *((float *)this + 2) = a2;
    return FMOD::Channel::setVolume(*((FMOD::Channel **)this + 1), a2);
  }
  return result;
}


//======================================================================
// Ogre::FmodSound::FmodSound(FMOD::Channel *)
// address: 0x0016B624   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9FmodSoundC1EPN4FMOD7ChannelE'
_DWORD *__fastcall Ogre::FmodSound::FmodSound(_DWORD *result, int a2)
{
  result[1] = a2;
  *result = &off_457220;
  result[2] = 0;
  return result;
}

