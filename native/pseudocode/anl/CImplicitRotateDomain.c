// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CImplicitRotateDomain

//======================================================================
// anl::CImplicitRotateDomain::~CImplicitRotateDomain()
// address: 0x0032AE1C   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl21CImplicitRotateDomainD1Ev'
void __fastcall anl::CImplicitRotateDomain::~CImplicitRotateDomain(anl::CImplicitRotateDomain *this)
{
  *(_DWORD *)this = &off_462280;
}


//======================================================================
// anl::CImplicitRotateDomain::~CImplicitRotateDomain()
// address: 0x0032AE2C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall anl::CImplicitRotateDomain::~CImplicitRotateDomain(anl::CImplicitRotateDomain *this)
{
  anl::CImplicitRotateDomain::~CImplicitRotateDomain(this);
  operator delete(this);
}


//======================================================================
// anl::CImplicitRotateDomain::get(double,double)
// address: 0x0032AE40   size: 0xB6 (182 bytes)
//======================================================================
int __fastcall anl::CImplicitRotateDomain::get(anl::CImplicitRotateDomain *this, double a2, double a3)
{
  double v5; // r0
  double v6; // r4
  double v9; // [sp+10h] [bp-1Ch]
  double v10; // [sp+18h] [bp-14h]

  LODWORD(v5) = anl::CScalarParameter::get((anl::CImplicitRotateDomain *)((char *)this + 136), a2, a3);
  v6 = v5 * 360.0 * 3.14159265 / 180.0;
  v9 = j_cos(v6);
  v10 = j_sin(v6);
  return anl::CScalarParameter::get(
           (anl::CImplicitRotateDomain *)((char *)this + 152),
           a2 * v9 - a3 * v10,
           a3 * v9 + a2 * v10);
}


//======================================================================
// anl::CImplicitRotateDomain::CImplicitRotateDomain(double,double,double,double)
// address: 0x0032AF10   size: 0x4E (78 bytes)
//======================================================================
// Alternative name is '_ZN3anl21CImplicitRotateDomainC1Edddd'
int __fastcall anl::CImplicitRotateDomain::CImplicitRotateDomain(int this, double a2, double a3, double a4, double a5)
{
  *(_DWORD *)(this + 8) = -350469331;
  *(_DWORD *)(this + 12) = 1058682594;
  *(double *)(this + 88) = a2;
  *(_DWORD *)this = &off_463A78;
  *(double *)(this + 104) = a3;
  *(double *)(this + 120) = a4;
  *(_DWORD *)(this + 96) = 0;
  *(_DWORD *)(this + 112) = 0;
  *(_DWORD *)(this + 128) = 0;
  *(double *)(this + 136) = a5;
  *(_DWORD *)(this + 144) = 0;
  *(_DWORD *)(this + 160) = 0;
  *(_DWORD *)(this + 152) = 0;
  *(_DWORD *)(this + 156) = 0;
  return this;
}


//======================================================================
// anl::CImplicitRotateDomain::setSource(anl::CImplicitModuleBase *)
// address: 0x0032AF78   size: 0x6 (6 bytes)
//======================================================================
_DWORD *__fastcall anl::CImplicitRotateDomain::setSource(
        anl::CImplicitRotateDomain *this,
        anl::CImplicitModuleBase *a2)
{
  _DWORD *result; // r0

  result = (_DWORD *)((char *)this + 160);
  *result = a2;
  return result;
}


//======================================================================
// anl::CImplicitRotateDomain::setSource(double)
// address: 0x0032AF7E   size: 0xC (12 bytes)
//======================================================================
char *__fastcall anl::CImplicitRotateDomain::setSource(anl::CImplicitRotateDomain *this, double a2)
{
  char *result; // r0

  result = (char *)this + 152;
  *((_DWORD *)result + 2) = 0;
  *(double *)result = a2;
  return result;
}


//======================================================================
// anl::CImplicitRotateDomain::calculateRotMatrix(double,double)
// address: 0x0032AF90   size: 0x214 (532 bytes)
//======================================================================
double __fastcall anl::CImplicitRotateDomain::calculateRotMatrix(
        anl::CImplicitRotateDomain *this,
        double a2,
        double a3)
{
  double v6; // r0
  int v7; // r1
  int v8; // r1
  int v9; // r0
  unsigned int v10; // r1
  unsigned int v11; // r7
  double v12; // r4
  double v13; // r4
  double v14; // r0
  double v15; // r4
  double result; // r0
  double v17; // [sp+8h] [bp-3Ch]
  double x; // [sp+10h] [bp-34h]
  double xa; // [sp+10h] [bp-34h]
  double v20; // [sp+1Ch] [bp-28h]
  int v21; // [sp+24h] [bp-20h]
  double v22; // [sp+28h] [bp-1Ch]
  double v23; // [sp+38h] [bp-Ch]

  LODWORD(v6) = anl::CScalarParameter::get((anl::CImplicitRotateDomain *)((char *)this + 136), a2, a3);
  x = v6 * 360.0 * 3.14159265 / 180.0;
  LODWORD(v22) = anl::CScalarParameter::get((anl::CImplicitRotateDomain *)((char *)this + 88), a2, a3);
  HIDWORD(v22) = v7;
  LODWORD(v20) = anl::CScalarParameter::get((anl::CImplicitRotateDomain *)((char *)this + 104), a2, a3);
  HIDWORD(v20) = v8;
  v9 = anl::CScalarParameter::get((anl::CImplicitRotateDomain *)((char *)this + 120), a2, a3);
  v11 = v10;
  v21 = v9;
  v12 = j_cos(x);
  v17 = j_sin(x);
  xa = 1.0 - v12;
  *((double *)this + 2) = (1.0 - v12) * (v22 * v22 - 1.0) + 1.0;
  v13 = (1.0 - v12) * v22;
  LODWORD(v14) = v21;
  HIDWORD(v14) = v11 + 0x80000000;
  *((double *)this + 5) = v14 * v17 + v13 * v20;
  v23 = v13 * COERCE_DOUBLE(__PAIR64__(v11, v21));
  *((double *)this + 8) = v20 * v17 + v13 * COERCE_DOUBLE(__PAIR64__(v11, v21));
  *((double *)this + 3) = COERCE_DOUBLE(__PAIR64__(v11, v21)) * v17 + v13 * v20;
  *((double *)this + 6) = xa * (v20 * v20 - 1.0) + 1.0;
  v15 = xa * v20 * COERCE_DOUBLE(__PAIR64__(v11, v21));
  *((double *)this + 9) = COERCE_DOUBLE(*(_QWORD *)&v22 + 0x8000000000000000LL) * v17 + v15;
  *((double *)this + 4) = COERCE_DOUBLE(*(_QWORD *)&v20 + 0x8000000000000000LL) * v17 + v23;
  *((double *)this + 7) = v22 * v17 + v15;
  result = xa * (COERCE_DOUBLE(__PAIR64__(v11, v21)) * COERCE_DOUBLE(__PAIR64__(v11, v21)) - 1.0) + 1.0;
  *((double *)this + 10) = result;
  return result;
}


//======================================================================
// anl::CImplicitRotateDomain::calculateRotMatrix(double,double,double)
// address: 0x0032B1C8   size: 0x236 (566 bytes)
//======================================================================
double __fastcall anl::CImplicitRotateDomain::calculateRotMatrix(
        anl::CImplicitRotateDomain *this,
        double a2,
        double a3,
        double a4)
{
  double v7; // r0
  int v8; // r1
  int v9; // r7
  unsigned int v10; // r1
  unsigned int v11; // r1
  double v12; // r4
  double v13; // r4
  double v14; // r0
  double v15; // r4
  double result; // r0
  double v17; // [sp+10h] [bp-3Ch]
  int v18; // [sp+1Ch] [bp-30h]
  double x; // [sp+20h] [bp-2Ch]
  double xa; // [sp+20h] [bp-2Ch]
  unsigned int v21; // [sp+28h] [bp-24h]
  unsigned int v22; // [sp+2Ch] [bp-20h]
  double v23; // [sp+30h] [bp-1Ch]
  double v24; // [sp+40h] [bp-Ch]

  LODWORD(v7) = anl::CScalarParameter::get((anl::CImplicitRotateDomain *)((char *)this + 136), a2, a3, a4);
  x = v7 * 360.0 * 3.14159265 / 180.0;
  LODWORD(v23) = anl::CScalarParameter::get((anl::CImplicitRotateDomain *)((char *)this + 88), a2, a3, a4);
  HIDWORD(v23) = v8;
  v9 = anl::CScalarParameter::get((anl::CImplicitRotateDomain *)((char *)this + 104), a2, a3, a4);
  v21 = v10;
  v18 = anl::CScalarParameter::get((anl::CImplicitRotateDomain *)((char *)this + 120), a2, a3, a4);
  v22 = v11;
  v12 = j_cos(x);
  v17 = j_sin(x);
  xa = 1.0 - v12;
  *((double *)this + 2) = (1.0 - v12) * (v23 * v23 - 1.0) + 1.0;
  v13 = (1.0 - v12) * v23;
  LODWORD(v14) = v18;
  HIDWORD(v14) = v22 + 0x80000000;
  *((double *)this + 5) = v14 * v17 + v13 * COERCE_DOUBLE(__PAIR64__(v21, v9));
  v24 = v13 * COERCE_DOUBLE(__PAIR64__(v22, v18));
  *((double *)this + 8) = COERCE_DOUBLE(__PAIR64__(v21, v9)) * v17 + v13 * COERCE_DOUBLE(__PAIR64__(v22, v18));
  *((double *)this + 3) = COERCE_DOUBLE(__PAIR64__(v22, v18)) * v17 + v13 * COERCE_DOUBLE(__PAIR64__(v21, v9));
  *((double *)this + 6) = xa * (COERCE_DOUBLE(__PAIR64__(v21, v9)) * COERCE_DOUBLE(__PAIR64__(v21, v9)) - 1.0) + 1.0;
  v15 = xa * COERCE_DOUBLE(__PAIR64__(v21, v9)) * COERCE_DOUBLE(__PAIR64__(v22, v18));
  *((double *)this + 9) = COERCE_DOUBLE(*(_QWORD *)&v23 + 0x8000000000000000LL) * v17 + v15;
  LODWORD(v14) = v9;
  HIDWORD(v14) = v21 + 0x80000000;
  *((double *)this + 4) = v14 * v17 + v24;
  *((double *)this + 7) = v23 * v17 + v15;
  result = xa * (COERCE_DOUBLE(__PAIR64__(v22, v18)) * COERCE_DOUBLE(__PAIR64__(v22, v18)) - 1.0) + 1.0;
  *((double *)this + 10) = result;
  return result;
}


//======================================================================
// anl::CImplicitRotateDomain::get(double,double,double)
// address: 0x0032B420   size: 0x10C (268 bytes)
//======================================================================
int __fastcall anl::CImplicitRotateDomain::get(anl::CImplicitRotateDomain *this, double a2, double a3, double a4)
{
  anl::CImplicitRotateDomain::calculateRotMatrix(this, a2, a3, a4);
  return anl::CScalarParameter::get(
           (anl::CImplicitRotateDomain *)((char *)this + 152),
           a2 * *((double *)this + 2) + a3 * *((double *)this + 5) + a4 * *((double *)this + 8),
           a2 * *((double *)this + 3) + a3 * *((double *)this + 6) + a4 * *((double *)this + 9),
           a2 * *((double *)this + 4) + a3 * *((double *)this + 7) + a4 * *((double *)this + 10));
}


//======================================================================
// anl::CImplicitRotateDomain::calculateRotMatrix(double,double,double,double)
// address: 0x0032B530   size: 0x256 (598 bytes)
//======================================================================
double __fastcall anl::CImplicitRotateDomain::calculateRotMatrix(
        anl::CImplicitRotateDomain *this,
        double a2,
        double a3,
        double a4,
        double a5)
{
  double v8; // r0
  int v9; // r1
  int v10; // r7
  unsigned int v11; // r1
  unsigned int v12; // r1
  double v13; // r4
  double v14; // r4
  double v15; // r0
  double v16; // r4
  double result; // r0
  double v18; // [sp+18h] [bp-3Ch]
  int v19; // [sp+24h] [bp-30h]
  double x; // [sp+28h] [bp-2Ch]
  double xa; // [sp+28h] [bp-2Ch]
  unsigned int v22; // [sp+30h] [bp-24h]
  unsigned int v23; // [sp+34h] [bp-20h]
  double v24; // [sp+38h] [bp-1Ch]
  double v25; // [sp+48h] [bp-Ch]

  LODWORD(v8) = anl::CScalarParameter::get((anl::CImplicitRotateDomain *)((char *)this + 136), a2, a3, a4, a5);
  x = v8 * 360.0 * 3.14159265 / 180.0;
  LODWORD(v24) = anl::CScalarParameter::get((anl::CImplicitRotateDomain *)((char *)this + 88), a2, a3, a4, a5);
  HIDWORD(v24) = v9;
  v10 = anl::CScalarParameter::get((anl::CImplicitRotateDomain *)((char *)this + 104), a2, a3, a4, a5);
  v23 = v11;
  v19 = anl::CScalarParameter::get((anl::CImplicitRotateDomain *)((char *)this + 120), a2, a3, a4, a5);
  v22 = v12;
  v13 = j_cos(x);
  v18 = j_sin(x);
  xa = 1.0 - v13;
  *((double *)this + 2) = (1.0 - v13) * (v24 * v24 - 1.0) + 1.0;
  v14 = (1.0 - v13) * v24;
  LODWORD(v15) = v19;
  HIDWORD(v15) = v22 + 0x80000000;
  *((double *)this + 5) = v15 * v18 + v14 * COERCE_DOUBLE(__PAIR64__(v23, v10));
  v25 = v14 * COERCE_DOUBLE(__PAIR64__(v22, v19));
  *((double *)this + 8) = COERCE_DOUBLE(__PAIR64__(v23, v10)) * v18 + v14 * COERCE_DOUBLE(__PAIR64__(v22, v19));
  *((double *)this + 3) = COERCE_DOUBLE(__PAIR64__(v22, v19)) * v18 + v14 * COERCE_DOUBLE(__PAIR64__(v23, v10));
  *((double *)this + 6) = xa * (COERCE_DOUBLE(__PAIR64__(v23, v10)) * COERCE_DOUBLE(__PAIR64__(v23, v10)) - 1.0) + 1.0;
  v16 = xa * COERCE_DOUBLE(__PAIR64__(v23, v10)) * COERCE_DOUBLE(__PAIR64__(v22, v19));
  *((double *)this + 9) = COERCE_DOUBLE(*(_QWORD *)&v24 + 0x8000000000000000LL) * v18 + v16;
  LODWORD(v15) = v10;
  HIDWORD(v15) = v23 + 0x80000000;
  *((double *)this + 4) = v15 * v18 + v25;
  *((double *)this + 7) = v24 * v18 + v16;
  result = xa * (COERCE_DOUBLE(__PAIR64__(v22, v19)) * COERCE_DOUBLE(__PAIR64__(v22, v19)) - 1.0) + 1.0;
  *((double *)this + 10) = result;
  return result;
}


//======================================================================
// anl::CImplicitRotateDomain::get(double,double,double,double)
// address: 0x0032B7A8   size: 0x11C (284 bytes)
//======================================================================
int __fastcall anl::CImplicitRotateDomain::get(
        anl::CImplicitRotateDomain *this,
        double a2,
        double a3,
        double a4,
        double a5)
{
  anl::CImplicitRotateDomain::calculateRotMatrix(this, a2, a3, a4, a5);
  return anl::CScalarParameter::get(
           (anl::CImplicitRotateDomain *)((char *)this + 152),
           a2 * *((double *)this + 2) + a3 * *((double *)this + 5) + a4 * *((double *)this + 8),
           a2 * *((double *)this + 3) + a3 * *((double *)this + 6) + a4 * *((double *)this + 9),
           a2 * *((double *)this + 4) + a3 * *((double *)this + 7) + a4 * *((double *)this + 10),
           a5);
}


//======================================================================
// anl::CImplicitRotateDomain::calculateRotMatrix(double,double,double,double,double,double)
// address: 0x0032B8C8   size: 0x296 (662 bytes)
//======================================================================
double __fastcall anl::CImplicitRotateDomain::calculateRotMatrix(
        anl::CImplicitRotateDomain *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  double v10; // r0
  int v11; // r1
  int v12; // r7
  unsigned int v13; // r1
  unsigned int v14; // r1
  double v15; // r4
  double v16; // r4
  double v17; // r0
  double v18; // r4
  double result; // r0
  double v20; // [sp+28h] [bp-3Ch]
  int v21; // [sp+34h] [bp-30h]
  double v22; // [sp+38h] [bp-2Ch]
  unsigned int v23; // [sp+48h] [bp-1Ch]
  unsigned int v24; // [sp+4Ch] [bp-18h]
  double v25; // [sp+50h] [bp-14h]
  double x; // [sp+58h] [bp-Ch]
  double xa; // [sp+58h] [bp-Ch]

  LODWORD(v10) = anl::CScalarParameter::get((anl::CImplicitRotateDomain *)((char *)this + 136), a2, a3, a4, a5, a6, a7);
  x = v10 * 360.0 * 3.14159265 / 180.0;
  LODWORD(v25) = anl::CScalarParameter::get((anl::CImplicitRotateDomain *)((char *)this + 88), a2, a3, a4, a5, a6, a7);
  HIDWORD(v25) = v11;
  v12 = anl::CScalarParameter::get((anl::CImplicitRotateDomain *)((char *)this + 104), a2, a3, a4, a5, a6, a7);
  v24 = v13;
  v21 = anl::CScalarParameter::get((anl::CImplicitRotateDomain *)((char *)this + 120), a2, a3, a4, a5, a6, a7);
  v23 = v14;
  v15 = j_cos(x);
  v20 = j_sin(x);
  v22 = 1.0 - v15;
  *((double *)this + 2) = (1.0 - v15) * (v25 * v25 - 1.0) + 1.0;
  v16 = (1.0 - v15) * v25;
  LODWORD(v17) = v21;
  HIDWORD(v17) = v23 + 0x80000000;
  *((double *)this + 5) = v17 * v20 + v16 * COERCE_DOUBLE(__PAIR64__(v24, v12));
  xa = v16 * COERCE_DOUBLE(__PAIR64__(v23, v21));
  *((double *)this + 8) = COERCE_DOUBLE(__PAIR64__(v24, v12)) * v20 + v16 * COERCE_DOUBLE(__PAIR64__(v23, v21));
  *((double *)this + 3) = COERCE_DOUBLE(__PAIR64__(v23, v21)) * v20 + v16 * COERCE_DOUBLE(__PAIR64__(v24, v12));
  *((double *)this + 6) = v22 * (COERCE_DOUBLE(__PAIR64__(v24, v12)) * COERCE_DOUBLE(__PAIR64__(v24, v12)) - 1.0) + 1.0;
  v18 = v22 * COERCE_DOUBLE(__PAIR64__(v24, v12)) * COERCE_DOUBLE(__PAIR64__(v23, v21));
  *((double *)this + 9) = COERCE_DOUBLE(*(_QWORD *)&v25 + 0x8000000000000000LL) * v20 + v18;
  LODWORD(v17) = v12;
  HIDWORD(v17) = v24 + 0x80000000;
  *((double *)this + 4) = v17 * v20 + xa;
  *((double *)this + 7) = v25 * v20 + v18;
  result = v22 * (COERCE_DOUBLE(__PAIR64__(v23, v21)) * COERCE_DOUBLE(__PAIR64__(v23, v21)) - 1.0) + 1.0;
  *((double *)this + 10) = result;
  return result;
}


//======================================================================
// anl::CImplicitRotateDomain::get(double,double,double,double,double,double)
// address: 0x0032BB80   size: 0x13C (316 bytes)
//======================================================================
int __fastcall anl::CImplicitRotateDomain::get(
        anl::CImplicitRotateDomain *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  anl::CImplicitRotateDomain::calculateRotMatrix(this, a2, a3, a4, a5, a6, a7);
  return anl::CScalarParameter::get(
           (anl::CImplicitRotateDomain *)((char *)this + 152),
           a2 * *((double *)this + 2) + a3 * *((double *)this + 5) + a4 * *((double *)this + 8),
           a2 * *((double *)this + 3) + a3 * *((double *)this + 6) + a4 * *((double *)this + 9),
           a2 * *((double *)this + 4) + a3 * *((double *)this + 7) + a4 * *((double *)this + 10),
           a5,
           a6,
           a7);
}


//======================================================================
// anl::CImplicitRotateDomain::setAxis(double,double,double)
// address: 0x0032BCBC   size: 0x22 (34 bytes)
//======================================================================
int __fastcall anl::CImplicitRotateDomain::setAxis(int this, double a2, double a3, double a4)
{
  *(double *)(this + 88) = a2;
  *(double *)(this + 104) = a3;
  *(_DWORD *)(this + 96) = 0;
  *(_DWORD *)(this + 112) = 0;
  *(_DWORD *)(this + 128) = 0;
  *(double *)(this + 120) = a4;
  return this;
}


//======================================================================
// anl::CImplicitRotateDomain::setAxis(anl::CImplicitModuleBase *,anl::CImplicitModuleBase *,anl::CImplicitModuleBase *)
// address: 0x0032BCDE   size: 0xA (10 bytes)
//======================================================================
char *__fastcall anl::CImplicitRotateDomain::setAxis(
        anl::CImplicitRotateDomain *this,
        anl::CImplicitModuleBase *a2,
        anl::CImplicitModuleBase *a3,
        anl::CImplicitModuleBase *a4)
{
  char *result; // r0

  *((_DWORD *)this + 24) = a2;
  *((_DWORD *)this + 28) = a3;
  result = (char *)this + 4;
  *((_DWORD *)result + 31) = a4;
  return result;
}


//======================================================================
// anl::CImplicitRotateDomain::setAxisX(double)
// address: 0x0032BCE8   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitRotateDomain::setAxisX(int this, double a2)
{
  *(_DWORD *)(this + 96) = 0;
  *(double *)(this + 88) = a2;
  return this;
}


//======================================================================
// anl::CImplicitRotateDomain::setAxisY(double)
// address: 0x0032BCF2   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitRotateDomain::setAxisY(int this, double a2)
{
  *(_DWORD *)(this + 112) = 0;
  *(double *)(this + 104) = a2;
  return this;
}


//======================================================================
// anl::CImplicitRotateDomain::setAxisZ(double)
// address: 0x0032BCFC   size: 0xE (14 bytes)
//======================================================================
int __fastcall anl::CImplicitRotateDomain::setAxisZ(int this, double a2)
{
  *(_DWORD *)(this + 128) = 0;
  *(double *)(this + 120) = a2;
  return this;
}


//======================================================================
// anl::CImplicitRotateDomain::setAxisX(anl::CImplicitModuleBase *)
// address: 0x0032BD0A   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitRotateDomain::setAxisX(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 96) = a2;
  return this;
}


//======================================================================
// anl::CImplicitRotateDomain::setAxisY(anl::CImplicitModuleBase *)
// address: 0x0032BD0E   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitRotateDomain::setAxisY(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 112) = a2;
  return this;
}


//======================================================================
// anl::CImplicitRotateDomain::setAxisZ(anl::CImplicitModuleBase *)
// address: 0x0032BD12   size: 0x6 (6 bytes)
//======================================================================
char *__fastcall anl::CImplicitRotateDomain::setAxisZ(anl::CImplicitRotateDomain *this, anl::CImplicitModuleBase *a2)
{
  char *result; // r0

  result = (char *)this + 4;
  *((_DWORD *)result + 31) = a2;
  return result;
}


//======================================================================
// anl::CImplicitRotateDomain::setAngle(double)
// address: 0x0032BD18   size: 0xC (12 bytes)
//======================================================================
char *__fastcall anl::CImplicitRotateDomain::setAngle(anl::CImplicitRotateDomain *this, double a2)
{
  char *result; // r0

  result = (char *)this + 136;
  *((_DWORD *)result + 2) = 0;
  *(double *)result = a2;
  return result;
}


//======================================================================
// anl::CImplicitRotateDomain::setAngle(anl::CImplicitModuleBase *)
// address: 0x0032BD24   size: 0x6 (6 bytes)
//======================================================================
_DWORD *__fastcall anl::CImplicitRotateDomain::setAngle(anl::CImplicitRotateDomain *this, anl::CImplicitModuleBase *a2)
{
  _DWORD *result; // r0

  result = (_DWORD *)((char *)this + 144);
  *result = a2;
  return result;
}

