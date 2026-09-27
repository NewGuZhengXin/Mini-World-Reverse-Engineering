// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::LightData

//======================================================================
// Ogre::LightData::getRTTI(void)const
// address: 0x0015307C   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::LightData::getRTTI(Ogre::LightData *this)
{
  return &Ogre::LightData::m_RTTI;
}


//======================================================================
// Ogre::LightData::~LightData()
// address: 0x00153088   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9LightDataD1Ev'
void __fastcall Ogre::LightData::~LightData(Ogre::FixedString **this, void *a2)
{
  *this = (Ogre::FixedString *)&off_4562B0;
  Ogre::Resource::~Resource(this, a2);
}


//======================================================================
// Ogre::LightData::~LightData()
// address: 0x001530A4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::LightData::~LightData(Ogre::FixedString **this, void *a2)
{
  Ogre::LightData::~LightData(this, a2);
  operator delete(this);
}


//======================================================================
// Ogre::LightData::newObject(void)
// address: 0x001530B8   size: 0x2A (42 bytes)
//======================================================================
_DWORD *__fastcall Ogre::LightData::newObject(Ogre::LightData *this)
{
  _DWORD *result; // r0

  result = (_DWORD *)operator new(0x2Cu);
  result[1] = 1;
  result[2] = 0;
  result[3] = 0;
  *result = &off_4562B0;
  result[5] = 1065353216;
  result[6] = 1065353216;
  result[7] = 1065353216;
  result[8] = 1065353216;
  return result;
}


//======================================================================
// Ogre::LightData::_serialize(Ogre::Archive &,int)
// address: 0x001530E8   size: 0x38 (56 bytes)
//======================================================================
Ogre::Archive *__fastcall Ogre::LightData::_serialize(Ogre::LightData *this, Ogre::Archive *a2, int a3)
{
  Ogre::Archive::serialize(a2, (char *)this + 16, 4u);
  Ogre::Archive::serialize(a2, (char *)this + 20, 0x10u);
  Ogre::Archive::serialize(a2, (char *)this + 36, 4u);
  return Ogre::Archive::serialize(a2, (char *)this + 40, 4u);
}

