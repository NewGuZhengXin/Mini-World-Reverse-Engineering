// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Plugin

//======================================================================
// Ogre::Plugin::~Plugin()
// address: 0x0025F490   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre6PluginD1Ev'
void __fastcall Ogre::Plugin::~Plugin(Ogre::Plugin *this)
{
  *(_DWORD *)this = &off_45A128;
}


//======================================================================
// Ogre::Plugin::~Plugin()
// address: 0x0025F4C0   size: 0x16 (22 bytes)
//======================================================================
void __fastcall Ogre::Plugin::~Plugin(Ogre::Plugin *this)
{
  *(_DWORD *)this = &off_45A128;
  operator delete(this);
}

