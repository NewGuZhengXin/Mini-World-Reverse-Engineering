// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: TiXmlBase

//======================================================================
// TiXmlBase::~TiXmlBase()
// address: 0x001D9148   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN9TiXmlBaseD1Ev'
void __fastcall TiXmlBase::~TiXmlBase(TiXmlBase *this)
{
  *(_DWORD *)this = &off_459788;
}


//======================================================================
// TiXmlBase::~TiXmlBase()
// address: 0x001D9184   size: 0x16 (22 bytes)
//======================================================================
void __fastcall TiXmlBase::~TiXmlBase(TiXmlBase *this)
{
  *(_DWORD *)this = &off_459788;
  operator delete(this);
}


//======================================================================
// TiXmlBase::IsWhiteSpace(char)
// address: 0x001D9220   size: 0x24 (36 bytes)
//======================================================================
bool __fastcall TiXmlBase::IsWhiteSpace(TiXmlBase *this, char a2)
{
  char v3; // r3
  _BOOL4 result; // r0

  v3 = *((_BYTE *)this + ctype_ + 1);
  result = true;
  if ( (v3 & 8) == 0 && this != (TiXmlBase *)&byte_9[1] )
    return this == (TiXmlBase *)&byte_9[4];
  return result;
}


//======================================================================
// TiXmlBase::ConvertUTF32ToUTF8(unsigned long,char *,int *)
// address: 0x001D9278   size: 0x9C (156 bytes)
//======================================================================
unsigned int __fastcall TiXmlBase::ConvertUTF32ToUTF8(unsigned int this, unsigned int a2, char *a3, int *a4)
{
  int v5; // r0
  unsigned int result; // r0
  _BYTE *v7; // r1
  _DWORD v8[8]; // [sp+4h] [bp-20h]

  v8[0] = 0;
  v8[1] = 0;
  v8[2] = 192;
  v8[3] = 224;
  v8[4] = 240;
  v8[5] = 248;
  v8[6] = 252;
  v5 = 1;
  if ( this > 0x7F )
  {
    if ( this > 0x7FF )
    {
      if ( this > 0xFFFF )
      {
        result = 0x1FFFFF;
        if ( this > 0x1FFFFF )
        {
          *(_DWORD *)a3 = 0;
          return result;
        }
        v5 = 4;
      }
      else
      {
        v5 = 3;
      }
    }
    else
    {
      v5 = 2;
    }
  }
  *(_DWORD *)a3 = v5;
  v7 = (_BYTE *)(a2 + *(_DWORD *)a3);
  result = *(_DWORD *)a3 - 1;
  switch ( *(_DWORD *)a3 )
  {
    case 1:
      goto LABEL_14;
    case 2:
      goto LABEL_13;
    case 3:
      goto LABEL_12;
    case 4:
      *--v7 = this & 0x3F | 0x80;
      this >>= 6;
LABEL_12:
      *--v7 = this & 0x3F | 0x80;
      this >>= 6;
LABEL_13:
      --v7;
      result = this & 0x3F | 0xFFFFFF80;
      *v7 = result;
      this >>= 6;
LABEL_14:
      *(v7 - 1) = this | LOBYTE(v8[*(_DWORD *)a3]);
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// TiXmlBase::IsAlpha(unsigned char,TiXmlEncoding)
// address: 0x001D9324   size: 0x1C (28 bytes)
//======================================================================
int __fastcall TiXmlBase::IsAlpha(unsigned int a1)
{
  int result; // r0

  result = 1;
  if ( a1 <= 0x7E )
    return *(_BYTE *)(ctype_ + a1 + 1) & 3;
  return result;
}


//======================================================================
// TiXmlBase::IsAlphaNum(unsigned char,TiXmlEncoding)
// address: 0x001D9344   size: 0x1C (28 bytes)
//======================================================================
int __fastcall TiXmlBase::IsAlphaNum(unsigned int a1)
{
  int result; // r0

  result = 1;
  if ( a1 <= 0x7E )
    return *(_BYTE *)(ctype_ + a1 + 1) & 7;
  return result;
}


//======================================================================
// TiXmlBase::SkipWhiteSpace(char const*,TiXmlEncoding)
// address: 0x001D9414   size: 0x76 (118 bytes)
//======================================================================
unsigned __int8 *__fastcall TiXmlBase::SkipWhiteSpace(unsigned __int8 *a1, int a2)
{
  unsigned __int8 *v2; // r4
  int v3; // r5
  int v4; // r3
  int v5; // r3
  int v6; // r5

  v2 = a1;
  if ( a1 != nullptr )
  {
    if ( *a1 == 0 )
      return (unsigned __int8 *)*a1;
    if ( a2 == 1 )
    {
      while ( 1 )
      {
        v3 = *v2;
        if ( *v2 == 0 )
          return v2;
        if ( v3 != 239 )
          goto LABEL_12;
        v4 = v2[1];
        if ( v4 == 187 )
        {
          v5 = v2[2];
          goto LABEL_10;
        }
        if ( v4 == 191 )
        {
          v5 = v2[2];
          if ( v5 != 190 )
          {
LABEL_10:
            if ( v5 != 191 )
              goto LABEL_12;
          }
          v2 += 3;
        }
        else
        {
LABEL_12:
          if ( !TiXmlBase::IsWhiteSpace((TiXmlBase *)*v2, a2) && v3 != 10 && v3 != 13 )
            return v2;
          ++v2;
        }
      }
    }
    while ( 1 )
    {
      v6 = *v2;
      if ( *v2 == 0 || !TiXmlBase::IsWhiteSpace((TiXmlBase *)*v2, a2) && v6 != 10 && v6 != 13 )
        break;
      ++v2;
    }
  }
  return v2;
}


//======================================================================
// TiXmlBase::ReadName(char const*,TiXmlString *,TiXmlEncoding)
// address: 0x001D948C   size: 0x74 (116 bytes)
//======================================================================
const char *__fastcall TiXmlBase::ReadName(const char *a1, TiXmlString *a2)
{
  const char *i; // r4
  int v5; // r3

  TiXmlString::operator=(a2, (char *)&unk_3FB8EA);
  if ( a1 == nullptr || *a1 == 0 || TiXmlBase::IsAlpha(*(unsigned __int8 *)a1) == 0 && *a1 != 95 )
    return nullptr;
  for ( i = a1; i != nullptr; ++i )
  {
    if ( *i == 0 )
      break;
    if ( TiXmlBase::IsAlphaNum(*(unsigned __int8 *)i) == 0 )
    {
      v5 = *(unsigned __int8 *)i;
      if ( v5 != 95 && (unsigned int)(v5 - 45) > 1 && v5 != 58 )
        break;
    }
  }
  if ( i - a1 > 0 )
    TiXmlString::assign(a2, a1, i - a1);
  return i;
}


//======================================================================
// TiXmlBase::GetEntity(char const*,char *,int *,TiXmlEncoding)
// address: 0x001D9504   size: 0x12A (298 bytes)
//======================================================================
char *__fastcall TiXmlBase::GetEntity(char *a1, _BYTE *a2, char *a3, int a4)
{
  int i; // r5
  char *v6; // r4
  char *v7; // r0
  int v8; // r4
  int v9; // r1
  char *v10; // r0
  int *v11; // r3
  int v12; // r2
  int v13; // r2
  char *v14; // r2
  int v15; // r1
  int v16; // r5
  int v17; // r5
  char *v18; // r4
  char **v19; // r6
  void *v24; // [sp+14h] [bp-8h] BYREF

  *(_DWORD *)a3 = 0;
  v24 = &TiXmlString::nullrep_;
  if ( a1[1] != 35 || a1[2] == 0 )
  {
    for ( i = 0; i != 5; ++i )
    {
      v19 = &(&TiXmlBase::entity)[3 * i];
      if ( j_strncmp(*v19, a1, (size_t)v19[1]) == 0 )
      {
        *a2 = *((_BYTE *)v19 + 8);
        *(_DWORD *)a3 = 1;
        v18 = v19[1];
        goto LABEL_31;
      }
    }
    v6 = a1 + 1;
    *a2 = *a1;
    goto LABEL_36;
  }
  if ( a1[2] == 120 )
  {
    v6 = (char *)(unsigned __int8)a1[3];
    if ( a1[3] == 0 )
      goto LABEL_36;
    v7 = j_strchr(a1 + 3, 59);
    if ( v7 != nullptr )
    {
      v6 = (char *)(unsigned __int8)*v7;
      if ( *v7 != 0 )
      {
        v8 = v7 - a1;
        v9 = 1;
        v10 = v7 - 1;
        v11 = nullptr;
        while ( 1 )
        {
          v12 = (unsigned __int8)*v10;
          if ( v12 == 120 )
            break;
          if ( (unsigned __int8)(v12 - 48) > 9u )
          {
            if ( (unsigned int)(v12 - 97) > 5 )
            {
              if ( (unsigned int)(v12 - 65) > 5 )
                goto LABEL_35;
              v13 = v12 - 55;
            }
            else
            {
              v13 = v12 - 87;
            }
            v11 = (int *)((char *)v11 + v13 * v9);
          }
          else
          {
            v11 = (int *)((char *)v11 + (v12 - 48) * v9);
          }
          v9 *= 16;
          --v10;
        }
LABEL_25:
        if ( a4 == 1 )
        {
          TiXmlBase::ConvertUTF32ToUTF8((unsigned int)v11, (unsigned int)a2, a3, v11);
        }
        else
        {
          *a2 = (_BYTE)v11;
          *(_DWORD *)a3 = 1;
        }
        v18 = (char *)(v8 + 1);
LABEL_31:
        v6 = &v18[(_DWORD)a1];
      }
      goto LABEL_36;
    }
LABEL_34:
    v6 = v7;
    goto LABEL_36;
  }
  v7 = j_strchr(a1 + 2, 59);
  if ( v7 == nullptr )
    goto LABEL_34;
  v6 = (char *)(unsigned __int8)*v7;
  if ( *v7 != 0 )
  {
    v14 = v7 - 1;
    v15 = 1;
    v11 = nullptr;
    while ( 1 )
    {
      v16 = (unsigned __int8)*v14;
      if ( v16 == 35 )
      {
        v8 = v7 - a1;
        goto LABEL_25;
      }
      v17 = v16 - 48;
      if ( (unsigned __int8)v17 > 9u )
        break;
      --v14;
      v11 = (int *)((char *)v11 + v17 * v15);
      v15 *= 10;
    }
LABEL_35:
    v6 = nullptr;
  }
LABEL_36:
  TiXmlString::quit(&v24);
  return v6;
}


//======================================================================
// TiXmlBase::GetChar(char const*,char *,int *,TiXmlEncoding)
// address: 0x001D9638   size: 0x52 (82 bytes)
//======================================================================
char *__fastcall TiXmlBase::GetChar(char *a1, _BYTE *a2, char *a3, int a4)
{
  int v4; // r4
  int i; // r3
  int v7; // r4

  if ( a4 == 1 )
    *(_DWORD *)a3 = TiXmlBase::utf8ByteTable[(unsigned __int8)*a1];
  else
    *(_DWORD *)a3 = 1;
  if ( *(_DWORD *)a3 == 1 )
  {
    v4 = (unsigned __int8)*a1;
    if ( v4 == 38 )
    {
      return TiXmlBase::GetEntity(a1, a2, a3, a4);
    }
    else
    {
      *a2 = v4;
      return a1 + 1;
    }
  }
  else if ( *(_DWORD *)a3 != 0 )
  {
    for ( i = 0; ; ++i )
    {
      v7 = *(_DWORD *)a3;
      if ( a1[i] == 0 || i >= v7 )
        break;
      a2[i] = a1[i];
    }
    return &a1[v7];
  }
  else
  {
    return nullptr;
  }
}


//======================================================================
// TiXmlBase::StringEqual(char const*,char const*,bool,TiXmlEncoding)
// address: 0x001D9690   size: 0x70 (112 bytes)
//======================================================================
unsigned __int8 *__fastcall TiXmlBase::StringEqual(unsigned __int8 *result, _BYTE *a2, int a3, int a4)
{
  _BYTE *v4; // r4
  int v6; // r3
  unsigned int v7; // r6
  signed int v8; // r7
  unsigned int v9; // r0

  v4 = result;
  if ( result != nullptr )
  {
    v6 = *result;
    result = nullptr;
    if ( v6 != 0 )
    {
      if ( a3 != 0 )
      {
        while ( 1 )
        {
          v7 = (unsigned __int8)*v4;
          if ( *v4 == 0 )
            break;
          v8 = (unsigned __int8)*a2;
          if ( *a2 == 0 )
            break;
          if ( a4 != 1 || (unsigned __int8)*v4 <= 0x7Fu )
            v7 = tolower((unsigned __int8)*v4);
          v9 = v8;
          if ( a4 != 1 || v8 <= 127 )
            v9 = tolower(v8);
          if ( v7 != v9 )
            break;
          ++v4;
          ++a2;
        }
      }
      else
      {
        while ( *v4 != 0 && *a2 != 0 && *v4 == *a2 )
        {
          ++v4;
          ++a2;
        }
      }
      return (unsigned __int8 *)(*a2 == 0);
    }
  }
  return result;
}


//======================================================================
// TiXmlBase::ReadText(char const*,TiXmlString *,bool,char const*,bool,TiXmlEncoding)
// address: 0x001D9700   size: 0xF2 (242 bytes)
//======================================================================
unsigned __int8 *__fastcall TiXmlBase::ReadText(
        unsigned __int8 *Char,
        TiXmlString *a2,
        int a3,
        char *a4,
        unsigned __int8 a5,
        int a6)
{
  int v10; // r6
  char v11; // r1
  TiXmlBase *v12; // r0
  int v13; // r2
  size_t v15; // [sp+8h] [bp-Ch] BYREF
  char v16[8]; // [sp+Ch] [bp-8h] BYREF

  TiXmlString::operator=(a2, (char *)&unk_3FB8EA);
  if ( a3 != 0 && TiXmlBase::condenseWhiteSpace != 0 )
  {
    Char = TiXmlBase::SkipWhiteSpace(Char, a6);
LABEL_8:
    v10 = 0;
    while ( Char != nullptr )
    {
      if ( *Char == 0 || TiXmlBase::StringEqual(Char, a4, a5, a6) != nullptr )
      {
LABEL_12:
        Char += j_strlen(a4);
        return Char;
      }
      v12 = (TiXmlBase *)*Char;
      if ( v12 != (TiXmlBase *)&byte_9[4] && v12 != (TiXmlBase *)&byte_9[1] && !TiXmlBase::IsWhiteSpace(v12, v11) )
      {
        if ( v10 != 0 )
          TiXmlString::operator+=(a2, 32, v13);
        *(_DWORD *)v16 = 0;
        Char = (unsigned __int8 *)TiXmlBase::GetChar((char *)Char, v16, (char *)&v15, a6);
        if ( v15 == 1 )
          TiXmlString::operator+=(a2, v16[0], 1);
        else
          TiXmlString::append(a2, v16, v15);
        goto LABEL_8;
      }
      ++Char;
      v10 = 1;
    }
  }
  else
  {
    while ( Char != nullptr )
    {
      if ( *Char == 0 || TiXmlBase::StringEqual(Char, a4, a5, a6) != nullptr )
        goto LABEL_12;
      *(_DWORD *)v16 = 0;
      Char = (unsigned __int8 *)TiXmlBase::GetChar((char *)Char, v16, (char *)&v15, a6);
      TiXmlString::append(a2, v16, v15);
    }
  }
  return Char;
}


//======================================================================
// TiXmlBase::EncodeString(TiXmlString const&,TiXmlString*)
// address: 0x001DA910   size: 0xEE (238 bytes)
//======================================================================
int **__fastcall TiXmlBase::EncodeString(int **this, const TiXmlString *a2, TiXmlString *a3)
{
  int **v3; // r7
  int v5; // r6
  int v6; // r1
  unsigned __int8 *v7; // r2
  unsigned int v8; // r3
  char *v9; // r1
  size_t v10; // r2
  TiXmlString *v11; // r0
  size_t v12; // r0
  unsigned __int8 v13; // [sp+Bh] [bp-29h] BYREF
  char s[32]; // [sp+Ch] [bp-28h] BYREF

  v3 = this;
  v5 = 0;
  while ( 1 )
  {
    v6 = **v3;
    if ( v5 >= v6 )
      return this;
    v7 = (unsigned __int8 *)*v3 + v5;
    v8 = v7[8];
    if ( v8 == 38 )
    {
      if ( v5 < v6 - 2 && v7[9] == 35 && v7[10] == 120 )
      {
        do
        {
          if ( v5 >= **v3 - 1 )
            break;
          this = (int **)TiXmlString::append(a2, (const char *)*v3 + v5++ + 8, 1u);
        }
        while ( *((_BYTE *)*v3 + v5 + 8) != 59 );
      }
      else
      {
        ++v5;
        this = (int **)TiXmlString::append(a2, TiXmlBase::entity, unk_468814);
      }
    }
    else
    {
      ++v5;
      switch ( v8 )
      {
        case '<':
          v9 = off_46881C;
          v10 = dword_468820;
LABEL_19:
          v11 = a2;
          goto LABEL_23;
        case '>':
          v9 = off_468828;
          v10 = dword_46882C;
          goto LABEL_19;
        case '"':
          v9 = off_468834;
          v10 = dword_468838;
          goto LABEL_19;
        case '\'':
          v9 = off_468840;
          v10 = dword_468844;
          goto LABEL_19;
        default:
          break;
      }
      if ( v8 > 0x1F )
      {
        v9 = (char *)&v13;
        v13 = v7[8];
        v11 = a2;
        v10 = 1;
      }
      else
      {
        j_snprintf(s, 0x20u, "&#x%02X;", v8);
        v12 = j_strlen(s);
        v9 = s;
        v10 = v12;
        v11 = a2;
      }
LABEL_23:
      this = (int **)TiXmlString::append(v11, v9, v10);
    }
  }
}

