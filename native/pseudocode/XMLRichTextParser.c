// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: XMLRichTextParser

//======================================================================
// XMLRichTextParser::XMLRichTextParser(void)
// address: 0x001C08B4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN17XMLRichTextParserC2Ev'
void __fastcall XMLRichTextParser::XMLRichTextParser(XMLRichTextParser *this)
{
  XMLFrameParser::XMLFrameParser(this);
  *(_DWORD *)this = &off_459170;
}


//======================================================================
// XMLRichTextParser::~XMLRichTextParser()
// address: 0x001C08D0   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN17XMLRichTextParserD1Ev'
void __fastcall XMLRichTextParser::~XMLRichTextParser(XMLRichTextParser *this)
{
  *(_DWORD *)this = &off_459170;
  XMLFrameParser::~XMLFrameParser(this);
}


//======================================================================
// XMLRichTextParser::LoadUIObjectParam(UIObject *,Ogre::XMLNode,bool)
// address: 0x001C08EC   size: 0x2C6 (710 bytes)
//======================================================================
int __fastcall XMLRichTextParser::LoadUIObjectParam(int a1, int a2, TiXmlNode *a3)
{
  int v5; // r2
  int v6; // r7
  int v7; // r7
  int v8; // r2
  int v9; // r7
  const char *v10; // r0
  const char *v11; // r0
  const char *v12; // r0
  const char *v13; // r0
  char *v14; // r0
  char *v15; // r7
  int v16; // r2
  int *v17; // r6
  TiXmlElement *i; // r0
  const char *Name; // r0
  int v20; // r2
  const char *v21; // r0
  int v22; // r0
  int v23; // r2
  int v24; // r0
  int v25; // r2
  int v26; // r0
  int v27; // r2
  int UIFontByName; // [sp+4h] [bp-50h]
  int v30; // [sp+4h] [bp-50h]
  int v31; // [sp+4h] [bp-50h]
  int v32; // [sp+4h] [bp-50h]
  int v33; // [sp+4h] [bp-50h]
  int v34; // [sp+8h] [bp-4Ch]
  int v35; // [sp+8h] [bp-4Ch]
  int v36; // [sp+8h] [bp-4Ch]
  TiXmlNode *v37; // [sp+Ch] [bp-48h] BYREF
  char *v38; // [sp+10h] [bp-44h] BYREF
  _BYTE v39[24]; // [sp+14h] [bp-40h] BYREF
  int v40; // [sp+2Ch] [bp-28h]
  TiXmlElement *v41; // [sp+30h] [bp-24h] BYREF
  _BYTE v42[32]; // [sp+34h] [bp-20h] BYREF

  v37 = a3;
  XMLFrameParser::LoadUIObjectParam(a1, a2);
  *(_DWORD *)(a1 + 12) = a2;
  if ( Ogre::XMLNode::attribToString(&v37, "lineInterval") != 0 )
  {
    v6 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(v6 + 416) = Ogre::XMLNode::attribToInt(&v37, "lineInterval", v5);
  }
  if ( Ogre::XMLNode::attribToString(&v37, "autoextend") != 0 )
  {
    v7 = *(_DWORD *)(a1 + 12);
    *(_BYTE *)(v7 + 472) = (unsigned __int8)Ogre::XMLNode::attribToBool(&v37, "autoextend");
  }
  if ( Ogre::XMLNode::attribToString(&v37, "maxlines") != 0 )
  {
    v9 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(v9 + 440) = Ogre::XMLNode::attribToInt(&v37, "maxlines", v8);
  }
  if ( Ogre::XMLNode::attribToString(&v37, "fontStyle") != 0 )
  {
    v10 = (const char *)Ogre::XMLNode::attribToString(&v37, "fontStyle");
    if ( j_strcasecmp(v10, "normal") == 0 )
      *(_DWORD *)(*(_DWORD *)(a1 + 12) + 412) = 0;
    v11 = (const char *)Ogre::XMLNode::attribToString(&v37, "fontStyle");
    if ( j_strcasecmp(v11, "shadow") == 0 )
      *(_DWORD *)(*(_DWORD *)(a1 + 12) + 412) = 1;
    v12 = (const char *)Ogre::XMLNode::attribToString(&v37, "fontStyle");
    if ( j_strcasecmp(v12, "border") == 0 )
      *(_DWORD *)(*(_DWORD *)(a1 + 12) + 412) = 2;
    v13 = (const char *)Ogre::XMLNode::attribToString(&v37, "fontStyle");
    if ( j_strcasecmp(v13, "embolden") == 0 )
      *(_DWORD *)(*(_DWORD *)(a1 + 12) + 412) = 3;
  }
  v14 = (char *)Ogre::XMLNode::attribToString(&v37, "fonttype");
  v15 = v14;
  if ( v14 != nullptr )
  {
    UIFontByName = FrameManager::getUIFontByName((FrameManager *)g_pFrameMgr, v14);
    if ( UIFontByName != 0 )
    {
      v34 = *(_DWORD *)(a1 + 12);
      *(_DWORD *)(v34 + 420) = FrameManager::getUIFontIndexByName((FrameManager *)g_pFrameMgr, v15);
      UIFont::UIFont((int)&v38, UIFontByName);
      sub_3BEB1C(&v41, &v38);
      sub_3BE948((int)&v41, "_link");
      sub_3BEBBC(&v38);
      sub_3BDF80(&v41);
      v16 = *(_DWORD *)(a1 + 12);
      v40 |= 2u;
      *(_DWORD *)(v16 + 424) = FrameManager::getUIFontIndexByName((FrameManager *)g_pFrameMgr, v38);
      v35 = *(_DWORD *)(a1 + 12);
      if ( *(int *)(v35 + 424) < 0 )
      {
        v17 = (int *)g_pFrameMgr;
        UIFont::UIFont((int)&v41, (int)&v38);
        *(_DWORD *)(v35 + 424) = FrameManager::AddGameFont(v17, (int)&v41);
        sub_3BDF80(v42);
        sub_3BDF80(&v41);
      }
      sub_3BDF80(v39);
      sub_3BDF80(&v38);
    }
  }
  for ( i = (TiXmlElement *)Ogre::XMLNode::iterateChild(&v37); ; i = (TiXmlElement *)Ogre::XMLNode::iterateChild(
                                                                                       &v37,
                                                                                       v41) )
  {
    v41 = i;
    if ( i == nullptr )
      break;
    Name = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)&v41);
    if ( j_strcasecmp(Name, "ShadowColor") == 0 )
    {
      if ( Ogre::XMLNode::attribToString(&v41, (const char *)aRgb) != 0 )
      {
        v30 = *(_DWORD *)(a1 + 12);
        *(_BYTE *)(v30 + 430) = Ogre::XMLNode::attribToInt(&v41, (const char *)aRgb, v20);
      }
      if ( Ogre::XMLNode::attribToString(&v41, (const char *)&aRgb[1]) != 0 )
      {
        v31 = *(_DWORD *)(a1 + 12);
        *(_BYTE *)(v31 + 429) = Ogre::XMLNode::attribToInt(&v41, (const char *)&aRgb[1], v31);
      }
      if ( Ogre::XMLNode::attribToString(&v41, (const char *)&aRgb[2]) != 0 )
      {
        v32 = *(_DWORD *)(a1 + 12);
        *(_BYTE *)(v32 + 428) = Ogre::XMLNode::attribToInt(&v41, (const char *)&aRgb[2], v32);
      }
    }
    v21 = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)&v41);
    if ( j_strcasecmp(v21, "LinkColor") == 0 )
    {
      v22 = Ogre::XMLNode::attribToString(&v41, (const char *)aRgb);
      if ( v22 != 0 )
        v22 = Ogre::XMLNode::attribToInt(&v41, (const char *)aRgb, v23);
      v33 = v22;
      v24 = Ogre::XMLNode::attribToString(&v41, (const char *)&aRgb[1]);
      if ( v24 != 0 )
        v24 = Ogre::XMLNode::attribToInt(&v41, (const char *)&aRgb[1], v25);
      v36 = v24;
      v26 = Ogre::XMLNode::attribToString(&v41, (const char *)&aRgb[2]);
      if ( v26 != 0 )
        v26 = Ogre::XMLNode::attribToInt(&v41, (const char *)&aRgb[2], v27);
      RichText::SetLinkTextColor(*(RichText **)(a1 + 12), v33, v36, v26);
    }
  }
  return 1;
}

