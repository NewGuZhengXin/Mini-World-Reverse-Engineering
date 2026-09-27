// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: XMLFontStringParser

//======================================================================
// XMLFontStringParser::XMLFontStringParser(void)
// address: 0x001BC9F4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN19XMLFontStringParserC2Ev'
void __fastcall XMLFontStringParser::XMLFontStringParser(XMLFontStringParser *this)
{
  XMLLayoutFrameParser::XMLLayoutFrameParser(this);
  *(_DWORD *)this = &off_459050;
}


//======================================================================
// XMLFontStringParser::~XMLFontStringParser()
// address: 0x001BCA10   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN19XMLFontStringParserD1Ev'
void __fastcall XMLFontStringParser::~XMLFontStringParser(XMLFontStringParser *this)
{
  *(_DWORD *)this = &off_459050;
  XMLLayoutFrameParser::~XMLLayoutFrameParser(this);
}


//======================================================================
// XMLFontStringParser::LoadUIObjectParam(UIObject *,Ogre::XMLNode,bool)
// address: 0x001BCA2C   size: 0x286 (646 bytes)
//======================================================================
int __fastcall XMLFontStringParser::LoadUIObjectParam(int a1, LayoutFrame *a2, TiXmlNode *a3)
{
  char *v5; // r7
  const char *v6; // r0
  const char *v7; // r0
  int v8; // r7
  unsigned int v9; // r2
  double v10; // r0
  int v11; // r7
  unsigned int v12; // r2
  double v13; // r0
  int v14; // r7
  int v15; // r7
  char *v16; // r0
  FontString *v17; // r6
  const char *v18; // r0
  const char *v19; // r0
  const char *v20; // r0
  const char *v21; // r0
  const char *v22; // r0
  const char *v23; // r0
  TiXmlElement *i; // r0
  const char *Name; // r0
  int v26; // r2
  int v27; // r2
  int v28; // r2
  int v30; // [sp+0h] [bp-14h]
  int v31; // [sp+0h] [bp-14h]
  int v32; // [sp+0h] [bp-14h]
  int v33; // [sp+0h] [bp-14h]
  TiXmlNode *v34[2]; // [sp+4h] [bp-10h] BYREF
  TiXmlElement *v35[2]; // [sp+Ch] [bp-8h] BYREF

  v34[0] = a3;
  XMLLayoutFrameParser::LoadUIObjectParam(a1, a2, a3);
  *(_DWORD *)(a1 + 8) = a2;
  v5 = (char *)Ogre::XMLNode::attribToString(v34, "fonttype");
  if ( FrameManager::getUIFontByName((FrameManager *)g_pFrameMgr, v5) != 0 )
  {
    v30 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(v30 + 228) = FrameManager::getUIFontIndexByName((FrameManager *)g_pFrameMgr, v5);
    sub_3BE508(*(_DWORD *)(a1 + 8) + 232, v5);
  }
  *(_DWORD *)(*(_DWORD *)(a1 + 8) + 272) = 0;
  if ( Ogre::XMLNode::attribToString(v34, "fontStyle") != 0 )
  {
    v6 = (const char *)Ogre::XMLNode::attribToString(v34, "fontStyle");
    if ( j_strcasecmp(v6, "shadow") == 0 )
      *(_DWORD *)(*(_DWORD *)(a1 + 8) + 272) = 1;
    v7 = (const char *)Ogre::XMLNode::attribToString(v34, "fontStyle");
    if ( j_strcasecmp(v7, "border") == 0 )
      *(_DWORD *)(*(_DWORD *)(a1 + 8) + 272) = 2;
  }
  if ( Ogre::XMLNode::attribToString(v34, "autowrap") != 0 )
  {
    v8 = *(_DWORD *)(a1 + 8);
    *(_BYTE *)(v8 + 288) = (unsigned __int8)Ogre::XMLNode::attribToBool(v34, "autowrap");
  }
  if ( Ogre::XMLNode::attribToString(v34, "lineInterval") != 0 )
  {
    LODWORD(v10) = v34;
    HIDWORD(v10) = "lineInterval";
    v11 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(v11 + 276) = Ogre::XMLNode::attribToFloat(v10, v9);
  }
  if ( Ogre::XMLNode::attribToString(v34, "angle") != 0 )
  {
    LODWORD(v13) = v34;
    HIDWORD(v13) = "angle";
    v14 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(v14 + 328) = Ogre::XMLNode::attribToFloat(v13, v12);
  }
  if ( Ogre::XMLNode::attribToString(v34, "text") != 0 )
  {
    if ( Ogre::XMLNode::attribToString(v34, "name") != 0 )
    {
      v15 = *(_DWORD *)(a1 + 8);
      v16 = (char *)Ogre::XMLNode::attribToString(v34, "name");
      UIObject::SetName(v15, v16);
    }
    v17 = *(FontString **)(a1 + 8);
    v18 = (const char *)Ogre::XMLNode::attribToString(v34, "text");
    FontString::SetText(v17, v18);
  }
  if ( Ogre::XMLNode::hasAttrib(v34, "textcolor") )
  {
    v19 = (const char *)Ogre::XMLNode::attribToString(v34, "textcolor");
    j_sscanf(v19, "%X", *(_DWORD *)(a1 + 8) + 236);
  }
  if ( Ogre::XMLNode::hasAttrib(v34, "shadowcolor") )
  {
    v20 = (const char *)Ogre::XMLNode::attribToString(v34, "shadowcolor");
    j_sscanf(v20, "%X", *(_DWORD *)(a1 + 8) + 240);
  }
  if ( Ogre::XMLNode::attribToString(v34, "justifyH") != 0 )
  {
    v21 = (const char *)Ogre::XMLNode::attribToString(v34, "justifyH");
    if ( j_strcasecmp(v21, "LEFT") == 0 )
      *(_DWORD *)(*(_DWORD *)(a1 + 8) + 264) = 0;
    v22 = (const char *)Ogre::XMLNode::attribToString(v34, "justifyH");
    if ( j_strcasecmp(v22, "CENTER") == 0 )
      *(_DWORD *)(*(_DWORD *)(a1 + 8) + 264) = 1;
    v23 = (const char *)Ogre::XMLNode::attribToString(v34, "justifyH");
    if ( j_strcasecmp(v23, "RIGHT") == 0 )
      *(_DWORD *)(*(_DWORD *)(a1 + 8) + 264) = 2;
  }
  for ( i = (TiXmlElement *)Ogre::XMLNode::iterateChild(v34); ; i = (TiXmlElement *)Ogre::XMLNode::iterateChild(
                                                                                      v34,
                                                                                      v35[0]) )
  {
    v35[0] = i;
    if ( i == nullptr )
      break;
    Name = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)v35);
    if ( j_strcasecmp(Name, "Color") == 0 )
    {
      if ( Ogre::XMLNode::attribToString(v35, (const char *)aRgb) != 0 )
      {
        v31 = *(_DWORD *)(a1 + 8);
        *(_BYTE *)(v31 + 238) = Ogre::XMLNode::attribToInt(v35, (const char *)aRgb, v26);
      }
      if ( Ogre::XMLNode::attribToString(v35, (const char *)&aRgb[1]) != 0 )
      {
        v32 = *(_DWORD *)(a1 + 8);
        *(_BYTE *)(v32 + 237) = Ogre::XMLNode::attribToInt(v35, (const char *)&aRgb[1], v27);
      }
      if ( Ogre::XMLNode::attribToString(v35, (const char *)&aRgb[2]) != 0 )
      {
        v33 = *(_DWORD *)(a1 + 8);
        *(_BYTE *)(v33 + 236) = Ogre::XMLNode::attribToInt(v35, (const char *)&aRgb[2], v28);
      }
    }
  }
  return 1;
}

