// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: XMLWebBrowerFrameParser

//======================================================================
// XMLWebBrowerFrameParser::XMLWebBrowerFrameParser(void)
// address: 0x001B9A48   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN23XMLWebBrowerFrameParserC1Ev'
void __fastcall XMLWebBrowerFrameParser::XMLWebBrowerFrameParser(XMLWebBrowerFrameParser *this)
{
  XMLFrameParser::XMLFrameParser(this);
  *(_DWORD *)this = &off_458FB8;
}


//======================================================================
// XMLWebBrowerFrameParser::~XMLWebBrowerFrameParser()
// address: 0x001B9A64   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN23XMLWebBrowerFrameParserD1Ev'
void __fastcall XMLWebBrowerFrameParser::~XMLWebBrowerFrameParser(XMLWebBrowerFrameParser *this)
{
  *(_DWORD *)this = &off_458FB8;
  XMLFrameParser::~XMLFrameParser(this);
}


//======================================================================
// XMLWebBrowerFrameParser::LoadUIObjectParam(UIObject *,Ogre::XMLNode,bool)
// address: 0x001B9A80   size: 0x12 (18 bytes)
//======================================================================
int __fastcall XMLWebBrowerFrameParser::LoadUIObjectParam(int a1, int a2, TiXmlNode *a3)
{
  TiXmlNode *v4; // [sp+4h] [bp-4h] BYREF

  v4 = a3;
  XMLFrameParser::LoadUIObjectParam(a1, a2);
  Ogre::XMLNode::iterateChild(&v4);
  return 1;
}

