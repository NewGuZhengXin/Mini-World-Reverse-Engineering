// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::PkgFileStream

//======================================================================
// Ogre::PkgFileStream::write(void const*,unsigned int)
// address: 0x00149BE0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::PkgFileStream::write(Ogre::PkgFileStream *this, const void *a2, unsigned int a3)
{
  return 0;
}


//======================================================================
// Ogre::PkgFileStream::skip(long)
// address: 0x00149BE4   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::PkgFileStream::skip(int this, int a2)
{
  *(_DWORD *)(this + 20) += a2;
  return this;
}


//======================================================================
// Ogre::PkgFileStream::seek(unsigned int)
// address: 0x00149BEC   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::PkgFileStream::seek(int this, unsigned int a2)
{
  *(_DWORD *)(this + 20) = a2;
  return this;
}


//======================================================================
// Ogre::PkgFileStream::tell(void)const
// address: 0x00149BF0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::PkgFileStream::tell(Ogre::PkgFileStream *this)
{
  return *((_DWORD *)this + 5);
}


//======================================================================
// Ogre::PkgFileStream::eof(void)const
// address: 0x00149BF4   size: 0xC (12 bytes)
//======================================================================
bool __fastcall Ogre::PkgFileStream::eof(Ogre::PkgFileStream *this)
{
  return *((_DWORD *)this + 5) >= *((_DWORD *)this + 2);
}


//======================================================================
// Ogre::PkgFileStream::close(void)
// address: 0x00149CBE   size: 0x14 (20 bytes)
//======================================================================
Ogre *__fastcall Ogre::PkgFileStream::close(Ogre::PkgFileStream *this, void *a2)
{
  Ogre *result; // r0

  result = *((Ogre **)this + 6);
  if ( result != nullptr )
  {
    result = (Ogre *)Ogre::release(result, a2);
    *((_DWORD *)this + 6) = 0;
  }
  return result;
}


//======================================================================
// Ogre::PkgFileStream::~PkgFileStream()
// address: 0x00149CD4   size: 0x1C (28 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13PkgFileStreamD1Ev'
void __fastcall Ogre::PkgFileStream::~PkgFileStream(Ogre::PkgFileStream *this, void *a2)
{
  *(_DWORD *)this = &off_455DE8;
  Ogre::PkgFileStream::close(this, a2);
  Ogre::DataStream::~DataStream(this);
}


//======================================================================
// Ogre::PkgFileStream::~PkgFileStream()
// address: 0x00149CF4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::PkgFileStream::~PkgFileStream(Ogre::PkgFileStream *this, void *a2)
{
  Ogre::PkgFileStream::~PkgFileStream(this, a2);
  operator delete(this);
}


//======================================================================
// Ogre::PkgFileStream::PkgFileStream(Ogre::FilePackage *,unsigned int,unsigned int)
// address: 0x00149E34   size: 0x24 (36 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13PkgFileStreamC1EPNS_11FilePackageEjj'
_DWORD *__fastcall Ogre::PkgFileStream::PkgFileStream(_DWORD *result, int a2, int a3, int a4)
{
  result[5] = 0;
  result[6] = 0;
  result[3] = a2;
  result[1] = &byte_55FB88;
  result[4] = a3;
  result[2] = a4;
  *result = &off_455DE8;
  return result;
}


//======================================================================
// Ogre::PkgFileStream::read(void *,unsigned int)
// address: 0x00149E9C   size: 0x14 (20 bytes)
//======================================================================
size_t __fastcall Ogre::PkgFileStream::read(FILE ***this, void *a2, size_t a3)
{
  return Ogre::FilePackage::readFile(*(this + 3), a2, (int)*(this + 5) + (_DWORD)*(this + 4), a3);
}


//======================================================================
// Ogre::PkgFileStream::getMemoryImage(void)
// address: 0x00149EB0   size: 0x22 (34 bytes)
//======================================================================
int __fastcall Ogre::PkgFileStream::getMemoryImage(Ogre::PkgFileStream *this, unsigned int a2)
{
  void *v3; // r0
  int v4; // r2

  if ( *((_DWORD *)this + 6) == 0 )
  {
    v3 = (void *)Ogre::alloc(*((Ogre **)this + 2), a2);
    v4 = *((_DWORD *)this + 4);
    *((_DWORD *)this + 6) = v3;
    Ogre::FilePackage::readFile(*((FILE ***)this + 3), v3, v4, *((_DWORD *)this + 2));
  }
  return *((_DWORD *)this + 6);
}

