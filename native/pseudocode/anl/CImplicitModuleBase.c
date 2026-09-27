// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CImplicitModuleBase

//======================================================================
// anl::CImplicitModuleBase::~CImplicitModuleBase()
// address: 0x002EFFA4   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl19CImplicitModuleBaseD1Ev'
void __fastcall anl::CImplicitModuleBase::~CImplicitModuleBase(anl::CImplicitModuleBase *this)
{
  *(_DWORD *)this = &off_462280;
}


//======================================================================
// anl::CImplicitModuleBase::setSeed(unsigned int)
// address: 0x002EFFB4   size: 0x2 (2 bytes)
//======================================================================
void __fastcall anl::CImplicitModuleBase::setSeed(anl::CImplicitModuleBase *this, unsigned int a2)
{
  ;
}


//======================================================================
// anl::CImplicitModuleBase::~CImplicitModuleBase()
// address: 0x002F0028   size: 0x16 (22 bytes)
//======================================================================
void __fastcall anl::CImplicitModuleBase::~CImplicitModuleBase(anl::CImplicitModuleBase *this)
{
  *(_DWORD *)this = &off_462280;
  operator delete(this);
}


//======================================================================
// anl::CImplicitModuleBase::get_dx(double,double)
// address: 0x0031F0D0   size: 0x66 (102 bytes)
//======================================================================
double __fastcall anl::CImplicitModuleBase::get_dx(anl::CImplicitModuleBase *this, double a2, double a3)
{
  double v6; // r0

  v6 = COERCE_DOUBLE(
         ((__int64 (__fastcall *)(anl::CImplicitModuleBase *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)this + 12))(
           this,
           *(_DWORD *)(*(_DWORD *)this + 12),
           COERCE_UNSIGNED_INT64(a2 - *((double *)this + 1)),
           HIDWORD(COERCE_UNSIGNED_INT64(a2 - *((double *)this + 1))),
           LODWORD(a3),
           HIDWORD(a3)));
  return (v6
        - COERCE_DOUBLE(
            ((__int64 (__fastcall *)(anl::CImplicitModuleBase *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)this + 12))(
              this,
              *(_DWORD *)(*(_DWORD *)this + 12),
              COERCE_UNSIGNED_INT64(a2 + *((double *)this + 1)),
              HIDWORD(COERCE_UNSIGNED_INT64(a2 + *((double *)this + 1))),
              LODWORD(a3),
              HIDWORD(a3))))
       / *((double *)this + 1);
}


//======================================================================
// anl::CImplicitModuleBase::get_dy(double,double)
// address: 0x0031F136   size: 0x5E (94 bytes)
//======================================================================
double __fastcall anl::CImplicitModuleBase::get_dy(anl::CImplicitModuleBase *this, double a2, double a3)
{
  double v5; // r0

  v5 = COERCE_DOUBLE(
         ((__int64 (__fastcall *)(anl::CImplicitModuleBase *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)this + 12))(
           this,
           *(_DWORD *)(*(_DWORD *)this + 12),
           LODWORD(a2),
           HIDWORD(a2),
           COERCE_UNSIGNED_INT64(a3 - *((double *)this + 1)),
           HIDWORD(COERCE_UNSIGNED_INT64(a3 - *((double *)this + 1)))));
  return (v5
        - COERCE_DOUBLE(
            ((__int64 (__fastcall *)(anl::CImplicitModuleBase *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)this + 12))(
              this,
              *(_DWORD *)(*(_DWORD *)this + 12),
              LODWORD(a2),
              HIDWORD(a2),
              COERCE_UNSIGNED_INT64(a3 + *((double *)this + 1)),
              HIDWORD(COERCE_UNSIGNED_INT64(a3 + *((double *)this + 1))))))
       / *((double *)this + 1);
}


//======================================================================
// anl::CImplicitModuleBase::get_dx(double,double,double)
// address: 0x0031F194   size: 0x76 (118 bytes)
//======================================================================
double __fastcall anl::CImplicitModuleBase::get_dx(anl::CImplicitModuleBase *this, double a2, double a3, double a4)
{
  double v6; // r0

  v6 = COERCE_DOUBLE(
         ((__int64 (__fastcall *)(anl::CImplicitModuleBase *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)this + 16))(
           this,
           *(_DWORD *)(*(_DWORD *)this + 16),
           COERCE_UNSIGNED_INT64(a2 - *((double *)this + 1)),
           HIDWORD(COERCE_UNSIGNED_INT64(a2 - *((double *)this + 1))),
           LODWORD(a3),
           HIDWORD(a3),
           LODWORD(a4),
           HIDWORD(a4)));
  return (v6
        - COERCE_DOUBLE(
            ((__int64 (__fastcall *)(anl::CImplicitModuleBase *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)this + 16))(
              this,
              *(_DWORD *)(*(_DWORD *)this + 16),
              COERCE_UNSIGNED_INT64(a2 + *((double *)this + 1)),
              HIDWORD(COERCE_UNSIGNED_INT64(a2 + *((double *)this + 1))),
              LODWORD(a3),
              HIDWORD(a3),
              LODWORD(a4),
              HIDWORD(a4))))
       / *((double *)this + 1);
}


//======================================================================
// anl::CImplicitModuleBase::get_dy(double,double,double)
// address: 0x0031F20A   size: 0x6E (110 bytes)
//======================================================================
double __fastcall anl::CImplicitModuleBase::get_dy(anl::CImplicitModuleBase *this, double a2, double a3, double a4)
{
  double v6; // r0

  v6 = COERCE_DOUBLE(
         ((__int64 (__fastcall *)(anl::CImplicitModuleBase *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)this + 16))(
           this,
           *(_DWORD *)(*(_DWORD *)this + 16),
           LODWORD(a2),
           HIDWORD(a2),
           COERCE_UNSIGNED_INT64(a3 - *((double *)this + 1)),
           HIDWORD(COERCE_UNSIGNED_INT64(a3 - *((double *)this + 1))),
           LODWORD(a4),
           HIDWORD(a4)));
  return (v6
        - COERCE_DOUBLE(
            ((__int64 (__fastcall *)(anl::CImplicitModuleBase *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)this + 16))(
              this,
              *(_DWORD *)(*(_DWORD *)this + 16),
              LODWORD(a2),
              HIDWORD(a2),
              COERCE_UNSIGNED_INT64(a3 + *((double *)this + 1)),
              HIDWORD(COERCE_UNSIGNED_INT64(a3 + *((double *)this + 1))),
              LODWORD(a4),
              HIDWORD(a4))))
       / *((double *)this + 1);
}


//======================================================================
// anl::CImplicitModuleBase::get_dz(double,double,double)
// address: 0x0031F278   size: 0x6E (110 bytes)
//======================================================================
double __fastcall anl::CImplicitModuleBase::get_dz(anl::CImplicitModuleBase *this, double a2, double a3, double a4)
{
  double v6; // r0

  v6 = COERCE_DOUBLE(
         ((__int64 (__fastcall *)(anl::CImplicitModuleBase *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)this + 16))(
           this,
           *(_DWORD *)(*(_DWORD *)this + 16),
           LODWORD(a2),
           HIDWORD(a2),
           LODWORD(a3),
           HIDWORD(a3),
           COERCE_UNSIGNED_INT64(a4 - *((double *)this + 1)),
           HIDWORD(COERCE_UNSIGNED_INT64(a4 - *((double *)this + 1)))));
  return (v6
        - COERCE_DOUBLE(
            ((__int64 (__fastcall *)(anl::CImplicitModuleBase *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)this + 16))(
              this,
              *(_DWORD *)(*(_DWORD *)this + 16),
              LODWORD(a2),
              HIDWORD(a2),
              LODWORD(a3),
              HIDWORD(a3),
              COERCE_UNSIGNED_INT64(a4 + *((double *)this + 1)),
              HIDWORD(COERCE_UNSIGNED_INT64(a4 + *((double *)this + 1))))))
       / *((double *)this + 1);
}


//======================================================================
// anl::CImplicitModuleBase::get_dx(double,double,double,double)
// address: 0x0031F2E6   size: 0x86 (134 bytes)
//======================================================================
double __fastcall anl::CImplicitModuleBase::get_dx(
        anl::CImplicitModuleBase *this,
        double a2,
        double a3,
        double a4,
        double a5)
{
  double v7; // r0

  v7 = COERCE_DOUBLE(
         ((__int64 (__fastcall *)(anl::CImplicitModuleBase *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)this + 20))(
           this,
           *(_DWORD *)(*(_DWORD *)this + 20),
           COERCE_UNSIGNED_INT64(a2 - *((double *)this + 1)),
           HIDWORD(COERCE_UNSIGNED_INT64(a2 - *((double *)this + 1))),
           LODWORD(a3),
           HIDWORD(a3),
           LODWORD(a4),
           HIDWORD(a4),
           LODWORD(a5),
           HIDWORD(a5)));
  return (v7
        - COERCE_DOUBLE(
            ((__int64 (__fastcall *)(anl::CImplicitModuleBase *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)this + 20))(
              this,
              *(_DWORD *)(*(_DWORD *)this + 20),
              COERCE_UNSIGNED_INT64(a2 + *((double *)this + 1)),
              HIDWORD(COERCE_UNSIGNED_INT64(a2 + *((double *)this + 1))),
              LODWORD(a3),
              HIDWORD(a3),
              LODWORD(a4),
              HIDWORD(a4),
              LODWORD(a5),
              HIDWORD(a5))))
       / *((double *)this + 1);
}


//======================================================================
// anl::CImplicitModuleBase::get_dy(double,double,double,double)
// address: 0x0031F36C   size: 0x7E (126 bytes)
//======================================================================
double __fastcall anl::CImplicitModuleBase::get_dy(
        anl::CImplicitModuleBase *this,
        double a2,
        double a3,
        double a4,
        double a5)
{
  double v7; // r0

  v7 = COERCE_DOUBLE(
         ((__int64 (__fastcall *)(anl::CImplicitModuleBase *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)this + 20))(
           this,
           *(_DWORD *)(*(_DWORD *)this + 20),
           LODWORD(a2),
           HIDWORD(a2),
           COERCE_UNSIGNED_INT64(a3 - *((double *)this + 1)),
           HIDWORD(COERCE_UNSIGNED_INT64(a3 - *((double *)this + 1))),
           LODWORD(a4),
           HIDWORD(a4),
           LODWORD(a5),
           HIDWORD(a5)));
  return (v7
        - COERCE_DOUBLE(
            ((__int64 (__fastcall *)(anl::CImplicitModuleBase *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)this + 20))(
              this,
              *(_DWORD *)(*(_DWORD *)this + 20),
              LODWORD(a2),
              HIDWORD(a2),
              COERCE_UNSIGNED_INT64(a3 + *((double *)this + 1)),
              HIDWORD(COERCE_UNSIGNED_INT64(a3 + *((double *)this + 1))),
              LODWORD(a4),
              HIDWORD(a4),
              LODWORD(a5),
              HIDWORD(a5))))
       / *((double *)this + 1);
}


//======================================================================
// anl::CImplicitModuleBase::get_dz(double,double,double,double)
// address: 0x0031F3EA   size: 0x7E (126 bytes)
//======================================================================
double __fastcall anl::CImplicitModuleBase::get_dz(
        anl::CImplicitModuleBase *this,
        double a2,
        double a3,
        double a4,
        double a5)
{
  double v7; // r0

  v7 = COERCE_DOUBLE(
         ((__int64 (__fastcall *)(anl::CImplicitModuleBase *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)this + 20))(
           this,
           *(_DWORD *)(*(_DWORD *)this + 20),
           LODWORD(a2),
           HIDWORD(a2),
           LODWORD(a3),
           HIDWORD(a3),
           COERCE_UNSIGNED_INT64(a4 - *((double *)this + 1)),
           HIDWORD(COERCE_UNSIGNED_INT64(a4 - *((double *)this + 1))),
           LODWORD(a5),
           HIDWORD(a5)));
  return (v7
        - COERCE_DOUBLE(
            ((__int64 (__fastcall *)(anl::CImplicitModuleBase *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)this + 20))(
              this,
              *(_DWORD *)(*(_DWORD *)this + 20),
              LODWORD(a2),
              HIDWORD(a2),
              LODWORD(a3),
              HIDWORD(a3),
              COERCE_UNSIGNED_INT64(a4 + *((double *)this + 1)),
              HIDWORD(COERCE_UNSIGNED_INT64(a4 + *((double *)this + 1))),
              LODWORD(a5),
              HIDWORD(a5))))
       / *((double *)this + 1);
}


//======================================================================
// anl::CImplicitModuleBase::get_dw(double,double,double,double)
// address: 0x0031F468   size: 0x7E (126 bytes)
//======================================================================
double __fastcall anl::CImplicitModuleBase::get_dw(
        anl::CImplicitModuleBase *this,
        double a2,
        double a3,
        double a4,
        double a5)
{
  double v7; // r0

  v7 = COERCE_DOUBLE(
         ((__int64 (__fastcall *)(anl::CImplicitModuleBase *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)this + 20))(
           this,
           *(_DWORD *)(*(_DWORD *)this + 20),
           LODWORD(a2),
           HIDWORD(a2),
           LODWORD(a3),
           HIDWORD(a3),
           LODWORD(a4),
           HIDWORD(a4),
           COERCE_UNSIGNED_INT64(a5 - *((double *)this + 1)),
           HIDWORD(COERCE_UNSIGNED_INT64(a5 - *((double *)this + 1)))));
  return (v7
        - COERCE_DOUBLE(
            ((__int64 (__fastcall *)(anl::CImplicitModuleBase *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)this + 20))(
              this,
              *(_DWORD *)(*(_DWORD *)this + 20),
              LODWORD(a2),
              HIDWORD(a2),
              LODWORD(a3),
              HIDWORD(a3),
              LODWORD(a4),
              HIDWORD(a4),
              COERCE_UNSIGNED_INT64(a5 + *((double *)this + 1)),
              HIDWORD(COERCE_UNSIGNED_INT64(a5 + *((double *)this + 1))))))
       / *((double *)this + 1);
}


//======================================================================
// anl::CImplicitModuleBase::get_dx(double,double,double,double,double,double)
// address: 0x0031F4E6   size: 0xA6 (166 bytes)
//======================================================================
double __fastcall anl::CImplicitModuleBase::get_dx(
        anl::CImplicitModuleBase *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  double v9; // r0

  v9 = COERCE_DOUBLE(
         ((__int64 (__fastcall *)(anl::CImplicitModuleBase *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)this + 24))(
           this,
           *(_DWORD *)(*(_DWORD *)this + 24),
           COERCE_UNSIGNED_INT64(a2 - *((double *)this + 1)),
           HIDWORD(COERCE_UNSIGNED_INT64(a2 - *((double *)this + 1))),
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
  return (v9
        - COERCE_DOUBLE(
            ((__int64 (__fastcall *)(anl::CImplicitModuleBase *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)this + 24))(
              this,
              *(_DWORD *)(*(_DWORD *)this + 24),
              COERCE_UNSIGNED_INT64(a2 + *((double *)this + 1)),
              HIDWORD(COERCE_UNSIGNED_INT64(a2 + *((double *)this + 1))),
              LODWORD(a3),
              HIDWORD(a3),
              LODWORD(a4),
              HIDWORD(a4),
              LODWORD(a5),
              HIDWORD(a5),
              LODWORD(a6),
              HIDWORD(a6),
              LODWORD(a7),
              HIDWORD(a7))))
       / *((double *)this + 1);
}


//======================================================================
// anl::CImplicitModuleBase::get_dy(double,double,double,double,double,double)
// address: 0x0031F58C   size: 0x9E (158 bytes)
//======================================================================
double __fastcall anl::CImplicitModuleBase::get_dy(
        anl::CImplicitModuleBase *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  double v9; // r0

  v9 = COERCE_DOUBLE(
         ((__int64 (__fastcall *)(anl::CImplicitModuleBase *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)this + 24))(
           this,
           *(_DWORD *)(*(_DWORD *)this + 24),
           LODWORD(a2),
           HIDWORD(a2),
           COERCE_UNSIGNED_INT64(a3 - *((double *)this + 1)),
           HIDWORD(COERCE_UNSIGNED_INT64(a3 - *((double *)this + 1))),
           LODWORD(a4),
           HIDWORD(a4),
           LODWORD(a5),
           HIDWORD(a5),
           LODWORD(a6),
           HIDWORD(a6),
           LODWORD(a7),
           HIDWORD(a7)));
  return (v9
        - COERCE_DOUBLE(
            ((__int64 (__fastcall *)(anl::CImplicitModuleBase *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)this + 24))(
              this,
              *(_DWORD *)(*(_DWORD *)this + 24),
              LODWORD(a2),
              HIDWORD(a2),
              COERCE_UNSIGNED_INT64(a3 + *((double *)this + 1)),
              HIDWORD(COERCE_UNSIGNED_INT64(a3 + *((double *)this + 1))),
              LODWORD(a4),
              HIDWORD(a4),
              LODWORD(a5),
              HIDWORD(a5),
              LODWORD(a6),
              HIDWORD(a6),
              LODWORD(a7),
              HIDWORD(a7))))
       / *((double *)this + 1);
}


//======================================================================
// anl::CImplicitModuleBase::get_dz(double,double,double,double,double,double)
// address: 0x0031F62A   size: 0x9E (158 bytes)
//======================================================================
double __fastcall anl::CImplicitModuleBase::get_dz(
        anl::CImplicitModuleBase *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  double v9; // r0

  v9 = COERCE_DOUBLE(
         ((__int64 (__fastcall *)(anl::CImplicitModuleBase *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)this + 24))(
           this,
           *(_DWORD *)(*(_DWORD *)this + 24),
           LODWORD(a2),
           HIDWORD(a2),
           LODWORD(a3),
           HIDWORD(a3),
           COERCE_UNSIGNED_INT64(a4 - *((double *)this + 1)),
           HIDWORD(COERCE_UNSIGNED_INT64(a4 - *((double *)this + 1))),
           LODWORD(a5),
           HIDWORD(a5),
           LODWORD(a6),
           HIDWORD(a6),
           LODWORD(a7),
           HIDWORD(a7)));
  return (v9
        - COERCE_DOUBLE(
            ((__int64 (__fastcall *)(anl::CImplicitModuleBase *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)this + 24))(
              this,
              *(_DWORD *)(*(_DWORD *)this + 24),
              LODWORD(a2),
              HIDWORD(a2),
              LODWORD(a3),
              HIDWORD(a3),
              COERCE_UNSIGNED_INT64(a4 + *((double *)this + 1)),
              HIDWORD(COERCE_UNSIGNED_INT64(a4 + *((double *)this + 1))),
              LODWORD(a5),
              HIDWORD(a5),
              LODWORD(a6),
              HIDWORD(a6),
              LODWORD(a7),
              HIDWORD(a7))))
       / *((double *)this + 1);
}


//======================================================================
// anl::CImplicitModuleBase::get_dw(double,double,double,double,double,double)
// address: 0x0031F6C8   size: 0x9E (158 bytes)
//======================================================================
double __fastcall anl::CImplicitModuleBase::get_dw(
        anl::CImplicitModuleBase *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  double v9; // r0

  v9 = COERCE_DOUBLE(
         ((__int64 (__fastcall *)(anl::CImplicitModuleBase *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)this + 24))(
           this,
           *(_DWORD *)(*(_DWORD *)this + 24),
           LODWORD(a2),
           HIDWORD(a2),
           LODWORD(a3),
           HIDWORD(a3),
           LODWORD(a4),
           HIDWORD(a4),
           COERCE_UNSIGNED_INT64(a5 - *((double *)this + 1)),
           HIDWORD(COERCE_UNSIGNED_INT64(a5 - *((double *)this + 1))),
           LODWORD(a6),
           HIDWORD(a6),
           LODWORD(a7),
           HIDWORD(a7)));
  return (v9
        - COERCE_DOUBLE(
            ((__int64 (__fastcall *)(anl::CImplicitModuleBase *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)this + 24))(
              this,
              *(_DWORD *)(*(_DWORD *)this + 24),
              LODWORD(a2),
              HIDWORD(a2),
              LODWORD(a3),
              HIDWORD(a3),
              LODWORD(a4),
              HIDWORD(a4),
              COERCE_UNSIGNED_INT64(a5 + *((double *)this + 1)),
              HIDWORD(COERCE_UNSIGNED_INT64(a5 + *((double *)this + 1))),
              LODWORD(a6),
              HIDWORD(a6),
              LODWORD(a7),
              HIDWORD(a7))))
       / *((double *)this + 1);
}


//======================================================================
// anl::CImplicitModuleBase::get_du(double,double,double,double,double,double)
// address: 0x0031F766   size: 0x9E (158 bytes)
//======================================================================
double __fastcall anl::CImplicitModuleBase::get_du(
        anl::CImplicitModuleBase *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  double v9; // r0

  v9 = COERCE_DOUBLE(
         ((__int64 (__fastcall *)(anl::CImplicitModuleBase *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)this + 24))(
           this,
           *(_DWORD *)(*(_DWORD *)this + 24),
           LODWORD(a2),
           HIDWORD(a2),
           LODWORD(a3),
           HIDWORD(a3),
           LODWORD(a4),
           HIDWORD(a4),
           LODWORD(a5),
           HIDWORD(a5),
           COERCE_UNSIGNED_INT64(a6 - *((double *)this + 1)),
           HIDWORD(COERCE_UNSIGNED_INT64(a6 - *((double *)this + 1))),
           LODWORD(a7),
           HIDWORD(a7)));
  return (v9
        - COERCE_DOUBLE(
            ((__int64 (__fastcall *)(anl::CImplicitModuleBase *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)this + 24))(
              this,
              *(_DWORD *)(*(_DWORD *)this + 24),
              LODWORD(a2),
              HIDWORD(a2),
              LODWORD(a3),
              HIDWORD(a3),
              LODWORD(a4),
              HIDWORD(a4),
              LODWORD(a5),
              HIDWORD(a5),
              COERCE_UNSIGNED_INT64(a6 + *((double *)this + 1)),
              HIDWORD(COERCE_UNSIGNED_INT64(a6 + *((double *)this + 1))),
              LODWORD(a7),
              HIDWORD(a7))))
       / *((double *)this + 1);
}


//======================================================================
// anl::CImplicitModuleBase::get_dv(double,double,double,double,double,double)
// address: 0x0031F804   size: 0x9E (158 bytes)
//======================================================================
double __fastcall anl::CImplicitModuleBase::get_dv(
        anl::CImplicitModuleBase *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  double v9; // r0

  v9 = COERCE_DOUBLE(
         ((__int64 (__fastcall *)(anl::CImplicitModuleBase *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)this + 24))(
           this,
           *(_DWORD *)(*(_DWORD *)this + 24),
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
           COERCE_UNSIGNED_INT64(a7 - *((double *)this + 1)),
           HIDWORD(COERCE_UNSIGNED_INT64(a7 - *((double *)this + 1)))));
  return (v9
        - COERCE_DOUBLE(
            ((__int64 (__fastcall *)(anl::CImplicitModuleBase *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)this + 24))(
              this,
              *(_DWORD *)(*(_DWORD *)this + 24),
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
              COERCE_UNSIGNED_INT64(a7 + *((double *)this + 1)),
              HIDWORD(COERCE_UNSIGNED_INT64(a7 + *((double *)this + 1))))))
       / *((double *)this + 1);
}

