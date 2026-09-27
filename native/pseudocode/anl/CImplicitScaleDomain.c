// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CImplicitScaleDomain

//======================================================================
// anl::CImplicitScaleDomain::~CImplicitScaleDomain()
// address: 0x00330A8C   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl20CImplicitScaleDomainD1Ev'
void __fastcall anl::CImplicitScaleDomain::~CImplicitScaleDomain(anl::CImplicitScaleDomain *this)
{
  *(_DWORD *)this = &off_462280;
}


//======================================================================
// anl::CImplicitScaleDomain::~CImplicitScaleDomain()
// address: 0x00330A9C   size: 0x16 (22 bytes)
//======================================================================
void __fastcall anl::CImplicitScaleDomain::~CImplicitScaleDomain(anl::CImplicitScaleDomain *this)
{
  *(_DWORD *)this = &off_462280;
  operator delete(this);
}


//======================================================================
// anl::CImplicitScaleDomain::get(double,double)
// address: 0x00330AB8   size: 0x5E (94 bytes)
//======================================================================
int __fastcall anl::CImplicitScaleDomain::get(anl::CImplicitScaleDomain *this, double a2, double a3)
{
  double v6; // r0
  double v7; // r0
  double v9; // [sp+8h] [bp-8h]

  LODWORD(v6) = anl::CScalarParameter::get((anl::CImplicitScaleDomain *)((char *)this + 32), a2, a3);
  v9 = a2 * v6;
  LODWORD(v7) = anl::CScalarParameter::get((anl::CImplicitScaleDomain *)((char *)this + 48), a2, a3);
  return anl::CScalarParameter::get((anl::CImplicitScaleDomain *)((char *)this + 16), v9, a3 * v7);
}


//======================================================================
// anl::CImplicitScaleDomain::get(double,double,double)
// address: 0x00330B16   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall anl::CImplicitScaleDomain::get(anl::CImplicitScaleDomain *this, double a2, double a3, double a4)
{
  double v7; // r0
  double v8; // r0
  double v9; // r0
  double v11; // [sp+10h] [bp-10h]
  double v12; // [sp+18h] [bp-8h]

  LODWORD(v7) = anl::CScalarParameter::get((anl::CImplicitScaleDomain *)((char *)this + 32), a2, a3, a4);
  v11 = a2 * v7;
  LODWORD(v8) = anl::CScalarParameter::get((anl::CImplicitScaleDomain *)((char *)this + 48), a2, a3, a4);
  v12 = a3 * v8;
  LODWORD(v9) = anl::CScalarParameter::get((anl::CImplicitScaleDomain *)((char *)this + 64), a2, a3, a4);
  return anl::CScalarParameter::get((anl::CImplicitScaleDomain *)((char *)this + 16), v11, v12, a4 * v9);
}


//======================================================================
// anl::CImplicitScaleDomain::get(double,double,double,double)
// address: 0x00330BBA   size: 0xF8 (248 bytes)
//======================================================================
int __fastcall anl::CImplicitScaleDomain::get(
        anl::CImplicitScaleDomain *this,
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

  LODWORD(v8) = anl::CScalarParameter::get((anl::CImplicitScaleDomain *)((char *)this + 32), a2, a3, a4, a5);
  v13 = a2 * v8;
  LODWORD(v9) = anl::CScalarParameter::get((anl::CImplicitScaleDomain *)((char *)this + 48), a2, a3, a4, a5);
  v14 = a3 * v9;
  LODWORD(v10) = anl::CScalarParameter::get((anl::CImplicitScaleDomain *)((char *)this + 64), a2, a3, a4, a5);
  v15 = a4 * v10;
  LODWORD(v11) = anl::CScalarParameter::get((anl::CImplicitScaleDomain *)((char *)this + 80), a2, a3, a4, a5);
  return anl::CScalarParameter::get((anl::CImplicitScaleDomain *)((char *)this + 16), v13, v14, v15, a5 * v11);
}


//======================================================================
// anl::CImplicitScaleDomain::get(double,double,double,double,double,double)
// address: 0x00330CB2   size: 0x1BE (446 bytes)
//======================================================================
int __fastcall anl::CImplicitScaleDomain::get(
        anl::CImplicitScaleDomain *this,
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

  LODWORD(v9) = anl::CScalarParameter::get((anl::CImplicitScaleDomain *)((char *)this + 32), a2, a3, a4, a5, a6, a7);
  v17 = a2 * v9;
  LODWORD(v10) = anl::CScalarParameter::get((anl::CImplicitScaleDomain *)((char *)this + 48), a2, a3, a4, a5, a6, a7);
  v18 = a3 * v10;
  LODWORD(v11) = anl::CScalarParameter::get((anl::CImplicitScaleDomain *)((char *)this + 64), a2, a3, a4, a5, a6, a7);
  v19 = a4 * v11;
  LODWORD(v12) = anl::CScalarParameter::get((anl::CImplicitScaleDomain *)((char *)this + 80), a2, a3, a4, a5, a6, a7);
  v20 = a5 * v12;
  LODWORD(v13) = anl::CScalarParameter::get((anl::CImplicitScaleDomain *)((char *)this + 96), a2, a3, a4, a5, a6, a7);
  v21 = a6 * v13;
  LODWORD(v14) = anl::CScalarParameter::get((anl::CImplicitScaleDomain *)((char *)this + 112), a2, a3, a4, a5, a6, a7);
  return anl::CScalarParameter::get((anl::CImplicitScaleDomain *)((char *)this + 16), v17, v18, v19, v20, v21, a7 * v14);
}


//======================================================================
// anl::CImplicitScaleDomain::CImplicitScaleDomain(void)
// address: 0x00330E70   size: 0x48 (72 bytes)
//======================================================================
// Alternative name is '_ZN3anl20CImplicitScaleDomainC1Ev'
_DWORD *__fastcall anl::CImplicitScaleDomain::CImplicitScaleDomain(_DWORD *this)
{
  *(this + 2) = -350469331;
  *(this + 3) = 1058682594;
  *(this + 6) = 0;
  *(this + 10) = 0;
  *(this + 14) = 0;
  *this = &off_463CC8;
  *(this + 18) = 0;
  *(this + 22) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 26) = 0;
  *(this + 8) = 0;
  *(this + 9) = 1072693248;
  *(this + 12) = 0;
  *(this + 13) = 1072693248;
  *(this + 16) = 0;
  *(this + 17) = 1072693248;
  *(this + 20) = 0;
  *(this + 21) = 1072693248;
  *(this + 24) = 0;
  *(this + 25) = 1072693248;
  *(this + 28) = 0;
  *(this + 29) = 1072693248;
  *(this + 30) = 0;
  return this;
}


//======================================================================
// anl::CImplicitScaleDomain::CImplicitScaleDomain(double,double,double,double,double,double)
// address: 0x00330ED8   size: 0x5A (90 bytes)
//======================================================================
// Alternative name is '_ZN3anl20CImplicitScaleDomainC2Edddddd'
int __fastcall anl::CImplicitScaleDomain::CImplicitScaleDomain(
        int this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  *(_DWORD *)(this + 8) = -350469331;
  *(_DWORD *)(this + 12) = 1058682594;
  *(_DWORD *)this = &off_463CC8;
  *(_DWORD *)(this + 16) = 0;
  *(_DWORD *)(this + 20) = 0;
  *(double *)(this + 32) = a2;
  *(_DWORD *)(this + 24) = 0;
  *(double *)(this + 48) = a3;
  *(_DWORD *)(this + 40) = 0;
  *(double *)(this + 64) = a4;
  *(_DWORD *)(this + 56) = 0;
  *(double *)(this + 80) = a5;
  *(_DWORD *)(this + 72) = 0;
  *(double *)(this + 96) = a6;
  *(_DWORD *)(this + 88) = 0;
  *(_DWORD *)(this + 104) = 0;
  *(double *)(this + 112) = a7;
  *(_DWORD *)(this + 120) = 0;
  return this;
}


//======================================================================
// anl::CImplicitScaleDomain::setScale(double,double,double,double,double,double)
// address: 0x00330F50   size: 0x3E (62 bytes)
//======================================================================
int __fastcall anl::CImplicitScaleDomain::setScale(
        int this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  *(double *)(this + 32) = a2;
  *(_DWORD *)(this + 40) = 0;
  *(double *)(this + 48) = a3;
  *(_DWORD *)(this + 56) = 0;
  *(double *)(this + 64) = a4;
  *(_DWORD *)(this + 72) = 0;
  *(double *)(this + 80) = a5;
  *(_DWORD *)(this + 88) = 0;
  *(double *)(this + 96) = a6;
  *(_DWORD *)(this + 104) = 0;
  *(_DWORD *)(this + 120) = 0;
  *(double *)(this + 112) = a7;
  return this;
}


//======================================================================
// anl::CImplicitScaleDomain::setXScale(double)
// address: 0x00330F8E   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitScaleDomain::setXScale(int this, double a2)
{
  *(_DWORD *)(this + 40) = 0;
  *(double *)(this + 32) = a2;
  return this;
}


//======================================================================
// anl::CImplicitScaleDomain::setYScale(double)
// address: 0x00330F98   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitScaleDomain::setYScale(int this, double a2)
{
  *(_DWORD *)(this + 56) = 0;
  *(double *)(this + 48) = a2;
  return this;
}


//======================================================================
// anl::CImplicitScaleDomain::setZScale(double)
// address: 0x00330FA2   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitScaleDomain::setZScale(int this, double a2)
{
  *(_DWORD *)(this + 72) = 0;
  *(double *)(this + 64) = a2;
  return this;
}


//======================================================================
// anl::CImplicitScaleDomain::setWScale(double)
// address: 0x00330FAC   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitScaleDomain::setWScale(int this, double a2)
{
  *(_DWORD *)(this + 88) = 0;
  *(double *)(this + 80) = a2;
  return this;
}


//======================================================================
// anl::CImplicitScaleDomain::setUScale(double)
// address: 0x00330FB6   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitScaleDomain::setUScale(int this, double a2)
{
  *(_DWORD *)(this + 104) = 0;
  *(double *)(this + 96) = a2;
  return this;
}


//======================================================================
// anl::CImplicitScaleDomain::setVScale(double)
// address: 0x00330FC0   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitScaleDomain::setVScale(int this, double a2)
{
  *(_DWORD *)(this + 120) = 0;
  *(double *)(this + 112) = a2;
  return this;
}


//======================================================================
// anl::CImplicitScaleDomain::setXScale(anl::CImplicitModuleBase *)
// address: 0x00330FCA   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitScaleDomain::setXScale(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 40) = a2;
  return this;
}


//======================================================================
// anl::CImplicitScaleDomain::setYScale(anl::CImplicitModuleBase *)
// address: 0x00330FCE   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitScaleDomain::setYScale(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 56) = a2;
  return this;
}


//======================================================================
// anl::CImplicitScaleDomain::setZScale(anl::CImplicitModuleBase *)
// address: 0x00330FD2   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitScaleDomain::setZScale(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 72) = a2;
  return this;
}


//======================================================================
// anl::CImplicitScaleDomain::setWScale(anl::CImplicitModuleBase *)
// address: 0x00330FD6   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitScaleDomain::setWScale(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 88) = a2;
  return this;
}


//======================================================================
// anl::CImplicitScaleDomain::setUScale(anl::CImplicitModuleBase *)
// address: 0x00330FDA   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitScaleDomain::setUScale(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 104) = a2;
  return this;
}


//======================================================================
// anl::CImplicitScaleDomain::setVScale(anl::CImplicitModuleBase *)
// address: 0x00330FDE   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitScaleDomain::setVScale(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 120) = a2;
  return this;
}


//======================================================================
// anl::CImplicitScaleDomain::setSource(anl::CImplicitModuleBase *)
// address: 0x00330FE2   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitScaleDomain::setSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 24) = a2;
  return this;
}


//======================================================================
// anl::CImplicitScaleDomain::setSource(double)
// address: 0x00330FE6   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitScaleDomain::setSource(int this, double a2)
{
  *(_DWORD *)(this + 24) = 0;
  *(double *)(this + 16) = a2;
  return this;
}

