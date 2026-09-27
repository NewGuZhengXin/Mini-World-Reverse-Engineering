// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: XMLSlidingFrameParser

//======================================================================
// XMLSlidingFrameParser::XMLSlidingFrameParser(void)
// address: 0x001A61F0   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN21XMLSlidingFrameParserC1Ev'
void __fastcall XMLSlidingFrameParser::XMLSlidingFrameParser(XMLSlidingFrameParser *this)
{
  XMLFrameParser::XMLFrameParser(this);
  *(_DWORD *)this = &off_458DB8;
}


//======================================================================
// XMLSlidingFrameParser::~XMLSlidingFrameParser()
// address: 0x001A620C   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN21XMLSlidingFrameParserD1Ev'
void __fastcall XMLSlidingFrameParser::~XMLSlidingFrameParser(XMLSlidingFrameParser *this)
{
  *(_DWORD *)this = &off_458DB8;
  XMLFrameParser::~XMLFrameParser(this);
}


//======================================================================
// XMLSlidingFrameParser::LoadUIObjectParam(UIObject *,Ogre::XMLNode,bool)
// address: 0x001A6228   size: 0xBC (188 bytes)
//======================================================================
int __fastcall XMLSlidingFrameParser::LoadUIObjectParam(int a1, int a2, TiXmlElement *a3)
{
  int v4; // r2
  int v5; // r2
  const char *v6; // r0
  TiXmlElement *v8; // [sp+4h] [bp-4h] BYREF

  v8 = a3;
  XMLFrameParser::LoadUIObjectParam(a1, a2);
  if ( *(_DWORD *)(a2 + 488) == 0 || Ogre::XMLNode::hasAttrib(&v8, "slideplane") )
  {
    v6 = (const char *)Ogre::XMLNode::attribToString(&v8, "slideplane");
    *(_DWORD *)(a2 + 488) = Frame::GetChildFrame((Frame *)a2, v6);
  }
  if ( Ogre::XMLNode::hasAttrib(&v8, "slidingX") )
    *(_BYTE *)(a2 + 436) = (unsigned __int8)Ogre::XMLNode::attribToBool(&v8, "slidingX");
  if ( Ogre::XMLNode::hasAttrib(&v8, "slidingY") )
    *(_BYTE *)(a2 + 437) = (unsigned __int8)Ogre::XMLNode::attribToBool(&v8, "slidingY");
  if ( Ogre::XMLNode::hasAttrib(&v8, "movestartX") )
    *(_DWORD *)(a2 + 440) = Ogre::XMLNode::attribToInt(&v8, "movestartX", v4);
  if ( Ogre::XMLNode::hasAttrib(&v8, "movestartY") )
    *(_DWORD *)(a2 + 444) = Ogre::XMLNode::attribToInt(&v8, "movestartY", v5);
  return 1;
}

