// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CImplicitTranslateDomain

//======================================================================
// anl::CImplicitTranslateDomain::~CImplicitTranslateDomain()
// address: 0x003305EC   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl24CImplicitTranslateDomainD1Ev'
void __fastcall anl::CImplicitTranslateDomain::~CImplicitTranslateDomain(anl::CImplicitTranslateDomain *this)
{
  *(_DWORD *)this = &off_462280;
}


//======================================================================
// anl::CImplicitTranslateDomain::~CImplicitTranslateDomain()
// address: 0x003305FC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall anl::CImplicitTranslateDomain::~CImplicitTranslateDomain(anl::CImplicitTranslateDomain *this)
{
  anl::CImplicitTranslateDomain::~CImplicitTranslateDomain(this);
  operator delete(this);
}


//======================================================================
// anl::CImplicitTranslateDomain::get(double,double)
// address: 0x0033060E   size: 0x5E (94 bytes)
//======================================================================
int __fastcall anl::CImplicitTranslateDomain::get(anl::CImplicitTranslateDomain *this, double a2, double a3)
{
  double v6; // r0
  double v7; // r0
  double v9; // [sp+8h] [bp-8h]

  LODWORD(v6) = anl::CScalarParameter::get((anl::CImplicitTranslateDomain *)((char *)this + 32), a2, a3);
  v9 = a2 + v6;
  LODWORD(v7) = anl::CScalarParameter::get((anl::CImplicitTranslateDomain *)((char *)this + 48), a2, a3);
  return anl::CScalarParameter::get((anl::CImplicitTranslateDomain *)((char *)this + 16), v9, a3 + v7);
}


//======================================================================
// anl::CImplicitTranslateDomain::get(double,double,double)
// address: 0x0033066C   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall anl::CImplicitTranslateDomain::get(anl::CImplicitTranslateDomain *this, double a2, double a3, double a4)
{
  double v7; // r0
  double v8; // r0
  double v9; // r0
  double v11; // [sp+10h] [bp-10h]
  double v12; // [sp+18h] [bp-8h]

  LODWORD(v7) = anl::CScalarParameter::get((anl::CImplicitTranslateDomain *)((char *)this + 32), a2, a3, a4);
  v11 = a2 + v7;
  LODWORD(v8) = anl::CScalarParameter::get((anl::CImplicitTranslateDomain *)((char *)this + 48), a2, a3, a4);
  v12 = a3 + v8;
  LODWORD(v9) = anl::CScalarParameter::get((anl::CImplicitTranslateDomain *)((char *)this + 64), a2, a3, a4);
  return anl::CScalarParameter::get((anl::CImplicitTranslateDomain *)((char *)this + 16), v11, v12, a4 + v9);
}


//======================================================================
// anl::CImplicitTranslateDomain::get(double,double,double,double)
// address: 0x00330710   size: 0xF8 (248 bytes)
//======================================================================
int __fastcall anl::CImplicitTranslateDomain::get(
        anl::CImplicitTranslateDomain *this,
        double a2,
        double a3,
        double a4,
        double a5)
{
  double v8; // r0
  double v9; // r0
  double v10; // r0
  double v11; // r0
  double v13; // [sp+18h] [bp-18h]
  double v14; // [sp+20h] [bp-10h]
  double v15; // [sp+28h] [bp-8h]

  LODWORD(v8) = anl::CScalarParameter::get((anl::CImplicitTranslateDomain *)((char *)this + 32), a2, a3, a4, a5);
  v13 = a2 + v8;
  LODWORD(v9) = anl::CScalarParameter::get((anl::CImplicitTranslateDomain *)((char *)this + 48), a2, a3, a4, a5);
  v14 = a3 + v9;
  LODWORD(v10) = anl::CScalarParameter::get((anl::CImplicitTranslateDomain *)((char *)this + 64), a2, a3, a4, a5);
  v15 = a4 + v10;
  LODWORD(v11) = anl::CScalarParameter::get((anl::CImplicitTranslateDomain *)((char *)this + 80), a2, a3, a4, a5);
  return anl::CScalarParameter::get((anl::CImplicitTranslateDomain *)((char *)this + 16), v13, v14, v15, a5 + v11);
}


//======================================================================
// anl::CImplicitTranslateDomain::get(double,double,double,double,double,double)
// address: 0x00330808   size: 0x1BE (446 bytes)
//======================================================================
int __fastcall anl::CImplicitTranslateDomain::get(
        anl::CImplicitTranslateDomain *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  double v9; // r0
  double v10; // r0
  double v11; // r0
  double v12; // r0
  double v13; // r0
  double v14; // r0
  double v17; // [sp+30h] [bp-2Ch]
  double v18; // [sp+38h] [bp-24h]
  double v19; // [sp+40h] [bp-1Ch]
  double v20; // [sp+48h] [bp-14h]
  double v21; // [sp+50h] [bp-Ch]

  LODWORD(v9) = anl::CScalarParameter::get((anl::CImplicitTranslateDomain *)((char *)this + 32), a2, a3, a4, a5, a6, a7);
  v17 = a2 + v9;
  LODWORD(v10) = anl::CScalarParameter::get(
                   (anl::CImplicitTranslateDomain *)((char *)this + 48),
                   a2,
                   a3,
                   a4,
                   a5,
                   a6,
                   a7);
  v18 = a3 + v10;
  LODWORD(v11) = anl::CScalarParameter::get(
                   (anl::CImplicitTranslateDomain *)((char *)this + 64),
                   a2,
                   a3,
                   a4,
                   a5,
                   a6,
                   a7);
  v19 = a4 + v11;
  LODWORD(v12) = anl::CScalarParameter::get(
                   (anl::CImplicitTranslateDomain *)((char *)this + 80),
                   a2,
                   a3,
                   a4,
                   a5,
                   a6,
                   a7);
  v20 = a5 + v12;
  LODWORD(v13) = anl::CScalarParameter::get(
                   (anl::CImplicitTranslateDomain *)((char *)this + 96),
                   a2,
                   a3,
                   a4,
                   a5,
                   a6,
                   a7);
  v21 = a6 + v13;
  LODWORD(v14) = anl::CScalarParameter::get(
                   (anl::CImplicitTranslateDomain *)((char *)this + 112),
                   a2,
                   a3,
                   a4,
                   a5,
                   a6,
                   a7);
  return anl::CScalarParameter::get(
           (anl::CImplicitTranslateDomain *)((char *)this + 16),
           v17,
           v18,
           v19,
           v20,
           v21,
           a7 + v14);
}


//======================================================================
// anl::CImplicitTranslateDomain::CImplicitTranslateDomain(void)
// address: 0x003309C8   size: 0x44 (68 bytes)
//======================================================================
// Alternative name is '_ZN3anl24CImplicitTranslateDomainC2Ev'
_DWORD *__fastcall anl::CImplicitTranslateDomain::CImplicitTranslateDomain(_DWORD *this)
{
  *(this + 2) = -350469331;
  *(this + 3) = 1058682594;
  *(this + 6) = 0;
  *(this + 10) = 0;
  *(this + 14) = 0;
  *this = &off_463C90;
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
  *(this + 28) = 0;
  *(this + 29) = 0;
  *(this + 30) = 0;
  return this;
}


//======================================================================
// anl::CImplicitTranslateDomain::setXAxisSource(anl::CImplicitModuleBase *)
// address: 0x00330A28   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitTranslateDomain::setXAxisSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 40) = a2;
  return this;
}


//======================================================================
// anl::CImplicitTranslateDomain::setYAxisSource(anl::CImplicitModuleBase *)
// address: 0x00330A2C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitTranslateDomain::setYAxisSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 56) = a2;
  return this;
}


//======================================================================
// anl::CImplicitTranslateDomain::setZAxisSource(anl::CImplicitModuleBase *)
// address: 0x00330A30   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitTranslateDomain::setZAxisSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 72) = a2;
  return this;
}


//======================================================================
// anl::CImplicitTranslateDomain::setWAxisSource(anl::CImplicitModuleBase *)
// address: 0x00330A34   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitTranslateDomain::setWAxisSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 88) = a2;
  return this;
}


//======================================================================
// anl::CImplicitTranslateDomain::setUAxisSource(anl::CImplicitModuleBase *)
// address: 0x00330A38   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitTranslateDomain::setUAxisSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 104) = a2;
  return this;
}


//======================================================================
// anl::CImplicitTranslateDomain::setVAxisSource(anl::CImplicitModuleBase *)
// address: 0x00330A3C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitTranslateDomain::setVAxisSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 120) = a2;
  return this;
}


//======================================================================
// anl::CImplicitTranslateDomain::setXAxisSource(double)
// address: 0x00330A40   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitTranslateDomain::setXAxisSource(int this, double a2)
{
  *(_DWORD *)(this + 40) = 0;
  *(double *)(this + 32) = a2;
  return this;
}


//======================================================================
// anl::CImplicitTranslateDomain::setYAxisSource(double)
// address: 0x00330A4A   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitTranslateDomain::setYAxisSource(int this, double a2)
{
  *(_DWORD *)(this + 56) = 0;
  *(double *)(this + 48) = a2;
  return this;
}


//======================================================================
// anl::CImplicitTranslateDomain::setZAxisSource(double)
// address: 0x00330A54   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitTranslateDomain::setZAxisSource(int this, double a2)
{
  *(_DWORD *)(this + 72) = 0;
  *(double *)(this + 64) = a2;
  return this;
}


//======================================================================
// anl::CImplicitTranslateDomain::setWAxisSource(double)
// address: 0x00330A5E   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitTranslateDomain::setWAxisSource(int this, double a2)
{
  *(_DWORD *)(this + 88) = 0;
  *(double *)(this + 80) = a2;
  return this;
}


//======================================================================
// anl::CImplicitTranslateDomain::setUAxisSource(double)
// address: 0x00330A68   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitTranslateDomain::setUAxisSource(int this, double a2)
{
  *(_DWORD *)(this + 104) = 0;
  *(double *)(this + 96) = a2;
  return this;
}


//======================================================================
// anl::CImplicitTranslateDomain::setVAxisSource(double)
// address: 0x00330A72   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitTranslateDomain::setVAxisSource(int this, double a2)
{
  *(_DWORD *)(this + 120) = 0;
  *(double *)(this + 112) = a2;
  return this;
}


//======================================================================
// anl::CImplicitTranslateDomain::setSource(anl::CImplicitModuleBase *)
// address: 0x00330A7C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitTranslateDomain::setSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 24) = a2;
  return this;
}


//======================================================================
// anl::CImplicitTranslateDomain::setSource(double)
// address: 0x00330A80   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitTranslateDomain::setSource(int this, double a2)
{
  *(_DWORD *)(this + 24) = 0;
  *(double *)(this + 16) = a2;
  return this;
}

