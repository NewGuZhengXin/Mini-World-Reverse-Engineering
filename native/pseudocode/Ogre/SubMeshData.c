// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::SubMeshData

//======================================================================
// Ogre::SubMeshData::newObject(void)
// address: 0x00192F8E   size: 0x12 (18 bytes)
//======================================================================
Ogre::SubMeshData *__fastcall Ogre::SubMeshData::newObject(Ogre::SubMeshData *this)
{
  Ogre::SubMeshData *v1; // r4

  v1 = (Ogre::SubMeshData *)operator new(0x34u);
  Ogre::SubMeshData::SubMeshData(v1);
  return v1;
}


//======================================================================
// Ogre::SubMeshData::getRTTI(void)const
// address: 0x001974F8   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::SubMeshData::getRTTI(Ogre::SubMeshData *this)
{
  return &Ogre::SubMeshData::m_RTTI;
}


//======================================================================
// Ogre::SubMeshData::~SubMeshData()
// address: 0x00197568   size: 0x6C (108 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11SubMeshDataD1Ev'
void __fastcall Ogre::SubMeshData::~SubMeshData(Ogre::SubMeshData *this, void *a2)
{
  _DWORD *v3; // r0
  _DWORD *v4; // r0
  _DWORD *v5; // r0
  unsigned int i; // r5
  _DWORD *v7; // r0
  int v8; // r0

  *(_DWORD *)this = &off_458688;
  v3 = *((_DWORD **)this + 8);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)this + 8) = 0;
  }
  v4 = *((_DWORD **)this + 7);
  if ( v4 != nullptr )
  {
    Ogre::BaseObject::release(v4);
    *((_DWORD *)this + 7) = 0;
  }
  v5 = *((_DWORD **)this + 9);
  if ( v5 != nullptr )
  {
    Ogre::BaseObject::release(v5);
    *((_DWORD *)this + 9) = 0;
  }
  for ( i = 0; ; ++i )
  {
    v7 = *((_DWORD **)this + 10);
    if ( i >= (*((_DWORD *)this + 11) - (int)v7) >> 2 )
      break;
    v8 = v7[i];
    if ( v8 != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 20))(v8);
  }
  *((_DWORD *)this + 11) = v7;
  if ( v7 != nullptr )
    operator delete(v7);
  Ogre::Resource::~Resource((Ogre::FixedString **)this, a2);
}


//======================================================================
// Ogre::SubMeshData::~SubMeshData()
// address: 0x001975D8   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::SubMeshData::~SubMeshData(Ogre::SubMeshData *this, void *a2)
{
  Ogre::SubMeshData::~SubMeshData(this, a2);
  operator delete(this);
}


//======================================================================
// Ogre::SubMeshData::SubMeshData(void)
// address: 0x00197648   size: 0x60 (96 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11SubMeshDataC2Ev'
Ogre::SubMeshData *__fastcall Ogre::SubMeshData::SubMeshData(Ogre::SubMeshData *this, int a2, Ogre::FixedString *a3)
{
  int *v4; // r5
  int v5; // r2
  int v6; // r3
  void *v7; // r1
  _DWORD *v8; // r5
  Ogre::FixedString *v10[2]; // [sp+4h] [bp-8h] BYREF

  v10[1] = a3;
  *((_DWORD *)this + 1) = 1;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *(_DWORD *)this = &off_458688;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  v4 = (int *)operator new(0x50u);
  Ogre::VertexData::VertexData((Ogre::VertexData *)v4);
  *((_DWORD *)this + 8) = v4;
  v10[0] = (Ogre::FixedString *)Ogre::FixedString::insert(
                                  (Ogre::FixedString *)"submesh",
                                  (const char *)0xFFFFFFFF,
                                  v5,
                                  v6);
  Ogre::FixedString::operator=(v4 + 2, (int *)v10);
  Ogre::FixedString::release((int)v10[0], v7);
  v8 = (_DWORD *)operator new(0x28u);
  Ogre::IndexData::IndexData(v8);
  *((_DWORD *)this + 7) = v8;
  return this;
}


//======================================================================
// Ogre::SubMeshData::_serialize(Ogre::Archive &,int)
// address: 0x00197D4A   size: 0x78 (120 bytes)
//======================================================================
Ogre::Archive *__fastcall Ogre::SubMeshData::_serialize(Ogre::SubMeshData *this, Ogre::Archive *a2, int a3)
{
  Ogre::Archive *result; // r0
  unsigned int v7; // r1

  Ogre::Archive::serialize(a2, (char *)this + 16, 4u);
  Ogre::Archive::serialize(a2, (char *)this + 24, 4u);
  (*(void (__fastcall **)(_DWORD, Ogre::Archive *, int))(**((_DWORD **)this + 7) + 12))(*((_DWORD *)this + 7), a2, a3);
  (*(void (__fastcall **)(_DWORD, Ogre::Archive *, int))(**((_DWORD **)this + 8) + 12))(*((_DWORD *)this + 8), a2, a3);
  if ( *((_DWORD *)a2 + 2) == 1 )
    *((_DWORD *)this + 9) = Ogre::Archive::readObject(a2);
  else
    Ogre::Archive::writeObject(a2, *((Ogre::BaseObject **)this + 9));
  result = Ogre::Archive::operator<<<Ogre::SkinPatch>((unsigned int)a2, (int *)this + 10);
  if ( *((_DWORD *)a2 + 2) == 1 )
  {
    v7 = (*(_DWORD *)(*((_DWORD *)this + 7) + 28) - *(_DWORD *)(*((_DWORD *)this + 7) + 24)) >> 1;
    if ( v7 == 0 )
      v7 = *(_DWORD *)(*((_DWORD *)this + 8) + 52);
    result = (Ogre::Archive *)Ogre::nVertex2nPrimitive(*((_DWORD *)this + 4), v7);
    *((_DWORD *)this + 5) = result;
  }
  return result;
}

