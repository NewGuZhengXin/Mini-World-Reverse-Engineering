// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::DataStreamHandle

//======================================================================
// Ogre::DataStreamHandle::~DataStreamHandle()
// address: 0x00170394   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16DataStreamHandleD1Ev'
void __fastcall Ogre::DataStreamHandle::~DataStreamHandle(Ogre::DataStreamHandle *this)
{
  *(_DWORD *)this = &off_4573F0;
}


//======================================================================
// Ogre::DataStreamHandle::~DataStreamHandle()
// address: 0x001704D4   size: 0x16 (22 bytes)
//======================================================================
void __fastcall Ogre::DataStreamHandle::~DataStreamHandle(Ogre::DataStreamHandle *this)
{
  *(_DWORD *)this = &off_4573F0;
  operator delete(this);
}

