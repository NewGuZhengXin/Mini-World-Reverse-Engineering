// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: TiXmlNode

//======================================================================
// TiXmlNode::ToElement(void)const
// address: 0x001D9158   size: 0x4 (4 bytes)
//======================================================================
int __fastcall TiXmlNode::ToElement(TiXmlNode *this)
{
  return 0;
}


//======================================================================
// TiXmlNode::ToComment(void)const
// address: 0x001D915C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall TiXmlNode::ToComment(TiXmlNode *this)
{
  return 0;
}


//======================================================================
// TiXmlNode::ToUnknown(void)const
// address: 0x001D9160   size: 0x4 (4 bytes)
//======================================================================
int __fastcall TiXmlNode::ToUnknown(TiXmlNode *this)
{
  return 0;
}


//======================================================================
// TiXmlNode::ToText(void)const
// address: 0x001D9164   size: 0x4 (4 bytes)
//======================================================================
int __fastcall TiXmlNode::ToText(TiXmlNode *this)
{
  return 0;
}


//======================================================================
// TiXmlNode::ToDeclaration(void)const
// address: 0x001D9168   size: 0x4 (4 bytes)
//======================================================================
int __fastcall TiXmlNode::ToDeclaration(TiXmlNode *this)
{
  return 0;
}


//======================================================================
// TiXmlNode::ToElement(void)
// address: 0x001D916C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall TiXmlNode::ToElement(TiXmlNode *this)
{
  return 0;
}


//======================================================================
// TiXmlNode::ToComment(void)
// address: 0x001D9170   size: 0x4 (4 bytes)
//======================================================================
int __fastcall TiXmlNode::ToComment(TiXmlNode *this)
{
  return 0;
}


//======================================================================
// TiXmlNode::ToUnknown(void)
// address: 0x001D9174   size: 0x4 (4 bytes)
//======================================================================
int __fastcall TiXmlNode::ToUnknown(TiXmlNode *this)
{
  return 0;
}


//======================================================================
// TiXmlNode::ToText(void)
// address: 0x001D9178   size: 0x4 (4 bytes)
//======================================================================
int __fastcall TiXmlNode::ToText(TiXmlNode *this)
{
  return 0;
}


//======================================================================
// TiXmlNode::ToDeclaration(void)
// address: 0x001D917C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall TiXmlNode::ToDeclaration(TiXmlNode *this)
{
  return 0;
}


//======================================================================
// TiXmlNode::Identify(char const*,TiXmlEncoding)
// address: 0x001D9D44   size: 0x144 (324 bytes)
//======================================================================
int __fastcall TiXmlNode::Identify(TiXmlNode *a1, unsigned __int8 *a2, int a3)
{
  unsigned __int8 *v4; // r0
  unsigned __int8 *v5; // r4
  int Document; // r7
  unsigned __int8 *v8; // r0
  unsigned __int8 *v9; // r4
  int v10; // r4
  int **v11; // r3

  v4 = TiXmlBase::SkipWhiteSpace(a2, a3);
  v5 = v4;
  if ( v4 == nullptr )
    return 0;
  if ( *v4 != 60 )
    return 0;
  Document = TiXmlNode::GetDocument(a1);
  v8 = TiXmlBase::SkipWhiteSpace(v5, a3);
  v9 = v8;
  if ( v8 == nullptr || *v8 == 0 )
    return 0;
  if ( TiXmlBase::StringEqual(v8, "<?xml", 1, a3) == nullptr )
  {
    if ( TiXmlBase::StringEqual(v9, "<!--", 0, a3) != nullptr )
    {
      v10 = operator new(0x2Cu);
      TiXmlNode::TiXmlNode(v10, 2);
      v11 = `vtable for'TiXmlComment;
LABEL_21:
      *(_DWORD *)v10 = *v11 + 2;
      goto LABEL_16;
    }
    if ( TiXmlBase::StringEqual(v9, "<![CDATA[", 0, a3) != nullptr )
    {
      v10 = operator new(0x30u);
      TiXmlNode::TiXmlNode(v10, 4);
      *(_DWORD *)v10 = &off_4599A0;
      TiXmlString::operator=((TiXmlString *)(v10 + 32), (char *)&unk_3FB8EA);
      *(_BYTE *)(v10 + 44) = 1;
      goto LABEL_16;
    }
    if ( TiXmlBase::StringEqual(v9, "<!", 0, a3) != nullptr || TiXmlBase::IsAlpha(v9[1]) == 0 && v9[1] != 95 )
    {
      v10 = operator new(0x2Cu);
      TiXmlNode::TiXmlNode(v10, 3);
      v11 = `vtable for'TiXmlUnknown;
      goto LABEL_21;
    }
    v10 = operator new(0x50u);
    TiXmlElement::TiXmlElement((TiXmlElement *)v10, (const char *)&unk_3FB8EA);
    if ( v10 != 0 )
      goto LABEL_16;
    if ( Document != 0 )
    {
      TiXmlDocument::SetError(Document, 3, 0, nullptr, 0);
      return v10;
    }
    return 0;
  }
  v10 = operator new(0x38u);
  TiXmlNode::TiXmlNode(v10, 5);
  *(_DWORD *)v10 = &off_4599F0;
  *(_DWORD *)(v10 + 44) = &TiXmlString::nullrep_;
  *(_DWORD *)(v10 + 48) = &TiXmlString::nullrep_;
  *(_DWORD *)(v10 + 52) = &TiXmlString::nullrep_;
LABEL_16:
  *(_DWORD *)(v10 + 16) = a1;
  return v10;
}


//======================================================================
// TiXmlNode::ToDocument(void)const
// address: 0x001DA36C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall TiXmlNode::ToDocument(TiXmlNode *this)
{
  return 0;
}


//======================================================================
// TiXmlNode::ToDocument(void)
// address: 0x001DA370   size: 0x4 (4 bytes)
//======================================================================
int __fastcall TiXmlNode::ToDocument(TiXmlNode *this)
{
  return 0;
}


//======================================================================
// TiXmlNode::~TiXmlNode()
// address: 0x001DA664   size: 0x36 (54 bytes)
//======================================================================
// Alternative name is '_ZN9TiXmlNodeD1Ev'
void __fastcall TiXmlNode::~TiXmlNode(TiXmlNode *this)
{
  _DWORD *i; // r0
  _DWORD *v3; // r5

  *(_DWORD *)this = &off_4598B0;
  for ( i = *((_DWORD **)this + 6); i != nullptr; i = v3 )
  {
    v3 = (_DWORD *)i[10];
    (*(void (__fastcall **)(_DWORD *))(*i + 4))(i);
  }
  TiXmlString::quit((void **)this + 8);
  *(_DWORD *)this = &off_459788;
}


//======================================================================
// TiXmlNode::~TiXmlNode()
// address: 0x001DA6A4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall TiXmlNode::~TiXmlNode(TiXmlNode *this)
{
  TiXmlNode::~TiXmlNode(this);
  operator delete(this);
}


//======================================================================
// TiXmlNode::TiXmlNode(TiXmlNode::NodeType)
// address: 0x001DAB18   size: 0x2C (44 bytes)
//======================================================================
// Alternative name is '_ZN9TiXmlNodeC1ENS_8NodeTypeE'
_DWORD *__fastcall TiXmlNode::TiXmlNode(_DWORD *result, int a2)
{
  result[2] = -1;
  result[1] = -1;
  *result = &off_4598B0;
  result[3] = 0;
  result[4] = 0;
  result[5] = a2;
  result[8] = &TiXmlString::nullrep_;
  result[6] = 0;
  result[7] = 0;
  result[9] = 0;
  result[10] = 0;
  return result;
}


//======================================================================
// TiXmlNode::CopyTo(TiXmlNode*)const
// address: 0x001DAB4C   size: 0x18 (24 bytes)
//======================================================================
int __fastcall TiXmlNode::CopyTo(TiXmlNode *this, TiXmlNode *a2)
{
  int result; // r0

  result = TiXmlString::operator=((TiXmlNode *)((char *)a2 + 32), (char *)(*((_DWORD *)this + 8) + 8));
  *((_DWORD *)a2 + 3) = *((_DWORD *)this + 3);
  return result;
}


//======================================================================
// TiXmlNode::Clear(void)
// address: 0x001DAB64   size: 0x1C (28 bytes)
//======================================================================
_DWORD *__fastcall TiXmlNode::Clear(TiXmlNode *this)
{
  _DWORD *result; // r0
  _DWORD *v3; // r5

  for ( result = *((_DWORD **)this + 6); result != nullptr; result = v3 )
  {
    v3 = (_DWORD *)result[10];
    (*(void (__fastcall **)(_DWORD *))(*result + 4))(result);
  }
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  return result;
}


//======================================================================
// TiXmlNode::ReplaceChild(TiXmlNode*,TiXmlNode const&)
// address: 0x001DAB80   size: 0x48 (72 bytes)
//======================================================================
int __fastcall TiXmlNode::ReplaceChild(TiXmlNode *this, TiXmlNode *a2, const TiXmlNode *a3)
{
  TiXmlNode *v3; // r6
  int v6; // r0
  int v7; // r4
  int v8; // r3
  int v9; // r3

  v3 = *((TiXmlNode **)a2 + 4);
  if ( v3 != this )
    return 0;
  v6 = (*(int (__fastcall **)(const TiXmlNode *))(*(_DWORD *)a3 + 64))(a3);
  v7 = v6;
  if ( v6 == 0 )
    return 0;
  *(_DWORD *)(v6 + 40) = *((_DWORD *)a2 + 10);
  *(_DWORD *)(v6 + 36) = *((_DWORD *)a2 + 9);
  v8 = *((_DWORD *)a2 + 10);
  if ( v8 != 0 )
    *(_DWORD *)(v8 + 36) = v6;
  else
    *((_DWORD *)v3 + 7) = v6;
  v9 = *((_DWORD *)a2 + 9);
  if ( v9 != 0 )
    *(_DWORD *)(v9 + 40) = v6;
  else
    *((_DWORD *)v3 + 6) = v6;
  (*(void (__fastcall **)(TiXmlNode *))(*(_DWORD *)a2 + 4))(a2);
  *(_DWORD *)(v7 + 16) = v3;
  return v7;
}


//======================================================================
// TiXmlNode::RemoveChild(TiXmlNode*)
// address: 0x001DABC8   size: 0x34 (52 bytes)
//======================================================================
int __fastcall TiXmlNode::RemoveChild(TiXmlNode *this, TiXmlNode *a2)
{
  TiXmlNode *v2; // r3
  int v3; // r2
  int v4; // r0
  int v5; // r2
  int v6; // r0
  int v7; // r2

  v2 = *((TiXmlNode **)a2 + 4);
  v3 = 0;
  if ( v2 == this )
  {
    v4 = *((_DWORD *)a2 + 10);
    v5 = *((_DWORD *)a2 + 9);
    if ( v4 != 0 )
      *(_DWORD *)(v4 + 36) = v5;
    else
      *((_DWORD *)v2 + 7) = v5;
    v6 = *((_DWORD *)a2 + 9);
    v7 = *((_DWORD *)a2 + 10);
    if ( v6 != 0 )
      *(_DWORD *)(v6 + 40) = v7;
    else
      *((_DWORD *)v2 + 6) = v7;
    (*(void (__fastcall **)(TiXmlNode *))(*(_DWORD *)a2 + 4))(a2);
    return 1;
  }
  return v3;
}


//======================================================================
// TiXmlNode::FirstChild(char const*)const
// address: 0x001DABFC   size: 0x20 (32 bytes)
//======================================================================
int __fastcall TiXmlNode::FirstChild(TiXmlNode *this, const char *a2)
{
  int i; // r4

  for ( i = *((_DWORD *)this + 6);
        i != 0 && j_strcmp((const char *)(*(_DWORD *)(i + 32) + 8), a2) != 0;
        i = *(_DWORD *)(i + 40) )
  {
    ;
  }
  return i;
}


//======================================================================
// TiXmlNode::LastChild(char const*)const
// address: 0x001DAC1C   size: 0x20 (32 bytes)
//======================================================================
int __fastcall TiXmlNode::LastChild(TiXmlNode *this, const char *a2)
{
  int i; // r4

  for ( i = *((_DWORD *)this + 7);
        i != 0 && j_strcmp((const char *)(*(_DWORD *)(i + 32) + 8), a2) != 0;
        i = *(_DWORD *)(i + 36) )
  {
    ;
  }
  return i;
}


//======================================================================
// TiXmlNode::IterateChildren(TiXmlNode const*)const
// address: 0x001DAC3C   size: 0xE (14 bytes)
//======================================================================
int __fastcall TiXmlNode::IterateChildren(TiXmlNode *this, const TiXmlNode *a2)
{
  if ( a2 != nullptr )
    return *((_DWORD *)a2 + 10);
  else
    return *((_DWORD *)this + 6);
}


//======================================================================
// TiXmlNode::NextSibling(char const*)const
// address: 0x001DAC4A   size: 0x20 (32 bytes)
//======================================================================
int __fastcall TiXmlNode::NextSibling(TiXmlNode *this, const char *a2)
{
  int i; // r4

  for ( i = *((_DWORD *)this + 10);
        i != 0 && j_strcmp((const char *)(*(_DWORD *)(i + 32) + 8), a2) != 0;
        i = *(_DWORD *)(i + 40) )
  {
    ;
  }
  return i;
}


//======================================================================
// TiXmlNode::IterateChildren(char const*,TiXmlNode const*)const
// address: 0x001DAC6A   size: 0x14 (20 bytes)
//======================================================================
int __fastcall TiXmlNode::IterateChildren(TiXmlNode *this, const char *a2, const TiXmlNode *a3)
{
  if ( a3 != nullptr )
    return TiXmlNode::NextSibling(a3, a2);
  else
    return TiXmlNode::FirstChild(this, a2);
}


//======================================================================
// TiXmlNode::PreviousSibling(char const*)const
// address: 0x001DAC7E   size: 0x20 (32 bytes)
//======================================================================
int __fastcall TiXmlNode::PreviousSibling(TiXmlNode *this, const char *a2)
{
  int i; // r4

  for ( i = *((_DWORD *)this + 9);
        i != 0 && j_strcmp((const char *)(*(_DWORD *)(i + 32) + 8), a2) != 0;
        i = *(_DWORD *)(i + 36) )
  {
    ;
  }
  return i;
}


//======================================================================
// TiXmlNode::FirstChildElement(void)const
// address: 0x001DAC9E   size: 0x26 (38 bytes)
//======================================================================
int __fastcall TiXmlNode::FirstChildElement(TiXmlNode *this)
{
  _DWORD *i; // r4

  for ( i = *((_DWORD **)this + 6); i != nullptr; i = (_DWORD *)i[10] )
  {
    if ( (*(int (__fastcall **)(_DWORD *))(*i + 20))(i) != 0 )
      return (*(int (__fastcall **)(_DWORD *))(*i + 20))(i);
  }
  return 0;
}


//======================================================================
// TiXmlNode::FirstChildElement(char const*)const
// address: 0x001DACC4   size: 0x2E (46 bytes)
//======================================================================
int __fastcall TiXmlNode::FirstChildElement(TiXmlNode *this, const char *a2)
{
  int result; // r0
  TiXmlNode *v4; // r4

  for ( result = TiXmlNode::FirstChild(this, a2); ; result = TiXmlNode::NextSibling(v4, a2) )
  {
    v4 = (TiXmlNode *)result;
    if ( result == 0 )
      break;
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)result + 20))(result) != 0 )
      return (*(int (__fastcall **)(TiXmlNode *))(*(_DWORD *)v4 + 20))(v4);
  }
  return result;
}


//======================================================================
// TiXmlNode::NextSiblingElement(void)const
// address: 0x001DACF2   size: 0x26 (38 bytes)
//======================================================================
int __fastcall TiXmlNode::NextSiblingElement(TiXmlNode *this)
{
  _DWORD *i; // r4

  for ( i = *((_DWORD **)this + 10); i != nullptr; i = (_DWORD *)i[10] )
  {
    if ( (*(int (__fastcall **)(_DWORD *))(*i + 20))(i) != 0 )
      return (*(int (__fastcall **)(_DWORD *))(*i + 20))(i);
  }
  return 0;
}


//======================================================================
// TiXmlNode::NextSiblingElement(char const*)const
// address: 0x001DAD18   size: 0x2A (42 bytes)
//======================================================================
int __fastcall TiXmlNode::NextSiblingElement(TiXmlNode *this, const char *a2)
{
  int result; // r0
  TiXmlNode *v4; // r4

  while ( 1 )
  {
    result = TiXmlNode::NextSibling(this, a2);
    v4 = (TiXmlNode *)result;
    if ( result == 0 )
      break;
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)result + 20))(result) != 0 )
      return (*(int (__fastcall **)(TiXmlNode *))(*(_DWORD *)v4 + 20))(v4);
    this = v4;
  }
  return result;
}


//======================================================================
// TiXmlNode::GetDocument(void)const
// address: 0x001DAD42   size: 0x26 (38 bytes)
//======================================================================
int __fastcall TiXmlNode::GetDocument(TiXmlNode *this)
{
  while ( this != nullptr )
  {
    if ( (*(int (__fastcall **)(TiXmlNode *))(*(_DWORD *)this + 16))(this) != 0 )
      return (*(int (__fastcall **)(TiXmlNode *))(*(_DWORD *)this + 16))(this);
    this = *((TiXmlNode **)this + 4);
  }
  return 0;
}


//======================================================================
// TiXmlNode::LinkEndChild(TiXmlNode*)
// address: 0x001DAD68   size: 0x4E (78 bytes)
//======================================================================
TiXmlNode *__fastcall TiXmlNode::LinkEndChild(TiXmlNode *this, TiXmlNode *a2)
{
  TiXmlNode *result; // r0
  int Document; // r0
  int v5; // r3

  if ( *((_DWORD *)a2 + 5) != 0 )
  {
    *((_DWORD *)a2 + 4) = this;
    *((_DWORD *)a2 + 9) = *((_DWORD *)this + 7);
    *((_DWORD *)a2 + 10) = 0;
    v5 = *((_DWORD *)this + 7);
    if ( v5 != 0 )
      *(_DWORD *)(v5 + 40) = a2;
    else
      *((_DWORD *)this + 6) = a2;
    *((_DWORD *)this + 7) = a2;
    return a2;
  }
  else
  {
    (*(void (__fastcall **)(TiXmlNode *))(*(_DWORD *)a2 + 4))(a2);
    result = (TiXmlNode *)TiXmlNode::GetDocument(this);
    if ( result != nullptr )
    {
      Document = TiXmlNode::GetDocument(this);
      TiXmlDocument::SetError(Document, 16, 0, nullptr, 0);
      return nullptr;
    }
  }
  return result;
}


//======================================================================
// TiXmlNode::InsertEndChild(TiXmlNode const&)
// address: 0x001DADB6   size: 0x3E (62 bytes)
//======================================================================
TiXmlNode *__fastcall TiXmlNode::InsertEndChild(TiXmlNode *this, const TiXmlNode *a2)
{
  int Document; // r0
  TiXmlNode *v5; // r1

  if ( *((_DWORD *)a2 + 5) == 0 )
  {
    if ( TiXmlNode::GetDocument(this) != 0 )
    {
      Document = TiXmlNode::GetDocument(this);
      TiXmlDocument::SetError(Document, 16, 0, nullptr, 0);
    }
    return nullptr;
  }
  v5 = (TiXmlNode *)(*(int (__fastcall **)(const TiXmlNode *))(*(_DWORD *)a2 + 64))(a2);
  if ( v5 == nullptr )
    return nullptr;
  return TiXmlNode::LinkEndChild(this, v5);
}


//======================================================================
// TiXmlNode::InsertBeforeChild(TiXmlNode*,TiXmlNode const&)
// address: 0x001DADF4   size: 0x58 (88 bytes)
//======================================================================
_DWORD *__fastcall TiXmlNode::InsertBeforeChild(TiXmlNode *this, TiXmlNode *a2, const TiXmlNode *a3)
{
  _DWORD *result; // r0
  TiXmlNode *v5; // r5
  int Document; // r0
  int v7; // r2

  if ( a2 == nullptr )
    return nullptr;
  v5 = *((TiXmlNode **)a2 + 4);
  if ( v5 != this )
    return nullptr;
  if ( *((_DWORD *)a3 + 5) == 0 )
  {
    if ( TiXmlNode::GetDocument(*((TiXmlNode **)a2 + 4)) != 0 )
    {
      Document = TiXmlNode::GetDocument(v5);
      TiXmlDocument::SetError(Document, 16, 0, nullptr, 0);
    }
    return nullptr;
  }
  result = (_DWORD *)(*(int (__fastcall **)(const TiXmlNode *))(*(_DWORD *)a3 + 64))(a3);
  if ( result == nullptr )
    return nullptr;
  result[4] = v5;
  result[10] = a2;
  result[9] = *((_DWORD *)a2 + 9);
  v7 = *((_DWORD *)a2 + 9);
  if ( v7 != 0 )
    *(_DWORD *)(v7 + 40) = result;
  else
    *((_DWORD *)v5 + 6) = result;
  *((_DWORD *)a2 + 9) = result;
  return result;
}


//======================================================================
// TiXmlNode::InsertAfterChild(TiXmlNode*,TiXmlNode const&)
// address: 0x001DAE4C   size: 0x58 (88 bytes)
//======================================================================
_DWORD *__fastcall TiXmlNode::InsertAfterChild(TiXmlNode *this, TiXmlNode *a2, const TiXmlNode *a3)
{
  _DWORD *result; // r0
  TiXmlNode *v5; // r5
  int Document; // r0
  int v7; // r2

  if ( a2 == nullptr )
    return nullptr;
  v5 = *((TiXmlNode **)a2 + 4);
  if ( v5 != this )
    return nullptr;
  if ( *((_DWORD *)a3 + 5) == 0 )
  {
    if ( TiXmlNode::GetDocument(*((TiXmlNode **)a2 + 4)) != 0 )
    {
      Document = TiXmlNode::GetDocument(v5);
      TiXmlDocument::SetError(Document, 16, 0, nullptr, 0);
    }
    return nullptr;
  }
  result = (_DWORD *)(*(int (__fastcall **)(const TiXmlNode *))(*(_DWORD *)a3 + 64))(a3);
  if ( result == nullptr )
    return nullptr;
  result[4] = v5;
  result[9] = a2;
  result[10] = *((_DWORD *)a2 + 10);
  v7 = *((_DWORD *)a2 + 10);
  if ( v7 != 0 )
    *(_DWORD *)(v7 + 36) = result;
  else
    *((_DWORD *)v5 + 7) = result;
  *((_DWORD *)a2 + 10) = result;
  return result;
}

