// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Root

//======================================================================
// Ogre::Root::Root(std::string const&,char const*,char const*)
// address: 0x00167E30   size: 0x1A6 (422 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre4RootC1ERKSsPKcS4_'
int __fastcall Ogre::Root::Root(int a1, const char **a2, const char *a3, const char *a4)
{
  Ogre *v6; // r0
  unsigned int v7; // r1
  unsigned int v8; // r2
  Ogre::FixedString *v9; // r0
  Ogre::StringUtil *v10; // r0
  Ogre::FileManager *v11; // r5
  const char *v12; // r0
  Ogre::OGLPlugin *v13; // r5
  TiXmlElement *Child; // [sp+1Ch] [bp-10h] BYREF
  char *v18; // [sp+20h] [bp-Ch] BYREF
  char *v19[2]; // [sp+24h] [bp-8h] BYREF

  Ogre::Singleton<Ogre::Root>::ms_Singleton = a1;
  v6 = (Ogre *)Ogre::XMLData::XMLData((_DWORD *)a1);
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 100) = &byte_55FB88;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 92) = 0;
  Ogre::LogInit(v6);
  Ogre::LogAddConsoleHandler((Ogre *)&byte_9[5], v7);
  v9 = (Ogre::FixedString *)Ogre::LogAddFileHandler((Ogre *)"log\\all.log", &byte_9[6], v8);
  v10 = (Ogre::StringUtil *)Ogre::FixedString::sysInit(v9);
  Ogre::StringUtil::init(v10);
  *(_BYTE *)(a1 + 80) = 0;
  v11 = (Ogre::FileManager *)operator new(0xCu);
  Ogre::FileManager::FileManager(v11);
  *(_DWORD *)(a1 + 12) = v11;
  if ( a3 != nullptr )
  {
    Ogre::LogSetCurParam(
      (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreRoot.cpp",
      (const char *)&dword_40,
      2,
      (unsigned int)a3);
    Ogre::LogMessage((Ogre *)"addpackage: %s", a3);
    Ogre::FileManager::addPackage(*(_DWORD *)(a1 + 12), 2, "apk", a3, 1, 1, "assets/");
  }
  if ( a4 != nullptr )
  {
    Ogre::LogSetCurParam(
      (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreRoot.cpp",
      (const char *)&dword_44 + 1,
      2,
      (unsigned int)a4);
    Ogre::LogMessage((Ogre *)"addpackage: %s", a4);
    Ogre::FileManager::addPackage(*(_DWORD *)(a1 + 12), 0, "save", a4, 0, 0, 0);
  }
  if ( a3 != nullptr )
  {
    if ( Ogre::FileManager::isStdioFileExist(*(Ogre::FileManager **)(a1 + 12), *a2) != 0 )
    {
      v18 = &byte_55FB88;
      Ogre::FileManager::gamePath2StdioPath(*(_DWORD *)(a1 + 12), &v18, *a2);
      sub_3BF0BC((int)v19, v18);
      Ogre::XMLData::loadRawFile((TiXmlDocument **)a1, v19);
      sub_3BDF80(v19);
      sub_3BDF80(&v18);
    }
    else
    {
      Ogre::XMLData::loadFile((Ogre::XMLData *)a1, a2);
    }
  }
  else
  {
    Ogre::XMLData::loadRawFile((TiXmlDocument **)a1, (char **)a2);
  }
  v19[0] = (char *)Ogre::XMLData::getRootNode((TiXmlNode **)a1);
  Child = (TiXmlElement *)Ogre::XMLNode::getChild((TiXmlNode **)v19, "SmartClient");
  if ( Child != nullptr )
    *(_BYTE *)(a1 + 80) = (unsigned __int8)Ogre::XMLNode::attribToBool(&Child, "flag");
  v19[0] = (char *)Ogre::XMLData::getRootNode((TiXmlNode **)a1);
  v18 = (char *)Ogre::XMLNode::getChild((TiXmlNode **)v19, "RenderSystem");
  if ( v18 != nullptr )
  {
    v12 = (const char *)Ogre::XMLNode::attribToString((TiXmlElement **)&v18, "API");
    if ( j_strcmp(v12, "OGL") == 0 )
    {
      v13 = (Ogre::OGLPlugin *)operator new(8u);
      Ogre::OGLPlugin::OGLPlugin(v13);
      dword_47BA60 = (int)v13;
    }
  }
  else
  {
    dword_47BA60 = 0;
  }
  return a1;
}


//======================================================================
// Ogre::Root::onStop(void)
// address: 0x0016801C   size: 0x3C (60 bytes)
//======================================================================
__int64 __fastcall Ogre::Root::onStop(__int64 this, int a2)
{
  int v2; // r4
  int v3; // r0
  int v4; // r0
  __int64 v6; // [sp+0h] [bp-Ch] BYREF
  int v7; // [sp+8h] [bp-4h]

  v6 = this;
  v7 = a2;
  v2 = this;
  v3 = *(_DWORD *)(this + 20);
  if ( v3 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  *(_DWORD *)(v2 + 20) = 0;
  v4 = *(_DWORD *)(v2 + 12);
  HIDWORD(v6) = &byte_55FB88;
  Ogre::FileManager::gamePath2StdioPath(v4, (char *)&v6 + 4, "iworld.cfg");
  Ogre::XMLData::saveFile((TiXmlDocument **)v2, (const char **)&v6 + 1);
  sub_3BDF80((char *)&v6 + 4);
  return v6;
}


//======================================================================
// Ogre::Root::saveFile(void)
// address: 0x00168060   size: 0x2C (44 bytes)
//======================================================================
__int64 __fastcall Ogre::Root::saveFile(__int64 this, int a2)
{
  TiXmlDocument **v2; // r5
  int v3; // r0
  __int64 v5; // [sp+0h] [bp-Ch] BYREF
  int v6; // [sp+8h] [bp-4h]

  v5 = this;
  v6 = a2;
  v2 = (TiXmlDocument **)this;
  v3 = *(_DWORD *)(this + 12);
  HIDWORD(v5) = &byte_55FB88;
  Ogre::FileManager::gamePath2StdioPath(v3, (char *)&v5 + 4, "iworld.cfg");
  Ogre::XMLData::saveFile(v2, (const char **)&v5 + 1);
  sub_3BDF80((char *)&v5 + 4);
  return v5;
}


//======================================================================
// Ogre::Root::initResourceManager(void)
// address: 0x00168094   size: 0x126 (294 bytes)
//======================================================================
int __fastcall Ogre::Root::initResourceManager(Ogre::Root *this)
{
  Ogre::ResourceManager *v2; // r5
  TiXmlNode *i; // r1
  const char *v4; // r5
  signed int v5; // r0
  int v6; // r6
  int v7; // r3
  const char *v8; // r7
  int v9; // r2
  int v10; // r4
  int v11; // r0
  int v13; // [sp+14h] [bp-18h]
  const char *v14; // [sp+18h] [bp-14h]
  int v15; // [sp+1Ch] [bp-10h]
  TiXmlNode *Child; // [sp+20h] [bp-Ch] BYREF
  TiXmlNode *v17[2]; // [sp+24h] [bp-8h] BYREF

  v2 = (Ogre::ResourceManager *)operator new(0x3Cu);
  Ogre::ResourceManager::ResourceManager(v2);
  *((_DWORD *)this + 4) = v2;
  v17[0] = (TiXmlNode *)Ogre::XMLData::getRootNode((TiXmlNode **)this);
  Child = (TiXmlNode *)Ogre::XMLNode::getChild(v17, "Packages");
  if ( Child != nullptr )
  {
    for ( i = nullptr; ; i = v17[0] )
    {
      v17[0] = (TiXmlNode *)Ogre::XMLNode::iterateChild(&Child, i);
      if ( v17[0] == nullptr )
        break;
      v4 = (const char *)Ogre::XMLNode::attribToString(v17, "path");
      v5 = j_strlen(v4);
      v6 = 0;
      if ( v5 != 0 )
      {
        v7 = (unsigned __int8)v4[v5 - 1];
        if ( v7 != 47 && v7 != 92 )
        {
          if ( v5 <= 4 )
          {
            v6 = -1;
          }
          else
          {
            v8 = &v4[v5 - 4];
            v6 = 2;
            if ( j_strcasecmp(v8, ".zip") != 0 )
              v6 = j_strcasecmp(v8, ".pkg") != 0 ? -1 : 1;
          }
        }
      }
      v13 = 0;
      if ( Ogre::XMLNode::hasAttrib(v17, "priority") )
        v13 = Ogre::XMLNode::attribToInt(v17, "priority", v9);
      v14 = nullptr;
      if ( Ogre::XMLNode::hasAttrib(v17, "readonly") )
        v14 = Ogre::XMLNode::attribToBool(v17, "readonly");
      v15 = 0;
      if ( Ogre::XMLNode::hasAttrib(v17, "dir_prefix") )
        v15 = Ogre::XMLNode::attribToString(v17, "dir_prefix");
      v10 = Ogre::Singleton<Ogre::FileManager>::ms_Singleton;
      v11 = Ogre::XMLNode::attribToString(v17, "name");
      Ogre::FileManager::addPackage(v10, v6, v11, v4, v13, v14, v15);
    }
  }
  return 1;
}


//======================================================================
// Ogre::Root::initSoundSystem(void)
// address: 0x001681E0   size: 0x10C (268 bytes)
//======================================================================
bool __fastcall Ogre::Root::initSoundSystem(TiXmlNode **this)
{
  const char *v2; // r0
  int v3; // r2
  double v4; // r0
  unsigned int v5; // r2
  double v6; // r0
  unsigned int v7; // r2
  double v8; // r0
  unsigned int v9; // r2
  unsigned int v10; // r2
  double v11; // r0
  double v12; // r0
  unsigned int v13; // r2
  int SoundSystem; // r0
  _BOOL4 v16; // [sp+4h] [bp-Ch]
  TiXmlNode *Child; // [sp+8h] [bp-8h] BYREF
  TiXmlNode *RootNode; // [sp+Ch] [bp-4h] BYREF
  _DWORD v19[5]; // [sp+10h] [bp+0h] BYREF

  j_memset(v19, 0, 0x10u);
  RootNode = (TiXmlNode *)Ogre::XMLData::getRootNode(this);
  Child = (TiXmlNode *)Ogre::XMLNode::getChild(&RootNode, "SoundSystem");
  if ( Child != nullptr )
  {
    v2 = (const char *)Ogre::XMLNode::attribToString(&Child, "API");
    v16 = j_strcasecmp(v2, "FMOD") != 0;
    RootNode = (TiXmlNode *)Ogre::XMLNode::getChild(&Child, "InitParam");
    v19[0] = Ogre::XMLNode::attribToInt(&RootNode, "maxchannels", v3);
    LODWORD(v4) = &RootNode;
    HIDWORD(v4) = "doppler";
    v19[1] = Ogre::XMLNode::attribToFloat(v4, v5);
    LODWORD(v6) = &RootNode;
    HIDWORD(v6) = "dist_factor";
    v19[2] = Ogre::XMLNode::attribToFloat(v6, v7);
    LODWORD(v8) = &RootNode;
    HIDWORD(v8) = "rolloff";
    v19[3] = Ogre::XMLNode::attribToFloat(v8, v9);
    RootNode = (TiXmlNode *)Ogre::XMLNode::getChild(&Child, "SoundParam");
    if ( RootNode != nullptr )
    {
      LODWORD(v11) = &RootNode;
      HIDWORD(v11) = "musicvol";
      Ogre::XMLNode::attribToFloat(v11, v10);
      LODWORD(v12) = &RootNode;
      HIDWORD(v12) = "soundvol";
      Ogre::XMLNode::attribToFloat(v12, v13);
      Ogre::XMLNode::attribToBool(&RootNode, "isMute");
    }
  }
  else
  {
    v16 = true;
  }
  SoundSystem = Ogre::CreateSoundSystem(v16, v19);
  *(this + 5) = (TiXmlNode *)SoundSystem;
  if ( SoundSystem != 0 )
  {
    (*(void (**)(void))(*(_DWORD *)SoundSystem + 52))();
    (*(void (**)(void))(*(_DWORD *)*(this + 5) + 56))();
  }
  return *(this + 5) != nullptr;
}


//======================================================================
// Ogre::Root::onStart(void)
// address: 0x0016831C   size: 0xE (14 bytes)
//======================================================================
bool __fastcall Ogre::Root::onStart(_BOOL4 this)
{
  if ( *(_DWORD *)(this + 20) == 0 )
    return Ogre::Root::initSoundSystem((TiXmlNode **)this);
  return this;
}


//======================================================================
// Ogre::Root::resetGameData(int)
// address: 0x0016832C   size: 0x50 (80 bytes)
//======================================================================
TiXmlNode *__fastcall Ogre::Root::resetGameData(TiXmlNode **this, int a2)
{
  TiXmlNode *result; // r0
  __int64 v5; // r0
  int v6; // r2
  TiXmlNode *v7; // [sp+0h] [bp-8h] BYREF
  TiXmlNode *RootNode; // [sp+4h] [bp-4h] BYREF

  RootNode = (TiXmlNode *)Ogre::XMLData::getRootNode(this);
  result = (TiXmlNode *)Ogre::XMLNode::getChild(&RootNode, "GameData");
  v7 = result;
  if ( result != nullptr )
  {
    result = (TiXmlNode *)Ogre::XMLNode::getChild(&v7, "Buddy");
    RootNode = result;
    if ( result != nullptr )
    {
      Ogre::XMLNode::setAttribInt(&RootNode, "creditnum", 0);
      Ogre::XMLNode::setAttribInt(&RootNode, "resettime", a2);
      LODWORD(v5) = this;
      Ogre::Root::saveFile(v5, v6);
      return (TiXmlNode *)(&dword_0 + 1);
    }
  }
  return result;
}


//======================================================================
// Ogre::Root::setSoundSystem(void)
// address: 0x0016838C   size: 0x8C (140 bytes)
//======================================================================
__int64 __fastcall Ogre::Root::setSoundSystem(TiXmlNode **this)
{
  int v2; // r2
  float v3; // r6
  int v4; // r2
  int v5; // r2
  int v6; // r0
  float v7; // r1
  __int64 v9; // [sp+0h] [bp-8h] BYREF

  HIDWORD(v9) = Ogre::XMLData::getRootNode(this);
  LODWORD(v9) = Ogre::XMLNode::getChild((TiXmlNode **)&v9 + 1, "GameData");
  if ( (_DWORD)v9 != 0 )
  {
    HIDWORD(v9) = Ogre::XMLNode::getChild((TiXmlNode **)&v9, "Settinig");
    if ( HIDWORD(v9) != 0 && *(this + 5) != nullptr )
    {
      v3 = (float)Ogre::XMLNode::attribToInt((TiXmlElement **)&v9 + 1, "volume", v2) / 100.0;
      Ogre::XMLNode::attribToInt((TiXmlElement **)&v9 + 1, "musicopen", v4);
      (*(void (**)(void))(*(_DWORD *)*(this + 5) + 52))();
      if ( Ogre::XMLNode::attribToInt((TiXmlElement **)&v9 + 1, "soundopen", v5) == 1 )
      {
        v6 = (int)*(this + 5);
        v7 = v3;
      }
      else
      {
        v6 = (int)*(this + 5);
        v7 = 0.0;
      }
      (*(void (__fastcall **)(int, float))(*(_DWORD *)*(this + 5) + 56))(v6, COERCE_FLOAT(LODWORD(v7)));
    }
  }
  return v9;
}


//======================================================================
// Ogre::Root::initRenderSystem(void *)
// address: 0x00168430   size: 0x1E2 (482 bytes)
//======================================================================
int __fastcall Ogre::Root::initRenderSystem(TiXmlNode **this, const char *a2)
{
  Ogre::MaterialManager *v3; // r7
  unsigned int v4; // r3
  int result; // r0
  int v6; // r2
  int v7; // r2
  int v8; // r2
  int v9; // r2
  int v10; // r2
  int v11; // r2
  int (__fastcall ***v12)(_DWORD, const char **); // r0
  int v13; // r3
  Ogre::SceneManager *v14; // r4
  char *v15; // [sp+0h] [bp-4Ch]
  TiXmlNode *Child; // [sp+Ch] [bp-40h] BYREF
  TiXmlElement *v18; // [sp+10h] [bp-3Ch] BYREF
  TiXmlElement *v19; // [sp+14h] [bp-38h] BYREF
  TiXmlElement *v20; // [sp+18h] [bp-34h] BYREF
  const char *v21[12]; // [sp+1Ch] [bp-30h] BYREF

  v21[0] = (const char *)Ogre::XMLData::getRootNode(this);
  Child = (TiXmlNode *)Ogre::XMLNode::getChild((TiXmlNode **)v21, "RenderSystem");
  if ( Child == nullptr )
  {
    *(this + 16) = nullptr;
    sub_3BF0BC((int)v21, "shaders\\materials.xml");
    v3 = (Ogre::MaterialManager *)operator new(0x40u);
    Ogre::MaterialManager::MaterialManager(v3);
    *(_DWORD *)v3 = &off_456F68;
    *((_BYTE *)v3 + 60) = 1;
    *(this + 7) = v3;
    Ogre::MaterialManager::loadTemplates(v3, v21);
    sub_3BDF80(v21);
    return 1;
  }
  v15 = (char *)Ogre::XMLNode::attribToString(&Child, "API");
  if ( j_strcmp(v15, "D3D9") == 0 )
  {
    *(this + 16) = (TiXmlNode *)(&dword_0 + 1);
    Ogre::Matrix4::HandMode = 0;
  }
  else
  {
    if ( j_strcmp(v15, "OGL") != 0 )
    {
      Ogre::LogSetCurParam(
        (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreRoot.cpp",
        (const char *)&stru_168.st_value + 2,
        8,
        v4);
      Ogre::LogMessage((Ogre *)"Wrong api: %s", v15);
      return 0;
    }
    *(this + 16) = (TiXmlNode *)(&dword_0 + 2);
    Ogre::Matrix4::HandMode = 1;
  }
  *(this + 6) = (TiXmlNode *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton;
  j_memset(v21, 0, 0x2Cu);
  v21[10] = a2;
  v18 = (TiXmlElement *)Ogre::XMLNode::getChild(&Child, "Device");
  v21[0] = (const char *)Ogre::XMLNode::attribToInt(&v18, "adapter", v6);
  LOBYTE(v21[1]) = (unsigned __int8)Ogre::XMLNode::attribToBool(&v18, "refrast");
  HIBYTE(v21[1]) = (unsigned __int8)Ogre::XMLNode::attribToBool(&v18, "debug_vs");
  LOBYTE(v21[2]) = (unsigned __int8)Ogre::XMLNode::attribToBool(&v18, "debug_ps");
  BYTE1(v21[2]) = (unsigned __int8)Ogre::XMLNode::attribToBool(&v18, "debug_nv");
  v19 = (TiXmlElement *)Ogre::XMLNode::getChild(&Child, "MainWindow");
  v21[3] = nullptr;
  v21[4] = nullptr;
  BYTE1(v21[1]) = 0;
  v21[5] = (const char *)Ogre::XMLNode::attribToInt(&v19, "colorbits", v7);
  v21[6] = (const char *)Ogre::XMLNode::attribToInt(&v19, "alphabits", v8);
  v21[7] = (const char *)Ogre::XMLNode::attribToInt(&v19, "depthbits", v9);
  v21[8] = (const char *)Ogre::XMLNode::attribToInt(&v19, "stencilbits", v10);
  v21[9] = (const char *)Ogre::XMLNode::attribToInt(&v19, "multisample", v11);
  HIBYTE(v21[2]) = (unsigned __int8)Ogre::XMLNode::attribToBool(&v19, "sync_refresh");
  v20 = (TiXmlElement *)Ogre::XMLNode::getChild(&Child, "FXSetting");
  if ( v20 != nullptr
    && (Ogre::XMLNode::attribToBool(&v20, "bloom") != nullptr || Ogre::XMLNode::attribToBool(&v20, "distort") != nullptr) )
  {
    v21[9] = nullptr;
  }
  v12 = (int (__fastcall ***)(_DWORD, const char **))*(this + 6);
  *(this + 22) = (TiXmlNode *)v21[3];
  *(this + 23) = (TiXmlNode *)v21[4];
  v13 = (**v12)(v12, v21);
  result = 0;
  if ( v13 != 0 )
  {
    v14 = (Ogre::SceneManager *)operator new(0xF4u);
    Ogre::SceneManager::SceneManager(v14);
    *(this + 8) = v14;
    return 1;
  }
  return result;
}


//======================================================================
// Ogre::Root::resetRenderSystem(int,int)
// address: 0x00168680   size: 0x10 (16 bytes)
//======================================================================
int __fastcall Ogre::Root::resetRenderSystem(Ogre::Root *this, int a2, int a3)
{
  *((_DWORD *)this + 22) = a2;
  *((_DWORD *)this + 23) = a3;
  return (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 6) + 52))(*((_DWORD *)this + 6));
}


//======================================================================
// Ogre::Root::setFirstRun(bool)
// address: 0x00168690   size: 0x6 (6 bytes)
//======================================================================
_BYTE *__fastcall Ogre::Root::setFirstRun(Ogre::Root *this, bool a2)
{
  _BYTE *result; // r0

  result = (char *)this + 68;
  *result = a2;
  return result;
}


//======================================================================
// Ogre::Root::isFirstRun(void)
// address: 0x00168696   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::Root::isFirstRun(Ogre::Root *this)
{
  return *((unsigned __int8 *)this + 68);
}


//======================================================================
// Ogre::Root::loadPlugins(void)
// address: 0x0016869C   size: 0x14 (20 bytes)
//======================================================================
int __fastcall Ogre::Root::loadPlugins(Ogre::Root *this)
{
  int result; // r0

  result = dword_47BA60;
  if ( dword_47BA60 != 0 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)dword_47BA60 + 12))(dword_47BA60);
  return result;
}


//======================================================================
// Ogre::Root::Initlize(void)
// address: 0x001686B4   size: 0x7A (122 bytes)
//======================================================================
int __fastcall Ogre::Root::Initlize(Ogre::Root *this)
{
  Ogre::MemPoolMgr *v2; // r5
  Ogre::DynLibManager *v3; // r5
  Ogre::SequenceMap *v4; // r5
  const char *v5; // r1

  Ogre::Root::loadPlugins(this);
  v2 = (Ogre::MemPoolMgr *)operator new(0x400u);
  Ogre::MemPoolMgr::MemPoolMgr(v2);
  *((_DWORD *)this + 1) = v2;
  v3 = (Ogre::DynLibManager *)operator new(0x1Cu);
  Ogre::DynLibManager::DynLibManager(v3);
  *((_DWORD *)this + 2) = v3;
  Ogre::Root::initResourceManager(this);
  Ogre::Root::initSoundSystem((TiXmlNode **)this);
  v4 = (Ogre::SequenceMap *)operator new(0x18u);
  Ogre::SequenceMap::SequenceMap(v4, "entity/animmap.csv");
  *((_DWORD *)this + 9) = v4;
  *((_BYTE *)this + 70) = 1;
  *((_BYTE *)this + 71) = 0;
  *((_BYTE *)this + 69) = 0;
  *((_BYTE *)this + 74) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 21) = 1065353216;
  Ogre::LogSetCurParam(
    (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreRoot.cpp",
    (const char *)off_9C + 3,
    2,
    0x3F800000u);
  return Ogre::LogMessage((Ogre *)"Root Initialised", v5);
}


//======================================================================
// Ogre::Root::unloadPlugins(void)
// address: 0x0016873C   size: 0x66 (102 bytes)
//======================================================================
Ogre::Root *__fastcall Ogre::Root::unloadPlugins(Ogre::Root *this, int a2, const char *a3)
{
  Ogre::DynLib **i; // r5
  Ogre::DynLib *v5; // r7
  int (__fastcall *Symbol)(int); // r7
  int v7; // r0
  Ogre::DynLibManager *v8; // r0
  Ogre::DynLibManager *Singleton; // r0
  _DWORD *j; // r5
  const char *v13[2]; // [sp+4h] [bp-8h] BYREF

  v13[1] = a3;
  if ( dword_47BA60 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)dword_47BA60 + 24))(dword_47BA60);
  for ( i = *((Ogre::DynLib ***)this + 14); i != *((Ogre::DynLib ***)this + 13); Ogre::DynLibManager::unload(
                                                                                   Singleton,
                                                                                   *i) )
  {
    v5 = *--i;
    sub_3BF0BC((int)v13, "dllStopPlugin");
    Symbol = (int (__fastcall *)(int))Ogre::DynLib::getSymbol((int)v5, v13);
    v7 = sub_3BDF80(v13);
    v8 = (Ogre::DynLibManager *)Symbol(v7);
    Singleton = (Ogre::DynLibManager *)Ogre::DynLibManager::getSingleton(v8);
  }
  *((_DWORD *)this + 14) = i;
  for ( j = *((_DWORD **)this + 11); j != *((_DWORD **)this + 10); (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*j + 24))(*j) )
    --j;
  *((_DWORD *)this + 11) = j;
  return this;
}


//======================================================================
// Ogre::Root::~Root()
// address: 0x001687AC   size: 0xDC (220 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre4RootD1Ev'
void __fastcall Ogre::Root::~Root(Ogre::Root *this, int a2, const char *a3)
{
  void *v3; // r5
  void *v5; // r5
  int v6; // r0
  int v7; // r0
  void *v8; // r5
  int v9; // r0
  void *v10; // r5
  Ogre *v11; // r0
  void *v12; // r5
  Ogre::FixedString *v13; // r0
  void *v14; // r0
  void *v15; // r0

  v3 = *((void **)this + 9);
  if ( v3 != nullptr )
  {
    Ogre::SequenceMap::~SequenceMap(*((Ogre::SequenceMap **)this + 9));
    operator delete(v3);
  }
  v5 = *((void **)this + 8);
  if ( v5 != nullptr )
  {
    Ogre::SceneManager::~SceneManager(*((Ogre::SceneManager **)this + 8));
    operator delete(v5);
  }
  v6 = *((_DWORD *)this + 7);
  if ( v6 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 4))(v6);
  v7 = *((_DWORD *)this + 5);
  if ( v7 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 4))(v7);
  v8 = *((void **)this + 4);
  if ( v8 != nullptr )
  {
    Ogre::ResourceManager::~ResourceManager(*((Ogre::ResourceManager **)this + 4));
    operator delete(v8);
  }
  v9 = *((_DWORD *)this + 6);
  if ( v9 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 4))(v9);
  v10 = *((void **)this + 3);
  if ( v10 != nullptr )
  {
    Ogre::FileManager::~FileManager(*((Ogre::FileManager **)this + 3));
    operator delete(v10);
  }
  Ogre::Root::unloadPlugins(this, a2, a3);
  v11 = *((Ogre **)this + 2);
  if ( v11 != nullptr )
    v11 = (Ogre *)(*(int (__fastcall **)(Ogre *))(*(_DWORD *)v11 + 4))(v11);
  v12 = *((void **)this + 1);
  if ( v12 != nullptr )
  {
    Ogre::MemPoolMgr::~MemPoolMgr(*((Ogre::MemPoolMgr **)this + 1));
    operator delete(v12);
  }
  Ogre::LogRelease(v11);
  v13 = (Ogre::FixedString *)dword_47BA60;
  if ( dword_47BA60 != 0 )
    v13 = (Ogre::FixedString *)(*(int (__fastcall **)(int))(*(_DWORD *)dword_47BA60 + 4))(dword_47BA60);
  Ogre::FixedString::sysRelease(v13);
  sub_3BDF80((char *)this + 100);
  v14 = *((void **)this + 13);
  if ( v14 != nullptr )
    operator delete(v14);
  v15 = *((void **)this + 10);
  if ( v15 != nullptr )
    operator delete(v15);
  Ogre::XMLData::~XMLData(this);
  Ogre::Singleton<Ogre::Root>::ms_Singleton = 0;
}


//======================================================================
// Ogre::Root::getSyncRefresh(void)
// address: 0x00168890   size: 0x1E (30 bytes)
//======================================================================
TiXmlNode *__fastcall Ogre::Root::getSyncRefresh(TiXmlNode **this, int a2, TiXmlElement *a3)
{
  TiXmlNode *result; // r0
  TiXmlElement *v4[2]; // [sp+4h] [bp-8h] BYREF

  v4[1] = a3;
  result = Ogre::XMLData::getNodeByPath(this, "RenderSystem.MainWindow", 0);
  v4[0] = result;
  if ( result != nullptr )
    return (TiXmlNode *)Ogre::XMLNode::attribToBool(v4, "sync_refresh");
  return result;
}


//======================================================================
// Ogre::Root::setSyncRefresh(bool)
// address: 0x001688B8   size: 0x22 (34 bytes)
//======================================================================
__int64 __fastcall Ogre::Root::setSyncRefresh(TiXmlNode **this, int a2)
{
  __int64 v4; // [sp+0h] [bp-8h] BYREF

  LODWORD(v4) = this;
  HIDWORD(v4) = Ogre::XMLData::getNodeByPath(this, "RenderSystem.MainWindow", 0);
  if ( HIDWORD(v4) != 0 )
    Ogre::XMLNode::setAttribBool((TiXmlElement **)&v4 + 1, "sync_refresh", a2);
  return v4;
}


//======================================================================
// Ogre::Root::getBloom(void)
// address: 0x001688E4   size: 0x1E (30 bytes)
//======================================================================
TiXmlNode *__fastcall Ogre::Root::getBloom(TiXmlNode **this, int a2, TiXmlElement *a3)
{
  TiXmlNode *result; // r0
  TiXmlElement *v4[2]; // [sp+4h] [bp-8h] BYREF

  v4[1] = a3;
  result = Ogre::XMLData::getNodeByPath(this, "RenderSystem.FXSetting", 0);
  v4[0] = result;
  if ( result != nullptr )
    return (TiXmlNode *)Ogre::XMLNode::attribToBool(v4, "bloom");
  return result;
}


//======================================================================
// Ogre::Root::setBloom(bool)
// address: 0x0016890C   size: 0x22 (34 bytes)
//======================================================================
__int64 __fastcall Ogre::Root::setBloom(TiXmlNode **this, int a2)
{
  __int64 v4; // [sp+0h] [bp-8h] BYREF

  LODWORD(v4) = this;
  HIDWORD(v4) = Ogre::XMLData::getNodeByPath(this, "RenderSystem.FXSetting", 0);
  if ( HIDWORD(v4) != 0 )
    Ogre::XMLNode::setAttribBool((TiXmlElement **)&v4 + 1, "bloom", a2);
  return v4;
}


//======================================================================
// Ogre::Root::getDistort(void)
// address: 0x00168938   size: 0x1E (30 bytes)
//======================================================================
TiXmlNode *__fastcall Ogre::Root::getDistort(TiXmlNode **this, int a2, TiXmlElement *a3)
{
  TiXmlNode *result; // r0
  TiXmlElement *v4[2]; // [sp+4h] [bp-8h] BYREF

  v4[1] = a3;
  result = Ogre::XMLData::getNodeByPath(this, "RenderSystem.FXSetting", 0);
  v4[0] = result;
  if ( result != nullptr )
    return (TiXmlNode *)Ogre::XMLNode::attribToBool(v4, "distort");
  return result;
}


//======================================================================
// Ogre::Root::setDistort(bool)
// address: 0x00168960   size: 0x22 (34 bytes)
//======================================================================
__int64 __fastcall Ogre::Root::setDistort(TiXmlNode **this, int a2)
{
  __int64 v4; // [sp+0h] [bp-8h] BYREF

  LODWORD(v4) = this;
  HIDWORD(v4) = Ogre::XMLData::getNodeByPath(this, "RenderSystem.FXSetting", 0);
  if ( HIDWORD(v4) != 0 )
    Ogre::XMLNode::setAttribBool((TiXmlElement **)&v4 + 1, "distort", a2);
  return v4;
}


//======================================================================
// Ogre::Root::getWaterReflect(void)
// address: 0x0016898C   size: 0x1E (30 bytes)
//======================================================================
TiXmlNode *__fastcall Ogre::Root::getWaterReflect(TiXmlNode **this, int a2, TiXmlElement *a3)
{
  TiXmlNode *result; // r0
  TiXmlElement *v4[2]; // [sp+4h] [bp-8h] BYREF

  v4[1] = a3;
  result = Ogre::XMLData::getNodeByPath(this, "RenderSystem.FXSetting", 0);
  v4[0] = result;
  if ( result != nullptr )
    return (TiXmlNode *)Ogre::XMLNode::attribToBool(v4, "waterreflect");
  return result;
}


//======================================================================
// Ogre::Root::setWaterReflect(bool)
// address: 0x001689B4   size: 0x22 (34 bytes)
//======================================================================
__int64 __fastcall Ogre::Root::setWaterReflect(TiXmlNode **this, int a2)
{
  __int64 v4; // [sp+0h] [bp-8h] BYREF

  LODWORD(v4) = this;
  HIDWORD(v4) = Ogre::XMLData::getNodeByPath(this, "RenderSystem.FXSetting", 0);
  if ( HIDWORD(v4) != 0 )
    Ogre::XMLNode::setAttribBool((TiXmlElement **)&v4 + 1, "waterreflect", a2);
  return v4;
}


//======================================================================
// Ogre::Root::getShadowmapSize(void)
// address: 0x001689E0   size: 0x30 (48 bytes)
//======================================================================
int __fastcall Ogre::Root::getShadowmapSize(TiXmlNode **this)
{
  int v2; // r2
  int result; // r0
  TiXmlElement *NodeByPath; // [sp+4h] [bp-4h] BYREF

  NodeByPath = Ogre::XMLData::getNodeByPath(this, "RenderSystem.FXSetting", 0);
  if ( NodeByPath != nullptr && (result = Ogre::XMLNode::attribToInt(&NodeByPath, "shadowmap", v2)) != 0 )
  {
    *(this + 19) = nullptr;
  }
  else
  {
    *(this + 19) = (TiXmlNode *)(&dword_0 + 2);
    return 0;
  }
  return result;
}


//======================================================================
// Ogre::Root::setShadowmapSize(int)
// address: 0x00168A18   size: 0x2A (42 bytes)
//======================================================================
__int64 __fastcall Ogre::Root::setShadowmapSize(__int64 this)
{
  int v1; // r3
  int v2; // r4
  __int64 v4; // [sp+0h] [bp-8h] BYREF

  v4 = this;
  v1 = 2;
  v2 = HIDWORD(this);
  if ( HIDWORD(this) != 0 )
    v1 = 0;
  *(_DWORD *)(this + 76) = v1;
  HIDWORD(v4) = Ogre::XMLData::getNodeByPath((TiXmlNode **)this, "RenderSystem.FXSetting", 0);
  if ( HIDWORD(v4) != 0 )
    Ogre::XMLNode::setAttribInt((TiXmlElement **)&v4 + 1, "shadowmap", v2);
  return v4;
}


//======================================================================
// Ogre::Root::FirstRunDesc(void)
// address: 0x00168A4C   size: 0x9E (158 bytes)
//======================================================================
_BYTE *__fastcall Ogre::Root::FirstRunDesc(unsigned int this, int a2, const char *a3)
{
  _BYTE *result; // r0
  int v5; // r3
  __int64 v6; // r0

  if ( *(_DWORD *)(*(_DWORD *)(this + 24) + 60) == 0 )
  {
    Ogre::PopMessageBox((Ogre *)&unk_3FCB1A, byte_3FCB49, a3);
    j_exit(0);
  }
  result = (_BYTE *)Ogre::Root::isFirstRun((Ogre::Root *)this);
  if ( result != nullptr )
  {
    v5 = *(_DWORD *)(*(_DWORD *)(this + 24) + 60);
    switch ( v5 )
    {
      case 1:
        Ogre::Root::setBloom((TiXmlNode **)this, 0);
        Ogre::Root::setDistort((TiXmlNode **)this, 0);
        Ogre::Root::setWaterReflect((TiXmlNode **)this, 0);
        v6 = this;
        break;
      case 2:
        Ogre::Root::setBloom((TiXmlNode **)this, 0);
        Ogre::Root::setWaterReflect((TiXmlNode **)this, 0);
        Ogre::Root::setDistort((TiXmlNode **)this, 1);
        v6 = this | 0x100000000LL;
        break;
      case 3:
        Ogre::Root::setWaterReflect((TiXmlNode **)this, 1);
        Ogre::Root::setBloom((TiXmlNode **)this, 1);
        Ogre::Root::setDistort((TiXmlNode **)this, 1);
        v6 = this | 0x80000000000LL;
        break;
      default:
        return Ogre::Root::setFirstRun((Ogre::Root *)this, false);
    }
    Ogre::Root::setShadowmapSize(v6);
    return Ogre::Root::setFirstRun((Ogre::Root *)this, false);
  }
  return result;
}


//======================================================================
// Ogre::Root::getMultiSample(void)
// address: 0x00168AF4   size: 0x1E (30 bytes)
//======================================================================
TiXmlNode *__fastcall Ogre::Root::getMultiSample(TiXmlNode **this, int a2, TiXmlElement *a3)
{
  TiXmlNode *result; // r0
  int v4; // r2
  TiXmlElement *v5[2]; // [sp+4h] [bp-8h] BYREF

  v5[1] = a3;
  result = Ogre::XMLData::getNodeByPath(this, "RenderSystem.MainWindow", 0);
  v5[0] = result;
  if ( result != nullptr )
    return (TiXmlNode *)Ogre::XMLNode::attribToInt(v5, "multisample", v4);
  return result;
}


//======================================================================
// Ogre::Root::setMultiSample(int)
// address: 0x00168B1C   size: 0x22 (34 bytes)
//======================================================================
__int64 __fastcall Ogre::Root::setMultiSample(TiXmlNode **this, int a2)
{
  __int64 v4; // [sp+0h] [bp-8h] BYREF

  LODWORD(v4) = this;
  HIDWORD(v4) = Ogre::XMLData::getNodeByPath(this, "RenderSystem.MainWindow", 0);
  if ( HIDWORD(v4) != 0 )
    Ogre::XMLNode::setAttribInt((TiXmlElement **)&v4 + 1, "multisample", a2);
  return v4;
}


//======================================================================
// Ogre::Root::getActorTransProcess(void)
// address: 0x00168B48   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::Root::getActorTransProcess(Ogre::Root *this)
{
  return *((unsigned __int8 *)this + 69);
}


//======================================================================
// Ogre::Root::setActorTransProcess(bool)
// address: 0x00168B4E   size: 0x6 (6 bytes)
//======================================================================
_BYTE *__fastcall Ogre::Root::setActorTransProcess(Ogre::Root *this, bool a2)
{
  _BYTE *result; // r0

  result = (char *)this + 69;
  *result = a2;
  return result;
}


//======================================================================
// Ogre::Root::getBackSceneProcess(void)
// address: 0x00168B54   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::Root::getBackSceneProcess(Ogre::Root *this)
{
  return *((unsigned __int8 *)this + 71);
}


//======================================================================
// Ogre::Root::setBackSceneProcess(bool)
// address: 0x00168B5A   size: 0x6 (6 bytes)
//======================================================================
_BYTE *__fastcall Ogre::Root::setBackSceneProcess(Ogre::Root *this, bool a2)
{
  _BYTE *result; // r0

  result = (char *)this + 71;
  *result = a2;
  return result;
}


//======================================================================
// Ogre::Root::isSaveShaderEnvKeys(void)
// address: 0x00168B60   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::Root::isSaveShaderEnvKeys(Ogre::Root *this)
{
  return *((unsigned __int8 *)this + 72);
}


//======================================================================
// Ogre::Root::setSaveShaderEnvKey(bool)
// address: 0x00168B66   size: 0x6 (6 bytes)
//======================================================================
_BYTE *__fastcall Ogre::Root::setSaveShaderEnvKey(Ogre::Root *this, bool a2)
{
  _BYTE *result; // r0

  result = (char *)this + 72;
  *result = a2;
  return result;
}


//======================================================================
// Ogre::Root::isCompileShaderEnvKeys(void)
// address: 0x00168B6C   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::Root::isCompileShaderEnvKeys(Ogre::Root *this)
{
  return *((unsigned __int8 *)this + 73);
}


//======================================================================
// Ogre::Root::setCompileShaderEnvKeys(bool)
// address: 0x00168B72   size: 0x6 (6 bytes)
//======================================================================
_BYTE *__fastcall Ogre::Root::setCompileShaderEnvKeys(Ogre::Root *this, bool a2)
{
  _BYTE *result; // r0

  result = (char *)this + 73;
  *result = a2;
  return result;
}


//======================================================================
// Ogre::Root::setGlobalSoundVolume(float)
// address: 0x00168B78   size: 0xC (12 bytes)
//======================================================================
int __fastcall Ogre::Root::setGlobalSoundVolume(Ogre::Root *this, float a2)
{
  return (*(int (__fastcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 5) + 56))(*((_DWORD *)this + 5), LODWORD(a2));
}


//======================================================================
// Ogre::Root::setGlobalMusicVolume(float)
// address: 0x00168B84   size: 0xC (12 bytes)
//======================================================================
int __fastcall Ogre::Root::setGlobalMusicVolume(Ogre::Root *this, float a2)
{
  return (*(int (__fastcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 5) + 52))(*((_DWORD *)this + 5), LODWORD(a2));
}


//======================================================================
// Ogre::Root::setLoadShaderCache(bool)
// address: 0x00168B90   size: 0x6 (6 bytes)
//======================================================================
_BYTE *__fastcall Ogre::Root::setLoadShaderCache(Ogre::Root *this, bool a2)
{
  _BYTE *result; // r0

  result = (char *)this + 70;
  *result = a2;
  return result;
}


//======================================================================
// Ogre::Root::isLoadShaderCache(void)
// address: 0x00168B96   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::Root::isLoadShaderCache(Ogre::Root *this)
{
  return *((unsigned __int8 *)this + 70);
}


//======================================================================
// Ogre::Root::setViewSize(float)
// address: 0x00168B9C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::Root::setViewSize(int this, float a2)
{
  *(float *)(this + 84) = a2;
  return this;
}


//======================================================================
// Ogre::Root::getViewSize(void)
// address: 0x00168BA0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::Root::getViewSize(Ogre::Root *this)
{
  return *((_DWORD *)this + 21);
}


//======================================================================
// Ogre::Root::unloadPlugin(std::string const&)
// address: 0x00168BC4   size: 0x80 (128 bytes)
//======================================================================
void __fastcall Ogre::Root::unloadPlugin(int a1, const void **a2)
{
  Ogre::DynLib **v2; // r4
  _DWORD *v5; // r0
  size_t v6; // r2
  int v7; // r0
  Ogre::DynLibManager *v8; // r0
  Ogre::DynLibManager *Singleton; // r0
  int v10; // r1
  Ogre::DynLib *v11; // [sp+0h] [bp-14h]
  int (__fastcall *Symbol)(int); // [sp+0h] [bp-14h]
  Ogre::DynLib **v13; // [sp+4h] [bp-10h]
  const char *v14[2]; // [sp+Ch] [bp-8h] BYREF

  v2 = *(Ogre::DynLib ***)(a1 + 52);
  v13 = *(Ogre::DynLib ***)(a1 + 56);
  while ( v2 != v13 )
  {
    v5 = *(_DWORD **)*v2;
    v11 = *v2;
    v6 = *(v5 - 3);
    if ( v6 == *((_DWORD *)*a2 - 3) && j_memcmp(v5, *a2, v6) == 0 )
    {
      sub_3BF0BC((int)v14, "dllStopPlugin");
      Symbol = (int (__fastcall *)(int))Ogre::DynLib::getSymbol((int)v11, v14);
      v7 = sub_3BDF80(v14);
      v8 = (Ogre::DynLibManager *)Symbol(v7);
      Singleton = (Ogre::DynLibManager *)Ogre::DynLibManager::getSingleton(v8);
      Ogre::DynLibManager::unload(Singleton, *v2);
      v10 = *(_DWORD *)(a1 + 56);
      if ( (Ogre::DynLib **)v10 != v2 + 1 )
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::DynLib *>(v2 + 1, v10, v2);
      *(_DWORD *)(a1 + 56) -= 4;
      return;
    }
    ++v2;
  }
}


//======================================================================
// Ogre::Root::loadPlugin(std::string const&)
// address: 0x00168CF4   size: 0x5A (90 bytes)
//======================================================================
int __fastcall Ogre::Root::loadPlugin(Ogre::DynLibManager *a1, int a2)
{
  int Singleton; // r0
  __int64 v5; // r0
  int v6; // r3
  int v7; // r5
  int (__fastcall *Symbol)(int); // r5
  int v9; // r0
  int v11; // [sp+8h] [bp-Ch] BYREF
  const char *v12[2]; // [sp+Ch] [bp-8h] BYREF

  Singleton = Ogre::DynLibManager::getSingleton(a1);
  LODWORD(v5) = Ogre::DynLibManager::load(Singleton, a2);
  HIDWORD(v5) = *((_DWORD *)a1 + 14);
  v6 = *((_DWORD *)a1 + 15);
  v11 = v5;
  if ( HIDWORD(v5) == v6 )
  {
    LODWORD(v5) = (char *)a1 + 52;
    std::vector<Ogre::DynLib *>::_M_insert_aux(v5, &v11);
  }
  else
  {
    if ( HIDWORD(v5) != 0 )
      *(_DWORD *)HIDWORD(v5) = v5;
    *((_DWORD *)a1 + 14) += 4;
  }
  v7 = v11;
  sub_3BF0BC((int)v12, "dllStartPlugin");
  Symbol = (int (__fastcall *)(int))Ogre::DynLib::getSymbol(v7, v12);
  v9 = sub_3BDF80(v12);
  return Symbol(v9);
}


//======================================================================
// Ogre::Root::uninstallPlugin(Ogre::Plugin *)
// address: 0x00168D74   size: 0xD0 (208 bytes)
//======================================================================
int __fastcall Ogre::Root::uninstallPlugin(Ogre::Root *this, Ogre::Plugin *a2, int a3, unsigned int a4)
{
  const char **v6; // r0
  Ogre::Plugin **v7; // r2
  Ogre::Plugin **v8; // r1
  int i; // r0
  Ogre::Plugin **v10; // r3
  Ogre::Plugin **v11; // r6
  int v12; // r0
  int v13; // r1
  const char *v14; // r1

  Ogre::LogSetCurParam((Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreRoot.cpp", (_BYTE *)&stru_238.st_size + 1, 1, a4);
  v6 = (const char **)(*(int (__fastcall **)(Ogre::Plugin *))(*(_DWORD *)a2 + 8))(a2);
  Ogre::LogMessage((Ogre *)"Uninstalling plugin: %s", *v6);
  v7 = *((Ogre::Plugin ***)this + 10);
  v8 = *((Ogre::Plugin ***)this + 11);
  for ( i = ((char *)v8 - (char *)v7) >> 4; ; --i )
  {
    v10 = v7;
    if ( i <= 0 )
      break;
    if ( *v7 == a2 )
      goto LABEL_21;
    if ( v7[1] == a2 )
    {
      v11 = v7 + 1;
      goto LABEL_23;
    }
    if ( v7[2] == a2 )
    {
      v11 = v7 + 2;
      goto LABEL_23;
    }
    v7 += 4;
    if ( *(v7 - 1) == a2 )
    {
      v11 = v10 + 3;
      goto LABEL_23;
    }
  }
  v12 = v8 - v7;
  if ( v12 != 2 )
  {
    if ( v12 != 3 )
    {
      if ( v12 != 1 )
        goto LABEL_27;
LABEL_19:
      if ( *v10 != a2 )
        goto LABEL_27;
      goto LABEL_22;
    }
    if ( *v7 == a2 )
    {
LABEL_21:
      v11 = v7;
      goto LABEL_23;
    }
    v10 = v7 + 1;
  }
  if ( *v10 != a2 )
  {
    ++v10;
    goto LABEL_19;
  }
LABEL_22:
  v11 = v10;
LABEL_23:
  if ( v11 != v8 )
  {
    (*(void (__fastcall **)(Ogre::Plugin *))(*(_DWORD *)a2 + 20))(a2);
    (*(void (__fastcall **)(Ogre::Plugin *))(*(_DWORD *)a2 + 24))(a2);
    v13 = *((_DWORD *)this + 11);
    if ( v11 + 1 != (Ogre::Plugin **)v13 )
      std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::Plugin *>(v11 + 1, v13, v11);
    v10 = (Ogre::Plugin **)(*((_DWORD *)this + 11) - 4);
    *((_DWORD *)this + 11) = v10;
  }
LABEL_27:
  Ogre::LogSetCurParam(
    (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreRoot.cpp",
    (_BYTE *)&stru_248.st_name + 2,
    1,
    (unsigned int)v10);
  return Ogre::LogMessage((Ogre *)"Plugin successfully uninstalled", v14);
}


//======================================================================
// Ogre::Root::installPlugin(Ogre::Plugin *)
// address: 0x00168F08   size: 0x6E (110 bytes)
//======================================================================
__int64 __fastcall Ogre::Root::installPlugin(__int64 this, int a2, unsigned int a3)
{
  int v3; // r4
  const char **v4; // r0
  __int64 v5; // r0
  unsigned int v6; // r3
  const char *v7; // r1
  __int64 v9; // [sp+0h] [bp-8h] BYREF

  v9 = this;
  v3 = this;
  Ogre::LogSetCurParam(
    (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreRoot.cpp",
    (const char *)&stru_228.st_shndx,
    1,
    a3);
  v4 = (const char **)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v9) + 8))(HIDWORD(v9));
  Ogre::LogMessage((Ogre *)"Installing plugin: %s", *v4);
  HIDWORD(v5) = *(_DWORD *)(v3 + 44);
  if ( HIDWORD(v5) == *(_DWORD *)(v3 + 48) )
  {
    LODWORD(v5) = v3 + 40;
    HIDWORD(v5) = (unsigned __int64)std::vector<Ogre::Plugin *>::_M_insert_aux(v5, (_DWORD *)&v9 + 1) >> 32;
  }
  else
  {
    if ( HIDWORD(v5) != 0 )
      *(_DWORD *)HIDWORD(v5) = HIDWORD(v9);
    *(_DWORD *)(v3 + 44) += 4;
  }
  (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)HIDWORD(v9) + 12))(HIDWORD(v9), HIDWORD(v5));
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v9) + 16))(HIDWORD(v9));
  Ogre::LogSetCurParam(
    (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreRoot.cpp",
    (const char *)&stru_238.st_value,
    1,
    v6);
  Ogre::LogMessage((Ogre *)"Plugin successfully installed", v7);
  return v9;
}

