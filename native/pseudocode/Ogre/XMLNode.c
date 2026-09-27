// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::XMLNode

//======================================================================
// Ogre::XMLNode::getName(void)
// address: 0x001438A0   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::XMLNode::getName(Ogre::XMLNode *this)
{
  return *(_DWORD *)(*(_DWORD *)this + 32) + 8;
}


//======================================================================
// Ogre::XMLNode::getFullName(char *,unsigned int)
// address: 0x001438A8   size: 0xBA (186 bytes)
//======================================================================
char *__fastcall Ogre::XMLNode::getFullName(Ogre::XMLNode *this, char *a2, size_t a3)
{
  int v3; // r6
  _DWORD *i; // r6
  _DWORD *j; // r4
  _DWORD *v7; // r6
  int v9; // [sp+4h] [bp-20h]
  int v11; // [sp+Ch] [bp-18h]
  char *v12; // [sp+14h] [bp-10h] BYREF
  _DWORD v13[3]; // [sp+18h] [bp-Ch] BYREF

  v3 = *(_DWORD *)this;
  v13[0] = v13;
  v13[1] = v13;
  v12 = &byte_55FB88;
  while ( v3 != 0 )
  {
    sub_3BE508((int)&v12, (char *)(*(_DWORD *)(v3 + 32) + 8));
    v11 = v13[0];
    v9 = operator new(0xCu);
    if ( v9 != -8 )
      sub_3BEB1C(v9 + 8, &v12);
    sub_392244(v9, v11);
    v3 = *(_DWORD *)(v3 + 16);
  }
  sub_3BE508((int)&v12, (char *)&unk_3FB8EA);
  for ( i = (_DWORD *)v13[0]; i != v13; i = (_DWORD *)*i )
  {
    if ( *((_DWORD *)v12 - 3) != 0 )
      sub_3BE96C((int)&v12, ".");
    sub_3BE7F0(&v12, i + 2);
  }
  j_strncpy(a2, v12, a3);
  a2[a3 - 1] = 0;
  sub_3BDF80(&v12);
  for ( j = (_DWORD *)v13[0]; j != v13; j = v7 )
  {
    v7 = (_DWORD *)*j;
    sub_3BDF80(j + 2);
    operator delete(j);
  }
  return a2;
}


//======================================================================
// Ogre::XMLNode::getText(void)
// address: 0x00143970   size: 0x24 (36 bytes)
//======================================================================
int __fastcall Ogre::XMLNode::getText(Ogre::XMLNode *this)
{
  _DWORD *i; // r4
  int v2; // r0

  for ( i = *(_DWORD **)(*(_DWORD *)this + 24); i != nullptr; i = (_DWORD *)i[10] )
  {
    v2 = (*(int (__fastcall **)(_DWORD *))(*i + 32))(i);
    if ( v2 != 0 )
      return *(_DWORD *)(v2 + 32) + 8;
  }
  return 0;
}


//======================================================================
// Ogre::XMLNode::hasChild(char const*)
// address: 0x00143994   size: 0xE (14 bytes)
//======================================================================
bool __fastcall Ogre::XMLNode::hasChild(TiXmlNode **this, const char *a2)
{
  return TiXmlNode::FirstChildElement(*this, a2) != 0;
}


//======================================================================
// Ogre::XMLNode::getChild(char const*)
// address: 0x001439A2   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::XMLNode::getChild(TiXmlNode **this, const char *a2)
{
  return TiXmlNode::FirstChildElement(*this, a2);
}


//======================================================================
// Ogre::XMLNode::addChild(char const*)
// address: 0x001439AC   size: 0x20 (32 bytes)
//======================================================================
TiXmlElement *__fastcall Ogre::XMLNode::addChild(TiXmlNode **this, const char *a2)
{
  TiXmlElement *v4; // r4

  v4 = (TiXmlElement *)operator new(0x50u);
  TiXmlElement::TiXmlElement(v4, a2);
  TiXmlNode::LinkEndChild(*this, v4);
  return v4;
}


//======================================================================
// Ogre::XMLNode::eraseChild(Ogre::XMLNode)
// address: 0x001439CC   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::XMLNode::eraseChild(TiXmlNode **a1, TiXmlNode *a2)
{
  return TiXmlNode::RemoveChild(*a1, a2);
}


//======================================================================
// Ogre::XMLNode::getOrCreateChild(char const*)
// address: 0x001439D6   size: 0x18 (24 bytes)
//======================================================================
TiXmlElement *__fastcall Ogre::XMLNode::getOrCreateChild(TiXmlNode **this, const char *a2)
{
  TiXmlElement *result; // r0

  result = (TiXmlElement *)Ogre::XMLNode::getChild(this, a2);
  if ( result == nullptr )
    return Ogre::XMLNode::addChild(this, a2);
  return result;
}


//======================================================================
// Ogre::XMLNode::iterateChild(Ogre::XMLNode)
// address: 0x001439EE   size: 0x16 (22 bytes)
//======================================================================
int __fastcall Ogre::XMLNode::iterateChild(TiXmlNode **a1, TiXmlNode *a2)
{
  if ( a2 != nullptr )
    return TiXmlNode::NextSiblingElement(a2);
  else
    return TiXmlNode::FirstChildElement(*a1);
}


//======================================================================
// Ogre::XMLNode::iterateChild(void)
// address: 0x00143A04   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::XMLNode::iterateChild(TiXmlNode **this)
{
  return TiXmlNode::FirstChildElement(*this);
}


//======================================================================
// Ogre::XMLNode::hasAttrib(char const*)
// address: 0x00143A0E   size: 0xE (14 bytes)
//======================================================================
bool __fastcall Ogre::XMLNode::hasAttrib(TiXmlElement **this, const char *a2)
{
  return TiXmlElement::Attribute(*this, a2) != 0;
}


//======================================================================
// Ogre::XMLNode::attribToString(char const*)
// address: 0x00143A1C   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::XMLNode::attribToString(TiXmlElement **this, const char *a2)
{
  return TiXmlElement::Attribute(*this, a2);
}


//======================================================================
// Ogre::XMLNode::attribToInt(char const*)
// address: 0x00143A26   size: 0xE (14 bytes)
//======================================================================
int __fastcall Ogre::XMLNode::attribToInt(TiXmlElement **this, const char *a2, int a3)
{
  int v4[2]; // [sp+4h] [bp-8h] BYREF

  v4[0] = (int)a2;
  v4[1] = a3;
  TiXmlElement::QueryIntAttribute(*this, a2, v4);
  return v4[0];
}


//======================================================================
// Ogre::XMLNode::attribToFloat(char const*)
// address: 0x00143A34   size: 0xE (14 bytes)
//======================================================================
int __fastcall Ogre::XMLNode::attribToFloat(double this, unsigned int a2)
{
  unsigned __int64 v3; // [sp+4h] [bp-8h] BYREF

  v3 = __PAIR64__(a2, HIDWORD(this));
  LODWORD(this) = *(_DWORD *)LODWORD(this);
  TiXmlElement::QueryFloatAttribute(this, (float *)&v3);
  return v3;
}


//======================================================================
// Ogre::XMLNode::attribToBool(char const*)
// address: 0x00143A44   size: 0x18 (24 bytes)
//======================================================================
const char *__fastcall Ogre::XMLNode::attribToBool(TiXmlElement **this, const char *a2)
{
  const char *result; // r0

  result = (const char *)Ogre::XMLNode::attribToString(this, a2);
  if ( result != nullptr )
    return (const char *)(j_strcasecmp(result, "true") == 0);
  return result;
}


//======================================================================
// Ogre::XMLNode::attribToInt(char const*,int &)
// address: 0x00143A60   size: 0xE (14 bytes)
//======================================================================
bool __fastcall Ogre::XMLNode::attribToInt(TiXmlElement **this, const char *a2, int *a3)
{
  return TiXmlElement::QueryIntAttribute(*this, a2, a3) == 0;
}


//======================================================================
// Ogre::XMLNode::attribToFloat(char const*,float &)
// address: 0x00143A6E   size: 0xE (14 bytes)
//======================================================================
bool __fastcall Ogre::XMLNode::attribToFloat(double this, float *a2)
{
  LODWORD(this) = *(_DWORD *)LODWORD(this);
  return TiXmlElement::QueryFloatAttribute(this, a2) == 0;
}


//======================================================================
// Ogre::XMLNode::setAttribInt(char const*,int)
// address: 0x00143A7C   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::XMLNode::setAttribInt(TiXmlElement **this, const char *a2, int a3)
{
  return TiXmlElement::SetAttribute(*this, a2, a3);
}


//======================================================================
// Ogre::XMLNode::setAttribFloat(char const*,float)
// address: 0x00143A88   size: 0x42 (66 bytes)
//======================================================================
int __fastcall Ogre::XMLNode::setAttribFloat(TiXmlElement **this, const char *a2, float a3)
{
  char v6[256]; // [sp+4h] [bp-108h] BYREF

  j_sprintf(v6, "%f", a3);
  return TiXmlElement::SetAttribute(*this, a2, v6);
}


//======================================================================
// Ogre::XMLNode::setAttribBool(char const*,bool)
// address: 0x00143AD4   size: 0x18 (24 bytes)
//======================================================================
int __fastcall Ogre::XMLNode::setAttribBool(TiXmlElement **this, const char *a2, int a3)
{
  TiXmlElement *v3; // r0
  const char *v4; // r2

  v3 = *this;
  if ( a3 != 0 )
    v4 = "true";
  else
    v4 = "false";
  return TiXmlElement::SetAttribute(v3, a2, v4);
}


//======================================================================
// Ogre::XMLNode::setAttribStr(char const*,char const*)
// address: 0x00143AF4   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::XMLNode::setAttribStr(TiXmlElement **this, const char *a2, const char *a3)
{
  return TiXmlElement::SetAttribute(*this, a2, a3);
}

