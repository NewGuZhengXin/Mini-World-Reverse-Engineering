// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CImplicitCellular

//======================================================================
// anl::CImplicitCellular::~CImplicitCellular()
// address: 0x0032AA80   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl17CImplicitCellularD1Ev'
void __fastcall anl::CImplicitCellular::~CImplicitCellular(anl::CImplicitCellular *this)
{
  *(_DWORD *)this = &off_462280;
}


//======================================================================
// anl::CImplicitCellular::~CImplicitCellular()
// address: 0x0032AA90   size: 0x16 (22 bytes)
//======================================================================
void __fastcall anl::CImplicitCellular::~CImplicitCellular(anl::CImplicitCellular *this)
{
  *(_DWORD *)this = &off_462280;
  operator delete(this);
}


//======================================================================
// anl::CImplicitCellular::get(double,double)
// address: 0x0032AAB0   size: 0x82 (130 bytes)
//======================================================================
double __fastcall anl::CImplicitCellular::get(anl::CImplicitCellular *this, double a2, double a3)
{
  anl::CCellularGenerator *v5; // r0
  double *v6; // r7

  v5 = *((anl::CCellularGenerator **)this + 4);
  if ( v5 == nullptr )
    return 0.0;
  v6 = (double *)anl::CCellularGenerator::get(v5, a2, a3);
  return *v6 * *((double *)this + 3)
       + v6[1] * *((double *)this + 4)
       + v6[2] * *((double *)this + 5)
       + v6[3] * *((double *)this + 6);
}


//======================================================================
// anl::CImplicitCellular::get(double,double,double)
// address: 0x0032AB40   size: 0x8C (140 bytes)
//======================================================================
double __fastcall anl::CImplicitCellular::get(anl::CImplicitCellular *this, double a2, double a3, double a4)
{
  anl::CCellularGenerator *v6; // r0
  double *v7; // r7

  v6 = *((anl::CCellularGenerator **)this + 4);
  if ( v6 == nullptr )
    return 0.0;
  v7 = (double *)anl::CCellularGenerator::get(v6, a2, a3, a4);
  return *v7 * *((double *)this + 3)
       + v7[1] * *((double *)this + 4)
       + v7[2] * *((double *)this + 5)
       + v7[3] * *((double *)this + 6);
}


//======================================================================
// anl::CImplicitCellular::get(double,double,double,double)
// address: 0x0032ABD8   size: 0x94 (148 bytes)
//======================================================================
double __fastcall anl::CImplicitCellular::get(anl::CImplicitCellular *this, double a2, double a3, double a4, double a5)
{
  anl::CCellularGenerator *v7; // r0
  double *v8; // r7

  v7 = *((anl::CCellularGenerator **)this + 4);
  if ( v7 == nullptr )
    return 0.0;
  v8 = (double *)anl::CCellularGenerator::get(v7, a2, a3, a4, a5);
  return *v8 * *((double *)this + 3)
       + v8[1] * *((double *)this + 4)
       + v8[2] * *((double *)this + 5)
       + v8[3] * *((double *)this + 6);
}


//======================================================================
// anl::CImplicitCellular::get(double,double,double,double,double,double)
// address: 0x0032AC78   size: 0xA4 (164 bytes)
//======================================================================
double __fastcall anl::CImplicitCellular::get(
        anl::CImplicitCellular *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  anl::CCellularGenerator *v9; // r0
  double *v10; // r7

  v9 = *((anl::CCellularGenerator **)this + 4);
  if ( v9 == nullptr )
    return 0.0;
  v10 = (double *)anl::CCellularGenerator::get(v9, a2, a3, a4, a5, a6, a7);
  return *v10 * *((double *)this + 3)
       + v10[1] * *((double *)this + 4)
       + v10[2] * *((double *)this + 5)
       + v10[3] * *((double *)this + 6);
}


//======================================================================
// anl::CImplicitCellular::setCoefficients(double,double,double,double)
// address: 0x0032AD28   size: 0x20 (32 bytes)
//======================================================================
double *__fastcall anl::CImplicitCellular::setCoefficients(double *this, double a2, double a3, double a4, double a5)
{
  *(this + 3) = a2;
  *(this + 4) = a3;
  *(this + 5) = a4;
  *(this + 6) = a5;
  return this;
}


//======================================================================
// anl::CImplicitCellular::CImplicitCellular(void)
// address: 0x0032AD48   size: 0x42 (66 bytes)
//======================================================================
// Alternative name is '_ZN3anl17CImplicitCellularC1Ev'
anl::CImplicitCellular *__fastcall anl::CImplicitCellular::CImplicitCellular(anl::CImplicitCellular *this)
{
  *((_DWORD *)this + 2) = -350469331;
  *((_DWORD *)this + 3) = 1058682594;
  *(_DWORD *)this = &off_463A40;
  *((_DWORD *)this + 4) = 0;
  anl::CImplicitCellular::setCoefficients((double *)this, 1.0, 0.0, 0.0, 0.0);
  return this;
}


//======================================================================
// anl::CImplicitCellular::CImplicitCellular(double,double,double,double)
// address: 0x0032ADB8   size: 0x46 (70 bytes)
//======================================================================
// Alternative name is '_ZN3anl17CImplicitCellularC1Edddd'
anl::CImplicitCellular *__fastcall anl::CImplicitCellular::CImplicitCellular(
        anl::CImplicitCellular *this,
        double a2,
        double a3,
        double a4,
        double a5)
{
  *((_DWORD *)this + 2) = -350469331;
  *((_DWORD *)this + 3) = 1058682594;
  *(_DWORD *)this = &off_463A40;
  *((_DWORD *)this + 4) = 0;
  anl::CImplicitCellular::setCoefficients((double *)this, a2, a3, a4, a5);
  return this;
}


//======================================================================
// anl::CImplicitCellular::setCellularSource(anl::CCellularGenerator *)
// address: 0x0032AE18   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitCellular::setCellularSource(int this, anl::CCellularGenerator *a2)
{
  *(_DWORD *)(this + 16) = a2;
  return this;
}

