// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::PixelUtil

//======================================================================
// Ogre::PixelUtil::getNumElemBytes(Ogre::PixelFormat)
// address: 0x00144570   size: 0x10 (16 bytes)
//======================================================================
int __fastcall Ogre::PixelUtil::getNumElemBytes(int a1)
{
  return LOBYTE((&Ogre::_pixelFormats)[11 * a1 + 1]);
}


//======================================================================
// Ogre::PixelUtil::getNumElemBits(Ogre::PixelFormat)
// address: 0x00144584   size: 0x12 (18 bytes)
//======================================================================
int __fastcall Ogre::PixelUtil::getNumElemBits(int a1)
{
  return 8 * LOBYTE((&Ogre::_pixelFormats)[11 * a1 + 1]);
}


//======================================================================
// Ogre::PixelUtil::getFlags(Ogre::PixelFormat)
// address: 0x0014459C   size: 0x10 (16 bytes)
//======================================================================
char *__fastcall Ogre::PixelUtil::getFlags(int a1)
{
  return (&Ogre::_pixelFormats)[11 * a1 + 2];
}


//======================================================================
// Ogre::PixelUtil::hasAlpha(Ogre::PixelFormat)
// address: 0x001445B0   size: 0xC (12 bytes)
//======================================================================
unsigned int __fastcall Ogre::PixelUtil::hasAlpha(int a1)
{
  return (unsigned int)Ogre::PixelUtil::getFlags(a1) & 1;
}


//======================================================================
// Ogre::PixelUtil::isFloatingPoint(Ogre::PixelFormat)
// address: 0x001445BC   size: 0xC (12 bytes)
//======================================================================
int __fastcall Ogre::PixelUtil::isFloatingPoint(int a1)
{
  return (_DWORD)Ogre::PixelUtil::getFlags(a1) << 29 >> 31;
}


//======================================================================
// Ogre::PixelUtil::isCompressed(Ogre::PixelFormat)
// address: 0x001445C8   size: 0xC (12 bytes)
//======================================================================
int __fastcall Ogre::PixelUtil::isCompressed(int a1)
{
  return (_DWORD)Ogre::PixelUtil::getFlags(a1) << 30 >> 31;
}


//======================================================================
// Ogre::PixelUtil::getMemorySize(unsigned int,unsigned int,unsigned int,Ogre::PixelFormat)
// address: 0x001445D4   size: 0x74 (116 bytes)
//======================================================================
int __fastcall Ogre::PixelUtil::getMemorySize(unsigned int a1, unsigned int a2, int a3, int a4)
{
  int result; // r0
  unsigned int v9; // r6
  int v10; // r5
  int v11; // r6

  result = Ogre::PixelUtil::isCompressed(a4);
  if ( result == 0 )
    return Ogre::PixelUtil::getNumElemBytes(a4) * a1 * a2 * a3;
  if ( a4 == 40 )
    goto LABEL_16;
  if ( a4 > 40 )
  {
    if ( a4 != 42 )
    {
      if ( a4 < 42 || a4 == 43 )
      {
        v10 = a1 >> 3;
LABEL_17:
        v11 = a2 >> 2;
        if ( v10 <= 1 )
          v10 = 2;
        if ( v11 <= 1 )
          v11 = 2;
        return 8 * v10 * v11;
      }
      if ( a4 != 44 )
        return result;
    }
LABEL_16:
    v10 = a1 >> 2;
    goto LABEL_17;
  }
  if ( a4 == 17 )
  {
    v9 = 8 * ((a2 + 3) >> 2);
    return ((a1 + 3) >> 2) * v9;
  }
  if ( a4 >= 17 && a4 <= 21 )
  {
    v9 = 16 * ((a2 + 3) >> 2);
    return ((a1 + 3) >> 2) * v9;
  }
  return result;
}


//======================================================================
// Ogre::PixelUtil::isDepth(Ogre::PixelFormat)
// address: 0x00144746   size: 0xC (12 bytes)
//======================================================================
int __fastcall Ogre::PixelUtil::isDepth(int a1)
{
  return (_DWORD)Ogre::PixelUtil::getFlags(a1) << 28 >> 31;
}


//======================================================================
// Ogre::PixelUtil::isNativeEndian(Ogre::PixelFormat)
// address: 0x00144752   size: 0xC (12 bytes)
//======================================================================
int __fastcall Ogre::PixelUtil::isNativeEndian(int a1)
{
  return (_DWORD)Ogre::PixelUtil::getFlags(a1) << 27 >> 31;
}


//======================================================================
// Ogre::PixelUtil::isLuminance(Ogre::PixelFormat)
// address: 0x0014475E   size: 0xC (12 bytes)
//======================================================================
int __fastcall Ogre::PixelUtil::isLuminance(int a1)
{
  return (_DWORD)Ogre::PixelUtil::getFlags(a1) << 26 >> 31;
}


//======================================================================
// Ogre::PixelUtil::isValidExtent(unsigned int,unsigned int,unsigned int,Ogre::PixelFormat)
// address: 0x0014476C   size: 0x3A (58 bytes)
//======================================================================
bool __fastcall Ogre::PixelUtil::isValidExtent(int a1, int a2, int a3, int a4)
{
  int isCompressed; // r0
  int v9; // r3
  unsigned int v10; // r4

  isCompressed = Ogre::PixelUtil::isCompressed(a4);
  v9 = 1;
  if ( isCompressed != 0 )
  {
    v10 = a4 - 17;
    if ( v10 <= 0x1B && ((1 << v10) & 0xF80001F) != 0 )
    {
      v9 = 0;
      if ( (a2 | a1) << 30 == 0 )
        return a3 == 1;
    }
  }
  return v9;
}


//======================================================================
// Ogre::PixelUtil::getBitDepths(Ogre::PixelFormat,int *)
// address: 0x001447AC   size: 0x1E (30 bytes)
//======================================================================
int __fastcall Ogre::PixelUtil::getBitDepths(int a1, _DWORD *a2)
{
  int result; // r0

  result = 11 * a1;
  *a2 = *((unsigned __int8 *)&Ogre::_pixelFormats + 4 * result + 17);
  a2[1] = *((unsigned __int8 *)&Ogre::_pixelFormats + 4 * result + 18);
  a2[2] = *((unsigned __int8 *)&Ogre::_pixelFormats + 4 * result + 19);
  a2[3] = LOBYTE((&Ogre::_pixelFormats)[result + 5]);
  return result * 4;
}


//======================================================================
// Ogre::PixelUtil::getBitMasks(Ogre::PixelFormat,unsigned int *)
// address: 0x001447D0   size: 0x1E (30 bytes)
//======================================================================
int __fastcall Ogre::PixelUtil::getBitMasks(int a1, _DWORD *a2)
{
  int result; // r0

  result = 11 * a1;
  *a2 = (&Ogre::_pixelFormats)[result + 6];
  a2[1] = (&Ogre::_pixelFormats)[result + 7];
  a2[2] = (&Ogre::_pixelFormats)[result + 8];
  a2[3] = (&Ogre::_pixelFormats)[result + 9];
  return result * 4;
}


//======================================================================
// Ogre::PixelUtil::getFormatName(Ogre::PixelFormat)
// address: 0x001447F4   size: 0x1A (26 bytes)
//======================================================================
int __fastcall Ogre::PixelUtil::getFormatName(int a1, int a2)
{
  sub_3BF0BC(a1, (&Ogre::_pixelFormats)[11 * a2]);
  return a1;
}


//======================================================================
// Ogre::PixelUtil::isAccessible(Ogre::PixelFormat)
// address: 0x00144814   size: 0x18 (24 bytes)
//======================================================================
bool __fastcall Ogre::PixelUtil::isAccessible(int a1)
{
  int v1; // r3

  v1 = 0;
  if ( a1 != 0 )
    return ((unsigned int)Ogre::PixelUtil::getFlags(a1) & 0xA) == 0;
  return v1;
}


//======================================================================
// Ogre::PixelUtil::getComponentType(Ogre::PixelFormat)
// address: 0x0014482C   size: 0x10 (16 bytes)
//======================================================================
char *__fastcall Ogre::PixelUtil::getComponentType(int a1)
{
  return (&Ogre::_pixelFormats)[11 * a1 + 3];
}


//======================================================================
// Ogre::PixelUtil::getComponentCount(Ogre::PixelFormat)
// address: 0x00144840   size: 0x10 (16 bytes)
//======================================================================
int __fastcall Ogre::PixelUtil::getComponentCount(int a1)
{
  return LOBYTE((&Ogre::_pixelFormats)[11 * a1 + 4]);
}


//======================================================================
// Ogre::PixelUtil::getFormatFromName(std::string const&,bool,bool)
// address: 0x00144854   size: 0x7C (124 bytes)
//======================================================================
int __fastcall Ogre::PixelUtil::getFormatFromName(int a1, int a2, int a3)
{
  int v4; // r4
  size_t v5; // r2
  _BOOL4 v6; // r6
  _DWORD *v9; // [sp+8h] [bp-Ch] BYREF
  void *v10[2]; // [sp+Ch] [bp-8h] BYREF

  sub_3BEB1C(&v9, a1);
  if ( a3 == 0 )
    Ogre::StringUtil::toUpperCase(&v9);
  v4 = 0;
  while ( 1 )
  {
    if ( a2 == 0 || Ogre::PixelUtil::isAccessible(v4) )
    {
      Ogre::PixelUtil::getFormatName((int)v10, v4);
      v5 = *(v9 - 3);
      v6 = v5 == *((_DWORD *)v10[0] - 3) && j_memcmp(v9, v10[0], v5) == 0;
      sub_3BDF80(v10);
      if ( v6 )
        break;
    }
    if ( ++v4 == 45 )
    {
      v4 = 0;
      break;
    }
  }
  sub_3BDF80(&v9);
  return v4;
}


//======================================================================
// Ogre::PixelUtil::getFormatForBitDepths(Ogre::PixelFormat,unsigned short,unsigned short)
// address: 0x001448D0   size: 0x9C (156 bytes)
//======================================================================
int __fastcall Ogre::PixelUtil::getFormatForBitDepths(int result, int a2, int a3)
{
  if ( a2 == 16 )
  {
    switch ( result )
    {
      case 10:
      case 26:
        result = 6;
        break;
      case 11:
      case 27:
        result = 7;
        break;
      case 12:
      case 13:
      case 14:
      case 28:
        result = 8;
        break;
      case 15:
      case 16:
        result = 9;
        break;
      default:
        goto LABEL_12;
    }
  }
  else if ( a2 == 32 )
  {
    switch ( result )
    {
      case 6:
        result = 26;
        break;
      case 7:
        result = 27;
        break;
      case 8:
        result = 12;
        break;
      case 9:
        result = 15;
        break;
      default:
        goto LABEL_12;
    }
  }
  else
  {
LABEL_12:
    if ( a3 == 16 )
    {
      switch ( result )
      {
        case 25:
          return 23;
        case 33:
          return 32;
        case 24:
          return 22;
        default:
          break;
      }
    }
    else if ( a3 == 32 )
    {
      switch ( result )
      {
        case 23:
          return 25;
        case 32:
          return 33;
        case 22:
          return 24;
        default:
          break;
      }
    }
  }
  return result;
}


//======================================================================
// Ogre::PixelUtil::packColour(float,float,float,float,Ogre::PixelFormat,void *)
// address: 0x0014496C   size: 0x184 (388 bytes)
//======================================================================
__int64 __fastcall Ogre::PixelUtil::packColour(Ogre::Bitwise *this, Ogre::Bitwise *a2, __int64 a3, int a4, int a5)
{
  char **v7; // r5
  int v8; // r6
  unsigned int v9; // r2
  int v10; // r6
  unsigned int v11; // r2
  int v12; // r6
  unsigned int v13; // r2
  int v14; // r0
  unsigned int v15; // r1
  unsigned int v16; // r1
  unsigned int v17; // r1
  __int16 v18; // r0
  unsigned int v19; // r1
  unsigned int v20; // r1
  unsigned int v21; // r1
  __int16 v22; // r0
  unsigned int v23; // r2
  unsigned int v24; // r2
  unsigned int v25; // r2
  unsigned int v26; // r2
  unsigned int v27; // r2
  unsigned int v28; // r2

  v7 = &(&Ogre::_pixelFormats)[11 * a4];
  if ( ((unsigned int)v7[2] & 0x10) != 0 )
  {
    v8 = (Ogre::Bitwise::floatToFixed(this, COERCE_FLOAT(*((_BYTE *)v7 + 17)), a3) << *((_BYTE *)v7 + 40))
       & (unsigned int)v7[6];
    v10 = v8
        | (Ogre::Bitwise::floatToFixed(a2, COERCE_FLOAT(*((_BYTE *)v7 + 18)), v9) << *((_BYTE *)v7 + 41))
        & (unsigned int)v7[7];
    v12 = v10
        | (Ogre::Bitwise::floatToFixed((Ogre::Bitwise *)a3, COERCE_FLOAT(*((_BYTE *)v7 + 19)), v11) << *((_BYTE *)v7 + 42))
        & (unsigned int)v7[8];
    v14 = Ogre::Bitwise::floatToFixed((Ogre::Bitwise *)HIDWORD(a3), COERCE_FLOAT(*((_BYTE *)v7 + 20)), v13);
    Ogre::Bitwise::intWrite(
      (Ogre::Bitwise *)a5,
      (char *)*((unsigned __int8 *)v7 + 4),
      (unsigned int)v7[9] & (v14 << *((_BYTE *)v7 + 43)) | v12,
      *((unsigned __int8 *)v7 + 43));
  }
  else
  {
    switch ( a4 )
    {
      case 5:
        *(_BYTE *)a5 = Ogre::Bitwise::floatToFixed(this, COERCE_FLOAT(8), a3);
        *(_BYTE *)(a5 + 1) = Ogre::Bitwise::floatToFixed((Ogre::Bitwise *)HIDWORD(a3), COERCE_FLOAT(8), v28);
        return a3;
      case 22:
        *(_WORD *)a5 = Ogre::Bitwise::floatToHalfI((unsigned int)this, (unsigned int)a2);
        *(_WORD *)(a5 + 2) = Ogre::Bitwise::floatToHalfI((unsigned int)a2, v16);
        v18 = Ogre::Bitwise::floatToHalfI(a3, v17);
        goto LABEL_13;
      case 23:
        *(_WORD *)a5 = Ogre::Bitwise::floatToHalfI((unsigned int)this, (unsigned int)a2);
        *(_WORD *)(a5 + 2) = Ogre::Bitwise::floatToHalfI((unsigned int)a2, v19);
        *(_WORD *)(a5 + 4) = Ogre::Bitwise::floatToHalfI(a3, v20);
        v22 = Ogre::Bitwise::floatToHalfI(HIDWORD(a3), v21);
        goto LABEL_15;
      case 24:
        *(_DWORD *)a5 = this;
        *(_DWORD *)(a5 + 4) = a2;
        *(_DWORD *)(a5 + 8) = a3;
        return a3;
      case 25:
        *(_DWORD *)a5 = this;
        *(_DWORD *)(a5 + 4) = a2;
        *(_QWORD *)(a5 + 8) = a3;
        return a3;
      case 30:
        *(_WORD *)a5 = Ogre::Bitwise::floatToFixed(this, COERCE_FLOAT(16), a3);
        *(_WORD *)(a5 + 2) = Ogre::Bitwise::floatToFixed(a2, COERCE_FLOAT(16), v25);
        *(_WORD *)(a5 + 4) = Ogre::Bitwise::floatToFixed((Ogre::Bitwise *)a3, COERCE_FLOAT(16), v26);
        v22 = Ogre::Bitwise::floatToFixed((Ogre::Bitwise *)HIDWORD(a3), COERCE_FLOAT(16), v27);
LABEL_15:
        *(_WORD *)(a5 + 6) = v22;
        break;
      case 32:
        *(_WORD *)a5 = Ogre::Bitwise::floatToHalfI((unsigned int)this, (unsigned int)a2);
        break;
      case 33:
        *(_DWORD *)a5 = this;
        break;
      case 35:
        *(_WORD *)a5 = Ogre::Bitwise::floatToHalfI((unsigned int)a2, (unsigned int)a2);
        *(_WORD *)(a5 + 2) = Ogre::Bitwise::floatToHalfI((unsigned int)this, v15);
        break;
      case 36:
        *(_DWORD *)a5 = a2;
        *(_DWORD *)(a5 + 4) = this;
        break;
      case 37:
        *(_WORD *)a5 = Ogre::Bitwise::floatToFixed(this, COERCE_FLOAT(16), a3);
        *(_WORD *)(a5 + 2) = Ogre::Bitwise::floatToFixed(a2, COERCE_FLOAT(16), v23);
        v18 = Ogre::Bitwise::floatToFixed((Ogre::Bitwise *)a3, COERCE_FLOAT(16), v24);
LABEL_13:
        *(_WORD *)(a5 + 4) = v18;
        break;
      default:
        return a3;
    }
  }
  return a3;
}


//======================================================================
// Ogre::PixelUtil::packColour(Ogre::ColourValue const&,Ogre::PixelFormat,void *)
// address: 0x00144AF4   size: 0x1A (26 bytes)
//======================================================================
__int64 __fastcall Ogre::PixelUtil::packColour(int a1, int a2, int a3)
{
  __int64 v4; // [sp+0h] [bp-Ch]

  Ogre::PixelUtil::packColour(*(Ogre::Bitwise **)a1, *(Ogre::Bitwise **)(a1 + 4), *(_QWORD *)(a1 + 8), a2, a3);
  return v4;
}


//======================================================================
// Ogre::PixelUtil::packColour(unsigned char,unsigned char,unsigned char,unsigned char,Ogre::PixelFormat,void *)
// address: 0x00144B10   size: 0xD0 (208 bytes)
//======================================================================
char *__fastcall Ogre::PixelUtil::packColour(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        Ogre::Bitwise *a6)
{
  char **v8; // r4
  unsigned int v9; // r0
  unsigned int v10; // r3
  int v11; // r5
  unsigned int v12; // r0
  unsigned int v13; // r3
  int v14; // r5
  unsigned int v15; // r0
  unsigned int v16; // r3
  int v17; // r5
  unsigned int v18; // r0
  __int64 v20; // r2

  v8 = &(&Ogre::_pixelFormats)[11 * a5];
  if ( ((unsigned int)v8[2] & 0x10) != 0 )
  {
    v9 = Ogre::Bitwise::fixedToFixed(a1, 8u, *((unsigned __int8 *)v8 + 17), (unsigned int)&Ogre::_pixelFormats);
    v10 = (unsigned int)v8[6];
    v11 = (v9 << *((_BYTE *)v8 + 40)) & v10;
    v12 = Ogre::Bitwise::fixedToFixed(a2, 8u, *((unsigned __int8 *)v8 + 18), v10);
    v13 = *((unsigned __int8 *)v8 + 41);
    v14 = v11 | (v12 << v13) & (unsigned int)v8[7];
    v15 = Ogre::Bitwise::fixedToFixed(a3, 8u, *((unsigned __int8 *)v8 + 19), v13);
    v16 = (unsigned int)v8[8];
    v17 = v14 | (v15 << *((_BYTE *)v8 + 42)) & v16;
    v18 = Ogre::Bitwise::fixedToFixed(a4, 8u, *((unsigned __int8 *)v8 + 20), v16);
    return Ogre::Bitwise::intWrite(
             a6,
             (char *)*((unsigned __int8 *)v8 + 4),
             (unsigned int)v8[9] & (v18 << *((_BYTE *)v8 + 43)) | v17,
             *((unsigned __int8 *)v8 + 43));
  }
  else
  {
    *((float *)&v20 + 1) = (float)a4 / 255.0;
    *(float *)&v20 = (float)a3 / 255.0;
    return (char *)Ogre::PixelUtil::packColour(
                     COERCE_OGRE_BITWISE_((float)a1 / 255.0),
                     COERCE_OGRE_BITWISE_((float)a2 / 255.0),
                     v20,
                     a5,
                     (int)a6);
  }
}


//======================================================================
// Ogre::PixelUtil::unpackColour(float *,float *,float *,float *,Ogre::PixelFormat,void const*)
// address: 0x00144BE8   size: 0x280 (640 bytes)
//======================================================================
float __fastcall Ogre::PixelUtil::unpackColour(float *a1, float *a2, float *a3, float *a4, int a5, Ogre::Bitwise *a6)
{
  char **v8; // r5
  float v9; // r0
  float result; // r0
  float v11; // r3
  unsigned __int16 v12; // r1
  unsigned __int16 v13; // r1
  unsigned __int16 v14; // r1
  unsigned __int16 v15; // r1
  unsigned __int16 v16; // r1
  unsigned __int16 v17; // r1
  float v18; // r0
  float v19; // r1
  float v20; // r0
  int v22; // [sp+10h] [bp-14h]
  char *v24; // [sp+18h] [bp-Ch]
  char v25; // [sp+1Ch] [bp-8h]

  v8 = &(&Ogre::_pixelFormats)[11 * a5];
  v24 = v8[2];
  if ( ((unsigned __int8)v24 & 0x10) == 0 )
  {
    LODWORD(result) = a5 - 5;
    switch ( a5 )
    {
      case 5:
        v20 = (float)*(unsigned __int8 *)a6 / 255.0;
        *a3 = v20;
        *a2 = v20;
        *a1 = v20;
        v18 = (float)*((unsigned __int8 *)a6 + 1);
        v19 = 255.0;
        goto LABEL_23;
      case 22:
        *(_DWORD *)a1 = Ogre::Bitwise::halfToFloatI(*(unsigned __int16 *)a6, (unsigned __int16)a2);
        *(_DWORD *)a2 = Ogre::Bitwise::halfToFloatI(*((unsigned __int16 *)a6 + 1), v13);
        result = COERCE_FLOAT(Ogre::Bitwise::halfToFloatI(*((unsigned __int16 *)a6 + 2), v14));
        goto LABEL_19;
      case 23:
        *(_DWORD *)a1 = Ogre::Bitwise::halfToFloatI(*(unsigned __int16 *)a6, (unsigned __int16)a2);
        *(_DWORD *)a2 = Ogre::Bitwise::halfToFloatI(*((unsigned __int16 *)a6 + 1), v15);
        *(_DWORD *)a3 = Ogre::Bitwise::halfToFloatI(*((unsigned __int16 *)a6 + 2), v16);
        result = COERCE_FLOAT(Ogre::Bitwise::halfToFloatI(*((unsigned __int16 *)a6 + 3), v17));
        goto LABEL_24;
      case 24:
        *a1 = *(float *)a6;
        *a2 = *((float *)a6 + 1);
        *a3 = *((float *)a6 + 2);
        goto LABEL_20;
      case 25:
        *a1 = *(float *)a6;
        *a2 = *((float *)a6 + 1);
        *a3 = *((float *)a6 + 2);
        *a4 = *((float *)a6 + 3);
        return result;
      case 30:
        *a1 = (float)*(unsigned __int16 *)a6 / 65535.0;
        *a2 = (float)*((unsigned __int16 *)a6 + 1) / 65535.0;
        *a3 = (float)*((unsigned __int16 *)a6 + 2) / 65535.0;
        v18 = (float)*((unsigned __int16 *)a6 + 3);
        v19 = 65535.0;
LABEL_23:
        result = v18 / v19;
LABEL_24:
        *a4 = result;
        return result;
      case 32:
        result = COERCE_FLOAT(Ogre::Bitwise::halfToFloatI(*(unsigned __int16 *)a6, (unsigned __int16)a2));
        *a3 = result;
        *a2 = result;
        goto LABEL_15;
      case 33:
        v11 = *(float *)a6;
        *a3 = *(float *)a6;
        *a2 = v11;
        goto LABEL_10;
      case 35:
        *(_DWORD *)a2 = Ogre::Bitwise::halfToFloatI(*(unsigned __int16 *)a6, (unsigned __int16)a2);
        result = COERCE_FLOAT(Ogre::Bitwise::halfToFloatI(*((unsigned __int16 *)a6 + 1), v12));
        *a3 = result;
LABEL_15:
        *a1 = result;
        goto LABEL_20;
      case 36:
        *a2 = *(float *)a6;
        v11 = *((float *)a6 + 1);
        *a3 = v11;
LABEL_10:
        *a1 = v11;
        goto LABEL_20;
      case 37:
        *a1 = (float)*(unsigned __int16 *)a6 / 65535.0;
        *a2 = (float)*((unsigned __int16 *)a6 + 1) / 65535.0;
        result = (float)*((unsigned __int16 *)a6 + 2) / 65535.0;
LABEL_19:
        *a3 = result;
        goto LABEL_20;
      default:
        return result;
    }
  }
  v22 = Ogre::Bitwise::intRead(a6, (const void *)*((unsigned __int8 *)v8 + 4), (_DWORD)v24 << 27);
  v25 = *((_BYTE *)v8 + 17);
  v9 = (float)(((unsigned int)v8[6] & v22) >> *((_BYTE *)v8 + 40));
  if ( ((unsigned __int8)v24 & 0x20) != 0 )
  {
    result = v9 / (float)((1 << v25) - 1);
    *a3 = result;
    *a2 = result;
    *a1 = result;
  }
  else
  {
    *a1 = v9 / (float)((1 << v25) - 1);
    *a2 = (float)(((unsigned int)v8[7] & v22) >> *((_BYTE *)v8 + 41)) / (float)((1 << *((_BYTE *)v8 + 18)) - 1);
    result = (float)(((unsigned int)v8[8] & v22) >> *((_BYTE *)v8 + 42)) / (float)((1 << *((_BYTE *)v8 + 19)) - 1);
    *a3 = result;
  }
  if ( ((unsigned int)v8[2] & 1) != 0 )
  {
    result = (float)(((unsigned int)v8[9] & v22) >> *((_BYTE *)v8 + 43)) / (float)((1 << *((_BYTE *)v8 + 20)) - 1);
    *a4 = result;
  }
  else
  {
LABEL_20:
    *a4 = 1.0;
  }
  return result;
}


//======================================================================
// Ogre::PixelUtil::unpackColour(Ogre::ColourValue *,Ogre::PixelFormat,void const*)
// address: 0x00144E74   size: 0x1A (26 bytes)
//======================================================================
__int64 __fastcall Ogre::PixelUtil::unpackColour(float *a1, int a2, Ogre::Bitwise *a3)
{
  __int64 v4; // [sp+0h] [bp-Ch]

  Ogre::PixelUtil::unpackColour(a1, a1 + 1, a1 + 2, a1 + 3, a2, a3);
  return v4;
}


//======================================================================
// Ogre::PixelUtil::unpackColour(unsigned char *,unsigned char *,unsigned char *,unsigned char *,Ogre::PixelFormat,void const*)
// address: 0x00144E90   size: 0xF4 (244 bytes)
//======================================================================
int __fastcall Ogre::PixelUtil::unpackColour(_BYTE *a1, _BYTE *a2, _BYTE *a3, _BYTE *a4, int a5, Ogre::Bitwise *a6)
{
  char **v8; // r4
  int v9; // r5
  unsigned int v10; // r3
  unsigned int v11; // r1
  unsigned int v12; // r0
  int result; // r0
  unsigned int v14; // r2
  unsigned int v15; // r2
  unsigned int v16; // r2
  unsigned int v17; // r2
  char *v19; // [sp+10h] [bp-1Ch]
  Ogre::Bitwise *v21; // [sp+18h] [bp-14h] BYREF
  Ogre::Bitwise *v22; // [sp+1Ch] [bp-10h] BYREF
  Ogre::Bitwise *v23; // [sp+20h] [bp-Ch] BYREF
  Ogre::Bitwise *v24; // [sp+24h] [bp-8h] BYREF

  v8 = &(&Ogre::_pixelFormats)[11 * a5];
  v19 = v8[2];
  if ( ((unsigned __int8)v19 & 0x10) != 0 )
  {
    v9 = Ogre::Bitwise::intRead(a6, (const void *)*((unsigned __int8 *)v8 + 4), a5);
    v10 = *((unsigned __int8 *)v8 + 40);
    v11 = *((unsigned __int8 *)v8 + 17);
    v12 = ((unsigned int)v8[6] & v9) >> v10;
    if ( ((unsigned __int8)v19 & 0x20) != 0 )
    {
      result = (unsigned __int8)Ogre::Bitwise::fixedToFixed(v12, v11, 8u, v10);
      *a3 = result;
      *a2 = result;
      *a1 = result;
    }
    else
    {
      *a1 = Ogre::Bitwise::fixedToFixed(v12, v11, 8u, v10);
      *a2 = Ogre::Bitwise::fixedToFixed(
              ((unsigned int)v8[7] & v9) >> *((_BYTE *)v8 + 41),
              *((unsigned __int8 *)v8 + 18),
              8u,
              *((unsigned __int8 *)v8 + 41));
      result = Ogre::Bitwise::fixedToFixed(
                 ((unsigned int)v8[8] & v9) >> *((_BYTE *)v8 + 42),
                 *((unsigned __int8 *)v8 + 19),
                 8u,
                 *((unsigned __int8 *)v8 + 42));
      *a3 = result;
    }
    if ( ((unsigned int)v8[2] & 1) != 0 )
    {
      result = Ogre::Bitwise::fixedToFixed(
                 (v9 & (unsigned int)v8[9]) >> *((_BYTE *)v8 + 43),
                 *((unsigned __int8 *)v8 + 20),
                 8u,
                 *((unsigned __int8 *)v8 + 43));
      *a4 = result;
    }
    else
    {
      *a4 = -1;
    }
  }
  else
  {
    Ogre::PixelUtil::unpackColour((float *)&v21, (float *)&v22, (float *)&v23, (float *)&v24, a5, a6);
    *a1 = Ogre::Bitwise::floatToFixed(v21, COERCE_FLOAT(8), v14);
    *a2 = Ogre::Bitwise::floatToFixed(v22, COERCE_FLOAT(8), v15);
    *a3 = Ogre::Bitwise::floatToFixed(v23, COERCE_FLOAT(8), v16);
    result = Ogre::Bitwise::floatToFixed(v24, COERCE_FLOAT(8), v17);
    *a4 = result;
  }
  return result;
}


//======================================================================
// Ogre::PixelUtil::bulkPixelConversion(Ogre::PixelBox const&,Ogre::PixelBox const&)
// address: 0x00144F88   size: 0xC38 (3128 bytes)
//======================================================================
void __fastcall __noreturn Ogre::PixelUtil::bulkPixelConversion(
        Ogre::PixelUtil *this,
        const Ogre::PixelBox *a2,
        const Ogre::PixelBox *a3)
{
  int v5; // r1
  int v6; // r6
  int v7; // r0
  int isConsecutive; // r0
  char *v9; // r5
  int v10; // r12
  int v11; // r5
  int v12; // r6
  int v13; // r5
  int v14; // r6
  int v15; // r5
  int v16; // r6
  const Ogre::PixelBox *v17; // r2
  __int64 v18; // r0
  int v19; // r5
  int v20; // r6
  int v21; // r5
  int v22; // r6
  int v23; // r5
  int v24; // r6
  void *v25; // r6
  int NumElemBytes; // r6
  int v27; // r0
  int v28; // r7
  int i24; // r6
  size_t ConsecutiveSize; // r2
  void *v31; // r0
  void *v32; // r0
  int v33; // r0
  _BYTE *v34; // r5
  int v35; // r3
  char *v36; // r6
  int v37; // r0
  char v38; // r12
  char *i; // r3
  int j; // r3
  int v41; // r0
  int v42; // r1
  int v43; // r6
  int v44; // r0
  int v45; // r12
  int k; // r1
  unsigned __int8 *v47; // r3
  int v48; // r2
  int v49; // r6
  int v50; // r0
  int v51; // r0
  int m; // r12
  int n; // r3
  int v54; // r2
  int v55; // r1
  int v56; // r0
  int ii; // r12
  int jj; // r3
  unsigned int v59; // r0
  int v60; // r2
  int v61; // r0
  int kk; // r12
  int mm; // r3
  unsigned int v64; // r0
  int v65; // r2
  int v66; // r0
  int nn; // r1
  int i1; // r3
  int v69; // r0
  int i2; // r12
  char *v71; // r2
  _BYTE *v72; // r3
  int v73; // r1
  char v74; // r0
  int v75; // r2
  int v76; // r12
  int i3; // r1
  int i4; // r3
  int v79; // r6
  int v80; // r0
  int v81; // r1
  int i6; // r12
  unsigned __int8 *v83; // r3
  int v84; // r2
  unsigned int v85; // r6
  int v86; // r0
  int v87; // r6
  int v88; // r0
  int v89; // r1
  int i8; // r12
  unsigned __int8 *v91; // r3
  int v92; // r2
  unsigned int v93; // r6
  int v94; // r0
  int v95; // r12
  int i9; // r1
  int i10; // r3
  int v98; // r6
  int v99; // r0
  int v100; // r1
  int i12; // r12
  unsigned __int8 *v102; // r3
  int v103; // r2
  unsigned int v104; // r6
  int v105; // r0
  int v106; // r0
  int i13; // r12
  char *v108; // r2
  _BYTE *v109; // r3
  int v110; // r1
  char v111; // r0
  int v112; // r6
  int v113; // r0
  int v114; // r1
  int i15; // r12
  unsigned __int8 *v116; // r3
  int v117; // r2
  unsigned int v118; // r6
  int v119; // r0
  int v120; // r6
  int v121; // r0
  int v122; // r12
  int i16; // r1
  unsigned __int8 *v124; // r3
  int v125; // r2
  int v126; // r6
  int v127; // r0
  int v128; // r5
  int v129; // r0
  int v130; // r12
  int i17; // r1
  _BYTE *v132; // r3
  int v133; // r2
  int v134; // r0
  int v135; // r0
  int v136; // r12
  _BYTE *v137; // r3
  int v138; // r2
  int v139; // r0
  int v140; // r5
  int v141; // r0
  int v142; // r2
  int i20; // r12
  int i21; // r3
  int v145; // r1
  int v146; // r5
  int v147; // r5
  int v148; // r0
  int i22; // r12
  int i23; // r2
  int v151; // r1
  unsigned int v152; // r3
  int v153; // [sp+0h] [bp-6Ch]
  Ogre::Bitwise *v154; // [sp+4h] [bp-68h]
  int v155; // [sp+8h] [bp-64h]
  void *v156; // [sp+Ch] [bp-60h]
  char *v157; // [sp+Ch] [bp-60h]
  int SliceSkip; // [sp+Ch] [bp-60h]
  char *v159; // [sp+Ch] [bp-60h]
  char *v160; // [sp+Ch] [bp-60h]
  int v161; // [sp+Ch] [bp-60h]
  int v162; // [sp+Ch] [bp-60h]
  int v163; // [sp+Ch] [bp-60h]
  int v164; // [sp+Ch] [bp-60h]
  char *v165; // [sp+Ch] [bp-60h]
  int v166; // [sp+Ch] [bp-60h]
  char *v167; // [sp+Ch] [bp-60h]
  char *v168; // [sp+Ch] [bp-60h]
  int v169; // [sp+Ch] [bp-60h]
  char *v170; // [sp+Ch] [bp-60h]
  char *v171; // [sp+Ch] [bp-60h]
  char *v172; // [sp+Ch] [bp-60h]
  char *v173; // [sp+Ch] [bp-60h]
  _BYTE *v174; // [sp+Ch] [bp-60h]
  int v175; // [sp+Ch] [bp-60h]
  int v176; // [sp+Ch] [bp-60h]
  char *v177; // [sp+Ch] [bp-60h]
  char *v178; // [sp+Ch] [bp-60h]
  int v179; // [sp+10h] [bp-5Ch]
  int v180; // [sp+10h] [bp-5Ch]
  int v181; // [sp+10h] [bp-5Ch]
  int v182; // [sp+10h] [bp-5Ch]
  int v183; // [sp+10h] [bp-5Ch]
  int v184; // [sp+10h] [bp-5Ch]
  int v185; // [sp+10h] [bp-5Ch]
  int v186; // [sp+10h] [bp-5Ch]
  int v187; // [sp+10h] [bp-5Ch]
  int v188; // [sp+10h] [bp-5Ch]
  int v189; // [sp+10h] [bp-5Ch]
  int v190; // [sp+10h] [bp-5Ch]
  int v191; // [sp+10h] [bp-5Ch]
  int v192; // [sp+10h] [bp-5Ch]
  int v193; // [sp+10h] [bp-5Ch]
  int v194; // [sp+10h] [bp-5Ch]
  int v195; // [sp+10h] [bp-5Ch]
  int v196; // [sp+10h] [bp-5Ch]
  int v197; // [sp+10h] [bp-5Ch]
  int v198; // [sp+10h] [bp-5Ch]
  int v199; // [sp+10h] [bp-5Ch]
  int v200; // [sp+10h] [bp-5Ch]
  int v201; // [sp+10h] [bp-5Ch]
  int v202; // [sp+14h] [bp-58h]
  int v203; // [sp+14h] [bp-58h]
  int v204; // [sp+14h] [bp-58h]
  int v205; // [sp+14h] [bp-58h]
  int v206; // [sp+14h] [bp-58h]
  int v207; // [sp+14h] [bp-58h]
  int v208; // [sp+14h] [bp-58h]
  int v209; // [sp+14h] [bp-58h]
  int v210; // [sp+14h] [bp-58h]
  int v211; // [sp+14h] [bp-58h]
  int v212; // [sp+14h] [bp-58h]
  int v213; // [sp+14h] [bp-58h]
  int v214; // [sp+14h] [bp-58h]
  int v215; // [sp+14h] [bp-58h]
  int v216; // [sp+14h] [bp-58h]
  int v217; // [sp+14h] [bp-58h]
  int v218; // [sp+14h] [bp-58h]
  int v219; // [sp+14h] [bp-58h]
  int v220; // [sp+14h] [bp-58h]
  int v221; // [sp+18h] [bp-54h]
  int v222; // [sp+18h] [bp-54h]
  int v223; // [sp+18h] [bp-54h]
  int v224; // [sp+18h] [bp-54h]
  __int16 v225; // [sp+18h] [bp-54h]
  char v226; // [sp+18h] [bp-54h]
  int v227; // [sp+18h] [bp-54h]
  int v228; // [sp+18h] [bp-54h]
  int v229; // [sp+18h] [bp-54h]
  int v230; // [sp+18h] [bp-54h]
  char v231; // [sp+18h] [bp-54h]
  int v232; // [sp+18h] [bp-54h]
  int v233; // [sp+18h] [bp-54h]
  int i18; // [sp+18h] [bp-54h]
  int i19; // [sp+18h] [bp-54h]
  int v236; // [sp+18h] [bp-54h]
  int v237; // [sp+1Ch] [bp-50h]
  int v238; // [sp+1Ch] [bp-50h]
  int v239; // [sp+1Ch] [bp-50h]
  int v240; // [sp+1Ch] [bp-50h]
  int v241; // [sp+1Ch] [bp-50h]
  int v242; // [sp+1Ch] [bp-50h]
  int i5; // [sp+1Ch] [bp-50h]
  int i7; // [sp+1Ch] [bp-50h]
  int v245; // [sp+1Ch] [bp-50h]
  int i11; // [sp+1Ch] [bp-50h]
  int v247; // [sp+1Ch] [bp-50h]
  int i14; // [sp+1Ch] [bp-50h]
  int v249; // [sp+1Ch] [bp-50h]
  int v250; // [sp+1Ch] [bp-50h]
  int v251; // [sp+1Ch] [bp-50h]
  size_t v252; // [sp+20h] [bp-4Ch]
  int v253; // [sp+20h] [bp-4Ch]
  signed int v254; // [sp+20h] [bp-4Ch]
  char v255; // [sp+20h] [bp-4Ch]
  char v256; // [sp+20h] [bp-4Ch]
  int v257; // [sp+24h] [bp-48h]
  int v258; // [sp+24h] [bp-48h]
  int v259; // [sp+24h] [bp-48h]
  int v260; // [sp+24h] [bp-48h]
  int v261; // [sp+28h] [bp-44h]
  int v262; // [sp+2Ch] [bp-40h]
  int v263; // [sp+30h] [bp-3Ch]
  Ogre::Bitwise *v264; // [sp+34h] [bp-38h]
  Ogre::Bitwise *v265; // [sp+38h] [bp-34h]
  int v266; // [sp+3Ch] [bp-30h]
  int v267; // [sp+40h] [bp-2Ch] BYREF
  int v268; // [sp+44h] [bp-28h]
  int v269; // [sp+48h] [bp-24h]
  int v270; // [sp+4Ch] [bp-20h]
  int v271; // [sp+50h] [bp-1Ch]
  int v272; // [sp+54h] [bp-18h]
  int v273; // [sp+58h] [bp-14h]
  int v274; // [sp+5Ch] [bp-10h]
  int v275; // [sp+60h] [bp-Ch]
  const Ogre::PixelBox *v276; // [sp+64h] [bp-8h]

  if ( (Ogre::PixelUtil::isCompressed(*((_DWORD *)this + 7)) != 0
     || Ogre::PixelUtil::isCompressed(*((_DWORD *)a2 + 7)) != 0)
    && (v5 = *((_DWORD *)this + 7)) == *((_DWORD *)a2 + 7) )
  {
    v25 = *((void **)a2 + 6);
    v9 = *((char **)this + 6);
    ConsecutiveSize = Ogre::PixelBox::getConsecutiveSize(this);
    v31 = v25;
  }
  else
  {
    v6 = *((_DWORD *)this + 7);
    v7 = *((_DWORD *)a2 + 7);
    if ( v6 != v7 )
    {
      v10 = v7 - 26;
      if ( (unsigned int)(v7 - 26) > 1 )
      {
        if ( (unsigned int)(v6 - 26) > 1 || Ogre::PixelUtil::hasAlpha(v7) != 0 )
        {
          v33 = *((_DWORD *)this + 7);
          v34 = *((_BYTE **)a2 + 6);
          v35 = (v33 << 8) | *((_DWORD *)a2 + 7);
          v36 = *((char **)this + 6);
          if ( v35 == 3100 )
          {
            SliceSkip = Ogre::PixelBox::getSliceSkip(this);
            v37 = Ogre::PixelBox::getSliceSkip(a2);
            v182 = *((_DWORD *)this + 3) - *(_DWORD *)this;
            v223 = *((_DWORD *)this + 2);
            v204 = 4 * SliceSkip;
            v239 = 4 * v37;
            v38 = 24;
            while ( 1 )
            {
              if ( v223 >= *((_DWORD *)this + 5) )
                ((void (*)(void))sub_146750)();
              for ( i = *((char **)this + 1); ; i = v159 + 1 )
              {
                v159 = i;
                if ( (int)i >= *((_DWORD *)this + 4) )
                  break;
                for ( j = 0; j < v182; ++j )
                {
                  v41 = 4 * j;
                  v42 = *(_DWORD *)&v36[4 * j];
                  *(_DWORD *)&v34[v41] = __ROR4__(v42, v38);
                }
                v36 += 4 * *((_DWORD *)this + 8);
                v34 += 4 * *((_DWORD *)a2 + 8);
              }
              v36 += v204;
              v34 += v239;
              ++v223;
            }
          }
          if ( v35 > 3100 )
            v33 = sub_145BC0(v33, v5, 3100, v35, v153, (int)v154, v155, (int)v156, v179, v202, v221, v237, v252);
          if ( v35 == 2574 )
          {
            v160 = v36;
            v43 = Ogre::PixelBox::getSliceSkip(this);
            v44 = Ogre::PixelBox::getSliceSkip(a2);
            v45 = *((_DWORD *)this + 2);
            v183 = *((_DWORD *)this + 3) - *(_DWORD *)this;
            v205 = 3 * v43;
            v240 = 4 * v44;
            while ( 1 )
            {
              if ( v45 >= *((_DWORD *)this + 5) )
                ((void (*)(void))sub_146750)();
              for ( k = *((_DWORD *)this + 1); k < *((_DWORD *)this + 4); ++k )
              {
                v47 = (unsigned __int8 *)v160;
                v48 = 0;
                while ( v48 < v183 )
                {
                  v224 = 4 * v48++;
                  v49 = (*v47 << 24) | (v47[1] << 16) | 0xFF;
                  v50 = v47[2];
                  v47 += 3;
                  *(_DWORD *)&v34[v224] = (v50 << 8) | v49;
                }
                v160 += 3 * *((_DWORD *)this + 8);
                v34 += 4 * *((_DWORD *)a2 + 8);
              }
              v160 += v205;
              v34 += v240;
              ++v45;
            }
          }
          if ( v35 <= 2574 )
          {
            if ( v35 == 270 )
            {
              v161 = Ogre::PixelBox::getSliceSkip(this);
              v51 = Ogre::PixelBox::getSliceSkip(a2);
              v184 = *((_DWORD *)this + 3) - *(_DWORD *)this;
              v258 = *((_DWORD *)this + 2);
              v206 = 4 * v51;
              while ( 1 )
              {
                if ( v258 >= *((_DWORD *)this + 5) )
                  ((void (*)(void))sub_146750)();
                for ( m = *((_DWORD *)this + 1); m < *((_DWORD *)this + 4); ++m )
                {
                  for ( n = 0; n < v184; ++n )
                  {
                    v54 = ((unsigned __int8)v36[n] << 24)
                        | ((unsigned __int8)v36[n] << 16)
                        | ((unsigned __int8)v36[n] << 8)
                        | 0xFF;
                    v55 = 4 * n;
                    *(_DWORD *)&v34[v55] = v54;
                  }
                  v36 += *((_DWORD *)this + 8);
                  v34 += 4 * *((_DWORD *)a2 + 8);
                }
                v36 += v161;
                v34 += v206;
                ++v258;
              }
            }
            if ( v35 <= 270 )
            {
              if ( v35 == 268 )
              {
                v162 = Ogre::PixelBox::getSliceSkip(this);
                v56 = Ogre::PixelBox::getSliceSkip(a2);
                v185 = *((_DWORD *)this + 3) - *(_DWORD *)this;
                v259 = *((_DWORD *)this + 2);
                v207 = 4 * v56;
                while ( 1 )
                {
                  if ( v259 >= *((_DWORD *)this + 5) )
                    ((void (*)(void))sub_146750)();
                  for ( ii = *((_DWORD *)this + 1); ii < *((_DWORD *)this + 4); ++ii )
                  {
                    for ( jj = 0; jj < v185; ++jj )
                    {
                      v59 = ((unsigned __int8)v36[jj] << 8)
                          | (unsigned __int8)v36[jj]
                          | 0xFF000000
                          | ((unsigned __int8)v36[jj] << 16);
                      v60 = 4 * jj;
                      *(_DWORD *)&v34[v60] = v59;
                    }
                    v34 += 4 * *((_DWORD *)a2 + 8);
                    v36 += *((_DWORD *)this + 8);
                  }
                  v36 += v162;
                  v34 += v207;
                  ++v259;
                }
              }
              if ( v35 > 268 )
              {
                v163 = Ogre::PixelBox::getSliceSkip(this);
                v61 = Ogre::PixelBox::getSliceSkip(a2);
                v186 = *((_DWORD *)this + 3) - *(_DWORD *)this;
                v260 = *((_DWORD *)this + 2);
                v208 = 4 * v61;
                while ( 1 )
                {
                  if ( v260 >= *((_DWORD *)this + 5) )
                    ((void (*)(void))sub_146750)();
                  for ( kk = *((_DWORD *)this + 1); kk < *((_DWORD *)this + 4); ++kk )
                  {
                    for ( mm = 0; mm < v186; ++mm )
                    {
                      v64 = ((unsigned __int8)v36[mm] << 8)
                          | (unsigned __int8)v36[mm]
                          | 0xFF000000
                          | ((unsigned __int8)v36[mm] << 16);
                      v65 = 4 * mm;
                      *(_DWORD *)&v34[v65] = v64;
                    }
                    v34 += 4 * *((_DWORD *)a2 + 8);
                    v36 += *((_DWORD *)this + 8);
                  }
                  v36 += v163;
                  v34 += v208;
                  ++v260;
                }
              }
              if ( v35 != 258 )
                sub_14668A(
                  v33,
                  v5,
                  258,
                  v35,
                  v153,
                  v154,
                  v155,
                  (int)v156,
                  v179,
                  v202,
                  v221,
                  v237,
                  v252,
                  v257,
                  v261,
                  v262,
                  v263,
                  v264,
                  v265,
                  v266,
                  v267);
              v164 = Ogre::PixelBox::getSliceSkip(this);
              v66 = Ogre::PixelBox::getSliceSkip(a2);
              v187 = *((_DWORD *)this + 3) - *(_DWORD *)this;
              v254 = *((_DWORD *)this + 2);
              v209 = 2 * v66;
              while ( 1 )
              {
                if ( v254 >= *((_DWORD *)this + 5) )
                  ((void (*)(void))sub_146750)();
                for ( nn = *((_DWORD *)this + 1); nn < *((_DWORD *)this + 4); ++nn )
                {
                  for ( i1 = 0; i1 < v187; ++i1 )
                  {
                    v241 = 2 * i1;
                    v225 = (unsigned __int8)v36[i1];
                    *(_WORD *)&v34[v241] = v225 | (v225 << 8);
                  }
                  v36 += *((_DWORD *)this + 8);
                  v34 += 2 * *((_DWORD *)a2 + 8);
                }
                v36 += v164;
                v34 += v209;
                ++v254;
              }
            }
            if ( v35 == 2571 )
            {
              v188 = Ogre::PixelBox::getSliceSkip(this);
              v69 = Ogre::PixelBox::getSliceSkip(a2);
              v165 = *((char **)this + 2);
              v210 = *((_DWORD *)this + 3) - *(_DWORD *)this;
              v189 = 3 * v188;
              v242 = 3 * v69;
              while ( 1 )
              {
                if ( (int)v165 >= *((_DWORD *)this + 5) )
                  ((void (*)(void))sub_146750)();
                for ( i2 = *((_DWORD *)this + 1); i2 < *((_DWORD *)this + 4); ++i2 )
                {
                  v71 = v36;
                  v72 = v34;
                  v73 = 0;
                  while ( v73 < v210 )
                  {
                    ++v73;
                    v226 = v71[2];
                    v255 = v71[1];
                    v74 = *v71;
                    v71 += 3;
                    *v72 = v226;
                    v72[1] = v255;
                    v72[2] = v74;
                    v72 += 3;
                  }
                  v36 += 3 * *((_DWORD *)this + 8);
                  v34 += 3 * *((_DWORD *)a2 + 8);
                }
                v36 += v189;
                v34 += v242;
                ++v165;
              }
            }
            if ( v35 <= 2571 )
            {
              if ( v35 != 513 )
                sub_14668A(
                  v33,
                  v5,
                  513,
                  v35,
                  v153,
                  v154,
                  v155,
                  (int)v156,
                  v179,
                  v202,
                  v221,
                  v237,
                  v252,
                  v257,
                  v261,
                  v262,
                  v263,
                  v264,
                  v265,
                  v266,
                  v267);
              v166 = Ogre::PixelBox::getSliceSkip(this);
              v211 = Ogre::PixelBox::getSliceSkip(a2);
              v75 = *((_DWORD *)this + 2);
              v190 = *((_DWORD *)this + 3) - *(_DWORD *)this;
              v76 = 2 * v166;
              while ( 1 )
              {
                if ( v75 >= *((_DWORD *)this + 5) )
                  ((void (*)(void))sub_146750)();
                for ( i3 = *((_DWORD *)this + 1); i3 < *((_DWORD *)this + 4); ++i3 )
                {
                  for ( i4 = 0; i4 < v190; ++i4 )
                    v34[i4] = HIBYTE(*(_WORD *)&v36[2 * i4]);
                  v36 += 2 * *((_DWORD *)this + 8);
                  v34 += *((_DWORD *)a2 + 8);
                }
                v36 += v76;
                ++v75;
                v34 += v211;
              }
            }
            if ( v35 == 2572 )
            {
              v167 = v36;
              v79 = Ogre::PixelBox::getSliceSkip(this);
              v80 = Ogre::PixelBox::getSliceSkip(a2);
              v191 = *((_DWORD *)this + 3) - *(_DWORD *)this;
              v81 = *((_DWORD *)this + 2);
              v212 = 3 * v79;
              for ( i5 = 4 * v80; ; v34 += i5 )
              {
                if ( v81 >= *((_DWORD *)this + 5) )
                  ((void (*)(void))sub_146750)();
                for ( i6 = *((_DWORD *)this + 1); i6 < *((_DWORD *)this + 4); ++i6 )
                {
                  v83 = (unsigned __int8 *)v167;
                  v84 = 0;
                  while ( v84 < v191 )
                  {
                    v227 = 4 * v84++;
                    v85 = *v83 | 0xFF000000 | (v83[1] << 8);
                    v86 = v83[2];
                    v83 += 3;
                    *(_DWORD *)&v34[v227] = (v86 << 16) | v85;
                  }
                  v167 += 3 * *((_DWORD *)this + 8);
                  v34 += 4 * *((_DWORD *)a2 + 8);
                }
                ++v81;
                v167 += v212;
              }
            }
            v168 = v36;
            v87 = Ogre::PixelBox::getSliceSkip(this);
            v88 = Ogre::PixelBox::getSliceSkip(a2);
            v192 = *((_DWORD *)this + 3) - *(_DWORD *)this;
            v89 = *((_DWORD *)this + 2);
            v213 = 3 * v87;
            for ( i7 = 4 * v88; ; v34 += i7 )
            {
              if ( v89 >= *((_DWORD *)this + 5) )
                ((void (*)(void))sub_146750)();
              for ( i8 = *((_DWORD *)this + 1); i8 < *((_DWORD *)this + 4); ++i8 )
              {
                v91 = (unsigned __int8 *)v168;
                v92 = 0;
                while ( v92 < v192 )
                {
                  v228 = 4 * v92++;
                  v93 = v91[2] | 0xFF000000 | (*v91 << 16);
                  v94 = v91[1];
                  v91 += 3;
                  *(_DWORD *)&v34[v228] = (v94 << 8) | v93;
                }
                v168 += 3 * *((_DWORD *)this + 8);
                v34 += 4 * *((_DWORD *)a2 + 8);
              }
              ++v89;
              v168 += v213;
            }
          }
          if ( v35 == 3073 )
          {
            v169 = Ogre::PixelBox::getSliceSkip(this);
            v229 = Ogre::PixelBox::getSliceSkip(a2);
            v193 = *((_DWORD *)this + 3) - *(_DWORD *)this;
            v245 = *((_DWORD *)this + 2);
            v95 = 16711680;
            while ( 1 )
            {
              if ( v245 >= *((_DWORD *)this + 5) )
                ((void (*)(void))sub_146750)();
              for ( i9 = *((_DWORD *)this + 1); i9 < *((_DWORD *)this + 4); ++i9 )
              {
                for ( i10 = 0; i10 < v193; ++i10 )
                  v34[i10] = (*(_DWORD *)&v36[4 * i10] & (unsigned int)v95) >> 16;
                v36 += 4 * *((_DWORD *)this + 8);
                v34 += *((_DWORD *)a2 + 8);
              }
              v36 += 4 * v169;
              v34 += v229;
              ++v245;
            }
          }
          if ( v35 <= 3073 )
          {
            if ( v35 == 2828 )
            {
              v170 = v36;
              v98 = Ogre::PixelBox::getSliceSkip(this);
              v99 = Ogre::PixelBox::getSliceSkip(a2);
              v194 = *((_DWORD *)this + 3) - *(_DWORD *)this;
              v100 = *((_DWORD *)this + 2);
              v214 = 3 * v98;
              for ( i11 = 4 * v99; ; v34 += i11 )
              {
                if ( v100 >= *((_DWORD *)this + 5) )
                  ((void (*)(void))sub_146750)();
                for ( i12 = *((_DWORD *)this + 1); i12 < *((_DWORD *)this + 4); ++i12 )
                {
                  v102 = (unsigned __int8 *)v170;
                  v103 = 0;
                  while ( v103 < v194 )
                  {
                    v230 = 4 * v103++;
                    v104 = v102[2] | 0xFF000000 | (*v102 << 16);
                    v105 = v102[1];
                    v102 += 3;
                    *(_DWORD *)&v34[v230] = (v105 << 8) | v104;
                  }
                  v170 += 3 * *((_DWORD *)this + 8);
                  v34 += 4 * *((_DWORD *)a2 + 8);
                }
                ++v100;
                v170 += v214;
              }
            }
            if ( v35 <= 2828 )
            {
              if ( v35 != 2826 )
                sub_14668A(
                  v33,
                  v5,
                  2826,
                  v35,
                  v153,
                  v154,
                  v155,
                  (int)v156,
                  v179,
                  v202,
                  v221,
                  v237,
                  v252,
                  v257,
                  v261,
                  v262,
                  v263,
                  v264,
                  v265,
                  v266,
                  v267);
              v195 = Ogre::PixelBox::getSliceSkip(this);
              v106 = Ogre::PixelBox::getSliceSkip(a2);
              v171 = *((char **)this + 2);
              v215 = *((_DWORD *)this + 3) - *(_DWORD *)this;
              v196 = 3 * v195;
              v247 = 3 * v106;
              while ( 1 )
              {
                if ( (int)v171 >= *((_DWORD *)this + 5) )
                  ((void (*)(void))sub_146750)();
                for ( i13 = *((_DWORD *)this + 1); i13 < *((_DWORD *)this + 4); ++i13 )
                {
                  v108 = v36;
                  v109 = v34;
                  v110 = 0;
                  while ( v110 < v215 )
                  {
                    ++v110;
                    v231 = v108[2];
                    v256 = v108[1];
                    v111 = *v108;
                    v108 += 3;
                    *v109 = v231;
                    v109[1] = v256;
                    v109[2] = v111;
                    v109 += 3;
                  }
                  v36 += 3 * *((_DWORD *)this + 8);
                  v34 += 3 * *((_DWORD *)a2 + 8);
                }
                v36 += v196;
                v34 += v247;
                ++v171;
              }
            }
            if ( v35 == 2829 )
            {
              v172 = v36;
              v112 = Ogre::PixelBox::getSliceSkip(this);
              v113 = Ogre::PixelBox::getSliceSkip(a2);
              v197 = *((_DWORD *)this + 3) - *(_DWORD *)this;
              v114 = *((_DWORD *)this + 2);
              v216 = 3 * v112;
              for ( i14 = 4 * v113; ; v34 += i14 )
              {
                if ( v114 >= *((_DWORD *)this + 5) )
                  ((void (*)(void))sub_146750)();
                for ( i15 = *((_DWORD *)this + 1); i15 < *((_DWORD *)this + 4); ++i15 )
                {
                  v116 = (unsigned __int8 *)v172;
                  v117 = 0;
                  while ( v117 < v197 )
                  {
                    v232 = 4 * v117++;
                    v118 = *v116 | 0xFF000000 | (v116[1] << 8);
                    v119 = v116[2];
                    v116 += 3;
                    *(_DWORD *)&v34[v232] = (v119 << 16) | v118;
                  }
                  v172 += 3 * *((_DWORD *)this + 8);
                  v34 += 4 * *((_DWORD *)a2 + 8);
                }
                ++v114;
                v172 += v216;
              }
            }
            if ( v35 != 2830 )
              sub_14668A(
                v33,
                v5,
                2830,
                v35,
                v153,
                v154,
                v155,
                (int)v156,
                v179,
                v202,
                v221,
                v237,
                v252,
                v257,
                v261,
                v262,
                v263,
                v264,
                v265,
                v266,
                v267);
            v173 = v36;
            v120 = Ogre::PixelBox::getSliceSkip(this);
            v121 = Ogre::PixelBox::getSliceSkip(a2);
            v122 = *((_DWORD *)this + 2);
            v198 = *((_DWORD *)this + 3) - *(_DWORD *)this;
            v217 = 3 * v120;
            v249 = 4 * v121;
            while ( 1 )
            {
              if ( v122 >= *((_DWORD *)this + 5) )
                ((void (*)(void))sub_146750)();
              for ( i16 = *((_DWORD *)this + 1); i16 < *((_DWORD *)this + 4); ++i16 )
              {
                v124 = (unsigned __int8 *)v173;
                v125 = 0;
                while ( v125 < v198 )
                {
                  v233 = 4 * v125++;
                  v126 = (*v124 << 8) | (v124[1] << 16) | 0xFF;
                  v127 = v124[2];
                  v124 += 3;
                  *(_DWORD *)&v34[v233] = (v127 << 24) | v126;
                }
                v173 += 3 * *((_DWORD *)this + 8);
                v34 += 4 * *((_DWORD *)a2 + 8);
              }
              v173 += v217;
              v34 += v249;
              ++v122;
            }
          }
          if ( v35 == 3083 )
          {
            v174 = v34;
            v128 = Ogre::PixelBox::getSliceSkip(this);
            v129 = Ogre::PixelBox::getSliceSkip(a2);
            v130 = *((_DWORD *)this + 2);
            v199 = *((_DWORD *)this + 3) - *(_DWORD *)this;
            v250 = 3 * v129;
            while ( 1 )
            {
              if ( v130 >= *((_DWORD *)this + 5) )
                ((void (*)(void))sub_146750)();
              for ( i17 = *((_DWORD *)this + 1); i17 < *((_DWORD *)this + 4); ++i17 )
              {
                v132 = v174;
                v133 = 0;
                while ( v133 < v199 )
                {
                  v134 = *(_DWORD *)&v36[4 * v133++];
                  *v132 = BYTE2(v134);
                  v132[1] = BYTE1(v134);
                  v132[2] = v134;
                  v132 += 3;
                }
                v36 += 4 * *((_DWORD *)this + 8);
                v174 += 3 * *((_DWORD *)a2 + 8);
              }
              v36 += 4 * v128;
              v174 += v250;
              ++v130;
            }
          }
          if ( v35 <= 3083 )
          {
            if ( v35 != 3082 )
              sub_14668A(
                v33,
                v5,
                3082,
                v35,
                v153,
                v154,
                v155,
                (int)v156,
                v179,
                v202,
                v221,
                v237,
                v252,
                v257,
                v261,
                v262,
                v263,
                v264,
                v265,
                v266,
                v267);
            v175 = Ogre::PixelBox::getSliceSkip(this);
            v135 = Ogre::PixelBox::getSliceSkip(a2);
            v200 = *((_DWORD *)this + 3) - *(_DWORD *)this;
            v136 = *((_DWORD *)this + 2);
            v176 = 4 * v175;
            v218 = 3 * v135;
            while ( 1 )
            {
              if ( v136 >= *((_DWORD *)this + 5) )
                ((void (*)(void))sub_146750)();
              for ( i18 = *((_DWORD *)this + 1); i18 < *((_DWORD *)this + 4); ++i18 )
              {
                v137 = v34;
                v138 = 0;
                while ( v138 < v200 )
                {
                  v139 = *(_DWORD *)&v36[4 * v138++];
                  *(_WORD *)v137 = v139;
                  v137[2] = BYTE2(v139);
                  v137 += 3;
                }
                v36 += 4 * *((_DWORD *)this + 8);
                v34 += 3 * *((_DWORD *)a2 + 8);
              }
              v36 += v176;
              v34 += v218;
              ++v136;
            }
          }
          if ( v35 == 3085 )
          {
            v177 = v34;
            v140 = Ogre::PixelBox::getSliceSkip(this);
            v141 = Ogre::PixelBox::getSliceSkip(a2);
            v142 = *((_DWORD *)this + 2);
            v219 = *((_DWORD *)this + 3) - *(_DWORD *)this;
            v251 = 4 * v140;
            for ( i19 = 4 * v141; ; v177 += i19 )
            {
              if ( v142 >= *((_DWORD *)this + 5) )
                ((void (*)(void))sub_146750)();
              for ( i20 = *((_DWORD *)this + 1); i20 < *((_DWORD *)this + 4); ++i20 )
              {
                for ( i21 = 0; i21 < v219; ++i21 )
                {
                  v145 = 4 * i21;
                  v146 = *(_DWORD *)&v36[4 * i21];
                  *(_DWORD *)&v177[v145] = ((unsigned __int8)v146 << 16)
                                         | ((*(_DWORD *)&v36[v145] & 0xFF0000u) >> 16)
                                         | *(_DWORD *)&v36[v145] & 0xFF00FF00;
                }
                v36 += 4 * *((_DWORD *)this + 8);
                v177 += 4 * *((_DWORD *)a2 + 8);
              }
              ++v142;
              v36 += v251;
            }
          }
          if ( v35 != 3086 )
            sub_14668A(
              v33,
              v5,
              3086,
              v35,
              v153,
              v154,
              v155,
              (int)v156,
              v179,
              v202,
              v221,
              v237,
              v252,
              v257,
              v261,
              v262,
              v263,
              v264,
              v265,
              v266,
              v267);
          v178 = v34;
          v147 = Ogre::PixelBox::getSliceSkip(this);
          v148 = Ogre::PixelBox::getSliceSkip(a2);
          v220 = *((_DWORD *)this + 3) - *(_DWORD *)this;
          v201 = *((_DWORD *)this + 2);
          v236 = 4 * v148;
          while ( 1 )
          {
            if ( v201 >= *((_DWORD *)this + 5) )
              ((void (*)(void))sub_146750)();
            for ( i22 = *((_DWORD *)this + 1); i22 < *((_DWORD *)this + 4); ++i22 )
            {
              for ( i23 = 0; i23 < v220; ++i23 )
              {
                v151 = 4 * i23;
                v152 = *(_DWORD *)&v36[4 * i23];
                *(_DWORD *)&v178[v151] = ((v152 & 0xFF00) << 8) | HIBYTE(v152) | (v152 << 24) | ((v152 & 0xFF0000) >> 8);
              }
              v36 += 4 * *((_DWORD *)this + 8);
              v178 += 4 * *((_DWORD *)a2 + 8);
            }
            v36 += 4 * v147;
            v178 += v236;
            ++v201;
          }
        }
        LODWORD(v18) = &v267;
        v19 = *((_DWORD *)this + 1);
        v20 = *((_DWORD *)this + 2);
        v267 = *(_DWORD *)this;
        v268 = v19;
        v269 = v20;
        v21 = *((_DWORD *)this + 4);
        v22 = *((_DWORD *)this + 5);
        v270 = *((_DWORD *)this + 3);
        v271 = v21;
        v272 = v22;
        v23 = *((_DWORD *)this + 7);
        v24 = *((_DWORD *)this + 8);
        v273 = *((_DWORD *)this + 6);
        v274 = v23;
        v275 = v24;
        HIDWORD(v18) = a2;
        v276 = *((const Ogre::PixelBox **)this + 9);
        v17 = (const Ogre::PixelBox *)(*((_DWORD *)this + 7) - 27);
        v274 = *((_DWORD *)this + 7) - 26 - ((_DWORD)v17 + (*((_DWORD *)this + 7) == 26)) + 12;
      }
      else
      {
        v11 = *((_DWORD *)a2 + 1);
        v12 = *((_DWORD *)a2 + 2);
        v267 = *(_DWORD *)a2;
        v268 = v11;
        v269 = v12;
        v13 = *((_DWORD *)a2 + 4);
        v14 = *((_DWORD *)a2 + 5);
        v270 = *((_DWORD *)a2 + 3);
        v271 = v13;
        v272 = v14;
        v15 = *((_DWORD *)a2 + 7);
        v16 = *((_DWORD *)a2 + 8);
        v273 = *((_DWORD *)a2 + 6);
        v274 = v15;
        v275 = v16;
        v17 = *((const Ogre::PixelBox **)a2 + 9);
        v18 = __PAIR64__(&v267, (unsigned int)this);
        v276 = v17;
        v274 = (v10 != 0) + 12;
      }
LABEL_23:
      Ogre::PixelUtil::bulkPixelConversion((Ogre::PixelUtil *)v18, (const Ogre::PixelBox *)HIDWORD(v18), v17);
    }
    isConsecutive = Ogre::PixelBox::isConsecutive(this);
    v157 = *((char **)a2 + 6);
    v9 = *((char **)this + 6);
    if ( isConsecutive == 0 || Ogre::PixelBox::isConsecutive(a2) == 0 )
    {
      NumElemBytes = Ogre::PixelUtil::getNumElemBytes(v6);
      v180 = Ogre::PixelUtil::getNumElemBytes(*((_DWORD *)a2 + 7));
      v203 = *((_DWORD *)this + 8) * NumElemBytes;
      v238 = NumElemBytes * Ogre::PixelBox::getSliceSkip(this);
      v222 = *((_DWORD *)a2 + 8) * v180;
      v27 = Ogre::PixelBox::getSliceSkip(a2);
      v28 = *((_DWORD *)this + 2);
      v181 = v180 * v27;
      v253 = (*((_DWORD *)this + 3) - *(_DWORD *)this) * NumElemBytes;
      while ( 1 )
      {
        if ( v28 >= *((_DWORD *)this + 5) )
          ((void (*)(void))sub_146750)();
        for ( i24 = *((_DWORD *)this + 1); i24 < *((_DWORD *)this + 4); ++i24 )
        {
          j_memcpy(v157, v9, v253);
          v9 += v203;
          v157 += v222;
        }
        ++v28;
        v9 += v238;
        v157 += v181;
      }
    }
    ConsecutiveSize = Ogre::PixelBox::getConsecutiveSize(this);
    v31 = v157;
  }
  v32 = j_memcpy(v31, v9, ConsecutiveSize);
  v18 = sub_146750(v32);
  goto LABEL_23;
}


//======================================================================
// Ogre::PixelUtil::bulkPixelConversion(void *,Ogre::PixelFormat,void *,Ogre::PixelFormat,unsigned int)
// address: 0x00146760   size: 0x40 (64 bytes)
//======================================================================
void __fastcall __noreturn Ogre::PixelUtil::bulkPixelConversion(
        int a1,
        int a2,
        const Ogre::PixelBox *a3,
        int a4,
        int a5)
{
  _DWORD v5[10]; // [sp+0h] [bp-54h] BYREF
  _DWORD v6[11]; // [sp+28h] [bp-2Ch] BYREF

  v5[7] = a2;
  v6[3] = a5;
  v6[4] = 1;
  v6[5] = 1;
  memset(v5, 0, 12);
  v5[3] = a5;
  v5[4] = 1;
  v5[5] = 1;
  v5[6] = a1;
  v5[8] = a5;
  v5[9] = a5;
  memset(v6, 0, 12);
  v6[6] = a3;
  v6[7] = a4;
  v6[8] = a5;
  v6[9] = a5;
  Ogre::PixelUtil::bulkPixelConversion((Ogre::PixelUtil *)v5, (const Ogre::PixelBox *)v6, a3);
}


//======================================================================
// Ogre::PixelUtil::getBNFExpressionOfPixelFormats(bool)
// address: 0x00146834   size: 0x12C (300 bytes)
//======================================================================
Ogre::PixelUtil *__fastcall Ogre::PixelUtil::getBNFExpressionOfPixelFormats(Ogre::PixelUtil *this, int a2)
{
  int v3; // r5
  _DWORD *v4; // r6
  int v5; // r7
  char *v6; // r6
  int v9; // [sp+10h] [bp-34h] BYREF
  _BYTE v10[4]; // [sp+14h] [bp-30h] BYREF
  char *v11; // [sp+18h] [bp-2Ch] BYREF
  _BYTE v12[4]; // [sp+1Ch] [bp-28h] BYREF
  char *v13; // [sp+20h] [bp-24h] BYREF
  _BYTE v14[4]; // [sp+24h] [bp-20h] BYREF
  int v15; // [sp+28h] [bp-1Ch] BYREF
  _DWORD *v16[6]; // [sp+2Ch] [bp-18h] BYREF

  v3 = 0;
  memset(v16, 0, 20);
  v16[2] = v16;
  v16[3] = v16;
  do
  {
    if ( a2 == 0 || Ogre::PixelUtil::isAccessible(v3) )
    {
      Ogre::PixelUtil::getFormatName((int)&v9, v3);
      v6 = *(char **)(v9 - 12);
      sub_3BEB1C(v10, &v9);
      v11 = v6;
      sub_3BEB1C(v12, v10);
      v13 = v11;
      sub_3BEB1C(v14, v12);
      std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::string>,std::_Select1st<std::pair<unsigned int const,std::string>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::string>>>::_M_insert_equal(
        &v15,
        &v13);
      sub_3BDF80(v14);
      sub_3BDF80(v12);
      sub_3BDF80(v10);
      sub_3BDF80(&v9);
    }
    ++v3;
  }
  while ( v3 != 45 );
  v4 = v16;
  *(_DWORD *)this = &byte_55FB88;
  while ( v4 != v16[2] )
  {
    if ( *(_DWORD *)(*(_DWORD *)this - 12) != 0 )
      sub_3BE96C((int)this, " | ");
    v5 = sub_391E44(v4);
    v11 = &byte_55FB88;
    sub_3BE700(&v11, *(_DWORD *)(*(_DWORD *)(v5 + 20) - 12) + 1);
    sub_3BE898(&v11, "'", 1);
    sub_3BE774(&v11, v5 + 20);
    sub_3BEB1C(&v13, &v11);
    sub_3BE948((int)&v13, "'");
    sub_3BE7F0(this, &v13);
    sub_3BDF80(&v13);
    sub_3BDF80(&v11);
    v4 = (_DWORD *)sub_391E44(v4);
  }
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::string>,std::_Select1st<std::pair<unsigned int const,std::string>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::string>>>::_M_erase(
    (int)&v15,
    v16[1]);
  return this;
}

