// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: TiXmlDeclaration

//======================================================================
// TiXmlDeclaration::Parse(char const*,TiXmlParsingData *,TiXmlEncoding)
// address: 0x001D9BC8   size: 0x168 (360 bytes)
//======================================================================
unsigned __int8 *__fastcall TiXmlDeclaration::Parse(_DWORD *a1, unsigned __int8 *a2, int *a3, int a4)
{
  unsigned __int8 *v7; // r4
  TiXmlBase *v8; // r0
  char v9; // r1
  unsigned __int8 *v10; // r4
  TiXmlString *v12; // r0
  char *v13; // r1
  char *Document; // [sp+8h] [bp-3Ch]
  void *v15[10]; // [sp+1Ch] [bp-28h] BYREF

  v7 = TiXmlBase::SkipWhiteSpace(a2, a4);
  Document = (char *)TiXmlNode::GetDocument((TiXmlNode *)a1);
  if ( v7 != nullptr && *v7 != 0 && TiXmlBase::StringEqual(v7, "<?xml", 1, a4) != nullptr )
  {
    if ( a3 != nullptr )
    {
      TiXmlParsingData::Stamp(a3, (unsigned int)v7, a4);
      a1[1] = *a3;
      a1[2] = a3[1];
    }
    v10 = v7 + 5;
    TiXmlString::operator=((TiXmlString *)(a1 + 11), (char *)&unk_3FB8EA);
    TiXmlString::operator=((TiXmlString *)(a1 + 12), (char *)&unk_3FB8EA);
    TiXmlString::operator=((TiXmlString *)(a1 + 13), (char *)&unk_3FB8EA);
LABEL_15:
    while ( v10 != nullptr && *v10 != 0 )
    {
      if ( *v10 == 62 )
        return v10 + 1;
      v10 = TiXmlBase::SkipWhiteSpace(v10, a4);
      if ( TiXmlBase::StringEqual(v10, "version", 1, a4) != nullptr )
      {
        TiXmlAttribute::TiXmlAttribute((TiXmlAttribute *)v15);
        v10 = TiXmlAttribute::Parse(v15, v10, a3, a4);
        v12 = (TiXmlString *)(a1 + 11);
        v13 = (char *)v15[6] + 8;
      }
      else if ( TiXmlBase::StringEqual(v10, "encoding", 1, a4) != nullptr )
      {
        TiXmlAttribute::TiXmlAttribute((TiXmlAttribute *)v15);
        v10 = TiXmlAttribute::Parse(v15, v10, a3, a4);
        v12 = (TiXmlString *)(a1 + 12);
        v13 = (char *)v15[6] + 8;
      }
      else
      {
        if ( TiXmlBase::StringEqual(v10, "standalone", 1, a4) == nullptr )
        {
          while ( v10 != nullptr )
          {
            v8 = (TiXmlBase *)*v10;
            if ( *v10 == 0 || v8 == (TiXmlBase *)((char *)off_3C + 2) || TiXmlBase::IsWhiteSpace(v8, v9) )
              goto LABEL_15;
            ++v10;
          }
          return nullptr;
        }
        TiXmlAttribute::TiXmlAttribute((TiXmlAttribute *)v15);
        v10 = TiXmlAttribute::Parse(v15, v10, a3, a4);
        v12 = (TiXmlString *)(a1 + 13);
        v13 = (char *)v15[6] + 8;
      }
      TiXmlString::operator=(v12, v13);
      TiXmlAttribute::~TiXmlAttribute(v15);
    }
  }
  else if ( Document != nullptr )
  {
    TiXmlDocument::SetError((int)Document, 12, 0, nullptr, a4);
  }
  return nullptr;
}


//======================================================================
// TiXmlDeclaration::Print(__sFILE *,int)const
// address: 0x001DA380   size: 0xC (12 bytes)
//======================================================================
int __fastcall TiXmlDeclaration::Print(int a1, int a2, int a3)
{
  return (*(int (__fastcall **)(int, int, int, _DWORD))(*(_DWORD *)a1 + 72))(a1, a2, a3, 0);
}


//======================================================================
// TiXmlDeclaration::ToDeclaration(void)const
// address: 0x001DA38C   size: 0x2 (2 bytes)
//======================================================================
void __fastcall TiXmlDeclaration::ToDeclaration(TiXmlDeclaration *this)
{
  ;
}


//======================================================================
// TiXmlDeclaration::ToDeclaration(void)
// address: 0x001DA38E   size: 0x2 (2 bytes)
//======================================================================
void __fastcall TiXmlDeclaration::ToDeclaration(TiXmlDeclaration *this)
{
  ;
}


//======================================================================
// TiXmlDeclaration::Accept(TiXmlVisitor *)const
// address: 0x001DA434   size: 0x10 (16 bytes)
//======================================================================
int __fastcall TiXmlDeclaration::Accept(TiXmlDeclaration *this, TiXmlVisitor *a2)
{
  return (*(int (__fastcall **)(TiXmlVisitor *, TiXmlDeclaration *))(*(_DWORD *)a2 + 24))(a2, this);
}


//======================================================================
// TiXmlDeclaration::Print(__sFILE *,int,TiXmlString *)const
// address: 0x001DA540   size: 0xEE (238 bytes)
//======================================================================
size_t **__fastcall TiXmlDeclaration::Print(size_t **result, FILE *stream, int a3, TiXmlString *a4)
{
  size_t **v4; // r6
  size_t *v7; // r2
  size_t *v8; // r2
  size_t *v9; // r2

  v4 = result;
  if ( stream != nullptr )
    result = (size_t **)j_fputs("<?xml ", stream);
  if ( a4 != nullptr )
    result = (size_t **)TiXmlString::operator+=(a4, "<?xml ");
  v7 = v4[11];
  if ( *v7 != 0 )
  {
    if ( stream != nullptr )
      result = (size_t **)j_fprintf(stream, "version=\"%s\" ", (const char *)v7 + 8);
    if ( a4 != nullptr )
    {
      TiXmlString::operator+=(a4, "version=\"");
      TiXmlString::operator+=(a4, v4 + 11);
      result = (size_t **)TiXmlString::operator+=(a4, "\" ");
    }
  }
  v8 = v4[12];
  if ( *v8 != 0 )
  {
    if ( stream != nullptr )
      result = (size_t **)j_fprintf(stream, "encoding=\"%s\" ", (const char *)v8 + 8);
    if ( a4 != nullptr )
    {
      TiXmlString::operator+=(a4, "encoding=\"");
      TiXmlString::operator+=(a4, v4 + 12);
      result = (size_t **)TiXmlString::operator+=(a4, "\" ");
    }
  }
  v9 = v4[13];
  if ( *v9 != 0 )
  {
    if ( stream != nullptr )
      result = (size_t **)j_fprintf(stream, "standalone=\"%s\" ", (const char *)v9 + 8);
    if ( a4 != nullptr )
    {
      TiXmlString::operator+=(a4, "standalone=\"");
      TiXmlString::operator+=(a4, v4 + 13);
      result = (size_t **)TiXmlString::operator+=(a4, "\" ");
    }
  }
  if ( stream != nullptr )
    result = (size_t **)j_fputs("?>", stream);
  if ( a4 != nullptr )
    return (size_t **)TiXmlString::operator+=(a4, "?>");
  return result;
}


//======================================================================
// TiXmlDeclaration::~TiXmlDeclaration()
// address: 0x001DA748   size: 0x2E (46 bytes)
//======================================================================
// Alternative name is '_ZN16TiXmlDeclarationD1Ev'
void __fastcall TiXmlDeclaration::~TiXmlDeclaration(void **this)
{
  *this = &off_4599F0;
  TiXmlString::quit(this + 13);
  TiXmlString::quit(this + 12);
  TiXmlString::quit(this + 11);
  TiXmlNode::~TiXmlNode((TiXmlNode *)this);
}


//======================================================================
// TiXmlDeclaration::~TiXmlDeclaration()
// address: 0x001DA77C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall TiXmlDeclaration::~TiXmlDeclaration(void **this)
{
  TiXmlDeclaration::~TiXmlDeclaration(this);
  operator delete(this);
}


//======================================================================
// TiXmlDeclaration::TiXmlDeclaration(char const*,char const*,char const*)
// address: 0x001DB7FC   size: 0x48 (72 bytes)
//======================================================================
// Alternative name is '_ZN16TiXmlDeclarationC2EPKcS1_S1_'
void __fastcall TiXmlDeclaration::TiXmlDeclaration(TiXmlDeclaration *this, char *a2, char *a3, char *a4)
{
  TiXmlNode::TiXmlNode(this, 5);
  *(_DWORD *)this = &off_4599F0;
  *((_DWORD *)this + 11) = &TiXmlString::nullrep_;
  *((_DWORD *)this + 12) = &TiXmlString::nullrep_;
  *((_DWORD *)this + 13) = &TiXmlString::nullrep_;
  TiXmlString::operator=((TiXmlDeclaration *)((char *)this + 44), a2);
  TiXmlString::operator=((TiXmlDeclaration *)((char *)this + 48), a3);
  TiXmlString::operator=((TiXmlDeclaration *)((char *)this + 52), a4);
}


//======================================================================
// TiXmlDeclaration::CopyTo(TiXmlDeclaration*)const
// address: 0x001DB84C   size: 0x30 (48 bytes)
//======================================================================
int __fastcall TiXmlDeclaration::CopyTo(size_t **this, TiXmlDeclaration *a2)
{
  TiXmlNode::CopyTo((TiXmlNode *)this, a2);
  TiXmlString::operator=((TiXmlDeclaration *)((char *)a2 + 44), this + 11);
  TiXmlString::operator=((TiXmlDeclaration *)((char *)a2 + 48), this + 12);
  return TiXmlString::operator=((TiXmlDeclaration *)((char *)a2 + 52), this + 13);
}


//======================================================================
// TiXmlDeclaration::TiXmlDeclaration(TiXmlDeclaration const&)
// address: 0x001DB87C   size: 0x2E (46 bytes)
//======================================================================
// Alternative name is '_ZN16TiXmlDeclarationC1ERKS_'
void __fastcall TiXmlDeclaration::TiXmlDeclaration(TiXmlDeclaration *this, size_t **a2)
{
  TiXmlNode::TiXmlNode(this, 5);
  *(_DWORD *)this = &off_4599F0;
  *((_DWORD *)this + 11) = &TiXmlString::nullrep_;
  *((_DWORD *)this + 12) = &TiXmlString::nullrep_;
  *((_DWORD *)this + 13) = &TiXmlString::nullrep_;
  TiXmlDeclaration::CopyTo(a2, this);
}


//======================================================================
// TiXmlDeclaration::operator=(TiXmlDeclaration const&)
// address: 0x001DB8B4   size: 0x14 (20 bytes)
//======================================================================
int __fastcall TiXmlDeclaration::operator=(TiXmlNode *a1, size_t **a2)
{
  TiXmlNode::Clear(a1);
  return TiXmlDeclaration::CopyTo(a2, a1);
}


//======================================================================
// TiXmlDeclaration::Clone(void)const
// address: 0x001DB8C8   size: 0x34 (52 bytes)
//======================================================================
TiXmlDeclaration *__fastcall TiXmlDeclaration::Clone(size_t **this)
{
  TiXmlDeclaration *v2; // r4

  v2 = (TiXmlDeclaration *)operator new(0x38u);
  TiXmlNode::TiXmlNode(v2, 5);
  *(_DWORD *)v2 = &off_4599F0;
  *((_DWORD *)v2 + 11) = &TiXmlString::nullrep_;
  *((_DWORD *)v2 + 12) = &TiXmlString::nullrep_;
  *((_DWORD *)v2 + 13) = &TiXmlString::nullrep_;
  TiXmlDeclaration::CopyTo(this, v2);
  return v2;
}

