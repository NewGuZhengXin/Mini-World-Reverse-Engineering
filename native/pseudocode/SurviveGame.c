// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: SurviveGame

//======================================================================
// SurviveGame::getName(void)
// address: 0x002F3818   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall SurviveGame::getName(SurviveGame *this)
{
  return "SurviveGame";
}


//======================================================================
// SurviveGame::onLoadRoleData(int,tagRoleData *)
// address: 0x002F3824   size: 0x2 (2 bytes)
//======================================================================
void SurviveGame::onLoadRoleData()
{
  ;
}


//======================================================================
// SurviveGame::onLoadItem(tagDropItem *)
// address: 0x002F383C   size: 0x2 (2 bytes)
//======================================================================
void SurviveGame::onLoadItem()
{
  ;
}


//======================================================================
// SurviveGame::onBuddyAttention(int,tagBuddyInfo *)
// address: 0x002F3854   size: 0x2 (2 bytes)
//======================================================================
void SurviveGame::onBuddyAttention()
{
  ;
}


//======================================================================
// SurviveGame::onBuddyFind(int,tagBuddyFindRes *)
// address: 0x002F386C   size: 0x2 (2 bytes)
//======================================================================
void SurviveGame::onBuddyFind()
{
  ;
}


//======================================================================
// SurviveGame::onOWWatch(int,tagOWWatchRes *)
// address: 0x002F3884   size: 0x2 (2 bytes)
//======================================================================
void SurviveGame::onOWWatch()
{
  ;
}


//======================================================================
// SurviveGame::onOWWatchAttention(int,tagOWWatchRes *)
// address: 0x002F389C   size: 0x2 (2 bytes)
//======================================================================
void SurviveGame::onOWWatchAttention()
{
  ;
}


//======================================================================
// SurviveGame::onBuddyWatchAccountRes(int,tagAccountWatch *)
// address: 0x002F38B4   size: 0x2 (2 bytes)
//======================================================================
void SurviveGame::onBuddyWatchAccountRes()
{
  ;
}


//======================================================================
// SurviveGame::onBuddyWatchOWRes(int,tagWatchOWRes *)
// address: 0x002F38CC   size: 0x2 (2 bytes)
//======================================================================
void SurviveGame::onBuddyWatchOWRes()
{
  ;
}


//======================================================================
// SurviveGame::onBuddyOfflineChat(tagOfflineChatDetail *)
// address: 0x002F38E4   size: 0x2 (2 bytes)
//======================================================================
void SurviveGame::onBuddyOfflineChat()
{
  ;
}


//======================================================================
// SurviveGame::load(ClientManager *)
// address: 0x002F38FC   size: 0xA (10 bytes)
//======================================================================
int __fastcall SurviveGame::load(int a1, int a2)
{
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 8) = a2;
  return 1;
}


//======================================================================
// SurviveGame::endGame(void)
// address: 0x002F3906   size: 0x16 (22 bytes)
//======================================================================
int __fastcall SurviveGame::endGame(SurviveGame *this)
{
  (*(void (__fastcall **)(SurviveGame *))(*(_DWORD *)this + 56))(this);
  return (*(int (__fastcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 9) + 12))(*((_DWORD *)this + 9), 0);
}


//======================================================================
// SurviveGame::onLoadChunk(tagChunkSaveDB *,tagPos *)
// address: 0x002F391C   size: 0xA0 (160 bytes)
//======================================================================
Ogre::Timer *__fastcall SurviveGame::onLoadChunk(int a1, int a2, int a3)
{
  Ogre::Timer *result; // r0
  __suseconds_t v6; // r1
  unsigned int v7; // r3
  World *v8; // r7
  Chunk *v9; // r5
  unsigned int v10; // r3
  Ogre::Timer *v11; // r0
  const char *v12; // r5
  int v13; // r4
  __suseconds_t v14; // r1
  int v15; // r0
  int SystemTick; // [sp+Ch] [bp-8h]

  result = (Ogre::Timer *)WorldManager::getWorld(*(WorldManager **)(a1 + 32), *(unsigned __int16 *)(a3 + 10));
  v8 = result;
  if ( result != nullptr )
  {
    if ( a2 != 0 )
    {
      SystemTick = Ogre::Timer::getSystemTick(result, v6);
      v9 = (Chunk *)operator new(0x59Cu);
      Chunk::Chunk(v9, v8, *(_DWORD *)a3, *(_DWORD *)(a3 + 4), nullptr);
      Chunk::loadFromBuffer((int)v9, a2);
      World::addChunk(v8, v9);
      World::populateChunk(v8, v9);
      v11 = (Ogre::Timer *)Ogre::LogSetCurParam(
                             (int)"D:/work/oworldsrc/client/iworld/ClientGameSurvive.cpp",
                             (const char *)&dword_AC + 2,
                             2,
                             v10);
      v12 = *(const char **)a3;
      v13 = *(_DWORD *)(a3 + 4);
      v15 = Ogre::Timer::getSystemTick(v11, v14);
      return (Ogre::Timer *)Ogre::LogMessage(
                              (Ogre *)"chunk loaded: x=%d, z=%d, dt=%d, datalen=%d/%d",
                              v12,
                              v13,
                              v15 - SystemTick,
                              *(_DWORD *)(a2 + 28),
                              *(_DWORD *)(a2 + 24));
    }
    else
    {
      Ogre::LogSetCurParam(
        (int)"D:/work/oworldsrc/client/iworld/ClientGameSurvive.cpp",
        (const char *)&dword_B0 + 2,
        8,
        v7);
      return (Ogre::Timer *)Ogre::LogMessage(
                              (Ogre *)"CSMgr cannot find chunk: %d, %d",
                              *(const char **)a3,
                              *(_DWORD *)(a3 + 4));
    }
  }
  return result;
}


//======================================================================
// SurviveGame::onLoadMonster(tagMonster *)
// address: 0x002F39E4   size: 0x1A (26 bytes)
//======================================================================
int __fastcall SurviveGame::onLoadMonster(int a1, int a2)
{
  ClientMob *v3; // r4

  v3 = (ClientMob *)operator new(0xE8u);
  ClientMob::ClientMob(v3);
  return ClientMob::init(v3, *(unsigned __int16 *)(a2 + 16));
}


//======================================================================
// SurviveGame::onLoadMinecart(tagMineCart *)
// address: 0x002F3A1C   size: 0xA (10 bytes)
//======================================================================
ActorMinecartEmpty *__fastcall SurviveGame::onLoadMinecart(int a1, int a2)
{
  return ActorMinecart::createByType(*(ActorMinecart **)(a2 + 64), a2);
}


//======================================================================
// SurviveGame::onLoadFurnace(tagFurnace *)
// address: 0x002F3A3C   size: 0x20 (32 bytes)
//======================================================================
WorldFurnace *SurviveGame::onLoadFurnace()
{
  WorldFurnace *v0; // r0
  _DWORD v2[4]; // [sp+4h] [bp-10h] BYREF

  memset(v2, 0, 12);
  v0 = (WorldFurnace *)operator new(0xD8u);
  return WorldFurnace::WorldFurnace(v0, (const WCoord *)v2);
}


//======================================================================
// SurviveGame::onLoadBox(tagBox *)
// address: 0x002F3A7C   size: 0x22 (34 bytes)
//======================================================================
WorldStorageBox *SurviveGame::onLoadBox()
{
  WorldStorageBox *v0; // r0
  _DWORD v2[4]; // [sp+4h] [bp-10h] BYREF

  memset(v2, 0, 12);
  v0 = (WorldStorageBox *)operator new(0x650u);
  return WorldStorageBox::WorldStorageBox(v0, (const WCoord *)v2);
}


//======================================================================
// SurviveGame::applayGameSetData(void)
// address: 0x002F3ABC   size: 0xE4 (228 bytes)
//======================================================================
__int64 __fastcall SurviveGame::applayGameSetData(SurviveGame *this)
{
  __int64 v2; // r0
  int v3; // r2
  int v4; // r0
  TouchControl *v5; // r7
  int v6; // r2
  int v7; // r0
  TouchControl *v8; // r7
  int v9; // r2
  int v10; // r0
  TouchControl *v11; // r5
  int v12; // r2
  int v13; // r0
  int v14; // r2
  int v15; // r2
  float v16; // r4
  TiXmlNode *Child; // [sp+8h] [bp-Ch] BYREF
  TiXmlNode *v19[2]; // [sp+Ch] [bp-8h] BYREF

  Ogre::Root::setSoundSystem((TiXmlNode **)Ogre::Singleton<Ogre::Root>::ms_Singleton);
  v19[0] = (TiXmlNode *)Ogre::XMLData::getRootNode((TiXmlNode **)Ogre::Singleton<Ogre::Root>::ms_Singleton);
  Child = (TiXmlNode *)Ogre::XMLNode::getChild(v19, "GameData");
  if ( Child != nullptr )
  {
    v19[0] = (TiXmlNode *)Ogre::XMLNode::getChild(&Child, "Settinig");
    if ( v19[0] != nullptr )
    {
      v4 = Ogre::XMLNode::attribToInt(v19, "view", v3);
      PlayerControl::setViewMode((PlayerControl *)g_pPlayerCtrl, v4 - 1);
      v5 = (TouchControl *)Ogre::Singleton<TouchControl>::ms_Singleton;
      v7 = Ogre::XMLNode::attribToInt(v19, "sensitivity", v6);
      TouchControl::setSensitivity(v5, v7);
      v8 = (TouchControl *)Ogre::Singleton<TouchControl>::ms_Singleton;
      v10 = Ogre::XMLNode::attribToInt(v19, "reversalY", v9);
      TouchControl::setReversalY(v8, v10);
      v11 = (TouchControl *)Ogre::Singleton<TouchControl>::ms_Singleton;
      v13 = Ogre::XMLNode::attribToInt(v19, "sight", v12);
      TouchControl::setSightModel(v11, v13);
      *(_DWORD *)(*((_DWORD *)this + 9) + 232) = 2 * Ogre::XMLNode::attribToInt(v19, "view_distance", v14);
      v16 = (float)Ogre::XMLNode::attribToInt(v19, "brightness", v15) / 100.0;
      if ( v16 != *(float *)&dword_517574 )
      {
        dword_517574 = LODWORD(v16);
        Ogre::SetScreenBrightness((Ogre *)LODWORD(v16), *((float *)&v2 + 1));
      }
    }
  }
  LODWORD(v2) = Ogre::Singleton<Ogre::Root>::ms_Singleton;
  return Ogre::Root::saveFile(v2, v3);
}


//======================================================================
// SurviveGame::updateLoad(void)
// address: 0x002F3BD4   size: 0x140 (320 bytes)
//======================================================================
bool __fastcall SurviveGame::updateLoad(SurviveGame *this)
{
  int v1; // r3
  EffectManager *v3; // r5
  int v4; // r3
  PlayerControl *v5; // r7
  int v6; // r3
  Ogre::ScriptVM *v7; // r5
  void *BackPack; // r0
  int v9; // r2
  ClientWorldManager *v10; // r7
  ClientMob *World; // r0
  GameEventQue *v12; // r0
  WorldDesc *v14; // [sp+Ch] [bp-8h]

  v1 = *((_DWORD *)this + 4);
  switch ( v1 )
  {
    case 0:
      v3 = (EffectManager *)operator new(0x1Cu);
      EffectManager::EffectManager(v3);
      v4 = *((_DWORD *)this + 2);
      *((_DWORD *)this + 10) = v3;
      *((_DWORD *)this + 11) = (*(int (__fastcall **)(_DWORD, const char *, int, _DWORD, _DWORD, int))(**(_DWORD **)(v4 + 12) + 72))(
                                 *(_DWORD *)(v4 + 12),
                                 "ui/cursor/fps.png",
                                 2,
                                 0,
                                 0,
                                 1);
LABEL_7:
      v9 = *((_DWORD *)this + 4) + 10;
LABEL_15:
      v12 = (GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton;
      *((_DWORD *)this + 4) = v9;
      goto LABEL_16;
    case 10:
      v5 = (PlayerControl *)operator new(0x150u);
      PlayerControl::PlayerControl(v5);
      *((_DWORD *)this + 9) = v5;
      *((_DWORD *)v5 + 58) = 2;
      v6 = *(unsigned __int8 *)(*(_DWORD *)(g_AccountMgr + 8) + 64);
      if ( *(_BYTE *)(*(_DWORD *)(g_AccountMgr + 8) + 64) == 0 )
        v6 = 1;
      (*(void (__fastcall **)(_DWORD, _DWORD, int, int))(**((_DWORD **)this + 9) + 196))(
        *((_DWORD *)this + 9),
        **(_DWORD **)(g_AccountMgr + 8),
        *(_DWORD *)(g_AccountMgr + 8) + 65,
        v6);
      GameCamera::setScreenSize(
        *(GameCamera **)(*((_DWORD *)this + 9) + 260),
        *(_DWORD *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 88),
        *(_DWORD *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 92));
      v7 = *(Ogre::ScriptVM **)(*((_DWORD *)this + 2) + 24);
      BackPack = (void *)ClientPlayer::getBackPack(*((ClientPlayer **)this + 9));
      Ogre::ScriptVM::setUserTypePointer(v7, "ClientBackpack", "BackPack", BackPack);
      Ogre::ScriptVM::setUserTypePointer(v7, "MainPlayerAttrib", "PlayerAttrib", *(void **)(*((_DWORD *)this + 9) + 76));
      Ogre::ScriptVM::setUserTypePointer(v7, "CurMainPlayer", "PlayerControl", *((void **)this + 9));
      goto LABEL_7;
    case 20:
      v14 = *(WorldDesc **)(g_AccountMgr + 40);
      v10 = (ClientWorldManager *)operator new(0x5Cu);
      ClientWorldManager::ClientWorldManager(v10, v14);
      *((_DWORD *)this + 8) = v10;
      World = (ClientMob *)CSMgr::loadWorld((CSMgr *)g_CSMgr, *(_DWORD *)v14);
      ClientMob::initBreedItem(World);
      v9 = *((_DWORD *)this + 4) + 1;
      goto LABEL_15;
    default:
      break;
  }
  v9 = v1 + 1;
  if ( v1 > 79 )
    goto LABEL_15;
  if ( v1 == 79 )
    *((_DWORD *)this + 4) = 79;
  else
    *((_DWORD *)this + 4) = v9;
  v12 = (GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton;
  v9 = *((_DWORD *)this + 4);
LABEL_16:
  GameEventQue::postLoadProgress(v12, 1000, v9);
  return *((_DWORD *)this + 4) > 99;
}


//======================================================================
// SurviveGame::update(float)
// address: 0x002F3D54   size: 0x16 (22 bytes)
//======================================================================
int __fastcall SurviveGame::update(__int64 this, int a2)
{
  __int64 v2; // kr00_8

  v2 = this;
  LODWORD(this) = *(_DWORD *)(this + 32);
  ClientWorldManager::update(this, a2);
  return EffectManager::update(*(EffectManager **)(v2 + 40), *((float *)&v2 + 1));
}


//======================================================================
// SurviveGame::renderUI(bool)
// address: 0x002F3D6C   size: 0xF0 (240 bytes)
//======================================================================
int __fastcall SurviveGame::renderUI(SurviveGame *this, int a2)
{
  int v3; // r4
  float v4; // r3
  int v5; // r0
  int result; // r0

  if ( a2 == 0 )
  {
    v3 = *(_DWORD *)(*((_DWORD *)this + 2) + 12);
    (*(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v3 + 96))(
      v3,
      *((_DWORD *)this + 11),
      0,
      0,
      0);
    v4 = (float)*(int *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 88) / 1280.0;
    if ( v4 >= (float)((float)*(int *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 92) / 720.0) )
      v4 = (float)*(int *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 92) / 720.0;
    v5 = (int)(float)(v4 * 32.0);
    (*(void (__fastcall **)(int, float, float, float, float, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v3 + 112))(
      v3,
      (float)((int)(float)((float)*(int *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 88)
                         * *(float *)(*(_DWORD *)(*((_DWORD *)this + 9) + 264) + 4))
            + v5 / -2),
      (float)((int)(float)((float)*(int *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 92)
                         * *(float *)(*(_DWORD *)(*((_DWORD *)this + 9) + 264) + 8))
            + v5 / -2),
      (float)v5,
      (float)v5,
      -1,
      0,
      0,
      0,
      0,
      0,
      0);
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 100))(v3);
  }
  result = ClientManager::isMobile(*((ClientManager **)this + 2));
  if ( result != 0 )
    return TouchControl::renderUI(*(TouchControl **)(*((_DWORD *)this + 9) + 328));
  return result;
}


//======================================================================
// SurviveGame::beginGame(void)
// address: 0x002F3E68   size: 0x2C (44 bytes)
//======================================================================
int __fastcall SurviveGame::beginGame(SurviveGame *this)
{
  if ( ClientActor::isDead(*((ClientActor **)this + 9)) != 0 )
    (*(void (__fastcall **)(_DWORD))(**((_DWORD **)this + 9) + 104))(*((_DWORD *)this + 9));
  return GameEventQue::postEnterWater(
           (GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton,
           *(_BYTE *)(*((_DWORD *)this + 9) + 296));
}


//======================================================================
// SurviveGame::pauseGame(void)
// address: 0x002F3E98   size: 0x2A (42 bytes)
//======================================================================
int __fastcall SurviveGame::pauseGame(SurviveGame *this)
{
  __int64 v2; // r0

  WorldManager::beginSaveTranction(*((_DWORD *)this + 8));
  ClientPlayer::storeRoleData(*((ClientPlayer **)this + 9));
  LODWORD(v2) = *((_DWORD *)this + 8);
  WorldManager::save(v2);
  WorldManager::endSaveTranction(*((_DWORD *)this + 8));
  return CSMgr::flushSave((CSMgr *)g_CSMgr);
}


//======================================================================
// SurviveGame::onGameEvent(GameEvent *)
// address: 0x002F3ED4   size: 0x44 (68 bytes)
//======================================================================
int __fastcall SurviveGame::onGameEvent(int result, _DWORD *a2)
{
  int v2; // r4
  int v3; // r3
  int v4; // r1
  int v5; // r5

  v2 = result;
  if ( *a2 == 1 )
  {
    v3 = a2[1];
    v4 = v3 - 8000;
    if ( (unsigned int)(v3 - 8000) <= 0x3E7 )
    {
      if ( v4 > 5 )
        return result;
      return ClientPlayer::applyEquips(*(_DWORD *)(v2 + 36), v4);
    }
    if ( v3 > 999 )
    {
      v5 = v3 - 1000;
      result = ClientPlayer::getCurShortcut(*(ClientPlayer **)(result + 36));
      if ( v5 == result )
      {
        (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(v2 + 36) + 204))(*(_DWORD *)(v2 + 36), v5);
        v4 = 5;
        return ClientPlayer::applyEquips(*(_DWORD *)(v2 + 36), v4);
      }
    }
  }
  return result;
}


//======================================================================
// SurviveGame::onInputEvent(Ogre::InputEvent const&)
// address: 0x002F3F64   size: 0x46 (70 bytes)
//======================================================================
int __fastcall SurviveGame::onInputEvent(PlayerControl **this, const InputEvent *a2)
{
  int result; // r0

  result = ClientGame::onInputEvent((ClientGame *)this, a2);
  if ( result != 0 )
  {
    if ( ClientManager::isMobile((ClientManager *)Ogre::Singleton<ClientManager>::ms_Singleton) != 0
      || *(this + 5) == nullptr )
    {
      return PlayerControl::onInputEvent(*(this + 9), a2);
    }
    else
    {
      result = 1;
      if ( a2->ie_proc == (XtInputCallbackProc)((char *)&dword_0 + 3) )
      {
        PlayerControl::throwItem((World **)*(this + 9), 7000, -1);
        return 0;
      }
    }
  }
  return result;
}


//======================================================================
// SurviveGame::tick(void)
// address: 0x002F40B4   size: 0x18A (394 bytes)
//======================================================================
int __fastcall SurviveGame::tick(__int64 this)
{
  int v1; // r5
  int result; // r0
  World *v3; // r7
  Chunk *PrecipitationHeight; // r0
  int v5; // r6
  float v6; // r4
  int *v7; // r0
  int *v8; // r4
  int v9; // r3
  int *v10; // r1
  MinimapRenderer *v11; // [sp+10h] [bp-4Ch]
  _DWORD v12[4]; // [sp+18h] [bp-44h] BYREF
  int v13[2]; // [sp+28h] [bp-34h] BYREF
  int v14; // [sp+30h] [bp-2Ch]
  _DWORD v15[3]; // [sp+34h] [bp-28h] BYREF
  _DWORD v16[3]; // [sp+40h] [bp-1Ch] BYREF
  int v17[4]; // [sp+4Ch] [bp-10h] BYREF

  v1 = this;
  LODWORD(this) = *(_DWORD *)(this + 32);
  WorldManager::tick(this);
  result = EffectManager::tick(*(EffectManager **)(v1 + 40));
  v11 = *(MinimapRenderer **)(Ogre::Singleton<ClientManager>::ms_Singleton + 20);
  if ( *((_BYTE *)v11 + 16) != 0 )
  {
    PlayerControl::getPosition(v17, *(_DWORD *)(v1 + 36));
    CoordDivBlock((const WCoord *)v13, v17);
    v3 = *(World **)(*(_DWORD *)(v1 + 36) + 52);
    PrecipitationHeight = World::getPrecipitationHeight(v3, v13[0], v14);
    v13[0] = 100 * v13[0] + 50;
    v14 = 100 * v14 + 50;
    v13[1] = 100 * (_DWORD)PrecipitationHeight + 50;
    MinimapRenderer::setCenter(v11, (int)v3, v13);
    v5 = *(_DWORD *)(*(_DWORD *)(v1 + 36) + 68);
    v6 = (float)(*(float *)(v5 + 8) + 70.0) * 0.5;
    if ( v6 < 15.0 )
    {
      v6 = 15.0;
    }
    else if ( v6 > 65.0 )
    {
      v6 = 65.0;
    }
    *((_DWORD *)v11 + 164) = *(_DWORD *)(v5 + 4);
    *((float *)v11 + 165) = v6;
    v7 = (int *)GameEventQue::allocEvent((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton);
    *v7 = 30;
    v8 = v7;
    MinimapRenderer::projectPointToScreen(v11, v7 + 1, v7 + 2, (const WCoord *)v13, v3);
    v9 = *(_DWORD *)(v1 + 36);
    if ( *(_WORD *)(v9 + 56) != 0 )
    {
      World::getPortalPoint(v17, *(_DWORD **)(v9 + 52));
      v10 = v17;
    }
    else
    {
      v10 = (int *)(*(_DWORD *)(v1 + 32) + 8);
    }
    BlockCenterCoord(v12, v10);
    qmemcpy(v15, v12, sizeof(v15));
    MinimapRenderer::projectPointToScreen(v11, v8 + 3, v8 + 4, (const WCoord *)v15, v3);
    if ( *(int *)(*(_DWORD *)(v1 + 36) + 320) < 0 )
      v8[5] = -1;
    else
      MinimapRenderer::projectPointToScreen(v11, v8 + 5, v8 + 6, (const WCoord *)(*(_DWORD *)(v1 + 36) + 308), v3);
    if ( (*(int (__fastcall **)(_DWORD *, _DWORD *))(**((_DWORD **)v3 + 31) + 40))(*((_DWORD **)v3 + 31), v16) != 0 )
    {
      BlockCenterCoord(v17, v16);
      MinimapRenderer::projectPointToScreen(v11, v8 + 7, v8 + 8, (const WCoord *)v17, v3);
    }
    else
    {
      v8[7] = -1;
    }
    return GameEventQue::pushEvent(Ogre::Singleton<GameEventQue>::ms_Singleton, v8);
  }
  return result;
}


//======================================================================
// SurviveGame::getDebugInfo(char *,int)
// address: 0x002F4254   size: 0x198 (408 bytes)
//======================================================================
int __fastcall SurviveGame::getDebugInfo(SurviveGame *this, char *a2, size_t a3)
{
  int v4; // r0
  Chunk *Chunk; // r0
  _DWORD *Biome; // r0
  const char *v7; // r5
  _DWORD *v8; // r6
  int v9; // r5
  int v10; // r5
  int BlockSunIllum; // r6
  int v12; // r3
  int BlockLightValue; // r0
  int v14; // r5
  int v15; // r4
  int v16; // r0
  int result; // r0
  World *v18; // [sp+2Ch] [bp-48h]
  float v19; // [sp+30h] [bp-44h]
  char *v20; // [sp+34h] [bp-40h]
  char *BlockLightByType; // [sp+34h] [bp-40h]
  _DWORD v24[3]; // [sp+4Ch] [bp-28h] BYREF
  unsigned int v25[7]; // [sp+58h] [bp-1Ch] BYREF

  j_memset(v25, 0, 0x18u);
  v4 = *((_DWORD *)this + 9);
  if ( v4 != 0 )
    PlayerControl::getClientStatus(v4, v25);
  v18 = *(World **)(*((_DWORD *)this + 9) + 52);
  v19 = COERCE_FLOAT(sub_2F3F24(*(_DWORD *)(*((_DWORD *)this + 8) + 56)));
  Chunk = (Chunk *)World::getChunk(v18, (const WCoord *)v25);
  if ( Chunk != nullptr )
  {
    Biome = (_DWORD *)Chunk::getBiome(Chunk, v25[0] - *((_DWORD *)Chunk + 69), v25[2] - *((_DWORD *)Chunk + 71));
    v7 = (const char *)(Biome + 1);
    v20 = (char *)*Biome;
  }
  else
  {
    v20 = nullptr;
    v7 = (const char *)&unk_3FB8EA;
  }
  v8 = *((_DWORD **)v18 + 60);
  v9 = j_snprintf(
         a2,
         a3,
         "POS:%d,%d,%d, VEL:%.2f,%.2f,%.2f, BIOME: %s(%d), ",
         v25[0],
         v25[1],
         v25[2],
         (float)(*(float *)&v25[3] / 5.0),
         (float)(*(float *)&v25[4] / 5.0),
         (float)(*(float *)&v25[5] / 5.0),
         v7,
         v20);
  v10 = v9
      + j_snprintf(
          &a2[v9],
          a3 - v9,
          "TIME:%d:%d, SECTION:%d/%d, OBJ:%d/%d, ",
          (int)v19,
          (int)(float)((float)(v19 - (float)(int)v19) * 60.0),
          v8[16],
          v8[14],
          v8[17],
          v8[15]);
  BlockSunIllum = World::getBlockSunIllum(v18, (const WCoord *)v25);
  BlockLightByType = (char *)World::getBlockLightByType(v18, 1, (const WCoord *)v25);
  BlockLightValue = World::getBlockLightValue(v18, (const WCoord *)v25, 1, v12);
  v14 = v10 + j_snprintf(&a2[v10], a3 - v10, "Light:%d/%d/%d, ", BlockSunIllum, BlockLightByType, BlockLightValue);
  v15 = j_snprintf(
          &a2[v14],
          a3 - v14,
          "Contexts: %d/%d",
          *(_DWORD *)(Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton + 20),
          *(_DWORD *)(Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton + 24));
  v16 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 9) + 52) + 124);
  result = (*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v16 + 40))(v16, v24);
  if ( result != 0 )
    return j_snprintf(&a2[v14 + v15], a3 - (v14 + v15), "\nBOSS: %d,%d,%d ", v24[0], v24[1], v24[2]);
  return result;
}


//======================================================================
// SurviveGame::SurviveGame(void)
// address: 0x002F4410   size: 0x72 (114 bytes)
//======================================================================
// Alternative name is '_ZN11SurviveGameC1Ev'
void __fastcall SurviveGame::SurviveGame(SurviveGame *this)
{
  _DWORD *v1; // r5
  int v2; // r3

  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *(_DWORD *)this = &off_4624A8;
  *((_DWORD *)this + 1) = &off_46252C;
  *((_DWORD *)this + 5) = 0;
  *((_BYTE *)this + 24) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  v1 = (_DWORD *)operator new(0x2Cu);
  Ogre::EntityMotionData::EntityMotionData(v1);
  IMPLEMENT_RTTI_pdata = (int)v1;
  v2 = v1[1] - 1;
  v1[1] = v2;
  if ( v2 <= 0 )
    (*(void (__fastcall **)(_DWORD *))(*v1 + 24))(v1);
}


//======================================================================
// SurviveGame::setOperateUI(bool)
// address: 0x002F4494   size: 0x70 (112 bytes)
//======================================================================
float __fastcall SurviveGame::setOperateUI(SurviveGame *this, int a2)
{
  int v3; // r3
  int v4; // r3
  World **v5; // r0

  v3 = *((_DWORD *)this + 5);
  if ( a2 != 0 )
  {
    v4 = v3 + 1;
  }
  else
  {
    v4 = v3 - 1;
    if ( v4 < 0 )
    {
      *((_DWORD *)this + 5) = 0;
      goto LABEL_6;
    }
  }
  *((_DWORD *)this + 5) = v4;
LABEL_6:
  GameUI::ShowCursor(*(GameUI **)(Ogre::Singleton<ClientManager>::ms_Singleton + 28), 1);
  if ( ClientManager::isMobile((ClientManager *)Ogre::Singleton<ClientManager>::ms_Singleton) == 0 )
  {
    Ogre::InputManager::lockFPSMouse(
      (Ogre::InputManager *)Ogre::Singleton<Ogre::InputManager>::ms_Singleton,
      *((_DWORD *)this + 5) == 0);
    if ( *((_DWORD *)this + 5) == 0 )
      GameUI::ShowCursor(*(GameUI **)(Ogre::Singleton<ClientManager>::ms_Singleton + 28), 0);
  }
  v5 = *((World ***)this + 9);
  if ( *((_DWORD *)this + 5) != 0 )
    return COERCE_FLOAT(BlockOperateMgr::endOperate(v5[66]));
  else
    return PlayerControl::throwItem(v5, 7000, -1);
}


//======================================================================
// SurviveGame::isOperateUI(void)
// address: 0x002F4510   size: 0xA (10 bytes)
//======================================================================
unsigned int __fastcall SurviveGame::isOperateUI(SurviveGame *this)
{
  return (unsigned int)((*((int *)this + 5) >> 31) - *((_DWORD *)this + 5)) >> 31;
}


//======================================================================
// SurviveGame::setCurToolID(int)
// address: 0x002F451A   size: 0xE (14 bytes)
//======================================================================
int __fastcall SurviveGame::setCurToolID(SurviveGame *this, int a2)
{
  return BlockOperateMgr::setOperateTool(*(BlockOperateMgr **)(*((_DWORD *)this + 9) + 264), a2);
}


//======================================================================
// SurviveGame::getMainPlayer(void)
// address: 0x002F4528   size: 0x4 (4 bytes)
//======================================================================
int __fastcall SurviveGame::getMainPlayer(SurviveGame *this)
{
  return *((_DWORD *)this + 9);
}


//======================================================================
// SurviveGame::enableMinimap(bool)
// address: 0x002F452C   size: 0x16 (22 bytes)
//======================================================================
int __fastcall SurviveGame::enableMinimap(SurviveGame *this, bool a2)
{
  int v2; // r3
  int result; // r0

  v2 = Ogre::Singleton<ClientManager>::ms_Singleton;
  result = *(_DWORD *)(Ogre::Singleton<ClientManager>::ms_Singleton + 16);
  *(_BYTE *)(result + 16) = !a2;
  *(_BYTE *)(*(_DWORD *)(v2 + 20) + 16) = a2;
  return result;
}


//======================================================================
// SurviveGame::unload(void)
// address: 0x002F4548   size: 0x4E (78 bytes)
//======================================================================
SurviveGame *__fastcall SurviveGame::unload(SurviveGame *this)
{
  SurviveGame *v1; // r4
  void *v2; // r5

  v1 = this;
  if ( *((_DWORD *)this + 2) != 0 )
  {
    SurviveGame::enableMinimap(this, false);
    ClientActor::release(*((ClientActor **)v1 + 9));
    v2 = *((void **)v1 + 10);
    if ( v2 != nullptr )
    {
      EffectManager::~EffectManager(*((EffectManager **)v1 + 10));
      operator delete(v2);
    }
    this = *((SurviveGame **)v1 + 8);
    if ( this != nullptr )
    {
      this = (SurviveGame *)(*(int (__fastcall **)(SurviveGame *))(*(_DWORD *)this + 4))(this);
      *((_DWORD *)v1 + 8) = 0;
    }
    if ( *((_DWORD *)v1 + 11) != 0 )
      this = (SurviveGame *)(*(int (__fastcall **)(_DWORD))(**(_DWORD **)(*((_DWORD *)v1 + 2) + 12) + 92))(*(_DWORD *)(*((_DWORD *)v1 + 2) + 12));
    *((_DWORD *)v1 + 2) = 0;
  }
  return this;
}


//======================================================================
// SurviveGame::~SurviveGame()
// address: 0x002F4598   size: 0x2C (44 bytes)
//======================================================================
// Alternative name is '_ZN11SurviveGameD1Ev'
void __fastcall SurviveGame::~SurviveGame(SurviveGame *this)
{
  *(_DWORD *)this = &off_4624A8;
  *((_DWORD *)this + 1) = &off_46252C;
  SurviveGame::unload(this);
  *(_DWORD *)this = &off_461270;
  *((_DWORD *)this + 1) = &off_4612B8;
}


//======================================================================
// SurviveGame::~SurviveGame()
// address: 0x002F45CC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall SurviveGame::~SurviveGame(SurviveGame *this)
{
  SurviveGame::~SurviveGame(this);
  operator delete(this);
}


//======================================================================
// SurviveGame::getGameTimeHour(void)
// address: 0x002F45DE   size: 0x10 (16 bytes)
//======================================================================
int __fastcall SurviveGame::getGameTimeHour(SurviveGame *this)
{
  return (int)COERCE_FLOAT(sub_2F3F24(*(_DWORD *)(*((_DWORD *)this + 8) + 56)));
}


//======================================================================
// SurviveGame::getGameTimeMinute(void)
// address: 0x002F45F0   size: 0x28 (40 bytes)
//======================================================================
int __fastcall SurviveGame::getGameTimeMinute(SurviveGame *this)
{
  float v1; // r0

  v1 = COERCE_FLOAT(sub_2F3F24(*(_DWORD *)(*((_DWORD *)this + 8) + 56)));
  return (int)(float)((float)(v1 - (float)(int)v1) * 60.0);
}


//======================================================================
// SurviveGame::roleInit(void)
// address: 0x002F461C   size: 0x7C (124 bytes)
//======================================================================
int __fastcall SurviveGame::roleInit(WorldManager **this)
{
  _BOOL4 isCreativeMode; // r3
  ClientPlayer *v3; // r0
  BackPack *BackPack; // r0
  BackPack *v5; // r0
  BackPack *v6; // r0
  BackPack *v7; // r0
  BackPack *v8; // r0
  BackPack *v9; // r0
  int v10; // r1

  isCreativeMode = WorldManager::isCreativeMode(*(this + 8));
  v3 = *(this + 9);
  if ( isCreativeMode )
  {
    BackPack = (BackPack *)ClientPlayer::getBackPack(v3);
    BackPack::addItem(BackPack, 104, 1, 1);
    v5 = (BackPack *)ClientPlayer::getBackPack(*(this + 9));
    BackPack::addItem(v5, 505, 1, 1);
    v6 = (BackPack *)ClientPlayer::getBackPack(*(this + 9));
    BackPack::addItem(v6, 101, 1, 1);
    v7 = (BackPack *)ClientPlayer::getBackPack(*(this + 9));
    BackPack::addItem(v7, 206, 1, 1);
    v8 = (BackPack *)ClientPlayer::getBackPack(*(this + 9));
    BackPack::addItem(v8, 207, 1, 1);
    v9 = (BackPack *)ClientPlayer::getBackPack(*(this + 9));
    v10 = 106;
  }
  else
  {
    v9 = (BackPack *)ClientPlayer::getBackPack(v3);
    v10 = 1001;
  }
  return BackPack::addItem(v9, v10, 1, 1);
}


//======================================================================
// SurviveGame::roleLogin(tagOWGlobal *,tagRoleData *,tagAchievementList *)
// address: 0x002F469C   size: 0x10C (268 bytes)
//======================================================================
float __fastcall SurviveGame::roleLogin(int a1, int *a2, int a3, _DWORD *a4)
{
  int WorldDesc; // r7
  WorldManager *v8; // r0
  World *World; // r5
  unsigned int v10; // r6
  unsigned int v11; // r0
  SurviveGame *v12; // r0
  int v13; // r1
  WorldManager *v15; // [sp+4h] [bp-20h]
  int v17[4]; // [sp+14h] [bp-10h] BYREF

  WorldDesc = ClientAccountMgr::findWorldDesc((ClientAccountMgr *)g_AccountMgr, *a2);
  v8 = *(WorldManager **)(a1 + 32);
  if ( *(_DWORD *)(a3 + 13556) != 0 )
  {
    WorldManager::loadGlobal(v8, a2);
    ClientPlayer::reStoreRoleData(*(_DWORD *)(a1 + 36), a3);
    World = (World *)WorldManager::createWorld(
                       *(WorldManager **)(a1 + 32),
                       *(unsigned __int16 *)(*(_DWORD *)(a1 + 36) + 56));
  }
  else
  {
    World = (World *)WorldManager::createWorld(v8, 0);
    v15 = *(WorldManager **)(a1 + 32);
    if ( WorldDesc == 0 || *(_DWORD *)(WorldDesc + 16) == *(_DWORD *)(WorldDesc + 12) )
    {
      World::createSpawnPoint((World *)v17, (int)World);
      WorldManager::setSpawnPoint(v15, v17);
      *(_DWORD *)(*(_DWORD *)(a1 + 32) + 56) = 1000;
    }
    else
    {
      WorldManager::loadGlobal(v15, a2);
    }
    ClientPlayer::gotoSpawnPoint(*(ClientPlayer **)(a1 + 36), World);
    SurviveGame::roleInit((WorldManager **)a1);
  }
  PlayerControl::getPosition(v17, *(_DWORD *)(a1 + 36));
  v10 = CoordDivSection(v17[0]);
  v11 = CoordDivSection(v17[2]);
  World::syncLoadChunk((ChunkProvider **)World, v10, v11);
  (*(void (__fastcall **)(_DWORD, World *))(**(_DWORD **)(a1 + 36) + 8))(*(_DWORD *)(a1 + 36), World);
  GameEventQue::postBackpackChange((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton, -1);
  if ( g_AchievementMgr != 0 )
    AchievementManager::loadAchievementList(g_AchievementMgr, a4);
  Ogre::ScriptVM::setUserTypePointer(
    *(Ogre::ScriptVM **)(*(_DWORD *)(a1 + 8) + 24),
    "ClientCurGame",
    "SurviveGame",
    (void *)a1);
  if ( Ogre::InputManager::isFocus((Ogre::InputManager *)Ogre::Singleton<Ogre::InputManager>::ms_Singleton) != 0 )
  {
    v12 = (SurviveGame *)a1;
    v13 = 0;
  }
  else
  {
    v12 = (SurviveGame *)a1;
    v13 = 1;
  }
  return SurviveGame::setOperateUI(v12, v13);
}


//======================================================================
// SurviveGame::onLoadWorldProp(int,tagOWGlobal *,tagRoleData *,tagAchievementList *)
// address: 0x002F47C4   size: 0x4A (74 bytes)
//======================================================================
float __fastcall SurviveGame::onLoadWorldProp(int a1, int a2, const char **a3, unsigned int a4, _DWORD *a5)
{
  const char *v8; // r1
  float result; // r0

  if ( a2 == 1 )
  {
    Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/ClientGameSurvive.cpp", (const char *)&dword_8C, 8, a4);
    return COERCE_FLOAT(Ogre::LogMessage((Ogre *)"onLoadWorldProp failed", v8));
  }
  else
  {
    Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/ClientGameSurvive.cpp", (const char *)&dword_90, 2, a4);
    Ogre::LogMessage((Ogre *)"onLoadWorldProp; owid=%d", *a3);
    result = SurviveGame::roleLogin(a1, (int *)a3, a4, a5);
    *(_DWORD *)(a1 + 16) = 80;
  }
  return result;
}


//======================================================================
// SurviveGame::onOWMsg(tagOWMsg *)
// address: 0x002F4834   size: 0x2 (2 bytes)
//======================================================================
void SurviveGame::onOWMsg()
{
  ;
}


//======================================================================
// SurviveGame::onRedStoneCtrl(tagOWMsgRedStone *)
// address: 0x002F4836   size: 0x2 (2 bytes)
//======================================================================
void SurviveGame::onRedStoneCtrl()
{
  ;
}


//======================================================================
// SurviveGame::onOWMsgCltActBroadCast(tagOWMsgCltActBroadcast *)
// address: 0x002F4838   size: 0x2 (2 bytes)
//======================================================================
void SurviveGame::onOWMsgCltActBroadCast()
{
  ;
}


//======================================================================
// SurviveGame::onBoxOpenRes(tagOWMsgBoxOpenRes *)
// address: 0x002F483A   size: 0x2 (2 bytes)
//======================================================================
void SurviveGame::onBoxOpenRes()
{
  ;
}


//======================================================================
// SurviveGame::onOtherPlayerLogin(tagRoleData *)
// address: 0x002F483C   size: 0x2 (2 bytes)
//======================================================================
void SurviveGame::onOtherPlayerLogin()
{
  ;
}


//======================================================================
// SurviveGame::onOtherPlayerLogout(int)
// address: 0x002F483E   size: 0x2 (2 bytes)
//======================================================================
void __fastcall SurviveGame::onOtherPlayerLogout(SurviveGame *this, int a2)
{
  ;
}


//======================================================================
// SurviveGame::onNewMonster(tagMonster *)
// address: 0x002F4840   size: 0x2 (2 bytes)
//======================================================================
void SurviveGame::onNewMonster()
{
  ;
}


//======================================================================
// SurviveGame::onNewDropItem(tagDropItem &,tagCVector &)
// address: 0x002F4842   size: 0x2 (2 bytes)
//======================================================================
void SurviveGame::onNewDropItem()
{
  ;
}


//======================================================================
// SurviveGame::onNewBox(tagBoxView &)
// address: 0x002F4844   size: 0x2 (2 bytes)
//======================================================================
void SurviveGame::onNewBox()
{
  ;
}


//======================================================================
// SurviveGame::onNewObject(tagNewObj *)
// address: 0x002F4846   size: 0x2A (42 bytes)
//======================================================================
void __fastcall SurviveGame::onNewObject(int a1, int a2)
{
  int v2; // r3

  v2 = *(unsigned __int8 *)(a2 + 17);
  if ( *(_BYTE *)(a2 + 17) != 0 )
  {
    if ( v2 == 1 )
    {
      SurviveGame::onNewBox();
    }
    else if ( v2 == 2 )
    {
      SurviveGame::onNewDropItem();
    }
  }
  else
  {
    SurviveGame::onNewMonster();
  }
}


//======================================================================
// SurviveGame::onDeleteObject(tagDelObj *,bool)
// address: 0x002F4870   size: 0x2 (2 bytes)
//======================================================================
void SurviveGame::onDeleteObject()
{
  ;
}


//======================================================================
// SurviveGame::onObjectPosChange(tagObjPosChg *)
// address: 0x002F4872   size: 0x2 (2 bytes)
//======================================================================
void SurviveGame::onObjectPosChange()
{
  ;
}


//======================================================================
// SurviveGame::onObjectDirChange(tagObjDirChg *)
// address: 0x002F4874   size: 0x2 (2 bytes)
//======================================================================
void SurviveGame::onObjectDirChange()
{
  ;
}


//======================================================================
// SurviveGame::onBackpackChange(int,tagRolePakChg *)
// address: 0x002F4876   size: 0x2 (2 bytes)
//======================================================================
void SurviveGame::onBackpackChange()
{
  ;
}


//======================================================================
// SurviveGame::onSetHandTool(int,int)
// address: 0x002F4878   size: 0x2 (2 bytes)
//======================================================================
void __fastcall SurviveGame::onSetHandTool(SurviveGame *this, int a2, int a3)
{
  ;
}


//======================================================================
// SurviveGame::onPlayerDoBlock(int,tagRoleDoBlock *)
// address: 0x002F487A   size: 0x2 (2 bytes)
//======================================================================
void SurviveGame::onPlayerDoBlock()
{
  ;
}


//======================================================================
// SurviveGame::onObjectAttrChange(tagObjAttrChg *)
// address: 0x002F487C   size: 0x2 (2 bytes)
//======================================================================
void SurviveGame::onObjectAttrChange()
{
  ;
}


//======================================================================
// SurviveGame::onActorDoAction(tagObjAct *)
// address: 0x002F487E   size: 0x2 (2 bytes)
//======================================================================
void SurviveGame::onActorDoAction()
{
  ;
}


//======================================================================
// SurviveGame::onPlayerDoAttack(int,tagRoleAtk *)
// address: 0x002F4880   size: 0x2 (2 bytes)
//======================================================================
void SurviveGame::onPlayerDoAttack()
{
  ;
}


//======================================================================
// SurviveGame::onPlayerDoHit(int,tagRoleHit *)
// address: 0x002F4882   size: 0x2 (2 bytes)
//======================================================================
void SurviveGame::onPlayerDoHit()
{
  ;
}


//======================================================================
// SurviveGame::onMonsterPathMove(tagObjPosPath *)
// address: 0x002F4884   size: 0x2 (2 bytes)
//======================================================================
void SurviveGame::onMonsterPathMove()
{
  ;
}


//======================================================================
// SurviveGame::onObjectEnterView(tagOWMsgObjEnterView *)
// address: 0x002F4886   size: 0x34 (52 bytes)
//======================================================================
void __fastcall SurviveGame::onObjectEnterView(int a1, _BYTE *a2)
{
  int v2; // r3

  v2 = (unsigned __int8)*a2;
  if ( *a2 != 0 )
  {
    if ( v2 == 1 )
    {
      SurviveGame::onNewBox();
    }
    else if ( v2 == 2 )
    {
      SurviveGame::onNewDropItem();
    }
  }
  else
  {
    SurviveGame::onNewMonster();
  }
}


//======================================================================
// SurviveGame::onObjectLeaveView(tagOWMsgObjLeaveView *)
// address: 0x002F48BA   size: 0x2 (2 bytes)
//======================================================================
void SurviveGame::onObjectLeaveView()
{
  ;
}


//======================================================================
// SurviveGame::onChatMsg(tagOWMsgChat *)
// address: 0x002F48BC   size: 0x2 (2 bytes)
//======================================================================
void SurviveGame::onChatMsg()
{
  ;
}


//======================================================================
// SurviveGame::onWorldPermNotify(tagOWMsgPermNotify *)
// address: 0x002F48BE   size: 0x2 (2 bytes)
//======================================================================
void SurviveGame::onWorldPermNotify()
{
  ;
}


//======================================================================
// SurviveGame::onOWMsgGetOtherRole(tagOWMsgGetOtherRes *)
// address: 0x002F48C0   size: 0x2 (2 bytes)
//======================================================================
void SurviveGame::onOWMsgGetOtherRole()
{
  ;
}


//======================================================================
// SurviveGame::onTamed(tagTamed *)
// address: 0x002F48C2   size: 0x2 (2 bytes)
//======================================================================
void SurviveGame::onTamed()
{
  ;
}


//======================================================================
// SurviveGame::checkAlreadyLogins(void)
// address: 0x002F48C4   size: 0x2 (2 bytes)
//======================================================================
void __fastcall SurviveGame::checkAlreadyLogins(SurviveGame *this)
{
  ;
}


//======================================================================
// SurviveGame::sendChat(char const*)
// address: 0x002F5668   size: 0x24 (36 bytes)
//======================================================================
int __fastcall SurviveGame::sendChat(SurviveGame *this, const char *a2)
{
  if ( *a2 == 47 )
    return SurviveGame::parseCmd(this, a2 + 1);
  else
    return GameEventQue::postChatEvent((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton, 0, nullptr, a2);
}

