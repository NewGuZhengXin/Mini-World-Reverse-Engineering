// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ICharacterCoding

//======================================================================
// Ogre::ICharacterCoding::~ICharacterCoding()
// address: 0x0014DC84   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16ICharacterCodingD1Ev'
void __fastcall Ogre::ICharacterCoding::~ICharacterCoding(Ogre::ICharacterCoding *this)
{
  *(_DWORD *)this = &off_456010;
}


//======================================================================
// Ogre::ICharacterCoding::~ICharacterCoding()
// address: 0x0014DD40   size: 0x16 (22 bytes)
//======================================================================
void __fastcall Ogre::ICharacterCoding::~ICharacterCoding(Ogre::ICharacterCoding *this)
{
  *(_DWORD *)this = &off_456010;
  operator delete(this);
}

