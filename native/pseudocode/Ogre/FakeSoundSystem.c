// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::FakeSoundSystem

//======================================================================
// Ogre::FakeSoundSystem::LoadSoundRes(char const*)
// address: 0x0016B274   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::FakeSoundSystem::LoadSoundRes(Ogre::FakeSoundSystem *this, const char *a2)
{
  ;
}


//======================================================================
// Ogre::FakeSoundSystem::LoadMusicRes(char const*)
// address: 0x0016B276   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::FakeSoundSystem::LoadMusicRes(Ogre::FakeSoundSystem *this, const char *a2)
{
  ;
}


//======================================================================
// Ogre::FakeSoundSystem::ReleaseRes(void)
// address: 0x0016B278   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::FakeSoundSystem::ReleaseRes(Ogre::FakeSoundSystem *this)
{
  ;
}


//======================================================================
// Ogre::FakeSoundSystem::playMusic(unsigned int,char const*,bool,unsigned int,float)
// address: 0x0016B27A   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::FakeSoundSystem::playMusic(
        Ogre::FakeSoundSystem *this,
        unsigned int a2,
        const char *a3,
        bool a4,
        unsigned int a5,
        float a6)
{
  ;
}


//======================================================================
// Ogre::FakeSoundSystem::PlayMusicInternal(unsigned int,FMOD::Sound *,bool,unsigned int,float)
// address: 0x0016B27C   size: 0x2 (2 bytes)
//======================================================================
void Ogre::FakeSoundSystem::PlayMusicInternal()
{
  ;
}


//======================================================================
// Ogre::FakeSoundSystem::setMusicVolume(unsigned int,float)
// address: 0x0016B27E   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::FakeSoundSystem::setMusicVolume(Ogre::FakeSoundSystem *this, unsigned int a2, float a3)
{
  ;
}


//======================================================================
// Ogre::FakeSoundSystem::playSound2D(char const*,float)
// address: 0x0016B280   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::FakeSoundSystem::playSound2D(Ogre::FakeSoundSystem *this, const char *a2, float a3)
{
  ;
}


//======================================================================
// Ogre::FakeSoundSystem::playSound3D(char const*,Ogre::SoundCreateInfo3D const&)
// address: 0x0016B282   size: 0x2 (2 bytes)
//======================================================================
void Ogre::FakeSoundSystem::playSound3D()
{
  ;
}


//======================================================================
// Ogre::FakeSoundSystem::playSound2DControl(char const*,float,bool,int)
// address: 0x0016B284   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::FakeSoundSystem::playSound2DControl(
        Ogre::FakeSoundSystem *this,
        const char *a2,
        float a3,
        bool a4,
        int a5)
{
  return 0;
}


//======================================================================
// Ogre::FakeSoundSystem::playSound3DControl(char const*,Ogre::SoundCreateInfo3D const&)
// address: 0x0016B288   size: 0x4 (4 bytes)
//======================================================================
int Ogre::FakeSoundSystem::playSound3DControl()
{
  return 0;
}


//======================================================================
// Ogre::FakeSoundSystem::setListener(Ogre::Vector3 const*,Ogre::Vector3 const*,Ogre::Vector3 const*,Ogre::Vector3 const*)
// address: 0x0016B28C   size: 0x2 (2 bytes)
//======================================================================
void Ogre::FakeSoundSystem::setListener()
{
  ;
}


//======================================================================
// Ogre::FakeSoundSystem::getListenerPos(void)
// address: 0x0016B28E   size: 0xE (14 bytes)
//======================================================================
_DWORD *__fastcall Ogre::FakeSoundSystem::getListenerPos(_DWORD *this, _DWORD *a2)
{
  *this = a2[1];
  *(this + 1) = a2[2];
  *(this + 2) = a2[3];
  return this;
}


//======================================================================
// Ogre::FakeSoundSystem::setGlobalMusicVolume(float)
// address: 0x0016B29C   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::FakeSoundSystem::setGlobalMusicVolume(Ogre::FakeSoundSystem *this, float a2)
{
  ;
}


//======================================================================
// Ogre::FakeSoundSystem::setGlobalSoundVolume(float)
// address: 0x0016B29E   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::FakeSoundSystem::setGlobalSoundVolume(Ogre::FakeSoundSystem *this, float a2)
{
  ;
}


//======================================================================
// Ogre::FakeSoundSystem::update(void)
// address: 0x0016B2A0   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::FakeSoundSystem::update(Ogre::FakeSoundSystem *this)
{
  ;
}


//======================================================================
// Ogre::FakeSoundSystem::setPause(bool)
// address: 0x0016B2A2   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::FakeSoundSystem::setPause(Ogre::FakeSoundSystem *this, bool a2)
{
  ;
}


//======================================================================
// Ogre::FakeSoundSystem::~FakeSoundSystem()
// address: 0x0016B2B4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15FakeSoundSystemD1Ev'
void __fastcall Ogre::FakeSoundSystem::~FakeSoundSystem(Ogre::FakeSoundSystem *this)
{
  *(_DWORD *)this = &off_457168;
  Ogre::Singleton<Ogre::SoundSystem>::ms_Singleton = 0;
}


//======================================================================
// Ogre::FakeSoundSystem::~FakeSoundSystem()
// address: 0x0016B318   size: 0x20 (32 bytes)
//======================================================================
void __fastcall Ogre::FakeSoundSystem::~FakeSoundSystem(Ogre::FakeSoundSystem *this)
{
  *(_DWORD *)this = &off_457168;
  Ogre::Singleton<Ogre::SoundSystem>::ms_Singleton = 0;
  operator delete(this);
}

