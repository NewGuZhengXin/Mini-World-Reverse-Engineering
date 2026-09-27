// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::BuildingData

//======================================================================
// Ogre::BuildingData::getRTTI(void)const
// address: 0x0018F40C   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::BuildingData::getRTTI(Ogre::BuildingData *this)
{
  return &Ogre::BuildingData::m_RTTI;
}


//======================================================================
// Ogre::BuildingData::~BuildingData()
// address: 0x0018F418   size: 0x58 (88 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12BuildingDataD1Ev'
void __fastcall Ogre::BuildingData::~BuildingData(Ogre::BuildingData *this, void *a2)
{
  int v2; // r6
  int v4; // r5
  _DWORD *i; // r0
  _DWORD *v6; // r7
  void *v7; // r0
  void *v8; // r0
  int v9; // [sp+4h] [bp-8h]

  v2 = *((_DWORD *)this + 16);
  *(_DWORD *)this = &off_458240;
  v4 = v2;
  v9 = *((_DWORD *)this + 17);
  while ( v4 != v9 )
  {
    for ( i = *(_DWORD **)(v4 + 136); i != (_DWORD *)(v4 + 136); i = v6 )
    {
      v6 = (_DWORD *)*i;
      operator delete(i);
    }
    v4 += 144;
  }
  v7 = *((void **)this + 16);
  if ( v7 != nullptr )
    operator delete(v7);
  v8 = *((void **)this + 13);
  if ( v8 != nullptr )
    operator delete(v8);
  Ogre::Resource::~Resource((Ogre::FixedString **)this, a2);
}


//======================================================================
// Ogre::BuildingData::~BuildingData()
// address: 0x0018F474   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::BuildingData::~BuildingData(Ogre::BuildingData *this, void *a2)
{
  Ogre::BuildingData::~BuildingData(this, a2);
  operator delete(this);
}


//======================================================================
// Ogre::BuildingData::BuildingData(void)
// address: 0x0018F488   size: 0x28 (40 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12BuildingDataC1Ev'
int __fastcall Ogre::BuildingData::BuildingData(int this)
{
  *(_DWORD *)(this + 4) = 1;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)this = &off_458240;
  *(_DWORD *)(this + 12) = 0;
  *(_BYTE *)(this + 40) = 0;
  *(_DWORD *)(this + 52) = 0;
  *(_DWORD *)(this + 56) = 0;
  *(_DWORD *)(this + 60) = 0;
  *(_DWORD *)(this + 64) = 0;
  *(_DWORD *)(this + 68) = 0;
  *(_DWORD *)(this + 72) = 0;
  return this;
}


//======================================================================
// Ogre::BuildingData::newObject(void)
// address: 0x0018F4B4   size: 0x12 (18 bytes)
//======================================================================
int __fastcall Ogre::BuildingData::newObject(Ogre::BuildingData *this)
{
  int v1; // r4

  v1 = operator new(0x4Cu);
  Ogre::BuildingData::BuildingData(v1);
  return v1;
}

