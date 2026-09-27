// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: XMLDrawLineFrameParser

//======================================================================
// XMLDrawLineFrameParser::XMLDrawLineFrameParser(void)
// address: 0x001CA248   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN22XMLDrawLineFrameParserC2Ev'
void __fastcall XMLDrawLineFrameParser::XMLDrawLineFrameParser(XMLDrawLineFrameParser *this)
{
  XMLLayoutFrameParser::XMLLayoutFrameParser(this);
  *(_DWORD *)this = &off_459548;
}


//======================================================================
// XMLDrawLineFrameParser::~XMLDrawLineFrameParser()
// address: 0x001CA264   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN22XMLDrawLineFrameParserD2Ev'
void __fastcall XMLDrawLineFrameParser::~XMLDrawLineFrameParser(XMLDrawLineFrameParser *this)
{
  *(_DWORD *)this = &off_459548;
  XMLLayoutFrameParser::~XMLLayoutFrameParser(this);
}


//======================================================================
// XMLDrawLineFrameParser::LoadUIObjectParam(UIObject *,Ogre::XMLNode,bool)
// address: 0x001CA280   size: 0x186 (390 bytes)
//======================================================================
int __fastcall XMLDrawLineFrameParser::LoadUIObjectParam(int a1, LayoutFrame *a2, TiXmlNode *a3)
{
  TiXmlElement *v5; // r0
  int v6; // r2
  int v7; // r7
  int v8; // r0
  int v9; // r6
  int v10; // r2
  int v11; // r7
  int v12; // r2
  int v13; // r7
  int v14; // r2
  int v15; // r7
  int v16; // r2
  int v17; // r7
  const char *Name; // r0
  int v19; // r2
  int (__fastcall *v21)(int, int, int, int, int, int); // [sp+8h] [bp-14h]
  int v22; // [sp+8h] [bp-14h]
  int v23; // [sp+8h] [bp-14h]
  int v24; // [sp+8h] [bp-14h]
  TiXmlNode *v25[2]; // [sp+Ch] [bp-10h] BYREF
  TiXmlElement *v26[2]; // [sp+14h] [bp-8h] BYREF

  v25[0] = a3;
  XMLLayoutFrameParser::LoadUIObjectParam(a1, a2, a3);
  v5 = (TiXmlElement *)Ogre::XMLNode::iterateChild(v25);
  *(_DWORD *)(a1 + 8) = a2;
  *((_DWORD *)a2 + 59) = 0;
  v6 = *(_DWORD *)(a1 + 8);
  v26[0] = v5;
  *(_DWORD *)(v6 + 240) = 0;
  *(_DWORD *)(*(_DWORD *)(a1 + 8) + 244) = 0;
  *(_DWORD *)(*(_DWORD *)(a1 + 8) + 248) = 0;
  if ( Ogre::XMLNode::attribToString(v25, "file") != 0 )
  {
    v7 = g_pDisplay;
    v21 = *(int (__fastcall **)(int, int, int, int, int, int))(*(_DWORD *)g_pDisplay + 72);
    v8 = Ogre::XMLNode::attribToString(v25, "file");
    v9 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(v9 + 232) = v21(v7, v8, 2, v9 + 244, v9 + 248, 1);
  }
  if ( Ogre::XMLNode::hasAttrib(v25, "x") )
  {
    v11 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(v11 + 236) = Ogre::XMLNode::attribToInt(v25, "x", v10);
  }
  if ( Ogre::XMLNode::hasAttrib(v25, "y") )
  {
    v13 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(v13 + 240) = Ogre::XMLNode::attribToInt(v25, "y", v12);
  }
  if ( Ogre::XMLNode::hasAttrib(v25, "w") )
  {
    v15 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(v15 + 244) = Ogre::XMLNode::attribToInt(v25, "w", v14);
  }
  if ( Ogre::XMLNode::hasAttrib(v25, "h") )
  {
    v17 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(v17 + 248) = Ogre::XMLNode::attribToInt(v25, "h", v16);
  }
  while ( v26[0] != nullptr )
  {
    Name = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)v26);
    if ( j_strcasecmp(Name, "Color") == 0 )
    {
      if ( Ogre::XMLNode::attribToString(v26, (const char *)aRgb) != 0 )
      {
        v22 = *(_DWORD *)(a1 + 8);
        *(_BYTE *)(v22 + 230) = Ogre::XMLNode::attribToInt(v26, (const char *)aRgb, v22);
      }
      if ( Ogre::XMLNode::attribToString(v26, (const char *)&aRgb[1]) != 0 )
      {
        v23 = *(_DWORD *)(a1 + 8);
        *(_BYTE *)(v23 + 229) = Ogre::XMLNode::attribToInt(v26, (const char *)&aRgb[1], v19);
      }
      if ( Ogre::XMLNode::attribToString(v26, (const char *)&aRgb[2]) != 0 )
      {
        v24 = *(_DWORD *)(a1 + 8);
        *(_BYTE *)(v24 + 228) = Ogre::XMLNode::attribToInt(v26, (const char *)&aRgb[2], v24);
      }
    }
    v26[0] = (TiXmlElement *)Ogre::XMLNode::iterateChild(v25, v26[0]);
  }
  return 1;
}

