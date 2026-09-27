// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: MainMenuStage

//======================================================================
// MainMenuStage::getName(void)
// address: 0x002A54C4   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall MainMenuStage::getName(MainMenuStage *this)
{
  return "MainMenuStage";
}


//======================================================================
// MainMenuStage::updateLoad(void)
// address: 0x002A54D0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall MainMenuStage::updateLoad(MainMenuStage *this)
{
  return 1;
}


//======================================================================
// MainMenuStage::tick(void)
// address: 0x002A54D4   size: 0x2 (2 bytes)
//======================================================================
void __fastcall MainMenuStage::tick(MainMenuStage *this)
{
  ;
}


//======================================================================
// MainMenuStage::update(float)
// address: 0x002A54D6   size: 0x2 (2 bytes)
//======================================================================
void __fastcall MainMenuStage::update(MainMenuStage *this, float a2)
{
  ;
}


//======================================================================
// MainMenuStage::load(ClientManager *)
// address: 0x002A54D8   size: 0x64 (100 bytes)
//======================================================================
int __fastcall MainMenuStage::load(MainMenuStage *this, GameUI **a2)
{
  Ogre::SimpleGameScene *v4; // r6
  Ogre::Camera *v5; // r6

  Ogre::InputManager::lockFPSMouse((Ogre::InputManager *)Ogre::Singleton<Ogre::InputManager>::ms_Singleton, false);
  GameUI::SetCurrentCursor(a2[7], "normal");
  *((_DWORD *)this + 2) = a2;
  v4 = (Ogre::SimpleGameScene *)operator new(0x5Cu);
  Ogre::SimpleGameScene::SimpleGameScene(v4);
  *((_DWORD *)this + 3) = v4;
  v5 = (Ogre::Camera *)operator new(0x268u);
  Ogre::Camera::Camera(v5);
  *((_DWORD *)this + 4) = v5;
  *((_DWORD *)a2[4] + 146) = v5;
  *((_DWORD *)a2[4] + 154) = *((_DWORD *)this + 3);
  Ogre::ScriptVM::setUserTypePointer(a2[6], "ClientCurGame", "MainMenuStage", this);
  return 1;
}


//======================================================================
// MainMenuStage::applayGameSetData(void)
// address: 0x002A5558   size: 0x58 (88 bytes)
//======================================================================
__int64 __fastcall MainMenuStage::applayGameSetData(MainMenuStage *this, int a2, int a3)
{
  __int64 v3; // r0
  int v4; // r2
  float v5; // r0
  float v6; // r1
  __int64 v8; // [sp+0h] [bp-Ch] BYREF
  int v9; // [sp+8h] [bp-4h]

  v9 = a3;
  Ogre::Root::setSoundSystem((TiXmlNode **)Ogre::Singleton<Ogre::Root>::ms_Singleton);
  HIDWORD(v8) = Ogre::XMLData::getRootNode((TiXmlNode **)Ogre::Singleton<Ogre::Root>::ms_Singleton);
  LODWORD(v8) = Ogre::XMLNode::getChild((TiXmlNode **)&v8 + 1, "GameData");
  if ( (_DWORD)v8 != 0 )
  {
    HIDWORD(v8) = Ogre::XMLNode::getChild((TiXmlNode **)&v8, "Settinig");
    if ( HIDWORD(v8) != 0 )
    {
      v5 = (float)Ogre::XMLNode::attribToInt((TiXmlElement **)&v8 + 1, "brightness", v4) / 100.0;
      Ogre::SetScreenBrightness((Ogre *)LODWORD(v5), v6);
    }
  }
  LODWORD(v3) = Ogre::Singleton<Ogre::Root>::ms_Singleton;
  Ogre::Root::saveFile(v3, v4);
  return v8;
}


//======================================================================
// MainMenuStage::onLoadWorldProp(int,tagOWGlobal *,tagRoleData *,tagAchievementList *)
// address: 0x002A55C4   size: 0x44 (68 bytes)
//======================================================================
int __fastcall MainMenuStage::onLoadWorldProp(int a1, int a2, int *a3)
{
  if ( a2 == 1 )
    return Ogre::ScriptVM::callFunction(
             *(Ogre::ScriptVM **)(Ogre::Singleton<ClientManager>::ms_Singleton + 24),
             "LoadWorldNetFail",
             (const char *)&unk_3FB8EA);
  if ( a2 == 2 )
    return Ogre::ScriptVM::callFunction(
             *(Ogre::ScriptVM **)(Ogre::Singleton<ClientManager>::ms_Singleton + 24),
             "BeginWaitLoadlist",
             (const char *)&unk_3FB8EA);
  return GameEventQue::postWorldDownComplete((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton, *a3);
}


//======================================================================
// MainMenuStage::unload(void)
// address: 0x002A5638   size: 0x2E (46 bytes)
//======================================================================
int __fastcall MainMenuStage::unload(MainMenuStage *this)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0

  v2 = *((_DWORD **)this + 4);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 4) = 0;
  }
  v3 = *((_DWORD **)this + 3);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)this + 3) = 0;
  }
  return ClientBuddyMgr::releaseSelectRole((ClientBuddyMgr *)g_BuddyMgr);
}


//======================================================================
// MainMenuStage::~MainMenuStage()
// address: 0x002A566C   size: 0x2C (44 bytes)
//======================================================================
// Alternative name is '_ZN13MainMenuStageD1Ev'
void __fastcall MainMenuStage::~MainMenuStage(MainMenuStage *this)
{
  *(_DWORD *)this = &off_45CEE0;
  *((_DWORD *)this + 1) = &off_45CF2C;
  MainMenuStage::unload(this);
  *(_DWORD *)this = &off_461270;
  *((_DWORD *)this + 1) = &off_4612B8;
}


//======================================================================
// MainMenuStage::~MainMenuStage()
// address: 0x002A56A0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall MainMenuStage::~MainMenuStage(MainMenuStage *this)
{
  MainMenuStage::~MainMenuStage(this);
  operator delete(this);
}


//======================================================================
// MainMenuStage::MainMenuStage(void)
// address: 0x002A56B4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN13MainMenuStageC1Ev'
void __fastcall MainMenuStage::MainMenuStage(MainMenuStage *this)
{
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &off_45CEE0;
  *((_DWORD *)this + 1) = &off_45CF2C;
}


//======================================================================
// MainMenuStage::requestRegister(char const*,char const*)
// address: 0x002A56D0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall MainMenuStage::requestRegister(MainMenuStage *this, const char *a2, const char *a3)
{
  return 0;
}


//======================================================================
// MainMenuStage::requestCheckNickname(char const*)
// address: 0x002A56D4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall MainMenuStage::requestCheckNickname(MainMenuStage *this, const char *a2)
{
  return 1;
}


//======================================================================
// MainMenuStage::requestModifyRole(char const*,int)
// address: 0x002A56D8   size: 0x4 (4 bytes)
//======================================================================
int __fastcall MainMenuStage::requestModifyRole(MainMenuStage *this, const char *a2, int a3)
{
  return 1;
}


//======================================================================
// MainMenuStage::requestLogin(char const*,char const*)
// address: 0x002A56DC   size: 0x4 (4 bytes)
//======================================================================
int __fastcall MainMenuStage::requestLogin(MainMenuStage *this, const char *a2, const char *a3)
{
  return 0;
}


//======================================================================
// MainMenuStage::requestLoginOnline(void)
// address: 0x002A56E0   size: 0x14 (20 bytes)
//======================================================================
int __fastcall MainMenuStage::requestLoginOnline(MainMenuStage *this)
{
  GameEventQue::postSimpleEvent((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton, 7);
  return 1;
}


//======================================================================
// MainMenuStage::requestEnterWorld(int)
// address: 0x002A56F8   size: 0x4 (4 bytes)
//======================================================================
int __fastcall MainMenuStage::requestEnterWorld(MainMenuStage *this, int a2)
{
  return 1;
}


//======================================================================
// MainMenuStage::requestCreateWorld(int,char const*,int,char const*)
// address: 0x002A56FC   size: 0x4 (4 bytes)
//======================================================================
int __fastcall MainMenuStage::requestCreateWorld(MainMenuStage *this, int a2, const char *a3, int a4, const char *a5)
{
  return 0;
}


//======================================================================
// MainMenuStage::offlineCreateWorld(int,char const*,int,char const*,char)
// address: 0x002A5700   size: 0x128 (296 bytes)
//======================================================================
int __fastcall MainMenuStage::offlineCreateWorld(
        MainMenuStage *this,
        int a2,
        const char *a3,
        int a4,
        const char *a5,
        unsigned __int8 a6)
{
  const char *v6; // r1
  int v7; // r4
  WorldList *MyWorldList; // r6
  int WorldDesc; // r0
  int v10; // r7
  unsigned int v11; // r3
  ClientAccountMgr *v12; // r5
  int *v13; // r0
  const char *v14; // r1
  int v16; // [sp+Ch] [bp-68h]
  char s[64]; // [sp+2Ch] [bp-48h] BYREF

  Ogre::LogSetCurParam(
    (int)"D:/work/oworldsrc/client/iworld/ClientGameMainMenu.cpp",
    (const char *)&dword_F0 + 2,
    2,
    _stack_chk_guard);
  Ogre::LogMessage((Ogre *)"offlineCreateWorld", v6);
  v16 = ClientAccountMgr::requestEnterGame((ClientAccountMgr *)g_AccountMgr);
  if ( v16 == 0 )
    return 0;
  ClientAccountMgr::onLoadAccount((ClientAccountMgr *)g_AccountMgr, 0);
  j_sprintf(s, "%d", **(_DWORD **)(g_AccountMgr + 8));
  ClientAccountMgr::requestModifyRole((ClientAccountMgr *)g_AccountMgr, s, 2);
  v7 = 0;
  BlockMaterialMgr::updateLoad((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, true);
  MyWorldList = (WorldList *)ClientAccountMgr::getMyWorldList((ClientAccountMgr *)g_AccountMgr);
  while ( v7 < WorldList::getNumWorld(MyWorldList) )
  {
    WorldDesc = WorldList::getWorldDesc(MyWorldList, v7);
    v10 = WorldDesc;
    if ( *(_DWORD *)(WorldDesc + 4) == a2
      && j_strcmp(*(const char **)(WorldDesc + 8), a3) == 0
      && *(_DWORD *)(v10 + 104) == a4 )
    {
      break;
    }
    ++v7;
  }
  if ( v7 == WorldList::getNumWorld(MyWorldList) )
  {
    ClientAccountMgr::requestCreateWorld((ClientAccountMgr *)g_AccountMgr, a2, a3, a4, a5, a6);
  }
  else
  {
    v12 = (ClientAccountMgr *)g_AccountMgr;
    v13 = (int *)WorldList::getWorldDesc(MyWorldList, v7);
    ClientAccountMgr::requestEnterWorld(v12, *v13);
  }
  Ogre::LogSetCurParam(
    (int)"D:/work/oworldsrc/client/iworld/ClientGameMainMenu.cpp",
    (const char *)&dword_128 + 3,
    2,
    v11);
  Ogre::LogMessage((Ogre *)"End offlineCreateWorld---gotoGame", v14);
  return v16;
}


//======================================================================
// MainMenuStage::requestDeleteWorld(int)
// address: 0x002A584C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall MainMenuStage::requestDeleteWorld(MainMenuStage *this, int a2)
{
  return 1;
}


//======================================================================
// MainMenuStage::requestOpenWorld(int,bool)
// address: 0x002A5850   size: 0x4 (4 bytes)
//======================================================================
int __fastcall MainMenuStage::requestOpenWorld(MainMenuStage *this, int a2, bool a3)
{
  return 1;
}


//======================================================================
// MainMenuStage::requestRefreshOpenWorlds(int)
// address: 0x002A5854   size: 0x4 (4 bytes)
//======================================================================
int __fastcall MainMenuStage::requestRefreshOpenWorlds(MainMenuStage *this, int a2)
{
  return 1;
}


//======================================================================
// MainMenuStage::requestSetWorldPermits(int,int,int,int)
// address: 0x002A5858   size: 0x4 (4 bytes)
//======================================================================
int __fastcall MainMenuStage::requestSetWorldPermits(MainMenuStage *this, int a2, int a3, int a4, int a5)
{
  return 1;
}


//======================================================================
// MainMenuStage::onBuddyList(tagCSBuddyList *)
// address: 0x002A585C   size: 0x42 (66 bytes)
//======================================================================
int __fastcall MainMenuStage::onBuddyList(int a1, int a2)
{
  int v3; // r4
  int i; // r5

  v3 = a2;
  for ( i = 0; ; ++i )
  {
    v3 += 16;
    if ( i >= *(unsigned __int8 *)(a2 + 14344) )
      break;
    ClientBuddyMgr::setBuddyOnline(
      (ClientBuddyMgr *)g_BuddyMgr,
      *(_DWORD *)(v3 + 14336),
      true,
      *(unsigned __int16 *)(v3 + 14344));
  }
  return GameEventQue::postSimpleEvent((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton, 9);
}


//======================================================================
// MainMenuStage::onBuddyApplyNotify(tagCSBuddyAddApplyNotify *)
// address: 0x002A58AC   size: 0x2E (46 bytes)
//======================================================================
int __fastcall MainMenuStage::onBuddyApplyNotify(int a1, int a2)
{
  int v3; // r5
  int v4; // r0

  v3 = GameEventQue::allocEvent((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton);
  *(_DWORD *)v3 = 11;
  j_strcpy((char *)(v3 + 12), (const char *)(a2 + 9));
  v4 = Ogre::Singleton<GameEventQue>::ms_Singleton;
  *(_DWORD *)(v3 + 4) = *(_DWORD *)a2;
  return GameEventQue::pushEvent(v4, v3);
}


//======================================================================
// MainMenuStage::onBuddyAddRes(tagCSBuddyAddRes *)
// address: 0x002A58E0   size: 0x32 (50 bytes)
//======================================================================
int __fastcall MainMenuStage::onBuddyAddRes(int a1, const char *a2)
{
  int v3; // r5
  int v4; // r0

  v3 = GameEventQue::allocEvent((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton);
  *(_DWORD *)v3 = 12;
  j_strcpy((char *)(v3 + 12), a2 + 9);
  v4 = Ogre::Singleton<GameEventQue>::ms_Singleton;
  *(_DWORD *)(v3 + 4) = *((_DWORD *)a2 + 1);
  *(_DWORD *)(v3 + 8) = *(unsigned __int8 *)a2;
  return GameEventQue::pushEvent(v4, v3);
}


//======================================================================
// MainMenuStage::onBuddyDelRes(tagCSBuddyDelRes *)
// address: 0x002A5918   size: 0x12 (18 bytes)
//======================================================================
int __fastcall MainMenuStage::onBuddyDelRes(int a1, int *a2)
{
  return ClientBuddyMgr::delBuddy((ClientBuddyMgr *)g_BuddyMgr, *a2);
}


//======================================================================
// MainMenuStage::onPrivateChatRes(tagCSChat *)
// address: 0x002A5930   size: 0x30 (48 bytes)
//======================================================================
BuddyInfo *__fastcall MainMenuStage::onPrivateChatRes(int a1, int a2)
{
  BuddyInfo *result; // r0
  int *v4; // r4

  result = (BuddyInfo *)ClientBuddyMgr::findBuddy((ClientBuddyMgr *)g_BuddyMgr, *(_DWORD *)(a2 + 8));
  v4 = (int *)result;
  if ( result != nullptr )
  {
    BuddyInfo::addChatInfo(result, true, (const char *)(a2 + 64));
    return (BuddyInfo *)GameEventQue::postBuddyChat((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton, *v4);
  }
  return result;
}


//======================================================================
// MainMenuStage::onBuddyChgRes(tagBuddyChgRes *)
// address: 0x002A5968   size: 0x16 (22 bytes)
//======================================================================
int __fastcall MainMenuStage::onBuddyChgRes(int a1, int a2)
{
  return ClientBuddyMgr::setBuddyFlags((ClientBuddyMgr *)g_BuddyMgr, *(_DWORD *)a2, *(unsigned __int8 *)(a2 + 4));
}

