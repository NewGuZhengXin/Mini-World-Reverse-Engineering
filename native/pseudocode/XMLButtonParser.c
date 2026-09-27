// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: XMLButtonParser

//======================================================================
// XMLButtonParser::XMLButtonParser(void)
// address: 0x001C0C0C   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN15XMLButtonParserC2Ev'
void __fastcall XMLButtonParser::XMLButtonParser(XMLButtonParser *this)
{
  XMLFrameParser::XMLFrameParser(this);
  *(_DWORD *)this = &off_459190;
}


//======================================================================
// XMLButtonParser::~XMLButtonParser()
// address: 0x001C0C28   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN15XMLButtonParserD1Ev'
void __fastcall XMLButtonParser::~XMLButtonParser(XMLButtonParser *this)
{
  *(_DWORD *)this = &off_459190;
  XMLFrameParser::~XMLFrameParser(this);
}


//======================================================================
// XMLButtonParser::ParserTextureRegion(Texture *,Ogre::XMLNode,bool)
// address: 0x001C0C44   size: 0x62 (98 bytes)
//======================================================================
const char *__fastcall XMLButtonParser::ParserTextureRegion(
        int a1,
        const char *UIObjectFromXML,
        TiXmlElement *a3,
        int a4)
{
  const char *v6; // r0
  TiXmlElement *v8[2]; // [sp+4h] [bp-18h] BYREF
  _BYTE v9[16]; // [sp+Ch] [bp-10h] BYREF

  v8[0] = a3;
  XMLTextureParser::XMLTextureParser((XMLTextureParser *)v9);
  if ( (UIObjectFromXML == nullptr || Ogre::XMLNode::hasAttrib(v8, "inherits"))
    && (v6 = (const char *)Ogre::XMLNode::attribToString(v8, "name"),
        (UIObjectFromXML = XMLManager::CreateUIObjectFromXML("Texture", v6, v8[0])) == nullptr)
    || XMLTextureParser::LoadUIObjectParam(v9, UIObjectFromXML, v8[0], a4) == 0 )
  {
    UIObjectFromXML = nullptr;
  }
  XMLTextureParser::~XMLTextureParser((XMLTextureParser *)v9);
  return UIObjectFromXML;
}


//======================================================================
// XMLButtonParser::LoadUIObjectParam(UIObject *,Ogre::XMLNode,bool)
// address: 0x001C0CB4   size: 0x226 (550 bytes)
//======================================================================
int __fastcall XMLButtonParser::LoadUIObjectParam(int a1, int a2, TiXmlNode *a3, int a4)
{
  TiXmlElement *i; // r0
  const char *Name; // r5
  XMLFontStringParser *v8; // r5
  const char *v9; // r0
  __int64 v10; // r0
  int v11; // r4
  int v12; // r6
  char *v13; // r0
  int v14; // r5
  const char *StateRegion; // r0
  Texture *v16; // r6
  int v18; // r2
  int v19; // r7
  unsigned int v20; // r2
  double v21; // r0
  int v22; // r7
  FontString *v23; // r7
  const char *v24; // r0
  int v26; // [sp+4h] [bp-20h]
  TiXmlNode *v28; // [sp+14h] [bp-10h] BYREF
  _BYTE v29[4]; // [sp+18h] [bp-Ch] BYREF
  TiXmlElement *v30[2]; // [sp+1Ch] [bp-8h] BYREF

  v28 = a3;
  XMLFrameParser::LoadUIObjectParam(a1, a2);
  *(_DWORD *)(a1 + 12) = a2;
  sub_3BEB1C(v29, a2 + 8);
  for ( i = (TiXmlElement *)Ogre::XMLNode::iterateChild(&v28);
        ;
        i = (TiXmlElement *)Ogre::XMLNode::iterateChild(&v28, v30[0]) )
  {
    v30[0] = i;
    if ( i == nullptr )
      break;
    Name = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)v30);
    if ( j_strcasecmp(Name, "NormalTexture") == 0 )
    {
      v14 = 0;
LABEL_23:
      StateRegion = (const char *)Button::GetStateRegion(*(Button **)(a1 + 12), v14);
      v16 = (Texture *)XMLButtonParser::ParserTextureRegion(a1, StateRegion, v30[0], a4);
      if ( v16 == nullptr )
        goto LABEL_18;
      Button::ReplaceStateRegion(*(Button **)(a1 + 12), v14, v16);
      UIObject::release(v16);
      continue;
    }
    if ( j_strcasecmp(Name, "PushedTexture") == 0 )
    {
      v14 = 1;
      goto LABEL_23;
    }
    if ( j_strcasecmp(Name, "HighlightTexture") == 0 )
    {
      v14 = 2;
      goto LABEL_23;
    }
    if ( j_strcasecmp(Name, "DisabledTexture") == 0 )
    {
      v14 = 3;
      goto LABEL_23;
    }
    if ( j_strcasecmp(Name, "CheckedTexture") == 0 )
    {
      v14 = 4;
      goto LABEL_23;
    }
    if ( j_strcasecmp(Name, "FontString") == 0 )
    {
      v8 = (XMLFontStringParser *)operator new(0xCu);
      XMLFontStringParser::XMLFontStringParser(v8);
      v26 = *(_DWORD *)(a1 + 12);
      if ( *(_DWORD *)(v26 + 440) == 0 )
      {
        v9 = (const char *)Ogre::XMLNode::attribToString(v30, "name");
        v10 = (unsigned int)XMLManager::CreateUIObjectFromXML("FontString", v9, v30[0]) | 0x300000000LL;
        *(_DWORD *)(v26 + 440) = v10;
        LODWORD(v10) = *(_DWORD *)(a1 + 12);
        Frame::AddFontString(v10, *(_DWORD **)(v10 + 440));
        UIObject::release(*(_DWORD **)(*(_DWORD *)(a1 + 12) + 440));
      }
      if ( (**(int (__fastcall ***)(XMLFontStringParser *, _DWORD, TiXmlElement *, int))v8)(
             v8,
             *(_DWORD *)(*(_DWORD *)(a1 + 12) + 440),
             v30[0],
             a4) == 0 )
      {
LABEL_18:
        v11 = 0;
        goto LABEL_37;
      }
      XMLUIObjectParser::~XMLUIObjectParser(v8);
      operator delete(v8);
    }
    else if ( j_strcasecmp(Name, "OnClickSound") == 0 && Ogre::XMLNode::attribToString(v30, "file") != 0 )
    {
      v12 = *(_DWORD *)(a1 + 12);
      v13 = (char *)Ogre::XMLNode::attribToString(v30, "file");
      sub_3BE508(v12 + 436, v13);
    }
  }
  if ( Ogre::XMLNode::hasAttrib(&v28, "click_threshold") )
  {
    v19 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(v19 + 476) = Ogre::XMLNode::attribToInt(&v28, "click_threshold", v18);
  }
  if ( Ogre::XMLNode::hasAttrib(&v28, "holddown_threshold") )
  {
    LODWORD(v21) = &v28;
    HIDWORD(v21) = "holddown_threshold";
    v22 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(v22 + 480) = Ogre::XMLNode::attribToFloat(v21, v20);
  }
  if ( Ogre::XMLNode::attribToString(&v28, "text") != 0 )
  {
    v23 = *(FontString **)(*(_DWORD *)(a1 + 12) + 440);
    if ( v23 != nullptr )
    {
      v24 = (const char *)Ogre::XMLNode::attribToString(&v28, "text");
      FontString::SetText(v23, v24);
    }
  }
  if ( Ogre::XMLNode::attribToString(&v28, "checked") != 0 && Ogre::XMLNode::attribToBool(&v28, "checked") != nullptr )
    *(_DWORD *)(*(_DWORD *)(a1 + 12) + 292) |= 0x10u;
  v11 = 1;
LABEL_37:
  sub_3BDF80(v29);
  return v11;
}

