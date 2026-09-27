// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::DummyNodeData

//======================================================================
// Ogre::DummyNodeData::getRTTI(void)const
// address: 0x00149B04   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::DummyNodeData::getRTTI(Ogre::DummyNodeData *this)
{
  return &Ogre::DummyNodeData::m_RTTI;
}


//======================================================================
// Ogre::DummyNodeData::~DummyNodeData()
// address: 0x00149B10   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13DummyNodeDataD1Ev'
void __fastcall Ogre::DummyNodeData::~DummyNodeData(Ogre::FixedString **this, void *a2)
{
  *this = (Ogre::FixedString *)&off_455CC8;
  Ogre::Resource::~Resource(this, a2);
}


//======================================================================
// Ogre::DummyNodeData::~DummyNodeData()
// address: 0x00149B2C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::DummyNodeData::~DummyNodeData(Ogre::FixedString **this, void *a2)
{
  Ogre::DummyNodeData::~DummyNodeData(this, a2);
  operator delete(this);
}


//======================================================================
// Ogre::DummyNodeData::_serialize(Ogre::Archive &,int)
// address: 0x00149B3E   size: 0x20 (32 bytes)
//======================================================================
Ogre::Archive *__fastcall Ogre::DummyNodeData::_serialize(Ogre::DummyNodeData *this, Ogre::Archive *a2, int a3)
{
  Ogre::Archive::serialize(a2, (char *)this + 16, 4u);
  return Ogre::Archive::serialize(a2, (char *)this + 20, 1u);
}


//======================================================================
// Ogre::DummyNodeData::DummyNodeData(void)
// address: 0x00149B60   size: 0x18 (24 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13DummyNodeDataC1Ev'
int __fastcall Ogre::DummyNodeData::DummyNodeData(int this)
{
  *(_DWORD *)(this + 4) = 1;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  *(_BYTE *)(this + 20) = 0;
  *(_DWORD *)this = &off_455CC8;
  return this;
}


//======================================================================
// Ogre::DummyNodeData::newObject(void)
// address: 0x00149B7C   size: 0x12 (18 bytes)
//======================================================================
int __fastcall Ogre::DummyNodeData::newObject(Ogre::DummyNodeData *this)
{
  int v1; // r4

  v1 = operator new(0x18u);
  Ogre::DummyNodeData::DummyNodeData(v1);
  return v1;
}

