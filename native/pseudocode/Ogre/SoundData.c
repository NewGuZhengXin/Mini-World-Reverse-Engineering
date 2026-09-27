// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::SoundData

//======================================================================
// Ogre::SoundData::getRTTI(void)const
// address: 0x0014BC38   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::SoundData::getRTTI(Ogre::SoundData *this)
{
  return &Ogre::SoundData::m_RTTI;
}


//======================================================================
// Ogre::SoundData::~SoundData()
// address: 0x0014BC44   size: 0x1E (30 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9SoundDataD1Ev'
void __fastcall Ogre::SoundData::~SoundData(Ogre::FixedString **this, void *a2)
{
  void *v3; // r1

  *this = (Ogre::FixedString *)&off_455EA8;
  Ogre::FixedString::release(*(this + 4), a2);
  Ogre::Resource::~Resource(this, v3);
}


//======================================================================
// Ogre::SoundData::~SoundData()
// address: 0x0014BC68   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::SoundData::~SoundData(Ogre::FixedString **this, void *a2)
{
  Ogre::SoundData::~SoundData(this, a2);
  operator delete(this);
}


//======================================================================
// Ogre::SoundData::newObject(void)
// address: 0x0014BC7C   size: 0x22 (34 bytes)
//======================================================================
_DWORD *__fastcall Ogre::SoundData::newObject(Ogre::SoundData *this)
{
  _DWORD *result; // r0

  result = (_DWORD *)operator new(0x54u);
  result[1] = 1;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  *result = &off_455EA8;
  result[20] = 0;
  return result;
}


//======================================================================
// Ogre::SoundData::_serialize(Ogre::Archive &,int)
// address: 0x0014BCB2   size: 0x15C (348 bytes)
//======================================================================
Ogre::Archive *__fastcall Ogre::SoundData::_serialize(Ogre::Archive *this, Ogre::Archive *a2, int a3)
{
  Ogre::Archive *v3; // r4

  v3 = this;
  switch ( a3 )
  {
    case 'e':
      Ogre::Archive::operator<<((int)a2, (Ogre::Archive *)((char *)this + 16));
      Ogre::Archive::serialize(a2, (char *)v3 + 76, 4u);
      Ogre::Archive::operator<<(a2, (char *)v3 + 20);
      Ogre::Archive::operator<<(a2, (char *)v3 + 24);
      Ogre::Archive::operator<<(a2, (char *)v3 + 28);
      Ogre::Archive::serialize(a2, (char *)v3 + 36, 0xCu);
      Ogre::Archive::serialize(a2, (char *)v3 + 48, 0xCu);
      this = Ogre::Archive::serialize(a2, (char *)v3 + 60, 1u);
      *((_DWORD *)v3 + 16) = 0;
      *((_DWORD *)v3 + 17) = 0;
LABEL_5:
      *((_DWORD *)v3 + 18) = 0;
      return this;
    case 'f':
      Ogre::Archive::operator<<((int)a2, (Ogre::Archive *)((char *)this + 16));
      Ogre::Archive::serialize(a2, (char *)v3 + 76, 4u);
      Ogre::Archive::operator<<(a2, (char *)v3 + 20);
      Ogre::Archive::operator<<(a2, (char *)v3 + 24);
      Ogre::Archive::operator<<(a2, (char *)v3 + 28);
      Ogre::Archive::serialize(a2, (char *)v3 + 36, 0xCu);
      Ogre::Archive::serialize(a2, (char *)v3 + 48, 0xCu);
      Ogre::Archive::serialize(a2, (char *)v3 + 60, 1u);
      Ogre::Archive::operator<<(a2, (char *)v3 + 64);
      this = Ogre::Archive::operator<<(a2, (char *)v3 + 68);
      goto LABEL_5;
    case 'g':
      Ogre::Archive::operator<<((int)a2, (Ogre::Archive *)((char *)this + 16));
      Ogre::Archive::serialize(a2, (char *)v3 + 76, 4u);
      Ogre::Archive::operator<<(a2, (char *)v3 + 20);
      Ogre::Archive::operator<<(a2, (char *)v3 + 24);
      Ogre::Archive::operator<<(a2, (char *)v3 + 28);
      Ogre::Archive::serialize(a2, (char *)v3 + 36, 0xCu);
      Ogre::Archive::serialize(a2, (char *)v3 + 48, 0xCu);
      Ogre::Archive::serialize(a2, (char *)v3 + 60, 1u);
      Ogre::Archive::operator<<(a2, (char *)v3 + 64);
      Ogre::Archive::operator<<(a2, (char *)v3 + 68);
      return Ogre::Archive::operator<<(a2, (char *)v3 + 72);
    default:
      break;
  }
  return this;
}

