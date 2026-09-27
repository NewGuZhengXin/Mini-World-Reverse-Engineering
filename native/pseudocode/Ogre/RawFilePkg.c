// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::RawFilePkg

//======================================================================
// Ogre::RawFilePkg::deleteStdioDir(char const*)
// address: 0x0016E4FC   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::RawFilePkg::deleteStdioDir(Ogre::RawFilePkg *this, const char *a2)
{
  ;
}


//======================================================================
// Ogre::RawFilePkg::~RawFilePkg()
// address: 0x0016E514   size: 0x1E (30 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10RawFilePkgD1Ev'
void __fastcall Ogre::RawFilePkg::~RawFilePkg(Ogre::RawFilePkg *this)
{
  *(_DWORD *)this = &off_457370;
  sub_3BDF80((char *)this + 20);
  Ogre::FilePkgBase::~FilePkgBase(this);
}


//======================================================================
// Ogre::RawFilePkg::~RawFilePkg()
// address: 0x0016E538   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::RawFilePkg::~RawFilePkg(Ogre::RawFilePkg *this)
{
  Ogre::RawFilePkg::~RawFilePkg(this);
  operator delete(this);
}


//======================================================================
// Ogre::RawFilePkg::RawFilePkg(char const*)
// address: 0x0016E590   size: 0x2A (42 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10RawFilePkgC1EPKc'
Ogre::RawFilePkg *__fastcall Ogre::RawFilePkg::RawFilePkg(Ogre::RawFilePkg *this, char *a2)
{
  *((_DWORD *)this + 1) = &byte_55FB88;
  *((_DWORD *)this + 2) = &byte_55FB88;
  *((_DWORD *)this + 3) = 0;
  *(_DWORD *)this = &off_457370;
  sub_3BF0BC((int)this + 20, a2);
  return this;
}


//======================================================================
// Ogre::RawFilePkg::makeStdioDir(char const*)
// address: 0x0016E5E4   size: 0x60 (96 bytes)
//======================================================================
int __fastcall Ogre::RawFilePkg::makeStdioDir(Ogre::RawFilePkg *this, const char *a2)
{
  signed int v3; // r6
  size_t v4; // r0
  Ogre *v5; // r0
  const char *v6; // r1
  signed int v7; // r5
  Ogre *v8; // r4
  int v9; // r3

  v3 = *(_DWORD *)(*((_DWORD *)this + 5) - 12);
  v4 = j_strlen(a2);
  v5 = (Ogre *)operator new[](v3 + 1 + v4);
  v7 = v3;
  v8 = v5;
  if ( v3 > 0 )
    j_memcpy(v5, *((const void **)this + 5), v3);
  while ( 1 )
  {
    v9 = (unsigned __int8)a2[v7 - v3];
    if ( a2[v7 - v3] == 0 )
      break;
    if ( v9 == 47 || v9 == 92 )
    {
      *((_BYTE *)v8 + v7) = 0;
      Ogre::MakeDirectory(v8, v6);
      LOBYTE(v9) = 47;
    }
    *((_BYTE *)v8 + v7++) = v9;
  }
  if ( v8 != nullptr )
    operator delete[](v8);
  return 1;
}


//======================================================================
// Ogre::RawFilePkg::openFile(char const*,bool)
// address: 0x0016E8BC   size: 0x48 (72 bytes)
//======================================================================
FILE *__fastcall Ogre::RawFilePkg::openFile(Ogre::RawFilePkg *this, char *a2, int a3)
{
  const char *v4; // r1
  FILE *v5; // r5
  FILE *v6; // r6
  char *filename; // [sp+4h] [bp-4h] BYREF

  filename = a2;
  std::operator+<char>((int)&filename, (int)this + 20, a2);
  if ( a3 != 0 )
    v4 = "rb";
  else
    v4 = "wb";
  v5 = j_fopen(filename, v4);
  if ( v5 != nullptr )
  {
    v6 = (FILE *)operator new(0x14u);
    Ogre::FileHandleDataStream::FileHandleDataStream(v6, &filename, v5);
    v5 = v6;
  }
  sub_3BDF80(&filename);
  return v5;
}


//======================================================================
// Ogre::RawFilePkg::openStdioFile(char const*,char const*)
// address: 0x0016E90C   size: 0x28 (40 bytes)
//======================================================================
FILE *__fastcall Ogre::RawFilePkg::openStdioFile(Ogre::RawFilePkg *this, char *a2, char *a3)
{
  FILE *v4; // r5
  char *filename[2]; // [sp+4h] [bp-8h] BYREF

  filename[0] = a2;
  filename[1] = a3;
  std::operator+<char>((int)filename, (int)this + 20, a2);
  v4 = j_fopen(filename[0], a3);
  sub_3BDF80(filename);
  return v4;
}


//======================================================================
// Ogre::RawFilePkg::isStdioDirExist(char const*)
// address: 0x0016E934   size: 0x2E (46 bytes)
//======================================================================
int __fastcall Ogre::RawFilePkg::isStdioDirExist(Ogre::RawFilePkg *this, char *a2, char *a3)
{
  DIR *v3; // r0
  int v4; // r4
  char *name[2]; // [sp+4h] [bp-8h] BYREF

  name[0] = a2;
  name[1] = a3;
  std::operator+<char>((int)name, (int)this + 20, a2);
  v3 = j_opendir(name[0]);
  if ( v3 != nullptr )
  {
    j_closedir(v3);
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  sub_3BDF80(name);
  return v4;
}


//======================================================================
// Ogre::RawFilePkg::isStdioFileExist(char const*)
// address: 0x0016E962   size: 0x34 (52 bytes)
//======================================================================
int __fastcall Ogre::RawFilePkg::isStdioFileExist(Ogre::RawFilePkg *this, char *a2)
{
  int v2; // r4
  char *file; // [sp+4h] [bp-6Ch] BYREF
  struct stat v5; // [sp+8h] [bp-68h] BYREF

  std::operator+<char>((int)&file, (int)this + 20, a2);
  v2 = 0;
  if ( j_stat(file, &v5) == 0 )
    v2 = LOWORD(v5.st_mode) >> 15;
  sub_3BDF80(&file);
  return v2;
}


//======================================================================
// Ogre::RawFilePkg::getStdioFileSize(char const*)
// address: 0x0016E996   size: 0x38 (56 bytes)
//======================================================================
int __fastcall Ogre::RawFilePkg::getStdioFileSize(Ogre::RawFilePkg *this, char *a2)
{
  int st_blksize; // r4
  char *file; // [sp+4h] [bp-6Ch] BYREF
  struct stat v5; // [sp+8h] [bp-68h] BYREF

  std::operator+<char>((int)&file, (int)this + 20, a2);
  st_blksize = j_stat(file, &v5);
  if ( st_blksize != 0 )
  {
    st_blksize = 0;
  }
  else if ( (v5.st_mode & 0x8000) != 0 )
  {
    st_blksize = v5.st_blksize;
  }
  sub_3BDF80(&file);
  return st_blksize;
}


//======================================================================
// Ogre::RawFilePkg::deleteStdioFile(char const*)
// address: 0x0016E9CE   size: 0x1E (30 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> Ogre::RawFilePkg::deleteStdioFile(Ogre::RawFilePkg *this, char *a2)
{
  char *filename; // [sp+4h] [bp-4h] BYREF

  std::operator+<char>((int)&filename, (int)this + 20, a2);
  j_remove(filename);
  sub_3BDF80(&filename);
}


//======================================================================
// Ogre::RawFilePkg::gamePath2StdioPath(std::string &,char const*)
// address: 0x0016E9EC   size: 0x22 (34 bytes)
//======================================================================
int __fastcall Ogre::RawFilePkg::gamePath2StdioPath(int a1, int a2, char *a3)
{
  _DWORD v5[2]; // [sp+4h] [bp-8h] BYREF

  v5[0] = a2;
  v5[1] = a3;
  std::operator+<char>((int)v5, a1 + 20, a3);
  sub_3BEBBC(a2);
  sub_3BDF80(v5);
  return *(_DWORD *)a2;
}

