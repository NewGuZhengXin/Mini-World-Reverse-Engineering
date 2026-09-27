// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::TextureRenderTarget

//======================================================================
// Ogre::TextureRenderTarget::getRTTI(void)const
// address: 0x0025FE84   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::TextureRenderTarget::getRTTI(Ogre::TextureRenderTarget *this)
{
  return &Ogre::TextureRenderTarget::m_RTTI;
}


//======================================================================
// Ogre::TextureRenderTarget::~TextureRenderTarget()
// address: 0x0025FE90   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre19TextureRenderTargetD1Ev'
void __fastcall Ogre::TextureRenderTarget::~TextureRenderTarget(Ogre::TextureRenderTarget *this)
{
  *(_DWORD *)this = &off_4559C0;
}


//======================================================================
// Ogre::TextureRenderTarget::~TextureRenderTarget()
// address: 0x0025FEBC   size: 0x16 (22 bytes)
//======================================================================
void __fastcall Ogre::TextureRenderTarget::~TextureRenderTarget(Ogre::TextureRenderTarget *this)
{
  *(_DWORD *)this = &off_4559C0;
  operator delete(this);
}

