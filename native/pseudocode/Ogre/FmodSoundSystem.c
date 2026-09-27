// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::FmodSoundSystem

//======================================================================
// Ogre::FmodSoundSystem::getListenerPos(void)
// address: 0x0016B2A4   size: 0xE (14 bytes)
//======================================================================
_DWORD *__fastcall Ogre::FmodSoundSystem::getListenerPos(_DWORD *this, _DWORD *a2)
{
  *this = a2[1];
  *(this + 1) = a2[2];
  *(this + 2) = a2[3];
  return this;
}


//======================================================================
// Ogre::FmodSoundSystem::setMusicVolume(unsigned int,float)
// address: 0x0016B39A   size: 0x32 (50 bytes)
//======================================================================
FMOD::Channel *__fastcall Ogre::FmodSoundSystem::setMusicVolume(Ogre::FmodSoundSystem *this, unsigned int a2, float a3)
{
  char *v3; // r3
  FMOD::Channel *v5; // r0
  FMOD::Channel *result; // r0

  v3 = (char *)this + 540 * a2;
  v5 = *((FMOD::Channel **)v3 + 13);
  *((float *)v3 + 19) = a3;
  if ( v5 != nullptr )
    FMOD::Channel::setVolume(v5, a3);
  result = *((FMOD::Channel **)this + 135 * a2 + 14);
  if ( result != nullptr )
    return (FMOD::Channel *)FMOD::Channel::setVolume(result, a3);
  return result;
}


//======================================================================
// Ogre::FmodSoundSystem::setListener(Ogre::Vector3 const*,Ogre::Vector3 const*,Ogre::Vector3 const*,Ogre::Vector3 const*)
// address: 0x0016B3FA   size: 0x26 (38 bytes)
//======================================================================
unsigned __int64 __fastcall Ogre::FmodSoundSystem::setListener(
        Ogre::FmodSoundSystem *this,
        const Ogre::Vector3 *a2,
        const Ogre::Vector3 *a3,
        const Ogre::Vector3 *a4,
        const Ogre::Vector3 *a5)
{
  unsigned __int64 v6; // [sp+0h] [bp-Ch]

  *((_DWORD *)this + 1) = *(_DWORD *)a2;
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 2);
  v6 = __PAIR64__((unsigned int)a5, (unsigned int)a4);
  FMOD::System::set3DListenerAttributes();
  return v6;
}


//======================================================================
// Ogre::FmodSoundSystem::setGlobalMusicVolume(float)
// address: 0x0016B420   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::FmodSoundSystem::setGlobalMusicVolume(FMOD::ChannelGroup **this, float a2)
{
  return FMOD::ChannelGroup::setVolume(*(this + 5), a2);
}


//======================================================================
// Ogre::FmodSoundSystem::setGlobalSoundVolume(float)
// address: 0x0016B42A   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::FmodSoundSystem::setGlobalSoundVolume(FMOD::ChannelGroup **this, float a2)
{
  return FMOD::ChannelGroup::setVolume(*(this + 6), a2);
}


//======================================================================
// Ogre::FmodSoundSystem::update(void)
// address: 0x0016B434   size: 0xD2 (210 bytes)
//======================================================================
int __fastcall Ogre::FmodSoundSystem::update(FMOD::System **this)
{
  unsigned int *v2; // r4
  unsigned int v3; // r3
  unsigned int v4; // r3
  float v5; // r7
  FMOD::Channel *v6; // r0
  int result; // r0
  int i; // [sp+4h] [bp-10h]
  FMOD::System *SystemTick; // [sp+8h] [bp-Ch]
  unsigned int v10; // [sp+Ch] [bp-8h]

  SystemTick = (FMOD::System *)Ogre::Timer::getSystemTick((Ogre::Timer *)this);
  v2 = (unsigned int *)(this + 16);
  v10 = SystemTick - *(this + 553);
  for ( i = 4; i != 0; --i )
  {
    v3 = *v2;
    if ( *v2 != 0 )
    {
      if ( v3 <= v10 )
        v4 = 0;
      else
        v4 = v3 - v10;
      *v2 = v4;
      v5 = (float)*v2 / (float)*(v2 - 1);
      if ( *(v2 - 3) != 0 )
        FMOD::Channel::setVolume(
          (FMOD::Channel *)*(v2 - 3),
          (float)((float)*v2 / (float)*(v2 - 1)) * *((float *)v2 + 1));
      if ( *(v2 - 2) != 0 )
        FMOD::Channel::setVolume((FMOD::Channel *)*(v2 - 2), (float)(1.0 - v5) * *((float *)v2 + 2));
    }
    if ( *(v2 - 1) != 0 && *v2 == 0 )
    {
      v6 = (FMOD::Channel *)*(v2 - 3);
      if ( v6 != nullptr )
        FMOD::Channel::stop(v6);
      *(v2 - 3) = *(v2 - 2);
      v2[1] = v2[2];
      *(v2 - 2) = 0;
      *(v2 - 1) = 0;
    }
    v2 += 135;
  }
  result = FMOD::System::update(*(this + 4));
  *(this + 553) = SystemTick;
  return result;
}


//======================================================================
// Ogre::FmodSoundSystem::setPause(bool)
// address: 0x0016B5BC   size: 0x16 (22 bytes)
//======================================================================
int __fastcall Ogre::FmodSoundSystem::setPause(FMOD::ChannelGroup **this, bool a2)
{
  FMOD::ChannelGroup::setPaused(*(this + 6), a2);
  return FMOD::ChannelGroup::setPaused(*(this + 5), a2);
}


//======================================================================
// Ogre::FmodSoundSystem::FmodSoundSystem(void)
// address: 0x0016B63C   size: 0x6A (106 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15FmodSoundSystemC1Ev'
Ogre::FmodSoundSystem *__fastcall Ogre::FmodSoundSystem::FmodSoundSystem(Ogre::FmodSoundSystem *this)
{
  char *v1; // r5
  Ogre::FmodSoundSystem *v3; // r3
  int i; // r1

  v1 = (char *)this + 32;
  Ogre::Singleton<Ogre::SoundSystem>::ms_Singleton = (int)this;
  *(_DWORD *)this = &off_457250;
  j_memset((char *)this + 32, 0, 0x10u);
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 10) = v1;
  *((_DWORD *)this + 11) = v1;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  v3 = this;
  for ( i = 4; i != 0; --i )
  {
    *((_DWORD *)v3 + 13) = 0;
    *((_DWORD *)v3 + 14) = 0;
    *((_DWORD *)v3 + 15) = 0;
    *((_DWORD *)v3 + 16) = 0;
    *((_DWORD *)v3 + 19) = 1065353216;
    *((_BYTE *)v3 + 336) = 0;
    *((_DWORD *)v3 + 18) = 1065353216;
    *((_BYTE *)v3 + 80) = 0;
    *((_DWORD *)v3 + 17) = 1065353216;
    v3 = (Ogre::FmodSoundSystem *)((char *)v3 + 540);
  }
  *((_DWORD *)this + 553) = 0;
  return this;
}


//======================================================================
// Ogre::FmodSoundSystem::Init(Ogre::SoundSystemInitInfo const&)
// address: 0x0016B6B4   size: 0x176 (374 bytes)
//======================================================================
int __fastcall Ogre::FmodSoundSystem::Init(FMOD::System **a1, int a2)
{
  unsigned int v4; // r3
  const char *DriverCaps; // r7
  char *v6; // r0
  unsigned int v7; // r3
  const char *Version; // r5
  char *v9; // r0
  unsigned int v10; // r3
  unsigned int v11; // r3
  unsigned int v12; // r3
  unsigned int v13; // r3
  unsigned int v15; // r3
  const char *v16; // r1
  unsigned int v17[2]; // [sp+8h] [bp-14h] BYREF
  int v18; // [sp+10h] [bp-Ch]
  _DWORD v19[2]; // [sp+14h] [bp-8h] BYREF

  v17[1] = 2;
  DriverCaps = (const char *)j_FMOD_System_Create();
  if ( DriverCaps != nullptr )
  {
    a1[4] = nullptr;
    Ogre::LogSetCurParam(
      (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreSoundSystemFMod.cpp",
      (const char *)&dword_78 + 2,
      4,
      v4);
    v6 = "FMOD::System_Create failed:%d";
LABEL_14:
    Ogre::LogMessage((Ogre *)v6, DriverCaps);
    return 0;
  }
  Version = (const char *)FMOD::System::getVersion(a1[4], v17);
  if ( Version != nullptr )
  {
    Ogre::LogSetCurParam(
      (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreSoundSystemFMod.cpp",
      (const char *)&dword_80 + 1,
      4,
      v7);
    v9 = "FMOD::getVersion failed:%d";
LABEL_17:
    Ogre::LogMessage((Ogre *)v9, Version);
    return 0;
  }
  if ( v17[0] <= 0x44447 )
  {
    Ogre::LogSetCurParam(
      (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreSoundSystemFMod.cpp",
      (const char *)&dword_84 + 3,
      4,
      0x44447u);
    Ogre::LogMessage((Ogre *)"Fmod version lower, expect %d, actual %d", stru_44448, v17[0]);
    return 0;
  }
  DriverCaps = (const char *)FMOD::System::getDriverCaps();
  if ( DriverCaps != nullptr )
  {
    Ogre::LogSetCurParam(
      (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreSoundSystemFMod.cpp",
      (const char *)&dword_8C + 2,
      4,
      v10);
    v6 = "FMOD::getDriverCaps failed:%d";
    goto LABEL_14;
  }
  Version = (const char *)FMOD::System::setSpeakerMode();
  if ( Version != nullptr )
  {
    Ogre::LogSetCurParam(
      (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreSoundSystemFMod.cpp",
      (const char *)&dword_94 + 1,
      4,
      v11);
    v9 = "FMOD::setSpeakerMode failed:%d";
    goto LABEL_17;
  }
  if ( (v18 & 2) != 0 )
  {
    DriverCaps = (const char *)FMOD::System::setDSPBufferSize(a1[4], 0x400u, 10);
    if ( DriverCaps != nullptr )
    {
      Ogre::LogSetCurParam(
        (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreSoundSystemFMod.cpp",
        (const char *)off_9C + 2,
        4,
        v12);
      v6 = "FMOD::setDSPBufferSize failed:%d";
      goto LABEL_14;
    }
  }
  Version = (const char *)FMOD::System::init(a1[4], *(_DWORD *)a2, 0, nullptr);
  if ( Version != nullptr )
  {
    Ogre::LogSetCurParam(
      (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreSoundSystemFMod.cpp",
      (const char *)&dword_A4 + 2,
      4,
      v13);
    v9 = "FmodSystem::init failed: %d";
    goto LABEL_17;
  }
  FMOD::System::set3DSettings(a1[4], *(float *)(a2 + 4), *(float *)(a2 + 8), *(float *)(a2 + 12));
  FMOD::System::createChannelGroup(a1[4], nullptr, a1 + 5);
  FMOD::System::createChannelGroup(a1[4], nullptr, a1 + 6);
  v15 = *(_DWORD *)(dword_4B9300 - 12);
  if ( v15 != 0 )
  {
    sub_3BEB1C(v19, &dword_4B9300);
    (*((void (__fastcall **)(FMOD::System **, _DWORD, _DWORD, int, _DWORD, int))*a1 + 5))(
      a1,
      0,
      v19[0],
      1,
      0,
      1065353216);
    sub_3BDF80(v19);
  }
  Ogre::LogSetCurParam(
    (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreSoundSystemFMod.cpp",
    (const char *)&dword_B4,
    2,
    v15);
  Ogre::LogMessage((Ogre *)"FmodSystem create succeeded", v16);
  return 1;
}


//======================================================================
// Ogre::FmodSoundSystem::Terminate(void)
// address: 0x0016B878   size: 0x16 (22 bytes)
//======================================================================
FMOD::System *__fastcall Ogre::FmodSoundSystem::Terminate(FMOD::System **this)
{
  FMOD::System *result; // r0

  (*((void (__fastcall **)(FMOD::System **))*this + 4))(this);
  result = *(this + 4);
  if ( result != nullptr )
    return (FMOD::System *)FMOD::System::release(result);
  return result;
}


//======================================================================
// Ogre::FmodSoundSystem::cleanMusicChannel(int,bool,bool)
// address: 0x0016B88E   size: 0x36 (54 bytes)
//======================================================================
FMOD::Channel *__fastcall Ogre::FmodSoundSystem::cleanMusicChannel(FMOD::Channel *this, int a2, int a3, int a4)
{
  char *v4; // r4

  v4 = (char *)this + 540 * a2 + 48;
  if ( a3 != 0 )
  {
    this = *((FMOD::Channel **)v4 + 1);
    if ( this != nullptr )
    {
      this = (FMOD::Channel *)FMOD::Channel::stop(this);
      *((_DWORD *)v4 + 1) = 0;
    }
  }
  if ( a4 != 0 )
  {
    this = *((FMOD::Channel **)v4 + 2);
    if ( this != nullptr )
    {
      this = (FMOD::Channel *)FMOD::Channel::stop(this);
      *((_DWORD *)v4 + 2) = 0;
    }
  }
  return this;
}


//======================================================================
// Ogre::FmodSoundSystem::PlayMusicInternal(unsigned int,FMOD::Sound *,bool,unsigned int,float,char const*)
// address: 0x0016B8C4   size: 0x106 (262 bytes)
//======================================================================
char *__fastcall Ogre::FmodSoundSystem::PlayMusicInternal(
        FMOD::ChannelGroup **this,
        int a2,
        FMOD::Sound *a3,
        int a4,
        FMOD::ChannelGroup *a5,
        float a6,
        char *a7)
{
  FMOD::ChannelGroup **v9; // r5
  FMOD::Channel *v11; // r0
  int v12; // r1
  char *v13; // r0
  FMOD::Channel *v14; // r0
  int v15; // r1

  v9 = this + 135 * a2;
  v9[15] = a5;
  v9[16] = a5;
  if ( a5 != nullptr )
  {
    Ogre::FmodSoundSystem::cleanMusicChannel((FMOD::Channel *)this, a2, 0, 1);
    if ( a3 != nullptr )
    {
      FMOD::System::playSound();
      v14 = v9[14];
      *((float *)v9 + 18) = a6;
      FMOD::Channel::setChannelGroup(v14, *(this + 5));
      FMOD::Channel::setVolume(v9[14], 0.0);
      if ( a4 != 0 )
        v15 = -1;
      else
        v15 = 0;
      FMOD::Channel::setLoopCount(v9[14], v15);
      FMOD::Channel::setPaused(*(this + 135 * a2 + 14), false);
    }
    v13 = (char *)(this + 135 * a2 + 84);
  }
  else
  {
    Ogre::FmodSoundSystem::cleanMusicChannel((FMOD::Channel *)this, a2, 1, 1);
    if ( a3 != nullptr )
    {
      FMOD::System::playSound();
      v11 = v9[13];
      *((float *)v9 + 17) = a6;
      FMOD::Channel::setChannelGroup(v11, *(this + 5));
      FMOD::Channel::setVolume(v9[13], a6);
      if ( a4 != 0 )
        v12 = -1;
      else
        v12 = 0;
      FMOD::Channel::setLoopCount(v9[13], v12);
      FMOD::Channel::setPaused(*(this + 135 * a2 + 13), false);
    }
    v13 = (char *)(this + 135 * a2 + 20);
  }
  return j_strncpy(v13, a7, 0x100u);
}


//======================================================================
// Ogre::FmodSoundSystem::ReleaseRes(void)
// address: 0x0016BA50   size: 0x78 (120 bytes)
//======================================================================
void __fastcall Ogre::FmodSoundSystem::ReleaseRes(Ogre::FmodSoundSystem *this)
{
  char *v2; // r5
  int i; // r6
  FMOD::Channel *v4; // r0
  FMOD::Sound ***j; // r5
  FMOD::Sound **v6; // r6

  v2 = (char *)this + 52;
  for ( i = 4; i != 0; --i )
  {
    if ( *(_DWORD *)v2 != 0 )
    {
      FMOD::Channel::stop(*(FMOD::Channel **)v2);
      *(_DWORD *)v2 = 0;
      v2[28] = 0;
    }
    v4 = *((FMOD::Channel **)v2 + 1);
    if ( v4 != nullptr )
    {
      FMOD::Channel::stop(v4);
      *((_DWORD *)v2 + 1) = 0;
      v2[284] = 0;
    }
    v2 += 540;
  }
  for ( j = *((FMOD::Sound ****)this + 10); j != (FMOD::Sound ***)((char *)this + 32); j = (FMOD::Sound ***)sub_391DDC(j) )
  {
    v6 = j[5];
    if ( v6 != nullptr )
    {
      Ogre::FmodSoundResource::~FmodSoundResource(j[5]);
      operator delete(v6);
    }
  }
  std::_Rb_tree<std::string,std::pair<std::string const,Ogre::FmodSoundResource *>,std::_Select1st<std::pair<std::string const,Ogre::FmodSoundResource *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::FmodSoundResource *>>>::_M_erase(
    (int)this + 28,
    *((_DWORD **)this + 9));
  *((_DWORD *)this + 10) = j;
  *((_DWORD *)this + 11) = j;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 12) = 0;
}


//======================================================================
// Ogre::FmodSoundSystem::~FmodSoundSystem()
// address: 0x0016BAC8   size: 0x34 (52 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15FmodSoundSystemD1Ev'
void __fastcall Ogre::FmodSoundSystem::~FmodSoundSystem(FMOD::System **this)
{
  *this = (FMOD::System *)&off_457250;
  Ogre::FmodSoundSystem::Terminate(this);
  std::_Rb_tree<std::string,std::pair<std::string const,Ogre::FmodSoundResource *>,std::_Select1st<std::pair<std::string const,Ogre::FmodSoundResource *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::FmodSoundResource *>>>::_M_erase(
    (int)(this + 7),
    *(this + 9));
  *this = (FMOD::System *)&off_457168;
  Ogre::Singleton<Ogre::SoundSystem>::ms_Singleton = 0;
}


//======================================================================
// Ogre::FmodSoundSystem::~FmodSoundSystem()
// address: 0x0016BB08   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::FmodSoundSystem::~FmodSoundSystem(FMOD::System **this)
{
  Ogre::FmodSoundSystem::~FmodSoundSystem(this);
  operator delete(this);
}


//======================================================================
// Ogre::FmodSoundSystem::GetMusicResource(char const*)
// address: 0x0016BD44   size: 0xFC (252 bytes)
//======================================================================
int __fastcall Ogre::FmodSoundSystem::GetMusicResource(Ogre::FmodSoundSystem *this, char *a2)
{
  Ogre::FmodSoundResource **v4; // r5
  unsigned int v6; // r3
  int v7; // r5
  unsigned int v8; // r3
  _DWORD *v9; // r0
  _DWORD *v10; // r6
  _DWORD v11[35]; // [sp+18h] [bp-8Ch] BYREF

  if ( a2 == nullptr )
    return 0;
  sub_3BF0BC((int)v11, a2);
  v4 = (Ogre::FmodSoundResource **)std::_Rb_tree<std::string,std::pair<std::string const,Ogre::FmodSoundResource *>,std::_Select1st<std::pair<std::string const,Ogre::FmodSoundResource *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::FmodSoundResource *>>>::find((int)this + 28);
  sub_3BDF80(v11);
  if ( v4 != (Ogre::FmodSoundResource **)((char *)this + 32) )
    return Ogre::FmodSoundResource::getFModSound(v4[5]);
  v7 = Ogre::FileManager::openFile((Ogre::FileManager *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton, a2, true);
  if ( v7 != 0 )
  {
    j_memset(v11, 0, 0x88u);
    v11[0] = 136;
    v11[1] = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 48))(v7);
    (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 56))(v7);
    if ( FMOD::System::createSound() != 0 )
    {
      Ogre::LogSetCurParam(
        (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreSoundSystemFMod.cpp",
        (const char *)&stru_1F8.st_size,
        4,
        v8);
      Ogre::LogMessage((Ogre *)"createSound error: %s", a2);
    }
    (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 4))(v7);
  }
  else
  {
    Ogre::LogSetCurParam(
      (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreSoundSystemFMod.cpp",
      (const char *)&stru_1E8.st_other,
      4,
      v6);
    Ogre::LogMessage((Ogre *)"Open sound file failed: %s", a2);
  }
  v9 = (_DWORD *)operator new(0x1Cu);
  *v9 = 0;
  v9[6] = 1;
  v10 = v9;
  sub_3BF0BC((int)v11, a2);
  *std::map<std::string,Ogre::FmodSoundResource *>::operator[]((_DWORD *)this + 7, (int)v11) = v10;
  sub_3BDF80(v11);
  return 0;
}


//======================================================================
// Ogre::FmodSoundSystem::LoadMusicRes(char const*)
// address: 0x0016BE58   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::FmodSoundSystem::LoadMusicRes(Ogre::FmodSoundSystem *this, char *a2)
{
  return Ogre::FmodSoundSystem::GetMusicResource(this, a2);
}


//======================================================================
// Ogre::FmodSoundSystem::playMusic(unsigned int,char const*,bool,unsigned int,float)
// address: 0x0016BE60   size: 0xA0 (160 bytes)
//======================================================================
int __fastcall Ogre::FmodSoundSystem::playMusic(
        Ogre::FmodSoundSystem *this,
        int a2,
        char *a3,
        int a4,
        unsigned int a5,
        float a6)
{
  char *v6; // r7
  int result; // r0
  int MusicResource; // r2

  v6 = (char *)this + 540 * a2 + 48;
  if ( a3 != nullptr )
  {
    sub_3BE508((int)&dword_4B9300, a3);
    if ( j_strcmp(a3, v6 + 32) == 0 )
    {
      Ogre::FmodSoundSystem::cleanMusicChannel(this, a2, 0, 1);
      *((_DWORD *)v6 + 3) = 0;
      *((_DWORD *)v6 + 4) = 0;
      *((float *)v6 + 5) = a6;
      return FMOD::Channel::setVolume(*((FMOD::Channel **)v6 + 1), a6);
    }
    result = j_strcmp(a3, v6 + 288);
    if ( result == 0 )
    {
      *((float *)v6 + 6) = a6;
      return result;
    }
    MusicResource = Ogre::FmodSoundSystem::GetMusicResource(this, a3);
  }
  else
  {
    sub_3BE1FC(&dword_4B9300);
    MusicResource = 0;
  }
  return (*(int (__fastcall **)(Ogre::FmodSoundSystem *, int, int, int, unsigned int, _DWORD, void *))(*(_DWORD *)this + 68))(
           this,
           a2,
           MusicResource,
           a4,
           a5,
           LODWORD(a6),
           &unk_3FB8EA);
}


//======================================================================
// Ogre::FmodSoundSystem::GetSoundResource(char const*,Ogre::FmodSoundSystem::SoundType,bool)
// address: 0x0016BF0C   size: 0x168 (360 bytes)
//======================================================================
int __fastcall Ogre::FmodSoundSystem::GetSoundResource(int a1, char *a2)
{
  int v2; // r0
  Ogre::FmodSoundResource *v3; // r0
  Ogre::FmodSoundResource *v4; // r4
  int v5; // r0
  int v6; // r3
  int v7; // r6
  int v8; // r7
  int v9; // r0
  int v10; // r2
  int FModSound; // r5
  const char *v14; // [sp+20h] [bp-3Ch] BYREF
  char v15[4]; // [sp+24h] [bp-38h] BYREF
  char v16[4]; // [sp+28h] [bp-34h] BYREF
  const char *v17; // [sp+2Ch] [bp-30h] BYREF
  char v18[4]; // [sp+30h] [bp-2Ch] BYREF
  char s[32]; // [sp+34h] [bp-28h] BYREF

  if ( a2 == nullptr )
    return 0;
  sub_3BF0BC((int)&v14, a2);
  v2 = std::_Rb_tree<std::string,std::pair<std::string const,Ogre::FmodSoundResource *>,std::_Select1st<std::pair<std::string const,Ogre::FmodSoundResource *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::FmodSoundResource *>>>::find(a1 + 28);
  if ( v2 == a1 + 32 )
  {
    v3 = (Ogre::FmodSoundResource *)operator new(0x1Cu);
    *((_DWORD *)v3 + 6) = 0;
    v4 = v3;
    v5 = sub_16B50C(*(_DWORD *)(a1 + 16), v14);
    if ( v5 != 0 )
    {
      v6 = *((_DWORD *)v4 + 6);
      *((_DWORD *)v4 + 6) = v6 + 1;
      *((_DWORD *)v4 + v6) = v5;
    }
    FModSound = 0;
    v7 = sub_3BD9F0(&v14, 46, -1);
    if ( v7 != -1 )
    {
      sub_3BED3C(v15, &v14, 0, v7);
      sub_3BED3C(v16, &v14, v7, -1);
      v8 = 1;
      while ( 1 )
      {
        j_sprintf(s, "%d", v8);
        sub_3BEB1C(v18, v15);
        sub_3BE948((int)v18, s);
        sub_3BEB1C(&v17, v18);
        sub_3BE774(&v17, v16);
        sub_3BDF80(v18);
        v9 = sub_16B50C(*(_DWORD *)(a1 + 16), v17);
        if ( v9 == 0 )
          break;
        v10 = *((_DWORD *)v4 + 6);
        *((_DWORD *)v4 + 6) = v10 + 1;
        *((_DWORD *)v4 + v10) = v9;
        if ( v10 == 5 )
          break;
        ++v8;
        sub_3BDF80(&v17);
        if ( v8 == 7 )
          goto LABEL_14;
      }
      sub_3BDF80(&v17);
LABEL_14:
      *std::map<std::string,Ogre::FmodSoundResource *>::operator[]((_DWORD *)(a1 + 28), (int)&v14) = v4;
      FModSound = Ogre::FmodSoundResource::getFModSound(v4);
      sub_3BDF80(v16);
      sub_3BDF80(v15);
    }
  }
  else
  {
    FModSound = Ogre::FmodSoundResource::getFModSound(*(Ogre::FmodSoundResource **)(v2 + 20));
  }
  sub_3BDF80(&v14);
  return FModSound;
}


//======================================================================
// Ogre::FmodSoundSystem::LoadSoundRes(char const*)
// address: 0x0016C084   size: 0xC (12 bytes)
//======================================================================
int __fastcall Ogre::FmodSoundSystem::LoadSoundRes(Ogre::FmodSoundSystem *this, char *a2)
{
  return Ogre::FmodSoundSystem::GetSoundResource((int)this, a2);
}


//======================================================================
// Ogre::FmodSoundSystem::playSound2D(char const*,float)
// address: 0x0016C090   size: 0x4A (74 bytes)
//======================================================================
int __fastcall Ogre::FmodSoundSystem::playSound2D(FMOD::ChannelGroup **this, char *a2, float a3)
{
  int result; // r0
  FMOD::Channel *v6; // [sp+Ch] [bp-8h]

  result = Ogre::FmodSoundSystem::GetSoundResource((int)this, a2);
  if ( result != 0 )
  {
    FMOD::System::playSound();
    FMOD::Channel::setChannelGroup(v6, *(this + 6));
    FMOD::Channel::setVolume(v6, a3);
    FMOD::Channel::setLoopCount(v6, 0);
    return FMOD::Channel::setPaused(v6, false);
  }
  return result;
}


//======================================================================
// Ogre::FmodSoundSystem::playSound3D(char const*,Ogre::SoundCreateInfo3D const&)
// address: 0x0016C0DA   size: 0x86 (134 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> Ogre::FmodSoundSystem::playSound3D(int a1, char *a2, int a3, float a4)
{
  FMOD::Sound *SoundResource; // r6
  FMOD::Channel *v7; // [sp+8h] [bp-8h]
  float v8; // [sp+Ch] [bp-4h] BYREF

  v7 = (FMOD::Channel *)a3;
  v8 = a4;
  SoundResource = (FMOD::Sound *)Ogre::FmodSoundSystem::GetSoundResource(a1, a2);
  if ( SoundResource != nullptr )
  {
    FMOD::System::playSound();
    FMOD::Channel::setChannelGroup(v7, *(FMOD::ChannelGroup **)(a1 + 24));
    FMOD::Channel::setVolume(v7, *(float *)(a3 + 8));
    FMOD::Sound::getDefaults(SoundResource, &v8, nullptr, nullptr, nullptr);
    FMOD::Channel::setFrequency(v7, v8 * *(float *)(a3 + 12));
    FMOD::Channel::setLoopCount(v7, -*(unsigned __int8 *)(a3 + 40));
    FMOD::Channel::set3DMinMaxDistance(v7, *(float *)a3, *(float *)(a3 + 4));
    FMOD::Channel::set3DAttributes();
    FMOD::Channel::setPaused(v7, false);
  }
}


//======================================================================
// Ogre::FmodSoundSystem::playSound2DControl(char const*,float,bool,int)
// address: 0x0016C160   size: 0x6C (108 bytes)
//======================================================================
_DWORD *__fastcall Ogre::FmodSoundSystem::playSound2DControl(
        Ogre::FmodSoundSystem *this,
        char *a2,
        float a3,
        FMOD::Channel *a4,
        int a5)
{
  FMOD::ChannelGroup *v8; // r1
  int v9; // r1
  _DWORD *v10; // r4

  if ( Ogre::FmodSoundSystem::GetSoundResource((int)this, a2) == 0 )
    return nullptr;
  FMOD::System::playSound();
  if ( a5 != 0 )
    v8 = *((FMOD::ChannelGroup **)this + 5);
  else
    v8 = *((FMOD::ChannelGroup **)this + 6);
  FMOD::Channel::setChannelGroup(a4, v8);
  FMOD::Channel::setVolume(a4, a3);
  v9 = (int)a4;
  if ( a4 != nullptr )
    v9 = -1;
  FMOD::Channel::setLoopCount(a4, v9);
  FMOD::Channel::setPaused(a4, false);
  v10 = (_DWORD *)operator new(0xCu);
  Ogre::FmodSound::FmodSound(v10, (int)a4);
  return v10;
}


//======================================================================
// Ogre::FmodSoundSystem::playSound3DControl(char const*,Ogre::SoundCreateInfo3D const&)
// address: 0x0016C1CC   size: 0x7A (122 bytes)
//======================================================================
_DWORD *__fastcall Ogre::FmodSoundSystem::playSound3DControl(int a1, char *a2, int a3)
{
  _DWORD *v5; // r4
  FMOD::Channel *v7; // [sp+Ch] [bp-8h]

  if ( Ogre::FmodSoundSystem::GetSoundResource(a1, a2) == 0 )
    return nullptr;
  FMOD::System::playSound();
  FMOD::Channel::setChannelGroup(v7, *(FMOD::ChannelGroup **)(a1 + 24));
  FMOD::Channel::setVolume(v7, *(float *)(a3 + 8));
  FMOD::Channel::setLoopCount(v7, -*(unsigned __int8 *)(a3 + 40));
  FMOD::Channel::set3DMinMaxDistance(v7, *(float *)a3, *(float *)(a3 + 4));
  FMOD::Channel::set3DAttributes();
  FMOD::Channel::setPaused(v7, false);
  v5 = (_DWORD *)operator new(0xCu);
  Ogre::FmodSound::FmodSound(v5, (int)v7);
  return v5;
}

