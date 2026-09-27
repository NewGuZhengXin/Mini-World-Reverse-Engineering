// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Texture

//======================================================================
// Ogre::Texture::getRTTI(void)const
// address: 0x00156314   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::Texture::getRTTI(Ogre::Texture *this)
{
  return &Ogre::Texture::m_RTTI;
}


//======================================================================
// Ogre::Texture::~Texture()
// address: 0x00156494   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre7TextureD1Ev'
void __fastcall Ogre::Texture::~Texture(Ogre::FixedString **this, void *a2)
{
  *this = (Ogre::FixedString *)&off_456548;
  Ogre::Resource::~Resource(this, a2);
}


//======================================================================
// Ogre::Texture::~Texture()
// address: 0x001564B0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::Texture::~Texture(Ogre::FixedString **this, void *a2)
{
  Ogre::Texture::~Texture(this, a2);
  operator delete(this);
}

