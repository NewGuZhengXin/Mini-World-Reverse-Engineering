// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::MotionElementData

//======================================================================
// Ogre::MotionElementData::getRTTI(void)const
// address: 0x00186880   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::MotionElementData::getRTTI(Ogre::MotionElementData *this)
{
  return &Ogre::MotionElementData::m_RTTI;
}


//======================================================================
// Ogre::MotionElementData::_serialize(Ogre::Archive &,int)
// address: 0x00186940   size: 0x52 (82 bytes)
//======================================================================
int __fastcall Ogre::MotionElementData::_serialize(const char **this, Ogre::Archive *a2, int a3)
{
  Ogre::Archive::operator<<(a2, this + 4);
  Ogre::Archive::operator<<(a2, this + 5);
  Ogre::Archive::serialize(a2, this + 6, 4u);
  Ogre::Archive::serialize(a2, this + 7, 4u);
  Ogre::Archive::operator<<(a2, this + 8);
  Ogre::Archive::operator<<(a2, this + 9);
  return Ogre::Archive::operator<<((int)a2, this + 10);
}


//======================================================================
// Ogre::MotionElementData::~MotionElementData()
// address: 0x001869B4   size: 0x1E (30 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre17MotionElementDataD1Ev'
void __fastcall Ogre::MotionElementData::~MotionElementData(Ogre::FixedString **this, void *a2)
{
  void *v3; // r1

  *this = (Ogre::FixedString *)&off_457E80;
  Ogre::FixedString::~FixedString(this + 10, a2);
  Ogre::Resource::~Resource(this, v3);
}


//======================================================================
// Ogre::MotionElementData::~MotionElementData()
// address: 0x001869D8   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::MotionElementData::~MotionElementData(Ogre::FixedString **this, void *a2)
{
  Ogre::MotionElementData::~MotionElementData(this, a2);
  operator delete(this);
}


//======================================================================
// Ogre::MotionElementData::MotionElementData(void)
// address: 0x00186BF8   size: 0x1E (30 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre17MotionElementDataC1Ev'
_DWORD *__fastcall Ogre::MotionElementData::MotionElementData(_DWORD *this)
{
  *(this + 1) = 1;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *(this + 10) = 0;
  *this = &off_457E80;
  *(this + 9) = -1;
  return this;
}

