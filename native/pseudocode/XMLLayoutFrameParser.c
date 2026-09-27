// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: XMLLayoutFrameParser

//======================================================================
// XMLLayoutFrameParser::XMLLayoutFrameParser(void)
// address: 0x001A728C   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN20XMLLayoutFrameParserC1Ev'
void __fastcall XMLLayoutFrameParser::XMLLayoutFrameParser(XMLLayoutFrameParser *this)
{
  XMLUIObjectParser::XMLUIObjectParser(this);
  *(_DWORD *)this = &off_458E18;
}


//======================================================================
// XMLLayoutFrameParser::~XMLLayoutFrameParser()
// address: 0x001A72A8   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN20XMLLayoutFrameParserD1Ev'
void __fastcall XMLLayoutFrameParser::~XMLLayoutFrameParser(XMLLayoutFrameParser *this)
{
  *(_DWORD *)this = &off_458E18;
  XMLUIObjectParser::~XMLUIObjectParser(this);
}


//======================================================================
// XMLLayoutFrameParser::SizeParser(Ogre::XMLNode)
// address: 0x001A72C4   size: 0x112 (274 bytes)
//======================================================================
LayoutDim *__fastcall XMLLayoutFrameParser::SizeParser(LayoutDim *a1, int a2, TiXmlNode *a3)
{
  TiXmlElement *i; // r0
  const char *Name; // r0
  int v6; // r2
  int v7; // r7
  int v8; // r2
  int v9; // r0
  const char *v10; // r0
  unsigned int v11; // r2
  double v12; // r0
  int v13; // r7
  double v14; // r0
  unsigned int v15; // r2
  int v16; // r0
  const char *v17; // r0
  unsigned int v18; // r2
  double v19; // r0
  int v20; // r0
  int v21; // r0
  unsigned int v22; // r2
  double v23; // r0
  int v24; // r0
  int v25; // r0
  TiXmlNode *v27[2]; // [sp+4h] [bp-10h] BYREF
  TiXmlElement *v28[2]; // [sp+Ch] [bp-8h] BYREF

  v27[0] = a3;
  LayoutDim::LayoutDim(a1);
  for ( i = (TiXmlElement *)Ogre::XMLNode::iterateChild(v27); ; i = (TiXmlElement *)Ogre::XMLNode::iterateChild(
                                                                                      v27,
                                                                                      v28[0]) )
  {
    v28[0] = i;
    if ( i == nullptr )
      break;
    Name = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)v28);
    if ( j_strcasecmp(Name, "AbsDimension") == 0 )
    {
      v7 = Ogre::XMLNode::attribToInt(v28, "x", v6);
      v9 = Ogre::XMLNode::attribToInt(v28, "y", v8);
      LayoutDim::SetAbsDim(a1, v7, v9);
    }
    else
    {
      v10 = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)v28);
      if ( j_strcasecmp(v10, "RelDimension") == 0 )
      {
        LODWORD(v12) = v28;
        HIDWORD(v12) = "x";
        v13 = Ogre::XMLNode::attribToFloat(v12, v11);
        LODWORD(v14) = v28;
        HIDWORD(v14) = "y";
        v16 = Ogre::XMLNode::attribToFloat(v14, v15);
        LayoutDim::SetRelDim(a1, *(float *)&v13, *(float *)&v16);
      }
      else
      {
        v17 = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)v28);
        if ( j_strcasecmp(v17, "Dimension") != 0 )
          return a1;
        if ( Ogre::XMLNode::hasAttrib(v28, "rel_x") )
        {
          HIDWORD(v19) = "rel_x";
          LODWORD(v19) = v28;
          v20 = Ogre::XMLNode::attribToFloat(v19, v18);
          LayoutDim::SetRelX(a1, *(float *)&v20);
        }
        else
        {
          v21 = Ogre::XMLNode::attribToInt(v28, "abs_x", v18);
          LayoutDim::SetAbsX(a1, v21);
        }
        if ( Ogre::XMLNode::hasAttrib(v28, "rel_y") )
        {
          HIDWORD(v23) = "rel_y";
          LODWORD(v23) = v28;
          v24 = Ogre::XMLNode::attribToFloat(v23, v22);
          LayoutDim::SetRelY(a1, *(float *)&v24);
        }
        else
        {
          v25 = Ogre::XMLNode::attribToInt(v28, "abs_y", v22);
          LayoutDim::SetAbsY(a1, v25);
        }
      }
    }
  }
  return a1;
}


//======================================================================
// XMLLayoutFrameParser::FrameStrataParser(char const*)
// address: 0x001A7404   size: 0x2E (46 bytes)
//======================================================================
int __fastcall XMLLayoutFrameParser::FrameStrataParser(int this, const char *a2)
{
  int v2; // r6
  int v4; // r4

  v2 = this;
  if ( a2 != nullptr )
  {
    v4 = 0;
    while ( 1 )
    {
      this = j_strcasecmp(a2, off_451D18[v4]);
      if ( this == 0 )
        break;
      if ( ++v4 == 10 )
        return this;
    }
    return LayoutFrame::SetFrameStrata(*(_DWORD *)(v2 + 4), v4);
  }
  return this;
}


//======================================================================
// XMLLayoutFrameParser::AnchorsParser(Ogre::XMLNode,std::string,UIObject *,bool)
// address: 0x001A7438   size: 0x1BA (442 bytes)
//======================================================================
void __fastcall XMLLayoutFrameParser::AnchorsParser(int a1, TiXmlNode *a2, int a3, LayoutFrame *a4)
{
  TiXmlNode *i; // r0
  const char *Name; // r0
  const char *v7; // r0
  char *v8; // r0
  const char *v9; // r0
  const char *v10; // r4
  const char *v11; // r0
  int LayoutFrame; // r0
  __int64 v13; // r0
  TiXmlNode **v14; // r0
  const char *v15; // r0
  TiXmlNode *j; // r0
  const char *v17; // r0
  int v18; // r7
  int v19; // [sp+4h] [bp-48h]
  TiXmlNode *v21[2]; // [sp+Ch] [bp-40h] BYREF
  LayoutFrame *v22; // [sp+14h] [bp-38h] BYREF
  TiXmlNode *v23; // [sp+18h] [bp-34h] BYREF
  char *v24; // [sp+1Ch] [bp-30h] BYREF
  TiXmlNode *v25; // [sp+20h] [bp-2Ch] BYREF
  _BYTE v26[12]; // [sp+24h] [bp-28h] BYREF
  int v27; // [sp+30h] [bp-1Ch] BYREF
  int v28; // [sp+34h] [bp-18h]

  v21[0] = a2;
  LayoutAnchor::LayoutAnchor((LayoutAnchor *)&v27);
  v22 = a4;
  *((_DWORD *)a4 + 43) = 0;
  for ( i = (TiXmlNode *)Ogre::XMLNode::iterateChild(v21); ; i = (TiXmlNode *)Ogre::XMLNode::iterateChild(v21, v23) )
  {
    v23 = i;
    if ( i == nullptr )
      break;
    Name = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)&v23);
    if ( j_strcasecmp(Name, "Anchor") == 0 )
    {
      v27 = 0;
      v28 = 0;
      if ( Ogre::XMLNode::attribToString(&v23, "point") != 0 )
      {
        v7 = (const char *)Ogre::XMLNode::attribToString(&v23, "point");
        v27 = sub_1A7264(v7);
      }
      v24 = &byte_55FB88;
      if ( Ogre::XMLNode::attribToString(&v23, "relativeTo") != 0 )
      {
        v8 = (char *)Ogre::XMLNode::attribToString(&v23, "relativeTo");
        sub_3BF0BC((int)&v25, v8);
        sub_3BEB1C(v26, &v25);
        LayoutAnchor::SetRelFrame(&v27, v26);
        sub_3BDF80(v26);
        v9 = (const char *)Ogre::XMLNode::attribToString(&v23, "relativeTo");
        if ( j_strcmp(v9, "$parent") != 0 )
        {
          if ( *((_DWORD *)v22 + 27) == 0
            || (v10 = (const char *)Ogre::XMLNode::attribToString(&v23, "relativeTo"),
                v11 = (const char *)UIObject::GetName(*((UIObject **)v22 + 27)),
                j_strcmp(v10, v11) != 0) )
          {
            LayoutFrame = FrameManager::FindLayoutFrame(g_pFrameMgr);
            if ( LayoutFrame != 0 )
            {
              LODWORD(v13) = LayoutFrame + 176;
              HIDWORD(v13) = &v22;
              std::vector<LayoutFrame *>::push_back(v13);
            }
          }
        }
        v14 = &v25;
      }
      else
      {
        sub_3BF0BC((int)v26, "$parent");
        LayoutAnchor::SetRelFrame(&v27, v26);
        v14 = (TiXmlNode **)v26;
      }
      sub_3BDF80(v14);
      if ( Ogre::XMLNode::attribToString(&v23, "relativePoint") != 0 )
      {
        v15 = (const char *)Ogre::XMLNode::attribToString(&v23, "relativePoint");
        v28 = sub_1A7264(v15);
      }
      else
      {
        v28 = v27;
      }
      for ( j = (TiXmlNode *)Ogre::XMLNode::iterateChild(&v23); ; j = (TiXmlNode *)Ogre::XMLNode::iterateChild(
                                                                                     &v23,
                                                                                     v25) )
      {
        v25 = j;
        if ( j == nullptr )
          break;
        v17 = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)&v25);
        if ( j_strcasecmp(v17, "Offset") == 0 )
        {
          v18 = v27;
          v19 = v28;
          XMLLayoutFrameParser::SizeParser((LayoutDim *)v26, a1, v25);
          LayoutAnchor::SetPoint(&v27, v18, v19, v26);
          LayoutDim::~LayoutDim((LayoutDim *)v26);
        }
      }
      LayoutFrame::AddAnchor(v22, (const LayoutAnchor *)&v27);
      sub_3BDF80(&v24);
    }
  }
  LayoutAnchor::~LayoutAnchor((LayoutAnchor *)&v27);
}


//======================================================================
// XMLLayoutFrameParser::LoadUIObjectParam(UIObject *,Ogre::XMLNode,bool)
// address: 0x001A761C   size: 0x212 (530 bytes)
//======================================================================
int __fastcall XMLLayoutFrameParser::LoadUIObjectParam(int a1, LayoutFrame *a2, TiXmlNode *a3)
{
  const char *v4; // r0
  int v5; // r1
  char *v6; // r0
  int v7; // r7
  int v8; // r5
  const char *Name; // r0
  const char *v10; // r0
  UIObject *v11; // r0
  char *v12; // r1
  float v13; // r7
  int v14; // r0
  int v16; // [sp+8h] [bp-44h]
  int v17; // [sp+8h] [bp-44h]
  TiXmlNode *v19[2]; // [sp+14h] [bp-38h] BYREF
  TiXmlNode *v20; // [sp+20h] [bp-2Ch] BYREF
  _DWORD v21[3]; // [sp+24h] [bp-28h] BYREF
  const char *v22[7]; // [sp+30h] [bp-1Ch] BYREF

  *(_DWORD *)(a1 + 4) = a2;
  v19[0] = a3;
  XMLUIObjectParser::LoadUIObjectParam();
  if ( Ogre::XMLNode::attribToString(v19, "hidden") != 0 )
  {
    v4 = (const char *)Ogre::XMLNode::attribToString(v19, "hidden");
    v5 = j_strcasecmp(v4, "true");
    if ( v5 != 0 )
      LOBYTE(v5) = 1;
    LayoutFrame::DrawShow(*(LayoutFrame **)(a1 + 4), v5);
  }
  if ( Ogre::XMLNode::attribToString(v19, "name") != 0 )
  {
    v6 = (char *)Ogre::XMLNode::attribToString(v19, "name");
    sub_3BF0BC((int)v22, v6);
    UIObject::SetName(*(UIObject **)(a1 + 4), v22[0]);
    sub_3BDF80(v22);
  }
  if ( Ogre::XMLNode::hasAttrib(v19, "input_transparent") )
  {
    v7 = *(_DWORD *)(a1 + 4);
    *(_BYTE *)(v7 + 58) = (unsigned __int8)Ogre::XMLNode::attribToBool(v19, "input_transparent");
  }
  v8 = 0;
  v20 = (TiXmlNode *)Ogre::XMLNode::iterateChild(v19);
  v16 = 0;
  while ( v20 != nullptr )
  {
    Name = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)&v20);
    if ( j_strcasecmp(Name, "Size") == 0 )
    {
      v17 = *(_DWORD *)(a1 + 4);
      XMLLayoutFrameParser::SizeParser((LayoutDim *)v22, a1, v20);
      LayoutFrame::SetLayOutSize(v17, v22);
      LayoutDim::~LayoutDim((LayoutDim *)v22);
      v16 = 1;
    }
    v10 = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)&v20);
    if ( j_strcasecmp(v10, "Anchors") == 0 )
    {
      v21[0] = &byte_55FB88;
      v11 = *((UIObject **)a2 + 27);
      if ( v11 != nullptr )
        v12 = (char *)UIObject::GetName(v11);
      else
        v12 = (char *)&unk_3FB8EA;
      sub_3BE508((int)v21, v12);
      sub_3BEB1C(v22, v21);
      XMLLayoutFrameParser::AnchorsParser(a1, v20, (int)v22, a2);
      sub_3BDF80(v22);
      sub_3BDF80(v21);
      v8 = 1;
    }
    v20 = (TiXmlNode *)Ogre::XMLNode::iterateChild(v19, v20);
  }
  if ( v16 == 0 )
  {
    LayoutFrame::GetSize((LayoutFrame *)v22);
    v13 = COERCE_FLOAT(LayoutDim::GetX((LayoutDim *)v22));
    LayoutDim::~LayoutDim((LayoutDim *)v22);
    if ( v13 == 0.0 )
    {
      LayoutDim::LayoutDim((LayoutDim *)v21);
      LayoutDim::SetRelDim((LayoutDim *)v21, 1.0, 1.0);
      v14 = *(_DWORD *)(a1 + 4);
      qmemcpy(v22, v21, 12);
      LayoutFrame::SetLayOutSize(v14, v22);
      LayoutDim::~LayoutDim((LayoutDim *)v22);
      LayoutDim::~LayoutDim((LayoutDim *)v21);
    }
  }
  if ( v8 == 0 && *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 132) - 12) == 0 )
  {
    LayoutAnchor::LayoutAnchor((LayoutAnchor *)v22);
    LayoutDim::LayoutDim((LayoutDim *)v21, 0, 0);
    LayoutAnchor::SetPoint(v22, 0, 0, v21);
    LayoutDim::~LayoutDim((LayoutDim *)v21);
    sub_3BF0BC((int)v21, "$parent");
    LayoutAnchor::SetRelFrame(v22, v21);
    sub_3BDF80(v21);
    LayoutFrame::AddAnchor(*(LayoutFrame **)(a1 + 4), (const LayoutAnchor *)v22);
    LayoutAnchor::~LayoutAnchor((LayoutAnchor *)v22);
  }
  return 1;
}

