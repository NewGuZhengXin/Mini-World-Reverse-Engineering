// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::MotionPostElementData

//======================================================================
// Ogre::MotionPostElementData::getRTTI(void)const
// address: 0x001868A4   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::MotionPostElementData::getRTTI(Ogre::MotionPostElementData *this)
{
  return &Ogre::MotionPostElementData::m_RTTI;
}


//======================================================================
// Ogre::MotionPostElementData::~MotionPostElementData()
// address: 0x00186A78   size: 0x2E (46 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre21MotionPostElementDataD1Ev'
void __fastcall Ogre::MotionPostElementData::~MotionPostElementData(Ogre::FixedString **this, void *a2)
{
  void *v3; // r1

  *this = (Ogre::FixedString *)&off_457EF8;
  Ogre::FixedString::~FixedString(this + 39, a2);
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::BaseKeyFrameArray *)(this + 24));
  Ogre::KeyFrameArray<Ogre::Vector4>::~KeyFrameArray((Ogre::BaseKeyFrameArray *)(this + 12));
  Ogre::MotionElementData::~MotionElementData(this, v3);
}


//======================================================================
// Ogre::MotionPostElementData::~MotionPostElementData()
// address: 0x00186AAC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::MotionPostElementData::~MotionPostElementData(Ogre::FixedString **this, void *a2)
{
  Ogre::MotionPostElementData::~MotionPostElementData(this, a2);
  operator delete(this);
}


//======================================================================
// Ogre::MotionPostElementData::newObject(void)
// address: 0x00186C1C   size: 0x6A (106 bytes)
//======================================================================
_DWORD *__fastcall Ogre::MotionPostElementData::newObject(Ogre::MotionPostElementData *this)
{
  _DWORD *v1; // r4

  v1 = (_DWORD *)operator new(0xA4u);
  Ogre::MotionElementData::MotionElementData(v1);
  v1[13] = 1;
  *v1 = &off_457EF8;
  v1[14] = 0;
  v1[15] = 0;
  v1[16] = 0;
  v1[17] = 1;
  v1[25] = 1;
  v1[12] = &off_457E08;
  v1[18] = 0;
  v1[19] = 0;
  v1[20] = 0;
  v1[21] = 0;
  v1[22] = 0;
  v1[23] = 0;
  v1[26] = 0;
  v1[27] = 0;
  v1[28] = 0;
  v1[29] = 1;
  v1[24] = &off_455A48;
  v1[30] = 0;
  v1[31] = 0;
  v1[32] = 0;
  v1[33] = 0;
  v1[34] = 0;
  v1[35] = 0;
  v1[39] = 0;
  return v1;
}


//======================================================================
// Ogre::MotionPostElementData::_serialize(Ogre::Archive &,int)
// address: 0x00187ACC   size: 0x70 (112 bytes)
//======================================================================
int *__fastcall Ogre::MotionPostElementData::_serialize(const char **this, Ogre::Archive *a2, int a3)
{
  _DWORD *v6; // r1
  int *v7; // r7
  _DWORD *v8; // r5
  int *result; // r0

  Ogre::MotionElementData::_serialize(this, a2, a3);
  Ogre::Archive::operator<<(a2, this + 11);
  Ogre::KeyFrameArray<Ogre::Vector4>::_serialize(this + 12, a2);
  Ogre::KeyFrameArray<float>::_serialize(this + 24, a2);
  v6 = this + 38;
  v7 = (int *)(this + 39);
  v8 = this + 40;
  if ( a3 <= 100 )
  {
    *v6 = 2;
    result = Ogre::FixedString::operator=(v7, "toolres\\fxeditor\\ice.dds");
  }
  else
  {
    Ogre::Archive::operator<<(a2, v6);
    result = (int *)Ogre::Archive::operator<<((int)a2, (const char **)v7);
    if ( a3 != 101 )
      return (int *)Ogre::Archive::serialize(a2, v8, 4u);
  }
  *v8 = 1065353216;
  return result;
}

