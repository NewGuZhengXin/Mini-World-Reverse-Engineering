// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ZipFilePkg

//======================================================================
// Ogre::ZipFilePkg::ZipFilePkg(void)
// address: 0x0014E440   size: 0x40 (64 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10ZipFilePkgC1Ev'
Ogre::ZipFilePkg *__fastcall Ogre::ZipFilePkg::ZipFilePkg(Ogre::ZipFilePkg *this)
{
  void *v2; // r0
  int v3; // r3

  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 1) = &byte_55FB88;
  *((_DWORD *)this + 2) = &byte_55FB88;
  *(_DWORD *)this = &off_4560F8;
  *((_DWORD *)this + 6) = &byte_55FB88;
  *((_DWORD *)this + 9) = 1223;
  v2 = (void *)operator new[](0x131Cu);
  v3 = *((_DWORD *)this + 9);
  *((_DWORD *)this + 8) = v2;
  j_memset(v2, 0, 4 * v3);
  return this;
}


//======================================================================
// Ogre::ZipFilePkg::close(void)
// address: 0x0014E490   size: 0x14 (20 bytes)
//======================================================================
int __fastcall Ogre::ZipFilePkg::close(Ogre::ZipFilePkg *this)
{
  int result; // r0

  result = *((_DWORD *)this + 5);
  if ( result != 0 )
  {
    result = unzClose();
    *((_DWORD *)this + 5) = 0;
  }
  return result;
}


//======================================================================
// Ogre::ZipFilePkg::~ZipFilePkg()
// address: 0x0014E4A4   size: 0x5E (94 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10ZipFilePkgD1Ev'
void __fastcall Ogre::ZipFilePkg::~ZipFilePkg(Ogre::ZipFilePkg *this)
{
  unsigned int v2; // r6
  void *v3; // r1
  _DWORD *v4; // r0
  int v5; // r7
  int i; // r5
  int v7; // [sp+4h] [bp-8h]

  v2 = 0;
  *(_DWORD *)this = &off_4560F8;
  Ogre::ZipFilePkg::close(this);
  while ( 1 )
  {
    v4 = *((_DWORD **)this + 8);
    if ( v2 >= *((_DWORD *)this + 9) )
      break;
    v5 = 4 * v2;
    for ( i = v4[v2]; i != 0; i = v7 )
    {
      v7 = *(_DWORD *)(i + 20);
      Ogre::FixedString::release(*(Ogre::FixedString **)i, v3);
      operator delete((void *)i);
    }
    ++v2;
    *(_DWORD *)(*((_DWORD *)this + 8) + v5) = 0;
  }
  *((_DWORD *)this + 10) = 0;
  if ( v4 != nullptr )
    operator delete[](v4);
  sub_3BDF80((char *)this + 24);
  Ogre::FilePkgBase::~FilePkgBase(this);
}


//======================================================================
// Ogre::ZipFilePkg::~ZipFilePkg()
// address: 0x0014E508   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::ZipFilePkg::~ZipFilePkg(Ogre::ZipFilePkg *this)
{
  Ogre::ZipFilePkg::~ZipFilePkg(this);
  operator delete(this);
}


//======================================================================
// Ogre::ZipFilePkg::openFile(char const*,bool)
// address: 0x0014E590   size: 0xF0 (240 bytes)
//======================================================================
Ogre **__fastcall Ogre::ZipFilePkg::openFile(Ogre::ZipFilePkg *this, char *a2, bool a3)
{
  int v5; // r2
  Ogre::FixedString *v6; // r7
  unsigned int v7; // r3
  unsigned int *i; // r4
  unsigned int v9; // r3
  const char *v10; // r1
  void *v11; // r1
  Ogre **v12; // r6
  int v13; // r3
  unsigned __int8 *CurrentFile; // r0
  int v15; // r2
  unsigned int v16; // r3
  const char *v17; // r1
  Ogre::FixedString *v19[2]; // [sp+Ch] [bp-8h] BYREF

  sub_3BEB1C(v19, (char *)this + 8);
  sub_3BE948((int)v19, a2);
  v6 = (Ogre::FixedString *)Ogre::FixedString::insert(v19[0], (const char *)0xFFFFFFFF, v5);
  v7 = *((_DWORD *)this + 8);
  for ( i = *(unsigned int **)(4 * ((unsigned int)(-1640531535 * (_DWORD)v6 - 1651615) % *((_DWORD *)this + 9)) + v7);
        ;
        i = (unsigned int *)i[5] )
  {
    if ( i == nullptr )
    {
      Ogre::LogSetCurParam(
        (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgrePackageZipFile.cpp",
        (const char *)&dword_68,
        2,
        v7);
      Ogre::LogMessage((Ogre *)"unzLocateFile failed: %s", (const char *)v19[0]);
      goto LABEL_11;
    }
    v7 = *i;
    if ( (Ogre::FixedString *)*i == v6 )
      break;
  }
  unzGoToFilePos(*((_DWORD *)this + 5), i + 2);
  if ( unzOpenCurrentFile(*((_DWORD *)this + 5)) != 0 )
  {
    Ogre::LogSetCurParam(
      (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgrePackageZipFile.cpp",
      (const char *)&dword_70,
      8,
      v9);
    Ogre::LogMessage((Ogre *)"unzOpenCurrentFile failed.", v10);
LABEL_11:
    v12 = nullptr;
    goto LABEL_13;
  }
  v12 = (Ogre **)operator new(0x1Cu);
  Ogre::MemoryDataStream::MemoryDataStream((Ogre::MemoryDataStream *)v12, i[4]);
  CurrentFile = (unsigned __int8 *)unzReadCurrentFile(*((_DWORD *)this + 5), v12[3], i[4], v13, 0, v19);
  if ( CurrentFile != nullptr )
  {
    v16 = i[4];
    if ( (unsigned __int8 *)v16 != CurrentFile )
    {
      Ogre::LogSetCurParam(
        (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgrePackageZipFile.cpp",
        (const char *)&dword_78,
        8,
        v16);
      Ogre::LogMessage((Ogre *)"the file size is wrong.", v17);
      (*((void (__fastcall **)(Ogre **))*v12 + 1))(v12);
      goto LABEL_11;
    }
  }
  Ogre::DecryptMyFile(v12[3], CurrentFile, v15);
  unzCloseCurrentFile(*((_DWORD *)this + 5));
LABEL_13:
  Ogre::FixedString::release(v6, v11);
  sub_3BDF80(v19);
  return v12;
}


//======================================================================
// Ogre::ZipFilePkg::initFileEntries(char const*)
// address: 0x0014E738   size: 0xA8 (168 bytes)
//======================================================================
int __fastcall Ogre::ZipFilePkg::initFileEntries(Ogre::ZipFilePkg *this, const char *a2)
{
  size_t v4; // r7
  int result; // r0
  int v6; // r2
  _DWORD *v7; // r0
  void *v8; // r1
  Ogre::FixedString *v9; // [sp+1Ch] [bp-168h] BYREF
  _DWORD v10[2]; // [sp+20h] [bp-164h] BYREF
  int v11; // [sp+28h] [bp-15Ch]
  _BYTE v12[28]; // [sp+2Ch] [bp-158h] BYREF
  int v13; // [sp+48h] [bp-13Ch]
  _BYTE v14[256]; // [sp+7Ch] [bp-108h] BYREF

  if ( a2 != nullptr )
    v4 = j_strlen(a2);
  else
    v4 = 0;
  for ( result = unzGoToFirstFile(*((_DWORD *)this + 5)); result == 0; result = unzGoToNextFile(*((_DWORD *)this + 5)) )
  {
    if ( unzGetCurrentFileInfo(*((_DWORD *)this + 5), v12, v14, 255, 0, 0, 0, 0) == 0
      && (v4 == 0 || j_memcmp(a2, v14, v4) == 0) )
    {
      unzGetFilePos(*((_DWORD *)this + 5), v10);
      v11 = v13;
      v9 = (Ogre::FixedString *)Ogre::FixedString::insert((Ogre::FixedString *)v14, (const char *)0xFFFFFFFF, v6);
      v7 = Ogre::HashTable<Ogre::FixedString,Ogre::ZipFileEntry,Ogre::FixedStringHashCoder>::insert(
             (_DWORD *)this + 7,
             &v9);
      v7[2] = v10[0];
      v8 = (void *)v10[1];
      v7[3] = v10[1];
      v7[4] = v11;
      Ogre::FixedString::release(v9, v8);
    }
  }
  return result;
}


//======================================================================
// Ogre::ZipFilePkg::open(std::string const&,bool)
// address: 0x0014E7E4   size: 0x44 (68 bytes)
//======================================================================
int __fastcall Ogre::ZipFilePkg::open(int a1, int a2, int a3)
{
  int v3; // r5
  int v5; // r0
  unsigned int v6; // r3

  v3 = 0;
  if ( a3 != 0 )
  {
    sub_3BEBBC(a1 + 24);
    v5 = unzOpen(*(_DWORD *)(a1 + 24));
    *(_DWORD *)(a1 + 20) = v5;
    if ( v5 != 0 )
    {
      v3 = 1;
      Ogre::ZipFilePkg::initFileEntries((Ogre::ZipFilePkg *)a1, "assets/");
    }
    else
    {
      Ogre::LogSetCurParam(
        (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgrePackageZipFile.cpp",
        (const char *)&dword_34,
        8,
        v6);
      Ogre::LogMessage((Ogre *)"Cannot open zipfile: %s", *(const char **)(a1 + 24));
    }
  }
  return v3;
}

