// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: XMLManager

//======================================================================
// XMLManager::XMLManager(void)
// address: 0x001BEC7E   size: 0x2 (2 bytes)
//======================================================================
// Alternative name is '_ZN10XMLManagerC2Ev'
void __fastcall XMLManager::XMLManager(XMLManager *this)
{
  ;
}


//======================================================================
// XMLManager::~XMLManager()
// address: 0x001BEC80   size: 0x2 (2 bytes)
//======================================================================
// Alternative name is '_ZN10XMLManagerD2Ev'
void __fastcall XMLManager::~XMLManager(XMLManager *this)
{
  ;
}


//======================================================================
// XMLManager::LoadUICursor(Ogre::XMLNode)
// address: 0x001BEC84   size: 0xB8 (184 bytes)
//======================================================================
TiXmlElement *__fastcall XMLManager::LoadUICursor(int a1, TiXmlNode *a2)
{
  TiXmlElement *result; // r0
  int v3; // r2
  int v4; // r2
  int v5; // r2
  int v6; // r2
  int v7; // r6
  int v8; // r5
  int v9; // r2
  UICursor *v10; // r7
  const char *Name; // r0
  int v12; // [sp+14h] [bp-20h]
  int v13; // [sp+18h] [bp-1Ch]
  int v14; // [sp+1Ch] [bp-18h]
  char *v15; // [sp+20h] [bp-14h]
  TiXmlNode *v16[2]; // [sp+24h] [bp-10h] BYREF
  TiXmlElement *v17[2]; // [sp+2Ch] [bp-8h] BYREF

  v16[0] = a2;
  for ( result = (TiXmlElement *)Ogre::XMLNode::iterateChild(v16);
        ;
        result = (TiXmlElement *)Ogre::XMLNode::iterateChild(v16, v17[0]) )
  {
    v17[0] = result;
    if ( result == nullptr )
      break;
    v12 = Ogre::XMLNode::attribToInt(v17, "time", v3);
    v13 = Ogre::XMLNode::attribToInt(v17, "row", v4);
    v14 = Ogre::XMLNode::attribToInt(v17, "col", v5);
    v7 = 0;
    if ( Ogre::XMLNode::hasAttrib(v17, "hotspotx") )
      v7 = Ogre::XMLNode::attribToInt(v17, "hotspotx", v6);
    v8 = 0;
    if ( Ogre::XMLNode::hasAttrib(v17, "hotspoty") )
      v8 = Ogre::XMLNode::attribToInt(v17, "hotspoty", v9);
    v10 = *(UICursor **)(g_pFrameMgr + 140);
    v15 = (char *)Ogre::XMLNode::attribToString(v17, "file");
    Name = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)v17);
    UICursor::addCursor(v10, v15, Name, v12, v13, v14, v7, v8);
  }
  return result;
}


//======================================================================
// XMLManager::LoadUIFont(Ogre::XMLNode)
// address: 0x001BED58   size: 0x184 (388 bytes)
//======================================================================
int __fastcall XMLManager::LoadUIFont(int a1, TiXmlNode *a2)
{
  char *v2; // r0
  char *v3; // r0
  TiXmlElement *i; // r0
  const char *Name; // r0
  int v6; // r2
  const char *v7; // r0
  const char *v8; // r0
  int v9; // r0
  int v10; // r3
  const char *v11; // r0
  int *v13; // [sp+0h] [bp-54h]
  TiXmlNode *v14[2]; // [sp+4h] [bp-50h] BYREF
  TiXmlElement *v15; // [sp+Ch] [bp-48h] BYREF
  char *v16; // [sp+10h] [bp-44h] BYREF
  char *v17; // [sp+14h] [bp-40h] BYREF
  unsigned __int8 v18; // [sp+18h] [bp-3Ch]
  int v19; // [sp+1Ch] [bp-38h]
  int v20; // [sp+20h] [bp-34h]
  int v21; // [sp+24h] [bp-30h]
  int v22; // [sp+28h] [bp-2Ch]
  int v23; // [sp+2Ch] [bp-28h]
  _BYTE v24[4]; // [sp+30h] [bp-24h] BYREF
  _DWORD v25[8]; // [sp+34h] [bp-20h] BYREF

  v14[0] = a2;
  v16 = &byte_55FB88;
  v17 = &byte_55FB88;
  v21 = 0;
  sub_3BE508((int)&v16, (char *)&unk_3FB8EA);
  sub_3BE508((int)&v17, (char *)&unk_3FB8EA);
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v23 = 0;
  v22 = 1065353216;
  if ( Ogre::XMLNode::attribToString(v14, "name") != 0 )
  {
    v2 = (char *)Ogre::XMLNode::attribToString(v14, "name");
    sub_3BE508((int)&v16, v2);
  }
  if ( Ogre::XMLNode::attribToString(v14, "type") != 0 )
  {
    v3 = (char *)Ogre::XMLNode::attribToString(v14, "type");
    sub_3BE508((int)&v17, v3);
  }
  for ( i = (TiXmlElement *)Ogre::XMLNode::iterateChild(v14); ; i = (TiXmlElement *)Ogre::XMLNode::iterateChild(
                                                                                      v14,
                                                                                      v15) )
  {
    v15 = i;
    if ( i == nullptr )
      break;
    Name = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)&v15);
    if ( j_strcasecmp(Name, "FontHeight") == 0 && Ogre::XMLNode::attribToString(&v15, "value") != 0 )
    {
      v20 = Ogre::XMLNode::attribToInt(&v15, "value", v6);
      v19 = v20;
    }
  }
  if ( Ogre::XMLNode::hasAttrib(v14, "extType") )
  {
    v7 = (const char *)Ogre::XMLNode::attribToString(v14, "extType");
    if ( j_strcasecmp(v7, "normal") != 0 )
    {
      v8 = (const char *)Ogre::XMLNode::attribToString(v14, "extType");
      v9 = j_strcasecmp(v8, "underline");
      v10 = 2;
      if ( v9 != 0 )
      {
        v11 = (const char *)Ogre::XMLNode::attribToString(v14, "extType");
        if ( j_strcasecmp(v11, "italic") != 0 )
          goto LABEL_18;
        v10 = 1;
      }
      v23 = v10;
      goto LABEL_18;
    }
    v23 = 0;
  }
LABEL_18:
  v18 = (unsigned __int8)Ogre::XMLNode::attribToBool(v14, "bitmap");
  v13 = (int *)g_pFrameMgr;
  sub_3BEB1C(v24, &v16);
  sub_3BEB1C(v25, &v17);
  LOBYTE(v25[1]) = v18;
  v25[2] = v19;
  v25[3] = v20;
  v25[4] = v21;
  v25[5] = v22;
  v25[6] = v23;
  FrameManager::AddGameFont(v13, (int)v24);
  sub_3BDF80(v25);
  sub_3BDF80(v24);
  sub_3BDF80(&v17);
  return sub_3BDF80(&v16);
}


//======================================================================
// XMLManager::LoadUIAccels(Ogre::XMLNode)
// address: 0x001BEF0C   size: 0x108 (264 bytes)
//======================================================================
_DWORD *__fastcall XMLManager::LoadUIAccels(int a1, TiXmlElement *a2)
{
  const char *v2; // r0
  const char *v3; // r0
  int v4; // r2
  _BYTE v6[252]; // [sp+0h] [bp-21Ch] BYREF
  TiXmlElement *v7[68]; // [sp+104h] [bp-118h] BYREF

  v7[0] = a2;
  j_memset(&v7[2], 0, 0x108u);
  if ( Ogre::XMLNode::attribToString(v7, "keydown") != 0 )
  {
    v2 = (const char *)Ogre::XMLNode::attribToString(v7, "keydown");
    j_strncpy((char *)&v7[3] + 3, v2, 0x80u);
  }
  if ( Ogre::XMLNode::attribToString(v7, "keyup") != 0 )
  {
    v3 = (const char *)Ogre::XMLNode::attribToString(v7, "keyup");
    j_strncpy((char *)&v7[35] + 3, v3, 0x80u);
  }
  if ( Ogre::XMLNode::attribToString(v7, "key") != 0 )
    v7[2] = (TiXmlElement *)Ogre::XMLNode::attribToInt(v7, "key", v4);
  if ( Ogre::XMLNode::attribToString(v7, "alt") != 0 )
    BYTE2(v7[3]) = (unsigned __int8)Ogre::XMLNode::attribToBool(v7, "alt");
  if ( Ogre::XMLNode::attribToString(v7, "ctrl") != 0 )
    BYTE1(v7[3]) = (unsigned __int8)Ogre::XMLNode::attribToBool(v7, "ctrl");
  if ( Ogre::XMLNode::attribToString(v7, "shift") != 0 )
    LOBYTE(v7[3]) = (unsigned __int8)Ogre::XMLNode::attribToBool(v7, "shift");
  j_memcpy(v6, &v7[5], sizeof(v6));
  return FrameManager::AddGameAccels(g_pFrameMgr);
}


//======================================================================
// XMLManager::CreateUIObjectFromXML(char const*,char const*,Ogre::XMLNode)
// address: 0x001BF324   size: 0x7C (124 bytes)
//======================================================================
const char *__fastcall XMLManager::CreateUIObjectFromXML(const char *a1, const char *a2, TiXmlElement *a3)
{
  const char *v3; // r5
  char *v5; // r0
  UIObject *Object; // r7
  FrameManager *v8; // [sp+8h] [bp-Ch]
  TiXmlElement *v9[2]; // [sp+Ch] [bp-8h] BYREF

  v3 = a1;
  v9[0] = a3;
  if ( a1 != nullptr )
  {
    if ( a2 != nullptr )
    {
      if ( a3 != nullptr )
      {
        if ( Ogre::XMLNode::attribToString(v9, "inherits") == 0
          || (v8 = (FrameManager *)g_pFrameMgr,
              v5 = (char *)Ogre::XMLNode::attribToString(v9, "inherits"),
              (Object = FrameManager::CreateObject(v8, v3, a2, v5)) == nullptr) )
        {
          Object = FrameManager::CreateObject((FrameManager *)g_pFrameMgr, v3, a2, nullptr);
        }
        v3 = (const char *)Object;
        if ( Ogre::XMLNode::attribToBool(v9, "virtual") != nullptr )
          *((_BYTE *)Object + 4) = 1;
      }
      else
      {
        return nullptr;
      }
    }
    else
    {
      return nullptr;
    }
  }
  return v3;
}


//======================================================================
// XMLManager::CreateObjectByType(Ogre::XMLNode,UIObject *&,XMLUIObjectParser *&,std::string)
// address: 0x001BF3AC   size: 0x26C (620 bytes)
//======================================================================
int __fastcall XMLManager::CreateObjectByType(TiXmlElement *a1, const char **a2, XMLListBoxParser **a3)
{
  int result; // r0
  const char *Name; // r6
  char *v7; // r0
  XMLTextureParser *v8; // r6
  XMLDrawLineFrameParser *v9; // r6
  const char *v10; // r0
  const char *v11; // r1
  XMLListBoxParser *v12; // r6
  char *v13; // [sp+0h] [bp-4h]
  char *v14; // [sp+0h] [bp-4h]
  TiXmlElement *v15; // [sp+4h] [bp+0h] BYREF
  _DWORD v16[2]; // [sp+Ch] [bp+8h] BYREF

  v15 = a1;
  result = Ogre::XMLNode::attribToString(&v15, "name");
  if ( result != 0 )
  {
    Name = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)&v15);
    v7 = (char *)Ogre::XMLNode::attribToString(&v15, "name");
    sub_3BF0BC((int)v16, v7);
    v13 = "Texture";
    if ( j_strcasecmp(Name, "Texture") == 0 )
    {
      v8 = (XMLTextureParser *)operator new(0xCu);
      XMLTextureParser::XMLTextureParser(v8);
      goto LABEL_36;
    }
    v14 = "DrawLineFrame";
    if ( j_strcasecmp(Name, "DrawLineFrame") == 0 )
    {
      v9 = (XMLDrawLineFrameParser *)operator new(0xCu);
      XMLDrawLineFrameParser::XMLDrawLineFrameParser(v9);
    }
    else
    {
      v14 = "FontString";
      if ( j_strcasecmp(Name, "FontString") == 0 )
        goto LABEL_10;
      v14 = "ModelView";
      if ( j_strcasecmp(Name, "ModelView") == 0 )
      {
        v9 = (XMLDrawLineFrameParser *)operator new(0x10u);
        XMLModelViewParser::XMLModelViewParser(v9);
        goto LABEL_17;
      }
      v14 = "Frame";
      if ( j_strcasecmp(Name, "Frame") == 0 )
      {
LABEL_10:
        v9 = (XMLDrawLineFrameParser *)operator new(0xCu);
        XMLFrameParser::XMLFrameParser(v9);
        goto LABEL_17;
      }
      v14 = "Button";
      if ( j_strcasecmp(Name, "Button") == 0 )
      {
        v9 = (XMLDrawLineFrameParser *)operator new(0x10u);
        XMLButtonParser::XMLButtonParser(v9);
      }
      else
      {
        v14 = "EditBox";
        if ( j_strcasecmp(Name, "EditBox") == 0 )
        {
          v9 = (XMLDrawLineFrameParser *)operator new(0x10u);
          XMLEditBoxParser::XMLEditBoxParser(v9);
        }
        else
        {
          v14 = "Slider";
          if ( j_strcasecmp(Name, "Slider") != 0 )
          {
            if ( j_strcasecmp(Name, "ListBox") == 0 )
            {
              v12 = (XMLListBoxParser *)operator new(0x10u);
              XMLListBoxParser::XMLListBoxParser(v12);
              *a3 = v12;
              v10 = "ListBox";
LABEL_37:
              v11 = (const char *)v16[0];
              goto LABEL_38;
            }
            v13 = "ScrollFrame";
            if ( j_strcasecmp(Name, "ScrollFrame") == 0 )
            {
              v8 = (XMLTextureParser *)operator new(0x10u);
              XMLScrollFrameParser::XMLScrollFrameParser(v8);
            }
            else
            {
              v13 = "SlidingFrame";
              if ( j_strcasecmp(Name, "SlidingFrame") == 0 )
              {
                v8 = (XMLTextureParser *)operator new(0xCu);
                XMLSlidingFrameParser::XMLSlidingFrameParser(v8);
              }
              else
              {
                v13 = "LineFrame";
                if ( j_strcasecmp(Name, "LineFrame") == 0 )
                {
                  v8 = (XMLTextureParser *)operator new(0xCu);
                  XMLLineFrameParser::XMLLineFrameParser(v8);
                }
                else
                {
                  v13 = "RichText";
                  if ( j_strcasecmp(Name, "RichText") == 0 )
                  {
                    v8 = (XMLTextureParser *)operator new(0x10u);
                    XMLRichTextParser::XMLRichTextParser(v8);
                  }
                  else
                  {
                    v13 = "MultiEditBox";
                    if ( j_strcasecmp(Name, "MultiEditBox") == 0 )
                    {
                      v8 = (XMLTextureParser *)operator new(0x10u);
                      XMLMultiEditBoxParser::XMLMultiEditBoxParser(v8);
                    }
                    else
                    {
                      v13 = "WebBrowerFrame";
                      if ( j_strcasecmp(Name, "WebBrowerFrame") == 0 )
                      {
                        v8 = (XMLTextureParser *)operator new(0xCu);
                        XMLWebBrowerFrameParser::XMLWebBrowerFrameParser(v8);
                      }
                      else
                      {
                        v13 = "IconBar";
                        if ( j_strcasecmp(Name, "IconBar") == 0 )
                        {
                          v8 = (XMLTextureParser *)operator new(0x10u);
                          XMLIconBarParser::XMLIconBarParser(v8);
                        }
                        else
                        {
                          v13 = "ProgressBar";
                          if ( j_strcasecmp(Name, "ProgressBar") != 0 )
                            return sub_3BDF80(v16);
                          v8 = (XMLTextureParser *)operator new(0x10u);
                          XMLProgressBarParser::XMLProgressBarParser(v8);
                        }
                      }
                    }
                  }
                }
              }
            }
LABEL_36:
            v10 = v13;
            *a3 = v8;
            goto LABEL_37;
          }
          v9 = (XMLDrawLineFrameParser *)operator new(0x10u);
          XMLSliderParser::XMLSliderParser(v9);
        }
      }
    }
LABEL_17:
    *a3 = v9;
    v10 = v14;
    v11 = (const char *)v16[0];
LABEL_38:
    *a2 = XMLManager::CreateUIObjectFromXML(v10, v11, v15);
    return sub_3BDF80(v16);
  }
  return result;
}


//======================================================================
// XMLManager::GetShortName(char *)
// address: 0x001BF664   size: 0x26 (38 bytes)
//======================================================================
char *__fastcall XMLManager::GetShortName(XMLManager *this, char *a2)
{
  char *result; // r0
  char *v3; // r4
  char *v4; // r0

  result = a2;
  v3 = a2;
  if ( a2 != nullptr )
  {
    v4 = j_strrchr(a2, 92);
    if ( v4 != nullptr )
    {
      v3 = byte_50FAC0;
      j_strncpy(byte_50FAC0, v4 + 1, 0x100u);
    }
    return v3;
  }
  return result;
}


//======================================================================
// XMLManager::SaveUIToXml(char const*)
// address: 0x001BF690   size: 0x156 (342 bytes)
//======================================================================
int __fastcall XMLManager::SaveUIToXml(XMLManager *this, char *a2)
{
  TiXmlElement *v2; // r4
  TiXmlElement *v3; // r5
  int v4; // r0
  unsigned int i; // r7
  int v6; // r3
  int v7; // r0
  int v8; // r4
  TiXmlNode *v10; // [sp+4h] [bp-68h]
  int v12; // [sp+14h] [bp-58h] BYREF
  int v13; // [sp+18h] [bp-54h] BYREF
  char *v14; // [sp+1Ch] [bp-50h] BYREF
  _BYTE v15[76]; // [sp+20h] [bp-4Ch] BYREF

  if ( a2 == nullptr )
    return 0;
  TiXmlDocument::TiXmlDocument((TiXmlDocument *)v15);
  v10 = (TiXmlNode *)operator new(0x38u);
  TiXmlDeclaration::TiXmlDeclaration(v10, "1.0", "utf-8", "yes");
  TiXmlNode::LinkEndChild((TiXmlNode *)v15, v10);
  v2 = (TiXmlElement *)operator new(0x50u);
  TiXmlElement::TiXmlElement(v2, "Ui");
  TiXmlNode::LinkEndChild((TiXmlNode *)v15, v2);
  v3 = (TiXmlElement *)operator new(0x50u);
  TiXmlElement::TiXmlElement(v3, "Script");
  TiXmlNode::LinkEndChild(v2, v3);
  sub_3BF0BC((int)&v12, a2);
  v4 = sub_3BD9F0(&v12, 92, -1);
  sub_3BED3C(&v13, &v12, v4 + 1, *(_DWORD *)(v12 - 12));
  sub_3BED3C(&v14, &v13, 0, *(_DWORD *)(v13 - 12) - 4);
  sub_3BEBBC(&v13);
  sub_3BDF80(&v14);
  sub_3BF0BC((int)&v14, "data/uires/uidemo/");
  sub_3BE7F0(&v14, &v13);
  sub_3BE96C((int)&v14, ".lua");
  TiXmlElement::SetAttribute(v3, "file", v14);
  sub_3BDF80(&v14);
  sub_3BDF80(&v13);
  sub_3BDF80(&v12);
  for ( i = 0; ; ++i )
  {
    v6 = *(_DWORD *)(g_pFrameMgr + 76);
    if ( i >= (*(_DWORD *)(g_pFrameMgr + 80) - v6) >> 2 )
      break;
    v7 = *(_DWORD *)(4 * i + v6);
    (*(void (__fastcall **)(int, TiXmlElement *))(*(_DWORD *)v7 + 36))(v7, v2);
  }
  if ( v10 != nullptr )
    (*(void (__fastcall **)(TiXmlNode *))(*(_DWORD *)v10 + 4))(v10);
  if ( v2 != nullptr )
    (*(void (__fastcall **)(TiXmlElement *))(*(_DWORD *)v2 + 4))(v2);
  if ( v3 != nullptr )
    (*(void (__fastcall **)(TiXmlElement *))(*(_DWORD *)v3 + 4))(v3);
  v8 = TiXmlDocument::SaveFile((TiXmlDocument *)v15, a2);
  TiXmlDocument::~TiXmlDocument((TiXmlDocument *)v15);
  return v8;
}


//======================================================================
// XMLManager::LoadUIObject(Ogre::XMLNode)
// address: 0x001BF82C   size: 0xA0 (160 bytes)
//======================================================================
Frame *__fastcall XMLManager::LoadUIObject(int a1, TiXmlElement *a2)
{
  Frame *v2; // r5
  XMLUIObjectParser *v3; // r4
  int v4; // r1
  int v5; // r2
  Frame *v6; // r0
  int v7; // r3
  TiXmlElement *v9; // [sp+4h] [bp-14h] BYREF
  Frame *v10; // [sp+Ch] [bp-Ch] BYREF
  XMLUIObjectParser *v11; // [sp+10h] [bp-8h] BYREF
  _BYTE v12[4]; // [sp+14h] [bp-4h] BYREF

  v9 = a2;
  v10 = nullptr;
  v11 = nullptr;
  sub_3BF0BC((int)v12, (char *)&unk_3FB8EA);
  XMLManager::CreateObjectByType(v9, (const char **)&v10, &v11);
  sub_3BDF80(v12);
  v2 = v10;
  v3 = v11;
  if ( v10 == nullptr )
  {
    if ( v11 == nullptr )
      return nullptr;
    goto LABEL_11;
  }
  v2 = (Frame *)(**(int (__fastcall ***)(XMLUIObjectParser *, Frame *, TiXmlElement *, _DWORD))v11)(
                  v11,
                  v10,
                  v9,
                  *((unsigned __int8 *)v10 + 4));
  if ( v2 == nullptr )
    return nullptr;
  if ( *((_BYTE *)v10 + 4) != 0 )
  {
    FrameManager::RegisterObject((FrameManager *)g_pFrameMgr, v10);
  }
  else
  {
    Ogre::XMLNode::attribToString(&v9, "parent");
    v4 = (unsigned __int64)FrameManager::AddRootFrame(__SPAIR64__((unsigned int)v10, g_pFrameMgr), v5) >> 32;
  }
  v6 = v10;
  v7 = *((_DWORD *)v10 + 10) - 1;
  *((_DWORD *)v10 + 10) = v7;
  if ( v7 == 0 )
    (*(void (__fastcall **)(Frame *, int))(*(_DWORD *)v6 + 12))(v6, v4);
  v3 = v11;
  if ( v11 != nullptr )
  {
LABEL_11:
    XMLUIObjectParser::~XMLUIObjectParser(v3);
    operator delete(v3);
  }
  return v2;
}


//======================================================================
// XMLManager::LoadUIFromXml(char const*)
// address: 0x001BF8D8   size: 0x1A6 (422 bytes)
//======================================================================
Ogre::DataStream *__fastcall XMLManager::LoadUIFromXml(XMLManager *this, char *a2)
{
  TiXmlElement *i; // r0
  const char *Name; // r0
  const char *v6; // r0
  const char *v7; // r0
  const char *v8; // r0
  const char *v9; // r0
  const char *v10; // r0
  char *v11; // r0
  int v12; // r6
  char *v13; // r1
  const char *v14; // r2
  Ogre::DataStream *File; // [sp+0h] [bp-24h]
  TiXmlNode *v17; // [sp+Ch] [bp-18h] BYREF
  TiXmlNode *RootNode; // [sp+10h] [bp-14h] BYREF
  TiXmlElement *v19; // [sp+14h] [bp-10h] BYREF
  char *v20; // [sp+18h] [bp-Ch] BYREF
  Ogre *v21[2]; // [sp+1Ch] [bp-8h] BYREF

  if ( a2 == nullptr )
    return nullptr;
  Ogre::XMLData::XMLData(&v17);
  sub_3BF0BC((int)v21, a2);
  File = Ogre::XMLData::loadFile((Ogre::XMLData *)&v17, (const char **)v21);
  sub_3BDF80(v21);
  if ( File != nullptr )
  {
    RootNode = (TiXmlNode *)Ogre::XMLData::getRootNode(&v17);
    for ( i = (TiXmlElement *)Ogre::XMLNode::iterateChild(&RootNode);
          ;
          i = (TiXmlElement *)Ogre::XMLNode::iterateChild(&RootNode, v19) )
    {
      v19 = i;
      if ( i == nullptr )
        break;
      Name = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)&v19);
      if ( j_strcasecmp(Name, "Cursor") == 0 )
      {
        XMLManager::LoadUICursor((int)this, v19);
      }
      else
      {
        v6 = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)&v19);
        if ( j_strcasecmp(v6, "font") == 0 )
        {
          XMLManager::LoadUIFont((int)this, v19);
        }
        else
        {
          v7 = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)&v19);
          if ( j_strcasecmp(v7, "Accel") == 0 )
          {
            XMLManager::LoadUIAccels((int)this, v19);
          }
          else
          {
            v8 = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)&v19);
            if ( j_strcasecmp(v8, "FaceTexture") == 0 )
            {
              LoadUIFaceTexture(v19);
            }
            else
            {
              v9 = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)&v19);
              if ( j_strcasecmp(v9, "PictureTexture") == 0 )
              {
                LoadUIPictureTexture(v19);
              }
              else
              {
                v10 = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)&v19);
                if ( j_strcasecmp(v10, "Script") == 0 )
                {
                  v11 = (char *)Ogre::XMLNode::attribToString(&v19, "file");
                  sub_3BF0BC((int)&v20, v11);
                  v12 = g_pFrameMgr + 172;
                  v13 = *(char **)(g_pFrameMgr + 176);
                  if ( v13 == *(char **)(g_pFrameMgr + 180) )
                  {
                    std::vector<std::string>::_M_insert_aux((int *)(g_pFrameMgr + 172), v13, (int)&v20);
                  }
                  else
                  {
                    if ( v13 != nullptr )
                      sub_3BEB1C(*(_DWORD *)(g_pFrameMgr + 176), &v20);
                    *(_DWORD *)(v12 + 4) += 4;
                  }
                  if ( *((_DWORD *)v20 - 3) != 0 && Ogre::ScriptVM::callFile((Ogre::ScriptVM *)g_pUIScriptVM, v20) == 0 )
                  {
                    sub_3BF0BC((int)v21, "\tload lua file error!\n\nFileName:");
                    sub_3BE7F0(v21, &v20);
                    Ogre::PopMessageBox(v21[0], "Error", v14);
                    sub_3BDF80(v21);
                    sub_3BDF80(&v20);
                    File = nullptr;
                    break;
                  }
                  sub_3BDF80(&v20);
                }
                else
                {
                  XMLManager::LoadUIObject((int)this, v19);
                }
              }
            }
          }
        }
      }
    }
  }
  Ogre::XMLData::~XMLData((Ogre::XMLData *)&v17);
  return File;
}


//======================================================================
// XMLManager::LoadTOCFile(char const*)
// address: 0x001BFAAC   size: 0x162 (354 bytes)
//======================================================================
int __fastcall XMLManager::LoadTOCFile(XMLManager *this, char *a2)
{
  int v2; // r5
  int v3; // r0
  int v4; // r3
  const char *v6; // r2
  const char *v7; // r2
  int v8; // [sp+4h] [bp-428h]
  void (__fastcall *v9)(int, char *, int, Ogre **); // [sp+Ch] [bp-420h]
  char *v11; // [sp+1Ch] [bp-410h] BYREF
  Ogre *v12; // [sp+20h] [bp-40Ch] BYREF
  char v13[984]; // [sp+24h] [bp-408h] BYREF

  if ( a2 == nullptr )
    return 0;
  if ( a2 == (char *)&unk_3FB8EA )
    return 0;
  v2 = Ogre::FileManager::openFile((Ogre::FileManager *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton, a2, 1);
  if ( v2 == 0 )
    return 0;
  while ( 1 )
  {
    v3 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 44))(v2);
    v4 = *(_DWORD *)v2;
    v8 = v3;
    if ( v3 != 0 )
    {
      (*(void (__fastcall **)(int))(v4 + 4))(v2);
      return v8;
    }
    v9 = *(void (__fastcall **)(int, char *, int, Ogre **))(v4 + 16);
    sub_3BF0BC((int)&v12, "\n");
    v9(v2, v13, 1024, &v12);
    sub_3BDF80(&v12);
    sub_3BF0BC((int)&v11, v13);
    if ( sub_3BD93C((int)&v11, ".xml") != -1
      && sub_3BD93C((int)&v11, "##") != 0
      && XMLManager::LoadUIFromXml(this, v11) == nullptr )
    {
      sub_3BF0BC((int)&v12, "load xml file error: ");
      sub_3BE7F0(&v12, &v11);
      Ogre::PopMessageBox(v12, "Error", v6);
      goto LABEL_19;
    }
    if ( sub_3BD93C((int)&v11, ".lua") != -1
      && sub_3BD93C((int)&v11, "##") != 0
      && Ogre::ScriptVM::callFile((Ogre::ScriptVM *)g_pUIScriptVM, v11) == 0 )
    {
      break;
    }
    sub_3BDF80(&v11);
  }
  sub_3BF0BC((int)&v12, "\tload lua file error!\n\nFileName:");
  sub_3BE7F0(&v12, &v11);
  Ogre::PopMessageBox(v12, "Error", v7);
LABEL_19:
  sub_3BDF80(&v12);
  sub_3BDF80(&v11);
  return v8;
}

