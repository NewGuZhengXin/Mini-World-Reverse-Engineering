// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CImplicitCombiner

//======================================================================
// anl::CImplicitCombiner::~CImplicitCombiner()
// address: 0x0031F8A4   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl17CImplicitCombinerD1Ev'
void __fastcall anl::CImplicitCombiner::~CImplicitCombiner(anl::CImplicitCombiner *this)
{
  *(_DWORD *)this = &off_462280;
}


//======================================================================
// anl::CImplicitCombiner::~CImplicitCombiner()
// address: 0x0031F8B4   size: 0x16 (22 bytes)
//======================================================================
void __fastcall anl::CImplicitCombiner::~CImplicitCombiner(anl::CImplicitCombiner *this)
{
  *(_DWORD *)this = &off_462280;
  operator delete(this);
}


//======================================================================
// anl::CImplicitCombiner::setType(unsigned int)
// address: 0x0031F8D0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitCombiner::setType(int this, unsigned int a2)
{
  *(_DWORD *)(this + 96) = a2;
  return this;
}


//======================================================================
// anl::CImplicitCombiner::clearAllSources(void)
// address: 0x0031F8D4   size: 0x12 (18 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitCombiner::clearAllSources(__int64 this)
{
  int v1; // r3
  int v2; // r2

  v1 = 0;
  HIDWORD(this) = 0;
  do
  {
    v2 = this + v1;
    v1 += 4;
    *(_DWORD *)(v2 + 16) = 0;
  }
  while ( v1 != 80 );
  return this;
}


//======================================================================
// anl::CImplicitCombiner::CImplicitCombiner(unsigned int)
// address: 0x0031F8E8   size: 0x2A (42 bytes)
//======================================================================
// Alternative name is '_ZN3anl17CImplicitCombinerC2Ej'
int __fastcall anl::CImplicitCombiner::CImplicitCombiner(__int64 this)
{
  int v1; // r4

  v1 = this;
  *(_DWORD *)(this + 8) = -350469331;
  *(_DWORD *)(this + 12) = 1058682594;
  *(_DWORD *)(this + 96) = HIDWORD(this);
  *(_DWORD *)this = &off_4636D8;
  anl::CImplicitCombiner::clearAllSources(this);
  return v1;
}


//======================================================================
// anl::CImplicitCombiner::setSource(int,anl::CImplicitModuleBase *)
// address: 0x0031F930   size: 0xE (14 bytes)
//======================================================================
int __fastcall anl::CImplicitCombiner::setSource(int this, unsigned int a2, anl::CImplicitModuleBase *a3)
{
  if ( a2 <= 0x13 )
    *(_DWORD *)(4 * (a2 + 4) + this) = a3;
  return this;
}


//======================================================================
// anl::CImplicitCombiner::Add_get(double,double)
// address: 0x0031F940   size: 0x48 (72 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitCombiner::Add_get(anl::CImplicitCombiner *this, double a2, double a3)
{
  double v4; // r4
  int i; // r6
  int v7; // r0

  v4 = 0.0;
  for ( i = 0; i != 80; i += 4 )
  {
    v7 = *(_DWORD *)((char *)this + i + 16);
    if ( v7 != 0 )
      v4 = v4
         + ((double (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v7 + 12))(
             v7,
             *(_DWORD *)(*(_DWORD *)v7 + 12),
             LODWORD(a2),
             HIDWORD(a2),
             LODWORD(a3),
             HIDWORD(a3));
  }
  return *(_QWORD *)&v4;
}


//======================================================================
// anl::CImplicitCombiner::Add_get(double,double,double)
// address: 0x0031F990   size: 0x50 (80 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitCombiner::Add_get(anl::CImplicitCombiner *this, double a2, double a3, double a4)
{
  double v5; // r4
  int i; // r6
  int v8; // r0

  v5 = 0.0;
  for ( i = 0; i != 80; i += 4 )
  {
    v8 = *(_DWORD *)((char *)this + i + 16);
    if ( v8 != 0 )
      v5 = v5
         + ((double (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v8 + 16))(
             v8,
             *(_DWORD *)(*(_DWORD *)v8 + 16),
             LODWORD(a2),
             HIDWORD(a2),
             LODWORD(a3),
             HIDWORD(a3),
             LODWORD(a4),
             HIDWORD(a4));
  }
  return *(_QWORD *)&v5;
}


//======================================================================
// anl::CImplicitCombiner::Add_get(double,double,double,double)
// address: 0x0031F9E8   size: 0x58 (88 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitCombiner::Add_get(
        anl::CImplicitCombiner *this,
        double a2,
        double a3,
        double a4,
        double a5)
{
  double v6; // r4
  int i; // r6
  int v9; // r0

  v6 = 0.0;
  for ( i = 0; i != 80; i += 4 )
  {
    v9 = *(_DWORD *)((char *)this + i + 16);
    if ( v9 != 0 )
      v6 = v6
         + ((double (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v9 + 20))(
             v9,
             *(_DWORD *)(*(_DWORD *)v9 + 20),
             LODWORD(a2),
             HIDWORD(a2),
             LODWORD(a3),
             HIDWORD(a3),
             LODWORD(a4),
             HIDWORD(a4),
             LODWORD(a5),
             HIDWORD(a5));
  }
  return *(_QWORD *)&v6;
}


//======================================================================
// anl::CImplicitCombiner::Add_get(double,double,double,double,double,double)
// address: 0x0031FA48   size: 0x68 (104 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitCombiner::Add_get(
        anl::CImplicitCombiner *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  double v8; // r4
  int i; // r6
  int v11; // r0

  v8 = 0.0;
  for ( i = 0; i != 80; i += 4 )
  {
    v11 = *(_DWORD *)((char *)this + i + 16);
    if ( v11 != 0 )
      v8 = v8
         + ((double (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v11 + 24))(
             v11,
             *(_DWORD *)(*(_DWORD *)v11 + 24),
             LODWORD(a2),
             HIDWORD(a2),
             LODWORD(a3),
             HIDWORD(a3),
             LODWORD(a4),
             HIDWORD(a4),
             LODWORD(a5),
             HIDWORD(a5),
             LODWORD(a6),
             HIDWORD(a6),
             LODWORD(a7),
             HIDWORD(a7));
  }
  return *(_QWORD *)&v8;
}


//======================================================================
// anl::CImplicitCombiner::Mult_get(double,double)
// address: 0x0031FAB8   size: 0x48 (72 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitCombiner::Mult_get(anl::CImplicitCombiner *this, double a2, double a3)
{
  double v4; // r4
  int i; // r6
  int v7; // r0

  v4 = 1.0;
  for ( i = 0; i != 80; i += 4 )
  {
    v7 = *(_DWORD *)((char *)this + i + 16);
    if ( v7 != 0 )
      v4 = v4
         * ((double (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v7 + 12))(
             v7,
             *(_DWORD *)(*(_DWORD *)v7 + 12),
             LODWORD(a2),
             HIDWORD(a2),
             LODWORD(a3),
             HIDWORD(a3));
  }
  return *(_QWORD *)&v4;
}


//======================================================================
// anl::CImplicitCombiner::Mult_get(double,double,double)
// address: 0x0031FB08   size: 0x50 (80 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitCombiner::Mult_get(anl::CImplicitCombiner *this, double a2, double a3, double a4)
{
  double v5; // r4
  int i; // r6
  int v8; // r0

  v5 = 1.0;
  for ( i = 0; i != 80; i += 4 )
  {
    v8 = *(_DWORD *)((char *)this + i + 16);
    if ( v8 != 0 )
      v5 = v5
         * ((double (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v8 + 16))(
             v8,
             *(_DWORD *)(*(_DWORD *)v8 + 16),
             LODWORD(a2),
             HIDWORD(a2),
             LODWORD(a3),
             HIDWORD(a3),
             LODWORD(a4),
             HIDWORD(a4));
  }
  return *(_QWORD *)&v5;
}


//======================================================================
// anl::CImplicitCombiner::Mult_get(double,double,double,double)
// address: 0x0031FB60   size: 0x58 (88 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitCombiner::Mult_get(
        anl::CImplicitCombiner *this,
        double a2,
        double a3,
        double a4,
        double a5)
{
  double v6; // r4
  int i; // r6
  int v9; // r0

  v6 = 1.0;
  for ( i = 0; i != 80; i += 4 )
  {
    v9 = *(_DWORD *)((char *)this + i + 16);
    if ( v9 != 0 )
      v6 = v6
         * ((double (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v9 + 20))(
             v9,
             *(_DWORD *)(*(_DWORD *)v9 + 20),
             LODWORD(a2),
             HIDWORD(a2),
             LODWORD(a3),
             HIDWORD(a3),
             LODWORD(a4),
             HIDWORD(a4),
             LODWORD(a5),
             HIDWORD(a5));
  }
  return *(_QWORD *)&v6;
}


//======================================================================
// anl::CImplicitCombiner::Mult_get(double,double,double,double,double,double)
// address: 0x0031FBC0   size: 0x68 (104 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitCombiner::Mult_get(
        anl::CImplicitCombiner *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  double v8; // r4
  int i; // r6
  int v11; // r0

  v8 = 1.0;
  for ( i = 0; i != 80; i += 4 )
  {
    v11 = *(_DWORD *)((char *)this + i + 16);
    if ( v11 != 0 )
      v8 = v8
         * ((double (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v11 + 24))(
             v11,
             *(_DWORD *)(*(_DWORD *)v11 + 24),
             LODWORD(a2),
             HIDWORD(a2),
             LODWORD(a3),
             HIDWORD(a3),
             LODWORD(a4),
             HIDWORD(a4),
             LODWORD(a5),
             HIDWORD(a5),
             LODWORD(a6),
             HIDWORD(a6),
             LODWORD(a7),
             HIDWORD(a7));
  }
  return *(_QWORD *)&v8;
}


//======================================================================
// anl::CImplicitCombiner::Min_get(double,double)
// address: 0x0031FC30   size: 0x76 (118 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitCombiner::Min_get(anl::CImplicitCombiner *this, double a2, double a3)
{
  int v5; // r6
  int v6; // r0
  double v8; // r4
  int v9; // r0
  double v10; // [sp+8h] [bp-14h]

  v5 = 0;
  while ( 1 )
  {
    v6 = *((_DWORD *)this + v5 + 4);
    if ( v6 != 0 )
      break;
    if ( ++v5 == 20 )
      return 0;
  }
  v8 = COERCE_DOUBLE(
         ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v6 + 12))(
           v6,
           *(_DWORD *)(*(_DWORD *)v6 + 12),
           LODWORD(a2),
           HIDWORD(a2),
           LODWORD(a3),
           HIDWORD(a3)));
  do
  {
    v9 = *((_DWORD *)this + v5 + 4);
    if ( v9 != 0 )
    {
      v10 = COERCE_DOUBLE(
              ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v9 + 12))(
                v9,
                *(_DWORD *)(*(_DWORD *)v9 + 12),
                LODWORD(a2),
                HIDWORD(a2),
                LODWORD(a3),
                HIDWORD(a3)));
      if ( v10 < v8 )
        v8 = v10;
    }
    ++v5;
  }
  while ( v5 != 20 );
  return *(_QWORD *)&v8;
}


//======================================================================
// anl::CImplicitCombiner::Min_get(double,double,double)
// address: 0x0031FCB0   size: 0x86 (134 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitCombiner::Min_get(anl::CImplicitCombiner *this, double a2, double a3, double a4)
{
  int v6; // r6
  int v7; // r0
  double v9; // r4
  int v10; // r0
  double v11; // [sp+10h] [bp-14h]

  v6 = 0;
  while ( 1 )
  {
    v7 = *((_DWORD *)this + v6 + 4);
    if ( v7 != 0 )
      break;
    if ( ++v6 == 20 )
      return 0;
  }
  v9 = COERCE_DOUBLE(
         ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v7 + 16))(
           v7,
           *(_DWORD *)(*(_DWORD *)v7 + 16),
           LODWORD(a2),
           HIDWORD(a2),
           LODWORD(a3),
           HIDWORD(a3),
           LODWORD(a4),
           HIDWORD(a4)));
  do
  {
    v10 = *((_DWORD *)this + v6 + 4);
    if ( v10 != 0 )
    {
      v11 = COERCE_DOUBLE(
              ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v10 + 16))(
                v10,
                *(_DWORD *)(*(_DWORD *)v10 + 16),
                LODWORD(a2),
                HIDWORD(a2),
                LODWORD(a3),
                HIDWORD(a3),
                LODWORD(a4),
                HIDWORD(a4)));
      if ( v11 < v9 )
        v9 = v11;
    }
    ++v6;
  }
  while ( v6 != 20 );
  return *(_QWORD *)&v9;
}


//======================================================================
// anl::CImplicitCombiner::Min_get(double,double,double,double)
// address: 0x0031FD40   size: 0x96 (150 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitCombiner::Min_get(
        anl::CImplicitCombiner *this,
        double a2,
        double a3,
        double a4,
        double a5)
{
  int v7; // r6
  int v8; // r0
  double v10; // r4
  int v11; // r0
  double v12; // [sp+18h] [bp-14h]

  v7 = 0;
  while ( 1 )
  {
    v8 = *((_DWORD *)this + v7 + 4);
    if ( v8 != 0 )
      break;
    if ( ++v7 == 20 )
      return 0;
  }
  v10 = COERCE_DOUBLE(
          ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v8 + 20))(
            v8,
            *(_DWORD *)(*(_DWORD *)v8 + 20),
            LODWORD(a2),
            HIDWORD(a2),
            LODWORD(a3),
            HIDWORD(a3),
            LODWORD(a4),
            HIDWORD(a4),
            LODWORD(a5),
            HIDWORD(a5)));
  do
  {
    v11 = *((_DWORD *)this + v7 + 4);
    if ( v11 != 0 )
    {
      v12 = COERCE_DOUBLE(
              ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v11 + 20))(
                v11,
                *(_DWORD *)(*(_DWORD *)v11 + 20),
                LODWORD(a2),
                HIDWORD(a2),
                LODWORD(a3),
                HIDWORD(a3),
                LODWORD(a4),
                HIDWORD(a4),
                LODWORD(a5),
                HIDWORD(a5)));
      if ( v12 < v10 )
        v10 = v12;
    }
    ++v7;
  }
  while ( v7 != 20 );
  return *(_QWORD *)&v10;
}


//======================================================================
// anl::CImplicitCombiner::Min_get(double,double,double,double,double,double)
// address: 0x0031FDE0   size: 0xB6 (182 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitCombiner::Min_get(
        anl::CImplicitCombiner *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  int v9; // r6
  int v10; // r0
  double v12; // r4
  int v13; // r0
  double v14; // [sp+28h] [bp-14h]

  v9 = 0;
  while ( 1 )
  {
    v10 = *((_DWORD *)this + v9 + 4);
    if ( v10 != 0 )
      break;
    if ( ++v9 == 20 )
      return 0;
  }
  v12 = COERCE_DOUBLE(
          ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v10 + 24))(
            v10,
            *(_DWORD *)(*(_DWORD *)v10 + 24),
            LODWORD(a2),
            HIDWORD(a2),
            LODWORD(a3),
            HIDWORD(a3),
            LODWORD(a4),
            HIDWORD(a4),
            LODWORD(a5),
            HIDWORD(a5),
            LODWORD(a6),
            HIDWORD(a6),
            LODWORD(a7),
            HIDWORD(a7)));
  do
  {
    v13 = *((_DWORD *)this + v9 + 4);
    if ( v13 != 0 )
    {
      v14 = COERCE_DOUBLE(
              ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v13 + 24))(
                v13,
                *(_DWORD *)(*(_DWORD *)v13 + 24),
                LODWORD(a2),
                HIDWORD(a2),
                LODWORD(a3),
                HIDWORD(a3),
                LODWORD(a4),
                HIDWORD(a4),
                LODWORD(a5),
                HIDWORD(a5),
                LODWORD(a6),
                HIDWORD(a6),
                LODWORD(a7),
                HIDWORD(a7)));
      if ( v14 < v12 )
        v12 = v14;
    }
    ++v9;
  }
  while ( v9 != 20 );
  return *(_QWORD *)&v12;
}


//======================================================================
// anl::CImplicitCombiner::Max_get(double,double)
// address: 0x0031FEA0   size: 0x76 (118 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitCombiner::Max_get(anl::CImplicitCombiner *this, double a2, double a3)
{
  int v5; // r6
  int v6; // r0
  double v8; // r4
  int v9; // r0
  double v10; // [sp+8h] [bp-14h]

  v5 = 0;
  while ( 1 )
  {
    v6 = *((_DWORD *)this + v5 + 4);
    if ( v6 != 0 )
      break;
    if ( ++v5 == 20 )
      return 0;
  }
  v8 = COERCE_DOUBLE(
         ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v6 + 12))(
           v6,
           *(_DWORD *)(*(_DWORD *)v6 + 12),
           LODWORD(a2),
           HIDWORD(a2),
           LODWORD(a3),
           HIDWORD(a3)));
  do
  {
    v9 = *((_DWORD *)this + v5 + 4);
    if ( v9 != 0 )
    {
      v10 = COERCE_DOUBLE(
              ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v9 + 12))(
                v9,
                *(_DWORD *)(*(_DWORD *)v9 + 12),
                LODWORD(a2),
                HIDWORD(a2),
                LODWORD(a3),
                HIDWORD(a3)));
      if ( v10 > v8 )
        v8 = v10;
    }
    ++v5;
  }
  while ( v5 != 20 );
  return *(_QWORD *)&v8;
}


//======================================================================
// anl::CImplicitCombiner::Max_get(double,double,double)
// address: 0x0031FF20   size: 0x86 (134 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitCombiner::Max_get(anl::CImplicitCombiner *this, double a2, double a3, double a4)
{
  int v6; // r6
  int v7; // r0
  double v9; // r4
  int v10; // r0
  double v11; // [sp+10h] [bp-14h]

  v6 = 0;
  while ( 1 )
  {
    v7 = *((_DWORD *)this + v6 + 4);
    if ( v7 != 0 )
      break;
    if ( ++v6 == 20 )
      return 0;
  }
  v9 = COERCE_DOUBLE(
         ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v7 + 16))(
           v7,
           *(_DWORD *)(*(_DWORD *)v7 + 16),
           LODWORD(a2),
           HIDWORD(a2),
           LODWORD(a3),
           HIDWORD(a3),
           LODWORD(a4),
           HIDWORD(a4)));
  do
  {
    v10 = *((_DWORD *)this + v6 + 4);
    if ( v10 != 0 )
    {
      v11 = COERCE_DOUBLE(
              ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v10 + 16))(
                v10,
                *(_DWORD *)(*(_DWORD *)v10 + 16),
                LODWORD(a2),
                HIDWORD(a2),
                LODWORD(a3),
                HIDWORD(a3),
                LODWORD(a4),
                HIDWORD(a4)));
      if ( v11 > v9 )
        v9 = v11;
    }
    ++v6;
  }
  while ( v6 != 20 );
  return *(_QWORD *)&v9;
}


//======================================================================
// anl::CImplicitCombiner::Max_get(double,double,double,double)
// address: 0x0031FFB0   size: 0x96 (150 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitCombiner::Max_get(
        anl::CImplicitCombiner *this,
        double a2,
        double a3,
        double a4,
        double a5)
{
  int v7; // r6
  int v8; // r0
  double v10; // r4
  int v11; // r0
  double v12; // [sp+18h] [bp-14h]

  v7 = 0;
  while ( 1 )
  {
    v8 = *((_DWORD *)this + v7 + 4);
    if ( v8 != 0 )
      break;
    if ( ++v7 == 20 )
      return 0;
  }
  v10 = COERCE_DOUBLE(
          ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v8 + 20))(
            v8,
            *(_DWORD *)(*(_DWORD *)v8 + 20),
            LODWORD(a2),
            HIDWORD(a2),
            LODWORD(a3),
            HIDWORD(a3),
            LODWORD(a4),
            HIDWORD(a4),
            LODWORD(a5),
            HIDWORD(a5)));
  do
  {
    v11 = *((_DWORD *)this + v7 + 4);
    if ( v11 != 0 )
    {
      v12 = COERCE_DOUBLE(
              ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v11 + 20))(
                v11,
                *(_DWORD *)(*(_DWORD *)v11 + 20),
                LODWORD(a2),
                HIDWORD(a2),
                LODWORD(a3),
                HIDWORD(a3),
                LODWORD(a4),
                HIDWORD(a4),
                LODWORD(a5),
                HIDWORD(a5)));
      if ( v12 > v10 )
        v10 = v12;
    }
    ++v7;
  }
  while ( v7 != 20 );
  return *(_QWORD *)&v10;
}


//======================================================================
// anl::CImplicitCombiner::Max_get(double,double,double,double,double,double)
// address: 0x00320050   size: 0xB6 (182 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitCombiner::Max_get(
        anl::CImplicitCombiner *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  int v9; // r6
  int v10; // r0
  double v12; // r4
  int v13; // r0
  double v14; // [sp+28h] [bp-14h]

  v9 = 0;
  while ( 1 )
  {
    v10 = *((_DWORD *)this + v9 + 4);
    if ( v10 != 0 )
      break;
    if ( ++v9 == 20 )
      return 0;
  }
  v12 = COERCE_DOUBLE(
          ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v10 + 24))(
            v10,
            *(_DWORD *)(*(_DWORD *)v10 + 24),
            LODWORD(a2),
            HIDWORD(a2),
            LODWORD(a3),
            HIDWORD(a3),
            LODWORD(a4),
            HIDWORD(a4),
            LODWORD(a5),
            HIDWORD(a5),
            LODWORD(a6),
            HIDWORD(a6),
            LODWORD(a7),
            HIDWORD(a7)));
  do
  {
    v13 = *((_DWORD *)this + v9 + 4);
    if ( v13 != 0 )
    {
      v14 = COERCE_DOUBLE(
              ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v13 + 24))(
                v13,
                *(_DWORD *)(*(_DWORD *)v13 + 24),
                LODWORD(a2),
                HIDWORD(a2),
                LODWORD(a3),
                HIDWORD(a3),
                LODWORD(a4),
                HIDWORD(a4),
                LODWORD(a5),
                HIDWORD(a5),
                LODWORD(a6),
                HIDWORD(a6),
                LODWORD(a7),
                HIDWORD(a7)));
      if ( v14 > v12 )
        v12 = v14;
    }
    ++v9;
  }
  while ( v9 != 20 );
  return *(_QWORD *)&v12;
}


//======================================================================
// anl::CImplicitCombiner::Avg_get(double,double)
// address: 0x00320110   size: 0x84 (132 bytes)
//======================================================================
double __fastcall anl::CImplicitCombiner::Avg_get(anl::CImplicitCombiner *this, double a2, double a3)
{
  double v4; // r4
  double v5; // r6
  int v6; // r0
  int v8; // [sp+8h] [bp-14h]

  v8 = 0;
  v4 = 0.0;
  v5 = 0.0;
  do
  {
    v6 = *(_DWORD *)((char *)this + v8 + 16);
    if ( v6 != 0 )
    {
      v4 = v4
         + ((double (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v6 + 12))(
             v6,
             *(_DWORD *)(*(_DWORD *)v6 + 12),
             LODWORD(a2),
             HIDWORD(a2),
             LODWORD(a3),
             HIDWORD(a3));
      v5 = v5 + 1.0;
    }
    v8 += 4;
  }
  while ( v8 != 80 );
  if ( v5 == 0.0 )
    return 0.0;
  else
    return v4 / v5;
}


//======================================================================
// anl::CImplicitCombiner::get(double,double)
// address: 0x003201A8   size: 0x4C (76 bytes)
//======================================================================
double __fastcall anl::CImplicitCombiner::get(anl::CImplicitCombiner *this, double a2, double a3)
{
  double result; // r0

  switch ( *((_DWORD *)this + 24) )
  {
    case 0:
      result = COERCE_DOUBLE(anl::CImplicitCombiner::Add_get(this, a2, a3));
      break;
    case 1:
      result = COERCE_DOUBLE(anl::CImplicitCombiner::Mult_get(this, a2, a3));
      break;
    case 2:
      result = COERCE_DOUBLE(anl::CImplicitCombiner::Max_get(this, a2, a3));
      break;
    case 3:
      result = COERCE_DOUBLE(anl::CImplicitCombiner::Min_get(this, a2, a3));
      break;
    case 4:
      result = anl::CImplicitCombiner::Avg_get(this, a2, a3);
      break;
    default:
      result = 0.0;
      break;
  }
  return result;
}


//======================================================================
// anl::CImplicitCombiner::Avg_get(double,double,double)
// address: 0x00320200   size: 0x8C (140 bytes)
//======================================================================
double __fastcall anl::CImplicitCombiner::Avg_get(anl::CImplicitCombiner *this, double a2, double a3, double a4)
{
  double v5; // r4
  double v6; // r6
  int v7; // r0
  int v9; // [sp+10h] [bp-14h]

  v9 = 0;
  v5 = 0.0;
  v6 = 0.0;
  do
  {
    v7 = *(_DWORD *)((char *)this + v9 + 16);
    if ( v7 != 0 )
    {
      v5 = v5
         + ((double (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v7 + 16))(
             v7,
             *(_DWORD *)(*(_DWORD *)v7 + 16),
             LODWORD(a2),
             HIDWORD(a2),
             LODWORD(a3),
             HIDWORD(a3),
             LODWORD(a4),
             HIDWORD(a4));
      v6 = v6 + 1.0;
    }
    v9 += 4;
  }
  while ( v9 != 80 );
  if ( v6 == 0.0 )
    return 0.0;
  else
    return v5 / v6;
}


//======================================================================
// anl::CImplicitCombiner::get(double,double,double)
// address: 0x003202A0   size: 0x56 (86 bytes)
//======================================================================
double __fastcall anl::CImplicitCombiner::get(anl::CImplicitCombiner *this, double a2, double a3, double a4)
{
  double result; // r0

  switch ( *((_DWORD *)this + 24) )
  {
    case 0:
      result = COERCE_DOUBLE(anl::CImplicitCombiner::Add_get(this, a2, a3, a4));
      break;
    case 1:
      result = COERCE_DOUBLE(anl::CImplicitCombiner::Mult_get(this, a2, a3, a4));
      break;
    case 2:
      result = COERCE_DOUBLE(anl::CImplicitCombiner::Max_get(this, a2, a3, a4));
      break;
    case 3:
      result = COERCE_DOUBLE(anl::CImplicitCombiner::Min_get(this, a2, a3, a4));
      break;
    case 4:
      result = anl::CImplicitCombiner::Avg_get(this, a2, a3, a4);
      break;
    default:
      result = 0.0;
      break;
  }
  return result;
}


//======================================================================
// anl::CImplicitCombiner::Avg_get(double,double,double,double)
// address: 0x00320300   size: 0x94 (148 bytes)
//======================================================================
double __fastcall anl::CImplicitCombiner::Avg_get(
        anl::CImplicitCombiner *this,
        double a2,
        double a3,
        double a4,
        double a5)
{
  double v6; // r4
  double v7; // r6
  int v8; // r0
  int v10; // [sp+18h] [bp-14h]

  v10 = 0;
  v6 = 0.0;
  v7 = 0.0;
  do
  {
    v8 = *(_DWORD *)((char *)this + v10 + 16);
    if ( v8 != 0 )
    {
      v6 = v6
         + ((double (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v8 + 20))(
             v8,
             *(_DWORD *)(*(_DWORD *)v8 + 20),
             LODWORD(a2),
             HIDWORD(a2),
             LODWORD(a3),
             HIDWORD(a3),
             LODWORD(a4),
             HIDWORD(a4),
             LODWORD(a5),
             HIDWORD(a5));
      v7 = v7 + 1.0;
    }
    v10 += 4;
  }
  while ( v10 != 80 );
  if ( v7 == 0.0 )
    return 0.0;
  else
    return v6 / v7;
}


//======================================================================
// anl::CImplicitCombiner::get(double,double,double,double)
// address: 0x003203A8   size: 0x5E (94 bytes)
//======================================================================
double __fastcall anl::CImplicitCombiner::get(anl::CImplicitCombiner *this, double a2, double a3, double a4, double a5)
{
  double result; // r0

  switch ( *((_DWORD *)this + 24) )
  {
    case 0:
      result = COERCE_DOUBLE(anl::CImplicitCombiner::Add_get(this, a2, a3, a4, a5));
      break;
    case 1:
      result = COERCE_DOUBLE(anl::CImplicitCombiner::Mult_get(this, a2, a3, a4, a5));
      break;
    case 2:
      result = COERCE_DOUBLE(anl::CImplicitCombiner::Max_get(this, a2, a3, a4, a5));
      break;
    case 3:
      result = COERCE_DOUBLE(anl::CImplicitCombiner::Min_get(this, a2, a3, a4, a5));
      break;
    case 4:
      result = anl::CImplicitCombiner::Avg_get(this, a2, a3, a4, a5);
      break;
    default:
      result = 0.0;
      break;
  }
  return result;
}


//======================================================================
// anl::CImplicitCombiner::Avg_get(double,double,double,double,double,double)
// address: 0x00320410   size: 0xA4 (164 bytes)
//======================================================================
double __fastcall anl::CImplicitCombiner::Avg_get(
        anl::CImplicitCombiner *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  double v8; // r4
  double v9; // r6
  int v10; // r0
  int v12; // [sp+28h] [bp-14h]

  v12 = 0;
  v8 = 0.0;
  v9 = 0.0;
  do
  {
    v10 = *(_DWORD *)((char *)this + v12 + 16);
    if ( v10 != 0 )
    {
      v8 = v8
         + ((double (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v10 + 24))(
             v10,
             *(_DWORD *)(*(_DWORD *)v10 + 24),
             LODWORD(a2),
             HIDWORD(a2),
             LODWORD(a3),
             HIDWORD(a3),
             LODWORD(a4),
             HIDWORD(a4),
             LODWORD(a5),
             HIDWORD(a5),
             LODWORD(a6),
             HIDWORD(a6),
             LODWORD(a7),
             HIDWORD(a7));
      v9 = v9 + 1.0;
    }
    v12 += 4;
  }
  while ( v12 != 80 );
  if ( v9 == 0.0 )
    return 0.0;
  else
    return v8 / v9;
}


//======================================================================
// anl::CImplicitCombiner::get(double,double,double,double,double,double)
// address: 0x003204C8   size: 0x6E (110 bytes)
//======================================================================
double __fastcall anl::CImplicitCombiner::get(
        anl::CImplicitCombiner *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  double result; // r0

  switch ( *((_DWORD *)this + 24) )
  {
    case 0:
      result = COERCE_DOUBLE(anl::CImplicitCombiner::Add_get(this, a2, a3, a4, a5, a6, a7));
      break;
    case 1:
      result = COERCE_DOUBLE(anl::CImplicitCombiner::Mult_get(this, a2, a3, a4, a5, a6, a7));
      break;
    case 2:
      result = COERCE_DOUBLE(anl::CImplicitCombiner::Max_get(this, a2, a3, a4, a5, a6, a7));
      break;
    case 3:
      result = COERCE_DOUBLE(anl::CImplicitCombiner::Min_get(this, a2, a3, a4, a5, a6, a7));
      break;
    case 4:
      result = anl::CImplicitCombiner::Avg_get(this, a2, a3, a4, a5, a6, a7);
      break;
    default:
      result = 0.0;
      break;
  }
  return result;
}

