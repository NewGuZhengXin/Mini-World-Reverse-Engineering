// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: XMLIconBarParser

//======================================================================
// XMLIconBarParser::XMLIconBarParser(void)
// address: 0x001A5F9C   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN16XMLIconBarParserC1Ev'
void __fastcall XMLIconBarParser::XMLIconBarParser(XMLIconBarParser *this)
{
  XMLFrameParser::XMLFrameParser(this);
  *(_DWORD *)this = &off_458D98;
}


//======================================================================
// XMLIconBarParser::~XMLIconBarParser()
// address: 0x001A5FB8   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN16XMLIconBarParserD1Ev'
void __fastcall XMLIconBarParser::~XMLIconBarParser(XMLIconBarParser *this)
{
  *(_DWORD *)this = &off_458D98;
  XMLFrameParser::~XMLFrameParser(this);
}


//======================================================================
// XMLIconBarParser::LoadUIObjectParam(UIObject *,Ogre::XMLNode,bool)
// address: 0x001A5FD4   size: 0x1DA (474 bytes)
//======================================================================
int __fastcall XMLIconBarParser::LoadUIObjectParam(int a1, int a2, TiXmlNode *a3)
{
  int v5; // r2
  IconBar *v6; // r7
  int v7; // r0
  int v8; // r2
  int v9; // r7
  int v10; // r6
  int v11; // r1
  int v12; // r2
  int v13; // r7
  int v14; // r2
  int v15; // r7
  int v16; // r2
  int v17; // r7
  int v18; // r2
  int v19; // r7
  int v20; // r2
  int v21; // r7
  int v22; // r2
  int v23; // r7
  TiXmlElement *i; // r0
  const char *Name; // r0
  int v26; // r2
  int v27; // r2
  int v28; // r2
  int v29; // r7
  int v30; // r2
  int v31; // r0
  int v33; // [sp+Ch] [bp-20h]
  int v34; // [sp+Ch] [bp-20h]
  IconBar *v35; // [sp+10h] [bp-1Ch]
  IconBar *v36; // [sp+10h] [bp-1Ch]
  int v37; // [sp+14h] [bp-18h]
  int v38; // [sp+18h] [bp-14h]
  TiXmlNode *v39[2]; // [sp+1Ch] [bp-10h] BYREF
  TiXmlElement *v40[2]; // [sp+24h] [bp-8h] BYREF

  v39[0] = a3;
  XMLFrameParser::LoadUIObjectParam(a1, a2);
  *(_DWORD *)(a1 + 12) = a2;
  if ( Ogre::XMLNode::hasAttrib(v39, "iconnum") )
  {
    v6 = *(IconBar **)(a1 + 12);
    v7 = Ogre::XMLNode::attribToInt(v39, "iconnum", v5);
    IconBar::setIconNumber(v6, v7);
  }
  if ( Ogre::XMLNode::hasAttrib(v39, "direction") )
  {
    v9 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(v9 + 472) = Ogre::XMLNode::attribToInt(v39, "direction", v8);
  }
  if ( Ogre::XMLNode::hasAttrib(v39, "icontexture") )
  {
    v33 = *(_DWORD *)(a1 + 12);
    v10 = g_pDisplay;
    v35 = *(IconBar **)(*(_DWORD *)g_pDisplay + 72);
    v11 = Ogre::XMLNode::attribToString(v39, "icontexture");
    *(_DWORD *)(v33 + 412) = ((int (__fastcall *)(int, int, int, _DWORD, _DWORD, int))v35)(v10, v11, 2, 0, 0, 1);
  }
  if ( Ogre::XMLNode::hasAttrib(v39, "bgicon") )
  {
    v13 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(v13 + 440) = Ogre::XMLNode::attribToInt(v39, "bgicon", v12);
  }
  if ( Ogre::XMLNode::hasAttrib(v39, "disappear_icon") )
  {
    v15 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(v15 + 460) = Ogre::XMLNode::attribToInt(v39, "disappear_icon", v14);
  }
  if ( Ogre::XMLNode::hasAttrib(v39, "quantityicon1") )
  {
    v17 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(v17 + 444) = Ogre::XMLNode::attribToInt(v39, "quantityicon1", v16);
  }
  if ( Ogre::XMLNode::hasAttrib(v39, "quantityicon2") )
  {
    v19 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(v19 + 448) = Ogre::XMLNode::attribToInt(v39, "quantityicon2", v18);
  }
  if ( Ogre::XMLNode::hasAttrib(v39, "quantityicon3") )
  {
    v21 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(v21 + 452) = Ogre::XMLNode::attribToInt(v39, "quantityicon3", v20);
  }
  if ( Ogre::XMLNode::hasAttrib(v39, "quantityicon4") )
  {
    v23 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(v23 + 456) = Ogre::XMLNode::attribToInt(v39, "quantityicon4", v22);
  }
  for ( i = (TiXmlElement *)Ogre::XMLNode::iterateChild(v39); ; i = (TiXmlElement *)Ogre::XMLNode::iterateChild(
                                                                                      v39,
                                                                                      v40[0]) )
  {
    v40[0] = i;
    if ( i == nullptr )
      break;
    Name = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)v40);
    if ( j_strcasecmp(Name, "Icon") == 0 )
    {
      v34 = Ogre::XMLNode::attribToInt(v40, "id", v26);
      v36 = *(IconBar **)(a1 + 12);
      v37 = Ogre::XMLNode::attribToInt(v40, "x", (int)v36);
      v38 = Ogre::XMLNode::attribToInt(v40, "y", v27);
      v29 = Ogre::XMLNode::attribToInt(v40, "w", v28);
      v31 = Ogre::XMLNode::attribToInt(v40, "h", v30);
      IconBar::AddIcon(v36, v34, v37, v38, v29, v31);
    }
  }
  return 1;
}

