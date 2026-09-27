// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::IFontGlyphMap

//======================================================================
// Ogre::IFontGlyphMap::~IFontGlyphMap()
// address: 0x0014DCD4   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13IFontGlyphMapD1Ev'
void __fastcall Ogre::IFontGlyphMap::~IFontGlyphMap(Ogre::IFontGlyphMap *this)
{
  *(_DWORD *)this = &off_456040;
}


//======================================================================
// Ogre::IFontGlyphMap::~IFontGlyphMap()
// address: 0x0014DD5C   size: 0x16 (22 bytes)
//======================================================================
void __fastcall Ogre::IFontGlyphMap::~IFontGlyphMap(Ogre::IFontGlyphMap *this)
{
  *(_DWORD *)this = &off_456040;
  operator delete(this);
}

