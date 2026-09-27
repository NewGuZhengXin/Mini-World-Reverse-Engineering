// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CImplicitGain

//======================================================================
// anl::CImplicitGain::~CImplicitGain()
// address: 0x00327D90   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl13CImplicitGainD1Ev'
void __fastcall anl::CImplicitGain::~CImplicitGain(anl::CImplicitGain *this)
{
  *(_DWORD *)this = &off_462280;
}


//======================================================================
// anl::CImplicitGain::~CImplicitGain()
// address: 0x00327DA0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall anl::CImplicitGain::~CImplicitGain(anl::CImplicitGain *this)
{
  anl::CImplicitGain::~CImplicitGain(this);
  operator delete(this);
}


//======================================================================
// anl::CImplicitGain::get(double,double)
// address: 0x00327E98   size: 0x58 (88 bytes)
//======================================================================
double __fastcall anl::CImplicitGain::get(anl::CImplicitGain *this, double a2, double a3)
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
  return gain(v8, v10);
}


//======================================================================
// anl::CImplicitGain::get(double,double,double)
// address: 0x00327EF0   size: 0x66 (102 bytes)
//======================================================================
double __fastcall anl::CImplicitGain::get(anl::CImplicitGain *this, double a2, double a3, double a4)
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
  return gain(v9, v7);
}


//======================================================================
// anl::CImplicitGain::get(double,double,double,double)
// address: 0x00327F56   size: 0x76 (118 bytes)
//======================================================================
double __fastcall anl::CImplicitGain::get(anl::CImplicitGain *this, double a2, double a3, double a4, double a5)
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
  return gain(v10, v8);
}


//======================================================================
// anl::CImplicitGain::get(double,double,double,double,double,double)
// address: 0x00327FCC   size: 0x96 (150 bytes)
//======================================================================
double __fastcall anl::CImplicitGain::get(
        anl::CImplicitGain *this,
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
  return gain(v12, v10);
}


//======================================================================
// anl::CImplicitGain::CImplicitGain(double)
// address: 0x00328068   size: 0x28 (40 bytes)
//======================================================================
// Alternative name is '_ZN3anl13CImplicitGainC1Ed'
int __fastcall anl::CImplicitGain::CImplicitGain(int this, double a2)
{
  *(_DWORD *)(this + 8) = -350469331;
  *(_DWORD *)(this + 12) = 1058682594;
  *(_DWORD *)this = &off_463930;
  *(_DWORD *)(this + 16) = 0;
  *(_DWORD *)(this + 20) = 0;
  *(_DWORD *)(this + 24) = 0;
  *(double *)(this + 32) = a2;
  *(_DWORD *)(this + 40) = 0;
  return this;
}


//======================================================================
// anl::CImplicitGain::setSource(double)
// address: 0x003280A8   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitGain::setSource(int this, double a2)
{
  *(_DWORD *)(this + 24) = 0;
  *(double *)(this + 16) = a2;
  return this;
}


//======================================================================
// anl::CImplicitGain::setSource(anl::CImplicitModuleBase *)
// address: 0x003280B2   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitGain::setSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 24) = a2;
  return this;
}


//======================================================================
// anl::CImplicitGain::setGain(double)
// address: 0x003280B6   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitGain::setGain(int this, double a2)
{
  *(_DWORD *)(this + 40) = 0;
  *(double *)(this + 32) = a2;
  return this;
}


//======================================================================
// anl::CImplicitGain::setGain(anl::CImplicitModuleBase *)
// address: 0x003280C0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitGain::setGain(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 40) = a2;
  return this;
}

