// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CImplicitClamp

//======================================================================
// anl::CImplicitClamp::~CImplicitClamp()
// address: 0x00328814   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl14CImplicitClampD1Ev'
void __fastcall anl::CImplicitClamp::~CImplicitClamp(anl::CImplicitClamp *this)
{
  *(_DWORD *)this = &off_462280;
}


//======================================================================
// anl::CImplicitClamp::get(double,double)
// address: 0x00328828   size: 0x58 (88 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitClamp::get(anl::CImplicitClamp *this, double a2, double a3)
{
  int v5; // r0
  double v6; // r0
  double v7; // r4
  double v8; // r6

  v5 = *((_DWORD *)this + 4);
  if ( v5 != 0 )
  {
    v6 = COERCE_DOUBLE(
           ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v5 + 12))(
             v5,
             *(_DWORD *)(*(_DWORD *)v5 + 12),
             LODWORD(a2),
             HIDWORD(a2),
             LODWORD(a3),
             HIDWORD(a3)));
    v7 = *((double *)this + 3);
    v8 = *((double *)this + 4);
    if ( v6 >= v7 )
      v7 = v6;
    if ( v7 <= v8 )
      v8 = v7;
  }
  else
  {
    v8 = 0.0;
  }
  return *(_QWORD *)&v8;
}


//======================================================================
// anl::CImplicitClamp::get(double,double,double)
// address: 0x00328888   size: 0x60 (96 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitClamp::get(anl::CImplicitClamp *this, double a2, double a3, double a4)
{
  int v6; // r0
  double v7; // r0
  double v8; // r4
  double v9; // r6

  v6 = *((_DWORD *)this + 4);
  if ( v6 != 0 )
  {
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
    v8 = *((double *)this + 3);
    v9 = *((double *)this + 4);
    if ( v7 >= v8 )
      v8 = v7;
    if ( v8 <= v9 )
      v9 = v8;
  }
  else
  {
    v9 = 0.0;
  }
  return *(_QWORD *)&v9;
}


//======================================================================
// anl::CImplicitClamp::get(double,double,double,double)
// address: 0x003288F0   size: 0x68 (104 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitClamp::get(anl::CImplicitClamp *this, double a2, double a3, double a4, double a5)
{
  int v7; // r0
  double v8; // r0
  double v9; // r4
  double v10; // r6

  v7 = *((_DWORD *)this + 4);
  if ( v7 != 0 )
  {
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
    v9 = *((double *)this + 3);
    v10 = *((double *)this + 4);
    if ( v8 >= v9 )
      v9 = v8;
    if ( v9 <= v10 )
      v10 = v9;
  }
  else
  {
    v10 = 0.0;
  }
  return *(_QWORD *)&v10;
}


//======================================================================
// anl::CImplicitClamp::get(double,double,double,double,double,double)
// address: 0x00328960   size: 0x78 (120 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitClamp::get(
        anl::CImplicitClamp *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  int v9; // r0
  double v10; // r0
  double v11; // r4
  double v12; // r6

  v9 = *((_DWORD *)this + 4);
  if ( v9 != 0 )
  {
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
    v11 = *((double *)this + 3);
    v12 = *((double *)this + 4);
    if ( v10 >= v11 )
      v11 = v10;
    if ( v11 <= v12 )
      v12 = v11;
  }
  else
  {
    v12 = 0.0;
  }
  return *(_QWORD *)&v12;
}


//======================================================================
// anl::CImplicitClamp::~CImplicitClamp()
// address: 0x003289E0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall anl::CImplicitClamp::~CImplicitClamp(anl::CImplicitClamp *this)
{
  anl::CImplicitClamp::~CImplicitClamp(this);
  operator delete(this);
}


//======================================================================
// anl::CImplicitClamp::CImplicitClamp(double,double)
// address: 0x003289F8   size: 0x26 (38 bytes)
//======================================================================
// Alternative name is '_ZN3anl14CImplicitClampC1Edd'
int __fastcall anl::CImplicitClamp::CImplicitClamp(int this, double a2, double a3)
{
  *(_DWORD *)(this + 8) = -350469331;
  *(_DWORD *)(this + 12) = 1058682594;
  *(_DWORD *)this = &off_4639A0;
  *(double *)(this + 24) = a2;
  *(_DWORD *)(this + 16) = 0;
  *(double *)(this + 32) = a3;
  return this;
}


//======================================================================
// anl::CImplicitClamp::setRange(double,double)
// address: 0x00328A30   size: 0x10 (16 bytes)
//======================================================================
int __fastcall anl::CImplicitClamp::setRange(int this, double a2, double a3)
{
  *(double *)(this + 24) = a2;
  *(double *)(this + 32) = a3;
  return this;
}


//======================================================================
// anl::CImplicitClamp::setSource(anl::CImplicitModuleBase *)
// address: 0x00328A40   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitClamp::setSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 16) = a2;
  return this;
}

