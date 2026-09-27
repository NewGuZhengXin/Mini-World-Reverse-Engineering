// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::MorphAnimData

//======================================================================
// Ogre::MorphAnimData::getRTTI(void)const
// address: 0x00167910   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::MorphAnimData::getRTTI(Ogre::MorphAnimData *this)
{
  return &Ogre::MorphAnimData::m_RTTI;
}


//======================================================================
// Ogre::MorphAnimData::getType(void)
// address: 0x0016791C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::MorphAnimData::getType(Ogre::MorphAnimData *this)
{
  return 1;
}


//======================================================================
// Ogre::MorphAnimData::~MorphAnimData()
// address: 0x00167934   size: 0x54 (84 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13MorphAnimDataD1Ev'
void __fastcall Ogre::MorphAnimData::~MorphAnimData(Ogre::MorphAnimData *this, void *a2)
{
  _DWORD *v3; // r0
  int v4; // r3
  void *v5; // r0
  void *v6; // r0

  *(_DWORD *)this = &off_456F30;
  v3 = *((_DWORD **)this + 20);
  if ( v3 != nullptr )
  {
    v4 = v3[1] - 1;
    v3[1] = v4;
    if ( v4 <= 0 )
      (*(void (__fastcall **)(_DWORD *))(*v3 + 24))(v3);
    *((_DWORD *)this + 20) = 0;
  }
  v5 = *((void **)this + 48);
  if ( v5 != nullptr )
    operator delete(v5);
  v6 = *((void **)this + 45);
  if ( v6 != nullptr )
    operator delete(v6);
  Ogre::FixedString::release(*((_DWORD *)this + 16), a2);
  Ogre::AnimationData::~AnimationData(this);
}


//======================================================================
// Ogre::MorphAnimData::~MorphAnimData()
// address: 0x0016798C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::MorphAnimData::~MorphAnimData(Ogre::MorphAnimData *this, void *a2)
{
  Ogre::MorphAnimData::~MorphAnimData(this, a2);
  operator delete(this);
}


//======================================================================
// Ogre::MorphAnimData::MorphAnimData(void)
// address: 0x001679A0   size: 0x32 (50 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13MorphAnimDataC1Ev'
Ogre::MorphAnimData *__fastcall Ogre::MorphAnimData::MorphAnimData(Ogre::MorphAnimData *this)
{
  Ogre::AnimationData::AnimationData(this);
  *(_DWORD *)this = &off_456F30;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 45) = 0;
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 47) = 0;
  *((_DWORD *)this + 48) = 0;
  *((_DWORD *)this + 49) = 0;
  *((_DWORD *)this + 50) = 0;
  return this;
}


//======================================================================
// Ogre::MorphAnimData::newObject(void)
// address: 0x001679D8   size: 0x12 (18 bytes)
//======================================================================
Ogre::MorphAnimData *__fastcall Ogre::MorphAnimData::newObject(Ogre::MorphAnimData *this)
{
  Ogre::MorphAnimData *v1; // r4

  v1 = (Ogre::MorphAnimData *)operator new(0xCCu);
  Ogre::MorphAnimData::MorphAnimData(v1);
  return v1;
}


//======================================================================
// Ogre::MorphAnimData::_serialize(Ogre::Archive &,int)
// address: 0x00167D80   size: 0x78 (120 bytes)
//======================================================================
int __fastcall Ogre::MorphAnimData::_serialize(Ogre::MorphAnimData *this, Ogre::Archive *a2, int a3)
{
  int v5; // r2
  int v6; // r3

  Ogre::Archive::operator<<((int)a2, (Ogre::MorphAnimData *)((char *)this + 64));
  Ogre::Archive::serialize(a2, (char *)this + 68, 4u);
  Ogre::Archive::serialize(a2, (char *)this + 72, 4u);
  Ogre::Archive::serialize(a2, (char *)this + 76, 4u);
  if ( *((_DWORD *)a2 + 2) == 1 )
    *((_DWORD *)this + 20) = Ogre::Archive::readObject(a2);
  else
    Ogre::Archive::writeObject(a2, *((Ogre::BaseObject **)this + 20));
  Ogre::Archive::serialize(a2, (char *)this + 84, 0x30u);
  Ogre::Archive::serialize(a2, (char *)this + 132, 0x30u);
  Ogre::Archive::serializeRawArray<unsigned int>((unsigned int)a2, (int *)this + 45);
  return Ogre::Archive::serializeRawArray<Ogre::MorphAnimData::AnimRange>((int)a2, (unsigned int)this + 192, v5, v6);
}

