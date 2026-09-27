// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLPlugin

//======================================================================
// Ogre::OGLPlugin::getName(void)const
// address: 0x0025F4A0   size: 0x6 (6 bytes)
//======================================================================
void *__fastcall Ogre::OGLPlugin::getName(Ogre::OGLPlugin *this)
{
  return &unk_510FCC;
}


//======================================================================
// Ogre::OGLPlugin::initialise(void)
// address: 0x0025F4AC   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::OGLPlugin::initialise(Ogre::OGLPlugin *this)
{
  ;
}


//======================================================================
// Ogre::OGLPlugin::shutdown(void)
// address: 0x0025F4AE   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::OGLPlugin::shutdown(Ogre::OGLPlugin *this)
{
  ;
}


//======================================================================
// Ogre::OGLPlugin::~OGLPlugin()
// address: 0x0025F4B0   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9OGLPluginD1Ev'
void __fastcall Ogre::OGLPlugin::~OGLPlugin(Ogre::OGLPlugin *this)
{
  *(_DWORD *)this = &off_45A128;
}


//======================================================================
// Ogre::OGLPlugin::~OGLPlugin()
// address: 0x0025F4DC   size: 0x16 (22 bytes)
//======================================================================
void __fastcall Ogre::OGLPlugin::~OGLPlugin(Ogre::OGLPlugin *this)
{
  *(_DWORD *)this = &off_45A128;
  operator delete(this);
}


//======================================================================
// Ogre::OGLPlugin::install(void)
// address: 0x0025F4F8   size: 0x16 (22 bytes)
//======================================================================
int __fastcall Ogre::OGLPlugin::install(Ogre::OGLPlugin *this)
{
  Ogre::OGLRenderSystem *v2; // r4
  int result; // r0

  v2 = (Ogre::OGLRenderSystem *)operator new(0x114u);
  result = Ogre::OGLRenderSystem::OGLRenderSystem(v2);
  *((_DWORD *)this + 1) = v2;
  return result;
}


//======================================================================
// Ogre::OGLPlugin::uninstall(void)
// address: 0x0025F50E   size: 0x16 (22 bytes)
//======================================================================
void __fastcall Ogre::OGLPlugin::uninstall(Ogre::OGLPlugin *this)
{
  void *v1; // r4

  v1 = *((void **)this + 1);
  if ( v1 != nullptr )
  {
    Ogre::OGLRenderSystem::~OGLRenderSystem(*((Ogre::OGLRenderSystem **)this + 1));
    operator delete(v1);
  }
}


//======================================================================
// Ogre::OGLPlugin::OGLPlugin(void)
// address: 0x0025F524   size: 0x10 (16 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9OGLPluginC2Ev'
_DWORD *__fastcall Ogre::OGLPlugin::OGLPlugin(_DWORD *this)
{
  *this = &off_45A160;
  *(this + 1) = 0;
  return this;
}

