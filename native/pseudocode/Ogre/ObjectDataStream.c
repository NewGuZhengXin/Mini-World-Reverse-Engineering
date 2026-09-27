// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ObjectDataStream

//======================================================================
// Ogre::ObjectDataStream::size(void)const
// address: 0x00170402   size: 0xC (12 bytes)
//======================================================================
int __fastcall Ogre::ObjectDataStream::size(Ogre::ObjectDataStream *this)
{
  return (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 3) + 20))(*((_DWORD *)this + 3));
}


//======================================================================
// Ogre::ObjectDataStream::close(void)
// address: 0x0017040E   size: 0x16 (22 bytes)
//======================================================================
int __fastcall Ogre::ObjectDataStream::close(Ogre::ObjectDataStream *this)
{
  int result; // r0

  result = *((_DWORD *)this + 3);
  if ( result != 0 )
  {
    result = (*(int (__fastcall **)(int))(*(_DWORD *)result + 8))(result);
    *((_DWORD *)this + 3) = 0;
  }
  return result;
}


//======================================================================
// Ogre::ObjectDataStream::getMemoryImage(void)
// address: 0x00170424   size: 0xC (12 bytes)
//======================================================================
int __fastcall Ogre::ObjectDataStream::getMemoryImage(Ogre::ObjectDataStream *this)
{
  return (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 3) + 12))(*((_DWORD *)this + 3));
}


//======================================================================
// Ogre::ObjectDataStream::eof(void)const
// address: 0x00170430   size: 0x16 (22 bytes)
//======================================================================
bool __fastcall Ogre::ObjectDataStream::eof(Ogre::ObjectDataStream *this)
{
  unsigned int v1; // r4

  v1 = *((_DWORD *)this + 4);
  return v1 >= (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 3) + 20))(*((_DWORD *)this + 3));
}


//======================================================================
// Ogre::ObjectDataStream::tell(void)const
// address: 0x00170446   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::ObjectDataStream::tell(Ogre::ObjectDataStream *this)
{
  return *((_DWORD *)this + 4);
}


//======================================================================
// Ogre::ObjectDataStream::seek(unsigned int)
// address: 0x0017044A   size: 0x1A (26 bytes)
//======================================================================
unsigned int __fastcall Ogre::ObjectDataStream::seek(Ogre::ObjectDataStream *this, unsigned int a2)
{
  unsigned int result; // r0

  result = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 3) + 20))(*((_DWORD *)this + 3));
  if ( a2 > result )
    *((_DWORD *)this + 4) = result;
  else
    *((_DWORD *)this + 4) = a2;
  return result;
}


//======================================================================
// Ogre::ObjectDataStream::skip(long)
// address: 0x00170464   size: 0x1E (30 bytes)
//======================================================================
unsigned int __fastcall Ogre::ObjectDataStream::skip(Ogre::ObjectDataStream *this, int a2)
{
  unsigned int result; // r0
  unsigned int v5; // r1

  result = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 3) + 20))(*((_DWORD *)this + 3));
  v5 = a2 + *((_DWORD *)this + 4);
  if ( v5 > result )
    *((_DWORD *)this + 4) = result;
  else
    *((_DWORD *)this + 4) = v5;
  return result;
}


//======================================================================
// Ogre::ObjectDataStream::~ObjectDataStream()
// address: 0x001704A4   size: 0x1C (28 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16ObjectDataStreamD1Ev'
void __fastcall Ogre::ObjectDataStream::~ObjectDataStream(Ogre::ObjectDataStream *this)
{
  *(_DWORD *)this = &off_457570;
  Ogre::ObjectDataStream::close(this);
  Ogre::DataStream::~DataStream(this);
}


//======================================================================
// Ogre::ObjectDataStream::~ObjectDataStream()
// address: 0x0017051E   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::ObjectDataStream::~ObjectDataStream(Ogre::ObjectDataStream *this)
{
  Ogre::ObjectDataStream::~ObjectDataStream(this);
  operator delete(this);
}


//======================================================================
// Ogre::ObjectDataStream::read(void *,unsigned int)
// address: 0x001706AC   size: 0x3E (62 bytes)
//======================================================================
size_t __fastcall Ogre::ObjectDataStream::read(Ogre::ObjectDataStream *this, void *a2, size_t a3)
{
  unsigned int v6; // r0
  int v7; // r3
  int v8; // r0

  v6 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 3) + 20))(*((_DWORD *)this + 3));
  v7 = *((_DWORD *)this + 4);
  if ( a3 + v7 > v6 )
    a3 = v6 - v7;
  if ( a3 != 0 )
  {
    v8 = (*(int (__fastcall **)(_DWORD, size_t))(**((_DWORD **)this + 3) + 16))(*((_DWORD *)this + 3), a3 + v7);
    j_memcpy(a2, (const void *)(v8 + *((_DWORD *)this + 4)), a3);
    *((_DWORD *)this + 4) += a3;
  }
  return a3;
}


//======================================================================
// Ogre::ObjectDataStream::write(void const*,unsigned int)
// address: 0x001706EA   size: 0x54 (84 bytes)
//======================================================================
size_t __fastcall Ogre::ObjectDataStream::write(Ogre::ObjectDataStream *this, const void *a2, size_t a3)
{
  unsigned int v6; // r0
  int v7; // r3
  int v8; // r0
  int v9; // r0
  unsigned int v10; // r6

  v6 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 3) + 24))(*((_DWORD *)this + 3));
  v7 = *((_DWORD *)this + 4);
  if ( a3 + v7 > v6 )
    a3 = v6 - v7;
  if ( a3 != 0 )
  {
    v8 = (*(int (__fastcall **)(_DWORD, size_t))(**((_DWORD **)this + 3) + 16))(*((_DWORD *)this + 3), a3 + v7);
    j_memcpy((void *)(v8 + *((_DWORD *)this + 4)), a2, a3);
    v9 = *((_DWORD *)this + 3);
    v10 = a3 + *((_DWORD *)this + 4);
    *((_DWORD *)this + 4) = v10;
    if ( v10 > (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 20))(v9) )
      (*(void (__fastcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 3) + 28))(
        *((_DWORD *)this + 3),
        *((_DWORD *)this + 4));
  }
  return a3;
}


//======================================================================
// Ogre::ObjectDataStream::ObjectDataStream(Ogre::DataStreamObject *)
// address: 0x00170F1C   size: 0x1E (30 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16ObjectDataStreamC2EPNS_16DataStreamObjectE'
_DWORD *__fastcall Ogre::ObjectDataStream::ObjectDataStream(_DWORD *this, Ogre::DataStreamObject *a2)
{
  *(this + 2) = 0;
  *(this + 3) = a2;
  *(this + 4) = 0;
  *(this + 1) = &byte_55FB88;
  *this = &off_457570;
  return this;
}

