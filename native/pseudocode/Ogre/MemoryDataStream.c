// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::MemoryDataStream

//======================================================================
// Ogre::MemoryDataStream::getMemoryImage(void)
// address: 0x00170390   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::MemoryDataStream::getMemoryImage(Ogre::MemoryDataStream *this)
{
  return *((_DWORD *)this + 3);
}


//======================================================================
// Ogre::MemoryDataStream::skip(long)
// address: 0x001703A4   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::MemoryDataStream::skip(int this, int a2)
{
  *(_DWORD *)(this + 16) += a2;
  return this;
}


//======================================================================
// Ogre::MemoryDataStream::seek(unsigned int)
// address: 0x001703AC   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::MemoryDataStream::seek(int this, unsigned int a2)
{
  *(_DWORD *)(this + 16) = *(_DWORD *)(this + 12) + a2;
  return this;
}


//======================================================================
// Ogre::MemoryDataStream::tell(void)const
// address: 0x001703B4   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::MemoryDataStream::tell(Ogre::MemoryDataStream *this)
{
  return *((_DWORD *)this + 4) - *((_DWORD *)this + 3);
}


//======================================================================
// Ogre::MemoryDataStream::eof(void)const
// address: 0x001703BC   size: 0xC (12 bytes)
//======================================================================
bool __fastcall Ogre::MemoryDataStream::eof(Ogre::MemoryDataStream *this)
{
  return *((_DWORD *)this + 4) >= *((_DWORD *)this + 5);
}


//======================================================================
// Ogre::MemoryDataStream::close(void)
// address: 0x001703C8   size: 0x18 (24 bytes)
//======================================================================
int __fastcall Ogre::MemoryDataStream::close(int this)
{
  int (*v1)(void); // r3
  int v2; // r4

  v1 = *(int (**)(void))(this + 24);
  v2 = this;
  if ( v1 != nullptr )
  {
    this = *(_DWORD *)(this + 12);
    if ( this != 0 )
    {
      this = v1();
      *(_DWORD *)(v2 + 12) = 0;
    }
  }
  return this;
}


//======================================================================
// Ogre::MemoryDataStream::~MemoryDataStream()
// address: 0x00170484   size: 0x1C (28 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16MemoryDataStreamD1Ev'
void __fastcall Ogre::MemoryDataStream::~MemoryDataStream(Ogre::MemoryDataStream *this)
{
  *(_DWORD *)this = &off_457498;
  Ogre::MemoryDataStream::close((int)this);
  Ogre::DataStream::~DataStream(this);
}


//======================================================================
// Ogre::MemoryDataStream::~MemoryDataStream()
// address: 0x0017050C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::MemoryDataStream::~MemoryDataStream(Ogre::MemoryDataStream *this)
{
  Ogre::MemoryDataStream::~MemoryDataStream(this);
  operator delete(this);
}


//======================================================================
// Ogre::MemoryDataStream::read(void *,unsigned int)
// address: 0x0017065C   size: 0x2A (42 bytes)
//======================================================================
size_t __fastcall Ogre::MemoryDataStream::read(Ogre::MemoryDataStream *this, void *a2, size_t a3)
{
  const void *v3; // r3
  size_t v5; // r2

  v3 = *((const void **)this + 4);
  v5 = *((_DWORD *)this + 5);
  if ( v5 < (unsigned int)v3 + a3 )
    a3 = v5 - (_DWORD)v3;
  if ( a3 != 0 )
  {
    j_memcpy(a2, v3, a3);
    *((_DWORD *)this + 4) += a3;
  }
  return a3;
}


//======================================================================
// Ogre::MemoryDataStream::write(void const*,unsigned int)
// address: 0x00170686   size: 0x26 (38 bytes)
//======================================================================
size_t __fastcall Ogre::MemoryDataStream::write(Ogre::MemoryDataStream *this, const void *a2, size_t a3)
{
  void *v4; // r0
  size_t v5; // r3
  size_t v6; // r4

  v4 = *((void **)this + 4);
  v5 = *((_DWORD *)this + 5);
  v6 = a3;
  if ( v5 < (unsigned int)v4 + a3 )
    v6 = v5 - (_DWORD)v4;
  if ( v6 != 0 )
  {
    j_memcpy(v4, a2, v6);
    *((_DWORD *)this + 4) += v6;
  }
  return v6;
}


//======================================================================
// Ogre::MemoryDataStream::readLine(char *,unsigned int,std::string const&)
// address: 0x0017073E   size: 0x6E (110 bytes)
//======================================================================
_BYTE *__fastcall Ogre::MemoryDataStream::readLine(int a1, _BYTE *a2, int a3, int a4)
{
  _BYTE *i; // r7
  _BYTE *v8; // r4
  unsigned __int8 *v9; // r3
  int v10; // r0
  _BYTE *v11; // r3
  int v14; // [sp+8h] [bp-Ch]
  _BYTE *v15; // [sp+Ch] [bp-8h]

  v14 = sub_3BD958(a4, 10, 0);
  v15 = &a2[a3];
  for ( i = a2; ; ++i )
  {
    v8 = (_BYTE *)(i - a2);
    if ( i == v15 )
      break;
    v9 = *(unsigned __int8 **)(a1 + 16);
    if ( (unsigned int)v9 >= *(_DWORD *)(a1 + 20) )
      break;
    v10 = sub_3BD958(a4, *v9, 0);
    v11 = *(_BYTE **)(a1 + 16);
    if ( v10 != -1 )
    {
      if ( v14 != -1 && v8 != nullptr && *(i - 1) == 13 )
        --v8;
      *(_DWORD *)(a1 + 16) = v11 + 1;
      break;
    }
    *(_DWORD *)(a1 + 16) = v11 + 1;
    *i = *v11;
  }
  v8[(_DWORD)a2] = 0;
  return v8;
}


//======================================================================
// Ogre::MemoryDataStream::skipLine(std::string const&)
// address: 0x001707AC   size: 0x28 (40 bytes)
//======================================================================
int __fastcall Ogre::MemoryDataStream::skipLine(int a1, int a2)
{
  int v4; // r4
  unsigned __int8 *v5; // r3

  v4 = 0;
  do
  {
    v5 = *(unsigned __int8 **)(a1 + 16);
    if ( (unsigned int)v5 >= *(_DWORD *)(a1 + 20) )
      break;
    *(_DWORD *)(a1 + 16) = v5 + 1;
    ++v4;
  }
  while ( sub_3BD958(a2, *v5, 0) == -1 );
  return v4;
}


//======================================================================
// Ogre::MemoryDataStream::MemoryDataStream(void *,unsigned int,void (*)(void *))
// address: 0x00170B84   size: 0x24 (36 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16MemoryDataStreamC2EPvjPFvS1_E'
_DWORD *__fastcall Ogre::MemoryDataStream::MemoryDataStream(
        _DWORD *this,
        char *a2,
        unsigned int a3,
        void (*a4)(void *))
{
  *(this + 4) = a2;
  *(this + 3) = a2;
  *(this + 2) = a3;
  *(this + 1) = &byte_55FB88;
  *(this + 5) = &a2[a3];
  *(this + 6) = a4;
  *this = &off_457498;
  return this;
}


//======================================================================
// Ogre::MemoryDataStream::MemoryDataStream(std::string const&,void *,unsigned int,void (*)(void *))
// address: 0x00170BB0   size: 0x28 (40 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16MemoryDataStreamC1ERKSsPvjPFvS3_E'
_DWORD *__fastcall Ogre::MemoryDataStream::MemoryDataStream(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  Ogre::DataStream::DataStream(a1, a2);
  a1[4] = a3;
  a1[3] = a3;
  a1[2] = a4;
  a1[5] = a3 + a4;
  *a1 = &off_457498;
  a1[6] = a5;
  return a1;
}


//======================================================================
// Ogre::MemoryDataStream::MemoryDataStream(Ogre::DataStream &)
// address: 0x00170BDC   size: 0x50 (80 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16MemoryDataStreamC1ERNS_10DataStreamE'
Ogre::MemoryDataStream *__fastcall Ogre::MemoryDataStream::MemoryDataStream(
        Ogre::MemoryDataStream *this,
        Ogre::DataStream *a2)
{
  size_t v4; // r0
  size_t v5; // r7
  char *v6; // r0

  *((_DWORD *)this + 1) = &byte_55FB88;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &off_457498;
  v4 = (*(int (__fastcall **)(Ogre::DataStream *))(*(_DWORD *)a2 + 48))(a2);
  *((_DWORD *)this + 2) = v4;
  v5 = v4;
  v6 = (char *)j_malloc(v4);
  *((_DWORD *)this + 3) = v6;
  *((_DWORD *)this + 4) = v6;
  *((_DWORD *)this + 5) = &v6[(*(int (__fastcall **)(Ogre::DataStream *, char *, size_t))(*(_DWORD *)a2 + 8))(
                                a2,
                                v6,
                                v5)];
  *((_DWORD *)this + 6) = &free;
  return this;
}


//======================================================================
// Ogre::MemoryDataStream::MemoryDataStream(Ogre::DataStream *)
// address: 0x00170C38   size: 0x50 (80 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16MemoryDataStreamC1EPNS_10DataStreamE'
Ogre::MemoryDataStream *__fastcall Ogre::MemoryDataStream::MemoryDataStream(
        Ogre::MemoryDataStream *this,
        Ogre::DataStream *a2)
{
  size_t v4; // r0
  size_t v5; // r7
  char *v6; // r0

  *((_DWORD *)this + 1) = &byte_55FB88;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &off_457498;
  v4 = (*(int (__fastcall **)(Ogre::DataStream *))(*(_DWORD *)a2 + 48))(a2);
  *((_DWORD *)this + 2) = v4;
  v5 = v4;
  v6 = (char *)j_malloc(v4);
  *((_DWORD *)this + 3) = v6;
  *((_DWORD *)this + 4) = v6;
  *((_DWORD *)this + 5) = &v6[(*(int (__fastcall **)(Ogre::DataStream *, char *, size_t))(*(_DWORD *)a2 + 8))(
                                a2,
                                v6,
                                v5)];
  *((_DWORD *)this + 6) = &free;
  return this;
}


//======================================================================
// Ogre::MemoryDataStream::MemoryDataStream(std::string const&,Ogre::DataStream &)
// address: 0x00170C94   size: 0x46 (70 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16MemoryDataStreamC1ERKSsRNS_10DataStreamE'
_DWORD *__fastcall Ogre::MemoryDataStream::MemoryDataStream(_DWORD *a1, int a2, int a3)
{
  size_t v5; // r0
  size_t v6; // r7
  char *v7; // r0

  Ogre::DataStream::DataStream(a1, a2);
  *a1 = &off_457498;
  v5 = (*(int (__fastcall **)(int))(*(_DWORD *)a3 + 48))(a3);
  a1[2] = v5;
  v6 = v5;
  v7 = (char *)j_malloc(v5);
  a1[3] = v7;
  a1[4] = v7;
  a1[5] = &v7[(*(int (__fastcall **)(int, char *, size_t))(*(_DWORD *)a3 + 8))(a3, v7, v6)];
  a1[6] = &free;
  return a1;
}


//======================================================================
// Ogre::MemoryDataStream::MemoryDataStream(std::string const&,Ogre::DataStream const*)
// address: 0x00170CE4   size: 0x46 (70 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16MemoryDataStreamC1ERKSsPKNS_10DataStreamE'
_DWORD *__fastcall Ogre::MemoryDataStream::MemoryDataStream(_DWORD *a1, int a2, int a3)
{
  size_t v5; // r0
  size_t v6; // r7
  char *v7; // r0

  Ogre::DataStream::DataStream(a1, a2);
  *a1 = &off_457498;
  v5 = (*(int (__fastcall **)(int))(*(_DWORD *)a3 + 48))(a3);
  a1[2] = v5;
  v6 = v5;
  v7 = (char *)j_malloc(v5);
  a1[3] = v7;
  a1[4] = v7;
  a1[5] = &v7[(*(int (__fastcall **)(int, char *, size_t))(*(_DWORD *)a3 + 8))(a3, v7, v6)];
  a1[6] = &free;
  return a1;
}


//======================================================================
// Ogre::MemoryDataStream::MemoryDataStream(unsigned int)
// address: 0x00170D34   size: 0x36 (54 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16MemoryDataStreamC2Ej'
Ogre::MemoryDataStream *__fastcall Ogre::MemoryDataStream::MemoryDataStream(
        Ogre::MemoryDataStream *this,
        size_t byte_count)
{
  char *v4; // r0

  *((_DWORD *)this + 1) = &byte_55FB88;
  *(_DWORD *)this = &off_457498;
  *((_DWORD *)this + 2) = byte_count;
  *((_DWORD *)this + 6) = &free;
  v4 = (char *)j_malloc(byte_count);
  *((_DWORD *)this + 3) = v4;
  *((_DWORD *)this + 4) = v4;
  *((_DWORD *)this + 5) = &v4[byte_count];
  return this;
}


//======================================================================
// Ogre::MemoryDataStream::MemoryDataStream(std::string const&,unsigned int)
// address: 0x00170D78   size: 0x30 (48 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16MemoryDataStreamC1ERKSsj'
_DWORD *__fastcall Ogre::MemoryDataStream::MemoryDataStream(_DWORD *a1, int a2, size_t a3)
{
  char *v5; // r0

  Ogre::DataStream::DataStream(a1, a2);
  a1[2] = a3;
  *a1 = &off_457498;
  a1[6] = &free;
  v5 = (char *)j_malloc(a3);
  a1[3] = v5;
  a1[4] = v5;
  a1[5] = &v5[a3];
  return a1;
}

