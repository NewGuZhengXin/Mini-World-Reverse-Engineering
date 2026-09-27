// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: TiXmlText

//======================================================================
// TiXmlText::Parse(char const*,TiXmlParsingData *,TiXmlEncoding)
// address: 0x001D9ABC   size: 0xF0 (240 bytes)
//======================================================================
int __fastcall TiXmlText::Parse(_DWORD *a1, unsigned __int8 *a2, int *a3, int a4)
{
  _BYTE *v8; // r4
  unsigned __int8 *v9; // r4
  unsigned __int8 *Text; // r7
  int v11; // r2
  unsigned __int8 *v12; // r0
  TiXmlString *v14; // [sp+10h] [bp-14h]
  int Document; // [sp+14h] [bp-10h]
  void *v16[2]; // [sp+1Ch] [bp-8h] BYREF

  v14 = (TiXmlString *)(a1 + 8);
  TiXmlString::operator=((TiXmlString *)(a1 + 8), (char *)&unk_3FB8EA);
  Document = TiXmlNode::GetDocument((TiXmlNode *)a1);
  if ( a3 != nullptr )
  {
    TiXmlParsingData::Stamp(a3, (unsigned int)a2, a4);
    a1[1] = *a3;
    a1[2] = a3[1];
  }
  v8 = a1 + 11;
  if ( *v8 != 0 || TiXmlBase::StringEqual(a2, "<![CDATA[", (unsigned __int8)*v8, a4) != nullptr )
  {
    *v8 = 1;
    v9 = a2 + 9;
    if ( TiXmlBase::StringEqual(a2, "<![CDATA[", 0, a4) != nullptr )
    {
      while ( v9 != nullptr && *v9 != 0 && TiXmlBase::StringEqual(v9, "]]>", 0, a4) == nullptr )
        TiXmlString::operator+=(v14, *v9++, v11);
      v16[0] = &TiXmlString::nullrep_;
      Text = TiXmlBase::ReadText(v9, (TiXmlString *)v16, 0, "]]>", 0, a4);
      TiXmlString::quit(v16);
    }
    else
    {
      TiXmlDocument::SetError(Document, 15, (unsigned int)a2, a3, a4);
      return 0;
    }
  }
  else
  {
    v12 = TiXmlBase::ReadText(a2, v14, 1, "<", 0, a4);
    return v12 != nullptr ? (unsigned int)(v12 - 1) : 0;
  }
  return (int)Text;
}


//======================================================================
// TiXmlText::Blank(void)const
// address: 0x001DA000   size: 0x1E (30 bytes)
//======================================================================
bool __fastcall TiXmlText::Blank(TiXmlText *this, char a2)
{
  int v2; // r4
  int v3; // r5
  _BOOL4 result; // r0

  v2 = *((_DWORD *)this + 8);
  v3 = v2 + *(_DWORD *)v2;
  while ( v2 != v3 )
  {
    result = TiXmlBase::IsWhiteSpace((TiXmlBase *)*(unsigned __int8 *)(v2 + 8), a2);
    ++v2;
    if ( !result )
      return result;
  }
  return true;
}


//======================================================================
// TiXmlText::ToText(void)const
// address: 0x001DA37C   size: 0x2 (2 bytes)
//======================================================================
void __fastcall TiXmlText::ToText(TiXmlText *this)
{
  ;
}


//======================================================================
// TiXmlText::ToText(void)
// address: 0x001DA37E   size: 0x2 (2 bytes)
//======================================================================
void __fastcall TiXmlText::ToText(TiXmlText *this)
{
  ;
}


//======================================================================
// TiXmlText::Accept(TiXmlVisitor *)const
// address: 0x001DA424   size: 0x10 (16 bytes)
//======================================================================
int __fastcall TiXmlText::Accept(TiXmlText *this, TiXmlVisitor *a2)
{
  return (*(int (__fastcall **)(TiXmlVisitor *, TiXmlText *))(*(_DWORD *)a2 + 28))(a2, this);
}


//======================================================================
// TiXmlText::~TiXmlText()
// address: 0x001DA6E8   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN9TiXmlTextD1Ev'
void __fastcall TiXmlText::~TiXmlText(TiXmlText *this)
{
  *(_DWORD *)this = &off_4599A0;
  TiXmlNode::~TiXmlNode(this);
}


//======================================================================
// TiXmlText::~TiXmlText()
// address: 0x001DA704   size: 0x12 (18 bytes)
//======================================================================
void __fastcall TiXmlText::~TiXmlText(TiXmlText *this)
{
  TiXmlText::~TiXmlText(this);
  operator delete(this);
}


//======================================================================
// TiXmlText::Print(__sFILE *,int)const
// address: 0x001DAA10   size: 0x60 (96 bytes)
//======================================================================
__int64 __fastcall TiXmlText::Print(__int64 a1, TiXmlString *a2)
{
  int i; // r6
  __int64 v6; // [sp+0h] [bp-Ch] BYREF
  TiXmlString *v7; // [sp+8h] [bp-4h]

  v6 = a1;
  v7 = a2;
  if ( *(_BYTE *)(a1 + 44) != 0 )
  {
    j_fputc(10, (FILE *)HIDWORD(a1));
    for ( i = 0; i < (int)a2; ++i )
      j_fputs("    ", (FILE *)HIDWORD(a1));
    j_fprintf((FILE *)HIDWORD(a1), "<![CDATA[%s]]>\n", (const char *)(*(_DWORD *)(a1 + 32) + 8));
  }
  else
  {
    HIDWORD(v6) = &TiXmlString::nullrep_;
    TiXmlBase::EncodeString((int **)(a1 + 32), (const TiXmlString *)((char *)&v6 + 4), a2);
    j_fputs((const char *)(HIDWORD(v6) + 8), (FILE *)HIDWORD(a1));
    TiXmlString::quit((void **)&v6 + 1);
  }
  return v6;
}


//======================================================================
// TiXmlText::CopyTo(TiXmlText*)const
// address: 0x001DB7A4   size: 0x14 (20 bytes)
//======================================================================
int __fastcall TiXmlText::CopyTo(TiXmlText *this, TiXmlText *a2)
{
  _BYTE *v2; // r5
  int result; // r0

  v2 = (char *)this + 44;
  result = TiXmlNode::CopyTo(this, a2);
  *((_BYTE *)a2 + 44) = *v2;
  return result;
}


//======================================================================
// TiXmlText::Clone(void)const
// address: 0x001DB7B8   size: 0x3C (60 bytes)
//======================================================================
int __fastcall TiXmlText::Clone(TiXmlText *this)
{
  int v2; // r4

  v2 = operator new(0x30u);
  TiXmlNode::TiXmlNode((_DWORD *)v2, 4);
  *(_DWORD *)v2 = &off_4599A0;
  TiXmlString::operator=((TiXmlString *)(v2 + 32), (char *)&unk_3FB8EA);
  *(_BYTE *)(v2 + 44) = 0;
  TiXmlText::CopyTo(this, (TiXmlText *)v2);
  return v2;
}

