// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: XMLTextureParser

//======================================================================
// XMLTextureParser::XMLTextureParser(void)
// address: 0x001C21FC   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN16XMLTextureParserC2Ev'
void __fastcall XMLTextureParser::XMLTextureParser(XMLTextureParser *this)
{
  XMLLayoutFrameParser::XMLLayoutFrameParser(this);
  *(_DWORD *)this = &off_459200;
}


//======================================================================
// XMLTextureParser::~XMLTextureParser()
// address: 0x001C2218   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN16XMLTextureParserD2Ev'
void __fastcall XMLTextureParser::~XMLTextureParser(XMLTextureParser *this)
{
  *(_DWORD *)this = &off_459200;
  XMLLayoutFrameParser::~XMLLayoutFrameParser(this);
}


//======================================================================
// XMLTextureParser::BackDropParser(Ogre::XMLNode)
// address: 0x001C2234   size: 0x162 (354 bytes)
//======================================================================
TiXmlNode *__fastcall XMLTextureParser::BackDropParser(int a1, TiXmlNode *a2)
{
  TiXmlNode *result; // r0
  Ogre *Name; // r0
  const char *v5; // r2
  TiXmlElement *i; // r0
  Ogre *v7; // r0
  const char *v8; // r2
  int v9; // r2
  Ogre *v10; // r0
  const char *v11; // r2
  TiXmlElement *j; // r0
  Ogre *v13; // r0
  const char *v14; // r2
  _DWORD *v15; // r3
  int v16; // r2
  int v17; // r2
  int v18; // r2
  int v19; // r2
  int v20; // [sp+4h] [bp-18h]
  int v21; // [sp+4h] [bp-18h]
  int v22; // [sp+4h] [bp-18h]
  int v23; // [sp+4h] [bp-18h]
  int v24; // [sp+4h] [bp-18h]
  TiXmlNode *v25; // [sp+Ch] [bp-10h] BYREF
  TiXmlNode *v26; // [sp+10h] [bp-Ch] BYREF
  TiXmlElement *v27[2]; // [sp+14h] [bp-8h] BYREF

  v25 = a2;
  for ( result = (TiXmlNode *)Ogre::XMLNode::iterateChild(&v25);
        ;
        result = (TiXmlNode *)Ogre::XMLNode::iterateChild(&v25, v26) )
  {
    v26 = result;
    if ( result == nullptr )
      break;
    Name = (Ogre *)Ogre::XMLNode::getName((Ogre::XMLNode *)&v26);
    if ( Ogre::Stricmp(Name, "TileSize", v5) == 0 )
    {
      for ( i = (TiXmlElement *)Ogre::XMLNode::iterateChild(&v26);
            ;
            i = (TiXmlElement *)Ogre::XMLNode::iterateChild(&v26, v27[0]) )
      {
        v27[0] = i;
        if ( i == nullptr )
          break;
        v7 = (Ogre *)Ogre::XMLNode::getName((Ogre::XMLNode *)v27);
        if ( Ogre::Stricmp(v7, "AbsValue", v8) == 0 && Ogre::XMLNode::attribToString(v27, "val") != 0 )
        {
          v20 = *(_DWORD *)(a1 + 8);
          *(_DWORD *)(v20 + 328) = Ogre::XMLNode::attribToInt(v27, "val", v9);
        }
      }
    }
    v10 = (Ogre *)Ogre::XMLNode::getName((Ogre::XMLNode *)&v26);
    if ( Ogre::Stricmp(v10, "BackgroundInsets", v11) == 0 )
    {
      for ( j = (TiXmlElement *)Ogre::XMLNode::iterateChild(&v26);
            ;
            j = (TiXmlElement *)Ogre::XMLNode::iterateChild(&v26, v27[0]) )
      {
        v27[0] = j;
        if ( j == nullptr )
          break;
        v13 = (Ogre *)Ogre::XMLNode::getName((Ogre::XMLNode *)v27);
        if ( Ogre::Stricmp(v13, "AbsInset", v14) == 0 )
        {
          v15 = (_DWORD *)(*(_DWORD *)(a1 + 8) + 252);
          v15[21] = 6;
          v15[22] = 6;
          v15[20] = 5;
          v15[23] = 5;
          if ( Ogre::XMLNode::attribToString(v27, "left") != 0 )
          {
            v21 = *(_DWORD *)(a1 + 8);
            *(_DWORD *)(v21 + 332) = Ogre::XMLNode::attribToInt(v27, "left", v16);
          }
          if ( Ogre::XMLNode::attribToString(v27, "right") != 0 )
          {
            v22 = *(_DWORD *)(a1 + 8);
            *(_DWORD *)(v22 + 340) = Ogre::XMLNode::attribToInt(v27, "right", v17);
          }
          if ( Ogre::XMLNode::attribToString(v27, "top") != 0 )
          {
            v23 = *(_DWORD *)(a1 + 8);
            *(_DWORD *)(v23 + 336) = Ogre::XMLNode::attribToInt(v27, "top", v18);
          }
          if ( Ogre::XMLNode::attribToString(v27, "bottom") != 0 )
          {
            v24 = *(_DWORD *)(a1 + 8);
            *(_DWORD *)(v24 + 344) = Ogre::XMLNode::attribToInt(v27, "bottom", v19);
          }
        }
      }
    }
  }
  return result;
}


//======================================================================
// XMLTextureParser::NineSquareParser(Ogre::XMLNode)
// address: 0x001C23BC   size: 0x112 (274 bytes)
//======================================================================
TiXmlElement *__fastcall XMLTextureParser::NineSquareParser(int a1, TiXmlNode *a2)
{
  TiXmlElement *result; // r0
  Ogre *Name; // r0
  const char *v5; // r2
  int v6; // r2
  int v7; // [sp+0h] [bp-14h]
  int v8; // [sp+0h] [bp-14h]
  TiXmlNode *v9[2]; // [sp+4h] [bp-10h] BYREF
  TiXmlElement *v10[2]; // [sp+Ch] [bp-8h] BYREF

  v9[0] = a2;
  for ( result = (TiXmlElement *)Ogre::XMLNode::iterateChild(v9);
        ;
        result = (TiXmlElement *)Ogre::XMLNode::iterateChild(v9, v10[0]) )
  {
    v10[0] = result;
    if ( result == nullptr )
      break;
    sub_1C2138((int *)(*(_DWORD *)(a1 + 8) + 348), (int)result, "Topleft");
    sub_1C2138((int *)(*(_DWORD *)(a1 + 8) + 368), (int)v10[0], "Top");
    sub_1C2138((int *)(*(_DWORD *)(a1 + 8) + 388), (int)v10[0], "Topright");
    sub_1C2138((int *)(*(_DWORD *)(a1 + 8) + 408), (int)v10[0], "Left");
    sub_1C2138((int *)(*(_DWORD *)(a1 + 8) + 428), (int)v10[0], "Center");
    sub_1C2138((int *)(*(_DWORD *)(a1 + 8) + 448), (int)v10[0], "Right");
    sub_1C2138((int *)(*(_DWORD *)(a1 + 8) + 468), (int)v10[0], "Bottomleft");
    sub_1C2138((int *)(*(_DWORD *)(a1 + 8) + 488), (int)v10[0], "Bottom");
    sub_1C2138((int *)(*(_DWORD *)(a1 + 8) + 508), (int)v10[0], "Bottomright");
    Name = (Ogre *)Ogre::XMLNode::getName((Ogre::XMLNode *)v10);
    if ( Ogre::Stricmp(Name, "OffSet", v5) == 0 )
    {
      if ( Ogre::XMLNode::hasAttrib(v10, "x") )
      {
        v7 = *(_DWORD *)(a1 + 8);
        *(_DWORD *)(v7 + 528) = Ogre::XMLNode::attribToInt(v10, "x", v7);
      }
      if ( Ogre::XMLNode::hasAttrib(v10, "y") )
      {
        v8 = *(_DWORD *)(a1 + 8);
        *(_DWORD *)(v8 + 532) = Ogre::XMLNode::attribToInt(v10, "y", v6);
      }
    }
  }
  return result;
}


//======================================================================
// XMLTextureParser::LoadUIObjectParam(UIObject *,Ogre::XMLNode,bool)
// address: 0x001C2500   size: 0x5F6 (1526 bytes)
//======================================================================
int __fastcall XMLTextureParser::LoadUIObjectParam(int a1, LayoutFrame *a2, TiXmlNode *a3)
{
  int v5; // r7
  char *v6; // r0
  const char *v7; // r0
  int v8; // r7
  unsigned __int8 v9; // r0
  const char *v10; // r0
  unsigned int v11; // r6
  Ogre *v12; // r0
  const char *v13; // r2
  Ogre *v14; // r0
  const char *v15; // r2
  Ogre *v16; // r0
  const char *v17; // r2
  Ogre *v18; // r0
  const char *v19; // r2
  Ogre *v20; // r0
  const char *v21; // r2
  Ogre *v22; // r0
  const char *v23; // r2
  Ogre *v24; // r0
  const char *v25; // r2
  Ogre *v26; // r0
  const char *v27; // r2
  Ogre *v28; // r0
  const char *v29; // r2
  char *v30; // r0
  int v31; // r2
  Texture *v32; // r7
  int v33; // r6
  int v34; // r2
  int v35; // r2
  int v36; // r2
  int v37; // r0
  TiXmlElement *i; // r0
  Ogre *Name; // r0
  const char *v40; // r2
  unsigned int v41; // r2
  double v42; // r0
  Texture *v43; // r7
  int v44; // r0
  Ogre *v45; // r0
  const char *v46; // r2
  int v47; // r2
  int v48; // r7
  int v49; // r2
  int v50; // r7
  Ogre *v51; // r0
  const char *v52; // r2
  unsigned int v53; // r2
  unsigned int v54; // r2
  double v55; // r0
  double v56; // r0
  unsigned int v57; // r2
  int v58; // r2
  float v59; // r0
  double v60; // r0
  unsigned int v61; // r2
  float v62; // r7
  int v63; // r2
  float v64; // r0
  int v65; // r0
  Ogre *v66; // r0
  const char *v67; // r2
  Ogre *v68; // r0
  const char *v69; // r2
  Ogre *v70; // r0
  const char *v71; // r2
  Ogre *v72; // r0
  const char *v73; // r2
  double v74; // r0
  double v75; // r0
  unsigned int v76; // r2
  int v77; // r2
  float v78; // r0
  double v79; // r0
  unsigned int v80; // r2
  float v81; // r7
  int v82; // r2
  float v83; // r0
  Texture *v85; // [sp+8h] [bp-1Ch]
  Texture *v86; // [sp+8h] [bp-1Ch]
  Texture *v87; // [sp+8h] [bp-1Ch]
  Texture *v88; // [sp+8h] [bp-1Ch]
  Texture *v89; // [sp+8h] [bp-1Ch]
  float v90; // [sp+8h] [bp-1Ch]
  Texture *v91; // [sp+8h] [bp-1Ch]
  char *v92; // [sp+Ch] [bp-18h]
  char *v93; // [sp+Ch] [bp-18h]
  float v94; // [sp+Ch] [bp-18h]
  char *v95; // [sp+Ch] [bp-18h]
  int v96; // [sp+10h] [bp-14h]
  TiXmlNode *v97[2]; // [sp+14h] [bp-10h] BYREF
  TiXmlElement *v98[2]; // [sp+1Ch] [bp-8h] BYREF

  v97[0] = a3;
  XMLLayoutFrameParser::LoadUIObjectParam(a1, a2, a3);
  *(_DWORD *)(a1 + 8) = a2;
  if ( Ogre::XMLNode::attribToString(v97, "name") != 0 )
  {
    v5 = *(_DWORD *)(a1 + 8);
    v6 = (char *)Ogre::XMLNode::attribToString(v97, "name");
    UIObject::SetName(v5, v6);
  }
  if ( Ogre::XMLNode::attribToString(v97, "alphamode") != 0 )
  {
    Ogre::XMLNode::attribToString(v97, "name");
    v7 = (const char *)Ogre::XMLNode::attribToString(v97, "alphamode");
    v8 = XMLParseBlendMode(v7);
  }
  else
  {
    v8 = 2;
  }
  if ( Ogre::XMLNode::hasAttrib(v97, "gray") )
  {
    v85 = *(Texture **)(a1 + 8);
    v9 = (unsigned __int8)Ogre::XMLNode::attribToBool(v97, "gray");
    Texture::SetGray(v85, v9);
  }
  if ( Ogre::XMLNode::hasAttrib(v97, "color") )
  {
    v10 = (const char *)Ogre::XMLNode::attribToString(v97, "color");
    v11 = XMLParserColorQuad(v10);
    Texture::SetColor(*(Texture **)(a1 + 8), v11 << 8 >> 24, BYTE1(v11), (unsigned __int8)v11);
    Texture::SetBlendAlpha(*(Texture **)(a1 + 8), (float)HIBYTE(v11) / 255.0);
  }
  if ( Ogre::XMLNode::hasAttrib(v97, "DrawType") )
  {
    v12 = (Ogre *)Ogre::XMLNode::attribToString(v97, "DrawType");
    if ( Ogre::Stricmp(v12, "normal", v13) == 0 )
      *(_DWORD *)(*(_DWORD *)(a1 + 8) + 536) = 0;
    v14 = (Ogre *)Ogre::XMLNode::attribToString(v97, "DrawType");
    if ( Ogre::Stricmp(v14, "tile", v15) == 0 )
      *(_DWORD *)(*(_DWORD *)(a1 + 8) + 536) = 1;
    v16 = (Ogre *)Ogre::XMLNode::attribToString(v97, "DrawType");
    if ( Ogre::Stricmp(v16, "ninesquare", v17) == 0 )
      *(_DWORD *)(*(_DWORD *)(a1 + 8) + 536) = 2;
    v18 = (Ogre *)Ogre::XMLNode::attribToString(v97, "DrawType");
    if ( Ogre::Stricmp(v18, "center", v19) == 0 )
      *(_DWORD *)(*(_DWORD *)(a1 + 8) + 536) = 3;
    v20 = (Ogre *)Ogre::XMLNode::attribToString(v97, "DrawType");
    if ( Ogre::Stricmp(v20, "height", v21) == 0 )
      *(_DWORD *)(*(_DWORD *)(a1 + 8) + 536) = 4;
  }
  if ( Ogre::XMLNode::hasAttrib(v97, "UVType") )
  {
    v22 = (Ogre *)Ogre::XMLNode::attribToString(v97, "UVType");
    if ( Ogre::Stricmp(v22, "normal", v23) == 0 )
      *(_DWORD *)(*(_DWORD *)(a1 + 8) + 540) = 0;
    v24 = (Ogre *)Ogre::XMLNode::attribToString(v97, "UVType");
    if ( Ogre::Stricmp(v24, "turn180", v25) == 0 )
      *(_DWORD *)(*(_DWORD *)(a1 + 8) + 540) = 2;
    v26 = (Ogre *)Ogre::XMLNode::attribToString(v97, "UVType");
    if ( Ogre::Stricmp(v26, "mirroeu", v27) == 0 )
      *(_DWORD *)(*(_DWORD *)(a1 + 8) + 540) = 4;
    v28 = (Ogre *)Ogre::XMLNode::attribToString(v97, "UVType");
    if ( Ogre::Stricmp(v28, "mirroev", v29) == 0 )
      *(_DWORD *)(*(_DWORD *)(a1 + 8) + 540) = 5;
  }
  if ( Ogre::XMLNode::attribToString(v97, "file") != 0 )
  {
    v86 = (Texture *)(*(_DWORD *)(a1 + 8) + 240);
    v30 = (char *)Ogre::XMLNode::attribToString(v97, "file");
    sub_3BE508((int)v86, v30);
    v87 = (Texture *)(*(int (__fastcall **)(int, _DWORD, int, int, int, int))(*(_DWORD *)g_pDisplay + 72))(
                       g_pDisplay,
                       *(_DWORD *)(*(_DWORD *)(a1 + 8) + 240),
                       v8,
                       *(_DWORD *)(a1 + 8) + 256,
                       *(_DWORD *)(a1 + 8) + 260,
                       1);
    Texture::SetTextureHuires(*(Texture **)(a1 + 8), v87);
    (*(void (__fastcall **)(int, Texture *))(*(_DWORD *)g_pDisplay + 92))(g_pDisplay, v87);
    *(_DWORD *)(*(_DWORD *)(a1 + 8) + 236) = v8;
    if ( Ogre::XMLNode::attribToString(v97, "x") != 0 )
    {
      v32 = *(Texture **)(a1 + 8);
      v33 = Ogre::XMLNode::attribToInt(v97, "x", v31);
      v88 = (Texture *)Ogre::XMLNode::attribToInt(v97, "y", v34);
      v92 = (char *)Ogre::XMLNode::attribToInt(v97, "w", v35);
      v37 = Ogre::XMLNode::attribToInt(v97, "h", v36);
      Texture::SetTexUV(v32, v33, (int)v88, (int)v92, v37);
    }
  }
  for ( i = (TiXmlElement *)Ogre::XMLNode::iterateChild(v97); ; i = (TiXmlElement *)Ogre::XMLNode::iterateChild(
                                                                                      v97,
                                                                                      v98[0]) )
  {
    v98[0] = i;
    if ( i == nullptr )
      break;
    Name = (Ogre *)Ogre::XMLNode::getName((Ogre::XMLNode *)v98);
    if ( Ogre::Stricmp(Name, "Angle", v40) == 0 && Ogre::XMLNode::attribToString(v98, "value") != 0 )
    {
      HIDWORD(v42) = "value";
      LODWORD(v42) = v98;
      v43 = *(Texture **)(a1 + 8);
      v44 = Ogre::XMLNode::attribToFloat(v42, v41);
      Texture::SetAngle(v43, *(float *)&v44);
    }
    v45 = (Ogre *)Ogre::XMLNode::getName((Ogre::XMLNode *)v98);
    if ( Ogre::Stricmp(v45, "UVAnimation", v46) == 0 )
    {
      if ( Ogre::XMLNode::attribToString(v98, "texrows") != 0 )
      {
        v48 = *(_DWORD *)(a1 + 8);
        *(_DWORD *)(v48 + 264) = Ogre::XMLNode::attribToInt(v98, "texrows", v47);
      }
      if ( Ogre::XMLNode::attribToString(v98, "texcols") != 0 )
      {
        v50 = *(_DWORD *)(a1 + 8);
        *(_DWORD *)(v50 + 268) = Ogre::XMLNode::attribToInt(v98, "texcols", v49);
      }
    }
    v51 = (Ogre *)Ogre::XMLNode::getName((Ogre::XMLNode *)v98);
    if ( Ogre::Stricmp(v51, "TexCoords", v52) == 0 )
    {
      if ( Ogre::XMLNode::attribToString(v98, "left") != 0
        && Ogre::XMLNode::attribToString(v98, "right") != 0
        && Ogre::XMLNode::attribToString(v98, "realwidth") != 0 )
      {
        HIDWORD(v74) = "right";
        LODWORD(v74) = v98;
        v75 = COERCE_DOUBLE(__PAIR64__("left", Ogre::XMLNode::attribToFloat(v74, v53)));
        v89 = (Texture *)LODWORD(v75);
        LODWORD(v75) = v98;
        v90 = *(float *)&v89 - COERCE_FLOAT(Ogre::XMLNode::attribToFloat(v75, v76));
        v78 = v90 * (float)Ogre::XMLNode::attribToInt(v98, "realwidth", v77);
        v79 = COERCE_DOUBLE(__PAIR64__("left", FloatToInt(v78)));
        v91 = (Texture *)LODWORD(v79);
        LODWORD(v79) = v98;
        v81 = COERCE_FLOAT(Ogre::XMLNode::attribToFloat(v79, v80));
        v83 = v81 * (float)Ogre::XMLNode::attribToInt(v98, "realwidth", v82);
        v96 = FloatToInt(v83);
      }
      else
      {
        v91 = nullptr;
        v96 = 0;
      }
      if ( Ogre::XMLNode::attribToString(v98, "bottom") != 0
        && Ogre::XMLNode::attribToString(v98, "top") != 0
        && Ogre::XMLNode::attribToString(v98, "realheight") != 0 )
      {
        HIDWORD(v55) = "bottom";
        LODWORD(v55) = v98;
        v56 = COERCE_DOUBLE(__PAIR64__("top", Ogre::XMLNode::attribToFloat(v55, v54)));
        v93 = (char *)LODWORD(v56);
        LODWORD(v56) = v98;
        v94 = *(float *)&v93 - COERCE_FLOAT(Ogre::XMLNode::attribToFloat(v56, v57));
        v59 = v94 * (float)Ogre::XMLNode::attribToInt(v98, "realheight", v58);
        v60 = COERCE_DOUBLE(__PAIR64__("top", FloatToInt(v59)));
        v95 = (char *)LODWORD(v60);
        LODWORD(v60) = v98;
        v62 = COERCE_FLOAT(Ogre::XMLNode::attribToFloat(v60, v61));
        v64 = v62 * (float)Ogre::XMLNode::attribToInt(v98, "realheight", v63);
        v65 = FloatToInt(v64);
      }
      else
      {
        v95 = nullptr;
        v65 = 0;
      }
      *(_DWORD *)(*(_DWORD *)(a1 + 8) + 272) = v96;
      *(_DWORD *)(*(_DWORD *)(a1 + 8) + 276) = v65;
      *(_DWORD *)(*(_DWORD *)(a1 + 8) + 280) = v91;
      *(_DWORD *)(*(_DWORD *)(a1 + 8) + 284) = v95;
    }
    if ( *(_DWORD *)(*(_DWORD *)(a1 + 8) + 536) == 1 )
    {
      v66 = (Ogre *)Ogre::XMLNode::getName((Ogre::XMLNode *)v98);
      if ( Ogre::Stricmp(v66, "Tile", v67) == 0 )
        XMLTextureParser::BackDropParser(a1, v98[0]);
    }
    if ( *(_DWORD *)(*(_DWORD *)(a1 + 8) + 536) == 2 )
    {
      v68 = (Ogre *)Ogre::XMLNode::getName((Ogre::XMLNode *)v98);
      if ( Ogre::Stricmp(v68, "NineSquare", v69) == 0 )
        XMLTextureParser::NineSquareParser(a1, v98[0]);
    }
    if ( *(_DWORD *)(*(_DWORD *)(a1 + 8) + 536) == 3 )
    {
      v70 = (Ogre *)Ogre::XMLNode::getName((Ogre::XMLNode *)v98);
      if ( Ogre::Stricmp(v70, "Center", v71) == 0 )
        XMLTextureParser::NineSquareParser(a1, v98[0]);
    }
    if ( *(_DWORD *)(*(_DWORD *)(a1 + 8) + 536) == 4 )
    {
      v72 = (Ogre *)Ogre::XMLNode::getName((Ogre::XMLNode *)v98);
      if ( Ogre::Stricmp(v72, "Height", v73) == 0 )
        XMLTextureParser::NineSquareParser(a1, v98[0]);
    }
  }
  return 1;
}

