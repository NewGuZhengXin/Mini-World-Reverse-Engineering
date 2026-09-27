// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::FilePkgBase

//======================================================================
// Ogre::FilePkgBase::openStdioFile(char const*,char const*)
// address: 0x00149BA4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::FilePkgBase::openStdioFile(Ogre::FilePkgBase *this, const char *a2, const char *a3)
{
  return 0;
}


//======================================================================
// Ogre::FilePkgBase::makeStdioDir(char const*)
// address: 0x00149BA8   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::FilePkgBase::makeStdioDir(Ogre::FilePkgBase *this, const char *a2)
{
  return 0;
}


//======================================================================
// Ogre::FilePkgBase::deleteStdioDir(char const*)
// address: 0x00149BAC   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::FilePkgBase::deleteStdioDir(Ogre::FilePkgBase *this, const char *a2)
{
  ;
}


//======================================================================
// Ogre::FilePkgBase::isStdioDirExist(char const*)
// address: 0x00149BAE   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::FilePkgBase::isStdioDirExist(Ogre::FilePkgBase *this, const char *a2)
{
  return 0;
}


//======================================================================
// Ogre::FilePkgBase::isStdioFileExist(char const*)
// address: 0x00149BB2   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::FilePkgBase::isStdioFileExist(Ogre::FilePkgBase *this, const char *a2)
{
  return 0;
}


//======================================================================
// Ogre::FilePkgBase::getStdioFileSize(char const*)
// address: 0x00149BB6   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::FilePkgBase::getStdioFileSize(Ogre::FilePkgBase *this, const char *a2)
{
  return 0;
}


//======================================================================
// Ogre::FilePkgBase::deleteStdioFile(char const*)
// address: 0x00149BBA   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::FilePkgBase::deleteStdioFile(Ogre::FilePkgBase *this, const char *a2)
{
  ;
}


//======================================================================
// Ogre::FilePkgBase::gamePath2StdioPath(std::string &,char const*)
// address: 0x00149BBC   size: 0x4 (4 bytes)
//======================================================================
int Ogre::FilePkgBase::gamePath2StdioPath()
{
  return 0;
}


//======================================================================
// Ogre::FilePkgBase::~FilePkgBase()
// address: 0x00149C1C   size: 0x1E (30 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11FilePkgBaseD1Ev'
void __fastcall Ogre::FilePkgBase::~FilePkgBase(Ogre::FilePkgBase *this)
{
  *(_DWORD *)this = &off_455D28;
  sub_3BDF80((char *)this + 8);
  sub_3BDF80((char *)this + 4);
}


//======================================================================
// Ogre::FilePkgBase::~FilePkgBase()
// address: 0x00149C6E   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::FilePkgBase::~FilePkgBase(Ogre::FilePkgBase *this)
{
  Ogre::FilePkgBase::~FilePkgBase(this);
  operator delete(this);
}

