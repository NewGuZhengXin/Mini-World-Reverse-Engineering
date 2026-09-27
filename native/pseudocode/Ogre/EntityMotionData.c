// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::EntityMotionData

//======================================================================
// Ogre::EntityMotionData::getRTTI(void)const
// address: 0x001868BC   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::EntityMotionData::getRTTI(Ogre::EntityMotionData *this)
{
  return &Ogre::EntityMotionData::m_RTTI;
}


//======================================================================
// Ogre::EntityMotionData::~EntityMotionData()
// address: 0x00186A1C   size: 0x44 (68 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16EntityMotionDataD1Ev'
void __fastcall Ogre::EntityMotionData::~EntityMotionData(Ogre::EntityMotionData *this, void *a2)
{
  unsigned int v3; // r5
  _DWORD **v4; // r0
  void *v5; // r1

  v3 = 0;
  *(_DWORD *)this = &off_457F48;
  while ( 1 )
  {
    v4 = *((_DWORD ***)this + 8);
    if ( v3 >= (*((_DWORD *)this + 9) - (int)v4) >> 2 )
      break;
    Ogre::BaseObject::release(v4[v3++]);
  }
  *((_DWORD *)this + 9) = v4;
  if ( v4 != nullptr )
    operator delete(v4);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)this + 5, a2);
  Ogre::Resource::~Resource((Ogre::FixedString **)this, v5);
}


//======================================================================
// Ogre::EntityMotionData::~EntityMotionData()
// address: 0x00186A64   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::EntityMotionData::~EntityMotionData(Ogre::EntityMotionData *this, void *a2)
{
  Ogre::EntityMotionData::~EntityMotionData(this, a2);
  operator delete(this);
}


//======================================================================
// Ogre::EntityMotionData::EntityMotionData(void)
// address: 0x00186CE0   size: 0x1E (30 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16EntityMotionDataC1Ev'
_DWORD *__fastcall Ogre::EntityMotionData::EntityMotionData(_DWORD *this)
{
  *(this + 1) = 1;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *this = &off_457F48;
  *(this + 5) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  return this;
}


//======================================================================
// Ogre::EntityMotionData::newObject(void)
// address: 0x00186D04   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall Ogre::EntityMotionData::newObject(Ogre::EntityMotionData *this)
{
  _DWORD *v1; // r4

  v1 = (_DWORD *)operator new(0x2Cu);
  Ogre::EntityMotionData::EntityMotionData(v1);
  return v1;
}


//======================================================================
// Ogre::EntityMotionData::_serialize(Ogre::Archive &,int)
// address: 0x00187994   size: 0xA2 (162 bytes)
//======================================================================
__int64 __fastcall Ogre::EntityMotionData::_serialize(__int64 this, int a2)
{
  _DWORD *v3; // r1
  int v4; // r0
  unsigned int v5; // r2
  unsigned int i; // r6
  Ogre::BaseObject **v7; // r7
  __int64 v9; // [sp+0h] [bp-Ch] BYREF
  int v10; // [sp+8h] [bp-4h]

  v9 = this;
  v10 = a2;
  Ogre::Archive::serialize((Ogre::Archive *)HIDWORD(this), (void *)(this + 16), 4u);
  Ogre::Archive::operator<<(SHIDWORD(this), (const char **)(this + 20));
  Ogre::Archive::operator<<((Ogre::Archive *)HIDWORD(this), (void *)(this + 24));
  Ogre::Archive::operator<<((Ogre::Archive *)HIDWORD(this), (void *)(this + 28));
  LODWORD(v9) = (*(_DWORD *)(this + 36) - *(_DWORD *)(this + 32)) >> 2;
  Ogre::Archive::serialize((Ogre::Archive *)HIDWORD(this), &v9, 4u);
  if ( *(_DWORD *)(HIDWORD(this) + 8) == 1 )
  {
    v3 = *(_DWORD **)(this + 36);
    v4 = *(_DWORD *)(this + 32);
    HIDWORD(v9) = 0;
    v5 = ((int)v3 - v4) >> 2;
    if ( (unsigned int)v9 <= v5 )
    {
      if ( (unsigned int)v9 < v5 )
        *(_DWORD *)(this + 36) = v4 + 4 * v9;
    }
    else
    {
      std::vector<Ogre::MotionElementData *>::_M_fill_insert(this + 32, v3, v9 - v5, (void **)&v9 + 1);
    }
  }
  for ( i = 0; i < (unsigned int)v9; ++i )
  {
    v7 = (Ogre::BaseObject **)(*(_DWORD *)(this + 32) + 4 * i);
    if ( *(_DWORD *)(HIDWORD(this) + 8) == 1 )
      *v7 = (Ogre::BaseObject *)Ogre::Archive::readObject((Ogre::Archive *)HIDWORD(this));
    else
      Ogre::Archive::writeObject((Ogre::Archive *)HIDWORD(this), *v7);
  }
  return v9;
}

