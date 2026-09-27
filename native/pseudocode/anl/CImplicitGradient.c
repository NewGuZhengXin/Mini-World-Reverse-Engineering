// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CImplicitGradient

//======================================================================
// anl::CImplicitGradient::~CImplicitGradient()
// address: 0x0031606C   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl17CImplicitGradientD1Ev'
void __fastcall anl::CImplicitGradient::~CImplicitGradient(anl::CImplicitGradient *this)
{
  *(_DWORD *)this = &off_462280;
}


//======================================================================
// anl::CImplicitGradient::get(double,double)
// address: 0x0031607C   size: 0x48 (72 bytes)
//======================================================================
double __fastcall anl::CImplicitGradient::get(anl::CImplicitGradient *this, double a2, double a3)
{
  return ((a2 - *((double *)this + 2)) * *((double *)this + 14) + (a3 - *((double *)this + 3)) * *((double *)this + 15))
       / *((double *)this + 20);
}


//======================================================================
// anl::CImplicitGradient::get(double,double,double)
// address: 0x003160C4   size: 0x70 (112 bytes)
//======================================================================
double __fastcall anl::CImplicitGradient::get(anl::CImplicitGradient *this, double a2, double a3, double a4)
{
  return ((a2 - *((double *)this + 2)) * *((double *)this + 14)
        + (a3 - *((double *)this + 3)) * *((double *)this + 15)
        + (a4 - *((double *)this + 4)) * *((double *)this + 16))
       / *((double *)this + 20);
}


//======================================================================
// anl::CImplicitGradient::get(double,double,double,double)
// address: 0x00316134   size: 0x98 (152 bytes)
//======================================================================
double __fastcall anl::CImplicitGradient::get(anl::CImplicitGradient *this, double a2, double a3, double a4, double a5)
{
  return ((a2 - *((double *)this + 2)) * *((double *)this + 14)
        + (a3 - *((double *)this + 3)) * *((double *)this + 15)
        + (a4 - *((double *)this + 4)) * *((double *)this + 16)
        + (a5 - *((double *)this + 5)) * *((double *)this + 17))
       / *((double *)this + 20);
}


//======================================================================
// anl::CImplicitGradient::get(double,double,double,double,double,double)
// address: 0x003161CC   size: 0xE8 (232 bytes)
//======================================================================
double __fastcall anl::CImplicitGradient::get(
        anl::CImplicitGradient *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  return ((a2 - *((double *)this + 2)) * *((double *)this + 14)
        + (a3 - *((double *)this + 3)) * *((double *)this + 15)
        + (a4 - *((double *)this + 4)) * *((double *)this + 16)
        + (a5 - *((double *)this + 5)) * *((double *)this + 17)
        + (a6 - *((double *)this + 6)) * *((double *)this + 18)
        + (a7 - *((double *)this + 7)) * *((double *)this + 19))
       / *((double *)this + 20);
}


//======================================================================
// anl::CImplicitGradient::~CImplicitGradient()
// address: 0x003162B4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall anl::CImplicitGradient::~CImplicitGradient(anl::CImplicitGradient *this)
{
  anl::CImplicitGradient::~CImplicitGradient(this);
  operator delete(this);
}


//======================================================================
// anl::CImplicitGradient::setGradient(double,double,double,double,double,double,double,double,double,double,double,double)
// address: 0x003162C6   size: 0x184 (388 bytes)
//======================================================================
double __fastcall anl::CImplicitGradient::setGradient(
        anl::CImplicitGradient *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13)
{
  double result; // r0

  *((double *)this + 2) = a2;
  *((double *)this + 3) = a4;
  *((double *)this + 8) = a3;
  *((double *)this + 9) = a5;
  *((double *)this + 4) = a6;
  *((double *)this + 10) = a7;
  *((double *)this + 5) = a8;
  *((double *)this + 11) = a9;
  *((double *)this + 6) = a10;
  *((double *)this + 12) = a11;
  *((double *)this + 7) = a12;
  *((double *)this + 13) = a13;
  *((double *)this + 14) = a3 - a2;
  *((double *)this + 15) = a5 - a4;
  *((double *)this + 16) = a7 - a6;
  *((double *)this + 17) = a9 - a8;
  *((double *)this + 18) = a11 - a10;
  *((double *)this + 19) = a13 - a12;
  result = (a3 - a2) * (a3 - a2)
         + (a5 - a4) * (a5 - a4)
         + (a7 - a6) * (a7 - a6)
         + (a9 - a8) * (a9 - a8)
         + (a11 - a10) * (a11 - a10)
         + (a13 - a12) * (a13 - a12);
  *((double *)this + 20) = result;
  return result;
}


//======================================================================
// anl::CImplicitGradient::CImplicitGradient(void)
// address: 0x00316450   size: 0x5E (94 bytes)
//======================================================================
// Alternative name is '_ZN3anl17CImplicitGradientC2Ev'
anl::CImplicitGradient *__fastcall anl::CImplicitGradient::CImplicitGradient(anl::CImplicitGradient *this)
{
  *((_DWORD *)this + 2) = -350469331;
  *((_DWORD *)this + 3) = 1058682594;
  *(_DWORD *)this = &off_463558;
  anl::CImplicitGradient::setGradient(this, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
  return this;
}

