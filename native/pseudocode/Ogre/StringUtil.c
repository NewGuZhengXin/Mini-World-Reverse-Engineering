// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::StringUtil

//======================================================================
// Ogre::StringUtil::init(void)
// address: 0x00187F0C   size: 0x50 (80 bytes)
//======================================================================
unsigned __int64 __fastcall Ogre::StringUtil::init(Ogre::StringUtil *this)
{
  unsigned int v1; // r1
  int i; // r5
  int j; // r4
  unsigned int v4; // r7

  v1 = 1048577;
  for ( i = 0; i != 1024; i += 4 )
  {
    for ( j = 0; j != 5120; j += 1024 )
    {
      v4 = (125 * v1 + 3) % 0x2AAAAB;
      v1 = (125 * v4 + 3) % 0x2AAAAB;
      *(_DWORD *)((char *)&unk_4BB76C + i + j) = (unsigned __int16)v1 | (v4 << 16);
    }
  }
  return __PAIR64__(&unk_4BB76C, (unsigned int)this);
}


//======================================================================
// Ogre::StringUtil::trim(std::string &,bool,bool)
// address: 0x00187F68   size: 0x84 (132 bytes)
//======================================================================
int __fastcall Ogre::StringUtil::trim(int result, int a2, int a3)
{
  int v3; // r4
  int v5; // r3
  int v6; // r0
  int v7; // r0

  v3 = result;
  v5 = dword_4BCB6C << 31;
  if ( (dword_4BCB6C & 1) == 0 )
  {
    result = _cxa_guard_acquire(&dword_4BCB6C);
    if ( result != 0 )
    {
      sub_3BF0BC((int)&unk_4BCB70, " \t\r");
      _cxa_guard_release(&dword_4BCB6C);
      result = sub_390BFC(&unk_4BCB70, (void (*)(void *))sub_3BDF80);
    }
  }
  if ( a3 != 0 )
  {
    v6 = sub_3BDC10(v3, &unk_4BCB70, -1, v5);
    result = sub_3BE210(v3, v6 + 1, -1);
  }
  if ( a2 != 0 )
  {
    v7 = sub_3BDB64(v3, &unk_4BCB70, 0);
    return sub_3BE210(v3, 0, v7);
  }
  return result;
}


//======================================================================
// Ogre::StringUtil::toLowerCase(std::string &)
// address: 0x00188004   size: 0x2E (46 bytes)
//======================================================================
unsigned int __fastcall Ogre::StringUtil::toLowerCase(int a1)
{
  unsigned __int8 *v2; // r4
  int v3; // r6
  unsigned int result; // r0
  _BYTE *v5; // r5

  v2 = (unsigned __int8 *)sub_3BE0F0(a1);
  v3 = sub_3BE12C(a1);
  result = sub_3BE0F0(a1);
  v5 = (_BYTE *)result;
  while ( v2 != (unsigned __int8 *)v3 )
  {
    result = tolower(*v2++);
    *v5++ = result;
  }
  return result;
}


//======================================================================
// Ogre::StringUtil::toUpperCase(std::string &)
// address: 0x00188032   size: 0x2E (46 bytes)
//======================================================================
unsigned int __fastcall Ogre::StringUtil::toUpperCase(int a1)
{
  unsigned __int8 *v2; // r4
  int v3; // r6
  unsigned int result; // r0
  _BYTE *v5; // r5

  v2 = (unsigned __int8 *)sub_3BE0F0(a1);
  v3 = sub_3BE12C(a1);
  result = sub_3BE0F0(a1);
  v5 = (_BYTE *)result;
  while ( v2 != (unsigned __int8 *)v3 )
  {
    result = toupper(*v2++);
    *v5++ = result;
  }
  return result;
}


//======================================================================
// Ogre::StringUtil::standardisePath(std::string const&)
// address: 0x00188060   size: 0x4C (76 bytes)
//======================================================================
_DWORD *__fastcall Ogre::StringUtil::standardisePath(_DWORD *a1, int a2)
{
  int v3; // r5
  int v4; // r0
  _BYTE *i; // r3
  int v6; // r5

  sub_3BEB1C(a1, a2);
  v3 = sub_3BE0F0(a1);
  v4 = sub_3BE12C(a1);
  for ( i = (_BYTE *)v3; i != (_BYTE *)v4; ++i )
  {
    if ( *i == 92 )
      *i = 47;
  }
  v6 = *(_DWORD *)(*a1 - 12);
  sub_3BE0DC(a1);
  if ( *(_BYTE *)(*a1 + v6 - 1) != 47 )
    sub_3BEA50(a1, 47);
  return a1;
}


//======================================================================
// Ogre::StringUtil::splitFilename(std::string const&,std::string &,std::string &)
// address: 0x001880AC   size: 0xA2 (162 bytes)
//======================================================================
int __fastcall Ogre::StringUtil::splitFilename(int a1, int a2, int a3)
{
  int v5; // r0
  _BYTE *i; // r3
  int v7; // r0
  int v9; // [sp+4h] [bp-10h]
  int v10; // [sp+4h] [bp-10h]
  int v11; // [sp+8h] [bp-Ch] BYREF
  _BYTE v12[8]; // [sp+Ch] [bp-8h] BYREF

  sub_3BEB1C(&v11, a1);
  v9 = sub_3BE0F0(&v11);
  v5 = sub_3BE12C(&v11);
  for ( i = (_BYTE *)v9; i != (_BYTE *)v5; ++i )
  {
    if ( *i == 92 )
      *i = 47;
  }
  v7 = sub_3BD9F0(&v11, 47, -1);
  if ( v7 == -1 )
  {
    sub_3BE1FC(a3);
    sub_3BEBBC(a2);
  }
  else
  {
    v10 = v7 + 1;
    sub_3BED3C(v12, &v11, v7 + 1, *(_DWORD *)(v11 - 12) - 1 - v7);
    sub_3BEBBC(a2);
    sub_3BDF80(v12);
    sub_3BED3C(v12, &v11, 0, v10);
    sub_3BEBBC(a3);
    sub_3BDF80(v12);
  }
  return sub_3BDF80(&v11);
}


//======================================================================
// Ogre::StringUtil::splitBaseFilename(std::string const&,std::string &,std::string &)
// address: 0x00188150   size: 0x68 (104 bytes)
//======================================================================
int __fastcall Ogre::StringUtil::splitBaseFilename(int a1, int a2, int a3)
{
  int v5; // r0
  int v6; // r6
  _BYTE v9[8]; // [sp+Ch] [bp-8h] BYREF

  v5 = sub_3BDB04(a1, ".");
  v6 = v5;
  if ( v5 == -1 )
  {
    sub_3BE1FC(a3);
    return sub_3BEBBC(a2);
  }
  else
  {
    sub_3BED3C(v9, a1, v5 + 1, -1);
    sub_3BEBBC(a3);
    sub_3BDF80(v9);
    sub_3BED3C(v9, a1, 0, v6);
    sub_3BEBBC(a2);
    return sub_3BDF80(v9);
  }
}


//======================================================================
// Ogre::StringUtil::splitFullFilename(std::string const&,std::string &,std::string &,std::string &)
// address: 0x001881BC   size: 0x2C (44 bytes)
//======================================================================
unsigned __int64 __fastcall Ogre::StringUtil::splitFullFilename(int a1, int a2, int a3, int a4)
{
  unsigned __int64 v7; // [sp+0h] [bp-8h] BYREF

  v7 = __PAIR64__(&byte_55FB88, a1);
  Ogre::StringUtil::splitFilename(a1, (int)&v7 + 4, a4);
  Ogre::StringUtil::splitBaseFilename((int)&v7 + 4, a2, a3);
  sub_3BDF80((char *)&v7 + 4);
  return v7;
}


//======================================================================
// Ogre::StringUtil::match(std::string const&,std::string const&,bool)
// address: 0x001881EC   size: 0xFE (254 bytes)
//======================================================================
bool __fastcall Ogre::StringUtil::match(int a1, int a2, int a3)
{
  unsigned __int8 *v5; // r7
  unsigned __int8 *v6; // r5
  int v7; // r3
  _BOOL4 v8; // r3
  unsigned __int8 *v9; // r3
  unsigned __int8 *v10; // r3
  int v11; // r0
  _BOOL4 v12; // r3
  _BOOL4 v13; // r7
  int v15; // [sp+0h] [bp-14h]
  unsigned __int8 *v16; // [sp+4h] [bp-10h]
  char v17[4]; // [sp+8h] [bp-Ch] BYREF
  _BYTE v18[8]; // [sp+Ch] [bp-8h] BYREF

  sub_3BEB1C(v17, a1);
  sub_3BEB1C(v18, a2);
  if ( a3 == 0 )
  {
    Ogre::StringUtil::toLowerCase((int)v17);
    Ogre::StringUtil::toLowerCase((int)v18);
  }
  v5 = (unsigned __int8 *)sub_3BE0F0(v17);
  v6 = (unsigned __int8 *)sub_3BE0F0(v18);
  v15 = sub_3BE12C(v18);
  while ( v5 != (unsigned __int8 *)sub_3BE12C(v17) && v6 != (unsigned __int8 *)sub_3BE12C(v18) )
  {
    v7 = *v6;
    if ( v7 == 42 )
    {
      v15 = (int)(v6 + 1);
      if ( v6 + 1 == (unsigned __int8 *)sub_3BE12C(v18) )
      {
        v5 = (unsigned __int8 *)sub_3BE12C(v17);
      }
      else
      {
        v16 = v5;
        do
        {
          v5 = v16;
          v8 = v16 != (unsigned __int8 *)sub_3BE12C(v17) && *v16 != v6[1];
          ++v16;
        }
        while ( v8 );
      }
    }
    else if ( *v5 == v7 )
    {
      v9 = v6 + 1;
      ++v5;
      v6 = (unsigned __int8 *)v15;
      v15 = (int)v9;
    }
    else
    {
      if ( v15 == sub_3BE12C(v18) )
      {
        v13 = false;
        goto LABEL_23;
      }
      v6 = (unsigned __int8 *)sub_3BE12C(v18);
    }
    v10 = v6;
    v6 = (unsigned __int8 *)v15;
    v15 = (int)v10;
  }
  v11 = sub_3BE12C(v18);
  v12 = false;
  if ( v6 == (unsigned __int8 *)v11 )
    v12 = v5 == (unsigned __int8 *)sub_3BE12C(v17);
  v13 = v12;
LABEL_23:
  sub_3BDF80(v18);
  sub_3BDF80(v17);
  return v13;
}


//======================================================================
// Ogre::StringUtil::hash(char const*,unsigned int,int)
// address: 0x001882EC   size: 0x5C (92 bytes)
//======================================================================
int __fastcall Ogre::StringUtil::hash(Ogre::StringUtil *this, const char *a2, int a3, int a4)
{
  int v4; // r1
  Ogre::StringUtil *v5; // r2
  int v6; // r4
  int i; // r3
  int v8; // r2
  int v9; // r4
  int v10; // r5

  v4 = (_DWORD)a2 << 8;
  if ( a3 < 0 )
  {
    v8 = -286331154;
    for ( i = 2146271213; ; v8 += 3 + 32 * v8 + v9 + i )
    {
      v9 = *(unsigned __int8 *)this;
      if ( *(_BYTE *)this == 0 )
        break;
      this = (Ogre::StringUtil *)((char *)this + 1);
      i = (v8 + i) ^ dword_4BB76C[v9 + v4];
    }
  }
  else
  {
    v5 = (Ogre::StringUtil *)((char *)this + a3);
    v6 = -286331154;
    i = 2146271213;
    while ( this != v5 )
    {
      v10 = *(unsigned __int8 *)this;
      this = (Ogre::StringUtil *)((char *)this + 1);
      i = (v6 + i) ^ dword_4BB76C[v10 + v4];
      v6 += 3 + 32 * v6 + v10 + i;
    }
  }
  return i;
}


//======================================================================
// Ogre::StringUtil::hash(std::string const&,unsigned int)
// address: 0x00188358   size: 0xE (14 bytes)
//======================================================================
int __fastcall Ogre::StringUtil::hash(Ogre::StringUtil **a1, const char *a2, int a3, int a4)
{
  return Ogre::StringUtil::hash(*a1, a2, -1, a4);
}


//======================================================================
// Ogre::StringUtil::UnicodeToAnsi(char *,int,wchar_t const*,int)
// address: 0x00188366   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::StringUtil::UnicodeToAnsi(Ogre::StringUtil *this, char *a2, int a3, const wchar_t *a4, int a5)
{
  return 0;
}


//======================================================================
// Ogre::StringUtil::AnsiToUnicode(wchar_t *,int,char const*,int)
// address: 0x0018836A   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::StringUtil::AnsiToUnicode(Ogre::StringUtil *this, wchar_t *a2, int a3, const char *a4, int a5)
{
  return 0;
}


//======================================================================
// Ogre::StringUtil::IsDBCSLeadByte(char)
// address: 0x0018836E   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::StringUtil::IsDBCSLeadByte(Ogre::StringUtil *this, char a2)
{
  return 0;
}


//======================================================================
// Ogre::StringUtil::UnicodeToUTF8(char *,int,wchar_t const*,int)
// address: 0x00188374   size: 0x6E (110 bytes)
//======================================================================
int __fastcall Ogre::StringUtil::UnicodeToUTF8(Ogre::StringUtil *this, char *a2, unsigned int *a3, int a4, int a5)
{
  Ogre::StringUtil *v5; // r1
  unsigned int v6; // r4
  unsigned int v8; // [sp+0h] [bp-Ch]

  if ( a4 < 0 )
    a4 = 0x7FFFFFFF;
  v5 = this;
  while ( 1 )
  {
    v6 = *a3;
    if ( *a3 == 0 || a4 == 0 )
      break;
    --a4;
    ++a3;
    if ( v6 > 0x7F )
    {
      v8 = v6 >> 6;
      if ( v6 > 0x7FF )
      {
        *(_BYTE *)v5 = (v6 >> 12) | 0xE0;
        *((_BYTE *)v5 + 1) = v8 & 0x3F | 0x80;
        *((_BYTE *)v5 + 2) = v6 & 0x3F | 0x80;
        v5 = (Ogre::StringUtil *)((char *)v5 + 3);
      }
      else
      {
        *(_BYTE *)v5 = v8 | 0xC0;
        *((_BYTE *)v5 + 1) = v6 & 0x3F | 0x80;
        v5 = (Ogre::StringUtil *)((char *)v5 + 2);
      }
    }
    else
    {
      *(_BYTE *)v5 = v6;
      v5 = (Ogre::StringUtil *)((char *)v5 + 1);
    }
  }
  *(_BYTE *)v5 = 0;
  return v5 - this;
}


//======================================================================
// Ogre::StringUtil::UTF8ToUnicode(wchar_t *,int,char const*,int)
// address: 0x001883EC   size: 0x7E (126 bytes)
//======================================================================
int __fastcall Ogre::StringUtil::UTF8ToUnicode(Ogre::StringUtil *this, wchar_t *a2, _BYTE *a3, int a4, int a5)
{
  Ogre::StringUtil *i; // r7
  int v6; // r4
  unsigned int v8; // r5
  _BYTE *v9; // r6
  unsigned int j; // r1
  char v11; // r12
  const char *v12; // [sp+0h] [bp-Ch]

  if ( a4 < 0 )
    a4 = 0x7FFFFFFF;
  for ( i = this; ; i = (Ogre::StringUtil *)((char *)i + 4) )
  {
    v6 = (unsigned __int8)*a3;
    if ( *a3 == 0 || a4 <= 0 )
      break;
    v12 = (const char *)(a4 - 1);
    ++a3;
    v8 = v6 & 0xFFFFFF80;
    if ( (v6 & 0xFFFFFF80) != 0 )
    {
      v9 = a3;
      v8 = 0;
      for ( j = 64; ; j >>= 1 )
      {
        v11 = 6 * (a4 - (_BYTE)v12) - 6;
        a3 = v9;
        if ( (v6 & j) == 0 )
          break;
        --v12;
        v8 = *v9++ & 0x3F | (v8 << 6);
      }
    }
    else
    {
      v11 = 0;
      j = 128;
    }
    *(_DWORD *)i = v8 | ((v6 & (j - 1)) << v11);
    a4 = (int)v12;
  }
  *(_DWORD *)i = 0;
  return (Ogre::StringUtil *)((char *)i + 4) - this - 1;
}


//======================================================================
// Ogre::StringUtil::UnicodeToAnsi(wchar_t const*,int)
// address: 0x00188470   size: 0x1A (26 bytes)
//======================================================================
void *__fastcall Ogre::StringUtil::UnicodeToAnsi(Ogre::StringUtil *this, const wchar_t *a2, int a3)
{
  int savedregs; // [sp+0h] [bp+0h]

  Ogre::StringUtil::UnicodeToAnsi((Ogre::StringUtil *)&unk_4BCB74, (char *)&stru_1FF8.st_size, (int)this, a2, savedregs);
  return &unk_4BCB74;
}


//======================================================================
// Ogre::StringUtil::AnsiToUnicode(char const*,int)
// address: 0x00188490   size: 0x1A (26 bytes)
//======================================================================
void *__fastcall Ogre::StringUtil::AnsiToUnicode(Ogre::StringUtil *this, const char *a2, int a3)
{
  int savedregs; // [sp+0h] [bp+0h]

  Ogre::StringUtil::AnsiToUnicode(
    (Ogre::StringUtil *)&unk_4BEB74,
    (wchar_t *)&stru_1FF8.st_size,
    (int)this,
    a2,
    savedregs);
  return &unk_4BEB74;
}


//======================================================================
// Ogre::StringUtil::UnicodeToUTF8(wchar_t const*,int)
// address: 0x001884B0   size: 0x1A (26 bytes)
//======================================================================
void *__fastcall Ogre::StringUtil::UnicodeToUTF8(Ogre::StringUtil *this, const wchar_t *a2, int a3)
{
  int savedregs; // [sp+0h] [bp+0h]

  Ogre::StringUtil::UnicodeToUTF8(
    (Ogre::StringUtil *)&unk_4BCB74,
    (char *)&stru_1FF8.st_size,
    (unsigned int *)this,
    (int)a2,
    savedregs);
  return &unk_4BCB74;
}


//======================================================================
// Ogre::StringUtil::UTF8ToUnicode(char const*,int)
// address: 0x001884D0   size: 0x1A (26 bytes)
//======================================================================
void *__fastcall Ogre::StringUtil::UTF8ToUnicode(Ogre::StringUtil *this, const char *a2, int a3)
{
  int savedregs; // [sp+0h] [bp+0h]

  Ogre::StringUtil::UTF8ToUnicode(
    (Ogre::StringUtil *)&unk_4BEB74,
    (wchar_t *)&stru_1FF8.st_size,
    this,
    (int)a2,
    savedregs);
  return &unk_4BEB74;
}


//======================================================================
// Ogre::StringUtil::startsWith(std::string const&,std::string const&,bool)
// address: 0x00188628   size: 0x48 (72 bytes)
//======================================================================
bool __fastcall Ogre::StringUtil::startsWith(_DWORD *a1, _DWORD *a2, const void *a3)
{
  unsigned int v4; // r3
  _BOOL4 v6; // r5
  const void *v8[2]; // [sp+4h] [bp-8h] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v4 = *(_DWORD *)(*a2 - 12);
  v6 = false;
  if ( *(_DWORD *)(*a1 - 12) >= v4 && v4 != 0 )
  {
    sub_3BED3C(v8, a1, 0, v4);
    if ( a3 != nullptr )
      Ogre::StringUtil::toLowerCase((int)v8);
    v6 = std::operator==<char>(v8, (const void **)a2);
    sub_3BDF80(v8);
  }
  return v6;
}


//======================================================================
// Ogre::StringUtil::endsWith(std::string const&,std::string const&,bool)
// address: 0x00188670   size: 0x48 (72 bytes)
//======================================================================
bool __fastcall Ogre::StringUtil::endsWith(_DWORD *a1, _DWORD *a2, const void *a3)
{
  unsigned int v4; // r2
  _BOOL4 v6; // r5
  unsigned int v7; // r3
  const void *v9[2]; // [sp+4h] [bp-8h] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v4 = *(_DWORD *)(*a1 - 12);
  v6 = false;
  v7 = *(_DWORD *)(*a2 - 12);
  if ( v4 >= v7 && v7 != 0 )
  {
    sub_3BED3C(v9, a1, v4 - v7, v7);
    if ( a3 != nullptr )
      Ogre::StringUtil::toLowerCase((int)v9);
    v6 = std::operator==<char>(v9, (const void **)a2);
    sub_3BDF80(v9);
  }
  return v6;
}


//======================================================================
// Ogre::StringUtil::split(std::string const&,std::string const&,unsigned int)
// address: 0x001887EC   size: 0xA2 (162 bytes)
//======================================================================
int __fastcall Ogre::StringUtil::split(int a1, int a2, int a3, int a4)
{
  unsigned int v5; // r1
  int v6; // r4
  int v7; // r0
  int v8; // r2
  int v9; // r7
  int i; // [sp+8h] [bp-14h]
  _BYTE v15[8]; // [sp+14h] [bp-8h] BYREF

  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v5 = 10;
  if ( a4 != 0 )
    v5 = a4 + 1;
  v6 = 0;
  std::vector<std::string>::reserve((char **)a1, v5);
  for ( i = 0; ; ++i )
  {
    v7 = sub_3BDA68(a2, a3, v6);
    v8 = v6 + 1;
    v9 = v7;
    if ( v7 != v6 )
      break;
LABEL_10:
    v6 = sub_3BDB64(a2, a3, v8);
    if ( v9 == -1 )
      return a1;
  }
  if ( v7 != -1 && (a4 == 0 || i != a4) )
  {
    sub_3BED3C(v15, a2, v6, v7 - v6);
    std::vector<std::string>::push_back((int *)a1, (int)v15);
    sub_3BDF80(v15);
    v8 = v9 + 1;
    goto LABEL_10;
  }
  sub_3BED3C(v15, a2, v6, -1);
  std::vector<std::string>::push_back((int *)a1, (int)v15);
  sub_3BDF80(v15);
  return a1;
}

