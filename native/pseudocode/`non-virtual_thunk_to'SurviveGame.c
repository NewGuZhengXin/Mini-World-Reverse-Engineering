// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: `non-virtual_thunk_to'SurviveGame

//======================================================================
// `non-virtual thunk to'SurviveGame::onLoadRoleData(int,tagRoleData *)
// address: 0x002F3828   size: 0x10 (16 bytes)
//======================================================================
void `non-virtual thunk to'SurviveGame::onLoadRoleData()
{
  SurviveGame::onLoadRoleData();
}


//======================================================================
// `non-virtual thunk to'SurviveGame::onLoadItem(tagDropItem *)
// address: 0x002F3840   size: 0x10 (16 bytes)
//======================================================================
void `non-virtual thunk to'SurviveGame::onLoadItem()
{
  SurviveGame::onLoadItem();
}


//======================================================================
// `non-virtual thunk to'SurviveGame::onBuddyAttention(int,tagBuddyInfo *)
// address: 0x002F3858   size: 0x10 (16 bytes)
//======================================================================
void `non-virtual thunk to'SurviveGame::onBuddyAttention()
{
  SurviveGame::onBuddyAttention();
}


//======================================================================
// `non-virtual thunk to'SurviveGame::onBuddyFind(int,tagBuddyFindRes *)
// address: 0x002F3870   size: 0x10 (16 bytes)
//======================================================================
void `non-virtual thunk to'SurviveGame::onBuddyFind()
{
  SurviveGame::onBuddyFind();
}


//======================================================================
// `non-virtual thunk to'SurviveGame::onOWWatch(int,tagOWWatchRes *)
// address: 0x002F3888   size: 0x10 (16 bytes)
//======================================================================
void `non-virtual thunk to'SurviveGame::onOWWatch()
{
  SurviveGame::onOWWatch();
}


//======================================================================
// `non-virtual thunk to'SurviveGame::onOWWatchAttention(int,tagOWWatchRes *)
// address: 0x002F38A0   size: 0x10 (16 bytes)
//======================================================================
void `non-virtual thunk to'SurviveGame::onOWWatchAttention()
{
  SurviveGame::onOWWatchAttention();
}


//======================================================================
// `non-virtual thunk to'SurviveGame::onBuddyWatchAccountRes(int,tagAccountWatch *)
// address: 0x002F38B8   size: 0x10 (16 bytes)
//======================================================================
void `non-virtual thunk to'SurviveGame::onBuddyWatchAccountRes()
{
  SurviveGame::onBuddyWatchAccountRes();
}


//======================================================================
// `non-virtual thunk to'SurviveGame::onBuddyWatchOWRes(int,tagWatchOWRes *)
// address: 0x002F38D0   size: 0x10 (16 bytes)
//======================================================================
void `non-virtual thunk to'SurviveGame::onBuddyWatchOWRes()
{
  SurviveGame::onBuddyWatchOWRes();
}


//======================================================================
// `non-virtual thunk to'SurviveGame::onBuddyOfflineChat(tagOfflineChatDetail *)
// address: 0x002F38E8   size: 0x10 (16 bytes)
//======================================================================
void `non-virtual thunk to'SurviveGame::onBuddyOfflineChat()
{
  SurviveGame::onBuddyOfflineChat();
}


//======================================================================
// `non-virtual thunk to'SurviveGame::onLoadChunk(tagChunkSaveDB *,tagPos *)
// address: 0x002F39D0   size: 0x10 (16 bytes)
//======================================================================
Ogre::Timer *__fastcall `non-virtual thunk to'SurviveGame::onLoadChunk(int a1, int a2, int a3)
{
  return SurviveGame::onLoadChunk(a1 - 4, a2, a3);
}


//======================================================================
// `non-virtual thunk to'SurviveGame::onLoadMonster(tagMonster *)
// address: 0x002F3A08   size: 0x10 (16 bytes)
//======================================================================
int __fastcall `non-virtual thunk to'SurviveGame::onLoadMonster(int a1, int a2)
{
  return SurviveGame::onLoadMonster(a1 - 4, a2);
}


//======================================================================
// `non-virtual thunk to'SurviveGame::onLoadMinecart(tagMineCart *)
// address: 0x002F3A28   size: 0x10 (16 bytes)
//======================================================================
ActorMinecartEmpty *__fastcall `non-virtual thunk to'SurviveGame::onLoadMinecart(int a1, int a2)
{
  return SurviveGame::onLoadMinecart(a1 - 4, a2);
}


//======================================================================
// `non-virtual thunk to'SurviveGame::onLoadFurnace(tagFurnace *)
// address: 0x002F3A68   size: 0x10 (16 bytes)
//======================================================================
WorldFurnace *`non-virtual thunk to'SurviveGame::onLoadFurnace()
{
  return SurviveGame::onLoadFurnace();
}


//======================================================================
// `non-virtual thunk to'SurviveGame::onLoadBox(tagBox *)
// address: 0x002F3AA8   size: 0x10 (16 bytes)
//======================================================================
WorldStorageBox *`non-virtual thunk to'SurviveGame::onLoadBox()
{
  return SurviveGame::onLoadBox();
}


//======================================================================
// `non-virtual thunk to'SurviveGame::onLoadWorldProp(int,tagOWGlobal *,tagRoleData *,tagAchievementList *)
// address: 0x002F4820   size: 0x10 (16 bytes)
//======================================================================
float __fastcall `non-virtual thunk to'SurviveGame::onLoadWorldProp(
        int a1,
        int a2,
        const char **a3,
        unsigned int a4,
        _DWORD *a5)
{
  return SurviveGame::onLoadWorldProp(a1 - 4, a2, a3, a4, a5);
}

