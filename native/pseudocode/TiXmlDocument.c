// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: TiXmlDocument

//======================================================================
// TiXmlDocument::~TiXmlDocument()
// address: 0x001BEC38   size: 0x2C (44 bytes)
//======================================================================
// Alternative name is '_ZN13TiXmlDocumentD1Ev'
void __fastcall TiXmlDocument::~TiXmlDocument(TiXmlDocument *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_4597D0;
  v2 = *((void **)this + 13);
  if ( v2 != &TiXmlString::nullrep_ && v2 != nullptr )
    operator delete[](v2);
  TiXmlNode::~TiXmlNode(this);
}


//======================================================================
// TiXmlDocument::~TiXmlDocument()
// address: 0x001BEC6C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall TiXmlDocument::~TiXmlDocument(TiXmlDocument *this)
{
  TiXmlDocument::~TiXmlDocument(this);
  operator delete(this);
}


//======================================================================
// TiXmlDocument::ToDocument(void)const
// address: 0x001D9180   size: 0x2 (2 bytes)
//======================================================================
void __fastcall TiXmlDocument::ToDocument(TiXmlDocument *this)
{
  ;
}


//======================================================================
// TiXmlDocument::ToDocument(void)
// address: 0x001D9182   size: 0x2 (2 bytes)
//======================================================================
void __fastcall TiXmlDocument::ToDocument(TiXmlDocument *this)
{
  ;
}


//======================================================================
// TiXmlDocument::SetError(int,char const*,TiXmlParsingData *,TiXmlEncoding)
// address: 0x001D97FC   size: 0x4C (76 bytes)
//======================================================================
int __fastcall TiXmlDocument::SetError(int result, int a2, unsigned int a3, int *a4, int a5)
{
  int v7; // r4

  v7 = result;
  if ( *(_BYTE *)(result + 44) == 0 )
  {
    *(_BYTE *)(result + 44) = 1;
    *(_DWORD *)(result + 48) = a2;
    result = TiXmlString::operator=((TiXmlString *)(result + 52), TiXmlBase::errorString[a2]);
    *(_DWORD *)(v7 + 64) = -1;
    *(_DWORD *)(v7 + 60) = -1;
    if ( a3 != 0 && a4 != nullptr )
    {
      result = TiXmlParsingData::Stamp(a4, a3, a5);
      *(_DWORD *)(v7 + 60) = *a4;
      *(_DWORD *)(v7 + 64) = a4[1];
    }
  }
  return result;
}


//======================================================================
// TiXmlDocument::Parse(char const*,TiXmlParsingData *,TiXmlEncoding)
// address: 0x001D9EB8   size: 0x13C (316 bytes)
//======================================================================
unsigned __int8 *__fastcall TiXmlDocument::Parse(int a1, unsigned __int8 *a2, _DWORD *a3, int a4)
{
  unsigned __int8 *result; // r0
  int v9; // r2
  int v10; // r3
  int v11; // r1
  unsigned __int8 *v12; // r7
  int v13; // r0
  TiXmlNode *v14; // r6
  unsigned __int8 *v15; // r7
  int v16; // r6
  unsigned __int8 *v17; // r6
  _DWORD v18[5]; // [sp+10h] [bp-14h] BYREF

  *(_BYTE *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  TiXmlString::operator=((TiXmlString *)(a1 + 52), (char *)&unk_3FB8EA);
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  if ( a2 == nullptr || *a2 == 0 )
    goto LABEL_3;
  *(_DWORD *)(a1 + 8) = -1;
  *(_DWORD *)(a1 + 4) = -1;
  if ( a3 != nullptr )
  {
    *(_DWORD *)(a1 + 4) = *a3;
    a3 = (_DWORD *)a3[1];
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0;
  }
  *(_DWORD *)(a1 + 8) = a3;
  v9 = *(_DWORD *)(a1 + 4);
  v10 = *(_DWORD *)(a1 + 8);
  v11 = *(_DWORD *)(a1 + 56);
  v18[2] = a2;
  v18[0] = v9;
  v18[3] = v11;
  v18[1] = v10;
  if ( a4 == 0 && *a2 == 239 && a2[1] == 187 && a2[2] == 191 )
  {
    a4 = 1;
    *(_BYTE *)(a1 + 68) = 1;
  }
  v12 = TiXmlBase::SkipWhiteSpace(a2, a4);
  if ( v12 != nullptr )
  {
    do
    {
      if ( *v12 == 0 )
        break;
      v13 = TiXmlNode::Identify((TiXmlNode *)a1, v12, a4);
      v14 = (TiXmlNode *)v13;
      if ( v13 == 0 )
        break;
      v15 = (unsigned __int8 *)(*(int (__fastcall **)(int, unsigned __int8 *, _DWORD *, int))(*(_DWORD *)v13 + 12))(
                                 v13,
                                 v12,
                                 v18,
                                 a4);
      TiXmlNode::LinkEndChild((TiXmlNode *)a1, v14);
      if ( a4 == 0 && (*(int (__fastcall **)(TiXmlNode *))(*(_DWORD *)v14 + 60))(v14) != 0 )
      {
        v16 = *(_DWORD *)((*(int (__fastcall **)(TiXmlNode *))(*(_DWORD *)v14 + 60))(v14) + 48);
        if ( *(_BYTE *)(v16 + 8) == 0
          || (v17 = (unsigned __int8 *)(v16 + 8), TiXmlBase::StringEqual(v17, "UTF-8", 1, 0) != nullptr)
          || TiXmlBase::StringEqual(v17, "UTF8", 1, 0) != nullptr )
        {
          a4 = 1;
        }
        else
        {
          a4 = 2;
        }
      }
      v12 = TiXmlBase::SkipWhiteSpace(v15, a4);
    }
    while ( v12 != nullptr );
    result = v12;
    if ( *(_DWORD *)(a1 + 24) == 0 )
    {
      TiXmlDocument::SetError(a1, 13, 0, nullptr, a4);
      return nullptr;
    }
  }
  else
  {
LABEL_3:
    TiXmlDocument::SetError(a1, 13, 0, nullptr, 0);
    return nullptr;
  }
  return result;
}


//======================================================================
// TiXmlDocument::Accept(TiXmlVisitor *)const
// address: 0x001DA3DC   size: 0x38 (56 bytes)
//======================================================================
int __fastcall TiXmlDocument::Accept(TiXmlDocument *this, TiXmlVisitor *a2)
{
  _DWORD *i; // r5

  if ( (*(int (__fastcall **)(TiXmlVisitor *, TiXmlDocument *))(*(_DWORD *)a2 + 8))(a2, this) != 0 )
  {
    for ( i = *((_DWORD **)this + 6);
          i != nullptr && (*(int (__fastcall **)(_DWORD *, TiXmlVisitor *))(*i + 68))(i, a2) != 0;
          i = (_DWORD *)i[10] )
    {
      ;
    }
  }
  return (*(int (__fastcall **)(TiXmlVisitor *, TiXmlDocument *))(*(_DWORD *)a2 + 12))(a2, this);
}


//======================================================================
// TiXmlDocument::Print(__sFILE *,int)const
// address: 0x001DA4E0   size: 0x26 (38 bytes)
//======================================================================
int __fastcall TiXmlDocument::Print(int result, FILE *a2, int a3)
{
  _DWORD *i; // r4

  for ( i = *(_DWORD **)(result + 24); i != nullptr; i = (_DWORD *)i[10] )
  {
    (*(void (__fastcall **)(_DWORD *, FILE *, int))(*i + 8))(i, a2, a3);
    result = j_fputc(10, a2);
  }
  return result;
}


//======================================================================
// TiXmlDocument::TiXmlDocument(void)
// address: 0x001DAEC0   size: 0x4A (74 bytes)
//======================================================================
// Alternative name is '_ZN13TiXmlDocumentC2Ev'
void __fastcall TiXmlDocument::TiXmlDocument(TiXmlDocument *this)
{
  TiXmlNode::TiXmlNode(this, 0);
  *(_DWORD *)this = &off_4597D0;
  *((_DWORD *)this + 13) = &TiXmlString::nullrep_;
  *((_DWORD *)this + 16) = -1;
  *((_DWORD *)this + 15) = -1;
  *((_DWORD *)this + 14) = 4;
  *((_BYTE *)this + 68) = 0;
  *((_BYTE *)this + 44) = 0;
  *((_DWORD *)this + 12) = 0;
  TiXmlString::operator=((TiXmlDocument *)((char *)this + 52), (char *)&unk_3FB8EA);
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 15) = 0;
}


//======================================================================
// TiXmlDocument::TiXmlDocument(char const*)
// address: 0x001DAF18   size: 0x58 (88 bytes)
//======================================================================
// Alternative name is '_ZN13TiXmlDocumentC1EPKc'
void __fastcall TiXmlDocument::TiXmlDocument(TiXmlDocument *this, char *a2)
{
  TiXmlNode::TiXmlNode(this, 0);
  *(_DWORD *)this = &off_4597D0;
  *((_DWORD *)this + 13) = &TiXmlString::nullrep_;
  *((_DWORD *)this + 16) = -1;
  *((_DWORD *)this + 15) = -1;
  *((_DWORD *)this + 14) = 4;
  *((_BYTE *)this + 68) = 0;
  TiXmlString::operator=((TiXmlDocument *)((char *)this + 32), a2);
  *((_BYTE *)this + 44) = 0;
  *((_DWORD *)this + 12) = 0;
  TiXmlString::operator=((TiXmlDocument *)((char *)this + 52), (char *)&unk_3FB8EA);
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 15) = 0;
}


//======================================================================
// TiXmlDocument::LoadBuffer(char const*,unsigned int,TiXmlEncoding)
// address: 0x001DAF7C   size: 0xA0 (160 bytes)
//======================================================================
int __fastcall TiXmlDocument::LoadBuffer(unsigned __int8 *a1, const char *a2, unsigned int a3, int a4)
{
  const char *v6; // r4
  const char *v7; // r1
  int v8; // r3
  int v9; // r4
  char v13; // [sp+Bh] [bp-9h] BYREF
  void *v14[2]; // [sp+Ch] [bp-8h] BYREF

  v14[0] = &TiXmlString::nullrep_;
  v6 = a2;
  TiXmlString::reserve((TiXmlString *)v14, a3);
  v7 = a2;
  while ( v6 < &a2[a3] )
  {
    v8 = *(unsigned __int8 *)v6;
    if ( v8 == 10 )
    {
      TiXmlString::append((TiXmlString *)v14, v7, v6 - v7 + 1);
      goto LABEL_10;
    }
    if ( v8 == 13 )
    {
      if ( v6 - v7 > 0 )
        TiXmlString::append((TiXmlString *)v14, v7, v6 - v7);
      v13 = 10;
      TiXmlString::append((TiXmlString *)v14, &v13, 1u);
      if ( v6[1] == 10 )
      {
        v6 += 2;
        goto LABEL_11;
      }
LABEL_10:
      ++v6;
LABEL_11:
      v7 = v6;
    }
    else
    {
      ++v6;
    }
  }
  if ( v6 != v7 )
    TiXmlString::append((TiXmlString *)v14, v7, v6 - v7);
  (*(void (__fastcall **)(unsigned __int8 *, char *, _DWORD, int))(*(_DWORD *)a1 + 12))(a1, (char *)v14[0] + 8, 0, a4);
  v9 = a1[44] ^ 1;
  TiXmlString::quit(v14);
  return v9;
}


//======================================================================
// TiXmlDocument::LoadFile(__sFILE *,TiXmlEncoding)
// address: 0x001DB020   size: 0x122 (290 bytes)
//======================================================================
FILE *__fastcall TiXmlDocument::LoadFile(int a1, FILE *a2, int a3)
{
  FILE *v4; // r5
  unsigned __int8 *v5; // r0
  unsigned __int8 *v6; // r6
  const char *v7; // r5
  const char *v8; // r1
  int v9; // r3
  signed int size; // [sp+8h] [bp-14h]
  char v13; // [sp+13h] [bp-9h] BYREF
  void *v14[2]; // [sp+14h] [bp-8h] BYREF

  v4 = a2;
  if ( a2 == nullptr )
  {
    TiXmlDocument::SetError(a1, 2, 0, nullptr, 0);
    return v4;
  }
  TiXmlNode::Clear((TiXmlNode *)a1);
  *(_DWORD *)(a1 + 8) = -1;
  *(_DWORD *)(a1 + 4) = -1;
  j_fseek(v4, 0, 2);
  size = j_ftell(v4);
  j_fseek(v4, 0, 0);
  if ( size <= 0 )
  {
    v4 = nullptr;
    TiXmlDocument::SetError(a1, 13, 0, nullptr, 0);
    return v4;
  }
  v14[0] = &TiXmlString::nullrep_;
  TiXmlString::reserve((TiXmlString *)v14, size);
  v5 = (unsigned __int8 *)operator new[](size + 1);
  *v5 = 0;
  v6 = v5;
  if ( j_fread(v5, size, 1u, v4) != 1 )
  {
    operator delete[](v6);
    TiXmlDocument::SetError(a1, 2, 0, nullptr, 0);
    v4 = nullptr;
    goto LABEL_23;
  }
  v7 = (const char *)v6;
  v6[size] = 0;
  v8 = (const char *)v6;
  while ( 1 )
  {
    v9 = *(unsigned __int8 *)v7;
    if ( *v7 == 0 )
      break;
    if ( v9 == 10 )
    {
      TiXmlString::append((TiXmlString *)v14, v8, v7 - v8 + 1);
      goto LABEL_17;
    }
    if ( v9 == 13 )
    {
      if ( v7 - v8 > 0 )
        TiXmlString::append((TiXmlString *)v14, v8, v7 - v8);
      v13 = 10;
      TiXmlString::append((TiXmlString *)v14, &v13, 1u);
      if ( v7[1] == 10 )
      {
        v7 += 2;
        goto LABEL_18;
      }
LABEL_17:
      ++v7;
LABEL_18:
      v8 = v7;
    }
    else
    {
      ++v7;
    }
  }
  if ( v7 != v8 )
    TiXmlString::append((TiXmlString *)v14, v8, v7 - v8);
  operator delete[](v6);
  (*(void (__fastcall **)(int, char *, _DWORD, int))(*(_DWORD *)a1 + 12))(a1, (char *)v14[0] + 8, 0, a3);
  v4 = (FILE *)(*(unsigned __int8 *)(a1 + 44) ^ 1);
LABEL_23:
  TiXmlString::quit(v14);
  return v4;
}


//======================================================================
// TiXmlDocument::LoadFile(char const*,TiXmlEncoding)
// address: 0x001DB148   size: 0xA2 (162 bytes)
//======================================================================
FILE *__fastcall TiXmlDocument::LoadFile(int a1, char *a2, int a3)
{
  size_t v6; // r0
  size_t v7; // r6
  unsigned int v8; // r0
  unsigned int v9; // r0
  size_t *v10; // r0
  FILE *v11; // r0
  FILE *v12; // r4
  FILE *File; // r5
  void *v15[2]; // [sp+Ch] [bp-8h] BYREF

  v15[0] = nullptr;
  v6 = j_strlen(a2);
  v7 = v6;
  if ( v6 != 0 )
  {
    v8 = (v6 + 15) >> 2;
    if ( v8 > 0x1FC00000 )
      v9 = -1;
    else
      v9 = 4 * v8;
    v10 = (size_t *)operator new[](v9);
    v15[0] = v10;
    *v10 = v7;
    *((_BYTE *)v10 + v7 + 8) = 0;
    *((_DWORD *)v15[0] + 1) = v7;
  }
  else
  {
    v15[0] = &TiXmlString::nullrep_;
  }
  j_memcpy((char *)v15[0] + 8, a2, *(_DWORD *)v15[0]);
  TiXmlString::operator=((TiXmlString *)(a1 + 32), (size_t **)v15);
  v11 = TiXmlFOpen((const char *)(*(_DWORD *)(a1 + 32) + 8), "rb");
  v12 = v11;
  if ( v11 != nullptr )
  {
    File = TiXmlDocument::LoadFile(a1, v11, a3);
    j_fclose(v12);
    v12 = File;
  }
  else
  {
    TiXmlDocument::SetError(a1, 2, 0, nullptr, 0);
  }
  TiXmlString::quit(v15);
  return v12;
}


//======================================================================
// TiXmlDocument::LoadFile(TiXmlEncoding)
// address: 0x001DB1F4   size: 0xE (14 bytes)
//======================================================================
FILE *__fastcall TiXmlDocument::LoadFile(int a1, int a2)
{
  return TiXmlDocument::LoadFile(a1, (char *)(*(_DWORD *)(a1 + 32) + 8), a2);
}


//======================================================================
// TiXmlDocument::SaveFile(__sFILE *)const
// address: 0x001DB202   size: 0x3C (60 bytes)
//======================================================================
bool __fastcall TiXmlDocument::SaveFile(_BYTE *a1, int a2)
{
  if ( a1[68] != 0 )
  {
    j_fputc(239, (FILE *)a2);
    j_fputc(187, (FILE *)a2);
    j_fputc(191, (FILE *)a2);
  }
  (*(void (__fastcall **)(_BYTE *, int, _DWORD))(*(_DWORD *)a1 + 8))(a1, a2, 0);
  return (*(_WORD *)(a2 + 12) & 0x40) == 0;
}


//======================================================================
// TiXmlDocument::SaveFile(char const*)const
// address: 0x001DB240   size: 0x28 (40 bytes)
//======================================================================
FILE *__fastcall TiXmlDocument::SaveFile(TiXmlDocument *this, const char *a2)
{
  FILE *result; // r0
  FILE *v4; // r4
  _BOOL4 v5; // r5

  result = TiXmlFOpen(a2, "w");
  v4 = result;
  if ( result != nullptr )
  {
    v5 = TiXmlDocument::SaveFile(this, (int)result);
    j_fclose(v4);
    return (FILE *)v5;
  }
  return result;
}


//======================================================================
// TiXmlDocument::SaveFile(void)const
// address: 0x001DB26C   size: 0xC (12 bytes)
//======================================================================
FILE *__fastcall TiXmlDocument::SaveFile(TiXmlDocument *this)
{
  return TiXmlDocument::SaveFile(this, (const char *)(*((_DWORD *)this + 8) + 8));
}


//======================================================================
// TiXmlDocument::CopyTo(TiXmlDocument*)const
// address: 0x001DB278   size: 0x5A (90 bytes)
//======================================================================
TiXmlNode *__fastcall TiXmlDocument::CopyTo(size_t **this, TiXmlDocument *a2)
{
  TiXmlNode *result; // r0
  _DWORD *i; // r5
  TiXmlNode *v6; // r0

  TiXmlNode::CopyTo((TiXmlNode *)this, a2);
  *((_BYTE *)a2 + 44) = *((_BYTE *)this + 44);
  *((_DWORD *)a2 + 12) = *(this + 12);
  result = (TiXmlNode *)TiXmlString::operator=((TiXmlDocument *)((char *)a2 + 52), this + 13);
  *((_DWORD *)a2 + 14) = *(this + 14);
  *((_DWORD *)a2 + 15) = *(this + 15);
  *((_DWORD *)a2 + 16) = *(this + 16);
  *((_BYTE *)a2 + 68) = *((_BYTE *)this + 68);
  for ( i = *(this + 6); i != nullptr; i = (_DWORD *)i[10] )
  {
    v6 = (TiXmlNode *)(*(int (__fastcall **)(_DWORD *))(*i + 64))(i);
    result = TiXmlNode::LinkEndChild(a2, v6);
  }
  return result;
}


//======================================================================
// TiXmlDocument::TiXmlDocument(TiXmlDocument const&)
// address: 0x001DB2D4   size: 0x32 (50 bytes)
//======================================================================
// Alternative name is '_ZN13TiXmlDocumentC1ERKS_'
void __fastcall TiXmlDocument::TiXmlDocument(TiXmlDocument *this, size_t **a2)
{
  TiXmlNode::TiXmlNode(this, 0);
  *(_DWORD *)this = &off_4597D0;
  *((_DWORD *)this + 13) = &TiXmlString::nullrep_;
  *((_DWORD *)this + 16) = -1;
  *((_DWORD *)this + 15) = -1;
  TiXmlDocument::CopyTo(a2, this);
}


//======================================================================
// TiXmlDocument::operator=(TiXmlDocument const&)
// address: 0x001DB310   size: 0x14 (20 bytes)
//======================================================================
TiXmlNode *__fastcall TiXmlDocument::operator=(TiXmlNode *a1, size_t **a2)
{
  TiXmlNode::Clear(a1);
  return TiXmlDocument::CopyTo(a2, a1);
}


//======================================================================
// TiXmlDocument::Clone(void)const
// address: 0x001DB324   size: 0x20 (32 bytes)
//======================================================================
TiXmlDocument *__fastcall TiXmlDocument::Clone(size_t **this)
{
  TiXmlDocument *v2; // r4

  v2 = (TiXmlDocument *)operator new(0x48u);
  TiXmlDocument::TiXmlDocument(v2);
  if ( v2 != nullptr )
    TiXmlDocument::CopyTo(this, v2);
  return v2;
}

