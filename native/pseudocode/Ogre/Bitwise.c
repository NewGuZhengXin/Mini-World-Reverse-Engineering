// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Bitwise

//======================================================================
// Ogre::Bitwise::fixedToFixed(unsigned int,unsigned int,unsigned int)
// address: 0x001443E4   size: 0x32 (50 bytes)
//======================================================================
unsigned int __fastcall Ogre::Bitwise::fixedToFixed(
        unsigned int this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int v4; // r1

  if ( a2 <= a3 )
  {
    if ( a2 < a3 && this != 0 )
    {
      v4 = (1 << a2) - 1;
      if ( this == v4 )
        return (1 << a3) - 1;
      else
        return (this << a3) / v4;
    }
  }
  else
  {
    this >>= a2 - a3;
  }
  return this;
}


//======================================================================
// Ogre::Bitwise::floatToFixed(float,unsigned int)
// address: 0x00144416   size: 0x42 (66 bytes)
//======================================================================
int __fastcall Ogre::Bitwise::floatToFixed(Ogre::Bitwise *this, float a2, unsigned int a3)
{
  if ( *(float *)&this <= 0.0 )
    return 0;
  if ( *(float *)&this < 1.0 )
    return (unsigned int)(float)(*(float *)&this * (float)(1 << SLOBYTE(a2)));
  return (1 << SLOBYTE(a2)) - 1;
}


//======================================================================
// Ogre::Bitwise::intWrite(void *,int,unsigned int)
// address: 0x00144458   size: 0x26 (38 bytes)
//======================================================================
char *__fastcall Ogre::Bitwise::intWrite(Ogre::Bitwise *this, char *a2, int a3, unsigned int a4)
{
  char *result; // r0

  result = a2 - 1;
  switch ( (unsigned int)a2 )
  {
    case 1u:
      goto LABEL_4;
    case 2u:
      *(_WORD *)this = a3;
      break;
    case 3u:
      *((_BYTE *)this + 2) = BYTE2(a3);
      *((_BYTE *)this + 1) = BYTE1(a3);
LABEL_4:
      *(_BYTE *)this = a3;
      break;
    case 4u:
      *(_DWORD *)this = a3;
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// Ogre::Bitwise::intRead(void const*,int)
// address: 0x0014447E   size: 0x32 (50 bytes)
//======================================================================
int __fastcall Ogre::Bitwise::intRead(Ogre::Bitwise *this, const void *a2, int a3)
{
  int result; // r0

  switch ( (unsigned int)a2 )
  {
    case 1u:
      result = *(unsigned __int8 *)this;
      break;
    case 2u:
      result = *(unsigned __int16 *)this;
      break;
    case 3u:
      result = (*((unsigned __int8 *)this + 1) << 8) | (*((unsigned __int8 *)this + 2) << 16) | *(unsigned __int8 *)this;
      break;
    case 4u:
      result = *(_DWORD *)this;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


//======================================================================
// Ogre::Bitwise::floatToHalfI(unsigned int)
// address: 0x001444B0   size: 0x6A (106 bytes)
//======================================================================
int __fastcall Ogre::Bitwise::floatToHalfI(unsigned int this, unsigned int a2)
{
  unsigned int v2; // r2
  int v3; // r3
  signed int v4; // r1
  int result; // r0

  v2 = HIWORD(this) & 0x8000;
  v3 = (unsigned __int8)(this >> 23) - 112;
  v4 = this & 0x7FFFFF;
  if ( (unsigned __int8)(this >> 23) <= 0x70u )
  {
    result = 0;
    if ( v3 < -10 )
      return result;
    return (unsigned __int16)(v2 | ((v4 | 0x800000) >> (1 - v3) >> 13));
  }
  if ( (unsigned __int8)(this >> 23) == 255 )
  {
    if ( v4 != 0 )
      return v2 | (v4 >> 13) | 0x7C00 | (v4 >> 13 == 0);
  }
  else if ( v3 <= 30 )
  {
    return (unsigned __int16)(v2 | (v4 >> 13) | (v3 << 10));
  }
  return v2 | 0x7C00;
}


//======================================================================
// Ogre::Bitwise::halfToFloatI(unsigned short)
// address: 0x0014451C   size: 0x50 (80 bytes)
//======================================================================
int __fastcall Ogre::Bitwise::halfToFloatI(unsigned int this, unsigned __int16 a2)
{
  unsigned int v2; // r1
  unsigned int v3; // r2
  int v4; // r3
  int result; // r0
  unsigned int v6; // r0

  v2 = this >> 15;
  v3 = this << 17 >> 27;
  v4 = this & 0x3FF;
  if ( v3 == 0 )
  {
    result = v2 << 31;
    if ( v4 == 0 )
      return result;
    while ( (v4 & 0x400) == 0 )
    {
      v4 *= 2;
      --v3;
    }
    ++v3;
    v4 &= ~0x400u;
  }
  else if ( v3 == 31 )
  {
    v6 = v2 << 31;
    if ( v4 != 0 )
      v6 |= v4 << 13;
    return v6 | 0x7F800000;
  }
  return (v4 << 13) | (v2 << 31) | ((v3 + 112) << 23);
}

