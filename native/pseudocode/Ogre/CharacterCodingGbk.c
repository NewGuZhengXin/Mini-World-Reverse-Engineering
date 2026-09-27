// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::CharacterCodingGbk

//======================================================================
// Ogre::CharacterCodingGbk::~CharacterCodingGbk()
// address: 0x0016CFCC   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre18CharacterCodingGbkD1Ev'
void __fastcall Ogre::CharacterCodingGbk::~CharacterCodingGbk(Ogre::CharacterCodingGbk *this)
{
  *(_DWORD *)this = &off_456010;
}


//======================================================================
// Ogre::CharacterCodingGbk::JumpOverSpaces(char const*)
// address: 0x0016CFDC   size: 0x22 (34 bytes)
//======================================================================
int __fastcall Ogre::CharacterCodingGbk::JumpOverSpaces(Ogre::CharacterCodingGbk *this, const char *a2)
{
  int result; // r0
  int v3; // r3

  for ( result = 0; ; result += 2 )
  {
    while ( 1 )
    {
      v3 = *(unsigned __int8 *)a2;
      if ( v3 != 32 )
        break;
      ++a2;
      ++result;
    }
    if ( v3 != 161 || *((unsigned __int8 *)a2 + 1) != 161 )
      break;
    a2 += 2;
  }
  return result;
}


//======================================================================
// Ogre::CharacterCodingGbk::GetAChar(char const*,unsigned char *)
// address: 0x0016CFFE   size: 0x3A (58 bytes)
//======================================================================
int __fastcall Ogre::CharacterCodingGbk::GetAChar(Ogre::CharacterCodingGbk *this, const char *a2, unsigned __int8 *a3)
{
  unsigned int v3; // r4
  int v4; // r0

  if ( a2 == nullptr )
    return 0;
  v3 = *(unsigned __int8 *)a2;
  v4 = *((unsigned __int8 *)a2 + 1);
  if ( v3 <= 0x80 )
  {
    *a3 = 0;
    if ( v3 - 32 > 0x5F )
    {
      a3[1] = 0;
    }
    else
    {
      a3[1] = v3;
      a3[2] = 0;
    }
    return 1;
  }
  else
  {
    a3[1] = v4;
    *a3 = v3;
    a3[2] = 0;
    return (v4 != 0) + 1;
  }
}


//======================================================================
// Ogre::CharacterCodingGbk::GetCharBytes(unsigned char const*)
// address: 0x0016D038   size: 0x10 (16 bytes)
//======================================================================
int __fastcall Ogre::CharacterCodingGbk::GetCharBytes(Ogre::CharacterCodingGbk *this, const unsigned __int8 *a2)
{
  return 2 - (*a2 <= 0x80u);
}


//======================================================================
// Ogre::CharacterCodingGbk::GetControlCode(char const*,Ogre::EControlCode &,bool)
// address: 0x0016D048   size: 0x4E (78 bytes)
//======================================================================
int __fastcall Ogre::CharacterCodingGbk::GetControlCode(int a1, unsigned __int8 *a2, int *a3, int a4)
{
  int result; // r0
  int v5; // r1
  int v6; // r3

  if ( a2 != nullptr )
  {
    result = *a2;
    if ( *a2 == 0 )
    {
      *a3 = 3;
      return result;
    }
    v5 = a2[1];
    switch ( result )
    {
      case 10:
        v6 = 2;
LABEL_15:
        *a3 = v6;
        return 1;
      case 92:
        result = 2;
        if ( v5 == 110 )
          goto LABEL_17;
        break;
      case 13:
        result = 1;
LABEL_17:
        *a3 = result;
        return result;
      default:
        if ( a4 != 0 && result == 35 && v5 != 35 )
        {
          v6 = 4;
          goto LABEL_15;
        }
        break;
    }
    result = 0;
    goto LABEL_17;
  }
  return 0;
}


//======================================================================
// Ogre::CharacterCodingGbk::IsEnglish(unsigned char const*)
// address: 0x0016D096   size: 0x12 (18 bytes)
//======================================================================
bool __fastcall Ogre::CharacterCodingGbk::IsEnglish(Ogre::CharacterCodingGbk *this, const unsigned __int8 *a2)
{
  return (unsigned __int8)(a2[1] - 33) <= 0x5Eu;
}


//======================================================================
// Ogre::CharacterCodingGbk::IsPunctuation(unsigned char const*)
// address: 0x0016D0A8   size: 0x30 (48 bytes)
//======================================================================
bool __fastcall Ogre::CharacterCodingGbk::IsPunctuation(Ogre::CharacterCodingGbk *this, const unsigned __int8 *a2)
{
  _BOOL4 result; // r0
  int v3; // r3

  result = false;
  if ( *a2 == 0 )
  {
    v3 = a2[1];
    return (v3 & 0xFD) == 0x2C || v3 == 33 || v3 == 63 || (unsigned __int8)(v3 - 58) <= 1u;
  }
  return result;
}


//======================================================================
// Ogre::CharacterCodingGbk::ToUniqueID(unsigned char const*)
// address: 0x0016D0D8   size: 0x10 (16 bytes)
//======================================================================
int __fastcall Ogre::CharacterCodingGbk::ToUniqueID(Ogre::CharacterCodingGbk *this, const unsigned __int8 *a2)
{
  int result; // r0

  result = a2[1];
  if ( *a2 != 0 )
    result += *a2 << 8;
  return result;
}


//======================================================================
// Ogre::CharacterCodingGbk::~CharacterCodingGbk()
// address: 0x0016D0E8   size: 0x16 (22 bytes)
//======================================================================
void __fastcall Ogre::CharacterCodingGbk::~CharacterCodingGbk(Ogre::CharacterCodingGbk *this)
{
  *(_DWORD *)this = &off_456010;
  operator delete(this);
}


//======================================================================
// Ogre::CharacterCodingGbk::ToUnicode(unsigned char const*)
// address: 0x0016D104   size: 0x24 (36 bytes)
//======================================================================
int __fastcall Ogre::CharacterCodingGbk::ToUnicode(Ogre::CharacterCodingGbk *this, const unsigned __int8 *a2, int a3)
{
  const unsigned __int8 *v3; // r2
  wchar_t *v4; // r1
  const char *v5; // r3
  _DWORD v7[2]; // [sp+4h] [bp-8h] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v3 = a2;
  if ( *a2 != 0 )
  {
    v4 = (int *)((char *)&dword_0 + 1);
    v5 = (char *)&dword_0 + 2;
  }
  else
  {
    v4 = &dword_0 + 1;
    ++v3;
    v5 = (_BYTE *)(&dword_0 + 1);
  }
  Ogre::StringUtil::AnsiToUnicode((Ogre::StringUtil *)v7, v4, (int)v3, v5, (int)this);
  return LOWORD(v7[0]);
}

