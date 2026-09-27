// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Application

//======================================================================
// Ogre::Application::~Application()
// address: 0x002F5690   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11ApplicationD1Ev'
void __fastcall Ogre::Application::~Application(Ogre::Application *this)
{
  *(_DWORD *)this = &off_462588;
}


//======================================================================
// Ogre::Application::~Application()
// address: 0x002F56B4   size: 0x16 (22 bytes)
//======================================================================
void __fastcall Ogre::Application::~Application(Ogre::Application *this)
{
  *(_DWORD *)this = &off_462588;
  operator delete(this);
}

