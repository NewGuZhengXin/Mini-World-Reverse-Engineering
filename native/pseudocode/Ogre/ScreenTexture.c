// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ScreenTexture

//======================================================================
// Ogre::ScreenTexture::~ScreenTexture()
// address: 0x00197DC4   size: 0x40 (64 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13ScreenTextureD1Ev'
void __fastcall Ogre::ScreenTexture::~ScreenTexture(Ogre::ScreenTexture *this)
{
  _DWORD *v2; // r0
  int v3; // r3
  void *v4; // r0

  *(_DWORD *)this = &off_4586E8;
  v2 = *((_DWORD **)this + 5);
  if ( v2 != nullptr )
  {
    v3 = v2[1] - 1;
    v2[1] = v3;
    if ( v3 <= 0 )
      (*(void (__fastcall **)(_DWORD *))(*v2 + 24))(v2);
    *((_DWORD *)this + 5) = 0;
  }
  v4 = *((void **)this + 2);
  if ( v4 != nullptr )
    operator delete(v4);
  *(_DWORD *)this = &off_4559C0;
}


//======================================================================
// Ogre::ScreenTexture::~ScreenTexture()
// address: 0x00197E0C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::ScreenTexture::~ScreenTexture(Ogre::ScreenTexture *this)
{
  Ogre::ScreenTexture::~ScreenTexture(this);
  operator delete(this);
}


//======================================================================
// Ogre::ScreenTexture::ScreenTexture(Ogre::Texture *)
// address: 0x00197E20   size: 0x50 (80 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13ScreenTextureC1EPNS_7TextureE'
Ogre::ScreenTexture *__fastcall Ogre::ScreenTexture::ScreenTexture(Ogre::ScreenTexture *this, Ogre::Texture *a2)
{
  int v4; // r6
  _DWORD v6[7]; // [sp+4h] [bp-1Ch] BYREF

  *((_DWORD *)this + 1) = 1;
  *(_DWORD *)this = &off_4586E8;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = a2;
  *((_DWORD *)this + 6) = 2;
  if ( a2 != nullptr )
  {
    (*(void (__fastcall **)(Ogre::Texture *))(*(_DWORD *)a2 + 4))(a2);
    (*(void (__fastcall **)(Ogre::Texture *, _DWORD *))(*(_DWORD *)a2 + 28))(a2, v6);
    v4 = v6[2];
    *((_DWORD *)this + 7) = v6[1];
    *((_DWORD *)this + 8) = v4;
  }
  else
  {
    *((_DWORD *)this + 8) = 0;
    *((_DWORD *)this + 7) = 0;
  }
  return this;
}


//======================================================================
// Ogre::ScreenTexture::GetScreenRect(unsigned int)const
// address: 0x00197E74   size: 0xA (10 bytes)
//======================================================================
unsigned int __fastcall Ogre::ScreenTexture::GetScreenRect(Ogre::ScreenTexture *this, unsigned int a2)
{
  return *((_DWORD *)this + 2) + 80 * a2;
}


//======================================================================
// Ogre::ScreenTexture::Draw(void)
// address: 0x00197E7E   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::ScreenTexture::Draw(Ogre::ScreenTexture *this)
{
  ;
}


//======================================================================
// Ogre::ScreenTexture::AddNewScreenRect(short,short,unsigned short,unsigned short,unsigned short,unsigned short,Ogre::ColorQuad,bool,float,bool)
// address: 0x00198000   size: 0x84 (132 bytes)
//======================================================================
int __fastcall Ogre::ScreenTexture::AddNewScreenRect(
        int a1,
        int a2,
        int a3,
        unsigned int a4,
        unsigned __int16 a5,
        __int16 a6,
        __int16 a7,
        float a8,
        unsigned __int8 a9,
        float a10)
{
  float v12[21]; // [sp+10h] [bp-54h] BYREF

  v12[3] = (float)a2;
  v12[2] = (float)a3;
  v12[4] = (float)a4;
  v12[5] = (float)a5;
  HIWORD(v12[6]) = a6;
  LOWORD(v12[6]) = a7;
  LOWORD(v12[7]) = a4;
  HIWORD(v12[7]) = a5;
  v12[12] = a8;
  LOWORD(v12[0]) = a9;
  v12[13] = 0.0;
  v12[14] = a10;
  memset(&v12[15], 0, 12);
  std::vector<Ogre::ScreenRect>::push_back(a1 + 8, v12);
  return -858993459 * ((*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8)) >> 4) - 1;
}


//======================================================================
// Ogre::ScreenTexture::AddStretchScreenRect(float,float,float,float,unsigned short,unsigned short,unsigned short,unsigned short,Ogre::ColorQuad,bool,Ogre::UiUvType,float,float,bool,float,float,Ogre::TRect<int> &)
// address: 0x00198088   size: 0x88 (136 bytes)
//======================================================================
int __fastcall Ogre::ScreenTexture::AddStretchScreenRect(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int16 a6,
        __int16 a7,
        __int16 a8,
        __int16 a9,
        int a10,
        char a11,
        int a12,
        int a13,
        int a14,
        char a15,
        int a16,
        int a17,
        _DWORD *a18)
{
  int v19; // r6
  int v20; // r7
  _DWORD v22[21]; // [sp+8h] [bp-54h] BYREF

  HIWORD(v22[6]) = a6;
  v22[2] = a3;
  v22[3] = a2;
  v22[4] = a4;
  LOWORD(v22[7]) = a8;
  v22[12] = a10;
  v22[5] = a5;
  LOWORD(v22[6]) = a7;
  HIWORD(v22[7]) = a9;
  LOBYTE(v22[0]) = a11;
  BYTE1(v22[0]) = 1;
  v22[14] = a13;
  v22[13] = a12;
  v22[15] = a14;
  v22[16] = a16;
  v22[17] = a17;
  v19 = a18[1];
  v20 = a18[2];
  v22[8] = *a18;
  v22[9] = v19;
  v22[10] = v20;
  v22[11] = a18[3];
  BYTE2(v22[0]) = a15;
  std::vector<Ogre::ScreenRect>::push_back(a1 + 8, v22);
  return -858993459 * ((*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8)) >> 4) - 1;
}

