// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::RibbonEmitterData

//======================================================================
// Ogre::RibbonEmitterData::getRTTI(void)const
// address: 0x0013FADC   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::RibbonEmitterData::getRTTI(Ogre::RibbonEmitterData *this)
{
  return &Ogre::RibbonEmitterData::m_RTTI;
}


//======================================================================
// Ogre::RibbonEmitterData::~RibbonEmitterData()
// address: 0x0013FC58   size: 0xDE (222 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre17RibbonEmitterDataD1Ev'
void __fastcall Ogre::RibbonEmitterData::~RibbonEmitterData(Ogre::RibbonEmitterData *this)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0
  void *v4; // r1
  void *v5; // r0
  void *v6; // r0
  void *v7; // r0

  *(_DWORD *)this = &off_455A88;
  v2 = *((_DWORD **)this + 192);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 192) = 0;
  }
  v3 = *((_DWORD **)this + 193);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)this + 193) = 0;
  }
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::RibbonEmitterData *)((char *)this + 720));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::RibbonEmitterData *)((char *)this + 672));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::RibbonEmitterData *)((char *)this + 624));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::RibbonEmitterData *)((char *)this + 576));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::RibbonEmitterData *)((char *)this + 528));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::RibbonEmitterData *)((char *)this + 480));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::RibbonEmitterData *)((char *)this + 432));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::RibbonEmitterData *)((char *)this + 384));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::RibbonEmitterData *)((char *)this + 336));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::RibbonEmitterData *)((char *)this + 288));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::RibbonEmitterData *)((char *)this + 240));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::RibbonEmitterData *)((char *)this + 192));
  Ogre::KeyFrameArray<float>::~KeyFrameArray((Ogre::RibbonEmitterData *)((char *)this + 144));
  Ogre::KeyFrameArray<Ogre::ColourValue>::~KeyFrameArray((Ogre::RibbonEmitterData *)((char *)this + 96));
  v5 = *((void **)this + 21);
  if ( v5 != nullptr )
    operator delete(v5);
  v6 = *((void **)this + 18);
  if ( v6 != nullptr )
    operator delete(v6);
  v7 = *((void **)this + 15);
  if ( v7 != nullptr )
    operator delete(v7);
  Ogre::Resource::~Resource((Ogre::FixedString **)this, v4);
}


//======================================================================
// Ogre::RibbonEmitterData::~RibbonEmitterData()
// address: 0x0013FD3C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::RibbonEmitterData::~RibbonEmitterData(Ogre::RibbonEmitterData *this)
{
  Ogre::RibbonEmitterData::~RibbonEmitterData(this);
  operator delete(this);
}


//======================================================================
// Ogre::RibbonEmitterData::RibbonEmitterData(void)
// address: 0x0013FDC8   size: 0xF6 (246 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre17RibbonEmitterDataC1Ev'
Ogre::RibbonEmitterData *__fastcall Ogre::RibbonEmitterData::RibbonEmitterData(Ogre::RibbonEmitterData *this)
{
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 1) = 1;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *(_DWORD *)this = &off_455A88;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 25) = 1;
  *((_DWORD *)this + 29) = 1;
  *((_DWORD *)this + 24) = &off_455A18;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 33) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 35) = 0;
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 36);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 48);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 60);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 72);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 84);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 96);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 108);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 120);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 132);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 144);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 156);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 168);
  Ogre::KeyFrameArray<float>::KeyFrameArray((_DWORD *)this + 180);
  *((_DWORD *)this + 192) = 0;
  *((_DWORD *)this + 193) = 0;
  j_memset((char *)this + 16, 0, 0x10u);
  j_memset((char *)this + 32, 0, 0x1Cu);
  return this;
}


//======================================================================
// Ogre::RibbonEmitterData::newObject(void)
// address: 0x0013FECC   size: 0x14 (20 bytes)
//======================================================================
Ogre::RibbonEmitterData *__fastcall Ogre::RibbonEmitterData::newObject(Ogre::RibbonEmitterData *this)
{
  Ogre::RibbonEmitterData *v1; // r4

  v1 = (Ogre::RibbonEmitterData *)operator new(0x308u);
  Ogre::RibbonEmitterData::RibbonEmitterData(v1);
  return v1;
}


//======================================================================
// Ogre::RibbonEmitterData::PrepareGenRibbon(Ogre::RibbonEmitterFrameData &,int,unsigned int)
// address: 0x0014058C   size: 0x114 (276 bytes)
//======================================================================
unsigned int __fastcall Ogre::RibbonEmitterData::PrepareGenRibbon(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int result; // r0

  Ogre::KeyFrameArray<Ogre::ColourValue>::getValue((_DWORD *)(a1 + 96), a3, a4, (float *)a2, 0);
  Ogre::KeyFrameArray<float>::getValue(a1 + 144, a3, a4, (int *)(a2 + 16), 0);
  Ogre::KeyFrameArray<float>::getValue(a1 + 192, a3, a4, (int *)(a2 + 20), 0);
  Ogre::KeyFrameArray<float>::getValue(a1 + 240, a3, a4, (int *)(a2 + 24), 0);
  Ogre::KeyFrameArray<float>::getValue(a1 + 288, a3, a4, (int *)(a2 + 28), 0);
  Ogre::KeyFrameArray<float>::getValue(a1 + 336, a3, a4, (int *)(a2 + 32), 0);
  Ogre::KeyFrameArray<float>::getValue(a1 + 384, a3, a4, (int *)(a2 + 36), 0);
  result = Ogre::KeyFrameArray<float>::getValue(a1 + 432, a3, a4, (int *)(a2 + 40), 0);
  if ( *(_DWORD *)(a1 + 772) != 0 )
  {
    Ogre::KeyFrameArray<float>::getValue(a1 + 480, 0, a4, (int *)(a2 + 44), 0);
    Ogre::KeyFrameArray<float>::getValue(a1 + 528, 0, a4, (int *)(a2 + 48), 0);
    Ogre::KeyFrameArray<float>::getValue(a1 + 576, 0, a4, (int *)(a2 + 52), 0);
    Ogre::KeyFrameArray<float>::getValue(a1 + 624, 0, a4, (int *)(a2 + 56), 0);
    return Ogre::KeyFrameArray<float>::getValue(a1 + 672, 0, a4, (int *)(a2 + 60), 0);
  }
  return result;
}


//======================================================================
// Ogre::RibbonEmitterData::_serialize(Ogre::Archive &,int)
// address: 0x00140C30   size: 0x102 (258 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> Ogre::RibbonEmitterData::_serialize(
        Ogre::RibbonEmitterData *this,
        Ogre::Archive *a2,
        int a3)
{
  int v6; // r2
  int v7; // r3
  Ogre::TextureData **v8; // r2
  Ogre::TextureData **v9; // r2
  _BYTE v10[4]; // [sp+4h] [bp-4h] BYREF

  Ogre::Archive::serialize(a2, (char *)this + 16, 0x10u);
  Ogre::Archive::serialize(a2, (char *)this + 32, 0x1Cu);
  Ogre::operator<<((unsigned int)a2, (unsigned int)this + 60, v6, v7);
  Ogre::Archive::serialize(a2, v10, 4u);
  (*(void (__fastcall **)(char *, Ogre::Archive *, int))(*((_DWORD *)this + 24) + 12))((char *)this + 96, a2, 100);
  Ogre::operator<<<float>((int)a2, (int)this + 144);
  Ogre::operator<<<float>((int)a2, (int)this + 192);
  Ogre::operator<<<float>((int)a2, (int)this + 240);
  Ogre::operator<<<float>((int)a2, (int)this + 288);
  Ogre::operator<<<float>((int)a2, (int)this + 336);
  Ogre::operator<<<float>((int)a2, (int)this + 384);
  Ogre::operator<<<float>((int)a2, (int)this + 432);
  Ogre::operator<<<float>((int)a2, (int)this + 480);
  Ogre::operator<<<float>((int)a2, (int)this + 528);
  Ogre::operator<<<float>((int)a2, (int)this + 576);
  Ogre::operator<<<float>((int)a2, (int)this + 624);
  Ogre::operator<<<float>((int)a2, (int)this + 672);
  Ogre::operator<<<float>((int)a2, (int)this + 720);
  Ogre::SerializeExternalTexture(a2, (Ogre::RibbonEmitterData *)((char *)this + 768), v8);
  Ogre::SerializeExternalTexture(a2, (Ogre::RibbonEmitterData *)((char *)this + 772), v9);
  if ( a3 <= 100 && *((_DWORD *)a2 + 2) == 1 )
  {
    *((_DWORD *)this + 11) = 0;
    *((_DWORD *)this + 12) = 1;
  }
}

