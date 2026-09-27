// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::BaseKeyFrameArray

//======================================================================
// Ogre::BaseKeyFrameArray::~BaseKeyFrameArray()
// address: 0x0013FB78   size: 0x26 (38 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre17BaseKeyFrameArrayD1Ev'
void __fastcall Ogre::BaseKeyFrameArray::~BaseKeyFrameArray(Ogre::BaseKeyFrameArray *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_4559E8;
  v2 = *((void **)this + 2);
  if ( v2 != nullptr )
    operator delete(v2);
  *(_DWORD *)this = &off_4559C0;
}


//======================================================================
// Ogre::BaseKeyFrameArray::~BaseKeyFrameArray()
// address: 0x0013FBA8   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::BaseKeyFrameArray::~BaseKeyFrameArray(Ogre::BaseKeyFrameArray *this)
{
  Ogre::BaseKeyFrameArray::~BaseKeyFrameArray(this);
  operator delete(this);
}


//======================================================================
// Ogre::BaseKeyFrameArray::_serialize(Ogre::Archive &,int)
// address: 0x001413EC   size: 0x10 (16 bytes)
//======================================================================
int __fastcall Ogre::BaseKeyFrameArray::_serialize(Ogre::BaseKeyFrameArray *this, Ogre::Archive *a2, int a3)
{
  return Ogre::Archive::serializeRawArray<Ogre::BaseKeyFrameArray::AnimRange>(
           (int)a2,
           (unsigned int)this + 8,
           a3,
           (int)this);
}

