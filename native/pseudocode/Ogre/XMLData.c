// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::XMLData

//======================================================================
// Ogre::XMLData::XMLData(void)
// address: 0x00143AFE   size: 0x6 (6 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre7XMLDataC1Ev'
_DWORD *__fastcall Ogre::XMLData::XMLData(_DWORD *this)
{
  *this = 0;
  return this;
}


//======================================================================
// Ogre::XMLData::~XMLData()
// address: 0x00143B04   size: 0x14 (20 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre7XMLDataD1Ev'
void __fastcall Ogre::XMLData::~XMLData(Ogre::XMLData *this)
{
  int v1; // r0

  v1 = *(_DWORD *)this;
  if ( v1 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 4))(v1);
}


//======================================================================
// Ogre::XMLData::loadBuffer(void const*,unsigned int)
// address: 0x00143B18   size: 0x50 (80 bytes)
//======================================================================
int __fastcall Ogre::XMLData::loadBuffer(Ogre::XMLData *this, int a2, unsigned int a3)
{
  int v4; // r0
  TiXmlDocument *v7; // r5
  unsigned int v8; // r3
  int Buffer; // r5

  v4 = *(_DWORD *)this;
  if ( v4 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
  v7 = (TiXmlDocument *)operator new(0x48u);
  TiXmlDocument::TiXmlDocument(v7);
  *(_DWORD *)this = v7;
  Buffer = TiXmlDocument::LoadBuffer((int)v7, a2, a3);
  if ( Buffer == 0 )
  {
    Ogre::LogSetCurParam(
      (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreXMLData.cpp",
      (const char *)&dword_C8 + 2,
      8,
      v8);
    Ogre::LogMessage((Ogre *)"failed to load xml:%s", (const char *)(*(_DWORD *)(*(_DWORD *)this + 52) + 8));
  }
  return Buffer;
}


//======================================================================
// Ogre::XMLData::loadStream(Ogre::DataStream *)
// address: 0x00143B70   size: 0x24 (36 bytes)
//======================================================================
int __fastcall Ogre::XMLData::loadStream(Ogre::XMLData *this, Ogre::DataStream *a2)
{
  int v4; // r5
  unsigned int v5; // r0

  v4 = (*(int (__fastcall **)(Ogre::DataStream *))(*(_DWORD *)a2 + 56))(a2);
  v5 = (*(int (__fastcall **)(Ogre::DataStream *))(*(_DWORD *)a2 + 48))(a2);
  return Ogre::XMLData::loadBuffer(this, v4, v5);
}


//======================================================================
// Ogre::XMLData::loadFile(std::string const&)
// address: 0x00143B94   size: 0x30 (48 bytes)
//======================================================================
Ogre::DataStream *__fastcall Ogre::XMLData::loadFile(Ogre::XMLData *a1, const char **a2)
{
  Ogre::DataStream *result; // r0
  Ogre::DataStream *v4; // r4
  int Stream; // r5

  result = (Ogre::DataStream *)Ogre::FileManager::openFile(
                                 (Ogre::FileManager *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton,
                                 *a2,
                                 true);
  v4 = result;
  if ( result != nullptr )
  {
    Stream = Ogre::XMLData::loadStream(a1, result);
    (*(void (__fastcall **)(Ogre::DataStream *))(*(_DWORD *)v4 + 4))(v4);
    return (Ogre::DataStream *)Stream;
  }
  return result;
}


//======================================================================
// Ogre::XMLData::loadRawFile(std::string const&)
// address: 0x00143BC8   size: 0x20 (32 bytes)
//======================================================================
int __fastcall Ogre::XMLData::loadRawFile(TiXmlDocument **a1, char **a2)
{
  TiXmlDocument *v4; // r4

  v4 = (TiXmlDocument *)operator new(0x48u);
  TiXmlDocument::TiXmlDocument(v4);
  *a1 = v4;
  return TiXmlDocument::LoadFile((int)v4, *a2);
}


//======================================================================
// Ogre::XMLData::saveFile(std::string const&)
// address: 0x00143BE8   size: 0xC (12 bytes)
//======================================================================
int __fastcall Ogre::XMLData::saveFile(TiXmlDocument **a1, const char **a2)
{
  return TiXmlDocument::SaveFile(*a1, *a2);
}


//======================================================================
// Ogre::XMLData::getRootNode(void)
// address: 0x00143BF4   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::XMLData::getRootNode(TiXmlNode **this)
{
  return TiXmlNode::FirstChildElement(*this);
}


//======================================================================
// Ogre::XMLData::getNodeByPath(char const*,bool)
// address: 0x00143C00   size: 0x90 (144 bytes)
//======================================================================
TiXmlNode *__fastcall Ogre::XMLData::getNodeByPath(TiXmlNode **this, const char *a2, int a3)
{
  char *v5; // r0
  char *v6; // r6
  TiXmlNode *Child; // r0
  size_t v9; // [sp+0h] [bp-114h]
  TiXmlNode *RootNode; // [sp+8h] [bp-10Ch] BYREF
  char v11[256]; // [sp+Ch] [bp-108h] BYREF

  RootNode = (TiXmlNode *)Ogre::XMLData::getRootNode(this);
  while ( a2 != nullptr && *a2 != 0 )
  {
    v5 = j_strchr(a2, 46);
    v6 = v5;
    if ( v5 != nullptr )
    {
      v9 = v5 - a2;
      j_memcpy(v11, a2, v5 - a2);
      a2 = v6 + 1;
      v11[v9] = 0;
    }
    else
    {
      j_strncpy(v11, a2, 0x100u);
      a2 = nullptr;
    }
    Child = (TiXmlNode *)Ogre::XMLNode::getChild(&RootNode, v11);
    if ( Child == nullptr )
    {
      if ( a3 == 0 )
        return nullptr;
      Child = Ogre::XMLNode::addChild(&RootNode, v11);
    }
    RootNode = Child;
  }
  return RootNode;
}

