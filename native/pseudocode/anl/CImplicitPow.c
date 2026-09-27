// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CImplicitPow

//======================================================================
// anl::CImplicitPow::~CImplicitPow()
// address: 0x0032FFB4   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl12CImplicitPowD1Ev'
void __fastcall anl::CImplicitPow::~CImplicitPow(anl::CImplicitPow *this)
{
  *(_DWORD *)this = &off_462280;
}


//======================================================================
// anl::CImplicitPow::~CImplicitPow()
// address: 0x0032FFC4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall anl::CImplicitPow::~CImplicitPow(anl::CImplicitPow *this)
{
  anl::CImplicitPow::~CImplicitPow(this);
  operator delete(this);
}


//======================================================================
// anl::CImplicitPow::get(double,double,double,double,double,double)
// address: 0x0032FFD6   size: 0x9A (154 bytes)
//======================================================================
double __fastcall anl::CImplicitPow::get(
        anl::CImplicitPow *this,
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
  return j_pow(v10, v12);
}


//======================================================================
// anl::CImplicitPow::get(double,double)
// address: 0x00330070   size: 0x5C (92 bytes)
//======================================================================
double __fastcall anl::CImplicitPow::get(anl::CImplicitPow *this, double a2, double a3)
{
  int v5; // r0
  int v7; // r0
  double v8; // r2
  double x; // [sp+8h] [bp-8h]

  v5 = *((_DWORD *)this + 6);
  if ( v5 != 0 )
    x = COERCE_DOUBLE(
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
    x = *((double *)this + 2);
  v7 = *((_DWORD *)this + 10);
  if ( v7 != 0 )
    v8 = COERCE_DOUBLE(
           ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v7 + 12))(
             v7,
             *(_DWORD *)(*(_DWORD *)v7 + 12),
             LODWORD(a2),
             HIDWORD(a2),
             LODWORD(a3),
             HIDWORD(a3),
             LODWORD(x),
             HIDWORD(x)));
  else
    v8 = *((double *)this + 4);
  return j_pow(x, v8);
}


//======================================================================
// anl::CImplicitPow::get(double,double,double)
// address: 0x003300CC   size: 0x6A (106 bytes)
//======================================================================
double __fastcall anl::CImplicitPow::get(anl::CImplicitPow *this, double a2, double a3, double a4)
{
  int v6; // r0
  double v7; // r4
  int v8; // r0
  double v9; // r2

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
  return j_pow(v7, v9);
}


//======================================================================
// anl::CImplicitPow::get(double,double,double,double)
// address: 0x00330136   size: 0x7A (122 bytes)
//======================================================================
double __fastcall anl::CImplicitPow::get(anl::CImplicitPow *this, double a2, double a3, double a4, double a5)
{
  int v7; // r0
  double v8; // r4
  int v9; // r0
  double v10; // r2

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
  return j_pow(v8, v10);
}


//======================================================================
// anl::CImplicitPow::CImplicitPow(void)
// address: 0x003301B0   size: 0x2A (42 bytes)
//======================================================================
// Alternative name is '_ZN3anl12CImplicitPowC1Ev'
_DWORD *__fastcall anl::CImplicitPow::CImplicitPow(_DWORD *this)
{
  *(this + 2) = -350469331;
  *(this + 3) = 1058682594;
  *(this + 6) = 0;
  *(this + 10) = 0;
  *this = &off_463C28;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 8) = 0;
  *(this + 9) = 1072693248;
  return this;
}


//======================================================================
// anl::CImplicitPow::setSource(double)
// address: 0x00330200   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitPow::setSource(int this, double a2)
{
  *(_DWORD *)(this + 24) = 0;
  *(double *)(this + 16) = a2;
  return this;
}


//======================================================================
// anl::CImplicitPow::setSource(anl::CImplicitModuleBase *)
// address: 0x0033020A   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitPow::setSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 24) = a2;
  return this;
}


//======================================================================
// anl::CImplicitPow::setPower(double)
// address: 0x0033020E   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitPow::setPower(int this, double a2)
{
  *(_DWORD *)(this + 40) = 0;
  *(double *)(this + 32) = a2;
  return this;
}


//======================================================================
// anl::CImplicitPow::setPower(anl::CImplicitModuleBase *)
// address: 0x00330218   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitPow::setPower(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 40) = a2;
  return this;
}

