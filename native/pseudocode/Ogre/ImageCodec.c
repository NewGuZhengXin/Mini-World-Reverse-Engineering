// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ImageCodec

//======================================================================
// Ogre::ImageCodec::getDataType(void)const
// address: 0x00199DC4   size: 0x12 (18 bytes)
//======================================================================
Ogre::ImageCodec *__fastcall Ogre::ImageCodec::getDataType(Ogre::ImageCodec *this)
{
  sub_3BF0BC((int)this, "ImageData");
  return this;
}


//======================================================================
// Ogre::ImageCodec::~ImageCodec()
// address: 0x00199DDC   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10ImageCodecD1Ev'
void __fastcall Ogre::ImageCodec::~ImageCodec(Ogre::ImageCodec *this)
{
  *(_DWORD *)this = &off_458930;
  Ogre::Codec::~Codec(this);
}


//======================================================================
// Ogre::ImageCodec::~ImageCodec()
// address: 0x00199DF8   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::ImageCodec::~ImageCodec(Ogre::ImageCodec *this)
{
  Ogre::ImageCodec::~ImageCodec(this);
  operator delete(this);
}

