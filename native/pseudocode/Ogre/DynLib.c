// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::DynLib

//======================================================================
// Ogre::DynLib::DynLib(std::string const&)
// address: 0x00141960   size: 0x1A (26 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre6DynLibC1ERKSs'
_DWORD *__fastcall Ogre::DynLib::DynLib(_DWORD *a1)
{
  *a1 = &byte_55FB88;
  sub_3BEBBC();
  a1[1] = 0;
  return a1;
}


//======================================================================
// Ogre::DynLib::~DynLib()
// address: 0x00141980   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre6DynLibD1Ev'
void __fastcall Ogre::DynLib::~DynLib(Ogre::DynLib *this)
{
  sub_3BDF80(this);
}


//======================================================================
// Ogre::DynLib::getSymbol(std::string const&)
// address: 0x0014198C   size: 0xC (12 bytes)
//======================================================================
void *__fastcall Ogre::DynLib::getSymbol(int a1, const char **a2)
{
  return j_dlsym(*(void **)(a1 + 4), *a2);
}


//======================================================================
// Ogre::DynLib::dynlibError(void)
// address: 0x00141998   size: 0x16 (22 bytes)
//======================================================================
Ogre::DynLib *__fastcall Ogre::DynLib::dynlibError(Ogre::DynLib *this)
{
  char *v2; // r0

  v2 = j_dlerror();
  sub_3BF0BC((int)this, v2);
  return this;
}


//======================================================================
// Ogre::DynLib::load(void)
// address: 0x001419B0   size: 0x54 (84 bytes)
//======================================================================
const char **__fastcall Ogre::DynLib::load(const char **this, int a2, int a3, unsigned int a4)
{
  const char *v5; // r0
  unsigned int v6; // r3
  const char *v7; // r6
  int v10; // [sp+4h] [bp-4h] BYREF

  Ogre::LogSetCurParam((Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreDynLib.cpp", (const char *)off_3C, 2, a4);
  Ogre::LogMessage((Ogre *)"Loading library: %s", *this);
  v5 = (const char *)j_dlopen(*this, 3);
  *(this + 1) = v5;
  if ( v5 == nullptr )
  {
    Ogre::LogSetCurParam((Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreDynLib.cpp", (const char *)&dword_40 + 2, 8, v6);
    v7 = *this;
    Ogre::DynLib::dynlibError((Ogre::DynLib *)&v10);
    Ogre::LogMessage((Ogre *)"Could not load dynamic library %s .  System Error: %s", v7, v10);
    sub_3BDF80(&v10);
  }
  return this;
}


//======================================================================
// Ogre::DynLib::unload(void)
// address: 0x00141A10   size: 0x50 (80 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> Ogre::DynLib::unload(Ogre::DynLib *this, int a2, int a3, unsigned int a4)
{
  unsigned int v5; // r3
  const char *v6; // r6
  int v7; // [sp+4h] [bp-4h] BYREF

  Ogre::LogSetCurParam((Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreDynLib.cpp", (const char *)&dword_48 + 2, 2, a4);
  Ogre::LogMessage((Ogre *)"Unloading library %s", *(const char **)this);
  if ( j_dlclose(*((void **)this + 1)) != 0 )
  {
    Ogre::LogSetCurParam((Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreDynLib.cpp", (const char *)&dword_4C + 2, 8, v5);
    v6 = *(const char **)this;
    Ogre::DynLib::dynlibError((Ogre::DynLib *)&v7);
    Ogre::LogMessage((Ogre *)"Could not unload dynamic library %s .  System Error: %s", v6, v7);
    sub_3BDF80(&v7);
  }
}

