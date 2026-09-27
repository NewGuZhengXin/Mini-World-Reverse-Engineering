// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CImplicitConstant

//======================================================================
// anl::CImplicitConstant::~CImplicitConstant()
// address: 0x00315CEC   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl17CImplicitConstantD1Ev'
void __fastcall anl::CImplicitConstant::~CImplicitConstant(anl::CImplicitConstant *this)
{
  *(_DWORD *)this = &off_462280;
}


//======================================================================
// anl::CImplicitConstant::get(double,double)
// address: 0x00315CFC   size: 0x6 (6 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitConstant::get(anl::CImplicitConstant *this, double a2, double a3)
{
  return *((_QWORD *)this + 2);
}


//======================================================================
// anl::CImplicitConstant::get(double,double,double)
// address: 0x00315D02   size: 0x6 (6 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitConstant::get(anl::CImplicitConstant *this, double a2, double a3, double a4)
{
  return *((_QWORD *)this + 2);
}


//======================================================================
// anl::CImplicitConstant::get(double,double,double,double)
// address: 0x00315D08   size: 0x6 (6 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitConstant::get(
        anl::CImplicitConstant *this,
        double a2,
        double a3,
        double a4,
        double a5)
{
  return *((_QWORD *)this + 2);
}


//======================================================================
// anl::CImplicitConstant::get(double,double,double,double,double,double)
// address: 0x00315D0E   size: 0x6 (6 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitConstant::get(
        anl::CImplicitConstant *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  return *((_QWORD *)this + 2);
}


//======================================================================
// anl::CImplicitConstant::~CImplicitConstant()
// address: 0x00315D14   size: 0x12 (18 bytes)
//======================================================================
void __fastcall anl::CImplicitConstant::~CImplicitConstant(anl::CImplicitConstant *this)
{
  anl::CImplicitConstant::~CImplicitConstant(this);
  operator delete(this);
}


//======================================================================
// anl::CImplicitConstant::CImplicitConstant(void)
// address: 0x00315D28   size: 0x1C (28 bytes)
//======================================================================
// Alternative name is '_ZN3anl17CImplicitConstantC1Ev'
_DWORD *__fastcall anl::CImplicitConstant::CImplicitConstant(_DWORD *this)
{
  *(this + 2) = -350469331;
  *(this + 3) = 1058682594;
  *this = &off_463498;
  *(this + 4) = 0;
  *(this + 5) = 0;
  return this;
}


//======================================================================
// anl::CImplicitConstant::CImplicitConstant(double)
// address: 0x00315D60   size: 0x1A (26 bytes)
//======================================================================
// Alternative name is '_ZN3anl17CImplicitConstantC2Ed'
int __fastcall anl::CImplicitConstant::CImplicitConstant(int this, double a2)
{
  *(_DWORD *)(this + 8) = -350469331;
  *(_DWORD *)(this + 12) = 1058682594;
  *(_DWORD *)this = &off_463498;
  *(double *)(this + 16) = a2;
  return this;
}


//======================================================================
// anl::CImplicitConstant::setConstant(double)
// address: 0x00315D90   size: 0x6 (6 bytes)
//======================================================================
int __fastcall anl::CImplicitConstant::setConstant(int this, double a2)
{
  *(double *)(this + 16) = a2;
  return this;
}

