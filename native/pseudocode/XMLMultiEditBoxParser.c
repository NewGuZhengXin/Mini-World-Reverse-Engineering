// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: XMLMultiEditBoxParser

//======================================================================
// XMLMultiEditBoxParser::XMLMultiEditBoxParser(void)
// address: 0x001B75CC   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN21XMLMultiEditBoxParserC1Ev'
void __fastcall XMLMultiEditBoxParser::XMLMultiEditBoxParser(XMLMultiEditBoxParser *this)
{
  XMLFrameParser::XMLFrameParser(this);
  *(_DWORD *)this = &off_458E78;
}


//======================================================================
// XMLMultiEditBoxParser::~XMLMultiEditBoxParser()
// address: 0x001B75E8   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN21XMLMultiEditBoxParserD1Ev'
void __fastcall XMLMultiEditBoxParser::~XMLMultiEditBoxParser(XMLMultiEditBoxParser *this)
{
  *(_DWORD *)this = &off_458E78;
  XMLFrameParser::~XMLFrameParser(this);
}


//======================================================================
// XMLMultiEditBoxParser::LoadUIObjectParam(UIObject *,Ogre::XMLNode,bool)
// address: 0x001B7604   size: 0x268 (616 bytes)
//======================================================================
int __fastcall XMLMultiEditBoxParser::LoadUIObjectParam(int a1, int a2, TiXmlNode *a3)
{
  int v5; // r7
  char *v6; // r0
  int v7; // r2
  int v8; // r7
  int v9; // r2
  int v10; // r7
  int v11; // r7
  char *v12; // r0
  TiXmlElement *i; // r0
  const char *Name; // r0
  int v15; // r2
  int v16; // r2
  int v17; // r2
  const char *v18; // r0
  int v19; // r2
  int v20; // r2
  int v21; // r2
  const char *v22; // r0
  int v23; // r2
  int v24; // r2
  int v25; // r2
  int v27; // [sp+0h] [bp-14h]
  int v28; // [sp+0h] [bp-14h]
  int v29; // [sp+0h] [bp-14h]
  int v30; // [sp+0h] [bp-14h]
  int v31; // [sp+0h] [bp-14h]
  int v32; // [sp+0h] [bp-14h]
  int v33; // [sp+0h] [bp-14h]
  int v34; // [sp+0h] [bp-14h]
  int v35; // [sp+0h] [bp-14h]
  TiXmlNode *v36[2]; // [sp+4h] [bp-10h] BYREF
  TiXmlElement *v37[2]; // [sp+Ch] [bp-8h] BYREF

  v36[0] = a3;
  XMLFrameParser::LoadUIObjectParam(a1, a2);
  *(_DWORD *)(a1 + 12) = a2;
  if ( Ogre::XMLNode::attribToString(v36, "slidername") != 0 )
  {
    v5 = *(_DWORD *)(a1 + 12);
    v6 = (char *)Ogre::XMLNode::attribToString(v36, "slidername");
    sub_3BE508(v5 + 412, v6);
  }
  if ( Ogre::XMLNode::attribToString(v36, "letters") != 0 )
  {
    v8 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(v8 + 416) = Ogre::XMLNode::attribToInt(v36, "letters", v7);
  }
  if ( Ogre::XMLNode::attribToString(v36, "lineInterval") != 0 )
  {
    v10 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(v10 + 436) = Ogre::XMLNode::attribToInt(v36, "lineInterval", v9);
  }
  v11 = 0;
  if ( Ogre::XMLNode::attribToString(v36, "fonttype") != 0 )
  {
    while ( v11 < (*(_DWORD *)(g_pFrameMgr + 148) - *(_DWORD *)(g_pFrameMgr + 144)) >> 5 )
    {
      v12 = (char *)Ogre::XMLNode::attribToString(v36, "fonttype");
      if ( sub_3BDD5C(*(_DWORD *)(g_pFrameMgr + 144) + 32 * v11, v12) == 0 )
      {
        *(_DWORD *)(*(_DWORD *)(a1 + 12) + 432) = v11;
        break;
      }
      ++v11;
    }
  }
  for ( i = (TiXmlElement *)Ogre::XMLNode::iterateChild(v36); ; i = (TiXmlElement *)Ogre::XMLNode::iterateChild(
                                                                                      v36,
                                                                                      v37[0]) )
  {
    v37[0] = i;
    if ( i == nullptr )
      break;
    Name = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)v37);
    if ( j_strcasecmp(Name, "editselcolor") == 0 )
    {
      if ( Ogre::XMLNode::attribToString(v37, (const char *)aRgb) != 0 )
      {
        v27 = *(_DWORD *)(a1 + 12);
        *(_BYTE *)(v27 + 422) = Ogre::XMLNode::attribToInt(v37, (const char *)aRgb, v15);
      }
      if ( Ogre::XMLNode::attribToString(v37, (const char *)&aRgb[1]) != 0 )
      {
        v28 = *(_DWORD *)(a1 + 12);
        *(_BYTE *)(v28 + 421) = Ogre::XMLNode::attribToInt(v37, (const char *)&aRgb[1], v16);
      }
      if ( Ogre::XMLNode::attribToString(v37, (const char *)&aRgb[2]) != 0 )
      {
        v29 = *(_DWORD *)(a1 + 12);
        *(_BYTE *)(v29 + 420) = Ogre::XMLNode::attribToInt(v37, (const char *)&aRgb[2], v17);
      }
    }
    v18 = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)v37);
    if ( j_strcasecmp(v18, "cursorcolor") == 0 )
    {
      if ( Ogre::XMLNode::attribToString(v37, (const char *)aRgb) != 0 )
      {
        v30 = *(_DWORD *)(a1 + 12);
        *(_BYTE *)(v30 + 426) = Ogre::XMLNode::attribToInt(v37, (const char *)aRgb, v19);
      }
      if ( Ogre::XMLNode::attribToString(v37, (const char *)&aRgb[1]) != 0 )
      {
        v31 = *(_DWORD *)(a1 + 12);
        *(_BYTE *)(v31 + 425) = Ogre::XMLNode::attribToInt(v37, (const char *)&aRgb[1], v20);
      }
      if ( Ogre::XMLNode::attribToString(v37, (const char *)&aRgb[2]) != 0 )
      {
        v32 = *(_DWORD *)(a1 + 12);
        *(_BYTE *)(v32 + 424) = Ogre::XMLNode::attribToInt(v37, (const char *)&aRgb[2], v21);
      }
    }
    v22 = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)v37);
    if ( j_strcasecmp(v22, "textcolor") == 0 )
    {
      if ( Ogre::XMLNode::attribToString(v37, (const char *)aRgb) != 0 )
      {
        v33 = *(_DWORD *)(a1 + 12);
        *(_BYTE *)(v33 + 430) = Ogre::XMLNode::attribToInt(v37, (const char *)aRgb, v23);
      }
      if ( Ogre::XMLNode::attribToString(v37, (const char *)&aRgb[1]) != 0 )
      {
        v34 = *(_DWORD *)(a1 + 12);
        *(_BYTE *)(v34 + 429) = Ogre::XMLNode::attribToInt(v37, (const char *)&aRgb[1], v24);
      }
      if ( Ogre::XMLNode::attribToString(v37, (const char *)&aRgb[2]) != 0 )
      {
        v35 = *(_DWORD *)(a1 + 12);
        *(_BYTE *)(v35 + 428) = Ogre::XMLNode::attribToInt(v37, (const char *)&aRgb[2], v25);
      }
    }
  }
  return 1;
}

