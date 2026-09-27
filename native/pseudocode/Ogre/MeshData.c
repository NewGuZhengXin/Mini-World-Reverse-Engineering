// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::MeshData

//======================================================================
// Ogre::MeshData::newObject(void)
// address: 0x00192F7C   size: 0x12 (18 bytes)
//======================================================================
Ogre::MeshData *__fastcall Ogre::MeshData::newObject(Ogre::MeshData *this)
{
  Ogre::MeshData *v1; // r4

  v1 = (Ogre::MeshData *)operator new(0x44u);
  Ogre::MeshData::MeshData(v1);
  return v1;
}


//======================================================================
// Ogre::MeshData::getRTTI(void)const
// address: 0x00197504   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::MeshData::getRTTI(Ogre::MeshData *this)
{
  return &Ogre::MeshData::m_RTTI;
}


//======================================================================
// Ogre::MeshData::~MeshData()
// address: 0x001975EC   size: 0x42 (66 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre8MeshDataD1Ev'
void __fastcall Ogre::MeshData::~MeshData(Ogre::MeshData *this, void *a2)
{
  unsigned int v3; // r5
  _DWORD **v4; // r0
  void *v5; // r1

  v3 = 0;
  *(_DWORD *)this = &off_4586B0;
  while ( 1 )
  {
    v4 = *((_DWORD ***)this + 5);
    if ( v3 >= (*((_DWORD *)this + 6) - (int)v4) >> 2 )
      break;
    Ogre::BaseObject::release(v4[v3++]);
  }
  *((_DWORD *)this + 6) = v4;
  if ( v4 != nullptr )
    operator delete(v4);
  Ogre::FixedString::release(*((_DWORD *)this + 4), a2);
  Ogre::Resource::~Resource((Ogre::FixedString **)this, v5);
}


//======================================================================
// Ogre::MeshData::~MeshData()
// address: 0x00197634   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::MeshData::~MeshData(Ogre::MeshData *this, void *a2)
{
  Ogre::MeshData::~MeshData(this, a2);
  operator delete(this);
}


//======================================================================
// Ogre::MeshData::MeshData(void)
// address: 0x001976B0   size: 0x2A (42 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre8MeshDataC2Ev'
int __fastcall Ogre::MeshData::MeshData(int this)
{
  *(_DWORD *)(this + 4) = 1;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)this = &off_4586B0;
  *(_DWORD *)(this + 60) = -1;
  *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 16) = 0;
  *(_DWORD *)(this + 20) = 0;
  *(_DWORD *)(this + 24) = 0;
  *(_DWORD *)(this + 28) = 0;
  *(_BYTE *)(this + 64) = 0;
  return this;
}


//======================================================================
// Ogre::MeshData::_serialize(Ogre::Archive &,int)
// address: 0x00197ADA   size: 0x58 (88 bytes)
//======================================================================
Ogre::Archive *__fastcall Ogre::MeshData::_serialize(Ogre::MeshData *this, Ogre::Archive *a2, int a3)
{
  Ogre::Archive::operator<<((int)a2, (const char **)this + 4);
  Ogre::Archive::operator<<<Ogre::SubMeshData>((unsigned int)a2, (int *)this + 5);
  Ogre::Archive::serialize(a2, (char *)this + 32, 0xCu);
  Ogre::Archive::serialize(a2, (char *)this + 44, 0xCu);
  Ogre::Archive::serialize(a2, (char *)this + 56, 4u);
  Ogre::Archive::serialize(a2, (char *)this + 60, 4u);
  return Ogre::Archive::serialize(a2, (char *)this + 64, 1u);
}

