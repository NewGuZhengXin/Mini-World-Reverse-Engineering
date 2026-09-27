// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::FileHandleDataStream

//======================================================================
// Ogre::FileHandleDataStream::skip(long)
// address: 0x00170A34   size: 0xC (12 bytes)
//======================================================================
int __fastcall Ogre::FileHandleDataStream::skip(FILE **this, int a2)
{
  return j_fseek(*(this + 3), a2, 1);
}


//======================================================================
// Ogre::FileHandleDataStream::seek(unsigned int)
// address: 0x00170A40   size: 0xC (12 bytes)
//======================================================================
int __fastcall Ogre::FileHandleDataStream::seek(FILE **this, int a2)
{
  return j_fseek(*(this + 3), a2, 0);
}


//======================================================================
// Ogre::FileHandleDataStream::tell(void)const
// address: 0x00170A4C   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::FileHandleDataStream::tell(FILE **this)
{
  return j_ftell(*(this + 3));
}


//======================================================================
// Ogre::FileHandleDataStream::read(void *,unsigned int)
// address: 0x00170A56   size: 0xE (14 bytes)
//======================================================================
size_t __fastcall Ogre::FileHandleDataStream::read(FILE **this, void *ptr, size_t a3)
{
  return j_fread(ptr, 1u, a3, *(this + 3));
}


//======================================================================
// Ogre::FileHandleDataStream::getMemoryImage(void)
// address: 0x00170A64   size: 0x34 (52 bytes)
//======================================================================
int __fastcall Ogre::FileHandleDataStream::getMemoryImage(Ogre::FileHandleDataStream *this)
{
  if ( *((_DWORD *)this + 4) == 0 )
  {
    *((_DWORD *)this + 4) = j_malloc(2 * (*((_DWORD *)this + 2) + 512));
    j_fseek(*((FILE **)this + 3), 0, 0);
    j_fread(*((void **)this + 4), *((_DWORD *)this + 2), 1u, *((FILE **)this + 3));
  }
  return *((_DWORD *)this + 4);
}


//======================================================================
// Ogre::FileHandleDataStream::write(void const*,unsigned int)
// address: 0x00170A98   size: 0xE (14 bytes)
//======================================================================
size_t __fastcall Ogre::FileHandleDataStream::write(FILE **this, const void *ptr, size_t a3)
{
  return j_fwrite(ptr, 1u, a3, *(this + 3));
}


//======================================================================
// Ogre::FileHandleDataStream::eof(void)const
// address: 0x00170AA6   size: 0xE (14 bytes)
//======================================================================
bool __fastcall Ogre::FileHandleDataStream::eof(FILE **this)
{
  return j_feof(*(this + 3)) != 0;
}


//======================================================================
// Ogre::FileHandleDataStream::close(void)
// address: 0x00170AB4   size: 0x22 (34 bytes)
//======================================================================
void __fastcall Ogre::FileHandleDataStream::close(Ogre::FileHandleDataStream *this)
{
  FILE *v2; // r0
  void *v3; // r0

  v2 = *((FILE **)this + 3);
  if ( v2 != nullptr )
  {
    j_fclose(v2);
    *((_DWORD *)this + 3) = 0;
  }
  v3 = *((void **)this + 4);
  if ( v3 != nullptr )
  {
    j_free(v3);
    *((_DWORD *)this + 4) = 0;
  }
}


//======================================================================
// Ogre::FileHandleDataStream::~FileHandleDataStream()
// address: 0x00170AD8   size: 0x1C (28 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre20FileHandleDataStreamD1Ev'
void __fastcall Ogre::FileHandleDataStream::~FileHandleDataStream(Ogre::FileHandleDataStream *this)
{
  *(_DWORD *)this = &off_457528;
  Ogre::FileHandleDataStream::close(this);
  Ogre::DataStream::~DataStream(this);
}


//======================================================================
// Ogre::FileHandleDataStream::~FileHandleDataStream()
// address: 0x00170AF8   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::FileHandleDataStream::~FileHandleDataStream(Ogre::FileHandleDataStream *this)
{
  Ogre::FileHandleDataStream::~FileHandleDataStream(this);
  operator delete(this);
}


//======================================================================
// Ogre::FileHandleDataStream::FileHandleDataStream(__sFILE *)
// address: 0x00170E80   size: 0x40 (64 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre20FileHandleDataStreamC1EP7__sFILE'
int __fastcall Ogre::FileHandleDataStream::FileHandleDataStream(int a1, FILE *stream)
{
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 4) = &byte_55FB88;
  *(_DWORD *)(a1 + 12) = stream;
  *(_DWORD *)a1 = &off_457528;
  j_fseek(stream, 0, 2);
  *(_DWORD *)(a1 + 8) = j_ftell(*(FILE **)(a1 + 12));
  j_fseek(*(FILE **)(a1 + 12), 0, 0);
  return a1;
}


//======================================================================
// Ogre::FileHandleDataStream::FileHandleDataStream(std::string const&,__sFILE *)
// address: 0x00170EC8   size: 0x3A (58 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre20FileHandleDataStreamC2ERKSsP7__sFILE'
int __fastcall Ogre::FileHandleDataStream::FileHandleDataStream(int a1, int a2, FILE *a3)
{
  Ogre::DataStream::DataStream((_DWORD *)a1, a2);
  *(_DWORD *)(a1 + 12) = a3;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)a1 = &off_457528;
  j_fseek(a3, 0, 2);
  *(_DWORD *)(a1 + 8) = j_ftell(*(FILE **)(a1 + 12));
  j_fseek(*(FILE **)(a1 + 12), 0, 0);
  return a1;
}

