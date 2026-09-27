// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CImplicitMagnitude

//======================================================================
// anl::CImplicitMagnitude::~CImplicitMagnitude()
// address: 0x0032108C   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl18CImplicitMagnitudeD1Ev'
void __fastcall anl::CImplicitMagnitude::~CImplicitMagnitude(anl::CImplicitMagnitude *this)
{
  *(_DWORD *)this = &off_462280;
}


//======================================================================
// anl::CImplicitMagnitude::~CImplicitMagnitude()
// address: 0x0032109C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall anl::CImplicitMagnitude::~CImplicitMagnitude(anl::CImplicitMagnitude *this)
{
  anl::CImplicitMagnitude::~CImplicitMagnitude(this);
  operator delete(this);
}


//======================================================================
// anl::CImplicitMagnitude::get(double,double)
// address: 0x003210AE   size: 0x7E (126 bytes)
//======================================================================
double __fastcall anl::CImplicitMagnitude::get(anl::CImplicitMagnitude *this, double a2, double a3)
{
  int v5; // r0
  double v6; // r4
  int v7; // r0
  double v8; // r6

  v5 = *((_DWORD *)this + 6);
  if ( v5 != 0 )
    v6 = COERCE_DOUBLE(
           ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v5 + 12))(
             v5,
             *(_DWORD *)(*(_DWORD *)v5 + 12),
             LODWORD(a2),
             HIDWORD(a2),
             LODWORD(a3),
             HIDWORD(a3)));
  else
    v6 = *((double *)this + 2);
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
  return j_sqrt(v6 * v6 + v8 * v8);
}


//======================================================================
// anl::CImplicitMagnitude::get(double,double,double)
// address: 0x0032112C   size: 0xB4 (180 bytes)
//======================================================================
double __fastcall anl::CImplicitMagnitude::get(anl::CImplicitMagnitude *this, double a2, double a3, double a4)
{
  int v7; // r1
  int v8; // r1
  double v9; // r4
  int v10; // r1
  double v12; // [sp+10h] [bp-14h]
  double v13; // [sp+18h] [bp-Ch]

  LODWORD(v12) = anl::CScalarParameter::get((anl::CImplicitMagnitude *)((char *)this + 16), a2, a3, a4);
  HIDWORD(v12) = v7;
  LODWORD(v13) = anl::CScalarParameter::get((anl::CImplicitMagnitude *)((char *)this + 32), a2, a3, a4);
  HIDWORD(v13) = v8;
  LODWORD(v9) = anl::CScalarParameter::get((anl::CImplicitMagnitude *)((char *)this + 48), a2, a3, a4);
  HIDWORD(v9) = v10;
  return j_sqrt(v12 * v12 + v13 * v13 + v9 * v9);
}


//======================================================================
// anl::CImplicitMagnitude::get(double,double,double,double)
// address: 0x003211E0   size: 0x110 (272 bytes)
//======================================================================
double __fastcall anl::CImplicitMagnitude::get(
        anl::CImplicitMagnitude *this,
        double a2,
        double a3,
        double a4,
        double a5)
{
  double v6; // r6
  double v7; // r4
  int v8; // r1
  int v9; // r1
  int v10; // r1
  int v11; // r1
  double v14; // [sp+20h] [bp-14h]
  double v15; // [sp+28h] [bp-Ch]

  v6 = a2;
  LODWORD(v7) = anl::CScalarParameter::get((anl::CImplicitMagnitude *)((char *)this + 16), a2, a3, a4, a5);
  HIDWORD(v7) = v8;
  LODWORD(v14) = anl::CScalarParameter::get((anl::CImplicitMagnitude *)((char *)this + 32), v6, a3, a4, a5);
  HIDWORD(v14) = v9;
  LODWORD(v15) = anl::CScalarParameter::get((anl::CImplicitMagnitude *)((char *)this + 48), v6, a3, a4, a5);
  HIDWORD(v15) = v10;
  LODWORD(v6) = anl::CScalarParameter::get((anl::CImplicitMagnitude *)((char *)this + 64), v6, a3, a4, a5);
  HIDWORD(v6) = v11;
  return j_sqrt(v7 * v7 + v14 * v14 + v15 * v15 + v6 * v6);
}


//======================================================================
// anl::CImplicitMagnitude::get(double,double,double,double,double,double)
// address: 0x003212F0   size: 0x1E4 (484 bytes)
//======================================================================
double __fastcall anl::CImplicitMagnitude::get(
        anl::CImplicitMagnitude *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  int v9; // r1
  int v10; // r1
  int v11; // r1
  int v12; // r1
  int v13; // r1
  double v14; // r6
  int v15; // r1
  double v18; // [sp+30h] [bp-2Ch]
  double v19; // [sp+38h] [bp-24h]
  double v20; // [sp+40h] [bp-1Ch]
  double v21; // [sp+48h] [bp-14h]
  double v22; // [sp+50h] [bp-Ch]

  LODWORD(v18) = anl::CScalarParameter::get((anl::CImplicitMagnitude *)((char *)this + 16), a2, a3, a4, a5, a6, a7);
  HIDWORD(v18) = v9;
  LODWORD(v19) = anl::CScalarParameter::get((anl::CImplicitMagnitude *)((char *)this + 32), a2, a3, a4, a5, a6, a7);
  HIDWORD(v19) = v10;
  LODWORD(v20) = anl::CScalarParameter::get((anl::CImplicitMagnitude *)((char *)this + 48), a2, a3, a4, a5, a6, a7);
  HIDWORD(v20) = v11;
  LODWORD(v21) = anl::CScalarParameter::get((anl::CImplicitMagnitude *)((char *)this + 64), a2, a3, a4, a5, a6, a7);
  HIDWORD(v21) = v12;
  LODWORD(v22) = anl::CScalarParameter::get((anl::CImplicitMagnitude *)((char *)this + 80), a2, a3, a4, a5, a6, a7);
  HIDWORD(v22) = v13;
  LODWORD(v14) = anl::CScalarParameter::get((anl::CImplicitMagnitude *)((char *)this + 96), a2, a3, a4, a5, a6, a7);
  HIDWORD(v14) = v15;
  return j_sqrt(v18 * v18 + v19 * v19 + v20 * v20 + v21 * v21 + v22 * v22 + v14 * v14);
}


//======================================================================
// anl::CImplicitMagnitude::CImplicitMagnitude(void)
// address: 0x003214D8   size: 0x3E (62 bytes)
//======================================================================
// Alternative name is '_ZN3anl18CImplicitMagnitudeC1Ev'
_DWORD *__fastcall anl::CImplicitMagnitude::CImplicitMagnitude(_DWORD *this)
{
  *(this + 2) = -350469331;
  *(this + 3) = 1058682594;
  *(this + 6) = 0;
  *(this + 10) = 0;
  *(this + 14) = 0;
  *this = &off_4637F0;
  *(this + 18) = 0;
  *(this + 22) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 12) = 0;
  *(this + 13) = 0;
  *(this + 16) = 0;
  *(this + 17) = 0;
  *(this + 20) = 0;
  *(this + 21) = 0;
  *(this + 24) = 0;
  *(this + 25) = 0;
  *(this + 26) = 0;
  return this;
}


//======================================================================
// anl::CImplicitMagnitude::setX(double)
// address: 0x00321530   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitMagnitude::setX(int this, double a2)
{
  *(_DWORD *)(this + 24) = 0;
  *(double *)(this + 16) = a2;
  return this;
}


//======================================================================
// anl::CImplicitMagnitude::setY(double)
// address: 0x0032153A   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitMagnitude::setY(int this, double a2)
{
  *(_DWORD *)(this + 40) = 0;
  *(double *)(this + 32) = a2;
  return this;
}


//======================================================================
// anl::CImplicitMagnitude::setZ(double)
// address: 0x00321544   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitMagnitude::setZ(int this, double a2)
{
  *(_DWORD *)(this + 56) = 0;
  *(double *)(this + 48) = a2;
  return this;
}


//======================================================================
// anl::CImplicitMagnitude::setW(double)
// address: 0x0032154E   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitMagnitude::setW(int this, double a2)
{
  *(_DWORD *)(this + 72) = 0;
  *(double *)(this + 64) = a2;
  return this;
}


//======================================================================
// anl::CImplicitMagnitude::setU(double)
// address: 0x00321558   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitMagnitude::setU(int this, double a2)
{
  *(_DWORD *)(this + 88) = 0;
  *(double *)(this + 80) = a2;
  return this;
}


//======================================================================
// anl::CImplicitMagnitude::setV(double)
// address: 0x00321562   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitMagnitude::setV(int this, double a2)
{
  *(_DWORD *)(this + 104) = 0;
  *(double *)(this + 96) = a2;
  return this;
}


//======================================================================
// anl::CImplicitMagnitude::setX(anl::CImplicitModuleBase *)
// address: 0x0032156C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitMagnitude::setX(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 24) = a2;
  return this;
}


//======================================================================
// anl::CImplicitMagnitude::setY(anl::CImplicitModuleBase *)
// address: 0x00321570   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitMagnitude::setY(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 40) = a2;
  return this;
}


//======================================================================
// anl::CImplicitMagnitude::setZ(anl::CImplicitModuleBase *)
// address: 0x00321574   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitMagnitude::setZ(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 56) = a2;
  return this;
}


//======================================================================
// anl::CImplicitMagnitude::setW(anl::CImplicitModuleBase *)
// address: 0x00321578   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitMagnitude::setW(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 72) = a2;
  return this;
}


//======================================================================
// anl::CImplicitMagnitude::setU(anl::CImplicitModuleBase *)
// address: 0x0032157C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitMagnitude::setU(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 88) = a2;
  return this;
}


//======================================================================
// anl::CImplicitMagnitude::setV(anl::CImplicitModuleBase *)
// address: 0x00321580   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitMagnitude::setV(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 104) = a2;
  return this;
}

