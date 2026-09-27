// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::PackageDataStreamObject

//======================================================================
// Ogre::PackageDataStreamObject::buffer(void)
// address: 0x00149BC0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::PackageDataStreamObject::buffer(Ogre::PackageDataStreamObject *this)
{
  return *((_DWORD *)this + 4);
}


//======================================================================
// Ogre::PackageDataStreamObject::buffer(unsigned int)
// address: 0x00149BC4   size: 0x10 (16 bytes)
//======================================================================
int __fastcall Ogre::PackageDataStreamObject::buffer(Ogre::PackageDataStreamObject *this, unsigned int a2)
{
  if ( a2 > *((_DWORD *)this + 2) )
    return 0;
  else
    return *((_DWORD *)this + 4);
}


//======================================================================
// Ogre::PackageDataStreamObject::length(void)
// address: 0x00149BD4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::PackageDataStreamObject::length(Ogre::PackageDataStreamObject *this)
{
  return *((_DWORD *)this + 3);
}


//======================================================================
// Ogre::PackageDataStreamObject::size(void)
// address: 0x00149BD8   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::PackageDataStreamObject::size(Ogre::PackageDataStreamObject *this)
{
  return *((_DWORD *)this + 2);
}


//======================================================================
// Ogre::PackageDataStreamObject::shift(unsigned int)
// address: 0x00149BDC   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::PackageDataStreamObject::shift(int this, unsigned int a2)
{
  *(_DWORD *)(this + 12) = a2;
  return this;
}


//======================================================================
// Ogre::PackageDataStreamObject::~PackageDataStreamObject()
// address: 0x00149C80   size: 0x22 (34 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre23PackageDataStreamObjectD1Ev'
void __fastcall Ogre::PackageDataStreamObject::~PackageDataStreamObject(Ogre **this, void *a2)
{
  *this = (Ogre *)&off_455D88;
  Ogre::release(*(this + 4), a2);
  *this = (Ogre *)&off_455D00;
}


//======================================================================
// Ogre::PackageDataStreamObject::~PackageDataStreamObject()
// address: 0x00149CAC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::PackageDataStreamObject::~PackageDataStreamObject(Ogre **this, void *a2)
{
  Ogre::PackageDataStreamObject::~PackageDataStreamObject(this, a2);
  operator delete(this);
}


//======================================================================
// Ogre::PackageDataStreamObject::PackageDataStreamObject(Ogre::FilePackage *,unsigned int)
// address: 0x00149D2C   size: 0x24 (36 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre23PackageDataStreamObjectC1EPNS_11FilePackageEj'
_DWORD *__fastcall Ogre::PackageDataStreamObject::PackageDataStreamObject(_DWORD *a1, unsigned int a2, Ogre *this)
{
  a1[1] = a2;
  *a1 = &off_455D88;
  a1[4] = Ogre::alloc(this, a2);
  a1[2] = this;
  a1[3] = 0;
  return a1;
}


//======================================================================
// Ogre::PackageDataStreamObject::release(void)
// address: 0x0014A184   size: 0xC (12 bytes)
//======================================================================
void __fastcall Ogre::PackageDataStreamObject::release(Ogre::FilePackage **this)
{
  Ogre::FilePackage::freeBufferObject(*(this + 1), (Ogre::PackageDataStreamObject *)this);
}

