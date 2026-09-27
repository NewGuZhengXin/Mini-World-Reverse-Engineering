// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ShareSaveThread

//======================================================================
// ShareSaveThread::log_threadtask_begin(tagShareSaveTask *)
// address: 0x00305434   size: 0x90 (144 bytes)
//======================================================================
int __fastcall ShareSaveThread::log_threadtask_begin(Ogre::Timer *a1, _DWORD *a2)
{
  int SystemTick; // r0
  int v5; // r0
  unsigned int v6; // r3
  __int64 v7; // r0
  size_t v8; // r2
  const char *v9; // r1
  char s[984]; // [sp+24h] [bp-408h] BYREF

  SystemTick = Ogre::Timer::getSystemTick(a1, (__suseconds_t)a2);
  v5 = j_snprintf(
         s,
         0x400u,
         "task begin time %d, taskid %d, type %d, op %d threadtype %d, stmt %x, uinstmt %x, OWID %d  ",
         SystemTick,
         *a2,
         a2[1],
         a2[2],
         *((_DWORD *)a1 + 66),
         *((_DWORD *)a1 + 43),
         *((_DWORD *)a1 + 45),
         a2[3]);
  v6 = a2[1];
  if ( v6 == 2 )
  {
    HIDWORD(v7) = &s[v5];
    v8 = 1024 - v5;
    LODWORD(v7) = a2;
    log_chunk_task(v7, v8);
  }
  Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/cs/CSMgr.cpp", (const char *)&stru_A38.st_info, 2, v6);
  return Ogre::LogMessage((Ogre *)s, v9);
}


//======================================================================
// ShareSaveThread::popCmd(void)
// address: 0x00305554   size: 0x4E (78 bytes)
//======================================================================
int __fastcall ShareSaveThread::popCmd(ShareSaveThread *this, Ogre::LockSection *a2, Ogre::LockSection *a3)
{
  int *v4; // r3
  int v5; // r5
  _DWORD *v6; // r3
  _DWORD *v7; // r2
  int v8; // r2
  int v9; // r4
  Ogre::LockSection *v11[2]; // [sp+4h] [bp-8h] BYREF

  v11[0] = a2;
  v11[1] = a3;
  Ogre::LockFunctor::LockFunctor((Ogre::LockFunctor *)v11, (ShareSaveThread *)((char *)this + 84));
  v4 = *((int **)this + 13);
  if ( *((int **)this + 17) == v4 )
  {
    v9 = 0;
  }
  else
  {
    v5 = *v4;
    if ( v4 == (int *)(*((_DWORD *)this + 15) - 4) )
    {
      operator delete(*((void **)this + 14));
      v7 = (_DWORD *)(*((_DWORD *)this + 16) + 4);
      *((_DWORD *)this + 16) = v7;
      v6 = (_DWORD *)*v7;
      v8 = *v7 + 512;
      *((_DWORD *)this + 14) = v6;
      *((_DWORD *)this + 15) = v8;
    }
    else
    {
      v6 = v4 + 1;
    }
    *((_DWORD *)this + 13) = v6;
    v9 = v5;
  }
  Ogre::LockFunctor::~LockFunctor(v11);
  return v9;
}


//======================================================================
// ShareSaveThread::popInitResult(void)
// address: 0x003055A2   size: 0x50 (80 bytes)
//======================================================================
int __fastcall ShareSaveThread::popInitResult(ShareSaveThread *this, Ogre::LockSection *a2)
{
  int *v3; // r3
  int v4; // r6
  _DWORD *v5; // r3
  _DWORD *v6; // r2
  int v7; // r2
  int v8; // r4
  Ogre::LockSection *v10; // [sp+4h] [bp-4h] BYREF

  v10 = a2;
  Ogre::LockFunctor::LockFunctor((Ogre::LockFunctor *)&v10, (ShareSaveThread *)((char *)this + 84));
  v3 = *((int **)this + 24);
  if ( *((int **)this + 28) == v3 )
  {
    v8 = 0;
  }
  else
  {
    v4 = *v3;
    if ( v3 == (int *)(*((_DWORD *)this + 26) - 4) )
    {
      operator delete(*((void **)this + 25));
      v6 = (_DWORD *)(*((_DWORD *)this + 27) + 4);
      *((_DWORD *)this + 27) = v6;
      v5 = (_DWORD *)*v6;
      v7 = *v6 + 512;
      *((_DWORD *)this + 25) = v5;
      *((_DWORD *)this + 26) = v7;
    }
    else
    {
      v5 = v3 + 1;
    }
    *((_DWORD *)this + 24) = v5;
    v8 = v4;
  }
  Ogre::LockFunctor::~LockFunctor(&v10);
  return v8;
}


//======================================================================
// ShareSaveThread::popLoadResult(void)
// address: 0x00305624   size: 0x58 (88 bytes)
//======================================================================
int __fastcall ShareSaveThread::popLoadResult(ShareSaveThread *this, Ogre::LockSection *a2, Ogre::LockSection *a3)
{
  int *v4; // r3
  int v5; // r7
  _DWORD *v6; // r3
  _DWORD *v7; // r2
  int v8; // r2
  Ogre::LockSection *v10[2]; // [sp+4h] [bp-8h] BYREF

  v10[0] = a2;
  v10[1] = a3;
  Ogre::LockFunctor::LockFunctor((Ogre::LockFunctor *)v10, (ShareSaveThread *)((char *)this + 84));
  v4 = *((int **)this + 34);
  if ( *((int **)this + 38) == v4 )
  {
    v5 = 0;
  }
  else
  {
    v5 = *v4;
    if ( v4 == (int *)(*((_DWORD *)this + 36) - 4) )
    {
      operator delete(*((void **)this + 35));
      v7 = (_DWORD *)(*((_DWORD *)this + 37) + 4);
      *((_DWORD *)this + 37) = v7;
      v6 = (_DWORD *)*v7;
      v8 = *v7 + 512;
      *((_DWORD *)this + 35) = v6;
      *((_DWORD *)this + 36) = v8;
    }
    else
    {
      v6 = v4 + 1;
    }
    *((_DWORD *)this + 34) = v6;
  }
  Ogre::LockFunctor::~LockFunctor(v10);
  return v5;
}


//======================================================================
// ShareSaveThread::chunkSave2ChunkDB(tagChunkSave *,tagChunkSaveDB *)
// address: 0x003056A0   size: 0x86 (134 bytes)
//======================================================================
int __fastcall ShareSaveThread::chunkSave2ChunkDB(int a1, int a2, int a3)
{
  int meta_by_name; // r0
  int v6; // [sp+0h] [bp-Ch] BYREF
  char *v7; // [sp+4h] [bp-8h] BYREF
  int v8; // [sp+8h] [bp-4h]
  _DWORD v9[2]; // [sp+Ch] [bp+0h] BYREF
  char v10; // [sp+14h] [bp+8h] BYREF

  v9[0] = a2;
  v8 = 256000;
  v7 = &v10;
  v9[1] = 526728;
  meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "ChunkSave");
  if ( tdr_hton(meta_by_name, &v7, v9, 0) != 0 )
    return 0;
  v6 = 1;
  if ( compress(a3 + 32, &v6, (int)v7, v8) != 0 )
    return 0;
  *(_DWORD *)(a3 + 28) = v6;
  return 1;
}


//======================================================================
// ShareSaveThread::chunkSaveDB2ChunkSave(tagChunkSaveDB *,tagChunkSave *)
// address: 0x00305744   size: 0x58 (88 bytes)
//======================================================================
bool __fastcall ShareSaveThread::chunkSaveDB2ChunkSave(int a1, int a2, int a3)
{
  int v4; // r4
  int meta_by_name; // r0
  _DWORD v7[7]; // [sp+4h] [bp-24h] BYREF
  _BYTE v8[8]; // [sp+20h] [bp-8h] BYREF

  v7[0] = 1;
  v4 = 0;
  if ( uncompress(v8, v7, a2 + 32, *(_DWORD *)(a2 + 28)) == 0 )
  {
    meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "ChunkSave");
    v7[2] = 526728;
    v7[1] = a3;
    v7[3] = v8;
    v7[4] = v7[0];
    return tdr_ntoh(meta_by_name) == 0;
  }
  return v4;
}


//======================================================================
// ShareSaveThread::flatSaveDB2FlatSave(tagFlatSaveDB *,tagFlatSave *)
// address: 0x003057A8   size: 0x7E (126 bytes)
//======================================================================
bool __fastcall ShareSaveThread::flatSaveDB2FlatSave(int a1, int a2, int a3)
{
  int v4; // r5
  int meta_by_name; // r0
  _DWORD v7[5]; // [sp+0h] [bp-824h] BYREF
  _BYTE v8[2062]; // [sp+16h] [bp-80Eh] BYREF

  v4 = 0;
  v7[0] = 2048;
  if ( uncompress(v8, v7, a2 + 26, *(unsigned __int16 *)(a2 + 24)) == 0 )
  {
    meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "FlatSave");
    v7[2] = 2056;
    v7[1] = a3;
    v7[3] = v8;
    v7[4] = v7[0];
    return tdr_ntoh(meta_by_name) == 0;
  }
  return v4;
}


//======================================================================
// ShareSaveThread::loadFlatSaveDB(tagFlatSaveDB *)
// address: 0x00305844   size: 0x4 (4 bytes)
//======================================================================
int ShareSaveThread::loadFlatSaveDB()
{
  return 0;
}


//======================================================================
// ShareSaveThread::checkUinDB(bool,bool)
// address: 0x00305848   size: 0x152 (338 bytes)
//======================================================================
Kompex::SQLiteDatabase *__fastcall ShareSaveThread::checkUinDB(ShareSaveThread *this, int a2, int a3)
{
  Kompex::SQLiteStatement **v4; // r6
  Kompex::SQLiteDatabase **v5; // r5
  Kompex::SQLiteDatabase *v6; // r4
  const char *v7; // r7
  Kompex::SQLiteStatement *v8; // r7
  int v9; // r3
  Kompex::SQLiteDatabase *v10; // r0
  int v12; // [sp+4h] [bp-18h]
  int v13; // [sp+8h] [bp-14h]
  int v14; // [sp+Ch] [bp-10h]
  char *v15; // [sp+10h] [bp-Ch] BYREF
  Ogre::LockSection *v16; // [sp+14h] [bp-8h] BYREF

  v15 = &byte_55FB88;
  v4 = (Kompex::SQLiteStatement **)((char *)this + 180);
  v5 = (Kompex::SQLiteDatabase **)((char *)this + 176);
  if ( a3 != 0 )
  {
    if ( *v4 != nullptr )
    {
      (*(void (__fastcall **)(Kompex::SQLiteStatement *))(*(_DWORD *)*v4 + 4))(*v4);
      *v4 = nullptr;
    }
    if ( *v5 != nullptr )
    {
      (*(void (__fastcall **)(Kompex::SQLiteDatabase *))(*(_DWORD *)*v5 + 4))(*v5);
      *v5 = nullptr;
    }
  }
  else if ( *v5 == nullptr || *v4 == nullptr )
  {
    v16 = (Ogre::LockSection *)&g_Locker1;
    Ogre::LockSection::Lock((pthread_mutex_t *)&g_Locker1);
    if ( *v4 != nullptr )
    {
      (*(void (__fastcall **)(Kompex::SQLiteStatement *))(*(_DWORD *)*v4 + 4))(*v4);
      *v4 = nullptr;
    }
    if ( *v5 != nullptr )
    {
      (*(void (__fastcall **)(Kompex::SQLiteDatabase *))(*(_DWORD *)*v5 + 4))(*v5);
      *v5 = nullptr;
    }
    v7 = (const char *)Ogre::FileManager::gamePath2StdioPath((int *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton);
    if ( a2 != 0 )
    {
      v6 = (Kompex::SQLiteDatabase *)operator new(0x14u);
      Kompex::SQLiteDatabase::SQLiteDatabase(v6, v7, 6, nullptr);
    }
    else
    {
      v6 = (Kompex::SQLiteDatabase *)operator new(0x14u);
      Kompex::SQLiteDatabase::SQLiteDatabase(v6, v7, 2, nullptr);
    }
    if ( v6 != nullptr )
    {
      v8 = (Kompex::SQLiteStatement *)operator new(0x5Cu);
      Kompex::SQLiteStatement::SQLiteStatement(v8, v6);
      if ( v8 != nullptr )
      {
        *v5 = v6;
        *v4 = v8;
        ((void (__fastcall *)(_DWORD, const char *, _DWORD, _DWORD, _DWORD))sqlite3_exec)(
          *((_DWORD *)v6 + 1),
          "PRAGMA journal_mode=WAL;",
          0,
          0,
          0);
        sqlite3_exec(*((_DWORD *)*v5 + 1), "PRAGMA synchronous = NORMAL;", 0, 0, 0, v12, v13, v14, v15);
        sqlite3_wal_autocheckpoint(*((_DWORD *)*v5 + 1), -1);
        v6 = (Kompex::SQLiteDatabase *)(&dword_0 + 1);
      }
      else
      {
        v9 = *(_DWORD *)v6;
        v10 = v6;
        v6 = nullptr;
        (*(void (__fastcall **)(Kompex::SQLiteDatabase *))(v9 + 4))(v10);
      }
    }
    Ogre::LockFunctor::~LockFunctor(&v16);
LABEL_21:
    sub_3BDF80(&v15);
    return v6;
  }
  v6 = (Kompex::SQLiteDatabase *)(&dword_0 + 1);
  goto LABEL_21;
}


//======================================================================
// ShareSaveThread::loadOWorldDB(tagOWorld *)
// address: 0x003059B8   size: 0x4E (78 bytes)
//======================================================================
bool __fastcall ShareSaveThread::loadOWorldDB(ShareSaveThread *a1, int a2)
{
  int meta_by_name; // r4

  meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "OWorld");
  return meta_by_name != 0
      && ShareSaveThread::checkUinDB(a1, 0, 0) != nullptr
      && tdr_sqlite_select(a2, 784, meta_by_name, *((_DWORD *)a1 + 45)) == 0;
}


//======================================================================
// ShareSaveThread::setThreadTaskID(void)
// address: 0x00305A10   size: 0x98 (152 bytes)
//======================================================================
Kompex::SQLiteDatabase *__fastcall ShareSaveThread::setThreadTaskID(ShareSaveThread *this)
{
  int meta_by_name; // r7
  Kompex::SQLiteDatabase *result; // r0
  Kompex::SQLiteStatement **v4; // r6
  char v5[256]; // [sp+0h] [bp-334h] BYREF
  _DWORD v6[139]; // [sp+100h] [bp-234h] BYREF

  meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "UpTask");
  result = (Kompex::SQLiteDatabase *)sub_304AD0();
  if ( result != nullptr )
  {
    result = ShareSaveThread::checkUinDB(this, 0, 0);
    if ( result != nullptr )
    {
      v4 = (Kompex::SQLiteStatement **)((char *)this + 180);
      j_strcpy(v5, "select * from UpTask order by ID desc limit 1");
      Kompex::SQLiteStatement::Prepare(*v4, v5);
      if ( Kompex::SQLiteStatement::FetchRow(*v4) != 0 && tdr_sqlite_fetch(v6, 552, meta_by_name, *v4) == 0 )
        ShareSaveThread::taskid = v6[0] + 1;
      return (Kompex::SQLiteDatabase *)Kompex::SQLiteStatement::FreeQuery(*v4);
    }
  }
  return result;
}


//======================================================================
// ShareSaveThread::writeTaskRecord(tagShareSaveTask *)
// address: 0x00305AC0   size: 0x1BA (442 bytes)
//======================================================================
void *__fastcall ShareSaveThread::writeTaskRecord(ShareSaveThread *a1, int a2)
{
  int v3; // r2
  char *v4; // r3
  int v5; // r2
  char *v6; // r3
  int v7; // r2
  char *v8; // r1
  char *v9; // r2
  char *v10; // r0
  char *v11; // r1
  char *v12; // r5
  char *v13; // r0
  char *v14; // r1
  int v15; // r2
  char *v16; // r3
  char *v17; // r5
  char *v18; // r0
  int v19; // r2
  char *v20; // r1
  char *v21; // r1
  char *v22; // r1
  char *v23; // r2
  unsigned int v24; // r3
  int meta_by_name; // [sp+8h] [bp-23Ch]
  char *v28[139]; // [sp+10h] [bp-234h] BYREF

  meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "UpTask");
  j_memset(v28, 0, 0x228u);
  v3 = *(_DWORD *)(a2 + 4);
  v28[0] = *(char **)a2;
  LOBYTE(v28[1]) = v3;
  if ( ShareSaveThread::checkUinDB(a1, 0, 0) != nullptr )
  {
    v4 = *(char **)(a2 + 8);
    switch ( *(_DWORD *)(a2 + 4) )
    {
      case 1:
        v8 = *(char **)(a2 + 12);
        v9 = *(char **)(a2 + 16);
        v28[2] = *(char **)(a2 + 8);
        v28[3] = v8;
        v28[4] = v9;
        if ( (unsigned int)v4 <= 1 || v4 == &byte_4 )
        {
          v28[5] = *(char **)(*(_DWORD *)(a2 + 20) + 36);
          goto LABEL_26;
        }
        if ( v4 == &byte_9[1] )
          goto LABEL_26;
        return &_stack_chk_guard;
      case 2:
        if ( v4 == (_BYTE *)&dword_0 + 3 )
        {
          v5 = *(_DWORD *)(a2 + 20);
          v28[2] = (_BYTE *)(&dword_0 + 3);
          v28[3] = *(char **)v5;
          v28[4] = (char *)*(unsigned __int16 *)(v5 + 4);
          v28[5] = *(char **)(v5 + 8);
          v28[6] = *(char **)(v5 + 12);
          v28[7] = (char *)*(unsigned __int8 *)(v5 + 16);
          v6 = (char *)*(unsigned __int8 *)(v5 + 17);
          goto LABEL_18;
        }
        if ( v4 == nullptr )
        {
          v7 = *(_DWORD *)(a2 + 20);
          v28[2] = nullptr;
          v28[3] = *(char **)v7;
          v28[4] = (char *)*(unsigned __int16 *)(v7 + 4);
          v28[5] = *(char **)(v7 + 8);
          v28[6] = *(char **)(v7 + 12);
          goto LABEL_21;
        }
        return &_stack_chk_guard;
      case 3:
      case 0xB:
        v23 = *(char **)(a2 + 12);
        v28[2] = *(char **)(a2 + 8);
        v28[3] = v23;
        goto LABEL_25;
      case 4:
      case 7:
      case 8:
        v21 = *(char **)(a2 + 12);
        v19 = *(_DWORD *)(a2 + 20);
        v28[2] = *(char **)(a2 + 8);
        v28[3] = v21;
        goto LABEL_20;
      case 5:
        v18 = *(char **)(a2 + 12);
        v19 = *(_DWORD *)(a2 + 20);
        v28[2] = *(char **)(a2 + 8);
        v28[3] = v18;
LABEL_20:
        v28[4] = *(char **)(a2 + 16);
        v20 = *(char **)(v19 + 12);
        v28[8] = *(char **)(v19 + 8);
        v28[9] = v20;
        goto LABEL_21;
      case 6:
        v22 = *(char **)(a2 + 12);
        v28[2] = *(char **)(a2 + 8);
        v28[3] = v22;
LABEL_25:
        v28[4] = *(char **)(a2 + 16);
        goto LABEL_26;
      case 9:
        v15 = *(_DWORD *)(a2 + 20);
        v28[2] = *(char **)(a2 + 8);
        v16 = *(char **)(a2 + 12);
        v17 = *(char **)(a2 + 16);
        v28[3] = v16;
        v28[4] = v17;
        v6 = (char *)*(unsigned __int16 *)(v15 + 16);
LABEL_18:
        v28[8] = v6;
        v28[9] = nullptr;
LABEL_21:
        ++*((_DWORD *)a1 + 69);
        goto LABEL_26;
      case 0xA:
        v13 = *(char **)(a2 + 12);
        v14 = *(char **)(a2 + 16);
        v28[2] = *(char **)(a2 + 8);
        v28[3] = v13;
        v28[4] = v14;
        if ( v4 != nullptr )
          v28[5] = **(char ***)(a2 + 20);
        goto LABEL_26;
      case 0xC:
        v12 = *(char **)(a2 + 16);
        v28[2] = v4;
        v28[3] = v12;
        goto LABEL_26;
      case 0xD:
        v10 = *(char **)(a2 + 12);
        v11 = *(char **)(a2 + 16);
        v28[2] = *(char **)(a2 + 8);
        v28[3] = v10;
        v28[4] = v11;
        if ( v4 == &byte_4 )
        {
          j_strncpy((char *)&v28[10], *(const char **)(a2 + 20), 0x1FFu);
          HIBYTE(v28[137]) = 0;
        }
LABEL_26:
        tdr_sqlite_insert(v28, 552, meta_by_name, *((_DWORD *)a1 + 45));
        v24 = *((_DWORD *)a1 + 67) + 1;
        *((_DWORD *)a1 + 67) = v24;
        Ogre::LogSetCurParam(
          (int)"D:/work/oworldsrc/client/iworld/cs/CSMgr.cpp",
          (_BYTE *)&stru_1568.st_name + 3,
          2,
          v24);
        Ogre::LogMessage((Ogre *)"inert record task %d type %d op %d", v28[0], LOBYTE(v28[1]), v28[2]);
        Ogre::OSEvent::trigger((Ogre::OSEvent *)(*(_DWORD *)(g_CSMgr + 40508) + 8));
        break;
      default:
        return &_stack_chk_guard;
    }
  }
  return &_stack_chk_guard;
}


//======================================================================
// ShareSaveThread::doAddCreditTask(tagShareSaveTask *)
// address: 0x00305CA4   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall ShareSaveThread::doAddCreditTask(ShareSaveThread *a1, int a2)
{
  return ShareSaveThread::writeTaskRecord(a1, a2);
}


//======================================================================
// ShareSaveThread::checkTaskRecordDB(void)
// address: 0x00305CAC   size: 0x88 (136 bytes)
//======================================================================
Kompex::SQLiteDatabase *__fastcall ShareSaveThread::checkTaskRecordDB(Kompex::SQLiteDatabase *this)
{
  Kompex::SQLiteDatabase *v1; // r5
  int v2; // r3
  unsigned int v3; // r3
  const char *v4; // r1
  char s[256]; // [sp+4h] [bp-108h] BYREF

  v1 = this;
  if ( *((_DWORD *)this + 9) != *(_DWORD *)(*(_DWORD *)(g_CSMgr + 40508) + 32) )
  {
    this = ShareSaveThread::checkUinDB(this, 0, 0);
    if ( this != nullptr )
    {
      tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "UpTask");
      v2 = *(_DWORD *)(*(_DWORD *)(g_CSMgr + 40508) + 32);
      *((_DWORD *)v1 + 9) = v2;
      j_snprintf(s, 0x100u, "delete from UpTask where ID <= %d", v2);
      Kompex::SQLiteStatement::SqlStatement(*((Kompex::SQLiteStatement **)v1 + 45), s);
      Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/cs/CSMgr.cpp", (const char *)&stru_1578.st_info, 2, v3);
      return (Kompex::SQLiteDatabase *)Ogre::LogMessage((Ogre *)s, v4);
    }
  }
  return this;
}


//======================================================================
// ShareSaveThread::delTaskRecord(int,int)
// address: 0x00305D50   size: 0x10 (16 bytes)
//======================================================================
int __fastcall ShareSaveThread::delTaskRecord(int this, int a2, int a3)
{
  *(_DWORD *)(this + 32) = a2;
  if ( a3 != 0 )
  {
    this += 195;
    *(_BYTE *)this = 1;
  }
  return this;
}


//======================================================================
// ShareSaveThread::doTaskBuddyTaskUp(tagShareSaveTask *)
// address: 0x00305D60   size: 0x11A (282 bytes)
//======================================================================
int __fastcall ShareSaveThread::doTaskBuddyTaskUp(int result, int *a2)
{
  _BYTE *v3; // r7
  int v4; // r2
  int v5; // r3
  CSMgr *v6; // r0
  int v7; // r1
  int v8; // r0
  int v9; // r7
  const void *v10; // r1
  size_t v11; // r2
  int v12; // [sp+8h] [bp-4013Ch]
  ShareSaveThread *v13; // [sp+10h] [bp-40134h]
  _DWORD v14[12]; // [sp+30h] [bp-40114h] BYREF
  _DWORD v15[65593]; // [sp+60h] [bp-400E4h] BYREF

  v3 = (_BYTE *)(result + 192);
  v12 = a2[3];
  v13 = (ShareSaveThread *)result;
  if ( *(_BYTE *)(result + 192) != 0 )
  {
    result = CSMgr::loginOnline((CSMgr *)g_CSMgr);
    v4 = result;
    if ( result == 0 )
    {
      v5 = a2[2];
      if ( v5 == 1 )
      {
        if ( CSMgr::sendOnlineCSMsg(g_CSMgr) != 0 )
        {
          v6 = (CSMgr *)g_CSMgr;
          return CSMgr::logoutOnline(v6);
        }
        CSMgr::recvOnlineCSMsg(g_CSMgr);
LABEL_15:
        v6 = (CSMgr *)g_CSMgr;
        return CSMgr::logoutOnline(v6);
      }
      if ( v5 != 4 )
        goto LABEL_17;
      result = g_CSMgr;
      if ( *(_DWORD *)(g_CSMgr + 20328) != a2[4] )
      {
        v7 = *a2;
        v8 = (int)v13;
        return ShareSaveThread::delTaskRecord(v8, v7, v4);
      }
      if ( *v3 != 0 )
      {
        result = CSMgr::loginOnline((CSMgr *)g_CSMgr);
        if ( result == 0 )
        {
          v9 = g_CSMgr;
          j_memcpy(v14, (const void *)(g_CSMgr + 20392), 0x28u);
          v14[10] = *(_DWORD *)(g_CSMgr + 26108);
          v15[128] = v12;
          v10 = (const void *)a2[5];
          HIBYTE(v15[127]) = 0;
          v11 = a2[6];
          if ( v11 >= 0x200 )
            v11 = 511;
          j_memcpy(v15, v10, v11);
          if ( CSMgr::sendOnlineCSMsg(v9) != 0 )
            goto LABEL_15;
LABEL_17:
          CSMgr::logoutOnline((CSMgr *)g_CSMgr);
          v7 = *a2;
          v8 = (int)v13;
          v4 = 1;
          return ShareSaveThread::delTaskRecord(v8, v7, v4);
        }
      }
    }
  }
  return result;
}


//======================================================================
// ShareSaveThread::doUinCollectionTaskUp(tagShareSaveTask *)
// address: 0x00305EA8   size: 0xC0 (192 bytes)
//======================================================================
int __fastcall ShareSaveThread::doUinCollectionTaskUp(int a1, int *a2)
{
  int result; // r0
  void *v4; // [sp+4h] [bp-40138h]
  _BYTE v5[1560]; // [sp+28h] [bp-40114h] BYREF

  result = g_CSMgr;
  if ( a2[4] != *(_DWORD *)(g_CSMgr + 20328) )
    return ShareSaveThread::delTaskRecord(a1, *a2, 0);
  if ( *(_BYTE *)(a1 + 192) != 0 )
  {
    v4 = (void *)a2[5];
    result = CSMgr::loginOnline((CSMgr *)g_CSMgr);
    if ( result == 0 )
    {
      j_memcpy(v5, v4, sizeof(v5));
      if ( CSMgr::sendOnlineCSMsg(g_CSMgr) == 0 )
        CSMgr::recvOnlineCSMsg(g_CSMgr);
      return CSMgr::logoutOnline((CSMgr *)g_CSMgr);
    }
  }
  return result;
}


//======================================================================
// ShareSaveThread::doAddCreditTaskUp(tagShareSaveTask *)
// address: 0x00305F84   size: 0x8A (138 bytes)
//======================================================================
int __fastcall ShareSaveThread::doAddCreditTaskUp(ShareSaveThread *this, int *a2)
{
  int result; // r0

  result = g_CSMgr;
  if ( a2[4] != *(_DWORD *)(g_CSMgr + 20328) )
    return ShareSaveThread::delTaskRecord((int)this, *a2, 0);
  if ( *((_BYTE *)this + 192) != 0 )
  {
    result = CSMgr::loginOnline((CSMgr *)g_CSMgr);
    if ( result == 0 )
    {
      if ( CSMgr::sendOnlineCSMsg(g_CSMgr) == 0 )
        ShareSaveThread::delTaskRecord((int)this, *a2, 1);
      return CSMgr::logoutOnline((CSMgr *)g_CSMgr);
    }
  }
  return result;
}


//======================================================================
// ShareSaveThread::doAchievementTaskUp(tagShareSaveTask *)
// address: 0x00306028   size: 0x100 (256 bytes)
//======================================================================
void *__fastcall ShareSaveThread::doAchievementTaskUp(int a1, int *a2)
{
  int v3; // r2
  _OWORD *v4; // r1
  CSMgr *v5; // r0
  _QWORD v7[513]; // [sp+20h] [bp-40114h] BYREF

  v3 = a2[2];
  if ( v3 == 0 && a2[4] != *(_DWORD *)(g_CSMgr + 20328) )
  {
    ShareSaveThread::delTaskRecord(a1, *a2, v3);
    return &_stack_chk_guard;
  }
  if ( *(_BYTE *)(a1 + 192) != 0 && CSMgr::loginOnline((CSMgr *)g_CSMgr) == 0 )
  {
    v4 = (_OWORD *)a2[5];
    if ( a2[2] != 0 )
    {
      LODWORD(v7[0]) = a2[3];
      *(_OWORD *)&v7[1] = *v4;
      if ( CSMgr::sendOnlineCSMsg(g_CSMgr) == 0 )
      {
        CSMgr::recvOnlineCSMsg(g_CSMgr);
        goto LABEL_12;
      }
    }
    else
    {
      j_memcpy(v7, v4, sizeof(v7));
      if ( CSMgr::sendOnlineCSMsg(g_CSMgr) == 0 )
      {
        CSMgr::recvOnlineCSMsg(g_CSMgr);
LABEL_12:
        v5 = (CSMgr *)g_CSMgr;
        goto LABEL_13;
      }
    }
    v5 = (CSMgr *)g_CSMgr;
LABEL_13:
    CSMgr::logoutOnline(v5);
  }
  return &_stack_chk_guard;
}


//======================================================================
// ShareSaveThread::doFurnaceTaskUp(tagShareSaveTask *)
// address: 0x0030614C   size: 0xB2 (178 bytes)
//======================================================================
int __fastcall ShareSaveThread::doFurnaceTaskUp(int result, int a2)
{
  void *v2; // [sp+0h] [bp-40134h]
  _BYTE v3[960]; // [sp+20h] [bp-40114h] BYREF

  v2 = *(void **)(a2 + 20);
  if ( *(_BYTE *)(result + 192) != 0 )
  {
    result = CSMgr::loginOnline((CSMgr *)g_CSMgr);
    if ( result == 0 )
    {
      j_memcpy(v3, v2, sizeof(v3));
      if ( CSMgr::sendOnlineCSMsg(g_CSMgr) == 0 )
        CSMgr::recvOnlineCSMsg(g_CSMgr);
      return CSMgr::logoutOnline((CSMgr *)g_CSMgr);
    }
  }
  return result;
}


//======================================================================
// ShareSaveThread::doBoxTaskUp(tagShareSaveTask *)
// address: 0x00306218   size: 0xB0 (176 bytes)
//======================================================================
int __fastcall ShareSaveThread::doBoxTaskUp(int result, int a2)
{
  void *v2; // [sp+0h] [bp-40134h]
  _BYTE v3[8936]; // [sp+20h] [bp-40114h] BYREF

  v2 = *(void **)(a2 + 20);
  if ( *(_BYTE *)(result + 192) != 0 )
  {
    result = CSMgr::loginOnline((CSMgr *)g_CSMgr);
    if ( result == 0 )
    {
      j_memcpy(v3, v2, sizeof(v3));
      if ( CSMgr::sendOnlineCSMsg(g_CSMgr) == 0 )
        CSMgr::recvOnlineCSMsg(g_CSMgr);
      return CSMgr::logoutOnline((CSMgr *)g_CSMgr);
    }
  }
  return result;
}


//======================================================================
// ShareSaveThread::doMinecartTaskUp(tagShareSaveTask *)
// address: 0x003062E4   size: 0xB0 (176 bytes)
//======================================================================
int __fastcall ShareSaveThread::doMinecartTaskUp(int result, int a2)
{
  void *v2; // [sp+0h] [bp-40134h]
  _BYTE v3[104]; // [sp+20h] [bp-40114h] BYREF

  v2 = *(void **)(a2 + 20);
  if ( *(_BYTE *)(result + 192) != 0 )
  {
    result = CSMgr::loginOnline((CSMgr *)g_CSMgr);
    if ( result == 0 )
    {
      j_memcpy(v3, v2, sizeof(v3));
      if ( CSMgr::sendOnlineCSMsg(g_CSMgr) == 0 )
        CSMgr::recvOnlineCSMsg(g_CSMgr);
      return CSMgr::logoutOnline((CSMgr *)g_CSMgr);
    }
  }
  return result;
}


//======================================================================
// ShareSaveThread::doItemTaskUp(tagShareSaveTask *)
// address: 0x003063AC   size: 0xB2 (178 bytes)
//======================================================================
int __fastcall ShareSaveThread::doItemTaskUp(int result, int a2)
{
  void *v2; // [sp+0h] [bp-40134h]
  _BYTE v3[344]; // [sp+20h] [bp-40114h] BYREF

  v2 = *(void **)(a2 + 20);
  if ( *(_BYTE *)(result + 192) != 0 )
  {
    result = CSMgr::loginOnline((CSMgr *)g_CSMgr);
    if ( result == 0 )
    {
      j_memcpy(v3, v2, sizeof(v3));
      if ( CSMgr::sendOnlineCSMsg(g_CSMgr) == 0 )
        CSMgr::recvOnlineCSMsg(g_CSMgr);
      return CSMgr::logoutOnline((CSMgr *)g_CSMgr);
    }
  }
  return result;
}


//======================================================================
// ShareSaveThread::doMonTaskUp(tagShareSaveTask *)
// address: 0x00306478   size: 0xB2 (178 bytes)
//======================================================================
int __fastcall ShareSaveThread::doMonTaskUp(int result, int a2)
{
  void *v2; // [sp+0h] [bp-40134h]
  _BYTE v3[512]; // [sp+20h] [bp-40114h] BYREF

  v2 = *(void **)(a2 + 20);
  if ( *(_BYTE *)(result + 192) != 0 )
  {
    result = CSMgr::loginOnline((CSMgr *)g_CSMgr);
    if ( result == 0 )
    {
      j_memcpy(v3, v2, sizeof(v3));
      if ( CSMgr::sendOnlineCSMsg(g_CSMgr) == 0 )
        CSMgr::recvOnlineCSMsg(g_CSMgr);
      return CSMgr::logoutOnline((CSMgr *)g_CSMgr);
    }
  }
  return result;
}


//======================================================================
// ShareSaveThread::doChunkSaveUp(tagShareSaveTask *)
// address: 0x00306544   size: 0x32 (50 bytes)
//======================================================================
int __fastcall ShareSaveThread::doChunkSaveUp(int result, int *a2)
{
  int v2; // r5

  v2 = result;
  if ( *(_BYTE *)(result + 192) != 0 )
  {
    result = CSMgr::loginOnline((CSMgr *)g_CSMgr);
    if ( result == 0 )
    {
      CSMgr::logoutOnline((CSMgr *)g_CSMgr);
      return ShareSaveThread::delTaskRecord(v2, *a2, 1);
    }
  }
  return result;
}


//======================================================================
// ShareSaveThread::doFlatSave(tagShareSaveTask *)
// address: 0x0030657C   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall ShareSaveThread::doFlatSave(ShareSaveThread *a1, int a2)
{
  return ShareSaveThread::writeTaskRecord(a1, a2);
}


//======================================================================
// ShareSaveThread::doGlobalTaskUp(tagShareSaveTask *)
// address: 0x00306584   size: 0xB0 (176 bytes)
//======================================================================
int __fastcall ShareSaveThread::doGlobalTaskUp(int result, int a2)
{
  void *v2; // [sp+0h] [bp-40134h]
  _BYTE v3[4184]; // [sp+20h] [bp-40114h] BYREF

  v2 = *(void **)(a2 + 20);
  if ( *(_BYTE *)(result + 192) != 0 )
  {
    result = CSMgr::loginOnline((CSMgr *)g_CSMgr);
    if ( result == 0 )
    {
      j_memcpy(v3, v2, sizeof(v3));
      if ( CSMgr::sendOnlineCSMsg(g_CSMgr) == 0 )
        CSMgr::recvOnlineCSMsg(g_CSMgr);
      return CSMgr::logoutOnline((CSMgr *)g_CSMgr);
    }
  }
  return result;
}


//======================================================================
// ShareSaveThread::doRoleTaskUp(tagShareSaveTask *)
// address: 0x00306650   size: 0xB0 (176 bytes)
//======================================================================
int __fastcall ShareSaveThread::doRoleTaskUp(int result, int a2)
{
  void *v2; // [sp+0h] [bp-40134h]
  _BYTE v3[13560]; // [sp+20h] [bp-40114h] BYREF

  v2 = *(void **)(a2 + 20);
  if ( *(_BYTE *)(result + 192) != 0 )
  {
    result = CSMgr::loginOnline((CSMgr *)g_CSMgr);
    if ( result == 0 )
    {
      j_memcpy(v3, v2, sizeof(v3));
      if ( CSMgr::sendOnlineCSMsg(g_CSMgr) == 0 )
        CSMgr::recvOnlineCSMsg(g_CSMgr);
      return CSMgr::logoutOnline((CSMgr *)g_CSMgr);
    }
  }
  return result;
}


//======================================================================
// ShareSaveThread::writeLoadWorldTask(tagLoadWorldTask *)
// address: 0x0030671C   size: 0x52 (82 bytes)
//======================================================================
Kompex::SQLiteDatabase *__fastcall ShareSaveThread::writeLoadWorldTask(ShareSaveThread *a1, int a2)
{
  Kompex::SQLiteDatabase *v4; // r4
  int meta_by_name; // r0

  v4 = ShareSaveThread::checkUinDB(a1, 0, 0);
  if ( v4 != nullptr )
  {
    meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "LoadWorldTask");
    if ( tdr_sqlite_update(a2, 24, meta_by_name, *((_DWORD *)a1 + 47)) != 0 )
      return nullptr;
    else
      ++*((_DWORD *)a1 + 68);
  }
  return v4;
}


//======================================================================
// ShareSaveThread::haveLoadWorldTask(tagLoadWorldTask *,int)
// address: 0x00306778   size: 0x46 (70 bytes)
//======================================================================
Kompex::SQLiteDatabase *__fastcall ShareSaveThread::haveLoadWorldTask(ShareSaveThread *a1, _DWORD *a2, int a3)
{
  Kompex::SQLiteDatabase *result; // r0
  int meta_by_name; // r0

  result = ShareSaveThread::checkUinDB(a1, 0, 0);
  if ( result != nullptr )
  {
    *a2 = a3;
    meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "LoadWorldTask");
    return (Kompex::SQLiteDatabase *)(tdr_sqlite_select(a2, 24, meta_by_name, *((_DWORD *)a1 + 47)) == 0);
  }
  return result;
}


//======================================================================
// ShareSaveThread::mergeFlats2Chunk(tagFlatSaveDBs *)
// address: 0x00306880   size: 0x2 (2 bytes)
//======================================================================
void ShareSaveThread::mergeFlats2Chunk()
{
  ;
}


//======================================================================
// ShareSaveThread::delLoadWorldTask(int)
// address: 0x00306884   size: 0x48 (72 bytes)
//======================================================================
Kompex::SQLiteDatabase *__fastcall ShareSaveThread::delLoadWorldTask(ShareSaveThread *this, int a2)
{
  Kompex::SQLiteDatabase *result; // r0
  int meta_by_name; // r0
  int v6; // r3
  int v7[7]; // [sp+8h] [bp-1Ch] BYREF

  result = ShareSaveThread::checkUinDB(this, 0, 0);
  if ( result != nullptr )
  {
    meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "LoadWorldTask");
    v6 = *((_DWORD *)this + 47);
    v7[0] = a2;
    return (Kompex::SQLiteDatabase *)(tdr_sqlite_delete(v7, 24, meta_by_name, v6, 0) == 0);
  }
  return result;
}


//======================================================================
// ShareSaveThread::doWorldTaskUp(tagShareSaveTask *)
// address: 0x003068D4   size: 0xE8 (232 bytes)
//======================================================================
int __fastcall ShareSaveThread::doWorldTaskUp(int result, int a2)
{
  int v3; // r7
  CSMgr *v4; // r0
  _DWORD v5[65605]; // [sp+28h] [bp-40114h] BYREF

  v3 = result;
  if ( *(_BYTE *)(result + 192) != 0 )
  {
    result = CSMgr::loginOnline((CSMgr *)g_CSMgr);
    if ( result == 0 )
    {
      if ( *(_DWORD *)(a2 + 8) == 10 )
      {
        v5[1] = 0;
        v5[0] = 1;
        if ( CSMgr::sendOnlineCSMsg(g_CSMgr) == 0 )
        {
          CSMgr::logoutOnline((CSMgr *)g_CSMgr);
          return ShareSaveThread::delTaskRecord(v3, *(_DWORD *)a2, 1);
        }
      }
      else
      {
        j_memcpy(v5, *(const void **)(a2 + 20), *(_DWORD *)(a2 + 24));
        if ( CSMgr::sendOnlineCSMsg(g_CSMgr) == 0 )
        {
          CSMgr::recvOnlineCSMsg(g_CSMgr);
          v4 = (CSMgr *)g_CSMgr;
          return CSMgr::logoutOnline(v4);
        }
      }
      v4 = (CSMgr *)g_CSMgr;
      return CSMgr::logoutOnline(v4);
    }
  }
  return result;
}


//======================================================================
// ShareSaveThread::delOWTask(int)
// address: 0x003069D4   size: 0x11C (284 bytes)
//======================================================================
Kompex::SQLiteDatabase *__fastcall ShareSaveThread::delOWTask(ShareSaveThread *this, int a2)
{
  Kompex::SQLiteStatement **v4; // r5
  Kompex::SQLiteDatabase *v6; // [sp+8h] [bp-94h]
  char s[128]; // [sp+14h] [bp-88h] BYREF

  v6 = ShareSaveThread::checkUinDB(this, 0, 0);
  if ( v6 != nullptr )
  {
    v4 = (Kompex::SQLiteStatement **)((char *)this + 180);
    j_snprintf(s, 0x80u, "delete from UpTask where Type=%d and (data1=0 or data1=4) and data2=%d", 1, a2);
    Kompex::SQLiteStatement::SqlStatement(*v4, s);
    j_snprintf(s, 0x80u, "delete from UpTask where Type=%d and data2=%d", 2, a2);
    Kompex::SQLiteStatement::SqlStatement(*v4, s);
    j_snprintf(s, 0x80u, "delete from UpTask where Type=%d and data2=%d", 10, a2);
    Kompex::SQLiteStatement::SqlStatement(*v4, s);
    j_snprintf(s, 0x80u, "delete from UpTask where Type=%d and data2=%d", 9, a2);
    Kompex::SQLiteStatement::SqlStatement(*v4, s);
    j_snprintf(s, 0x80u, "delete from UpTask where Type=%d and data2=%d", 5, a2);
    Kompex::SQLiteStatement::SqlStatement(*v4, s);
    j_snprintf(s, 0x80u, "delete from UpTask where Type=%d and data2=%d", 8, a2);
    Kompex::SQLiteStatement::SqlStatement(*v4, s);
    j_snprintf(s, 0x80u, "delete from UpTask where Type=%d and data2=%d", 7, a2);
    Kompex::SQLiteStatement::SqlStatement(*v4, s);
    j_snprintf(s, 0x80u, "delete from UpTask where Type=%d and data2=%d", 4, a2);
    Kompex::SQLiteStatement::SqlStatement(*v4, s);
    j_snprintf(s, 0x80u, "delete from UpTask where Type=%d and data2=%d", 6, a2);
    Kompex::SQLiteStatement::SqlStatement(*v4, s);
    j_snprintf(s, 0x80u, "delete from UpTask where Type=%d and data2=%d", 3, a2);
    Kompex::SQLiteStatement::SqlStatement(*v4, s);
  }
  return v6;
}


//======================================================================
// ShareSaveThread::checkCurrDB(int,bool)
// address: 0x00306AFC   size: 0x15C (348 bytes)
//======================================================================
int __fastcall ShareSaveThread::checkCurrDB(ShareSaveThread *this, int a2, int a3)
{
  Kompex::SQLiteStatement **v4; // r7
  Kompex::SQLiteDatabase **v5; // r4
  int v6; // r0
  Kompex::SQLiteDatabase *v7; // r6
  Kompex::SQLiteStatement *v8; // r6
  Kompex::SQLiteDatabase *v9; // r6
  Kompex::SQLiteDatabase *v10; // r3
  int v11; // r4
  char *v13; // [sp+8h] [bp-1Ch]
  char *v14; // [sp+8h] [bp-1Ch]
  Ogre::LockSection *v17; // [sp+18h] [bp-Ch] BYREF
  _DWORD v18[2]; // [sp+1Ch] [bp-8h] BYREF

  if ( *((_DWORD *)this + 10) != a2 )
  {
    v4 = (Kompex::SQLiteStatement **)((char *)this + 172);
    v17 = (Ogre::LockSection *)&g_OWLocker1;
    Ogre::LockSection::Lock((pthread_mutex_t *)&g_OWLocker1);
    if ( *v4 != nullptr )
    {
      (*(void (__fastcall **)(Kompex::SQLiteStatement *))(*(_DWORD *)*v4 + 4))(*v4);
      *v4 = nullptr;
    }
    v5 = (Kompex::SQLiteDatabase **)((char *)this + 168);
    v6 = *((_DWORD *)this + 42);
    if ( v6 != 0 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 4))(v6);
      *v5 = nullptr;
    }
    if ( a2 == 0 )
    {
      *((_DWORD *)this + 10) = 0;
LABEL_17:
      v11 = 1;
      goto LABEL_18;
    }
    if ( a3 != 0 )
    {
      v18[0] = &byte_55FB88;
      v13 = (char *)sub_304C24((int)v18, a2);
      v7 = (Kompex::SQLiteDatabase *)operator new(0x14u);
      Kompex::SQLiteDatabase::SQLiteDatabase(v7, v13, 6, nullptr);
      *v5 = v7;
      v8 = (Kompex::SQLiteStatement *)operator new(0x5Cu);
      Kompex::SQLiteStatement::SQLiteStatement(v8, *v5);
    }
    else
    {
      if ( sub_304AEC(a2) == 0 )
        goto LABEL_12;
      v18[0] = &byte_55FB88;
      v14 = (char *)sub_304C24((int)v18, a2);
      v9 = (Kompex::SQLiteDatabase *)operator new(0x14u);
      Kompex::SQLiteDatabase::SQLiteDatabase(v9, v14, 2, nullptr);
      *v5 = v9;
      v8 = (Kompex::SQLiteStatement *)operator new(0x5Cu);
      Kompex::SQLiteStatement::SQLiteStatement(v8, *v5);
    }
    *v4 = v8;
    sub_3BDF80(v18);
    v10 = *v5;
    if ( *v5 != nullptr && *v4 != nullptr )
    {
      *((_DWORD *)this + 10) = a2;
      sqlite3_exec(*((_DWORD *)v10 + 1), "PRAGMA journal_mode=WAL;", 0, 0, 0);
      sqlite3_exec(*((_DWORD *)*v5 + 1), "PRAGMA synchronous = NORMAL;", 0, 0, 0);
      sqlite3_wal_autocheckpoint(*((_DWORD *)*v5 + 1), -1);
      goto LABEL_17;
    }
LABEL_12:
    v11 = 0;
LABEL_18:
    Ogre::LockFunctor::~LockFunctor(&v17);
    return v11;
  }
  return 1;
}


//======================================================================
// ShareSaveThread::doTransaction(tagShareSaveTask *)
// address: 0x00306C6C   size: 0x1C (28 bytes)
//======================================================================
Kompex::SQLiteDatabase *__fastcall ShareSaveThread::doTransaction(ShareSaveThread *a1, int a2)
{
  Kompex::SQLiteDatabase *result; // r0

  result = (Kompex::SQLiteDatabase *)ShareSaveThread::checkCurrDB(a1, *(_DWORD *)(a2 + 12), 0);
  if ( result != nullptr )
    return ShareSaveThread::checkUinDB(a1, 0, 0);
  return result;
}


//======================================================================
// ShareSaveThread::updateOWAchievement(int,tagAchievement *)
// address: 0x00306C88   size: 0x40 (64 bytes)
//======================================================================
int __fastcall ShareSaveThread::updateOWAchievement(ShareSaveThread *a1, int a2, int a3)
{
  int result; // r0
  int meta_by_name; // r0

  result = ShareSaveThread::checkCurrDB(a1, a2, 0);
  if ( result != 0 )
  {
    meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "Achievement");
    return tdr_sqlite_update(a3, 16, meta_by_name, *((_DWORD *)a1 + 43)) == 0;
  }
  return result;
}


//======================================================================
// ShareSaveThread::updateOWFurnaceDB(int,tagFurnace *)
// address: 0x00306CD0   size: 0x42 (66 bytes)
//======================================================================
int __fastcall ShareSaveThread::updateOWFurnaceDB(ShareSaveThread *a1, int a2, int a3)
{
  int result; // r0
  int meta_by_name; // r0

  result = ShareSaveThread::checkCurrDB(a1, a2, 0);
  if ( result != 0 )
  {
    meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "Furnace");
    return tdr_sqlite_update(a3, 960, meta_by_name, *((_DWORD *)a1 + 43)) == 0;
  }
  return result;
}


//======================================================================
// ShareSaveThread::delOWFurnaceDB(int,tagFurnace *)
// address: 0x00306D1C   size: 0x42 (66 bytes)
//======================================================================
int __fastcall ShareSaveThread::delOWFurnaceDB(ShareSaveThread *a1, int a2, int a3)
{
  int result; // r0
  int meta_by_name; // r0

  result = ShareSaveThread::checkCurrDB(a1, a2, 0);
  if ( result != 0 )
  {
    meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "Furnace");
    return tdr_sqlite_delete(a3, 960, meta_by_name, *((_DWORD *)a1 + 43), 0) == 0;
  }
  return result;
}


//======================================================================
// ShareSaveThread::doFurnaceTask(tagShareSaveTask *)
// address: 0x00306D68   size: 0x20 (32 bytes)
//======================================================================
void __fastcall ShareSaveThread::doFurnaceTask(ShareSaveThread *a1, _DWORD *a2)
{
  int v3; // r3
  int v4; // r2
  int v5; // r1

  v3 = a2[2];
  v4 = a2[5];
  v5 = a2[3];
  if ( v3 != 0 )
    ShareSaveThread::delOWFurnaceDB(a1, v5, v4);
  else
    ShareSaveThread::updateOWFurnaceDB(a1, v5, v4);
  j_free((void *)a2[5]);
}


//======================================================================
// ShareSaveThread::updateOWBoxDB(int,tagBox *)
// address: 0x00306D88   size: 0x40 (64 bytes)
//======================================================================
int __fastcall ShareSaveThread::updateOWBoxDB(ShareSaveThread *a1, int a2, int a3)
{
  int result; // r0
  int meta_by_name; // r0

  result = ShareSaveThread::checkCurrDB(a1, a2, 0);
  if ( result != 0 )
  {
    meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "Box");
    return tdr_sqlite_update(a3, 8936, meta_by_name, *((_DWORD *)a1 + 43)) == 0;
  }
  return result;
}


//======================================================================
// ShareSaveThread::delOWBoxDB(int,tagBox *)
// address: 0x00306DD4   size: 0x40 (64 bytes)
//======================================================================
int __fastcall ShareSaveThread::delOWBoxDB(ShareSaveThread *a1, int a2, int a3)
{
  int result; // r0
  int meta_by_name; // r0

  result = ShareSaveThread::checkCurrDB(a1, a2, 0);
  if ( result != 0 )
  {
    meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "Box");
    return tdr_sqlite_delete(a3, 8936, meta_by_name, *((_DWORD *)a1 + 43), 0) == 0;
  }
  return result;
}


//======================================================================
// ShareSaveThread::doBoxTask(tagShareSaveTask *)
// address: 0x00306E20   size: 0x20 (32 bytes)
//======================================================================
void __fastcall ShareSaveThread::doBoxTask(ShareSaveThread *a1, _DWORD *a2)
{
  int v3; // r3
  int v4; // r2
  int v5; // r1

  v3 = a2[2];
  v4 = a2[5];
  v5 = a2[3];
  if ( v3 != 0 )
    ShareSaveThread::delOWBoxDB(a1, v5, v4);
  else
    ShareSaveThread::updateOWBoxDB(a1, v5, v4);
  j_free((void *)a2[5]);
}


//======================================================================
// ShareSaveThread::updateOWMinecartDB(int,tagMineCart *)
// address: 0x00306E40   size: 0x40 (64 bytes)
//======================================================================
int __fastcall ShareSaveThread::updateOWMinecartDB(ShareSaveThread *a1, int a2, int a3)
{
  int result; // r0
  int meta_by_name; // r0

  result = ShareSaveThread::checkCurrDB(a1, a2, 0);
  if ( result != 0 )
  {
    meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "MineCart");
    return tdr_sqlite_update(a3, 104, meta_by_name, *((_DWORD *)a1 + 43)) == 0;
  }
  return result;
}


//======================================================================
// ShareSaveThread::delOWMinecartDB(int,tagMineCart *)
// address: 0x00306E88   size: 0x40 (64 bytes)
//======================================================================
int __fastcall ShareSaveThread::delOWMinecartDB(ShareSaveThread *a1, int a2, int a3)
{
  int result; // r0
  int meta_by_name; // r0

  result = ShareSaveThread::checkCurrDB(a1, a2, 0);
  if ( result != 0 )
  {
    meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "MineCart");
    return tdr_sqlite_delete(a3, 104, meta_by_name, *((_DWORD *)a1 + 43), 0) == 0;
  }
  return result;
}


//======================================================================
// ShareSaveThread::doMinecartTask(tagShareSaveTask *)
// address: 0x00306ED0   size: 0x20 (32 bytes)
//======================================================================
void __fastcall ShareSaveThread::doMinecartTask(ShareSaveThread *a1, _DWORD *a2)
{
  int v3; // r3
  int v4; // r2
  int v5; // r1

  v3 = a2[2];
  v4 = a2[5];
  v5 = a2[3];
  if ( v3 != 0 )
    ShareSaveThread::delOWMinecartDB(a1, v5, v4);
  else
    ShareSaveThread::updateOWMinecartDB(a1, v5, v4);
  j_free((void *)a2[5]);
}


//======================================================================
// ShareSaveThread::updateOWItemDB(int,tagDropItem *)
// address: 0x00306EF0   size: 0x42 (66 bytes)
//======================================================================
int __fastcall ShareSaveThread::updateOWItemDB(ShareSaveThread *a1, int a2, int a3)
{
  int result; // r0
  int meta_by_name; // r0

  result = ShareSaveThread::checkCurrDB(a1, a2, 0);
  if ( result != 0 )
  {
    meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "DropItem");
    return tdr_sqlite_update(a3, 344, meta_by_name, *((_DWORD *)a1 + 43)) == 0;
  }
  return result;
}


//======================================================================
// ShareSaveThread::delOWItemDB(int,tagDropItem *)
// address: 0x00306F3C   size: 0x42 (66 bytes)
//======================================================================
int __fastcall ShareSaveThread::delOWItemDB(ShareSaveThread *a1, int a2, int a3)
{
  int result; // r0
  int meta_by_name; // r0

  result = ShareSaveThread::checkCurrDB(a1, a2, 0);
  if ( result != 0 )
  {
    meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "DropItem");
    return tdr_sqlite_delete(a3, 344, meta_by_name, *((_DWORD *)a1 + 43), 0) == 0;
  }
  return result;
}


//======================================================================
// ShareSaveThread::doItemTask(tagShareSaveTask *)
// address: 0x00306F88   size: 0x20 (32 bytes)
//======================================================================
void __fastcall ShareSaveThread::doItemTask(ShareSaveThread *a1, _DWORD *a2)
{
  int v3; // r3
  int v4; // r2
  int v5; // r1

  v3 = a2[2];
  v4 = a2[5];
  v5 = a2[3];
  if ( v3 != 0 )
    ShareSaveThread::delOWItemDB(a1, v5, v4);
  else
    ShareSaveThread::updateOWItemDB(a1, v5, v4);
  j_free((void *)a2[5]);
}


//======================================================================
// ShareSaveThread::updateOWMonDB(int,tagMonster *)
// address: 0x00306FA8   size: 0x42 (66 bytes)
//======================================================================
int __fastcall ShareSaveThread::updateOWMonDB(ShareSaveThread *a1, int a2, int a3)
{
  int result; // r0
  int meta_by_name; // r0

  result = ShareSaveThread::checkCurrDB(a1, a2, 0);
  if ( result != 0 )
  {
    meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "Monster");
    return tdr_sqlite_update(a3, 512, meta_by_name, *((_DWORD *)a1 + 43)) == 0;
  }
  return result;
}


//======================================================================
// ShareSaveThread::delOWMonDB(int,tagMonster *)
// address: 0x00306FF4   size: 0x42 (66 bytes)
//======================================================================
int __fastcall ShareSaveThread::delOWMonDB(ShareSaveThread *a1, int a2, int a3)
{
  int result; // r0
  int meta_by_name; // r0

  result = ShareSaveThread::checkCurrDB(a1, a2, 0);
  if ( result != 0 )
  {
    meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "Monster");
    return tdr_sqlite_delete(a3, 512, meta_by_name, *((_DWORD *)a1 + 43), 0) == 0;
  }
  return result;
}


//======================================================================
// ShareSaveThread::doMonTask(tagShareSaveTask *)
// address: 0x00307040   size: 0x20 (32 bytes)
//======================================================================
void __fastcall ShareSaveThread::doMonTask(ShareSaveThread *a1, _DWORD *a2)
{
  int v3; // r3
  int v4; // r2
  int v5; // r1

  v3 = a2[2];
  v4 = a2[5];
  v5 = a2[3];
  if ( v3 != 0 )
    ShareSaveThread::delOWMonDB(a1, v5, v4);
  else
    ShareSaveThread::updateOWMonDB(a1, v5, v4);
  j_free((void *)a2[5]);
}


//======================================================================
// ShareSaveThread::getChunkSaveDBBlobSize(int,tagPos *)
// address: 0x00307060   size: 0x98 (152 bytes)
//======================================================================
int __fastcall ShareSaveThread::getChunkSaveDBBlobSize(ShareSaveThread *a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r3
  Kompex::SQLiteStatement **v8; // r6
  Kompex::SQLiteStatement *v9; // r7
  int ColumnBytes; // r7
  _BYTE v12[4]; // [sp+18h] [bp-8Ch] BYREF
  char s[128]; // [sp+1Ch] [bp-88h] BYREF

  v6 = ShareSaveThread::checkCurrDB(a1, a2, 0);
  v7 = 0;
  if ( v6 != 0 )
  {
    v8 = (Kompex::SQLiteStatement **)((char *)a1 + 172);
    j_snprintf(
      s,
      0x80u,
      "select ChunkBlob from ChunkSaveDB where OWID=%d and MapID=%d and x=%d and z=%d",
      a2,
      *(unsigned __int16 *)(a3 + 10),
      *(_DWORD *)a3,
      *(_DWORD *)(a3 + 4));
    Kompex::SQLiteStatement::Prepare(*v8, s);
    if ( Kompex::SQLiteStatement::FetchRow(*v8) != 0 )
    {
      v9 = *v8;
      sub_3BF0BC((int)v12, "ChunkBlob");
      ColumnBytes = Kompex::SQLiteStatement::GetColumnBytes(v9, v12);
      sub_3BDF80(v12);
    }
    else
    {
      ColumnBytes = 0;
    }
    Kompex::SQLiteStatement::FreeQuery(*v8);
    return ColumnBytes;
  }
  return v7;
}


//======================================================================
// ShareSaveThread::loadChunkSaveDB(tagChunkSaveDB *,int,int,tagPos *)
// address: 0x00307104   size: 0x5C (92 bytes)
//======================================================================
int __fastcall ShareSaveThread::loadChunkSaveDB(ShareSaveThread *a1, int a2, int a3, int a4, int a5)
{
  int result; // r0
  int meta_by_name; // r0

  result = ShareSaveThread::checkCurrDB(a1, a4, 0);
  if ( result != 0 )
  {
    meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "ChunkSaveDB");
    *(_DWORD *)a2 = a4;
    *(_WORD *)(a2 + 4) = *(_WORD *)(a5 + 10);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)a5;
    *(_DWORD *)(a2 + 12) = *(_DWORD *)(a5 + 4);
    return tdr_sqlite_select(a2, a3 + 40, meta_by_name, *((_DWORD *)a1 + 43)) == 0;
  }
  return result;
}


//======================================================================
// ShareSaveThread::writeChunkSaveDB(tagChunkSaveDB *)
// address: 0x00307168   size: 0x52 (82 bytes)
//======================================================================
int __fastcall ShareSaveThread::writeChunkSaveDB(ShareSaveThread *a1, int *a2)
{
  int result; // r0
  int meta_by_name; // r0
  int v6; // r1
  int v7; // r1

  result = ShareSaveThread::checkCurrDB(a1, *a2, 0);
  if ( result != 0 )
  {
    meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "ChunkSaveDB");
    v6 = a2[7];
    a2[5] = 1;
    if ( v6 <= 0 )
      v7 = 0;
    else
      v7 = v6 - 1;
    return tdr_sqlite_update(a2, v7 + 40, meta_by_name, *((_DWORD *)a1 + 43)) == 0;
  }
  return result;
}


//======================================================================
// ShareSaveThread::writeChunkFlag(tagChunkSaveDB *)
// address: 0x003071C4   size: 0x5C (92 bytes)
//======================================================================
int __fastcall ShareSaveThread::writeChunkFlag(ShareSaveThread *a1, int a2)
{
  int result; // r0
  int v5; // r3
  int v6; // r5
  int meta_by_name; // r0
  __int16 v8; // [sp+8h] [bp-10h] BYREF
  int v9; // [sp+Ch] [bp-Ch]
  int v10; // [sp+10h] [bp-8h]
  time_t v11; // [sp+14h] [bp-4h]

  result = ShareSaveThread::checkCurrDB(a1, *(_DWORD *)a2, 0);
  if ( result != 0 )
  {
    v8 = *(_WORD *)(a2 + 4);
    v5 = *(_DWORD *)(a2 + 8);
    v6 = *(_DWORD *)(a2 + 12);
    v9 = v5;
    v10 = v6;
    v11 = j_time(nullptr);
    meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "ChunkFlag");
    return tdr_sqlite_update(&v8, 16, meta_by_name, *((_DWORD *)a1 + 43)) == 0;
  }
  return result;
}


//======================================================================
// ShareSaveThread::doChunkSave(tagShareSaveTask *)
// address: 0x00307228   size: 0x24 (36 bytes)
//======================================================================
void __fastcall ShareSaveThread::doChunkSave(ShareSaveThread *a1, int a2)
{
  void *v4; // r0

  ShareSaveThread::writeChunkSaveDB(a1, *(int **)(a2 + 20));
  v4 = *(void **)(a2 + 20);
  if ( *(_DWORD *)(a2 + 8) != 4 )
  {
    ShareSaveThread::writeChunkFlag(a1, *(_DWORD *)(a2 + 20));
    v4 = *(void **)(a2 + 20);
  }
  j_free(v4);
}


//======================================================================
// ShareSaveThread::loadMonDB(tagMonster *)
// address: 0x0030724C   size: 0x44 (68 bytes)
//======================================================================
int __fastcall ShareSaveThread::loadMonDB(ShareSaveThread *a1, int *a2)
{
  int result; // r0
  int meta_by_name; // r0

  result = ShareSaveThread::checkCurrDB(a1, *a2, 0);
  if ( result != 0 )
  {
    meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "Monster");
    return tdr_sqlite_select(a2, 512, meta_by_name, *((_DWORD *)a1 + 43)) == 0;
  }
  return result;
}


//======================================================================
// ShareSaveThread::loadItemDB(tagDropItem *)
// address: 0x00307298   size: 0x44 (68 bytes)
//======================================================================
int __fastcall ShareSaveThread::loadItemDB(ShareSaveThread *a1, int *a2)
{
  int result; // r0
  int meta_by_name; // r0

  result = ShareSaveThread::checkCurrDB(a1, *a2, 0);
  if ( result != 0 )
  {
    meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "DropItem");
    return tdr_sqlite_select(a2, 344, meta_by_name, *((_DWORD *)a1 + 43)) == 0;
  }
  return result;
}


//======================================================================
// ShareSaveThread::loadMinecartDB(tagMineCart *)
// address: 0x003072E4   size: 0x42 (66 bytes)
//======================================================================
int __fastcall ShareSaveThread::loadMinecartDB(ShareSaveThread *a1, int *a2)
{
  int result; // r0
  int meta_by_name; // r0

  result = ShareSaveThread::checkCurrDB(a1, *a2, 0);
  if ( result != 0 )
  {
    meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "MineCart");
    return tdr_sqlite_select(a2, 104, meta_by_name, *((_DWORD *)a1 + 43)) == 0;
  }
  return result;
}


//======================================================================
// ShareSaveThread::loadBoxDB(tagBox *)
// address: 0x00307330   size: 0x42 (66 bytes)
//======================================================================
int __fastcall ShareSaveThread::loadBoxDB(ShareSaveThread *a1, int *a2)
{
  int result; // r0
  int meta_by_name; // r0

  result = ShareSaveThread::checkCurrDB(a1, *a2, 0);
  if ( result != 0 )
  {
    meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "Box");
    return tdr_sqlite_select(a2, 8936, meta_by_name, *((_DWORD *)a1 + 43)) == 0;
  }
  return result;
}


//======================================================================
// ShareSaveThread::loadFurnaceDB(tagFurnace *)
// address: 0x00307380   size: 0x44 (68 bytes)
//======================================================================
int __fastcall ShareSaveThread::loadFurnaceDB(ShareSaveThread *a1, int *a2)
{
  int result; // r0
  int meta_by_name; // r0

  result = ShareSaveThread::checkCurrDB(a1, *a2, 0);
  if ( result != 0 )
  {
    meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "Furnace");
    return tdr_sqlite_select(a2, 960, meta_by_name, *((_DWORD *)a1 + 43)) == 0;
  }
  return result;
}


//======================================================================
// ShareSaveThread::writeFlatSaveDB(tagShareSaveTask *)
// address: 0x003073CC   size: 0x46 (70 bytes)
//======================================================================
int __fastcall ShareSaveThread::writeFlatSaveDB(ShareSaveThread *a1, int a2)
{
  int result; // r0
  int v5; // r5
  int meta_by_name; // r0

  result = ShareSaveThread::checkCurrDB(a1, *(_DWORD *)(a2 + 12), 0);
  if ( result != 0 )
  {
    v5 = *(_DWORD *)(a2 + 20);
    meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "FlatSaveDB");
    return tdr_sqlite_update(v5, 2080, meta_by_name, *((_DWORD *)a1 + 43)) == 0;
  }
  return result;
}


//======================================================================
// ShareSaveThread::updateOWGlobalDB(int,tagOWGlobal *)
// address: 0x0030741C   size: 0x40 (64 bytes)
//======================================================================
int __fastcall ShareSaveThread::updateOWGlobalDB(ShareSaveThread *a1, int a2, int a3)
{
  int result; // r0
  int meta_by_name; // r0

  result = ShareSaveThread::checkCurrDB(a1, a2, 0);
  if ( result != 0 )
  {
    meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "OWGlobal");
    return tdr_sqlite_update(a3, 4184, meta_by_name, *((_DWORD *)a1 + 43)) == 0;
  }
  return result;
}


//======================================================================
// ShareSaveThread::doGlobalTask(tagShareSaveTask *)
// address: 0x00307468   size: 0x14 (20 bytes)
//======================================================================
void __fastcall ShareSaveThread::doGlobalTask(ShareSaveThread *a1, int a2)
{
  ShareSaveThread::updateOWGlobalDB(a1, *(_DWORD *)(a2 + 12), *(_DWORD *)(a2 + 20));
  j_free(*(void **)(a2 + 20));
}


//======================================================================
// ShareSaveThread::updateOWRoleDB(int,tagRoleData *)
// address: 0x0030747C   size: 0x40 (64 bytes)
//======================================================================
int __fastcall ShareSaveThread::updateOWRoleDB(ShareSaveThread *a1, int a2, int a3)
{
  int result; // r0
  int meta_by_name; // r0

  result = ShareSaveThread::checkCurrDB(a1, a2, 0);
  if ( result != 0 )
  {
    meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "RoleData");
    return tdr_sqlite_update(a3, 13560, meta_by_name, *((_DWORD *)a1 + 43)) == 0;
  }
  return result;
}


//======================================================================
// ShareSaveThread::loadOWAchievement(int,int,tagAchievement *)
// address: 0x003074C8   size: 0x54 (84 bytes)
//======================================================================
int __fastcall ShareSaveThread::loadOWAchievement(ShareSaveThread *a1, int a2, int a3)
{
  int result; // r0
  int meta_by_name; // r7
  int v7; // r3
  _DWORD v8[5]; // [sp+8h] [bp-14h] BYREF

  result = ShareSaveThread::checkCurrDB(a1, a2, 0);
  if ( result != 0 )
  {
    meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "Achievement");
    j_memset(v8, 0, 0x10u);
    v7 = *((_DWORD *)a1 + 43);
    v8[0] = a3;
    return tdr_sqlite_select(v8, 16, meta_by_name, v7) == 0;
  }
  return result;
}


//======================================================================
// ShareSaveThread::getOWAchievementFromDB(int,tagAchievementList *)
// address: 0x00307524   size: 0x78 (120 bytes)
//======================================================================
int __fastcall ShareSaveThread::getOWAchievementFromDB(Kompex::SQLiteStatement **a1, int a2, _DWORD *a3)
{
  int v5; // r5
  Kompex::SQLiteStatement **v6; // r6
  int meta_by_name; // [sp+4h] [bp-8h]

  v5 = ShareSaveThread::checkCurrDB((ShareSaveThread *)a1, a2, 0);
  if ( v5 != 0 )
  {
    meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "Achievement");
    Kompex::SQLiteStatement::Prepare(a1[43], "SELECT * FROM Achievement");
    while ( 1 )
    {
      v6 = a1 + 43;
      if ( Kompex::SQLiteStatement::FetchRow(a1[43]) == 0 )
        break;
      if ( tdr_sqlite_fetch(&a3[4 * *a3 + 2], 16, meta_by_name, a1[43]) != 0 )
      {
        Kompex::SQLiteStatement::FreeQuery(*v6);
        return 0;
      }
      ++*a3;
    }
    Kompex::SQLiteStatement::FreeQuery(*v6);
  }
  return v5;
}


//======================================================================
// ShareSaveThread::getOWRoleFromDB(int,tagRoleData *,int)
// address: 0x003075A8   size: 0x9C (156 bytes)
//======================================================================
int __fastcall ShareSaveThread::getOWRoleFromDB(ShareSaveThread *a1, int a2, int *a3, int a4)
{
  int v6; // r5
  Kompex::SQLiteStatement **v7; // r7
  int meta_by_name; // [sp+8h] [bp-94h]
  char v12[128]; // [sp+14h] [bp-88h] BYREF

  v6 = ShareSaveThread::checkCurrDB(a1, a2, 0);
  if ( v6 != 0 )
  {
    v7 = (Kompex::SQLiteStatement **)((char *)a1 + 172);
    meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "RoleData");
    j_snprintf(v12, 0x80u, "SELECT * FROM RoleData where Uin=%d", a4);
    Kompex::SQLiteStatement::Prepare(*v7, v12);
    if ( Kompex::SQLiteStatement::FetchRow(*v7) != 0 && tdr_sqlite_fetch(a3, 13560, meta_by_name, *v7) != 0 )
    {
      Kompex::SQLiteStatement::FreeQuery(*v7);
      return 0;
    }
    else
    {
      Kompex::SQLiteStatement::FreeQuery(*v7);
      a3[1] = a2;
      *a3 = a4;
    }
  }
  return v6;
}


//======================================================================
// ShareSaveThread::getOWGlobalFromDB(int,tagOWGlobal *)
// address: 0x00307658   size: 0x7A (122 bytes)
//======================================================================
int __fastcall ShareSaveThread::getOWGlobalFromDB(ShareSaveThread *a1, int a2, _DWORD *a3)
{
  int v5; // r7
  Kompex::SQLiteStatement **v6; // r6
  int meta_by_name; // [sp+4h] [bp-8h]

  v5 = ShareSaveThread::checkCurrDB(a1, a2, 0);
  if ( v5 != 0 )
  {
    v6 = (Kompex::SQLiteStatement **)((char *)a1 + 172);
    meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "OWGlobal");
    Kompex::SQLiteStatement::Prepare(*v6, "SELECT * FROM OWGlobal");
    if ( Kompex::SQLiteStatement::FetchRow(*v6) != 0 && tdr_sqlite_fetch(a3, 4184, meta_by_name, *v6) != 0 )
    {
      Kompex::SQLiteStatement::FreeQuery(*v6);
      return 0;
    }
    else
    {
      Kompex::SQLiteStatement::FreeQuery(*v6);
      if ( a3[2] == 0 )
        a3[2] = *(_DWORD *)(g_CSMgr + 20328);
      a3[531] = a3[530];
    }
  }
  return v5;
}


//======================================================================
// ShareSaveThread::createUinDB(void)
// address: 0x003076F0   size: 0xDC (220 bytes)
//======================================================================
bool __fastcall ShareSaveThread::createUinDB(ShareSaveThread *this)
{
  int meta_by_name; // r5
  int v2; // r6
  int v3; // r0
  int v4; // r7
  _DWORD *v6; // r4
  int tab; // r7
  int v8; // r0
  _BOOL4 v9; // r6
  _BOOL4 v10; // r6
  _BOOL4 v11; // r6
  int v12; // [sp+0h] [bp-14h]
  Ogre::LockSection *v14; // [sp+Ch] [bp-8h] BYREF

  meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "OWorld");
  v12 = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "AccontInfo");
  v2 = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "Buddy");
  v3 = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "UpTask");
  v4 = v3;
  if ( meta_by_name == 0 || v12 == 0 || v2 == 0 || v3 == 0 || ShareSaveThread::checkUinDB(this, 1, 0) == nullptr )
    return false;
  v14 = (Ogre::LockSection *)&g_Locker1;
  Ogre::LockSection::Lock((pthread_mutex_t *)&g_Locker1);
  v6 = (_DWORD *)((char *)this + 180);
  tab = tdr_sqlite_create_tab(v4, *((_DWORD *)this + 45));
  v8 = tdr_sqlite_create_tab(v2, *((_DWORD *)this + 45));
  v9 = false;
  if ( v8 == 0 )
    v9 = tab == 0;
  v10 = tdr_sqlite_create_tab(meta_by_name, *v6) == 0 && v9;
  v11 = tdr_sqlite_create_tab(v12, *v6) == 0 && v10;
  Ogre::LockFunctor::~LockFunctor(&v14);
  return v11;
}


//======================================================================
// ShareSaveThread::clearUinDB(int)
// address: 0x003077E4   size: 0x7A (122 bytes)
//======================================================================
Kompex::SQLiteDatabase *__fastcall ShareSaveThread::clearUinDB(ShareSaveThread *this, int a2)
{
  Kompex::SQLiteDatabase *v4; // r7
  Kompex::SQLiteStatement **v5; // r5
  char s[128]; // [sp+Ch] [bp-88h] BYREF

  v4 = ShareSaveThread::checkUinDB(this, 0, 0);
  if ( v4 != nullptr )
  {
    v5 = (Kompex::SQLiteStatement **)((char *)this + 180);
    j_snprintf(s, 0x80u, "delete from OWorld where OwnerUin=%d", a2);
    Kompex::SQLiteStatement::SqlStatement(*v5, s);
    j_snprintf(s, 0x80u, "delete from AccontInfo where Uin=%d", a2);
    Kompex::SQLiteStatement::SqlStatement(*v5, s);
    j_snprintf(s, 0x80u, "delete from Buddy where Uin=%d", a2);
    Kompex::SQLiteStatement::SqlStatement(*v5, s);
  }
  return v4;
}


//======================================================================
// ShareSaveThread::getOWlist(int)
// address: 0x00307870   size: 0x8E (142 bytes)
//======================================================================
int __fastcall ShareSaveThread::getOWlist(ShareSaveThread *this, int a2)
{
  CSMgr *v2; // r4

  v2 = (CSMgr *)g_CSMgr;
  if ( CSMgr::loginOnline((CSMgr *)g_CSMgr) == 0 )
  {
    if ( CSMgr::sendOnlineCSMsg((int)v2) == 0 )
      CSMgr::recvOnlineCSMsg((int)v2);
    CSMgr::logoutOnline(v2);
  }
  return 0;
}


//======================================================================
// ShareSaveThread::getBuddy(int)
// address: 0x0030791C   size: 0x8E (142 bytes)
//======================================================================
int __fastcall ShareSaveThread::getBuddy(ShareSaveThread *this, int a2)
{
  CSMgr *v2; // r4

  v2 = (CSMgr *)g_CSMgr;
  if ( CSMgr::loginOnline((CSMgr *)g_CSMgr) == 0 )
  {
    if ( CSMgr::sendOnlineCSMsg((int)v2) == 0 )
      CSMgr::recvOnlineCSMsg((int)v2);
    CSMgr::logoutOnline(v2);
  }
  return 0;
}


//======================================================================
// ShareSaveThread::insertOWListDB(void)
// address: 0x003079C8   size: 0x92 (146 bytes)
//======================================================================
int __fastcall ShareSaveThread::insertOWListDB(ShareSaveThread *this)
{
  int v1; // r4
  int v4; // r6
  int v5; // r5
  int v6; // r0
  int v7; // r4
  int meta_by_name; // [sp+4h] [bp-10h]
  Ogre::LockSection *v9; // [sp+Ch] [bp-8h] BYREF

  v1 = g_CSMgr;
  meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "OWorld");
  if ( meta_by_name == 0 || ShareSaveThread::checkUinDB(this, 0, 0) == nullptr )
    return 0;
  v4 = 0;
  v9 = (Ogre::LockSection *)&g_Locker1;
  Ogre::LockSection::Lock((pthread_mutex_t *)&g_Locker1);
  v5 = v1 + 728;
  while ( 1 )
  {
    if ( v4 >= *(_DWORD *)(v1 + 720) )
    {
      v7 = 1;
      goto LABEL_10;
    }
    v6 = tdr_sqlite_insert(v5, 784, meta_by_name, *((_DWORD *)this + 45));
    v5 += 784;
    if ( v6 != 0 )
      break;
    ++v4;
  }
  v7 = 0;
LABEL_10:
  Ogre::LockFunctor::~LockFunctor(&v9);
  return v7;
}


//======================================================================
// ShareSaveThread::updateAccInfoDB(void)
// address: 0x00307A68   size: 0x6C (108 bytes)
//======================================================================
Kompex::SQLiteDatabase *__fastcall ShareSaveThread::updateAccInfoDB(ShareSaveThread *this)
{
  int v1; // r5
  int meta_by_name; // r6
  Kompex::SQLiteDatabase *v4; // r7
  Ogre::LockSection *v6; // [sp+Ch] [bp-8h] BYREF

  v1 = g_CSMgr;
  meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "AccontInfo");
  v4 = ShareSaveThread::checkUinDB(this, 0, 0);
  if ( v4 != nullptr )
  {
    v6 = (Ogre::LockSection *)&g_Locker1;
    Ogre::LockSection::Lock((pthread_mutex_t *)&g_Locker1);
    v4 = (Kompex::SQLiteDatabase *)(tdr_sqlite_update(v1 + 20328, 5784, meta_by_name, *((_DWORD *)this + 45)) == 0);
    Ogre::LockFunctor::~LockFunctor(&v6);
  }
  return v4;
}


//======================================================================
// ShareSaveThread::doUinCollectionTask(tagShareSaveTask *)
// address: 0x00307AF8   size: 0x1A (26 bytes)
//======================================================================
void __fastcall ShareSaveThread::doUinCollectionTask(ShareSaveThread *a1, int a2)
{
  ShareSaveThread::updateAccInfoDB(a1);
  ShareSaveThread::writeTaskRecord(a1, a2);
  j_free(*(void **)(a2 + 20));
}


//======================================================================
// ShareSaveThread::doAchievementTask(tagShareSaveTask *)
// address: 0x00307B12   size: 0x2A (42 bytes)
//======================================================================
void __fastcall ShareSaveThread::doAchievementTask(ShareSaveThread *a1, _DWORD *a2)
{
  if ( a2[2] != 0 )
  {
    ShareSaveThread::updateOWAchievement(a1, a2[3], a2[5]);
  }
  else
  {
    ShareSaveThread::updateAccInfoDB(a1);
    ShareSaveThread::writeTaskRecord(a1, (int)a2);
  }
  j_free((void *)a2[5]);
}


//======================================================================
// ShareSaveThread::loadAccountInfoDB(tagAccontInfo *)
// address: 0x00307B3C   size: 0xAA (170 bytes)
//======================================================================
Kompex::SQLiteDatabase *__fastcall ShareSaveThread::loadAccountInfoDB(ShareSaveThread *a1, int a2)
{
  Kompex::SQLiteDatabase *Row; // r4
  Kompex::SQLiteStatement **v4; // r5
  int meta_by_name; // r0
  Ogre::LockSection *v8; // [sp+8h] [bp-8Ch] BYREF
  char v9[128]; // [sp+Ch] [bp-88h] BYREF

  Row = ShareSaveThread::checkUinDB(a1, 0, 0);
  if ( Row != nullptr )
  {
    v8 = (Ogre::LockSection *)&g_Locker1;
    Ogre::LockSection::Lock((pthread_mutex_t *)&g_Locker1);
    j_snprintf(v9, 0x80u, "SELECT * FROM AccontInfo where AccountName='%s'", (const char *)(g_CSMgr + 592));
    v4 = (Kompex::SQLiteStatement **)((char *)a1 + 180);
    Kompex::SQLiteStatement::Prepare(*v4, v9);
    Row = (Kompex::SQLiteDatabase *)Kompex::SQLiteStatement::FetchRow(*v4);
    if ( Row != nullptr )
    {
      meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "AccontInfo");
      Row = (Kompex::SQLiteDatabase *)(tdr_sqlite_fetch(a2, 5784, meta_by_name, *v4) == 0);
    }
    Kompex::SQLiteStatement::FreeQuery(*v4);
    Ogre::LockFunctor::~LockFunctor(&v8);
  }
  return Row;
}


//======================================================================
// ShareSaveThread::addCmdFromTaskRecord(tagUpTask *)
// address: 0x00307C00   size: 0x436 (1078 bytes)
//======================================================================
void *__fastcall ShareSaveThread::addCmdFromTaskRecord(ShareSaveThread *a1, int a2)
{
  int v4; // r1
  _WORD *v5; // r7
  int v6; // r1
  int v7; // r6
  Kompex::SQLiteDatabase *OWorldDB; // r2
  int v9; // r3
  const char *v10; // r6
  int v11; // r1
  int v12; // r0
  int v13; // r6
  int v14; // r2
  int v15; // r3
  int v16; // r1
  int v17; // r3
  int v18; // r3
  int v19; // r3
  int v20; // r3
  int v21; // r3
  int v22; // r3
  int v23; // r3
  int v24; // r3
  int v25; // r3
  int v26; // r6
  int v28; // [sp+4h] [bp-4BC8h]
  int v29; // [sp+8h] [bp-4BC4h]
  int v30[7]; // [sp+14h] [bp-4BB8h] BYREF
  int v31[3390]; // [sp+30h] [bp-4B9Ch] BYREF
  int v32[1052]; // [sp+3528h] [bp-16A4h] BYREF
  int v33; // [sp+4598h] [bp-634h] BYREF

  j_memset(v30, 0, sizeof(v30));
  v4 = *(_DWORD *)a2;
  v30[1] = *(unsigned __int8 *)(a2 + 4);
  v30[0] = v4;
  v29 = *(_DWORD *)(a2 + 8);
  v28 = *(_DWORD *)(a2 + 12);
  switch ( v30[1] )
  {
    case 1:
      v6 = *(_DWORD *)(a2 + 16);
      v30[2] = *(_DWORD *)(a2 + 8);
      v30[3] = v28;
      v30[4] = v6;
      if ( v29 == 1 )
      {
        j_memset(v32, 0, 0x310u);
        v7 = *(_DWORD *)(a2 + 20);
        v32[0] = v28;
        v32[9] = v7;
      }
      else if ( v29 == 10 )
      {
        j_memset(v32, 0, 0x310u);
        v32[0] = v28;
      }
      else
      {
        v32[0] = v28;
        OWorldDB = (Kompex::SQLiteDatabase *)ShareSaveThread::loadOWorldDB(a1, (int)v32);
        if ( OWorldDB == nullptr )
          goto LABEL_25;
      }
      v30[6] = 784;
      v30[5] = (int)v32;
      ShareSaveThread::doWorldTaskUp((int)a1, (int)v30);
      break;
    case 2:
      v30[2] = *(_DWORD *)(a2 + 8);
      v30[3] = v28;
      if ( v29 == 3 )
      {
        v5 = j_calloc(1u, 0x820u);
        *(_DWORD *)v5 = v28;
        v5[2] = *(_DWORD *)(a2 + 16);
        *((_DWORD *)v5 + 2) = *(_DWORD *)(a2 + 20);
        *((_DWORD *)v5 + 3) = *(_DWORD *)(a2 + 24);
        *((_BYTE *)v5 + 16) = *(_DWORD *)(a2 + 28);
        *((_BYTE *)v5 + 17) = *(_DWORD *)(a2 + 32);
        if ( ShareSaveThread::loadFlatSaveDB() != 0 )
        {
          v30[5] = (int)v5;
          ShareSaveThread::doChunkSaveUp((int)a1, v30);
        }
        else
        {
          ShareSaveThread::delTaskRecord((int)a1, v30[0], 0);
        }
        j_free(v5);
      }
      break;
    case 3:
      v26 = *(_DWORD *)(a2 + 16);
      v30[2] = v29;
      v30[4] = v26;
      v30[3] = v28;
      OWorldDB = (Kompex::SQLiteDatabase *)ShareSaveThread::getOWRoleFromDB(a1, v28, v31, *(_DWORD *)(g_CSMgr + 20328));
      if ( OWorldDB == nullptr )
        goto LABEL_17;
      v30[5] = (int)v31;
      v30[6] = 13560;
      ShareSaveThread::doRoleTaskUp((int)a1, (int)v30);
      break;
    case 4:
      v24 = *(_DWORD *)(a2 + 16);
      v30[3] = *(_DWORD *)(a2 + 12);
      v30[2] = v29;
      v30[4] = v24;
      j_memset(v31, 0, 0x200u);
      v25 = *(_DWORD *)(a2 + 36);
      if ( v29 != 0 )
      {
        v31[2] = *(_DWORD *)(a2 + 32);
        v31[3] = v25;
        v31[0] = v28;
      }
      else
      {
        v31[2] = *(_DWORD *)(a2 + 32);
        v31[3] = v25;
        v31[0] = v28;
        if ( ShareSaveThread::loadMonDB(a1, v31) == 0 )
          goto LABEL_50;
      }
      v30[5] = (int)v31;
      v30[6] = 512;
      ShareSaveThread::doMonTaskUp((int)a1, (int)v30);
      break;
    case 5:
      v18 = *(_DWORD *)(a2 + 16);
      v30[2] = *(_DWORD *)(a2 + 8);
      v30[3] = v28;
      v30[4] = v18;
      j_memset(v31, 0, 0x22E8u);
      v19 = *(_DWORD *)(a2 + 36);
      if ( v29 != 0 )
      {
        v31[2] = *(_DWORD *)(a2 + 32);
        v31[3] = v19;
        v31[0] = v28;
      }
      else
      {
        v31[2] = *(_DWORD *)(a2 + 32);
        v31[3] = v19;
        v31[0] = v28;
        if ( ShareSaveThread::loadBoxDB(a1, v31) == 0 )
          goto LABEL_50;
      }
      v30[5] = (int)v31;
      v30[6] = 8936;
      ShareSaveThread::doBoxTaskUp((int)a1, (int)v30);
      break;
    case 6:
      v30[4] = *(_DWORD *)(a2 + 16);
      v30[2] = v29;
      v30[3] = v28;
      OWorldDB = (Kompex::SQLiteDatabase *)ShareSaveThread::getOWGlobalFromDB(a1, v28, v32);
      if ( OWorldDB == nullptr )
        goto LABEL_17;
      v30[5] = (int)v32;
      v30[6] = 4184;
      ShareSaveThread::doGlobalTaskUp((int)a1, (int)v30);
      break;
    case 7:
      v22 = *(_DWORD *)(a2 + 16);
      v30[3] = *(_DWORD *)(a2 + 12);
      v30[2] = v29;
      v30[4] = v22;
      j_memset(v32, 0, 0x158u);
      v23 = *(_DWORD *)(a2 + 36);
      if ( v29 != 0 )
      {
        v32[2] = *(_DWORD *)(a2 + 32);
        v32[3] = v23;
        v32[0] = v28;
      }
      else
      {
        v32[2] = *(_DWORD *)(a2 + 32);
        v32[3] = v23;
        v32[0] = v28;
        if ( ShareSaveThread::loadItemDB(a1, v32) == 0 )
          goto LABEL_50;
      }
      v30[5] = (int)v32;
      v30[6] = 344;
      ShareSaveThread::doItemTaskUp((int)a1, (int)v30);
      break;
    case 8:
      v20 = *(_DWORD *)(a2 + 16);
      v30[2] = *(_DWORD *)(a2 + 8);
      v30[3] = v28;
      v30[4] = v20;
      j_memset(v31, 0, 0x68u);
      v21 = *(_DWORD *)(a2 + 36);
      if ( v29 != 0 )
      {
        v31[2] = *(_DWORD *)(a2 + 32);
        v31[3] = v21;
        v31[0] = v28;
      }
      else
      {
        v31[2] = *(_DWORD *)(a2 + 32);
        v31[3] = v21;
        v31[0] = v28;
        if ( ShareSaveThread::loadMinecartDB(a1, v31) == 0 )
          goto LABEL_50;
      }
      v30[5] = (int)v31;
      v30[6] = 104;
      ShareSaveThread::doMinecartTaskUp((int)a1, (int)v30);
      break;
    case 9:
      v16 = *(_DWORD *)(a2 + 16);
      v30[3] = *(_DWORD *)(a2 + 12);
      v30[4] = v16;
      v30[2] = v29;
      j_memset(v31, 0, 0x3C0u);
      v17 = *(_DWORD *)(a2 + 36);
      if ( v29 != 0 )
      {
        v31[2] = *(_DWORD *)(a2 + 32);
        v31[3] = v17;
        v31[0] = v28;
      }
      else
      {
        v31[2] = *(_DWORD *)(a2 + 32);
        v31[3] = v17;
        v31[0] = v28;
        if ( ShareSaveThread::loadFurnaceDB(a1, v31) == 0 )
          goto LABEL_50;
      }
      v30[5] = (int)v31;
      v30[6] = 960;
      ShareSaveThread::doFurnaceTaskUp((int)a1, (int)v30);
      break;
    case 0xA:
      v14 = *(_DWORD *)(a2 + 16);
      v30[2] = *(_DWORD *)(a2 + 8);
      v30[3] = v28;
      v30[4] = v14;
      if ( v29 != 0 )
      {
        OWorldDB = (Kompex::SQLiteDatabase *)ShareSaveThread::loadOWAchievement(a1, v28, *(_DWORD *)(a2 + 20));
        if ( OWorldDB == nullptr )
        {
LABEL_25:
          v11 = v30[0];
          v12 = (int)a1;
          goto LABEL_18;
        }
        v30[5] = (int)v31;
        v15 = 16;
      }
      else
      {
        if ( ShareSaveThread::loadAccountInfoDB(a1, (int)v32) == nullptr )
        {
LABEL_50:
          v11 = v30[0];
          v12 = (int)a1;
          OWorldDB = nullptr;
          goto LABEL_18;
        }
        v30[5] = (int)&v32[26];
        v15 = 4104;
      }
      v30[6] = v15;
      ShareSaveThread::doAchievementTaskUp((int)a1, v30);
      break;
    case 0xB:
      v13 = *(_DWORD *)(a2 + 16);
      v30[2] = v29;
      v30[3] = v28;
      v30[4] = v13;
      ShareSaveThread::doAddCreditTaskUp(a1, v30);
      break;
    case 0xC:
      v30[4] = *(_DWORD *)(a2 + 12);
      v30[2] = v29;
      OWorldDB = ShareSaveThread::loadAccountInfoDB(a1, (int)v32);
      if ( OWorldDB != nullptr )
      {
        v30[5] = (int)&v33;
        v30[6] = 1560;
        ShareSaveThread::doUinCollectionTaskUp((int)a1, v30);
      }
      else
      {
LABEL_17:
        v11 = v30[0];
        v12 = (int)a1;
LABEL_18:
        ShareSaveThread::delTaskRecord(v12, v11, (int)OWorldDB);
      }
      break;
    case 0xD:
      v9 = *(_DWORD *)(a2 + 16);
      v30[2] = *(_DWORD *)(a2 + 8);
      v30[3] = v28;
      v30[4] = v9;
      if ( v29 == 4 )
      {
        v10 = (const char *)(a2 + 40);
        v30[6] = j_strlen(v10) + 1;
        v30[5] = (int)v10;
      }
      ShareSaveThread::doTaskBuddyTaskUp((int)a1, v30);
      break;
    default:
      return &_stack_chk_guard;
  }
  return &_stack_chk_guard;
}


//======================================================================
// ShareSaveThread::getTaskRecord(void)
// address: 0x00308054   size: 0xDE (222 bytes)
//======================================================================
Kompex::SQLiteDatabase *__fastcall ShareSaveThread::getTaskRecord(ShareSaveThread *this)
{
  time_t v2; // r0
  time_t *v3; // r3
  time_t v4; // r1
  Kompex::SQLiteDatabase *result; // r0
  _BYTE *v6; // r6
  Kompex::SQLiteStatement **v7; // r5
  _BOOL4 v8; // r6
  int meta_by_name; // [sp+0h] [bp-2BCh]
  char v10[128]; // [sp+8h] [bp-2B4h] BYREF
  _BYTE v11[556]; // [sp+88h] [bp-234h] BYREF

  v2 = j_time(nullptr);
  v3 = (time_t *)((char *)this + 204);
  v4 = v2;
  if ( *((_DWORD *)this + 51) == 0 )
    *v3 = v2;
  result = (Kompex::SQLiteDatabase *)*((unsigned __int8 *)this + 192);
  if ( *((_BYTE *)this + 192) != 0 )
  {
    v6 = (char *)this + 195;
    result = (Kompex::SQLiteDatabase *)*((unsigned __int8 *)this + 195);
    if ( *((_BYTE *)this + 195) != 0 || v4 - *v3 > 59 )
    {
      *v6 = 0;
      *v3 = v4;
      result = ShareSaveThread::checkUinDB(this, 0, 0);
      if ( result != nullptr )
      {
        v7 = (Kompex::SQLiteStatement **)((char *)this + 180);
        meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "UpTask");
        j_snprintf(v10, 0x80u, "select * from UpTask where ID > %d limit 1", *((_DWORD *)this + 8));
        Kompex::SQLiteStatement::Prepare(*((Kompex::SQLiteStatement **)this + 45), v10);
        if ( Kompex::SQLiteStatement::FetchRow(*((Kompex::SQLiteStatement **)this + 45)) != 0 )
        {
          v8 = tdr_sqlite_fetch(v11, 552, meta_by_name, *v7) == 0;
        }
        else
        {
          *v6 = 1;
          v8 = false;
        }
        Kompex::SQLiteStatement::FreeQuery(*v7);
        if ( v8 )
          ShareSaveThread::addCmdFromTaskRecord(this, (int)v11);
        return (Kompex::SQLiteDatabase *)v8;
      }
    }
  }
  return result;
}


//======================================================================
// ShareSaveThread::loadUinOWorldListDB(tagCSMyOWList *)
// address: 0x00308148   size: 0xD0 (208 bytes)
//======================================================================
Kompex::SQLiteDatabase *__fastcall ShareSaveThread::loadUinOWorldListDB(Kompex::SQLiteStatement **a1, int *a2)
{
  Kompex::SQLiteDatabase *result; // r0
  int i; // r3
  int v6; // r5
  int meta_by_name; // [sp+0h] [bp-94h]
  Ogre::LockSection *v8; // [sp+8h] [bp-8Ch] BYREF
  char s[128]; // [sp+Ch] [bp-88h] BYREF

  result = ShareSaveThread::checkUinDB((ShareSaveThread *)a1, 0, 0);
  if ( result != nullptr )
  {
    v8 = (Ogre::LockSection *)&g_Locker1;
    Ogre::LockSection::Lock((pthread_mutex_t *)&g_Locker1);
    meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "OWorld");
    j_snprintf(s, 0x80u, "SELECT * FROM OWorld where OwnerUin=%d", *(_DWORD *)(g_CSMgr + 20328));
    Kompex::SQLiteStatement::Prepare(a1[45], s);
    for ( i = 0; ; i = *a2 + 1 )
    {
      *a2 = i;
      if ( Kompex::SQLiteStatement::FetchRow(a1[45]) == 0 || *a2 > 24 )
      {
        v6 = 1;
        goto LABEL_6;
      }
      if ( tdr_sqlite_fetch(&a2[196 * *a2 + 2], 784, meta_by_name, a1[45]) != 0 )
        break;
    }
    v6 = 0;
LABEL_6:
    Kompex::SQLiteStatement::FreeQuery(a1[45]);
    Ogre::LockFunctor::~LockFunctor(&v8);
    return (Kompex::SQLiteDatabase *)v6;
  }
  return result;
}


//======================================================================
// ShareSaveThread::loadUinBuddyDB(tagBuddy *)
// address: 0x00308230   size: 0xA6 (166 bytes)
//======================================================================
Kompex::SQLiteDatabase *__fastcall ShareSaveThread::loadUinBuddyDB(ShareSaveThread *a1, int a2)
{
  Kompex::SQLiteDatabase *Row; // r4
  Kompex::SQLiteStatement **v4; // r5
  int meta_by_name; // [sp+0h] [bp-94h]
  Ogre::LockSection *v8; // [sp+8h] [bp-8Ch] BYREF
  char s[128]; // [sp+Ch] [bp-88h] BYREF

  Row = ShareSaveThread::checkUinDB(a1, 0, 0);
  if ( Row != nullptr )
  {
    v8 = (Ogre::LockSection *)&g_Locker1;
    Ogre::LockSection::Lock((pthread_mutex_t *)&g_Locker1);
    meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "Buddy");
    j_snprintf(s, 0x80u, "SELECT * FROM Buddy where Uin=%d", *(_DWORD *)(g_CSMgr + 20328));
    v4 = (Kompex::SQLiteStatement **)((char *)a1 + 180);
    Kompex::SQLiteStatement::Prepare(*v4, s);
    Row = (Kompex::SQLiteDatabase *)Kompex::SQLiteStatement::FetchRow(*v4);
    if ( Row != nullptr )
      Row = (Kompex::SQLiteDatabase *)(tdr_sqlite_fetch(a2, 14352, meta_by_name, *v4) == 0);
    Kompex::SQLiteStatement::FreeQuery(*v4);
    Ogre::LockFunctor::~LockFunctor(&v8);
  }
  return Row;
}


//======================================================================
// ShareSaveThread::loadUinDataDB(void)
// address: 0x003082F4   size: 0x48 (72 bytes)
//======================================================================
Kompex::SQLiteDatabase *__fastcall ShareSaveThread::loadUinDataDB(ShareSaveThread *this)
{
  if ( sub_304AD0() != 0
    && ShareSaveThread::loadAccountInfoDB(this, g_CSMgr + 20328) != nullptr
    && ShareSaveThread::loadUinOWorldListDB((Kompex::SQLiteStatement **)this, (int *)(g_CSMgr + 720)) != nullptr )
  {
    return ShareSaveThread::loadUinBuddyDB(this, g_CSMgr + 26112);
  }
  else
  {
    return nullptr;
  }
}


//======================================================================
// ShareSaveThread::updateBuddyDB(void)
// address: 0x00308344   size: 0x50 (80 bytes)
//======================================================================
Kompex::SQLiteDatabase *__fastcall ShareSaveThread::updateBuddyDB(ShareSaveThread *this)
{
  Kompex::SQLiteDatabase *result; // r0
  int v3; // r3
  int meta_by_name; // r0

  result = ShareSaveThread::checkUinDB(this, 0, 0);
  if ( result != nullptr )
  {
    v3 = g_CSMgr;
    *(_DWORD *)(g_CSMgr + 26112) = *(_DWORD *)(g_CSMgr + 20328);
    meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(v3 + 572), "Buddy");
    return (Kompex::SQLiteDatabase *)(tdr_sqlite_update(g_CSMgr + 26112, 14352, meta_by_name, *((_DWORD *)this + 45)) == 0);
  }
  return result;
}


//======================================================================
// ShareSaveThread::saveWorldListDB(tagOWorld *)
// address: 0x003083A4   size: 0x48 (72 bytes)
//======================================================================
int __fastcall ShareSaveThread::saveWorldListDB(ShareSaveThread *a1, int a2)
{
  int result; // r0
  int v5; // r4

  result = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "OWorld");
  v5 = result;
  if ( result != 0 )
  {
    ShareSaveThread::checkUinDB(a1, 0, 0);
    return tdr_sqlite_update(a2, 784, v5, *((_DWORD *)a1 + 45)) == 0;
  }
  return result;
}


//======================================================================
// ShareSaveThread::delWorldListDB(tagOWorld *)
// address: 0x003083F4   size: 0x4E (78 bytes)
//======================================================================
bool __fastcall ShareSaveThread::delWorldListDB(ShareSaveThread *a1, int a2)
{
  int meta_by_name; // r4

  meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "OWorld");
  return meta_by_name != 0
      && ShareSaveThread::checkUinDB(a1, 0, 0) != nullptr
      && tdr_sqlite_delete(a2, 784, meta_by_name, *((_DWORD *)a1 + 45), 0) == 0;
}


//======================================================================
// ShareSaveThread::createOWDB(int)
// address: 0x0030844C   size: 0x10E (270 bytes)
//======================================================================
bool __fastcall ShareSaveThread::createOWDB(ShareSaveThread *this, int a2)
{
  int v3; // r6
  int v4; // r0
  _BOOL4 v5; // r5
  _DWORD *v6; // r5
  int tab; // r7
  _BOOL4 v8; // r4
  _BOOL4 v9; // r4
  _BOOL4 v10; // r4
  int v11; // r0
  int meta_by_name; // [sp+0h] [bp-24h]
  int v14; // [sp+4h] [bp-20h]
  int v15; // [sp+8h] [bp-1Ch]
  int v16; // [sp+Ch] [bp-18h]
  Ogre::LockSection *v18; // [sp+1Ch] [bp-8h] BYREF

  v18 = (Ogre::LockSection *)&g_CreateOWLocker1;
  Ogre::LockSection::Lock((pthread_mutex_t *)&g_CreateOWLocker1);
  sub_304B34(a2);
  meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "RoleData");
  v14 = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "OWGlobal");
  v15 = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "ChunkSaveDB");
  v3 = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "ChunkFlag");
  v4 = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "Achievement");
  v16 = v4;
  if ( meta_by_name != 0 && v14 != 0 && v15 != 0 && v4 != 0 && v3 != 0 && ShareSaveThread::checkCurrDB(this, a2, 1) != 0 )
  {
    v6 = (_DWORD *)((char *)this + 172);
    tab = tdr_sqlite_create_tab(meta_by_name, *((_DWORD *)this + 43));
    v8 = false;
    if ( tdr_sqlite_create_tab(v14, *((_DWORD *)this + 43)) == 0 )
      v8 = tab == 0;
    v9 = tdr_sqlite_create_tab(v15, *v6) == 0 && v8;
    v10 = tdr_sqlite_create_tab(v3, *v6) == 0 && v9;
    v11 = tdr_sqlite_create_tab(v16, *v6);
    v5 = false;
    if ( v11 == 0 )
      v5 = v10;
  }
  else
  {
    v5 = false;
  }
  Ogre::LockFunctor::~LockFunctor(&v18);
  return v5;
}


//======================================================================
// ShareSaveThread::store2OW(int)
// address: 0x00308578   size: 0x276 (630 bytes)
//======================================================================
int __fastcall ShareSaveThread::store2OW(ShareSaveThread *this, int a2)
{
  const char *v3; // r5
  Kompex::SQLiteStatement *v4; // r7
  int v5; // r6
  size_t v6; // r6
  int *v7; // r5
  Kompex::SQLiteDatabase *v10; // [sp+Ch] [bp-4600h]
  int meta_by_name; // [sp+10h] [bp-45FCh]
  int v12; // [sp+14h] [bp-45F8h]
  int v13; // [sp+1Ch] [bp-45F0h]
  int v14; // [sp+20h] [bp-45ECh]
  char *v15; // [sp+2Ch] [bp-45E0h] BYREF
  _BYTE v16[4]; // [sp+30h] [bp-45DCh] BYREF
  int v17[3390]; // [sp+34h] [bp-45D8h] BYREF
  char v18[128]; // [sp+352Ch] [bp-10E0h] BYREF
  _DWORD v19[1048]; // [sp+35ACh] [bp-1060h] BYREF

  v15 = &byte_55FB88;
  v3 = (const char *)sub_304C24((int)&v15, a2);
  v10 = (Kompex::SQLiteDatabase *)operator new(0x14u);
  Kompex::SQLiteDatabase::SQLiteDatabase(v10, v3, 6, nullptr);
  v4 = (Kompex::SQLiteStatement *)operator new(0x5Cu);
  Kompex::SQLiteStatement::SQLiteStatement(v4, v10);
  v13 = *((_DWORD *)this + 42);
  v14 = *((_DWORD *)this + 43);
  v12 = *((_DWORD *)this + 10);
  *((_DWORD *)this + 42) = v10;
  *((_DWORD *)this + 43) = v4;
  *((_DWORD *)this + 10) = a2;
  ShareSaveThread::createOWDB(this, a2);
  *((_DWORD *)this + 42) = v13;
  *((_DWORD *)this + 43) = v14;
  *((_DWORD *)this + 10) = v12;
  Kompex::SQLiteStatement::BeginTransaction(v4);
  ShareSaveThread::getOWRoleFromDB(this, *((_DWORD *)this + 10), v17, *(_DWORD *)(g_CSMgr + 20328));
  *((_DWORD *)this + 43) = v4;
  v17[1] = a2;
  *((_DWORD *)this + 42) = v10;
  *((_DWORD *)this + 10) = a2;
  ShareSaveThread::updateOWRoleDB(this, a2, (int)v17);
  *((_DWORD *)this + 42) = v13;
  *((_DWORD *)this + 43) = v14;
  *((_DWORD *)this + 10) = v12;
  ShareSaveThread::getOWGlobalFromDB(this, v12, v19);
  *((_DWORD *)this + 42) = v10;
  v19[0] = a2;
  *((_DWORD *)this + 43) = v4;
  *((_DWORD *)this + 10) = a2;
  ShareSaveThread::updateOWGlobalDB(this, a2, (int)v19);
  *((_DWORD *)this + 42) = v13;
  *((_DWORD *)this + 43) = v14;
  *((_DWORD *)this + 10) = v12;
  meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "ChunkSaveDB");
  j_strcpy(v18, "SELECT * FROM ChunkSaveDB");
  Kompex::SQLiteStatement::Prepare(*((Kompex::SQLiteStatement **)this + 43), v18);
  if ( Kompex::SQLiteStatement::FetchRow(*((Kompex::SQLiteStatement **)this + 43)) != 0 )
  {
    v5 = *((_DWORD *)this + 43);
    sub_3BF0BC((int)v16, "ChunkBlob");
    v6 = Kompex::SQLiteStatement::GetColumnBytes(v5, v16) + 40;
    sub_3BDF80(v16);
    v7 = (int *)j_malloc(v6);
    if ( tdr_sqlite_fetch(v7, v6, meta_by_name, *((_DWORD *)this + 43)) == 0 )
    {
      *v7 = a2;
      *((_DWORD *)this + 42) = v10;
      *((_DWORD *)this + 43) = v4;
      *((_DWORD *)this + 10) = a2;
      ShareSaveThread::writeChunkSaveDB(this, v7);
      ShareSaveThread::writeChunkFlag(this, (int)v7);
      *((_DWORD *)this + 42) = v13;
      *((_DWORD *)this + 43) = v14;
      *((_DWORD *)this + 10) = v12;
    }
    j_free(v7);
  }
  Kompex::SQLiteStatement::FreeQuery(*((Kompex::SQLiteStatement **)this + 43));
  Kompex::SQLiteStatement::CommitTransaction(v4);
  if ( v4 != nullptr )
    (*(void (__fastcall **)(Kompex::SQLiteStatement *))(*(_DWORD *)v4 + 4))(v4);
  if ( v10 != nullptr )
    (*(void (__fastcall **)(Kompex::SQLiteDatabase *))(*(_DWORD *)v10 + 4))(v10);
  return sub_3BDF80(&v15);
}


//======================================================================
// ShareSaveThread::checkLoadWorldDB(void)
// address: 0x0030882C   size: 0x196 (406 bytes)
//======================================================================
int __fastcall ShareSaveThread::checkLoadWorldDB(ShareSaveThread *this)
{
  const char *v2; // r5
  Kompex::SQLiteDatabase *v3; // r7
  char *v4; // r5
  Kompex::SQLiteStatement *v5; // r7
  Kompex::SQLiteStatement **v6; // r6
  Kompex::SQLiteStatement **v7; // r7
  int v8; // r0
  int v9; // r0
  Kompex::SQLiteDatabase *v10; // r5
  Kompex::SQLiteDatabase **v11; // r6
  Kompex::SQLiteStatement *v12; // r5
  char *v14; // [sp+Ch] [bp-38h]
  int meta_by_name; // [sp+10h] [bp-34h]
  char *v16; // [sp+18h] [bp-2Ch] BYREF
  char v17[32]; // [sp+1Ch] [bp-28h] BYREF

  j_strcpy(v17, "data/loadworld.db");
  if ( Ogre::FileManager::isStdioFileExist((Ogre::FileManager *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton, v17) != 0 )
  {
    v7 = (Kompex::SQLiteStatement **)((char *)this + 188);
    v8 = *((_DWORD *)this + 47);
    if ( v8 != 0 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 4))(v8);
      *v7 = nullptr;
    }
    v9 = *((_DWORD *)this + 46);
    if ( v9 != 0 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 4))(v9);
      *((_DWORD *)this + 46) = 0;
    }
    v16 = &byte_55FB88;
    v14 = (char *)Ogre::FileManager::gamePath2StdioPath((int *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton);
    v10 = (Kompex::SQLiteDatabase *)operator new(0x14u);
    Kompex::SQLiteDatabase::SQLiteDatabase(v10, v14, 2, nullptr);
    v11 = (Kompex::SQLiteDatabase **)((char *)this + 184);
    *v11 = v10;
    v12 = (Kompex::SQLiteStatement *)operator new(0x5Cu);
    Kompex::SQLiteStatement::SQLiteStatement(v12, *v11);
    *v7 = v12;
    sqlite3_exec(*((_DWORD *)*v11 + 1), "PRAGMA journal_mode=WAL;", 0, 0, 0);
    sqlite3_exec(*((_DWORD *)*v11 + 1), "PRAGMA synchronous = NORMAL;", 0, 0, 0);
    sqlite3_wal_autocheckpoint(*((_DWORD *)*v11 + 1), -1);
  }
  else
  {
    meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "LoadWorldTask");
    v16 = &byte_55FB88;
    v2 = (const char *)Ogre::FileManager::gamePath2StdioPath((int *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton);
    v3 = (Kompex::SQLiteDatabase *)operator new(0x14u);
    Kompex::SQLiteDatabase::SQLiteDatabase(v3, v2, 6, nullptr);
    v4 = (char *)this + 184;
    *((_DWORD *)this + 46) = v3;
    v5 = (Kompex::SQLiteStatement *)operator new(0x5Cu);
    Kompex::SQLiteStatement::SQLiteStatement(v5, *((Kompex::SQLiteDatabase **)this + 46));
    v6 = (Kompex::SQLiteStatement **)((char *)this + 188);
    *v6 = v5;
    sqlite3_exec(*(_DWORD *)(*(_DWORD *)v4 + 4), "PRAGMA journal_mode=WAL;", 0, 0, 0);
    sqlite3_exec(*(_DWORD *)(*(_DWORD *)v4 + 4), "PRAGMA synchronous = NORMAL;", 0, 0, 0);
    sqlite3_wal_autocheckpoint(*(_DWORD *)(*(_DWORD *)v4 + 4), -1);
    tdr_sqlite_create_tab(meta_by_name, *v6);
  }
  sub_3BDF80(&v16);
  return 1;
}


//======================================================================
// ShareSaveThread::ShareSaveThread(int)
// address: 0x00308A64   size: 0x1CE (462 bytes)
//======================================================================
// Alternative name is '_ZN15ShareSaveThreadC1Ei'
void __fastcall ShareSaveThread::ShareSaveThread(ShareSaveThread *this, int a2)
{
  int v3; // r0
  int v4; // r5
  int *v5; // r5
  int v6; // r2
  int v7; // r3
  int v8; // r3
  int v9; // r1
  int v10; // r0
  int v11; // r5
  int *v12; // r5
  int v13; // r2
  int v14; // r3
  int v15; // r3
  int v16; // r0
  int *v17; // r6
  int v18; // r1
  int v19; // r2
  int v20; // r0

  Ogre::OSThread::OSThread(this);
  *(_DWORD *)this = &off_463460;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 12) = 8;
  v3 = operator new(0x20u);
  v4 = *((_DWORD *)this + 12);
  *((_DWORD *)this + 11) = v3;
  v5 = (int *)(v3 + 4 * ((unsigned int)(v4 - 1) >> 1));
  *v5 = operator new(0x200u);
  *((_DWORD *)this + 16) = v5;
  v6 = *v5;
  v7 = *v5 + 512;
  *((_DWORD *)this + 14) = *v5;
  *((_DWORD *)this + 15) = v7;
  *((_DWORD *)this + 20) = v5;
  v8 = *v5;
  v9 = *v5 + 512;
  *((_DWORD *)this + 18) = *v5;
  *((_DWORD *)this + 19) = v9;
  *((_DWORD *)this + 13) = v6;
  *((_DWORD *)this + 17) = v8;
  Ogre::LockSection::LockSection((pthread_mutex_t *)((char *)this + 84));
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 29) = 0;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 23) = 8;
  v10 = operator new(0x20u);
  v11 = *((_DWORD *)this + 23);
  *((_DWORD *)this + 22) = v10;
  v12 = (int *)(v10 + 4 * ((unsigned int)(v11 - 1) >> 1));
  *v12 = operator new(0x200u);
  *((_DWORD *)this + 27) = v12;
  v13 = *v12;
  v14 = *v12 + 512;
  *((_DWORD *)this + 25) = *v12;
  *((_DWORD *)this + 31) = v12;
  *((_DWORD *)this + 26) = v14;
  v15 = *v12;
  *((_DWORD *)this + 24) = v13;
  *((_DWORD *)this + 29) = v15;
  *((_DWORD *)this + 28) = v15;
  *((_DWORD *)this + 30) = v15 + 512;
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 35) = 0;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 37) = 0;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = 0;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 41) = 0;
  *((_DWORD *)this + 33) = 8;
  v16 = operator new(0x20u);
  *((_DWORD *)this + 32) = v16;
  v17 = (int *)(v16 + 4 * ((unsigned int)(*((_DWORD *)this + 33) - 1) >> 1));
  *v17 = operator new(0x200u);
  *((_DWORD *)this + 37) = v17;
  v18 = *v17;
  *((_DWORD *)this + 36) = *v17 + 512;
  *((_DWORD *)this + 35) = v18;
  *((_DWORD *)this + 41) = v17;
  v19 = *v17;
  v20 = *v17 + 512;
  *((_DWORD *)this + 39) = *v17;
  *((_DWORD *)this + 40) = v20;
  *((_DWORD *)this + 34) = v18;
  *((_DWORD *)this + 38) = v19;
  *((_BYTE *)this + 195) = 1;
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 43) = 0;
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 45) = 0;
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 47) = 0;
  *((_BYTE *)this + 192) = 0;
  *((_BYTE *)this + 193) = 0;
  *((_BYTE *)this + 194) = 0;
  *((_BYTE *)this + 196) = 0;
  *((_BYTE *)this + 197) = 0;
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 51) = 0;
  *((_DWORD *)this + 65) = 0;
  *((_DWORD *)this + 66) = a2;
  *((_DWORD *)this + 67) = 0;
  *((_DWORD *)this + 68) = 0;
  *((_DWORD *)this + 69) = 0;
  Ogre::GenerateUniqueDeviceID((ShareSaveThread *)((char *)this + 208), (char *)&word_32 + 1, (int)this + 200);
}


//======================================================================
// ShareSaveThread::~ShareSaveThread()
// address: 0x00308E78   size: 0x98 (152 bytes)
//======================================================================
// Alternative name is '_ZN15ShareSaveThreadD1Ev'
void __fastcall ShareSaveThread::~ShareSaveThread(ShareSaveThread *this)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0

  *(_DWORD *)this = &off_463460;
  v2 = *((_DWORD *)this + 43);
  if ( v2 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  v3 = *((_DWORD *)this + 42);
  if ( v3 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  v4 = *((_DWORD *)this + 45);
  if ( v4 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
  v5 = *((_DWORD *)this + 44);
  if ( v5 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 4))(v5);
  v6 = *((_DWORD *)this + 47);
  if ( v6 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 4))(v6);
  v7 = *((_DWORD *)this + 46);
  if ( v7 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 4))(v7);
  std::deque<tagLoadResult *>::~deque((int)this + 128);
  std::deque<tagInitResult *>::~deque((int)this + 88);
  Ogre::LockSection::~LockSection((pthread_mutex_t *)((char *)this + 84));
  std::deque<tagShareSaveTask *>::~deque((int)this + 44);
  Ogre::OSThread::~OSThread(this);
}


//======================================================================
// ShareSaveThread::~ShareSaveThread()
// address: 0x00308F14   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ShareSaveThread::~ShareSaveThread(ShareSaveThread *this)
{
  ShareSaveThread::~ShareSaveThread(this);
  operator delete(this);
}


//======================================================================
// ShareSaveThread::loadChunkFlagSet(int)
// address: 0x00309094   size: 0xBA (186 bytes)
//======================================================================
int __fastcall ShareSaveThread::loadChunkFlagSet(Kompex::SQLiteStatement **this, int a2)
{
  int result; // r0
  _DWORD *v3; // r5
  int v4; // r6
  int v5; // r1
  int meta_by_name; // r7
  Kompex::SQLiteStatement **v7; // r5
  _BYTE v9[8]; // [sp+Ch] [bp-A0h] BYREF
  _BYTE v10[16]; // [sp+14h] [bp-98h] BYREF
  char v11[128]; // [sp+24h] [bp-88h] BYREF

  result = ShareSaveThread::checkCurrDB((ShareSaveThread *)this, a2, 0);
  if ( result != 0 )
  {
    v3 = (_DWORD *)g_CSMgr;
    v4 = g_CSMgr + 40512;
    std::_Rb_tree<tagChunkFlagEntry,tagChunkFlagEntry,std::_Identity<tagChunkFlagEntry>,std::less<tagChunkFlagEntry>,std::allocator<tagChunkFlagEntry>>::_M_erase(
      g_CSMgr + 40512,
      *(_DWORD **)(g_CSMgr + 40520));
    v3[10131] = v3 + 10129;
    v3[10130] = 0;
    v3[10132] = v3 + 10129;
    v5 = g_CSMgr;
    *(_DWORD *)(v4 + 20) = 0;
    meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(v5 + 572), "ChunkFlag");
    j_strcpy(v11, "select * from ChunkFlag order by time desc limit 10000");
    v7 = this + 43;
    Kompex::SQLiteStatement::Prepare(*(this + 43), v11);
    while ( Kompex::SQLiteStatement::FetchRow(*v7) != 0 && tdr_sqlite_fetch(v10, 16, meta_by_name, *v7) == 0 )
      std::_Rb_tree<tagChunkFlagEntry,tagChunkFlagEntry,std::_Identity<tagChunkFlagEntry>,std::less<tagChunkFlagEntry>,std::allocator<tagChunkFlagEntry>>::_M_insert_unique<tagChunkFlagEntry const&>(
        (int)v9,
        (_DWORD *)(g_CSMgr + 40512),
        (int)v10);
    return Kompex::SQLiteStatement::FreeQuery(*(this + 43));
  }
  return result;
}


//======================================================================
// ShareSaveThread::addCmd(tagShareSaveTask *,bool,bool)
// address: 0x003092D0   size: 0x17C (380 bytes)
//======================================================================
_DWORD *__fastcall ShareSaveThread::addCmd(int a1, int a2, int a3)
{
  _DWORD *result; // r0
  _DWORD *v7; // r5
  size_t v8; // r0
  void *v9; // r0
  _DWORD *v10; // r3
  int v11; // r3
  int v12; // r1
  int v13; // r2
  unsigned int v14; // r3
  int *v15; // r7
  int v16; // r6
  int *v17; // r6
  int v18; // r1
  int v19; // r1
  int v20; // r2
  unsigned int v21; // r7
  int v22; // r0
  int v23; // r3
  int *v24; // r6
  int v25; // r3
  int v26; // r6
  _DWORD *v27; // r3
  int *v28; // r2
  int v29; // r2
  int v30; // [sp+0h] [bp-14h]
  int v31; // [sp+4h] [bp-10h]
  Ogre::LockSection *v32[2]; // [sp+Ch] [bp-8h] BYREF

  result = j_malloc(0x1Cu);
  v7 = result;
  if ( result != nullptr )
  {
    if ( a3 != 0 && (int)(v8 = *(_DWORD *)(a2 + 24)) > 0 )
    {
      v9 = j_malloc(v8);
      v7[5] = v9;
      j_memcpy(v9, *(const void **)(a2 + 20), *(_DWORD *)(a2 + 24));
    }
    else
    {
      v7[5] = *(_DWORD *)(a2 + 20);
    }
    v7[1] = *(_DWORD *)(a2 + 4);
    v7[4] = *(_DWORD *)(a2 + 16);
    v7[2] = *(_DWORD *)(a2 + 8);
    v7[3] = *(_DWORD *)(a2 + 12);
    v7[6] = *(_DWORD *)(a2 + 24);
    if ( *(_DWORD *)a2 != 0 )
      *v7 = *(_DWORD *)a2;
    else
      *v7 = ++ShareSaveThread::taskid;
    Ogre::LockFunctor::LockFunctor((Ogre::LockFunctor *)v32, (Ogre::LockSection *)(a1 + 84));
    v10 = *(_DWORD **)(a1 + 68);
    if ( v10 == (_DWORD *)(*(_DWORD *)(a1 + 76) - 4) )
    {
      v12 = *(_DWORD *)(a1 + 80);
      v13 = *(_DWORD *)(a1 + 44);
      v14 = *(_DWORD *)(a1 + 48);
      if ( v14 - ((v12 - v13) >> 2) <= 1 )
      {
        v15 = *(int **)(a1 + 64);
        v30 = ((v12 - (int)v15) >> 2) + 1;
        v16 = ((v12 - (int)v15) >> 2) + 2;
        if ( v14 <= 2 * v16 )
        {
          v20 = 1;
          if ( v14 != 0 )
            v20 = *(_DWORD *)(a1 + 48);
          v21 = v14 + 2 + v20;
          if ( v21 > 0x3FFFFFFF )
            sub_3BCEB4(2 * v16);
          v22 = operator new(4 * v21);
          v17 = (int *)(v22 + 4 * ((v21 - v16) >> 1));
          v31 = v22;
          std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<tagShareSaveTask **>(
            *(void **)(a1 + 64),
            *(_DWORD *)(a1 + 80) + 4,
            v17);
          operator delete(*(void **)(a1 + 44));
          *(_DWORD *)(a1 + 48) = v21;
          *(_DWORD *)(a1 + 44) = v31;
        }
        else
        {
          v17 = (int *)(v13 + 4 * ((v14 - v16) >> 1));
          v18 = v12 + 4;
          if ( v17 >= v15 )
          {
            v19 = v18 - (_DWORD)v15;
            if ( v19 >> 2 != 0 )
              j_memmove(&v17[v30 - (v19 >> 2)], v15, 4 * (v19 >> 2));
          }
          else
          {
            std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<tagShareSaveTask **>(v15, v18, v17);
          }
        }
        *(_DWORD *)(a1 + 64) = v17;
        v23 = *v17;
        *(_DWORD *)(a1 + 56) = *v17;
        *(_DWORD *)(a1 + 60) = v23 + 512;
        v24 = &v17[v30 - 1];
        *(_DWORD *)(a1 + 80) = v24;
        v25 = *v24;
        *(_DWORD *)(a1 + 72) = *v24;
        *(_DWORD *)(a1 + 76) = v25 + 512;
      }
      v26 = *(_DWORD *)(a1 + 80);
      *(_DWORD *)(v26 + 4) = operator new(0x200u);
      v27 = *(_DWORD **)(a1 + 68);
      if ( v27 != nullptr )
        *v27 = v7;
      v28 = (int *)(*(_DWORD *)(a1 + 80) + 4);
      *(_DWORD *)(a1 + 80) = v28;
      v11 = *v28;
      v29 = *v28 + 512;
      *(_DWORD *)(a1 + 72) = v11;
      *(_DWORD *)(a1 + 76) = v29;
    }
    else
    {
      if ( v10 != nullptr )
        *v10 = v7;
      v11 = *(_DWORD *)(a1 + 68) + 4;
    }
    *(_DWORD *)(a1 + 68) = v11;
    Ogre::LockFunctor::~LockFunctor(v32);
    return (_DWORD *)Ogre::OSEvent::trigger((Ogre::OSEvent *)(a1 + 8));
  }
  return result;
}


//======================================================================
// ShareSaveThread::checkUin(tagAccontInfo &)
// address: 0x0030B688   size: 0xE2 (226 bytes)
//======================================================================
int __fastcall ShareSaveThread::checkUin(ShareSaveThread *a1, int a2)
{
  int v4; // r1
  _DWORD *v5; // r4
  int UinDB; // r5
  int v7; // r2
  int v9; // [sp+4h] [bp-28h]
  _DWORD v10[8]; // [sp+Ch] [bp-20h] BYREF

  if ( sub_304AD0() == 0 )
  {
    UinDB = ShareSaveThread::createUinDB(a1);
    if ( UinDB == 0 )
      return UinDB;
  }
  v4 = *(_DWORD *)a2;
  v5 = (_DWORD *)g_CSMgr;
  v9 = *(_DWORD *)(g_CSMgr + 20328);
  if ( v9 == 0 )
  {
    if ( ShareSaveThread::getOWlist(a1, v4) != 0 )
    {
      UinDB = ShareSaveThread::getBuddy(a1, *(_DWORD *)a2);
      if ( UinDB != 0 )
      {
        j_memcpy(v5 + 5082, (const void *)a2, 0x1698u);
        j_memset(v10, 0, 0x1Cu);
        v10[1] = 9998;
        ShareSaveThread::addCmd(v5[10126], (int)v10, 1);
        return UinDB;
      }
    }
    return 0;
  }
  if ( v9 != v4 )
  {
    ShareSaveThread::clearUinDB(a1, v4);
    return 0;
  }
  if ( *(unsigned __int8 *)(a2 + 64) != *(unsigned __int8 *)(g_CSMgr + 20392)
    || j_strcmp((const char *)(a2 + 65), (const char *)(g_CSMgr + 20393)) != 0 )
  {
    j_memcpy(v5 + 5098, (const void *)(a2 + 64), 0x28u);
  }
  v7 = *(_DWORD *)(a2 + 4);
  if ( v7 != v5[5083] )
    v5[5083] = v7;
  j_memset(v10, 0, 0x1Cu);
  v10[1] = 9997;
  UinDB = 1;
  ShareSaveThread::addCmd(v5[10126], (int)v10, 1);
  return UinDB;
}


//======================================================================
// ShareSaveThread::getToken(void)
// address: 0x0030B790   size: 0x16A (362 bytes)
//======================================================================
int __fastcall ShareSaveThread::getToken(ShareSaveThread *this)
{
  int v2; // r4
  char *v3; // r3
  int v4; // r12
  int v5; // r2
  int account; // r0
  int v7; // r1
  int result; // r0
  __suseconds_t v9; // r7
  int v10; // r0
  int v11; // [sp+0h] [bp-175Ch]
  int v12; // [sp+4h] [bp-1758h]
  int v13; // [sp+8h] [bp-1754h]
  int v14; // [sp+Ch] [bp-1750h]
  int v15; // [sp+28h] [bp-1734h] BYREF
  int v16; // [sp+2Ch] [bp-1730h] BYREF
  __suseconds_t v17; // [sp+30h] [bp-172Ch]
  struct timeval tv; // [sp+34h] [bp-1728h] BYREF
  char s[128]; // [sp+3Ch] [bp-1720h] BYREF
  _BYTE v20[5792]; // [sp+BCh] [bp-16A0h] BYREF

  v2 = g_CSMgr;
  j_snprintf(s, 0x80u, "%s:%d", *(const char **)(g_CSMgr + 28), *(_DWORD *)(g_CSMgr + 32));
  v3 = (char *)this + 208;
  if ( *(_BYTE *)(v2 + 592) != 0 )
  {
    account = cs_get_account(
                *(_DWORD *)(v2 + 576),
                s,
                v2 + 592,
                v3,
                *(_DWORD *)(v2 + 40464),
                *(_DWORD *)(v2 + 40468),
                *(_DWORD *)(v2 + 40472),
                *(_DWORD *)(v2 + 40476),
                v20,
                *(_DWORD *)(v2 + 648),
                &v15,
                &v16);
  }
  else
  {
    v4 = *(_DWORD *)(v2 + 576);
    v5 = *(_DWORD *)(v2 + 20328);
    v11 = *(_DWORD *)(v2 + 40464);
    v12 = *(_DWORD *)(v2 + 40468);
    v13 = *(_DWORD *)(v2 + 40472);
    v14 = *(_DWORD *)(v2 + 40476);
    if ( v5 != 0 )
      account = cs_get_account_byuin(v4, s, v5, v3, v11, v12, v13, v14, v20, &v15, &v16);
    else
      account = cs_reg_account(v4, s, 0, v3, v11, v12, v13, v14, v20, *(_DWORD *)(v2 + 648), &v15, &v16);
  }
  v7 = account;
  result = 0;
  if ( v7 == 0 )
  {
    if ( v15 != 0 )
      return 0;
    *((_BYTE *)this + 192) = 1;
    j_gettimeofday(&tv, nullptr);
    v9 = v17;
    v10 = v16 - tv.tv_sec;
    if ( v17 < tv.tv_usec )
    {
      --v10;
      v9 = v17 + 1000000;
    }
    *(_QWORD *)(v2 + 584) = (__int64)((double)v10 * 1000.0 + (double)((v9 - tv.tv_usec) / 1000));
    result = ShareSaveThread::checkUin(this, (int)v20);
    if ( result == 0 )
      return 0;
  }
  return result;
}


//======================================================================
// ShareSaveThread::doLoadWorldTask(tagLoadWorldTask *)
// address: 0x0030B930   size: 0x4CA (1226 bytes)
//======================================================================
int __fastcall ShareSaveThread::doLoadWorldTask(int a1, int *a2)
{
  int v4; // r7
  int v5; // r6
  int v6; // r3
  _DWORD *v7; // r6
  int v8; // r7
  int v9; // r1
  int v10; // r7
  int v11; // r1
  int v12; // r7
  int *v13; // r6
  int i; // r7
  int v15; // r2
  int v16; // r1
  int *v17; // r6
  int j; // r7
  int v19; // r1
  int *v20; // r6
  int k; // r7
  int v22; // r1
  int *v23; // r6
  int m; // r7
  int v25; // r1
  int *v26; // r6
  int n; // r7
  int v28; // r1
  _DWORD *v29; // r6
  int ii; // r7
  int v31; // r1
  int v32; // [sp+8h] [bp-40554h]
  int v33; // [sp+Ch] [bp-40550h]
  int v35; // [sp+14h] [bp-40548h]
  int meta_by_name; // [sp+20h] [bp-4053Ch]
  int v37; // [sp+440h] [bp-4011Ch]
  int v38; // [sp+448h] [bp-40114h] BYREF
  __int64 v39; // [sp+450h] [bp-4010Ch] BYREF
  _DWORD v40[65601]; // [sp+458h] [bp-40104h] BYREF

  if ( ShareSaveThread::checkUinDB((ShareSaveThread *)a1, 0, 0) == nullptr
    || ShareSaveThread::checkCurrDB((ShareSaveThread *)a1, *a2, 0) == 0 )
  {
    return 1;
  }
  v4 = 0;
  v33 = 0;
  meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "LoadWorldTask");
  v35 = 0;
  while ( *(_DWORD *)(g_CSMgr + 40488) == 0 && v35 == 0 && v33 <= 4 )
  {
    if ( *(_BYTE *)(a1 + 192) == 0 )
    {
      ShareSaveThread::getToken((ShareSaveThread *)a1);
      ++v33;
      goto LABEL_17;
    }
    if ( v4 != 0 || CSMgr::loginOnline((CSMgr *)g_CSMgr) == 0 )
    {
      if ( a2[4] < 0 )
      {
        v38 = 0;
        if ( CSMgr::sendOnlineCSMsg(g_CSMgr) == 0 )
          CSMgr::recvOnlineCSMsg(g_CSMgr);
LABEL_28:
        ++v33;
        CSMgr::logoutOnline((CSMgr *)g_CSMgr);
        j_usleep(0x4C4B40u);
        v4 = 0;
      }
      else
      {
        v5 = g_CSMgr;
        *(_DWORD *)(g_CSMgr + 40480) = a2[1];
        if ( a2[1] == 1 && (v32 = a2[4]) > 0 )
          *(_DWORD *)(v5 + 40484) = (int)((double)a2[2] * 100.0 / (double)v32);
        else
          *(_DWORD *)(v5 + 40484) = 0;
        v37 = a2[3];
        v38 = a2[2];
        if ( CSMgr::sendOnlineCSMsg(v5) != 0 || CSMgr::recvOnlineCSMsg(g_CSMgr) != 1 )
          goto LABEL_28;
        switch ( (char)v37 )
        {
          case 1:
            v6 = (unsigned __int8)v38;
            if ( (_BYTE)v38 != 0 )
              break;
            goto LABEL_61;
          case 3:
            v6 = (unsigned __int8)v38;
            if ( (_BYTE)v38 == 0 )
            {
              v15 = 4;
              goto LABEL_42;
            }
            v13 = (int *)&v39;
            for ( i = 0; i < (unsigned __int8)v38; ++i )
            {
              v16 = *a2;
              *v13 = *a2;
              ShareSaveThread::updateOWMonDB((ShareSaveThread *)a1, v16, (int)v13);
              ++a2[2];
              v13 += 128;
            }
            break;
          case 4:
            v6 = (unsigned __int8)v38;
            if ( (_BYTE)v38 == 0 )
            {
              v15 = 5;
              goto LABEL_42;
            }
            v17 = (int *)&v39;
            for ( j = 0; j < (unsigned __int8)v38; ++j )
            {
              v19 = *a2;
              *v17 = *a2;
              ShareSaveThread::updateOWBoxDB((ShareSaveThread *)a1, v19, (int)v17);
              ++a2[2];
              v17 += 2234;
            }
            break;
          case 5:
            v6 = (unsigned __int8)v38;
            if ( (_BYTE)v38 == 0 )
            {
              v15 = 6;
              goto LABEL_42;
            }
            v20 = (int *)&v39;
            for ( k = 0; k < (unsigned __int8)v38; ++k )
            {
              v22 = *a2;
              *v20 = *a2;
              ShareSaveThread::updateOWMinecartDB((ShareSaveThread *)a1, v22, (int)v20);
              v20 += 26;
              ++a2[2];
            }
            break;
          case 6:
            v6 = (unsigned __int8)v38;
            if ( (_BYTE)v38 == 0 )
            {
              v15 = 7;
              goto LABEL_42;
            }
            v23 = (int *)&v39;
            for ( m = 0; m < (unsigned __int8)v38; ++m )
            {
              v25 = *a2;
              *v23 = *a2;
              ShareSaveThread::updateOWFurnaceDB((ShareSaveThread *)a1, v25, (int)v23);
              ++a2[2];
              v23 += 240;
            }
            break;
          case 7:
            v6 = (unsigned __int8)v38;
            if ( (_BYTE)v38 != 0 )
            {
              v26 = (int *)&v39;
              for ( n = 0; n < (unsigned __int8)v38; ++n )
              {
                v28 = *a2;
                *v26 = *a2;
                ShareSaveThread::updateOWItemDB((ShareSaveThread *)a1, v28, (int)v26);
                ++a2[2];
                v26 += 86;
              }
            }
            else
            {
LABEL_61:
              v15 = 8;
LABEL_42:
              a2[1] = v15;
LABEL_43:
              a2[2] = v6;
            }
            break;
          case 8:
            v38 = *a2;
            ShareSaveThread::updateOWGlobalDB((ShareSaveThread *)a1, v38, (int)&v38);
            a2[1] = 9;
            v6 = 0;
            goto LABEL_43;
          case 9:
            if ( (_BYTE)v38 != 0 )
            {
              v29 = v40;
              for ( ii = 0; ii < (unsigned __int8)v38; ++ii )
              {
                v31 = *a2;
                *(v29 - 2) = *a2;
                ShareSaveThread::updateOWAchievement((ShareSaveThread *)a1, v31, (int)v29);
                v29 += 6;
                ++a2[2];
              }
            }
            else
            {
              v35 = 1;
            }
            break;
          case 10:
            v7 = j_malloc(v38 + 40);
            v8 = v40[0];
            *(_QWORD *)v7 = v39;
            v7[2] = v8;
            v9 = v40[2];
            v10 = v40[3];
            v7[3] = v40[1];
            v7[4] = v9;
            v7[5] = v10;
            v11 = v40[5];
            v12 = v40[6];
            v7[6] = v40[4];
            v7[7] = v11;
            v7[8] = v12;
            v7[9] = v40[7];
            CSMgr::recvOnlineCSMsg(g_CSMgr);
            j_free(v7);
            ++v33;
            CSMgr::logoutOnline((CSMgr *)g_CSMgr);
            j_usleep(0x4C4B40u);
            v4 = 0;
            j_free(v7);
            continue;
          default:
            break;
        }
        ShareSaveThread::writeLoadWorldTask((ShareSaveThread *)a1, (int)a2);
        v4 = 1;
      }
    }
    else
    {
      ++v33;
LABEL_17:
      j_usleep(0x4C4B40u);
    }
  }
  CSMgr::logoutOnline((CSMgr *)g_CSMgr);
  *(_DWORD *)(g_CSMgr + 40488) = 0;
  if ( v35 != 1 )
  {
    if ( v33 <= 4 )
      return 2;
    return 1;
  }
  tdr_sqlite_delete(a2, 24, meta_by_name, *(_DWORD *)(a1 + 188), 0);
  return 0;
}


//======================================================================
// ShareSaveThread::shareWorld(tagOWorld *,int)
// address: 0x0030BE08   size: 0x7D6 (2006 bytes)
//======================================================================
_DWORD *__fastcall ShareSaveThread::shareWorld(int a1, _DWORD *a2, int a3)
{
  _DWORD *result; // r0
  int v4; // r6
  int v5; // r0
  int v6; // r2
  int v7; // r4
  int v8; // r5
  int v9; // r0
  int v10; // r0
  int meta_by_name; // r0
  int v12; // r3
  int *v13; // r5
  int v14; // r1
  int v15; // r2
  int v16; // r0
  int v17; // r1
  int v18; // r1
  int v19; // r4
  int v20; // r1
  int v21; // r4
  int v22; // r1
  int v23; // r4
  int v24; // r4
  int v25; // r3
  char v26; // r3
  _DWORD *v27; // r0
  int v28; // r3
  int v29; // r1
  int v30; // r3
  int v31; // r1
  int v32; // r3
  int v33; // r3
  int v34; // r3
  int v35; // r3
  int v36; // r3
  int v37; // r0
  int v38; // r1
  int v39; // r3
  int v40; // [sp+8h] [bp-4020Ch]
  int v41; // [sp+8h] [bp-4020Ch]
  int v42; // [sp+Ch] [bp-40208h]
  int v43; // [sp+Ch] [bp-40208h]
  int v44; // [sp+10h] [bp-40204h]
  int i; // [sp+18h] [bp-401FCh]
  int v47; // [sp+1Ch] [bp-401F8h]
  int v48; // [sp+20h] [bp-401F4h]
  int v49; // [sp+24h] [bp-401F0h]
  int v51; // [sp+30h] [bp-401E4h] BYREF
  _DWORD v52[6]; // [sp+34h] [bp-401E0h] BYREF
  _DWORD v53[7]; // [sp+4Ch] [bp-401C8h] BYREF
  _WORD s[72]; // [sp+68h] [bp-401ACh] BYREF
  int v55; // [sp+F8h] [bp-4011Ch]
  _DWORD v56[65605]; // [sp+100h] [bp-40114h] BYREF

  result = *(_DWORD **)(g_CSMgr + 720);
  for ( i = 0; i < (int)result; ++i )
  {
    if ( *(_DWORD *)(g_CSMgr + 784 * i + 728) == *a2 )
    {
      v4 = g_CSMgr + 784 * i + 728;
      result = (_DWORD *)ShareSaveThread::checkCurrDB((ShareSaveThread *)a1, *(_DWORD *)v4, 0);
      if ( result == nullptr )
        return result;
      j_memset(v53, 0, sizeof(v53));
      v53[1] = 1;
      v40 = 1;
      v53[4] = *(_DWORD *)(g_CSMgr + 20328);
      v5 = *(_DWORD *)v4;
      v51 = 0;
      v53[6] = 784;
      v6 = *(unsigned __int8 *)(v4 + 705);
      v53[3] = v5;
      v53[5] = v4;
      if ( v6 == 1 && *(_DWORD *)(v4 + 708) == 0 )
        v40 = a3 == 9;
      v7 = 0;
      v8 = -1;
      v47 = 0;
      v48 = 0;
      while ( *(_DWORD *)(g_CSMgr + 40496) == 1 && v48 == 0 )
      {
        if ( (*(_BYTE *)(a1 + 192) != 0 || (ShareSaveThread::getToken((ShareSaveThread *)a1), *(_BYTE *)(a1 + 192) != 0))
          && (v7 != 0 || CSMgr::loginOnline((CSMgr *)g_CSMgr) == 0) )
        {
          if ( v40 != 0
            || (v55 = a3, s[64] = 61, j_memcpy(v56, (const void *)v4, 0x310u), CSMgr::sendOnlineCSMsg(g_CSMgr) == 0)
            && CSMgr::recvOnlineCSMsg(g_CSMgr) == 1
            && v55 == 0 )
          {
            v10 = *(unsigned __int8 *)(v4 + 705);
            s[64] = 74;
            LOWORD(v55) = (unsigned __int8)v10;
            result = (_DWORD *)(v10 - 1);
            switch ( (unsigned int)result )
            {
              case 0u:
                meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "ChunkSaveDB");
                v44 = meta_by_name;
                v42 = *(unsigned __int8 *)(v4 + 705);
                if ( v8 != v42 )
                  tdr_sqlite_getcount(meta_by_name, *(_DWORD *)(a1 + 172), &v51);
                v12 = *(_DWORD *)(v4 + 708);
                if ( v12 >= v51 )
                {
                  *(_BYTE *)(v4 + 705) = 8;
                  *(_DWORD *)(v4 + 708) = 0;
                  *(_BYTE *)(v4 + 706) = 0;
LABEL_37:
                  v8 = v42;
                  goto LABEL_89;
                }
                j_snprintf((char *)s, 0x80u, " limit %d,%d", v12, 1);
                v13 = (int *)j_malloc(0x3E828u);
                if ( tdr_sqlite_select(v13, 256040, v44, *(_DWORD *)(a1 + 172)) != 0 || v13[5] == 0 )
                {
                  ++*(_DWORD *)(v4 + 708);
                  j_free(v13);
                  goto LABEL_37;
                }
                v14 = v13[3];
                LOWORD(v52[1]) = *((_WORD *)v13 + 2);
                v15 = *v13;
                v52[4] = 0;
                v52[3] = v14;
                v13[5] = 0;
                v16 = v13[2];
                s[64] = 74;
                v17 = v13[7];
                v52[0] = v15;
                v52[2] = v16;
                LOWORD(v55) = 10;
                v56[0] = v17;
                v18 = v13[1];
                v19 = v13[2];
                v56[2] = *v13;
                v56[3] = v18;
                v56[4] = v19;
                v20 = v13[4];
                v21 = v13[5];
                v56[5] = v13[3];
                v56[6] = v20;
                v56[7] = v21;
                v22 = v13[7];
                v23 = v13[8];
                v56[8] = v13[6];
                v56[9] = v22;
                v56[10] = v23;
                v56[11] = v13[9];
                v56[9] = 0;
                if ( CSMgr::sendOnlineCSMsg(g_CSMgr) != 0 )
                {
                  j_free(v13);
                  CSMgr::logoutOnline((CSMgr *)g_CSMgr);
                  j_usleep(0x4C4B40u);
                  v8 = v42;
LABEL_93:
                  v7 = 0;
LABEL_102:
                  v40 = 1;
                  continue;
                }
                LOWORD(v55) = 11;
                s[64] = 74;
                v41 = 0;
                v7 = 1;
                while ( 1 )
                {
                  v49 = v13[7];
                  if ( v41 >= v49 )
                    break;
                  if ( v49 - v41 <= 15200 )
                  {
                    v56[0] = 1;
                    v56[1] = v49 - v41;
                    j_memcpy(&v56[2], (char *)v13 + v41 + 32, v49 - v41);
                  }
                  else
                  {
                    v56[0] = 0;
                    v56[1] = 15200;
                    j_memcpy(&v56[2], (char *)v13 + v41 + 32, 0x3B60u);
                    v49 = v41 + 15200;
                    if ( CSMgr::sendOnlineCSMsg(g_CSMgr) != 0 )
                    {
                      j_free(v13);
                      CSMgr::logoutOnline((CSMgr *)g_CSMgr);
                      j_usleep(0x4C4B40u);
                      v7 = 0;
                    }
                  }
                  v41 = v49;
                }
                j_free(v13);
                v8 = v42;
LABEL_91:
                if ( CSMgr::sendOnlineCSMsg(g_CSMgr) != 0 )
                {
                  CSMgr::logoutOnline((CSMgr *)g_CSMgr);
                  j_usleep(0x4C4B40u);
                  goto LABEL_93;
                }
                v40 = CSMgr::recvOnlineCSMsg(g_CSMgr);
                if ( v40 != 1 )
                {
                  CSMgr::logoutOnline((CSMgr *)g_CSMgr);
                  j_usleep(0x4C4B40u);
                  v7 = 0;
                  v40 = 1;
                  continue;
                }
                if ( v55 == 0 )
                {
                  if ( *(_BYTE *)(v4 + 705) == 1 )
                  {
                    v37 = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "ChunkSaveDBShareFlag");
                    tdr_sqlite_update(v52, 24, v37, *(_DWORD *)(a1 + 172));
                  }
                  v38 = v51;
                  v39 = *(_DWORD *)(v4 + 708) + 1;
                  *(_DWORD *)(v4 + 708) = v39;
                  *(_BYTE *)(v4 + 706) = 100 * v39 / (v38 + 1);
                  if ( ++v47 > 100 )
                  {
                    v53[2] = 6;
                    ShareSaveThread::addCmd(*(_DWORD *)(g_CSMgr + 40504), (int)v53, 1);
                    v47 = 0;
                  }
                  goto LABEL_102;
                }
                break;
              case 2u:
                v43 = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "Monster");
                v24 = *(unsigned __int8 *)(v4 + 705);
                if ( v8 != v24 )
                  tdr_sqlite_getcount(v43, *(_DWORD *)(a1 + 172), &v51);
                v25 = *(_DWORD *)(v4 + 708);
                if ( v25 >= v51 )
                {
                  v26 = 4;
                  goto LABEL_58;
                }
                j_snprintf((char *)s, 0x80u, " limit %d,%d", v25, 1);
                v27 = v56;
                v28 = *(_DWORD *)(a1 + 172);
                v29 = 128;
                goto LABEL_70;
              case 3u:
                v43 = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "Box");
                v24 = *(unsigned __int8 *)(v4 + 705);
                if ( v8 != v24 )
                  tdr_sqlite_getcount(v43, *(_DWORD *)(a1 + 172), &v51);
                v30 = *(_DWORD *)(v4 + 708);
                if ( v30 >= v51 )
                {
                  v26 = 5;
                  goto LABEL_58;
                }
                j_snprintf((char *)s, 0x80u, " limit %d,%d", v30, 1);
                v27 = v56;
                v28 = *(_DWORD *)(a1 + 172);
                v31 = 8936;
                goto LABEL_86;
              case 4u:
                v43 = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "MineCart");
                v24 = *(unsigned __int8 *)(v4 + 705);
                if ( v8 != v24 )
                  tdr_sqlite_getcount(v43, *(_DWORD *)(a1 + 172), &v51);
                v32 = *(_DWORD *)(v4 + 708);
                if ( v32 >= v51 )
                {
                  v26 = 6;
                  goto LABEL_58;
                }
                j_snprintf((char *)s, 0x80u, " limit %d,%d", v32, 1);
                v27 = v56;
                v28 = *(_DWORD *)(a1 + 172);
                v31 = 104;
                goto LABEL_86;
              case 5u:
                v43 = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "Furnace");
                v24 = *(unsigned __int8 *)(v4 + 705);
                if ( v8 != v24 )
                  tdr_sqlite_getcount(v43, *(_DWORD *)(a1 + 172), &v51);
                v33 = *(_DWORD *)(v4 + 708);
                if ( v33 >= v51 )
                {
                  v26 = 7;
                  goto LABEL_58;
                }
                j_snprintf((char *)s, 0x80u, " limit %d,%d", v33, 1);
                v27 = v56;
                v28 = *(_DWORD *)(a1 + 172);
                v29 = 240;
LABEL_70:
                v31 = 4 * v29;
                goto LABEL_86;
              case 6u:
                v43 = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "DropItem");
                v24 = *(unsigned __int8 *)(v4 + 705);
                if ( v8 != v24 )
                  tdr_sqlite_getcount(v43, *(_DWORD *)(a1 + 172), &v51);
                v34 = *(_DWORD *)(v4 + 708);
                if ( v34 >= v51 )
                {
                  v26 = 8;
                  goto LABEL_58;
                }
                j_snprintf((char *)s, 0x80u, " limit %d,%d", v34, 1);
                v28 = *(_DWORD *)(a1 + 172);
                v27 = v56;
                v31 = 344;
                goto LABEL_86;
              case 7u:
                v43 = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "OWGlobal");
                v24 = *(unsigned __int8 *)(v4 + 705);
                if ( v8 != v24 )
                  tdr_sqlite_getcount(v43, *(_DWORD *)(a1 + 172), &v51);
                v35 = *(_DWORD *)(v4 + 708);
                if ( v35 < v51 )
                {
                  j_snprintf((char *)s, 0x80u, " limit %d,%d", v35, 1);
                  v27 = v56;
                  v28 = *(_DWORD *)(a1 + 172);
                  v31 = 4184;
                  goto LABEL_86;
                }
                v26 = 9;
LABEL_58:
                *(_BYTE *)(v4 + 705) = v26;
                *(_DWORD *)(v4 + 708) = 0;
                *(_BYTE *)(v4 + 706) = 0;
                goto LABEL_88;
              case 8u:
                v43 = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "Achievement");
                v24 = *(unsigned __int8 *)(v4 + 705);
                if ( v8 != v24 )
                  tdr_sqlite_getcount(v43, *(_DWORD *)(a1 + 172), &v51);
                v36 = *(_DWORD *)(v4 + 708);
                if ( v36 < v51 )
                {
                  v56[0] = *(_DWORD *)v4;
                  j_snprintf((char *)s, 0x80u, " limit %d,%d", v36, 1);
                  v27 = &v56[2];
                  v28 = *(_DWORD *)(a1 + 172);
                  v31 = 16;
LABEL_86:
                  if ( tdr_sqlite_select(v27, v31, v43, v28) == 0 )
                  {
                    v8 = v24;
                    v7 = 1;
                    goto LABEL_91;
                  }
                  ++*(_DWORD *)(v4 + 708);
LABEL_88:
                  v8 = v24;
LABEL_89:
                  v7 = 1;
                }
                else
                {
                  v8 = v24;
                  v7 = 1;
                  v48 = 1;
                }
                v40 = 1;
                continue;
              default:
                return result;
            }
          }
          CSMgr::logoutOnline((CSMgr *)g_CSMgr);
          j_usleep(0x4C4B40u);
          v7 = 0;
        }
        else
        {
          j_usleep(0x4C4B40u);
        }
      }
      CSMgr::logoutOnline((CSMgr *)g_CSMgr);
      result = (_DWORD *)g_CSMgr;
      switch ( *(_DWORD *)(g_CSMgr + 40496) )
      {
        case 1:
          v53[2] = 4;
          *(_BYTE *)(g_CSMgr + 784 * i + 898) = 1;
          v9 = result[10126];
          goto LABEL_18;
        case 2:
          *(_BYTE *)(g_CSMgr + 784 * i + 898) = 3;
          v53[2] = 6;
          v9 = result[10126];
          goto LABEL_18;
        case 3:
          v53[2] = 4;
          *(_BYTE *)(g_CSMgr + 784 * i + 898) = 0;
          v9 = result[10126];
LABEL_18:
          result = ShareSaveThread::addCmd(v9, (int)v53, 1);
          break;
        default:
          break;
      }
      *(_DWORD *)(g_CSMgr + 40496) = 0;
      return result;
    }
  }
  return result;
}


//======================================================================
// ShareSaveThread::addInitResult(tagInitResult *)
// address: 0x0030C61C   size: 0x112 (274 bytes)
//======================================================================
void __fastcall ShareSaveThread::addInitResult(int a1, int a2)
{
  _DWORD *v3; // r3
  int v4; // r3
  int v5; // r1
  int v6; // r2
  unsigned int v7; // r3
  int *v8; // r7
  int v9; // r5
  int *v10; // r5
  int v11; // r1
  int v12; // r1
  int v13; // r2
  unsigned int v14; // r6
  int v15; // r0
  int v16; // r7
  int v17; // r3
  int *v18; // r5
  int v19; // r3
  int v20; // r5
  _DWORD *v21; // r3
  int *v22; // r2
  int v23; // r2
  int v24; // [sp+0h] [bp-14h]
  Ogre::LockSection *v26[2]; // [sp+Ch] [bp-8h] BYREF

  Ogre::LockFunctor::LockFunctor((Ogre::LockFunctor *)v26, (Ogre::LockSection *)(a1 + 84));
  v3 = *(_DWORD **)(a1 + 112);
  if ( v3 == (_DWORD *)(*(_DWORD *)(a1 + 120) - 4) )
  {
    v5 = *(_DWORD *)(a1 + 124);
    v6 = *(_DWORD *)(a1 + 88);
    v7 = *(_DWORD *)(a1 + 92);
    if ( v7 - ((v5 - v6) >> 2) <= 1 )
    {
      v8 = *(int **)(a1 + 108);
      v24 = ((v5 - (int)v8) >> 2) + 1;
      v9 = ((v5 - (int)v8) >> 2) + 2;
      if ( v7 <= 2 * v9 )
      {
        v13 = 1;
        if ( v7 != 0 )
          v13 = *(_DWORD *)(a1 + 92);
        v14 = v7 + 2 + v13;
        if ( v14 > 0x3FFFFFFF )
          sub_3BCEB4(2 * v9);
        v15 = operator new(4 * v14);
        v10 = (int *)(v15 + 4 * ((v14 - v9) >> 1));
        v16 = v15;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<tagInitResult **>(
          *(void **)(a1 + 108),
          *(_DWORD *)(a1 + 124) + 4,
          v10);
        operator delete(*(void **)(a1 + 88));
        *(_DWORD *)(a1 + 88) = v16;
        *(_DWORD *)(a1 + 92) = v14;
      }
      else
      {
        v10 = (int *)(v6 + 4 * ((v7 - v9) >> 1));
        v11 = v5 + 4;
        if ( v10 >= v8 )
        {
          v12 = v11 - (_DWORD)v8;
          if ( v12 >> 2 != 0 )
            j_memmove(&v10[v24 - (v12 >> 2)], v8, 4 * (v12 >> 2));
        }
        else
        {
          std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<tagInitResult **>(v8, v11, v10);
        }
      }
      *(_DWORD *)(a1 + 108) = v10;
      v17 = *v10;
      *(_DWORD *)(a1 + 100) = *v10;
      *(_DWORD *)(a1 + 104) = v17 + 512;
      v18 = &v10[v24 - 1];
      *(_DWORD *)(a1 + 124) = v18;
      v19 = *v18;
      *(_DWORD *)(a1 + 116) = *v18;
      *(_DWORD *)(a1 + 120) = v19 + 512;
    }
    v20 = *(_DWORD *)(a1 + 124);
    *(_DWORD *)(v20 + 4) = operator new(0x200u);
    v21 = *(_DWORD **)(a1 + 112);
    if ( v21 != nullptr )
      *v21 = a2;
    v22 = (int *)(*(_DWORD *)(a1 + 124) + 4);
    *(_DWORD *)(a1 + 124) = v22;
    v4 = *v22;
    v23 = *v22 + 512;
    *(_DWORD *)(a1 + 116) = v4;
    *(_DWORD *)(a1 + 120) = v23;
  }
  else
  {
    if ( v3 != nullptr )
      *v3 = a2;
    v4 = *(_DWORD *)(a1 + 112) + 4;
  }
  *(_DWORD *)(a1 + 112) = v4;
  Ogre::LockFunctor::~LockFunctor(v26);
}


//======================================================================
// ShareSaveThread::doTaskBuddyTask(tagShareSaveTask *)
// address: 0x0030C73C   size: 0x43E (1086 bytes)
//======================================================================
void __fastcall ShareSaveThread::doTaskBuddyTask(ShareSaveThread *this, int *a2)
{
  int v4; // r6
  void *v5; // r6
  _DWORD *v6; // r3
  int v7; // r2
  int v8; // r1
  int v9; // r1
  _DWORD *v10; // r0
  void *v11; // r4
  int v12; // r3
  int v13; // r0
  ShareSaveThread *v14; // r0
  int v15; // r1
  void *v16; // r0
  int v17; // r4
  ShareSaveThread *v18; // r0
  int v19; // r1
  _DWORD *v20; // r0
  CSMgr *v21; // r0
  void *v22; // r0
  _DWORD *v23; // r0
  void *v24; // r0
  _DWORD *v25; // r0
  void *v26; // r0
  _DWORD *v27; // r0
  int v28; // r6
  void *v29; // r0
  _DWORD *v30; // [sp+8h] [bp-4015Ch]
  size_t item_count; // [sp+Ch] [bp-40158h]
  Ogre::LockSection *v32; // [sp+1Ch] [bp-40148h] BYREF
  _DWORD v33[6]; // [sp+20h] [bp-40144h] BYREF
  __int16 v34; // [sp+38h] [bp-4012Ch]
  _DWORD v35[65607]; // [sp+48h] [bp-4011Ch] BYREF

  v4 = a2[2];
  item_count = a2[3];
  switch ( v4 )
  {
    case 6:
      ShareSaveThread::saveWorldListDB(this, a2[5]);
LABEL_68:
      v23 = (_DWORD *)a2[5];
      goto LABEL_69;
    case 5:
      ShareSaveThread::updateBuddyDB(this);
      goto LABEL_68;
    case 1:
      if ( *(_DWORD *)(g_CSMgr + 20328) == a2[4] )
      {
        ShareSaveThread::updateBuddyDB(this);
        ShareSaveThread::writeTaskRecord(this, (int)a2);
      }
      else
      {
        ShareSaveThread::delTaskRecord((int)this, *a2, 0);
      }
      return;
    default:
      break;
  }
  if ( v4 != 8 )
  {
    if ( v4 == 7 )
    {
      v10 = j_calloc(1u, 0x14u);
      v10[1] = 1;
      *v10 = 7;
      v11 = (void *)a2[5];
      v30 = v10;
      j_memcpy(v33, v11, sizeof(v33));
      j_free(v11);
      if ( *((_BYTE *)this + 192) != 0 && CSMgr::loginOnline((CSMgr *)g_CSMgr) == 0 )
      {
        v34 = 81;
        v35[2] = v33[4];
        v35[3] = v33[5];
        v35[0] = v33[2];
        v35[1] = v33[3];
        v32 = (Ogre::LockSection *)&g_Locker1;
        Ogre::LockSection::Lock((pthread_mutex_t *)&g_Locker1);
        v12 = g_CSMgr;
        v13 = 0;
        v35[4] = *(_DWORD *)(g_CSMgr + 26120);
        while ( v13 < *(_DWORD *)(v12 + 26120) )
        {
          v35[v13 + 5] = *(_DWORD *)(v12 + 56 * v13 + 26128);
          ++v13;
        }
        Ogre::LockFunctor::~LockFunctor(&v32);
        if ( CSMgr::sendOnlineCSMsg(g_CSMgr) != 0 || CSMgr::recvOnlineCSMsg(g_CSMgr) != 1 || v34 != 82 )
        {
          v14 = this;
          v15 = (int)v30;
LABEL_38:
          ShareSaveThread::addInitResult((int)v14, v15);
LABEL_60:
          v21 = (CSMgr *)g_CSMgr;
          goto LABEL_65;
        }
        CSMgr::logoutOnline((CSMgr *)g_CSMgr);
        v16 = j_malloc(0x248u);
        v17 = (int)v30;
        v30[2] = v16;
        if ( v16 == nullptr )
        {
LABEL_25:
          v18 = this;
          v19 = v17;
LABEL_26:
          ShareSaveThread::addInitResult((int)v18, v19);
          return;
        }
        v30[1] = 0;
        j_memcpy(v16, v35, 0x248u);
      }
      v18 = this;
      v19 = (int)v30;
      goto LABEL_26;
    }
    if ( v4 != 0 )
    {
      if ( v4 != 2 )
      {
        if ( v4 != 3 )
        {
          if ( v4 != 4 )
            return;
          ShareSaveThread::writeTaskRecord(this, (int)a2);
          goto LABEL_68;
        }
        if ( *((_DWORD *)this + 66) != 2 || *((_BYTE *)this + 192) == 0 || CSMgr::loginOnline((CSMgr *)g_CSMgr) != 0 )
          return;
        LOBYTE(v35[0]) = 0;
        v34 = 73;
        if ( CSMgr::sendOnlineCSMsg(g_CSMgr) == 0 )
        {
          if ( CSMgr::recvOnlineCSMsg(g_CSMgr) != 1 || v34 != 55 || LOWORD(v35[1]) == 0 )
            goto LABEL_60;
          v27 = j_calloc(1u, 0x14u);
          *v27 = 6;
          v28 = (int)v27;
          v27[1] = 0;
          v29 = j_malloc(0xE108u);
          *(_DWORD *)(v28 + 8) = v29;
          j_memcpy(v29, v35, 0xE108u);
          ShareSaveThread::addInitResult((int)this, v28);
          v34 = 56;
          CSMgr::sendOnlineCSMsg(g_CSMgr);
        }
LABEL_64:
        v21 = (CSMgr *)g_CSMgr;
        goto LABEL_65;
      }
      v23 = j_calloc(1u, 0x14u);
      *v23 = 4;
      v23[1] = 1;
      v17 = (int)v23;
      if ( *((_DWORD *)this + 66) != 2 )
      {
LABEL_69:
        j_free(v23);
        return;
      }
      if ( *((_BYTE *)this + 192) != 0 && CSMgr::loginOnline((CSMgr *)g_CSMgr) == 0 )
      {
        v35[0] = item_count;
        v34 = 70;
        if ( CSMgr::sendOnlineCSMsg(g_CSMgr) == 0 && CSMgr::recvOnlineCSMsg(g_CSMgr) == 1 && v34 == 71 )
        {
          v24 = j_malloc(0x1668u);
          *(_DWORD *)(v17 + 8) = v24;
          if ( v24 != nullptr )
          {
            *(_DWORD *)(v17 + 4) = 0;
            j_memcpy(v24, v35, 0x1668u);
            ShareSaveThread::addInitResult((int)this, v17);
            v25 = j_calloc(1u, 0x14u);
            *v25 = 5;
            v17 = (int)v25;
            v25[1] = 1;
            if ( CSMgr::recvOnlineCSMsg(g_CSMgr) == 1 && v34 == 72 )
            {
              v26 = j_malloc(0x4CA0u);
              *(_DWORD *)(v17 + 8) = v26;
              if ( v26 != nullptr )
              {
                *(_DWORD *)(v17 + 4) = 0;
                j_memcpy(v26, v35, 0x4CA0u);
              }
            }
          }
        }
        ShareSaveThread::addInitResult((int)this, v17);
        goto LABEL_64;
      }
    }
    else
    {
      v20 = j_calloc(1u, 0x14u);
      *v20 = 3;
      v20[1] = 1;
      v17 = (int)v20;
      if ( *((_BYTE *)this + 192) != 0 && CSMgr::loginOnline((CSMgr *)g_CSMgr) == 0 )
      {
        v35[0] = item_count;
        v34 = 66;
        if ( CSMgr::sendOnlineCSMsg(g_CSMgr) != 0 )
        {
          ShareSaveThread::addInitResult((int)this, v17);
          v21 = (CSMgr *)g_CSMgr;
LABEL_65:
          CSMgr::logoutOnline(v21);
          return;
        }
        if ( CSMgr::recvOnlineCSMsg(g_CSMgr) != 1 || v34 != 67 || v35[0] != 0 )
        {
          v14 = this;
          v15 = v17;
          goto LABEL_38;
        }
        CSMgr::logoutOnline((CSMgr *)g_CSMgr);
        v22 = j_malloc(0x38u);
        *(_DWORD *)(v17 + 8) = v22;
        if ( v22 != nullptr )
        {
          *(_DWORD *)(v17 + 4) = 0;
          j_memcpy(v22, &v35[2], 0x38u);
        }
      }
    }
    goto LABEL_25;
  }
  v5 = (void *)a2[5];
  j_memcpy(v33, v5, sizeof(v33));
  j_free(v5);
  if ( *((_BYTE *)this + 192) != 0 && CSMgr::loginOnline((CSMgr *)g_CSMgr) == 0 )
  {
    v34 = 83;
    j_memcpy(v35, v33, 0x18u);
    if ( CSMgr::sendOnlineCSMsg(g_CSMgr) == 0 )
    {
      v6 = (_DWORD *)g_CSMgr;
      v7 = g_CSMgr + 40464;
      v8 = v33[3];
      *(_DWORD *)(g_CSMgr + 40464) = v33[2];
      *(_DWORD *)(v7 + 4) = v8;
      v6 += 10118;
      v9 = v33[5];
      *v6 = v33[4];
      v6[1] = v9;
    }
    goto LABEL_64;
  }
}


//======================================================================
// ShareSaveThread::doChunkLoad(tagShareSaveTask *)
// address: 0x0030CB98   size: 0x62 (98 bytes)
//======================================================================
void __fastcall ShareSaveThread::doChunkLoad(ShareSaveThread *a1, int a2)
{
  _DWORD *v4; // r0
  int v5; // r2
  int v6; // r4
  void *v7; // r6
  int ChunkSaveDBBlobSize; // [sp+8h] [bp-Ch]
  int v9; // [sp+Ch] [bp-8h]

  v4 = j_calloc(1u, 0x14u);
  *v4 = 2;
  v5 = *(_DWORD *)(a2 + 20);
  v6 = (int)v4;
  v4[3] = v5;
  v9 = v5;
  ChunkSaveDBBlobSize = ShareSaveThread::getChunkSaveDBBlobSize(a1, *(_DWORD *)(a2 + 12), v5);
  v7 = j_malloc(ChunkSaveDBBlobSize + 40);
  if ( v7 != nullptr )
  {
    if ( ShareSaveThread::loadChunkSaveDB(a1, (int)v7, ChunkSaveDBBlobSize, *(_DWORD *)(a2 + 12), v9) == 0 )
    {
      ShareSaveThread::addInitResult((int)a1, v6);
      j_free(v7);
      return;
    }
    *(_DWORD *)(v6 + 8) = v7;
  }
  ShareSaveThread::addInitResult((int)a1, v6);
}


//======================================================================
// ShareSaveThread::doRoleTask(tagShareSaveTask *)
// address: 0x0030CBFC   size: 0x5C (92 bytes)
//======================================================================
void __fastcall ShareSaveThread::doRoleTask(ShareSaveThread *a1, _DWORD *a2)
{
  int v2; // r5
  _DWORD *v5; // r0
  int v6; // r4
  int *v7; // r2

  v2 = a2[2];
  if ( v2 != 0 )
  {
    if ( v2 == 1 )
    {
      v5 = j_calloc(1u, 0x14u);
      v6 = (int)v5;
      if ( v5 != nullptr )
      {
        v5[1] = 0;
        *v5 = 10;
        v7 = (int *)j_calloc(1u, 0x34F8u);
        *(_DWORD *)(v6 + 8) = v7;
        if ( v7 == nullptr || ShareSaveThread::getOWRoleFromDB(a1, a2[3], v7, a2[4]) == 0 )
          *(_DWORD *)(v6 + 4) = 1;
        ShareSaveThread::addInitResult((int)a1, v6);
      }
    }
  }
  else
  {
    ShareSaveThread::updateOWRoleDB(a1, a2[3], a2[5]);
    j_free((void *)a2[5]);
  }
}


//======================================================================
// ShareSaveThread::doWorldTask(tagShareSaveTask *)
// address: 0x0030CC5C   size: 0x3AA (938 bytes)
//======================================================================
void __fastcall ShareSaveThread::doWorldTask(int a1, _DWORD *a2)
{
  int v4; // r2
  _DWORD *v5; // r0
  int v6; // r5
  void *v7; // r0
  void *v8; // r6
  void *v9; // r0
  Ogre::LockSection *v10; // r3
  Ogre::LockSection *v11; // r2
  int v12; // r3
  _DWORD *v13; // r0
  void *v14; // r4
  _DWORD *v15; // r0
  void *v16; // r4
  void *v17; // r0
  void *v18; // [sp+8h] [bp-40154h]
  Ogre::LockSection *v19; // [sp+14h] [bp-40148h] BYREF
  Ogre::LockSection *v20[6]; // [sp+18h] [bp-40144h] BYREF
  __int16 v21; // [sp+30h] [bp-4012Ch]
  _BYTE v22[11768]; // [sp+40h] [bp-4011Ch] BYREF

  v4 = a2[2];
  if ( v4 == 2 )
  {
    v5 = j_calloc(1u, 0x14u);
    v6 = (int)v5;
    if ( v5 == nullptr )
      return;
    v5[1] = 0;
    *v5 = 1;
    v18 = j_calloc(1u, 0x1058u);
    *(_DWORD *)(v6 + 8) = v18;
    v7 = j_calloc(1u, 0x34F8u);
    *(_DWORD *)(v6 + 12) = v7;
    v8 = v7;
    v9 = j_calloc(1u, 0x1008u);
    *(_DWORD *)(v6 + 16) = v9;
    if ( v18 != nullptr && v8 != nullptr && v9 != nullptr )
    {
      if ( sub_304AEC(a2[3]) == 0 )
      {
        if ( ShareSaveThread::haveLoadWorldTask((ShareSaveThread *)a1, v20, a2[3]) == nullptr )
        {
          j_memset(v20, 0, sizeof(v20));
          v10 = (Ogre::LockSection *)a2[3];
          v20[1] = (Ogre::LockSection *)(&dword_0 + 1);
          v11 = (Ogre::LockSection *)a2[4];
          v20[0] = v10;
          if ( (int)v11 <= 0 )
            v20[3] = v10;
          else
            v20[3] = v11;
          v20[4] = (Ogre::LockSection *)-1;
          ShareSaveThread::writeLoadWorldTask((ShareSaveThread *)a1, (int)v20);
        }
        ShareSaveThread::createOWDB((ShareSaveThread *)a1, a2[3]);
      }
      if ( ShareSaveThread::haveLoadWorldTask((ShareSaveThread *)a1, v20, a2[3]) != nullptr )
        *(_DWORD *)(v6 + 4) = ShareSaveThread::doLoadWorldTask(a1, (int *)v20);
      if ( *(_DWORD *)(v6 + 4) == 0 )
      {
        v19 = (Ogre::LockSection *)&g_CreateOWLocker1;
        Ogre::LockSection::Lock((pthread_mutex_t *)&g_CreateOWLocker1);
        if ( ShareSaveThread::getOWGlobalFromDB((ShareSaveThread *)a1, a2[3], *(_DWORD **)(v6 + 8)) == 0 )
          *(_DWORD *)(v6 + 4) = 1;
        if ( ShareSaveThread::getOWRoleFromDB(
               (ShareSaveThread *)a1,
               a2[3],
               *(int **)(v6 + 12),
               *(_DWORD *)(g_CSMgr + 20328)) == 0 )
          *(_DWORD *)(v6 + 4) = 1;
        if ( ShareSaveThread::getOWAchievementFromDB((Kompex::SQLiteStatement **)a1, a2[3], *(_DWORD **)(v6 + 16)) == 0 )
          *(_DWORD *)(v6 + 4) = 1;
        if ( *(_DWORD *)(v6 + 4) == 0 )
          ShareSaveThread::loadChunkFlagSet((Kompex::SQLiteStatement **)a1, a2[3]);
        v12 = g_CSMgr;
        *(_DWORD *)(g_CSMgr + 40480) = 9;
        *(_DWORD *)(v12 + 40484) = 100;
        Ogre::LockFunctor::~LockFunctor(&v19);
      }
    }
    else
    {
      *(_DWORD *)(v6 + 4) = 1;
    }
    goto LABEL_64;
  }
  if ( v4 == 6 )
    goto LABEL_27;
  if ( (unsigned int)(v4 - 7) <= 2 )
  {
    ShareSaveThread::shareWorld(a1, (_DWORD *)a2[5], v4);
    goto LABEL_66;
  }
  if ( v4 == 1 )
  {
    ShareSaveThread::delWorldListDB((ShareSaveThread *)a1, a2[5]);
    ShareSaveThread::delOWTask((ShareSaveThread *)a1, a2[3]);
    if ( *(_DWORD *)(a1 + 40) == a2[3] )
      ShareSaveThread::checkCurrDB((ShareSaveThread *)a1, 0, 0);
    sub_304B34(a2[3]);
    goto LABEL_65;
  }
  if ( v4 == 0 )
  {
    ShareSaveThread::createOWDB((ShareSaveThread *)a1, a2[3]);
LABEL_38:
    ShareSaveThread::saveWorldListDB((ShareSaveThread *)a1, a2[5]);
LABEL_65:
    ShareSaveThread::writeTaskRecord((ShareSaveThread *)a1, (int)a2);
    goto LABEL_66;
  }
  if ( v4 != 3 )
  {
    switch ( v4 )
    {
      case 4:
        goto LABEL_38;
      case 5:
        if ( j_time(nullptr) - *(_DWORD *)(a2[5] + 112) <= 1 )
        {
          if ( *(_DWORD *)(a1 + 40) == a2[3] )
            ShareSaveThread::checkCurrDB((ShareSaveThread *)a1, 0, 0);
          v20[0] = (Ogre::LockSection *)&g_Locker1;
          Ogre::LockSection::Lock((pthread_mutex_t *)&g_Locker1);
          if ( *(_DWORD *)(a1 + 264) == 2 )
            j_usleep(0x7A120u);
          sub_304B34(a2[3]);
          Ogre::LockFunctor::~LockFunctor(v20);
        }
        goto LABEL_66;
      case 10:
        ShareSaveThread::writeTaskRecord((ShareSaveThread *)a1, (int)a2);
        return;
      case 11:
        v21 = 84;
        v13 = j_calloc(1u, 0x14u);
        *v13 = 8;
        v13[1] = 1;
        v14 = (void *)a2[5];
        v6 = (int)v13;
        j_memcpy(v22, v14, 0x268u);
        j_free(v14);
        if ( *(_BYTE *)(a1 + 192) != 0 && CSMgr::loginOnline((CSMgr *)g_CSMgr) == 0 )
        {
          if ( CSMgr::sendOnlineCSMsg(g_CSMgr) == 0 && CSMgr::recvOnlineCSMsg(g_CSMgr) == 1 && v21 == 85 )
            goto LABEL_62;
          goto LABEL_61;
        }
        break;
      case 12:
        v21 = 86;
        v15 = j_calloc(1u, 0x14u);
        *v15 = 9;
        v15[1] = 1;
        v16 = (void *)a2[5];
        v6 = (int)v15;
        j_memcpy(v22, v16, 0x40u);
        j_free(v16);
        if ( *(_BYTE *)(a1 + 192) != 0 && CSMgr::loginOnline((CSMgr *)g_CSMgr) == 0 )
        {
          if ( CSMgr::sendOnlineCSMsg(g_CSMgr) == 0 && CSMgr::recvOnlineCSMsg(g_CSMgr) == 1 && v21 == 87 )
          {
LABEL_62:
            CSMgr::logoutOnline((CSMgr *)g_CSMgr);
            v17 = j_malloc(0x2DF8u);
            *(_DWORD *)(v6 + 8) = v17;
            if ( v17 != nullptr )
            {
              *(_DWORD *)(v6 + 4) = 0;
              j_memcpy(v17, v22, 0x2DF8u);
            }
            break;
          }
LABEL_61:
          ShareSaveThread::addInitResult(a1, v6);
          CSMgr::logoutOnline((CSMgr *)g_CSMgr);
          return;
        }
        break;
      default:
        goto LABEL_65;
    }
LABEL_64:
    ShareSaveThread::addInitResult(a1, v6);
    return;
  }
LABEL_27:
  ShareSaveThread::saveWorldListDB((ShareSaveThread *)a1, a2[5]);
LABEL_66:
  j_free((void *)a2[5]);
}


//======================================================================
// ShareSaveThread::checkToken(void)
// address: 0x0030D014   size: 0x78 (120 bytes)
//======================================================================
void __fastcall ShareSaveThread::checkToken(ShareSaveThread *this)
{
  _BYTE *v2; // r5
  time_t v3; // r0
  int v4; // r2
  int v5; // r6
  _DWORD *v6; // r0

  if ( *((_BYTE *)this + 192) == 0 )
  {
    v2 = (char *)this + 193;
    if ( *((_BYTE *)this + 193) == 0 )
    {
      ShareSaveThread::loadUinDataDB(this);
      *v2 = 1;
    }
    v3 = j_time(nullptr);
    v4 = *((_DWORD *)this + 50);
    if ( v4 == 0 || v3 - v4 > 59 )
    {
      *((_DWORD *)this + 50) = v3;
      ShareSaveThread::getToken(this);
      v5 = *((unsigned __int8 *)this + 194);
      if ( *((_BYTE *)this + 194) == 0 )
      {
        *((_BYTE *)this + 194) = 1;
        v6 = j_calloc(1u, 0x14u);
        if ( v6 != nullptr )
        {
          *v6 = v5;
          if ( *(_DWORD *)(g_CSMgr + 20328) != 0 )
            v6[1] = v5;
          else
            v6[1] = 1;
          ShareSaveThread::addInitResult((int)this, (int)v6);
        }
      }
    }
  }
}


//======================================================================
// ShareSaveThread::addLoadResult(tagLoadResult *)
// address: 0x0030D0B4   size: 0x146 (326 bytes)
//======================================================================
void __fastcall ShareSaveThread::addLoadResult(int a1, int a2)
{
  _DWORD *v3; // r2
  int v4; // r1
  int v5; // r2
  unsigned int v6; // r3
  int *v7; // r6
  int v8; // r7
  int *v9; // r5
  int v10; // r1
  int v11; // r1
  int v12; // r2
  unsigned int v13; // r6
  int v14; // r0
  int v15; // r2
  int *v16; // r5
  int v17; // r2
  _DWORD *v18; // r5
  int v19; // r6
  int v20; // r4
  int *v21; // r2
  int v22; // r3
  int v23; // r2
  int v24; // [sp+4h] [bp-18h]
  int v25; // [sp+8h] [bp-14h]
  Ogre::LockSection *v27[2]; // [sp+14h] [bp-8h] BYREF

  Ogre::LockFunctor::LockFunctor((Ogre::LockFunctor *)v27, (Ogre::LockSection *)(a1 + 84));
  v3 = *(_DWORD **)(a1 + 152);
  if ( v3 == (_DWORD *)(*(_DWORD *)(a1 + 160) - 4) )
  {
    v4 = *(_DWORD *)(a1 + 164);
    v5 = *(_DWORD *)(a1 + 128);
    v6 = *(_DWORD *)(a1 + 132);
    if ( v6 - ((v4 - v5) >> 2) <= 1 )
    {
      v7 = *(int **)(a1 + 148);
      v8 = ((v4 - (int)v7) >> 2) + 2;
      v24 = ((v4 - (int)v7) >> 2) + 1;
      if ( v6 <= 2 * v8 )
      {
        v12 = 1;
        if ( v6 != 0 )
          v12 = *(_DWORD *)(a1 + 132);
        v13 = v6 + 2 + v12;
        if ( v13 > 0x3FFFFFFF )
          sub_3BCEB4(2 * v8);
        v14 = operator new(4 * v13);
        v9 = (int *)(v14 + 4 * ((v13 - v8) >> 1));
        v25 = v14;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<tagLoadResult **>(
          *(void **)(a1 + 148),
          *(_DWORD *)(a1 + 164) + 4,
          v9);
        operator delete(*(void **)(a1 + 128));
        *(_DWORD *)(a1 + 128) = v25;
        *(_DWORD *)(a1 + 132) = v13;
      }
      else
      {
        v9 = (int *)(v5 + 4 * ((v6 - v8) >> 1));
        v10 = v4 + 4;
        if ( v9 >= v7 )
        {
          v11 = v10 - (_DWORD)v7;
          if ( v11 >> 2 != 0 )
            j_memmove(&v9[v24 - (v11 >> 2)], v7, 4 * (v11 >> 2));
        }
        else
        {
          std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<tagLoadResult **>(
            v7,
            v10,
            (void *)(v5 + 4 * ((v6 - v8) >> 1)));
        }
      }
      *(_DWORD *)(a1 + 148) = v9;
      v15 = *v9;
      *(_DWORD *)(a1 + 140) = *v9;
      *(_DWORD *)(a1 + 144) = v15 + 512;
      v16 = &v9[v24 - 1];
      *(_DWORD *)(a1 + 164) = v16;
      v17 = *v16;
      *(_DWORD *)(a1 + 156) = *v16;
      *(_DWORD *)(a1 + 160) = v17 + 512;
    }
    v18 = (_DWORD *)(a1 + 164);
    v19 = *(_DWORD *)(a1 + 164);
    *(_DWORD *)(v19 + 4) = operator new(0x200u);
    v20 = a1 + 152;
    if ( *(_DWORD *)v20 != 0 )
      **(_DWORD **)v20 = a2;
    v21 = (int *)(*v18 + 4);
    *(_DWORD *)(v20 + 12) = v21;
    v22 = *v21;
    v23 = *v21 + 512;
    *(_DWORD *)(v20 + 4) = v22;
    *(_DWORD *)(v20 + 8) = v23;
    *(_DWORD *)v20 = v22;
  }
  else
  {
    if ( v3 != nullptr )
      *v3 = a2;
    *(_DWORD *)(a1 + 152) += 4;
  }
  Ogre::LockFunctor::~LockFunctor(v27);
}


//======================================================================
// ShareSaveThread::loadChunkMonFromDB(tagPos *)
// address: 0x0030D208   size: 0xB0 (176 bytes)
//======================================================================
int __fastcall ShareSaveThread::loadChunkMonFromDB(int a1, int *a2)
{
  int meta_by_name; // r0
  int v5; // r3
  Kompex::SQLiteStatement **v6; // r5
  void *v7; // r0
  void *v8; // r4
  _DWORD *v9; // r0
  int v11; // [sp+0h] [bp-14h]
  int v12; // [sp+4h] [bp-10h]
  int v13; // [sp+Ch] [bp-8h]
  char v14[128]; // [sp+14h] [bp+0h] BYREF

  meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "Monster");
  v5 = *a2;
  v13 = meta_by_name;
  v11 = a2[1];
  v12 = *((unsigned __int16 *)a2 + 5);
  v6 = (Kompex::SQLiteStatement **)(a1 + 172);
  j_snprintf(v14, 0x80u, "select * from Monster  where ChunkX=%d and ChunkZ=%d and map=%d", v5, v11, v12);
  Kompex::SQLiteStatement::Prepare(*(Kompex::SQLiteStatement **)(a1 + 172), v14);
  while ( Kompex::SQLiteStatement::FetchRow(*v6) != 0 )
  {
    v7 = j_malloc(0x200u);
    v8 = v7;
    if ( v7 == nullptr )
      break;
    if ( tdr_sqlite_fetch(v7, 512, v13, *v6) != 0 || (v9 = j_malloc(8u)) == nullptr )
    {
      j_free(v8);
      break;
    }
    *v9 = 0;
    v9[1] = v8;
    ShareSaveThread::addLoadResult(a1, (int)v9);
  }
  Kompex::SQLiteStatement::FreeQuery(*v6);
  return 1;
}


//======================================================================
// ShareSaveThread::loadChunkItemFromDB(tagPos *)
// address: 0x0030D2C8   size: 0xB0 (176 bytes)
//======================================================================
int __fastcall ShareSaveThread::loadChunkItemFromDB(int a1, int *a2)
{
  int meta_by_name; // r0
  int v5; // r3
  Kompex::SQLiteStatement **v6; // r5
  void *v7; // r0
  void *v8; // r4
  _DWORD *v9; // r0
  int v11; // [sp+0h] [bp-14h]
  int v12; // [sp+4h] [bp-10h]
  int v13; // [sp+Ch] [bp-8h]
  char v14[128]; // [sp+14h] [bp+0h] BYREF

  meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "DropItem");
  v5 = *a2;
  v13 = meta_by_name;
  v11 = a2[1];
  v12 = *((unsigned __int16 *)a2 + 5);
  v6 = (Kompex::SQLiteStatement **)(a1 + 172);
  j_snprintf(v14, 0x80u, "select * from DropItem  where ChunkX=%d and ChunkZ=%d and map=%d", v5, v11, v12);
  Kompex::SQLiteStatement::Prepare(*(Kompex::SQLiteStatement **)(a1 + 172), v14);
  while ( Kompex::SQLiteStatement::FetchRow(*v6) != 0 )
  {
    v7 = j_malloc(0x158u);
    v8 = v7;
    if ( v7 == nullptr )
      break;
    if ( tdr_sqlite_fetch(v7, 344, v13, *v6) != 0 || (v9 = j_malloc(8u)) == nullptr )
    {
      j_free(v8);
      break;
    }
    *v9 = 2;
    v9[1] = v8;
    ShareSaveThread::addLoadResult(a1, (int)v9);
  }
  Kompex::SQLiteStatement::FreeQuery(*v6);
  return 1;
}


//======================================================================
// ShareSaveThread::loadChunkMinecartFromDB(tagPos *)
// address: 0x0030D388   size: 0xAC (172 bytes)
//======================================================================
int __fastcall ShareSaveThread::loadChunkMinecartFromDB(int a1, int *a2)
{
  int meta_by_name; // r0
  int v5; // r3
  Kompex::SQLiteStatement **v6; // r5
  void *v7; // r0
  void *v8; // r4
  _DWORD *v9; // r0
  int v11; // [sp+0h] [bp-14h]
  int v12; // [sp+4h] [bp-10h]
  int v13; // [sp+Ch] [bp-8h]
  char v14[128]; // [sp+14h] [bp+0h] BYREF

  meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "MineCart");
  v5 = *a2;
  v13 = meta_by_name;
  v11 = a2[1];
  v12 = *((unsigned __int16 *)a2 + 5);
  v6 = (Kompex::SQLiteStatement **)(a1 + 172);
  j_snprintf(v14, 0x80u, "select * from MineCart  where ChunkX=%d and ChunkZ=%d and map=%d", v5, v11, v12);
  Kompex::SQLiteStatement::Prepare(*(Kompex::SQLiteStatement **)(a1 + 172), v14);
  while ( Kompex::SQLiteStatement::FetchRow(*v6) != 0 )
  {
    v7 = j_malloc(0x68u);
    v8 = v7;
    if ( v7 == nullptr )
      break;
    if ( tdr_sqlite_fetch(v7, 104, v13, *v6) != 0 || (v9 = j_malloc(8u)) == nullptr )
    {
      j_free(v8);
      break;
    }
    *v9 = 6;
    v9[1] = v8;
    ShareSaveThread::addLoadResult(a1, (int)v9);
  }
  Kompex::SQLiteStatement::FreeQuery(*v6);
  return 1;
}


//======================================================================
// ShareSaveThread::loadChunkFurnaceFromDB(tagPos *)
// address: 0x0030D444   size: 0xB0 (176 bytes)
//======================================================================
int __fastcall ShareSaveThread::loadChunkFurnaceFromDB(int a1, int *a2)
{
  int meta_by_name; // r0
  int v5; // r3
  Kompex::SQLiteStatement **v6; // r5
  void *v7; // r0
  void *v8; // r4
  _DWORD *v9; // r0
  int v11; // [sp+0h] [bp-14h]
  int v12; // [sp+4h] [bp-10h]
  int v13; // [sp+Ch] [bp-8h]
  char v14[128]; // [sp+14h] [bp+0h] BYREF

  meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "Furnace");
  v5 = *a2;
  v13 = meta_by_name;
  v11 = a2[1];
  v12 = *((unsigned __int16 *)a2 + 5);
  v6 = (Kompex::SQLiteStatement **)(a1 + 172);
  j_snprintf(v14, 0x80u, "select * from Furnace  where ChunkX=%d and ChunkZ=%d and map=%d", v5, v11, v12);
  Kompex::SQLiteStatement::Prepare(*(Kompex::SQLiteStatement **)(a1 + 172), v14);
  while ( Kompex::SQLiteStatement::FetchRow(*v6) != 0 )
  {
    v7 = j_malloc(0x3C0u);
    v8 = v7;
    if ( v7 == nullptr )
      break;
    if ( tdr_sqlite_fetch(v7, 960, v13, *v6) != 0 || (v9 = j_malloc(8u)) == nullptr )
    {
      j_free(v8);
      break;
    }
    *v9 = 7;
    v9[1] = v8;
    ShareSaveThread::addLoadResult(a1, (int)v9);
  }
  Kompex::SQLiteStatement::FreeQuery(*v6);
  return 1;
}


//======================================================================
// ShareSaveThread::loadChunkBoxFromDB(tagPos *)
// address: 0x0030D504   size: 0xAC (172 bytes)
//======================================================================
int __fastcall ShareSaveThread::loadChunkBoxFromDB(int a1, int *a2)
{
  int meta_by_name; // r0
  int v5; // r3
  Kompex::SQLiteStatement **v6; // r5
  void *v7; // r0
  void *v8; // r4
  _DWORD *v9; // r0
  int v11; // [sp+0h] [bp-14h]
  int v12; // [sp+4h] [bp-10h]
  int v13; // [sp+Ch] [bp-8h]
  char v14[128]; // [sp+14h] [bp+0h] BYREF

  meta_by_name = tdr_get_meta_by_name(**(_DWORD **)(g_CSMgr + 572), "Box");
  v5 = *a2;
  v13 = meta_by_name;
  v11 = a2[1];
  v12 = *((unsigned __int16 *)a2 + 5);
  v6 = (Kompex::SQLiteStatement **)(a1 + 172);
  j_snprintf(v14, 0x80u, "select * from Box  where ChunkX=%d and ChunkZ=%d and map=%d", v5, v11, v12);
  Kompex::SQLiteStatement::Prepare(*(Kompex::SQLiteStatement **)(a1 + 172), v14);
  while ( Kompex::SQLiteStatement::FetchRow(*v6) != 0 )
  {
    v7 = j_malloc(0x22E8u);
    v8 = v7;
    if ( v7 == nullptr )
      break;
    if ( tdr_sqlite_fetch(v7, 8936, v13, *v6) != 0 || (v9 = j_malloc(8u)) == nullptr )
    {
      j_free(v8);
      break;
    }
    *v9 = 1;
    v9[1] = v8;
    ShareSaveThread::addLoadResult(a1, (int)v9);
  }
  Kompex::SQLiteStatement::FreeQuery(*v6);
  return 1;
}


//======================================================================
// ShareSaveThread::loadChunkObjFromDB(int,tagPos *)
// address: 0x0030D5C4   size: 0x3C (60 bytes)
//======================================================================
int __fastcall ShareSaveThread::loadChunkObjFromDB(ShareSaveThread *a1, int a2, int *a3)
{
  int v5; // r6

  v5 = ShareSaveThread::checkCurrDB(a1, a2, 0);
  if ( v5 != 0 )
  {
    ShareSaveThread::loadChunkMonFromDB((int)a1, a3);
    ShareSaveThread::loadChunkItemFromDB((int)a1, a3);
    ShareSaveThread::loadChunkMinecartFromDB((int)a1, a3);
    ShareSaveThread::loadChunkFurnaceFromDB((int)a1, a3);
    ShareSaveThread::loadChunkBoxFromDB((int)a1, a3);
  }
  return v5;
}


//======================================================================
// ShareSaveThread::doChunkTask(tagShareSaveTask *)
// address: 0x0030D600   size: 0x40 (64 bytes)
//======================================================================
void __fastcall ShareSaveThread::doChunkTask(ShareSaveThread *a1, int a2)
{
  switch ( *(_DWORD *)(a2 + 8) )
  {
    case 0:
    case 4:
      ShareSaveThread::doChunkSave(a1, a2);
      break;
    case 1:
      ShareSaveThread::doChunkLoad(a1, a2);
      break;
    case 2:
      ShareSaveThread::loadChunkObjFromDB(a1, *(_DWORD *)(a2 + 12), *(int **)(a2 + 20));
      j_free(*(void **)(a2 + 20));
      break;
    case 3:
      ShareSaveThread::doFlatSave(a1, a2);
      break;
    default:
      return;
  }
}


//======================================================================
// ShareSaveThread::_run(void)
// address: 0x0030D640   size: 0x4D8 (1240 bytes)
//======================================================================
int __fastcall ShareSaveThread::_run(ShareSaveThread *this)
{
  Ogre::LockSection *v1; // r1
  Ogre::LockSection *v2; // r2
  Kompex::SQLiteDatabase *TaskRecord; // r0
  Kompex::SQLiteDatabase *v5; // r5
  int v6; // r3
  int v7; // r3
  Kompex::SQLiteDatabase *v8; // r6
  int v9; // r2
  __suseconds_t v10; // r1
  __int64 v11; // r0
  int v12; // r0
  unsigned int v13; // r3
  const char *v14; // r1
  __suseconds_t v15; // r1
  __int64 v16; // r0
  int v17; // r0
  unsigned int v18; // r3
  const char *v19; // r1
  char *v20; // r5
  char *v21; // r4
  int v22; // r7
  __int64 v23; // r0
  int v24; // r0
  unsigned int v25; // r3
  const char *v26; // r1
  int v27; // r6
  int v28; // r0
  int SystemTick; // [sp+10h] [bp-414h]
  int v31; // [sp+10h] [bp-414h]
  char s[992]; // [sp+1Ch] [bp-408h] BYREF
  int v33; // [sp+41Ch] [bp-8h] BYREF

  v1 = (Ogre::LockSection *)&v33;
  v2 = *((Ogre::LockSection **)this + 66);
  if ( v2 == (Ogre::LockSection *)((char *)&dword_0 + 2) )
  {
    ShareSaveThread::checkToken(this);
  }
  else if ( v2 == (Ogre::LockSection *)((char *)&dword_0 + 1) )
  {
    v1 = (Ogre::LockSection *)*((unsigned __int8 *)this + 197);
    if ( *((_BYTE *)this + 197) == 0 )
    {
      *((_BYTE *)this + 197) = 1;
      if ( sub_304AD0() == 0 )
        ShareSaveThread::createUinDB(this);
    }
  }
  TaskRecord = (Kompex::SQLiteDatabase *)ShareSaveThread::popCmd(this, v1, v2);
  v5 = TaskRecord;
  if ( TaskRecord != nullptr )
  {
    v6 = *((_DWORD *)TaskRecord + 1);
    if ( v6 == 9 )
    {
      ShareSaveThread::doFurnaceTask(this, TaskRecord);
    }
    else if ( v6 > 9 )
    {
      if ( v6 == 9995 )
      {
        if ( *((_DWORD *)this + 10) != 0 && *((_DWORD *)this + 42) != 0 && *((_DWORD *)this + 43) != 0 )
          ShareSaveThread::store2OW(this, *((_DWORD *)TaskRecord + 3));
        goto LABEL_52;
      }
      if ( v6 > 9995 )
      {
        if ( v6 != 9997 )
        {
          if ( v6 < 9997 )
          {
            v7 = *((_DWORD *)this + 42);
            if ( v7 != 0 )
              sqlite3_wal_checkpoint_v2(*(_DWORD *)(v7 + 4), 0, 1);
            goto LABEL_52;
          }
          if ( v6 != 9998 )
          {
            if ( v6 == 9999 )
              ShareSaveThread::doTransaction(this, (int)TaskRecord);
            goto LABEL_52;
          }
          ShareSaveThread::insertOWListDB(this);
          ShareSaveThread::updateBuddyDB(this);
        }
        ShareSaveThread::updateAccInfoDB(this);
      }
      else if ( v6 == 11 )
      {
        ShareSaveThread::doAddCreditTask(this, (int)TaskRecord);
      }
      else if ( v6 < 11 )
      {
        ShareSaveThread::doAchievementTask(this, TaskRecord);
      }
      else if ( v6 == 12 )
      {
        ShareSaveThread::doUinCollectionTask(this, (int)TaskRecord);
      }
      else if ( v6 == 13 )
      {
        ShareSaveThread::doTaskBuddyTask(this, (int *)TaskRecord);
      }
    }
    else if ( v6 == 4 )
    {
      ShareSaveThread::doMonTask(this, TaskRecord);
    }
    else if ( v6 > 4 )
    {
      if ( v6 == 6 )
      {
        ShareSaveThread::doGlobalTask(this, (int)TaskRecord);
      }
      else if ( v6 < 6 )
      {
        ShareSaveThread::doBoxTask(this, TaskRecord);
      }
      else if ( v6 == 7 )
      {
        ShareSaveThread::doItemTask(this, TaskRecord);
      }
      else
      {
        ShareSaveThread::doMinecartTask(this, TaskRecord);
      }
    }
    else if ( v6 == 2 )
    {
      ShareSaveThread::doChunkTask(this, (int)TaskRecord);
    }
    else if ( v6 <= 2 )
    {
      if ( v6 == 1 )
        ShareSaveThread::doWorldTask((int)this, TaskRecord);
    }
    else
    {
      ShareSaveThread::doRoleTask(this, TaskRecord);
    }
LABEL_52:
    j_free(v5);
  }
  if ( *((_DWORD *)this + 66) == 1 )
    TaskRecord = ShareSaveThread::checkTaskRecordDB(this);
  if ( *((_DWORD *)this + 66) != 2
    || (TaskRecord = *(Kompex::SQLiteDatabase **)(g_CSMgr + 40492)) != nullptr
    || *((_DWORD *)this + 7) != 0
    && (int)(TaskRecord = (Kompex::SQLiteDatabase *)(j_time(nullptr) - *((_DWORD *)this + 7))) > 3 )
  {
    v8 = nullptr;
  }
  else
  {
    TaskRecord = ShareSaveThread::getTaskRecord(this);
    v8 = TaskRecord;
  }
  v9 = *((_DWORD *)this + 13);
  if ( *((_DWORD *)this + 17) == v9 )
  {
    if ( *((int *)this + 67) > 0 )
    {
      v10 = *((_DWORD *)this + 44);
      if ( v10 != 0 )
      {
        SystemTick = Ogre::Timer::getSystemTick(TaskRecord, v10);
        v11 = sqlite3_wal_checkpoint(*(_DWORD *)(*((_DWORD *)this + 44) + 4), 0);
        v12 = Ogre::Timer::getSystemTick((Ogre::Timer *)v11, SHIDWORD(v11));
        j_snprintf(
          s,
          0x400u,
          "checkpoint threadtype %d  uintask count %d last %d",
          *((_DWORD *)this + 66),
          *((_DWORD *)this + 67),
          v12 - SystemTick);
        Ogre::LogSetCurParam(
          (int)"D:/work/oworldsrc/client/iworld/cs/CSMgr.cpp",
          (const char *)&stru_B48.st_info,
          2,
          v13);
        TaskRecord = (Kompex::SQLiteDatabase *)Ogre::LogMessage((Ogre *)s, v14);
        *((_DWORD *)this + 67) = 0;
      }
    }
    v15 = *((_DWORD *)this + 68);
    if ( v15 > 0 && *((_DWORD *)this + 46) != 0 )
    {
      v31 = Ogre::Timer::getSystemTick(TaskRecord, v15);
      v16 = sqlite3_wal_checkpoint(*(_DWORD *)(*((_DWORD *)this + 46) + 4), 0);
      v17 = Ogre::Timer::getSystemTick((Ogre::Timer *)v16, SHIDWORD(v16));
      j_snprintf(
        s,
        0x400u,
        "checkpoint threadtype %d  loadworldtask count %d last %d",
        *((_DWORD *)this + 66),
        *((_DWORD *)this + 68),
        v17 - v31);
      Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/cs/CSMgr.cpp", (const char *)&stru_B58.st_size, 2, v18);
      TaskRecord = (Kompex::SQLiteDatabase *)Ogre::LogMessage((Ogre *)s, v19);
      *((_DWORD *)this + 68) = 0;
    }
    v20 = (char *)this + 252;
    if ( *((int *)this + 69) > 60 )
    {
      v21 = (char *)this + 168;
      if ( *(_DWORD *)v21 != 0 )
      {
        v22 = Ogre::Timer::getSystemTick(TaskRecord, v15);
        v23 = sqlite3_wal_checkpoint(*(_DWORD *)(*(_DWORD *)v21 + 4), 0);
        v24 = Ogre::Timer::getSystemTick((Ogre::Timer *)v23, SHIDWORD(v23));
        j_snprintf(
          s,
          0x400u,
          "checkpoint threadtype %d  owtask count %d last %d",
          *((_DWORD *)v20 + 3),
          *((_DWORD *)v20 + 6),
          v24 - v22);
        Ogre::LogSetCurParam(
          (int)"D:/work/oworldsrc/client/iworld/cs/CSMgr.cpp",
          (const char *)&stru_B68.st_value,
          2,
          v25);
        Ogre::LogMessage((Ogre *)s, v26);
        *((_DWORD *)v20 + 6) = 0;
      }
    }
    return (v8 != nullptr) + 1;
  }
  else
  {
    v27 = 2;
    v28 = *((_DWORD *)this + 65) + 1;
    *((_DWORD *)this + 65) = v28;
    if ( v28 % 100 == 0 )
      Ogre::ThreadSleep((unsigned int)&byte_9[1], 0, v9);
  }
  return v27;
}

