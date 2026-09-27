// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: XMLSliderParser

//======================================================================
// XMLSliderParser::XMLSliderParser(void)
// address: 0x001A7854   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN15XMLSliderParserC1Ev'
void __fastcall XMLSliderParser::XMLSliderParser(XMLSliderParser *this)
{
  XMLFrameParser::XMLFrameParser(this);
  *(_DWORD *)this = &off_458E38;
}


//======================================================================
// XMLSliderParser::~XMLSliderParser()
// address: 0x001A7870   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN15XMLSliderParserD1Ev'
void __fastcall XMLSliderParser::~XMLSliderParser(XMLSliderParser *this)
{
  *(_DWORD *)this = &off_458E38;
  XMLFrameParser::~XMLFrameParser(this);
}


//======================================================================
// XMLSliderParser::LoadUIObjectParam(UIObject *,Ogre::XMLNode,bool)
// address: 0x001A788C   size: 0x1EE (494 bytes)
//======================================================================
int __fastcall XMLSliderParser::LoadUIObjectParam(int a1, int a2, TiXmlNode *a3, int a4)
{
  const char *v6; // r0
  int v7; // r2
  const char *v8; // r0
  unsigned int v9; // r2
  double v10; // r0
  Slider *v11; // r7
  int v12; // r0
  unsigned int v13; // r2
  double v14; // r0
  Slider *v15; // r7
  int v16; // r0
  unsigned int v17; // r2
  double v18; // r0
  int v19; // r7
  int v20; // r0
  unsigned int v21; // r2
  double v22; // r0
  Slider *v23; // r7
  int v24; // r0
  int v25; // r6
  char *v26; // r0
  const char *Name; // r0
  XMLTextureParser *v28; // r6
  int v29; // r7
  TiXmlNode *v32[2]; // [sp+4h] [bp-18h] BYREF
  _BYTE v33[4]; // [sp+Ch] [bp-10h] BYREF
  TiXmlElement *v34; // [sp+10h] [bp-Ch] BYREF
  _DWORD v35[2]; // [sp+14h] [bp-8h] BYREF

  v32[0] = a3;
  XMLFrameParser::LoadUIObjectParam(a1, a2);
  *(_DWORD *)(a1 + 12) = a2;
  sub_3BEB1C(v33, a2 + 8);
  if ( Ogre::XMLNode::attribToString(v32, "orientation") != 0 )
  {
    v6 = (const char *)Ogre::XMLNode::attribToString(v32, "orientation");
    if ( j_strcasecmp(v6, "HORIZONTAL") == 0 )
    {
      v7 = 1;
LABEL_6:
      *(_DWORD *)(*(_DWORD *)(a1 + 12) + 432) = v7;
      goto LABEL_7;
    }
    v8 = (const char *)Ogre::XMLNode::attribToString(v32, "orientation");
    if ( j_strcasecmp(v8, "VERTICAL") == 0 )
    {
      v7 = 2;
      goto LABEL_6;
    }
  }
LABEL_7:
  if ( Ogre::XMLNode::attribToString(v32, "minValue") != 0 )
  {
    HIDWORD(v10) = "minValue";
    LODWORD(v10) = v32;
    v11 = *(Slider **)(a1 + 12);
    v12 = Ogre::XMLNode::attribToFloat(v10, v9);
    Slider::SetMinValue(v11, *(float *)&v12);
  }
  if ( Ogre::XMLNode::attribToString(v32, "maxValue") != 0 )
  {
    HIDWORD(v14) = "maxValue";
    LODWORD(v14) = v32;
    v15 = *(Slider **)(a1 + 12);
    v16 = Ogre::XMLNode::attribToFloat(v14, v13);
    Slider::SetMaxValue(v15, *(float *)&v16);
  }
  if ( Ogre::XMLNode::attribToString(v32, "valueStep") != 0 )
  {
    HIDWORD(v18) = "valueStep";
    LODWORD(v18) = v32;
    v19 = *(_DWORD *)(a1 + 12);
    v20 = Ogre::XMLNode::attribToFloat(v18, v17);
    Slider::SetValueStep(v19, *(float *)&v20);
  }
  if ( Ogre::XMLNode::attribToString(v32, "defaultValue") != 0 )
  {
    HIDWORD(v22) = "defaultValue";
    LODWORD(v22) = v32;
    v23 = *(Slider **)(a1 + 12);
    v24 = Ogre::XMLNode::attribToFloat(v22, v21);
    Slider::SetValue(v23, *(float *)&v24);
  }
  v25 = *(_DWORD *)(a1 + 12);
  if ( *(_DWORD *)(v25 + 412) != 0 )
    UIObject::SetName(*(UIObject **)(v25 + 412), "$parentThumbRegion");
  else
    *(_DWORD *)(v25 + 412) = FrameManager::CreateObject(
                               (FrameManager *)g_pFrameMgr,
                               "Texture",
                               "$parentThumbRegion",
                               nullptr);
  sub_3BE508(*(_DWORD *)(*(_DWORD *)(a1 + 12) + 412) + 132, "$parent");
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 12) + 412) + 44) = *(_DWORD *)(*(_DWORD *)(a1 + 12) + 44);
  v34 = (TiXmlElement *)Ogre::XMLNode::iterateChild(v32);
  while ( v34 != nullptr )
  {
    v35[0] = &byte_55FB88;
    if ( Ogre::XMLNode::attribToString(&v34, "name") != 0 )
    {
      v26 = (char *)Ogre::XMLNode::attribToString(&v34, "name");
      sub_3BE508((int)v35, v26);
    }
    Name = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)&v34);
    if ( j_strcasecmp(Name, "ThumbTexture") == 0 )
    {
      v28 = (XMLTextureParser *)operator new(0xCu);
      XMLTextureParser::XMLTextureParser(v28);
      v29 = (**(int (__fastcall ***)(XMLTextureParser *, _DWORD, TiXmlElement *, int))v28)(
              v28,
              *(_DWORD *)(*(_DWORD *)(a1 + 12) + 412),
              v34,
              a4);
      if ( v29 == 0 )
      {
        sub_3BDF80(v35);
        goto LABEL_28;
      }
      Frame::AddTexture(*(_DWORD *)(a1 + 12), 2, *(_DWORD *)(*(_DWORD *)(a1 + 12) + 412));
      XMLUIObjectParser::~XMLUIObjectParser(v28);
      operator delete(v28);
    }
    v34 = (TiXmlElement *)Ogre::XMLNode::iterateChild(v32, v34);
    sub_3BDF80(v35);
  }
  v29 = 1;
LABEL_28:
  sub_3BDF80(v33);
  return v29;
}

