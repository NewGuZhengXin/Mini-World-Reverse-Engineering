// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CImplicitNormalizeCoords

//======================================================================
// anl::CImplicitNormalizeCoords::~CImplicitNormalizeCoords()
// address: 0x00330FF0   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl24CImplicitNormalizeCoordsD1Ev'
void __fastcall anl::CImplicitNormalizeCoords::~CImplicitNormalizeCoords(anl::CImplicitNormalizeCoords *this)
{
  *(_DWORD *)this = &off_462280;
}


//======================================================================
// anl::CImplicitNormalizeCoords::~CImplicitNormalizeCoords()
// address: 0x00331000   size: 0x16 (22 bytes)
//======================================================================
void __fastcall anl::CImplicitNormalizeCoords::~CImplicitNormalizeCoords(anl::CImplicitNormalizeCoords *this)
{
  *(_DWORD *)this = &off_462280;
  operator delete(this);
}


//======================================================================
// anl::CImplicitNormalizeCoords::get(double,double)
// address: 0x00331020   size: 0xC0 (192 bytes)
//======================================================================
int __fastcall anl::CImplicitNormalizeCoords::get(anl::CImplicitNormalizeCoords *this, double a2, double a3)
{
  double v6; // r0
  double v8; // [sp+10h] [bp-14h]

  if ( a2 == 0.0 && a3 == 0.0 )
    return anl::CScalarParameter::get((anl::CImplicitNormalizeCoords *)((char *)this + 16), a2, a3);
  v8 = j_sqrt(a2 * a2 + a3 * a3);
  LODWORD(v6) = anl::CScalarParameter::get((anl::CImplicitNormalizeCoords *)((char *)this + 32), a2, a3);
  return anl::CScalarParameter::get((anl::CImplicitNormalizeCoords *)((char *)this + 16), a2 / v8 * v6, a3 / v8 * v6);
}


//======================================================================
// anl::CImplicitNormalizeCoords::get(double,double,double)
// address: 0x003310E8   size: 0x118 (280 bytes)
//======================================================================
int __fastcall anl::CImplicitNormalizeCoords::get(anl::CImplicitNormalizeCoords *this, double a2, double a3, double a4)
{
  double v7; // r0
  double v9; // [sp+18h] [bp-Ch]

  if ( a2 == 0.0 && a3 == 0.0 && a4 == 0.0 )
    return anl::CScalarParameter::get((anl::CImplicitNormalizeCoords *)((char *)this + 16), a2, a3, a4);
  v9 = j_sqrt(a2 * a2 + a3 * a3 + a4 * a4);
  LODWORD(v7) = anl::CScalarParameter::get((anl::CImplicitNormalizeCoords *)((char *)this + 32), a2, a3, a4);
  return anl::CScalarParameter::get(
           (anl::CImplicitNormalizeCoords *)((char *)this + 16),
           a2 / v9 * v7,
           a3 / v9 * v7,
           a4 / v9 * v7);
}


//======================================================================
// anl::CImplicitNormalizeCoords::get(double,double,double,double)
// address: 0x00331208   size: 0x16C (364 bytes)
//======================================================================
int __fastcall anl::CImplicitNormalizeCoords::get(
        anl::CImplicitNormalizeCoords *this,
        double a2,
        double a3,
        double a4,
        double a5)
{
  double v8; // r0
  double v10; // [sp+20h] [bp-Ch]

  if ( a2 == 0.0 && a3 == 0.0 && a4 == 0.0 && a5 == 0.0 )
    return anl::CScalarParameter::get((anl::CImplicitNormalizeCoords *)((char *)this + 16), a2, a3, a4, a5);
  v10 = j_sqrt(a2 * a2 + a3 * a3 + a4 * a4 + a5 * a5);
  LODWORD(v8) = anl::CScalarParameter::get((anl::CImplicitNormalizeCoords *)((char *)this + 32), a2, a3, a4, a5);
  return anl::CScalarParameter::get(
           (anl::CImplicitNormalizeCoords *)((char *)this + 16),
           a2 / v10 * v8,
           a3 / v10 * v8,
           a4 / v10 * v8,
           a5 / v10 * v8);
}


//======================================================================
// anl::CImplicitNormalizeCoords::get(double,double,double,double,double,double)
// address: 0x00331380   size: 0x214 (532 bytes)
//======================================================================
int __fastcall anl::CImplicitNormalizeCoords::get(
        anl::CImplicitNormalizeCoords *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  double v9; // r6
  double v10; // r0

  if ( a2 == 0.0 && a3 == 0.0 && a4 == 0.0 && a5 == 0.0 && a6 == 0.0 && a7 == 0.0 )
    return anl::CScalarParameter::get((anl::CImplicitNormalizeCoords *)((char *)this + 16), a2, a3, a4, a5, a6, a7);
  v9 = j_sqrt(a2 * a2 + a3 * a3 + a4 * a4 + a5 * a5 + a6 * a6 + a7 * a7);
  LODWORD(v10) = anl::CScalarParameter::get(
                   (anl::CImplicitNormalizeCoords *)((char *)this + 32),
                   a2,
                   a3,
                   a4,
                   a5,
                   a6,
                   a7);
  return anl::CScalarParameter::get(
           (anl::CImplicitNormalizeCoords *)((char *)this + 16),
           a2 / v9 * v10,
           a3 / v9 * v10,
           a4 / v9 * v10,
           a5 / v9 * v10,
           a6 / v9 * v10,
           a7 / v9 * v10);
}


//======================================================================
// anl::CImplicitNormalizeCoords::CImplicitNormalizeCoords(void)
// address: 0x003315A0   size: 0x2A (42 bytes)
//======================================================================
// Alternative name is '_ZN3anl24CImplicitNormalizeCoordsC1Ev'
_DWORD *__fastcall anl::CImplicitNormalizeCoords::CImplicitNormalizeCoords(_DWORD *this)
{
  *(this + 2) = -350469331;
  *(this + 3) = 1058682594;
  *(this + 6) = 0;
  *(this + 10) = 0;
  *this = &off_463D00;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 8) = 0;
  *(this + 9) = 1072693248;
  return this;
}


//======================================================================
// anl::CImplicitNormalizeCoords::CImplicitNormalizeCoords(float)
// address: 0x003315F0   size: 0x32 (50 bytes)
//======================================================================
// Alternative name is '_ZN3anl24CImplicitNormalizeCoordsC1Ef'
int __fastcall anl::CImplicitNormalizeCoords::CImplicitNormalizeCoords(int this, float a2)
{
  *(_DWORD *)(this + 8) = -350469331;
  *(_DWORD *)(this + 12) = 1058682594;
  *(_DWORD *)(this + 24) = 0;
  *(_DWORD *)this = &off_463D00;
  *(_DWORD *)(this + 16) = 0;
  *(_DWORD *)(this + 20) = 0;
  *(_DWORD *)(this + 40) = 0;
  *(double *)(this + 32) = a2;
  return this;
}


//======================================================================
// anl::CImplicitNormalizeCoords::setSource(double)
// address: 0x00331640   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitNormalizeCoords::setSource(int this, double a2)
{
  *(_DWORD *)(this + 24) = 0;
  *(double *)(this + 16) = a2;
  return this;
}


//======================================================================
// anl::CImplicitNormalizeCoords::setSource(anl::CImplicitModuleBase *)
// address: 0x0033164A   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitNormalizeCoords::setSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 24) = a2;
  return this;
}


//======================================================================
// anl::CImplicitNormalizeCoords::setLength(double)
// address: 0x0033164E   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitNormalizeCoords::setLength(int this, double a2)
{
  *(_DWORD *)(this + 40) = 0;
  *(double *)(this + 32) = a2;
  return this;
}


//======================================================================
// anl::CImplicitNormalizeCoords::setLength(anl::CImplicitModuleBase *)
// address: 0x00331658   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitNormalizeCoords::setLength(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 40) = a2;
  return this;
}

