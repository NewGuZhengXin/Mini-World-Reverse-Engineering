// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ClientManager

//======================================================================
// ClientManager::onPause(void)
// address: 0x002F56A0   size: 0xA (10 bytes)
//======================================================================
int __fastcall ClientManager::onPause(ClientManager *this)
{
  _BYTE *v1; // r3

  v1 = (char *)this + 48;
  *v1 = 1;
  return 1;
}


//======================================================================
// ClientManager::onResume(void)
// address: 0x002F56AA   size: 0xA (10 bytes)
//======================================================================
int __fastcall ClientManager::onResume(ClientManager *this)
{
  _BYTE *v1; // r3

  v1 = (char *)this + 48;
  *v1 = 0;
  return 0;
}


//======================================================================
// ClientManager::onResetRender(int,int)
// address: 0x002F56D0   size: 0x60 (96 bytes)
//======================================================================
int __fastcall ClientManager::onResetRender(Ogre::Root **this, const char *a2, int a3)
{
  _BOOL4 v6; // r0
  __suseconds_t v7; // r1
  int v8; // r7
  Ogre::Timer *v9; // r0
  __suseconds_t v10; // r1
  int v11; // r4
  unsigned int v12; // r3
  int SystemTick; // [sp+Ch] [bp-8h]

  SystemTick = Ogre::Timer::getSystemTick((Ogre::Timer *)this, (__suseconds_t)a2);
  Ogre::Root::resetRenderSystem(*(this + 2), (int)a2, a3);
  v6 = GameUI::resetScreenSize(*(this + 7), (int)a2, a3);
  v8 = Ogre::Timer::getSystemTick((Ogre::Timer *)v6, v7);
  v9 = (Ogre::Timer *)BlockMaterialMgr::needGenBlockIcon(*(this + 10));
  *(this + 11) = (Ogre::Root *)(&dword_0 + 2);
  v11 = Ogre::Timer::getSystemTick(v9, v10);
  Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/ClientManager.cpp", (const char *)&dword_54 + 3, 2, v12);
  Ogre::LogMessage((Ogre *)"onResetRender OK: width=%d, height=%d, ticks=%d/%d", a2, a3, v8 - SystemTick, v11 - v8);
  return 1;
}


//======================================================================
// ClientManager::onStart(void)
// address: 0x002F5738   size: 0xC (12 bytes)
//======================================================================
int __fastcall ClientManager::onStart(ClientManager *this)
{
  Ogre::Root::onStart(*((_DWORD *)this + 2));
  return 1;
}


//======================================================================
// ClientManager::onStop(void)
// address: 0x002F5744   size: 0x24 (36 bytes)
//======================================================================
int __fastcall ClientManager::onStop(ClientManager *this)
{
  __int64 v2; // r0
  int v3; // r2

  (*(void (__fastcall **)(_DWORD))(**((_DWORD **)this + 19) + 56))(*((_DWORD *)this + 19));
  LODWORD(v2) = *((_DWORD *)this + 2);
  Ogre::Root::onStop(v2, v3);
  Ogre::ScriptVM::callFunction(*((Ogre::ScriptVM **)this + 6), "GameStop", (const char *)&unk_3FB8EA);
  return 1;
}


//======================================================================
// ClientManager::onBackPressed(void)
// address: 0x002F5770   size: 0x10 (16 bytes)
//======================================================================
GameEventQue *__fastcall ClientManager::onBackPressed(ClientManager *this)
{
  GameEventQue *result; // r0

  result = *((GameEventQue **)this + 8);
  if ( result != nullptr )
    return (GameEventQue *)GameEventQue::postSimpleEvent(result, 31);
  return result;
}


//======================================================================
// ClientManager::canDoFrame(void)
// address: 0x002F57BC   size: 0x1A (26 bytes)
//======================================================================
bool __fastcall ClientManager::canDoFrame(ClientManager *this)
{
  int v1; // r3

  v1 = 0;
  if ( *((_BYTE *)this + 48) == 0 )
    return *((_DWORD *)this + 11) == 2;
  return v1;
}


//======================================================================
// ClientManager::onTouchPressed(int,int *,float *,float *)
// address: 0x002F57D6   size: 0x24 (36 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> ClientManager::onTouchPressed(
        void ***this,
        int a2,
        int *a3,
        float *a4,
        float *a5)
{
  if ( ClientManager::canDoFrame((ClientManager *)this) )
    Ogre::InputManager::onTouchPressed(*(this + 13), a2, a3, a4, a5);
}


//======================================================================
// ClientManager::onTouchReleased(int,int *,float *,float *)
// address: 0x002F57FA   size: 0x24 (36 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> ClientManager::onTouchReleased(
        void ***this,
        int a2,
        int *a3,
        float *a4,
        float *a5)
{
  if ( ClientManager::canDoFrame((ClientManager *)this) )
    Ogre::InputManager::onTouchReleased(*(this + 13), a2, a3, a4, a5);
}


//======================================================================
// ClientManager::onTouchMoved(int,int *,float *,float *)
// address: 0x002F581E   size: 0x24 (36 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> ClientManager::onTouchMoved(void ***this, int a2, int *a3, float *a4, float *a5)
{
  if ( ClientManager::canDoFrame((ClientManager *)this) )
    Ogre::InputManager::onTouchMoved(*(this + 13), a2, a3, a4, a5);
}


//======================================================================
// ClientManager::onTouchCancelled(int,int *,float *,float *)
// address: 0x002F5842   size: 0x24 (36 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> ClientManager::onTouchCancelled(
        void ***this,
        int a2,
        int *a3,
        float *a4,
        float *a5)
{
  if ( ClientManager::canDoFrame((ClientManager *)this) )
    Ogre::InputManager::onTouchCancelled(*(this + 13), a2, a3, a4, a5);
}


//======================================================================
// ClientManager::ClientManager(void)
// address: 0x002F5868   size: 0x72 (114 bytes)
//======================================================================
// Alternative name is '_ZN13ClientManagerC1Ev'
void __fastcall ClientManager::ClientManager(ClientManager *this)
{
  _DWORD *v1; // r6
  ClientManager *v3; // r7

  v1 = (_DWORD *)((char *)this + 96);
  Ogre::Singleton<ClientManager>::ms_Singleton = (int)this;
  *((_DWORD *)this + 11) = 0;
  v3 = this;
  *(_DWORD *)this = &off_4625F0;
  *((_BYTE *)this + 48) = 0;
  *((_BYTE *)this + 49) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 19) = 0;
  j_memset((char *)this + 96, 0, 0x10u);
  *((_DWORD *)this + 26) = v1;
  *((_DWORD *)this + 27) = v1;
  v1 += 6;
  *((_DWORD *)this + 28) = 0;
  j_memset(v1, 0, 0x10u);
  *((_DWORD *)this + 34) = 0;
  v3 = (ClientManager *)((char *)v3 + 156);
  *((_DWORD *)this + 32) = v1;
  *((_DWORD *)this + 33) = v1;
  j_memset(v3, 0, 0x10u);
  v1[13] = 0;
  v1[11] = v3;
  v1[12] = v3;
  *((_DWORD *)this + 1) = 1;
}


//======================================================================
// ClientManager::sendUIEvent(char const*)
// address: 0x002F58E4   size: 0xA (10 bytes)
//======================================================================
void __fastcall ClientManager::sendUIEvent(GameUI **this, char *a2)
{
  GameUI::SendEvent(*(this + 7), a2);
}


//======================================================================
// ClientManager::updateLoadingGame(void)
// address: 0x002F58F0   size: 0xC2 (194 bytes)
//======================================================================
int __fastcall ClientManager::updateLoadingGame(ClientManager *this)
{
  int result; // r0
  int v3; // r0
  const char *v4; // r0
  CSMsgHandler *v5; // r1
  __int64 v6; // r0
  int v7; // r1
  const char *v8; // r0
  char v9[256]; // [sp+4h] [bp-104h] BYREF

  result = *((_DWORD *)this + 20);
  if ( result != 0 )
  {
    result = (*(int (__fastcall **)(int))(*(_DWORD *)result + 28))(result);
    if ( result != 0 )
    {
      v3 = *((_DWORD *)this + 19);
      if ( v3 != 0 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 52))(v3);
        v4 = (const char *)(*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 19) + 12))(*((_DWORD *)this + 19));
        j_sprintf(v9, "%s_Quit", v4);
        Ogre::ScriptVM::callFunction(*((Ogre::ScriptVM **)this + 6), v9, (const char *)&unk_3FB8EA);
        Ogre::InputManager::UnregisterInputHandler(*((_DWORD *)this + 13), *((void **)this + 19));
        v5 = *((CSMsgHandler **)this + 19);
        if ( v5 != nullptr )
          v5 = (CSMsgHandler *)((char *)v5 + 4);
        CSMgr::removeMsgHandler(*((CSMgr **)this + 18), v5);
        (*(void (__fastcall **)(_DWORD))(**((_DWORD **)this + 19) + 24))(*((_DWORD *)this + 19));
      }
      HIDWORD(v6) = *((_DWORD *)this + 20);
      *((_DWORD *)this + 19) = HIDWORD(v6);
      *((_DWORD *)this + 20) = 0;
      LODWORD(v6) = Ogre::Singleton<Ogre::InputManager>::ms_Singleton;
      v7 = (unsigned __int64)Ogre::InputManager::RegisterInputHandler(
                               v6,
                               (int)&Ogre::Singleton<Ogre::InputManager>::ms_Singleton) >> 32;
      v8 = (const char *)(*(int (__fastcall **)(_DWORD, int))(**((_DWORD **)this + 19) + 12))(
                           *((_DWORD *)this + 19),
                           v7);
      j_sprintf(v9, "%s_Enter", v8);
      Ogre::ScriptVM::callFunction(*((Ogre::ScriptVM **)this + 6), v9, (const char *)&unk_3FB8EA);
      (*(void (__fastcall **)(_DWORD))(**((_DWORD **)this + 19) + 60))(*((_DWORD *)this + 19));
      return (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 19) + 48))(*((_DWORD *)this + 19));
    }
  }
  return result;
}


//======================================================================
// ClientManager::setGameData(char const*,int)
// address: 0x002F59CC   size: 0x3C (60 bytes)
//======================================================================
int __fastcall ClientManager::setGameData(ClientManager *this, const char *a2, int a3)
{
  TiXmlNode *RootNode; // [sp+4h] [bp-10h] BYREF
  TiXmlNode *v7; // [sp+8h] [bp-Ch] BYREF
  TiXmlElement *v8; // [sp+Ch] [bp-8h] BYREF

  RootNode = (TiXmlNode *)Ogre::XMLData::getRootNode((TiXmlNode **)Ogre::Singleton<Ogre::Root>::ms_Singleton);
  v7 = Ogre::XMLNode::getOrCreateChild(&RootNode, "GameData");
  v8 = Ogre::XMLNode::getOrCreateChild(&v7, "Settinig");
  return Ogre::XMLNode::setAttribInt(&v8, a2, a3);
}


//======================================================================
// ClientManager::getGameData(char const*)
// address: 0x002F5A14   size: 0x26 (38 bytes)
//======================================================================
TiXmlNode *__fastcall ClientManager::getGameData(ClientManager *this, const char *a2)
{
  TiXmlNode *result; // r0
  int v4; // r2
  TiXmlElement *v5; // [sp+4h] [bp-4h] BYREF

  result = Ogre::XMLData::getNodeByPath((TiXmlNode **)Ogre::Singleton<Ogre::Root>::ms_Singleton, "GameData.Settinig", 0);
  v5 = result;
  if ( result != nullptr )
    return (TiXmlNode *)Ogre::XMLNode::attribToInt(&v5, a2, v4);
  return result;
}


//======================================================================
// ClientManager::appalyGameSetData(void)
// address: 0x002F5A44   size: 0x10 (16 bytes)
//======================================================================
int __fastcall ClientManager::appalyGameSetData(ClientManager *this)
{
  int result; // r0

  result = *((_DWORD *)this + 19);
  if ( result != 0 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)result + 60))(result);
  return result;
}


//======================================================================
// ClientManager::isMobile(void)
// address: 0x002F5A54   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientManager::isMobile(ClientManager *this)
{
  return 1;
}


//======================================================================
// ClientManager::getNullItemIcon(void)
// address: 0x002F5A58   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientManager::getNullItemIcon(ClientManager *this)
{
  return 0;
}


//======================================================================
// ClientManager::playMusic(char const*)
// address: 0x002F5A5C   size: 0x24 (36 bytes)
//======================================================================
__int64 __fastcall ClientManager::playMusic(ClientManager *this, const char *a2)
{
  (*(void (__fastcall **)(int, _DWORD, const char *, int))(*(_DWORD *)Ogre::Singleton<Ogre::SoundSystem>::ms_Singleton
                                                         + 20))(
    Ogre::Singleton<Ogre::SoundSystem>::ms_Singleton,
    0,
    a2,
    1);
  return 0x3F800000000001F4LL;
}


//======================================================================
// ClientManager::stopMusic(void)
// address: 0x002F5A84   size: 0x24 (36 bytes)
//======================================================================
__int64 __fastcall ClientManager::stopMusic(ClientManager *this)
{
  (*(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)Ogre::Singleton<Ogre::SoundSystem>::ms_Singleton + 20))(
    Ogre::Singleton<Ogre::SoundSystem>::ms_Singleton,
    0,
    0,
    0);
  return 0x3F800000000001F4LL;
}


//======================================================================
// ClientManager::playSound2D(char const*,float)
// address: 0x002F5AAC   size: 0x12 (18 bytes)
//======================================================================
int __fastcall ClientManager::playSound2D(ClientManager *this, const char *a2, float a3)
{
  return (*(int (__fastcall **)(int, const char *, _DWORD))(*(_DWORD *)Ogre::Singleton<Ogre::SoundSystem>::ms_Singleton
                                                          + 28))(
           Ogre::Singleton<Ogre::SoundSystem>::ms_Singleton,
           a2,
           LODWORD(a3));
}


//======================================================================
// ClientManager::getNetworkState(void)
// address: 0x002F5AC4   size: 0x8 (8 bytes)
//======================================================================
int __fastcall ClientManager::getNetworkState(ClientManager *this)
{
  return Ogre::GetNetworkState(this);
}


//======================================================================
// ClientManager::changeNetState(int)
// address: 0x002F5ACC   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientManager::changeNetState(int this, int a2)
{
  *(_DWORD *)(this + 4) = a2;
  return this;
}


//======================================================================
// ClientManager::isSharingOWorld(void)
// address: 0x002F5AD0   size: 0x1A (26 bytes)
//======================================================================
int __fastcall ClientManager::isSharingOWorld(ClientManager *this)
{
  int result; // r0

  result = g_CSMgr;
  if ( g_CSMgr != 0 )
    return *(_DWORD *)(g_CSMgr + 40496) == 1;
  return result;
}


//======================================================================
// ClientManager::clientLog(char *)
// address: 0x002F5AF4   size: 0x1A (26 bytes)
//======================================================================
int __fastcall ClientManager::clientLog(ClientManager *this, Ogre *a2, int a3, unsigned int a4)
{
  const char *v5; // r1

  Ogre::LogSetCurParam(
    (int)"D:/work/oworldsrc/client/iworld/ClientManager.cpp",
    (const char *)&stru_1D8.st_shndx,
    2,
    a4);
  return Ogre::LogMessage(a2, v5);
}


//======================================================================
// ClientManager::clientVersion(void)
// address: 0x002F5B14   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall ClientManager::clientVersion(ClientManager *this)
{
  return "0.1.0";
}


//======================================================================
// ClientManager::getHwnd(void)
// address: 0x002F5B20   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientManager::getHwnd(ClientManager *this)
{
  return *((_DWORD *)this + 22);
}


//======================================================================
// ClientManager::setRenderContent(Ogre::Camera *,Ogre::GameScene *)
// address: 0x002F5B24   size: 0x18 (24 bytes)
//======================================================================
int __fastcall ClientManager::setRenderContent(int this, Ogre::Camera *a2, Ogre::GameScene *a3)
{
  *(_DWORD *)(*(_DWORD *)(this + 16) + 584) = a2;
  *(_DWORD *)(*(_DWORD *)(this + 16) + 616) = a3;
  *(_DWORD *)(*(_DWORD *)(this + 20) + 616) = a3;
  return this;
}


//======================================================================
// ClientManager::initEngine(void)
// address: 0x002F5B3C   size: 0x42 (66 bytes)
//======================================================================
int __fastcall ClientManager::initEngine(ClientManager *this)
{
  int inited; // r6
  Ogre::InputManager *v3; // r5

  *((_DWORD *)this + 22) = 0;
  inited = Ogre::Root::initRenderSystem(*((TiXmlNode ***)this + 2), nullptr);
  if ( inited != 0 )
  {
    (*(void (__fastcall **)(int, int))(*(_DWORD *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton + 72))(
      Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton,
      1);
    v3 = (Ogre::InputManager *)operator new(0x64u);
    Ogre::InputManager::InputManager(v3, *((void **)this + 22));
    *((_DWORD *)this + 13) = v3;
  }
  return inited;
}


//======================================================================
// ClientManager::releaseEngine(void)
// address: 0x002F5B84   size: 0x3C (60 bytes)
//======================================================================
int __fastcall ClientManager::releaseEngine(ClientManager *this)
{
  void *v1; // r5
  int v3; // r0
  int v4; // r0
  int result; // r0

  v1 = *((void **)this + 13);
  if ( v1 != nullptr )
  {
    Ogre::InputManager::~InputManager(*((Ogre::InputManager **)this + 13));
    operator delete(v1);
  }
  v3 = *((_DWORD *)this + 4);
  if ( v3 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  v4 = *((_DWORD *)this + 3);
  if ( v4 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
  result = *((_DWORD *)this + 5);
  if ( result != 0 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)result + 4))(result);
  return result;
}


//======================================================================
// ClientManager::releaseGameData(void)
// address: 0x002F5BC0   size: 0xD8 (216 bytes)
//======================================================================
void __fastcall ClientManager::releaseGameData(ClientManager *this)
{
  _DWORD *i; // r5
  _DWORD *j; // r5
  int v4; // r0
  void *v5; // r5
  void *v6; // r5
  void *v7; // r5
  void *v8; // r5
  void *v9; // r5
  void *v10; // r5
  void *v11; // r5
  AchievementManager *v12; // r4

  for ( i = *((_DWORD **)this + 41); i != (_DWORD *)((char *)this + 156); i = (_DWORD *)sub_391DDC(i) )
    (*(void (__fastcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 3) + 92))(*((_DWORD *)this + 3), i[5]);
  for ( j = *((_DWORD **)this + 26); j != (_DWORD *)((char *)this + 96); j = (_DWORD *)sub_391DDC(j) )
  {
    v4 = j[5];
    if ( v4 != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
  }
  v5 = *((void **)this + 14);
  if ( v5 != nullptr )
  {
    ClientAccountMgr::~ClientAccountMgr(*((ClientAccountMgr **)this + 14));
    operator delete(v5);
  }
  v6 = *((void **)this + 8);
  if ( v6 != nullptr )
  {
    GameEventQue::~GameEventQue(*((GameEventQue **)this + 8));
    operator delete(v6);
  }
  v7 = *((void **)this + 7);
  if ( v7 != nullptr )
  {
    GameUI::~GameUI(*((GameUI **)this + 7));
    operator delete(v7);
  }
  v8 = *((void **)this + 6);
  if ( v8 != nullptr )
  {
    Ogre::ScriptVM::~ScriptVM(*((Ogre::ScriptVM **)this + 6));
    operator delete(v8);
  }
  v9 = *((void **)this + 10);
  if ( v9 != nullptr )
  {
    BlockMaterialMgr::~BlockMaterialMgr(*((BlockMaterialMgr **)this + 10));
    operator delete(v9);
  }
  v10 = *((void **)this + 17);
  if ( v10 != nullptr )
  {
    DefManager::~DefManager(*((void ***)this + 17));
    operator delete(v10);
  }
  v11 = *((void **)this + 9);
  if ( v11 != nullptr )
  {
    DebugDataMgr::~DebugDataMgr(*((DebugDataMgr **)this + 9));
    operator delete(v11);
  }
  v12 = *((AchievementManager **)this + 16);
  if ( v12 != nullptr )
  {
    AchievementManager::~AchievementManager(v12);
    operator delete(v12);
  }
}


//======================================================================
// ClientManager::destroy(void)
// address: 0x002F5C98   size: 0x34 (52 bytes)
//======================================================================
void __fastcall ClientManager::destroy(CSMgr **this)
{
  int v2; // r1
  const char *v3; // r2
  int v4; // r0
  Ogre::Root *v5; // r4

  ClientManager::releaseGameData((ClientManager *)this);
  ClientManager::releaseEngine((ClientManager *)this);
  CSMgr::release(*(this + 18));
  v4 = (int)*(this + 18);
  if ( v4 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
  v5 = *(this + 2);
  if ( v5 != nullptr )
  {
    Ogre::Root::~Root(v5, v2, v3);
    operator delete(v5);
  }
}


//======================================================================
// ClientManager::onTerminate(void)
// address: 0x002F5CCC   size: 0x10 (16 bytes)
//======================================================================
int __fastcall ClientManager::onTerminate(CSMgr **this)
{
  ClientManager::destroy(this);
  *(this + 11) = nullptr;
  return 1;
}


//======================================================================
// ClientManager::setupRenderer(void)
// address: 0x002F5CDC   size: 0xC0 (192 bytes)
//======================================================================
int __fastcall ClientManager::setupRenderer(ClientManager *this)
{
  Ogre::NormalSceneRenderer *v2; // r5
  int v3; // r0
  int v4; // r5
  Ogre::UIRenderer *v5; // r7
  int v6; // r0
  MinimapRenderer *v7; // r7
  int v8; // r0
  int v9; // r7

  v2 = (Ogre::NormalSceneRenderer *)operator new(0x430u);
  Ogre::NormalSceneRenderer::NormalSceneRenderer(v2);
  *((_DWORD *)this + 4) = v2;
  *((_DWORD *)v2 + 155) = 6;
  *((_DWORD *)v2 + 156) = -16777216;
  *((_DWORD *)v2 + 157) = 1065353216;
  v3 = Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton;
  *((_DWORD *)v2 + 158) = 0;
  v4 = *((_DWORD *)this + 4);
  *(_DWORD *)(v4 + 612) = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 32))(v3);
  Ogre::SceneManager::addSceneRenderer(Ogre::Singleton<Ogre::SceneManager>::ms_Singleton, 0, *((_DWORD *)this + 4));
  v5 = (Ogre::UIRenderer *)operator new(0x364u);
  Ogre::UIRenderer::UIRenderer(v5);
  *((_DWORD *)this + 3) = v5;
  Ogre::UIRenderer::loadResTable(v5);
  v6 = Ogre::Singleton<Ogre::SceneManager>::ms_Singleton;
  *(_DWORD *)(*((_DWORD *)this + 3) + 864) = UIRenderCallback;
  Ogre::SceneManager::addSceneRenderer(v6, 2, *((_DWORD *)this + 3));
  v7 = (MinimapRenderer *)operator new(0x2A4u);
  MinimapRenderer::MinimapRenderer(v7, *((Ogre::UIRenderer **)this + 3));
  v8 = Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton;
  *((_DWORD *)this + 5) = v7;
  *((_BYTE *)v7 + 16) = 0;
  v9 = *((_DWORD *)this + 5);
  *(_DWORD *)(v9 + 612) = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 32))(v8);
  Ogre::SceneManager::addSceneRenderer(Ogre::Singleton<Ogre::SceneManager>::ms_Singleton, 1, *((_DWORD *)this + 5));
  return 1;
}


//======================================================================
// ClientManager::handleEvents(void)
// address: 0x002F5DB8   size: 0x3A (58 bytes)
//======================================================================
int __fastcall ClientManager::handleEvents(GameEventQue **this)
{
  int result; // r0
  int v3; // r5
  GameUI *v4; // r6
  char *EventName; // r0
  int v6; // r0

  while ( 1 )
  {
    result = GameEventQue::popEvent(*(this + 8));
    v3 = result;
    if ( result == 0 )
      break;
    v4 = *(this + 7);
    EventName = (char *)GameEventQue::getEventName(*(this + 8), result);
    GameUI::SendEvent(v4, EventName);
    v6 = (int)*(this + 19);
    if ( v6 != 0 )
      (*(void (__fastcall **)(int, int))(*(_DWORD *)v6 + 40))(v6, v3);
    GameEventQue::freeEvent(*(this + 8), v3);
  }
  return result;
}


//======================================================================
// ClientManager::doFrame(void)
// address: 0x002F5DF4   size: 0x110 (272 bytes)
//======================================================================
int __fastcall ClientManager::doFrame(GameUI **this, __suseconds_t a2)
{
  int SystemTick; // r0
  __suseconds_t v4; // r1
  int v5; // r2
  unsigned int v6; // r0
  unsigned int *v7; // r5
  Ogre::Timer *v8; // r0
  int v9; // r7
  Ogre::Timer *isMobile; // r0
  __suseconds_t v11; // r1
  int v12; // r7
  Ogre::Timer *v13; // r0
  __suseconds_t v14; // r1
  __int64 v15; // r0
  Ogre::Timer **v16; // r0
  __int64 v17; // r0
  float v18; // r6
  __int64 v19; // r0
  __suseconds_t v20; // r1
  ActorBody *v21; // r0
  __int64 v22; // r0
  Ogre::Timer *updated; // r0
  __suseconds_t v24; // r1
  int result; // r0

  SystemTick = Ogre::Timer::getSystemTick((Ogre::Timer *)this, a2);
  v5 = (int)*(this + 35);
  *(this + 35) = (GameUI *)SystemTick;
  v6 = SystemTick - v5;
  if ( v6 > 0x1F4 )
    v6 = 500;
  v7 = (unsigned int *)(this + 37);
  *(this + 36) = (GameUI *)((char *)*(this + 36) + v6);
  v8 = (GameUI *)((char *)*(this + 37) + v6);
  *(this + 37) = v8;
  Ogre::Timer::getSystemTick(v8, v4);
  v9 = Ogre::Singleton<Ogre::InputManager>::ms_Singleton;
  isMobile = (Ogre::Timer *)ClientManager::isMobile((ClientManager *)this);
  *(_BYTE *)(v9 + 96) = (_BYTE)isMobile;
  Ogre::Timer::getSystemTick(isMobile, v11);
  v12 = 0;
  if ( (unsigned int)*(this + 36) > 0x31 )
  {
    *(this + 36) = nullptr;
    v13 = (Ogre::Timer *)CSMgr::checkMsg(*(this + 18));
    Ogre::Timer::getSystemTick(v13, v14);
    ClientManager::updateLoadingGame((ClientManager *)this);
    LODWORD(v15) = *(this + 19);
    if ( (_DWORD)v15 != 0 )
      v15 = ((__int64 (__fastcall *)(_DWORD))*(_DWORD *)(*(_DWORD *)v15 + 32))(v15);
    Ogre::Timer::getSystemTick((Ogre::Timer *)v15, SHIDWORD(v15));
    v16 = (Ogre::Timer **)*(this + 14);
    if ( v16 != nullptr )
      ClientAccountMgr::update(v16);
    v12 = 1;
    v17 = ((__int64 (__fastcall *)(int))*(_DWORD *)(*(_DWORD *)Ogre::Singleton<Ogre::SoundSystem>::ms_Singleton + 60))(Ogre::Singleton<Ogre::SoundSystem>::ms_Singleton);
    Ogre::Timer::getSystemTick((Ogre::Timer *)v17, SHIDWORD(v17));
  }
  ClientManager::handleEvents(this);
  v18 = (float)*v7 / 1000.0;
  LODWORD(v19) = *(this + 19);
  if ( (_DWORD)v19 != 0 )
    v19 = ((__int64 (__fastcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v19 + 36))(v19, (float)*v7 / 1000.0);
  Ogre::Timer::getSystemTick((Ogre::Timer *)v19, SHIDWORD(v19));
  GameUI::Update(*(this + 7), v18);
  v21 = *(this + 15);
  if ( v21 != nullptr )
    v21 = ClientBuddyMgr::update(v21, v18);
  Ogre::Timer::getSystemTick(v21, v20);
  LODWORD(v22) = Ogre::Singleton<Ogre::SceneManager>::ms_Singleton;
  if ( Ogre::Singleton<Ogre::SceneManager>::ms_Singleton != 0 )
    v22 = Ogre::SceneManager::doFrame(v22);
  Ogre::Timer::getSystemTick((Ogre::Timer *)v22, SHIDWORD(v22));
  *v7 = 0;
  updated = (Ogre::Timer *)BlockMaterialMgr::updateLoad(*(this + 10), 0);
  result = Ogre::Timer::getSystemTick(updated, v24);
  if ( v12 == 1 )
  {
    if ( bbb == 14 )
      bbb = 0;
    else
      ++bbb;
  }
  return result;
}


//======================================================================
// ClientManager::onIdle(void)
// address: 0x002F5F18   size: 0x14 (20 bytes)
//======================================================================
int __fastcall ClientManager::onIdle(ClientManager *this)
{
  int result; // r0
  __suseconds_t v3; // r1

  result = ClientManager::canDoFrame(this);
  if ( result != 0 )
    return ClientManager::doFrame((GameUI **)this, v3);
  return result;
}


//======================================================================
// ClientManager::loadScriptTOC(char const*)
// address: 0x002F5F2C   size: 0xEE (238 bytes)
//======================================================================
int __fastcall ClientManager::loadScriptTOC(Ogre::ScriptVM **this, char *a2)
{
  int v3; // r5
  int v4; // r0
  int v5; // r3
  int v6; // r6
  unsigned int v7; // r3
  void (__fastcall *v9)(int, char *, int, char **); // [sp+8h] [bp-41Ch]
  char *v10; // [sp+18h] [bp-40Ch] BYREF
  char v11[992]; // [sp+1Ch] [bp-408h] BYREF

  v3 = Ogre::FileManager::openFile((Ogre::FileManager *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton, a2, 1);
  if ( v3 == 0 )
    return 0;
  while ( 1 )
  {
    v4 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 44))(v3);
    v5 = *(_DWORD *)v3;
    v6 = v4;
    if ( v4 != 0 )
    {
      (*(void (__fastcall **)(int))(v5 + 4))(v3);
      return v6;
    }
    v9 = *(void (__fastcall **)(int, char *, int, char **))(v5 + 16);
    sub_3BF0BC((int)&v10, "\n");
    v9(v3, v11, 1024, &v10);
    sub_3BDF80(&v10);
    sub_3BF0BC((int)&v10, v11);
    if ( sub_3BD93C((int)&v10, ".lua") != -1 && sub_3BD93C((int)&v10, "##") != 0 )
    {
      v6 = Ogre::ScriptVM::callFile(*(this + 6), v10);
      if ( v6 == 0 )
        break;
    }
    sub_3BDF80(&v10);
  }
  Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/ClientManager.cpp", (_BYTE *)&stru_358.st_size + 1, 8, v7);
  Ogre::LogMessage((Ogre *)"load lua file failed: %s", v10);
  sub_3BDF80(&v10);
  return v6;
}


//======================================================================
// ClientManager::~ClientManager()
// address: 0x002F60AC   size: 0x46 (70 bytes)
//======================================================================
// Alternative name is '_ZN13ClientManagerD1Ev'
void __fastcall ClientManager::~ClientManager(ClientManager *this)
{
  *(_DWORD *)this = &off_4625F0;
  std::_Rb_tree<int,std::pair<int const,ClientManager::IconDesc>,std::_Select1st<std::pair<int const,ClientManager::IconDesc>>,std::less<int>,std::allocator<std::pair<int const,ClientManager::IconDesc>>>::_M_erase(
    (int)this + 152,
    *((_DWORD **)this + 40));
  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
    (int)this + 116,
    *((_DWORD **)this + 31));
  std::_Rb_tree<std::string,std::pair<std::string const,ClientGame *>,std::_Select1st<std::pair<std::string const,ClientGame *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ClientGame *>>>::_M_erase(
    (int)this + 92,
    *((_DWORD **)this + 25));
  *(_DWORD *)this = &off_462588;
  Ogre::Singleton<ClientManager>::ms_Singleton = 0;
}


//======================================================================
// ClientManager::~ClientManager()
// address: 0x002F6100   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ClientManager::~ClientManager(ClientManager *this)
{
  ClientManager::~ClientManager(this);
  operator delete(this);
}


//======================================================================
// ClientManager::gotoGame(char const*)
// address: 0x002F6112   size: 0x7A (122 bytes)
//======================================================================
int __fastcall ClientManager::gotoGame(ClientManager *this, char *a2)
{
  char *v3; // r5
  char *v4; // r4
  char *v5; // r3
  int result; // r0
  CSMsgHandler *v7; // r1
  CSMgr *v8; // r0
  char *v9; // [sp+4h] [bp-8h]
  _BYTE v10[8]; // [sp+Ch] [bp+0h] BYREF

  sub_3BF0BC((int)v10, a2);
  v3 = *((char **)this + 25);
  v9 = (char *)this + 96;
  v4 = (char *)this + 96;
  while ( v3 != nullptr )
  {
    if ( std::operator<<char>() != 0 )
    {
      v5 = *((char **)v3 + 3);
      v3 = v4;
    }
    else
    {
      v5 = *((char **)v3 + 2);
    }
    v4 = v3;
    v3 = v5;
  }
  if ( v4 != v9 && std::operator<<char>() != 0 )
    v4 = (char *)this + 96;
  result = sub_3BDF80(v10);
  if ( v4 != v9 )
  {
    v7 = *((CSMsgHandler **)v4 + 5);
    v8 = *((CSMgr **)this + 18);
    *((_DWORD *)this + 20) = v7;
    if ( v7 != nullptr )
      v7 = (CSMsgHandler *)((char *)v7 + 4);
    CSMgr::addMsgHandler(v8, v7);
    return (*(int (__fastcall **)(_DWORD, ClientManager *))(**((_DWORD **)this + 20) + 20))(
             *((_DWORD *)this + 20),
             this);
  }
  return result;
}


//======================================================================
// ClientManager::getGameVar(char const*)
// address: 0x002F618C   size: 0x5C (92 bytes)
//======================================================================
void *__fastcall ClientManager::getGameVar(ClientManager *this, char *a2, int a3)
{
  char *v4; // r6
  char *v5; // r5
  char *v6; // r4
  char *v7; // r3
  _DWORD v9[2]; // [sp+4h] [bp+0h] BYREF

  v9[0] = a2;
  v9[1] = a3;
  sub_3BF0BC((int)v9, a2);
  v4 = (char *)this + 120;
  v5 = *((char **)v4 + 1);
  v6 = v4;
  while ( v5 != nullptr )
  {
    if ( std::operator<<char>() != 0 )
    {
      v7 = *((char **)v5 + 3);
      v5 = v6;
    }
    else
    {
      v7 = *((char **)v5 + 2);
    }
    v6 = v5;
    v5 = v7;
  }
  if ( v6 != v4 && std::operator<<char>() != 0 )
    v6 = v4;
  sub_3BDF80(v9);
  if ( v6 == v4 )
    return &unk_3FB8EA;
  else
    return *((void **)v6 + 5);
}


//======================================================================
// ClientManager::setGameVar(char const*,char const*)
// address: 0x002F639C   size: 0xA8 (168 bytes)
//======================================================================
int __fastcall ClientManager::setGameVar(ClientManager *this, char *a2, char *a3)
{
  ClientManager *v4; // r7
  ClientManager *v5; // r5
  ClientManager *v6; // r3
  _DWORD *v8; // [sp+10h] [bp-24h]
  char v10[4]; // [sp+24h] [bp-10h] BYREF
  char v11[4]; // [sp+28h] [bp-Ch] BYREF
  char *v12; // [sp+2Ch] [bp-8h] BYREF

  sub_3BF0BC((int)v10, a2);
  v4 = *((ClientManager **)this + 31);
  v5 = (ClientManager *)((char *)this + 120);
  while ( v4 != nullptr )
  {
    if ( std::operator<<char>() != 0 )
    {
      v6 = *((ClientManager **)v4 + 3);
      v4 = v5;
    }
    else
    {
      v6 = *((ClientManager **)v4 + 2);
    }
    v5 = v4;
    v4 = v6;
  }
  v8 = v5;
  if ( v5 == (ClientManager *)((char *)this + 120) || std::operator<<char>() != 0 )
  {
    v12 = v10;
    v8 = std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string &&>,std::tuple<>>(
           (_DWORD *)this + 29,
           (int)v5,
           (int)&unk_446ED9,
           (_DWORD **)&v12);
  }
  sub_3BF0BC((int)v11, a3);
  sub_3BD870(v8 + 5, v11);
  sub_3BDF80(v11);
  return sub_3BDF80(v10);
}


//======================================================================
// ClientManager::getItemIcon(int,int &,int &,int &,int &,int &,int &,int &)
// address: 0x002F65A8   size: 0x120 (288 bytes)
//======================================================================
int __fastcall ClientManager::getItemIcon(
        ClientManager *this,
        const char *a2,
        int *a3,
        int *a4,
        int *a5,
        int *a6,
        int *a7,
        int *a8,
        int *a9)
{
  BlockMaterialMgr *v10; // r0
  char *v11; // r3
  char *v12; // r0
  char *v13; // r4
  char *i; // r2
  char *v15; // r5
  int v16; // r2
  char *v17; // r4
  char *v18; // r5
  char *v19; // r2
  _DWORD *IconTexture; // r6
  int v21; // r3
  const char *v25; // [sp+14h] [bp-10h] BYREF
  const char **v26; // [sp+1Ch] [bp-8h] BYREF

  v10 = *((BlockMaterialMgr **)this + 10);
  v25 = a2;
  if ( !BlockMaterialMgr::loadComplete(v10) )
    BlockMaterialMgr::updateLoad(*((BlockMaterialMgr **)this + 10), 1);
  v11 = *((char **)this + 40);
  v12 = (char *)this + 156;
  v13 = (char *)this + 156;
  for ( i = v11; i != nullptr; i = v15 )
  {
    if ( *((_DWORD *)i + 4) < (int)v25 )
    {
      v15 = *((char **)i + 3);
      i = v13;
    }
    else
    {
      v15 = *((char **)i + 2);
    }
    v13 = i;
  }
  if ( v13 == v12 || (v16 = *((_DWORD *)v13 + 4), v17 = v13 + 20, (int)v25 < v16) )
  {
    v18 = (char *)this + 156;
    while ( v11 != nullptr )
    {
      if ( *((_DWORD *)v11 + 4) < (int)v25 )
      {
        v19 = *((char **)v11 + 3);
        v11 = v18;
      }
      else
      {
        v19 = *((char **)v11 + 2);
      }
      v18 = v11;
      v11 = v19;
    }
    if ( v18 == v12 || (int)v25 < *((_DWORD *)v18 + 4) )
    {
      v26 = &v25;
      v18 = (char *)std::_Rb_tree<int,std::pair<int const,ClientManager::IconDesc>,std::_Select1st<std::pair<int const,ClientManager::IconDesc>>,std::less<int>,std::allocator<std::pair<int const,ClientManager::IconDesc>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(
                      (_DWORD *)this + 38,
                      (int)v18,
                      (int)&unk_446ED9,
                      &v26);
    }
    v17 = v18 + 20;
    IconTexture = (_DWORD *)BlockMaterialMgr::getIconTexture(
                              (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                              v25,
                              (int)(v18 + 24),
                              v18 + 40);
    if ( IconTexture == nullptr )
    {
      IconTexture = *(_DWORD **)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
      (*(void (__fastcall **)(_DWORD))(**(_DWORD **)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton + 4))(*(_DWORD *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton);
    }
    *((_DWORD *)v18 + 5) = (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD *, _DWORD, _DWORD, _DWORD))(**((_DWORD **)this + 3) + 76))(
                             *((_DWORD *)this + 3),
                             0,
                             IconTexture,
                             0,
                             0,
                             0);
    v21 = IconTexture[1] - 1;
    IconTexture[1] = v21;
    if ( v21 <= 0 )
      (*(void (__fastcall **)(_DWORD *))(*IconTexture + 24))(IconTexture);
  }
  *a3 = *((_DWORD *)v17 + 1);
  *a4 = *((_DWORD *)v17 + 2);
  *a5 = *((_DWORD *)v17 + 3) - *((_DWORD *)v17 + 1);
  *a6 = *((_DWORD *)v17 + 4) - *((_DWORD *)v17 + 2);
  *a7 = (unsigned __int8)v17[22];
  *a8 = (unsigned __int8)v17[21];
  *a9 = (unsigned __int8)v17[20];
  return *(_DWORD *)v17;
}


//======================================================================
// ClientManager::addGame(char const*,ClientGame *)
// address: 0x002F6884   size: 0x7A (122 bytes)
//======================================================================
int __fastcall ClientManager::addGame(ClientManager *this, char *a2, ClientGame *a3)
{
  ClientManager *v4; // r4
  ClientManager *v5; // r6
  ClientManager *v6; // r3
  _DWORD *v7; // r4
  char v10[4]; // [sp+18h] [bp-Ch] BYREF
  char *v11; // [sp+1Ch] [bp-8h] BYREF

  sub_3BF0BC((int)v10, a2);
  v4 = *((ClientManager **)this + 25);
  v5 = (ClientManager *)((char *)this + 96);
  while ( v4 != nullptr )
  {
    if ( std::operator<<char>() != 0 )
    {
      v6 = *((ClientManager **)v4 + 3);
      v4 = v5;
    }
    else
    {
      v6 = *((ClientManager **)v4 + 2);
    }
    v5 = v4;
    v4 = v6;
  }
  v7 = v5;
  if ( v5 == (ClientManager *)((char *)this + 96) || std::operator<<char>() != 0 )
  {
    v11 = v10;
    v7 = std::_Rb_tree<std::string,std::pair<std::string const,ClientGame *>,std::_Select1st<std::pair<std::string const,ClientGame *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ClientGame *>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string &&>,std::tuple<>>(
           (_DWORD *)this + 23,
           (int)v5,
           (int)&unk_446ED9,
           (_DWORD **)&v11);
  }
  v7[5] = a3;
  return sub_3BDF80(v10);
}


//======================================================================
// ClientManager::initGameData(void)
// address: 0x002F690C   size: 0x226 (550 bytes)
//======================================================================
int __fastcall ClientManager::initGameData(ClientManager *this)
{
  DebugDataMgr *v2; // r5
  ClientBuddyMgr *v3; // r5
  DefManager *v4; // r5
  Ogre::Timer *v5; // r0
  __suseconds_t v6; // r1
  int SystemTick; // r5
  BlockMaterialMgr *v8; // r6
  Ogre::Timer *v9; // r0
  __suseconds_t v10; // r1
  int v11; // r7
  unsigned int v12; // r3
  Ogre::Timer *v13; // r0
  __suseconds_t v14; // r1
  unsigned int v15; // r3
  Ogre::FixedString *v16; // r1
  Ogre::Timer *v17; // r0
  __suseconds_t v18; // r1
  int v19; // r7
  unsigned int v20; // r3
  AchievementManager *v21; // r6
  ClientAccountMgr *v22; // r6
  Ogre::ScriptVM *v23; // r6
  GameEventQue *v24; // r5
  Ogre::Timer *ScriptTOC; // r0
  __suseconds_t v26; // r1
  int v27; // r6
  unsigned int v28; // r3
  GameUI *v29; // r5
  char *v30; // r1
  Ogre::Timer *v31; // r0
  __suseconds_t v32; // r1
  int v33; // r5
  unsigned int v34; // r3
  MainMenuStage *v35; // r5
  SurviveGame *v36; // r5
  int v38; // [sp+Ch] [bp-8h]

  v2 = (DebugDataMgr *)operator new(0x18u);
  DebugDataMgr::DebugDataMgr(v2, *((Ogre::UIRenderer **)this + 3));
  *((_DWORD *)this + 9) = v2;
  v3 = (ClientBuddyMgr *)operator new(0x60u);
  ClientBuddyMgr::ClientBuddyMgr(v3);
  *((_DWORD *)this + 15) = v3;
  v4 = (DefManager *)operator new(0x4FE40u);
  DefManager::DefManager(v4);
  *((_DWORD *)this + 17) = v4;
  SystemTick = Ogre::Timer::getSystemTick(v5, v6);
  v8 = (BlockMaterialMgr *)operator new(0xD4u);
  BlockMaterialMgr::BlockMaterialMgr(v8);
  *((_DWORD *)this + 10) = v8;
  v11 = Ogre::Timer::getSystemTick(v9, v10);
  Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/ClientManager.cpp", (_BYTE *)&stru_2D8.st_name + 1, 2, v12);
  Ogre::LogMessage((Ogre *)"New BlockMaterialMgr: %d", (const char *)(v11 - SystemTick));
  v13 = (Ogre::Timer *)DefManager::load((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton);
  v38 = Ogre::Timer::getSystemTick(v13, v14);
  Ogre::LogSetCurParam(
    (int)"D:/work/oworldsrc/client/iworld/ClientManager.cpp",
    (_BYTE *)&stru_2D8.st_value + 1,
    2,
    v15);
  Ogre::LogMessage((Ogre *)"DefMgr load: %d", (const char *)(v38 - v11));
  v17 = (Ogre::Timer *)BlockMaterialMgr::init(*((BlockMaterialMgr **)this + 10), v16);
  v19 = Ogre::Timer::getSystemTick(v17, v18);
  Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/ClientManager.cpp", (_BYTE *)&stru_2D8.st_size + 1, 2, v20);
  Ogre::LogMessage((Ogre *)"BlockMtlMgr init OK: %d", (const char *)(v19 - v38));
  v21 = (AchievementManager *)operator new(0x1Cu);
  AchievementManager::AchievementManager(v21);
  *((_DWORD *)this + 16) = v21;
  v22 = (ClientAccountMgr *)operator new(0x88u);
  ClientAccountMgr::ClientAccountMgr(v22);
  *((_DWORD *)this + 14) = v22;
  CSMgr::addMsgHandler(*((CSMgr **)this + 18), v22);
  v23 = (Ogre::ScriptVM *)operator new(4u);
  Ogre::ScriptVM::ScriptVM(v23);
  *((_DWORD *)this + 6) = v23;
  tolua_ClientToLua_open(*(_DWORD **)v23);
  Ogre::ScriptVM::setUserTypePointer(
    *((Ogre::ScriptVM **)this + 6),
    "DefMgr",
    "DefManager",
    (void *)Ogre::Singleton<DefManager>::ms_Singleton);
  Ogre::ScriptVM::setUserTypePointer(*((Ogre::ScriptVM **)this + 6), "ClientMgr", "ClientManager", this);
  v24 = (GameEventQue *)operator new(0x38u);
  GameEventQue::GameEventQue(v24);
  *((_DWORD *)this + 8) = v24;
  Ogre::ScriptVM::setUserTypePointer(*((Ogre::ScriptVM **)this + 6), "GameEventQue", "GameEventQue", v24);
  Ogre::ScriptVM::setUserTypePointer(
    *((Ogre::ScriptVM **)this + 6),
    "BuddyManager",
    "ClientBuddyMgr",
    *((void **)this + 15));
  Ogre::ScriptVM::setUserTypePointer(
    *((Ogre::ScriptVM **)this + 6),
    "AccountManager",
    "ClientAccountMgr",
    *((void **)this + 14));
  Ogre::ScriptVM::setUserTypePointer(
    *((Ogre::ScriptVM **)this + 6),
    "AchievementMgr",
    "AchievementManager",
    *((void **)this + 16));
  ScriptTOC = (Ogre::Timer *)ClientManager::loadScriptTOC((Ogre::ScriptVM **)this, "luascript/script.toc");
  v27 = Ogre::Timer::getSystemTick(ScriptTOC, v26);
  Ogre::LogSetCurParam(
    (int)"D:/work/oworldsrc/client/iworld/ClientManager.cpp",
    (const char *)&stru_2E8.st_info,
    2,
    v28);
  Ogre::LogMessage((Ogre *)"ScriptVM init OK: %d", (const char *)(v27 - v19));
  v29 = (GameUI *)operator new(0xCu);
  GameUI::GameUI(v29);
  *((_DWORD *)this + 7) = v29;
  if ( ClientManager::isMobile(this) != 0 )
    v30 = "ui/mobile/game.toc";
  else
    v30 = "UI/game.toc";
  GameUI::Create(
    *((GameUI **)this + 7),
    v30,
    1280,
    720,
    *((Ogre::UIRenderer **)this + 3),
    *((Ogre::ScriptVM **)this + 6));
  v31 = (Ogre::Timer *)GameUI::SetCurrentCursor(*((GameUI **)this + 7), "normal");
  v33 = Ogre::Timer::getSystemTick(v31, v32);
  Ogre::LogSetCurParam(
    (int)"D:/work/oworldsrc/client/iworld/ClientManager.cpp",
    (const char *)&stru_2F8.st_value,
    2,
    v34);
  Ogre::LogMessage((Ogre *)"GameUI init OK: %d", (const char *)(v33 - v27));
  v35 = (MainMenuStage *)operator new(0x14u);
  MainMenuStage::MainMenuStage(v35);
  ClientManager::addGame(this, "MainMenuStage", v35);
  v36 = (SurviveGame *)operator new(0x30u);
  SurviveGame::SurviveGame(v36);
  ClientManager::addGame(this, "SurviveGame", v36);
  Ogre::Root::setSoundSystem((TiXmlNode **)Ogre::Singleton<Ogre::Root>::ms_Singleton);
  ClientManager::gotoGame(this, "MainMenuStage");
  return 1;
}


//======================================================================
// ClientManager::create(char const*,void *,char const*,char const*)
// address: 0x002F6BD4   size: 0x124 (292 bytes)
//======================================================================
Ogre::Timer *__fastcall ClientManager::create(
        Ogre::Root **this,
        char *a2,
        Ogre::Root *a3,
        const char *a4,
        const char *a5)
{
  int SystemTick; // r0
  int v10; // r6
  Ogre::Timer *v11; // r0
  __suseconds_t v12; // r1
  int v13; // r7
  unsigned int v14; // r3
  CSMgr *v15; // r5
  Ogre::Timer *inited; // r0
  __suseconds_t v17; // r1
  Ogre::Timer *v18; // r5
  int v19; // r5
  unsigned int v20; // r3
  Ogre::Timer *v21; // r0
  __suseconds_t v22; // r1
  int v23; // r7
  unsigned int v24; // r3
  Ogre::Timer *v25; // r0
  __suseconds_t v26; // r1
  unsigned int v27; // r3
  Ogre::Timer *v28; // r0
  __suseconds_t v29; // r1
  int v31; // [sp+4h] [bp-10h]
  int v32; // [sp+4h] [bp-10h]
  const char *v33[2]; // [sp+Ch] [bp-8h] BYREF

  SystemTick = Ogre::Timer::getSystemTick((Ogre::Timer *)this, (__suseconds_t)a2);
  *(this + 21) = a3;
  v31 = SystemTick;
  sub_3BF0BC((int)v33, a2);
  v10 = operator new(0x68u);
  Ogre::Root::Root(v10, v33, a4, a5);
  *(this + 2) = (Ogre::Root *)v10;
  sub_3BDF80(v33);
  v11 = (Ogre::Timer *)Ogre::Root::Initlize(*(this + 2));
  v13 = Ogre::Timer::getSystemTick(v11, v12);
  Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/ClientManager.cpp", (const char *)&dword_B4 + 3, 2, v14);
  Ogre::LogMessage((Ogre *)"Root Initialize succeeded: %d", (const char *)(v13 - v31));
  v15 = (CSMgr *)operator new(0x9E60u);
  CSMgr::CSMgr(v15, (ClientManager *)this);
  *(this + 18) = v15;
  g_CSMgr = (int)v15;
  inited = (Ogre::Timer *)ClientManager::initEngine((ClientManager *)this);
  if ( inited == nullptr )
    return nullptr;
  v19 = Ogre::Timer::getSystemTick(inited, v17);
  Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/ClientManager.cpp", (const char *)off_BC + 3, 2, v20);
  Ogre::LogMessage((Ogre *)"InitEngine OK: %d", (const char *)(v19 - v13));
  v21 = (Ogre::Timer *)ClientManager::setupRenderer((ClientManager *)this);
  if ( v21 == nullptr )
    return nullptr;
  v23 = Ogre::Timer::getSystemTick(v21, v22);
  Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/ClientManager.cpp", (const char *)&dword_C4, 2, v24);
  Ogre::LogMessage((Ogre *)"SetupRenderer OK: %d", (const char *)(v23 - v19));
  v25 = (Ogre::Timer *)ClientManager::initGameData((ClientManager *)this);
  v18 = v25;
  if ( v25 == nullptr )
    return nullptr;
  v32 = Ogre::Timer::getSystemTick(v25, v26);
  Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/ClientManager.cpp", (const char *)&dword_C8 + 1, 2, v27);
  v28 = (Ogre::Timer *)Ogre::LogMessage((Ogre *)"InitGameData OK: %d", (const char *)(v32 - v23));
  *(this + 35) = (Ogre::Root *)Ogre::Timer::getSystemTick(v28, v29);
  *(this + 37) = nullptr;
  *(this + 36) = nullptr;
  return v18;
}


//======================================================================
// ClientManager::onInitialize(char const*,char const*)
// address: 0x002F6D18   size: 0x34 (52 bytes)
//======================================================================
Ogre::Timer *__fastcall ClientManager::onInitialize(Ogre::Root **this, const char *a2, const char *a3)
{
  unsigned int v4; // r3
  Ogre::Timer *v5; // r4
  const char *v6; // r1

  v5 = ClientManager::create(this, "iworld.cfg", nullptr, a2, a3);
  if ( v5 != nullptr )
  {
    *(this + 11) = (Ogre::Root *)(&dword_0 + 1);
  }
  else
  {
    Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/ClientManager.cpp", (const char *)&dword_38 + 3, 8, v4);
    Ogre::LogMessage((Ogre *)"create iworld.cfg failed", v6);
  }
  return v5;
}

