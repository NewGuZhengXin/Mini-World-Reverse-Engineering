// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: TiXmlHandle

//======================================================================
// TiXmlHandle::FirstChild(void)const
// address: 0x001DBCE4   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall TiXmlHandle::FirstChild(_DWORD *this, int a2)
{
  int v2; // r3

  if ( *(_DWORD *)a2 == 0 || (v2 = *(_DWORD *)(*(_DWORD *)a2 + 24)) == 0 )
    v2 = 0;
  *this = v2;
  return this;
}


//======================================================================
// TiXmlHandle::FirstChild(char const*)const
// address: 0x001DBCF8   size: 0x20 (32 bytes)
//======================================================================
TiXmlHandle *__fastcall TiXmlHandle::FirstChild(TiXmlHandle *this, const char *a2, const char *a3)
{
  int Child; // r0

  if ( *(_DWORD *)a2 != 0 && (Child = TiXmlNode::FirstChild(*(TiXmlNode **)a2, a3)) != 0 )
    *(_DWORD *)this = Child;
  else
    *(_DWORD *)this = 0;
  return this;
}


//======================================================================
// TiXmlHandle::FirstChildElement(void)const
// address: 0x001DBD18   size: 0x1E (30 bytes)
//======================================================================
TiXmlHandle *__fastcall TiXmlHandle::FirstChildElement(TiXmlHandle *this, TiXmlNode **a2)
{
  int ChildElement; // r0

  if ( *a2 != nullptr && (ChildElement = TiXmlNode::FirstChildElement(*a2)) != 0 )
    *(_DWORD *)this = ChildElement;
  else
    *(_DWORD *)this = 0;
  return this;
}


//======================================================================
// TiXmlHandle::FirstChildElement(char const*)const
// address: 0x001DBD36   size: 0x20 (32 bytes)
//======================================================================
TiXmlHandle *__fastcall TiXmlHandle::FirstChildElement(TiXmlHandle *this, const char *a2, const char *a3)
{
  int ChildElement; // r0

  if ( *(_DWORD *)a2 != 0 && (ChildElement = TiXmlNode::FirstChildElement(*(TiXmlNode **)a2, a3)) != 0 )
    *(_DWORD *)this = ChildElement;
  else
    *(_DWORD *)this = 0;
  return this;
}


//======================================================================
// TiXmlHandle::Child(int)const
// address: 0x001DBD56   size: 0x20 (32 bytes)
//======================================================================
_DWORD *__fastcall TiXmlHandle::Child(_DWORD *this, int a2, int a3)
{
  int v3; // r3
  int v4; // r1

  if ( *(_DWORD *)a2 != 0 )
  {
    v3 = *(_DWORD *)(*(_DWORD *)a2 + 24);
    v4 = 0;
    while ( v3 != 0 )
    {
      if ( v4 >= a3 )
        goto LABEL_7;
      v3 = *(_DWORD *)(v3 + 40);
      ++v4;
    }
  }
  v3 = 0;
LABEL_7:
  *this = v3;
  return this;
}


//======================================================================
// TiXmlHandle::Child(char const*,int)const
// address: 0x001DBD76   size: 0x34 (52 bytes)
//======================================================================
TiXmlHandle *__fastcall TiXmlHandle::Child(TiXmlHandle *this, TiXmlNode **a2, char *a3, int a4)
{
  TiXmlNode *Child; // r0
  int v8; // r5

  if ( *a2 != nullptr )
  {
    Child = (TiXmlNode *)TiXmlNode::FirstChild(*a2, a3);
    v8 = 0;
    while ( Child != nullptr )
    {
      if ( v8 >= a4 )
      {
        *(_DWORD *)this = Child;
        return this;
      }
      Child = (TiXmlNode *)TiXmlNode::NextSibling(Child, a3);
      ++v8;
    }
  }
  *(_DWORD *)this = 0;
  return this;
}


//======================================================================
// TiXmlHandle::ChildElement(int)const
// address: 0x001DBDAA   size: 0x2E (46 bytes)
//======================================================================
TiXmlHandle *__fastcall TiXmlHandle::ChildElement(TiXmlHandle *this, TiXmlNode **a2, int a3)
{
  TiXmlNode *ChildElement; // r0
  int v6; // r5

  if ( *a2 != nullptr )
  {
    ChildElement = (TiXmlNode *)TiXmlNode::FirstChildElement(*a2);
    v6 = 0;
    while ( ChildElement != nullptr )
    {
      if ( v6 >= a3 )
      {
        *(_DWORD *)this = ChildElement;
        return this;
      }
      ChildElement = (TiXmlNode *)TiXmlNode::NextSiblingElement(ChildElement);
      ++v6;
    }
  }
  *(_DWORD *)this = 0;
  return this;
}


//======================================================================
// TiXmlHandle::ChildElement(char const*,int)const
// address: 0x001DBDD8   size: 0x34 (52 bytes)
//======================================================================
TiXmlHandle *__fastcall TiXmlHandle::ChildElement(TiXmlHandle *this, TiXmlNode **a2, char *a3, int a4)
{
  TiXmlNode *ChildElement; // r0
  int v8; // r5

  if ( *a2 != nullptr )
  {
    ChildElement = (TiXmlNode *)TiXmlNode::FirstChildElement(*a2, a3);
    v8 = 0;
    while ( ChildElement != nullptr )
    {
      if ( v8 >= a4 )
      {
        *(_DWORD *)this = ChildElement;
        return this;
      }
      ChildElement = (TiXmlNode *)TiXmlNode::NextSiblingElement(ChildElement, a3);
      ++v8;
    }
  }
  *(_DWORD *)this = 0;
  return this;
}

