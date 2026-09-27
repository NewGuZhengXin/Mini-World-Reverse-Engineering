// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CImplicitSawtooth

//======================================================================
// anl::CImplicitSawtooth::~CImplicitSawtooth()
// address: 0x0032BD2C   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl17CImplicitSawtoothD1Ev'
void __fastcall anl::CImplicitSawtooth::~CImplicitSawtooth(anl::CImplicitSawtooth *this)
{
  *(_DWORD *)this = &off_462280;
}


//======================================================================
// anl::CImplicitSawtooth::~CImplicitSawtooth()
// address: 0x0032BD3C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall anl::CImplicitSawtooth::~CImplicitSawtooth(anl::CImplicitSawtooth *this)
{
  anl::CImplicitSawtooth::~CImplicitSawtooth(this);
  operator delete(this);
}


//======================================================================
// anl::CImplicitSawtooth::get(double,double,double,double,double,double)
// address: 0x0032BD50   size: 0xBE (190 bytes)
//======================================================================
double __fastcall anl::CImplicitSawtooth::get(
        anl::CImplicitSawtooth *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  int v9; // r0
  double v10; // r4
  int v11; // r0
  double v12; // r2
  double v13; // r4
  double v14; // r0

  v9 = *((_DWORD *)this + 6);
  if ( v9 != 0 )
    v10 = COERCE_DOUBLE(
            ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v9 + 24))(
              v9,
              *(_DWORD *)(*(_DWORD *)v9 + 24),
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
  else
    v10 = *((double *)this + 2);
  v11 = *((_DWORD *)this + 10);
  if ( v11 != 0 )
    v12 = COERCE_DOUBLE(
            ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v11 + 24))(
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
              HIDWORD(a7)));
  else
    v12 = *((double *)this + 4);
  v13 = v10 / v12;
  v14 = j_floor(v13 + 0.5);
  return v13 - v14 + v13 - v14;
}


//======================================================================
// anl::CImplicitSawtooth::get(double,double)
// address: 0x0032BE18   size: 0x80 (128 bytes)
//======================================================================
double __fastcall anl::CImplicitSawtooth::get(anl::CImplicitSawtooth *this, double a2, double a3)
{
  int v5; // r0
  int v7; // r0
  double v8; // r2
  double v9; // r4
  double v10; // r0
  double v12; // [sp+8h] [bp-8h]

  v5 = *((_DWORD *)this + 6);
  if ( v5 != 0 )
    v12 = COERCE_DOUBLE(
            ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v5 + 12))(
              v5,
              *(_DWORD *)(*(_DWORD *)v5 + 12),
              LODWORD(a2),
              HIDWORD(a2),
              LODWORD(a3),
              HIDWORD(a3),
              LODWORD(a2),
              HIDWORD(a2)));
  else
    v12 = *((double *)this + 2);
  v7 = *((_DWORD *)this + 10);
  if ( v7 != 0 )
    v8 = COERCE_DOUBLE(
           ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v7 + 12))(
             v7,
             *(_DWORD *)(*(_DWORD *)v7 + 12),
             LODWORD(a2),
             HIDWORD(a2),
             LODWORD(a3),
             HIDWORD(a3)));
  else
    v8 = *((double *)this + 4);
  v9 = v12 / v8;
  v10 = j_floor(v12 / v8 + 0.5);
  return v9 - v10 + v9 - v10;
}


//======================================================================
// anl::CImplicitSawtooth::get(double,double,double)
// address: 0x0032BEA0   size: 0x8E (142 bytes)
//======================================================================
double __fastcall anl::CImplicitSawtooth::get(anl::CImplicitSawtooth *this, double a2, double a3, double a4)
{
  int v6; // r0
  double v7; // r4
  int v8; // r0
  double v9; // r2
  double v10; // r4
  double v11; // r0

  v6 = *((_DWORD *)this + 6);
  if ( v6 != 0 )
    v7 = COERCE_DOUBLE(
           ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v6 + 16))(
             v6,
             *(_DWORD *)(*(_DWORD *)v6 + 16),
             LODWORD(a2),
             HIDWORD(a2),
             LODWORD(a3),
             HIDWORD(a3),
             LODWORD(a4),
             HIDWORD(a4)));
  else
    v7 = *((double *)this + 2);
  v8 = *((_DWORD *)this + 10);
  if ( v8 != 0 )
    v9 = COERCE_DOUBLE(
           ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v8 + 16))(
             v8,
             *(_DWORD *)(*(_DWORD *)v8 + 16),
             LODWORD(a2),
             HIDWORD(a2),
             LODWORD(a3),
             HIDWORD(a3),
             LODWORD(a4),
             HIDWORD(a4)));
  else
    v9 = *((double *)this + 4);
  v10 = v7 / v9;
  v11 = j_floor(v10 + 0.5);
  return v10 - v11 + v10 - v11;
}


//======================================================================
// anl::CImplicitSawtooth::get(double,double,double,double)
// address: 0x0032BF38   size: 0x9E (158 bytes)
//======================================================================
double __fastcall anl::CImplicitSawtooth::get(anl::CImplicitSawtooth *this, double a2, double a3, double a4, double a5)
{
  int v7; // r0
  double v8; // r4
  int v9; // r0
  double v10; // r2
  double v11; // r4
  double v12; // r0

  v7 = *((_DWORD *)this + 6);
  if ( v7 != 0 )
    v8 = COERCE_DOUBLE(
           ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v7 + 20))(
             v7,
             *(_DWORD *)(*(_DWORD *)v7 + 20),
             LODWORD(a2),
             HIDWORD(a2),
             LODWORD(a3),
             HIDWORD(a3),
             LODWORD(a4),
             HIDWORD(a4),
             LODWORD(a5),
             HIDWORD(a5)));
  else
    v8 = *((double *)this + 2);
  v9 = *((_DWORD *)this + 10);
  if ( v9 != 0 )
    v10 = COERCE_DOUBLE(
            ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v9 + 20))(
              v9,
              *(_DWORD *)(*(_DWORD *)v9 + 20),
              LODWORD(a2),
              HIDWORD(a2),
              LODWORD(a3),
              HIDWORD(a3),
              LODWORD(a4),
              HIDWORD(a4),
              LODWORD(a5),
              HIDWORD(a5)));
  else
    v10 = *((double *)this + 4);
  v11 = v8 / v10;
  v12 = j_floor(v11 + 0.5);
  return v11 - v12 + v11 - v12;
}


//======================================================================
// anl::CImplicitSawtooth::CImplicitSawtooth(double)
// address: 0x0032BFE0   size: 0x28 (40 bytes)
//======================================================================
// Alternative name is '_ZN3anl17CImplicitSawtoothC1Ed'
int __fastcall anl::CImplicitSawtooth::CImplicitSawtooth(int this, double a2)
{
  *(_DWORD *)(this + 8) = -350469331;
  *(_DWORD *)(this + 12) = 1058682594;
  *(_DWORD *)this = &off_463AB0;
  *(_DWORD *)(this + 16) = 0;
  *(_DWORD *)(this + 20) = 0;
  *(_DWORD *)(this + 24) = 0;
  *(double *)(this + 32) = a2;
  *(_DWORD *)(this + 40) = 0;
  return this;
}


//======================================================================
// anl::CImplicitSawtooth::setSource(anl::CImplicitModuleBase *)
// address: 0x0032C020   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitSawtooth::setSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 24) = a2;
  return this;
}


//======================================================================
// anl::CImplicitSawtooth::setSource(double)
// address: 0x0032C024   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitSawtooth::setSource(int this, double a2)
{
  *(_DWORD *)(this + 24) = 0;
  *(double *)(this + 16) = a2;
  return this;
}


//======================================================================
// anl::CImplicitSawtooth::setPeriod(anl::CImplicitModuleBase *)
// address: 0x0032C02E   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitSawtooth::setPeriod(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 40) = a2;
  return this;
}


//======================================================================
// anl::CImplicitSawtooth::setPeriod(double)
// address: 0x0032C032   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitSawtooth::setPeriod(int this, double a2)
{
  *(_DWORD *)(this + 40) = 0;
  *(double *)(this + 32) = a2;
  return this;
}

