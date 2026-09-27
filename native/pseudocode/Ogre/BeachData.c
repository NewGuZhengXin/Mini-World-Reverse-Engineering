// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::BeachData

//======================================================================
// Ogre::BeachData::getRTTI(void)const
// address: 0x0017D100   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::BeachData::getRTTI(Ogre::BeachData *this)
{
  return &Ogre::BeachData::m_RTTI;
}


//======================================================================
// Ogre::BeachData::~BeachData()
// address: 0x0017D10C   size: 0x3E (62 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9BeachDataD1Ev'
void __fastcall Ogre::BeachData::~BeachData(Ogre::BeachData *this, void *a2)
{
  _DWORD *v3; // r0
  _DWORD *v4; // r0
  void *v5; // r0

  *(_DWORD *)this = &off_4578A0;
  v3 = *((_DWORD **)this + 15);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)this + 15) = 0;
  }
  v4 = *((_DWORD **)this + 16);
  if ( v4 != nullptr )
  {
    Ogre::BaseObject::release(v4);
    *((_DWORD *)this + 16) = 0;
  }
  v5 = *((void **)this + 12);
  if ( v5 != nullptr )
    operator delete(v5);
  Ogre::Resource::~Resource((Ogre::FixedString **)this, a2);
}


//======================================================================
// Ogre::BeachData::~BeachData()
// address: 0x0017D150   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::BeachData::~BeachData(Ogre::BeachData *this, void *a2)
{
  Ogre::BeachData::~BeachData(this, a2);
  operator delete(this);
}


//======================================================================
// Ogre::BeachData::BeachData(void)
// address: 0x0017D164   size: 0x3C (60 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9BeachDataC1Ev'
_DWORD *__fastcall Ogre::BeachData::BeachData(_DWORD *this)
{
  *(this + 1) = 1;
  *(this + 6) = 1;
  *this = &off_4578A0;
  *(this + 2) = 0;
  *(this + 4) = 1120403456;
  *(this + 3) = 0;
  *(this + 12) = 0;
  *(this + 5) = 1084227584;
  *(this + 13) = 0;
  *(this + 14) = 0;
  *(this + 7) = 1092616192;
  *(this + 8) = 1065353216;
  *(this + 10) = 0;
  *(this + 9) = 1065353216;
  *(this + 11) = 1065353216;
  *(this + 15) = 0;
  *(this + 16) = 0;
  return this;
}


//======================================================================
// Ogre::BeachData::newObject(void)
// address: 0x0017D1B0   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall Ogre::BeachData::newObject(Ogre::BeachData *this)
{
  _DWORD *v1; // r4

  v1 = (_DWORD *)operator new(0x44u);
  Ogre::BeachData::BeachData(v1);
  return v1;
}


//======================================================================
// Ogre::BeachData::_serialize(Ogre::Archive &,int)
// address: 0x0017D1C2   size: 0x78 (120 bytes)
//======================================================================
int __fastcall Ogre::BeachData::_serialize(Ogre::BeachData *this, Ogre::Archive *a2, int a3)
{
  Ogre::TextureData **v5; // r2
  Ogre::TextureData **v6; // r2

  Ogre::Archive::operator<<(a2, (char *)this + 16);
  Ogre::Archive::operator<<(a2, (char *)this + 20);
  Ogre::Archive::serialize(a2, (char *)this + 24, 4u);
  Ogre::Archive::operator<<(a2, (char *)this + 28);
  Ogre::Archive::operator<<(a2, (char *)this + 32);
  Ogre::Archive::operator<<(a2, (char *)this + 40);
  Ogre::Archive::operator<<(a2, (char *)this + 36);
  Ogre::Archive::operator<<(a2, (char *)this + 44);
  Ogre::Archive::serializeRawArray<Ogre::Vector3>((int)a2, (_DWORD *)this + 12);
  Ogre::SerializeExternalTexture(a2, (Ogre::BeachData *)((char *)this + 60), v5);
  return Ogre::SerializeExternalTexture(a2, (Ogre::BeachData *)((char *)this + 64), v6);
}

