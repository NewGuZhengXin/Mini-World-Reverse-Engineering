// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ParamShapeData

//======================================================================
// Ogre::ParamShapeData::getRTTI(void)const
// address: 0x0018F4C8   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::ParamShapeData::getRTTI(Ogre::ParamShapeData *this)
{
  return &Ogre::ParamShapeData::m_RTTI;
}


//======================================================================
// Ogre::ParamShapeData::~ParamShapeData()
// address: 0x0018F4E8   size: 0x104 (260 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre14ParamShapeDataD1Ev'
void __fastcall Ogre::ParamShapeData::~ParamShapeData(Ogre::ParamShapeData *this)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0
  void *v4; // r1

  *(_DWORD *)this = &off_458278;
  v2 = *((_DWORD **)this + 20);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 20) = 0;
  }
  v3 = *((_DWORD **)this + 19);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)this + 19) = 0;
  }
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::ParamShapeData *)((char *)this + 1092));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::ParamShapeData *)((char *)this + 1044));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::ParamShapeData *)((char *)this + 996));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::ParamShapeData *)((char *)this + 948));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::ParamShapeData *)((char *)this + 900));
  Ogre::KeyFrameArray<Ogre::ColourValue>::~KeyFrameArray((Ogre::ParamShapeData *)((char *)this + 852));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::ParamShapeData *)((char *)this + 804));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::ParamShapeData *)((char *)this + 756));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::ParamShapeData *)((char *)this + 708));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::ParamShapeData *)((char *)this + 660));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::ParamShapeData *)((char *)this + 612));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::ParamShapeData *)((char *)this + 564));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::ParamShapeData *)((char *)this + 516));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::ParamShapeData *)((char *)this + 468));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::ParamShapeData *)((char *)this + 420));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::ParamShapeData *)((char *)this + 372));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::ParamShapeData *)((char *)this + 324));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::ParamShapeData *)((char *)this + 276));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::ParamShapeData *)((char *)this + 228));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::ParamShapeData *)((char *)this + 180));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::ParamShapeData *)((char *)this + 132));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::ParamShapeData *)((char *)this + 84));
  Ogre::Resource::~Resource((Ogre::FixedString **)this, v4);
}


//======================================================================
// Ogre::ParamShapeData::~ParamShapeData()
// address: 0x0018F5F8   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::ParamShapeData::~ParamShapeData(Ogre::ParamShapeData *this)
{
  Ogre::ParamShapeData::~ParamShapeData(this);
  operator delete(this);
}


//======================================================================
// Ogre::ParamShapeData::ParamShapeData(void)
// address: 0x0018F60C   size: 0x150 (336 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre14ParamShapeDataC1Ev'
Ogre::ParamShapeData *__fastcall Ogre::ParamShapeData::ParamShapeData(Ogre::ParamShapeData *this)
{
  *((_DWORD *)this + 1) = 1;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *(_DWORD *)this = &off_458278;
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 21);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 33);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 45);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 57);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 69);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 81);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 93);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 105);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 117);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 129);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 141);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 153);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 165);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 177);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 189);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 201);
  *((_DWORD *)this + 214) = 1;
  *((_DWORD *)this + 215) = 0;
  *((_DWORD *)this + 216) = 0;
  *((_DWORD *)this + 217) = 0;
  *((_DWORD *)this + 213) = &off_455A18;
  *((_DWORD *)this + 218) = 1;
  *((_DWORD *)this + 219) = 0;
  *((_DWORD *)this + 220) = 0;
  *((_DWORD *)this + 221) = 0;
  *((_DWORD *)this + 222) = 0;
  *((_DWORD *)this + 223) = 0;
  *((_DWORD *)this + 224) = 0;
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 225);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 237);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 249);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 261);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 273);
  *((_DWORD *)this + 9) = 0;
  *((_BYTE *)this + 16) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_BYTE *)this + 52) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  return this;
}


//======================================================================
// Ogre::ParamShapeData::newObject(void)
// address: 0x0018F770   size: 0x12 (18 bytes)
//======================================================================
Ogre::ParamShapeData *__fastcall Ogre::ParamShapeData::newObject(Ogre::ParamShapeData *this)
{
  Ogre::ParamShapeData *v1; // r4

  v1 = (Ogre::ParamShapeData *)operator new(0x474u);
  Ogre::ParamShapeData::ParamShapeData(v1);
  return v1;
}


//======================================================================
// Ogre::ParamShapeData::_serialize(Ogre::Archive &,int)
// address: 0x0018F788   size: 0x1CE (462 bytes)
//======================================================================
int __fastcall Ogre::ParamShapeData::_serialize(Ogre::ParamShapeData *this, Ogre::Archive *a2, int a3)
{
  Ogre::TextureData **v6; // r2
  Ogre::TextureData **v7; // r2
  int result; // r0

  Ogre::Archive::serialize(a2, (char *)this + 16, 1u);
  Ogre::Archive::operator<<(a2, (char *)this + 20);
  Ogre::Archive::operator<<(a2, (char *)this + 24);
  Ogre::Archive::operator<<(a2, (char *)this + 28);
  Ogre::Archive::operator<<(a2, (char *)this + 32);
  Ogre::Archive::serialize(a2, (char *)this + 36, 4u);
  Ogre::Archive::operator<<(a2, (char *)this + 40);
  Ogre::Archive::operator<<(a2, (char *)this + 44);
  Ogre::Archive::operator<<(a2, (char *)this + 48);
  Ogre::Archive::serialize(a2, (char *)this + 52, 1u);
  Ogre::Archive::operator<<(a2, (char *)this + 56);
  Ogre::Archive::operator<<(a2, (char *)this + 60);
  Ogre::Archive::operator<<(a2, (char *)this + 64);
  Ogre::Archive::operator<<(a2, (char *)this + 68);
  Ogre::Archive::operator<<(a2, (char *)this + 72);
  Ogre::SerializeExternalTexture(a2, (Ogre::ParamShapeData *)((char *)this + 76), v6);
  Ogre::SerializeExternalTexture(a2, (Ogre::ParamShapeData *)((char *)this + 80), v7);
  Ogre::operator<<<float>((int)a2, (int)this + 84);
  Ogre::operator<<<float>((int)a2, (int)this + 132);
  Ogre::operator<<<float>((int)a2, (int)this + 180);
  Ogre::operator<<<float>((int)a2, (int)this + 228);
  Ogre::operator<<<float>((int)a2, (int)this + 276);
  Ogre::operator<<<float>((int)a2, (int)this + 324);
  Ogre::operator<<<float>((int)a2, (int)this + 372);
  Ogre::operator<<<float>((int)a2, (int)this + 420);
  Ogre::operator<<<float>((int)a2, (int)this + 468);
  Ogre::operator<<<float>((int)a2, (int)this + 516);
  Ogre::operator<<<float>((int)a2, (int)this + 564);
  Ogre::operator<<<float>((int)a2, (int)this + 612);
  Ogre::operator<<<float>((int)a2, (int)this + 660);
  Ogre::operator<<<float>((int)a2, (int)this + 708);
  Ogre::operator<<<float>((int)a2, (int)this + 756);
  Ogre::operator<<<float>((int)a2, (int)this + 804);
  (*(void (__fastcall **)(char *, Ogre::Archive *, int))(*((_DWORD *)this + 213) + 12))((char *)this + 852, a2, 100);
  Ogre::operator<<<float>((int)a2, (int)this + 900);
  Ogre::operator<<<float>((int)a2, (int)this + 948);
  Ogre::operator<<<float>((int)a2, (int)this + 996);
  Ogre::operator<<<float>((int)a2, (int)this + 1044);
  result = Ogre::operator<<<float>((int)a2, (int)this + 1092);
  if ( a3 <= 100 && *((_DWORD *)a2 + 2) == 1 )
  {
    *((_DWORD *)this + 10) = 0;
    *((_DWORD *)this + 18) = 1;
  }
  return result;
}


//======================================================================
// Ogre::ParamShapeData::prepareData(unsigned int,Ogre::ParamShapeFrameData &)
// address: 0x0018F960   size: 0x1EE (494 bytes)
//======================================================================
__int64 __fastcall Ogre::ParamShapeData::prepareData(int a1, unsigned int a2, int a3)
{
  int v6; // r0
  __int64 v8; // [sp+0h] [bp-Ch]

  HIDWORD(v8) = a2;
  Ogre::KeyFrameArray<float>::getValue(a1 + 84, 0, a2, (int *)a3, 0);
  Ogre::KeyFrameArray<float>::getValue(a1 + 180, 0, a2, (int *)(a3 + 8), 0);
  Ogre::KeyFrameArray<float>::getValue(a1 + 228, 0, a2, (int *)(a3 + 12), 0);
  Ogre::KeyFrameArray<float>::getValue(a1 + 276, 0, a2, (int *)(a3 + 16), 0);
  Ogre::KeyFrameArray<float>::getValue(a1 + 324, 0, a2, (int *)(a3 + 20), 0);
  Ogre::KeyFrameArray<float>::getValue(a1 + 372, 0, a2, (int *)(a3 + 24), 0);
  Ogre::KeyFrameArray<float>::getValue(a1 + 564, 0, a2, (int *)(a3 + 56), 0);
  Ogre::KeyFrameArray<float>::getValue(a1 + 612, 0, a2, (int *)(a3 + 60), 0);
  Ogre::KeyFrameArray<float>::getValue(a1 + 132, 0, a2, (int *)(a3 + 4), 0);
  Ogre::KeyFrameArray<float>::getValue(a1 + 420, 0, a2, (int *)(a3 + 28), 0);
  Ogre::KeyFrameArray<float>::getValue(a1 + 468, 0, a2, (int *)(a3 + 32), 0);
  Ogre::KeyFrameArray<float>::getValue(a1 + 516, 0, a2, (int *)(a3 + 36), 0);
  Ogre::KeyFrameArray<float>::getValue(a1 + 660, 0, a2, (int *)(a3 + 64), 0);
  Ogre::KeyFrameArray<float>::getValue(a1 + 708, 0, a2, (int *)(a3 + 68), 0);
  Ogre::KeyFrameArray<float>::getValue(a1 + 756, 0, a2, (int *)(a3 + 72), 0);
  Ogre::KeyFrameArray<float>::getValue(a1 + 804, 0, a2, (int *)(a3 + 76), 0);
  Ogre::KeyFrameArray<Ogre::ColourValue>::getValue((_DWORD *)(a1 + 852), 0, a2, (float *)(a3 + 40), 0);
  Ogre::KeyFrameArray<float>::getValue(a1 + 900, 0, a2, (int *)(a3 + 80), 0);
  Ogre::KeyFrameArray<float>::getValue(a1 + 948, 0, a2, (int *)(a3 + 84), 0);
  Ogre::KeyFrameArray<float>::getValue(a1 + 996, 0, a2, (int *)(a3 + 88), 0);
  Ogre::KeyFrameArray<float>::getValue(a1 + 1044, 0, a2, (int *)(a3 + 92), 0);
  Ogre::KeyFrameArray<float>::getValue(a1 + 1092, 0, a2, (int *)(a3 + 96), 0);
  v6 = (int)(float)(*(float *)(a1 + 36) * 1000.0);
  if ( v6 > 0 )
  {
    *(_DWORD *)(a3 + 100) = a2 / v6 % (*(_DWORD *)(a1 + 32) * *(_DWORD *)(a1 + 28));
    *(_DWORD *)(a3 + 104) = a2 / v6 % (*(_DWORD *)(a1 + 68) * *(_DWORD *)(a1 + 64));
  }
  else
  {
    *(_DWORD *)(a3 + 104) = 0;
    *(_DWORD *)(a3 + 100) = 0;
  }
  return v8;
}

