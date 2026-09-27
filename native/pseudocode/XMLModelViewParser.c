// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: XMLModelViewParser

//======================================================================
// XMLModelViewParser::XMLModelViewParser(void)
// address: 0x001A6E80   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN18XMLModelViewParserC1Ev'
void __fastcall XMLModelViewParser::XMLModelViewParser(XMLModelViewParser *this)
{
  XMLFrameParser::XMLFrameParser(this);
  *(_DWORD *)this = &off_458DD8;
}


//======================================================================
// XMLModelViewParser::~XMLModelViewParser()
// address: 0x001A6E9C   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN18XMLModelViewParserD1Ev'
void __fastcall XMLModelViewParser::~XMLModelViewParser(XMLModelViewParser *this)
{
  *(_DWORD *)this = &off_458DD8;
  XMLFrameParser::~XMLFrameParser(this);
}


//======================================================================
// XMLModelViewParser::LoadUIObjectParam(UIObject *,Ogre::XMLNode,bool)
// address: 0x001A6EB8   size: 0x72 (114 bytes)
//======================================================================
int __fastcall XMLModelViewParser::LoadUIObjectParam(int a1, int a2, TiXmlNode *a3, TiXmlNode *a4)
{
  ModelView *v6; // r5
  Ogre::FixedString *v7; // r0
  TiXmlNode *i; // r0
  TiXmlNode *v10[2]; // [sp+4h] [bp-Ch] BYREF
  TiXmlNode *Child; // [sp+Ch] [bp-4h] BYREF

  v10[1] = a3;
  Child = a4;
  v10[0] = a3;
  XMLLayoutFrameParser::LoadUIObjectParam(a1, a2, a3, a4);
  *(_DWORD *)(a1 + 12) = a2;
  if ( Ogre::XMLNode::hasAttrib(v10, "background") )
  {
    v6 = *(ModelView **)(a1 + 12);
    v7 = (Ogre::FixedString *)Ogre::XMLNode::attribToString(v10, "background");
    ModelView::setBackground(v6, v7);
  }
  if ( Ogre::XMLNode::hasChild(v10, "Background") )
  {
    Child = (TiXmlNode *)Ogre::XMLNode::getChild(v10, "Background");
    for ( i = (TiXmlNode *)Ogre::XMLNode::iterateChild(&Child);
          i != nullptr;
          i = (TiXmlNode *)Ogre::XMLNode::iterateChild(&Child, i) )
    {
      ;
    }
  }
  Ogre::XMLNode::hasAttrib(v10, "camera");
  return 1;
}

