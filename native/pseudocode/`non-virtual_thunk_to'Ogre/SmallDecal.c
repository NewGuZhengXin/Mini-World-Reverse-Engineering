// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: `non-virtual_thunk_to'Ogre::SmallDecal

//======================================================================
// `non-virtual thunk to'Ogre::SmallDecal::~SmallDecal()
// address: 0x00181718   size: 0x10 (16 bytes)
//======================================================================
void __fastcall `non-virtual thunk to'Ogre::SmallDecal::~SmallDecal(Ogre::SmallDecal *this)
{
  Ogre::SmallDecal::~SmallDecal((Ogre::SmallDecal *)((char *)this - 252));
}


//======================================================================
// `non-virtual thunk to'Ogre::SmallDecal::~SmallDecal()
// address: 0x00181740   size: 0x10 (16 bytes)
//======================================================================
void __fastcall `non-virtual thunk to'Ogre::SmallDecal::~SmallDecal(Ogre::SmallDecal *this)
{
  Ogre::SmallDecal::~SmallDecal((Ogre::SmallDecal *)((char *)this - 252));
}


//======================================================================
// `non-virtual thunk to'Ogre::SmallDecal::ResourceLoaded(Ogre::Resource *,unsigned int)
// address: 0x001817AC   size: 0x10 (16 bytes)
//======================================================================
Ogre::SmallDecal *__fastcall `non-virtual thunk to'Ogre::SmallDecal::ResourceLoaded(
        Ogre::SmallDecal *this,
        Ogre::Resource *a2,
        Ogre::FixedString *a3)
{
  Ogre::SmallDecal *result; // r0

  result = (Ogre::SmallDecal *)((char *)this - 252);
  Ogre::SmallDecal::ResourceLoaded(result, a2, a3);
  return result;
}

