// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: `non-virtual_thunk_to'Ogre::DirDecal

//======================================================================
// `non-virtual thunk to'Ogre::DirDecal::ResourceLoaded(Ogre::Resource *,unsigned int)
// address: 0x0018EA70   size: 0x10 (16 bytes)
//======================================================================
Ogre::DirDecal *__fastcall `non-virtual thunk to'Ogre::DirDecal::ResourceLoaded(
        Ogre::DirDecal *this,
        Ogre::Resource *a2,
        Ogre::FixedString *a3)
{
  Ogre::DirDecal *result; // r0

  result = (Ogre::DirDecal *)((char *)this - 252);
  Ogre::DirDecal::ResourceLoaded(result, a2, a3);
  return result;
}


//======================================================================
// `non-virtual thunk to'Ogre::DirDecal::~DirDecal()
// address: 0x0018F228   size: 0x10 (16 bytes)
//======================================================================
void __fastcall `non-virtual thunk to'Ogre::DirDecal::~DirDecal(Ogre::DirDecal *this)
{
  Ogre::DirDecal::~DirDecal((Ogre::DirDecal *)((char *)this - 252));
}


//======================================================================
// `non-virtual thunk to'Ogre::DirDecal::~DirDecal()
// address: 0x0018F250   size: 0x10 (16 bytes)
//======================================================================
void __fastcall `non-virtual thunk to'Ogre::DirDecal::~DirDecal(Ogre::DirDecal *this)
{
  Ogre::DirDecal::~DirDecal((Ogre::DirDecal *)((char *)this - 252));
}

