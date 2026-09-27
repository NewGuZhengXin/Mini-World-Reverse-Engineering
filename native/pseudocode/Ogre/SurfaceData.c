// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::SurfaceData

//======================================================================
// Ogre::SurfaceData::getRTTI(void)const
// address: 0x0019AA20   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::SurfaceData::getRTTI(Ogre::SurfaceData *this)
{
  return &Ogre::SurfaceData::m_RTTI;
}


//======================================================================
// Ogre::SurfaceData::~SurfaceData()
// address: 0x0019ABD8   size: 0x26 (38 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11SurfaceDataD1Ev'
void __fastcall Ogre::SurfaceData::~SurfaceData(Ogre::SurfaceData *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_458A00;
  v2 = *((void **)this + 9);
  if ( v2 != nullptr )
    operator delete(v2);
  *(_DWORD *)this = &off_4559C0;
}


//======================================================================
// Ogre::SurfaceData::~SurfaceData()
// address: 0x0019AC08   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::SurfaceData::~SurfaceData(Ogre::SurfaceData *this)
{
  Ogre::SurfaceData::~SurfaceData(this);
  operator delete(this);
}


//======================================================================
// Ogre::SurfaceData::SurfaceData(void)
// address: 0x0019ACF8   size: 0x18 (24 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11SurfaceDataC1Ev'
_DWORD *__fastcall Ogre::SurfaceData::SurfaceData(_DWORD *this)
{
  *(this + 1) = 1;
  *this = &off_458A00;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 11) = 0;
  return this;
}


//======================================================================
// Ogre::SurfaceData::newObject(void)
// address: 0x0019AD14   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall Ogre::SurfaceData::newObject(Ogre::SurfaceData *this)
{
  _DWORD *v1; // r4

  v1 = (_DWORD *)operator new(0x30u);
  Ogre::SurfaceData::SurfaceData(v1);
  return v1;
}


//======================================================================
// Ogre::SurfaceData::loadFromDDSStream(Ogre::DataStream *)
// address: 0x0019AD26   size: 0x20 (32 bytes)
//======================================================================
bool __fastcall Ogre::SurfaceData::loadFromDDSStream(Ogre::SurfaceData *this, Ogre::DataStream *a2)
{
  int v2; // r4

  v2 = *((_DWORD *)this + 8) * *((_DWORD *)this + 5);
  return (*(int (__fastcall **)(Ogre::DataStream *, _DWORD, int))(*(_DWORD *)a2 + 8))(a2, *((_DWORD *)this + 9), v2) == v2;
}


//======================================================================
// Ogre::SurfaceData::getRowBits(unsigned int,unsigned int)const
// address: 0x0019AD46   size: 0x10 (16 bytes)
//======================================================================
unsigned int __fastcall Ogre::SurfaceData::getRowBits(Ogre::SurfaceData *this, unsigned int a2, unsigned int a3)
{
  return *((_DWORD *)this + 9) + a3 * *((_DWORD *)this + 8) + a2 * *((_DWORD *)this + 7);
}


//======================================================================
// Ogre::SurfaceData::setPixel(void const*,unsigned int,unsigned int,unsigned int)
// address: 0x0019AD56   size: 0x22 (34 bytes)
//======================================================================
void *__fastcall Ogre::SurfaceData::setPixel(
        Ogre::SurfaceData *this,
        const void *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  return j_memcpy(
           (void *)(*((_DWORD *)this + 9)
                  + a4 * *((_DWORD *)this + 7)
                  + a3 * *((_DWORD *)this + 6)
                  + *((_DWORD *)this + 8) * a5),
           a2,
           *((_DWORD *)this + 6));
}


//======================================================================
// Ogre::SurfaceData::getPixel(void *,unsigned int,unsigned int,unsigned int)
// address: 0x0019AD78   size: 0x28 (40 bytes)
//======================================================================
void *__fastcall Ogre::SurfaceData::getPixel(
        Ogre::SurfaceData *this,
        void *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  return j_memcpy(
           a2,
           (const void *)(*((_DWORD *)this + 9)
                        + *((_DWORD *)this + 7) * a4
                        + a3 * *((_DWORD *)this + 6)
                        + *((_DWORD *)this + 8) * a5),
           *((_DWORD *)this + 6));
}


//======================================================================
// Ogre::SurfaceData::bitBlt(unsigned int,unsigned int,Ogre::SurfaceData const*,unsigned int,unsigned int,unsigned int,unsigned int)
// address: 0x0019ADA0   size: 0xD4 (212 bytes)
//======================================================================
char *__fastcall Ogre::SurfaceData::bitBlt(
        char *this,
        unsigned int a2,
        unsigned int a3,
        const Ogre::SurfaceData *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8)
{
  int v9; // r1
  int v10; // r2
  Ogre::SurfaceData *v11; // r5
  unsigned int i; // r4
  unsigned int RowBits; // r7
  unsigned int v14; // r0
  unsigned int j; // r4
  char *v16; // r7
  char *v17; // r3
  char v18; // r1

  v9 = *((_DWORD *)this + 2);
  v10 = *((_DWORD *)a4 + 2);
  v11 = (Ogre::SurfaceData *)this;
  if ( v9 == v10 )
  {
    for ( i = a3; i != a8 + a3; ++i )
    {
      RowBits = Ogre::SurfaceData::getRowBits(v11, i, 0);
      v14 = Ogre::SurfaceData::getRowBits(a4, a6 - a3 + i, 0);
      this = (char *)j_memcpy(
                       (void *)(RowBits + *((_DWORD *)v11 + 6) * a2),
                       (const void *)(v14 + *((_DWORD *)v11 + 6) * a5),
                       *((_DWORD *)v11 + 6) * a7);
    }
  }
  else if ( v9 == 12 && v10 == 10 )
  {
    for ( j = a3; j != a8 + a3; ++j )
    {
      v16 = (char *)(Ogre::SurfaceData::getRowBits(v11, j, 0) + *((_DWORD *)v11 + 6) * a2);
      this = (char *)(Ogre::SurfaceData::getRowBits(a4, a6 - a3 + j, 0) + *((_DWORD *)a4 + 6) * a5);
      v17 = this + 3 * a7;
      while ( this != v17 )
      {
        *v16 = *this;
        v16[1] = *(this + 1);
        v18 = *(this + 2);
        v16[3] = -1;
        this += 3;
        v16[2] = v18;
        v16 += 4;
      }
    }
  }
  return this;
}


//======================================================================
// Ogre::SurfaceData::init(Ogre::PixelFormat,unsigned int,unsigned int,unsigned int)
// address: 0x0019B158   size: 0x72 (114 bytes)
//======================================================================
__int64 __fastcall Ogre::SurfaceData::init(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int isCompressed; // r0
  int v7; // r3
  int MemorySize; // r0
  unsigned int v9; // r1
  int NumElemBytes; // r0
  int v11; // r3
  int v12; // r2
  __int64 v13; // r0

  a1[3] = a3;
  a1[4] = a4;
  a1[2] = a2;
  a1[5] = a5;
  isCompressed = Ogre::PixelUtil::isCompressed(a2);
  v7 = a1[2];
  if ( isCompressed != 0 )
  {
    a1[6] = 0;
    MemorySize = Ogre::PixelUtil::getMemorySize(a1[3], 1u, 1, v7);
    v9 = a1[4];
    a1[7] = MemorySize;
    a1[8] = Ogre::PixelUtil::getMemorySize(a1[3], v9, 1, a1[2]);
  }
  else
  {
    NumElemBytes = Ogre::PixelUtil::getNumElemBytes(a1[2]);
    v11 = a1[4];
    a1[6] = NumElemBytes;
    v12 = a1[3];
    if ( v11 == 1 )
      a1[7] = NumElemBytes * v12;
    else
      a1[7] = 4 * ((unsigned int)(v12 * NumElemBytes + 3) >> 2);
    a1[8] = v11 * a1[7];
  }
  LODWORD(v13) = a1 + 9;
  HIDWORD(v13) = a1[8] * a1[5];
  return std::vector<char>::resize(v13, 0);
}


//======================================================================
// Ogre::SurfaceData::SurfaceData(Ogre::PixelFormat,unsigned int,unsigned int,unsigned int)
// address: 0x0019B1CC   size: 0x28 (40 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11SurfaceDataC2ENS_11PixelFormatEjjj'
_DWORD *__fastcall Ogre::SurfaceData::SurfaceData(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  a1[1] = 1;
  *a1 = &off_458A00;
  a1[9] = 0;
  a1[10] = 0;
  a1[11] = 0;
  Ogre::SurfaceData::init(a1, a2, a3, a4, a5);
  return a1;
}


//======================================================================
// Ogre::SurfaceData::_serialize(Ogre::Archive &,int)
// address: 0x0019B5E4   size: 0xA4 (164 bytes)
//======================================================================
__int64 __fastcall Ogre::SurfaceData::_serialize(__int64 this, int a2)
{
  int v3; // r0
  __int64 v4; // r0
  __int64 v6; // [sp+0h] [bp-8h]

  v6 = this;
  Ogre::Archive::serialize((Ogre::Archive *)HIDWORD(this), (void *)(this + 8), 4u);
  Ogre::Archive::serialize((Ogre::Archive *)HIDWORD(this), (void *)(this + 12), 4u);
  Ogre::Archive::serialize((Ogre::Archive *)HIDWORD(this), (void *)(this + 16), 4u);
  Ogre::Archive::serialize((Ogre::Archive *)HIDWORD(this), (void *)(this + 20), 4u);
  Ogre::Archive::serialize((Ogre::Archive *)HIDWORD(this), (void *)(this + 24), 4u);
  Ogre::Archive::serialize((Ogre::Archive *)HIDWORD(this), (void *)(this + 28), 4u);
  Ogre::Archive::serialize((Ogre::Archive *)HIDWORD(this), (void *)(this + 32), 4u);
  v3 = *(_DWORD *)(HIDWORD(this) + 4);
  if ( *(_DWORD *)(HIDWORD(this) + 8) == 1 )
  {
    sub_19AB54(v3);
    LODWORD(v4) = this + 36;
    HIDWORD(v4) = HIDWORD(v6);
    std::vector<char>::resize(v4, 0);
    if ( HIDWORD(v6) != 0 )
      sub_19AB54(*(_DWORD *)(HIDWORD(this) + 4));
  }
  else
  {
    HIDWORD(v6) = *(_DWORD *)(this + 40) - *(_DWORD *)(this + 36);
    sub_19AB5E(v3);
    if ( HIDWORD(v6) != 0 )
      sub_19AB5E(*(_DWORD *)(HIDWORD(this) + 4));
  }
  return v6;
}


//======================================================================
// Ogre::SurfaceData::decompress(void)
// address: 0x0019B688   size: 0xB4 (180 bytes)
//======================================================================
void __fastcall Ogre::SurfaceData::decompress(Ogre::SurfaceData *this)
{
  int v1; // r2
  int v2; // r3
  unsigned __int16 *v4; // r0
  unsigned __int16 *v5; // r7
  unsigned __int16 *v6; // r4
  int v7; // r6
  unsigned int v8; // r2
  unsigned int v9; // r0
  int i; // [sp+8h] [bp-1Ch]
  unsigned int *v11; // [sp+Ch] [bp-18h]
  int v12; // [sp+10h] [bp-14h]
  int v13; // [sp+14h] [bp-10h]
  int v14; // [sp+18h] [bp-Ch]
  int v15; // [sp+1Ch] [bp-8h]

  v14 = *((_DWORD *)this + 3) >> 2;
  v15 = *((_DWORD *)this + 4) >> 2;
  v1 = *((_DWORD *)this + 10);
  v2 = *((_DWORD *)this + 9);
  v4 = (unsigned __int16 *)(v1 - v2);
  if ( v1 != v2 )
    v4 = (unsigned __int16 *)operator new((size_t)v4);
  v5 = v4;
  std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<char>(
    *((_BYTE **)this + 9),
    *((_BYTE **)this + 10),
    v4);
  v13 = *((_DWORD *)this + 2);
  Ogre::SurfaceData::init(this, 12, *((_DWORD *)this + 3), *((_DWORD *)this + 4), *((_DWORD *)this + 5));
  v6 = v5;
  v7 = 0;
  v11 = *((unsigned int **)this + 9);
  while ( v7 != v15 )
  {
    v12 = 4 * v7;
    for ( i = 0; i != v14; ++i )
    {
      v8 = *((_DWORD *)this + 3);
      v9 = 4 * i;
      if ( v13 == 17 )
      {
        DecompressBlockDXT1(v9, v12, v8, v6, v11);
        v6 += 4;
      }
      else
      {
        if ( v13 == 19 )
          DecompressBlockDXT3(v9, v12, v8, v6, v11);
        else
          DecompressBlockDXT5(v9, v12, v8, (const unsigned __int8 *)v6, v11);
        v6 += 8;
      }
    }
    ++v7;
  }
  if ( v5 != nullptr )
    operator delete(v5);
}

