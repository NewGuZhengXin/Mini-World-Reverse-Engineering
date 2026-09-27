// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::DecalData

//======================================================================
// Ogre::DecalData::getRTTI(void)const
// address: 0x0017CC24   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::DecalData::getRTTI(Ogre::DecalData *this)
{
  return &Ogre::DecalData::m_RTTI;
}


//======================================================================
// Ogre::DecalData::~DecalData()
// address: 0x0017CC44   size: 0xD0 (208 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9DecalDataD1Ev'
void __fastcall Ogre::DecalData::~DecalData(Ogre::DecalData *this)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0
  void *v4; // r1

  *(_DWORD *)this = &off_457868;
  v2 = *((_DWORD **)this + 241);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 241) = 0;
  }
  v3 = *((_DWORD **)this + 242);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)this + 242) = 0;
  }
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::DecalData *)((char *)this + 916));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::DecalData *)((char *)this + 868));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::DecalData *)((char *)this + 820));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::DecalData *)((char *)this + 772));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::DecalData *)((char *)this + 724));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::DecalData *)((char *)this + 676));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::DecalData *)((char *)this + 628));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::DecalData *)((char *)this + 580));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::DecalData *)((char *)this + 532));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::DecalData *)((char *)this + 484));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::DecalData *)((char *)this + 436));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::DecalData *)((char *)this + 388));
  Ogre::KeyFrameArray<Ogre::ColourValue>::~KeyFrameArray((Ogre::DecalData *)((char *)this + 340));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::DecalData *)((char *)this + 292));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::DecalData *)((char *)this + 244));
  Ogre::Resource::~Resource((Ogre::FixedString **)this, v4);
}


//======================================================================
// Ogre::DecalData::~DecalData()
// address: 0x0017CD18   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::DecalData::~DecalData(Ogre::DecalData *this)
{
  Ogre::DecalData::~DecalData(this);
  operator delete(this);
}


//======================================================================
// Ogre::DecalData::DecalData(void)
// address: 0x0017CD2C   size: 0x112 (274 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9DecalDataC1Ev'
Ogre::DecalData *__fastcall Ogre::DecalData::DecalData(Ogre::DecalData *this)
{
  *((_DWORD *)this + 1) = 1;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *(_DWORD *)this = &off_457868;
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 61);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 73);
  *((_DWORD *)this + 86) = 1;
  *((_DWORD *)this + 87) = 0;
  *((_DWORD *)this + 88) = 0;
  *((_DWORD *)this + 89) = 0;
  *((_DWORD *)this + 85) = &off_455A18;
  *((_DWORD *)this + 90) = 1;
  *((_DWORD *)this + 91) = 0;
  *((_DWORD *)this + 92) = 0;
  *((_DWORD *)this + 93) = 0;
  *((_DWORD *)this + 94) = 0;
  *((_DWORD *)this + 95) = 0;
  *((_DWORD *)this + 96) = 0;
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 97);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 109);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 121);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 133);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 145);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 157);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 169);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 181);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 193);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 205);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 217);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 229);
  *((_DWORD *)this + 241) = 0;
  *((_DWORD *)this + 242) = 0;
  *((_DWORD *)this + 245) = 1065353216;
  *((_DWORD *)this + 246) = 1065353216;
  *((_DWORD *)this + 247) = 1065353216;
  *((_DWORD *)this + 248) = 1065353216;
  return this;
}


//======================================================================
// Ogre::DecalData::newObject(void)
// address: 0x0017CE4C   size: 0x12 (18 bytes)
//======================================================================
Ogre::DecalData *__fastcall Ogre::DecalData::newObject(Ogre::DecalData *this)
{
  Ogre::DecalData *v1; // r4

  v1 = (Ogre::DecalData *)operator new(0x414u);
  Ogre::DecalData::DecalData(v1);
  return v1;
}


//======================================================================
// Ogre::DecalData::_serialize(Ogre::Archive &,int)
// address: 0x0017CE64   size: 0x120 (288 bytes)
//======================================================================
int __fastcall Ogre::DecalData::_serialize(Ogre::DecalData *this, Ogre::Archive *a2, int a3)
{
  Ogre::TextureData **v6; // r2
  _DWORD v8[13]; // [sp+0h] [bp-34h] BYREF

  Ogre::Archive::serialize(a2, (char *)this + 16, 0xE4u);
  Ogre::operator<<<float>((int)a2, (int)this + 244);
  if ( a3 > 100 )
  {
    Ogre::operator<<<float>((int)a2, (int)this + 292);
    (*(void (__fastcall **)(char *, Ogre::Archive *, int))(*((_DWORD *)this + 85) + 12))((char *)this + 340, a2, 100);
  }
  else
  {
    Ogre::KeyFrameArray<float>::KeyFrameArray(v8);
    Ogre::operator<<<float>((int)a2, (int)v8);
    Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::BaseKeyFrameArray *)v8);
  }
  Ogre::operator<<<float>((int)a2, (int)this + 388);
  Ogre::operator<<<float>((int)a2, (int)this + 436);
  Ogre::operator<<<float>((int)a2, (int)this + 484);
  Ogre::operator<<<float>((int)a2, (int)this + 532);
  Ogre::operator<<<float>((int)a2, (int)this + 580);
  Ogre::operator<<<float>((int)a2, (int)this + 628);
  Ogre::operator<<<float>((int)a2, (int)this + 676);
  Ogre::operator<<<float>((int)a2, (int)this + 724);
  Ogre::operator<<<float>((int)a2, (int)this + 772);
  Ogre::operator<<<float>((int)a2, (int)this + 820);
  Ogre::operator<<<float>((int)a2, (int)this + 868);
  Ogre::operator<<<float>((int)a2, (int)this + 916);
  if ( a3 <= 100 )
  {
    Ogre::Archive::serialize(a2, v8, 4u);
    *((_DWORD *)this + 12) = v8[0];
    *((_BYTE *)this + 44) = 0;
  }
  Ogre::SerializeExternalTexture(
    a2,
    (Ogre::Archive *)(&stru_3B8.st_info + (_DWORD)this),
    (Ogre::TextureData **)&stru_3B8.st_info);
  return Ogre::SerializeExternalTexture(a2, (Ogre::DecalData *)((char *)this + 968), v6);
}


//======================================================================
// Ogre::DecalData::prepareData(unsigned int)
// address: 0x0017CF84   size: 0x172 (370 bytes)
//======================================================================
int __fastcall Ogre::DecalData::prepareData(Ogre::DecalData *this, unsigned int a2)
{
  int result; // r0
  int v5[2]; // [sp+Ch] [bp-8h] BYREF

  Ogre::KeyFrameArray<float>::getValue((int)this + 244, 0, a2, (int *)this + 243, 0);
  Ogre::KeyFrameArray<float>::getValue((int)this + 292, 0, a2, (int *)this + 244, 0);
  Ogre::KeyFrameArray<Ogre::ColourValue>::getValue((_DWORD *)this + 85, 0, a2, (float *)this + 245, 0);
  Ogre::KeyFrameArray<float>::getValue((int)this + 388, 0, a2, (int *)this + 249, 0);
  Ogre::KeyFrameArray<float>::getValue((int)this + 436, 0, a2, (int *)this + 250, 0);
  Ogre::KeyFrameArray<float>::getValue((int)this + 484, 0, a2, (int *)this + 251, 0);
  Ogre::KeyFrameArray<float>::getValue((int)this + 532, 0, a2, (int *)this + 252, 0);
  Ogre::KeyFrameArray<float>::getValue((int)this + 580, 0, a2, (int *)this + 253, 0);
  Ogre::KeyFrameArray<float>::getValue((int)this + 628, 0, a2, v5, 0);
  *((_DWORD *)this + 254) = (int)(float)(*(float *)v5 + 0.5);
  Ogre::KeyFrameArray<float>::getValue((int)this + 676, 0, a2, (int *)this + 255, 0);
  Ogre::KeyFrameArray<float>::getValue((int)this + 724, 0, a2, (int *)this + 256, 0);
  Ogre::KeyFrameArray<float>::getValue((int)this + 772, 0, a2, (int *)this + 257, 0);
  Ogre::KeyFrameArray<float>::getValue((int)this + 820, 0, a2, (int *)this + 258, 0);
  Ogre::KeyFrameArray<float>::getValue((int)this + 868, 0, a2, (int *)this + 259, 0);
  Ogre::KeyFrameArray<float>::getValue((int)this + 916, 0, a2, v5, 0);
  result = (int)(float)(*(float *)v5 + 0.5);
  *((_DWORD *)this + 260) = result;
  return result;
}

