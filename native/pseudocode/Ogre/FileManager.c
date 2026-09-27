// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::FileManager

//======================================================================
// Ogre::FileManager::FileManager(void)
// address: 0x0016E644   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11FileManagerC2Ev'
_DWORD *__fastcall Ogre::FileManager::FileManager(_DWORD *this)
{
  Ogre::Singleton<Ogre::FileManager>::ms_Singleton = (int)this;
  *this = 0;
  *(this + 1) = 0;
  *(this + 2) = 0;
  return this;
}


//======================================================================
// Ogre::FileManager::~FileManager()
// address: 0x0016E65C   size: 0x3A (58 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11FileManagerD2Ev'
void __fastcall Ogre::FileManager::~FileManager(Ogre::FileManager *this)
{
  unsigned int i; // r4
  _DWORD *v3; // r0
  int v4; // r0

  for ( i = 0; ; ++i )
  {
    v3 = *(_DWORD **)this;
    if ( i >= (*((_DWORD *)this + 1) - *(_DWORD *)this) >> 2 )
      break;
    v4 = v3[i];
    if ( v4 != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
  }
  if ( v3 != nullptr )
    operator delete(v3);
  Ogre::Singleton<Ogre::FileManager>::ms_Singleton = 0;
}


//======================================================================
// Ogre::FileManager::openFile(char const*,bool)
// address: 0x0016E69C   size: 0x74 (116 bytes)
//======================================================================
int __fastcall Ogre::FileManager::openFile(Ogre::FileManager *this, char *a2, int a3)
{
  int v3; // r5
  _BYTE *i; // r5
  unsigned int j; // r5
  _BYTE *v8; // r0
  int v9; // r0
  _DWORD v11[2]; // [sp+4h] [bp-8h] BYREF

  v11[0] = a2;
  v11[1] = a3;
  v3 = (unsigned __int8)*a2;
  if ( *a2 != 0 )
  {
    sub_3BF0BC((int)v11, a2);
    for ( i = (_BYTE *)sub_3BE0F0(v11); i != (_BYTE *)sub_3BE12C(v11); ++i )
    {
      if ( *i == 92 )
        *i = 47;
    }
    for ( j = 0; ; ++j )
    {
      if ( j >= (*((_DWORD *)this + 1) - *(_DWORD *)this) >> 2 )
      {
        v3 = 0;
        goto LABEL_15;
      }
      v8 = *(_BYTE **)(4 * j + *(_DWORD *)this);
      if ( a3 != 0 || v8[16] == 0 )
      {
        v9 = (*(int (__fastcall **)(_BYTE *, _DWORD, int))(*(_DWORD *)v8 + 8))(v8, v11[0], a3);
        if ( v9 != 0 )
          break;
      }
    }
    v3 = v9;
LABEL_15:
    sub_3BDF80(v11);
  }
  return v3;
}


//======================================================================
// Ogre::FileManager::openStdioFile(char const*,char const*)
// address: 0x0016E710   size: 0x6A (106 bytes)
//======================================================================
int __fastcall Ogre::FileManager::openStdioFile(Ogre::FileManager *this, char *a2, const char *a3)
{
  _BYTE *i; // r5
  unsigned int j; // r5
  _BYTE *v7; // r0
  int v8; // r0
  int v9; // r5
  _DWORD v11[2]; // [sp+4h] [bp-8h] BYREF

  v11[0] = a2;
  v11[1] = a3;
  sub_3BF0BC((int)v11, a2);
  for ( i = (_BYTE *)sub_3BE0F0(v11); i != (_BYTE *)sub_3BE12C(v11); ++i )
  {
    if ( *i == 92 )
      *i = 47;
  }
  for ( j = 0; ; ++j )
  {
    if ( j >= (*((_DWORD *)this + 1) - *(_DWORD *)this) >> 2 )
    {
      v9 = 0;
      goto LABEL_13;
    }
    v7 = *(_BYTE **)(4 * j + *(_DWORD *)this);
    if ( v7[16] == 0 )
    {
      v8 = (*(int (__fastcall **)(_BYTE *, _DWORD, const char *))(*(_DWORD *)v7 + 12))(v7, v11[0], a3);
      if ( v8 != 0 )
        break;
    }
  }
  v9 = v8;
LABEL_13:
  sub_3BDF80(v11);
  return v9;
}


//======================================================================
// Ogre::FileManager::makeStdioDir(char const*)
// address: 0x0016E77A   size: 0x30 (48 bytes)
//======================================================================
_BYTE *__fastcall Ogre::FileManager::makeStdioDir(_BYTE *this, const char *a2)
{
  _DWORD *v2; // r5
  unsigned int i; // r4

  v2 = this;
  for ( i = 0; i < (v2[1] - *v2) >> 2; ++i )
  {
    this = *(_BYTE **)(4 * i + *v2);
    if ( *(this + 16) == 0 )
    {
      this = (_BYTE *)(*(int (__fastcall **)(_BYTE *, const char *))(*(_DWORD *)this + 16))(this, a2);
      if ( this != nullptr )
        break;
    }
  }
  return this;
}


//======================================================================
// Ogre::FileManager::deleteStdioDir(char const*)
// address: 0x0016E7AA   size: 0x26 (38 bytes)
//======================================================================
char *__fastcall Ogre::FileManager::deleteStdioDir(Ogre::FileManager *this, const char *a2)
{
  char *result; // r0
  int v3; // r2
  int v4; // r4
  int v5; // r4
  int i; // r3

  v3 = *(_DWORD *)this;
  v4 = *((_DWORD *)this + 1);
  result = (char *)this + 8;
  v5 = (v4 - v3) >> 2;
  for ( i = 0; i != v5; ++i )
  {
    result = *(char **)(v3 + 4 * i);
    if ( result[16] == 0 )
      return (char *)(*(int (__fastcall **)(char *, const char *))(*(_DWORD *)result + 20))(result, a2);
  }
  return result;
}


//======================================================================
// Ogre::FileManager::deleteStdioFile(char const*)
// address: 0x0016E7D0   size: 0x26 (38 bytes)
//======================================================================
char *__fastcall Ogre::FileManager::deleteStdioFile(Ogre::FileManager *this, const char *a2)
{
  char *result; // r0
  int v3; // r2
  int v4; // r4
  int v5; // r4
  int i; // r3

  v3 = *(_DWORD *)this;
  v4 = *((_DWORD *)this + 1);
  result = (char *)this + 8;
  v5 = (v4 - v3) >> 2;
  for ( i = 0; i != v5; ++i )
  {
    result = *(char **)(v3 + 4 * i);
    if ( result[16] == 0 )
      return (char *)(*(int (__fastcall **)(char *, const char *))(*(_DWORD *)result + 36))(result, a2);
  }
  return result;
}


//======================================================================
// Ogre::FileManager::gamePath2StdioPath(std::string &,char const*)
// address: 0x0016E7F6   size: 0x28 (40 bytes)
//======================================================================
int __fastcall Ogre::FileManager::gamePath2StdioPath(int *a1)
{
  int v1; // r4
  int v2; // r5
  int i; // r3
  _BYTE *v4; // r0

  v1 = *a1;
  v2 = (a1[1] - *a1) >> 2;
  for ( i = 0; i != v2; ++i )
  {
    v4 = *(_BYTE **)(v1 + 4 * i);
    if ( v4[16] == 0 )
      return (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v4 + 40))(v4);
  }
  return 0;
}


//======================================================================
// Ogre::FileManager::isStdioDirExist(char const*)
// address: 0x0016E81E   size: 0x28 (40 bytes)
//======================================================================
int __fastcall Ogre::FileManager::isStdioDirExist(Ogre::FileManager *this, const char *a2)
{
  int v2; // r2
  int v3; // r4
  int i; // r3
  _BYTE *v5; // r0

  v2 = *(_DWORD *)this;
  v3 = (*((_DWORD *)this + 1) - *(_DWORD *)this) >> 2;
  for ( i = 0; i != v3; ++i )
  {
    v5 = *(_BYTE **)(v2 + 4 * i);
    if ( v5[16] == 0 )
      return (*(int (__fastcall **)(_BYTE *, const char *))(*(_DWORD *)v5 + 24))(v5, a2);
  }
  return 0;
}


//======================================================================
// Ogre::FileManager::isStdioFileExist(char const*)
// address: 0x0016E846   size: 0x28 (40 bytes)
//======================================================================
int __fastcall Ogre::FileManager::isStdioFileExist(Ogre::FileManager *this, const char *a2)
{
  int v2; // r2
  int v3; // r4
  int i; // r3
  _BYTE *v5; // r0

  v2 = *(_DWORD *)this;
  v3 = (*((_DWORD *)this + 1) - *(_DWORD *)this) >> 2;
  for ( i = 0; i != v3; ++i )
  {
    v5 = *(_BYTE **)(v2 + 4 * i);
    if ( v5[16] == 0 )
      return (*(int (__fastcall **)(_BYTE *, const char *))(*(_DWORD *)v5 + 28))(v5, a2);
  }
  return 0;
}


//======================================================================
// Ogre::FileManager::getStdioFileSize(char const*)
// address: 0x0016E86E   size: 0x32 (50 bytes)
//======================================================================
int __fastcall Ogre::FileManager::getStdioFileSize(Ogre::FileManager *this, const char *a2)
{
  unsigned int i; // r4
  _BYTE *v5; // r0
  int result; // r0

  for ( i = 0; i < (*((_DWORD *)this + 1) - *(_DWORD *)this) >> 2; ++i )
  {
    v5 = *(_BYTE **)(4 * i + *(_DWORD *)this);
    if ( v5[16] == 0 )
    {
      result = (*(int (__fastcall **)(_BYTE *, const char *))(*(_DWORD *)v5 + 32))(v5, a2);
      if ( result > 0 )
        return result;
    }
  }
  return 0;
}


//======================================================================
// Ogre::FileManager::getFileAttrib(char const*)
// address: 0x0016E8A0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::FileManager::getFileAttrib(Ogre::FileManager *this, const char *a2)
{
  return 0;
}


//======================================================================
// Ogre::FileManager::findPackage(char const*)
// address: 0x0016EA32   size: 0x30 (48 bytes)
//======================================================================
int __fastcall Ogre::FileManager::findPackage(int **this, char *a2, const void *a3)
{
  int *v4; // r6
  int *v5; // r7
  int v6; // r4
  const void *v8[2]; // [sp+4h] [bp-8h] BYREF

  v8[0] = a2;
  v8[1] = a3;
  sub_3BF0BC((int)v8, a2);
  v4 = *this;
  v5 = *(this + 1);
  while ( v4 != v5 )
  {
    v6 = *v4++;
    if ( std::operator==<char>(v8, (const void **)(v6 + 4)) )
      goto LABEL_6;
  }
  v6 = 0;
LABEL_6:
  sub_3BDF80(v8);
  return v6;
}


//======================================================================
// Ogre::FileManager::removePackage(char const*)
// address: 0x0016EDC0   size: 0x54 (84 bytes)
//======================================================================
int __fastcall Ogre::FileManager::removePackage(Ogre::FileManager *this, char *a2)
{
  int v3; // r7
  char *i; // r6
  int v5; // r1
  __int64 v6; // r0
  char *v8; // [sp+4h] [bp-10h]
  const void *v9[2]; // [sp+Ch] [bp-8h] BYREF

  sub_3BF0BC((int)v9, a2);
  v3 = *((_DWORD *)this + 1);
  for ( i = *(char **)this; ; i += 4 )
  {
    v8 = i;
    if ( i == (char *)v3 )
      break;
    v5 = *(_DWORD *)i;
    if ( std::operator==<char>(v9, (const void **)(v5 + 4)) )
    {
      if ( v8 + 4 != (char *)v3 )
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::FilePkgBase *>(v8 + 4, v3, v8);
      v6 = *(_QWORD *)this - 0x400000000LL;
      *((_DWORD *)this + 1) = HIDWORD(v6);
      std::sort<__gnu_cxx::__normal_iterator<Ogre::FilePkgBase **,std::vector<Ogre::FilePkgBase *>>,bool (*)(Ogre::FilePkgBase *,Ogre::FilePkgBase *)>(
        v6,
        (int (__fastcall *)(int, int))Ogre::PkgLess);
      return sub_3BDF80(v9);
    }
  }
  return sub_3BDF80(v9);
}


//======================================================================
// Ogre::FileManager::addPackage(Ogre::FILEPKG_TYPE,char const*,char const*,int,bool,char const*)
// address: 0x0016EE18   size: 0x196 (406 bytes)
//======================================================================
int __fastcall Ogre::FileManager::addPackage(int a1, int a2, char *a3, char *a4, const void *a5, char a6, char *a7)
{
  unsigned int v9; // r3
  const char *v10; // r1
  int result; // r0
  int v12; // r4
  int v13; // r7
  unsigned int v14; // r3
  char *v15; // r0
  int v16; // r7
  unsigned int v17; // r3
  int v18; // r3
  __int64 v19; // r0
  int v22; // [sp+20h] [bp-Ch] BYREF
  const char *v23[2]; // [sp+24h] [bp-8h] BYREF

  if ( Ogre::FileManager::findPackage((int **)a1, a3, a5) != 0 )
  {
    Ogre::LogSetCurParam(
      (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreFileSystem.cpp",
      (const char *)&stru_158.st_shndx,
      8,
      v9);
    return Ogre::LogMessage((Ogre *)"File Package %s already exists!!", v10);
  }
  v22 = 0;
  if ( a2 == 0 )
  {
    v12 = operator new(0x18u);
    Ogre::RawFilePkg::RawFilePkg((Ogre::RawFilePkg *)v12, a4);
    goto LABEL_12;
  }
  if ( a2 == 1 )
  {
    v12 = operator new(0x84u);
    *(_DWORD *)(v12 + 12) = 0;
    *(_DWORD *)(v12 + 20) = 0;
    *(_DWORD *)(v12 + 4) = &byte_55FB88;
    *(_DWORD *)(v12 + 8) = &byte_55FB88;
    *(_DWORD *)(v12 + 52) = 0;
    *(_DWORD *)(v12 + 56) = 0;
    *(_DWORD *)(v12 + 60) = 0;
    *(_DWORD *)v12 = &off_455DB0;
    j_memset((void *)(v12 + 68), 0, 0x10u);
    *(_DWORD *)(v12 + 84) = 0;
    *(_DWORD *)(v12 + 76) = v12 + 68;
    *(_DWORD *)(v12 + 80) = v12 + 68;
    Ogre::LockSection::LockSection((pthread_mutex_t *)(v12 + 88));
    *(_DWORD *)(v12 + 96) = 0;
    *(_DWORD *)(v12 + 92) = &byte_55FB88;
    *(_DWORD *)(v12 + 100) = 0;
    *(_DWORD *)(v12 + 104) = 0;
    *(_DWORD *)(v12 + 108) = 0;
    *(_DWORD *)(v12 + 112) = 0;
    *(_DWORD *)(v12 + 116) = 0;
    *(_DWORD *)(v12 + 120) = 0;
    Ogre::LockSection::LockSection((pthread_mutex_t *)(v12 + 124));
    Ogre::LockSection::LockSection((pthread_mutex_t *)(v12 + 128));
    sub_3BF0BC((int)v23, a4);
    v13 = Ogre::FilePackage::open(v12, v23, 1);
    sub_3BDF80(v23);
    if ( v13 != 0 )
      goto LABEL_12;
    Ogre::LogSetCurParam(
      (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreFileSystem.cpp",
      (const char *)&stru_168.st_info,
      8,
      v14);
    v15 = "Load pkgfile %s failed!";
    return Ogre::LogMessage((Ogre *)v15, a4);
  }
  if ( a2 != 2 )
    goto LABEL_13;
  v12 = operator new(0x2Cu);
  Ogre::ZipFilePkg::ZipFilePkg((Ogre::ZipFilePkg *)v12);
  sub_3BF0BC((int)v23, a4);
  v16 = Ogre::ZipFilePkg::open(v12, (int)v23, 1);
  sub_3BDF80(v23);
  if ( v16 == 0 )
  {
    Ogre::LogSetCurParam(
      (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreFileSystem.cpp",
      (const char *)&stru_178.st_value + 2,
      8,
      v17);
    v15 = "Load zipfile %s failed!";
    return Ogre::LogMessage((Ogre *)v15, a4);
  }
LABEL_12:
  v22 = v12;
LABEL_13:
  result = v22;
  if ( v22 != 0 )
  {
    sub_3BE508(v22 + 4, a3);
    if ( a7 != nullptr )
      sub_3BE508(v22 + 8, a7);
    v18 = v22;
    *(_DWORD *)(v22 + 12) = a5;
    *(_BYTE *)(v18 + 16) = a6;
    HIDWORD(v19) = *(_DWORD *)(a1 + 4);
    if ( HIDWORD(v19) == *(_DWORD *)(a1 + 8) )
    {
      LODWORD(v19) = a1;
      std::vector<Ogre::FilePkgBase *>::_M_insert_aux(v19, &v22);
    }
    else
    {
      if ( HIDWORD(v19) != 0 )
        *(_DWORD *)HIDWORD(v19) = v18;
      *(_DWORD *)(a1 + 4) += 4;
    }
    return std::sort<__gnu_cxx::__normal_iterator<Ogre::FilePkgBase **,std::vector<Ogre::FilePkgBase *>>,bool (*)(Ogre::FilePkgBase *,Ogre::FilePkgBase *)>(
             *(_QWORD *)a1,
             (int (__fastcall *)(int, int))Ogre::PkgLess);
  }
  return result;
}

