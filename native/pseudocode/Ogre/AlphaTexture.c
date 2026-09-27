// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::AlphaTexture

//======================================================================
// Ogre::AlphaTexture::getRTTI(void)const
// address: 0x00156334   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::AlphaTexture::getRTTI(Ogre::AlphaTexture *this)
{
  return &Ogre::AlphaTexture::m_RTTI;
}


//======================================================================
// Ogre::AlphaTexture::lock(unsigned int,unsigned int,bool,Ogre::LockResult &)
// address: 0x00156340   size: 0x4 (4 bytes)
//======================================================================
int Ogre::AlphaTexture::lock()
{
  return 0;
}


//======================================================================
// Ogre::AlphaTexture::unlock(unsigned int,unsigned int)
// address: 0x00156344   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::AlphaTexture::unlock(Ogre::AlphaTexture *this, unsigned int a2, unsigned int a3)
{
  ;
}


//======================================================================
// Ogre::AlphaTexture::getDesc(Ogre::TextureDesc &)
// address: 0x0015636C   size: 0x16 (22 bytes)
//======================================================================
int __fastcall Ogre::AlphaTexture::getDesc(int a1, _DWORD *a2)
{
  int result; // r0

  *a2 = 0;
  a2[1] = *(_DWORD *)(a1 + 16);
  result = *(_DWORD *)(a1 + 20);
  a2[4] = 1;
  a2[2] = result;
  a2[5] = 12;
  return result;
}


//======================================================================
// Ogre::AlphaTexture::~AlphaTexture()
// address: 0x001564C4   size: 0x3C (60 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12AlphaTextureD1Ev'
void __fastcall Ogre::AlphaTexture::~AlphaTexture(Ogre::AlphaTexture *this, void *a2)
{
  int v3; // r5
  void *v4; // r0
  int v5; // r3

  v3 = 0;
  *(_DWORD *)this = &off_4565B0;
  do
  {
    v4 = *(void **)((char *)this + v3 + 36);
    if ( v4 != nullptr )
      operator delete[](v4);
    v3 += 4;
  }
  while ( v3 != 16 );
  v5 = *((_DWORD *)this + 8);
  if ( v5 != 0 )
  {
    --*(_DWORD *)(v5 + 8);
    *((_DWORD *)this + 8) = 0;
  }
  Ogre::Texture::~Texture((Ogre::FixedString **)this, a2);
}


//======================================================================
// Ogre::AlphaTexture::~AlphaTexture()
// address: 0x00156504   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::AlphaTexture::~AlphaTexture(Ogre::AlphaTexture *this, void *a2)
{
  Ogre::AlphaTexture::~AlphaTexture(this, a2);
  operator delete(this);
}


//======================================================================
// Ogre::AlphaTexture::getHardwareTexture(void)
// address: 0x00156538   size: 0xC8 (200 bytes)
//======================================================================
int __fastcall Ogre::AlphaTexture::getHardwareTexture(Ogre::AlphaTexture *this)
{
  int v1; // r6
  int v3; // r2
  int PixelBuffer; // r0
  Ogre::SurfaceData *v5; // r7
  unsigned int i; // r6
  unsigned int j; // r5
  int RowBits; // r0
  unsigned int v9; // r3
  int k; // r0
  unsigned int v11; // r2
  char v12; // r1
  int v13; // r2
  _DWORD v15[8]; // [sp+14h] [bp-20h] BYREF

  v1 = *((_DWORD *)this + 8);
  if ( v1 != 0 )
    goto LABEL_3;
  j_memset(v15, 0, 0x1Cu);
  v15[4] = 1;
  v15[5] = 12;
  v3 = *((_DWORD *)this + 5);
  v15[1] = *((_DWORD *)this + 4);
  v15[2] = v3;
  PixelBuffer = Ogre::HardwarePixelBufferManager::createPixelBuffer(
                  Ogre::Singleton<Ogre::HardwarePixelBufferManager>::ms_Singleton,
                  0,
                  v15);
  *((_DWORD *)this + 8) = PixelBuffer;
  if ( PixelBuffer != 0 )
  {
LABEL_3:
    if ( *(_BYTE *)(*((_DWORD *)this + 8) + 4) != 0 )
    {
      v5 = (Ogre::SurfaceData *)operator new(0x30u);
      Ogre::SurfaceData::SurfaceData(v5, 12, *((_DWORD *)this + 4), *((_DWORD *)this + 5), 1);
      for ( i = 0; i < *((_DWORD *)this + 6); ++i )
      {
        for ( j = 0; j < *((_DWORD *)this + 5); ++j )
        {
          RowBits = Ogre::SurfaceData::getRowBits(v5, j, 0);
          v9 = 0;
          for ( k = RowBits + i; ; *(_BYTE *)(k + v13) = v12 )
          {
            v11 = *((_DWORD *)this + 4);
            if ( v9 >= v11 )
              break;
            v12 = *(_BYTE *)(*((_DWORD *)this + i + 9) + v9 + v11 * j);
            v13 = 4 * v9++;
          }
        }
      }
      (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD, Ogre::SurfaceData *))(**(_DWORD **)(*((_DWORD *)this + 8) + 12)
                                                                          + 20))(
        *(_DWORD *)(*((_DWORD *)this + 8) + 12),
        *((_DWORD *)this + 8),
        0,
        v5);
      Ogre::BaseObject::release(v5);
      *(_BYTE *)(*((_DWORD *)this + 8) + 4) = 0;
    }
    return *((_DWORD *)this + 8);
  }
  return v1;
}


//======================================================================
// Ogre::AlphaTexture::_serialize(Ogre::Archive &,int)
// address: 0x001566BA   size: 0x6C (108 bytes)
//======================================================================
Ogre::Archive *__fastcall Ogre::AlphaTexture::_serialize(Ogre::AlphaTexture *this, Ogre::Archive *a2, int a3)
{
  Ogre::Archive *result; // r0
  Ogre::AlphaTexture *v6; // r6
  unsigned int i; // r7
  int v8; // r3
  int v9; // r2

  Ogre::Archive::serialize(a2, (char *)this + 16, 4u);
  Ogre::Archive::serialize(a2, (char *)this + 20, 4u);
  result = Ogre::Archive::serialize(a2, (char *)this + 24, 4u);
  v6 = this;
  for ( i = 0; ; ++i )
  {
    v8 = *((_DWORD *)a2 + 2);
    if ( i >= *((_DWORD *)this + 6) )
      break;
    if ( v8 == 1 )
      *((_DWORD *)v6 + 9) = operator new[](*((_DWORD *)this + 4) * *((_DWORD *)this + 5));
    result = Ogre::Archive::serialize(a2, *((void **)v6 + 9), *((_DWORD *)this + 4) * *((_DWORD *)this + 5));
    v6 = (Ogre::AlphaTexture *)((char *)v6 + 4);
  }
  if ( v8 == 1 )
  {
    v9 = *((_DWORD *)this + 8);
    if ( v9 != 0 )
      *(_BYTE *)(v9 + 4) = 1;
  }
  return result;
}


//======================================================================
// Ogre::AlphaTexture::AlphaTexture(void)
// address: 0x00156844   size: 0x26 (38 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12AlphaTextureC1Ev'
_DWORD *__fastcall Ogre::AlphaTexture::AlphaTexture(_DWORD *this)
{
  *(this + 1) = 1;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *this = &off_4565B0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 11) = 0;
  *(this + 12) = 0;
  return this;
}


//======================================================================
// Ogre::AlphaTexture::newObject(void)
// address: 0x00156870   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall Ogre::AlphaTexture::newObject(Ogre::AlphaTexture *this)
{
  _DWORD *v1; // r4

  v1 = (_DWORD *)operator new(0x34u);
  Ogre::AlphaTexture::AlphaTexture(v1);
  return v1;
}


//======================================================================
// Ogre::AlphaTexture::AlphaTexture(unsigned int,unsigned int,unsigned int)
// address: 0x00156884   size: 0x4E (78 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12AlphaTextureC1Ejjj'
Ogre::AlphaTexture *__fastcall Ogre::AlphaTexture::AlphaTexture(
        Ogre::AlphaTexture *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int v4; // r5
  unsigned int v5; // r7
  int v6; // r6

  v4 = a4;
  *((_DWORD *)this + 1) = 1;
  v5 = a3 * a2;
  v6 = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *(_DWORD *)this = &off_4565B0;
  *((_DWORD *)this + 4) = a2;
  *((_DWORD *)this + 5) = a3;
  *((_DWORD *)this + 6) = a4;
  *((_DWORD *)this + 8) = 0;
  while ( v6 != v4 )
    *((_DWORD *)this + v6++ + 9) = operator new[](v5);
  while ( v4 <= 3 )
    *((_DWORD *)this + v4++ + 9) = 0;
  return this;
}


//======================================================================
// Ogre::AlphaTexture::setPixel(int,int,unsigned char,int)
// address: 0x001568D8   size: 0x20 (32 bytes)
//======================================================================
int __fastcall Ogre::AlphaTexture::setPixel(int this, int a2, int a3, unsigned __int8 a4, int a5)
{
  int v5; // r3

  *(_BYTE *)(*(_DWORD *)(this + 4 * (a5 + 8) + 4) + a2 + a3 * *(_DWORD *)(this + 16)) = a4;
  v5 = *(_DWORD *)(this + 32);
  if ( v5 != 0 )
    *(_BYTE *)(v5 + 4) = 1;
  return this;
}


//======================================================================
// Ogre::AlphaTexture::getPixel(int,int,int)
// address: 0x001568F8   size: 0x12 (18 bytes)
//======================================================================
int __fastcall Ogre::AlphaTexture::getPixel(Ogre::AlphaTexture *this, int a2, int a3, int a4)
{
  return *(unsigned __int8 *)(*((_DWORD *)this + a4 + 9) + a2 + a3 * *((_DWORD *)this + 4));
}


//======================================================================
// Ogre::AlphaTexture::setPixels(unsigned char **)
// address: 0x0015690A   size: 0x32 (50 bytes)
//======================================================================
_DWORD *__fastcall Ogre::AlphaTexture::setPixels(_DWORD *this, unsigned __int8 **a2)
{
  _DWORD *v2; // r4
  unsigned int i; // r5
  int v5; // r3

  v2 = this;
  for ( i = 0; i < v2[6]; ++i )
    this = j_memcpy((void *)v2[i + 9], a2[i], v2[4] * v2[5]);
  v5 = v2[8];
  if ( v5 != 0 )
    *(_BYTE *)(v5 + 4) = 1;
  return this;
}


//======================================================================
// Ogre::AlphaTexture::setPixels(int,unsigned char *)
// address: 0x0015693C   size: 0x28 (40 bytes)
//======================================================================
void *__fastcall Ogre::AlphaTexture::setPixels(void **this, int a2, unsigned __int8 *a3)
{
  void *result; // r0
  int v5; // r3

  result = j_memcpy(*(this + a2 + 9), a3, (_DWORD)*(this + 4) * (_DWORD)*(this + 5));
  v5 = (int)*(this + 8);
  if ( v5 != 0 )
    *(_BYTE *)(v5 + 4) = 1;
  return result;
}


//======================================================================
// Ogre::AlphaTexture::setNumChannel(unsigned int)
// address: 0x00156964   size: 0x32 (50 bytes)
//======================================================================
_DWORD *__fastcall Ogre::AlphaTexture::setNumChannel(_DWORD *this, unsigned int a2)
{
  unsigned int v2; // r5
  _DWORD *v3; // r4
  _DWORD *v5; // r6

  v2 = *(this + 6);
  v3 = this;
  v5 = this + v2 + 8;
  while ( 1 )
  {
    ++v5;
    if ( v2 >= a2 )
      break;
    if ( *v5 == 0 )
    {
      this = (_DWORD *)operator new[](v3[4] * v3[5]);
      *v5 = this;
    }
    ++v2;
  }
  v3[6] = a2;
  return this;
}

