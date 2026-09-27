// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: XMLLineFrameParser

//======================================================================
// XMLLineFrameParser::XMLLineFrameParser(void)
// address: 0x001A5F30   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN18XMLLineFrameParserC1Ev'
void __fastcall XMLLineFrameParser::XMLLineFrameParser(XMLLineFrameParser *this)
{
  XMLFrameParser::XMLFrameParser(this);
  *(_DWORD *)this = &off_458D78;
}


//======================================================================
// XMLLineFrameParser::~XMLLineFrameParser()
// address: 0x001A5F4C   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN18XMLLineFrameParserD1Ev'
void __fastcall XMLLineFrameParser::~XMLLineFrameParser(XMLLineFrameParser *this)
{
  *(_DWORD *)this = &off_458D78;
  XMLFrameParser::~XMLFrameParser(this);
}


//======================================================================
// XMLLineFrameParser::LoadUIObjectParam(UIObject *,Ogre::XMLNode,bool)
// address: 0x001A5F68   size: 0x30 (48 bytes)
//======================================================================
int __fastcall XMLLineFrameParser::LoadUIObjectParam(int a1, int a2, TiXmlElement *a3)
{
  int v4; // r2
  TiXmlElement *v6; // [sp+4h] [bp-4h] BYREF

  v6 = a3;
  XMLFrameParser::LoadUIObjectParam(a1, a2);
  if ( Ogre::XMLNode::hasAttrib(&v6, "gridWidth") )
    *(_DWORD *)(a2 + 412) = Ogre::XMLNode::attribToInt(&v6, "gridWidth", v4);
  return 1;
}

