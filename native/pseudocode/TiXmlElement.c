// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: TiXmlElement

//======================================================================
// TiXmlElement::QueryFloatAttribute(char const*,float *)const
// address: 0x00143884   size: 0x1C (28 bytes)
//======================================================================
int __fastcall TiXmlElement::QueryFloatAttribute(double this, float *a2)
{
  int v3; // r4
  float v4; // r0
  double v6; // [sp+0h] [bp-Ch] BYREF
  float *v7; // [sp+8h] [bp-4h]

  v6 = this;
  v7 = a2;
  v3 = TiXmlElement::QueryDoubleAttribute((TiXmlElement *)LODWORD(this), (const char *)HIDWORD(this), &v6);
  if ( v3 == 0 )
  {
    v4 = v6;
    *a2 = v4;
  }
  return v3;
}


//======================================================================
// TiXmlElement::ReadValue(char const*,TiXmlParsingData *,TiXmlEncoding)
// address: 0x001DA020   size: 0xE8 (232 bytes)
//======================================================================
unsigned __int8 *__fastcall TiXmlElement::ReadValue(TiXmlNode *a1, unsigned __int8 *a2, int a3, int a4)
{
  unsigned __int8 *v6; // r0
  unsigned __int8 *v7; // r4
  _BYTE *v8; // r5
  int v9; // r3
  int v10; // r0
  char v11; // r1
  int v12; // r0
  int Document; // [sp+14h] [bp-8h]

  Document = TiXmlNode::GetDocument(a1);
  while ( 1 )
  {
    v6 = TiXmlBase::SkipWhiteSpace(a2, a4);
    v7 = v6;
    if ( v6 == nullptr )
      break;
    if ( *v6 == 0 )
      return v7;
    if ( *v6 == 60 )
    {
      if ( TiXmlBase::StringEqual(v6, "</", 0, a4) != nullptr )
        return v7;
      v12 = TiXmlNode::Identify(a1, v7, a4);
      v8 = (_BYTE *)v12;
      if ( v12 == 0 )
        return nullptr;
      a2 = (unsigned __int8 *)(*(int (__fastcall **)(int, unsigned __int8 *, int, int))(*(_DWORD *)v12 + 12))(
                                v12,
                                v7,
                                a3,
                                a4);
LABEL_14:
      TiXmlNode::LinkEndChild(a1, (TiXmlNode *)v8);
    }
    else
    {
      v8 = (_BYTE *)operator new(0x30u);
      TiXmlNode::TiXmlNode(v8, 4);
      *(_DWORD *)v8 = &off_4599A0;
      TiXmlString::operator=((TiXmlString *)(v8 + 32), (char *)&unk_3FB8EA);
      v8[44] = 0;
      v9 = *(_DWORD *)v8;
      if ( TiXmlBase::condenseWhiteSpace != 0 )
        v10 = (*(int (__fastcall **)(_BYTE *, unsigned __int8 *, int, int))(v9 + 12))(v8, v7, a3, a4);
      else
        v10 = (*(int (__fastcall **)(_BYTE *, unsigned __int8 *, int, int))(v9 + 12))(v8, a2, a3, a4);
      a2 = (unsigned __int8 *)v10;
      if ( !TiXmlText::Blank((TiXmlText *)v8, v11) )
        goto LABEL_14;
      (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)v8 + 4))(v8);
    }
  }
  if ( Document == 0 )
    return nullptr;
  TiXmlDocument::SetError(Document, 6, 0, nullptr, a4);
  return v7;
}


//======================================================================
// TiXmlElement::Parse(char const*,TiXmlParsingData *,TiXmlEncoding)
// address: 0x001DA118   size: 0x21A (538 bytes)
//======================================================================
unsigned __int8 *__fastcall TiXmlElement::Parse(_DWORD *a1, unsigned __int8 *a2, int *a3, int a4)
{
  unsigned __int8 *v5; // r6
  int Document; // r0
  int v7; // r4
  int v8; // r1
  unsigned int v9; // r2
  int *v10; // r3
  unsigned __int8 *v11; // r6
  const char *Name; // r0
  unsigned __int8 *v13; // r7
  _BYTE *v14; // r0
  size_t *v15; // r3
  int v16; // r3
  unsigned __int8 *Value; // r0
  unsigned int v18; // r7
  int v19; // r3
  unsigned __int8 *v20; // r0
  int v21; // r0
  int v23; // [sp+0h] [bp-24h]
  unsigned __int8 *v24; // [sp+Ch] [bp-18h]
  void *v27[2]; // [sp+1Ch] [bp-8h] BYREF

  v5 = TiXmlBase::SkipWhiteSpace(a2, a4);
  Document = TiXmlNode::GetDocument((TiXmlNode *)a1);
  v7 = Document;
  if ( v5 == nullptr || *v5 == 0 )
  {
    if ( Document == 0 )
      return nullptr;
    v8 = 4;
    v23 = a4;
    v9 = 0;
    v10 = nullptr;
LABEL_5:
    TiXmlDocument::SetError(Document, v8, v9, v10, v23);
    return nullptr;
  }
  if ( a3 != nullptr )
  {
    TiXmlParsingData::Stamp(a3, (unsigned int)v5, a4);
    a1[1] = *a3;
    a1[2] = a3[1];
  }
  if ( *v5 != 60 )
  {
    if ( v7 == 0 )
      return nullptr;
    Document = v7;
    v8 = 4;
    v23 = a4;
    goto LABEL_16;
  }
  v5 = TiXmlBase::SkipWhiteSpace(v5 + 1, a4);
  Name = TiXmlBase::ReadName((const char *)v5, (TiXmlString *)(a1 + 8));
  v13 = (unsigned __int8 *)Name;
  if ( Name == nullptr || *Name == 0 )
  {
    if ( v7 == 0 )
      return nullptr;
    Document = v7;
    v8 = 5;
    v23 = a4;
LABEL_16:
    v9 = (unsigned int)v5;
    v10 = a3;
    goto LABEL_5;
  }
  v14 = (_BYTE *)operator new[](0x10u);
  v27[0] = v14;
  *(_DWORD *)v14 = 2;
  v15 = (size_t *)v27[0];
  v14[10] = 0;
  v15[1] = 2;
  j_memcpy(v15 + 2, "</", *v15);
  TiXmlString::append((TiXmlString *)v27, (const char *)(a1[8] + 8), *(_DWORD *)a1[8]);
  TiXmlString::append((TiXmlString *)v27, ">", 1u);
  while ( 1 )
  {
    if ( *v13 == 0 )
    {
      v11 = v13;
      goto LABEL_50;
    }
    v24 = TiXmlBase::SkipWhiteSpace(v13, a4);
    if ( v24 == nullptr || (v16 = *v24, *v24 == 0) )
    {
      if ( v7 != 0 )
        TiXmlDocument::SetError(v7, 7, (unsigned int)v13, a3, a4);
      goto LABEL_29;
    }
    if ( v16 == 47 )
    {
      if ( v24[1] != 62 )
      {
        if ( v7 != 0 )
          TiXmlDocument::SetError(v7, 8, (unsigned int)(v24 + 1), a3, a4);
        goto LABEL_29;
      }
      v11 = v24 + 2;
      goto LABEL_50;
    }
    if ( v16 == 62 )
      break;
    v11 = (unsigned __int8 *)operator new(0x24u);
    TiXmlAttribute::TiXmlAttribute((TiXmlAttribute *)v11);
    if ( v11 == nullptr )
    {
      if ( v7 == 0 )
        goto LABEL_29;
      TiXmlDocument::SetError(v7, 3, (unsigned int)v13, a3, a4);
      goto LABEL_50;
    }
    v19 = *(_DWORD *)v11;
    *((_DWORD *)v11 + 4) = v7;
    v20 = (unsigned __int8 *)(*(int (__fastcall **)(unsigned __int8 *, unsigned __int8 *, int *, int))(v19 + 12))(
                               v11,
                               v24,
                               a3,
                               a4);
    v13 = v20;
    if ( v20 == nullptr || *v20 == 0 )
    {
      if ( v7 != 0 )
        TiXmlDocument::SetError(v7, 4, (unsigned int)v24, a3, a4);
LABEL_48:
      (*(void (__fastcall **)(unsigned __int8 *))(*(_DWORD *)v11 + 4))(v11);
LABEL_29:
      v11 = nullptr;
      goto LABEL_50;
    }
    v21 = TiXmlAttributeSet::Find((TiXmlAttributeSet *)(a1 + 11), (const char *)(*((_DWORD *)v11 + 5) + 8));
    if ( v21 != 0 )
    {
      TiXmlString::operator=((TiXmlString *)(v21 + 24), (char *)(*((_DWORD *)v11 + 6) + 8));
      goto LABEL_48;
    }
    TiXmlAttributeSet::Add((TiXmlAttributeSet *)(a1 + 11), (TiXmlAttribute *)v11);
  }
  Value = TiXmlElement::ReadValue((TiXmlNode *)a1, v24 + 1, (int)a3, a4);
  v18 = (unsigned int)Value;
  if ( Value == nullptr || *Value == 0 )
  {
    if ( v7 != 0 )
      TiXmlDocument::SetError(v7, 9, (unsigned int)Value, a3, a4);
    goto LABEL_29;
  }
  v11 = TiXmlBase::StringEqual(Value, (_BYTE *)v27[0] + 8, 0, a4);
  if ( v11 != nullptr )
  {
    v11 = (unsigned __int8 *)(v18 + *(_DWORD *)v27[0]);
  }
  else
  {
    if ( v7 == 0 )
      goto LABEL_29;
    TiXmlDocument::SetError(v7, 9, v18, a3, a4);
  }
LABEL_50:
  TiXmlString::quit(v27);
  return v11;
}


//======================================================================
// TiXmlElement::ToElement(void)const
// address: 0x001DA374   size: 0x2 (2 bytes)
//======================================================================
void __fastcall TiXmlElement::ToElement(TiXmlElement *this)
{
  ;
}


//======================================================================
// TiXmlElement::ToElement(void)
// address: 0x001DA376   size: 0x2 (2 bytes)
//======================================================================
void __fastcall TiXmlElement::ToElement(TiXmlElement *this)
{
  ;
}


//======================================================================
// TiXmlElement::Accept(TiXmlVisitor *)const
// address: 0x001DA394   size: 0x48 (72 bytes)
//======================================================================
int __fastcall TiXmlElement::Accept(TiXmlElement *this, TiXmlVisitor *a2)
{
  _DWORD *i; // r6

  if ( (*(int (__fastcall **)(TiXmlVisitor *, TiXmlElement *, _DWORD))(*(_DWORD *)a2 + 16))(
         a2,
         this,
         *((_DWORD *)this + 19) != (_DWORD)this + 44 ? *((_DWORD *)this + 19) : 0) != 0 )
  {
    for ( i = *((_DWORD **)this + 6);
          i != nullptr && (*(int (__fastcall **)(_DWORD *, TiXmlVisitor *))(*i + 68))(i, a2) != 0;
          i = (_DWORD *)i[10] )
    {
      ;
    }
  }
  return (*(int (__fastcall **)(TiXmlVisitor *, TiXmlElement *))(*(_DWORD *)a2 + 20))(a2, this);
}


//======================================================================
// TiXmlElement::GetText(void)const
// address: 0x001DAEA4   size: 0x1C (28 bytes)
//======================================================================
int __fastcall TiXmlElement::GetText(TiXmlElement *this)
{
  int v1; // r0
  int v3; // r0

  v1 = *((_DWORD *)this + 6);
  if ( v1 != 0 && (v3 = (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 32))(v1)) != 0 )
    return *(_DWORD *)(v3 + 32) + 8;
  else
    return 0;
}


//======================================================================
// TiXmlElement::Print(__sFILE *,int)const
// address: 0x001DB360   size: 0xFC (252 bytes)
//======================================================================
int __fastcall TiXmlElement::Print(_DWORD *a1, FILE *stream, int a3)
{
  int i; // r6
  TiXmlAttribute *j; // r6
  int v8; // r0
  _DWORD *k; // r6

  for ( i = 0; i < a3; ++i )
    j_fputs("    ", stream);
  j_fprintf(stream, "<%s", (const char *)(a1[8] + 8));
  for ( j = a1[19] != (_DWORD)(a1 + 11) ? (TiXmlAttribute *)a1[19] : nullptr;
        j != nullptr;
        j = (TiXmlAttribute *)TiXmlAttribute::Next(j) )
  {
    j_fputc(32, stream);
    (*(void (__fastcall **)(TiXmlAttribute *, FILE *, int))(*(_DWORD *)j + 8))(j, stream, a3);
  }
  v8 = a1[6];
  if ( v8 == 0 )
    return j_fputs(" />", stream);
  if ( v8 == a1[7] && (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 56))(v8) != 0 )
  {
    j_fputc(62, stream);
    (*(void (__fastcall **)(_DWORD, FILE *, int))(*(_DWORD *)a1[6] + 8))(a1[6], stream, a3 + 1);
    return j_fprintf(stream, "</%s>", a1[8] + 8);
  }
  else
  {
    j_fputc(62, stream);
    for ( k = (_DWORD *)a1[6]; k != nullptr; k = (_DWORD *)k[10] )
    {
      if ( (*(int (__fastcall **)(_DWORD *))(*k + 56))(k) == 0 )
        j_fputc(10, stream);
      (*(void (__fastcall **)(_DWORD *, FILE *, int))(*k + 8))(k, stream, a3 + 1);
    }
    j_fputc(10, stream);
    while ( (int)k < a3 )
    {
      k = (_DWORD *)((char *)k + 1);
      j_fputs("    ", stream);
    }
    return j_fprintf(stream, "</%s>", a1[8] + 8);
  }
}


//======================================================================
// TiXmlElement::TiXmlElement(char const*)
// address: 0x001DB968   size: 0x32 (50 bytes)
//======================================================================
// Alternative name is '_ZN12TiXmlElementC2EPKc'
void __fastcall TiXmlElement::TiXmlElement(TiXmlElement *this, char *a2)
{
  TiXmlNode::TiXmlNode(this, 1);
  *(_DWORD *)this = &off_459900;
  TiXmlAttributeSet::TiXmlAttributeSet((TiXmlElement *)((char *)this + 44));
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 6) = 0;
  TiXmlString::operator=((TiXmlElement *)((char *)this + 32), a2);
}


//======================================================================
// TiXmlElement::ClearThis(void)
// address: 0x001DB9E0   size: 0x28 (40 bytes)
//======================================================================
TiXmlAttribute *__fastcall TiXmlElement::ClearThis(TiXmlAttribute **this)
{
  TiXmlElement *v2; // r4
  TiXmlAttribute *result; // r0

  TiXmlNode::Clear((TiXmlNode *)this);
  while ( 1 )
  {
    v2 = *(this + 19);
    result = (TiXmlAttribute *)(this + 11);
    if ( v2 == (TiXmlElement *)(this + 11) || v2 == nullptr )
      break;
    TiXmlAttributeSet::Remove(result, *(this + 19));
    (*(void (__fastcall **)(TiXmlElement *))(*(_DWORD *)v2 + 4))(v2);
  }
  return result;
}


//======================================================================
// TiXmlElement::~TiXmlElement()
// address: 0x001DBA08   size: 0x24 (36 bytes)
//======================================================================
// Alternative name is '_ZN12TiXmlElementD1Ev'
void __fastcall TiXmlElement::~TiXmlElement(TiXmlElement *this)
{
  *(_DWORD *)this = &off_459900;
  TiXmlElement::ClearThis((TiXmlAttribute **)this);
  TiXmlAttributeSet::~TiXmlAttributeSet((void **)this + 11);
  TiXmlNode::~TiXmlNode(this);
}


//======================================================================
// TiXmlElement::~TiXmlElement()
// address: 0x001DBA30   size: 0x12 (18 bytes)
//======================================================================
void __fastcall TiXmlElement::~TiXmlElement(TiXmlElement *this)
{
  TiXmlElement::~TiXmlElement(this);
  operator delete(this);
}


//======================================================================
// TiXmlElement::RemoveAttribute(char const*)
// address: 0x001DBA68   size: 0x22 (34 bytes)
//======================================================================
TiXmlAttribute *__fastcall TiXmlElement::RemoveAttribute(TiXmlElement *this, const char *a2)
{
  TiXmlAttribute *v2; // r5
  TiXmlAttribute *result; // r0
  TiXmlAttribute *v4; // r4

  v2 = (TiXmlElement *)((char *)this + 44);
  result = TiXmlAttributeSet::Find((TiXmlElement *)((char *)this + 44), a2);
  v4 = result;
  if ( result != nullptr )
  {
    TiXmlAttributeSet::Remove(v2, result);
    return (TiXmlAttribute *)(*(int (__fastcall **)(TiXmlAttribute *))(*(_DWORD *)v4 + 4))(v4);
  }
  return result;
}


//======================================================================
// TiXmlElement::SetAttribute(char const*,char const*)
// address: 0x001DBA8C   size: 0x64 (100 bytes)
//======================================================================
__int64 __fastcall TiXmlElement::SetAttribute(TiXmlElement *this, char *a2, char *a3)
{
  TiXmlAttributeSet *v5; // r0
  _DWORD *v6; // r0
  _DWORD *v7; // r4
  __int64 v9; // [sp+0h] [bp-Ch]

  LODWORD(v9) = this;
  HIDWORD(v9) = (char *)this + 44;
  v5 = TiXmlAttributeSet::Find((TiXmlElement *)((char *)this + 44), a2);
  if ( v5 != nullptr )
  {
    TiXmlString::operator=((TiXmlAttributeSet *)((char *)v5 + 24), a3);
  }
  else
  {
    v6 = (_DWORD *)operator new(0x24u);
    v6[2] = -1;
    v6[1] = -1;
    v7 = v6;
    v6[3] = 0;
    *v6 = &off_4597B8;
    v6 += 5;
    *v6 = &TiXmlString::nullrep_;
    v6[1] = &TiXmlString::nullrep_;
    TiXmlString::operator=((TiXmlString *)v6, a2);
    TiXmlString::operator=((TiXmlString *)(v7 + 6), a3);
    v7[4] = 0;
    v7[8] = 0;
    v7[7] = 0;
    TiXmlAttributeSet::Add(SHIDWORD(v9), (TiXmlAttribute *)v7);
  }
  return v9;
}


//======================================================================
// TiXmlElement::SetAttribute(char const*,int)
// address: 0x001DBAF8   size: 0x3C (60 bytes)
//======================================================================
__int64 __fastcall TiXmlElement::SetAttribute(TiXmlElement *this, char *a2, int a3)
{
  char s[64]; // [sp+4h] [bp-48h] BYREF

  j_snprintf(s, 0x40u, "%d", a3);
  return TiXmlElement::SetAttribute(this, a2, s);
}


//======================================================================
// TiXmlElement::SetDoubleAttribute(char const*,double)
// address: 0x001DBB3C   size: 0x40 (64 bytes)
//======================================================================
__int64 __fastcall TiXmlElement::SetDoubleAttribute(TiXmlElement *this, char *a2, double a3)
{
  char v6[256]; // [sp+Ch] [bp+0h] BYREF

  j_snprintf(v6, 0x100u, "%f", a3);
  return TiXmlElement::SetAttribute(this, a2, v6);
}


//======================================================================
// TiXmlElement::CopyTo(TiXmlElement*)const
// address: 0x001DBB84   size: 0x52 (82 bytes)
//======================================================================
TiXmlNode *__fastcall TiXmlElement::CopyTo(TiXmlElement *this, TiXmlElement *a2)
{
  TiXmlNode *result; // r0
  TiXmlNode *i; // r4
  _DWORD *j; // r4
  TiXmlNode *v7; // r0

  result = (TiXmlNode *)TiXmlNode::CopyTo(this, a2);
  for ( i = *((_DWORD *)this + 19) != (_DWORD)this + 44 ? *((TiXmlNode **)this + 19) : nullptr; i != nullptr; i = result )
  {
    TiXmlElement::SetAttribute(a2, (char *)(*((_DWORD *)i + 5) + 8), (char *)(*((_DWORD *)i + 6) + 8));
    result = (TiXmlNode *)TiXmlAttribute::Next(i);
  }
  for ( j = *((_DWORD **)this + 6); j != nullptr; j = (_DWORD *)j[10] )
  {
    v7 = (TiXmlNode *)(*(int (__fastcall **)(_DWORD *))(*j + 64))(j);
    result = TiXmlNode::LinkEndChild(a2, v7);
  }
  return result;
}


//======================================================================
// TiXmlElement::TiXmlElement(TiXmlElement const&)
// address: 0x001DBBD8   size: 0x30 (48 bytes)
//======================================================================
// Alternative name is '_ZN12TiXmlElementC1ERKS_'
void __fastcall TiXmlElement::TiXmlElement(TiXmlElement *this, const TiXmlElement *a2)
{
  TiXmlNode::TiXmlNode(this, 1);
  *(_DWORD *)this = &off_459900;
  TiXmlAttributeSet::TiXmlAttributeSet((TiXmlElement *)((char *)this + 44));
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 6) = 0;
  TiXmlElement::CopyTo(a2, this);
}


//======================================================================
// TiXmlElement::operator=(TiXmlElement const&)
// address: 0x001DBC0C   size: 0x14 (20 bytes)
//======================================================================
TiXmlNode *__fastcall TiXmlElement::operator=(TiXmlAttribute **a1, TiXmlElement *a2)
{
  TiXmlElement::ClearThis(a1);
  return TiXmlElement::CopyTo(a2, (TiXmlElement *)a1);
}


//======================================================================
// TiXmlElement::Clone(void)const
// address: 0x001DBC20   size: 0x26 (38 bytes)
//======================================================================
TiXmlElement *__fastcall TiXmlElement::Clone(TiXmlElement *this)
{
  int v2; // r6
  TiXmlElement *v3; // r4

  v2 = *((_DWORD *)this + 8);
  v3 = (TiXmlElement *)operator new(0x50u);
  TiXmlElement::TiXmlElement(v3, (char *)(v2 + 8));
  if ( v3 != nullptr )
    TiXmlElement::CopyTo(this, v3);
  return v3;
}


//======================================================================
// TiXmlElement::Attribute(char const*)const
// address: 0x001DBC46   size: 0x12 (18 bytes)
//======================================================================
TiXmlAttributeSet *__fastcall TiXmlElement::Attribute(TiXmlElement *this, const char *a2)
{
  TiXmlAttributeSet *result; // r0

  result = TiXmlAttributeSet::Find((TiXmlElement *)((char *)this + 44), a2);
  if ( result != nullptr )
    return (TiXmlAttributeSet *)(*((_DWORD *)result + 6) + 8);
  return result;
}


//======================================================================
// TiXmlElement::Attribute(char const*,int *)const
// address: 0x001DBC58   size: 0x20 (32 bytes)
//======================================================================
TiXmlAttributeSet *__fastcall TiXmlElement::Attribute(TiXmlElement *this, const char *a2, int *a3)
{
  TiXmlAttributeSet *v4; // r0
  TiXmlAttributeSet *v5; // r4

  v4 = TiXmlElement::Attribute(this, a2);
  v5 = v4;
  if ( a3 != nullptr )
  {
    if ( v4 != nullptr )
      *a3 = j_atoi((const char *)v4);
    else
      *a3 = 0;
  }
  return v5;
}


//======================================================================
// TiXmlElement::Attribute(char const*,double *)const
// address: 0x001DBC78   size: 0x2A (42 bytes)
//======================================================================
TiXmlAttributeSet *__fastcall TiXmlElement::Attribute(TiXmlElement *this, const char *a2, double *a3)
{
  TiXmlAttributeSet *v4; // r0
  TiXmlAttributeSet *v5; // r6

  v4 = TiXmlElement::Attribute(this, a2);
  v5 = v4;
  if ( a3 != nullptr )
  {
    if ( v4 != nullptr )
    {
      *a3 = j_strtod((const char *)v4, nullptr);
    }
    else
    {
      *(_DWORD *)a3 = 0;
      *((_DWORD *)a3 + 1) = 0;
    }
  }
  return v5;
}


//======================================================================
// TiXmlElement::QueryIntAttribute(char const*,int *)const
// address: 0x001DBCB0   size: 0x1A (26 bytes)
//======================================================================
int __fastcall TiXmlElement::QueryIntAttribute(TiXmlElement *this, const char *a2, int *a3)
{
  TiXmlAttribute *v4; // r0

  v4 = TiXmlAttributeSet::Find((TiXmlElement *)((char *)this + 44), a2);
  if ( v4 != nullptr )
    return TiXmlAttribute::QueryIntValue(v4, a3);
  else
    return 1;
}


//======================================================================
// TiXmlElement::QueryDoubleAttribute(char const*,double *)const
// address: 0x001DBCCA   size: 0x1A (26 bytes)
//======================================================================
int __fastcall TiXmlElement::QueryDoubleAttribute(TiXmlElement *this, const char *a2, double *a3)
{
  TiXmlAttribute *v4; // r0

  v4 = TiXmlAttributeSet::Find((TiXmlElement *)((char *)this + 44), a2);
  if ( v4 != nullptr )
    return TiXmlAttribute::QueryDoubleValue(v4, a3);
  else
    return 1;
}

