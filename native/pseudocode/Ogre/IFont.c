// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::IFont

//======================================================================
// Ogre::IFont::~IFont()
// address: 0x0014DC74   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre5IFontD1Ev'
void __fastcall Ogre::IFont::~IFont(Ogre::IFont *this)
{
  *(_DWORD *)this = &off_455FC8;
}


//======================================================================
// Ogre::IFont::~IFont()
// address: 0x0014DD24   size: 0x16 (22 bytes)
//======================================================================
void __fastcall Ogre::IFont::~IFont(Ogre::IFont *this)
{
  *(_DWORD *)this = &off_455FC8;
  operator delete(this);
}

