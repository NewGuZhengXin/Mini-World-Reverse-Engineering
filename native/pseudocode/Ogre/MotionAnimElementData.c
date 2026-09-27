// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::MotionAnimElementData

//======================================================================
// Ogre::MotionAnimElementData::getRTTI(void)const
// address: 0x0018688C   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::MotionAnimElementData::getRTTI(Ogre::MotionAnimElementData *this)
{
  return &Ogre::MotionAnimElementData::m_RTTI;
}


//======================================================================
// Ogre::MotionAnimElementData::_serialize(Ogre::Archive &,int)
// address: 0x00186992   size: 0x20 (32 bytes)
//======================================================================
Ogre::Archive *__fastcall Ogre::MotionAnimElementData::_serialize(const char **this, Ogre::Archive *a2, int a3)
{
  Ogre::MotionElementData::_serialize(this, a2, a3);
  Ogre::Archive::operator<<(a2, this + 11);
  return Ogre::Archive::operator<<(a2, this + 12);
}


//======================================================================
// Ogre::MotionAnimElementData::~MotionAnimElementData()
// address: 0x001869EC   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre21MotionAnimElementDataD1Ev'
void __fastcall Ogre::MotionAnimElementData::~MotionAnimElementData(Ogre::FixedString **this, void *a2)
{
  *this = (Ogre::FixedString *)&off_457EA8;
  Ogre::MotionElementData::~MotionElementData(this, a2);
}


//======================================================================
// Ogre::MotionAnimElementData::~MotionAnimElementData()
// address: 0x00186A08   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::MotionAnimElementData::~MotionAnimElementData(Ogre::FixedString **this, void *a2)
{
  Ogre::MotionAnimElementData::~MotionAnimElementData(this, a2);
  operator delete(this);
}


//======================================================================
// Ogre::MotionAnimElementData::newObject(void)
// address: 0x00186C98   size: 0x1C (28 bytes)
//======================================================================
_DWORD *__fastcall Ogre::MotionAnimElementData::newObject(Ogre::MotionAnimElementData *this)
{
  _DWORD *v1; // r4

  v1 = (_DWORD *)operator new(0x34u);
  Ogre::MotionElementData::MotionElementData(v1);
  *v1 = &off_457EA8;
  return v1;
}

