// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Kompex::SQLiteDatabase

//======================================================================
// Kompex::SQLiteDatabase::SQLiteDatabase(void)
// address: 0x0038AF40   size: 0x38 (56 bytes)
//======================================================================
// Alternative name is '_ZN6Kompex14SQLiteDatabaseC1Ev'
Kompex::SQLiteDatabase *__fastcall Kompex::SQLiteDatabase::SQLiteDatabase(Kompex::SQLiteDatabase *this)
{
  *(_DWORD *)this = &off_4640F8;
  *((_DWORD *)this + 1) = 0;
  sub_3BF0BC((int)this + 8, (char *)&unk_3FB8EA);
  sub_3B859C((int)this + 12, &dword_44D56C);
  *((_BYTE *)this + 16) = 0;
  return this;
}


//======================================================================
// Kompex::SQLiteDatabase::Close(void)
// address: 0x0038AF90   size: 0xEC (236 bytes)
//======================================================================
int __fastcall Kompex::SQLiteDatabase::Close(Kompex::SQLiteDatabase *this)
{
  void *exception; // r7
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int result; // r0
  char *lptinfo; // [sp+8h] [bp-14h]
  char *lptinfoa; // [sp+8h] [bp-14h]
  _BYTE v9[8]; // [sp+14h] [bp-8h] BYREF

  if ( *((_BYTE *)this + 16) != 0
    && sqlite3_exec(*((_DWORD *)this + 1), "DETACH DATABASE origin", nullptr, 0, nullptr) != 0 )
  {
    exception = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v9, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteDatabase.cpp");
    lptinfo = (char *)sqlite3_errmsg(*((_DWORD *)this + 1));
    v3 = sqlite3_errcode(*((_DWORD *)this + 1));
    Kompex::SQLiteException::SQLiteException((int)exception, (int)v9, 114, lptinfo, v3);
    goto LABEL_7;
  }
  v4 = *((_DWORD *)this + 1);
  if ( v4 != 0 && sqlite3_close(v4) != 0 )
  {
    exception = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v9, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteDatabase.cpp");
    lptinfoa = (char *)sqlite3_errmsg(*((_DWORD *)this + 1));
    v5 = sqlite3_errcode(*((_DWORD *)this + 1));
    Kompex::SQLiteException::SQLiteException((int)exception, (int)v9, 120, lptinfoa, v5);
LABEL_7:
    sub_3BDF80(v9);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
      (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
  }
  *((_DWORD *)this + 1) = 0;
  sub_3BE508((int)this + 8, (char *)&unk_3FB8EA);
  result = sub_3B791C((int)this + 12, &dword_44D56C);
  *((_BYTE *)this + 16) = 0;
  return result;
}


//======================================================================
// Kompex::SQLiteDatabase::Open(char const*,int,char const*)
// address: 0x0038B09C   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall Kompex::SQLiteDatabase::Open(Kompex::SQLiteDatabase *this, char *a2, unsigned int a3, const char *a4)
{
  void *exception; // r6
  char *v9; // r7
  int v10; // r0
  _BYTE v12[8]; // [sp+Ch] [bp-8h] BYREF

  if ( *((_DWORD *)this + 1) != 0 )
    Kompex::SQLiteDatabase::Close(this);
  if ( sqlite3_open_v2(a2, (_DWORD *)this + 1, a3, a4) != 0 )
  {
    exception = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v12, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteDatabase.cpp");
    v9 = (char *)sqlite3_errmsg(*((_DWORD *)this + 1));
    v10 = sqlite3_errcode(*((_DWORD *)this + 1));
    Kompex::SQLiteException::SQLiteException((int)exception, (int)v12, 69, v9, v10);
    sub_3BDF80(v12);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
      (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
  }
  sqlite3_extended_result_codes(*((_DWORD *)this + 1), 1);
  sub_3BF0BC((int)v12, a2);
  sub_3BEBBC((char *)this + 8);
  sub_3BDF80(v12);
  return sub_3B791C((int)this + 12, &dword_44D56C);
}


//======================================================================
// Kompex::SQLiteDatabase::SQLiteDatabase(char const*,int,char const*)
// address: 0x0038B16C   size: 0x32 (50 bytes)
//======================================================================
// Alternative name is '_ZN6Kompex14SQLiteDatabaseC2EPKciS2_'
Kompex::SQLiteDatabase *__fastcall Kompex::SQLiteDatabase::SQLiteDatabase(
        Kompex::SQLiteDatabase *this,
        char *a2,
        unsigned int a3,
        const char *a4)
{
  *((_DWORD *)this + 1) = 0;
  *((_BYTE *)this + 16) = 0;
  *(_DWORD *)this = &off_4640F8;
  *((_DWORD *)this + 2) = &byte_55FB88;
  *((_DWORD *)this + 3) = &unk_55FB70;
  Kompex::SQLiteDatabase::Open(this, a2, a3, a4);
  return this;
}


//======================================================================
// Kompex::SQLiteDatabase::Open(std::string const&,int,char const*)
// address: 0x0038B1C0   size: 0xA0 (160 bytes)
//======================================================================
int __fastcall Kompex::SQLiteDatabase::Open(int *a1, _BYTE **a2, unsigned int a3, const char *a4)
{
  void *exception; // r6
  char *v9; // r7
  int v10; // r0
  _BYTE v12[8]; // [sp+Ch] [bp-8h] BYREF

  if ( a1[1] != 0 )
    Kompex::SQLiteDatabase::Close((Kompex::SQLiteDatabase *)a1);
  if ( sqlite3_open_v2(*a2, a1 + 1, a3, a4) != 0 )
  {
    exception = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v12, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteDatabase.cpp");
    v9 = (char *)sqlite3_errmsg(a1[1]);
    v10 = sqlite3_errcode(a1[1]);
    Kompex::SQLiteException::SQLiteException((int)exception, (int)v12, 84, v9, v10);
    sub_3BDF80(v12);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
      (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
  }
  sqlite3_extended_result_codes(a1[1], 1);
  sub_3BEB1C(v12, a2);
  sub_3BEBBC(a1 + 2);
  sub_3BDF80(v12);
  return sub_3B791C((int)(a1 + 3), &dword_44D56C);
}


//======================================================================
// Kompex::SQLiteDatabase::SQLiteDatabase(std::string const&,int,char const*)
// address: 0x0038B28C   size: 0x32 (50 bytes)
//======================================================================
// Alternative name is '_ZN6Kompex14SQLiteDatabaseC1ERKSsiPKc'
int __fastcall Kompex::SQLiteDatabase::SQLiteDatabase(int a1, _BYTE **a2, unsigned int a3, const char *a4)
{
  *(_DWORD *)(a1 + 4) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  *(_DWORD *)a1 = &off_4640F8;
  *(_DWORD *)(a1 + 8) = &byte_55FB88;
  *(_DWORD *)(a1 + 12) = &unk_55FB70;
  Kompex::SQLiteDatabase::Open((int *)a1, a2, a3, a4);
  return a1;
}


//======================================================================
// Kompex::SQLiteDatabase::Open(wchar_t const*)
// address: 0x0038B2E0   size: 0x8A (138 bytes)
//======================================================================
int __fastcall Kompex::SQLiteDatabase::Open(Kompex::SQLiteDatabase *this, wchar_t *a2, int a3)
{
  void *exception; // r5
  char *v6; // r7
  int v7; // r0
  _BYTE v9[8]; // [sp+Ch] [bp-8h] BYREF

  if ( *((_DWORD *)this + 1) != 0 )
    Kompex::SQLiteDatabase::Close(this);
  if ( sqlite3_open16(a2, (_DWORD *)this + 1, a3) != 0 )
  {
    exception = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v9, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteDatabase.cpp");
    v6 = (char *)sqlite3_errmsg(*((_DWORD *)this + 1));
    v7 = sqlite3_errcode(*((_DWORD *)this + 1));
    Kompex::SQLiteException::SQLiteException((int)exception, (int)v9, 100, v6, v7);
    sub_3BDF80(v9);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
      (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
  }
  sqlite3_extended_result_codes(*((_DWORD *)this + 1), 1);
  sub_3BE508((int)this + 8, (char *)&unk_3FB8EA);
  return sub_3B791C((int)this + 12, a2);
}


//======================================================================
// Kompex::SQLiteDatabase::SQLiteDatabase(wchar_t const*)
// address: 0x0038B38C   size: 0x30 (48 bytes)
//======================================================================
// Alternative name is '_ZN6Kompex14SQLiteDatabaseC1EPKw'
Kompex::SQLiteDatabase *__fastcall Kompex::SQLiteDatabase::SQLiteDatabase(Kompex::SQLiteDatabase *this, wchar_t *a2)
{
  *((_DWORD *)this + 1) = 0;
  *(_DWORD *)this = &off_4640F8;
  *((_BYTE *)this + 16) = 0;
  *((_DWORD *)this + 2) = &byte_55FB88;
  *((_DWORD *)this + 3) = &unk_55FB70;
  Kompex::SQLiteDatabase::Open(this, a2, 0);
  return this;
}


//======================================================================
// Kompex::SQLiteDatabase::~SQLiteDatabase()
// address: 0x0038B3DC   size: 0x2A (42 bytes)
//======================================================================
// Alternative name is '_ZN6Kompex14SQLiteDatabaseD1Ev'
void __fastcall Kompex::SQLiteDatabase::~SQLiteDatabase(Kompex::SQLiteDatabase *this)
{
  char *v1; // r6
  char *v2; // r5

  *(_DWORD *)this = &off_4640F8;
  v1 = (char *)this + 12;
  v2 = (char *)this + 8;
  Kompex::SQLiteDatabase::Close(this);
  sub_3B7370(v1);
  sub_3BDF80(v2);
}


//======================================================================
// Kompex::SQLiteDatabase::~SQLiteDatabase()
// address: 0x0038B41C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Kompex::SQLiteDatabase::~SQLiteDatabase(Kompex::SQLiteDatabase *this)
{
  Kompex::SQLiteDatabase::~SQLiteDatabase(this);
  operator delete(this);
}


//======================================================================
// Kompex::SQLiteDatabase::TraceOutput(void *,char const*)
// address: 0x0038B430   size: 0x1E (30 bytes)
//======================================================================
int __fastcall Kompex::SQLiteDatabase::TraceOutput(Kompex::SQLiteDatabase *this, char *a2, const char *a3)
{
  int v4; // r0
  int v5; // r0

  v4 = sub_3B452C((int)&dword_55EA18, "trace: ");
  v5 = sub_3B452C(v4, a2);
  return sub_3B4108(v5);
}


//======================================================================
// Kompex::SQLiteDatabase::ProfileOutput(void *,char const*,unsigned long long)
// address: 0x0038B458   size: 0x3A (58 bytes)
//======================================================================
int __fastcall Kompex::SQLiteDatabase::ProfileOutput(
        Kompex::SQLiteDatabase *this,
        char *a2,
        const char *a3,
        int a4,
        unsigned __int64 a5)
{
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r1
  int v12; // r0

  v8 = sub_3B452C((int)&dword_55EA18, "profile: ");
  v9 = sub_3B452C(v8, a2);
  sub_3B4108(v9);
  v10 = sub_3B452C((int)&dword_55EA18, "profile time: ");
  v12 = sub_3B4BE0(v10, v11, a3, a4);
  return sub_3B4108(v12);
}


//======================================================================
// Kompex::SQLiteDatabase::CleanUpFailedMemoryDatabase(sqlite3 *,sqlite3 *,bool,bool,sqlite3_stmt *,std::string const&,int)
// address: 0x0038B4A0   size: 0x96 (150 bytes)
//======================================================================
void __fastcall __noreturn Kompex::SQLiteDatabase::CleanUpFailedMemoryDatabase(
        int a1,
        int a2,
        int a3,
        int a4,
        char a5,
        unsigned int *a6,
        int a7,
        int a8)
{
  void *exception; // r5
  _BYTE v12[4]; // [sp+10h] [bp-Ch] BYREF
  _BYTE v13[8]; // [sp+14h] [bp-8h] BYREF

  if ( a6 != nullptr )
    sqlite3_finalize(a6);
  if ( a5 != 0 )
    sqlite3_exec(a3, "ROLLBACK", nullptr, 0, nullptr);
  if ( a4 != 0 )
    sqlite3_exec(a2, "DETACH DATABASE origin", nullptr, 0, nullptr);
  sqlite3_close(a2);
  exception = _cxa_allocate_exception(0x10u);
  sub_3BF0BC((int)v12, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteDatabase.cpp");
  sub_3BEB1C(v13, a7);
  Kompex::SQLiteException::SQLiteException((int)exception, (int)v12, 328, (int)v13, a8);
  sub_3BDF80(v13);
  sub_3BDF80(v12);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
    (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
}


//======================================================================
// Kompex::SQLiteDatabase::TakeSnapshot(sqlite3 *)
// address: 0x0038B564   size: 0x118 (280 bytes)
//======================================================================
int __fastcall Kompex::SQLiteDatabase::TakeSnapshot(int a1, int a2)
{
  unsigned int *v3; // r0
  int *v4; // r6
  void *exception; // r7
  int v6; // r0
  int v7; // r0
  int result; // r0
  int v9; // r0
  char *lptinfo; // [sp+8h] [bp-14h]
  char *lptinfoa; // [sp+8h] [bp-14h]
  char *lptinfob; // [sp+8h] [bp-14h]
  _BYTE v13[8]; // [sp+14h] [bp-8h] BYREF

  v3 = sqlite3_backup_init(a2, "main", *(_DWORD *)(a1 + 4), "main");
  v4 = (int *)v3;
  if ( v3 != nullptr )
  {
    if ( sqlite3_backup_step(v3, -1) != 101 )
    {
      exception = _cxa_allocate_exception(0x10u);
      sub_3BF0BC((int)v13, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteDatabase.cpp");
      lptinfo = (char *)sqlite3_errmsg(a2);
      v6 = sqlite3_errcode(a2);
      Kompex::SQLiteException::SQLiteException((int)exception, (int)v13, 412, lptinfo, v6);
      goto LABEL_8;
    }
    if ( sqlite3_backup_finish(v4) != nullptr )
    {
      exception = _cxa_allocate_exception(0x10u);
      sub_3BF0BC((int)v13, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteDatabase.cpp");
      lptinfoa = (char *)sqlite3_errmsg(a2);
      v7 = sqlite3_errcode(a2);
      Kompex::SQLiteException::SQLiteException((int)exception, (int)v13, 415, lptinfoa, v7);
      goto LABEL_8;
    }
  }
  result = sqlite3_close(a2);
  if ( result != 0 )
  {
    exception = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v13, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteDatabase.cpp");
    lptinfob = (char *)sqlite3_errmsg(a2);
    v9 = sqlite3_errcode(a2);
    Kompex::SQLiteException::SQLiteException((int)exception, (int)v13, 419, lptinfob, v9);
LABEL_8:
    sub_3BDF80(v13);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
      (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
  }
  return result;
}


//======================================================================
// Kompex::SQLiteDatabase::SaveDatabaseFromMemoryToFile(std::string const&)
// address: 0x0038B698   size: 0x148 (328 bytes)
//======================================================================
int __fastcall Kompex::SQLiteDatabase::SaveDatabaseFromMemoryToFile(int result, _BYTE **a2)
{
  int v2; // r5
  int v4; // r2
  void *exception; // r6
  char *v6; // r7
  int v7; // r0
  char *v8; // r7
  int v9; // r0
  char *v10; // r7
  int v11; // r0
  int v12; // [sp+18h] [bp-Ch] BYREF
  _BYTE v13[8]; // [sp+1Ch] [bp-8h] BYREF

  v2 = result;
  if ( *(_BYTE *)(result + 16) != 0 )
  {
    if ( sub_3BDD5C((int)a2, (char *)&unk_3FB8EA) != 0 )
    {
      if ( sqlite3_open_v2(*a2, &v12, 6u, nullptr) != 0 )
      {
        exception = _cxa_allocate_exception(0x10u);
        sub_3BF0BC((int)v13, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteDatabase.cpp");
        v10 = (char *)sqlite3_errmsg(v12);
        v11 = sqlite3_errcode(v12);
        Kompex::SQLiteException::SQLiteException((int)exception, (int)v13, 385, v10, v11);
LABEL_10:
        sub_3BDF80(v13);
        _cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
          (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
      }
    }
    else
    {
      if ( sub_3BDD5C(v2 + 8, (char *)&unk_3FB8EA) != 0 )
      {
        if ( sqlite3_open_v2(*(_BYTE **)(v2 + 8), &v12, 6u, nullptr) != 0 )
        {
          exception = _cxa_allocate_exception(0x10u);
          sub_3BF0BC((int)v13, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteDatabase.cpp");
          v6 = (char *)sqlite3_errmsg(v12);
          v7 = sqlite3_errcode(v12);
          Kompex::SQLiteException::SQLiteException((int)exception, (int)v13, 374, v6, v7);
          goto LABEL_10;
        }
        return Kompex::SQLiteDatabase::TakeSnapshot(v2, v12);
      }
      if ( sqlite3_open16(*(_BYTE **)(v2 + 12), &v12, v4) != 0 )
      {
        exception = _cxa_allocate_exception(0x10u);
        sub_3BF0BC((int)v13, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteDatabase.cpp");
        v8 = (char *)sqlite3_errmsg(v12);
        v9 = sqlite3_errcode(v12);
        Kompex::SQLiteException::SQLiteException((int)exception, (int)v13, 379, v8, v9);
        goto LABEL_10;
      }
    }
    return Kompex::SQLiteDatabase::TakeSnapshot(v2, v12);
  }
  return result;
}


//======================================================================
// Kompex::SQLiteDatabase::SaveDatabaseFromMemoryToFile(wchar_t const*)
// address: 0x0038B7FC   size: 0x84 (132 bytes)
//======================================================================
int __fastcall Kompex::SQLiteDatabase::SaveDatabaseFromMemoryToFile(int this, wchar_t *a2, int a3)
{
  int v3; // r4
  void *exception; // r5
  char *v5; // r6
  int v6; // r0
  int v7; // [sp+10h] [bp-8h] BYREF
  _BYTE v8[4]; // [sp+14h] [bp-4h] BYREF

  v3 = this;
  if ( *(_BYTE *)(this + 16) != 0 )
  {
    if ( sqlite3_open16(a2, &v7, a3) != 0 )
    {
      exception = _cxa_allocate_exception(0x10u);
      sub_3BF0BC((int)v8, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteDatabase.cpp");
      v5 = (char *)sqlite3_errmsg(v7);
      v6 = sqlite3_errcode(v7);
      Kompex::SQLiteException::SQLiteException((int)exception, (int)v8, 398, v5, v6);
      sub_3BDF80(v8);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
        (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
    }
    return Kompex::SQLiteDatabase::TakeSnapshot(v3, v7);
  }
  return this;
}


//======================================================================
// Kompex::SQLiteDatabase::IsDatabaseReadOnly(void)
// address: 0x0038B88C   size: 0x5E (94 bytes)
//======================================================================
bool __fastcall Kompex::SQLiteDatabase::IsDatabaseReadOnly(Kompex::SQLiteDatabase *this)
{
  int v1; // r0
  void *exception; // r5
  _BYTE v4[8]; // [sp+Ch] [bp-8h] BYREF

  v1 = sqlite3_db_readonly(*((_DWORD *)this + 1), "main");
  if ( v1 == -1 )
  {
    exception = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v4, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteDatabase.cpp");
    Kompex::SQLiteException::SQLiteException(
      (int)exception,
      (int)v4,
      426,
      "'main' is not the name of a database on connection mDatabaseHandle",
      -1);
    sub_3BDF80(v4);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
      (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
  }
  return v1 != 0;
}


//======================================================================
// Kompex::SQLiteDatabase::CreateModule(std::string const&,sqlite3_module const*,void *,void (*)(void *))
// address: 0x0038B910   size: 0x78 (120 bytes)
//======================================================================
int __fastcall Kompex::SQLiteDatabase::CreateModule(int a1, void **a2, int a3, int a4, void (__fastcall *a5)(int))
{
  int result; // r0
  void *exception; // r5
  char *v8; // r7
  int v9; // r0
  _BYTE v10[8]; // [sp+Ch] [bp-8h] BYREF

  result = sqlite3_create_module_v2(*(_DWORD *)(a1 + 4), *a2, a3, a4, a5);
  if ( result != 0 )
  {
    exception = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v10, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteDatabase.cpp");
    v8 = (char *)sqlite3_errmsg(*(_DWORD *)(a1 + 4));
    v9 = sqlite3_errcode(*(_DWORD *)(a1 + 4));
    Kompex::SQLiteException::SQLiteException((int)exception, (int)v10, 434, v8, v9);
    sub_3BDF80(v10);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
      (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
  }
  return result;
}


//======================================================================
// Kompex::SQLiteDatabase::GetRuntimeStatusInformation(int,bool,bool)const
// address: 0x0038B994   size: 0x86 (134 bytes)
//======================================================================
int __fastcall Kompex::SQLiteDatabase::GetRuntimeStatusInformation(
        Kompex::SQLiteDatabase *this,
        int a2,
        int a3,
        bool a4)
{
  void *exception; // r5
  char *v7; // r7
  int v8; // r0
  int v10; // [sp+Ch] [bp-10h] BYREF
  int v11; // [sp+10h] [bp-Ch] BYREF
  _BYTE v12[8]; // [sp+14h] [bp-8h] BYREF

  if ( sqlite3_db_status(*((_DWORD *)this + 1), a2, &v10, &v11, a4) != 0 )
  {
    exception = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v12, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteDatabase.cpp");
    v7 = (char *)sqlite3_errmsg(*((_DWORD *)this + 1));
    v8 = sqlite3_errcode(*((_DWORD *)this + 1));
    Kompex::SQLiteException::SQLiteException((int)exception, (int)v12, 443, v7, v8);
    sub_3BDF80(v12);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
      (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
  }
  if ( a3 != 0 )
    return v11;
  else
    return v10;
}


//======================================================================
// Kompex::SQLiteDatabase::GetNumberOfCheckedOutLookasideMemorySlots(void)const
// address: 0x0038BA28   size: 0xE (14 bytes)
//======================================================================
int __fastcall Kompex::SQLiteDatabase::GetNumberOfCheckedOutLookasideMemorySlots(Kompex::SQLiteDatabase *this)
{
  return Kompex::SQLiteDatabase::GetRuntimeStatusInformation(this, 0, 0, false);
}


//======================================================================
// Kompex::SQLiteDatabase::GetHeapMemoryUsedByPagerCaches(void)const
// address: 0x0038BA36   size: 0xE (14 bytes)
//======================================================================
int __fastcall Kompex::SQLiteDatabase::GetHeapMemoryUsedByPagerCaches(Kompex::SQLiteDatabase *this)
{
  return Kompex::SQLiteDatabase::GetRuntimeStatusInformation(this, 1, 0, false);
}


//======================================================================
// Kompex::SQLiteDatabase::GetHeapMemoryUsedToStoreSchemas(void)const
// address: 0x0038BA44   size: 0xE (14 bytes)
//======================================================================
int __fastcall Kompex::SQLiteDatabase::GetHeapMemoryUsedToStoreSchemas(Kompex::SQLiteDatabase *this)
{
  return Kompex::SQLiteDatabase::GetRuntimeStatusInformation(this, 2, 0, false);
}


//======================================================================
// Kompex::SQLiteDatabase::GetHeapAndLookasideMemoryUsedByPreparedStatements(void)const
// address: 0x0038BA52   size: 0xE (14 bytes)
//======================================================================
int __fastcall Kompex::SQLiteDatabase::GetHeapAndLookasideMemoryUsedByPreparedStatements(Kompex::SQLiteDatabase *this)
{
  return Kompex::SQLiteDatabase::GetRuntimeStatusInformation(this, 3, 0, false);
}


//======================================================================
// Kompex::SQLiteDatabase::GetPagerCacheHitCount(void)const
// address: 0x0038BA60   size: 0xE (14 bytes)
//======================================================================
int __fastcall Kompex::SQLiteDatabase::GetPagerCacheHitCount(Kompex::SQLiteDatabase *this)
{
  return Kompex::SQLiteDatabase::GetRuntimeStatusInformation(this, 7, 0, false);
}


//======================================================================
// Kompex::SQLiteDatabase::GetPagerCacheMissCount(void)const
// address: 0x0038BA6E   size: 0xE (14 bytes)
//======================================================================
int __fastcall Kompex::SQLiteDatabase::GetPagerCacheMissCount(Kompex::SQLiteDatabase *this)
{
  return Kompex::SQLiteDatabase::GetRuntimeStatusInformation(this, 8, 0, false);
}


//======================================================================
// Kompex::SQLiteDatabase::GetNumberOfDirtyCacheEntries(void)const
// address: 0x0038BA7C   size: 0xE (14 bytes)
//======================================================================
int __fastcall Kompex::SQLiteDatabase::GetNumberOfDirtyCacheEntries(Kompex::SQLiteDatabase *this)
{
  return Kompex::SQLiteDatabase::GetRuntimeStatusInformation(this, 9, 0, false);
}


//======================================================================
// Kompex::SQLiteDatabase::GetNumberOfUnresolvedForeignKeys(void)const
// address: 0x0038BA8A   size: 0xE (14 bytes)
//======================================================================
int __fastcall Kompex::SQLiteDatabase::GetNumberOfUnresolvedForeignKeys(Kompex::SQLiteDatabase *this)
{
  return Kompex::SQLiteDatabase::GetRuntimeStatusInformation(this, 10, 0, false);
}


//======================================================================
// Kompex::SQLiteDatabase::GetHighestNumberOfCheckedOutLookasideMemorySlots(bool)
// address: 0x0038BA98   size: 0xE (14 bytes)
//======================================================================
int __fastcall Kompex::SQLiteDatabase::GetHighestNumberOfCheckedOutLookasideMemorySlots(
        Kompex::SQLiteDatabase *this,
        bool a2)
{
  return Kompex::SQLiteDatabase::GetRuntimeStatusInformation(this, 0, 1, a2);
}


//======================================================================
// Kompex::SQLiteDatabase::GetLookasideMemoryHitCount(bool)
// address: 0x0038BAA6   size: 0xE (14 bytes)
//======================================================================
int __fastcall Kompex::SQLiteDatabase::GetLookasideMemoryHitCount(Kompex::SQLiteDatabase *this, bool a2)
{
  return Kompex::SQLiteDatabase::GetRuntimeStatusInformation(this, 4, 1, a2);
}


//======================================================================
// Kompex::SQLiteDatabase::GetLookasideMemoryMissCountDueToSmallSlotSize(bool)
// address: 0x0038BAB4   size: 0xE (14 bytes)
//======================================================================
int __fastcall Kompex::SQLiteDatabase::GetLookasideMemoryMissCountDueToSmallSlotSize(
        Kompex::SQLiteDatabase *this,
        bool a2)
{
  return Kompex::SQLiteDatabase::GetRuntimeStatusInformation(this, 5, 1, a2);
}


//======================================================================
// Kompex::SQLiteDatabase::GetLookasideMemoryMissCountDueToFullMemory(bool)
// address: 0x0038BAC2   size: 0xE (14 bytes)
//======================================================================
int __fastcall Kompex::SQLiteDatabase::GetLookasideMemoryMissCountDueToFullMemory(
        Kompex::SQLiteDatabase *this,
        bool a2)
{
  return Kompex::SQLiteDatabase::GetRuntimeStatusInformation(this, 6, 1, a2);
}


//======================================================================
// Kompex::SQLiteDatabase::ProcessDDLRow(void *,int,char **,char **)
// address: 0x0038BB1C   size: 0x128 (296 bytes)
//======================================================================
int __fastcall Kompex::SQLiteDatabase::ProcessDDLRow(
        Kompex::SQLiteDatabase *this,
        char *a2,
        char **a3,
        char **a4,
        char **a5)
{
  void *exception; // r6
  void *v6; // r0
  int result; // r0
  char *v8; // r0
  int v9; // r0
  void *v11; // [sp+10h] [bp-24h]
  int v12; // [sp+20h] [bp-14h] BYREF
  int v13; // [sp+24h] [bp-10h] BYREF
  _BYTE v14[4]; // [sp+28h] [bp-Ch] BYREF
  _BYTE v15[8]; // [sp+2Ch] [bp-8h] BYREF

  if ( a2 != (_BYTE *)&dword_0 + 1 )
  {
    exception = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v15, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteDatabase.cpp");
    Kompex::SQLiteException::SQLiteException(
      (int)exception,
      (int)v15,
      335,
      "error occured during DDL: columnsCount != 1",
      -1);
    sub_3BDF80(v15);
    v6 = exception;
    goto LABEL_5;
  }
  result = sqlite3_exec((int)this, *a3, nullptr, 0, nullptr);
  if ( result != 0 )
  {
    v11 = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v15, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteDatabase.cpp");
    v8 = (char *)sqlite3_errmsg((int)this);
    sub_3BF0BC((int)&v12, v8);
    sub_38BAD0(&v13, "error occured during DDL: sqlite3_exec (error message: ", &v12);
    std::operator+<char>((int)v14, (int)&v13, ")");
    v9 = sqlite3_errcode((int)this);
    Kompex::SQLiteException::SQLiteException((int)v11, (int)v15, 341, (int)v14, v9);
    sub_3BDF80(v14);
    sub_3BDF80(&v13);
    sub_3BDF80(&v12);
    sub_3BDF80(v15);
    v6 = v11;
LABEL_5:
    _cxa_throw(
      v6,
      (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
      (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
  }
  return result;
}


//======================================================================
// Kompex::SQLiteDatabase::ProcessDMLRow(void *,int,char **,char **)
// address: 0x0038BC64   size: 0x13E (318 bytes)
//======================================================================
int __fastcall Kompex::SQLiteDatabase::ProcessDMLRow(
        Kompex::SQLiteDatabase *this,
        char *a2,
        _DWORD *a3,
        char **a4,
        char **a5)
{
  void *exception; // r6
  void *v6; // r0
  char *v7; // r5
  char *v8; // r0
  int v9; // r0
  void *v12; // [sp+10h] [bp-24h]
  int v13; // [sp+20h] [bp-14h] BYREF
  int v14; // [sp+24h] [bp-10h] BYREF
  _BYTE v15[4]; // [sp+28h] [bp-Ch] BYREF
  _BYTE v16[8]; // [sp+2Ch] [bp-8h] BYREF

  if ( a2 != (_BYTE *)&dword_0 + 1 )
  {
    exception = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v16, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteDatabase.cpp");
    Kompex::SQLiteException::SQLiteException(
      (int)exception,
      (int)v16,
      350,
      "error occured during DML: columnsCount != 1",
      -1);
    sub_3BDF80(v16);
    v6 = exception;
    goto LABEL_5;
  }
  v7 = (char *)sqlite3_mprintf((int)"INSERT INTO main.%q SELECT * FROM origin.%q", *a3);
  if ( sqlite3_exec((int)this, v7, nullptr, 0, nullptr) != 0 )
  {
    v12 = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v16, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteDatabase.cpp");
    v8 = (char *)sqlite3_errmsg((int)this);
    sub_3BF0BC((int)&v13, v8);
    sub_38BAD0(&v14, "error occured during DDL: sqlite3_exec (error message: ", &v13);
    std::operator+<char>((int)v15, (int)&v14, ")");
    v9 = sqlite3_errcode((int)this);
    Kompex::SQLiteException::SQLiteException((int)v12, (int)v16, 357, (int)v15, v9);
    sub_3BDF80(v15);
    sub_3BDF80(&v14);
    sub_3BDF80(&v13);
    sub_3BDF80(v16);
    v6 = v12;
LABEL_5:
    _cxa_throw(
      v6,
      (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
      (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
  }
  sqlite3_free(v7);
  return 0;
}


//======================================================================
// Kompex::SQLiteDatabase::MoveDatabaseToMemory(Kompex::SQLiteDatabase::UtfEncoding)
// address: 0x0038BDE8   size: 0x7A6 (1958 bytes)
//======================================================================
int __fastcall Kompex::SQLiteDatabase::MoveDatabaseToMemory(int a1, int a2)
{
  int v2; // r7
  void *exception; // r5
  int v4; // r2
  int v5; // r0
  _DWORD *v6; // r6
  unsigned int *v7; // r4
  char *v8; // r0
  int v9; // r5
  int v10; // r0
  int v11; // r0
  _DWORD *v12; // r4
  _BYTE *v13; // r0
  int v14; // r6
  unsigned int *v15; // r4
  char *v16; // r0
  _DWORD *v17; // r5
  int v18; // r0
  int v19; // r6
  unsigned int *v20; // r4
  char *v21; // r0
  _DWORD *v22; // r5
  int v23; // r0
  _DWORD *v24; // r6
  _DWORD *v25; // r6
  char *v26; // r0
  int v27; // r5
  int v28; // r0
  _DWORD *v29; // r6
  char *v30; // r0
  int v31; // r5
  int v32; // r0
  void *v33; // r6
  char *v34; // r7
  int v35; // r0
  size_t v36; // r5
  unsigned int *v37; // r6
  char *v38; // r0
  _DWORD *v39; // r5
  int v40; // r0
  unsigned int *v41; // r6
  char *v42; // r0
  _DWORD *v43; // r5
  int v44; // r0
  unsigned int *v45; // r6
  char *v46; // r0
  _DWORD *v47; // r5
  int v48; // r0
  int v49; // r0
  unsigned int *v50; // r6
  wchar_t *v51; // r0
  char *v52; // r0
  _DWORD *v53; // r5
  int v54; // r0
  char *v55; // r0
  _DWORD *v56; // r5
  int v57; // r0
  char *v58; // r0
  _DWORD *v59; // r5
  int v60; // r0
  char *v61; // r0
  _DWORD *v62; // r5
  int v63; // r0
  int v64; // r0
  char *v66; // r0
  _DWORD *v67; // r5
  int v68; // r0
  _DWORD *v69; // [sp+14h] [bp-48h]
  _DWORD *v70; // [sp+18h] [bp-44h]
  unsigned int *v71; // [sp+18h] [bp-44h]
  unsigned int *v72; // [sp+18h] [bp-44h]
  unsigned int *v74; // [sp+20h] [bp-3Ch]
  int v75; // [sp+24h] [bp-38h]
  _DWORD *v76; // [sp+2Ch] [bp-30h] BYREF
  unsigned int *v77; // [sp+30h] [bp-2Ch] BYREF
  _BYTE v78[4]; // [sp+34h] [bp-28h] BYREF
  _BYTE *v79; // [sp+38h] [bp-24h] BYREF
  _BYTE v80[4]; // [sp+3Ch] [bp-20h] BYREF
  _BYTE v81[4]; // [sp+40h] [bp-1Ch] BYREF
  _BYTE v82[4]; // [sp+44h] [bp-18h] BYREF
  unsigned int *v83; // [sp+48h] [bp-14h] BYREF
  unsigned int *v84; // [sp+4Ch] [bp-10h] BYREF
  unsigned int *v85; // [sp+50h] [bp-Ch] BYREF
  _DWORD v86[2]; // [sp+54h] [bp-8h] BYREF

  v2 = a1;
  if ( *(_BYTE *)(a1 + 16) != 0 )
    a1 = ((int (*)(void))sub_38C60C)();
  v70 = (_DWORD *)(a1 + 8);
  if ( sub_3BDD5C(a1 + 8, (char *)&unk_3FB8EA) == 0 && sub_3B7158(v2 + 12, &dword_44D56C) == 0 )
  {
    exception = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v86, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteDatabase.cpp");
    Kompex::SQLiteException::SQLiteException(
      (int)exception,
      (int)v86,
      148,
      "No opened database! Please open a database first.",
      -1);
    sub_3BDF80(v86);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
      (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
  }
  if ( sub_3BDD5C((int)v70, (char *)&unk_3FB8EA) != 0 )
    sqlite3_open(":memory:", &v76);
  else
    sqlite3_open16(":", &v76, v4);
  sqlite3_exec(*(_DWORD *)(v2 + 4), "BEGIN", nullptr, 0, nullptr);
  v5 = *(_DWORD *)(v2 + 4);
  if ( a2 == 0 )
  {
    sqlite3_exec(
      v5,
      "SELECT sql FROM sqlite_master WHERE sql NOT NULL AND tbl_name != 'sqlite_sequence'",
      (int (__fastcall *)(int, int, _DWORD *, _DWORD *))Kompex::SQLiteDatabase::ProcessDDLRow,
      (int)v76,
      nullptr);
    goto LABEL_30;
  }
  if ( a2 == 1 )
  {
    if ( sqlite3_prepare_v2(
           v5,
           "SELECT sql FROM sqlite_master WHERE sql NOT NULL AND tbl_name != 'sqlite_sequence'",
           -1,
           (int *)&v84,
           nullptr) != 0 )
    {
      v6 = v76;
      v7 = v84;
      v8 = (char *)sqlite3_errmsg(*(_DWORD *)(v2 + 4));
      sub_3BF0BC((int)v86, v8);
      v9 = *(_DWORD *)(v2 + 4);
      v10 = sqlite3_errcode(v9);
      Kompex::SQLiteDatabase::CleanUpFailedMemoryDatabase(v2, (int)v6, v9, 0, 1, v7, (int)v86, v10);
    }
    while ( 1 )
    {
      v11 = sqlite3_step((int)v84);
      v74 = v84;
      if ( v11 == 5 )
      {
        v75 = *(_DWORD *)(v2 + 4);
        v24 = v76;
        sub_3BF0BC((int)v86, "SQLITE_BUSY");
        Kompex::SQLiteDatabase::CleanUpFailedMemoryDatabase(v2, (int)v24, v75, 0, 1, v74, (int)v86, 5);
      }
      if ( v11 <= 5 )
        break;
      if ( v11 != 100 )
      {
        if ( v11 == 101 )
        {
          sqlite3_finalize(v84);
          goto LABEL_30;
        }
LABEL_29:
        v29 = v76;
        v30 = (char *)sqlite3_errmsg(*(_DWORD *)(v2 + 4));
        sub_3BF0BC((int)v86, v30);
        v31 = *(_DWORD *)(v2 + 4);
        v32 = sqlite3_errcode(v31);
        Kompex::SQLiteDatabase::CleanUpFailedMemoryDatabase(v2, (int)v29, v31, 0, 1, v74, (int)v86, v32);
      }
      v12 = v76;
      v13 = (_BYTE *)sqlite3_column_text16((int *)v84, 0);
      if ( sqlite3_prepare16_v2(v12, v13, -1, (int *)&v85, nullptr) != 0 )
      {
        sqlite3_finalize(v85);
        v14 = *(_DWORD *)(v2 + 4);
        v15 = v84;
        v16 = (char *)sqlite3_errmsg((int)v76);
        sub_3BF0BC((int)v86, v16);
        v17 = v76;
        v18 = sqlite3_errcode((int)v76);
        Kompex::SQLiteDatabase::CleanUpFailedMemoryDatabase(v2, (int)v17, v14, 0, 1, v15, (int)v86, v18);
      }
      if ( sqlite3_step((int)v85) != 101 )
      {
        sqlite3_finalize(v85);
        v19 = *(_DWORD *)(v2 + 4);
        v20 = v84;
        v21 = (char *)sqlite3_errmsg((int)v76);
        sub_3BF0BC((int)v86, v21);
        v22 = v76;
        v23 = sqlite3_errcode((int)v76);
        Kompex::SQLiteDatabase::CleanUpFailedMemoryDatabase(v2, (int)v22, v19, 0, 1, v20, (int)v86, v23);
      }
      sqlite3_finalize(v85);
    }
    if ( v11 == 1 )
    {
      v25 = v76;
      v26 = (char *)sqlite3_errmsg(*(_DWORD *)(v2 + 4));
      sub_3BF0BC((int)v86, v26);
      v27 = *(_DWORD *)(v2 + 4);
      v28 = sqlite3_errcode(v27);
      Kompex::SQLiteDatabase::CleanUpFailedMemoryDatabase(v2, (int)v25, v27, 0, 1, v74, (int)v86, v28);
    }
    goto LABEL_29;
  }
LABEL_30:
  sqlite3_exec(*(_DWORD *)(v2 + 4), "COMMIT", nullptr, 0, nullptr);
  if ( sub_3BDD5C((int)v70, (char *)&unk_3FB8EA) != 0 )
  {
    sub_38BAD0(v86, "ATTACH DATABASE '", v70);
    std::operator+<char>((int)&v85, (int)v86, "' as origin");
    sub_3BDF80(v86);
    if ( sqlite3_exec((int)v76, (char *)v85, nullptr, 0, nullptr) != 0 )
    {
      sqlite3_close((int)v76);
      v33 = _cxa_allocate_exception(0x10u);
      sub_3BF0BC((int)v86, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteDatabase.cpp");
      v34 = (char *)sqlite3_errmsg((int)v76);
      v35 = sqlite3_errcode((int)v76);
      Kompex::SQLiteException::SQLiteException((int)v33, (int)v86, 225, v34, v35);
      sub_3BDF80(v86);
      _cxa_throw(
        v33,
        (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
        (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
    }
    sub_3BDF80(&v85);
  }
  else
  {
    v36 = j_wcslen((const wchar_t *)"A");
    v86[0] = &unk_55FB70;
    sub_3B7B3C(v86, v36 + *(_DWORD *)(*(_DWORD *)(v2 + 12) - 12));
    sub_3B7CD4(v86, "A", v36);
    sub_3B7BB0(v86, v2 + 12);
    sub_3B7F58(&v84, v86);
    sub_3B7D8C((int)&v84, (wchar_t *)"'");
    sub_3B7370(v86);
    if ( sqlite3_prepare16_v2(v76, v84, -1, (int *)&v83, nullptr) != 0 )
    {
      v37 = v83;
      v38 = (char *)sqlite3_errmsg((int)v76);
      sub_3BF0BC((int)&v85, v38);
      v39 = v76;
      v40 = sqlite3_errcode((int)v76);
      Kompex::SQLiteDatabase::CleanUpFailedMemoryDatabase(v2, (int)v39, (int)v39, 0, 0, v37, (int)&v85, v40);
    }
    if ( sqlite3_step((int)v83) != 101 )
    {
      v41 = v83;
      v42 = (char *)sqlite3_errmsg((int)v76);
      sub_3BF0BC((int)v86, v42);
      v43 = v76;
      v44 = sqlite3_errcode((int)v76);
      Kompex::SQLiteDatabase::CleanUpFailedMemoryDatabase(v2, (int)v43, (int)v43, 0, 0, v41, (int)v86, v44);
    }
    sqlite3_finalize(v83);
    sub_3B7370(&v84);
  }
  sqlite3_exec((int)v76, "BEGIN", nullptr, 0, nullptr);
  if ( a2 == 0 )
  {
    sqlite3_exec(
      (int)v76,
      "SELECT name FROM origin.sqlite_master WHERE type='table'",
      (int (__fastcall *)(int, int, _DWORD *, _DWORD *))Kompex::SQLiteDatabase::ProcessDMLRow,
      (int)v76,
      nullptr);
    goto LABEL_60;
  }
  if ( a2 == 1 )
  {
    if ( sqlite3_prepare_v2(
           (int)v76,
           "SELECT name FROM origin.sqlite_master WHERE type='table'",
           -1,
           (int *)&v77,
           nullptr) != 0 )
    {
      v45 = v77;
      v46 = (char *)sqlite3_errmsg((int)v76);
      sub_3BF0BC((int)v86, v46);
      v47 = v76;
      v48 = sqlite3_errcode((int)v76);
      Kompex::SQLiteDatabase::CleanUpFailedMemoryDatabase(v2, (int)v47, (int)v47, 1, 0, v45, (int)v86, v48);
    }
    while ( 1 )
    {
      v49 = sqlite3_step((int)v77);
      v50 = v77;
      if ( v49 == 5 )
      {
        v69 = v76;
        sub_3BF0BC((int)v86, "SQLITE_BUSY");
        Kompex::SQLiteDatabase::CleanUpFailedMemoryDatabase(v2, (int)v69, (int)v69, 1, 1, v50, (int)v86, 5);
      }
      if ( v49 <= 5 )
        break;
      if ( v49 != 100 )
      {
        if ( v49 == 101 )
        {
          sqlite3_finalize(v77);
          goto LABEL_60;
        }
LABEL_59:
        v61 = (char *)sqlite3_errmsg((int)v76);
        sub_3BF0BC((int)v86, v61);
        v62 = v76;
        v63 = sqlite3_errcode((int)v76);
        Kompex::SQLiteDatabase::CleanUpFailedMemoryDatabase(v2, (int)v62, (int)v62, 1, 1, v50, (int)v86, v63);
      }
      v51 = (wchar_t *)sqlite3_column_text16((int *)v77, 0);
      sub_3B859C((int)v78, v51);
      sub_3B859C((int)v80, (wchar_t *)"I");
      sub_38BDC8((int)v81, (int)v80, (int)v78);
      sub_3B859C((int)v82, (wchar_t *)" ");
      sub_38BDC8((int)&v83, (int)v81, (int)v82);
      sub_38BDC8((int)&v79, (int)&v83, (int)v78);
      sub_3B7370(&v83);
      sub_3B7370(v82);
      sub_3B7370(v81);
      sub_3B7370(v80);
      if ( sqlite3_prepare16_v2(v76, v79, -1, (int *)&v84, nullptr) != 0 )
      {
        sqlite3_finalize(v84);
        v71 = v77;
        v52 = (char *)sqlite3_errmsg((int)v76);
        sub_3BF0BC((int)&v85, v52);
        v53 = v76;
        v54 = sqlite3_errcode((int)v76);
        Kompex::SQLiteDatabase::CleanUpFailedMemoryDatabase(v2, (int)v53, (int)v53, 1, 1, v71, (int)&v85, v54);
      }
      if ( sqlite3_step((int)v84) != 101 )
      {
        sqlite3_finalize(v84);
        v72 = v77;
        v55 = (char *)sqlite3_errmsg((int)v76);
        sub_3BF0BC((int)v86, v55);
        v56 = v76;
        v57 = sqlite3_errcode((int)v76);
        Kompex::SQLiteDatabase::CleanUpFailedMemoryDatabase(v2, (int)v56, (int)v56, 1, 1, v72, (int)v86, v57);
      }
      sqlite3_finalize(v84);
      sub_3B7370(&v79);
      sub_3B7370(v78);
    }
    if ( v49 == 1 )
    {
      v58 = (char *)sqlite3_errmsg((int)v76);
      sub_3BF0BC((int)v86, v58);
      v59 = v76;
      v60 = sqlite3_errcode((int)v76);
      Kompex::SQLiteDatabase::CleanUpFailedMemoryDatabase(v2, (int)v59, (int)v59, 1, 1, v50, (int)v86, v60);
    }
    goto LABEL_59;
  }
LABEL_60:
  if ( sqlite3_exec((int)v76, "COMMIT", nullptr, 0, nullptr) != 0 )
  {
    v66 = (char *)sqlite3_errmsg((int)v76);
    sub_3BF0BC((int)v86, v66);
    v67 = v76;
    v68 = sqlite3_errcode((int)v76);
    Kompex::SQLiteDatabase::CleanUpFailedMemoryDatabase(v2, (int)v67, (int)v67, 1, 1, nullptr, (int)v86, v68);
  }
  v64 = sqlite3_close(*(_DWORD *)(v2 + 4));
  *(_DWORD *)(v2 + 4) = v76;
  *(_BYTE *)(v2 + 16) = 1;
  return sub_38C60C(v64);
}

