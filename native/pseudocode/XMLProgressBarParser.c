// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: XMLProgressBarParser

//======================================================================
// XMLProgressBarParser::XMLProgressBarParser(void)
// address: 0x001BEB10   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN20XMLProgressBarParserC1Ev'
void __fastcall XMLProgressBarParser::XMLProgressBarParser(XMLProgressBarParser *this)
{
  XMLFrameParser::XMLFrameParser(this);
  *(_DWORD *)this = &off_4590E8;
}


//======================================================================
// XMLProgressBarParser::~XMLProgressBarParser()
// address: 0x001BEB2C   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN20XMLProgressBarParserD1Ev'
void __fastcall XMLProgressBarParser::~XMLProgressBarParser(XMLProgressBarParser *this)
{
  *(_DWORD *)this = &off_4590E8;
  XMLFrameParser::~XMLFrameParser(this);
}


//======================================================================
// XMLProgressBarParser::LoadUIObjectParam(UIObject *,Ogre::XMLNode,bool)
// address: 0x001BEB48   size: 0xD6 (214 bytes)
//======================================================================
int __fastcall XMLProgressBarParser::LoadUIObjectParam(int a1, int a2, TiXmlElement *a3)
{
  const char *v5; // r0
  int v6; // r2
  const char *v7; // r0
  unsigned int v8; // r2
  double v9; // r0
  int v10; // r0
  char *v11; // r0
  int v12; // r4
  ProgressBar *v14; // [sp+0h] [bp-14h]
  ProgressBar *v15; // [sp+0h] [bp-14h]
  TiXmlElement *v16[2]; // [sp+4h] [bp-10h] BYREF
  _BYTE v17[8]; // [sp+Ch] [bp-8h] BYREF

  v16[0] = a3;
  XMLFrameParser::LoadUIObjectParam(a1, a2);
  *(_DWORD *)(a1 + 12) = a2;
  sub_3BEB1C(v17, a2 + 8);
  if ( Ogre::XMLNode::attribToString(v16, "orientation") != 0 )
  {
    v5 = (const char *)Ogre::XMLNode::attribToString(v16, "orientation");
    if ( j_strcasecmp(v5, "HORIZONTAL") == 0 )
    {
      v6 = 1;
    }
    else
    {
      v7 = (const char *)Ogre::XMLNode::attribToString(v16, "orientation");
      if ( j_strcasecmp(v7, "VERTICAL") != 0 )
        goto LABEL_7;
      v6 = 2;
    }
    *(_DWORD *)(*(_DWORD *)(a1 + 12) + 424) = v6;
  }
LABEL_7:
  if ( Ogre::XMLNode::attribToString(v16, "defaultValue") != 0 )
  {
    HIDWORD(v9) = "defaultValue";
    LODWORD(v9) = v16;
    v14 = *(ProgressBar **)(a1 + 12);
    v10 = Ogre::XMLNode::attribToFloat(v9, v8);
    ProgressBar::SetValue(COERCE_DOUBLE(__PAIR64__(v10, (unsigned int)v14)));
  }
  if ( Ogre::XMLNode::hasAttrib(v16, "barname") )
  {
    v15 = (ProgressBar *)(*(_DWORD *)(a1 + 12) + 412);
    v11 = (char *)Ogre::XMLNode::attribToString(v16, "barname");
    sub_3BE508((int)v15, v11);
    v12 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(v12 + 416) = Frame::findDrawRegion((Frame *)v12, *(const char **)(v12 + 412));
  }
  sub_3BDF80(v17);
  return 1;
}

