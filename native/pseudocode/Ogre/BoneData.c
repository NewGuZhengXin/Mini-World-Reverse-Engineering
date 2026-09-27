// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::BoneData

//======================================================================
// Ogre::BoneData::getRTTI(void)const
// address: 0x00155C9C   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::BoneData::getRTTI(Ogre::BoneData *this)
{
  return &Ogre::BoneData::m_RTTI;
}


//======================================================================
// Ogre::BoneData::~BoneData()
// address: 0x00155CB4   size: 0x24 (36 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre8BoneDataD1Ev'
void __fastcall Ogre::BoneData::~BoneData(Ogre::FixedString **this, void *a2)
{
  void *v3; // r1
  void *v4; // r1

  *this = (Ogre::FixedString *)&off_4564E8;
  Ogre::FixedString::release(*(this + 5), a2);
  Ogre::FixedString::release(*(this + 4), v3);
  Ogre::Resource::~Resource(this, v4);
}


//======================================================================
// Ogre::BoneData::~BoneData()
// address: 0x00155CDC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::BoneData::~BoneData(Ogre::FixedString **this, void *a2)
{
  Ogre::BoneData::~BoneData(this, a2);
  operator delete(this);
}


//======================================================================
// Ogre::BoneData::newObject(void)
// address: 0x00155CF0   size: 0x2C (44 bytes)
//======================================================================
_DWORD *__fastcall Ogre::BoneData::newObject(Ogre::BoneData *this)
{
  _DWORD *v1; // r0
  _DWORD *v2; // r4

  v1 = (_DWORD *)operator new(0x60u);
  v1[1] = 1;
  v2 = v1;
  v1[2] = 0;
  v1[3] = 0;
  *v1 = &off_4564E8;
  v1[4] = 0;
  v1[5] = 0;
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)(v1 + 8));
  return v2;
}


//======================================================================
// Ogre::BoneData::_serialize(Ogre::Archive &,int)
// address: 0x00155D20   size: 0x34 (52 bytes)
//======================================================================
Ogre::Archive *__fastcall Ogre::BoneData::_serialize(Ogre::BoneData *this, Ogre::Archive *a2, int a3)
{
  Ogre::Archive::operator<<((int)a2, (Ogre::BoneData *)((char *)this + 16));
  Ogre::Archive::operator<<((int)a2, (Ogre::BoneData *)((char *)this + 20));
  Ogre::Archive::serialize(a2, (char *)this + 28, 4u);
  return Ogre::Archive::serialize(a2, (char *)this + 32, 0x40u);
}

