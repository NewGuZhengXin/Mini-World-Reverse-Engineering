// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::FileLogHandler

//======================================================================
// Ogre::FileLogHandler::~FileLogHandler()
// address: 0x0016A3AC   size: 0x26 (38 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre14FileLogHandlerD1Ev'
void __fastcall Ogre::FileLogHandler::~FileLogHandler(Ogre::FileLogHandler *this)
{
  FILE *v2; // r0

  *(_DWORD *)this = &off_4570C0;
  v2 = *((FILE **)this + 2);
  if ( v2 != nullptr )
    j_fclose(v2);
  *(_DWORD *)this = &off_457098;
}


//======================================================================
// Ogre::FileLogHandler::~FileLogHandler()
// address: 0x0016A3DC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::FileLogHandler::~FileLogHandler(Ogre::FileLogHandler *this)
{
  Ogre::FileLogHandler::~FileLogHandler(this);
  operator delete(this);
}


//======================================================================
// Ogre::FileLogHandler::Handle(char const*,int,unsigned int,char const*)
// address: 0x0016A3F0   size: 0x1E (30 bytes)
//======================================================================
FILE *__fastcall Ogre::FileLogHandler::Handle(
        Ogre::FileLogHandler *this,
        const char *a2,
        int a3,
        unsigned int a4,
        const char *a5)
{
  FILE *result; // r0

  result = *((FILE **)this + 2);
  if ( result != nullptr )
  {
    j_fprintf(result, "%s\n", a5);
    j_fflush(*((FILE **)this + 2));
    return (FILE *)(&dword_0 + 1);
  }
  return result;
}


//======================================================================
// Ogre::FileLogHandler::FileLogHandler(unsigned int,char const*,unsigned int)
// address: 0x0016A414   size: 0x70 (112 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre14FileLogHandlerC1EjPKcj'
Ogre::FileLogHandler *__fastcall Ogre::FileLogHandler::FileLogHandler(
        Ogre::FileLogHandler *this,
        unsigned int a2,
        char *a3,
        unsigned int a4)
{
  int v5; // r0
  const char *v6; // r1
  _BYTE v9[4]; // [sp+8h] [bp-Ch] BYREF
  Ogre *v10[2]; // [sp+Ch] [bp-8h] BYREF

  *((_DWORD *)this + 1) = a2;
  *(_DWORD *)this = &off_4570C0;
  sub_3BF0BC((int)v9, a3);
  while ( 1 )
  {
    v5 = sub_3BD93C((int)v9, "\\");
    if ( v5 == -1 )
      break;
    sub_3BED3C(v10, v9, 0, v5);
    Ogre::MakeDirectory(v10[0], v6);
    sub_3BDF80(v10);
  }
  *((_DWORD *)this + 2) = j_fopen(a3, "wt");
  sub_3BDF80(v9);
  return this;
}

