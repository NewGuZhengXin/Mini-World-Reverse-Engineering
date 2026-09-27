// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: XMLScrollFrameParser

//======================================================================
// XMLScrollFrameParser::XMLScrollFrameParser(void)
// address: 0x001B872C   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN20XMLScrollFrameParserC1Ev'
void __fastcall XMLScrollFrameParser::XMLScrollFrameParser(XMLScrollFrameParser *this)
{
  XMLFrameParser::XMLFrameParser(this);
  *(_DWORD *)this = &off_458F98;
}


//======================================================================
// XMLScrollFrameParser::~XMLScrollFrameParser()
// address: 0x001B8748   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN20XMLScrollFrameParserD1Ev'
void __fastcall XMLScrollFrameParser::~XMLScrollFrameParser(XMLScrollFrameParser *this)
{
  *(_DWORD *)this = &off_458F98;
  XMLFrameParser::~XMLFrameParser(this);
}


//======================================================================
// XMLScrollFrameParser::LoadUIObjectParam(UIObject *,Ogre::XMLNode,bool)
// address: 0x001B8764   size: 0x1E0 (480 bytes)
//======================================================================
int __fastcall XMLScrollFrameParser::LoadUIObjectParam(int a1, int a2, TiXmlNode *a3, int a4)
{
  _BYTE *v6; // r3
  int v7; // r3
  int v8; // r3
  char *v9; // r0
  const char *Name; // r0
  XMLFontStringParser *v11; // r5
  const char *v12; // r0
  int v13; // r4
  UIObject *v15; // [sp+8h] [bp-2Ch]
  int v16; // [sp+Ch] [bp-28h]
  FrameManager *v18; // [sp+18h] [bp-1Ch]
  TiXmlNode *v19[2]; // [sp+1Ch] [bp-18h] BYREF
  _BYTE v20[4]; // [sp+24h] [bp-10h] BYREF
  TiXmlElement *v21; // [sp+28h] [bp-Ch] BYREF
  char *v22[2]; // [sp+2Ch] [bp-8h] BYREF

  v19[0] = a3;
  XMLFrameParser::LoadUIObjectParam(a1, a2);
  *(_DWORD *)(a1 + 12) = a2;
  sub_3BEB1C(v20, a2 + 8);
  v16 = *(_DWORD *)(a1 + 12);
  v15 = *(UIObject **)(v16 + 416);
  if ( v15 != nullptr )
  {
    sub_3BEB1C(v22, v20);
    sub_3BE948((int)v22, "FontString");
    UIObject::SetName((int)v15, v22[0]);
    sub_3BDF80(v22);
    sub_3BE508(*(_DWORD *)(*(_DWORD *)(a1 + 12) + 416) + 132, "$parent");
  }
  else
  {
    v18 = (FrameManager *)g_pFrameMgr;
    sub_3BEB1C(v22, v20);
    sub_3BE948((int)v22, "FontString");
    *(_DWORD *)(v16 + 416) = FrameManager::CreateObject(v18, "FontString", v22[0], nullptr);
    sub_3BDF80(v22);
    sub_3BEBBC(*(_DWORD *)(*(_DWORD *)(a1 + 12) + 416) + 132);
    UIObject::SetName(*(_DWORD *)(*(_DWORD *)(a1 + 12) + 416), (char *)&unk_3FB8EA);
    v6 = *(_BYTE **)(*(_DWORD *)(a1 + 12) + 416);
    v6[236] = -56;
    v6[237] = -56;
    v6[238] = -56;
    v6[239] = -1;
  }
  v7 = *(_DWORD *)(*(_DWORD *)(a1 + 12) + 416);
  *(_BYTE *)(v7 + 112) = *(_BYTE *)(a2 + 112);
  *(_BYTE *)(v7 + 113) = *(_BYTE *)(a2 + 113);
  *(_DWORD *)(v7 + 116) = *(_DWORD *)(a2 + 116);
  *(_DWORD *)(v7 + 120) = *(_DWORD *)(a2 + 120);
  v8 = *(_DWORD *)(*(_DWORD *)(a1 + 12) + 416);
  *(_DWORD *)(v8 + 128) = 0;
  *(_DWORD *)(v8 + 124) = 0;
  LayoutDim::SetAbsDim((LayoutDim *)(*(_DWORD *)(*(_DWORD *)(a1 + 12) + 416) + 136), 0, 0);
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 12) + 416) + 44) = *(_DWORD *)(*(_DWORD *)(a1 + 12) + 44);
  v21 = (TiXmlElement *)Ogre::XMLNode::iterateChild(v19);
  while ( v21 != nullptr )
  {
    v22[0] = &byte_55FB88;
    if ( Ogre::XMLNode::attribToString(&v21, "name") != 0 )
    {
      v9 = (char *)Ogre::XMLNode::attribToString(&v21, "name");
      sub_3BE508((int)v22, v9);
    }
    Name = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)&v21);
    if ( j_strcasecmp(Name, "FontString") == 0 )
    {
      v11 = (XMLFontStringParser *)operator new(0xCu);
      XMLFontStringParser::XMLFontStringParser(v11);
      if ( (**(int (__fastcall ***)(XMLFontStringParser *, _DWORD, TiXmlElement *, int))v11)(
             v11,
             *(_DWORD *)(*(_DWORD *)(a1 + 12) + 416),
             v21,
             a4) == 0 )
        goto LABEL_14;
      Frame::AddFontString(*(_DWORD *)(a1 + 12), 2, *(_DWORD *)(*(_DWORD *)(a1 + 12) + 416));
      XMLUIObjectParser::~XMLUIObjectParser(v11);
      operator delete(v11);
    }
    v12 = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)&v21);
    if ( j_strcasecmp(v12, "ScrollChild") == 0
      && XMLFrameParser::FrameParserRecursive(a1, *(_DWORD *)(a1 + 12), v21) == 0 )
    {
LABEL_14:
      sub_3BDF80(v22);
      v13 = 0;
      goto LABEL_16;
    }
    v21 = (TiXmlElement *)Ogre::XMLNode::iterateChild(v19, v21);
    sub_3BDF80(v22);
  }
  v13 = 1;
LABEL_16:
  sub_3BDF80(v20);
  return v13;
}

