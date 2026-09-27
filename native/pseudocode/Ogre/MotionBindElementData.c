// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::MotionBindElementData

//======================================================================
// Ogre::MotionBindElementData::getRTTI(void)const
// address: 0x00186898   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::MotionBindElementData::getRTTI(Ogre::MotionBindElementData *this)
{
  return &Ogre::MotionBindElementData::m_RTTI;
}


//======================================================================
// Ogre::MotionBindElementData::~MotionBindElementData()
// address: 0x00186AC0   size: 0x62 (98 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre21MotionBindElementDataD1Ev'
void __fastcall Ogre::MotionBindElementData::~MotionBindElementData(Ogre::MotionBindElementData *this)
{
  _DWORD *v2; // r0
  void *v3; // r1
  void *v4; // r1
  void *v5; // r1

  *(_DWORD *)this = &off_457ED0;
  v2 = *((_DWORD **)this + 21);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 21) = 0;
  }
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::MotionBindElementData *)((char *)this + 332));
  Ogre::KeyFrameArray<Ogre::Vector3>::~KeyFrameArray((Ogre::MotionBindElementData *)((char *)this + 280));
  Ogre::KeyFrameArray<Ogre::Vector3>::~KeyFrameArray((Ogre::MotionBindElementData *)((char *)this + 228));
  Ogre::KeyFrameArray<Ogre::Quaternion>::~KeyFrameArray((Ogre::MotionBindElementData *)((char *)this + 180));
  Ogre::KeyFrameArray<Ogre::Vector3>::~KeyFrameArray((Ogre::MotionBindElementData *)((char *)this + 132));
  Ogre::FixedString::~FixedString((Ogre::FixedString **)this + 27, v3);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)this + 23, v4);
  Ogre::MotionElementData::~MotionElementData((Ogre::FixedString **)this, v5);
}


//======================================================================
// Ogre::MotionBindElementData::~MotionBindElementData()
// address: 0x00186B28   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::MotionBindElementData::~MotionBindElementData(Ogre::MotionBindElementData *this)
{
  Ogre::MotionBindElementData::~MotionBindElementData(this);
  operator delete(this);
}


//======================================================================
// Ogre::MotionBindElementData::MotionBindElementData(void)
// address: 0x00186E00   size: 0xB0 (176 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre21MotionBindElementDataC1Ev'
Ogre::MotionBindElementData *__fastcall Ogre::MotionBindElementData::MotionBindElementData(
        Ogre::MotionBindElementData *this)
{
  Ogre::MotionElementData::MotionElementData(this);
  *(_DWORD *)this = &off_457ED0;
  Ogre::BINDOBJ_T::BINDOBJ_T((int)this + 52);
  Ogre::KeyFrameArray<Ogre::Vector3>::KeyFrameArray((_DWORD *)this + 33);
  *((_DWORD *)this + 46) = 1;
  *((_DWORD *)this + 47) = 0;
  *((_DWORD *)this + 48) = 0;
  *((_DWORD *)this + 49) = 0;
  *((_DWORD *)this + 50) = 1;
  *((_DWORD *)this + 51) = 0;
  *((_DWORD *)this + 52) = 0;
  *((_DWORD *)this + 53) = 0;
  *((_DWORD *)this + 54) = 0;
  *((_DWORD *)this + 55) = 0;
  *((_DWORD *)this + 56) = 0;
  *((_DWORD *)this + 45) = &off_456368;
  Ogre::KeyFrameArray<Ogre::Vector3>::KeyFrameArray((_DWORD *)this + 57);
  Ogre::KeyFrameArray<Ogre::Vector3>::KeyFrameArray((_DWORD *)this + 70);
  *((_DWORD *)this + 84) = 1;
  *((_DWORD *)this + 85) = 0;
  *((_DWORD *)this + 86) = 0;
  *((_DWORD *)this + 87) = 0;
  *((_DWORD *)this + 83) = &off_455A48;
  *((_DWORD *)this + 88) = 1;
  *((_DWORD *)this + 89) = 0;
  *((_DWORD *)this + 90) = 0;
  *((_DWORD *)this + 91) = 0;
  *((_DWORD *)this + 92) = 0;
  *((_DWORD *)this + 93) = 0;
  *((_DWORD *)this + 94) = 0;
  return this;
}


//======================================================================
// Ogre::MotionBindElementData::newObject(void)
// address: 0x00186EC0   size: 0x14 (20 bytes)
//======================================================================
Ogre::MotionBindElementData *__fastcall Ogre::MotionBindElementData::newObject(Ogre::MotionBindElementData *this)
{
  Ogre::MotionBindElementData *v1; // r4

  v1 = (Ogre::MotionBindElementData *)operator new(0x17Cu);
  Ogre::MotionBindElementData::MotionBindElementData(v1);
  return v1;
}


//======================================================================
// Ogre::MotionBindElementData::_serialize(Ogre::Archive &,int)
// address: 0x00187A36   size: 0x96 (150 bytes)
//======================================================================
int __fastcall Ogre::MotionBindElementData::_serialize(const char **this, Ogre::Archive *a2, Ogre::BINDOBJ_T *a3)
{
  int v6; // r3

  Ogre::MotionElementData::_serialize(this, a2, (int)a3);
  Ogre::Archive::operator<<(a2, this + 11);
  Ogre::Archive::operator<<(a2, this + 12);
  Ogre::Archive::operator<<(a2, this + 69);
  Ogre::Archive::serialize(a2, this + 82, 1u);
  Ogre::SerializeBindObj(a2, (Ogre::Archive *)(this + 13), a3, v6);
  (*((void (__fastcall **)(char *, Ogre::Archive *, int))*(this + 33) + 3))((char *)this + 132, a2, 100);
  Ogre::KeyFrameArray<Ogre::Vector3>::_serialize(this + 33, a2);
  Ogre::KeyFrameArray<Ogre::Quaternion>::_serialize(this + 45, a2);
  Ogre::KeyFrameArray<Ogre::Vector3>::_serialize(this + 57, a2);
  Ogre::KeyFrameArray<Ogre::Vector3>::_serialize(this + 70, a2);
  return Ogre::KeyFrameArray<float>::_serialize(this + 83, a2);
}

