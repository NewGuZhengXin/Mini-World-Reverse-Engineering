// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ConsoleLogHandler

//======================================================================
// Ogre::ConsoleLogHandler::~ConsoleLogHandler()
// address: 0x00192364   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre17ConsoleLogHandlerD1Ev'
void __fastcall Ogre::ConsoleLogHandler::~ConsoleLogHandler(Ogre::ConsoleLogHandler *this)
{
  *(_DWORD *)this = &off_457098;
}


//======================================================================
// Ogre::ConsoleLogHandler::~ConsoleLogHandler()
// address: 0x00192374   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::ConsoleLogHandler::~ConsoleLogHandler(Ogre::ConsoleLogHandler *this)
{
  Ogre::ConsoleLogHandler::~ConsoleLogHandler(this);
  operator delete(this);
}


//======================================================================
// Ogre::ConsoleLogHandler::Handle(char const*,int,unsigned int,char const*)
// address: 0x00192388   size: 0x2C (44 bytes)
//======================================================================
int __fastcall Ogre::ConsoleLogHandler::Handle(
        Ogre::ConsoleLogHandler *this,
        const char *a2,
        int a3,
        unsigned int a4,
        const char *a5)
{
  int v5; // r0

  if ( a4 == 4 )
  {
    v5 = 5;
  }
  else
  {
    v5 = 7;
    if ( a4 != 8 )
      v5 = 4;
  }
  j___android_log_print(v5, "appplay.lib", "%s(%d): %s", a2, a3, a5);
  return 1;
}


//======================================================================
// Ogre::ConsoleLogHandler::ConsoleLogHandler(unsigned int)
// address: 0x001923BC   size: 0xE (14 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre17ConsoleLogHandlerC2Ej'
_DWORD *__fastcall Ogre::ConsoleLogHandler::ConsoleLogHandler(_DWORD *this, unsigned int a2)
{
  *(this + 1) = a2;
  *this = &off_458468;
  return this;
}

