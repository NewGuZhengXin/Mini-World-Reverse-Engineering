// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: TiXmlPrinter

//======================================================================
// TiXmlPrinter::VisitEnter(TiXmlDocument const&)
// address: 0x001DA454   size: 0x4 (4 bytes)
//======================================================================
int __fastcall TiXmlPrinter::VisitEnter(TiXmlPrinter *this, const TiXmlDocument *a2)
{
  return 1;
}


//======================================================================
// TiXmlPrinter::VisitExit(TiXmlDocument const&)
// address: 0x001DA458   size: 0x4 (4 bytes)
//======================================================================
int __fastcall TiXmlPrinter::VisitExit(TiXmlPrinter *this, const TiXmlDocument *a2)
{
  return 1;
}


//======================================================================
// TiXmlPrinter::~TiXmlPrinter()
// address: 0x001DA790   size: 0x32 (50 bytes)
//======================================================================
// Alternative name is '_ZN12TiXmlPrinterD1Ev'
void __fastcall TiXmlPrinter::~TiXmlPrinter(void **this)
{
  *this = &off_459A98;
  TiXmlString::quit(this + 5);
  TiXmlString::quit(this + 4);
  TiXmlString::quit(this + 3);
  *this = &off_459828;
}


//======================================================================
// TiXmlPrinter::~TiXmlPrinter()
// address: 0x001DA7CC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall TiXmlPrinter::~TiXmlPrinter(void **this)
{
  TiXmlPrinter::~TiXmlPrinter(this);
  operator delete(this);
}


//======================================================================
// TiXmlPrinter::DoIndent(void)
// address: 0x001DA7DE   size: 0x1E (30 bytes)
//======================================================================
int __fastcall TiXmlPrinter::DoIndent(int this)
{
  int v1; // r5
  int i; // r4

  v1 = this;
  for ( i = 0; i < *(_DWORD *)(v1 + 4); ++i )
    this = TiXmlString::operator+=((TiXmlString *)(v1 + 12), (size_t **)(v1 + 16));
  return this;
}


//======================================================================
// TiXmlPrinter::DoLineBreak(void)
// address: 0x001DA7FC   size: 0xE (14 bytes)
//======================================================================
int __fastcall TiXmlPrinter::DoLineBreak(size_t **this)
{
  return TiXmlString::operator+=((TiXmlString *)(this + 3), this + 5);
}


//======================================================================
// TiXmlPrinter::VisitExit(TiXmlElement const&)
// address: 0x001DA80C   size: 0x4E (78 bytes)
//======================================================================
int __fastcall TiXmlPrinter::VisitExit(TiXmlPrinter *this, const TiXmlElement *a2)
{
  --*((_DWORD *)this + 1);
  if ( *((_DWORD *)a2 + 6) != 0 )
  {
    if ( *((_BYTE *)this + 8) != 0 )
      *((_BYTE *)this + 8) = 0;
    else
      TiXmlPrinter::DoIndent((int)this);
    TiXmlString::operator+=((TiXmlPrinter *)((char *)this + 12), "</");
    TiXmlString::operator+=((TiXmlPrinter *)((char *)this + 12), (char *)(*((_DWORD *)a2 + 8) + 8));
    TiXmlString::operator+=((TiXmlPrinter *)((char *)this + 12), ">");
    TiXmlPrinter::DoLineBreak((size_t **)this);
  }
  return 1;
}


//======================================================================
// TiXmlPrinter::Visit(TiXmlDeclaration const&)
// address: 0x001DA864   size: 0x24 (36 bytes)
//======================================================================
int __fastcall TiXmlPrinter::Visit(size_t **this, const TiXmlDeclaration *a2)
{
  TiXmlPrinter::DoIndent((int)this);
  (*(void (__fastcall **)(const TiXmlDeclaration *, _DWORD, _DWORD, char *))(*(_DWORD *)a2 + 72))(
    a2,
    0,
    0,
    (char *)this + 12);
  TiXmlPrinter::DoLineBreak(this);
  return 1;
}


//======================================================================
// TiXmlPrinter::Visit(TiXmlComment const&)
// address: 0x001DA888   size: 0x36 (54 bytes)
//======================================================================
int __fastcall TiXmlPrinter::Visit(size_t **this, const TiXmlComment *a2)
{
  TiXmlPrinter::DoIndent((int)this);
  TiXmlString::operator+=((TiXmlString *)(this + 3), "<!--");
  TiXmlString::operator+=((TiXmlString *)(this + 3), (char *)(*((_DWORD *)a2 + 8) + 8));
  TiXmlString::operator+=((TiXmlString *)(this + 3), "-->");
  TiXmlPrinter::DoLineBreak(this);
  return 1;
}


//======================================================================
// TiXmlPrinter::Visit(TiXmlUnknown const&)
// address: 0x001DA8C8   size: 0x36 (54 bytes)
//======================================================================
int __fastcall TiXmlPrinter::Visit(size_t **this, const TiXmlUnknown *a2)
{
  TiXmlPrinter::DoIndent((int)this);
  TiXmlString::operator+=((TiXmlString *)(this + 3), "<");
  TiXmlString::operator+=((TiXmlString *)(this + 3), (char *)(*((_DWORD *)a2 + 8) + 8));
  TiXmlString::operator+=((TiXmlString *)(this + 3), ">");
  TiXmlPrinter::DoLineBreak(this);
  return 1;
}


//======================================================================
// TiXmlPrinter::Visit(TiXmlText const&)
// address: 0x001DAA7C   size: 0x8E (142 bytes)
//======================================================================
int __fastcall TiXmlPrinter::Visit(size_t **this, const TiXmlText *a2)
{
  int **v4; // r7
  TiXmlString *v5; // r2
  TiXmlString *v7; // [sp+4h] [bp-10h]
  void *v8[2]; // [sp+Ch] [bp-8h] BYREF

  v7 = (TiXmlString *)(this + 3);
  if ( *((_BYTE *)a2 + 44) != 0 )
  {
    TiXmlPrinter::DoIndent((int)this);
    TiXmlString::operator+=(v7, "<![CDATA[");
    TiXmlString::operator+=(v7, (char *)(*((_DWORD *)a2 + 8) + 8));
    TiXmlString::operator+=(v7, "]]>");
    TiXmlPrinter::DoLineBreak(this);
  }
  else
  {
    v4 = (int **)((char *)a2 + 32);
    if ( *((_BYTE *)this + 8) != 0 )
    {
      v8[0] = &TiXmlString::nullrep_;
      TiXmlBase::EncodeString(v4, (const TiXmlString *)v8, (TiXmlString *)(this + 3));
      TiXmlString::operator+=(v7, (size_t **)v8);
    }
    else
    {
      TiXmlPrinter::DoIndent((int)this);
      v8[0] = &TiXmlString::nullrep_;
      TiXmlBase::EncodeString(v4, (const TiXmlString *)v8, v5);
      TiXmlString::operator+=(v7, (size_t **)v8);
      TiXmlPrinter::DoLineBreak(this);
    }
    TiXmlString::quit(v8);
  }
  return 1;
}


//======================================================================
// TiXmlPrinter::VisitEnter(TiXmlElement const&,TiXmlAttribute const*)
// address: 0x001DB5A0   size: 0x9A (154 bytes)
//======================================================================
int __fastcall TiXmlPrinter::VisitEnter(size_t **this, const TiXmlElement *a2, const TiXmlAttribute *a3)
{
  TiXmlString *v6; // r0
  int v7; // r0

  TiXmlPrinter::DoIndent((int)this);
  TiXmlString::operator+=((TiXmlString *)(this + 3), "<");
  TiXmlString::operator+=((TiXmlString *)(this + 3), (char *)(*((_DWORD *)a2 + 8) + 8));
  while ( a3 != nullptr )
  {
    TiXmlString::operator+=((TiXmlString *)(this + 3), " ");
    TiXmlAttribute::Print((int)a3, nullptr, 0, (TiXmlString *)(this + 3));
    a3 = (const TiXmlAttribute *)TiXmlAttribute::Next(a3);
  }
  v6 = (TiXmlString *)(this + 3);
  if ( *((_DWORD *)a2 + 6) == 0 )
  {
    TiXmlString::operator+=(v6, " />");
LABEL_10:
    TiXmlPrinter::DoLineBreak(this);
    goto LABEL_11;
  }
  TiXmlString::operator+=(v6, ">");
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)a2 + 6) + 32))(*((_DWORD *)a2 + 6)) == 0 )
    goto LABEL_10;
  v7 = *((_DWORD *)a2 + 7);
  if ( v7 != *((_DWORD *)a2 + 6) || *(_BYTE *)((*(int (__fastcall **)(int))(*(_DWORD *)v7 + 32))(v7) + 44) != 0 )
    goto LABEL_10;
  *((_BYTE *)this + 8) = 1;
LABEL_11:
  *(this + 1) = (size_t *)((char *)*(this + 1) + 1);
  return 1;
}

