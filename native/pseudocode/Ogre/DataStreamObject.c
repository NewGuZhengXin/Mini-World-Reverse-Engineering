// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::DataStreamObject

//======================================================================
// Ogre::DataStreamObject::~DataStreamObject()
// address: 0x00149B94   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16DataStreamObjectD1Ev'
void __fastcall Ogre::DataStreamObject::~DataStreamObject(Ogre::DataStreamObject *this)
{
  *(_DWORD *)this = &off_455D00;
}


//======================================================================
// Ogre::DataStreamObject::~DataStreamObject()
// address: 0x00149C40   size: 0x16 (22 bytes)
//======================================================================
void __fastcall Ogre::DataStreamObject::~DataStreamObject(Ogre::DataStreamObject *this)
{
  *(_DWORD *)this = &off_455D00;
  operator delete(this);
}

