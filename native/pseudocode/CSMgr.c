// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: CSMgr

//======================================================================
// CSMgr::CSMgr(ClientManager *)
// address: 0x00304CB8   size: 0xEE (238 bytes)
//======================================================================
// Alternative name is '_ZN5CSMgrC2EP13ClientManager'
void __fastcall CSMgr::CSMgr(CSMgr *this, ClientManager *a2)
{
  CSMgr *v3; // r3

  *(_DWORD *)this = &off_463478;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = &byte_55FB88;
  *((_DWORD *)this + 5) = &byte_55FB88;
  *((_DWORD *)this + 7) = &byte_55FB88;
  v3 = (CSMgr *)((char *)this + 44);
  do
  {
    *(_DWORD *)v3 = &byte_55FB88;
    v3 = (CSMgr *)((char *)v3 + 4);
  }
  while ( v3 != (CSMgr *)((char *)this + 300) );
  *((_DWORD *)this + 139) = &byte_55FB88;
  *((_DWORD *)this + 141) = &byte_55FB88;
  *((_DWORD *)this + 143) = 0;
  *((_DWORD *)this + 144) = 0;
  *((_DWORD *)this + 145) = 0;
  *((_DWORD *)this + 146) = 0;
  *((_DWORD *)this + 147) = 0;
  *((_DWORD *)this + 161) = &byte_55FB88;
  *((_DWORD *)this + 10116) = 0;
  *((_DWORD *)this + 10117) = 0;
  *((_DWORD *)this + 10118) = 0;
  *((_DWORD *)this + 10119) = 0;
  *((_DWORD *)this + 10120) = 0;
  *((_DWORD *)this + 10121) = 0;
  *((_DWORD *)this + 10122) = 0;
  *((_DWORD *)this + 10123) = 0;
  *((_DWORD *)this + 10124) = 0;
  *((_DWORD *)this + 10125) = 0;
  *((_DWORD *)this + 10126) = 0;
  *((_DWORD *)this + 10127) = 0;
  j_memset((char *)this + 40516, 0, 0x10u);
  *((_DWORD *)this + 10133) = 0;
  *((_DWORD *)this + 10131) = (char *)this + 40516;
  *((_DWORD *)this + 10132) = (char *)this + 40516;
  *((_DWORD *)this + 10134) = a2;
  *((_DWORD *)this + 180) = 0;
  j_memset((char *)this + 20328, 0, 0x1698u);
  j_memset((char *)this + 26112, 0, 0x3810u);
  *((_BYTE *)this + 592) = 0;
  *((_BYTE *)this + 652) = 0;
}


//======================================================================
// CSMgr::setPWorldOW(char *)
// address: 0x00304DF8   size: 0x10 (16 bytes)
//======================================================================
char *__fastcall CSMgr::setPWorldOW(CSMgr *this, char *a2)
{
  return j_strncpy((char *)this + 652, a2, 0x40u);
}


//======================================================================
// CSMgr::release(void)
// address: 0x00304E08   size: 0x7A (122 bytes)
//======================================================================
Ogre::OSThread *__fastcall CSMgr::release(CSMgr *this)
{
  Ogre::OSThread *result; // r0
  Ogre::OSThread *v3; // r5
  int v4; // r2
  int v5; // r2
  int v6; // r2

  result = (Ogre::OSThread *)j_time(nullptr);
  v3 = result;
  v4 = *((_DWORD *)this + 10125);
  if ( v4 != 0 )
  {
    *(_DWORD *)(v4 + 28) = result;
    result = *((Ogre::OSThread **)this + 10125);
    Ogre::OSThread::shutdown(result);
  }
  v5 = *((_DWORD *)this + 10127);
  if ( v5 != 0 )
  {
    *(_DWORD *)(v5 + 28) = v3;
    result = *((Ogre::OSThread **)this + 10127);
    Ogre::OSThread::shutdown(result);
  }
  v6 = *((_DWORD *)this + 10126);
  if ( v6 != 0 )
  {
    *(_DWORD *)(v6 + 28) = v3;
    result = *((Ogre::OSThread **)this + 10126);
    Ogre::OSThread::shutdown(result);
  }
  if ( *((_DWORD *)this + 144) != 0 )
    result = (Ogre::OSThread *)cs_msg_han_destroy((char *)this + 576);
  if ( *((_DWORD *)this + 145) != 0 )
    result = (Ogre::OSThread *)cs_msg_han_destroy((char *)this + 580);
  if ( *((_DWORD *)this + 143) != 0 )
    return (Ogre::OSThread *)meta_han_destroy((char *)this + 572);
  return result;
}


//======================================================================
// CSMgr::getSvrTime(tagCSTime &)
// address: 0x00304E90   size: 0x64 (100 bytes)
//======================================================================
__int64 __fastcall CSMgr::getSvrTime(int a1, _DWORD *a2)
{
  __int64 v4; // r4
  int v5; // r6
  __int64 result; // r0
  int v7; // r2
  struct timeval tv; // [sp+8h] [bp-Ch] BYREF

  j_gettimeofday(&tv, nullptr);
  v4 = *(_QWORD *)(a1 + 584);
  v5 = tv.tv_sec + v4 / 1000;
  result = v4 / 1000;
  v7 = 1000 * (v4 % 1000) + tv.tv_usec;
  if ( v7 <= 999999 )
  {
    if ( v7 < 0 )
    {
      --v5;
      v7 += 1000000;
    }
  }
  else
  {
    ++v5;
    v7 -= 1000000;
  }
  *a2 = v5;
  a2[1] = v7;
  return result;
}


//======================================================================
// CSMgr::loadServerList(char const*)
// address: 0x00304F10   size: 0x1EA (490 bytes)
//======================================================================
int __fastcall CSMgr::loadServerList(CSMgr *this, char *a2)
{
  size_t v3; // r0
  char *v4; // r0
  char *v5; // r0
  int v6; // r2
  char *v7; // r0
  int v8; // r2
  int v9; // r7
  char *v10; // r0
  int v11; // r2
  char *v12; // r0
  int v13; // r2
  char *v14; // r0
  int v15; // r7
  int v16; // r2
  TiXmlElement *v17; // r0
  int v18; // r3
  char *DecryptFileBuffer; // [sp+4h] [bp-28h]
  int Buffer; // [sp+Ch] [bp-20h]
  TiXmlNode *v22; // [sp+10h] [bp-1Ch] BYREF
  TiXmlNode *RootNode; // [sp+14h] [bp-18h] BYREF
  TiXmlNode *Child; // [sp+18h] [bp-14h] BYREF
  TiXmlElement *v25; // [sp+1Ch] [bp-10h] BYREF
  struct timeval tv; // [sp+20h] [bp-Ch] BYREF

  DecryptFileBuffer = getDecryptFileBuffer(a2, 0);
  if ( DecryptFileBuffer == nullptr )
    return 0;
  Ogre::XMLData::XMLData(&v22);
  v3 = j_strlen(DecryptFileBuffer);
  Buffer = Ogre::XMLData::loadBuffer((Ogre::XMLData *)&v22, (int)DecryptFileBuffer, v3);
  if ( Buffer == 0 )
    goto LABEL_4;
  RootNode = (TiXmlNode *)Ogre::XMLData::getRootNode(&v22);
  Child = (TiXmlNode *)Ogre::XMLNode::getChild(&RootNode, "VersionXml");
  if ( Child == nullptr )
    goto LABEL_4;
  v4 = (char *)Ogre::XMLNode::attribToString(&Child, "url");
  sub_3BE508((int)this + 16, v4);
  Child = (TiXmlNode *)Ogre::XMLNode::getChild(&RootNode, "VerServer");
  if ( Child == nullptr )
    goto LABEL_4;
  v5 = (char *)Ogre::XMLNode::attribToString(&Child, "url");
  sub_3BE508((int)this + 20, v5);
  *((_DWORD *)this + 6) = Ogre::XMLNode::attribToInt(&Child, "port", v6);
  Child = (TiXmlNode *)Ogre::XMLNode::getChild(&RootNode, "AccountServer");
  if ( Child == nullptr )
    goto LABEL_4;
  v7 = (char *)Ogre::XMLNode::attribToString(&Child, "url");
  sub_3BE508((int)this + 28, v7);
  *((_DWORD *)this + 8) = Ogre::XMLNode::attribToInt(&Child, "port", v8);
  Child = (TiXmlNode *)Ogre::XMLNode::getChild(&RootNode, "OnlineServer");
  if ( Child == nullptr )
    goto LABEL_4;
  *((_DWORD *)this + 9) = 0;
  v25 = nullptr;
  v25 = (TiXmlElement *)Ogre::XMLNode::iterateChild(&Child, nullptr);
  while ( 1 )
  {
    v9 = *((_DWORD *)this + 9);
    if ( v25 == nullptr || v9 > 63 )
      break;
    v14 = (char *)Ogre::XMLNode::attribToString(&v25, "url");
    sub_3BE508((int)this + 4 * v9 + 44, v14);
    v15 = *((_DWORD *)this + 9);
    *((_DWORD *)this + v15 + 75) = Ogre::XMLNode::attribToInt(&v25, "port", v16);
    v17 = (TiXmlElement *)Ogre::XMLNode::iterateChild(&Child, v25);
    v18 = *((_DWORD *)this + 9);
    v25 = v17;
    *((_DWORD *)this + 9) = v18 + 1;
  }
  if ( v9 > 0
    && (Child = (TiXmlNode *)Ogre::XMLNode::getChild(&RootNode, "Http")) != nullptr
    && (v10 = (char *)Ogre::XMLNode::attribToString(&Child, "url"),
        sub_3BE508((int)this + 556, v10),
        *((_DWORD *)this + 140) = Ogre::XMLNode::attribToInt(&Child, "port", v11),
        (Child = (TiXmlNode *)Ogre::XMLNode::getChild(&RootNode, "ShareSvr")) != nullptr) )
  {
    v12 = (char *)Ogre::XMLNode::attribToString(&Child, "url");
    sub_3BE508((int)this + 564, v12);
    *((_DWORD *)this + 142) = Ogre::XMLNode::attribToInt(&Child, "port", v13);
    j_gettimeofday(&tv, nullptr);
    *((_DWORD *)this + 10) = tv.tv_usec % *((_DWORD *)this + 9);
    operator delete[](DecryptFileBuffer);
  }
  else
  {
LABEL_4:
    Buffer = 0;
  }
  Ogre::XMLData::~XMLData((Ogre::XMLData *)&v22);
  return Buffer;
}


//======================================================================
// CSMgr::recvOnlineCSMsg(tagCSPkg *,int)
// address: 0x00305140   size: 0xE (14 bytes)
//======================================================================
int __fastcall CSMgr::recvOnlineCSMsg(int a1)
{
  return cs_msg_recv_withpdu(*(_DWORD *)(a1 + 580));
}


//======================================================================
// CSMgr::loginOnline(void)
// address: 0x00305150   size: 0x8E (142 bytes)
//======================================================================
int __fastcall CSMgr::loginOnline(CSMgr *this)
{
  int v2; // r6
  int result; // r0
  char s[128]; // [sp+Ch] [bp-88h] BYREF

  j_snprintf(
    s,
    0x80u,
    "%s:%d",
    *((const char **)this + *((_DWORD *)this + 10) + 11),
    *((_DWORD *)this + *((_DWORD *)this + 10) + 75));
  v2 = cs_login(*((_DWORD *)this + 145), (int)s, *((char **)this + 161));
  if ( v2 == 0 )
    *(_BYTE *)(g_AccountMgr + 4) = 1;
  if ( CSMgr::recvOnlineCSMsg((int)this) != 1 )
    return -1;
  result = v2;
  if ( g_stPkg != 11 )
    return -1;
  return result;
}


//======================================================================
// CSMgr::sendOnlineCSMsg(tagCSPkg *)
// address: 0x003051F4   size: 0x1C (28 bytes)
//======================================================================
int __fastcall CSMgr::sendOnlineCSMsg(int a1)
{
  int v2; // r4

  v2 = cs_msg_send(*(_DWORD *)(a1 + 580));
  if ( v2 < 0 )
    sub_304BB4(a1);
  return v2;
}


//======================================================================
// CSMgr::logoutOnline(void)
// address: 0x00305210   size: 0x38 (56 bytes)
//======================================================================
int __fastcall CSMgr::logoutOnline(CSMgr *this)
{
  if ( *(_BYTE *)(g_AccountMgr + 4) != 0 )
  {
    g_stPkg = 46;
    byte_517EC8 = 0;
    CSMgr::sendOnlineCSMsg((int)this);
    cs_msg_set_url(*((_DWORD *)this + 145), nullptr);
    *(_BYTE *)(g_AccountMgr + 4) = 0;
  }
  return 0;
}


//======================================================================
// CSMgr::loadWorldPop(int &,int &)
// address: 0x00305250   size: 0x10 (16 bytes)
//======================================================================
int __fastcall CSMgr::loadWorldPop(CSMgr *this, int *a2, int *a3)
{
  int v3; // r3

  *a2 = *((_DWORD *)this + 10120);
  v3 = *((_DWORD *)this + 10121);
  *a3 = v3;
  return 1;
}


//======================================================================
// CSMgr::abortLoadWorld(void)
// address: 0x00305268   size: 0x8 (8 bytes)
//======================================================================
int __fastcall CSMgr::abortLoadWorld(int this)
{
  *(_DWORD *)(this + 40488) = 1;
  return this;
}


//======================================================================
// CSMgr::doTranctionBegin(int)
// address: 0x00305274   size: 0x2 (2 bytes)
//======================================================================
void __fastcall CSMgr::doTranctionBegin(CSMgr *this, int a2)
{
  ;
}


//======================================================================
// CSMgr::doTranctionCommit(int)
// address: 0x00305276   size: 0x2 (2 bytes)
//======================================================================
void __fastcall CSMgr::doTranctionCommit(CSMgr *this, int a2)
{
  ;
}


//======================================================================
// CSMgr::delContainerData(WorldContainer *)
// address: 0x00305278   size: 0x1A (26 bytes)
//======================================================================
int __fastcall CSMgr::delContainerData(CSMgr *this, WorldContainer *a2)
{
  int v2; // r4
  int result; // r0

  v2 = *((unsigned __int8 *)this + 652);
  result = 1;
  if ( v2 == 0 )
  {
    (*(void (__fastcall **)(WorldContainer *))(*(_DWORD *)a2 + 28))(a2);
    return 0;
  }
  return result;
}


//======================================================================
// CSMgr::saveContainerData(WorldContainer *)
// address: 0x00305292   size: 0x26 (38 bytes)
//======================================================================
bool __fastcall CSMgr::saveContainerData(CSMgr *this, WorldContainer *a2)
{
  int v2; // r4
  _BOOL4 result; // r0
  int v4; // r0

  v2 = *((unsigned __int8 *)this + 652);
  result = true;
  if ( v2 == 0 )
  {
    v4 = (*(int (__fastcall **)(WorldContainer *))(*(_DWORD *)a2 + 28))(a2);
    return v4 == 1 || v4 == 7;
  }
  return result;
}


//======================================================================
// CSMgr::createContainerData(WorldContainer *)
// address: 0x003052B8   size: 0x8 (8 bytes)
//======================================================================
bool __fastcall CSMgr::createContainerData(CSMgr *this, WorldContainer *a2)
{
  return CSMgr::saveContainerData(this, a2);
}


//======================================================================
// CSMgr::pauseOpenWorld(int)
// address: 0x003052C0   size: 0x58 (88 bytes)
//======================================================================
__int64 __fastcall CSMgr::pauseOpenWorld(__int64 this, int a2)
{
  int i; // r3
  int v4; // r2
  __int64 v6; // [sp+0h] [bp-Ch] BYREF
  int v7; // [sp+8h] [bp-4h]

  v6 = this;
  v7 = a2;
  if ( *(_DWORD *)(this + 40496) == 1 )
  {
    HIDWORD(v6) = &g_Locker1;
    Ogre::LockSection::Lock((pthread_mutex_t *)&g_Locker1);
    for ( i = 0; i < *(_DWORD *)(this + 720); ++i )
    {
      v4 = this + 784 * i;
      if ( *(_DWORD *)(v4 + 728) == HIDWORD(this) )
      {
        *(_BYTE *)(v4 + 898) = 3;
        *(_DWORD *)(this + 40496) = 2;
        break;
      }
    }
    Ogre::LockFunctor::~LockFunctor((Ogre::LockSection **)&v6 + 1);
  }
  return v6;
}


//======================================================================
// CSMgr::init_pop(int &)
// address: 0x003055F4   size: 0x2A (42 bytes)
//======================================================================
_DWORD *__fastcall CSMgr::init_pop(ShareSaveThread **this, Ogre::LockSection *a2)
{
  _DWORD *result; // r0

  result = (_DWORD *)ShareSaveThread::popInitResult(*(this + 10127), a2);
  if ( result != nullptr )
  {
    if ( *result != 0 )
    {
      sub_304AA4(result);
      return nullptr;
    }
    else
    {
      *(_DWORD *)a2 = result[1];
      sub_304AA4(result);
      return &dword_0 + 1;
    }
  }
  return result;
}


//======================================================================
// CSMgr::loadChunkActorAndContainerPop(int &)
// address: 0x0030567C   size: 0x1E (30 bytes)
//======================================================================
int *__fastcall CSMgr::loadChunkActorAndContainerPop(
        ShareSaveThread **this,
        Ogre::LockSection *a2,
        Ogre::LockSection *a3)
{
  int *result; // r0
  int v5; // r4

  result = (int *)ShareSaveThread::popLoadResult(*(this + 10125), a2, a3);
  if ( result != nullptr )
  {
    v5 = result[1];
    *(_DWORD *)a2 = *result;
    j_free(result);
    return (int *)v5;
  }
  return result;
}


//======================================================================
// CSMgr::checkLoadWorld(int,bool)
// address: 0x003067C8   size: 0x92 (146 bytes)
//======================================================================
int __fastcall CSMgr::checkLoadWorld(ShareSaveThread **this, int a2, int a3)
{
  Kompex::SQLiteDatabase *WorldTask; // r3
  int result; // r0
  int v6; // r4
  _DWORD v8[7]; // [sp+8h] [bp-1Ch] BYREF

  WorldTask = ShareSaveThread::haveLoadWorldTask(*(this + 10125), v8, a2);
  result = 100;
  if ( WorldTask != nullptr )
  {
    if ( a3 != 0 )
      *(this + 10120) = (ShareSaveThread *)v8[1];
    if ( v8[1] == 1 )
    {
      if ( v8[4] <= 0 )
        v6 = 0;
      else
        v6 = (int)((double)v8[2] * 100.0 / (double)v8[4]);
      result = (int)((double)v6 * 0.9);
    }
    else
    {
      v6 = 0;
      result = 95;
      if ( v8[1] != 8 )
        result = 97;
    }
    if ( a3 != 0 )
      *(this + 10121) = (ShareSaveThread *)v6;
  }
  return result;
}


//======================================================================
// CSMgr::savrRoleInfoLocalDB(void)
// address: 0x00307AE8   size: 0xC (12 bytes)
//======================================================================
Kompex::SQLiteDatabase *__fastcall CSMgr::savrRoleInfoLocalDB(ShareSaveThread **this)
{
  return ShareSaveThread::updateAccInfoDB(*(this + 10126));
}


//======================================================================
// CSMgr::startTaskProcess(void)
// address: 0x00308C94   size: 0xCA (202 bytes)
//======================================================================
int __fastcall CSMgr::startTaskProcess(CSMgr *this)
{
  ShareSaveThread *v2; // r6
  ShareSaveThread *v3; // r6
  int v4; // r0
  ShareSaveThread *v6; // r6
  int v7; // r0
  int v8; // r0

  sqlite3_config(2);
  v2 = (ShareSaveThread *)operator new(0x118u);
  ShareSaveThread::ShareSaveThread(v2, 0);
  *((_DWORD *)this + 10125) = v2;
  if ( v2 == nullptr )
    return 0;
  v3 = (ShareSaveThread *)operator new(0x118u);
  ShareSaveThread::ShareSaveThread(v3, 1);
  *((_DWORD *)this + 10126) = v3;
  if ( v3 != nullptr )
  {
    v6 = (ShareSaveThread *)operator new(0x118u);
    ShareSaveThread::ShareSaveThread(v6, 2);
    *((_DWORD *)this + 10127) = v6;
    if ( v6 != nullptr )
    {
      ShareSaveThread::setThreadTaskID(*((ShareSaveThread **)this + 10126));
      ShareSaveThread::checkLoadWorldDB(*((ShareSaveThread **)this + 10127));
      ShareSaveThread::checkLoadWorldDB(*((ShareSaveThread **)this + 10125));
      Ogre::OSThread::start(*((Ogre::OSThread **)this + 10126));
      Ogre::OSThread::start(*((Ogre::OSThread **)this + 10125));
      Ogre::OSThread::start(*((Ogre::OSThread **)this + 10127));
      return 1;
    }
    else
    {
      v7 = *((_DWORD *)this + 10125);
      if ( v7 != 0 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 4))(v7);
      *((_DWORD *)this + 10125) = 0;
      v8 = *((_DWORD *)this + 10126);
      if ( v8 != 0 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 4))(v8);
      *((_DWORD *)this + 10126) = 0;
      return 0;
    }
  }
  else
  {
    v4 = *((_DWORD *)this + 10125);
    if ( v4 != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
    *((_DWORD *)this + 10125) = 0;
    return 0;
  }
}


//======================================================================
// CSMgr::init(char const*,int,char *,double,double)
// address: 0x00308D6C   size: 0xE0 (224 bytes)
//======================================================================
int __fastcall CSMgr::init(CSMgr *this, char *a2, int a3, char *a4, double a5, double a6)
{
  *((_DWORD *)this + 143) = 0;
  *((_DWORD *)this + 144) = 0;
  *((_DWORD *)this + 145) = 0;
  sub_3BE508((int)this + 644, a2);
  *((_DWORD *)this + 162) = a3;
  if ( a4 != nullptr )
    j_strncpy((char *)this + 592, a4, 0x33u);
  Ogre::FileManager::makeStdioDir((_BYTE *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton, "data/");
  if ( CSMgr::loadServerList(this, "serverlist.data") == 0 )
    return 0;
  meta_set_file_func(VFileOpenFunc, VFileCloseFunc, VFileReadFunc);
  if ( meta_han_create("proto_cs.meta", (char *)this + 572) < 0
    || cs_msg_han_create(*((_DWORD *)this + 143), (char *)this + 576) < 0
    || cs_msg_han_create(*((_DWORD *)this + 143), (char *)this + 580) < 0 )
  {
    return 0;
  }
  g_CSMgr = (int)this;
  *((double *)this + 5058) = a5;
  *((double *)this + 5059) = a6;
  return CSMgr::startTaskProcess(this);
}


//======================================================================
// CSMgr::~CSMgr()
// address: 0x00308F48   size: 0x76 (118 bytes)
//======================================================================
// Alternative name is '_ZN5CSMgrD1Ev'
void __fastcall CSMgr::~CSMgr(CSMgr *this)
{
  char *v2; // r6
  char *i; // r5
  void *v4; // r0

  *(_DWORD *)this = &off_463478;
  v2 = (char *)this + 44;
  std::_Rb_tree<tagChunkFlagEntry,tagChunkFlagEntry,std::_Identity<tagChunkFlagEntry>,std::less<tagChunkFlagEntry>,std::allocator<tagChunkFlagEntry>>::_M_erase(
    (int)this + 40512,
    *((_DWORD **)this + 10130));
  sub_3BDF80((char *)this + 644);
  sub_3BDF80((char *)this + 564);
  sub_3BDF80((char *)this + 556);
  for ( i = (char *)this + 300; i != v2; sub_3BDF80(i) )
    i -= 4;
  sub_3BDF80((char *)this + 28);
  sub_3BDF80((char *)this + 20);
  sub_3BDF80((char *)this + 16);
  v4 = *((void **)this + 1);
  if ( v4 != nullptr )
    operator delete(v4);
}


//======================================================================
// CSMgr::~CSMgr()
// address: 0x00308FCC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall CSMgr::~CSMgr(CSMgr *this)
{
  CSMgr::~CSMgr(this);
  operator delete(this);
}


//======================================================================
// CSMgr::removeMsgHandler(CSMsgHandler *)
// address: 0x00309192   size: 0x8A (138 bytes)
//======================================================================
int __fastcall CSMgr::removeMsgHandler(int this, CSMsgHandler *a2)
{
  CSMsgHandler **v2; // r3
  CSMsgHandler **v3; // r4
  int i; // r5
  CSMsgHandler **v5; // r2
  int v6; // r5
  CSMsgHandler **j; // r2

  v2 = *(CSMsgHandler ***)(this + 4);
  v3 = *(CSMsgHandler ***)(this + 8);
  for ( i = ((char *)v3 - (char *)v2) >> 4; ; --i )
  {
    v5 = v2;
    if ( i <= 0 )
      break;
    if ( *v2 == a2 )
      goto LABEL_21;
    if ( v2[1] == a2 )
    {
      ++v2;
      goto LABEL_21;
    }
    if ( v2[2] == a2 )
    {
      v2 += 2;
      goto LABEL_21;
    }
    v2 += 4;
    if ( *(v2 - 1) == a2 )
    {
      v2 = v5 + 3;
      goto LABEL_21;
    }
  }
  v6 = v3 - v2;
  if ( v6 != 2 )
  {
    if ( v6 != 3 )
    {
      if ( v6 != 1 )
        goto LABEL_28;
LABEL_19:
      if ( *v5 != a2 )
        goto LABEL_28;
      goto LABEL_20;
    }
    if ( *v2 == a2 )
      goto LABEL_21;
    v5 = v2 + 1;
  }
  if ( *v5 != a2 )
  {
    ++v5;
    goto LABEL_19;
  }
LABEL_20:
  v2 = v5;
LABEL_21:
  if ( v2 != v3 )
  {
    for ( j = v2 + 1; j != v3; ++j )
    {
      if ( *j != a2 )
        *v2++ = *j;
    }
    v3 = v2;
  }
LABEL_28:
  if ( v3 != *(CSMsgHandler ***)(this + 8) )
    *(_DWORD *)(this + 8) = v3;
  return this;
}


//======================================================================
// CSMgr::addMsgHandler(CSMsgHandler *)
// address: 0x0030928C   size: 0x24 (36 bytes)
//======================================================================
__int64 __fastcall CSMgr::addMsgHandler(__int64 this, int a2)
{
  _DWORD *v2; // r3
  __int64 v4; // [sp+0h] [bp-Ch] BYREF
  int v5; // [sp+8h] [bp-4h]

  v4 = this;
  v5 = a2;
  v2 = *(_DWORD **)(this + 8);
  if ( v2 == *(_DWORD **)(this + 12) )
  {
    std::vector<CSMsgHandler *>::_M_emplace_back_aux<CSMsgHandler * const&>(this + 4, (_DWORD *)&v4 + 1);
  }
  else
  {
    if ( v2 != nullptr )
      *v2 = HIDWORD(this);
    *(_DWORD *)(this + 8) += 4;
  }
  return v4;
}


//======================================================================
// CSMgr::checkPoint(void)
// address: 0x00309454   size: 0x28 (40 bytes)
//======================================================================
_DWORD *__fastcall CSMgr::checkPoint(CSMgr *this)
{
  _DWORD v3[8]; // [sp+4h] [bp-20h] BYREF

  j_memset(v3, 0, 0x1Cu);
  v3[1] = 9996;
  return ShareSaveThread::addCmd(*((_DWORD *)this + 10126), (int)v3, 0);
}


//======================================================================
// CSMgr::store2OW(int)
// address: 0x00309484   size: 0x2C (44 bytes)
//======================================================================
_DWORD *__fastcall CSMgr::store2OW(CSMgr *this, int a2)
{
  _DWORD v5[7]; // [sp+4h] [bp-1Ch] BYREF

  j_memset(v5, 0, sizeof(v5));
  v5[1] = 9995;
  v5[3] = a2;
  return ShareSaveThread::addCmd(*((_DWORD *)this + 10126), (int)v5, 0);
}


//======================================================================
// CSMgr::uinPositionUP(double,double)
// address: 0x003094B8   size: 0x5E (94 bytes)
//======================================================================
int __fastcall CSMgr::uinPositionUP(CSMgr *this, double a2, double a3)
{
  int v5; // r5
  int v6; // r3
  _QWORD v9[3]; // [sp+8h] [bp-38h] BYREF
  _DWORD v10[7]; // [sp+24h] [bp-1Ch] BYREF

  v5 = 0;
  if ( *((_DWORD *)this + 10124) != 1 )
  {
    j_memset(v10, 0, sizeof(v10));
    v10[1] = 13;
    v10[2] = 8;
    v6 = *((_DWORD *)this + 5082);
    *(double *)&v9[1] = a2;
    v10[4] = v6;
    LODWORD(v9[0]) = v6;
    v10[5] = v9;
    v10[6] = 24;
    *(double *)&v9[2] = a3;
    ShareSaveThread::addCmd(*((_DWORD *)this + 10127), (int)v10, 1);
    return 1;
  }
  return v5;
}


//======================================================================
// CSMgr::buddyFind(double,double)
// address: 0x00309528   size: 0xFC (252 bytes)
//======================================================================
int __fastcall CSMgr::buddyFind(CSMgr *this, double a2, double a3)
{
  int v6; // r1
  int v7; // r2
  int v9; // [sp+4h] [bp-40h]
  _QWORD v10[3]; // [sp+8h] [bp-3Ch] BYREF
  _DWORD v11[8]; // [sp+24h] [bp-20h] BYREF

  v6 = 0;
  if ( *((_DWORD *)this + 10124) != 1 )
  {
    j_memset(v11, 0, 0x1Cu);
    v11[1] = 13;
    v9 = *((_DWORD *)this + 5082);
    v11[4] = v9;
    v11[2] = 7;
    if ( a2 == 0.0 )
      a2 = *((double *)this + 5058);
    if ( a3 == 0.0 )
      a3 = *((double *)this + 5059);
    LODWORD(v10[0]) = v9;
    *(double *)&v10[2] = a3;
    v11[5] = v10;
    v7 = *((_DWORD *)this + 10127);
    v11[6] = 24;
    *(double *)&v10[1] = a2;
    ShareSaveThread::addCmd(v7, (int)v11, 1);
    if ( (double)(((int)(a2 - *((double *)this + 5058)) + ((int)(a2 - *((double *)this + 5058)) >> 31))
                ^ ((int)(a2 - *((double *)this + 5058)) >> 31)) >= 0.1
      || (double)(((int)(a3 - *((double *)this + 5059)) + ((int)(a3 - *((double *)this + 5059)) >> 31))
                ^ ((int)(a3 - *((double *)this + 5059)) >> 31)) >= 0.1 )
    {
      v11[2] = 8;
      ShareSaveThread::addCmd(*((_DWORD *)this + 10127), (int)v11, 1);
    }
    return 1;
  }
  return v6;
}


//======================================================================
// CSMgr::delWorld(int)
// address: 0x00309650   size: 0x11C (284 bytes)
//======================================================================
int __fastcall CSMgr::delWorld(CSMgr *this, int a2)
{
  int i; // r5
  int v4; // r3
  time_t v5; // r0
  int v6; // r0
  int v7; // r4
  int v9; // [sp+4h] [bp-348h]
  Ogre::LockSection *v11; // [sp+10h] [bp-33Ch] BYREF
  _DWORD v12[7]; // [sp+14h] [bp-338h] BYREF
  _DWORD v13[197]; // [sp+30h] [bp-31Ch] BYREF

  if ( *((_DWORD *)this + 10124) == 1 )
    return 0;
  v11 = (Ogre::LockSection *)&g_Locker1;
  Ogre::LockSection::Lock((pthread_mutex_t *)&g_Locker1);
  v9 = *((_DWORD *)this + 180) - 1;
  for ( i = v9; ; --i )
  {
    if ( i < 0 )
    {
      v7 = 0;
      goto LABEL_10;
    }
    if ( a2 == *((_DWORD *)this + 196 * i + 182) )
      break;
  }
  j_memcpy(v13, (char *)this + 784 * i + 728, 0x310u);
  *((_DWORD *)this + 180) = v9;
  if ( i != v9 )
    j_memmove((char *)this + 784 * i + 728, (char *)this + 784 * i + 1512, 784 * (v9 - i));
  j_memset(v12, 0, sizeof(v12));
  v4 = *((_DWORD *)this + 5082);
  v12[3] = a2;
  v12[4] = v4;
  v12[1] = 1;
  v5 = j_time(nullptr);
  v12[5] = v13;
  v13[28] = v5;
  v6 = *((_DWORD *)this + 10126);
  v12[6] = 784;
  v12[2] = 1;
  ShareSaveThread::addCmd(v6, (int)v12, 1);
  v12[2] = 5;
  ShareSaveThread::addCmd(*((_DWORD *)this + 10125), (int)v12, 1);
  ShareSaveThread::addCmd(*((_DWORD *)this + 10127), (int)v12, 1);
  v7 = 1;
LABEL_10:
  Ogre::LockFunctor::~LockFunctor(&v11);
  return v7;
}


//======================================================================
// CSMgr::loadWorld(int)
// address: 0x0030978C   size: 0x106 (262 bytes)
//======================================================================
int __fastcall CSMgr::loadWorld(CSMgr *this, int a2)
{
  int i; // r6
  int v5; // r0
  int v6; // r6
  int v7; // r0
  int v8; // r4
  Ogre::LockSection *v10; // [sp+8h] [bp-2Ch] BYREF
  int v11; // [sp+Ch] [bp-28h] BYREF
  _DWORD v12[8]; // [sp+14h] [bp-20h] BYREF

  if ( *((_DWORD *)this + 10124) == 1 )
    return 0;
  *((_DWORD *)this + 10120) = -1;
  *((_DWORD *)this + 10121) = 0;
  CSMgr::checkLoadWorld((ShareSaveThread **)this, a2, 1);
  *((_DWORD *)this + 10122) = 0;
  v10 = (Ogre::LockSection *)&g_Locker1;
  Ogre::LockSection::Lock((pthread_mutex_t *)&g_Locker1);
  for ( i = *((_DWORD *)this + 180) - 1; i >= 0; --i )
  {
    if ( a2 == *((_DWORD *)this + 196 * i + 182) )
    {
      CSMgr::getSvrTime((int)this, &v11);
      *((_DWORD *)this + 196 * i + 210) = v11;
      j_memset(v12, 0, 0x1Cu);
      v12[4] = *((_DWORD *)this + 5082);
      v12[2] = 3;
      v12[5] = (char *)this + 784 * i + 728;
      v12[6] = 784;
      v12[1] = 1;
      v5 = *((_DWORD *)this + 10126);
      v12[3] = a2;
      ShareSaveThread::addCmd(v5, (int)v12, 1);
      j_memset(v12, 0, 0x1Cu);
      v12[2] = 2;
      v6 = *((_DWORD *)this + 196 * i + 223);
      v7 = *((_DWORD *)this + 10127);
      v12[1] = 1;
      v12[4] = v6;
      v12[3] = a2;
      ShareSaveThread::addCmd(v7, (int)v12, 0);
      v8 = 1;
      goto LABEL_8;
    }
  }
  v8 = 0;
LABEL_8:
  Ogre::LockFunctor::~LockFunctor(&v10);
  return v8;
}


//======================================================================
// CSMgr::saveRoleData(int,tagRoleData *)
// address: 0x003098B4   size: 0x48 (72 bytes)
//======================================================================
int __fastcall CSMgr::saveRoleData(int a1, int a2, int a3)
{
  int v5; // r3
  _DWORD v8[8]; // [sp+Ch] [bp-20h] BYREF

  if ( *(_BYTE *)(a1 + 652) == 0 )
  {
    j_memset(v8, 0, 0x1Cu);
    v8[1] = 3;
    v5 = *(_DWORD *)(a1 + 20328);
    v8[3] = a2;
    v8[4] = v5;
    v8[5] = a3;
    v8[6] = 13560;
    ShareSaveThread::addCmd(*(_DWORD *)(a1 + 40504), (int)v8, 1);
  }
  return 1;
}


//======================================================================
// CSMgr::saveRoleData(ClientPlayer *)
// address: 0x00309908   size: 0x88 (136 bytes)
//======================================================================
int __fastcall CSMgr::saveRoleData(CSMgr *this, ClientPlayer *a2)
{
  int v2; // r7
  int result; // r0
  int OWID; // r5
  char *v7; // r3
  Ogre::LockSection *v8[3391]; // [sp+0h] [bp-34FCh] BYREF

  v2 = *((unsigned __int8 *)this + 652);
  result = 1;
  if ( v2 == 0 )
  {
    OWID = ClientPlayer::getOWID(a2);
    v8[0] = (Ogre::LockSection *)&g_Locker1;
    Ogre::LockSection::Lock((pthread_mutex_t *)&g_Locker1);
    while ( 1 )
    {
      if ( v2 >= *((_DWORD *)this + 180) )
        goto LABEL_6;
      v7 = (char *)this + 784 * v2;
      if ( OWID == *((_DWORD *)v7 + 182) )
        break;
      ++v2;
    }
    if ( *((_DWORD *)v7 + 191) != *((_DWORD *)this + 5082) )
    {
LABEL_6:
      Ogre::LockFunctor::~LockFunctor(v8);
      return 0;
    }
    Ogre::LockFunctor::~LockFunctor(v8);
    ClientPlayer::changeRoleData((int)a2, (int)v8);
    return CSMgr::saveRoleData((int)this, OWID, (int)v8);
  }
  return result;
}


//======================================================================
// CSMgr::loadOWRoleData(int,int)
// address: 0x003099A0   size: 0x32 (50 bytes)
//======================================================================
_DWORD *__fastcall CSMgr::loadOWRoleData(CSMgr *this, int a2, int a3)
{
  int v6; // r0
  _DWORD v8[8]; // [sp+4h] [bp-20h] BYREF

  j_memset(v8, 0, 0x1Cu);
  v8[1] = 3;
  v6 = *((_DWORD *)this + 10125);
  v8[4] = a3;
  v8[2] = 1;
  v8[3] = a2;
  return ShareSaveThread::addCmd(v6, (int)v8, 1);
}


//======================================================================
// CSMgr::saveOWGlobal(int,tagOWGlobal *)
// address: 0x003099D8   size: 0x50 (80 bytes)
//======================================================================
int __fastcall CSMgr::saveOWGlobal(int a1, int a2, _DWORD *a3)
{
  int v5; // r7
  _DWORD v8[8]; // [sp+Ch] [bp-20h] BYREF

  if ( *(_BYTE *)(a1 + 652) == 0 )
  {
    *a3 = a2;
    a3[2] = *(_DWORD *)(a1 + 20328);
    j_memset(v8, 0, 0x1Cu);
    v8[1] = 6;
    v5 = *(_DWORD *)(a1 + 20328);
    v8[3] = a2;
    v8[4] = v5;
    v8[6] = 4184;
    v8[5] = a3;
    ShareSaveThread::addCmd(*(_DWORD *)(a1 + 40504), (int)v8, 1);
  }
  return 1;
}


//======================================================================
// CSMgr::tickBroadcastChunkVer(int,tagOWGlobal *)
// address: 0x00309A34   size: 0x16 (22 bytes)
//======================================================================
int __fastcall CSMgr::tickBroadcastChunkVer(int result, int a2, _DWORD *a3)
{
  int v3; // r4

  v3 = a3[530];
  if ( v3 != a3[531] )
  {
    a3[531] = v3;
    return CSMgr::saveOWGlobal(result, a2, a3);
  }
  return result;
}


//======================================================================
// CSMgr::saveChunkFlat(int,Chunk *,int,tagOWGlobal *)
// address: 0x00309A54   size: 0xC4 (196 bytes)
//======================================================================
int __fastcall CSMgr::saveChunkFlat(_DWORD *a1, int a2, Chunk *a3, int a4, int a5)
{
  int v7; // r2
  int i; // r3
  _DWORD *v9; // r2
  int v10; // r6
  int v11; // r1
  _DWORD *v12; // r0
  Ogre::LockSection *v16; // [sp+10h] [bp-24h] BYREF
  _DWORD v17[8]; // [sp+14h] [bp-20h] BYREF

  j_memset(v17, 0, 0x1Cu);
  v7 = a1[5082];
  v17[1] = 2;
  v16 = (Ogre::LockSection *)&g_Locker1;
  v17[3] = a2;
  v17[4] = v7;
  Ogre::LockSection::Lock((pthread_mutex_t *)&g_Locker1);
  for ( i = 0; ; ++i )
  {
    if ( i >= a1[180] )
    {
      v10 = 0;
      goto LABEL_9;
    }
    v9 = &a1[196 * i];
    if ( a2 == v9[182] )
      break;
  }
  v10 = 0;
  if ( v9[191] == a1[5082] && a5 != 0 )
  {
    v10 = *(_DWORD *)(a5 + 2120) + 1;
    *(_DWORD *)(a5 + 2120) = v10;
  }
LABEL_9:
  Ogre::LockFunctor::~LockFunctor(&v16);
  v12 = Chunk::saveToBuffer(a3, v11);
  v12[4] = v10;
  if ( a4 != 0 )
  {
    v17[2] = 4;
    v17[5] = v12;
  }
  else
  {
    v17[5] = v12;
    v17[2] = 0;
  }
  ShareSaveThread::addCmd(a1[10126], (int)v17, 0);
  return 1;
}


//======================================================================
// CSMgr::saveChunkData(int,Chunk *,tagOWGlobal *)
// address: 0x00309B28   size: 0xA8 (168 bytes)
//======================================================================
int __fastcall CSMgr::saveChunkData(int a1, int a2, int a3, int a4)
{
  int v4; // r3
  int result; // r0
  int v8; // r4
  int v9; // r0
  int v10; // r4
  int v11; // r3
  int v12; // [sp+Ch] [bp-30h]
  _BYTE v15[8]; // [sp+20h] [bp-1Ch] BYREF
  _DWORD v16[5]; // [sp+28h] [bp-14h] BYREF

  v4 = *(unsigned __int8 *)(a1 + 652);
  result = 1;
  if ( v4 == 0 )
  {
    v8 = a3 + 252;
    v9 = *(_DWORD *)(a3 + 276);
    LOWORD(v16[0]) = *(_WORD *)(a3 + 1336);
    v16[1] = BlockDivSection(v9);
    v16[2] = BlockDivSection(*(_DWORD *)(v8 + 32));
    v10 = *(_DWORD *)(a1 + 40520);
    v12 = a1 + 40516;
    while ( v10 != 0 )
    {
      if ( tagChunkFlagEntry::operator<((unsigned __int16 *)(v10 + 16), (unsigned __int16 *)v16) )
      {
        v11 = *(_DWORD *)(v10 + 12);
        v10 = v12;
      }
      else
      {
        v11 = *(_DWORD *)(v10 + 8);
      }
      v12 = v10;
      v10 = v11;
    }
    if ( v12 == a1 + 40516 || tagChunkFlagEntry::operator<((unsigned __int16 *)v16, (unsigned __int16 *)(v12 + 16)) )
    {
      std::_Rb_tree<tagChunkFlagEntry,tagChunkFlagEntry,std::_Identity<tagChunkFlagEntry>,std::less<tagChunkFlagEntry>,std::allocator<tagChunkFlagEntry>>::_M_insert_unique<tagChunkFlagEntry const&>(
        (int)v15,
        (_DWORD *)(a1 + 40512),
        (int)v16);
      return CSMgr::saveChunkFlat((_DWORD *)a1, a2, (Chunk *)a3, 0, a4);
    }
    else
    {
      return CSMgr::saveChunkFlat((_DWORD *)a1, a2, (Chunk *)a3, 1, a4);
    }
  }
  return result;
}


//======================================================================
// CSMgr::loadChunkData(int,tagPos *)
// address: 0x00309BDC   size: 0x42 (66 bytes)
//======================================================================
int __fastcall CSMgr::loadChunkData(int a1, int a2, int a3)
{
  int v5; // r3
  _DWORD v8[8]; // [sp+Ch] [bp-20h] BYREF

  j_memset(v8, 0, 0x1Cu);
  v8[1] = 2;
  v5 = *(_DWORD *)(a1 + 20328);
  v8[2] = 1;
  v8[4] = v5;
  v8[3] = a2;
  v8[5] = a3;
  v8[6] = 16;
  ShareSaveThread::addCmd(*(_DWORD *)(a1 + 40500), (int)v8, 1);
  return 1;
}


//======================================================================
// CSMgr::delMinecart(int,tagMineCart *)
// address: 0x00309C28   size: 0x4A (74 bytes)
//======================================================================
int __fastcall CSMgr::delMinecart(int a1, int a2, int a3)
{
  int v5; // r3
  _DWORD v8[8]; // [sp+Ch] [bp-20h] BYREF

  if ( *(_BYTE *)(a1 + 652) == 0 )
  {
    j_memset(v8, 0, 0x1Cu);
    v8[1] = 8;
    v5 = *(_DWORD *)(a1 + 20328);
    v8[2] = 1;
    v8[3] = a2;
    v8[4] = v5;
    v8[5] = a3;
    v8[6] = 104;
    ShareSaveThread::addCmd(*(_DWORD *)(a1 + 40504), (int)v8, 1);
  }
  return 1;
}


//======================================================================
// CSMgr::delMinecart(ClientActor *)
// address: 0x00309C7C   size: 0x56 (86 bytes)
//======================================================================
void *__fastcall CSMgr::delMinecart(CSMgr *this, ClientActor *lpsrc)
{
  int v2; // r3
  void *result; // r0
  int v6; // r7
  unsigned int v7; // r0
  int v8; // r3
  _DWORD v9[27]; // [sp+0h] [bp-6Ch] BYREF

  v2 = *((unsigned __int8 *)this + 652);
  result = &dword_0 + 1;
  if ( v2 == 0 )
  {
    if ( lpsrc != nullptr )
    {
      result = _dynamic_cast(
                 lpsrc,
                 (const struct __class_type_info *)&`typeinfo for'ClientActor,
                 (const struct __class_type_info *)&`typeinfo for'ActorMinecart,
                 0);
      if ( result != nullptr )
      {
        v6 = *((_DWORD *)lpsrc + 17);
        v9[8] = CoordDivSection(*(_DWORD *)(v6 + 32));
        v7 = CoordDivSection(*(_DWORD *)(v6 + 40));
        v8 = *((_DWORD *)lpsrc + 13);
        v9[9] = v7;
        return (void *)CSMgr::delMinecart((int)this, *(_DWORD *)(v8 + 24), (int)v9);
      }
    }
    else
    {
      return nullptr;
    }
  }
  return result;
}


//======================================================================
// CSMgr::delItem(int,tagDropItem *)
// address: 0x00309CDC   size: 0x4C (76 bytes)
//======================================================================
int __fastcall CSMgr::delItem(int a1, int a2, int a3)
{
  int v5; // r3
  _DWORD v8[8]; // [sp+Ch] [bp-20h] BYREF

  if ( *(_BYTE *)(a1 + 652) == 0 )
  {
    j_memset(v8, 0, 0x1Cu);
    v8[1] = 7;
    v5 = *(_DWORD *)(a1 + 20328);
    v8[2] = 1;
    v8[3] = a2;
    v8[4] = v5;
    v8[5] = a3;
    v8[6] = 344;
    ShareSaveThread::addCmd(*(_DWORD *)(a1 + 40504), (int)v8, 1);
  }
  return 1;
}


//======================================================================
// CSMgr::delItem(ClientActor *)
// address: 0x00309D30   size: 0x72 (114 bytes)
//======================================================================
void *__fastcall CSMgr::delItem(CSMgr *this, ClientActor *lpsrc)
{
  int v4; // r3
  void *result; // r0
  int v6; // r7
  unsigned int v7; // r0
  int v8; // r3
  _DWORD v9[87]; // [sp+8h] [bp-164h] BYREF

  v4 = *((unsigned __int8 *)this + 652);
  result = &dword_0 + 1;
  if ( v4 == 0 )
  {
    if ( lpsrc != nullptr )
    {
      result = _dynamic_cast(
                 lpsrc,
                 (const struct __class_type_info *)&`typeinfo for'ClientActor,
                 (const struct __class_type_info *)&`typeinfo for'ClientItem,
                 0);
      if ( result != nullptr )
      {
        v6 = *((_DWORD *)lpsrc + 17);
        v9[8] = CoordDivSection(*(_DWORD *)(v6 + 32));
        v7 = CoordDivSection(*(_DWORD *)(v6 + 40));
        v8 = *((_DWORD *)lpsrc + 13);
        v9[9] = v7;
        return (void *)CSMgr::delItem((int)this, *(_DWORD *)(v8 + 24), (int)v9);
      }
    }
    else
    {
      return nullptr;
    }
  }
  return result;
}


//======================================================================
// CSMgr::delMonster(int,tagMonster *)
// address: 0x00309DB0   size: 0x4C (76 bytes)
//======================================================================
int __fastcall CSMgr::delMonster(int a1, int a2, int a3)
{
  int v5; // r3
  _DWORD v8[8]; // [sp+Ch] [bp-20h] BYREF

  if ( *(_BYTE *)(a1 + 652) == 0 )
  {
    j_memset(v8, 0, 0x1Cu);
    v8[1] = 4;
    v5 = *(_DWORD *)(a1 + 20328);
    v8[2] = 1;
    v8[3] = a2;
    v8[4] = v5;
    v8[5] = a3;
    v8[6] = 512;
    ShareSaveThread::addCmd(*(_DWORD *)(a1 + 40504), (int)v8, 1);
  }
  return 1;
}


//======================================================================
// CSMgr::delMonster(ClientActor *)
// address: 0x00309E04   size: 0x56 (86 bytes)
//======================================================================
void *__fastcall CSMgr::delMonster(CSMgr *this, ClientActor *lpsrc)
{
  int v2; // r3
  void *result; // r0
  int v6; // r7
  unsigned int v7; // r0
  int v8; // r3
  _DWORD v9[129]; // [sp+0h] [bp-204h] BYREF

  v9[127] = this;
  v9[128] = lpsrc;
  v2 = *((unsigned __int8 *)this + 652);
  result = &dword_0 + 1;
  if ( v2 == 0 )
  {
    if ( lpsrc != nullptr )
    {
      result = _dynamic_cast(
                 lpsrc,
                 (const struct __class_type_info *)&`typeinfo for'ClientActor,
                 (const struct __class_type_info *)&`typeinfo for'ClientMob,
                 0);
      if ( result != nullptr )
      {
        v6 = *((_DWORD *)lpsrc + 17);
        v9[10] = CoordDivSection(*(_DWORD *)(v6 + 32));
        v7 = CoordDivSection(*(_DWORD *)(v6 + 40));
        v8 = *((_DWORD *)lpsrc + 13);
        v9[11] = v7;
        return (void *)CSMgr::delMonster((int)this, *(_DWORD *)(v8 + 24), (int)v9);
      }
    }
    else
    {
      return nullptr;
    }
  }
  return result;
}


//======================================================================
// CSMgr::delActorData(ClientActor *)
// address: 0x00309E64   size: 0x48 (72 bytes)
//======================================================================
void *__fastcall CSMgr::delActorData(CSMgr *this, ClientActor *a2)
{
  int v2; // r6
  void *result; // r0
  int v6; // r0

  v2 = *((unsigned __int8 *)this + 652);
  result = &dword_0 + 1;
  if ( v2 == 0 )
  {
    v6 = (*(int (__fastcall **)(ClientActor *))(*(_DWORD *)a2 + 24))(a2);
    if ( v6 == 2 )
    {
      return CSMgr::delItem(this, a2);
    }
    else if ( v6 == 6 )
    {
      return CSMgr::delMinecart(this, a2);
    }
    else if ( v6 != 0 )
    {
      return nullptr;
    }
    else
    {
      return CSMgr::delMonster(this, a2);
    }
  }
  return result;
}


//======================================================================
// CSMgr::updateMinecart(int,tagMineCart *)
// address: 0x00309EAC   size: 0x48 (72 bytes)
//======================================================================
int __fastcall CSMgr::updateMinecart(int a1, int a2, int a3)
{
  int v5; // r3
  _DWORD v8[8]; // [sp+Ch] [bp-20h] BYREF

  if ( *(_BYTE *)(a1 + 652) == 0 )
  {
    j_memset(v8, 0, 0x1Cu);
    v8[1] = 8;
    v5 = *(_DWORD *)(a1 + 20328);
    v8[3] = a2;
    v8[4] = v5;
    v8[5] = a3;
    v8[6] = 104;
    ShareSaveThread::addCmd(*(_DWORD *)(a1 + 40504), (int)v8, 1);
  }
  return 1;
}


//======================================================================
// CSMgr::updateMinecart(ClientActor *)
// address: 0x00309EFC   size: 0x56 (86 bytes)
//======================================================================
void *__fastcall CSMgr::updateMinecart(CSMgr *this, ClientActor *lpsrc)
{
  int v2; // r3
  void *result; // r0
  int v6; // r7
  unsigned int v7; // r0
  int v8; // r3
  _DWORD v9[27]; // [sp+0h] [bp-6Ch] BYREF

  v2 = *((unsigned __int8 *)this + 652);
  result = &dword_0 + 1;
  if ( v2 == 0 )
  {
    if ( lpsrc != nullptr )
    {
      result = _dynamic_cast(
                 lpsrc,
                 (const struct __class_type_info *)&`typeinfo for'ClientActor,
                 (const struct __class_type_info *)&`typeinfo for'ActorMinecart,
                 0);
      if ( result != nullptr )
      {
        v6 = *((_DWORD *)lpsrc + 17);
        v9[8] = CoordDivSection(*(_DWORD *)(v6 + 32));
        v7 = CoordDivSection(*(_DWORD *)(v6 + 40));
        v8 = *((_DWORD *)lpsrc + 13);
        v9[9] = v7;
        return (void *)CSMgr::updateMinecart((int)this, *(_DWORD *)(v8 + 24), (int)v9);
      }
    }
    else
    {
      return nullptr;
    }
  }
  return result;
}


//======================================================================
// CSMgr::updateItem(int,tagDropItem *)
// address: 0x00309F5C   size: 0x4A (74 bytes)
//======================================================================
int __fastcall CSMgr::updateItem(int a1, int a2, int a3)
{
  int v5; // r3
  _DWORD v8[8]; // [sp+Ch] [bp-20h] BYREF

  if ( *(_BYTE *)(a1 + 652) == 0 )
  {
    j_memset(v8, 0, 0x1Cu);
    v8[1] = 7;
    v5 = *(_DWORD *)(a1 + 20328);
    v8[3] = a2;
    v8[4] = v5;
    v8[5] = a3;
    v8[6] = 344;
    ShareSaveThread::addCmd(*(_DWORD *)(a1 + 40504), (int)v8, 1);
  }
  return 1;
}


//======================================================================
// CSMgr::updateItem(ClientActor *)
// address: 0x00309FB0   size: 0x72 (114 bytes)
//======================================================================
void *__fastcall CSMgr::updateItem(CSMgr *this, ClientActor *lpsrc)
{
  int v4; // r3
  void *result; // r0
  int v6; // r7
  unsigned int v7; // r0
  int v8; // r3
  _DWORD v9[87]; // [sp+8h] [bp-164h] BYREF

  v4 = *((unsigned __int8 *)this + 652);
  result = &dword_0 + 1;
  if ( v4 == 0 )
  {
    if ( lpsrc != nullptr )
    {
      result = _dynamic_cast(
                 lpsrc,
                 (const struct __class_type_info *)&`typeinfo for'ClientActor,
                 (const struct __class_type_info *)&`typeinfo for'ClientItem,
                 0);
      if ( result != nullptr )
      {
        v6 = *((_DWORD *)lpsrc + 17);
        v9[8] = CoordDivSection(*(_DWORD *)(v6 + 32));
        v7 = CoordDivSection(*(_DWORD *)(v6 + 40));
        v8 = *((_DWORD *)lpsrc + 13);
        v9[9] = v7;
        return (void *)CSMgr::updateItem((int)this, *(_DWORD *)(v8 + 24), (int)v9);
      }
    }
    else
    {
      return nullptr;
    }
  }
  return result;
}


//======================================================================
// CSMgr::updateMonster(int,tagMonster *)
// address: 0x0030A030   size: 0x4A (74 bytes)
//======================================================================
int __fastcall CSMgr::updateMonster(int a1, int a2, int a3)
{
  int v5; // r3
  _DWORD v8[8]; // [sp+Ch] [bp-20h] BYREF

  if ( *(_BYTE *)(a1 + 652) == 0 )
  {
    j_memset(v8, 0, 0x1Cu);
    v8[1] = 4;
    v5 = *(_DWORD *)(a1 + 20328);
    v8[3] = a2;
    v8[4] = v5;
    v8[5] = a3;
    v8[6] = 512;
    ShareSaveThread::addCmd(*(_DWORD *)(a1 + 40504), (int)v8, 1);
  }
  return 1;
}


//======================================================================
// CSMgr::updateMonster(ClientActor *)
// address: 0x0030A084   size: 0x56 (86 bytes)
//======================================================================
void *__fastcall CSMgr::updateMonster(CSMgr *this, ClientActor *lpsrc)
{
  int v2; // r3
  void *result; // r0
  int v6; // r7
  unsigned int v7; // r0
  int v8; // r3
  _DWORD v9[129]; // [sp+0h] [bp-204h] BYREF

  v9[127] = this;
  v9[128] = lpsrc;
  v2 = *((unsigned __int8 *)this + 652);
  result = &dword_0 + 1;
  if ( v2 == 0 )
  {
    if ( lpsrc != nullptr )
    {
      result = _dynamic_cast(
                 lpsrc,
                 (const struct __class_type_info *)&`typeinfo for'ClientActor,
                 (const struct __class_type_info *)&`typeinfo for'ClientMob,
                 0);
      if ( result != nullptr )
      {
        v6 = *((_DWORD *)lpsrc + 17);
        v9[10] = CoordDivSection(*(_DWORD *)(v6 + 32));
        v7 = CoordDivSection(*(_DWORD *)(v6 + 40));
        v8 = *((_DWORD *)lpsrc + 13);
        v9[11] = v7;
        return (void *)CSMgr::updateMonster((int)this, *(_DWORD *)(v8 + 24), (int)v9);
      }
    }
    else
    {
      return nullptr;
    }
  }
  return result;
}


//======================================================================
// CSMgr::saveActorData(ClientActor *)
// address: 0x0030A0E4   size: 0x48 (72 bytes)
//======================================================================
void *__fastcall CSMgr::saveActorData(CSMgr *this, ClientActor *a2)
{
  int v2; // r6
  void *result; // r0
  int v6; // r0

  v2 = *((unsigned __int8 *)this + 652);
  result = &dword_0 + 1;
  if ( v2 == 0 )
  {
    v6 = (*(int (__fastcall **)(ClientActor *))(*(_DWORD *)a2 + 24))(a2);
    if ( v6 == 2 )
    {
      return CSMgr::updateItem(this, a2);
    }
    else if ( v6 == 6 )
    {
      return CSMgr::updateMinecart(this, a2);
    }
    else if ( v6 != 0 )
    {
      return nullptr;
    }
    else
    {
      return CSMgr::updateMonster(this, a2);
    }
  }
  return result;
}


//======================================================================
// CSMgr::createActorData(ClientActor *)
// address: 0x0030A12C   size: 0x18 (24 bytes)
//======================================================================
void *__fastcall CSMgr::createActorData(CSMgr *this, ClientActor *a2)
{
  int v2; // r2
  void *result; // r0

  v2 = *((unsigned __int8 *)this + 652);
  result = &dword_0 + 1;
  if ( v2 == 0 )
    return CSMgr::saveActorData(this, a2);
  return result;
}


//======================================================================
// CSMgr::delBox(int,tagBox *)
// address: 0x0030A144   size: 0x4A (74 bytes)
//======================================================================
int __fastcall CSMgr::delBox(int a1, int a2, int a3)
{
  int v5; // r3
  _DWORD v8[8]; // [sp+Ch] [bp-20h] BYREF

  if ( *(_BYTE *)(a1 + 652) == 0 )
  {
    j_memset(v8, 0, 0x1Cu);
    v8[1] = 5;
    v5 = *(_DWORD *)(a1 + 20328);
    v8[2] = 1;
    v8[3] = a2;
    v8[4] = v5;
    v8[5] = a3;
    v8[6] = 8936;
    ShareSaveThread::addCmd(*(_DWORD *)(a1 + 40504), (int)v8, 1);
  }
  return 1;
}


//======================================================================
// CSMgr::delBoxData(long long,int)
// address: 0x0030A19C   size: 0x40 (64 bytes)
//======================================================================
int __fastcall CSMgr::delBoxData(CSMgr *this, __int64 a2, int a3)
{
  int v4; // r1
  int result; // r0
  _QWORD v8[1117]; // [sp+0h] [bp-22ECh] BYREF

  v4 = *((unsigned __int8 *)this + 652);
  result = 1;
  if ( v4 == 0 )
  {
    j_memset(v8, 0, sizeof(v8));
    LODWORD(v8[0]) = a3;
    v8[1] = a2;
    return CSMgr::delBox((int)this, a3, (int)v8);
  }
  return result;
}


//======================================================================
// CSMgr::updateBox(int,tagBox *)
// address: 0x0030A1E8   size: 0x48 (72 bytes)
//======================================================================
int __fastcall CSMgr::updateBox(int a1, int a2, int a3)
{
  int v5; // r3
  _DWORD v8[8]; // [sp+Ch] [bp-20h] BYREF

  if ( *(_BYTE *)(a1 + 652) == 0 )
  {
    j_memset(v8, 0, 0x1Cu);
    v8[1] = 5;
    v5 = *(_DWORD *)(a1 + 20328);
    v8[3] = a2;
    v8[4] = v5;
    v8[5] = a3;
    v8[6] = 8936;
    ShareSaveThread::addCmd(*(_DWORD *)(a1 + 40504), (int)v8, 1);
  }
  return 1;
}


//======================================================================
// CSMgr::saveBox(WorldStorageBox *,int)
// address: 0x0030A23C   size: 0x3A (58 bytes)
//======================================================================
int __fastcall CSMgr::saveBox(CSMgr *this, WorldStorageBox *a2, int a3)
{
  int v3; // r3
  int result; // r0
  _DWORD v8[2235]; // [sp+0h] [bp-22ECh] BYREF

  v3 = *((unsigned __int8 *)this + 652);
  result = 1;
  if ( v3 == 0 )
  {
    v8[10] = BlockDivSection(*((_DWORD *)a2 + 4));
    v8[11] = BlockDivSection(*((_DWORD *)a2 + 6));
    v8[0] = a3;
    return CSMgr::updateBox((int)this, a3, (int)v8);
  }
  return result;
}


//======================================================================
// CSMgr::createBoxData(WorldStorageBox *,int)
// address: 0x0030A280   size: 0x18 (24 bytes)
//======================================================================
int __fastcall CSMgr::createBoxData(CSMgr *this, WorldStorageBox *a2, int a3)
{
  int v4; // r4
  int result; // r0

  v4 = *((unsigned __int8 *)this + 652);
  result = 1;
  if ( v4 == 0 )
    return CSMgr::saveBox(this, a2, a3);
  return result;
}


//======================================================================
// CSMgr::delFurnace(int,tagFurnace *)
// address: 0x0030A298   size: 0x4C (76 bytes)
//======================================================================
int __fastcall CSMgr::delFurnace(int a1, int a2, int a3)
{
  int v5; // r3
  _DWORD v8[8]; // [sp+Ch] [bp-20h] BYREF

  if ( *(_BYTE *)(a1 + 652) == 0 )
  {
    j_memset(v8, 0, 0x1Cu);
    v8[1] = 9;
    v5 = *(_DWORD *)(a1 + 20328);
    v8[2] = 1;
    v8[3] = a2;
    v8[4] = v5;
    v8[5] = a3;
    v8[6] = 960;
    ShareSaveThread::addCmd(*(_DWORD *)(a1 + 40504), (int)v8, 1);
  }
  return 1;
}


//======================================================================
// CSMgr::delFurnaceData(long long,int)
// address: 0x0030A2EC   size: 0x3E (62 bytes)
//======================================================================
int __fastcall CSMgr::delFurnaceData(CSMgr *this, __int64 a2, int a3)
{
  int v4; // r1
  int result; // r0
  _QWORD v8[120]; // [sp+0h] [bp-3C4h] BYREF

  v4 = *((unsigned __int8 *)this + 652);
  result = 1;
  if ( v4 == 0 )
  {
    j_memset(v8, 0, sizeof(v8));
    v8[1] = a2;
    LODWORD(v8[0]) = a3;
    return CSMgr::delFurnace((int)this, a3, (int)v8);
  }
  return result;
}


//======================================================================
// CSMgr::updateFurnace(int,tagFurnace *)
// address: 0x0030A330   size: 0x4A (74 bytes)
//======================================================================
int __fastcall CSMgr::updateFurnace(int a1, int a2, int a3)
{
  int v5; // r3
  _DWORD v8[8]; // [sp+Ch] [bp-20h] BYREF

  if ( *(_BYTE *)(a1 + 652) == 0 )
  {
    j_memset(v8, 0, 0x1Cu);
    v8[1] = 9;
    v5 = *(_DWORD *)(a1 + 20328);
    v8[3] = a2;
    v8[4] = v5;
    v8[5] = a3;
    v8[6] = 960;
    ShareSaveThread::addCmd(*(_DWORD *)(a1 + 40504), (int)v8, 1);
  }
  return 1;
}


//======================================================================
// CSMgr::saveFurnace(WorldFurnace *,int)
// address: 0x0030A384   size: 0x3C (60 bytes)
//======================================================================
int __fastcall CSMgr::saveFurnace(CSMgr *this, WorldFurnace *a2, int a3)
{
  int v3; // r3
  int result; // r0
  _DWORD v8[241]; // [sp+0h] [bp-3C4h] BYREF

  v3 = *((unsigned __int8 *)this + 652);
  result = 1;
  if ( v3 == 0 )
  {
    v8[10] = BlockDivSection(*((_DWORD *)a2 + 4));
    v8[11] = BlockDivSection(*((_DWORD *)a2 + 6));
    v8[0] = a3;
    return CSMgr::updateFurnace((int)this, a3, (int)v8);
  }
  return result;
}


//======================================================================
// CSMgr::createFurnaceData(WorldFurnace *,int)
// address: 0x0030A3C4   size: 0x18 (24 bytes)
//======================================================================
int __fastcall CSMgr::createFurnaceData(CSMgr *this, WorldFurnace *a2, int a3)
{
  int v4; // r4
  int result; // r0

  v4 = *((unsigned __int8 *)this + 652);
  result = 1;
  if ( v4 == 0 )
    return CSMgr::saveFurnace(this, a2, a3);
  return result;
}


//======================================================================
// CSMgr::loadChunkActorAndContainer(int,unsigned short,int,int)
// address: 0x0030A3DC   size: 0x4A (74 bytes)
//======================================================================
_DWORD *__fastcall CSMgr::loadChunkActorAndContainer(CSMgr *this, int a2, unsigned __int16 a3, int a4, int a5)
{
  int v6; // r2
  int v7; // r0
  _DWORD v10[2]; // [sp+Ch] [bp-30h] BYREF
  __int16 v11; // [sp+14h] [bp-28h]
  unsigned __int16 v12; // [sp+16h] [bp-26h]
  _DWORD v13[8]; // [sp+1Ch] [bp-20h] BYREF

  v12 = a3;
  v10[1] = a5;
  v10[0] = a4;
  v11 = 0;
  j_memset(v13, 0, 0x1Cu);
  v13[1] = 2;
  v13[2] = 2;
  v13[3] = a2;
  v6 = *((_DWORD *)this + 5082);
  v13[6] = 16;
  v13[4] = v6;
  v7 = *((_DWORD *)this + 10125);
  v13[5] = v10;
  return ShareSaveThread::addCmd(v7, (int)v13, 1);
}


//======================================================================
// CSMgr::updateUinAchievement(int,tagAchievement *)
// address: 0x0030A430   size: 0xE0 (224 bytes)
//======================================================================
void __fastcall CSMgr::updateUinAchievement(_DWORD *a1, int a2, int a3)
{
  int v6; // r3
  int i; // r0
  int v8; // r0
  int v9; // r3
  Ogre::LockSection *v10; // [sp+0h] [bp-24h] BYREF
  _DWORD v11[8]; // [sp+4h] [bp-20h] BYREF

  v10 = (Ogre::LockSection *)&g_Locker1;
  Ogre::LockSection::Lock((pthread_mutex_t *)&g_Locker1);
  v6 = a1[5108];
  for ( i = 0; i < v6; ++i )
  {
    if ( a1[4 * i + 5110] == *(_DWORD *)a3 )
      goto LABEL_10;
  }
  if ( i == v6 )
  {
    if ( i > 255 )
      goto LABEL_19;
    if ( *(_BYTE *)(a3 + 8) == 3 )
      a1[6524] += a2;
    *(_OWORD *)&a1[4 * i + 5110] = *(_OWORD *)a3;
    ++a1[5108];
    goto LABEL_18;
  }
LABEL_10:
  v8 = 4 * i;
  v9 = LOBYTE(a1[v8 + 5112]);
  if ( (v9 != 3 || *(_BYTE *)(a3 + 8) == 3) && (BYTE1(a1[v8 + 5112]) != 1 || *(_BYTE *)(a3 + 9) == 1) )
  {
    if ( v9 != 3 && *(_BYTE *)(a3 + 8) == 3 )
      a1[6524] += a2;
    *(_OWORD *)&a1[v8 + 5110] = *(_OWORD *)a3;
LABEL_18:
    j_memset(v11, 0, 0x1Cu);
    v11[1] = 10;
    v11[4] = a1[5082];
    v11[3] = a1[6524];
    v11[5] = a1 + 5108;
    v11[6] = 4104;
    ShareSaveThread::addCmd(a1[10126], (int)v11, 1);
  }
LABEL_19:
  Ogre::LockFunctor::~LockFunctor(&v10);
}


//======================================================================
// CSMgr::alterUinCollection(void)
// address: 0x0030A540   size: 0x3C (60 bytes)
//======================================================================
int __fastcall CSMgr::alterUinCollection(CSMgr *this)
{
  _DWORD v3[8]; // [sp+4h] [bp-20h] BYREF

  j_memset(v3, 0, 0x1Cu);
  v3[1] = 12;
  v3[4] = *((_DWORD *)this + 5082);
  v3[5] = (char *)this + 24536;
  v3[6] = 1560;
  ShareSaveThread::addCmd(*((_DWORD *)this + 10126), (int)v3, 1);
  return 1;
}


//======================================================================
// CSMgr::getUinOWID(void)
// address: 0x0030A588   size: 0x8C (140 bytes)
//======================================================================
int __fastcall CSMgr::getUinOWID(CSMgr *this)
{
  int v2; // r4
  int i; // r6
  int v4; // r4
  int v6; // [sp+4h] [bp-10h]
  Ogre::LockSection *v7; // [sp+Ch] [bp-8h] BYREF

  v2 = *((_DWORD *)this + 6522) + 1;
  if ( v2 > 185 )
    v2 = 1;
  v7 = (Ogre::LockSection *)&g_Locker1;
  Ogre::LockSection::Lock((pthread_mutex_t *)&g_Locker1);
  v6 = v2 + 26;
  do
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= *((_DWORD *)this + 180) )
      {
        *((_DWORD *)this + 6522) = v2;
        CSMgr::alterUinCollection(this);
        v4 = 10000000 * v2 + *((_DWORD *)this + 5082);
        goto LABEL_11;
      }
      if ( *((_DWORD *)this + 196 * i + 182) / 10000000 == v2 )
        break;
    }
    ++v2;
  }
  while ( v2 != v6 );
  v4 = -1;
LABEL_11:
  Ogre::LockFunctor::~LockFunctor(&v7);
  return v4;
}


//======================================================================
// CSMgr::getBuddyOWorld(tagOWorld *)
// address: 0x0030A624   size: 0x140 (320 bytes)
//======================================================================
int __fastcall CSMgr::getBuddyOWorld(int a1, const char *a2)
{
  int v4; // r1
  int v5; // r2
  int v7; // r6
  int v8; // r0
  Ogre::LockSection *v9; // [sp+10h] [bp-344h] BYREF
  int v10; // [sp+14h] [bp-340h] BYREF
  _DWORD v11[7]; // [sp+1Ch] [bp-338h] BYREF
  _DWORD v12[197]; // [sp+38h] [bp-31Ch] BYREF

  j_memcpy(v12, a2, 0x310u);
  BYTE2(v12[42]) = 0;
  v12[190] = 0;
  v12[189] = 0;
  v12[30] = 0;
  j_strncpy((char *)&v12[181], a2 + 40, 0x1Fu);
  HIBYTE(v12[188]) = 0;
  v4 = *((_DWORD *)a2 + 31);
  v12[180] = *((_DWORD *)a2 + 9);
  v5 = *(_DWORD *)a2;
  v12[31] = v4;
  v12[41] = v5;
  CSMgr::getSvrTime(a1, &v10);
  v12[28] = 0;
  v12[29] = v10;
  j_strncpy((char *)&v12[10], (const char *)(a1 + 20393), 0x1Fu);
  HIBYTE(v12[17]) = 0;
  v12[9] = *(_DWORD *)(a1 + 20328);
  LOBYTE(v12[26]) = *(_BYTE *)(a1 + 20392);
  if ( *(int *)(a1 + 720) > 24 )
    return 0;
  v12[0] = CSMgr::getUinOWID((CSMgr *)a1);
  if ( v12[0] == -1 )
    return 0;
  v9 = (Ogre::LockSection *)&g_Locker1;
  Ogre::LockSection::Lock((pthread_mutex_t *)&g_Locker1);
  j_memcpy((void *)(a1 + 784 * *(_DWORD *)(a1 + 720) + 728), v12, 0x310u);
  ++*(_DWORD *)(a1 + 720);
  j_memset(v11, 0, sizeof(v11));
  v11[1] = 13;
  v11[2] = 6;
  v11[6] = 784;
  v7 = *(_DWORD *)a2;
  v11[3] = v12[0];
  v8 = *(_DWORD *)(a1 + 40504);
  v11[5] = v12;
  v11[4] = v7;
  ShareSaveThread::addCmd(v8, (int)v11, 1);
  Ogre::LockFunctor::~LockFunctor(&v9);
  return 1;
}


//======================================================================
// CSMgr::createWorld(tagOWorld *)
// address: 0x0030A784   size: 0x112 (274 bytes)
//======================================================================
int __fastcall CSMgr::createWorld(int a1, void *a2)
{
  int UinOWID; // r0
  int v6; // r3
  Ogre::LockSection *v7; // [sp+10h] [bp-2Ch] BYREF
  int v8; // [sp+14h] [bp-28h] BYREF
  _DWORD v9[8]; // [sp+1Ch] [bp-20h] BYREF

  if ( *(int *)(a1 + 720) > 24 )
    return 0;
  UinOWID = CSMgr::getUinOWID((CSMgr *)a1);
  *(_DWORD *)a2 = UinOWID;
  if ( UinOWID == -1 )
    return 0;
  CSMgr::getSvrTime(a1, &v8);
  *((_DWORD *)a2 + 29) = v8;
  *((_DWORD *)a2 + 30) = 0;
  *((_DWORD *)a2 + 28) = 0;
  *((_BYTE *)a2 + 170) = 0;
  j_strncpy((char *)a2 + 40, (const char *)(a1 + 20393), 0x1Fu);
  *((_BYTE *)a2 + 71) = 0;
  *((_DWORD *)a2 + 9) = *(_DWORD *)(a1 + 20328);
  *((_DWORD *)a2 + 31) = *(_DWORD *)(a1 + 20328);
  j_strncpy((char *)a2 + 128, (const char *)(a1 + 20393), 0x1Fu);
  *((_BYTE *)a2 + 159) = 0;
  *((_BYTE *)a2 + 160) = *(_BYTE *)(a1 + 20392);
  *((_DWORD *)a2 + 41) = 0;
  j_strncpy((char *)a2 + 72, *(const char **)(a1 + 644), 0x1Fu);
  *((_BYTE *)a2 + 103) = 0;
  *((_BYTE *)a2 + 104) = *(_BYTE *)(a1 + 20392);
  *((_DWORD *)a2 + 27) = 0;
  v7 = (Ogre::LockSection *)&g_Locker1;
  Ogre::LockSection::Lock((pthread_mutex_t *)&g_Locker1);
  j_memcpy((void *)(a1 + 784 * *(_DWORD *)(a1 + 720) + 728), a2, 0x310u);
  ++*(_DWORD *)(a1 + 720);
  j_memset(v9, 0, 0x1Cu);
  v6 = *(_DWORD *)(a1 + 20328);
  v9[5] = a2;
  v9[1] = 1;
  v9[4] = v6;
  v9[3] = *(_DWORD *)a2;
  v9[6] = 784;
  ShareSaveThread::addCmd(*(_DWORD *)(a1 + 40504), (int)v9, 1);
  Ogre::LockFunctor::~LockFunctor(&v7);
  return 1;
}


//======================================================================
// CSMgr::updateOWAchievement(int,tagAchievement *)
// address: 0x0030A8AC   size: 0x8C (140 bytes)
//======================================================================
void __fastcall CSMgr::updateOWAchievement(_DWORD *a1, Ogre::LockSection *a2, Ogre::LockSection *a3)
{
  int i; // r3
  _DWORD *v6; // r2
  Ogre::LockSection *v7; // r7
  int v8; // r0
  Ogre::LockSection *v10[8]; // [sp+Ch] [bp-20h] BYREF

  v10[0] = (Ogre::LockSection *)&g_Locker1;
  Ogre::LockSection::Lock((pthread_mutex_t *)&g_Locker1);
  for ( i = 0; ; ++i )
  {
    if ( i >= a1[180] )
      goto LABEL_5;
    v6 = &a1[196 * i];
    if ( a2 == (Ogre::LockSection *)v6[182] )
      break;
  }
  if ( v6[191] != a1[5082] )
  {
LABEL_5:
    Ogre::LockFunctor::~LockFunctor(v10);
    return;
  }
  Ogre::LockFunctor::~LockFunctor(v10);
  j_memset(v10, 0, 0x1Cu);
  v7 = (Ogre::LockSection *)a1[5082];
  v10[1] = (Ogre::LockSection *)(byte_9 + 1);
  v10[6] = (Ogre::LockSection *)&word_10;
  v10[4] = v7;
  v8 = a1[10126];
  v10[2] = (Ogre::LockSection *)(&dword_0 + 1);
  v10[3] = a2;
  v10[5] = a3;
  ShareSaveThread::addCmd(v8, (int)v10, 1);
}


//======================================================================
// CSMgr::addCredit(int,int)
// address: 0x0030A944   size: 0x36 (54 bytes)
//======================================================================
_DWORD *__fastcall CSMgr::addCredit(CSMgr *this, int a2, int a3)
{
  int v6; // r3
  _DWORD v8[8]; // [sp+4h] [bp-20h] BYREF

  j_memset(v8, 0, 0x1Cu);
  v8[1] = 11;
  v6 = *((_DWORD *)this + 5082);
  v8[2] = a2;
  v8[3] = a3;
  v8[4] = v6;
  return ShareSaveThread::addCmd(*((_DWORD *)this + 10126), (int)v8, 0);
}


//======================================================================
// CSMgr::abortOpenWorld(int)
// address: 0x0030A984   size: 0xA8 (168 bytes)
//======================================================================
void __fastcall CSMgr::abortOpenWorld(CSMgr *this, int a2)
{
  int i; // r3
  char *v5; // r2
  int v6; // r0
  int v7; // [sp+0h] [bp-2Ch]
  Ogre::LockSection *v8; // [sp+8h] [bp-24h] BYREF
  _DWORD v9[8]; // [sp+Ch] [bp-20h] BYREF

  v8 = (Ogre::LockSection *)&g_Locker1;
  Ogre::LockSection::Lock((pthread_mutex_t *)&g_Locker1);
  for ( i = 0; i < *((_DWORD *)this + 180); ++i )
  {
    v5 = (char *)this + 784 * i;
    v7 = 784 * i;
    if ( *((_DWORD *)v5 + 182) == a2 )
    {
      v5[898] = 0;
      if ( *((_DWORD *)this + 10124) == 1 )
      {
        *((_DWORD *)this + 10124) = 3;
      }
      else
      {
        j_memset(v9, 0, 0x1Cu);
        v9[4] = *((_DWORD *)this + 5082);
        v9[5] = (char *)this + v7 + 728;
        v9[6] = 784;
        v9[2] = 4;
        v9[1] = 1;
        v6 = *((_DWORD *)this + 10126);
        v9[3] = a2;
        ShareSaveThread::addCmd(v6, (int)v9, 1);
      }
      break;
    }
  }
  Ogre::LockFunctor::~LockFunctor(&v8);
}


//======================================================================
// CSMgr::continueOpenWorld(int)
// address: 0x0030AA3C   size: 0xC0 (192 bytes)
//======================================================================
void __fastcall CSMgr::continueOpenWorld(CSMgr *this, int a2)
{
  int v3; // r6
  char *v5; // r3
  char *v6; // r3
  int v7; // r0
  Ogre::LockSection *v8; // [sp+8h] [bp-24h] BYREF
  _DWORD v9[8]; // [sp+Ch] [bp-20h] BYREF

  v3 = *((_DWORD *)this + 10124);
  if ( v3 == 0 )
  {
    v8 = (Ogre::LockSection *)&g_Locker1;
    Ogre::LockSection::Lock((pthread_mutex_t *)&g_Locker1);
    while ( v3 < *((_DWORD *)this + 180) )
    {
      v5 = (char *)this + 784 * v3;
      if ( *((_DWORD *)v5 + 182) == a2 )
      {
        v6 = v5 + 896;
        if ( v6[2] != 0 )
        {
          *((_DWORD *)this + 10124) = 1;
          v6[2] = 2;
          j_memset(v9, 0, 0x1Cu);
          v9[4] = *((_DWORD *)this + 5082);
          v9[5] = (char *)this + 784 * v3 + 728;
          v9[6] = 784;
          v9[2] = 6;
          v9[3] = a2;
          v7 = *((_DWORD *)this + 10126);
          v9[1] = 1;
          ShareSaveThread::addCmd(v7, (int)v9, 1);
          v9[2] = 9;
          ShareSaveThread::addCmd(*((_DWORD *)this + 10127), (int)v9, 1);
        }
        break;
      }
      ++v3;
    }
    Ogre::LockFunctor::~LockFunctor(&v8);
  }
}


//======================================================================
// CSMgr::openOWorld(int,bool)
// address: 0x0030AB10   size: 0x1E2 (482 bytes)
//======================================================================
int __fastcall CSMgr::openOWorld(CSMgr *this, int a2, int a3)
{
  unsigned int v6; // r3
  int v7; // r0
  int v8; // r4
  int v10; // r3
  char *v11; // r4
  const char *v12; // r6
  int v13; // r0
  int i; // [sp+0h] [bp-7Ch]
  char *v15; // [sp+4h] [bp-78h]
  int StdioFileSize; // [sp+4h] [bp-78h]
  Ogre::LockSection *v17; // [sp+14h] [bp-68h] BYREF
  _DWORD v18[7]; // [sp+18h] [bp-64h] BYREF
  char s[32]; // [sp+34h] [bp-48h] BYREF
  char v20[32]; // [sp+54h] [bp-28h] BYREF

  v17 = (Ogre::LockSection *)&g_Locker1;
  Ogre::LockSection::Lock((pthread_mutex_t *)&g_Locker1);
  for ( i = 0; ; ++i )
  {
    if ( i >= *((_DWORD *)this + 180) )
      goto LABEL_12;
    v15 = (char *)this + 784 * i;
    if ( *((_DWORD *)v15 + 182) == a2 )
      break;
  }
  j_memset(v18, 0, sizeof(v18));
  v18[4] = *((_DWORD *)this + 5082);
  v18[5] = (char *)this + 784 * i + 728;
  v18[1] = 1;
  v18[3] = a2;
  v18[6] = 784;
  if ( a3 == 0 )
  {
    v15[898] = 0;
    v18[2] = 4;
    v7 = *((_DWORD *)this + 10126);
LABEL_10:
    ShareSaveThread::addCmd(v7, (int)v18, 1);
    v8 = 1;
    goto LABEL_11;
  }
  if ( *((_DWORD *)this + 10124) == 0 )
  {
    v6 = (unsigned __int8)v15[898];
    if ( v6 <= 1 )
    {
      *((_DWORD *)this + 10124) = 1;
      if ( v6 == 1 )
        v10 = 8;
      else
        v10 = 7;
      v18[2] = v10;
      v11 = (char *)this + 784 * i;
      v11[898] = 2;
      v11[1433] = 1;
      v11[1434] = 0;
      *((_DWORD *)v11 + 359) = 0;
      ++*((_DWORD *)v11 + 360);
      j_strncpy((char *)this + 784 * i + 800, *((const char **)this + 161), 0x1Fu);
      v11[831] = 0;
      v11[832] = *((_BYTE *)this + 20392);
      j_snprintf(s, 0x20u, "data/ow_%d.db", a2);
      j_snprintf(v20, 0x20u, "data/ow_%d.db-wal", a2);
      StdioFileSize = Ogre::FileManager::getStdioFileSize(
                        (Ogre::FileManager *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton,
                        s);
      *((_DWORD *)v11 + 209) = StdioFileSize
                             + Ogre::FileManager::getStdioFileSize(
                                 (Ogre::FileManager *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton,
                                 v20);
      Ogre::LogSetCurParam(
        (int)"D:/work/oworldsrc/client/iworld/cs/CSMgr.cpp",
        (_BYTE *)&stru_898.st_shndx + 1,
        2,
        (unsigned int)(v11 + 832));
      v12 = (const char *)Ogre::FileManager::getStdioFileSize(
                            (Ogre::FileManager *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton,
                            s);
      v13 = Ogre::FileManager::getStdioFileSize(
              (Ogre::FileManager *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton,
              v20);
      Ogre::LogMessage((Ogre *)"Upload OWorld Filesize: %d, %d", v12, v13);
      ShareSaveThread::addCmd(*((_DWORD *)this + 10127), (int)v18, 1);
      v18[2] = 6;
      v7 = *((_DWORD *)this + 10126);
      goto LABEL_10;
    }
  }
LABEL_12:
  v8 = 0;
LABEL_11:
  Ogre::LockFunctor::~LockFunctor(&v17);
  return v8;
}


//======================================================================
// CSMgr::memoOWorld(int,char *)
// address: 0x0030AD2C   size: 0xB0 (176 bytes)
//======================================================================
int __fastcall CSMgr::memoOWorld(CSMgr *this, int a2, char *a3)
{
  int i; // r3
  int v6; // r6
  char *v7; // r4
  int v8; // r4
  int v9; // r3
  Ogre::LockSection *v12; // [sp+8h] [bp-24h] BYREF
  _DWORD v13[8]; // [sp+Ch] [bp-20h] BYREF

  v12 = (Ogre::LockSection *)&g_Locker1;
  Ogre::LockSection::Lock((pthread_mutex_t *)&g_Locker1);
  for ( i = 0; ; ++i )
  {
    if ( i >= *((_DWORD *)this + 180) )
    {
      v8 = 0;
      goto LABEL_7;
    }
    v6 = 784 * i;
    v7 = (char *)this + 784 * i;
    if ( *((_DWORD *)v7 + 182) == a2 )
      break;
  }
  j_strncpy((char *)this + v6 + 1176, a3, 0xFFu);
  v7[1431] = 0;
  j_memset(v13, 0, 0x1Cu);
  v9 = *((_DWORD *)this + 5082);
  v13[1] = 1;
  v13[4] = v9;
  v13[2] = 4;
  v13[3] = a2;
  v13[6] = 784;
  v13[5] = (char *)this + v6 + 728;
  ShareSaveThread::addCmd(*((_DWORD *)this + 10126), (int)v13, 1);
  v8 = 1;
LABEL_7:
  Ogre::LockFunctor::~LockFunctor(&v12);
  return v8;
}


//======================================================================
// CSMgr::alterOWorldMisc(int,tagOWorldMisc *)
// address: 0x0030ADEC   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall CSMgr::alterOWorldMisc(_DWORD *a1, int a2, _OWORD *a3)
{
  int i; // r3
  int v7; // r6
  int v8; // r4
  int v9; // r3
  Ogre::LockSection *v11; // [sp+0h] [bp-24h] BYREF
  _DWORD v12[8]; // [sp+4h] [bp-20h] BYREF

  v11 = (Ogre::LockSection *)&g_Locker1;
  Ogre::LockSection::Lock((pthread_mutex_t *)&g_Locker1);
  for ( i = 0; ; ++i )
  {
    if ( i >= a1[180] )
    {
      v8 = 0;
      goto LABEL_7;
    }
    v7 = 196 * i;
    if ( a1[196 * i + 182] == a2 )
      break;
  }
  *(_OWORD *)&a1[v7 + 358] = *a3;
  j_memset(v12, 0, 0x1Cu);
  v9 = a1[5082];
  v12[1] = 1;
  v12[3] = a2;
  v12[4] = v9;
  v12[2] = 4;
  v12[6] = 784;
  v12[5] = &a1[v7 + 182];
  ShareSaveThread::addCmd(a1[10126], (int)v12, 1);
  v8 = 1;
LABEL_7:
  Ogre::LockFunctor::~LockFunctor(&v11);
  return v8;
}


//======================================================================
// CSMgr::addOWActive(int)
// address: 0x0030AE9C   size: 0x34 (52 bytes)
//======================================================================
_DWORD *__fastcall CSMgr::addOWActive(CSMgr *this, int a2)
{
  int v4; // r3
  _DWORD v6[7]; // [sp+4h] [bp-1Ch] BYREF

  j_memset(v6, 0, sizeof(v6));
  v4 = *((_DWORD *)this + 5082);
  v6[1] = 1;
  v6[3] = a2;
  v6[4] = v4;
  v6[2] = 10;
  return ShareSaveThread::addCmd(*((_DWORD *)this + 10126), (int)v6, 1);
}


//======================================================================
// CSMgr::flushSave(void)
// address: 0x0030AED8   size: 0xC4 (196 bytes)
//======================================================================
void __fastcall CSMgr::flushSave(CSMgr *this, unsigned int a2)
{
  int v3; // r2
  int v4; // r3
  int v5; // r2
  int i; // r3
  char *v7; // r2
  int v8; // r7
  Ogre::LockSection *v9; // [sp+Ch] [bp-8h] BYREF

  *((_DWORD *)this + 10123) = 1;
  v3 = *((_DWORD *)this + 10125);
  if ( v3 != 0 )
  {
    while ( *(_DWORD *)(*((_DWORD *)this + 10125) + 24) == 2 )
      a2 = (unsigned __int64)Ogre::ThreadSleep(0, a2, v3) >> 32;
  }
  v4 = *((_DWORD *)this + 10126);
  if ( v4 != 0 )
  {
    if ( *(_DWORD *)(v4 + 40) != 0 )
    {
      v9 = (Ogre::LockSection *)&g_Locker1;
      Ogre::LockSection::Lock((pthread_mutex_t *)&g_Locker1);
      for ( i = 0; ; ++i )
      {
        if ( i >= *((_DWORD *)this + 180) )
        {
          v8 = 0;
          goto LABEL_14;
        }
        v7 = (char *)this + 784 * i;
        if ( *((_DWORD *)v7 + 182) == *(_DWORD *)(*((_DWORD *)this + 10126) + 40) )
          break;
      }
      v8 = *((_DWORD *)v7 + 223);
LABEL_14:
      Ogre::LockFunctor::~LockFunctor(&v9);
      if ( v8 != 0 )
        CSMgr::addOWActive(this, v8);
    }
    while ( *(_DWORD *)(*((_DWORD *)this + 10126) + 24) == 2 )
      a2 = (unsigned __int64)Ogre::ThreadSleep(0, a2, v3) >> 32;
  }
  v5 = *((_DWORD *)this + 10127);
  if ( v5 != 0 )
  {
    while ( *(_DWORD *)(*((_DWORD *)this + 10127) + 24) == 2 )
      a2 = (unsigned __int64)Ogre::ThreadSleep(0, a2, v5) >> 32;
  }
  *((_DWORD *)this + 10123) = 0;
}


//======================================================================
// CSMgr::watchOWAttention(tagOWWatchAttention *)
// address: 0x0030AFB0   size: 0x4A (74 bytes)
//======================================================================
int __fastcall CSMgr::watchOWAttention(_DWORD *a1, int a2)
{
  int v3; // r5
  int v4; // r3
  _DWORD v7[8]; // [sp+Ch] [bp-20h] BYREF

  v3 = 0;
  if ( a1[10124] != 1 )
  {
    j_memset(v7, 0, 0x1Cu);
    v4 = a1[5082];
    v7[1] = 1;
    v7[4] = v4;
    v7[2] = 12;
    v7[5] = a2;
    v7[6] = 64;
    ShareSaveThread::addCmd(a1[10127], (int)v7, 1);
    return 1;
  }
  return v3;
}


//======================================================================
// CSMgr::watchOWList(tagOWWatch *)
// address: 0x0030B008   size: 0x4C (76 bytes)
//======================================================================
int __fastcall CSMgr::watchOWList(_DWORD *a1, int a2)
{
  int v3; // r5
  int v4; // r3
  _DWORD v7[8]; // [sp+Ch] [bp-20h] BYREF

  v3 = 0;
  if ( a1[10124] != 1 )
  {
    j_memset(v7, 0, 0x1Cu);
    v4 = a1[5082];
    v7[1] = 1;
    v7[4] = v4;
    v7[2] = 11;
    v7[5] = a2;
    v7[6] = 616;
    ShareSaveThread::addCmd(a1[10127], (int)v7, 1);
    return 1;
  }
  return v3;
}


//======================================================================
// CSMgr::buddyAttention(int)
// address: 0x0030B060   size: 0x92 (146 bytes)
//======================================================================
int __fastcall CSMgr::buddyAttention(CSMgr *this, int a2)
{
  int v4; // r2
  int i; // r3
  int v6; // r3
  int v7; // r4
  Ogre::LockSection *v9; // [sp+0h] [bp-20h] BYREF
  _DWORD v10[7]; // [sp+4h] [bp-1Ch] BYREF

  if ( *((_DWORD *)this + 10124) == 1 )
    return 0;
  v9 = (Ogre::LockSection *)&g_Locker1;
  Ogre::LockSection::Lock((pthread_mutex_t *)&g_Locker1);
  if ( a2 == *((_DWORD *)this + 6528) || (v4 = *((_DWORD *)this + 6530)) > 255 )
  {
LABEL_9:
    v7 = 0;
  }
  else
  {
    for ( i = 0; i < v4; ++i )
    {
      if ( *((_DWORD *)this + 14 * i + 6532) == a2 )
        goto LABEL_9;
    }
    j_memset(v10, 0, sizeof(v10));
    v10[1] = 13;
    v6 = *((_DWORD *)this + 5082);
    v10[3] = a2;
    v10[4] = v6;
    ShareSaveThread::addCmd(*((_DWORD *)this + 10127), (int)v10, 0);
    v7 = 1;
  }
  Ogre::LockFunctor::~LockFunctor(&v9);
  return v7;
}


//======================================================================
// CSMgr::buddyAttentionDel(int)
// address: 0x0030B10C   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall CSMgr::buddyAttentionDel(CSMgr *this, int a2)
{
  int v4; // r5
  int i; // r3
  int v6; // r4
  int v7; // r3
  Ogre::LockSection *v9; // [sp+0h] [bp-24h] BYREF
  _DWORD v10[8]; // [sp+4h] [bp-20h] BYREF

  v9 = (Ogre::LockSection *)&g_Locker1;
  Ogre::LockSection::Lock((pthread_mutex_t *)&g_Locker1);
  v4 = *((_DWORD *)this + 6530) - 1;
  for ( i = v4; ; --i )
  {
    if ( i < 0 )
    {
      v6 = 0;
      goto LABEL_9;
    }
    if ( *((_DWORD *)this + 14 * i + 6532) == a2 )
      break;
  }
  *((_DWORD *)this + 6530) = v4;
  if ( i != v4 )
    j_memmove((char *)this + 56 * i + 26128, (char *)this + 56 * i + 26184, 56 * (v4 - i));
  j_memset(v10, 0, 0x1Cu);
  v10[1] = 13;
  v7 = *((_DWORD *)this + 5082);
  v10[3] = a2;
  v10[4] = v7;
  v10[2] = 1;
  ShareSaveThread::addCmd(*((_DWORD *)this + 10126), (int)v10, 0);
  v6 = 1;
LABEL_9:
  Ogre::LockFunctor::~LockFunctor(&v9);
  return v6;
}


//======================================================================
// CSMgr::buddyWatch(int)
// address: 0x0030B1C8   size: 0x52 (82 bytes)
//======================================================================
int __fastcall CSMgr::buddyWatch(CSMgr *this, int a2)
{
  int v4; // r5
  int v5; // r3
  _DWORD v7[8]; // [sp+4h] [bp-20h] BYREF

  if ( *((_DWORD *)this + 10124) == 1 )
    return 0;
  v4 = 0;
  if ( a2 != *((_DWORD *)this + 6528) )
  {
    j_memset(v7, 0, 0x1Cu);
    v7[1] = 13;
    v5 = *((_DWORD *)this + 5082);
    v7[3] = a2;
    v4 = 1;
    v7[4] = v5;
    v7[2] = 2;
    ShareSaveThread::addCmd(*((_DWORD *)this + 10127), (int)v7, 0);
  }
  return v4;
}


//======================================================================
// CSMgr::updateBuddyInfo(tagBuddyInfo *)
// address: 0x0030B228   size: 0xA2 (162 bytes)
//======================================================================
int __fastcall CSMgr::updateBuddyInfo(_DWORD *a1, _DWORD *a2)
{
  int v4; // r4
  _DWORD *v5; // r0
  int v6; // r3
  int v7; // r4
  Ogre::LockSection *v9; // [sp+0h] [bp-24h] BYREF
  _DWORD v10[8]; // [sp+4h] [bp-20h] BYREF

  v4 = 0;
  v9 = (Ogre::LockSection *)&g_Locker1;
  Ogre::LockSection::Lock((pthread_mutex_t *)&g_Locker1);
  while ( v4 < a1[6530] )
  {
    if ( a1[14 * v4 + 6532] == *a2 )
    {
      v5 = &a1[14 * v4 + 6532];
      if ( a2 != v5 )
        j_memcpy(v5, a2, 0x38u);
      break;
    }
    ++v4;
  }
  if ( v4 >= a1[6530] )
  {
    v7 = 0;
  }
  else
  {
    j_memset(v10, 0, 0x1Cu);
    v10[1] = 13;
    v6 = a1[5082];
    v10[5] = a2;
    v10[4] = v6;
    v10[2] = 5;
    v10[3] = *a2;
    v10[6] = 56;
    ShareSaveThread::addCmd(a1[10126], (int)v10, 1);
    v7 = 1;
  }
  Ogre::LockFunctor::~LockFunctor(&v9);
  return v7;
}


//======================================================================
// CSMgr::checkMsg(void)
// address: 0x0030B2E0   size: 0x2F2 (754 bytes)
//======================================================================
void **__fastcall CSMgr::checkMsg(void **this, Ogre::LockSection *a2)
{
  void **v2; // r4
  unsigned int v3; // r7
  unsigned int v4; // r7
  _DWORD *inited; // r0
  Ogre::LockSection *v6; // r1
  Ogre::LockSection *v7; // r2
  _DWORD *v8; // r5
  _BYTE *v9; // r3
  int v10; // r0
  _BYTE *v11; // r3
  int v12; // r0
  char *v13; // r3
  unsigned int v14; // r7
  unsigned int v15; // r7
  unsigned int v16; // r7
  unsigned int v17; // r7
  unsigned int v18; // r7
  void **v19; // r5
  _BYTE *v20; // r3
  int v21; // r0
  _BYTE *v22; // r3
  int v23; // r0
  _BYTE *v24; // r3
  int v25; // r0
  _BYTE *v26; // r3
  int v27; // r0
  _BYTE *v28; // r3
  int v29; // r0
  char *v30; // r3
  unsigned int v31; // r6
  unsigned int v32; // r6
  unsigned int v33; // r6
  unsigned int v34; // r6
  unsigned int v35; // r6
  unsigned int v36; // r6
  unsigned int v37; // r6
  unsigned int v38; // r6
  void **v39; // r5
  _BYTE *v40; // r3
  void (__fastcall ***v41)(_DWORD, void *); // r0
  _DWORD *v42; // r7
  unsigned int i; // r6
  _BYTE *v44; // r3
  int v45; // r0
  _BYTE *v46; // r3
  int v47; // r0
  _BYTE *v48; // r3
  int v49; // r0
  _BYTE *v50; // r3
  int v51; // r0
  _BYTE *v52; // r3
  int v53; // r0
  _BYTE *v54; // r3
  int v55; // r0
  _BYTE *v56; // r3
  int v57; // r0
  _BYTE *v58; // r3
  int v59; // r0
  Ogre::LockSection *v60; // [sp+14h] [bp-8h] BYREF

  v2 = this;
  if ( *(this + 10125) != nullptr )
  {
    while ( 1 )
    {
      inited = (_DWORD *)ShareSaveThread::popInitResult((ShareSaveThread *)v2[10125], a2);
      v8 = inited;
      if ( inited == nullptr )
        break;
      v3 = 0;
      if ( *inited == 2 )
      {
        while ( 1 )
        {
          v9 = v2[1];
          if ( v3 >= ((_BYTE *)v2[2] - v9) >> 2 )
            break;
          v10 = *(_DWORD *)&v9[4 * v3++];
          (*(void (__fastcall **)(int, _DWORD, _DWORD))(*(_DWORD *)v10 + 8))(v10, v8[2], v8[3]);
        }
      }
      else
      {
        v4 = 0;
        if ( *inited == 10 )
        {
          while ( 1 )
          {
            v11 = v2[1];
            if ( v4 >= ((_BYTE *)v2[2] - v11) >> 2 )
              break;
            v12 = *(_DWORD *)&v11[4 * v4++];
            (*(void (__fastcall **)(int, _DWORD, _DWORD))(*(_DWORD *)v12 + 12))(v12, v8[1], v8[2]);
          }
        }
      }
      sub_304AA4(v8);
    }
    while ( 1 )
    {
      this = (void **)ShareSaveThread::popLoadResult((ShareSaveThread *)v2[10125], v6, v7);
      v19 = this;
      if ( this == nullptr )
        break;
      v13 = (char *)*this;
      v14 = (unsigned int)*this;
      if ( *this != nullptr )
      {
        v15 = 0;
        if ( v13 == (_BYTE *)&dword_0 + 2 )
        {
          while ( 1 )
          {
            v22 = v2[1];
            if ( v15 >= ((_BYTE *)v2[2] - v22) >> 2 )
              break;
            v23 = *(_DWORD *)&v22[4 * v15++];
            (*(void (__fastcall **)(int, void *))(*(_DWORD *)v23 + 20))(v23, v19[1]);
          }
        }
        else
        {
          v16 = 0;
          if ( v13 == &byte_7 )
          {
            while ( 1 )
            {
              v24 = v2[1];
              if ( v16 >= ((_BYTE *)v2[2] - v24) >> 2 )
                break;
              v25 = *(_DWORD *)&v24[4 * v16++];
              (*(void (__fastcall **)(int, void *))(*(_DWORD *)v25 + 28))(v25, v19[1]);
            }
          }
          else
          {
            v17 = 0;
            if ( v13 == &byte_6 )
            {
              while ( 1 )
              {
                v26 = v2[1];
                if ( v17 >= ((_BYTE *)v2[2] - v26) >> 2 )
                  break;
                v27 = *(_DWORD *)&v26[4 * v17++];
                (*(void (__fastcall **)(int, void *))(*(_DWORD *)v27 + 24))(v27, v19[1]);
              }
            }
            else
            {
              v18 = 0;
              if ( v13 == (_BYTE *)&dword_0 + 1 )
              {
                while ( 1 )
                {
                  v28 = v2[1];
                  if ( v18 >= ((_BYTE *)v2[2] - v28) >> 2 )
                    break;
                  v29 = *(_DWORD *)&v28[4 * v18++];
                  (*(void (__fastcall **)(int, void *))(*(_DWORD *)v29 + 32))(v29, v19[1]);
                }
              }
            }
          }
        }
      }
      else
      {
        while ( 1 )
        {
          v20 = v2[1];
          if ( v14 >= ((_BYTE *)v2[2] - v20) >> 2 )
            break;
          v21 = *(_DWORD *)&v20[4 * v14++];
          (*(void (__fastcall **)(int, void *))(*(_DWORD *)v21 + 16))(v21, v19[1]);
        }
      }
      j_free(v19[1]);
      j_free(v19);
    }
  }
  if ( v2[10127] != nullptr )
  {
    while ( 1 )
    {
      this = (void **)ShareSaveThread::popInitResult((ShareSaveThread *)v2[10127], a2);
      v39 = this;
      if ( this == nullptr )
        break;
      v30 = (char *)*this;
      v31 = (unsigned int)*this;
      if ( *this != nullptr )
      {
        if ( v30 == (_BYTE *)&dword_0 + 3 )
        {
          v42 = *(this + 2);
          if ( *(this + 1) == nullptr && (int)v2[6530] <= 255 )
          {
            v60 = (Ogre::LockSection *)&g_Locker1;
            Ogre::LockSection::Lock((pthread_mutex_t *)&g_Locker1);
            j_memcpy(&v2[14 * (_DWORD)v2[6530] + 6532], v42, 0x38u);
            v2[6530] = (char *)v2[6530] + 1;
            Ogre::LockFunctor::~LockFunctor(&v60);
            CSMgr::updateBuddyInfo(v2, v42);
          }
          for ( i = 0; ; ++i )
          {
            v44 = v2[1];
            if ( i >= ((_BYTE *)v2[2] - v44) >> 2 )
              break;
            v45 = *(_DWORD *)&v44[4 * i];
            (*(void (__fastcall **)(int, void *, _DWORD *))(*(_DWORD *)v45 + 36))(v45, v39[1], v42);
          }
        }
        else
        {
          v32 = 0;
          if ( v30 == &byte_7 )
          {
            while ( 1 )
            {
              v46 = v2[1];
              if ( v32 >= ((_BYTE *)v2[2] - v46) >> 2 )
                break;
              v47 = *(_DWORD *)&v46[4 * v32++];
              (*(void (__fastcall **)(int, void *, void *))(*(_DWORD *)v47 + 40))(v47, v39[1], v39[2]);
            }
          }
          else
          {
            v33 = 0;
            if ( v30 == &byte_8 )
            {
              while ( 1 )
              {
                v48 = v2[1];
                if ( v33 >= ((_BYTE *)v2[2] - v48) >> 2 )
                  break;
                v49 = *(_DWORD *)&v48[4 * v33++];
                (*(void (__fastcall **)(int, void *, void *))(*(_DWORD *)v49 + 56))(v49, v39[1], v39[2]);
              }
            }
            else
            {
              v34 = 0;
              if ( v30 == byte_9 )
              {
                while ( 1 )
                {
                  v50 = v2[1];
                  if ( v34 >= ((_BYTE *)v2[2] - v50) >> 2 )
                    break;
                  v51 = *(_DWORD *)&v50[4 * v34++];
                  (*(void (__fastcall **)(int, void *, void *))(*(_DWORD *)v51 + 60))(v51, v39[1], v39[2]);
                }
              }
              else
              {
                v35 = 0;
                if ( v30 == &byte_4 )
                {
                  while ( 1 )
                  {
                    v52 = v2[1];
                    if ( v35 >= ((_BYTE *)v2[2] - v52) >> 2 )
                      break;
                    v53 = *(_DWORD *)&v52[4 * v35++];
                    (*(void (__fastcall **)(int, void *, void *))(*(_DWORD *)v53 + 44))(v53, v39[1], v39[2]);
                  }
                }
                else
                {
                  v36 = 0;
                  if ( v30 == &byte_5 )
                  {
                    while ( 1 )
                    {
                      v54 = v2[1];
                      if ( v36 >= ((_BYTE *)v2[2] - v54) >> 2 )
                        break;
                      v55 = *(_DWORD *)&v54[4 * v36++];
                      (*(void (__fastcall **)(int, void *, void *))(*(_DWORD *)v55 + 48))(v55, v39[1], v39[2]);
                    }
                  }
                  else
                  {
                    v37 = 0;
                    if ( v30 == &byte_6 )
                    {
                      while ( 1 )
                      {
                        v56 = v2[1];
                        if ( v37 >= ((_BYTE *)v2[2] - v56) >> 2 )
                          break;
                        v57 = *(_DWORD *)&v56[4 * v37++];
                        (*(void (__fastcall **)(int, void *))(*(_DWORD *)v57 + 52))(v57, v39[2]);
                      }
                    }
                    else
                    {
                      v38 = 0;
                      if ( v30 == (_BYTE *)&dword_0 + 1 )
                      {
                        while ( 1 )
                        {
                          v58 = v2[1];
                          if ( v38 >= ((_BYTE *)v2[2] - v58) >> 2 )
                            break;
                          v59 = *(_DWORD *)&v58[4 * v38++];
                          (*(void (__fastcall **)(int, void *, void *, void *, void *))(*(_DWORD *)v59 + 4))(
                            v59,
                            v39[1],
                            v39[2],
                            v39[3],
                            v39[4]);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        while ( 1 )
        {
          v40 = v2[1];
          if ( v31 >= ((_BYTE *)v2[2] - v40) >> 2 )
            break;
          v41 = *(void (__fastcall ****)(_DWORD, void *))&v40[4 * v31++];
          (**v41)(v41, v39[1]);
        }
      }
      sub_304AA4(v39);
    }
  }
  return this;
}


//======================================================================
// CSMgr::getBuddyOffLineChat(void)
// address: 0x0030B5E8   size: 0x3C (60 bytes)
//======================================================================
_DWORD *__fastcall CSMgr::getBuddyOffLineChat(_DWORD *this)
{
  _DWORD *v1; // r5
  _DWORD v2[8]; // [sp+4h] [bp-20h] BYREF

  v1 = this;
  if ( *(this + 10124) != 1 )
  {
    j_memset(v2, 0, 0x1Cu);
    v2[1] = 13;
    v2[2] = 3;
    v2[4] = v1[5082];
    v2[3] = v2[4];
    return ShareSaveThread::addCmd(v1[10127], (int)v2, 0);
  }
  return this;
}


//======================================================================
// CSMgr::sendBuddyOffLineChat(int,char *)
// address: 0x0030B630   size: 0x4C (76 bytes)
//======================================================================
_DWORD *__fastcall CSMgr::sendBuddyOffLineChat(_DWORD *this, int a2, char *a3)
{
  _DWORD *v3; // r5
  int v6; // r3
  _DWORD v7[8]; // [sp+4h] [bp-20h] BYREF

  v3 = this;
  if ( *(this + 10124) != 1 )
  {
    j_memset(v7, 0, 0x1Cu);
    v7[1] = 13;
    v7[3] = a2;
    v6 = v3[5082];
    v7[5] = a3;
    v7[4] = v6;
    v7[2] = 4;
    v7[6] = j_strlen(a3) + 1;
    return ShareSaveThread::addCmd(v3[10127], (int)v7, 1);
  }
  return this;
}

