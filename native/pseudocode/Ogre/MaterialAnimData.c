// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::MaterialAnimData

//======================================================================
// Ogre::MaterialAnimData::getRTTI(void)const
// address: 0x0018FB5C   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::MaterialAnimData::getRTTI(Ogre::MaterialAnimData *this)
{
  return &Ogre::MaterialAnimData::m_RTTI;
}


//======================================================================
// Ogre::MaterialAnimData::getType(void)
// address: 0x0018FB68   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::MaterialAnimData::getType(Ogre::MaterialAnimData *this)
{
  return 2;
}


//======================================================================
// Ogre::MaterialAnimData::_serialize(Ogre::Archive &,int)
// address: 0x0018FB6C   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::MaterialAnimData::_serialize(Ogre::MaterialAnimData *this, Ogre::Archive *a2, int a3)
{
  ;
}


//======================================================================
// Ogre::MaterialAnimData::~MaterialAnimData()
// address: 0x0018FB70   size: 0x22 (34 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16MaterialAnimDataD1Ev'
void __fastcall Ogre::MaterialAnimData::~MaterialAnimData(Ogre::MaterialAnimData *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_4582B0;
  v2 = *((void **)this + 16);
  if ( v2 != nullptr )
    operator delete(v2);
  Ogre::AnimationData::~AnimationData(this);
}


//======================================================================
// Ogre::MaterialAnimData::~MaterialAnimData()
// address: 0x0018FB98   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::MaterialAnimData::~MaterialAnimData(Ogre::MaterialAnimData *this)
{
  Ogre::MaterialAnimData::~MaterialAnimData(this);
  operator delete(this);
}


//======================================================================
// Ogre::MaterialAnimData::newObject(void)
// address: 0x0018FBAC   size: 0x24 (36 bytes)
//======================================================================
_DWORD *__fastcall Ogre::MaterialAnimData::newObject(Ogre::MaterialAnimData *this)
{
  _DWORD *v1; // r4

  v1 = (_DWORD *)operator new(0x4Cu);
  Ogre::AnimationData::AnimationData(v1);
  *v1 = &off_4582B0;
  v1[16] = 0;
  v1[17] = 0;
  v1[18] = 0;
  return v1;
}

