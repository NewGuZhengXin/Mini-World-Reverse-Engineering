// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::CharacterCodingUtf8

//======================================================================
// Ogre::CharacterCodingUtf8::~CharacterCodingUtf8()
// address: 0x0016EFD4   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre19CharacterCodingUtf8D1Ev'
void __fastcall Ogre::CharacterCodingUtf8::~CharacterCodingUtf8(Ogre::CharacterCodingUtf8 *this)
{
  *(_DWORD *)this = &off_456010;
}


//======================================================================
// Ogre::CharacterCodingUtf8::JumpOverSpaces(char const*)
// address: 0x0016EFE4   size: 0x12 (18 bytes)
//======================================================================
int __fastcall Ogre::CharacterCodingUtf8::JumpOverSpaces(Ogre::CharacterCodingUtf8 *this, const char *a2)
{
  const char *i; // r3
  int result; // r0

  for ( i = a2; ; ++i )
  {
    result = i - a2;
    if ( *i != 32 )
      break;
  }
  return result;
}


//======================================================================
// Ogre::CharacterCodingUtf8::GetCharBytes(unsigned char const*)
// address: 0x0016EFF6   size: 0x2A (42 bytes)
//======================================================================
int __fastcall Ogre::CharacterCodingUtf8::GetCharBytes(Ogre::CharacterCodingUtf8 *this, const unsigned __int8 *a2)
{
  int v2; // r2
  int result; // r0
  unsigned int v4; // r3

  if ( a2 == nullptr )
    return 0;
  v2 = *a2;
  result = 1;
  if ( (v2 & 0x80) != 0 )
  {
    result = 0;
    v4 = 128;
    do
    {
      if ( a2[result] == 0 )
        break;
      if ( (v2 & v4) == 0 )
        break;
      ++result;
      v4 >>= 1;
    }
    while ( result != 6 );
  }
  return result;
}


//======================================================================
// Ogre::CharacterCodingUtf8::GetControlCode(char const*,Ogre::EControlCode &,bool)
// address: 0x0016F020   size: 0x4E (78 bytes)
//======================================================================
int __fastcall Ogre::CharacterCodingUtf8::GetControlCode(int a1, unsigned __int8 *a2, int *a3, int a4)
{
  int v4; // r0
  int v5; // r3
  int result; // r0

  if ( a2 != nullptr )
  {
    v4 = *a2;
    switch ( v4 )
    {
      case 10:
        v5 = 2;
LABEL_15:
        *a3 = v5;
        return 1;
      case 92:
        result = 2;
        if ( a2[1] == 110 )
          goto LABEL_17;
        break;
      case 13:
        result = 1;
LABEL_17:
        *a3 = result;
        return result;
      default:
        if ( *a2 == 0 )
        {
          v5 = 3;
          goto LABEL_15;
        }
        if ( a4 != 0 && v4 == 35 && a2[1] != 35 )
        {
          v5 = 4;
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
// Ogre::CharacterCodingUtf8::IsEnglish(unsigned char const*)
// address: 0x0016F06E   size: 0x12 (18 bytes)
//======================================================================
bool __fastcall Ogre::CharacterCodingUtf8::IsEnglish(Ogre::CharacterCodingUtf8 *this, const unsigned __int8 *a2)
{
  return (unsigned __int8)(*a2 - 33) <= 0x5Eu;
}


//======================================================================
// Ogre::CharacterCodingUtf8::IsPunctuation(unsigned char const*)
// address: 0x0016F080   size: 0x26 (38 bytes)
//======================================================================
bool __fastcall Ogre::CharacterCodingUtf8::IsPunctuation(Ogre::CharacterCodingUtf8 *this, const unsigned __int8 *a2)
{
  int v2; // r0

  v2 = *a2;
  return (v2 & 0xFD) == 0x2C || v2 == 33 || v2 == 63 || v2 == 58 || v2 == 59;
}


//======================================================================
// Ogre::CharacterCodingUtf8::ToUniqueID(unsigned char const*)
// address: 0x0016F0A6   size: 0x14 (20 bytes)
//======================================================================
int __fastcall Ogre::CharacterCodingUtf8::ToUniqueID(Ogre::CharacterCodingUtf8 *this, const unsigned __int8 *a2)
{
  int result; // r0

  result = 0;
  while ( *a2 != 0 )
    result = *a2++ + (result << 8);
  return result;
}


//======================================================================
// Ogre::CharacterCodingUtf8::~CharacterCodingUtf8()
// address: 0x0016F0BC   size: 0x16 (22 bytes)
//======================================================================
void __fastcall Ogre::CharacterCodingUtf8::~CharacterCodingUtf8(Ogre::CharacterCodingUtf8 *this)
{
  *(_DWORD *)this = &off_456010;
  operator delete(this);
}


//======================================================================
// Ogre::CharacterCodingUtf8::GetAChar(char const*,unsigned char *)
// address: 0x0016F0D8   size: 0x28 (40 bytes)
//======================================================================
size_t __fastcall Ogre::CharacterCodingUtf8::GetAChar(
        Ogre::CharacterCodingUtf8 *this,
        const char *a2,
        unsigned __int8 *a3)
{
  size_t v5; // r5

  if ( a2 == nullptr )
    return 0;
  v5 = (*(int (__fastcall **)(Ogre::CharacterCodingUtf8 *))(*(_DWORD *)this + 16))(this);
  j_memcpy(a3, a2, v5);
  a3[v5] = 0;
  return v5;
}


//======================================================================
// Ogre::CharacterCodingUtf8::ToUnicode(unsigned char const*)
// address: 0x0016F100   size: 0x16 (22 bytes)
//======================================================================
int __fastcall Ogre::CharacterCodingUtf8::ToUnicode(Ogre::CharacterCodingUtf8 *this, Ogre::StringUtil *a2)
{
  const char *v3; // r0
  int v4; // r2

  v3 = (const char *)(*(int (__fastcall **)(Ogre::CharacterCodingUtf8 *))(*(_DWORD *)this + 16))(this);
  return *(unsigned __int16 *)Ogre::StringUtil::UTF8ToUnicode(a2, v3, v4);
}

