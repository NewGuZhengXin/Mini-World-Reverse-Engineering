// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::LoadWrap

//======================================================================
// Ogre::LoadWrap::~LoadWrap()
// address: 0x0018B22C   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre8LoadWrapD1Ev'
void __fastcall Ogre::LoadWrap::~LoadWrap(Ogre::LoadWrap *this)
{
  *(_DWORD *)this = &off_4580C8;
}


//======================================================================
// Ogre::LoadWrap::~LoadWrap()
// address: 0x0018B23C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::LoadWrap::~LoadWrap(Ogre::LoadWrap *this)
{
  Ogre::LoadWrap::~LoadWrap(this);
  operator delete(this);
}


//======================================================================
// Ogre::LoadWrap::backgroundLoad(Ogre::FixedString const&)
// address: 0x0018B250   size: 0x14 (20 bytes)
//======================================================================
int *__fastcall Ogre::LoadWrap::backgroundLoad(Ogre::LoadWrap *this, const Ogre::FixedString *a2)
{
  return Ogre::ResourceManager::backgroundLoad(
           (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton,
           a2,
           this,
           0);
}


//======================================================================
// Ogre::LoadWrap::breakLoad(unsigned int)
// address: 0x0018B268   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::LoadWrap::breakLoad(Ogre::LoadWrap *this, unsigned int a2)
{
  ;
}


//======================================================================
// Ogre::LoadWrap::ResourceLoad(Ogre::Resource *,unsigned int)
// address: 0x0018B26A   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::LoadWrap::ResourceLoad(Ogre::LoadWrap *this, Ogre::Resource *a2, unsigned int a3)
{
  return (*(int (__fastcall **)(Ogre::LoadWrap *, Ogre::Resource *, unsigned int))(*(_DWORD *)this + 8))(this, a2, a3);
}

