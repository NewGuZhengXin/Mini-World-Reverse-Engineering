// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::DataStreamShell

//======================================================================
// Ogre::DataStreamShell::getValue(Ogre::DataStream *&)
// address: 0x001703FA   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::DataStreamShell::getValue(Ogre::DataStreamShell *this, Ogre::DataStream **a2)
{
  *a2 = *((Ogre::DataStream **)this + 1);
  return 1;
}


//======================================================================
// Ogre::DataStreamShell::~DataStreamShell()
// address: 0x001704C4   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15DataStreamShellD1Ev'
void __fastcall Ogre::DataStreamShell::~DataStreamShell(Ogre::DataStreamShell *this)
{
  *(_DWORD *)this = &off_4573F0;
}


//======================================================================
// Ogre::DataStreamShell::~DataStreamShell()
// address: 0x001704F0   size: 0x16 (22 bytes)
//======================================================================
void __fastcall Ogre::DataStreamShell::~DataStreamShell(Ogre::DataStreamShell *this)
{
  *(_DWORD *)this = &off_4573F0;
  operator delete(this);
}


//======================================================================
// Ogre::DataStreamShell::DataStreamShell(Ogre::DataStream *)
// address: 0x00170F08   size: 0xE (14 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15DataStreamShellC1EPNS_10DataStreamE'
_DWORD *__fastcall Ogre::DataStreamShell::DataStreamShell(_DWORD *this, Ogre::DataStream *a2)
{
  *(this + 1) = a2;
  *this = &off_4575B8;
  return this;
}

