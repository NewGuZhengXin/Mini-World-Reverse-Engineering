// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: XMLFrameParser

//======================================================================
// XMLFrameParser::XMLFrameParser(void)
// address: 0x001C2C8C   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN14XMLFrameParserC1Ev'
void __fastcall XMLFrameParser::XMLFrameParser(XMLFrameParser *this)
{
  XMLLayoutFrameParser::XMLLayoutFrameParser(this);
  *(_DWORD *)this = &off_459240;
}


//======================================================================
// XMLFrameParser::~XMLFrameParser()
// address: 0x001C2CA8   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN14XMLFrameParserD1Ev'
void __fastcall XMLFrameParser::~XMLFrameParser(XMLFrameParser *this)
{
  *(_DWORD *)this = &off_459240;
  XMLLayoutFrameParser::~XMLLayoutFrameParser(this);
}


//======================================================================
// XMLFrameParser::FrameParserRecursive(Frame *,Ogre::XMLNode)
// address: 0x001C2CC4   size: 0xF6 (246 bytes)
//======================================================================
int __fastcall XMLFrameParser::FrameParserRecursive(int a1, Frame *a2, TiXmlNode *a3)
{
  TiXmlNode *v5; // r0
  const char *Name; // r0
  UIObject *v7; // r0
  char *v8; // r0
  XMLUIObjectParser *v9; // r4
  XMLUIObjectParser *v10; // r4
  XMLUIObjectParser *v11; // r4
  TiXmlNode *v13[2]; // [sp+4h] [bp-20h] BYREF
  TiXmlNode *v14; // [sp+10h] [bp-14h] BYREF
  UIObject *v15; // [sp+14h] [bp-10h] BYREF
  XMLUIObjectParser *v16; // [sp+18h] [bp-Ch] BYREF
  _BYTE v17[8]; // [sp+1Ch] [bp-8h] BYREF

  v13[0] = a3;
  v5 = (TiXmlNode *)Ogre::XMLNode::iterateChild(v13);
LABEL_2:
  v14 = v5;
  while ( v14 != nullptr )
  {
    Name = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)&v14);
    if ( j_strcasecmp(Name, "Cooldown") == 0 )
    {
      *((_BYTE *)a2 + 460) = 0;
      v5 = (TiXmlNode *)Ogre::XMLNode::iterateChild(v13, v14);
      goto LABEL_2;
    }
    v7 = *(UIObject **)(a1 + 8);
    v15 = nullptr;
    v16 = nullptr;
    v8 = (char *)UIObject::GetName(v7);
    sub_3BF0BC((int)v17, v8);
    XMLManager::CreateObjectByType(v14, (const char **)&v15, &v16);
    sub_3BDF80(v17);
    v9 = v16;
    if ( v15 == nullptr )
    {
      if ( v16 != nullptr )
      {
        XMLUIObjectParser::~XMLUIObjectParser(v16);
        operator delete(v9);
      }
      return 0;
    }
    if ( (**(int (__fastcall ***)(XMLUIObjectParser *, UIObject *, TiXmlNode *, _DWORD))v16)(
           v16,
           v15,
           v14,
           *((unsigned __int8 *)v15 + 4)) == 0 )
    {
      v10 = v16;
      if ( v16 != nullptr )
      {
        XMLUIObjectParser::~XMLUIObjectParser(v16);
        operator delete(v10);
      }
      UIObject::release(v15);
      return 0;
    }
    if ( *((_BYTE *)v15 + 4) != 0 )
      FrameManager::RegisterObject((FrameManager *)g_pFrameMgr, v15);
    else
      Frame::AddChildFrame(a2, v15);
    v14 = (TiXmlNode *)Ogre::XMLNode::iterateChild(v13, v14);
    UIObject::release(v15);
    v11 = v16;
    if ( v16 != nullptr )
    {
      XMLUIObjectParser::~XMLUIObjectParser(v16);
      operator delete(v11);
    }
  }
  return 1;
}


//======================================================================
// XMLFrameParser::BackDropParser(Frame *,Ogre::XMLNode)
// address: 0x001C2DC4   size: 0x24C (588 bytes)
//======================================================================
int __fastcall XMLFrameParser::BackDropParser(int a1, int a2, TiXmlNode *a3)
{
  char *v4; // r0
  char *v5; // r0
  TiXmlNode *i; // r0
  const char *Name; // r0
  TiXmlElement *j; // r0
  const char *v9; // r0
  int v10; // r2
  const char *v11; // r0
  TiXmlElement *k; // r0
  const char *v13; // r0
  int v14; // r2
  const char *v15; // r0
  TiXmlElement *m; // r0
  const char *v17; // r0
  int v18; // r2
  int v19; // r2
  int v20; // r2
  int v21; // r2
  TiXmlNode *v23; // [sp+14h] [bp-10h] BYREF
  TiXmlNode *v24; // [sp+18h] [bp-Ch] BYREF
  TiXmlElement *v25[2]; // [sp+1Ch] [bp-8h] BYREF

  v23 = a3;
  if ( Ogre::XMLNode::attribToString(&v23, "bgFile") != 0 )
  {
    v4 = (char *)Ogre::XMLNode::attribToString(&v23, "bgFile");
    sub_3BE508(a2 + 388, v4);
    *(_DWORD *)(a2 + 380) = (*(int (__fastcall **)(int, _DWORD, int, _DWORD, _DWORD, int))(*(_DWORD *)g_pDisplay + 72))(
                              g_pDisplay,
                              *(_DWORD *)(a2 + 388),
                              2,
                              0,
                              0,
                              1);
  }
  if ( Ogre::XMLNode::attribToString(&v23, "edgeFile") != 0 )
  {
    v5 = (char *)Ogre::XMLNode::attribToString(&v23, "edgeFile");
    sub_3BE508(a2 + 384, v5);
    *(_DWORD *)(a2 + 376) = (*(int (__fastcall **)(int, _DWORD, int, _DWORD, _DWORD, int))(*(_DWORD *)g_pDisplay + 72))(
                              g_pDisplay,
                              *(_DWORD *)(a2 + 384),
                              2,
                              0,
                              0,
                              1);
  }
  if ( Ogre::XMLNode::attribToString(&v23, "tile") != 0 )
    *(_BYTE *)(a2 + 336) = (unsigned __int8)Ogre::XMLNode::attribToBool(&v23, "tile");
  for ( i = (TiXmlNode *)Ogre::XMLNode::iterateChild(&v23); ; i = (TiXmlNode *)Ogre::XMLNode::iterateChild(&v23, v24) )
  {
    v24 = i;
    if ( i == nullptr )
      break;
    Name = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)&v24);
    if ( j_strcasecmp(Name, "EdgeSize") == 0 )
    {
      for ( j = (TiXmlElement *)Ogre::XMLNode::iterateChild(&v24);
            ;
            j = (TiXmlElement *)Ogre::XMLNode::iterateChild(&v24, v25[0]) )
      {
        v25[0] = j;
        if ( j == nullptr )
          break;
        v9 = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)v25);
        if ( j_strcasecmp(v9, "AbsValue") == 0 && Ogre::XMLNode::attribToString(v25, "val") != 0 )
          *(_DWORD *)(a2 + 320) = Ogre::XMLNode::attribToInt(v25, "val", v10);
      }
    }
    v11 = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)&v24);
    if ( j_strcasecmp(v11, "TileSize") == 0 )
    {
      for ( k = (TiXmlElement *)Ogre::XMLNode::iterateChild(&v24);
            ;
            k = (TiXmlElement *)Ogre::XMLNode::iterateChild(&v24, v25[0]) )
      {
        v25[0] = k;
        if ( k == nullptr )
          break;
        v13 = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)v25);
        if ( j_strcasecmp(v13, "AbsValue") == 0 && Ogre::XMLNode::attribToString(v25, "val") != 0 )
          *(_DWORD *)(a2 + 324) = Ogre::XMLNode::attribToInt(v25, "val", v14);
      }
    }
    v15 = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)&v24);
    if ( j_strcasecmp(v15, "BackgroundInsets") == 0 )
    {
      for ( m = (TiXmlElement *)Ogre::XMLNode::iterateChild(&v24);
            ;
            m = (TiXmlElement *)Ogre::XMLNode::iterateChild(&v24, v25[0]) )
      {
        v25[0] = m;
        if ( m == nullptr )
          break;
        v17 = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)v25);
        if ( j_strcasecmp(v17, "AbsInset") == 0 )
        {
          *(_DWORD *)(a2 + 340) = 5;
          *(_DWORD *)(a2 + 344) = 6;
          *(_DWORD *)(a2 + 348) = 6;
          *(_DWORD *)(a2 + 352) = 5;
          if ( Ogre::XMLNode::attribToString(v25, "left") != 0 )
            *(_DWORD *)(a2 + 340) = Ogre::XMLNode::attribToInt(v25, "left", v18);
          if ( Ogre::XMLNode::attribToString(v25, "right") != 0 )
            *(_DWORD *)(a2 + 348) = Ogre::XMLNode::attribToInt(v25, "right", v19);
          if ( Ogre::XMLNode::attribToString(v25, "top") != 0 )
            *(_DWORD *)(a2 + 344) = Ogre::XMLNode::attribToInt(v25, "top", v20);
          if ( Ogre::XMLNode::attribToString(v25, "bottom") != 0 )
            *(_DWORD *)(a2 + 352) = Ogre::XMLNode::attribToInt(v25, "bottom", v21);
        }
      }
    }
  }
  return 1;
}


//======================================================================
// XMLFrameParser::LayersParser(Ogre::XMLNode,bool)
// address: 0x001C3054   size: 0x1F8 (504 bytes)
//======================================================================
int __fastcall XMLFrameParser::LayersParser(int a1, TiXmlNode *a2, int a3)
{
  TiXmlNode *i; // r0
  const char *Name; // r0
  int v6; // r5
  int v7; // r4
  const char *v8; // r0
  TiXmlNode *v9; // r0
  XMLUIObjectParser *v10; // r4
  const char *v11; // r0
  XMLTextureParser *v12; // r5
  __int64 v13; // r0
  const char *v14; // r0
  __int64 v15; // r0
  const char *v16; // r0
  __int64 v17; // r0
  const char *v18; // r0
  __int64 v19; // r0
  XMLUIObjectParser *v20; // r5
  TiXmlNode *v23; // [sp+4h] [bp-20h] BYREF
  TiXmlNode *v24; // [sp+Ch] [bp-18h] BYREF
  TiXmlNode *v25; // [sp+10h] [bp-14h] BYREF
  UIObject *v26; // [sp+14h] [bp-10h] BYREF
  XMLUIObjectParser *v27; // [sp+18h] [bp-Ch] BYREF
  _BYTE v28[8]; // [sp+1Ch] [bp-8h] BYREF

  v23 = a2;
  for ( i = (TiXmlNode *)Ogre::XMLNode::iterateChild(&v23); ; i = (TiXmlNode *)Ogre::XMLNode::iterateChild(&v23, v24) )
  {
    v24 = i;
    if ( i == nullptr )
      break;
    Name = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)&v24);
    v6 = j_strcasecmp(Name, "Layer");
    if ( v6 == 0 )
    {
      v7 = 2;
      if ( Ogre::XMLNode::attribToString(&v24, "level") != 0 )
      {
        do
        {
          v8 = (const char *)Ogre::XMLNode::attribToString(&v24, "level");
          if ( j_strcasecmp(v8, off_451EA4[v6]) == 0 )
            v7 = v6;
          ++v6;
        }
        while ( v6 != 5 );
      }
      v9 = (TiXmlNode *)Ogre::XMLNode::iterateChild(&v24);
LABEL_10:
      v25 = v9;
      if ( v9 == nullptr )
        continue;
      v26 = nullptr;
      v27 = nullptr;
      sub_3BF0BC((int)v28, (char *)&unk_3FB8EA);
      XMLManager::CreateObjectByType(v25, (const char **)&v26, &v27);
      sub_3BDF80(v28);
      if ( v26 == nullptr )
      {
        v10 = v27;
        if ( v27 != nullptr )
        {
          XMLUIObjectParser::~XMLUIObjectParser(v27);
          operator delete(v10);
        }
        return 0;
      }
      v11 = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)&v25);
      if ( j_strcasecmp(v11, "Texture") == 0 )
      {
        v12 = (XMLTextureParser *)operator new(0xCu);
        XMLTextureParser::XMLTextureParser(v12);
        LODWORD(v13) = *(_DWORD *)(a1 + 8);
        HIDWORD(v13) = v7;
        Frame::AddTexture(v13, v26);
        if ( (**(int (__fastcall ***)(XMLTextureParser *, UIObject *, TiXmlNode *, int))v12)(v12, v26, v25, a3) == 0 )
          return 0;
        XMLTextureParser::~XMLTextureParser(v12);
        goto LABEL_26;
      }
      v14 = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)&v25);
      if ( j_strcasecmp(v14, "DrawLineFrame") == 0 )
      {
        v12 = (XMLTextureParser *)operator new(0xCu);
        XMLDrawLineFrameParser::XMLDrawLineFrameParser(v12);
        LODWORD(v15) = *(_DWORD *)(a1 + 8);
        HIDWORD(v15) = v7;
        Frame::AddLineFrame(v15, v26);
        if ( (**(int (__fastcall ***)(XMLTextureParser *, UIObject *, TiXmlNode *, int))v12)(v12, v26, v25, a3) == 0 )
          return 0;
        XMLDrawLineFrameParser::~XMLDrawLineFrameParser(v12);
        goto LABEL_26;
      }
      v16 = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)&v25);
      if ( j_strcasecmp(v16, "FontString") == 0 )
      {
        v12 = (XMLTextureParser *)operator new(0xCu);
        XMLFontStringParser::XMLFontStringParser(v12);
        LODWORD(v17) = *(_DWORD *)(a1 + 8);
        HIDWORD(v17) = v7;
        Frame::AddFontString(v17, v26);
        if ( (**(int (__fastcall ***)(XMLTextureParser *, UIObject *, TiXmlNode *, int))v12)(v12, v26, v25, a3) == 0 )
          return 0;
        XMLFontStringParser::~XMLFontStringParser(v12);
        goto LABEL_26;
      }
      v18 = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)&v25);
      if ( j_strcasecmp(v18, "ModelView") == 0 )
      {
        v12 = (XMLTextureParser *)operator new(0x10u);
        XMLModelViewParser::XMLModelViewParser(v12);
        LODWORD(v19) = *(_DWORD *)(a1 + 8);
        HIDWORD(v19) = v7;
        Frame::AddModelView(v19, v26);
        if ( (**(int (__fastcall ***)(XMLTextureParser *, UIObject *, TiXmlNode *, int))v12)(v12, v26, v25, a3) == 0 )
          return 0;
        XMLModelViewParser::~XMLModelViewParser(v12);
LABEL_26:
        operator delete(v12);
      }
      UIObject::release(v26);
      v20 = v27;
      if ( v27 != nullptr )
      {
        XMLUIObjectParser::~XMLUIObjectParser(v27);
        operator delete(v20);
      }
      v9 = (TiXmlNode *)Ogre::XMLNode::iterateChild(&v24, v25);
      goto LABEL_10;
    }
  }
  return 1;
}


//======================================================================
// XMLFrameParser::LoadUIObjectParam(UIObject *,Ogre::XMLNode,bool)
// address: 0x001C3270   size: 0x248 (584 bytes)
//======================================================================
int __fastcall XMLFrameParser::LoadUIObjectParam(int a1, LayoutFrame *a2, TiXmlNode *a3, int a4)
{
  int v6; // r2
  LayoutFrame *v7; // r7
  int v8; // r0
  int v9; // r7
  const char *v10; // r0
  int v11; // r2
  int v12; // r7
  int v13; // r3
  int v14; // r7
  Frame *v15; // r7
  const char *v16; // r0
  char *v17; // r0
  char *i; // r0
  const char *Name; // r0
  const char *v20; // r0
  const char *v21; // r0
  char *v22; // r0
  const char *v23; // r0
  char *v24; // r0
  const char *v25; // r0
  const char *v26; // r0
  int v28; // [sp+4h] [bp-18h]
  int v29; // [sp+4h] [bp-18h]
  TiXmlNode *v31; // [sp+Ch] [bp-10h] BYREF
  char *v32[2]; // [sp+14h] [bp-8h] BYREF

  v31 = a3;
  XMLLayoutFrameParser::LoadUIObjectParam(a1, a2, a3);
  *(_DWORD *)(a1 + 8) = a2;
  if ( Ogre::XMLNode::attribToString(&v31, "id") != 0 )
  {
    v7 = *(LayoutFrame **)(a1 + 8);
    v8 = Ogre::XMLNode::attribToInt(&v31, "id", v6);
    LayoutFrame::SetClientID(v7, v8);
  }
  if ( Ogre::XMLNode::attribToString(&v31, "movable") != 0 )
  {
    v9 = *(_DWORD *)(a1 + 8);
    *(_BYTE *)(v9 + 244) = (unsigned __int8)Ogre::XMLNode::attribToBool(&v31, "movable");
  }
  if ( Ogre::XMLNode::attribToString(&v31, "frameStrata") != 0 )
  {
    v10 = (const char *)Ogre::XMLNode::attribToString(&v31, "frameStrata");
    XMLLayoutFrameParser::FrameStrataParser(a1, v10);
  }
  else
  {
    LayoutFrame::SetFrameStrata(*(_DWORD *)(a1 + 8), 0);
  }
  if ( Ogre::XMLNode::attribToString(&v31, "framelevel") != 0 )
  {
    v12 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(v12 + 296) = Ogre::XMLNode::attribToInt(&v31, "framelevel", v11);
    v13 = *(_DWORD *)(g_pFrameMgr + 24);
    if ( v13 < *(_DWORD *)(*(_DWORD *)(a1 + 8) + 296) )
      v13 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 296);
    *(_DWORD *)(g_pFrameMgr + 24) = v13;
  }
  if ( Ogre::XMLNode::attribToString(&v31, "toplevel") != 0 )
  {
    v14 = *(_DWORD *)(a1 + 8);
    *(_BYTE *)(v14 + 300) = (unsigned __int8)Ogre::XMLNode::attribToBool(&v31, "toplevel");
  }
  if ( Ogre::XMLNode::attribToString(&v31, "clipped") != 0 )
  {
    v15 = *(Frame **)(a1 + 8);
    v16 = Ogre::XMLNode::attribToBool(&v31, "clipped");
    Frame::SetClipState(v15, (int)v16);
  }
  if ( Ogre::XMLNode::attribToString(&v31, "modalFrame") != 0 )
  {
    v17 = (char *)Ogre::XMLNode::attribToString(&v31, "modalFrame");
    sub_3BF0BC((int)v32, v17);
    Frame::setModalFrame(*(Frame **)(a1 + 8), v32[0]);
    sub_3BDF80(v32);
  }
  for ( i = (char *)Ogre::XMLNode::iterateChild(&v31); ; i = (char *)Ogre::XMLNode::iterateChild(
                                                                       &v31,
                                                                       (TiXmlNode *)v32[0]) )
  {
    v32[0] = i;
    if ( i == nullptr )
      return 1;
    Name = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)v32);
    if ( j_strcasecmp(Name, "Backdrop") == 0
      && XMLFrameParser::BackDropParser(a1, *(_DWORD *)(a1 + 8), (TiXmlNode *)v32[0]) == 0 )
    {
      break;
    }
    v20 = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)v32);
    if ( j_strcasecmp(v20, "Layers") == 0 && XMLFrameParser::LayersParser(a1, (TiXmlNode *)v32[0], a4) == 0 )
      break;
    v21 = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)v32);
    if ( j_strcasecmp(v21, "OnShowSound") == 0 && Ogre::XMLNode::attribToString((TiXmlElement **)v32, "file") != 0 )
    {
      v28 = *(_DWORD *)(a1 + 8) + 392;
      v22 = (char *)Ogre::XMLNode::attribToString((TiXmlElement **)v32, "file");
      sub_3BE508(v28, v22);
    }
    v23 = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)v32);
    if ( j_strcasecmp(v23, "OnHideSound") == 0 && Ogre::XMLNode::attribToString((TiXmlElement **)v32, "file") != 0 )
    {
      v29 = *(_DWORD *)(a1 + 8) + 396;
      v24 = (char *)Ogre::XMLNode::attribToString((TiXmlElement **)v32, "file");
      sub_3BE508(v29, v24);
    }
    v25 = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)v32);
    if ( j_strcasecmp(v25, "Frames") == 0
      && XMLFrameParser::FrameParserRecursive(a1, *(Frame **)(a1 + 8), (TiXmlNode *)v32[0]) == 0 )
    {
      break;
    }
    v26 = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)v32);
    if ( j_strcasecmp(v26, "Scripts") == 0
      && XMLUIObjectParser::LoadFrameScript(a1, *(_DWORD **)(a1 + 8), (TiXmlNode *)v32[0]) == 0 )
    {
      break;
    }
  }
  return 0;
}

