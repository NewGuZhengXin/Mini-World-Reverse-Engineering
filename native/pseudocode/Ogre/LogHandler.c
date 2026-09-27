// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::LogHandler

//======================================================================
// Ogre::LogHandler::~LogHandler()
// address: 0x0016A380   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10LogHandlerD1Ev'
void __fastcall Ogre::LogHandler::~LogHandler(Ogre::LogHandler *this)
{
  *(_DWORD *)this = &off_457098;
}


//======================================================================
// Ogre::LogHandler::~LogHandler()
// address: 0x0016A390   size: 0x16 (22 bytes)
//======================================================================
void __fastcall Ogre::LogHandler::~LogHandler(Ogre::LogHandler *this)
{
  *(_DWORD *)this = &off_457098;
  operator delete(this);
}

