// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: TiXmlAttribute

//======================================================================
// TiXmlAttribute::Print(__sFILE *,int)const
// address: 0x001D91A0   size: 0xA (10 bytes)
//======================================================================
int __fastcall TiXmlAttribute::Print(int a1, int a2, int a3)
{
  return TiXmlAttribute::Print(a1, a2, a3, 0);
}


//======================================================================
// TiXmlAttribute::~TiXmlAttribute()
// address: 0x001D91D8   size: 0x2A (42 bytes)
//======================================================================
// Alternative name is '_ZN14TiXmlAttributeD1Ev'
void __fastcall TiXmlAttribute::~TiXmlAttribute(void **this)
{
  *this = &off_4597B8;
  TiXmlString::quit(this + 6);
  TiXmlString::quit(this + 5);
  *this = &off_459788;
}


//======================================================================
// TiXmlAttribute::~TiXmlAttribute()
// address: 0x001D920C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall TiXmlAttribute::~TiXmlAttribute(void **this)
{
  TiXmlAttribute::~TiXmlAttribute(this);
  operator delete(this);
}


//======================================================================
// TiXmlAttribute::TiXmlAttribute(void)
// address: 0x001D9248   size: 0x28 (40 bytes)
//======================================================================
// Alternative name is '_ZN14TiXmlAttributeC1Ev'
void __fastcall TiXmlAttribute::TiXmlAttribute(TiXmlAttribute *this)
{
  *((_DWORD *)this + 2) = -1;
  *((_DWORD *)this + 1) = -1;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 8) = 0;
  *(_DWORD *)this = &off_4597B8;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 5) = &TiXmlString::nullrep_;
  *((_DWORD *)this + 6) = &TiXmlString::nullrep_;
}


//======================================================================
// TiXmlAttribute::Parse(char const*,TiXmlParsingData *,TiXmlEncoding)
// address: 0x001D99A0   size: 0x10E (270 bytes)
//======================================================================
unsigned __int8 *__fastcall TiXmlAttribute::Parse(_DWORD *a1, unsigned __int8 *a2, int *a3, int a4)
{
  unsigned __int8 *v7; // r0
  const char *v8; // r4
  unsigned __int8 *Name; // r0
  unsigned __int8 *v10; // r0
  unsigned int v11; // r2
  int v12; // r0
  unsigned __int8 *v13; // r0
  int v14; // r3
  char v16; // r1
  int v17; // r0
  int v18; // [sp+8h] [bp-Ch]
  TiXmlString *v19; // [sp+Ch] [bp-8h]

  v7 = TiXmlBase::SkipWhiteSpace(a2, a4);
  v8 = (const char *)v7;
  if ( v7 == nullptr || *v7 == 0 )
    return nullptr;
  if ( a3 != nullptr )
  {
    TiXmlParsingData::Stamp(a3, (unsigned int)v7, a4);
    a1[1] = *a3;
    a1[2] = a3[1];
  }
  Name = (unsigned __int8 *)TiXmlBase::ReadName(v8, (TiXmlString *)(a1 + 5));
  if ( Name == nullptr || *Name == 0 )
    goto LABEL_27;
  v10 = TiXmlBase::SkipWhiteSpace(Name, a4);
  v11 = (unsigned int)v10;
  if ( v10 == nullptr || *v10 != 61 )
  {
    v12 = a1[4];
    if ( v12 != 0 )
      TiXmlDocument::SetError(v12, 7, v11, a3, a4);
    return nullptr;
  }
  v13 = TiXmlBase::SkipWhiteSpace(v10 + 1, a4);
  v8 = (const char *)v13;
  if ( v13 == nullptr || (v14 = *v13, *v13 == 0) )
  {
LABEL_27:
    v17 = a1[4];
    if ( v17 != 0 )
      TiXmlDocument::SetError(v17, 7, (unsigned int)v8, a3, a4);
    return nullptr;
  }
  v19 = (TiXmlString *)(a1 + 6);
  if ( v14 == 39 )
    return TiXmlBase::ReadText(v13 + 1, v19, 0, "'", 0, a4);
  if ( v14 == 34 )
    return TiXmlBase::ReadText(v13 + 1, v19, 0, "\"", 0, a4);
  TiXmlString::operator=(v19, (char *)&unk_3FB8EA);
  do
  {
    v18 = *(unsigned __int8 *)v8;
    if ( *v8 == 0
      || TiXmlBase::IsWhiteSpace((TiXmlBase *)*(unsigned __int8 *)v8, v16)
      || v18 == 10
      || v18 == 13
      || v18 == 47
      || v18 == 62 )
    {
      break;
    }
    if ( v18 == 39 || v18 == 34 )
      goto LABEL_27;
    ++v8;
    TiXmlString::operator+=(v19, v18, v18);
  }
  while ( v8 != nullptr );
  return (unsigned __int8 *)v8;
}


//======================================================================
// TiXmlAttribute::Next(void)const
// address: 0x001DB344   size: 0x1C (28 bytes)
//======================================================================
int __fastcall TiXmlAttribute::Next(TiXmlAttribute *this)
{
  int v1; // r3
  int result; // r0

  result = *((_DWORD *)this + 8);
  v1 = result;
  if ( **(_DWORD **)(result + 24) == 0 )
  {
    result = 0;
    if ( **(_DWORD **)(v1 + 20) != 0 )
      return v1;
  }
  return result;
}


//======================================================================
// TiXmlAttribute::Previous(void)const
// address: 0x001DB474   size: 0x1C (28 bytes)
//======================================================================
int __fastcall TiXmlAttribute::Previous(TiXmlAttribute *this)
{
  int v1; // r3
  int result; // r0

  result = *((_DWORD *)this + 7);
  v1 = result;
  if ( **(_DWORD **)(result + 24) == 0 )
  {
    result = 0;
    if ( **(_DWORD **)(v1 + 20) != 0 )
      return v1;
  }
  return result;
}


//======================================================================
// TiXmlAttribute::Print(__sFILE *,int,TiXmlString *)const
// address: 0x001DB490   size: 0xEA (234 bytes)
//======================================================================
void __fastcall TiXmlAttribute::Print(int a1, FILE *a2, int a3, TiXmlString *a4)
{
  TiXmlString *v7; // r2
  _DWORD *v8; // r1
  int v9; // r3
  _BYTE *v10; // r1
  _BYTE *i; // r3
  TiXmlString *v12; // r0
  char *v13; // r1
  const char *v14; // [sp+10h] [bp-Ch] BYREF
  void *v15[2]; // [sp+14h] [bp-8h] BYREF

  v14 = (const char *)&TiXmlString::nullrep_;
  v15[0] = &TiXmlString::nullrep_;
  TiXmlBase::EncodeString((int **)(a1 + 20), (const TiXmlString *)&v14, (TiXmlString *)v15);
  TiXmlBase::EncodeString((int **)(a1 + 24), (const TiXmlString *)v15, v7);
  v8 = *(_DWORD **)(a1 + 24);
  if ( *v8 != 0 )
  {
    v10 = v8 + 2;
    for ( i = v10; *i != 0; ++i )
    {
      if ( *i == 34 )
      {
        v9 = i - v10;
        goto LABEL_8;
      }
    }
  }
  v9 = -1;
LABEL_8:
  if ( v9 == -1 )
  {
    if ( a2 != nullptr )
      j_fprintf(a2, "%s=\"%s\"", v14 + 8, (const char *)v15[0] + 8);
    if ( a4 != nullptr )
    {
      TiXmlString::operator+=(a4, (size_t **)&v14);
      TiXmlString::operator+=(a4, "=\"");
      TiXmlString::operator+=(a4, (size_t **)v15);
      v12 = a4;
      v13 = "\"";
LABEL_17:
      TiXmlString::operator+=(v12, v13);
    }
  }
  else
  {
    if ( a2 != nullptr )
      j_fprintf(a2, "%s='%s'", v14 + 8, (const char *)v15[0] + 8);
    if ( a4 != nullptr )
    {
      TiXmlString::operator+=(a4, (size_t **)&v14);
      TiXmlString::operator+=(a4, "='");
      TiXmlString::operator+=(a4, (size_t **)v15);
      v12 = a4;
      v13 = "'";
      goto LABEL_17;
    }
  }
  TiXmlString::quit(v15);
  TiXmlString::quit((void **)&v14);
}


//======================================================================
// TiXmlAttribute::QueryIntValue(int *)const
// address: 0x001DB64C   size: 0x1A (26 bytes)
//======================================================================
int __fastcall TiXmlAttribute::QueryIntValue(TiXmlAttribute *this, int *a2)
{
  return 2 * (j_sscanf((const char *)(*((_DWORD *)this + 6) + 8), "%d", a2) != 1);
}


//======================================================================
// TiXmlAttribute::QueryDoubleValue(double *)const
// address: 0x001DB66C   size: 0x1A (26 bytes)
//======================================================================
int __fastcall TiXmlAttribute::QueryDoubleValue(TiXmlAttribute *this, double *a2)
{
  return 2 * (j_sscanf((const char *)(*((_DWORD *)this + 6) + 8), "%lf", a2) != 1);
}


//======================================================================
// TiXmlAttribute::SetIntValue(int)
// address: 0x001DB68C   size: 0x3A (58 bytes)
//======================================================================
int __fastcall TiXmlAttribute::SetIntValue(TiXmlAttribute *this, int a2)
{
  char s[64]; // [sp+4h] [bp-44h] BYREF

  j_snprintf(s, 0x40u, "%d", a2);
  return TiXmlString::operator=((TiXmlAttribute *)((char *)this + 24), s);
}


//======================================================================
// TiXmlAttribute::SetDoubleValue(double)
// address: 0x001DB6D0   size: 0x3E (62 bytes)
//======================================================================
int __fastcall TiXmlAttribute::SetDoubleValue(TiXmlAttribute *this, double a2)
{
  char s[256]; // [sp+Ch] [bp-104h] BYREF

  j_snprintf(s, 0x100u, "%lf", a2);
  return TiXmlString::operator=((TiXmlAttribute *)((char *)this + 24), s);
}


//======================================================================
// TiXmlAttribute::IntValue(void)const
// address: 0x001DB718   size: 0xC (12 bytes)
//======================================================================
int __fastcall TiXmlAttribute::IntValue(TiXmlAttribute *this)
{
  return j_atoi((const char *)(*((_DWORD *)this + 6) + 8));
}


//======================================================================
// TiXmlAttribute::DoubleValue(void)const
// address: 0x001DB724   size: 0xE (14 bytes)
//======================================================================
double __fastcall TiXmlAttribute::DoubleValue(TiXmlAttribute *this)
{
  return j_strtod((const char *)(*((_DWORD *)this + 6) + 8), nullptr);
}

