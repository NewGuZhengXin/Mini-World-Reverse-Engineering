// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::RT_TEXTURE

//======================================================================
// Ogre::RT_TEXTURE::getRTTI(void)const
// address: 0x0019AA50   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::RT_TEXTURE::getRTTI(Ogre::RT_TEXTURE *this)
{
  return &Ogre::RT_TEXTURE::m_RTTI;
}


//======================================================================
// Ogre::RT_TEXTURE::getHardwareTexture(void)
// address: 0x0019AA5C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::RT_TEXTURE::getHardwareTexture(Ogre::RT_TEXTURE *this)
{
  return *((_DWORD *)this + 11);
}


//======================================================================
// Ogre::RT_TEXTURE::getDesc(Ogre::TextureDesc &)
// address: 0x0019AA60   size: 0x14 (20 bytes)
//======================================================================
int __fastcall Ogre::RT_TEXTURE::getDesc(int a1, _DWORD *a2)
{
  int *v2; // r0
  int v3; // r2
  int v4; // r4
  int v5; // r5
  int v6; // r2
  int v7; // r4
  int result; // r0

  v2 = (int *)(a1 + 16);
  v3 = *v2;
  v4 = v2[1];
  v5 = v2[2];
  v2 += 3;
  *a2 = v3;
  a2[1] = v4;
  a2[2] = v5;
  v6 = v2[1];
  v7 = v2[2];
  a2[3] = *v2;
  a2[4] = v6;
  a2[5] = v7;
  result = v2[3];
  a2[6] = result;
  return result;
}


//======================================================================
// Ogre::RT_TEXTURE::lock(unsigned int,unsigned int,bool,Ogre::LockResult &)
// address: 0x0019AA74   size: 0x4 (4 bytes)
//======================================================================
int Ogre::RT_TEXTURE::lock()
{
  return 0;
}


//======================================================================
// Ogre::RT_TEXTURE::unlock(unsigned int,unsigned int)
// address: 0x0019AA78   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::RT_TEXTURE::unlock(Ogre::RT_TEXTURE *this, unsigned int a2, unsigned int a3)
{
  ;
}


//======================================================================
// Ogre::RT_TEXTURE::~RT_TEXTURE()
// address: 0x0019AB98   size: 0x28 (40 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10RT_TEXTURED1Ev'
void __fastcall Ogre::RT_TEXTURE::~RT_TEXTURE(Ogre::RT_TEXTURE *this, void *a2)
{
  int v2; // r3

  *(_DWORD *)this = &off_458A60;
  v2 = *((_DWORD *)this + 11);
  if ( v2 != 0 )
  {
    --*(_DWORD *)(v2 + 8);
    *((_DWORD *)this + 11) = 0;
  }
  Ogre::Texture::~Texture((Ogre::FixedString **)this, a2);
}


//======================================================================
// Ogre::RT_TEXTURE::~RT_TEXTURE()
// address: 0x0019ABC4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::RT_TEXTURE::~RT_TEXTURE(Ogre::RT_TEXTURE *this, void *a2)
{
  Ogre::RT_TEXTURE::~RT_TEXTURE(this, a2);
  operator delete(this);
}


//======================================================================
// Ogre::RT_TEXTURE::newObject(void)
// address: 0x0019AC1C   size: 0x20 (32 bytes)
//======================================================================
_DWORD *__fastcall Ogre::RT_TEXTURE::newObject(Ogre::RT_TEXTURE *this)
{
  _DWORD *result; // r0

  result = (_DWORD *)operator new(0x30u);
  result[1] = 1;
  result[2] = 0;
  result[3] = 0;
  result[11] = 0;
  *result = &off_458A60;
  return result;
}


//======================================================================
// Ogre::RT_TEXTURE::RT_TEXTURE(Ogre::TextureDesc const&,Ogre::HardwareBufferUsage const&)
// address: 0x0019B0B4   size: 0x48 (72 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10RT_TEXTUREC2ERKNS_11TextureDescERKNS_19HardwareBufferUsageE'
_DWORD *__fastcall Ogre::RT_TEXTURE::RT_TEXTURE(_DWORD *a1, int *a2, Ogre::LockSection **a3)
{
  int v4; // r6
  int v5; // r7
  int v6; // r6
  int v7; // r7

  a1[1] = 1;
  a1[2] = 0;
  a1[3] = 0;
  *a1 = &off_458A60;
  v4 = a2[1];
  v5 = a2[2];
  a1[4] = *a2;
  a1[5] = v4;
  a1[6] = v5;
  v6 = a2[4];
  v7 = a2[5];
  a1[7] = a2[3];
  a1[8] = v6;
  a1[9] = v7;
  a1[10] = a2[6];
  a1[11] = Ogre::HardwarePixelBufferManager::createPixelBuffer(
             (_DWORD *)Ogre::Singleton<Ogre::HardwarePixelBufferManager>::ms_Singleton,
             *a3,
             a2);
  return a1;
}

