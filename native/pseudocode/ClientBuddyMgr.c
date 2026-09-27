// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ClientBuddyMgr

//======================================================================
// ClientBuddyMgr::releaseSelectRole(void)
// address: 0x002D20C4   size: 0x26 (38 bytes)
//======================================================================
void __fastcall ClientBuddyMgr::releaseSelectRole(ClientBuddyMgr *this)
{
  int i; // r4
  void *v3; // r5

  for ( i = 0; i != 40; i += 4 )
  {
    v3 = *(void **)((char *)this + i + 56);
    if ( v3 != nullptr )
    {
      ActorBody::~ActorBody(*(ActorBody **)((char *)this + i + 56));
      operator delete(v3);
      *(_DWORD *)((char *)this + i + 56) = 0;
    }
  }
}


//======================================================================
// ClientBuddyMgr::update(float)
// address: 0x002D20EA   size: 0x1E (30 bytes)
//======================================================================
ActorBody *__fastcall ClientBuddyMgr::update(ClientBuddyMgr *this, float a2)
{
  int i; // r4
  ActorBody *result; // r0

  for ( i = 0; i != 40; i += 4 )
  {
    result = *(ActorBody **)((char *)this + i + 56);
    if ( result != nullptr )
      result = (ActorBody *)ActorBody::update(result, a2);
  }
  return result;
}


//======================================================================
// ClientBuddyMgr::addBuddy(int,char const*,int,int)
// address: 0x002D2108   size: 0x2 (2 bytes)
//======================================================================
void __fastcall ClientBuddyMgr::addBuddy(ClientBuddyMgr *this, int a2, const char *a3, int a4, int a5)
{
  ;
}


//======================================================================
// ClientBuddyMgr::delBuddy(int)
// address: 0x002D210A   size: 0x2 (2 bytes)
//======================================================================
void __fastcall ClientBuddyMgr::delBuddy(ClientBuddyMgr *this, int a2)
{
  ;
}


//======================================================================
// ClientBuddyMgr::sortBuddies(void)
// address: 0x002D210C   size: 0x2 (2 bytes)
//======================================================================
void __fastcall ClientBuddyMgr::sortBuddies(ClientBuddyMgr *this)
{
  ;
}


//======================================================================
// ClientBuddyMgr::setBuddyOnline(int,bool,int)
// address: 0x002D210E   size: 0x2 (2 bytes)
//======================================================================
void __fastcall ClientBuddyMgr::setBuddyOnline(ClientBuddyMgr *this, int a2, bool a3, int a4)
{
  ;
}


//======================================================================
// ClientBuddyMgr::setBuddyFlags(int,int)
// address: 0x002D2110   size: 0x2 (2 bytes)
//======================================================================
void __fastcall ClientBuddyMgr::setBuddyFlags(ClientBuddyMgr *this, int a2, int a3)
{
  ;
}


//======================================================================
// ClientBuddyMgr::findBuddy(int)
// address: 0x002D2112   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientBuddyMgr::findBuddy(ClientBuddyMgr *this, int a2)
{
  return 0;
}


//======================================================================
// ClientBuddyMgr::requestAddBuddy(char const*)
// address: 0x002D2116   size: 0x2 (2 bytes)
//======================================================================
void __fastcall ClientBuddyMgr::requestAddBuddy(ClientBuddyMgr *this, const char *a2)
{
  ;
}


//======================================================================
// ClientBuddyMgr::answerAddBuddy(int,char const*,bool)
// address: 0x002D2118   size: 0x2 (2 bytes)
//======================================================================
void __fastcall ClientBuddyMgr::answerAddBuddy(ClientBuddyMgr *this, int a2, const char *a3, bool a4)
{
  ;
}


//======================================================================
// ClientBuddyMgr::requestDelBuddy(int)
// address: 0x002D211A   size: 0x2 (2 bytes)
//======================================================================
void __fastcall ClientBuddyMgr::requestDelBuddy(ClientBuddyMgr *this, int a2)
{
  ;
}


//======================================================================
// ClientBuddyMgr::requestBuddyChg(int,int)
// address: 0x002D211C   size: 0x2 (2 bytes)
//======================================================================
void __fastcall ClientBuddyMgr::requestBuddyChg(ClientBuddyMgr *this, int a2, int a3)
{
  ;
}


//======================================================================
// ClientBuddyMgr::getNumCloseBuddy(void)
// address: 0x002D211E   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientBuddyMgr::getNumCloseBuddy(ClientBuddyMgr *this)
{
  return *((_DWORD *)this + 7);
}


//======================================================================
// ClientBuddyMgr::getCloseBuddy(int)
// address: 0x002D2122   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientBuddyMgr::getCloseBuddy(ClientBuddyMgr *this, int a2)
{
  return 0;
}


//======================================================================
// ClientBuddyMgr::getNumNormalBuddy(void)
// address: 0x002D2126   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientBuddyMgr::getNumNormalBuddy(ClientBuddyMgr *this)
{
  return 0;
}


//======================================================================
// ClientBuddyMgr::getNormalBuddy(int)
// address: 0x002D212A   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientBuddyMgr::getNormalBuddy(ClientBuddyMgr *this, int a2)
{
  return 0;
}


//======================================================================
// ClientBuddyMgr::getCreditNumToday(void)
// address: 0x002D2130   size: 0x26 (38 bytes)
//======================================================================
TiXmlNode *__fastcall ClientBuddyMgr::getCreditNumToday(ClientBuddyMgr *this, int a2, TiXmlElement *a3)
{
  TiXmlNode *result; // r0
  int v4; // r2
  TiXmlElement *v5[2]; // [sp+4h] [bp-8h] BYREF

  v5[1] = a3;
  result = Ogre::XMLData::getNodeByPath((TiXmlNode **)Ogre::Singleton<Ogre::Root>::ms_Singleton, "GameData.Buddy", 1);
  v5[0] = result;
  if ( result != nullptr )
    return (TiXmlNode *)Ogre::XMLNode::attribToInt(v5, "creditnum", v4);
  return result;
}


//======================================================================
// ClientBuddyMgr::memoOWorld(int,char const*)
// address: 0x002D2164   size: 0x10 (16 bytes)
//======================================================================
int __fastcall ClientBuddyMgr::memoOWorld(ClientBuddyMgr *this, int a2, char *a3)
{
  return CSMgr::memoOWorld((CSMgr *)g_CSMgr, a2, a3);
}


//======================================================================
// ClientBuddyMgr::getChatMsgNum(void)
// address: 0x002D2178   size: 0xE (14 bytes)
//======================================================================
int __fastcall ClientBuddyMgr::getChatMsgNum(ClientBuddyMgr *this)
{
  return -1431655765 * ((*((_DWORD *)this + 2) - *((_DWORD *)this + 1)) >> 2);
}


//======================================================================
// ClientBuddyMgr::getChatMsg(int)
// address: 0x002D218C   size: 0x20 (32 bytes)
//======================================================================
ClientBuddyMgr *__fastcall ClientBuddyMgr::getChatMsg(ClientBuddyMgr *this, int a2, int a3)
{
  _DWORD *v4; // r1

  v4 = (_DWORD *)(*(_DWORD *)(a2 + 4) + 12 * a3);
  *(_DWORD *)this = *v4;
  *((_DWORD *)this + 1) = v4[1];
  sub_3BEB1C((char *)this + 8, v4 + 2);
  return this;
}


//======================================================================
// ClientBuddyMgr::getChatMsgNumForUin(int)
// address: 0x002D21AC   size: 0x2C (44 bytes)
//======================================================================
int __fastcall ClientBuddyMgr::getChatMsgNumForUin(ClientBuddyMgr *this, int a2)
{
  int v2; // r2
  int v3; // r4
  int v4; // r3
  int result; // r0
  int v6; // r6

  v2 = *((_DWORD *)this + 1);
  v3 = -1431655765 * ((*((_DWORD *)this + 2) - v2) >> 2);
  v4 = 0;
  result = 0;
  while ( v4 != v3 )
  {
    v6 = *(_DWORD *)(v2 + 12 * v4++);
    result += v6 == a2;
  }
  return result;
}


//======================================================================
// ClientBuddyMgr::getChatNoReadMsgNumForUin(int)
// address: 0x002D21DC   size: 0x2A (42 bytes)
//======================================================================
int __fastcall ClientBuddyMgr::getChatNoReadMsgNumForUin(ClientBuddyMgr *this, int a2)
{
  int v2; // r3
  int v3; // r2
  int v4; // r0
  int v5; // r4

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v4 = (*((_DWORD *)this + 5) - v2) >> 3;
  while ( v3 != v4 )
  {
    v5 = v2;
    v2 += 8;
    if ( *(_DWORD *)(v2 - 8) == a2 )
      return *(_DWORD *)(v5 + 4);
    ++v3;
  }
  return 0;
}


//======================================================================
// ClientBuddyMgr::clearCurChatBuddyNoReadNum(int)
// address: 0x002D2206   size: 0x24 (36 bytes)
//======================================================================
int __fastcall ClientBuddyMgr::clearCurChatBuddyNoReadNum(int this, int a2)
{
  unsigned int i; // r3
  int v3; // r2
  _DWORD *v4; // r2

  for ( i = 0; ; ++i )
  {
    v3 = *(_DWORD *)(this + 16);
    if ( i >= (*(_DWORD *)(this + 20) - v3) >> 3 )
      break;
    v4 = (_DWORD *)(v3 + 8 * i);
    if ( *v4 == a2 )
      v4[1] = 0;
  }
  return this;
}


//======================================================================
// ClientBuddyMgr::BuddyFind(void)
// address: 0x002D2230   size: 0x18 (24 bytes)
//======================================================================
int __fastcall ClientBuddyMgr::BuddyFind(ClientBuddyMgr *this)
{
  return CSMgr::buddyFind((CSMgr *)g_CSMgr, 0.0, 0.0);
}


//======================================================================
// ClientBuddyMgr::getBuddyFindNum(void)
// address: 0x002D2258   size: 0xA (10 bytes)
//======================================================================
int __fastcall ClientBuddyMgr::getBuddyFindNum(ClientBuddyMgr *this)
{
  return (*((_DWORD *)this + 12) - *((_DWORD *)this + 11)) >> 3;
}


//======================================================================
// ClientBuddyMgr::getBuddyFindInfo(int)
// address: 0x002D2262   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall ClientBuddyMgr::getBuddyFindInfo(_DWORD *this, int a2, int a3)
{
  int v3; // r3
  int v4; // r2
  int v5; // r1
  int v6; // r2

  v3 = *(_DWORD *)(a2 + 44);
  v4 = 8 * a3;
  v5 = *(_DWORD *)(v4 + v3);
  v6 = *(_DWORD *)(v3 + v4 + 4);
  *this = v5;
  *(this + 1) = v6;
  return this;
}


//======================================================================
// ClientBuddyMgr::getSelectRole(int)
// address: 0x002D2274   size: 0x6C (108 bytes)
//======================================================================
int __fastcall ClientBuddyMgr::getSelectRole(ClientBuddyMgr *this, int a2)
{
  char *v2; // r4
  ActorBody *v4; // r5
  char s[256]; // [sp+14h] [bp-108h] BYREF

  v2 = (char *)this + 4 * a2;
  if ( *((_DWORD *)v2 + 14) == 0 )
  {
    v4 = (ActorBody *)operator new(0x6Cu);
    ActorBody::ActorBody(v4, nullptr);
    *((_DWORD *)v2 + 14) = v4;
    j_sprintf(s, "%d", a2 + 200000);
    ActorBody::initMonster(*((Ogre::Model ***)v2 + 14), s, 1.0, 0, nullptr, nullptr);
  }
  return *((_DWORD *)v2 + 14);
}


//======================================================================
// ClientBuddyMgr::buddyAttention(int)
// address: 0x002D22EC   size: 0x10 (16 bytes)
//======================================================================
int __fastcall ClientBuddyMgr::buddyAttention(ClientBuddyMgr *this, int a2)
{
  return CSMgr::buddyAttention((CSMgr *)g_CSMgr, a2);
}


//======================================================================
// ClientBuddyMgr::buddyWatch(int)
// address: 0x002D2300   size: 0x10 (16 bytes)
//======================================================================
int __fastcall ClientBuddyMgr::buddyWatch(ClientBuddyMgr *this, int a2)
{
  return CSMgr::buddyWatch((CSMgr *)g_CSMgr, a2);
}


//======================================================================
// ClientBuddyMgr::buddyAttentionDel(int)
// address: 0x002D2314   size: 0x10 (16 bytes)
//======================================================================
int __fastcall ClientBuddyMgr::buddyAttentionDel(ClientBuddyMgr *this, int a2)
{
  return CSMgr::buddyAttentionDel((CSMgr *)g_CSMgr, a2);
}


//======================================================================
// ClientBuddyMgr::getBuddyOffLineChat(void)
// address: 0x002D2328   size: 0x10 (16 bytes)
//======================================================================
int __fastcall ClientBuddyMgr::getBuddyOffLineChat(ClientBuddyMgr *this)
{
  return CSMgr::getBuddyOffLineChat((CSMgr *)g_CSMgr);
}


//======================================================================
// ClientBuddyMgr::getWatchBuddyInfo(void)
// address: 0x002D233C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientBuddyMgr::getWatchBuddyInfo(ClientBuddyMgr *this)
{
  return *(_DWORD *)this;
}


//======================================================================
// ClientBuddyMgr::sendPrivateChat(int,char const*)
// address: 0x002D2438   size: 0x26 (38 bytes)
//======================================================================
BuddyInfo *__fastcall ClientBuddyMgr::sendPrivateChat(ClientBuddyMgr *this, int a2, char *a3)
{
  BuddyInfo *result; // r0

  result = (BuddyInfo *)ClientBuddyMgr::findBuddy(this, a2);
  if ( result != nullptr )
  {
    BuddyInfo::addChatInfo(result, false, a3);
    return (BuddyInfo *)GameEventQue::postBuddyChat((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton, a2);
  }
  return result;
}


//======================================================================
// ClientBuddyMgr::addBuddyChatMsg(int,int,std::string)
// address: 0x002D26DC   size: 0x2E (46 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> ClientBuddyMgr::addBuddyChatMsg(int a1, int a2, int a3)
{
  _DWORD v4[2]; // [sp+4h] [bp-Ch] BYREF
  char *v5; // [sp+Ch] [bp-4h] BYREF

  v5 = &byte_55FB88;
  v4[1] = a3;
  sub_3BEBBC(&v5);
  std::vector<BuddyChatMsg>::push_back((int *)(a1 + 4), v4);
  sub_3BDF80(&v5);
}


//======================================================================
// ClientBuddyMgr::addCredit(int,int)
// address: 0x002D279C   size: 0xBC (188 bytes)
//======================================================================
int __fastcall ClientBuddyMgr::addCredit(ClientBuddyMgr *this, int a2, int a3)
{
  int v6; // r2
  int v7; // r6
  int result; // r0
  char *v9; // r3
  char *v10; // r2
  int v11; // r1
  int v12; // r12
  char *v13; // r2
  int WatchBuddyInfo; // r0
  __int64 v15; // r0
  int v16; // r2
  TiXmlElement *NodeByPath; // [sp+Ch] [bp-10h] BYREF
  int v18; // [sp+10h] [bp-Ch] BYREF
  int v19; // [sp+14h] [bp-8h]

  NodeByPath = Ogre::XMLData::getNodeByPath(
                 (TiXmlNode **)Ogre::Singleton<Ogre::Root>::ms_Singleton,
                 "GameData.Buddy",
                 1);
  if ( NodeByPath != nullptr )
  {
    v7 = Ogre::XMLNode::attribToInt(&NodeByPath, "creditnum", v6);
    result = 2;
    if ( v7 > 2 )
      return result;
  }
  else
  {
    v7 = 0;
  }
  v9 = *((char **)this + 9);
  v10 = *((char **)this + 8);
  v11 = 0;
  v12 = (v9 - v10) >> 3;
  while ( v11 != v12 )
  {
    if ( *(_DWORD *)v10 == a2 && *((_DWORD *)v10 + 1) == a3 )
      return 1;
    ++v11;
    v10 += 8;
  }
  v13 = *((char **)this + 10);
  v18 = a2;
  v19 = a3;
  if ( v9 == v13 )
  {
    std::vector<AlreadyCreditInfo>::_M_emplace_back_aux<AlreadyCreditInfo const&>((int)this + 32, &v18);
  }
  else
  {
    if ( v9 != nullptr )
    {
      *(_DWORD *)v9 = a2;
      *((_DWORD *)v9 + 1) = v19;
    }
    *((_DWORD *)this + 9) += 8;
  }
  CSMgr::addCredit((CSMgr *)g_CSMgr, a2, a3);
  WatchBuddyInfo = ClientBuddyMgr::getWatchBuddyInfo(this);
  BuddyInfo::addCredit(WatchBuddyInfo);
  Ogre::XMLNode::setAttribInt(&NodeByPath, "creditnum", v7 + 1);
  LODWORD(v15) = Ogre::Singleton<Ogre::Root>::ms_Singleton;
  Ogre::Root::saveFile(v15, v16);
  return 0;
}


//======================================================================
// ClientBuddyMgr::onBuddyFind(tagBuddyFindRes *)
// address: 0x002D28F0   size: 0x54 (84 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> ClientBuddyMgr::onBuddyFind(_DWORD *a1, _DWORD *a2, int a3)
{
  _DWORD *v5; // r5
  int i; // r6
  int v7; // r3
  _DWORD *v8; // r3
  int v9; // [sp+0h] [bp-Ch] BYREF
  int v10; // [sp+4h] [bp-8h]
  int v11; // [sp+8h] [bp-4h]

  v11 = a3;
  a1[12] = a1[11];
  v5 = a2;
  for ( i = 0; i < *a2; ++i )
  {
    v9 = v5[2];
    v7 = *((unsigned __int8 *)v5 + 16);
    if ( (unsigned int)(v7 - 1) > 9 )
      v7 = 1;
    v10 = v7;
    v8 = (_DWORD *)a1[12];
    if ( v8 == (_DWORD *)a1[13] )
    {
      std::vector<NearbyPlayerInfo>::_M_emplace_back_aux<NearbyPlayerInfo const&>((int)(a1 + 11), &v9);
    }
    else
    {
      if ( v8 != nullptr )
      {
        *v8 = v9;
        v8[1] = v10;
      }
      a1[12] += 8;
    }
    v5 += 18;
  }
}


//======================================================================
// ClientBuddyMgr::~ClientBuddyMgr()
// address: 0x002D29CE   size: 0x5E (94 bytes)
//======================================================================
// Alternative name is '_ZN14ClientBuddyMgrD1Ev'
void __fastcall ClientBuddyMgr::~ClientBuddyMgr(ClientBuddyMgr *this)
{
  BuddyInfo *v1; // r5
  int i; // r5
  void *v4; // r6
  void *v5; // r0
  void *v6; // r0
  void *v7; // r0

  v1 = *(BuddyInfo **)this;
  if ( *(_DWORD *)this != 0 )
  {
    BuddyInfo::~BuddyInfo(*(BuddyInfo **)this);
    operator delete(v1);
  }
  for ( i = 0; i != 40; i += 4 )
  {
    v4 = *(void **)((char *)this + i + 56);
    if ( v4 != nullptr )
    {
      ActorBody::~ActorBody(*(ActorBody **)((char *)this + i + 56));
      operator delete(v4);
      *(_DWORD *)((char *)this + i + 56) = 0;
    }
  }
  v5 = *((void **)this + 11);
  if ( v5 != nullptr )
    operator delete(v5);
  v6 = *((void **)this + 8);
  if ( v6 != nullptr )
    operator delete(v6);
  v7 = *((void **)this + 4);
  if ( v7 != nullptr )
    operator delete(v7);
  std::vector<BuddyChatMsg>::~vector((void **)this + 1);
}


//======================================================================
// ClientBuddyMgr::ClientBuddyMgr(void)
// address: 0x002D2AA4   size: 0xFA (250 bytes)
//======================================================================
// Alternative name is '_ZN14ClientBuddyMgrC1Ev'
void __fastcall ClientBuddyMgr::ClientBuddyMgr(ClientBuddyMgr *this)
{
  int i; // r5
  int v3; // r1
  BuddyInfo *v4; // r5
  char s[256]; // [sp+14h] [bp-108h] BYREF

  g_BuddyMgr = (int)this;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  ClientBuddyMgr::addBuddy(this, 123, "132fb", 0, 1);
  ClientBuddyMgr::addBuddy(this, 124, "bb2", 1, 2);
  ClientBuddyMgr::addBuddy(this, 125, "bb3", 1, 3);
  for ( i = 0; i != 10; ++i )
  {
    j_sprintf(s, "player%d", i);
    v3 = j_lrand48() % 10;
    ClientBuddyMgr::addBuddy(this, i + 130, s, 0, v3 + 1);
  }
  v4 = (BuddyInfo *)operator new(0x5Cu);
  BuddyInfo::BuddyInfo(v4);
  *(_DWORD *)this = v4;
  j_memset((char *)this + 56, 0, 0x28u);
}


//======================================================================
// ClientBuddyMgr::clearNoReadMsgForUin(int)
// address: 0x002D2E32   size: 0x30 (48 bytes)
//======================================================================
void *__fastcall ClientBuddyMgr::clearNoReadMsgForUin(ClientBuddyMgr *this, void *a2)
{
  void **v3; // r3
  void *result; // r0
  int v5; // r1
  void **v6; // r2

  v3 = *((void ***)this + 4);
  result = a2;
  v5 = *((_DWORD *)this + 5);
  while ( 1 )
  {
    v6 = v3;
    if ( v3 == (void **)v5 )
      break;
    v3 += 2;
    if ( *(v3 - 2) == result )
    {
      result = v6 + 2;
      if ( v6 + 2 != (void **)v5 )
        result = (void *)std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<NoReadBuddyMsg>(
                           result,
                           v5,
                           v6);
      *((_DWORD *)this + 5) -= 8;
      return result;
    }
  }
  return result;
}


//======================================================================
// ClientBuddyMgr::setBuddyChatMsg(tagOfflineChatDetail *)
// address: 0x002D2EDC   size: 0xBE (190 bytes)
//======================================================================
int __fastcall ClientBuddyMgr::setBuddyChatMsg(int result, int a2)
{
  int *v2; // r4
  char *v3; // r5
  char *v4; // r6
  int v5; // r0
  int v6; // r3
  unsigned int v7; // r2
  int v8; // r1
  _DWORD *v9; // r3
  int v10; // r0
  _DWORD *v11; // r3
  int v12; // r2
  _DWORD *v13; // r7
  int i; // [sp+0h] [bp-24h]
  int v16; // [sp+Ch] [bp-18h] BYREF
  int v17; // [sp+10h] [bp-14h]
  _DWORD v18[2]; // [sp+14h] [bp-10h] BYREF
  _DWORD v19[2]; // [sp+1Ch] [bp-8h] BYREF

  v2 = (int *)result;
  v3 = (char *)(a2 + 72);
  for ( i = 0; i < *(unsigned __int16 *)(a2 + 4); ++i )
  {
    v4 = v3 - 56;
    v5 = *((_DWORD *)v3 - 14);
    v19[0] = &byte_55FB88;
    v6 = *((_DWORD *)v3 - 15);
    v18[0] = v5;
    v18[1] = v6;
    sub_3BE508((int)v19, v3);
    std::vector<BuddyChatMsg>::push_back(v2 + 1, v18);
    v7 = 0;
    v8 = 1;
    while ( 1 )
    {
      v9 = (_DWORD *)v2[5];
      v10 = v2[4];
      if ( v7 >= ((int)v9 - v10) >> 3 )
        break;
      v11 = (_DWORD *)(v10 + 8 * v7);
      if ( *v11 == *(_DWORD *)v4 )
      {
        ++v11[1];
        v8 = 0;
      }
      ++v7;
    }
    if ( v8 != 0 )
    {
      v12 = *(_DWORD *)v4;
      v13 = (_DWORD *)v2[6];
      v16 = *(_DWORD *)v4;
      v17 = 1;
      if ( v9 == v13 )
      {
        std::vector<NoReadBuddyMsg>::_M_emplace_back_aux<NoReadBuddyMsg const&>((int)(v2 + 4), &v16);
      }
      else
      {
        if ( v9 != nullptr )
        {
          *v9 = v12;
          v9[1] = v17;
        }
        v2[5] += 8;
      }
    }
    sub_3BDF80(v19);
    result = 576;
    v3 += 576;
  }
  return result;
}

