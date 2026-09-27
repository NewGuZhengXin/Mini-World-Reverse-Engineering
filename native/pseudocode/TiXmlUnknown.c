// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: TiXmlUnknown

//======================================================================
// TiXmlUnknown::Parse(char const*,TiXmlParsingData *,TiXmlEncoding)
// address: 0x001D984C   size: 0x9C (156 bytes)
//======================================================================
_BYTE *__fastcall TiXmlUnknown::Parse(_DWORD *a1, unsigned __int8 *a2, int *a3, int a4)
{
  int Document; // r4
  unsigned __int8 *v8; // r5
  TiXmlString *v10; // r7
  _BYTE *v11; // r5
  int v12; // r2
  int v13; // r1

  Document = TiXmlNode::GetDocument((TiXmlNode *)a1);
  v8 = TiXmlBase::SkipWhiteSpace(a2, a4);
  if ( a3 != nullptr )
  {
    TiXmlParsingData::Stamp(a3, (unsigned int)v8, a4);
    a1[1] = *a3;
    a1[2] = a3[1];
  }
  if ( v8 != nullptr && *v8 == 60 )
  {
    v10 = (TiXmlString *)(a1 + 8);
    v11 = v8 + 1;
    TiXmlString::operator=(v10, (char *)&unk_3FB8EA);
    while ( v11 != nullptr )
    {
      v13 = (unsigned __int8)*v11;
      if ( *v11 == 0 || v13 == 62 )
        return &v11[*v11 == 62];
      TiXmlString::operator+=(v10, v13, v12);
      ++v11;
    }
    if ( Document != 0 )
      TiXmlDocument::SetError(Document, 10, 0, nullptr, a4);
    return &v11[*v11 == 62];
  }
  else
  {
    if ( Document != 0 )
      TiXmlDocument::SetError(Document, 10, (unsigned int)v8, a3, a4);
    return nullptr;
  }
}


//======================================================================
// TiXmlUnknown::ToUnknown(void)const
// address: 0x001DA390   size: 0x2 (2 bytes)
//======================================================================
void __fastcall TiXmlUnknown::ToUnknown(TiXmlUnknown *this)
{
  ;
}


//======================================================================
// TiXmlUnknown::ToUnknown(void)
// address: 0x001DA392   size: 0x2 (2 bytes)
//======================================================================
void __fastcall TiXmlUnknown::ToUnknown(TiXmlUnknown *this)
{
  ;
}


//======================================================================
// TiXmlUnknown::Accept(TiXmlVisitor *)const
// address: 0x001DA444   size: 0x10 (16 bytes)
//======================================================================
int __fastcall TiXmlUnknown::Accept(TiXmlUnknown *this, TiXmlVisitor *a2)
{
  return (*(int (__fastcall **)(TiXmlVisitor *, TiXmlUnknown *))(*(_DWORD *)a2 + 36))(a2, this);
}


//======================================================================
// TiXmlUnknown::Print(__sFILE *,int)const
// address: 0x001DA4AC   size: 0x2C (44 bytes)
//======================================================================
int __fastcall TiXmlUnknown::Print(int a1, FILE *stream, int a3)
{
  int i; // r4

  for ( i = 0; i < a3; ++i )
    j_fputs("    ", stream);
  return j_fprintf(stream, "<%s>", (const char *)(*(_DWORD *)(a1 + 32) + 8));
}


//======================================================================
// TiXmlUnknown::~TiXmlUnknown()
// address: 0x001DA718   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN12TiXmlUnknownD1Ev'
void __fastcall TiXmlUnknown::~TiXmlUnknown(TiXmlUnknown *this)
{
  *(_DWORD *)this = &off_459A48;
  TiXmlNode::~TiXmlNode(this);
}


//======================================================================
// TiXmlUnknown::~TiXmlUnknown()
// address: 0x001DA734   size: 0x12 (18 bytes)
//======================================================================
void __fastcall TiXmlUnknown::~TiXmlUnknown(TiXmlUnknown *this)
{
  TiXmlUnknown::~TiXmlUnknown(this);
  operator delete(this);
}


//======================================================================
// TiXmlUnknown::CopyTo(TiXmlUnknown*)const
// address: 0x001DB904   size: 0x8 (8 bytes)
//======================================================================
int __fastcall TiXmlUnknown::CopyTo(TiXmlUnknown *this, TiXmlUnknown *a2)
{
  return TiXmlNode::CopyTo(this, a2);
}


//======================================================================
// TiXmlUnknown::Clone(void)const
// address: 0x001DB90C   size: 0x28 (40 bytes)
//======================================================================
TiXmlUnknown *__fastcall TiXmlUnknown::Clone(TiXmlUnknown *this)
{
  TiXmlUnknown *v2; // r4

  v2 = (TiXmlUnknown *)operator new(0x2Cu);
  TiXmlNode::TiXmlNode(v2, 3);
  *(_DWORD *)v2 = &off_459A48;
  TiXmlUnknown::CopyTo(this, v2);
  return v2;
}

