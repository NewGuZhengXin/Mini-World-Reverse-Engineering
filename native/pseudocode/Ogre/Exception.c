// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Exception

//======================================================================
// Ogre::Exception::getSource(void)const
// address: 0x00153F2E   size: 0x4 (4 bytes)
//======================================================================
char *__fastcall Ogre::Exception::getSource(Ogre::Exception *this)
{
  return (char *)this + 20;
}


//======================================================================
// Ogre::Exception::getFile(void)const
// address: 0x00153F32   size: 0x4 (4 bytes)
//======================================================================
char *__fastcall Ogre::Exception::getFile(Ogre::Exception *this)
{
  return (char *)this + 24;
}


//======================================================================
// Ogre::Exception::getLine(void)const
// address: 0x00153F36   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::Exception::getLine(Ogre::Exception *this)
{
  return *((_DWORD *)this + 1);
}


//======================================================================
// Ogre::Exception::getDescription(void)const
// address: 0x00153F3A   size: 0x4 (4 bytes)
//======================================================================
char *__fastcall Ogre::Exception::getDescription(Ogre::Exception *this)
{
  return (char *)this + 16;
}


//======================================================================
// Ogre::Exception::what(void)const
// address: 0x00153F3E   size: 0xC (12 bytes)
//======================================================================
int __fastcall Ogre::Exception::what(Ogre::Exception *this)
{
  return *(_DWORD *)(*(int (__fastcall **)(Ogre::Exception *))(*(_DWORD *)this + 12))(this);
}


//======================================================================
// Ogre::Exception::getNumber(void)const
// address: 0x00153F4A   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::Exception::getNumber(Ogre::Exception *this)
{
  return *((_DWORD *)this + 2);
}


//======================================================================
// Ogre::Exception::~Exception()
// address: 0x00153F50   size: 0x3E (62 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9ExceptionD1Ev'
void __fastcall Ogre::Exception::~Exception(Ogre::Exception *this)
{
  *(_DWORD *)this = &off_4563E0;
  sub_3BDF80((char *)this + 28);
  sub_3BDF80((char *)this + 24);
  sub_3BDF80((char *)this + 20);
  sub_3BDF80((char *)this + 16);
  sub_3BDF80((char *)this + 12);
  std::exception::~exception(this);
}


//======================================================================
// Ogre::Exception::~Exception()
// address: 0x00153F94   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::Exception::~Exception(Ogre::Exception *this)
{
  Ogre::Exception::~Exception(this);
  operator delete(this);
}


//======================================================================
// Ogre::Exception::getFullDescription(void)const
// address: 0x00153FA8   size: 0xAE (174 bytes)
//======================================================================
char *__fastcall Ogre::Exception::getFullDescription(Ogre::Exception *this)
{
  char *v2; // r6
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v15; // [sp+0h] [bp-B8h] BYREF
  _BYTE v16[4]; // [sp+4h] [bp-B4h] BYREF
  _BYTE v17[176]; // [sp+8h] [bp-B0h] BYREF

  v2 = (char *)this + 28;
  if ( *(_DWORD *)(*((_DWORD *)this + 7) - 12) == 0 )
  {
    sub_3A2E24(v16, 16);
    v3 = sub_3B452C((int)v16, "OGRE EXCEPTION(");
    v4 = sub_3B4758(v3, *((_DWORD *)this + 2));
    v5 = sub_3B452C(v4, ":");
    v6 = sub_3A81B0(v5, (char *)this + 12);
    v7 = sub_3B452C(v6, "): ");
    v8 = sub_3A81B0(v7, (char *)this + 16);
    v9 = sub_3B452C(v8, " in ");
    sub_3A81B0(v9, (char *)this + 20);
    if ( *((int *)this + 1) > 0 )
    {
      v10 = sub_3B452C((int)v16, " at ");
      v11 = sub_3A81B0(v10, (char *)this + 24);
      v12 = sub_3B452C(v11, " (line ");
      v13 = sub_3B45BC(v12, *((_DWORD *)this + 1));
      sub_3B452C(v13, ")");
    }
    sub_3A2244(&v15, v17);
    sub_3BEBBC(v2);
    sub_3BDF80(&v15);
    sub_3A1A4C(v16);
  }
  return v2;
}


//======================================================================
// Ogre::Exception::Exception(int,std::string const&,std::string const&)
// address: 0x00154074   size: 0x3E (62 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9ExceptionC1EiRKSsS2_'
_DWORD *__fastcall Ogre::Exception::Exception(_DWORD *a1, int a2, int a3, int a4)
{
  a1[1] = 0;
  a1[2] = a2;
  *a1 = &off_4563E0;
  a1[3] = &byte_55FB88;
  sub_3BEB1C(a1 + 4, a3);
  sub_3BEB1C(a1 + 5, a4);
  a1[6] = &byte_55FB88;
  a1[7] = &byte_55FB88;
  return a1;
}


//======================================================================
// Ogre::Exception::Exception(int,std::string const&,std::string const&,char const*,char const*,long)
// address: 0x001540BC   size: 0x6C (108 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9ExceptionC1EiRKSsS2_PKcS4_l'
Ogre::Exception *__fastcall Ogre::Exception::Exception(
        Ogre::Exception *a1,
        int a2,
        int a3,
        int a4,
        char *a5,
        char *a6,
        int a7)
{
  char *FullDescription; // r0
  const char *v11; // r1

  *((_DWORD *)a1 + 1) = a7;
  *(_DWORD *)a1 = &off_4563E0;
  *((_DWORD *)a1 + 2) = a2;
  sub_3BF0BC((int)a1 + 12, a5);
  sub_3BEB1C((char *)a1 + 16, a3);
  sub_3BEB1C((char *)a1 + 20, a4);
  sub_3BF0BC((int)a1 + 24, a6);
  *((_DWORD *)a1 + 7) = &byte_55FB88;
  Ogre::LogSetCurParam(
    (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreException.cpp",
    (const char *)&dword_38 + 3,
    8,
    (unsigned int)&byte_55FB88);
  FullDescription = Ogre::Exception::getFullDescription(a1);
  Ogre::LogMessage(*(Ogre **)FullDescription, v11);
  return a1;
}


//======================================================================
// Ogre::Exception::Exception(Ogre::Exception const&)
// address: 0x00154134   size: 0x4A (74 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9ExceptionC1ERKS0_'
Ogre::Exception *__fastcall Ogre::Exception::Exception(Ogre::Exception *this, const Ogre::Exception *a2)
{
  *(_DWORD *)this = &off_4563E0;
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 3) = &byte_55FB88;
  sub_3BEB1C((char *)this + 16, (char *)a2 + 16);
  sub_3BEB1C((char *)this + 20, (char *)a2 + 20);
  sub_3BEB1C((char *)this + 24, (char *)a2 + 24);
  *((_DWORD *)this + 7) = &byte_55FB88;
  return this;
}


//======================================================================
// Ogre::Exception::operator=(Ogre::Exception const&)
// address: 0x00154188   size: 0x3C (60 bytes)
//======================================================================
int __fastcall Ogre::Exception::operator=(int a1, int a2)
{
  sub_3BEBBC(a1 + 16);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  sub_3BEBBC(a1 + 20);
  sub_3BEBBC(a1 + 24);
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  return sub_3BEBBC(a1 + 12);
}

