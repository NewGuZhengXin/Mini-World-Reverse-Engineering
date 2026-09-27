// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Image

//======================================================================
// Ogre::Image::~Image()
// address: 0x001504DC   size: 0x2A (42 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre5ImageD1Ev'
void __fastcall Ogre::Image::~Image(Ogre::Image *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_456290;
  v2 = *((void **)this + 9);
  if ( v2 != nullptr && *((_BYTE *)this + 40) != 0 )
  {
    operator delete[](v2);
    *((_DWORD *)this + 9) = 0;
  }
}


//======================================================================
// Ogre::Image::~Image()
// address: 0x0015050C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::Image::~Image(Ogre::Image *this)
{
  Ogre::Image::~Image(this);
  operator delete(this);
}


//======================================================================
// Ogre::Image::Image(void)
// address: 0x001513B4   size: 0x26 (38 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre5ImageC1Ev'
int __fastcall Ogre::Image::Image(int this)
{
  *(_DWORD *)this = &off_456290;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 16) = 0;
  *(_DWORD *)(this + 20) = 0;
  *(_DWORD *)(this + 24) = 0;
  *(_DWORD *)(this + 28) = 0;
  *(_DWORD *)(this + 36) = 0;
  *(_BYTE *)(this + 40) = 1;
  return this;
}


//======================================================================
// Ogre::Image::operator=(Ogre::Image const&)
// address: 0x001513E0   size: 0x66 (102 bytes)
//======================================================================
int __fastcall Ogre::Image::operator=(int a1, int a2)
{
  void *v3; // r0
  _BYTE *v5; // r6
  unsigned int v6; // r0
  int v7; // r3
  void *v8; // r0

  v3 = *(void **)(a1 + 36);
  v5 = (_BYTE *)(a1 + 40);
  if ( v3 != nullptr && *v5 != 0 )
  {
    operator delete[](v3);
    *(_DWORD *)(a1 + 36) = 0;
  }
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 28);
  v6 = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 16) = v6;
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  *(_BYTE *)(a1 + 32) = *(_BYTE *)(a2 + 32);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
  v7 = *(unsigned __int8 *)(a2 + 40);
  *v5 = v7;
  if ( v7 != 0 )
  {
    v8 = (void *)operator new[](v6);
    *(_DWORD *)(a1 + 36) = v8;
    j_memcpy(v8, *(const void **)(a2 + 36), *(_DWORD *)(a1 + 16));
  }
  else
  {
    *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
  }
  return a1;
}


//======================================================================
// Ogre::Image::Image(Ogre::Image const&)
// address: 0x00151448   size: 0x22 (34 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre5ImageC1ERKS0_'
Ogre::Image *__fastcall Ogre::Image::Image(Ogre::Image *this, const Ogre::Image *a2)
{
  *(_DWORD *)this = &off_456290;
  *((_DWORD *)this + 9) = 0;
  *((_BYTE *)this + 40) = 1;
  Ogre::Image::operator=((int)this, (int)a2);
  return this;
}


//======================================================================
// Ogre::Image::flipAroundY(void)
// address: 0x00151470   size: 0x192 (402 bytes)
//======================================================================
Ogre::Image *__fastcall Ogre::Image::flipAroundY(Ogre::Image *this)
{
  char *v2; // r5
  int v3; // r3
  int v4; // r2
  char *v5; // r0
  unsigned int v6; // r3
  char *v7; // r6
  unsigned int v8; // r1
  unsigned int v9; // r2
  char *v10; // r2
  char *i; // r1
  char v12; // r0
  unsigned int v13; // r3
  unsigned int v14; // r0
  char *v15; // r0
  unsigned int v16; // r3
  unsigned int v17; // r0
  int v18; // r2
  int v19; // r1
  unsigned int v20; // r2
  char *v21; // r1
  size_t v22; // r2
  char *v23; // r0
  unsigned int v24; // r3
  int v25; // r1
  unsigned int v26; // r2
  char *v27; // r1
  char v28; // r0
  void *v29; // r0
  unsigned int v30; // r3
  unsigned int v31; // r0
  unsigned int v32; // r6
  unsigned int v33; // r3
  int v34; // r2
  char *v35; // r0
  unsigned int v36; // r7
  char *v38; // [sp+4h] [bp-10h]
  char *v39; // [sp+4h] [bp-10h]

  *((_DWORD *)this + 5) = 0;
  v2 = *((char **)this + 9);
  v3 = *((_DWORD *)this + 2);
  v4 = *((_DWORD *)this + 1);
  switch ( *((_BYTE *)this + 32) )
  {
    case 1:
      v5 = (char *)operator new[](v4 * v3);
      v6 = 0;
      v7 = v5;
      while ( 1 )
      {
        v8 = *((_DWORD *)this + 2);
        v9 = *((_DWORD *)this + 1);
        if ( v6 >= v8 )
          break;
        ++v6;
        v10 = &v7[v9 * v6 - 1];
        for ( i = v2; (unsigned int)(unsigned __int16)((_WORD)i - (_WORD)v2) < *((_DWORD *)this + 1); ++i )
        {
          v12 = *i;
          *v10-- = v12;
        }
        v6 = (unsigned __int16)v6;
        v2 = i;
      }
      goto LABEL_24;
    case 2:
      v13 = v3 * v4;
      v14 = 2 * v13;
      if ( v13 > 0x3F800000 )
        v14 = -1;
      v15 = (char *)operator new[](v14);
      v16 = 0;
      v7 = v15;
      while ( 1 )
      {
        v17 = *((_DWORD *)this + 2);
        v18 = *((_DWORD *)this + 1);
        if ( v16 >= v17 )
          break;
        v19 = (v16 + 1) * v18;
        v20 = 0;
        v21 = &v7[2 * v19 - 2];
        while ( v20 < *((_DWORD *)this + 1) )
        {
          *v21 = *v2;
          v20 = (unsigned __int16)(v20 + 1);
          v21 -= 2;
          v21[3] = v2[1];
          v2 += 2;
        }
        v16 = (unsigned __int16)(v16 + 1);
      }
      v22 = 2 * v18 * v17;
      goto LABEL_25;
    case 3:
      v23 = (char *)operator new[](3 * v3 * v4);
      v24 = 0;
      v7 = v23;
      while ( 1 )
      {
        v9 = *((_DWORD *)this + 2);
        v25 = *((_DWORD *)this + 1);
        if ( v24 >= v9 )
          break;
        ++v24;
        v38 = &v7[3 * v25 * v24 - 3];
        v26 = 0;
        while ( 1 )
        {
          v27 = &v38[-3 * v26];
          if ( v26 >= *((_DWORD *)this + 1) )
            break;
          ++v26;
          *v27 = *v2;
          v27[1] = v2[1];
          v28 = v2[2];
          v2 += 3;
          v27[2] = v28;
        }
        v24 = (unsigned __int16)v24;
      }
      v8 = 3 * v25;
LABEL_24:
      v22 = v9 * v8;
LABEL_25:
      j_memcpy(*((void **)this + 9), v7, v22);
      if ( v7 == nullptr )
        return this;
      v29 = v7;
      break;
    case 4:
      v30 = v3 * v4;
      v31 = 4 * v30;
      if ( v30 > 0x1FC00000 )
        v31 = -1;
      v32 = 0;
      v39 = (char *)operator new[](v31);
      while ( 1 )
      {
        v33 = *((_DWORD *)this + 2);
        v34 = *((_DWORD *)this + 1);
        if ( v32 >= v33 )
          break;
        v35 = &v39[4 * (v32 + 1) * v34 - 4];
        v36 = 0;
        while ( v36 < *((_DWORD *)this + 1) )
        {
          *(_DWORD *)v35 = *(_DWORD *)v2;
          v36 = (unsigned __int16)(v36 + 1);
          v35 -= 4;
          v2 += 4;
        }
        v32 = (unsigned __int16)(v32 + 1);
      }
      j_memcpy(*((void **)this + 9), v39, 4 * v34 * v33);
      if ( v39 == nullptr )
        return this;
      v29 = v39;
      break;
    default:
      return this;
  }
  operator delete[](v29);
  return this;
}


//======================================================================
// Ogre::Image::flipAroundX(void)
// address: 0x0015160C   size: 0x66 (102 bytes)
//======================================================================
Ogre::Image *__fastcall Ogre::Image::flipAroundX(Ogre::Image *this)
{
  unsigned int v1; // r6
  size_t v3; // r5
  char *v4; // r7
  unsigned int v5; // r2
  char *v7; // [sp+0h] [bp-Ch]
  char *i; // [sp+4h] [bp-8h]

  v1 = 0;
  *((_DWORD *)this + 5) = 0;
  v3 = *((unsigned __int8 *)this + 32) * *((_DWORD *)this + 1);
  v4 = (char *)operator new[](*((_DWORD *)this + 2) * v3);
  v7 = *((char **)this + 9);
  for ( i = &v4[(*((_DWORD *)this + 2) - 1) * v3]; ; i -= v3 )
  {
    v5 = *((_DWORD *)this + 2);
    if ( v1 >= v5 )
      break;
    j_memcpy(i, v7, v3);
    v7 += v3;
    v1 = (unsigned __int16)(v1 + 1);
  }
  j_memcpy(*((void **)this + 9), v4, v5 * v3);
  if ( v4 != nullptr )
    operator delete[](v4);
  return this;
}


//======================================================================
// Ogre::Image::load(std::string const&)
// address: 0x00151674   size: 0xD4 (212 bytes)
//======================================================================
int __fastcall Ogre::Image::load(int a1, const char **a2)
{
  void *v3; // r0
  int i; // r5
  int Codec; // r5
  int v7; // r6
  int v8; // r7
  int v9; // r5
  int v10; // r0
  char *v12; // [sp+Ch] [bp-10h] BYREF
  _DWORD v13[3]; // [sp+10h] [bp-Ch] BYREF

  v3 = *(void **)(a1 + 36);
  if ( v3 != nullptr && *(_BYTE *)(a1 + 40) != 0 )
  {
    operator delete[](v3);
    *(_DWORD *)(a1 + 36) = 0;
  }
  v12 = &byte_55FB88;
  for ( i = sub_3BDB04((int)a2, "."); i != *((_DWORD *)*a2 - 3) - 1; sub_3BEA50(&v12, (unsigned __int8)(*a2)[i]) )
    ++i;
  Codec = Ogre::Codec::getCodec(&v12);
  v7 = Ogre::FileManager::openFile((Ogre::FileManager *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton, *a2, true);
  (*(void (__fastcall **)(_DWORD *, int, int))(*(_DWORD *)Codec + 16))(v13, Codec, v7);
  v8 = v13[0];
  v9 = v13[1];
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(v13[1] + 8);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(v9 + 4);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(v9 + 12);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(v9 + 16);
  v10 = *(_DWORD *)(v9 + 28);
  *(_DWORD *)(a1 + 28) = v10;
  *(_DWORD *)(a1 + 20) = *(unsigned __int16 *)(v9 + 20);
  *(_BYTE *)(a1 + 32) = Ogre::PixelUtil::getNumElemBytes(v10);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(v9 + 24);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(v8 + 12);
  *(_DWORD *)(v8 + 24) = 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 4))(v9);
  if ( v7 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 4))(v7);
  sub_3BDF80(&v12);
  return a1;
}


//======================================================================
// Ogre::Image::save(std::string const&)
// address: 0x00151754   size: 0xBE (190 bytes)
//======================================================================
int __fastcall Ogre::Image::save(int a1, _DWORD *a2)
{
  int i; // r4
  int v4; // r0
  int v5; // r4
  Ogre::MemoryDataStream *v6; // r7
  int Codec; // [sp+Ch] [bp-10h]
  _DWORD v10[2]; // [sp+14h] [bp-8h] BYREF

  v10[0] = &byte_55FB88;
  for ( i = sub_3BDB04((int)a2, "."); i != *(_DWORD *)(*a2 - 12) - 1; sub_3BEA50(v10, *(unsigned __int8 *)(*a2 + i)) )
    ++i;
  Codec = Ogre::Codec::getCodec(v10);
  v4 = operator new(0x20u);
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 + 8) = 0;
  *(_DWORD *)(v4 + 28) = 0;
  *(_DWORD *)v4 = &off_456270;
  *(_DWORD *)(v4 + 12) = 1;
  *(_DWORD *)(v4 + 16) = 0;
  *(_WORD *)(v4 + 20) = 0;
  *(_DWORD *)(v4 + 24) = 0;
  v5 = v4;
  *(_DWORD *)(v4 + 28) = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(v4 + 4) = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(v4 + 8) = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(v4 + 12) = *(_DWORD *)(a1 + 12);
  v6 = (Ogre::MemoryDataStream *)operator new(0x1Cu);
  Ogre::MemoryDataStream::MemoryDataStream(v6, *(void **)(a1 + 36), *(_DWORD *)(a1 + 16), nullptr);
  (*(void (__fastcall **)(int, Ogre::MemoryDataStream *, _DWORD *, int))(*(_DWORD *)Codec + 12))(Codec, v6, a2, v5);
  (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 4))(v5);
  if ( v6 != nullptr )
    (*(void (__fastcall **)(Ogre::MemoryDataStream *))(*(_DWORD *)v6 + 4))(v6);
  return sub_3BDF80(v10);
}


//======================================================================
// Ogre::Image::load(Ogre::DataStream *,std::string const&)
// address: 0x00151820   size: 0x84 (132 bytes)
//======================================================================
int __fastcall Ogre::Image::load(int a1, int a2, int a3)
{
  void *v4; // r0
  int Codec; // r0
  int v8; // r5
  int v9; // r7
  int v10; // r0
  _BYTE v12[4]; // [sp+4h] [bp-10h] BYREF
  _DWORD v13[3]; // [sp+8h] [bp-Ch] BYREF

  v4 = *(void **)(a1 + 36);
  if ( v4 != nullptr && *(_BYTE *)(a1 + 40) != 0 )
  {
    operator delete[](v4);
    *(_DWORD *)(a1 + 36) = 0;
  }
  sub_3BEB1C(v12, a3);
  Codec = Ogre::Codec::getCodec(v12);
  (*(void (__fastcall **)(_DWORD *, int, int))(*(_DWORD *)Codec + 16))(v13, Codec, a2);
  v8 = v13[1];
  v9 = v13[0];
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(v13[1] + 8);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(v8 + 4);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(v8 + 12);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(v8 + 16);
  *(_DWORD *)(a1 + 20) = *(unsigned __int16 *)(v8 + 20);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(v8 + 24);
  v10 = *(_DWORD *)(v8 + 28);
  *(_DWORD *)(a1 + 28) = v10;
  *(_BYTE *)(a1 + 32) = Ogre::PixelUtil::getNumElemBytes(v10);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(v9 + 12);
  *(_DWORD *)(v9 + 24) = 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 4))(v8);
  sub_3BDF80(v12);
  return a1;
}


//======================================================================
// Ogre::Image::getData(void)
// address: 0x001518A4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::Image::getData(Ogre::Image *this)
{
  return *((_DWORD *)this + 9);
}


//======================================================================
// Ogre::Image::getData(void)const
// address: 0x001518A8   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::Image::getData(Ogre::Image *this)
{
  return *((_DWORD *)this + 9);
}


//======================================================================
// Ogre::Image::getSize(void)const
// address: 0x001518AC   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::Image::getSize(Ogre::Image *this)
{
  return *((_DWORD *)this + 4);
}


//======================================================================
// Ogre::Image::getNumMipmaps(void)const
// address: 0x001518B0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::Image::getNumMipmaps(Ogre::Image *this)
{
  return *((_DWORD *)this + 5);
}


//======================================================================
// Ogre::Image::hasFlag(Ogre::ImageFlags)const
// address: 0x001518B4   size: 0xA (10 bytes)
//======================================================================
bool __fastcall Ogre::Image::hasFlag(int a1, int a2)
{
  return (*(_DWORD *)(a1 + 24) & a2) != 0;
}


//======================================================================
// Ogre::Image::getDepth(void)const
// address: 0x001518BE   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::Image::getDepth(Ogre::Image *this)
{
  return *((_DWORD *)this + 3);
}


//======================================================================
// Ogre::Image::getWidth(void)const
// address: 0x001518C2   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::Image::getWidth(Ogre::Image *this)
{
  return *((_DWORD *)this + 1);
}


//======================================================================
// Ogre::Image::getHeight(void)const
// address: 0x001518C6   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::Image::getHeight(Ogre::Image *this)
{
  return *((_DWORD *)this + 2);
}


//======================================================================
// Ogre::Image::getNumFaces(void)const
// address: 0x001518CA   size: 0x14 (20 bytes)
//======================================================================
int __fastcall Ogre::Image::getNumFaces(Ogre::Image *this)
{
  if ( Ogre::Image::hasFlag((int)this, 2) )
    return 6;
  else
    return 1;
}


//======================================================================
// Ogre::Image::getRowSpan(void)const
// address: 0x001518DE   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::Image::getRowSpan(Ogre::Image *this)
{
  return *((_DWORD *)this + 1) * *((unsigned __int8 *)this + 32);
}


//======================================================================
// Ogre::Image::getFormat(void)const
// address: 0x001518E8   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::Image::getFormat(Ogre::Image *this)
{
  return *((_DWORD *)this + 7);
}


//======================================================================
// Ogre::Image::getBPP(void)const
// address: 0x001518EC   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::Image::getBPP(Ogre::Image *this)
{
  return (unsigned __int8)(8 * *((_BYTE *)this + 32));
}


//======================================================================
// Ogre::Image::getHasAlpha(void)const
// address: 0x001518F6   size: 0xE (14 bytes)
//======================================================================
unsigned int __fastcall Ogre::Image::getHasAlpha(Ogre::Image *this)
{
  return (unsigned int)Ogre::PixelUtil::getFlags(*((_DWORD *)this + 7)) & 1;
}


//======================================================================
// Ogre::Image::applyGamma(unsigned char *,float,unsigned int,unsigned char)
// address: 0x00151904   size: 0x116 (278 bytes)
//======================================================================
unsigned int __fastcall Ogre::Image::applyGamma(
        Ogre::Image *this,
        unsigned __int8 *a2,
        float a3,
        int a4,
        unsigned __int8 a5)
{
  unsigned int result; // r0
  float v7; // r0
  float v8; // r5
  int i; // [sp+4h] [bp-18h]
  float v10; // [sp+8h] [bp-14h]
  float v11; // [sp+Ch] [bp-10h]

  result = *(float *)&a2 == 1.0;
  if ( *(float *)&a2 != 1.0 && (a4 == 24 || a4 == 32) )
  {
    result = LODWORD(a3) / (a4 >> 3);
    for ( i = 0; i != LODWORD(a3) / (a4 >> 3); ++i )
    {
      v7 = (float)*(unsigned __int8 *)this * *(float *)&a2;
      v10 = (float)*((unsigned __int8 *)this + 1) * *(float *)&a2;
      v11 = (float)*((unsigned __int8 *)this + 2) * *(float *)&a2;
      if ( v7 <= 255.0 || (v8 = 255.0 / v7, (float)(255.0 / v7) >= 1.0) )
        v8 = 1.0;
      if ( v10 > 255.0 && (float)(255.0 / v10) < v8 )
        v8 = 255.0 / v10;
      if ( v11 > 255.0 && (float)(255.0 / v11) < v8 )
        v8 = 255.0 / v11;
      *(_BYTE *)this = (unsigned int)(float)(v7 * v8);
      *((_BYTE *)this + 1) = (unsigned int)(float)(v10 * v8);
      result = (unsigned int)(float)(v11 * v8);
      *((_BYTE *)this + 2) = result;
      this = (Ogre::Image *)((char *)this + (a4 >> 3));
    }
  }
  return result;
}


//======================================================================
// Ogre::Image::getColourAt(int,int,int)
// address: 0x00151A20   size: 0x38 (56 bytes)
//======================================================================
Ogre::Image *__fastcall Ogre::Image::getColourAt(Ogre::Image *this, int a2, int a3, int a4, int a5)
{
  int v5; // r6

  v5 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)this = 1065353216;
  *((_DWORD *)this + 1) = 1065353216;
  *((_DWORD *)this + 2) = 1065353216;
  *((_DWORD *)this + 3) = 1065353216;
  Ogre::PixelUtil::unpackColour(
    (float *)this,
    *(_DWORD *)(a2 + 28),
    (Ogre::Bitwise *)(*(_DWORD *)(a2 + 36) + ((v5 * a5 + a4) * *(_DWORD *)(a2 + 4) + a3) * *(unsigned __int8 *)(a2 + 32)));
  return this;
}


//======================================================================
// Ogre::Image::getPixelBox(unsigned int,unsigned int)const
// address: 0x00151A58   size: 0xD0 (208 bytes)
//======================================================================
Ogre::Image *__fastcall Ogre::Image::getPixelBox(Ogre::Image *this, Ogre::Image *a2, unsigned int a3, int a4)
{
  unsigned int Depth; // r7
  unsigned int v7; // r6
  int Format; // r0
  int v9; // r0
  unsigned int Width; // [sp+4h] [bp-30h]
  unsigned int Height; // [sp+8h] [bp-2Ch]
  int v13; // [sp+Ch] [bp-28h]
  unsigned int v14; // [sp+10h] [bp-24h]
  int v15; // [sp+14h] [bp-20h]
  unsigned int v16; // [sp+18h] [bp-1Ch]
  unsigned int v17; // [sp+1Ch] [bp-18h]
  int Data; // [sp+20h] [bp-14h]
  unsigned int NumMipmaps; // [sp+24h] [bp-10h]

  Ogre::Image::getNumMipmaps(a2);
  Ogre::Image::getNumFaces(a2);
  Data = Ogre::Image::getData(a2);
  Width = Ogre::Image::getWidth(a2);
  Height = Ogre::Image::getHeight(a2);
  Depth = Ogre::Image::getDepth(a2);
  v7 = 0;
  NumMipmaps = Ogre::Image::getNumMipmaps(a2);
  v15 = 0;
  v13 = 0;
  do
  {
    if ( v7 == a4 )
    {
      v17 = Depth;
      v16 = Height;
      v14 = Width;
      v15 = v13;
    }
    Format = Ogre::Image::getFormat(a2);
    v13 += Ogre::PixelUtil::getMemorySize(Width, Height, Depth, Format);
    if ( Width != 1 )
      Width >>= 1;
    if ( Height != 1 )
      Height >>= 1;
    if ( Depth != 1 )
      Depth >>= 1;
    ++v7;
  }
  while ( v7 <= NumMipmaps );
  v9 = Ogre::Image::getFormat(a2);
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 7) = v9;
  *((_DWORD *)this + 5) = v17;
  *((_DWORD *)this + 3) = v14;
  *((_DWORD *)this + 4) = v16;
  *((_DWORD *)this + 6) = Data + a3 * v13 + v15;
  *((_DWORD *)this + 8) = v14;
  *((_DWORD *)this + 9) = v16 * v14;
  return this;
}


//======================================================================
// Ogre::Image::calculateSize(unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,Ogre::PixelFormat)
// address: 0x00151B28   size: 0x42 (66 bytes)
//======================================================================
int __fastcall Ogre::Image::calculateSize(
        unsigned int a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  unsigned int v6; // r4
  int v9; // r7

  v6 = 0;
  v9 = 0;
  do
  {
    v9 += Ogre::PixelUtil::getMemorySize(a3, a4, a5, a6) * a2;
    if ( a3 != 1 )
      a3 >>= 1;
    if ( a4 != 1 )
      a4 >>= 1;
    if ( a5 != 1 )
      a5 >>= 1;
    ++v6;
  }
  while ( v6 <= a1 );
  return v9;
}


//======================================================================
// Ogre::Image::loadDynamicImage(unsigned char *,unsigned int,unsigned int,unsigned int,Ogre::PixelFormat,bool,unsigned int,unsigned int)
// address: 0x00151B6A   size: 0x9A (154 bytes)
//======================================================================
int __fastcall Ogre::Image::loadDynamicImage(
        int a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        char a7,
        int a8,
        unsigned int a9)
{
  void *v10; // r0

  v10 = *(void **)(a1 + 36);
  if ( v10 != nullptr && *(_BYTE *)(a1 + 40) != 0 )
  {
    operator delete[](v10);
    *(_DWORD *)(a1 + 36) = 0;
  }
  *(_DWORD *)(a1 + 4) = a3;
  *(_DWORD *)(a1 + 28) = a6;
  *(_DWORD *)(a1 + 12) = a5;
  *(_DWORD *)(a1 + 8) = a4;
  *(_BYTE *)(a1 + 32) = Ogre::PixelUtil::getNumElemBytes(a6);
  *(_DWORD *)(a1 + 20) = a9;
  *(_DWORD *)(a1 + 24) = 0;
  if ( Ogre::PixelUtil::isCompressed(a6) != 0 )
    *(_DWORD *)(a1 + 24) |= 1u;
  if ( *(_DWORD *)(a1 + 12) != 1 )
    *(_DWORD *)(a1 + 24) |= 4u;
  if ( a8 == 6 )
    *(_DWORD *)(a1 + 24) |= 2u;
  *(_DWORD *)(a1 + 16) = Ogre::Image::calculateSize(a9, a8, a3, a4, a5, a6);
  *(_DWORD *)(a1 + 36) = a2;
  *(_BYTE *)(a1 + 40) = a7;
  return a1;
}


//======================================================================
// Ogre::Image::loadRawData(Ogre::DataStream *,unsigned int,unsigned int,unsigned int,Ogre::PixelFormat,unsigned int,unsigned int)
// address: 0x00151C04   size: 0x60 (96 bytes)
//======================================================================
int __fastcall Ogre::Image::loadRawData(
        int a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        int a7,
        unsigned int a8)
{
  unsigned int v10; // r7
  int v11; // r6

  v10 = Ogre::Image::calculateSize(a8, a7, a3, a4, a5, a6);
  (*(void (__fastcall **)(int))(*(_DWORD *)a2 + 48))(a2);
  v11 = operator new[](v10);
  (*(void (__fastcall **)(int, int, unsigned int))(*(_DWORD *)a2 + 8))(a2, v11, v10);
  return Ogre::Image::loadDynamicImage(a1, v11, a3, a4, a5, a6, 1, a7, a8);
}


//======================================================================
// Ogre::Image::scale(Ogre::PixelBox const&,Ogre::PixelBox const&,Ogre::Image::Filter)
// address: 0x001522D0   size: 0xC2C (3116 bytes)
//======================================================================
void __fastcall Ogre::Image::scale(_DWORD *a1, int *a2, int a3)
{
  unsigned int v3; // r2
  int v6; // r3
  int *v7; // r2
  int v8; // r0
  int v9; // r1
  int v10; // r5
  int v11; // r0
  int v12; // r1
  int v13; // r5
  int v14; // r1
  int v15; // r5
  int v16; // r0
  int v17; // r2
  int v18; // r5
  int v19; // r1
  int v20; // r2
  int v21; // r0
  int v22; // r1
  int v23; // r2
  int v24; // r5
  size_t ConsecutiveSize; // r5
  unsigned __int64 v26; // r0
  _BYTE *v27; // r5
  int i; // r6
  int v29; // r12
  unsigned __int64 v30; // r0
  _BYTE *v31; // r5
  __int64 v32; // r2
  _BYTE *v33; // r0
  unsigned __int64 v34; // r0
  __int64 v35; // kr00_8
  int v36; // r3
  int v37; // r12
  _BYTE *v38; // r2
  unsigned __int64 v39; // r0
  __int64 v40; // r0
  int k; // r5
  int m; // r6
  unsigned __int64 v43; // r0
  __int64 v44; // kr10_8
  __int64 v45; // r0
  int v46; // r6
  unsigned __int64 v47; // r0
  __int64 v48; // r0
  int n; // r5
  int ii; // r6
  unsigned __int64 v51; // r0
  __int64 v52; // kr20_8
  __int64 v53; // r0
  int v54; // r6
  unsigned __int64 v55; // r0
  __int64 v56; // r0
  int jj; // r5
  int kk; // r6
  int v59; // [sp+0h] [bp-ACh]
  int v60; // [sp+4h] [bp-A8h]
  int v61; // [sp+8h] [bp-A4h]
  int v62; // [sp+8h] [bp-A4h]
  int v63; // [sp+8h] [bp-A4h]
  int v64; // [sp+8h] [bp-A4h]
  unsigned __int64 v65; // [sp+8h] [bp-A4h]
  unsigned __int64 v66; // [sp+8h] [bp-A4h]
  unsigned __int64 v67; // [sp+8h] [bp-A4h]
  unsigned __int64 v68; // [sp+8h] [bp-A4h]
  unsigned __int64 v69; // [sp+8h] [bp-A4h]
  int v70; // [sp+Ch] [bp-A0h]
  int v71; // [sp+10h] [bp-9Ch]
  unsigned __int64 v72; // [sp+10h] [bp-9Ch]
  unsigned __int64 v73; // [sp+10h] [bp-9Ch]
  unsigned __int64 v74; // [sp+10h] [bp-9Ch]
  _DWORD *v75; // [sp+10h] [bp-9Ch]
  char *v76; // [sp+10h] [bp-9Ch]
  _QWORD *v77; // [sp+10h] [bp-9Ch]
  char *v78; // [sp+10h] [bp-9Ch]
  _OWORD *v79; // [sp+10h] [bp-9Ch]
  int v80; // [sp+14h] [bp-98h]
  int v81; // [sp+18h] [bp-94h]
  unsigned __int64 v82; // [sp+18h] [bp-94h]
  unsigned __int64 v83; // [sp+18h] [bp-94h]
  unsigned __int64 v84; // [sp+18h] [bp-94h]
  unsigned __int64 v85; // [sp+18h] [bp-94h]
  unsigned __int64 v86; // [sp+18h] [bp-94h]
  unsigned __int64 v87; // [sp+18h] [bp-94h]
  unsigned __int64 v88; // [sp+18h] [bp-94h]
  unsigned __int64 v89; // [sp+18h] [bp-94h]
  int v90; // [sp+1Ch] [bp-90h]
  int v91; // [sp+20h] [bp-8Ch]
  unsigned __int64 v92; // [sp+20h] [bp-8Ch]
  unsigned __int64 v93; // [sp+20h] [bp-8Ch]
  unsigned __int64 v94; // [sp+20h] [bp-8Ch]
  int v95; // [sp+20h] [bp-8Ch]
  int v96; // [sp+20h] [bp-8Ch]
  int v97; // [sp+20h] [bp-8Ch]
  int v98; // [sp+20h] [bp-8Ch]
  int v99; // [sp+20h] [bp-8Ch]
  int v100; // [sp+24h] [bp-88h]
  int v101; // [sp+28h] [bp-84h]
  __int64 v102; // [sp+28h] [bp-84h]
  __int64 v103; // [sp+28h] [bp-84h]
  __int64 v104; // [sp+28h] [bp-84h]
  __int64 v105; // [sp+28h] [bp-84h]
  __int64 v106; // [sp+28h] [bp-84h]
  __int64 v107; // [sp+28h] [bp-84h]
  __int64 v108; // [sp+28h] [bp-84h]
  int v109; // [sp+2Ch] [bp-80h]
  int v110; // [sp+30h] [bp-7Ch]
  int v111; // [sp+30h] [bp-7Ch]
  int j; // [sp+30h] [bp-7Ch]
  __int64 v113; // [sp+30h] [bp-7Ch]
  __int64 v114; // [sp+30h] [bp-7Ch]
  __int64 v115; // [sp+30h] [bp-7Ch]
  __int64 v116; // [sp+30h] [bp-7Ch]
  int v117; // [sp+34h] [bp-78h]
  int v118; // [sp+38h] [bp-74h]
  __int64 v119; // [sp+38h] [bp-74h]
  __int64 v120; // [sp+38h] [bp-74h]
  __int64 v121; // [sp+38h] [bp-74h]
  unsigned __int64 v122; // [sp+38h] [bp-74h]
  unsigned __int64 v123; // [sp+38h] [bp-74h]
  unsigned __int64 v124; // [sp+38h] [bp-74h]
  unsigned __int64 v125; // [sp+38h] [bp-74h]
  unsigned __int64 v126; // [sp+38h] [bp-74h]
  int v127; // [sp+3Ch] [bp-70h]
  int v128; // [sp+40h] [bp-6Ch]
  int v129; // [sp+40h] [bp-6Ch]
  int v130; // [sp+40h] [bp-6Ch]
  int v131; // [sp+40h] [bp-6Ch]
  __int64 v132; // [sp+40h] [bp-6Ch]
  __int64 v133; // [sp+40h] [bp-6Ch]
  __int64 v134; // [sp+40h] [bp-6Ch]
  __int64 v135; // [sp+40h] [bp-6Ch]
  __int64 v136; // [sp+40h] [bp-6Ch]
  int v137; // [sp+44h] [bp-68h]
  int v138; // [sp+48h] [bp-64h]
  int v139; // [sp+4Ch] [bp-60h]
  Ogre::MemoryDataStream *v140; // [sp+4Ch] [bp-60h]
  int v141; // [sp+50h] [bp-5Ch]
  __int64 v142; // [sp+50h] [bp-5Ch]
  int v143; // [sp+50h] [bp-5Ch]
  _BYTE *v144; // [sp+50h] [bp-5Ch]
  int v145; // [sp+50h] [bp-5Ch]
  int v146; // [sp+50h] [bp-5Ch]
  int v147; // [sp+50h] [bp-5Ch]
  int v148; // [sp+54h] [bp-58h]
  int v149; // [sp+58h] [bp-54h]
  int v150; // [sp+58h] [bp-54h]
  int v151; // [sp+58h] [bp-54h]
  int v152; // [sp+58h] [bp-54h]
  int v153; // [sp+58h] [bp-54h]
  int v154; // [sp+58h] [bp-54h]
  int v155; // [sp+58h] [bp-54h]
  int v156; // [sp+58h] [bp-54h]
  int v157; // [sp+5Ch] [bp-50h]
  int v158; // [sp+60h] [bp-4Ch]
  int v159; // [sp+60h] [bp-4Ch]
  int v160; // [sp+60h] [bp-4Ch]
  int v161; // [sp+60h] [bp-4Ch]
  int v162; // [sp+60h] [bp-4Ch]
  int v163; // [sp+60h] [bp-4Ch]
  int v164; // [sp+60h] [bp-4Ch]
  int v165; // [sp+64h] [bp-48h]
  int v166; // [sp+68h] [bp-44h]
  int v167; // [sp+68h] [bp-44h]
  int v168; // [sp+68h] [bp-44h]
  int v169; // [sp+6Ch] [bp-40h]
  int v170; // [sp+70h] [bp-3Ch]
  int v171; // [sp+70h] [bp-3Ch]
  int v172; // [sp+70h] [bp-3Ch]
  int v173; // [sp+70h] [bp-3Ch]
  int v174; // [sp+70h] [bp-3Ch]
  int v175; // [sp+74h] [bp-38h]
  int v176; // [sp+78h] [bp-34h]
  int v177; // [sp+7Ch] [bp-30h]
  int v178; // [sp+80h] [bp-2Ch] BYREF
  int v179; // [sp+84h] [bp-28h]
  int v180; // [sp+88h] [bp-24h]
  int v181; // [sp+8Ch] [bp-20h]
  int v182; // [sp+90h] [bp-1Ch]
  int v183; // [sp+94h] [bp-18h]
  _BYTE *v184; // [sp+98h] [bp-14h]
  int v185; // [sp+9Ch] [bp-10h]
  int v186; // [sp+A0h] [bp-Ch]
  int v187; // [sp+A4h] [bp-8h]

  v3 = a3 - 1;
  v6 = a1[7];
  if ( v3 <= 1 )
    sub_152EFC(
      (int)a1,
      (int)a2,
      v3,
      v6,
      v59,
      v60,
      v61,
      v70,
      v71,
      v80,
      v81,
      v90,
      v91,
      v100,
      v101,
      v109,
      v110,
      v117,
      v118,
      v127,
      v128,
      v137,
      v138,
      v139,
      v141,
      v148,
      v149,
      v157,
      v158,
      v165,
      v166,
      v169,
      v170,
      v175,
      v176,
      v177,
      v178,
      v179,
      v180,
      v181,
      v182,
      v183,
      (int)v184,
      v185,
      v186,
      v187);
  if ( v6 == a2[7] )
  {
    v7 = a2;
    v8 = *a2;
    v9 = a2[1];
    v10 = v7[2];
    v7 += 3;
    v178 = v8;
    v179 = v9;
    v180 = v10;
    v11 = *v7;
    v12 = v7[1];
    v13 = v7[2];
    v7 += 3;
    v181 = v11;
    v182 = v12;
    v183 = v13;
    v14 = v7[1];
    v15 = v7[2];
    v184 = (_BYTE *)*v7;
    v185 = v14;
    v186 = v15;
    v187 = v7[3];
  }
  else
  {
    v16 = a2[3];
    v17 = *a2;
    v18 = a2[4];
    v185 = v6;
    v19 = v16 - v17;
    v20 = a2[1];
    v181 = v19;
    v186 = v19;
    v21 = v18 - v20;
    v22 = v19 * (v18 - v20);
    v23 = a2[2];
    v24 = a2[5];
    v182 = v21;
    v178 = 0;
    v179 = 0;
    v180 = 0;
    v184 = nullptr;
    v187 = v22;
    v183 = v24 - v23;
    ConsecutiveSize = Ogre::PixelBox::getConsecutiveSize((Ogre::PixelBox *)&v178);
    v140 = (Ogre::MemoryDataStream *)operator new(0x1Cu);
    Ogre::MemoryDataStream::MemoryDataStream(v140, ConsecutiveSize);
    v184 = *((_BYTE **)v140 + 3);
  }
  switch ( Ogre::PixelUtil::getNumElemBytes(a1[7]) )
  {
    case 1:
      HIDWORD(v26) = (a1[3] - *a1) << 16;
      v111 = a1[6];
      LODWORD(v26) = 0;
      v72 = v26 / (v181 - v178);
      HIDWORD(v26) = (a1[4] - a1[1]) << 16;
      v27 = v184;
      LODWORD(v26) = 0;
      v82 = v26 / (v182 - v179);
      v62 = v180;
      HIDWORD(v26) = (a1[5] - a1[2]) << 16;
      LODWORD(v26) = 0;
      v92 = v26 / (v183 - v180);
      v119 = (v92 >> 1) - 1;
      while ( v62 < v183 )
      {
        v129 = HIWORD(HIDWORD(v119)) * a1[9];
        v102 = (v82 >> 1) - 1;
        for ( i = v179; i < v182; ++i )
        {
          v142 = (v72 >> 1) - 1;
          v159 = HIWORD(HIDWORD(v102)) * a1[8];
          v29 = v178 - (_DWORD)v27;
          while ( (int)&v27[v29] < v181 )
          {
            *v27++ = *(_BYTE *)(v111 + v159 + HIWORD(HIDWORD(v142)) + v129);
            v142 += v72;
          }
          v27 += Ogre::PixelBox::getRowSkip((Ogre::PixelBox *)&v178);
          v102 += v82;
        }
        v27 += Ogre::PixelBox::getSliceSkip((Ogre::PixelBox *)&v178);
        ++v62;
        v119 += v92;
      }
      break;
    case 2:
      HIDWORD(v30) = (a1[3] - *a1) << 16;
      v130 = a1[6];
      LODWORD(v30) = 0;
      v73 = v30 / (v181 - v178);
      HIDWORD(v30) = (a1[4] - a1[1]) << 16;
      v31 = v184;
      LODWORD(v30) = 0;
      v83 = v30 / (v182 - v179);
      v63 = v180;
      HIDWORD(v30) = (a1[5] - a1[2]) << 16;
      LODWORD(v30) = 0;
      v93 = v30 / (v183 - v180);
      v120 = (v93 >> 1) - 1;
      while ( v63 < v183 )
      {
        v103 = (v83 >> 1) - 1;
        v150 = HIWORD(HIDWORD(v120)) * a1[9];
        for ( j = v179; j < v182; ++j )
        {
          v171 = v178;
          v143 = HIWORD(HIDWORD(v103)) * a1[8];
          v32 = (v73 >> 1) - 1;
          while ( v171 < v181 )
          {
            v33 = (_BYTE *)(v130 + 2 * (v143 + HIWORD(HIDWORD(v32)) + v150));
            *v31 = *v33;
            ++v171;
            v31[1] = v33[1];
            v31 += 2;
            v32 += v73;
          }
          v31 += 2 * Ogre::PixelBox::getRowSkip((Ogre::PixelBox *)&v178);
          v103 += v83;
        }
        v31 += 2 * Ogre::PixelBox::getSliceSkip((Ogre::PixelBox *)&v178);
        ++v63;
        v120 += v93;
      }
      break;
    case 3:
      v131 = a1[6];
      v144 = v184;
      HIDWORD(v34) = (a1[3] - *a1) << 16;
      LODWORD(v34) = 0;
      v74 = v34 / (v181 - v178);
      HIDWORD(v34) = (a1[4] - a1[1]) << 16;
      LODWORD(v34) = 0;
      v84 = v34 / (v182 - v179);
      HIDWORD(v34) = (a1[5] - a1[2]) << 16;
      LODWORD(v34) = 0;
      v64 = v180;
      v94 = v34 / (v183 - v180);
      v121 = (v94 >> 1) - 1;
      while ( v64 < v183 )
      {
        v172 = v179;
        v151 = HIWORD(HIDWORD(v121)) * a1[9];
        v35 = (v84 >> 1) - 1;
        while ( v172 < v182 )
        {
          v36 = v178;
          v113 = (v74 >> 1) - 1;
          v37 = HIWORD(HIDWORD(v35)) * a1[8];
          while ( v36 < v181 )
          {
            ++v36;
            v38 = (_BYTE *)(v131 + 3 * (HIWORD(HIDWORD(v113)) + v37 + v151));
            *v144 = *v38;
            v144[1] = v38[1];
            v144[2] = v38[2];
            v144 += 3;
            v113 += v74;
          }
          v144 += 3 * Ogre::PixelBox::getRowSkip((Ogre::PixelBox *)&v178);
          ++v172;
          v35 += v84;
        }
        v144 += 3 * Ogre::PixelBox::getSliceSkip((Ogre::PixelBox *)&v178);
        ++v64;
        v121 += v94;
      }
      break;
    case 4:
      v152 = a1[6];
      v75 = v184;
      HIDWORD(v39) = (a1[3] - *a1) << 16;
      LODWORD(v39) = 0;
      v85 = v39 / (v181 - v178);
      HIDWORD(v39) = (a1[4] - a1[1]) << 16;
      LODWORD(v39) = 0;
      v65 = v39 / (v182 - v179);
      HIDWORD(v39) = (a1[5] - a1[2]) << 16;
      LODWORD(v39) = 0;
      v95 = v180;
      v122 = v39 / (v183 - v180);
      v104 = (v122 >> 1) - 1;
      while ( v95 < v183 )
      {
        v40 = (v65 >> 1) - 1;
        v160 = HIWORD(HIDWORD(v104)) * a1[9];
        for ( k = v179; ; ++k )
        {
          v114 = v40;
          if ( k >= v182 )
            break;
          v145 = HIWORD(HIDWORD(v40)) * a1[8];
          v132 = (v85 >> 1) - 1;
          for ( m = v178; m < v181; ++m )
          {
            *v75++ = *(_DWORD *)(v152 + 4 * (v145 + HIWORD(HIDWORD(v132)) + v160));
            v132 += v85;
          }
          v75 += Ogre::PixelBox::getRowSkip((Ogre::PixelBox *)&v178);
          v40 = v114 + v65;
        }
        v75 += Ogre::PixelBox::getSliceSkip((Ogre::PixelBox *)&v178);
        ++v95;
        v104 += v122;
      }
      break;
    case 6:
      v161 = a1[6];
      v76 = v184;
      HIDWORD(v43) = (a1[3] - *a1) << 16;
      LODWORD(v43) = 0;
      v86 = v43 / (v181 - v178);
      HIDWORD(v43) = (a1[4] - a1[1]) << 16;
      LODWORD(v43) = 0;
      v66 = v43 / (v182 - v179);
      HIDWORD(v43) = (a1[5] - a1[2]) << 16;
      LODWORD(v43) = 0;
      v96 = v180;
      v123 = v43 / (v183 - v180);
      v105 = (v123 >> 1) - 1;
      while ( v96 < v183 )
      {
        v153 = v179;
        v167 = HIWORD(HIDWORD(v105)) * a1[9];
        v44 = (v66 >> 1) - 1;
        while ( v153 < v182 )
        {
          v45 = (v86 >> 1) - 1;
          v46 = v178;
          v173 = HIWORD(HIDWORD(v44)) * a1[8];
          while ( 1 )
          {
            v133 = v45;
            if ( v46 >= v181 )
              break;
            ++v46;
            j_memcpy(v76, (const void *)(v161 + 6 * (v173 + HIWORD(HIDWORD(v45)) + v167)), 6u);
            v45 = v133 + v86;
            v76 += 6;
          }
          v76 += 6 * Ogre::PixelBox::getRowSkip((Ogre::PixelBox *)&v178);
          ++v153;
          v44 += v66;
        }
        v76 += 6 * Ogre::PixelBox::getSliceSkip((Ogre::PixelBox *)&v178);
        ++v96;
        v105 += v123;
      }
      break;
    case 8:
      v154 = a1[6];
      v77 = v184;
      HIDWORD(v47) = (a1[3] - *a1) << 16;
      LODWORD(v47) = 0;
      v87 = v47 / (v181 - v178);
      HIDWORD(v47) = (a1[4] - a1[1]) << 16;
      LODWORD(v47) = 0;
      v67 = v47 / (v182 - v179);
      HIDWORD(v47) = (a1[5] - a1[2]) << 16;
      LODWORD(v47) = 0;
      v97 = v180;
      v124 = v47 / (v183 - v180);
      v106 = (v124 >> 1) - 1;
      while ( v97 < v183 )
      {
        v48 = (v67 >> 1) - 1;
        v162 = HIWORD(HIDWORD(v106)) * a1[9];
        for ( n = v179; ; ++n )
        {
          v115 = v48;
          if ( n >= v182 )
            break;
          v146 = HIWORD(HIDWORD(v48)) * a1[8];
          v134 = (v87 >> 1) - 1;
          for ( ii = v178; ii < v181; ++ii )
          {
            *v77++ = *(_QWORD *)(v154 + 8 * (v146 + HIWORD(HIDWORD(v134)) + v162));
            v134 += v87;
          }
          v77 += Ogre::PixelBox::getRowSkip((Ogre::PixelBox *)&v178);
          v48 = v115 + v67;
        }
        v77 += Ogre::PixelBox::getSliceSkip((Ogre::PixelBox *)&v178);
        ++v97;
        v106 += v124;
      }
      break;
    case 12:
      v163 = a1[6];
      v78 = v184;
      HIDWORD(v51) = (a1[3] - *a1) << 16;
      LODWORD(v51) = 0;
      v88 = v51 / (v181 - v178);
      HIDWORD(v51) = (a1[4] - a1[1]) << 16;
      LODWORD(v51) = 0;
      v68 = v51 / (v182 - v179);
      HIDWORD(v51) = (a1[5] - a1[2]) << 16;
      LODWORD(v51) = 0;
      v98 = v180;
      v125 = v51 / (v183 - v180);
      v107 = (v125 >> 1) - 1;
      while ( v98 < v183 )
      {
        v155 = v179;
        v168 = HIWORD(HIDWORD(v107)) * a1[9];
        v52 = (v68 >> 1) - 1;
        while ( v155 < v182 )
        {
          v53 = (v88 >> 1) - 1;
          v54 = v178;
          v174 = HIWORD(HIDWORD(v52)) * a1[8];
          while ( 1 )
          {
            v135 = v53;
            if ( v54 >= v181 )
              break;
            ++v54;
            j_memcpy(v78, (const void *)(v163 + 12 * (v174 + HIWORD(HIDWORD(v53)) + v168)), 0xCu);
            v53 = v135 + v88;
            v78 += 12;
          }
          v78 += 12 * Ogre::PixelBox::getRowSkip((Ogre::PixelBox *)&v178);
          ++v155;
          v52 += v68;
        }
        v78 += 12 * Ogre::PixelBox::getSliceSkip((Ogre::PixelBox *)&v178);
        ++v98;
        v107 += v125;
      }
      break;
    case 16:
      v156 = a1[6];
      v79 = v184;
      HIDWORD(v55) = (a1[3] - *a1) << 16;
      LODWORD(v55) = 0;
      v89 = v55 / (v181 - v178);
      HIDWORD(v55) = (a1[4] - a1[1]) << 16;
      LODWORD(v55) = 0;
      v69 = v55 / (v182 - v179);
      HIDWORD(v55) = (a1[5] - a1[2]) << 16;
      LODWORD(v55) = 0;
      v99 = v180;
      v126 = v55 / (v183 - v180);
      v108 = (v126 >> 1) - 1;
      while ( v99 < v183 )
      {
        v56 = (v69 >> 1) - 1;
        v164 = HIWORD(HIDWORD(v108)) * a1[9];
        for ( jj = v179; ; ++jj )
        {
          v116 = v56;
          if ( jj >= v182 )
            break;
          v147 = HIWORD(HIDWORD(v56)) * a1[8];
          v136 = (v89 >> 1) - 1;
          for ( kk = v178; kk < v181; ++kk )
          {
            *v79++ = *(_OWORD *)(v156 + 16 * (v147 + HIWORD(HIDWORD(v136)) + v164));
            v136 += v89;
          }
          v79 += Ogre::PixelBox::getRowSkip((Ogre::PixelBox *)&v178);
          v56 = v116 + v69;
        }
        v79 += Ogre::PixelBox::getSliceSkip((Ogre::PixelBox *)&v178);
        ++v99;
        v108 += v126;
      }
      break;
    default:
      break;
  }
  if ( v184 != (_BYTE *)a2[6] )
    JUMPOUT(0x152FC4);
  JUMPOUT(0x152FE6);
}


//======================================================================
// Ogre::Image::resize(unsigned short,unsigned short,Ogre::Image::Filter)
// address: 0x00152FFC   size: 0x7E (126 bytes)
//======================================================================
void __fastcall Ogre::Image::resize(Ogre::Image *a1, unsigned int a2, unsigned int a3, int a4)
{
  unsigned int MemorySize; // r0
  _DWORD v9[10]; // [sp+2Ch] [bp-80h] BYREF
  int v10[10]; // [sp+54h] [bp-58h] BYREF
  _BYTE v11[48]; // [sp+7Ch] [bp-30h] BYREF

  Ogre::Image::Image((int)v11);
  Ogre::Image::loadDynamicImage(
    (int)v11,
    *((_DWORD *)a1 + 9),
    *((_DWORD *)a1 + 1),
    *((_DWORD *)a1 + 2),
    1u,
    *((_DWORD *)a1 + 7),
    1,
    1,
    0);
  *((_DWORD *)a1 + 1) = a2;
  *((_DWORD *)a1 + 2) = a3;
  MemorySize = Ogre::PixelUtil::getMemorySize(a2, a3, 1, *((_DWORD *)a1 + 7));
  *((_DWORD *)a1 + 4) = MemorySize;
  *((_DWORD *)a1 + 9) = operator new[](MemorySize);
  *((_DWORD *)a1 + 5) = 0;
  Ogre::Image::getPixelBox((Ogre::Image *)v9, (Ogre::Image *)v11, 0, 0);
  Ogre::Image::getPixelBox((Ogre::Image *)v10, a1, 0, 0);
  Ogre::Image::scale(v9, v10, a4);
  Ogre::Image::~Image((Ogre::Image *)v11);
}

