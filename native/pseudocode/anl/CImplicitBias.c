// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CImplicitBias

//======================================================================
// anl::CImplicitBias::~CImplicitBias()
// address: 0x00320540   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl13CImplicitBiasD1Ev'
void __fastcall anl::CImplicitBias::~CImplicitBias(anl::CImplicitBias *this)
{
  *(_DWORD *)this = &off_462280;
}


//======================================================================
// anl::CImplicitBias::~CImplicitBias()
// address: 0x00320550   size: 0x12 (18 bytes)
//======================================================================
void __fastcall anl::CImplicitBias::~CImplicitBias(anl::CImplicitBias *this)
{
  anl::CImplicitBias::~CImplicitBias(this);
  operator delete(this);
}


//======================================================================
// anl::CImplicitBias::get(double,double)
// address: 0x00320590   size: 0x58 (88 bytes)
//======================================================================
double __fastcall anl::CImplicitBias::get(anl::CImplicitBias *this, double a2, double a3)
{
  int v5; // r0
  int v7; // r0
  double v8; // r0
  double v10; // [sp+8h] [bp-8h]

  v5 = *((_DWORD *)this + 6);
  if ( v5 != 0 )
    v10 = COERCE_DOUBLE(
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
    v10 = *((double *)this + 2);
  v7 = *((_DWORD *)this + 10);
  if ( v7 != 0 )
    LODWORD(v8) = (*(int (__fastcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v7 + 12))(
                    v7,
                    *(_DWORD *)(*(_DWORD *)v7 + 12),
                    LODWORD(a2),
                    HIDWORD(a2),
                    LODWORD(a3),
                    HIDWORD(a3),
                    LODWORD(v10),
                    HIDWORD(v10));
  else
    v8 = *((double *)this + 4);
  return bias(v8, v10);
}


//======================================================================
// anl::CImplicitBias::get(double,double,double)
// address: 0x003205E8   size: 0x66 (102 bytes)
//======================================================================
double __fastcall anl::CImplicitBias::get(anl::CImplicitBias *this, double a2, double a3, double a4)
{
  int v6; // r0
  double v7; // r4
  int v8; // r0
  double v9; // r0

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
    LODWORD(v9) = (*(int (__fastcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v8 + 16))(
                    v8,
                    *(_DWORD *)(*(_DWORD *)v8 + 16),
                    LODWORD(a2),
                    HIDWORD(a2),
                    LODWORD(a3),
                    HIDWORD(a3),
                    LODWORD(a4),
                    HIDWORD(a4));
  else
    v9 = *((double *)this + 4);
  return bias(v9, v7);
}


//======================================================================
// anl::CImplicitBias::get(double,double,double,double)
// address: 0x0032064E   size: 0x76 (118 bytes)
//======================================================================
double __fastcall anl::CImplicitBias::get(anl::CImplicitBias *this, double a2, double a3, double a4, double a5)
{
  int v7; // r0
  double v8; // r4
  int v9; // r0
  double v10; // r0

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
    LODWORD(v10) = (*(int (__fastcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v9 + 20))(
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
  else
    v10 = *((double *)this + 4);
  return bias(v10, v8);
}


//======================================================================
// anl::CImplicitBias::get(double,double,double,double,double,double)
// address: 0x003206C4   size: 0x96 (150 bytes)
//======================================================================
double __fastcall anl::CImplicitBias::get(
        anl::CImplicitBias *this,
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
  double v12; // r0

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
    LODWORD(v12) = (*(int (__fastcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v11 + 24))(
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
  else
    v12 = *((double *)this + 4);
  return bias(v12, v10);
}


//======================================================================
// anl::CImplicitBias::CImplicitBias(double)
// address: 0x00320760   size: 0x28 (40 bytes)
//======================================================================
// Alternative name is '_ZN3anl13CImplicitBiasC2Ed'
int __fastcall anl::CImplicitBias::CImplicitBias(int this, double a2)
{
  *(_DWORD *)(this + 8) = -350469331;
  *(_DWORD *)(this + 12) = 1058682594;
  *(_DWORD *)this = &off_463710;
  *(_DWORD *)(this + 16) = 0;
  *(_DWORD *)(this + 20) = 0;
  *(_DWORD *)(this + 24) = 0;
  *(double *)(this + 32) = a2;
  *(_DWORD *)(this + 40) = 0;
  return this;
}


//======================================================================
// anl::CImplicitBias::setSource(anl::CImplicitModuleBase *)
// address: 0x003207A0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitBias::setSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 24) = a2;
  return this;
}


//======================================================================
// anl::CImplicitBias::setSource(double)
// address: 0x003207A4   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitBias::setSource(int this, double a2)
{
  *(_DWORD *)(this + 24) = 0;
  *(double *)(this + 16) = a2;
  return this;
}


//======================================================================
// anl::CImplicitBias::setBias(double)
// address: 0x003207AE   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitBias::setBias(int this, double a2)
{
  *(_DWORD *)(this + 40) = 0;
  *(double *)(this + 32) = a2;
  return this;
}


//======================================================================
// anl::CImplicitBias::setBias(anl::CImplicitModuleBase *)
// address: 0x003207B8   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitBias::setBias(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 40) = a2;
  return this;
}

