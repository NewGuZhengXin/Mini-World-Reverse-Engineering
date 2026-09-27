// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: `non-virtual_thunk_to'Ogre::ModelMotion

//======================================================================
// `non-virtual thunk to'Ogre::ModelMotion::~ModelMotion()
// address: 0x0017D388   size: 0x10 (16 bytes)
//======================================================================
void __fastcall `non-virtual thunk to'Ogre::ModelMotion::~ModelMotion(Ogre::ModelMotion *this)
{
  Ogre::ModelMotion::~ModelMotion((Ogre::ModelMotion *)((char *)this - 8));
}


//======================================================================
// `non-virtual thunk to'Ogre::ModelMotion::~ModelMotion()
// address: 0x0017D3B0   size: 0x10 (16 bytes)
//======================================================================
void __fastcall `non-virtual thunk to'Ogre::ModelMotion::~ModelMotion(Ogre::ModelMotion *this)
{
  Ogre::ModelMotion::~ModelMotion((Ogre::ModelMotion *)((char *)this - 8));
}


//======================================================================
// `non-virtual thunk to'Ogre::ModelMotion::ResourceLoaded(Ogre::Resource *,unsigned int)
// address: 0x0017DC64   size: 0x10 (16 bytes)
//======================================================================
int __fastcall `non-virtual thunk to'Ogre::ModelMotion::ResourceLoaded(__int64 this, int a2)
{
  LODWORD(this) = this - 8;
  return Ogre::ModelMotion::ResourceLoaded(this, a2);
}

