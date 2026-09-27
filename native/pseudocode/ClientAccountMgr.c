// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ClientAccountMgr

//======================================================================
// ClientAccountMgr::onBuddyOfflineChat(tagOfflineChatDetail *)
// address: 0x002B9018   size: 0x1C (28 bytes)
//======================================================================
int ClientAccountMgr::onBuddyOfflineChat()
{
  ClientBuddyMgr::setBuddyChatMsg(g_BuddyMgr);
  return GameEventQue::postUpdateBuddyMsg((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton);
}


//======================================================================
// ClientAccountMgr::onBuddyWatchAccountRes(int,tagAccountWatch *)
// address: 0x002B903C   size: 0x20 (32 bytes)
//======================================================================
void __fastcall ClientAccountMgr::onBuddyWatchAccountRes(int a1, int a2, int a3)
{
  int WatchBuddyInfo; // r0

  if ( a2 != 1 )
  {
    WatchBuddyInfo = ClientBuddyMgr::getWatchBuddyInfo((ClientBuddyMgr *)g_BuddyMgr);
    if ( WatchBuddyInfo != 0 )
      BuddyInfo::setBuddyInfo(WatchBuddyInfo, a3);
  }
}


//======================================================================
// ClientAccountMgr::onBuddyWatchOWRes(int,tagWatchOWRes *)
// address: 0x002B9060   size: 0x20 (32 bytes)
//======================================================================
void __fastcall ClientAccountMgr::onBuddyWatchOWRes(int a1, int a2, int a3)
{
  int WatchBuddyInfo; // r0

  if ( a2 != 1 )
  {
    WatchBuddyInfo = ClientBuddyMgr::getWatchBuddyInfo((ClientBuddyMgr *)g_BuddyMgr);
    if ( WatchBuddyInfo != 0 )
      BuddyInfo::setBuddyWorldInfo(WatchBuddyInfo, a3);
  }
}


//======================================================================
// ClientAccountMgr::onBuddyAttention(int,tagBuddyInfo *)
// address: 0x002B9084   size: 0x1E (30 bytes)
//======================================================================
int __fastcall ClientAccountMgr::onBuddyAttention(int a1, int a2, int a3)
{
  if ( a2 == 1 )
    return GameEventQue::postNetAnomaly((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton, 1);
  else
    return GameEventQue::postAddBuddySuccess(
             (GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton,
             (const char *)(a3 + 9));
}


//======================================================================
// ClientAccountMgr::onBuddyFind(int,tagBuddyFindRes *)
// address: 0x002B90A8   size: 0x22 (34 bytes)
//======================================================================
int __fastcall ClientAccountMgr::onBuddyFind(int a1, int a2, int a3)
{
  int result; // r0

  if ( a2 != 1 )
  {
    ClientBuddyMgr::onBuddyFind(g_BuddyMgr, a3);
    return GameEventQue::postBuddyFind((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton);
  }
  return result;
}


//======================================================================
// ClientAccountMgr::getMyWorldList(void)
// address: 0x002B9164   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientAccountMgr::getMyWorldList(ClientAccountMgr *this)
{
  return *((_DWORD *)this + 7);
}


//======================================================================
// ClientAccountMgr::getOpenWorldList(void)
// address: 0x002B9168   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientAccountMgr::getOpenWorldList(ClientAccountMgr *this)
{
  return *((_DWORD *)this + 8);
}


//======================================================================
// ClientAccountMgr::getRoleIcon(int)
// address: 0x002B916C   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall ClientAccountMgr::getRoleIcon(ClientAccountMgr *this, int a2)
{
  Ogre::ResourceManager *v2; // r7
  int v3; // r2
  int v4; // r3
  int v5; // r7
  void *v6; // r1
  int v7; // r2
  int v8; // r3
  Ogre::ResourceManager *v9; // r4
  void *v10; // r1
  Ogre::FixedString *v12; // [sp+8h] [bp-10Ch] BYREF
  char s[256]; // [sp+Ch] [bp-108h] BYREF

  j_sprintf(s, "ui/roleicons/%d.png", a2);
  v2 = (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
  v12 = (Ogre::FixedString *)Ogre::FixedString::insert((Ogre::FixedString *)s, (const char *)0xFFFFFFFF, v3, v4);
  v5 = Ogre::ResourceManager::blockLoad(v2, &v12, 0);
  Ogre::FixedString::release((int)v12, v6);
  if ( v5 == 0 )
  {
    v9 = (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
    v12 = (Ogre::FixedString *)Ogre::FixedString::insert(
                                 (Ogre::FixedString *)"blocks/default.png",
                                 (const char *)0xFFFFFFFF,
                                 v7,
                                 v8);
    v5 = Ogre::ResourceManager::blockLoad(v9, &v12, 0);
    Ogre::FixedString::release((int)v12, v10);
  }
  return (*(int (__fastcall **)(_DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(Ogre::Singleton<ClientManager>::ms_Singleton
                                                                                          + 12)
                                                                            + 76))(
           *(_DWORD *)(Ogre::Singleton<ClientManager>::ms_Singleton + 12),
           0,
           v5,
           0,
           0,
           0);
}


//======================================================================
// ClientAccountMgr::getUin(void)
// address: 0x002B9228   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientAccountMgr::getUin(ClientAccountMgr *this)
{
  return 1;
}


//======================================================================
// ClientAccountMgr::isLogin(void)
// address: 0x002B922E   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientAccountMgr::isLogin(ClientAccountMgr *this)
{
  return 1;
}


//======================================================================
// ClientAccountMgr::getNickName(void)
// address: 0x002B9238   size: 0x6 (6 bytes)
//======================================================================
int __fastcall ClientAccountMgr::getNickName(ClientAccountMgr *this)
{
  return *((_DWORD *)this + 2) + 65;
}


//======================================================================
// ClientAccountMgr::getRoleModel(void)
// address: 0x002B923E   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientAccountMgr::getRoleModel(ClientAccountMgr *this)
{
  return 1;
}


//======================================================================
// ClientAccountMgr::getAchievementPoints(void)
// address: 0x002B9248   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientAccountMgr::getAchievementPoints(ClientAccountMgr *this)
{
  return 0;
}


//======================================================================
// ClientAccountMgr::getAchievementFinishNum(void)
// address: 0x002B9254   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientAccountMgr::getAchievementFinishNum(ClientAccountMgr *this)
{
  return 0;
}


//======================================================================
// ClientAccountMgr::getDiamond(void)
// address: 0x002B9278   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientAccountMgr::getDiamond(ClientAccountMgr *this)
{
  return 0;
}


//======================================================================
// ClientAccountMgr::getFlower(void)
// address: 0x002B9284   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientAccountMgr::getFlower(ClientAccountMgr *this)
{
  return 0;
}


//======================================================================
// ClientAccountMgr::getCredit(void)
// address: 0x002B9290   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientAccountMgr::getCredit(ClientAccountMgr *this)
{
  return 0;
}


//======================================================================
// ClientAccountMgr::uniAchievementFinish(int)
// address: 0x002B929C   size: 0x22 (34 bytes)
//======================================================================
int __fastcall ClientAccountMgr::uniAchievementFinish(ClientAccountMgr *this, int a2)
{
  int v2; // r2
  int i; // r3

  v2 = *((_DWORD *)this + 2);
  for ( i = 0; ; ++i )
  {
    if ( i >= *(_DWORD *)(v2 + 104) )
      return 0;
    if ( a2 == *(_DWORD *)(v2 + 16 * i + 112) )
      break;
  }
  return 1;
}


//======================================================================
// ClientAccountMgr::findWorldDesc(int)
// address: 0x002B92BE   size: 0x22 (34 bytes)
//======================================================================
int __fastcall ClientAccountMgr::findWorldDesc(ClientAccountMgr *this, int a2)
{
  WorldList *MyWorldList; // r0
  int result; // r0
  WorldList *OpenWorldList; // r0

  MyWorldList = (WorldList *)ClientAccountMgr::getMyWorldList(this);
  result = WorldList::findWorldDesc(MyWorldList, a2);
  if ( result == 0 )
  {
    OpenWorldList = (WorldList *)ClientAccountMgr::getOpenWorldList(this);
    return WorldList::findWorldDesc(OpenWorldList, a2);
  }
  return result;
}


//======================================================================
// ClientAccountMgr::requestEnterGame(void)
// address: 0x002B92E0   size: 0x128 (296 bytes)
//======================================================================
int __fastcall ClientAccountMgr::requestEnterGame(ClientAccountMgr *this)
{
  Ogre *MachineLocation; // r0
  int NetworkState; // r7
  unsigned int v4; // r3
  float v5; // r0
  double v6; // r0
  unsigned int v7; // r4
  CSMgr *v8; // r4
  const char *v9; // r0
  int result; // r0
  unsigned int v11; // r3
  const char *v12; // r1
  double v13; // [sp+18h] [bp-41Ch] BYREF
  double v14; // [sp+20h] [bp-414h] BYREF

  MachineLocation = (Ogre *)Ogre::GetMachineLocation((Ogre *)&v13, &v14, _stack_chk_guard);
  NetworkState = Ogre::GetNetworkState(MachineLocation);
  Ogre::LogSetCurParam(
    (int)"D:/work/oworldsrc/client/iworld/ClientAccount.cpp",
    (const char *)&stru_178.st_other,
    2,
    v4);
  v5 = v13;
  v6 = v5;
  v7 = LODWORD(v6);
  *(float *)&v6 = v14;
  Ogre::LogMessage(
    (Ogre *)"Location: %f, %f, %d",
    (const char *)(const char *)HIDWORD(COERCE_UNSIGNED_INT64(*(float *)&v6)),
    __PAIR64__(HIDWORD(v6), v7),
    *(float *)&v6,
    NetworkState);
  v8 = (CSMgr *)g_CSMgr;
  v9 = (const char *)ClientManager::clientVersion((ClientManager *)Ogre::Singleton<ClientManager>::ms_Singleton);
  result = CSMgr::init(v8, v9, 1, nullptr, v13, v14);
  if ( result != 0 )
  {
    Ogre::LogSetCurParam(
      (int)"D:/work/oworldsrc/client/iworld/ClientAccount.cpp",
      (const char *)&stru_188.st_value + 3,
      2,
      v11);
    Ogre::LogMessage((Ogre *)"CSMgr init OK", v12);
    *((_DWORD *)this + 9) = 0;
    return 1;
  }
  return result;
}


//======================================================================
// ClientAccountMgr::requestCheckNickname(char const*)
// address: 0x002B9434   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientAccountMgr::requestCheckNickname(ClientAccountMgr *this, const char *a2)
{
  return 1;
}


//======================================================================
// ClientAccountMgr::requestModifyRole(char const*,int)
// address: 0x002B9488   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientAccountMgr::requestModifyRole(ClientAccountMgr *this, const char *a2, int a3)
{
  return 1;
}


//======================================================================
// ClientAccountMgr::requestEnterWorld(int)
// address: 0x002B9550   size: 0x34 (52 bytes)
//======================================================================
int __fastcall ClientAccountMgr::requestEnterWorld(ClientAccountMgr *this, int a2)
{
  int result; // r0

  result = ClientAccountMgr::findWorldDesc(this, a2);
  *((_DWORD *)this + 10) = result;
  if ( result != 0 )
  {
    GameEventQue::postLoadProgress((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton, 1000, 0);
    ClientManager::gotoGame((ClientManager *)Ogre::Singleton<ClientManager>::ms_Singleton, "SurviveGame");
    return 1;
  }
  return result;
}


//======================================================================
// ClientAccountMgr::requestPauseOpenWorld(int)
// address: 0x002B9590   size: 0x10 (16 bytes)
//======================================================================
int __fastcall ClientAccountMgr::requestPauseOpenWorld(ClientAccountMgr *this, int a2)
{
  return CSMgr::pauseOpenWorld((CSMgr *)g_CSMgr, a2);
}


//======================================================================
// ClientAccountMgr::requestContinueOpenWorld(int)
// address: 0x002B95A4   size: 0x10 (16 bytes)
//======================================================================
int __fastcall ClientAccountMgr::requestContinueOpenWorld(ClientAccountMgr *this, int a2)
{
  return CSMgr::continueOpenWorld((CSMgr *)g_CSMgr, a2);
}


//======================================================================
// ClientAccountMgr::requestAbortOpenWorld(int)
// address: 0x002B95B8   size: 0x10 (16 bytes)
//======================================================================
int __fastcall ClientAccountMgr::requestAbortOpenWorld(ClientAccountMgr *this, int a2)
{
  return CSMgr::abortOpenWorld((CSMgr *)g_CSMgr, a2);
}


//======================================================================
// ClientAccountMgr::requestMemoOWorld(int,char const*)
// address: 0x002B95CC   size: 0x10 (16 bytes)
//======================================================================
int __fastcall ClientAccountMgr::requestMemoOWorld(ClientAccountMgr *this, int a2, const char *a3)
{
  return ClientBuddyMgr::memoOWorld((ClientBuddyMgr *)g_BuddyMgr, a2, a3);
}


//======================================================================
// ClientAccountMgr::requestBuddyFind(void)
// address: 0x002B95E0   size: 0x10 (16 bytes)
//======================================================================
int __fastcall ClientAccountMgr::requestBuddyFind(ClientAccountMgr *this)
{
  return ClientBuddyMgr::BuddyFind((ClientBuddyMgr *)g_BuddyMgr);
}


//======================================================================
// ClientAccountMgr::getBuddyNum(void)
// address: 0x002B95F4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientAccountMgr::getBuddyNum(ClientAccountMgr *this)
{
  return 0;
}


//======================================================================
// ClientAccountMgr::getBuddyUin(int)
// address: 0x002B95FA   size: 0xC (12 bytes)
//======================================================================
int __fastcall ClientAccountMgr::getBuddyUin(ClientAccountMgr *this, int a2)
{
  return *(_DWORD *)(*((_DWORD *)this + 3) + 56 * a2 + 16);
}


//======================================================================
// ClientAccountMgr::isBuddy(int)
// address: 0x002B9606   size: 0x26 (38 bytes)
//======================================================================
int __fastcall ClientAccountMgr::isBuddy(ClientAccountMgr *this, int a2)
{
  int v2; // r2
  int i; // r3

  v2 = *((_DWORD *)this + 3);
  for ( i = 0; ; ++i )
  {
    if ( i >= *(_DWORD *)(v2 + 8) )
      return 0;
    if ( *(_DWORD *)(v2 + 56 * i + 16) == a2 )
      break;
  }
  return 1;
}


//======================================================================
// ClientAccountMgr::getBuddyName(int)
// address: 0x002B962C   size: 0x30 (48 bytes)
//======================================================================
void *__fastcall ClientAccountMgr::getBuddyName(ClientAccountMgr *this, int a2)
{
  int i; // r4
  int v5; // r3

  for ( i = 0; i < ClientAccountMgr::getBuddyNum(this); ++i )
  {
    v5 = *((_DWORD *)this + 3);
    if ( a2 == *(_DWORD *)(v5 + 56 * i + 16) )
      return (void *)(v5 + 56 * i + 25);
  }
  return &unk_3FB8EA;
}


//======================================================================
// ClientAccountMgr::getBuddyCredit(int)
// address: 0x002B9660   size: 0x30 (48 bytes)
//======================================================================
int __fastcall ClientAccountMgr::getBuddyCredit(ClientAccountMgr *this, int a2)
{
  int v4; // r4
  int v5; // r1
  int v6; // r3

  v4 = 0;
  while ( v4 < ClientAccountMgr::getBuddyNum(this) )
  {
    v5 = 56 * v4;
    v6 = *((_DWORD *)this + 3);
    ++v4;
    if ( a2 == *(_DWORD *)(v6 + v5 + 16) )
      return *(_DWORD *)(v6 + 56 * v4 + 8);
  }
  return 0;
}


//======================================================================
// ClientAccountMgr::getBuddyModel(int)
// address: 0x002B9690   size: 0x36 (54 bytes)
//======================================================================
int __fastcall ClientAccountMgr::getBuddyModel(ClientAccountMgr *this, int a2)
{
  int i; // r4
  int v5; // r3
  int v6; // r3
  int result; // r0

  for ( i = 0; ; ++i )
  {
    if ( i >= ClientAccountMgr::getBuddyNum(this) )
      return 49;
    v5 = *((_DWORD *)this + 3) + 56 * i;
    if ( a2 == *(_DWORD *)(v5 + 16) )
      break;
  }
  v6 = *(unsigned __int8 *)(v5 + 24);
  result = 1;
  if ( (unsigned int)(v6 - 1) <= 9 )
    return v6;
  return result;
}


//======================================================================
// ClientAccountMgr::requestBuddyWatch(int)
// address: 0x002B96C8   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientAccountMgr::requestBuddyWatch(ClientAccountMgr *this, int a2)
{
  return 0;
}


//======================================================================
// ClientAccountMgr::requestBuddyAttention(int)
// address: 0x002B96DC   size: 0x10 (16 bytes)
//======================================================================
int __fastcall ClientAccountMgr::requestBuddyAttention(ClientAccountMgr *this, int a2)
{
  return ClientBuddyMgr::buddyAttention((ClientBuddyMgr *)g_BuddyMgr, a2);
}


//======================================================================
// ClientAccountMgr::requestBuddyAttentionDel(int)
// address: 0x002B96F0   size: 0x10 (16 bytes)
//======================================================================
int __fastcall ClientAccountMgr::requestBuddyAttentionDel(ClientAccountMgr *this, int a2)
{
  return ClientBuddyMgr::buddyAttentionDel((ClientBuddyMgr *)g_BuddyMgr, a2);
}


//======================================================================
// ClientAccountMgr::getBuddyOffLineChat(void)
// address: 0x002B9704   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientAccountMgr::getBuddyOffLineChat(ClientAccountMgr *this)
{
  return 1;
}


//======================================================================
// ClientAccountMgr::addBuddyChatMsg(std::string)
// address: 0x002B9718   size: 0x52 (82 bytes)
//======================================================================
int __fastcall ClientAccountMgr::addBuddyChatMsg(int a1, int a2)
{
  int v4; // r6
  int v5; // r5
  int v7; // [sp+4h] [bp-18h]
  _BYTE v8[4]; // [sp+Ch] [bp-10h] BYREF
  _DWORD v9[3]; // [sp+10h] [bp-Ch] BYREF

  CSMgr::getSvrTime(g_CSMgr, v9);
  v4 = g_BuddyMgr;
  v5 = **(_DWORD **)(a1 + 8);
  v7 = v9[0];
  sub_3BEB1C(v8, a2);
  ClientBuddyMgr::addBuddyChatMsg(v4, v5, v7, v8);
  sub_3BDF80(v8);
  return GameEventQue::postUpdateBuddyMsg((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton);
}


//======================================================================
// ClientAccountMgr::updateMyWorldList(bool)
// address: 0x002B9780   size: 0x30 (48 bytes)
//======================================================================
int __fastcall ClientAccountMgr::updateMyWorldList(ClientAccountMgr *this, int a2)
{
  int MyWorldList; // r0
  int result; // r0

  MyWorldList = ClientAccountMgr::getMyWorldList(this);
  result = WorldList::initMy(MyWorldList, g_CSMgr + 720);
  if ( a2 != 0 )
    return GameEventQue::postWorldListChange((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton, true, 0);
  return result;
}


//======================================================================
// ClientAccountMgr::updateWorld(void)
// address: 0x002B97B8   size: 0xA (10 bytes)
//======================================================================
int __fastcall ClientAccountMgr::updateWorld(ClientAccountMgr *this)
{
  return ClientAccountMgr::updateMyWorldList(this, 1);
}


//======================================================================
// ClientAccountMgr::requestCreateWorld(int,char const*,int,char const*,int)
// address: 0x002B97C4   size: 0x144 (324 bytes)
//======================================================================
int __fastcall ClientAccountMgr::requestCreateWorld(
        ClientAccountMgr *this,
        const char *a2,
        const char *a3,
        int a4,
        const char *a5,
        int a6)
{
  char *v8; // r0
  __suseconds_t v9; // r1
  int *v10; // r5
  int SystemTick; // r0
  const char *v12; // r1
  unsigned int v13; // r3
  int World; // r5
  const char *v15; // r1
  const char *v16; // r1
  int v20; // [sp+24h] [bp-370h]
  char v21[67]; // [sp+35h] [bp-35Fh] BYREF
  int v22[197]; // [sp+78h] [bp-31Ch] BYREF

  Ogre::LogSetCurParam(
    (int)"D:/work/oworldsrc/client/iworld/ClientAccount.cpp",
    (const char *)&stru_318.st_shndx,
    2,
    _stack_chk_guard);
  Ogre::LogMessage(
    (Ogre *)"requestCreateWorld: worldtype=%d, name=%s(%x), terrtype=%d, genstr=%s, model=%d",
    a2,
    a3,
    a3,
    a4,
    a5,
    a6);
  j_memset(v22, 0, 0x310u);
  if ( *a3 != 0 )
    v8 = MyStringCpy((char *)&v22[1], 0x20u, a3);
  else
    v8 = j_strcpy((char *)&v22[1], "noname");
  LOWORD(v22[42]) = (_WORD)a2;
  if ( *a5 != 0 )
  {
    j_strncpy(v21, a5, 0x40u);
  }
  else
  {
    v10 = *((int **)this + 2);
    v20 = *v10;
    SystemTick = Ogre::Timer::getSystemTick((Ogre::Timer *)v8, v9);
    j_snprintf(v21, 0x40u, "%d%s%d%s%d%d%d", v20, (const char *)v10 + 8, a2, a3, a4, a6, SystemTick + 1);
  }
  v21[64] = 0;
  LOWORD(v22[44]) = WriteWorldCreateData();
  Ogre::LogSetCurParam(
    (int)"D:/work/oworldsrc/client/iworld/ClientAccount.cpp",
    (_BYTE *)&stru_338.st_value + 2,
    2,
    (unsigned int)&v22[44]);
  Ogre::LogMessage((Ogre *)"CSMgr::createWorld begin", v12);
  World = CSMgr::createWorld(g_CSMgr, v22);
  if ( World != 0 )
  {
    Ogre::LogSetCurParam(
      (int)"D:/work/oworldsrc/client/iworld/ClientAccount.cpp",
      (_BYTE *)&stru_338.st_size + 1,
      2,
      v13);
    Ogre::LogMessage((Ogre *)"CSMgr::createWorld end", v15);
    ClientAccountMgr::updateMyWorldList(this, 1);
    return ClientAccountMgr::requestEnterWorld(this, v22[0]);
  }
  else
  {
    Ogre::LogSetCurParam(
      (int)"D:/work/oworldsrc/client/iworld/ClientAccount.cpp",
      (_BYTE *)&stru_338.st_shndx + 1,
      2,
      v13);
    Ogre::LogMessage((Ogre *)"end requestCreateWorld", v16);
  }
  return World;
}


//======================================================================
// ClientAccountMgr::requestDeleteWorld(int)
// address: 0x002B9944   size: 0x20 (32 bytes)
//======================================================================
int __fastcall ClientAccountMgr::requestDeleteWorld(ClientAccountMgr *this, int a2)
{
  int v3; // r4

  v3 = CSMgr::delWorld((CSMgr *)g_CSMgr, a2);
  if ( v3 != 0 )
    ClientAccountMgr::updateMyWorldList(this, 1);
  return v3;
}


//======================================================================
// ClientAccountMgr::requestOpenOWorld(int,bool)
// address: 0x002B9968   size: 0x20 (32 bytes)
//======================================================================
int __fastcall ClientAccountMgr::requestOpenOWorld(ClientAccountMgr *this, int a2, bool a3)
{
  int v4; // r4

  v4 = CSMgr::openOWorld((CSMgr *)g_CSMgr, a2, a3);
  if ( v4 != 0 )
    ClientAccountMgr::updateMyWorldList(this, 1);
  return v4;
}


//======================================================================
// ClientAccountMgr::requestDownWorld(int,int)
// address: 0x002B998C   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall ClientAccountMgr::requestDownWorld(int this, int a2, int a3)
{
  ClientAccountMgr *v3; // r4
  BuddyInfo *WatchBuddyInfo; // r0
  unsigned int v6; // r5
  int v7; // r3
  unsigned int v8; // r5
  int v9; // r3

  v3 = (ClientAccountMgr *)this;
  if ( a3 == 1 )
  {
    WatchBuddyInfo = (BuddyInfo *)ClientBuddyMgr::getWatchBuddyInfo((ClientBuddyMgr *)g_BuddyMgr);
    if ( WatchBuddyInfo != nullptr && BuddyInfo::getBuddyOWorld(WatchBuddyInfo, a2) != 0 )
    {
LABEL_4:
      ClientAccountMgr::updateMyWorldList(v3, 0);
      return 1;
    }
    return 0;
  }
  v6 = 0;
  if ( a3 == 2 )
  {
    while ( 1 )
    {
      v7 = *((_DWORD *)v3 + 20);
      if ( v6 >= 438261969 * ((*((_DWORD *)v3 + 21) - v7) >> 4) )
        return 0;
      if ( *(_DWORD *)(v7 + 784 * v6) == a2 && CSMgr::getBuddyOWorld(g_CSMgr) != 0 )
        goto LABEL_4;
      ++v6;
    }
  }
  v8 = 0;
  if ( a3 == 3 )
  {
    while ( 1 )
    {
      v9 = *((_DWORD *)v3 + 26);
      if ( v8 >= 438261969 * ((*((_DWORD *)v3 + 27) - v9) >> 4) )
        return 0;
      if ( *(_DWORD *)(v9 + 784 * v8) == a2 && CSMgr::getBuddyOWorld(g_CSMgr) != 0 )
        goto LABEL_4;
      ++v8;
    }
  }
  return this;
}


//======================================================================
// ClientAccountMgr::getBuddyInfo(int)
// address: 0x002B9A40   size: 0x2E (46 bytes)
//======================================================================
int __fastcall ClientAccountMgr::getBuddyInfo(ClientAccountMgr *this, int a2)
{
  int i; // r4
  int v5; // r3

  for ( i = 0; i < ClientAccountMgr::getBuddyNum(this); ++i )
  {
    v5 = *((_DWORD *)this + 3);
    if ( a2 == *(_DWORD *)(v5 + 56 * i + 16) )
      return v5 + 56 * i + 16;
  }
  return 0;
}


//======================================================================
// ClientAccountMgr::isSameDay(int,int)
// address: 0x002B9A70   size: 0x22 (34 bytes)
//======================================================================
int __fastcall ClientAccountMgr::isSameDay(ClientAccountMgr *this, int a2, int a3)
{
  return (a3 - 21600) / 86400 + ((a2 - 21600) / 86400 == (a3 - 21600) / 86400) + (a3 - 21600) / -86400;
}


//======================================================================
// ClientAccountMgr::requestAddCreditWorld(int,int)
// address: 0x002B9A9C   size: 0xB0 (176 bytes)
//======================================================================
int __fastcall ClientAccountMgr::requestAddCreditWorld(ClientAccountMgr *this, int a2, int a3)
{
  int v5; // r2
  int v6; // r4
  __int64 v7; // r0
  int v8; // r2
  int v9; // r4
  int BuddyInfo; // r0
  int v11; // r7
  int v12; // r0
  TiXmlElement *NodeByPath; // [sp+14h] [bp-10h] BYREF
  int v16[3]; // [sp+18h] [bp-Ch] BYREF

  CSMgr::getSvrTime(g_CSMgr, v16);
  NodeByPath = Ogre::XMLData::getNodeByPath(
                 (TiXmlNode **)Ogre::Singleton<Ogre::Root>::ms_Singleton,
                 "GameData.Buddy",
                 0);
  if ( NodeByPath == nullptr || (v6 = Ogre::XMLNode::attribToInt(&NodeByPath, "resettime", v5)) == 0 )
  {
    v6 = v16[0];
    Ogre::XMLNode::setAttribInt(&NodeByPath, "resettime", v16[0]);
    LODWORD(v7) = Ogre::Singleton<Ogre::Root>::ms_Singleton;
    Ogre::Root::saveFile(v7, v8);
  }
  if ( ClientAccountMgr::isSameDay(this, v6, v16[0]) == 0 )
    Ogre::Root::resetGameData((TiXmlNode **)Ogre::Singleton<Ogre::Root>::ms_Singleton, v16[0]);
  v9 = ClientBuddyMgr::addCredit((ClientBuddyMgr *)g_BuddyMgr, a2, a3);
  if ( v9 == 0 )
  {
    BuddyInfo = ClientAccountMgr::getBuddyInfo(this, a2);
    if ( BuddyInfo != 0 )
    {
      ++*(_DWORD *)(BuddyInfo + 48);
      v11 = g_CSMgr;
      v12 = ClientAccountMgr::getBuddyInfo(this, a2);
      CSMgr::updateBuddyInfo(v11, v12);
    }
  }
  return v9;
}


//======================================================================
// ClientAccountMgr::update(void)
// address: 0x002B9B64   size: 0x56 (86 bytes)
//======================================================================
Ogre::Timer *__fastcall ClientAccountMgr::update(Ogre::Timer **this)
{
  int MyWorldList; // r0
  __int64 updated; // r0
  Ogre::Timer *result; // r0
  __suseconds_t v5; // r1
  Ogre::Timer *v6; // r6

  MyWorldList = ClientAccountMgr::getMyWorldList((ClientAccountMgr *)this);
  updated = WorldList::updateMy(MyWorldList, g_CSMgr + 720);
  result = (Ogre::Timer *)(Ogre::Timer::getSystemTick((Ogre::Timer *)updated, SHIDWORD(updated)) - (_DWORD)*(this + 29));
  if ( (unsigned int)result > 0x2710 )
  {
    *(this + 29) = (Ogre::Timer *)Ogre::Timer::getSystemTick(result, v5);
    v6 = *(this + 30);
    result = (Ogre::Timer *)ClientManager::getNetworkState((ClientManager *)Ogre::Singleton<ClientManager>::ms_Singleton);
    if ( v6 != result )
    {
      *(this + 30) = (Ogre::Timer *)ClientManager::getNetworkState((ClientManager *)Ogre::Singleton<ClientManager>::ms_Singleton);
      return (Ogre::Timer *)GameEventQue::postNetChange((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton);
    }
  }
  return result;
}


//======================================================================
// ClientAccountMgr::sendBuddyOffLineChat(int,char *)
// address: 0x002B9BCC   size: 0x10 (16 bytes)
//======================================================================
int __fastcall ClientAccountMgr::sendBuddyOffLineChat(ClientAccountMgr *this, int a2, char *a3)
{
  return CSMgr::sendBuddyOffLineChat((CSMgr *)g_CSMgr, a2, a3);
}


//======================================================================
// ClientAccountMgr::requestLoadWorld(int)
// address: 0x002B9BE0   size: 0x10 (16 bytes)
//======================================================================
int __fastcall ClientAccountMgr::requestLoadWorld(ClientAccountMgr *this, int a2)
{
  return CSMgr::loadWorld((CSMgr *)g_CSMgr, a2);
}


//======================================================================
// ClientAccountMgr::checkLoadWorld(int)
// address: 0x002B9BF4   size: 0x12 (18 bytes)
//======================================================================
int __fastcall ClientAccountMgr::checkLoadWorld(ClientAccountMgr *this, int a2)
{
  return CSMgr::checkLoadWorld((CSMgr *)g_CSMgr, a2, false);
}


//======================================================================
// ClientAccountMgr::abortLoadWorld(void)
// address: 0x002B9C0C   size: 0x10 (16 bytes)
//======================================================================
int __fastcall ClientAccountMgr::abortLoadWorld(ClientAccountMgr *this)
{
  return CSMgr::abortLoadWorld((CSMgr *)g_CSMgr);
}


//======================================================================
// ClientAccountMgr::getLoadProgress(void)
// address: 0x002B9C20   size: 0x84 (132 bytes)
//======================================================================
const char *__fastcall ClientAccountMgr::getLoadProgress(ClientAccountMgr *this, int a2)
{
  unsigned int v2; // r3
  double v3; // r0
  double v4; // r0
  double v5; // r2
  const char *v6; // r4
  ClientAccountMgr *v8; // [sp+0h] [bp-8h] BYREF
  int v9; // [sp+4h] [bp-4h] BYREF

  v8 = this;
  v9 = a2;
  CSMgr::loadWorldPop((CSMgr *)g_CSMgr, (int *)&v8, &v9);
  v2 = (unsigned int)v8;
  if ( v8 == (ClientAccountMgr *)((char *)&dword_0 + 1) )
  {
    v3 = (double)v9 * 0.9;
LABEL_8:
    v6 = (const char *)(int)(v3 + 0.0);
    goto LABEL_9;
  }
  if ( v8 == (ClientAccountMgr *)&byte_8 )
  {
    v4 = (double)v9 * 0.05;
    v5 = 90.0;
LABEL_7:
    v3 = v4 + v5;
    goto LABEL_8;
  }
  v6 = nullptr;
  if ( v8 == (ClientAccountMgr *)byte_9 )
  {
    v4 = (double)v9 * 0.05;
    v5 = 95.0;
    goto LABEL_7;
  }
LABEL_9:
  Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/ClientAccount.cpp", (_BYTE *)&stru_4C8.st_name + 2, 2, v2);
  Ogre::LogMessage((Ogre *)"totalProcess: %d", v6);
  return v6;
}


//======================================================================
// ClientAccountMgr::addLoadWorldData(int,int,int)
// address: 0x002B9CE0   size: 0xF6 (246 bytes)
//======================================================================
TiXmlNode *__fastcall ClientAccountMgr::addLoadWorldData(ClientAccountMgr *this, const char *a2, int a3, int a4)
{
  TiXmlNode *result; // r0
  int v5; // r2
  int v6; // r7
  unsigned int v7; // r3
  const char *v8; // r1
  int v9; // r2
  TiXmlNode *v13; // [sp+18h] [bp-94h] BYREF
  TiXmlNode *Child; // [sp+1Ch] [bp-90h] BYREF
  TiXmlNode *RootNode; // [sp+20h] [bp-8Ch] BYREF
  char v16[128]; // [sp+24h] [bp-88h] BYREF

  Ogre::LogSetCurParam(
    (int)"D:/work/oworldsrc/client/iworld/ClientAccount.cpp",
    (const char *)&stru_4C8.st_size,
    2,
    _stack_chk_guard);
  Ogre::LogMessage((Ogre *)"-------data:%d    %d    %d", a2, a3, a4);
  RootNode = (TiXmlNode *)Ogre::XMLData::getRootNode((TiXmlNode **)Ogre::Singleton<Ogre::Root>::ms_Singleton);
  result = (TiXmlNode *)Ogre::XMLNode::getChild(&RootNode, "GameData");
  v13 = result;
  if ( result != nullptr )
  {
    Child = (TiXmlNode *)Ogre::XMLNode::getChild(&v13, "LoadWorldData");
    if ( Child == nullptr )
    {
      Child = Ogre::XMLNode::addChild(&v13, "LoadWorldData");
      Ogre::XMLNode::setAttribInt(&Child, "NUM", 0);
    }
    v6 = Ogre::XMLNode::attribToInt(&Child, "NUM", v5);
    j_sprintf(v16, "W%d", a2);
    RootNode = Ogre::XMLNode::addChild(&Child, v16);
    Ogre::XMLNode::setAttribInt(&RootNode, "loadowid", a3);
    Ogre::XMLNode::setAttribInt(&RootNode, "version", a4);
    Ogre::XMLNode::setAttribInt(&Child, "NUM", v6 + 1);
    Ogre::LogSetCurParam(
      (int)"D:/work/oworldsrc/client/iworld/ClientAccount.cpp",
      (const char *)&stru_4D8.st_shndx,
      2,
      v7);
    Ogre::LogMessage((Ogre *)"-------datasave", v8);
    return (TiXmlNode *)Ogre::Root::saveFile(
                          __SPAIR64__(
                            &Ogre::Singleton<Ogre::Root>::ms_Singleton,
                            Ogre::Singleton<Ogre::Root>::ms_Singleton),
                          v9);
  }
  return result;
}


//======================================================================
// ClientAccountMgr::delLoadWorldData(int)
// address: 0x002B9E10   size: 0x8E (142 bytes)
//======================================================================
TiXmlNode *__fastcall ClientAccountMgr::delLoadWorldData(ClientAccountMgr *this, int a2)
{
  TiXmlNode *result; // r0
  __int64 v3; // r0
  int v4; // r2
  int v5; // r2
  int v6; // r0
  TiXmlNode *v8; // [sp+Ch] [bp-90h] BYREF
  TiXmlNode *RootNode; // [sp+10h] [bp-8Ch] BYREF
  char s[128]; // [sp+14h] [bp-88h] BYREF

  RootNode = (TiXmlNode *)Ogre::XMLData::getRootNode((TiXmlNode **)Ogre::Singleton<Ogre::Root>::ms_Singleton);
  result = (TiXmlNode *)Ogre::XMLNode::getChild(&RootNode, "GameData");
  v8 = result;
  if ( result != nullptr )
  {
    result = (TiXmlNode *)Ogre::XMLNode::getChild(&v8, "LoadWorldData");
    RootNode = result;
    if ( result != nullptr )
    {
      j_sprintf(s, "W%d", a2);
      HIDWORD(v3) = Ogre::XMLNode::getChild(&RootNode, s);
      if ( HIDWORD(v3) != 0 )
      {
        Ogre::XMLNode::eraseChild(&RootNode, (TiXmlNode *)HIDWORD(v3));
        v6 = Ogre::XMLNode::attribToInt(&RootNode, "NUM", v5);
        Ogre::XMLNode::setAttribInt(&RootNode, "NUM", v6 - 1);
      }
      LODWORD(v3) = Ogre::Singleton<Ogre::Root>::ms_Singleton;
      return (TiXmlNode *)Ogre::Root::saveFile(v3, v4);
    }
  }
  return result;
}


//======================================================================
// ClientAccountMgr::isInMyWorld(int,int,int)
// address: 0x002B9EB8   size: 0x98 (152 bytes)
//======================================================================
bool __fastcall ClientAccountMgr::isInMyWorld(ClientAccountMgr *this, int a2, int a3, int a4)
{
  int v5; // r2
  int v6; // r2
  _BOOL4 result; // r0
  TiXmlNode *Child; // [sp+8h] [bp-94h] BYREF
  TiXmlNode *v11; // [sp+Ch] [bp-90h] BYREF
  TiXmlNode *RootNode; // [sp+10h] [bp-8Ch] BYREF
  char s[128]; // [sp+14h] [bp-88h] BYREF

  RootNode = (TiXmlNode *)Ogre::XMLData::getRootNode((TiXmlNode **)Ogre::Singleton<Ogre::Root>::ms_Singleton);
  Child = (TiXmlNode *)Ogre::XMLNode::getChild(&RootNode, "GameData");
  result = false;
  if ( Child != nullptr )
  {
    v11 = (TiXmlNode *)Ogre::XMLNode::getChild(&Child, "LoadWorldData");
    if ( v11 != nullptr )
    {
      j_sprintf(s, "W%d", a2);
      RootNode = (TiXmlNode *)Ogre::XMLNode::getChild(&v11, s);
      if ( RootNode != nullptr
        && a3 == Ogre::XMLNode::attribToInt(&RootNode, "loadowid", v5)
        && a4 == Ogre::XMLNode::attribToInt(&RootNode, "version", v6) )
      {
        return true;
      }
    }
  }
  return result;
}


//======================================================================
// ClientAccountMgr::getWarchOwNum(void)
// address: 0x002B9F6C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientAccountMgr::getWarchOwNum(ClientAccountMgr *this)
{
  return 0;
}


//======================================================================
// ClientAccountMgr::getWarchOwDesc(int)
// address: 0x002B9F80   size: 0x14 (20 bytes)
//======================================================================
ClientAccountMgr *__fastcall ClientAccountMgr::getWarchOwDesc(ClientAccountMgr *this, int a2, int a3)
{
  WorldDesc::WorldDesc(this, (const WorldDesc *)(*(_DWORD *)(a2 + 68) + 184 * a3));
  return this;
}


//======================================================================
// ClientAccountMgr::clearExceptOW(void)
// address: 0x002B9F94   size: 0xA (10 bytes)
//======================================================================
_DWORD *__fastcall ClientAccountMgr::clearExceptOW(_DWORD *this)
{
  *(this + 15) = *(this + 14);
  *(this + 13) = 0;
  return this;
}


//======================================================================
// ClientAccountMgr::requestWatchAttention(void)
// address: 0x002B9FA0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientAccountMgr::requestWatchAttention(ClientAccountMgr *this)
{
  return 0;
}


//======================================================================
// ClientAccountMgr::isAttentionWorld(int)
// address: 0x002BA004   size: 0x26 (38 bytes)
//======================================================================
int __fastcall ClientAccountMgr::isAttentionWorld(ClientAccountMgr *this, int a2)
{
  char *v2; // r0
  int v3; // r2
  int v4; // r3
  int v5; // r0

  v2 = (char *)this + 4;
  v3 = *((_DWORD *)v2 + 30);
  v4 = 0;
  v5 = (*((_DWORD *)v2 + 31) - v3) >> 2;
  while ( 1 )
  {
    if ( v4 == v5 )
      return 0;
    if ( *(_DWORD *)(v3 + 4 * v4) == a2 )
      break;
    ++v4;
  }
  return 1;
}


//======================================================================
// ClientAccountMgr::getAttentionOwNum(void)
// address: 0x002BA02C   size: 0xE (14 bytes)
//======================================================================
int __fastcall ClientAccountMgr::getAttentionOwNum(ClientAccountMgr *this)
{
  return -373475417 * ((*((_DWORD *)this + 24) - *((_DWORD *)this + 23)) >> 3);
}


//======================================================================
// ClientAccountMgr::getAttentionWorldDesc(int)
// address: 0x002BA040   size: 0x14 (20 bytes)
//======================================================================
ClientAccountMgr *__fastcall ClientAccountMgr::getAttentionWorldDesc(ClientAccountMgr *this, int a2, int a3)
{
  WorldDesc::WorldDesc(this, (const WorldDesc *)(*(_DWORD *)(a2 + 92) + 184 * a3));
  return this;
}


//======================================================================
// ClientAccountMgr::~ClientAccountMgr()
// address: 0x002BA184   size: 0x6E (110 bytes)
//======================================================================
// Alternative name is '_ZN16ClientAccountMgrD1Ev'
void __fastcall ClientAccountMgr::~ClientAccountMgr(ClientAccountMgr *this)
{
  WorldList *v1; // r5
  void *v3; // r5

  v1 = *((WorldList **)this + 7);
  *(_DWORD *)this = &off_45E5F8;
  if ( v1 != nullptr )
  {
    WorldList::~WorldList(v1);
    operator delete(v1);
  }
  v3 = *((void **)this + 8);
  if ( v3 != nullptr )
  {
    WorldList::~WorldList(*((WorldList **)this + 8));
    operator delete(v3);
  }
  std::_Vector_base<int>::~_Vector_base((void **)this + 31);
  std::_Vector_base<tagOWorld>::~_Vector_base((void **)this + 26);
  std::vector<WorldDesc>::~vector((WorldDesc **)this + 23);
  std::_Vector_base<tagOWorld>::~_Vector_base((void **)this + 20);
  std::vector<WorldDesc>::~vector((WorldDesc **)this + 17);
  std::_Vector_base<int>::~_Vector_base((void **)this + 14);
  sub_3BDF80((char *)this + 24);
}


//======================================================================
// ClientAccountMgr::ClientAccountMgr(void)
// address: 0x002BA1F8   size: 0x8E (142 bytes)
//======================================================================
// Alternative name is '_ZN16ClientAccountMgrC1Ev'
void __fastcall ClientAccountMgr::ClientAccountMgr(ClientAccountMgr *this)
{
  WorldList *v2; // r6
  WorldList *v3; // r6

  *(_DWORD *)this = &off_45E5F8;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 9) = -1;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 6) = &byte_55FB88;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 33) = 0;
  *((_BYTE *)this + 4) = 0;
  v2 = (WorldList *)operator new(0xCu);
  WorldList::WorldList(v2);
  *((_DWORD *)this + 7) = v2;
  v3 = (WorldList *)operator new(0xCu);
  WorldList::WorldList(v3);
  *((_DWORD *)this + 8) = v3;
  *((_DWORD *)this + 11) = -1;
  g_AccountMgr = (int)this;
  *((_DWORD *)this + 29) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 30) = ClientManager::getNetworkState((ClientManager *)Ogre::Singleton<ClientManager>::ms_Singleton);
}


//======================================================================
// ClientAccountMgr::clearWarchOW(void)
// address: 0x002BA2E0   size: 0x16 (22 bytes)
//======================================================================
void __fastcall ClientAccountMgr::clearWarchOW(ClientAccountMgr *this)
{
  WorldDesc *v1; // r5
  int v3; // r3

  v1 = *((WorldDesc **)this + 17);
  std::_Destroy_aux<false>::__destroy<WorldDesc *>(v1, *((WorldDesc **)this + 18));
  v3 = *((_DWORD *)this + 20);
  *((_DWORD *)this + 18) = v1;
  *((_DWORD *)this + 21) = v3;
}


//======================================================================
// ClientAccountMgr::requestWatchOWList(int,int)
// address: 0x002BA2F8   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientAccountMgr::requestWatchOWList(ClientAccountMgr *this, int a2, int a3)
{
  return 0;
}


//======================================================================
// ClientAccountMgr::initAttentionIds(void)
// address: 0x002BA3B8   size: 0x2E (46 bytes)
//======================================================================
__int64 __fastcall ClientAccountMgr::initAttentionIds(__int64 this)
{
  int v1; // r5
  int v2; // r4
  int v3; // r6
  __int64 v4; // r0
  int v5; // r3
  __int64 v7; // [sp+0h] [bp-8h] BYREF

  v7 = this;
  v1 = this;
  v2 = 0;
  v3 = *(_DWORD *)(*(_DWORD *)(this + 8) + 4728);
  while ( v2 < v3 )
  {
    LODWORD(v4) = v1 + 124;
    HIDWORD(v4) = (char *)&v7 + 4;
    v5 = *(_DWORD *)(*(_DWORD *)(v1 + 8) + 4 * (v2 + 1182) + 4);
    ++v2;
    HIDWORD(v7) = v5;
    std::vector<int>::push_back(v4);
  }
  return v7;
}


//======================================================================
// ClientAccountMgr::onLoadAccount(int)
// address: 0x002BA3F0   size: 0xA8 (168 bytes)
//======================================================================
int __fastcall ClientAccountMgr::onLoadAccount(ClientAccountMgr *this, const char *a2, int a3, unsigned int a4)
{
  unsigned int v6; // r3
  int v7; // r3
  __int64 v8; // r0
  _DWORD *v9; // r5
  const char *v10; // r1
  _BYTE v12[4092]; // [sp+0h] [bp-1000h] BYREF

  Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/ClientAccount.cpp", (const char *)&word_32, 2, a4);
  Ogre::LogMessage((Ogre *)"onLoadAccount: %d", a2);
  if ( a2 == (_BYTE *)&dword_0 + 1 )
  {
    v6 = -1;
  }
  else
  {
    v7 = g_CSMgr;
    *((_DWORD *)this + 2) = g_CSMgr + 20328;
    *((_DWORD *)this + 3) = v7 + 26112;
    ClientAccountMgr::updateMyWorldList(this, 1);
    LODWORD(v8) = this;
    ClientAccountMgr::initAttentionIds(v8);
    if ( g_AchievementMgr != 0 )
    {
      v9 = (_DWORD *)(*((_DWORD *)this + 2) + 104);
      j_memcpy(v12, (const void *)(*((_DWORD *)this + 2) + 116), sizeof(v12));
      AchievementManager::loadAchievementUinList(g_AchievementMgr, *v9, v9[1], v9[2]);
    }
    GameEventQue::postEnterGame(
      (GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton,
      *(_BYTE *)(*((_DWORD *)this + 2) + 65) == 0);
    v6 = 1;
  }
  *((_DWORD *)this + 9) = v6;
  Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/ClientAccount.cpp", (const char *)&dword_44 + 2, 2, v6);
  return Ogre::LogMessage((Ogre *)"onLoadAccount end", v10);
}


//======================================================================
// ClientAccountMgr::addAttentionIds(int)
// address: 0x002BA4C0   size: 0x50 (80 bytes)
//======================================================================
int __fastcall ClientAccountMgr::addAttentionIds(ClientAccountMgr *this, int a2)
{
  char *v2; // r5
  int v3; // r3
  char *v4; // r1
  char *v6; // r6
  int v7; // r3
  int v9; // [sp+4h] [bp-4h] BYREF

  v9 = a2;
  v2 = (char *)this + 4;
  v3 = *((_DWORD *)this + 32);
  v9 = a2;
  v4 = *((char **)this + 31);
  v6 = (char *)this + 124;
  if ( v3 - (int)v4 > 1023 )
    std::vector<int>::erase((int)this + 124, v4);
  std::vector<int>::push_back(__SPAIR64__(&v9, (unsigned int)v6));
  v7 = (*((_DWORD *)v2 + 31) - *((_DWORD *)this + 31)) >> 2;
  *(_DWORD *)(*((_DWORD *)this + 2) + 4728) = v7;
  *(_DWORD *)(*((_DWORD *)this + 2) + 4 * (v7 + 1181) + 4) = v9;
  return CSMgr::alterUinCollection((CSMgr *)g_CSMgr);
}


//======================================================================
// ClientAccountMgr::removeSameWatchOw(int)
// address: 0x002BA574   size: 0x48 (72 bytes)
//======================================================================
char *__fastcall ClientAccountMgr::removeSameWatchOw(char *this, char *a2)
{
  int v2; // r2
  int v3; // r3
  char *v4; // r4
  int v6; // r1
  char *v7; // r3
  char *v8; // r1

  v2 = *((_DWORD *)this + 18);
  v3 = *((_DWORD *)this + 17);
  v4 = this;
  while ( 1 )
  {
    v6 = v3;
    if ( v3 == v2 )
      break;
    v3 += 184;
    this = *(char **)(v3 - 184);
    if ( this == a2 )
    {
      this = (char *)std::vector<WorldDesc>::erase((int)(v4 + 68), v6);
      break;
    }
  }
  v7 = *((char **)v4 + 20);
  while ( 1 )
  {
    v8 = v7;
    if ( v7 == *((char **)v4 + 21) )
      break;
    v7 += 784;
    this = *((char **)v7 - 196);
    if ( this == a2 )
      return std::vector<tagOWorld>::erase((int)(v4 + 80), v8);
  }
  return this;
}


//======================================================================
// ClientAccountMgr::removeAttentionIds(int)
// address: 0x002BA5C0   size: 0xBA (186 bytes)
//======================================================================
int __fastcall ClientAccountMgr::removeAttentionIds(ClientAccountMgr *this, int a2)
{
  char *v2; // r3
  char *v5; // r1
  int v6; // r3
  int v7; // r1
  char *v8; // r3
  char *v9; // r1
  int v10; // r2
  int i; // r3
  int v12; // r1
  int v13; // r2

  v2 = *((char **)this + 31);
  while ( 1 )
  {
    v5 = v2;
    if ( v2 == *((char **)this + 32) )
      break;
    v2 += 4;
    if ( *((_DWORD *)v2 - 1) == a2 )
    {
      std::vector<int>::erase((int)this + 124, v5);
      break;
    }
  }
  v6 = *((_DWORD *)this + 23);
  while ( 1 )
  {
    v7 = v6;
    if ( v6 == *((_DWORD *)this + 24) )
      break;
    v6 += 184;
    if ( *(_DWORD *)(v6 - 184) == a2 )
    {
      std::vector<WorldDesc>::erase((int)this + 92, v7);
      break;
    }
  }
  v8 = *((char **)this + 26);
  while ( 1 )
  {
    v9 = v8;
    if ( v8 == *((char **)this + 27) )
      break;
    v8 += 784;
    if ( *((_DWORD *)v8 - 196) == a2 )
    {
      std::vector<tagOWorld>::erase((int)this + 104, v9);
      break;
    }
  }
  v10 = *((_DWORD *)this + 2);
  for ( i = *(_DWORD *)(v10 + 4728) - 1; i >= 0; --i )
  {
    if ( *(_DWORD *)(v10 + 4 * i + 4732) == a2 )
    {
      --*(_DWORD *)(v10 + 4728);
      v12 = *((_DWORD *)this + 2);
      v13 = *(_DWORD *)(v12 + 4728);
      if ( i != v13 )
        j_memmove((void *)(v12 + 4 * (i + 1182) + 4), (const void *)(v12 + 4 * (i + 1183) + 4), 4 * (v13 - i));
      return CSMgr::alterUinCollection((CSMgr *)g_CSMgr);
    }
  }
  return CSMgr::alterUinCollection((CSMgr *)g_CSMgr);
}


//======================================================================
// ClientAccountMgr::onOWWatchAttention(int,tagOWWatchRes *)
// address: 0x002BA8EC   size: 0x130 (304 bytes)
//======================================================================
int __fastcall ClientAccountMgr::onOWWatchAttention(int result, int a2, _DWORD *a3)
{
  char *v4; // r4
  int i; // r7
  int v6; // r3
  int v7; // r2
  int v8; // r1
  int v9; // r3
  __int64 v10; // r0
  int v11; // [sp+0h] [bp-CCh]
  _DWORD v12[2]; // [sp+Ch] [bp-C0h] BYREF
  _DWORD v13[3]; // [sp+14h] [bp-B8h] BYREF
  _DWORD v14[10]; // [sp+20h] [bp-ACh] BYREF
  _DWORD v15[7]; // [sp+48h] [bp-84h] BYREF
  _DWORD v16[2]; // [sp+64h] [bp-68h] BYREF
  char *v17; // [sp+6Ch] [bp-60h] BYREF
  char v18; // [sp+70h] [bp-5Ch]

  v11 = result;
  if ( a2 == 0 )
  {
    v4 = (char *)(a3 + 2);
    for ( i = 0; i < *a3; ++i )
    {
      v12[0] = *(_DWORD *)v4;
      v13[0] = &byte_55FB88;
      v14[0] = &byte_55FB88;
      v15[0] = &byte_55FB88;
      v16[0] = &byte_55FB88;
      v17 = &byte_55FB88;
      v12[1] = *((unsigned __int16 *)v4 + 84);
      sub_3BE508((int)v13, v4 + 4);
      v6 = *((_DWORD *)v4 + 31);
      v13[1] = *((_DWORD *)v4 + 9);
      v13[2] = v6;
      sub_3BE508((int)v14, v4 + 40);
      v7 = *((_DWORD *)v4 + 29);
      v8 = *((_DWORD *)v4 + 28);
      v14[3] = *((_DWORD *)v4 + 30);
      v14[2] = v7;
      v9 = (unsigned __int8)v4[170];
      v14[1] = v8;
      v14[4] = v9;
      sub_3BE508((int)v15, v4 + 448);
      v15[1] = (unsigned __int8)v4[705];
      v15[2] = (unsigned __int8)v4[706];
      v15[3] = *((_DWORD *)v4 + 178);
      v15[4] = *((_DWORD *)v4 + 192);
      v15[5] = *((_DWORD *)v4 + 194);
      v15[6] = *((_DWORD *)v4 + 190);
      sub_3BE508((int)v16, v4 + 72);
      v16[1] = *((_DWORD *)v4 + 27);
      sub_3BE508((int)&v17, v4 + 128);
      v18 = v4[160];
      v14[9] = 0;
      v14[8] = 0;
      std::vector<WorldDesc>::push_back(v11 + 92, (const WorldDesc *)v12);
      HIDWORD(v10) = v4;
      LODWORD(v10) = v11 + 104;
      std::vector<tagOWorld>::push_back(v10);
      WorldDesc::~WorldDesc((WorldDesc *)v12);
      v4 += 784;
    }
    return GameEventQue::postAttentionOWWatchResult((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton, 1);
  }
  return result;
}


//======================================================================
// ClientAccountMgr::onOWWatch(int,tagOWWatchRes *)
// address: 0x002BAA30   size: 0x198 (408 bytes)
//======================================================================
_DWORD *__fastcall ClientAccountMgr::onOWWatch(_DWORD *this, int a2, _DWORD *a3)
{
  int v3; // r6
  char *v4; // r4
  int v5; // r2
  int v6; // r1
  GameEventQue *v7; // r0
  int v8; // r3
  int v9; // r2
  int v10; // r1
  int v11; // r3
  __int64 v12; // r0
  char *v13; // r1
  __int64 v14; // r0
  int i; // [sp+4h] [bp-D0h]
  _DWORD v17[2]; // [sp+14h] [bp-C0h] BYREF
  _DWORD v18[3]; // [sp+1Ch] [bp-B8h] BYREF
  _DWORD v19[10]; // [sp+28h] [bp-ACh] BYREF
  _DWORD v20[7]; // [sp+50h] [bp-84h] BYREF
  _DWORD v21[2]; // [sp+6Ch] [bp-68h] BYREF
  char *v22; // [sp+74h] [bp-60h] BYREF
  char v23; // [sp+78h] [bp-5Ch]

  v3 = (int)this;
  if ( a2 == 0 )
  {
    if ( *a3 != 0 )
    {
      v4 = (char *)(a3 + 2);
      for ( i = 0; i < *a3; ++i )
      {
        ClientAccountMgr::removeSameWatchOw((char *)v3, *(char **)v4);
        v17[0] = *(_DWORD *)v4;
        v18[0] = &byte_55FB88;
        v19[0] = &byte_55FB88;
        v20[0] = &byte_55FB88;
        v21[0] = &byte_55FB88;
        v22 = &byte_55FB88;
        v17[1] = *((unsigned __int16 *)v4 + 84);
        sub_3BE508((int)v18, v4 + 4);
        v8 = *((_DWORD *)v4 + 31);
        v18[1] = *((_DWORD *)v4 + 9);
        v18[2] = v8;
        sub_3BE508((int)v19, v4 + 40);
        v9 = *((_DWORD *)v4 + 29);
        v10 = *((_DWORD *)v4 + 28);
        v19[3] = *((_DWORD *)v4 + 30);
        v19[2] = v9;
        v11 = (unsigned __int8)v4[170];
        v19[1] = v10;
        v19[4] = v11;
        sub_3BE508((int)v20, v4 + 448);
        v20[1] = (unsigned __int8)v4[705];
        v20[2] = (unsigned __int8)v4[706];
        v20[3] = *((_DWORD *)v4 + 178);
        v20[4] = *((_DWORD *)v4 + 192);
        v20[5] = *((_DWORD *)v4 + 194);
        v20[6] = *((_DWORD *)v4 + 190);
        sub_3BE508((int)v21, v4 + 72);
        v21[1] = *((_DWORD *)v4 + 27);
        sub_3BE508((int)&v22, v4 + 128);
        v23 = v4[160];
        v19[9] = 0;
        v19[8] = 0;
        std::vector<WorldDesc>::push_back(v3 + 68, (const WorldDesc *)v17);
        LODWORD(v12) = v3 + 80;
        HIDWORD(v12) = v4;
        std::vector<tagOWorld>::push_back(v12);
        if ( *(_DWORD *)(v3 + 44) == 0 )
        {
          v13 = *(char **)(v3 + 56);
          if ( *(_DWORD *)(v3 + 60) - (int)v13 > 599 )
            std::vector<int>::erase(v3 + 56, v13);
          LODWORD(v14) = v3 + 56;
          HIDWORD(v14) = v4;
          std::vector<int>::push_back(v14);
        }
        WorldDesc::~WorldDesc((WorldDesc *)v17);
        v4 += 784;
      }
      if ( *(int *)(v3 + 44) > 0 )
        *(_DWORD *)(v3 + 52) += *a3;
      v6 = 1;
      v7 = (GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton;
    }
    else
    {
      v5 = *(this + 11);
      if ( v5 != 0 )
      {
        if ( v5 > 0 )
          *(this + 13) = *a3;
      }
      else
      {
        *(this + 15) = *(this + 14);
      }
      v6 = 0;
      v7 = (GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton;
    }
    return (_DWORD *)GameEventQue::postOWWatchResult(v7, v6);
  }
  return this;
}

