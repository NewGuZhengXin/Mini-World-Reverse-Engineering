// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::BillboardData

//======================================================================
// Ogre::BillboardData::getRTTI(void)const
// address: 0x0015C010   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::BillboardData::getRTTI(Ogre::BillboardData *this)
{
  return &Ogre::BillboardData::m_RTTI;
}


//======================================================================
// Ogre::BillboardData::~BillboardData()
// address: 0x0015C030   size: 0xE0 (224 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13BillboardDataD1Ev'
void __fastcall Ogre::BillboardData::~BillboardData(Ogre::BillboardData *this)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0
  void *v4; // r1

  *(_DWORD *)this = &off_4568E0;
  v2 = *((_DWORD **)this + 275);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 275) = 0;
  }
  v3 = *((_DWORD **)this + 276);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)this + 276) = 0;
  }
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::BillboardData *)((char *)this + 972));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::BillboardData *)((char *)this + 924));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::BillboardData *)((char *)this + 876));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::BillboardData *)((char *)this + 828));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::BillboardData *)((char *)this + 780));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::BillboardData *)((char *)this + 732));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::BillboardData *)((char *)this + 684));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::BillboardData *)((char *)this + 636));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::BillboardData *)((char *)this + 588));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::BillboardData *)((char *)this + 540));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::BillboardData *)((char *)this + 492));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::BillboardData *)((char *)this + 444));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::BillboardData *)((char *)this + 396));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::BillboardData *)((char *)this + 348));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::BillboardData *)((char *)this + 300));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::BillboardData *)((char *)this + 252));
  Ogre::KeyFrameArray<Ogre::ColourValue>::~KeyFrameArray((Ogre::BillboardData *)((char *)this + 204));
  Ogre::Resource::~Resource((Ogre::FixedString **)this, v4);
}


//======================================================================
// Ogre::BillboardData::~BillboardData()
// address: 0x0015C118   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::BillboardData::~BillboardData(Ogre::BillboardData *this)
{
  Ogre::BillboardData::~BillboardData(this);
  operator delete(this);
}


//======================================================================
// Ogre::BillboardData::BillboardData(void)
// address: 0x0015C12C   size: 0x138 (312 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13BillboardDataC1Ev'
Ogre::BillboardData *__fastcall Ogre::BillboardData::BillboardData(Ogre::BillboardData *this)
{
  char *v2; // r3
  char *v3; // r0

  *((_DWORD *)this + 1) = 1;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *(_DWORD *)this = &off_4568E0;
  v2 = (char *)this + 64;
  v3 = (char *)this + 112;
  do
  {
    *(_DWORD *)v2 = 1065353216;
    *((_DWORD *)v2 + 1) = 1065353216;
    *((_DWORD *)v2 + 2) = 1065353216;
    *((_DWORD *)v2 + 3) = 1065353216;
    v2 += 16;
  }
  while ( v2 != v3 );
  *((_BYTE *)this + 200) = 1;
  *((_BYTE *)this + 201) = 0;
  *((_DWORD *)this + 52) = 1;
  *((_DWORD *)this + 53) = 0;
  *((_DWORD *)this + 54) = 0;
  *((_DWORD *)this + 55) = 0;
  *((_DWORD *)this + 56) = 1;
  *((_DWORD *)this + 57) = 0;
  *((_DWORD *)this + 51) = &off_455A18;
  *((_DWORD *)this + 58) = 0;
  *((_DWORD *)this + 59) = 0;
  *((_DWORD *)this + 60) = 0;
  *((_DWORD *)this + 61) = 0;
  *((_DWORD *)this + 62) = 0;
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 63);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 75);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 87);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 99);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 111);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 123);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 135);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 147);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 159);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 171);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 183);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 195);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 207);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 219);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 231);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 243);
  *((_DWORD *)this + 255) = 1065353216;
  *((_DWORD *)this + 256) = 1065353216;
  *((_DWORD *)this + 257) = 1065353216;
  *((_DWORD *)this + 258) = 1065353216;
  *((_DWORD *)this + 275) = 0;
  *((_DWORD *)this + 276) = 0;
  *((_BYTE *)this + 200) = 1;
  *((_BYTE *)this + 201) = 0;
  return this;
}


//======================================================================
// Ogre::BillboardData::newObject(void)
// address: 0x0015C274   size: 0x12 (18 bytes)
//======================================================================
Ogre::BillboardData *__fastcall Ogre::BillboardData::newObject(Ogre::BillboardData *this)
{
  Ogre::BillboardData *v1; // r4

  v1 = (Ogre::BillboardData *)operator new(0x454u);
  Ogre::BillboardData::BillboardData(v1);
  return v1;
}


//======================================================================
// Ogre::BillboardData::PrepareData(unsigned int)
// address: 0x0015C28C   size: 0x1A6 (422 bytes)
//======================================================================
int __fastcall Ogre::BillboardData::PrepareData(Ogre::BillboardData *this, unsigned int a2)
{
  int result; // r0
  int v5[2]; // [sp+Ch] [bp-8h] BYREF

  Ogre::KeyFrameArray<Ogre::ColourValue>::getValue((_DWORD *)this + 51, 0, a2, (float *)this + 255, 0);
  Ogre::KeyFrameArray<float>::getValue((int)this + 444, 0, a2, (int *)this + 265, 0);
  Ogre::KeyFrameArray<float>::getValue((int)this + 492, 0, a2, (int *)this + 266, 0);
  Ogre::KeyFrameArray<float>::getValue((int)this + 540, 0, a2, (int *)this + 267, 0);
  Ogre::KeyFrameArray<float>::getValue((int)this + 252, 0, a2, (int *)this + 259, 0);
  if ( *((_BYTE *)this + 201) != 0 )
  {
    Ogre::KeyFrameArray<float>::getValue((int)this + 924, 0, a2, (int *)this + 261, 0);
    Ogre::KeyFrameArray<float>::getValue((int)this + 972, 0, a2, (int *)this + 262, 0);
  }
  Ogre::KeyFrameArray<float>::getValue((int)this + 300, 0, a2, (int *)this + 260, 0);
  Ogre::KeyFrameArray<float>::getValue((int)this + 348, 0, a2, (int *)this + 263, 0);
  Ogre::KeyFrameArray<float>::getValue((int)this + 396, 0, a2, (int *)this + 264, 0);
  Ogre::KeyFrameArray<float>::getValue((int)this + 588, 0, a2, v5, 0);
  result = (int)(float)(*(float *)v5 + 0.5);
  *((_DWORD *)this + 268) = result;
  if ( *((_DWORD *)this + 276) != 0 )
  {
    Ogre::KeyFrameArray<float>::getValue((int)this + 636, 0, a2, (int *)this + 269, 0);
    Ogre::KeyFrameArray<float>::getValue((int)this + 684, 0, a2, (int *)this + 270, 0);
    Ogre::KeyFrameArray<float>::getValue((int)this + 732, 0, a2, (int *)this + 271, 0);
    Ogre::KeyFrameArray<float>::getValue((int)this + 780, 0, a2, (int *)this + 272, 0);
    Ogre::KeyFrameArray<float>::getValue((int)this + 828, 0, a2, (int *)this + 273, 0);
    Ogre::KeyFrameArray<float>::getValue((int)this + 876, 0, a2, v5, 0);
    result = (int)(float)(*(float *)v5 + 0.5);
    *((_DWORD *)this + 274) = result;
  }
  return result;
}


//======================================================================
// Ogre::BillboardData::_serialize(Ogre::Archive &,int)
// address: 0x0015C454   size: 0x1A4 (420 bytes)
//======================================================================
__int64 __fastcall Ogre::BillboardData::_serialize(__int64 this, int a2)
{
  void *v4; // r1
  _BYTE *v5; // r7
  Ogre::TextureData **v6; // r2
  __int64 v8; // [sp+0h] [bp-Ch]

  v8 = this;
  Ogre::Archive::serialize((Ogre::Archive *)HIDWORD(this), (void *)(this + 16), 0x78u);
  v4 = (void *)(this + 136);
  v5 = (_BYTE *)(this + 200);
  if ( a2 <= 101 )
  {
    Ogre::Archive::serialize((Ogre::Archive *)HIDWORD(this), v4, 0x34u);
    *(_BYTE *)(this + 188) = 1;
    *(_DWORD *)(this + 192) = 0;
    *(_DWORD *)(this + 196) = 0;
    *v5 = 1;
    *(_BYTE *)(this + 201) = 0;
  }
  else
  {
    Ogre::Archive::serialize((Ogre::Archive *)HIDWORD(this), v4, 0x40u);
    *v5 = 1;
    if ( a2 <= 103 && (HIDWORD(v8) = this + 201, *(_BYTE *)(this + 201) = 0, a2 == 103) )
    {
      Ogre::Archive::serialize((Ogre::Archive *)HIDWORD(this), (void *)(this + 200), 1u);
      *(_BYTE *)HIDWORD(v8) = 0;
    }
    else if ( a2 == 104 )
    {
      Ogre::Archive::serialize((Ogre::Archive *)HIDWORD(this), (void *)(this + 200), 1u);
      Ogre::Archive::serialize((Ogre::Archive *)HIDWORD(this), (void *)(this + 201), 1u);
    }
  }
  Ogre::KeyFrameArray<Ogre::ColourValue>::_serialize((_DWORD *)(this + 204), (Ogre::Archive *)HIDWORD(this));
  Ogre::KeyFrameArray<float>::_serialize((_DWORD *)(this + 252), (Ogre::Archive *)HIDWORD(this));
  Ogre::KeyFrameArray<float>::_serialize((_DWORD *)(this + 300), (Ogre::Archive *)HIDWORD(this));
  Ogre::KeyFrameArray<float>::_serialize((_DWORD *)(this + 348), (Ogre::Archive *)HIDWORD(this));
  Ogre::KeyFrameArray<float>::_serialize((_DWORD *)(this + 396), (Ogre::Archive *)HIDWORD(this));
  Ogre::KeyFrameArray<float>::_serialize((_DWORD *)(this + 444), (Ogre::Archive *)HIDWORD(this));
  Ogre::KeyFrameArray<float>::_serialize((_DWORD *)(this + 492), (Ogre::Archive *)HIDWORD(this));
  Ogre::KeyFrameArray<float>::_serialize((_DWORD *)(this + 540), (Ogre::Archive *)HIDWORD(this));
  Ogre::KeyFrameArray<float>::_serialize((_DWORD *)(this + 588), (Ogre::Archive *)HIDWORD(this));
  Ogre::KeyFrameArray<float>::_serialize((_DWORD *)(this + 636), (Ogre::Archive *)HIDWORD(this));
  Ogre::KeyFrameArray<float>::_serialize((_DWORD *)(this + 684), (Ogre::Archive *)HIDWORD(this));
  Ogre::KeyFrameArray<float>::_serialize((_DWORD *)(this + 732), (Ogre::Archive *)HIDWORD(this));
  Ogre::KeyFrameArray<float>::_serialize((_DWORD *)(this + 780), (Ogre::Archive *)HIDWORD(this));
  Ogre::KeyFrameArray<float>::_serialize((_DWORD *)(this + 828), (Ogre::Archive *)HIDWORD(this));
  Ogre::KeyFrameArray<float>::_serialize((_DWORD *)(this + 876), (Ogre::Archive *)HIDWORD(this));
  if ( a2 == 104 )
  {
    Ogre::KeyFrameArray<float>::_serialize((_DWORD *)(this + 924), (Ogre::Archive *)HIDWORD(this));
    Ogre::KeyFrameArray<float>::_serialize((_DWORD *)(this + 972), (Ogre::Archive *)HIDWORD(this));
  }
  Ogre::SerializeExternalTexture((Ogre *)HIDWORD(this), (Ogre::Archive *)(this + 1100), v6);
  Ogre::SerializeExternalTexture(
    (Ogre *)HIDWORD(this),
    (Ogre::Archive *)((char *)&stru_448.st_size + this),
    (Ogre::TextureData **)&stru_448.st_size);
  if ( *(_DWORD *)(HIDWORD(this) + 8) == 1 && a2 <= 100 )
  {
    *(_DWORD *)(this + 164) = 0;
    *(_DWORD *)(this + 176) = 1;
  }
  return v8;
}

