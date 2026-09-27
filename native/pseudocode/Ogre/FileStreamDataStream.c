// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::FileStreamDataStream

//======================================================================
// Ogre::FileStreamDataStream::write(void const*,unsigned int)
// address: 0x001703E0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::FileStreamDataStream::write(Ogre::FileStreamDataStream *this, const void *a2, unsigned int a3)
{
  return 0;
}


//======================================================================
// Ogre::FileStreamDataStream::eof(void)const
// address: 0x001703E4   size: 0x12 (18 bytes)
//======================================================================
int __fastcall Ogre::FileStreamDataStream::eof(Ogre::FileStreamDataStream *this)
{
  return *(_DWORD *)(*((_DWORD *)this + 3) + *(_DWORD *)(**((_DWORD **)this + 3) - 12) + 20) << 30 >> 31;
}


//======================================================================
// Ogre::FileStreamDataStream::getMemoryImage(void)
// address: 0x001703F6   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::FileStreamDataStream::getMemoryImage(Ogre::FileStreamDataStream *this)
{
  return 0;
}


//======================================================================
// Ogre::FileStreamDataStream::read(void *,unsigned int)
// address: 0x001708E8   size: 0x10 (16 bytes)
//======================================================================
int __fastcall Ogre::FileStreamDataStream::read(Ogre::FileStreamDataStream *this, void *a2, unsigned int a3)
{
  sub_39E3CC(*((_DWORD *)this + 3), a2, a3);
  return *(_DWORD *)(*((_DWORD *)this + 3) + 4);
}


//======================================================================
// Ogre::FileStreamDataStream::seek(unsigned int)
// address: 0x001708F8   size: 0x24 (36 bytes)
//======================================================================
int __fastcall Ogre::FileStreamDataStream::seek(Ogre::FileStreamDataStream *this, unsigned int a2)
{
  sub_3914B0(*((_DWORD *)this + 3) + *(_DWORD *)(**((_DWORD **)this + 3) - 12), 0);
  sub_39E968(*((_DWORD *)this + 3));
  return 0;
}


//======================================================================
// Ogre::FileStreamDataStream::readLine(char *,unsigned int,std::string const&)
// address: 0x0017091C   size: 0xB6 (182 bytes)
//======================================================================
int __fastcall Ogre::FileStreamDataStream::readLine(int a1, int a2, int a3, _DWORD *a4)
{
  const char *v8; // r1
  unsigned int v9; // r3
  const char *v10; // r1
  int v11; // r6
  _DWORD *v12; // r3
  int v13; // r4
  char *v14; // r0
  unsigned int v15; // r3
  const char *v16; // r1
  _BYTE *v17; // r5

  if ( *(_DWORD *)(*a4 - 12) == 0 )
  {
    Ogre::LogSetCurParam(
      (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreDataStream.cpp",
      (const char *)&stru_1B8.st_value + 3,
      8,
      0);
    Ogre::LogMessage((Ogre *)"No delimiter provided", v8);
  }
  v9 = *(_DWORD *)(*a4 - 12);
  if ( v9 > 1 )
  {
    Ogre::LogSetCurParam(
      (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreDataStream.cpp",
      (const char *)&stru_1B8.st_size + 3,
      4,
      v9);
    Ogre::LogMessage((Ogre *)"FileStreamDataStream::readLine - using only first delimeter", v10);
  }
  v11 = *(unsigned __int8 *)sub_3BD7F8(a4, 0);
  sub_3A6BBC(*(_DWORD *)(a1 + 12), a2, a3 + 1, v11);
  v12 = *(_DWORD **)(a1 + 12);
  v13 = v12[1];
  v14 = (char *)v12 + *(_DWORD *)(*v12 - 12);
  v15 = *((_DWORD *)v14 + 5);
  if ( (v15 & 2) == 0 )
  {
    if ( (v15 & 5) != 0 )
    {
      if ( v13 == a3 )
      {
        sub_3914B0(v14, 0);
      }
      else
      {
        Ogre::LogSetCurParam(
          (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreDataStream.cpp",
          (const char *)&stru_1D8.st_size + 3,
          8,
          v15);
        Ogre::LogMessage((Ogre *)"Streaming error occurred", v16);
      }
    }
    else
    {
      --v13;
    }
  }
  if ( v11 == 10 )
  {
    v17 = (_BYTE *)(a2 + v13 - 1);
    if ( *v17 == 13 )
    {
      *v17 = 0;
      --v13;
    }
  }
  return v13;
}


//======================================================================
// Ogre::FileStreamDataStream::tell(void)const
// address: 0x001709EC   size: 0x22 (34 bytes)
//======================================================================
int __fastcall Ogre::FileStreamDataStream::tell(Ogre::FileStreamDataStream *this, int a2, int a3, int a4)
{
  _DWORD v6[4]; // [sp+0h] [bp-10h] BYREF

  v6[0] = this;
  v6[1] = a2;
  v6[2] = a3;
  v6[3] = a4;
  sub_3914B0(*((_DWORD *)this + 3) + *(_DWORD *)(**((_DWORD **)this + 3) - 12), 0);
  sub_39E7BC(v6, *((_DWORD *)this + 3));
  return v6[0];
}


//======================================================================
// Ogre::FileStreamDataStream::skip(long)
// address: 0x00170A0E   size: 0x26 (38 bytes)
//======================================================================
int __fastcall Ogre::FileStreamDataStream::skip(Ogre::FileStreamDataStream *this, int a2)
{
  sub_3914B0(*((_DWORD *)this + 3) + *(_DWORD *)(**((_DWORD **)this + 3) - 12), 0);
  sub_39E968(*((_DWORD *)this + 3));
  return 1;
}


//======================================================================
// Ogre::FileStreamDataStream::close(void)
// address: 0x00170B0A   size: 0x26 (38 bytes)
//======================================================================
int __fastcall Ogre::FileStreamDataStream::close(Ogre::FileStreamDataStream *this)
{
  int result; // r0

  result = *((_DWORD *)this + 3);
  if ( result != 0 )
  {
    result = sub_3BA558();
    if ( *((_BYTE *)this + 16) != 0 )
    {
      result = *((_DWORD *)this + 3);
      if ( result != 0 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)result + 4))(result);
      *((_DWORD *)this + 3) = 0;
    }
  }
  return result;
}


//======================================================================
// Ogre::FileStreamDataStream::~FileStreamDataStream()
// address: 0x00170B30   size: 0x1C (28 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre20FileStreamDataStreamD1Ev'
void __fastcall Ogre::FileStreamDataStream::~FileStreamDataStream(Ogre::FileStreamDataStream *this)
{
  *(_DWORD *)this = &off_4574E0;
  Ogre::FileStreamDataStream::close(this);
  Ogre::DataStream::~DataStream(this);
}


//======================================================================
// Ogre::FileStreamDataStream::~FileStreamDataStream()
// address: 0x00170B50   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::FileStreamDataStream::~FileStreamDataStream(Ogre::FileStreamDataStream *this)
{
  Ogre::FileStreamDataStream::~FileStreamDataStream(this);
  operator delete(this);
}


//======================================================================
// Ogre::FileStreamDataStream::FileStreamDataStream(std::basic_ifstream<char,std::char_traits<char>> *,bool)
// address: 0x00170DB0   size: 0x4E (78 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre20FileStreamDataStreamC1EPSt14basic_ifstreamIcSt11char_traitsIcEEb'
int __fastcall Ogre::FileStreamDataStream::FileStreamDataStream(int a1, int a2, char a3)
{
  int v4; // r0
  _DWORD v6[5]; // [sp+8h] [bp-14h] BYREF

  *(_DWORD *)(a1 + 4) = &byte_55FB88;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = a2;
  *(_BYTE *)(a1 + 16) = a3;
  *(_DWORD *)a1 = &off_4574E0;
  sub_39E968(a2);
  sub_39E7BC(v6, *(_DWORD *)(a1 + 12));
  v4 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a1 + 8) = v6[0];
  sub_39E968(v4);
  return a1;
}


//======================================================================
// Ogre::FileStreamDataStream::FileStreamDataStream(std::string const&,std::basic_ifstream<char,std::char_traits<char>> *,bool)
// address: 0x00170E08   size: 0x4A (74 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre20FileStreamDataStreamC1ERKSsPSt14basic_ifstreamIcSt11char_traitsIcEEb'
int __fastcall Ogre::FileStreamDataStream::FileStreamDataStream(int a1, int a2, int a3, char a4)
{
  int v7; // r0
  _DWORD v9[4]; // [sp+8h] [bp-10h] BYREF

  Ogre::DataStream::DataStream((_DWORD *)a1, a2);
  *(_DWORD *)(a1 + 12) = a3;
  *(_DWORD *)a1 = &off_4574E0;
  *(_BYTE *)(a1 + 16) = a4;
  sub_39E968(a3);
  sub_39E7BC(v9, *(_DWORD *)(a1 + 12));
  v7 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a1 + 8) = v9[0];
  sub_39E968(v7);
  return a1;
}


//======================================================================
// Ogre::FileStreamDataStream::FileStreamDataStream(std::string const&,std::basic_ifstream<char,std::char_traits<char>> *,unsigned int,bool)
// address: 0x00170E58   size: 0x24 (36 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre20FileStreamDataStreamC1ERKSsPSt14basic_ifstreamIcSt11char_traitsIcEEjb'
int __fastcall Ogre::FileStreamDataStream::FileStreamDataStream(int a1, int a2, int a3, int a4, char a5)
{
  Ogre::DataStream::DataStream((_DWORD *)a1, a2);
  *(_DWORD *)(a1 + 12) = a3;
  *(_BYTE *)(a1 + 16) = a5;
  *(_DWORD *)(a1 + 8) = a4;
  *(_DWORD *)a1 = &off_4574E0;
  return a1;
}

