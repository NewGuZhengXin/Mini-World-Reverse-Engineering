// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: TiXmlComment

//======================================================================
// TiXmlComment::Parse(char const*,TiXmlParsingData *,TiXmlEncoding)
// address: 0x001D98EC   size: 0xA4 (164 bytes)
//======================================================================
unsigned __int8 *__fastcall TiXmlComment::Parse(_DWORD *a1, unsigned __int8 *a2, int *a3, int a4)
{
  unsigned __int8 *v8; // r6
  unsigned __int8 *v9; // r7
  TiXmlString *v11; // [sp+8h] [bp-Ch]
  int Document; // [sp+Ch] [bp-8h]

  Document = TiXmlNode::GetDocument((TiXmlNode *)a1);
  v11 = (TiXmlString *)(a1 + 8);
  TiXmlString::operator=((TiXmlString *)(a1 + 8), (char *)&unk_3FB8EA);
  v8 = TiXmlBase::SkipWhiteSpace(a2, a4);
  if ( a3 != nullptr )
  {
    TiXmlParsingData::Stamp(a3, (unsigned int)v8, a4);
    a1[1] = *a3;
    a1[2] = a3[1];
  }
  v9 = TiXmlBase::StringEqual(v8, "<!--", 0, a4);
  if ( v9 != nullptr )
  {
    v9 = v8 + 4;
    TiXmlString::operator=(v11, (char *)&unk_3FB8EA);
    while ( v9 != nullptr )
    {
      if ( *v9 == 0 || TiXmlBase::StringEqual(v9, "-->", 0, a4) != nullptr )
        return v9 + 3;
      TiXmlString::append(v11, (const char *)v9++, 1u);
    }
  }
  else
  {
    TiXmlDocument::SetError(Document, 11, (unsigned int)v8, a3, a4);
  }
  return v9;
}


//======================================================================
// TiXmlComment::ToComment(void)const
// address: 0x001DA378   size: 0x2 (2 bytes)
//======================================================================
void __fastcall TiXmlComment::ToComment(TiXmlComment *this)
{
  ;
}


//======================================================================
// TiXmlComment::ToComment(void)
// address: 0x001DA37A   size: 0x2 (2 bytes)
//======================================================================
void __fastcall TiXmlComment::ToComment(TiXmlComment *this)
{
  ;
}


//======================================================================
// TiXmlComment::Accept(TiXmlVisitor *)const
// address: 0x001DA414   size: 0x10 (16 bytes)
//======================================================================
int __fastcall TiXmlComment::Accept(TiXmlComment *this, TiXmlVisitor *a2)
{
  return (*(int (__fastcall **)(TiXmlVisitor *, TiXmlComment *))(*(_DWORD *)a2 + 32))(a2, this);
}


//======================================================================
// TiXmlComment::Print(__sFILE *,int)const
// address: 0x001DA478   size: 0x2C (44 bytes)
//======================================================================
int __fastcall TiXmlComment::Print(int a1, FILE *stream, int a3)
{
  int i; // r4

  for ( i = 0; i < a3; ++i )
    j_fputs("    ", stream);
  return j_fprintf(stream, "<!--%s-->", (const char *)(*(_DWORD *)(a1 + 32) + 8));
}


//======================================================================
// TiXmlComment::~TiXmlComment()
// address: 0x001DA6B8   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN12TiXmlCommentD1Ev'
void __fastcall TiXmlComment::~TiXmlComment(TiXmlComment *this)
{
  *(_DWORD *)this = &off_459950;
  TiXmlNode::~TiXmlNode(this);
}


//======================================================================
// TiXmlComment::~TiXmlComment()
// address: 0x001DA6D4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall TiXmlComment::~TiXmlComment(TiXmlComment *this)
{
  TiXmlComment::~TiXmlComment(this);
  operator delete(this);
}


//======================================================================
// TiXmlComment::CopyTo(TiXmlComment*)const
// address: 0x001DB732   size: 0x8 (8 bytes)
//======================================================================
int __fastcall TiXmlComment::CopyTo(TiXmlComment *this, TiXmlComment *a2)
{
  return TiXmlNode::CopyTo(this, a2);
}


//======================================================================
// TiXmlComment::TiXmlComment(TiXmlComment const&)
// address: 0x001DB73C   size: 0x22 (34 bytes)
//======================================================================
// Alternative name is '_ZN12TiXmlCommentC1ERKS_'
void __fastcall TiXmlComment::TiXmlComment(TiXmlComment *this, const TiXmlComment *a2)
{
  TiXmlNode::TiXmlNode(this, 2);
  *(_DWORD *)this = &off_459950;
  TiXmlComment::CopyTo(a2, this);
}


//======================================================================
// TiXmlComment::operator=(TiXmlComment const&)
// address: 0x001DB764   size: 0x14 (20 bytes)
//======================================================================
int __fastcall TiXmlComment::operator=(TiXmlNode *a1, TiXmlComment *a2)
{
  TiXmlNode::Clear(a1);
  return TiXmlComment::CopyTo(a2, a1);
}


//======================================================================
// TiXmlComment::Clone(void)const
// address: 0x001DB778   size: 0x28 (40 bytes)
//======================================================================
TiXmlComment *__fastcall TiXmlComment::Clone(TiXmlComment *this)
{
  TiXmlComment *v2; // r4

  v2 = (TiXmlComment *)operator new(0x2Cu);
  TiXmlNode::TiXmlNode(v2, 2);
  *(_DWORD *)v2 = &off_459950;
  TiXmlComment::CopyTo(this, v2);
  return v2;
}

