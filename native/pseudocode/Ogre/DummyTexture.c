// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::DummyTexture

//======================================================================
// Ogre::DummyTexture::getRTTI(void)const
// address: 0x0019AA2C   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::DummyTexture::getRTTI(Ogre::DummyTexture *this)
{
  return &Ogre::DummyTexture::m_RTTI;
}


//======================================================================
// Ogre::DummyTexture::getDesc(Ogre::TextureDesc &)
// address: 0x0019AA38   size: 0x2 (2 bytes)
//======================================================================
void Ogre::DummyTexture::getDesc()
{
  ;
}


//======================================================================
// Ogre::DummyTexture::getHardwareTexture(void)
// address: 0x0019AA3A   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::DummyTexture::getHardwareTexture(Ogre::DummyTexture *this)
{
  return 0;
}


//======================================================================
// Ogre::DummyTexture::lock(unsigned int,unsigned int,bool,Ogre::LockResult &)
// address: 0x0019AA3E   size: 0x4 (4 bytes)
//======================================================================
int Ogre::DummyTexture::lock()
{
  return 0;
}


//======================================================================
// Ogre::DummyTexture::unlock(unsigned int,unsigned int)
// address: 0x0019AA42   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::DummyTexture::unlock(Ogre::DummyTexture *this, unsigned int a2, unsigned int a3)
{
  ;
}


//======================================================================
// Ogre::DummyTexture::~DummyTexture()
// address: 0x0019AB68   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12DummyTextureD1Ev'
void __fastcall Ogre::DummyTexture::~DummyTexture(Ogre::FixedString **this, void *a2)
{
  *this = (Ogre::FixedString *)&off_4589A0;
  Ogre::Texture::~Texture(this, a2);
}


//======================================================================
// Ogre::DummyTexture::~DummyTexture()
// address: 0x0019AB84   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::DummyTexture::~DummyTexture(Ogre::FixedString **this, void *a2)
{
  Ogre::DummyTexture::~DummyTexture(this, a2);
  operator delete(this);
}


//======================================================================
// Ogre::DummyTexture::newObject(void)
// address: 0x0019AC40   size: 0x1E (30 bytes)
//======================================================================
_DWORD *__fastcall Ogre::DummyTexture::newObject(Ogre::DummyTexture *this)
{
  _DWORD *result; // r0

  result = (_DWORD *)operator new(0x10u);
  result[1] = 1;
  result[2] = 0;
  result[3] = 0;
  *result = &off_4589A0;
  return result;
}

