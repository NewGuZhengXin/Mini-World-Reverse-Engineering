// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Codec::CodecData

//======================================================================
// Ogre::Codec::CodecData::~CodecData()
// address: 0x00150454   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre5Codec9CodecDataD1Ev'
void __fastcall Ogre::Codec::CodecData::~CodecData(Ogre::Codec::CodecData *this)
{
  *(_DWORD *)this = &off_456258;
}


//======================================================================
// Ogre::Codec::CodecData::~CodecData()
// address: 0x00150474   size: 0x16 (22 bytes)
//======================================================================
void __fastcall Ogre::Codec::CodecData::~CodecData(Ogre::Codec::CodecData *this)
{
  *(_DWORD *)this = &off_456258;
  operator delete(this);
}


//======================================================================
// Ogre::Codec::CodecData::dataType(void)const
// address: 0x001504AC   size: 0x12 (18 bytes)
//======================================================================
Ogre::Codec::CodecData *__fastcall Ogre::Codec::CodecData::dataType(Ogre::Codec::CodecData *this)
{
  sub_3BF0BC((int)this, "CodecData");
  return this;
}

