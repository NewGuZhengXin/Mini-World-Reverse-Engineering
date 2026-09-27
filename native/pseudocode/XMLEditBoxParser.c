// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: XMLEditBoxParser

//======================================================================
// XMLEditBoxParser::XMLEditBoxParser(void)
// address: 0x001A6F38   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN16XMLEditBoxParserC1Ev'
void __fastcall XMLEditBoxParser::XMLEditBoxParser(XMLEditBoxParser *this)
{
  XMLFrameParser::XMLFrameParser(this);
  *(_DWORD *)this = &off_458DF8;
}


//======================================================================
// XMLEditBoxParser::~XMLEditBoxParser()
// address: 0x001A6F54   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN16XMLEditBoxParserD1Ev'
void __fastcall XMLEditBoxParser::~XMLEditBoxParser(XMLEditBoxParser *this)
{
  *(_DWORD *)this = &off_458DF8;
  XMLFrameParser::~XMLFrameParser(this);
}


//======================================================================
// XMLEditBoxParser::LoadUIObjectParam(UIObject *,Ogre::XMLNode,bool)
// address: 0x001A6F70   size: 0x2B6 (694 bytes)
//======================================================================
int __fastcall XMLEditBoxParser::LoadUIObjectParam(int a1, int a2, TiXmlNode *a3, int a4)
{
  int v5; // r2
  int v6; // r7
  int v7; // r2
  int v8; // r7
  int v9; // r7
  int v10; // r2
  int v11; // r7
  const char *v12; // r0
  int v13; // r0
  _BYTE *v14; // r1
  _BYTE *v15; // r2
  int v16; // r3
  int v17; // r3
  char *v18; // r0
  const char *Name; // r0
  XMLFontStringParser *v20; // r5
  int v21; // r6
  int v22; // r6
  int v25; // [sp+4h] [bp-30h]
  UIObject *v26; // [sp+Ch] [bp-28h]
  int v27; // [sp+10h] [bp-24h]
  FrameManager *v29; // [sp+18h] [bp-1Ch]
  TiXmlNode *v30[2]; // [sp+1Ch] [bp-18h] BYREF
  _BYTE v31[4]; // [sp+24h] [bp-10h] BYREF
  TiXmlElement *v32; // [sp+28h] [bp-Ch] BYREF
  char *v33[2]; // [sp+2Ch] [bp-8h] BYREF

  v30[0] = a3;
  XMLFrameParser::LoadUIObjectParam(a1, a2);
  *(_DWORD *)(a1 + 12) = a2;
  if ( Ogre::XMLNode::attribToString(v30, "letters") != 0 )
  {
    v6 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(v6 + 420) = Ogre::XMLNode::attribToInt(v30, "letters", v5);
  }
  if ( Ogre::XMLNode::attribToString(v30, "historyLines") != 0 )
  {
    v8 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(v8 + 428) = Ogre::XMLNode::attribToInt(v30, "historyLines", v7);
  }
  if ( Ogre::XMLNode::attribToString(v30, "multiLine") != 0 )
  {
    v9 = *(_DWORD *)(a1 + 12);
    *(_BYTE *)(v9 + 424) = (unsigned __int8)Ogre::XMLNode::attribToBool(v30, "multiLine");
  }
  if ( Ogre::XMLNode::attribToBool(v30, "password") != nullptr )
    *(_DWORD *)(*(_DWORD *)(a1 + 12) + 432) |= 0x20u;
  if ( Ogre::XMLNode::attribToString(v30, "editMethod") != 0 )
  {
    v11 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(v11 + 432) = Ogre::XMLNode::attribToInt(v30, "editMethod", v10);
  }
  if ( Ogre::XMLNode::hasAttrib(v30, "cursorColor") )
  {
    v12 = (const char *)Ogre::XMLNode::attribToString(v30, "cursorColor");
    v13 = XMLParserColorQuad(v12);
    EditBox::SetCursorColor(*(EditBox **)(a1 + 12), (unsigned int)(v13 << 8) >> 24, BYTE1(v13), (unsigned __int8)v13);
  }
  sub_3BEB1C(v31, a2 + 8);
  v27 = *(_DWORD *)(a1 + 12);
  v26 = *(UIObject **)(v27 + 412);
  if ( v26 != nullptr )
  {
    sub_3BEB1C(v33, v31);
    sub_3BE948((int)v33, "FontString");
    UIObject::SetName(v26, v33[0]);
    sub_3BDF80(v33);
    sub_3BE508(*(_DWORD *)(*(_DWORD *)(a1 + 12) + 412) + 132, "$parent");
  }
  else
  {
    v29 = (FrameManager *)g_pFrameMgr;
    sub_3BEB1C(v33, v31);
    sub_3BE948((int)v33, "FontString");
    *(_DWORD *)(v27 + 412) = FrameManager::CreateObject(v29, "FontString", v33[0], nullptr);
    sub_3BDF80(v33);
    sub_3BEBBC(*(_DWORD *)(*(_DWORD *)(a1 + 12) + 412) + 132);
    UIObject::SetName(*(UIObject **)(*(_DWORD *)(a1 + 12) + 412), (const char *)&unk_3FB8EA);
    LayoutFrame::DrawShow(*(LayoutFrame **)(*(_DWORD *)(a1 + 12) + 412), true);
    v14 = (_BYTE *)(*(_DWORD *)(*(_DWORD *)(a1 + 12) + 412) + 236);
    v15 = (_BYTE *)(*(_DWORD *)(*(_DWORD *)(a1 + 12) + 412) + 239);
    *v14 = -1;
    v14[1] = -1;
    v14[2] = -1;
    *v15 = -1;
  }
  v16 = *(_DWORD *)(*(_DWORD *)(a1 + 12) + 412);
  *(_BYTE *)(v16 + 112) = *(_BYTE *)(a2 + 112);
  *(_BYTE *)(v16 + 113) = *(_BYTE *)(a2 + 113);
  *(_DWORD *)(v16 + 116) = *(_DWORD *)(a2 + 116);
  *(_DWORD *)(v16 + 120) = *(_DWORD *)(a2 + 120);
  v17 = *(_DWORD *)(*(_DWORD *)(a1 + 12) + 412);
  *(_DWORD *)(v17 + 128) = 0;
  *(_DWORD *)(v17 + 124) = 0;
  LayoutDim::SetAbsDim((LayoutDim *)(*(_DWORD *)(*(_DWORD *)(a1 + 12) + 412) + 136), 0, 0);
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 12) + 412) + 44) = *(_DWORD *)(*(_DWORD *)(a1 + 12) + 44);
  v32 = (TiXmlElement *)Ogre::XMLNode::iterateChild(v30);
  while ( v32 != nullptr )
  {
    v33[0] = &byte_55FB88;
    if ( Ogre::XMLNode::attribToString(&v32, "name") != 0 )
    {
      v18 = (char *)Ogre::XMLNode::attribToString(&v32, "name");
      sub_3BE508((int)v33, v18);
    }
    Name = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)&v32);
    if ( j_strcasecmp(Name, "FontString") == 0 )
    {
      v20 = (XMLFontStringParser *)operator new(0xCu);
      XMLFontStringParser::XMLFontStringParser(v20);
      v25 = *(_DWORD *)(*(_DWORD *)(a1 + 12) + 412);
      if ( Ogre::XMLNode::hasAttrib(&v32, "default") )
      {
        v21 = *(_DWORD *)(a1 + 12);
        *(_DWORD *)(v21 + 416) = (***(int (__fastcall ****)(_DWORD))(v21 + 412))(*(_DWORD *)(v21 + 412));
        v25 = *(_DWORD *)(*(_DWORD *)(a1 + 12) + 416);
      }
      v22 = (**(int (__fastcall ***)(XMLFontStringParser *, int, TiXmlElement *, int))v20)(v20, v25, v32, a4);
      if ( v22 == 0 )
      {
        sub_3BDF80(v33);
        goto LABEL_28;
      }
      XMLUIObjectParser::~XMLUIObjectParser(v20);
      operator delete(v20);
    }
    v32 = (TiXmlElement *)Ogre::XMLNode::iterateChild(v30, v32);
    sub_3BDF80(v33);
  }
  v22 = 1;
LABEL_28:
  sub_3BDF80(v31);
  return v22;
}

