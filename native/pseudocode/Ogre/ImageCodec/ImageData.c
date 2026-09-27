// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ImageCodec::ImageData

//======================================================================
// Ogre::ImageCodec::ImageData::~ImageData()
// address: 0x00150464   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10ImageCodec9ImageDataD1Ev'
void __fastcall Ogre::ImageCodec::ImageData::~ImageData(Ogre::ImageCodec::ImageData *this)
{
  *(_DWORD *)this = &off_456258;
}


//======================================================================
// Ogre::ImageCodec::ImageData::~ImageData()
// address: 0x00150490   size: 0x16 (22 bytes)
//======================================================================
void __fastcall Ogre::ImageCodec::ImageData::~ImageData(Ogre::ImageCodec::ImageData *this)
{
  *(_DWORD *)this = &off_456258;
  operator delete(this);
}


//======================================================================
// Ogre::ImageCodec::ImageData::dataType(void)const
// address: 0x001504C4   size: 0x12 (18 bytes)
//======================================================================
Ogre::ImageCodec::ImageData *__fastcall Ogre::ImageCodec::ImageData::dataType(Ogre::ImageCodec::ImageData *this)
{
  sub_3BF0BC((int)this, "ImageData");
  return this;
}

