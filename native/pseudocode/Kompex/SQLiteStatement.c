// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Kompex::SQLiteStatement

//======================================================================
// Kompex::SQLiteStatement::SQLiteStatement(Kompex::SQLiteDatabase *)
// address: 0x0038C66C   size: 0x5A (90 bytes)
//======================================================================
// Alternative name is '_ZN6Kompex15SQLiteStatementC2EPNS_14SQLiteDatabaseE'
int __fastcall Kompex::SQLiteStatement::SQLiteStatement(int a1, int a2)
{
  char *v2; // r6

  v2 = (char *)(a1 + 16);
  *(_DWORD *)a1 = &off_464110;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = a2;
  j_memset((void *)(a1 + 16), 0, 0x10u);
  *(_DWORD *)(a1 + 24) = v2;
  *(_DWORD *)(a1 + 28) = v2;
  v2 += 24;
  *(_DWORD *)(a1 + 32) = 0;
  j_memset(v2, 0, 0x10u);
  *(_DWORD *)(a1 + 48) = v2;
  *(_DWORD *)(a1 + 52) = v2;
  v2 += 28;
  *(_DWORD *)(a1 + 56) = 0;
  *(_WORD *)(a1 + 60) = 0;
  j_memset(v2, 0, 0x10u);
  *(_DWORD *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 76) = v2;
  *(_DWORD *)(a1 + 80) = v2;
  *(_BYTE *)(a1 + 88) = 0;
  return a1;
}


//======================================================================
// Kompex::SQLiteStatement::Step(void)const
// address: 0x0038C6CC   size: 0x80 (128 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::Step(Kompex::SQLiteStatement *this)
{
  int v2; // r0
  void *exception; // r5
  char *v4; // r7
  int v5; // r0
  _BYTE v7[8]; // [sp+Ch] [bp-8h] BYREF

  v2 = sqlite3_step(*((_DWORD *)this + 1));
  if ( v2 == 100 )
    return 1;
  if ( v2 != 101 )
  {
    exception = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v7, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteStatement.cpp");
    v4 = (char *)sqlite3_errmsg(*(_DWORD *)(*((_DWORD *)this + 2) + 4));
    v5 = sqlite3_errcode(*(_DWORD *)(*((_DWORD *)this + 2) + 4));
    Kompex::SQLiteException::SQLiteException((int)exception, (int)v7, 87, v4, v5);
    sub_3BDF80(v7);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
      (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
  }
  return 0;
}


//======================================================================
// Kompex::SQLiteStatement::FetchRow(void)const
// address: 0x0038C758   size: 0x106 (262 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::FetchRow(Kompex::SQLiteStatement *this)
{
  int v2; // r0
  int v3; // r3
  int result; // r0
  void *exception; // r6
  void *v6; // r7
  char *v7; // r0
  _BYTE v8[8]; // [sp+14h] [bp-8h] BYREF

  v2 = sqlite3_step(*((_DWORD *)this + 1));
  v3 = v2;
  if ( v2 == 5 )
  {
    exception = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v8, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteStatement.cpp");
    Kompex::SQLiteException::SQLiteException((int)exception, (int)v8, 112, "FetchRow() SQLITE_BUSY", 5);
    goto LABEL_11;
  }
  if ( v2 > 5 )
  {
    if ( v2 != 21 )
    {
      result = 1;
      if ( v3 == 100 )
        return result;
      return 0;
    }
    exception = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v8, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteStatement.cpp");
    Kompex::SQLiteException::SQLiteException((int)exception, (int)v8, 122, "FetchRow() SQLITE_MISUSE", 21);
LABEL_11:
    sub_3BDF80(v8);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
      (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
  }
  if ( v2 == 1 )
  {
    v6 = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v8, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteStatement.cpp");
    v7 = (char *)sqlite3_errmsg(*(_DWORD *)(*((_DWORD *)this + 2) + 4));
    Kompex::SQLiteException::SQLiteException((int)v6, (int)v8, 119, v7, 1);
    sub_3BDF80(v8);
    _cxa_throw(
      v6,
      (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
      (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
  }
  return 0;
}


//======================================================================
// Kompex::SQLiteStatement::FreeQuery(void)
// address: 0x0038C880   size: 0x10 (16 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::FreeQuery(unsigned int **this)
{
  int result; // r0

  result = sqlite3_finalize(*(this + 1));
  *(this + 1) = nullptr;
  return result;
}


//======================================================================
// Kompex::SQLiteStatement::CheckStatement(void)const
// address: 0x0038C890   size: 0x62 (98 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::CheckStatement(int this)
{
  void *exception; // r5
  _BYTE v2[8]; // [sp+Ch] [bp-8h] BYREF

  if ( *(_DWORD *)(this + 4) == 0 )
  {
    exception = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v2, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteStatement.cpp");
    Kompex::SQLiteException::SQLiteException((int)exception, (int)v2, 139, "empty statement pointer", -1);
    sub_3BDF80(v2);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
      (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
  }
  return this;
}


//======================================================================
// Kompex::SQLiteStatement::CheckDatabase(void)const
// address: 0x0038C904   size: 0x62 (98 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::CheckDatabase(int this)
{
  void *exception; // r5
  _BYTE v2[8]; // [sp+Ch] [bp-8h] BYREF

  if ( *(_DWORD *)(this + 8) == 0 )
  {
    exception = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v2, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteStatement.cpp");
    Kompex::SQLiteException::SQLiteException((int)exception, (int)v2, 145, "database pointer invalid", -1);
    sub_3BDF80(v2);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
      (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
  }
  return this;
}


//======================================================================
// Kompex::SQLiteStatement::Prepare(char const*)
// address: 0x0038C978   size: 0xE8 (232 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::Prepare(Kompex::SQLiteStatement *this, char *a2)
{
  int result; // r0
  void *exception; // r7
  int v6; // r0
  void *v7; // r6
  char *lptinfo; // [sp+8h] [bp-14h]
  _BYTE v9[8]; // [sp+14h] [bp-8h] BYREF

  *((_BYTE *)this + 88) = 0;
  Kompex::SQLiteStatement::CheckDatabase((int)this);
  result = sqlite3_prepare_v2(*(_DWORD *)(*((_DWORD *)this + 2) + 4), a2, -1, (int *)this + 1, nullptr);
  if ( result != 0 )
  {
    exception = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v9, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteStatement.cpp");
    lptinfo = (char *)sqlite3_errmsg(*(_DWORD *)(*((_DWORD *)this + 2) + 4));
    v6 = sqlite3_errcode(*(_DWORD *)(*((_DWORD *)this + 2) + 4));
    Kompex::SQLiteException::SQLiteException((int)exception, (int)v9, 55, lptinfo, v6);
    sub_3BDF80(v9);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
      (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
  }
  if ( *((_DWORD *)this + 1) == 0 )
  {
    v7 = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v9, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteStatement.cpp");
    Kompex::SQLiteException::SQLiteException((int)v7, (int)v9, 58, "Prepare() SQL statement failed", -1);
    sub_3BDF80(v9);
    _cxa_throw(
      v7,
      (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
      (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
  }
  return result;
}


//======================================================================
// Kompex::SQLiteStatement::SqlStatement(char const*)
// address: 0x0038CA78   size: 0x16 (22 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::SqlStatement(Kompex::SQLiteStatement *this, char *a2)
{
  Kompex::SQLiteStatement::Prepare(this, a2);
  Kompex::SQLiteStatement::Step(this);
  return Kompex::SQLiteStatement::FreeQuery((unsigned int **)this);
}


//======================================================================
// Kompex::SQLiteStatement::Sql(std::string const&)
// address: 0x0038CA8E   size: 0xA (10 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::Sql(Kompex::SQLiteStatement *a1, char **a2)
{
  return Kompex::SQLiteStatement::Prepare(a1, *a2);
}


//======================================================================
// Kompex::SQLiteStatement::Prepare(wchar_t const*)
// address: 0x0038CA98   size: 0xE8 (232 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::Prepare(Kompex::SQLiteStatement *this, wchar_t *a2)
{
  int result; // r0
  void *exception; // r7
  int v6; // r0
  void *v7; // r6
  char *lptinfo; // [sp+8h] [bp-14h]
  _BYTE v9[8]; // [sp+14h] [bp-8h] BYREF

  *((_BYTE *)this + 88) = 0;
  Kompex::SQLiteStatement::CheckDatabase((int)this);
  result = sqlite3_prepare16_v2(*(_DWORD **)(*((_DWORD *)this + 2) + 4), a2, -1, (int *)this + 1, nullptr);
  if ( result != 0 )
  {
    exception = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v9, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteStatement.cpp");
    lptinfo = (char *)sqlite3_errmsg(*(_DWORD *)(*((_DWORD *)this + 2) + 4));
    v6 = sqlite3_errcode(*(_DWORD *)(*((_DWORD *)this + 2) + 4));
    Kompex::SQLiteException::SQLiteException((int)exception, (int)v9, 70, lptinfo, v6);
    sub_3BDF80(v9);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
      (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
  }
  if ( *((_DWORD *)this + 1) == 0 )
  {
    v7 = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v9, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteStatement.cpp");
    Kompex::SQLiteException::SQLiteException((int)v7, (int)v9, 73, "Prepare() SQL statement failed", -1);
    sub_3BDF80(v9);
    _cxa_throw(
      v7,
      (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
      (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
  }
  return result;
}


//======================================================================
// Kompex::SQLiteStatement::SqlStatement(wchar_t const*)
// address: 0x0038CB98   size: 0x16 (22 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::SqlStatement(Kompex::SQLiteStatement *this, wchar_t *a2)
{
  Kompex::SQLiteStatement::Prepare(this, a2);
  Kompex::SQLiteStatement::Step(this);
  return Kompex::SQLiteStatement::FreeQuery((unsigned int **)this);
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnCount(void)const
// address: 0x0038CBAE   size: 0x10 (16 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetColumnCount(Kompex::SQLiteStatement *this)
{
  Kompex::SQLiteStatement::CheckStatement((int)this);
  return sqlite3_column_count(*((_DWORD *)this + 1));
}


//======================================================================
// Kompex::SQLiteStatement::BindInt(int,int)const
// address: 0x0038CBC0   size: 0x76 (118 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::BindInt(int **this, int a2, int a3)
{
  int result; // r0
  void *exception; // r5
  char *v6; // r7
  int v7; // r0
  _BYTE v8[8]; // [sp+Ch] [bp-8h] BYREF

  result = sqlite3_bind_int(*(this + 1), a2, a3);
  if ( result != 0 )
  {
    exception = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v8, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteStatement.cpp");
    v6 = (char *)sqlite3_errmsg((*(this + 2))[1]);
    v7 = sqlite3_errcode((*(this + 2))[1]);
    Kompex::SQLiteException::SQLiteException((int)exception, (int)v8, 510, v6, v7);
    sub_3BDF80(v8);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
      (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
  }
  return result;
}


//======================================================================
// Kompex::SQLiteStatement::BindBool(int,bool)const
// address: 0x0038CC44   size: 0x76 (118 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::BindBool(int **this, int a2, bool a3)
{
  int result; // r0
  void *exception; // r5
  char *v6; // r7
  int v7; // r0
  _BYTE v8[8]; // [sp+Ch] [bp-8h] BYREF

  result = sqlite3_bind_int(*(this + 1), a2, a3);
  if ( result != 0 )
  {
    exception = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v8, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteStatement.cpp");
    v6 = (char *)sqlite3_errmsg((*(this + 2))[1]);
    v7 = sqlite3_errcode((*(this + 2))[1]);
    Kompex::SQLiteException::SQLiteException((int)exception, (int)v8, 516, v6, v7);
    sub_3BDF80(v8);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
      (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
  }
  return result;
}


//======================================================================
// Kompex::SQLiteStatement::BindString(int,std::string const&)const
// address: 0x0038CCC8   size: 0x82 (130 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::BindString(int a1, int a2, _BYTE **a3)
{
  int result; // r0
  void *exception; // r5
  char *v6; // r7
  int v7; // r0
  _BYTE v8[8]; // [sp+Ch] [bp-8h] BYREF

  result = sqlite3_bind_text(*(int **)(a1 + 4), a2, *a3, *((_DWORD *)*a3 - 3), (void (__fastcall *)(_BYTE *))0xFFFFFFFF);
  if ( result != 0 )
  {
    exception = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v8, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteStatement.cpp");
    v6 = (char *)sqlite3_errmsg(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 4));
    v7 = sqlite3_errcode(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 4));
    Kompex::SQLiteException::SQLiteException((int)exception, (int)v8, 522, v6, v7);
    sub_3BDF80(v8);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
      (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
  }
  return result;
}


//======================================================================
// Kompex::SQLiteStatement::BindString16(int,wchar_t const*)const
// address: 0x0038CD5C   size: 0x7C (124 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::BindString16(int **this, int a2, wchar_t *a3)
{
  int result; // r0
  void *exception; // r5
  char *v6; // r7
  int v7; // r0
  _BYTE v8[8]; // [sp+Ch] [bp-8h] BYREF

  result = sqlite3_bind_text16(*(this + 1), a2, a3, -1, (void (__fastcall *)(_BYTE *))0xFFFFFFFF);
  if ( result != 0 )
  {
    exception = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v8, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteStatement.cpp");
    v6 = (char *)sqlite3_errmsg((*(this + 2))[1]);
    v7 = sqlite3_errcode((*(this + 2))[1]);
    Kompex::SQLiteException::SQLiteException((int)exception, (int)v8, 528, v6, v7);
    sub_3BDF80(v8);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
      (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
  }
  return result;
}


//======================================================================
// Kompex::SQLiteStatement::BindDouble(int,double)const
// address: 0x0038CDE4   size: 0x74 (116 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::BindDouble(int **this, int a2, double a3)
{
  int result; // r0
  void *exception; // r4
  char *v6; // r7
  int v7; // r0
  _BYTE v8[8]; // [sp+Ch] [bp-8h] BYREF

  result = sqlite3_bind_double(*(this + 1), a2, SLODWORD(a3), SHIDWORD(a3));
  if ( result != 0 )
  {
    exception = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v8, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteStatement.cpp");
    v6 = (char *)sqlite3_errmsg((*(this + 2))[1]);
    v7 = sqlite3_errcode((*(this + 2))[1]);
    Kompex::SQLiteException::SQLiteException((int)exception, (int)v8, 534, v6, v7);
    sub_3BDF80(v8);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
      (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
  }
  return result;
}


//======================================================================
// Kompex::SQLiteStatement::BindInt64(int,long long)const
// address: 0x0038CE68   size: 0x76 (118 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::BindInt64(int **this, int a2, __int64 a3)
{
  int result; // r0
  void *exception; // r4
  char *v6; // r7
  int v7; // r0
  _BYTE v8[8]; // [sp+Ch] [bp-8h] BYREF

  result = sqlite3_bind_int64(*(this + 1), a2, a3, SHIDWORD(a3));
  if ( result != 0 )
  {
    exception = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v8, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteStatement.cpp");
    v6 = (char *)sqlite3_errmsg((*(this + 2))[1]);
    v7 = sqlite3_errcode((*(this + 2))[1]);
    Kompex::SQLiteException::SQLiteException((int)exception, (int)v8, 540, v6, v7);
    sub_3BDF80(v8);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
      (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
  }
  return result;
}


//======================================================================
// Kompex::SQLiteStatement::BindNull(int)const
// address: 0x0038CEEC   size: 0x74 (116 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::BindNull(int **this, int a2)
{
  int result; // r0
  void *exception; // r5
  char *v5; // r7
  int v6; // r0
  _BYTE v7[8]; // [sp+Ch] [bp-8h] BYREF

  result = sqlite3_bind_null(*(this + 1), a2);
  if ( result != 0 )
  {
    exception = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v7, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteStatement.cpp");
    v5 = (char *)sqlite3_errmsg((*(this + 2))[1]);
    v6 = sqlite3_errcode((*(this + 2))[1]);
    Kompex::SQLiteException::SQLiteException((int)exception, (int)v7, 546, v5, v6);
    sub_3BDF80(v7);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
      (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
  }
  return result;
}


//======================================================================
// Kompex::SQLiteStatement::BindBlob(int,void const*,int)const
// address: 0x0038CF70   size: 0x7C (124 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::BindBlob(int **this, int a2, _BYTE *a3, int a4)
{
  int result; // r0
  void *exception; // r5
  char *v7; // r7
  int v8; // r0
  _BYTE v9[8]; // [sp+Ch] [bp-8h] BYREF

  result = sqlite3_bind_blob(*(this + 1), a2, a3, a4, (void (__fastcall *)(_BYTE *))0xFFFFFFFF);
  if ( result != 0 )
  {
    exception = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v9, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteStatement.cpp");
    v7 = (char *)sqlite3_errmsg((*(this + 2))[1]);
    v8 = sqlite3_errcode((*(this + 2))[1]);
    Kompex::SQLiteException::SQLiteException((int)exception, (int)v9, 552, v7, v8);
    sub_3BDF80(v9);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
      (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
  }
  return result;
}


//======================================================================
// Kompex::SQLiteStatement::BindZeroBlob(int,int)const
// address: 0x0038CFF8   size: 0x74 (116 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::BindZeroBlob(int **this, int a2, int a3)
{
  int result; // r0
  void *exception; // r5
  char *v6; // r7
  int v7; // r0
  _BYTE v8[8]; // [sp+Ch] [bp-8h] BYREF

  result = sqlite3_bind_zeroblob(*(this + 1), a2, a3);
  if ( result != 0 )
  {
    exception = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v8, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteStatement.cpp");
    v6 = (char *)sqlite3_errmsg((*(this + 2))[1]);
    v7 = sqlite3_errcode((*(this + 2))[1]);
    Kompex::SQLiteException::SQLiteException((int)exception, (int)v8, 558, v6, v7);
    sub_3BDF80(v8);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
      (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
  }
  return result;
}


//======================================================================
// Kompex::SQLiteStatement::ExecuteAndFree(void)
// address: 0x0038D07C   size: 0x10 (16 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::ExecuteAndFree(Kompex::SQLiteStatement *this)
{
  Kompex::SQLiteStatement::Step(this);
  return Kompex::SQLiteStatement::FreeQuery((unsigned int **)this);
}


//======================================================================
// Kompex::SQLiteStatement::Execute(void)const
// address: 0x0038D08C   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::Execute(Kompex::SQLiteStatement *this)
{
  return Kompex::SQLiteStatement::Step(this);
}


//======================================================================
// Kompex::SQLiteStatement::GetTable(std::string const&,unsigned short)const
// address: 0x0038D094   size: 0x10C (268 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetTable(int a1, char **a2, int a3)
{
  int v5; // r6
  int v6; // r5
  void *exception; // r5
  char *v8; // r6
  int v9; // r0
  int v10; // r7
  int v11; // r0
  char *v12; // r1
  int i; // r7
  int v16; // [sp+14h] [bp-20h]
  int v17; // [sp+1Ch] [bp-18h] BYREF
  int v18; // [sp+20h] [bp-14h] BYREF
  int v19; // [sp+24h] [bp-10h] BYREF
  int v20; // [sp+28h] [bp-Ch] BYREF
  _BYTE v21[8]; // [sp+2Ch] [bp-8h] BYREF

  Kompex::SQLiteStatement::CheckDatabase(a1);
  if ( sqlite3_get_table(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 4), *a2, &v18, &v19, &v20, &v17) != 0 )
  {
    exception = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v21, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteStatement.cpp");
    v8 = (char *)sqlite3_errmsg(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 4));
    v9 = sqlite3_errcode(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 4));
    Kompex::SQLiteException::SQLiteException((int)exception, (int)v21, 582, v8, v9);
    sub_3BDF80(v21);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
      (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
  }
  v5 = 0;
  v6 = 0;
  while ( v5 <= v19 )
  {
    v16 = v6;
    v10 = 4 * v6;
    while ( v6 - v16 < v20 )
    {
      v11 = sub_3B3A3C(&dword_55EA18, std::left);
      sub_3B4208(v11, a3 - 3);
      v12 = *(char **)(v18 + v10);
      if ( v12 == nullptr )
        v12 = "NULL";
      sub_3B452C((int)&dword_55EA18, v12);
      if ( v6 - v16 < v20 - 1 )
        sub_3B452C((int)&dword_55EA18, " | ");
      ++v6;
      v10 += 4;
    }
    sub_3B4108(&dword_55EA18);
    if ( v5 == 0 )
    {
      for ( i = v20 * a3; i != 0; --i )
        sub_3B452C((int)&dword_55EA18, "-");
      sub_3B4108(&dword_55EA18);
    }
    ++v5;
  }
  return sqlite3_free_table(v18);
}


//======================================================================
// Kompex::SQLiteStatement::GetTableColumnMetadata(std::string const&,std::string const&)const
// address: 0x0038D1D8   size: 0xFE (254 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetTableColumnMetadata(int a1, unsigned __int8 **a2, unsigned __int8 **a3)
{
  void *exception; // r5
  char *v7; // r7
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  _BOOL4 v21; // [sp+20h] [bp-1Ch] BYREF
  int v22; // [sp+24h] [bp-18h] BYREF
  _BOOL4 v23; // [sp+28h] [bp-14h] BYREF
  char *v24; // [sp+2Ch] [bp-10h] BYREF
  const char *v25; // [sp+30h] [bp-Ch] BYREF
  _BYTE v26[8]; // [sp+34h] [bp-8h] BYREF

  Kompex::SQLiteStatement::CheckDatabase(a1);
  if ( sqlite3_table_column_metadata(
         *(_DWORD **)(*(_DWORD *)(a1 + 8) + 4),
         nullptr,
         *a2,
         *a3,
         (const char **)&v24,
         &v25,
         &v21,
         &v22,
         &v23) != 0 )
  {
    exception = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v26, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteStatement.cpp");
    v7 = (char *)sqlite3_errmsg(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 4));
    v8 = sqlite3_errcode(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 4));
    Kompex::SQLiteException::SQLiteException((int)exception, (int)v26, 622, v7, v8);
    sub_3BDF80(v26);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
      (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
  }
  v9 = sub_3B452C((int)&dword_55EA18, "TableColumnMetadata:");
  sub_3B4108(v9);
  v10 = sub_3B452C((int)&dword_55EA18, "data type: ");
  v11 = sub_3B452C(v10, v24);
  sub_3B4108(v11);
  v12 = sub_3B452C((int)&dword_55EA18, "collation sequence: ");
  v13 = sub_3B4758(v12, v22);
  sub_3B4108(v13);
  v14 = sub_3B452C((int)&dword_55EA18, "not null: ");
  v15 = sub_3B4758(v14, v21);
  sub_3B4108(v15);
  v16 = sub_3B452C((int)&dword_55EA18, "primary key: ");
  v17 = sub_3B4758(v16, v22);
  sub_3B4108(v17);
  v18 = sub_3B452C((int)&dword_55EA18, "auto increment: ");
  v19 = sub_3B4758(v18, v23);
  return sub_3B4108(v19);
}


//======================================================================
// Kompex::SQLiteStatement::ClearBindings(void)const
// address: 0x0038D314   size: 0x78 (120 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::ClearBindings(Kompex::SQLiteStatement *this)
{
  int result; // r0
  void *exception; // r5
  char *v4; // r7
  int v5; // r0
  _BYTE v6[8]; // [sp+Ch] [bp-8h] BYREF

  Kompex::SQLiteStatement::CheckStatement((int)this);
  result = sqlite3_clear_bindings(*((_DWORD *)this + 1));
  if ( result != 0 )
  {
    exception = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v6, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteStatement.cpp");
    v4 = (char *)sqlite3_errmsg(*(_DWORD *)(*((_DWORD *)this + 2) + 4));
    v5 = sqlite3_errcode(*(_DWORD *)(*((_DWORD *)this + 2) + 4));
    Kompex::SQLiteException::SQLiteException((int)exception, (int)v6, 637, v4, v5);
    sub_3BDF80(v6);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
      (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
  }
  return result;
}


//======================================================================
// Kompex::SQLiteStatement::Reset(void)const
// address: 0x0038D39C   size: 0x78 (120 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::Reset(Kompex::SQLiteStatement *this)
{
  int result; // r0
  void *exception; // r5
  char *v4; // r7
  int v5; // r0
  _BYTE v6[8]; // [sp+Ch] [bp-8h] BYREF

  Kompex::SQLiteStatement::CheckStatement((int)this);
  result = sqlite3_reset(*((_DWORD *)this + 1));
  if ( result != 0 )
  {
    exception = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v6, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteStatement.cpp");
    v4 = (char *)sqlite3_errmsg(*(_DWORD *)(*((_DWORD *)this + 2) + 4));
    v5 = sqlite3_errcode(*(_DWORD *)(*((_DWORD *)this + 2) + 4));
    Kompex::SQLiteException::SQLiteException((int)exception, (int)v6, 645, v4, v5);
    sub_3BDF80(v6);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
      (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
  }
  return result;
}


//======================================================================
// Kompex::SQLiteStatement::GetSqlResultString(std::string const&,std::string const&)
// address: 0x0038D424   size: 0x76 (118 bytes)
//======================================================================
_DWORD *__fastcall Kompex::SQLiteStatement::GetSqlResultString(_DWORD *a1, Kompex::SQLiteStatement *a2, int a3, int a4)
{
  char *v8; // [sp+Ch] [bp-10h] BYREF
  _BYTE v9[4]; // [sp+10h] [bp-Ch] BYREF
  _BYTE v10[8]; // [sp+14h] [bp-8h] BYREF

  sub_3BEB1C(&v8, a3);
  sub_3BEB1C(v9, a4);
  Kompex::SQLiteStatement::Sql(a2, &v8);
  *a1 = &byte_55FB88;
  if ( Kompex::SQLiteStatement::FetchRow(a2) != 0 )
  {
    Kompex::SQLiteStatement::GetColumnString((Kompex::SQLiteStatement *)v10, a2);
    sub_3BEBBC(a1);
    sub_3BDF80(v10);
  }
  else
  {
    sub_3BEBBC(a1);
  }
  Kompex::SQLiteStatement::FreeQuery((unsigned int **)a2);
  sub_3BDF80(v9);
  sub_3BDF80(&v8);
  return a1;
}


//======================================================================
// Kompex::SQLiteStatement::GetNumberOfRows(void)
// address: 0x0038D4C0   size: 0x1E (30 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetNumberOfRows(Kompex::SQLiteStatement *this)
{
  int v2; // r4

  v2 = 0;
  while ( Kompex::SQLiteStatement::FetchRow(this) != 0 )
    ++v2;
  Kompex::SQLiteStatement::Reset(this);
  return v2;
}


//======================================================================
// Kompex::SQLiteStatement::Mprintf(char const*,...)
// address: 0x0038D4E0   size: 0x86 (134 bytes)
//======================================================================
Kompex::SQLiteStatement *Kompex::SQLiteStatement::Mprintf(Kompex::SQLiteStatement *this, const char *a2, ...)
{
  char *v3; // r7
  void *exception; // r5
  _BYTE var4[24]; // [sp+14h] [bp-4h] BYREF
  int varg_r2; // [sp+30h] [bp+18h] BYREF
  va_list varg_r2a; // [sp+30h] [bp+18h]
  va_list varg_r3; // [sp+34h] [bp+1Ch] BYREF

  va_start(varg_r3, a2);
  va_start(varg_r2a, a2);
  varg_r2 = va_arg(varg_r3, _DWORD);
  v3 = (char *)sqlite3_vmprintf((int)a2, (void **)varg_r2a, varg_r2);
  if ( v3 == nullptr )
  {
    exception = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)var4, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteStatement.cpp");
    Kompex::SQLiteException::SQLiteException(
      (int)exception,
      (int)var4,
      1013,
      "unable to allocate enough memory to hold the resulting string",
      -1);
    sub_3BDF80(var4);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
      (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
  }
  sub_3BF0BC((int)var4, v3);
  sqlite3_free(v3);
  sub_3BEB1C(this, var4);
  sub_3BDF80(var4);
  return this;
}


//======================================================================
// Kompex::SQLiteStatement::Vmprintf(char const*,std::__va_list)
// address: 0x0038D594   size: 0x7C (124 bytes)
//======================================================================
Kompex::SQLiteStatement *__fastcall Kompex::SQLiteStatement::Vmprintf(
        Kompex::SQLiteStatement *this,
        const char *a2,
        void **a3)
{
  char *v4; // r5
  void *exception; // r5
  _BYTE v7[8]; // [sp+Ch] [bp-8h] BYREF

  v4 = (char *)sqlite3_vmprintf((int)a2, a3, (int)a3);
  if ( v4 == nullptr )
  {
    exception = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v7, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteStatement.cpp");
    Kompex::SQLiteException::SQLiteException(
      (int)exception,
      (int)v7,
      1028,
      "unable to allocate enough memory to hold the resulting string",
      -1);
    sub_3BDF80(v7);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
      (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
  }
  sub_3BF0BC((int)v7, v4);
  sqlite3_free(v4);
  sub_3BEB1C(this, v7);
  sub_3BDF80(v7);
  return this;
}


//======================================================================
// Kompex::SQLiteStatement::CheckColumnNumber(int,std::string const&)const
// address: 0x0038D640   size: 0x9A (154 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::CheckColumnNumber(int a1, int a2, int a3)
{
  int result; // r0
  _DWORD *exception; // r4
  _BYTE v7[4]; // [sp+8h] [bp-Ch] BYREF
  _BYTE v8[8]; // [sp+Ch] [bp-8h] BYREF

  if ( a2 < 0 || (result = sqlite3_column_count(*(_DWORD *)(a1 + 4)), a2 >= result) )
  {
    exception = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v8, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteStatement.cpp");
    std::operator+<char>((int)v7, a3, " column number does not exists");
    sub_3BEB1C(exception, v7);
    sub_3BEB1C(exception + 1, v8);
    exception[2] = 968;
    exception[3] = -1;
    sub_3BDF80(v7);
    sub_3BDF80(v8);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
      (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
  }
  return result;
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnName(int)const
// address: 0x0038D6EC   size: 0x32 (50 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetColumnName(int **this, int a2)
{
  int v5; // [sp+4h] [bp-4h] BYREF

  v5 = a2;
  Kompex::SQLiteStatement::CheckStatement((int)this);
  sub_3BF0BC((int)&v5, "GetColumnName()");
  Kompex::SQLiteStatement::CheckColumnNumber((int)this, a2, (int)&v5);
  sub_3BDF80(&v5);
  return sqlite3_column_name(*(this + 1), a2);
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnName16(int)const
// address: 0x0038D72C   size: 0x32 (50 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetColumnName16(int **this, int a2)
{
  int v5; // [sp+4h] [bp-4h] BYREF

  v5 = a2;
  Kompex::SQLiteStatement::CheckStatement((int)this);
  sub_3BF0BC((int)&v5, "GetColumnName16()");
  Kompex::SQLiteStatement::CheckColumnNumber((int)this, a2, (int)&v5);
  sub_3BDF80(&v5);
  return sqlite3_column_name16(*(this + 1), a2);
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnCString(int)const
// address: 0x0038D76C   size: 0x32 (50 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetColumnCString(int **this, int a2)
{
  int v5; // [sp+4h] [bp-4h] BYREF

  v5 = a2;
  Kompex::SQLiteStatement::CheckStatement((int)this);
  sub_3BF0BC((int)&v5, "GetColumnCString()");
  Kompex::SQLiteStatement::CheckColumnNumber((int)this, a2, (int)&v5);
  sub_3BDF80(&v5);
  return sqlite3_column_text(*(this + 1), a2);
}


//======================================================================
// Kompex::SQLiteStatement::SqlResultCString(unsigned char const*)
// address: 0x0038D7AC   size: 0x68 (104 bytes)
//======================================================================
void *__fastcall Kompex::SQLiteStatement::SqlResultCString(int **this, char *ColumnCString)
{
  void *v4; // r7
  void *v6; // [sp+0h] [bp-C4h] BYREF
  _BYTE v7[8]; // [sp+4h] [bp-C0h] BYREF
  _BYTE v8[4]; // [sp+Ch] [bp-B8h] BYREF
  _BYTE v9[180]; // [sp+10h] [bp-B4h] BYREF

  if ( Kompex::SQLiteStatement::FetchRow((Kompex::SQLiteStatement *)this) != 0 )
    ColumnCString = (char *)Kompex::SQLiteStatement::GetColumnCString(this, 0);
  sub_3A3350(v7, 24);
  sub_3B458C((int)v8, ColumnCString);
  sub_3A2244(&v6, v9);
  v4 = (void *)operator new[](*((_DWORD *)v6 - 3) + 1);
  j_memcpy(v4, v6, *((_DWORD *)v6 - 3) + 1);
  Kompex::SQLiteStatement::FreeQuery((unsigned int **)this);
  sub_3BDF80(&v6);
  sub_3A1ECC(v7);
  return v4;
}


//======================================================================
// Kompex::SQLiteStatement::GetSqlResultCString(std::string const&,unsigned char const*)
// address: 0x0038D826   size: 0x14 (20 bytes)
//======================================================================
void *__fastcall Kompex::SQLiteStatement::GetSqlResultCString(Kompex::SQLiteStatement *a1, char **a2, char *a3)
{
  Kompex::SQLiteStatement::Sql(a1, a2);
  return Kompex::SQLiteStatement::SqlResultCString((int **)a1, a3);
}


//======================================================================
// Kompex::SQLiteStatement::GetSqlResultCString(char const*,unsigned char const*)
// address: 0x0038D83A   size: 0x14 (20 bytes)
//======================================================================
void *__fastcall Kompex::SQLiteStatement::GetSqlResultCString(Kompex::SQLiteStatement *this, char *a2, char *a3)
{
  Kompex::SQLiteStatement::Prepare(this, a2);
  return Kompex::SQLiteStatement::SqlResultCString((int **)this, a3);
}


//======================================================================
// Kompex::SQLiteStatement::GetSqlResultCString(wchar_t const*,unsigned char const*)
// address: 0x0038D84E   size: 0x14 (20 bytes)
//======================================================================
void *__fastcall Kompex::SQLiteStatement::GetSqlResultCString(Kompex::SQLiteStatement *this, wchar_t *a2, char *a3)
{
  Kompex::SQLiteStatement::Prepare(this, a2);
  return Kompex::SQLiteStatement::SqlResultCString((int **)this, a3);
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnDouble(int)const
// address: 0x0038D864   size: 0x32 (50 bytes)
//======================================================================
__int64 __fastcall Kompex::SQLiteStatement::GetColumnDouble(Kompex::SQLiteStatement *this, int a2)
{
  int v5; // [sp+4h] [bp-4h] BYREF

  v5 = a2;
  Kompex::SQLiteStatement::CheckStatement((int)this);
  sub_3BF0BC((int)&v5, "GetColumnDouble()");
  Kompex::SQLiteStatement::CheckColumnNumber((int)this, a2, (int)&v5);
  sub_3BDF80(&v5);
  return sqlite3_column_double((int *)*((_DWORD *)this + 1), a2);
}


//======================================================================
// Kompex::SQLiteStatement::SqlAggregateFuncResult(std::string const&)
// address: 0x0038D8A4   size: 0x2C (44 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::SqlAggregateFuncResult(Kompex::SQLiteStatement *a1, char **a2)
{
  float v2; // r5
  float v4; // r0

  Kompex::SQLiteStatement::Sql(a1, a2);
  while ( Kompex::SQLiteStatement::FetchRow(a1) != 0 )
  {
    v4 = COERCE_DOUBLE(Kompex::SQLiteStatement::GetColumnDouble(a1, 0));
    v2 = v4;
  }
  Kompex::SQLiteStatement::FreeQuery((unsigned int **)a1);
  return LODWORD(v2);
}


//======================================================================
// Kompex::SQLiteStatement::SqlAggregateFuncResult(wchar_t *)
// address: 0x0038D8D0   size: 0x2C (44 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::SqlAggregateFuncResult(Kompex::SQLiteStatement *this, wchar_t *a2)
{
  float v2; // r5
  float v4; // r0

  Kompex::SQLiteStatement::Prepare(this, a2);
  while ( Kompex::SQLiteStatement::FetchRow(this) != 0 )
  {
    v4 = COERCE_DOUBLE(Kompex::SQLiteStatement::GetColumnDouble(this, 0));
    v2 = v4;
  }
  Kompex::SQLiteStatement::FreeQuery((unsigned int **)this);
  return LODWORD(v2);
}


//======================================================================
// Kompex::SQLiteStatement::SqlAggregateFuncResult(char const*)
// address: 0x0038D8FC   size: 0x2C (44 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::SqlAggregateFuncResult(Kompex::SQLiteStatement *this, char *a2)
{
  float v2; // r5
  float v4; // r0

  Kompex::SQLiteStatement::Prepare(this, a2);
  while ( Kompex::SQLiteStatement::FetchRow(this) != 0 )
  {
    v4 = COERCE_DOUBLE(Kompex::SQLiteStatement::GetColumnDouble(this, 0));
    v2 = v4;
  }
  Kompex::SQLiteStatement::FreeQuery((unsigned int **)this);
  return LODWORD(v2);
}


//======================================================================
// Kompex::SQLiteStatement::GetSqlResultDouble(char const*,double)
// address: 0x0038D928   size: 0x2E (46 bytes)
//======================================================================
__int64 __fastcall Kompex::SQLiteStatement::GetSqlResultDouble(Kompex::SQLiteStatement *this, char *a2, double a3)
{
  Kompex::SQLiteStatement::Prepare(this, a2);
  if ( Kompex::SQLiteStatement::FetchRow(this) != 0 )
    a3 = COERCE_DOUBLE(Kompex::SQLiteStatement::GetColumnDouble(this, 0));
  Kompex::SQLiteStatement::FreeQuery((unsigned int **)this);
  return *(_QWORD *)&a3;
}


//======================================================================
// Kompex::SQLiteStatement::GetSqlResultDouble(wchar_t const*,double)
// address: 0x0038D956   size: 0x2E (46 bytes)
//======================================================================
__int64 __fastcall Kompex::SQLiteStatement::GetSqlResultDouble(Kompex::SQLiteStatement *this, wchar_t *a2, double a3)
{
  Kompex::SQLiteStatement::Prepare(this, a2);
  if ( Kompex::SQLiteStatement::FetchRow(this) != 0 )
    a3 = COERCE_DOUBLE(Kompex::SQLiteStatement::GetColumnDouble(this, 0));
  Kompex::SQLiteStatement::FreeQuery((unsigned int **)this);
  return *(_QWORD *)&a3;
}


//======================================================================
// Kompex::SQLiteStatement::GetSqlResultDouble(std::string const&,double)
// address: 0x0038D984   size: 0x42 (66 bytes)
//======================================================================
__int64 __fastcall Kompex::SQLiteStatement::GetSqlResultDouble(Kompex::SQLiteStatement *a1, char *a2, __int64 a3)
{
  __int64 ColumnDouble; // r4
  char *v6[2]; // [sp+4h] [bp-8h] BYREF

  v6[0] = a2;
  v6[1] = (char *)a3;
  ColumnDouble = a3;
  sub_3BEB1C(v6, a2);
  Kompex::SQLiteStatement::Sql(a1, v6);
  if ( Kompex::SQLiteStatement::FetchRow(a1) != 0 )
    ColumnDouble = Kompex::SQLiteStatement::GetColumnDouble(a1, 0);
  Kompex::SQLiteStatement::FreeQuery((unsigned int **)a1);
  sub_3BDF80(v6);
  return ColumnDouble;
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnInt(int)const
// address: 0x0038D9D0   size: 0x32 (50 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetColumnInt(int **this, int a2)
{
  int v5; // [sp+4h] [bp-4h] BYREF

  v5 = a2;
  Kompex::SQLiteStatement::CheckStatement((int)this);
  sub_3BF0BC((int)&v5, "GetColumnInt()");
  Kompex::SQLiteStatement::CheckColumnNumber((int)this, a2, (int)&v5);
  sub_3BDF80(&v5);
  return sqlite3_column_int(*(this + 1), a2);
}


//======================================================================
// Kompex::SQLiteStatement::GetSqlResultInt(char const*,int)
// address: 0x0038DA10   size: 0x28 (40 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetSqlResultInt(Kompex::SQLiteStatement *this, char *a2, int ColumnInt)
{
  Kompex::SQLiteStatement::Prepare(this, a2);
  if ( Kompex::SQLiteStatement::FetchRow(this) != 0 )
    ColumnInt = Kompex::SQLiteStatement::GetColumnInt((int **)this, 0);
  Kompex::SQLiteStatement::FreeQuery((unsigned int **)this);
  return ColumnInt;
}


//======================================================================
// Kompex::SQLiteStatement::GetSqlResultInt(wchar_t const*,int)
// address: 0x0038DA38   size: 0x28 (40 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetSqlResultInt(Kompex::SQLiteStatement *this, wchar_t *a2, int ColumnInt)
{
  Kompex::SQLiteStatement::Prepare(this, a2);
  if ( Kompex::SQLiteStatement::FetchRow(this) != 0 )
    ColumnInt = Kompex::SQLiteStatement::GetColumnInt((int **)this, 0);
  Kompex::SQLiteStatement::FreeQuery((unsigned int **)this);
  return ColumnInt;
}


//======================================================================
// Kompex::SQLiteStatement::GetSqlResultInt(std::string const&,int)
// address: 0x0038DA60   size: 0x3A (58 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetSqlResultInt(Kompex::SQLiteStatement *a1, char *a2, int ColumnInt)
{
  char *v6; // [sp+4h] [bp-4h] BYREF

  v6 = a2;
  sub_3BEB1C(&v6, a2);
  Kompex::SQLiteStatement::Sql(a1, &v6);
  if ( Kompex::SQLiteStatement::FetchRow(a1) != 0 )
    ColumnInt = Kompex::SQLiteStatement::GetColumnInt((int **)a1, 0);
  Kompex::SQLiteStatement::FreeQuery((unsigned int **)a1);
  sub_3BDF80(&v6);
  return ColumnInt;
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnBool(int)const
// address: 0x0038DAA4   size: 0x36 (54 bytes)
//======================================================================
bool __fastcall Kompex::SQLiteStatement::GetColumnBool(int **this, int a2)
{
  int v5; // [sp+4h] [bp-4h] BYREF

  v5 = a2;
  Kompex::SQLiteStatement::CheckStatement((int)this);
  sub_3BF0BC((int)&v5, "GetColumnBool()");
  Kompex::SQLiteStatement::CheckColumnNumber((int)this, a2, (int)&v5);
  sub_3BDF80(&v5);
  return sqlite3_column_int(*(this + 1), a2) != 0;
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnInt64(int)const
// address: 0x0038DAE8   size: 0x32 (50 bytes)
//======================================================================
__int64 __fastcall Kompex::SQLiteStatement::GetColumnInt64(Kompex::SQLiteStatement *this, int a2)
{
  int v5; // [sp+4h] [bp-4h] BYREF

  v5 = a2;
  Kompex::SQLiteStatement::CheckStatement((int)this);
  sub_3BF0BC((int)&v5, "GetColumnInt64()");
  Kompex::SQLiteStatement::CheckColumnNumber((int)this, a2, (int)&v5);
  sub_3BDF80(&v5);
  return sqlite3_column_int64((int *)*((_DWORD *)this + 1), a2);
}


//======================================================================
// Kompex::SQLiteStatement::GetSqlResultInt64(char const*,long long)
// address: 0x0038DB28   size: 0x2E (46 bytes)
//======================================================================
__int64 __fastcall Kompex::SQLiteStatement::GetSqlResultInt64(
        Kompex::SQLiteStatement *this,
        char *a2,
        __int64 ColumnInt64)
{
  Kompex::SQLiteStatement::Prepare(this, a2);
  if ( Kompex::SQLiteStatement::FetchRow(this) != 0 )
    ColumnInt64 = Kompex::SQLiteStatement::GetColumnInt64(this, 0);
  Kompex::SQLiteStatement::FreeQuery((unsigned int **)this);
  return ColumnInt64;
}


//======================================================================
// Kompex::SQLiteStatement::GetSqlResultInt64(wchar_t const*,long long)
// address: 0x0038DB56   size: 0x2E (46 bytes)
//======================================================================
__int64 __fastcall Kompex::SQLiteStatement::GetSqlResultInt64(
        Kompex::SQLiteStatement *this,
        wchar_t *a2,
        __int64 ColumnInt64)
{
  Kompex::SQLiteStatement::Prepare(this, a2);
  if ( Kompex::SQLiteStatement::FetchRow(this) != 0 )
    ColumnInt64 = Kompex::SQLiteStatement::GetColumnInt64(this, 0);
  Kompex::SQLiteStatement::FreeQuery((unsigned int **)this);
  return ColumnInt64;
}


//======================================================================
// Kompex::SQLiteStatement::GetSqlResultInt64(std::string const&,long long)
// address: 0x0038DB84   size: 0x42 (66 bytes)
//======================================================================
__int64 __fastcall Kompex::SQLiteStatement::GetSqlResultInt64(Kompex::SQLiteStatement *a1, char *a2, __int64 a3)
{
  __int64 ColumnInt64; // r4
  char *v6[2]; // [sp+4h] [bp-8h] BYREF

  v6[0] = a2;
  v6[1] = (char *)a3;
  ColumnInt64 = a3;
  sub_3BEB1C(v6, a2);
  Kompex::SQLiteStatement::Sql(a1, v6);
  if ( Kompex::SQLiteStatement::FetchRow(a1) != 0 )
    ColumnInt64 = Kompex::SQLiteStatement::GetColumnInt64(a1, 0);
  Kompex::SQLiteStatement::FreeQuery((unsigned int **)a1);
  sub_3BDF80(v6);
  return ColumnInt64;
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnType(int)const
// address: 0x0038DBD0   size: 0x32 (50 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetColumnType(int **this, int a2)
{
  int v5; // [sp+4h] [bp-4h] BYREF

  v5 = a2;
  Kompex::SQLiteStatement::CheckStatement((int)this);
  sub_3BF0BC((int)&v5, "GetColumnType()");
  Kompex::SQLiteStatement::CheckColumnNumber((int)this, a2, (int)&v5);
  sub_3BDF80(&v5);
  return sqlite3_column_type(*(this + 1), a2);
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnString16(int)const
// address: 0x0038DC10   size: 0x32 (50 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetColumnString16(int **this, int a2)
{
  int v5; // [sp+4h] [bp-4h] BYREF

  v5 = a2;
  Kompex::SQLiteStatement::CheckStatement((int)this);
  sub_3BF0BC((int)&v5, "GetColumnString16()");
  Kompex::SQLiteStatement::CheckColumnNumber((int)this, a2, (int)&v5);
  sub_3BDF80(&v5);
  return sqlite3_column_text16(*(this + 1), a2);
}


//======================================================================
// Kompex::SQLiteStatement::SqlResultString16(wchar_t *)
// address: 0x0038DC50   size: 0x7A (122 bytes)
//======================================================================
void *__fastcall Kompex::SQLiteStatement::SqlResultString16(int **this, wchar_t *ColumnString16)
{
  unsigned int v4; // r0
  unsigned int v5; // r0
  void *v6; // r7
  void *v8; // [sp+4h] [bp-C8h] BYREF
  _BYTE v9[8]; // [sp+8h] [bp-C4h] BYREF
  _BYTE v10[4]; // [sp+10h] [bp-BCh] BYREF
  _BYTE v11[184]; // [sp+14h] [bp-B8h] BYREF

  if ( Kompex::SQLiteStatement::FetchRow((Kompex::SQLiteStatement *)this) != 0 )
    ColumnString16 = (wchar_t *)Kompex::SQLiteStatement::GetColumnString16(this, 0);
  sub_3A49F8(v9, 24);
  sub_3B5D28((int)v10, ColumnString16);
  sub_3A38BC(&v8, v11);
  v4 = *((_DWORD *)v8 - 3) + 1;
  if ( v4 > 0x1FC00000 )
    v5 = -1;
  else
    v5 = 4 * v4;
  v6 = (void *)operator new[](v5);
  j_memcpy(v6, v8, *((_DWORD *)v8 - 3) + 1);
  Kompex::SQLiteStatement::FreeQuery((unsigned int **)this);
  sub_3B7370(&v8);
  sub_3A1F94(v9);
  return v6;
}


//======================================================================
// Kompex::SQLiteStatement::GetSqlResultString16(std::string const&,wchar_t *)
// address: 0x0038DCDC   size: 0x14 (20 bytes)
//======================================================================
void *__fastcall Kompex::SQLiteStatement::GetSqlResultString16(Kompex::SQLiteStatement *a1, char **a2, wchar_t *a3)
{
  Kompex::SQLiteStatement::Sql(a1, a2);
  return Kompex::SQLiteStatement::SqlResultString16((int **)a1, a3);
}


//======================================================================
// Kompex::SQLiteStatement::GetSqlResultString16(char const*,wchar_t *)
// address: 0x0038DCF0   size: 0x14 (20 bytes)
//======================================================================
void *__fastcall Kompex::SQLiteStatement::GetSqlResultString16(Kompex::SQLiteStatement *this, char *a2, wchar_t *a3)
{
  Kompex::SQLiteStatement::Prepare(this, a2);
  return Kompex::SQLiteStatement::SqlResultString16((int **)this, a3);
}


//======================================================================
// Kompex::SQLiteStatement::GetSqlResultString16(wchar_t const*,wchar_t *)
// address: 0x0038DD04   size: 0x14 (20 bytes)
//======================================================================
void *__fastcall Kompex::SQLiteStatement::GetSqlResultString16(Kompex::SQLiteStatement *this, wchar_t *a2, wchar_t *a3)
{
  Kompex::SQLiteStatement::Prepare(this, a2);
  return Kompex::SQLiteStatement::SqlResultString16((int **)this, a3);
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnBlob(int)const
// address: 0x0038DD18   size: 0x32 (50 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetColumnBlob(int **this, int a2)
{
  int v5; // [sp+4h] [bp-4h] BYREF

  v5 = a2;
  Kompex::SQLiteStatement::CheckStatement((int)this);
  sub_3BF0BC((int)&v5, "GetColumnBlob()");
  Kompex::SQLiteStatement::CheckColumnNumber((int)this, a2, (int)&v5);
  sub_3BDF80(&v5);
  return sqlite3_column_blob(*(this + 1), a2);
}


//======================================================================
// Kompex::SQLiteStatement::SqlResultBlob(void const*)
// address: 0x0038DD58   size: 0x68 (104 bytes)
//======================================================================
void *__fastcall Kompex::SQLiteStatement::SqlResultBlob(int **this, char *ColumnBlob)
{
  void *v4; // r7
  void *v6; // [sp+0h] [bp-C4h] BYREF
  _BYTE v7[8]; // [sp+4h] [bp-C0h] BYREF
  _BYTE v8[4]; // [sp+Ch] [bp-B8h] BYREF
  _BYTE v9[180]; // [sp+10h] [bp-B4h] BYREF

  if ( Kompex::SQLiteStatement::FetchRow((Kompex::SQLiteStatement *)this) != 0 )
    ColumnBlob = (char *)Kompex::SQLiteStatement::GetColumnBlob(this, 0);
  sub_3A3350(v7, 24);
  sub_3B452C((int)v8, ColumnBlob);
  sub_3A2244(&v6, v9);
  v4 = (void *)operator new[](*((_DWORD *)v6 - 3) + 1);
  j_memcpy(v4, v6, *((_DWORD *)v6 - 3) + 1);
  Kompex::SQLiteStatement::FreeQuery((unsigned int **)this);
  sub_3BDF80(&v6);
  sub_3A1ECC(v7);
  return v4;
}


//======================================================================
// Kompex::SQLiteStatement::GetSqlResultBlob(std::string const&,void const*)
// address: 0x0038DDD2   size: 0x14 (20 bytes)
//======================================================================
void *__fastcall Kompex::SQLiteStatement::GetSqlResultBlob(Kompex::SQLiteStatement *a1, char **a2, char *a3)
{
  Kompex::SQLiteStatement::Sql(a1, a2);
  return Kompex::SQLiteStatement::SqlResultBlob((int **)a1, a3);
}


//======================================================================
// Kompex::SQLiteStatement::GetSqlResultBlob(char const*,void const*)
// address: 0x0038DDE6   size: 0x14 (20 bytes)
//======================================================================
void *__fastcall Kompex::SQLiteStatement::GetSqlResultBlob(Kompex::SQLiteStatement *this, char *a2, char *a3)
{
  Kompex::SQLiteStatement::Prepare(this, a2);
  return Kompex::SQLiteStatement::SqlResultBlob((int **)this, a3);
}


//======================================================================
// Kompex::SQLiteStatement::GetSqlResultBlob(wchar_t const*,void const*)
// address: 0x0038DDFA   size: 0x14 (20 bytes)
//======================================================================
void *__fastcall Kompex::SQLiteStatement::GetSqlResultBlob(Kompex::SQLiteStatement *this, wchar_t *a2, char *a3)
{
  Kompex::SQLiteStatement::Prepare(this, a2);
  return Kompex::SQLiteStatement::SqlResultBlob((int **)this, a3);
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnBytes(int)const
// address: 0x0038DE10   size: 0x32 (50 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetColumnBytes(int **this, int a2)
{
  int v5; // [sp+4h] [bp-4h] BYREF

  v5 = a2;
  Kompex::SQLiteStatement::CheckStatement((int)this);
  sub_3BF0BC((int)&v5, "GetColumnBytes()");
  Kompex::SQLiteStatement::CheckColumnNumber((int)this, a2, (int)&v5);
  sub_3BDF80(&v5);
  return sqlite3_column_bytes(*(this + 1), a2);
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnBytes16(int)const
// address: 0x0038DE50   size: 0x32 (50 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetColumnBytes16(int **this, int a2)
{
  int v5; // [sp+4h] [bp-4h] BYREF

  v5 = a2;
  Kompex::SQLiteStatement::CheckStatement((int)this);
  sub_3BF0BC((int)&v5, "GetColumnBytes16()");
  Kompex::SQLiteStatement::CheckColumnNumber((int)this, a2, (int)&v5);
  sub_3BDF80(&v5);
  return sqlite3_column_bytes16(*(this + 1), a2);
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnDatabaseName(int)const
// address: 0x0038DE90   size: 0x32 (50 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetColumnDatabaseName(int **this, int a2)
{
  int v5; // [sp+4h] [bp-4h] BYREF

  v5 = a2;
  Kompex::SQLiteStatement::CheckStatement((int)this);
  sub_3BF0BC((int)&v5, "GetColumnDatabaseName()");
  Kompex::SQLiteStatement::CheckColumnNumber((int)this, a2, (int)&v5);
  sub_3BDF80(&v5);
  return sqlite3_column_database_name(*(this + 1), a2);
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnDatabaseName16(int)const
// address: 0x0038DED0   size: 0x32 (50 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetColumnDatabaseName16(int **this, int a2)
{
  int v5; // [sp+4h] [bp-4h] BYREF

  v5 = a2;
  Kompex::SQLiteStatement::CheckStatement((int)this);
  sub_3BF0BC((int)&v5, "GetColumnDatabaseName16()");
  Kompex::SQLiteStatement::CheckColumnNumber((int)this, a2, (int)&v5);
  sub_3BDF80(&v5);
  return sqlite3_column_database_name16(*(this + 1), a2);
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnTableName(int)const
// address: 0x0038DF10   size: 0x32 (50 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetColumnTableName(int **this, int a2)
{
  int v5; // [sp+4h] [bp-4h] BYREF

  v5 = a2;
  Kompex::SQLiteStatement::CheckStatement((int)this);
  sub_3BF0BC((int)&v5, "GetColumnTableName()");
  Kompex::SQLiteStatement::CheckColumnNumber((int)this, a2, (int)&v5);
  sub_3BDF80(&v5);
  return sqlite3_column_table_name(*(this + 1), a2);
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnTableName16(int)const
// address: 0x0038DF50   size: 0x32 (50 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetColumnTableName16(int **this, int a2)
{
  int v5; // [sp+4h] [bp-4h] BYREF

  v5 = a2;
  Kompex::SQLiteStatement::CheckStatement((int)this);
  sub_3BF0BC((int)&v5, "GetColumnTableName16()");
  Kompex::SQLiteStatement::CheckColumnNumber((int)this, a2, (int)&v5);
  sub_3BDF80(&v5);
  return sqlite3_column_table_name16(*(this + 1), a2);
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnOriginName(int)const
// address: 0x0038DF90   size: 0x32 (50 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetColumnOriginName(int **this, int a2)
{
  int v5; // [sp+4h] [bp-4h] BYREF

  v5 = a2;
  Kompex::SQLiteStatement::CheckStatement((int)this);
  sub_3BF0BC((int)&v5, "GetColumnOriginName()");
  Kompex::SQLiteStatement::CheckColumnNumber((int)this, a2, (int)&v5);
  sub_3BDF80(&v5);
  return sqlite3_column_origin_name(*(this + 1), a2);
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnOriginName16(int)const
// address: 0x0038DFD0   size: 0x32 (50 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetColumnOriginName16(int **this, int a2)
{
  int v5; // [sp+4h] [bp-4h] BYREF

  v5 = a2;
  Kompex::SQLiteStatement::CheckStatement((int)this);
  sub_3BF0BC((int)&v5, "GetColumnOriginName16()");
  Kompex::SQLiteStatement::CheckColumnNumber((int)this, a2, (int)&v5);
  sub_3BDF80(&v5);
  return sqlite3_column_origin_name16(*(this + 1), a2);
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnDeclaredDatatype(int)const
// address: 0x0038E010   size: 0x32 (50 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetColumnDeclaredDatatype(int **this, int a2)
{
  int v5; // [sp+4h] [bp-4h] BYREF

  v5 = a2;
  Kompex::SQLiteStatement::CheckStatement((int)this);
  sub_3BF0BC((int)&v5, "GetColumnDeclaredDatatype()");
  Kompex::SQLiteStatement::CheckColumnNumber((int)this, a2, (int)&v5);
  sub_3BDF80(&v5);
  return sqlite3_column_decltype(*(this + 1), a2);
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnDeclaredDatatype16(int)const
// address: 0x0038E050   size: 0x32 (50 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetColumnDeclaredDatatype16(int **this, int a2)
{
  int v5; // [sp+4h] [bp-4h] BYREF

  v5 = a2;
  Kompex::SQLiteStatement::CheckStatement((int)this);
  sub_3BF0BC((int)&v5, "GetColumnDeclaredDatatype16()");
  Kompex::SQLiteStatement::CheckColumnNumber((int)this, a2, (int)&v5);
  sub_3BDF80(&v5);
  return sqlite3_column_decltype16(*(this + 1), a2);
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnString(int)const
// address: 0x0038E090   size: 0x80 (128 bytes)
//======================================================================
Kompex::SQLiteStatement *__fastcall Kompex::SQLiteStatement::GetColumnString(
        Kompex::SQLiteStatement *this,
        int **a2,
        int a3)
{
  char *v6; // r6
  _BYTE v8[8]; // [sp+4h] [bp-C0h] BYREF
  _BYTE v9[4]; // [sp+Ch] [bp-B8h] BYREF
  _BYTE v10[180]; // [sp+10h] [bp-B4h] BYREF

  Kompex::SQLiteStatement::CheckStatement((int)a2);
  sub_3BF0BC((int)v8, "GetColumnString()");
  Kompex::SQLiteStatement::CheckColumnNumber((int)a2, a3, (int)v8);
  sub_3BDF80(v8);
  v6 = (char *)sqlite3_column_text(a2[1], a3);
  if ( v6 != nullptr )
  {
    sub_3A3350(v8, 24);
    sub_3B458C((int)v9, v6);
    sub_3A2244(this, v10);
    sub_3A1ECC(v8);
  }
  else
  {
    sub_3BF0BC((int)this, (char *)&unk_3FB8EA);
  }
  return this;
}


//======================================================================
// Kompex::SQLiteStatement::GetSqlResultString(char const*,std::string const&)
// address: 0x0038E118   size: 0x60 (96 bytes)
//======================================================================
_DWORD *__fastcall Kompex::SQLiteStatement::GetSqlResultString(
        _DWORD *a1,
        Kompex::SQLiteStatement *a2,
        char *a3,
        int a4)
{
  _DWORD *v8; // [sp+0h] [bp-Ch] BYREF
  _DWORD v9[2]; // [sp+4h] [bp-8h] BYREF

  v8 = a1;
  v9[0] = a2;
  v9[1] = a3;
  sub_3BEB1C(&v8, a4);
  Kompex::SQLiteStatement::Prepare(a2, a3);
  *a1 = &byte_55FB88;
  if ( Kompex::SQLiteStatement::FetchRow(a2) != 0 )
  {
    Kompex::SQLiteStatement::GetColumnString((Kompex::SQLiteStatement *)v9, (int **)a2, 0);
    sub_3BEBBC(a1);
    sub_3BDF80(v9);
  }
  else
  {
    sub_3BEBBC(a1);
  }
  Kompex::SQLiteStatement::FreeQuery((unsigned int **)a2);
  sub_3BDF80(&v8);
  return a1;
}


//======================================================================
// Kompex::SQLiteStatement::GetSqlResultString(wchar_t const*,std::string const&)
// address: 0x0038E198   size: 0x60 (96 bytes)
//======================================================================
_DWORD *__fastcall Kompex::SQLiteStatement::GetSqlResultString(
        _DWORD *a1,
        Kompex::SQLiteStatement *a2,
        wchar_t *a3,
        int a4)
{
  _DWORD *v8; // [sp+0h] [bp-Ch] BYREF
  _DWORD v9[2]; // [sp+4h] [bp-8h] BYREF

  v8 = a1;
  v9[0] = a2;
  v9[1] = a3;
  sub_3BEB1C(&v8, a4);
  Kompex::SQLiteStatement::Prepare(a2, a3);
  *a1 = &byte_55FB88;
  if ( Kompex::SQLiteStatement::FetchRow(a2) != 0 )
  {
    Kompex::SQLiteStatement::GetColumnString((Kompex::SQLiteStatement *)v9, (int **)a2, 0);
    sub_3BEBBC(a1);
    sub_3BDF80(v9);
  }
  else
  {
    sub_3BEBBC(a1);
  }
  Kompex::SQLiteStatement::FreeQuery((unsigned int **)a2);
  sub_3BDF80(&v8);
  return a1;
}


//======================================================================
// Kompex::SQLiteStatement::CleanUpTransaction(void)
// address: 0x0038E258   size: 0x76 (118 bytes)
//======================================================================
void __fastcall Kompex::SQLiteStatement::CleanUpTransaction(Kompex::SQLiteStatement *this)
{
  int i; // r5
  void *v3; // r0
  int v4; // r5
  void *v5; // r0

  for ( i = *((_DWORD *)this + 6);
        (Kompex::SQLiteStatement *)i != (Kompex::SQLiteStatement *)((char *)this + 16);
        i = sub_391DDC(i) )
  {
    v3 = *(void **)(i + 20);
    if ( *(_BYTE *)(i + 24) != 0 && v3 != nullptr )
      operator delete[](v3);
  }
  std::_Rb_tree<unsigned short,std::pair<unsigned short const,std::pair<char const*,bool>>,std::_Select1st<std::pair<unsigned short const,std::pair<char const*,bool>>>,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,std::pair<char const*,bool>>>>::_M_erase(
    (int)this + 12,
    *((_DWORD **)this + 5));
  *((_DWORD *)this + 6) = i;
  *((_DWORD *)this + 7) = i;
  v4 = *((_DWORD *)this + 12);
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 8) = 0;
  while ( (Kompex::SQLiteStatement *)v4 != (Kompex::SQLiteStatement *)((char *)this + 40) )
  {
    v5 = *(void **)(v4 + 20);
    if ( *(_BYTE *)(v4 + 24) != 0 && v5 != nullptr )
      operator delete[](v5);
    v4 = sub_391DDC(v4);
  }
  std::_Rb_tree<unsigned short,std::pair<unsigned short const,std::pair<wchar_t const*,bool>>,std::_Select1st<std::pair<unsigned short const,std::pair<wchar_t const*,bool>>>,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,std::pair<wchar_t const*,bool>>>>::_M_erase(
    (int)this + 36,
    *((_DWORD **)this + 11));
  *((_DWORD *)this + 12) = v4;
  *((_DWORD *)this + 13) = v4;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 14) = 0;
}


//======================================================================
// Kompex::SQLiteStatement::CommitTransaction(void)
// address: 0x0038E2D0   size: 0x18C (396 bytes)
//======================================================================
void __fastcall Kompex::SQLiteStatement::CommitTransaction(Kompex::SQLiteStatement *this)
{
  int v1; // r6
  int v3; // r3
  wchar_t **k; // r5
  char **j; // r5
  int v6; // r6
  int i; // r5
  char **v8; // r3
  char **v9; // r1
  char *v10; // r7
  wchar_t **v11; // r3
  wchar_t **v12; // r1
  wchar_t *v13; // r7
  void *exception; // r6
  _BYTE v15[8]; // [sp+14h] [bp-8h] BYREF

  v1 = *((_DWORD *)this + 8);
  v3 = *((_DWORD *)this + 14);
  if ( v1 != 0 )
  {
    if ( v3 != 0 )
    {
      v6 = (unsigned __int16)(v3 + v1);
      for ( i = 0; i < v6; ++i )
      {
        v8 = *((char ***)this + 5);
        v9 = (char **)((char *)this + 16);
        while ( v8 != nullptr )
        {
          if ( *((unsigned __int16 *)v8 + 8) < (unsigned int)(unsigned __int16)i )
          {
            v10 = v8[3];
            v8 = v9;
          }
          else
          {
            v10 = v8[2];
          }
          v9 = v8;
          v8 = (char **)v10;
        }
        if ( v9 == (char **)((char *)this + 16) || *((unsigned __int16 *)v9 + 8) > (unsigned int)(unsigned __int16)i )
        {
          v11 = *((wchar_t ***)this + 11);
          v12 = (wchar_t **)((char *)this + 40);
          while ( v11 != nullptr )
          {
            if ( *((unsigned __int16 *)v11 + 8) < (unsigned int)(unsigned __int16)i )
            {
              v13 = v11[3];
              v11 = v12;
            }
            else
            {
              v13 = v11[2];
            }
            v12 = v11;
            v11 = (wchar_t **)v13;
          }
          if ( v12 == (wchar_t **)((char *)this + 40)
            || *((unsigned __int16 *)v12 + 8) > (unsigned int)(unsigned __int16)i )
          {
            exception = _cxa_allocate_exception(0x10u);
            sub_3BF0BC((int)v15, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteStatement.cpp");
            Kompex::SQLiteException::SQLiteException(
              (int)exception,
              (int)v15,
              679,
              "CommitTransaction() transaction id not found",
              -1);
            sub_3BDF80(v15);
            _cxa_throw(
              exception,
              (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
              (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
          }
          Kompex::SQLiteStatement::SqlStatement(this, v12[5]);
        }
        else
        {
          Kompex::SQLiteStatement::SqlStatement(this, v9[5]);
        }
      }
    }
    else
    {
      for ( j = *((char ***)this + 6); j != (char **)((char *)this + 16); j = (char **)sub_391DDC(j) )
        Kompex::SQLiteStatement::SqlStatement(this, j[5]);
    }
  }
  else
  {
    if ( v3 == 0 )
    {
      Kompex::SQLiteStatement::SqlStatement(this, "COMMIT;");
      goto LABEL_12;
    }
    for ( k = *((wchar_t ***)this + 12); k != (wchar_t **)((char *)this + 40); k = (wchar_t **)sub_391DDC(k) )
      Kompex::SQLiteStatement::SqlStatement(this, k[5]);
  }
  Kompex::SQLiteStatement::SqlStatement(this, "COMMIT;");
  Kompex::SQLiteStatement::CleanUpTransaction(this);
LABEL_12:
  *((_WORD *)this + 30) = 0;
}


//======================================================================
// Kompex::SQLiteStatement::BeginTransaction(void)
// address: 0x0038E4A8   size: 0x14 (20 bytes)
//======================================================================
void __fastcall Kompex::SQLiteStatement::BeginTransaction(Kompex::SQLiteStatement *this)
{
  Kompex::SQLiteStatement::SqlStatement(this, "BEGIN;");
  Kompex::SQLiteStatement::CleanUpTransaction(this);
}


//======================================================================
// Kompex::SQLiteStatement::~SQLiteStatement()
// address: 0x0038E4C0   size: 0x40 (64 bytes)
//======================================================================
// Alternative name is '_ZN6Kompex15SQLiteStatementD1Ev'
void __fastcall Kompex::SQLiteStatement::~SQLiteStatement(unsigned int **this)
{
  char *v2; // r7
  char *v3; // r6
  char *v4; // r5

  *this = (unsigned int *)&off_464110;
  v2 = (char *)(this + 16);
  v3 = (char *)(this + 9);
  v4 = (char *)(this + 3);
  Kompex::SQLiteStatement::FreeQuery(this);
  Kompex::SQLiteStatement::CleanUpTransaction((Kompex::SQLiteStatement *)this);
  std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_erase(
    (int)v2,
    *(this + 18));
  std::_Rb_tree<unsigned short,std::pair<unsigned short const,std::pair<wchar_t const*,bool>>,std::_Select1st<std::pair<unsigned short const,std::pair<wchar_t const*,bool>>>,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,std::pair<wchar_t const*,bool>>>>::_M_erase(
    (int)v3,
    *(this + 11));
  std::_Rb_tree<unsigned short,std::pair<unsigned short const,std::pair<char const*,bool>>,std::_Select1st<std::pair<unsigned short const,std::pair<char const*,bool>>>,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,std::pair<char const*,bool>>>>::_M_erase(
    (int)v4,
    *(this + 5));
}


//======================================================================
// Kompex::SQLiteStatement::~SQLiteStatement()
// address: 0x0038E520   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Kompex::SQLiteStatement::~SQLiteStatement(unsigned int **this)
{
  Kompex::SQLiteStatement::~SQLiteStatement(this);
  operator delete(this);
}


//======================================================================
// Kompex::SQLiteStatement::GetAssignedColumnNumber(std::string const&)const
// address: 0x0038E534   size: 0x102 (258 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetAssignedColumnNumber(int a1, _DWORD *a2)
{
  int v2; // r4
  int v3; // r7
  int v5; // r5
  int v6; // r3
  _DWORD *exception; // r4
  char *v9; // [sp+4h] [bp-10h] BYREF
  _BYTE v10[4]; // [sp+8h] [bp-Ch] BYREF
  _BYTE v11[8]; // [sp+Ch] [bp-8h] BYREF

  v2 = *(_DWORD *)(a1 + 72);
  v3 = a1 + 68;
  v5 = a1 + 68;
  while ( v2 != 0 )
  {
    if ( std::operator<<char>() != 0 )
    {
      v6 = *(_DWORD *)(v2 + 12);
      v2 = v5;
    }
    else
    {
      v6 = *(_DWORD *)(v2 + 8);
    }
    v5 = v2;
    v2 = v6;
  }
  if ( v5 == v3 || std::operator<<char>() != 0 )
  {
    exception = _cxa_allocate_exception(0x10u);
    sub_3BF0BC((int)v11, "D:/work/oworldsrc/client/KompexSQLite/KompexSQLiteStatement.cpp");
    v9 = &byte_55FB88;
    sub_3BE700(&v9, *(_DWORD *)(*a2 - 12) + 39);
    sub_3BE898(&v9, "GetAssignedColumnNumber() column name '", 39);
    sub_3BE774(&v9, a2);
    std::operator+<char>((int)v10, (int)&v9, "' does not exists");
    sub_3BEB1C(exception, v10);
    sub_3BEB1C(exception + 1, v11);
    exception[2] = 997;
    exception[3] = -1;
    sub_3BDF80(v10);
    sub_3BDF80(&v9);
    sub_3BDF80(v11);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'Kompex::SQLiteException,
      (void (*)(void *))Kompex::SQLiteException::~SQLiteException);
  }
  return *(_DWORD *)(v5 + 20);
}


//======================================================================
// Kompex::SQLiteStatement::SecureTransaction(char const*)
// address: 0x0038E7DA   size: 0x42 (66 bytes)
//======================================================================
__int64 __fastcall Kompex::SQLiteStatement::SecureTransaction(__int64 this)
{
  size_t v2; // r0
  char *v3; // r4
  __int16 v4; // r3
  int v5; // r0
  __int64 v7; // [sp+0h] [bp-8h] BYREF

  v7 = this;
  v2 = j_strlen((const char *)HIDWORD(this));
  v3 = (char *)operator new[](v2 + 1);
  j_strcpy(v3, (const char *)HIDWORD(this));
  v4 = *(_WORD *)(this + 60);
  *(_WORD *)(this + 60) = v4 + 1;
  HIWORD(v7) = v4;
  v5 = std::map<unsigned short,std::pair<char const*,bool>>::operator[]((_DWORD *)(this + 12), (_WORD *)&v7 + 3);
  *(_DWORD *)v5 = v3;
  *(_BYTE *)(v5 + 4) = 1;
  return v7;
}


//======================================================================
// Kompex::SQLiteStatement::SecureTransaction(std::string)
// address: 0x0038E81C   size: 0x42 (66 bytes)
//======================================================================
__int64 __fastcall Kompex::SQLiteStatement::SecureTransaction(__int64 a1)
{
  char *v2; // r4
  __int16 v3; // r3
  int v4; // r0
  __int64 v6; // [sp+0h] [bp-8h] BYREF

  v6 = a1;
  v2 = (char *)operator new[](*(_DWORD *)(*(_DWORD *)HIDWORD(a1) - 12) + 1);
  j_strcpy(v2, *(const char **)HIDWORD(a1));
  v3 = *(_WORD *)(a1 + 60);
  *(_WORD *)(a1 + 60) = v3 + 1;
  HIWORD(v6) = v3;
  v4 = std::map<unsigned short,std::pair<char const*,bool>>::operator[]((_DWORD *)(a1 + 12), (_WORD *)&v6 + 3);
  *(_DWORD *)v4 = v2;
  *(_BYTE *)(v4 + 4) = 1;
  return v6;
}


//======================================================================
// Kompex::SQLiteStatement::SecureTransaction(wchar_t const*)
// address: 0x0038E8B8   size: 0x170 (368 bytes)
//======================================================================
wchar_t *__fastcall Kompex::SQLiteStatement::SecureTransaction(Kompex::SQLiteStatement *this, const wchar_t *s)
{
  size_t v4; // r0
  unsigned int v5; // r0
  wchar_t *result; // r0
  unsigned int v7; // r2
  int v8; // r7
  wchar_t *v9; // r4
  int v10; // r3
  unsigned int v11; // r3
  wchar_t *v12; // r5
  _BOOL4 v13; // r7
  wchar_t *v14; // r0
  wchar_t v15; // r2
  wchar_t v16; // r3
  unsigned int v17; // [sp+4h] [bp-30h]
  wchar_t *v18; // [sp+Ch] [bp-28h]
  char *v19; // [sp+10h] [bp-24h]
  char *v20; // [sp+14h] [bp-20h]
  wchar_t *v21; // [sp+1Ch] [bp-18h] BYREF
  wchar_t *v22; // [sp+20h] [bp-14h]
  wchar_t v23; // [sp+24h] [bp-10h] BYREF
  wchar_t v24; // [sp+28h] [bp-Ch]
  wchar_t v25; // [sp+2Ch] [bp-8h]

  v4 = j_wcslen(s) + 1;
  if ( v4 > 0x1FC00000 )
    v5 = -1;
  else
    v5 = 4 * v4;
  v18 = (wchar_t *)operator new[](v5);
  result = j_wcscpy(v18, s);
  v7 = *((unsigned __int16 *)this + 30);
  v8 = *((_DWORD *)this + 11);
  ++*((_WORD *)this + 30);
  v17 = v7;
  v19 = (char *)this + 40;
  v9 = (wchar_t *)((char *)this + 40);
  while ( v8 != 0 )
  {
    if ( *(unsigned __int16 *)(v8 + 16) < v7 )
    {
      v10 = *(_DWORD *)(v8 + 12);
      v8 = (int)v9;
    }
    else
    {
      v10 = *(_DWORD *)(v8 + 8);
    }
    v9 = (wchar_t *)v8;
    v8 = v10;
  }
  if ( v9 != (wchar_t *)v19 && *((unsigned __int16 *)v9 + 8) <= v7 )
    goto LABEL_15;
  LOWORD(v23) = v7;
  LOBYTE(v25) = 0;
  v24 = 0;
  v20 = (char *)this + 36;
  if ( v9 != (wchar_t *)v19 )
  {
    v11 = *((unsigned __int16 *)v9 + 8);
    if ( v7 >= v11 )
    {
      if ( v11 >= v7 )
        goto LABEL_15;
      if ( v9 != *((wchar_t **)this + 13) )
      {
        result = (wchar_t *)sub_391DDC(v9);
        if ( *((unsigned __int16 *)result + 8) <= v17 )
        {
          result = std::_Rb_tree<unsigned short,std::pair<unsigned short const,std::pair<wchar_t const*,bool>>,std::_Select1st<std::pair<unsigned short const,std::pair<wchar_t const*,bool>>>,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,std::pair<wchar_t const*,bool>>>>::_M_get_insert_unique_pos(
                     (int *)&v21,
                     (int)v20,
                     (unsigned __int16 *)&v23);
          v8 = (int)v21;
          v9 = v22;
        }
        else if ( v9[3] != 0 )
        {
          v9 = result;
          v8 = (int)result;
        }
      }
      v12 = v9;
      v9 = (wchar_t *)v8;
LABEL_30:
      if ( v12 == nullptr )
        goto LABEL_15;
      v13 = true;
      if ( v9 != nullptr )
        goto LABEL_35;
      goto LABEL_32;
    }
    if ( v9 == *((wchar_t **)this + 12) )
    {
      v12 = v9;
      goto LABEL_30;
    }
    result = (wchar_t *)sub_391E44(v9);
    v12 = result;
    if ( *((unsigned __int16 *)result + 8) < v17 )
    {
      if ( result[3] != 0 )
        v12 = v9;
      else
        v9 = nullptr;
      goto LABEL_30;
    }
LABEL_38:
    result = std::_Rb_tree<unsigned short,std::pair<unsigned short const,std::pair<wchar_t const*,bool>>,std::_Select1st<std::pair<unsigned short const,std::pair<wchar_t const*,bool>>>,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,std::pair<wchar_t const*,bool>>>>::_M_get_insert_unique_pos(
               (int *)&v21,
               (int)v20,
               (unsigned __int16 *)&v23);
    v9 = v21;
    v12 = v22;
    goto LABEL_30;
  }
  if ( *((_DWORD *)this + 14) == 0 )
    goto LABEL_38;
  v12 = *((wchar_t **)this + 13);
  if ( *((unsigned __int16 *)v12 + 8) >= v7 )
    goto LABEL_38;
LABEL_32:
  v13 = v12 == (wchar_t *)v19 || v17 < *((unsigned __int16 *)v12 + 8);
LABEL_35:
  v14 = (wchar_t *)operator new(0x1Cu);
  v9 = v14;
  if ( v14 != (wchar_t *)-16 )
  {
    v15 = v24;
    v14[4] = v23;
    v16 = v25;
    v14[5] = v15;
    v14[6] = v16;
  }
  result = (wchar_t *)sub_391E64(v13, v14, v12, v19);
  ++*((_DWORD *)this + 14);
LABEL_15:
  v9[5] = (wchar_t)v18;
  *((_BYTE *)v9 + 24) = 1;
  return result;
}


//======================================================================
// Kompex::SQLiteStatement::AssignColumnNumberToColumnName(void)const
// address: 0x0038EBCA   size: 0x7E (126 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::AssignColumnNumberToColumnName(Kompex::SQLiteStatement *this)
{
  _BYTE *v2; // r7
  int result; // r0
  int v4; // r5
  char *v5; // r0
  _BYTE v6[8]; // [sp+Ch] [bp-8h] BYREF

  v2 = (char *)this + 88;
  result = Kompex::SQLiteStatement::CheckStatement((int)this);
  v4 = (unsigned __int8)*v2;
  if ( *v2 == 0 )
  {
    result = sqlite3_column_count(*((_DWORD *)this + 1));
    if ( result >= 0 )
    {
      std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_erase(
        (int)this + 64,
        *((_DWORD **)this + 18));
      *((_DWORD *)this + 19) = (char *)this + 68;
      *((_DWORD *)this + 18) = v4;
      *((_DWORD *)this + 20) = (char *)this + 68;
      *((_DWORD *)this + 21) = v4;
      while ( 1 )
      {
        result = sqlite3_column_count(*((_DWORD *)this + 1));
        if ( v4 >= result )
          break;
        v5 = (char *)sqlite3_column_name(*((int **)this + 1), v4);
        sub_3BF0BC((int)v6, v5);
        *(_DWORD *)std::map<std::string,int>::operator[]((_DWORD *)this + 16, (int)v6) = v4;
        sub_3BDF80(v6);
        ++v4;
      }
      *v2 = 1;
    }
  }
  return result;
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnBytes(std::string const&)const
// address: 0x0038EC48   size: 0x1E (30 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetColumnBytes(Kompex::SQLiteStatement *a1, _DWORD *a2)
{
  int *v4; // r5
  int AssignedColumnNumber; // r0

  Kompex::SQLiteStatement::AssignColumnNumberToColumnName(a1);
  v4 = *((int **)a1 + 1);
  AssignedColumnNumber = Kompex::SQLiteStatement::GetAssignedColumnNumber((int)a1, a2);
  return sqlite3_column_bytes(v4, AssignedColumnNumber);
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnBytes16(std::string const&)const
// address: 0x0038EC66   size: 0x1E (30 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetColumnBytes16(Kompex::SQLiteStatement *a1, _DWORD *a2)
{
  int *v4; // r5
  int AssignedColumnNumber; // r0

  Kompex::SQLiteStatement::AssignColumnNumberToColumnName(a1);
  v4 = *((int **)a1 + 1);
  AssignedColumnNumber = Kompex::SQLiteStatement::GetAssignedColumnNumber((int)a1, a2);
  return sqlite3_column_bytes16(v4, AssignedColumnNumber);
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnDatabaseName(std::string const&)const
// address: 0x0038EC84   size: 0x1E (30 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetColumnDatabaseName(Kompex::SQLiteStatement *a1, _DWORD *a2)
{
  int *v4; // r5
  int AssignedColumnNumber; // r0

  Kompex::SQLiteStatement::AssignColumnNumberToColumnName(a1);
  v4 = *((int **)a1 + 1);
  AssignedColumnNumber = Kompex::SQLiteStatement::GetAssignedColumnNumber((int)a1, a2);
  return sqlite3_column_database_name(v4, AssignedColumnNumber);
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnDatabaseName16(std::string const&)const
// address: 0x0038ECA2   size: 0x1E (30 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetColumnDatabaseName16(Kompex::SQLiteStatement *a1, _DWORD *a2)
{
  int *v4; // r5
  int AssignedColumnNumber; // r0

  Kompex::SQLiteStatement::AssignColumnNumberToColumnName(a1);
  v4 = *((int **)a1 + 1);
  AssignedColumnNumber = Kompex::SQLiteStatement::GetAssignedColumnNumber((int)a1, a2);
  return sqlite3_column_database_name16(v4, AssignedColumnNumber);
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnTableName(std::string const&)const
// address: 0x0038ECC0   size: 0x1E (30 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetColumnTableName(Kompex::SQLiteStatement *a1, _DWORD *a2)
{
  int *v4; // r5
  int AssignedColumnNumber; // r0

  Kompex::SQLiteStatement::AssignColumnNumberToColumnName(a1);
  v4 = *((int **)a1 + 1);
  AssignedColumnNumber = Kompex::SQLiteStatement::GetAssignedColumnNumber((int)a1, a2);
  return sqlite3_column_table_name(v4, AssignedColumnNumber);
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnTableName16(std::string const&)const
// address: 0x0038ECDE   size: 0x1E (30 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetColumnTableName16(Kompex::SQLiteStatement *a1, _DWORD *a2)
{
  int *v4; // r5
  int AssignedColumnNumber; // r0

  Kompex::SQLiteStatement::AssignColumnNumberToColumnName(a1);
  v4 = *((int **)a1 + 1);
  AssignedColumnNumber = Kompex::SQLiteStatement::GetAssignedColumnNumber((int)a1, a2);
  return sqlite3_column_table_name16(v4, AssignedColumnNumber);
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnOriginName(std::string const&)const
// address: 0x0038ECFC   size: 0x1E (30 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetColumnOriginName(Kompex::SQLiteStatement *a1, _DWORD *a2)
{
  int *v4; // r5
  int AssignedColumnNumber; // r0

  Kompex::SQLiteStatement::AssignColumnNumberToColumnName(a1);
  v4 = *((int **)a1 + 1);
  AssignedColumnNumber = Kompex::SQLiteStatement::GetAssignedColumnNumber((int)a1, a2);
  return sqlite3_column_origin_name(v4, AssignedColumnNumber);
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnOriginName16(std::string const&)const
// address: 0x0038ED1A   size: 0x1E (30 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetColumnOriginName16(Kompex::SQLiteStatement *a1, _DWORD *a2)
{
  int *v4; // r5
  int AssignedColumnNumber; // r0

  Kompex::SQLiteStatement::AssignColumnNumberToColumnName(a1);
  v4 = *((int **)a1 + 1);
  AssignedColumnNumber = Kompex::SQLiteStatement::GetAssignedColumnNumber((int)a1, a2);
  return sqlite3_column_origin_name16(v4, AssignedColumnNumber);
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnDeclaredDatatype(std::string const&)const
// address: 0x0038ED38   size: 0x1E (30 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetColumnDeclaredDatatype(Kompex::SQLiteStatement *a1, _DWORD *a2)
{
  int *v4; // r5
  int AssignedColumnNumber; // r0

  Kompex::SQLiteStatement::AssignColumnNumberToColumnName(a1);
  v4 = *((int **)a1 + 1);
  AssignedColumnNumber = Kompex::SQLiteStatement::GetAssignedColumnNumber((int)a1, a2);
  return sqlite3_column_decltype(v4, AssignedColumnNumber);
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnDeclaredDatatype16(std::string const&)const
// address: 0x0038ED56   size: 0x1E (30 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetColumnDeclaredDatatype16(Kompex::SQLiteStatement *a1, _DWORD *a2)
{
  int *v4; // r5
  int AssignedColumnNumber; // r0

  Kompex::SQLiteStatement::AssignColumnNumberToColumnName(a1);
  v4 = *((int **)a1 + 1);
  AssignedColumnNumber = Kompex::SQLiteStatement::GetAssignedColumnNumber((int)a1, a2);
  return sqlite3_column_decltype16(v4, AssignedColumnNumber);
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnName(std::string const&)const
// address: 0x0038ED74   size: 0x1E (30 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetColumnName(Kompex::SQLiteStatement *a1, _DWORD *a2)
{
  int *v4; // r5
  int AssignedColumnNumber; // r0

  Kompex::SQLiteStatement::AssignColumnNumberToColumnName(a1);
  v4 = *((int **)a1 + 1);
  AssignedColumnNumber = Kompex::SQLiteStatement::GetAssignedColumnNumber((int)a1, a2);
  return sqlite3_column_name(v4, AssignedColumnNumber);
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnName16(std::string const&)const
// address: 0x0038ED92   size: 0x1E (30 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetColumnName16(Kompex::SQLiteStatement *a1, _DWORD *a2)
{
  int *v4; // r5
  int AssignedColumnNumber; // r0

  Kompex::SQLiteStatement::AssignColumnNumberToColumnName(a1);
  v4 = *((int **)a1 + 1);
  AssignedColumnNumber = Kompex::SQLiteStatement::GetAssignedColumnNumber((int)a1, a2);
  return sqlite3_column_name16(v4, AssignedColumnNumber);
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnCString(std::string const&)const
// address: 0x0038EDB0   size: 0x1E (30 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetColumnCString(Kompex::SQLiteStatement *a1, _DWORD *a2)
{
  int *v4; // r5
  int AssignedColumnNumber; // r0

  Kompex::SQLiteStatement::AssignColumnNumberToColumnName(a1);
  v4 = *((int **)a1 + 1);
  AssignedColumnNumber = Kompex::SQLiteStatement::GetAssignedColumnNumber((int)a1, a2);
  return sqlite3_column_text(v4, AssignedColumnNumber);
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnString(std::string const&)const
// address: 0x0038EDD0   size: 0x66 (102 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetColumnString(int a1, int **this, _DWORD *a3)
{
  int *v6; // r6
  int AssignedColumnNumber; // r0
  char *v8; // r6
  _BYTE v10[8]; // [sp+4h] [bp-C0h] BYREF
  _BYTE v11[4]; // [sp+Ch] [bp-B8h] BYREF
  _BYTE v12[180]; // [sp+10h] [bp-B4h] BYREF

  Kompex::SQLiteStatement::AssignColumnNumberToColumnName((Kompex::SQLiteStatement *)this);
  v6 = *(this + 1);
  AssignedColumnNumber = Kompex::SQLiteStatement::GetAssignedColumnNumber((int)this, a3);
  v8 = (char *)sqlite3_column_text(v6, AssignedColumnNumber);
  if ( v8 != nullptr )
  {
    sub_3A3350(v10, 24);
    sub_3B458C((int)v11, v8);
    sub_3A2244(a1, v12);
    sub_3A1ECC(v10);
  }
  else
  {
    sub_3BF0BC(a1, (char *)&unk_3FB8EA);
  }
  return a1;
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnDouble(std::string const&)const
// address: 0x0038EE3C   size: 0x1E (30 bytes)
//======================================================================
__int64 __fastcall Kompex::SQLiteStatement::GetColumnDouble(Kompex::SQLiteStatement *a1, _DWORD *a2)
{
  int *v4; // r5
  int AssignedColumnNumber; // r0

  Kompex::SQLiteStatement::AssignColumnNumberToColumnName(a1);
  v4 = *((int **)a1 + 1);
  AssignedColumnNumber = Kompex::SQLiteStatement::GetAssignedColumnNumber((int)a1, a2);
  return sqlite3_column_double(v4, AssignedColumnNumber);
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnInt(std::string const&)const
// address: 0x0038EE5A   size: 0x1E (30 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetColumnInt(Kompex::SQLiteStatement *a1, _DWORD *a2)
{
  int *v4; // r5
  int AssignedColumnNumber; // r0

  Kompex::SQLiteStatement::AssignColumnNumberToColumnName(a1);
  v4 = *((int **)a1 + 1);
  AssignedColumnNumber = Kompex::SQLiteStatement::GetAssignedColumnNumber((int)a1, a2);
  return sqlite3_column_int(v4, AssignedColumnNumber);
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnBool(std::string const&)const
// address: 0x0038EE78   size: 0x22 (34 bytes)
//======================================================================
bool __fastcall Kompex::SQLiteStatement::GetColumnBool(Kompex::SQLiteStatement *a1, _DWORD *a2)
{
  int *v4; // r5
  int AssignedColumnNumber; // r0

  Kompex::SQLiteStatement::AssignColumnNumberToColumnName(a1);
  v4 = *((int **)a1 + 1);
  AssignedColumnNumber = Kompex::SQLiteStatement::GetAssignedColumnNumber((int)a1, a2);
  return sqlite3_column_int(v4, AssignedColumnNumber) != 0;
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnInt64(std::string const&)const
// address: 0x0038EE9A   size: 0x1E (30 bytes)
//======================================================================
__int64 __fastcall Kompex::SQLiteStatement::GetColumnInt64(Kompex::SQLiteStatement *a1, _DWORD *a2)
{
  int *v4; // r5
  int AssignedColumnNumber; // r0

  Kompex::SQLiteStatement::AssignColumnNumberToColumnName(a1);
  v4 = *((int **)a1 + 1);
  AssignedColumnNumber = Kompex::SQLiteStatement::GetAssignedColumnNumber((int)a1, a2);
  return sqlite3_column_int64(v4, AssignedColumnNumber);
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnType(std::string const&)const
// address: 0x0038EEB8   size: 0x1E (30 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetColumnType(Kompex::SQLiteStatement *a1, _DWORD *a2)
{
  int *v4; // r5
  int AssignedColumnNumber; // r0

  Kompex::SQLiteStatement::AssignColumnNumberToColumnName(a1);
  v4 = *((int **)a1 + 1);
  AssignedColumnNumber = Kompex::SQLiteStatement::GetAssignedColumnNumber((int)a1, a2);
  return sqlite3_column_type(v4, AssignedColumnNumber);
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnString16(std::string const&)const
// address: 0x0038EED6   size: 0x1E (30 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetColumnString16(Kompex::SQLiteStatement *a1, _DWORD *a2)
{
  int *v4; // r5
  int AssignedColumnNumber; // r0

  Kompex::SQLiteStatement::AssignColumnNumberToColumnName(a1);
  v4 = *((int **)a1 + 1);
  AssignedColumnNumber = Kompex::SQLiteStatement::GetAssignedColumnNumber((int)a1, a2);
  return sqlite3_column_text16(v4, AssignedColumnNumber);
}


//======================================================================
// Kompex::SQLiteStatement::GetColumnBlob(std::string const&)const
// address: 0x0038EEF4   size: 0x1E (30 bytes)
//======================================================================
int __fastcall Kompex::SQLiteStatement::GetColumnBlob(Kompex::SQLiteStatement *a1, _DWORD *a2)
{
  int *v4; // r5
  int AssignedColumnNumber; // r0

  Kompex::SQLiteStatement::AssignColumnNumberToColumnName(a1);
  v4 = *((int **)a1 + 1);
  AssignedColumnNumber = Kompex::SQLiteStatement::GetAssignedColumnNumber((int)a1, a2);
  return sqlite3_column_blob(v4, AssignedColumnNumber);
}

