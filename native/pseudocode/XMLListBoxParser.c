// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: XMLListBoxParser

//======================================================================
// XMLListBoxParser::XMLListBoxParser(void)
// address: 0x001C2B10   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN16XMLListBoxParserC2Ev'
void __fastcall XMLListBoxParser::XMLListBoxParser(XMLListBoxParser *this)
{
  XMLFrameParser::XMLFrameParser(this);
  *(_DWORD *)this = &off_459220;
}


//======================================================================
// XMLListBoxParser::~XMLListBoxParser()
// address: 0x001C2B2C   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN16XMLListBoxParserD1Ev'
void __fastcall XMLListBoxParser::~XMLListBoxParser(XMLListBoxParser *this)
{
  *(_DWORD *)this = &off_459220;
  XMLFrameParser::~XMLFrameParser(this);
}


//======================================================================
// XMLListBoxParser::LoadUIObjectParam(UIObject *,Ogre::XMLNode,bool)
// address: 0x001C2B48   size: 0x134 (308 bytes)
//======================================================================
int __fastcall XMLListBoxParser::LoadUIObjectParam(int a1, int a2, TiXmlNode *a3)
{
  ListBox *v5; // r6
  char *v6; // r0
  int v7; // r6
  int v8; // r2
  int v9; // r0
  int v10; // r6
  int v11; // r2
  int v12; // r0
  int v13; // r6
  TiXmlElement *v14; // r6
  UIObject *v15; // r0
  char *Name; // r0
  XMLUIObjectParser *v17; // r7
  XMLUIObjectParser *v18; // r4
  XMLUIObjectParser *v19; // r7
  _BYTE *v21; // [sp+0h] [bp-24h]
  TiXmlNode *v22; // [sp+4h] [bp-20h] BYREF
  _BYTE v23[4]; // [sp+Ch] [bp-18h] BYREF
  TiXmlNode *Child; // [sp+10h] [bp-14h] BYREF
  UIObject *v25; // [sp+14h] [bp-10h] BYREF
  XMLUIObjectParser *v26; // [sp+18h] [bp-Ch] BYREF
  _BYTE v27[8]; // [sp+1Ch] [bp-8h] BYREF

  v22 = a3;
  XMLFrameParser::LoadUIObjectParam(a1, a2);
  *(_DWORD *)(a1 + 12) = a2;
  v21 = v23;
  sub_3BEB1C(v23, a2 + 8);
  v5 = *(ListBox **)(a1 + 12);
  v6 = (char *)Ogre::XMLNode::attribToString(&v22, "itemtemplate");
  ListBox::SetItemTemplate(v5, v6);
  v7 = *(_DWORD *)(a1 + 12);
  v9 = Ogre::XMLNode::attribToInt(&v22, "itemheight", v8);
  ListBox::SetItemHeight(v7, v9);
  v10 = *(_DWORD *)(a1 + 12);
  v12 = Ogre::XMLNode::attribToInt(&v22, "headerheight", v11);
  ListBox::SetGroupHeaderHeight(v10, v12);
  v13 = 1;
  if ( Ogre::XMLNode::hasChild(&v22, "GroupHeaders") )
  {
    Child = (TiXmlNode *)Ogre::XMLNode::getChild(&v22, "GroupHeaders");
    v14 = (TiXmlElement *)Ogre::XMLNode::iterateChild(&Child);
    while ( v14 != nullptr )
    {
      v15 = *(UIObject **)(a1 + 12);
      v25 = nullptr;
      v26 = nullptr;
      Name = (char *)UIObject::GetName(v15);
      sub_3BF0BC((int)v27, Name);
      XMLManager::CreateObjectByType(v14, (const char **)&v25, &v26);
      sub_3BDF80(v27);
      v17 = v26;
      if ( v25 == nullptr )
      {
        if ( v26 != nullptr )
        {
          XMLUIObjectParser::~XMLUIObjectParser(v26);
          operator delete(v17);
        }
LABEL_13:
        v13 = 0;
        goto LABEL_15;
      }
      if ( (**(int (__fastcall ***)(XMLUIObjectParser *, UIObject *, TiXmlElement *, _DWORD, _BYTE *, TiXmlNode *))v26)(
             v26,
             v25,
             v14,
             *((unsigned __int8 *)v25 + 4),
             v21,
             v22) == 0 )
      {
        v18 = v26;
        if ( v26 != nullptr )
        {
          XMLUIObjectParser::~XMLUIObjectParser(v26);
          operator delete(v18);
        }
        UIObject::release(v25);
        goto LABEL_13;
      }
      ListBox::AddGroup(*(ListBox **)(a1 + 12), v25);
      v14 = (TiXmlElement *)Ogre::XMLNode::iterateChild(&v22, v14);
      UIObject::release(v25);
      v19 = v26;
      if ( v26 != nullptr )
      {
        XMLUIObjectParser::~XMLUIObjectParser(v26);
        operator delete(v19);
      }
    }
    v13 = 1;
  }
LABEL_15:
  sub_3BDF80(v23);
  return v13;
}

