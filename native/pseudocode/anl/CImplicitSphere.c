// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CImplicitSphere

//======================================================================
// anl::CImplicitSphere::~CImplicitSphere()
// address: 0x0032C03C   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl15CImplicitSphereD1Ev'
void __fastcall anl::CImplicitSphere::~CImplicitSphere(anl::CImplicitSphere *this)
{
  *(_DWORD *)this = &off_462280;
}


//======================================================================
// anl::CImplicitSphere::~CImplicitSphere()
// address: 0x0032C04C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall anl::CImplicitSphere::~CImplicitSphere(anl::CImplicitSphere *this)
{
  anl::CImplicitSphere::~CImplicitSphere(this);
  operator delete(this);
}


//======================================================================
// anl::CImplicitSphere::get(double,double)
// address: 0x0032C060   size: 0xDA (218 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitSphere::get(anl::CImplicitSphere *this, double a2, double a3)
{
  double v5; // r0
  double v6; // r6
  double v7; // r0
  double v8; // r6
  double v9; // r0
  double v10; // r4

  LODWORD(v5) = anl::CScalarParameter::get((anl::CImplicitSphere *)((char *)this + 24), a2, a3);
  v6 = a2 - v5;
  LODWORD(v7) = anl::CScalarParameter::get((anl::CImplicitSphere *)((char *)this + 40), a2, a3);
  v8 = j_sqrt(v6 * v6 + (a3 - v7) * (a3 - v7));
  LODWORD(v9) = anl::CScalarParameter::get((anl::CImplicitSphere *)((char *)this + 120), a2, a3);
  v10 = (v9 - v8) / v9;
  if ( v10 < 0.0 )
  {
    v10 = 0.0;
  }
  else if ( v10 > 1.0 )
  {
    v10 = 1.0;
  }
  return *(_QWORD *)&v10;
}


//======================================================================
// anl::CImplicitSphere::get(double,double,double)
// address: 0x0032C150   size: 0x13A (314 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitSphere::get(anl::CImplicitSphere *this, double a2, double a3, double a4)
{
  double v6; // r0
  double v7; // r6
  double v8; // r0
  double v9; // r0
  double v10; // r6
  double v11; // r0
  double v12; // r4
  double v15; // [sp+18h] [bp-14h]

  LODWORD(v6) = anl::CScalarParameter::get((anl::CImplicitSphere *)((char *)this + 24), a2, a3, a4);
  v7 = a2 - v6;
  LODWORD(v8) = anl::CScalarParameter::get((anl::CImplicitSphere *)((char *)this + 40), a2, a3, a4);
  v15 = a3 - v8;
  LODWORD(v9) = anl::CScalarParameter::get((anl::CImplicitSphere *)((char *)this + 56), a2, a3, a4);
  v10 = j_sqrt(v7 * v7 + v15 * v15 + (a4 - v9) * (a4 - v9));
  LODWORD(v11) = anl::CScalarParameter::get((anl::CImplicitSphere *)((char *)this + 120), a2, a3, a4);
  v12 = (v11 - v10) / v11;
  if ( v12 < 0.0 )
  {
    v12 = 0.0;
  }
  else if ( v12 > 1.0 )
  {
    v12 = 1.0;
  }
  return *(_QWORD *)&v12;
}


//======================================================================
// anl::CImplicitSphere::get(double,double,double,double)
// address: 0x0032C2A0   size: 0x1AA (426 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitSphere::get(anl::CImplicitSphere *this, double a2, double a3, double a4, double a5)
{
  double v7; // r0
  double v8; // r6
  double v9; // r0
  double v10; // r0
  double v11; // r0
  double v12; // r6
  double v13; // r0
  double v14; // r4
  double v17; // [sp+20h] [bp-1Ch]
  double v18; // [sp+28h] [bp-14h]

  LODWORD(v7) = anl::CScalarParameter::get((anl::CImplicitSphere *)((char *)this + 24), a2, a3, a4, a5);
  v8 = a2 - v7;
  LODWORD(v9) = anl::CScalarParameter::get((anl::CImplicitSphere *)((char *)this + 40), a2, a3, a4, a5);
  v17 = a3 - v9;
  LODWORD(v10) = anl::CScalarParameter::get((anl::CImplicitSphere *)((char *)this + 56), a2, a3, a4, a5);
  v18 = a4 - v10;
  LODWORD(v11) = anl::CScalarParameter::get((anl::CImplicitSphere *)((char *)this + 72), a2, a3, a4, a5);
  v12 = j_sqrt(v8 * v8 + v17 * v17 + v18 * v18 + (a5 - v11) * (a5 - v11));
  LODWORD(v13) = anl::CScalarParameter::get((anl::CImplicitSphere *)((char *)this + 120), a2, a3, a4, a5);
  v14 = (v13 - v12) / v13;
  if ( v14 < 0.0 )
  {
    v14 = 0.0;
  }
  else if ( v14 > 1.0 )
  {
    v14 = 1.0;
  }
  return *(_QWORD *)&v14;
}


//======================================================================
// anl::CImplicitSphere::get(double,double,double,double,double,double)
// address: 0x0032C460   size: 0x2BA (698 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitSphere::get(
        anl::CImplicitSphere *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  double v9; // r0
  double v10; // r6
  double v11; // r0
  double v12; // r0
  double v13; // r0
  double v14; // r0
  double v15; // r0
  double v16; // r6
  double v17; // r0
  double v18; // r4
  double v21; // [sp+30h] [bp-2Ch]
  double v22; // [sp+38h] [bp-24h]
  double v23; // [sp+40h] [bp-1Ch]
  double v24; // [sp+48h] [bp-14h]

  LODWORD(v9) = anl::CScalarParameter::get((anl::CImplicitSphere *)((char *)this + 24), a2, a3, a4, a5, a6, a7);
  v10 = a2 - v9;
  LODWORD(v11) = anl::CScalarParameter::get((anl::CImplicitSphere *)((char *)this + 40), a2, a3, a4, a5, a6, a7);
  v21 = a3 - v11;
  LODWORD(v12) = anl::CScalarParameter::get((anl::CImplicitSphere *)((char *)this + 56), a2, a3, a4, a5, a6, a7);
  v22 = a4 - v12;
  LODWORD(v13) = anl::CScalarParameter::get((anl::CImplicitSphere *)((char *)this + 72), a2, a3, a4, a5, a6, a7);
  v23 = a5 - v13;
  LODWORD(v14) = anl::CScalarParameter::get((anl::CImplicitSphere *)((char *)this + 88), a2, a3, a4, a5, a6, a7);
  v24 = a6 - v14;
  LODWORD(v15) = anl::CScalarParameter::get((anl::CImplicitSphere *)((char *)this + 104), a2, a3, a4, a5, a6, a7);
  v16 = j_sqrt(v10 * v10 + v21 * v21 + v22 * v22 + v23 * v23 + v24 * v24 + (a7 - v15) * (a7 - v15));
  LODWORD(v17) = anl::CScalarParameter::get((anl::CImplicitSphere *)((char *)this + 120), a2, a3, a4, a5, a6, a7);
  v18 = (v17 - v16) / v17;
  if ( v18 < 0.0 )
  {
    v18 = 0.0;
  }
  else if ( v18 > 1.0 )
  {
    v18 = 1.0;
  }
  return *(_QWORD *)&v18;
}


//======================================================================
// anl::CImplicitSphere::CImplicitSphere(void)
// address: 0x0032C730   size: 0x4C (76 bytes)
//======================================================================
// Alternative name is '_ZN3anl15CImplicitSphereC1Ev'
_DWORD *__fastcall anl::CImplicitSphere::CImplicitSphere(_DWORD *this)
{
  *(this + 2) = -350469331;
  *(this + 3) = 1058682594;
  *(this + 4) = 0;
  *(this + 8) = 0;
  *(this + 12) = 0;
  *this = &off_463AE8;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 10) = 0;
  *(this + 11) = 0;
  *(this + 14) = 0;
  *(this + 15) = 0;
  *(this + 18) = 0;
  *(this + 19) = 0;
  *(this + 22) = 0;
  *(this + 23) = 0;
  *(this + 26) = 0;
  *(this + 27) = 0;
  *(this + 30) = 0;
  *(this + 31) = 1072693248;
  *(this + 16) = 0;
  *(this + 20) = 0;
  *(this + 24) = 0;
  *(this + 28) = 0;
  *(this + 32) = 0;
  return this;
}


//======================================================================
// anl::CImplicitSphere::setCenter(double,double,double,double,double,double)
// address: 0x0032C7A0   size: 0x134 (308 bytes)
//======================================================================
int __fastcall anl::CImplicitSphere::setCenter(
        anl::CImplicitSphere *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  *((double *)this + 3) = a2;
  *((_BYTE *)this + 32) = 0;
  *((_BYTE *)this + 33) = 0;
  *((_BYTE *)this + 34) = 0;
  *((_BYTE *)this + 35) = 0;
  *((double *)this + 5) = a3;
  *((_WORD *)this + 28) = LOWORD(a4);
  *((_BYTE *)this + 48) = 0;
  *((_BYTE *)this + 49) = 0;
  *((_BYTE *)this + 50) = 0;
  *((_BYTE *)this + 51) = 0;
  *(_DWORD *)((char *)this + 58) = *(_DWORD *)((char *)&a4 + 2);
  *((_WORD *)this + 31) = HIWORD(a4);
  *(_WORD *)((char *)this + 73) = *(_WORD *)((char *)&a5 + 1);
  *((_BYTE *)this + 64) = 0;
  *((_BYTE *)this + 65) = 0;
  *((_BYTE *)this + 66) = 0;
  *((_BYTE *)this + 67) = 0;
  *((_BYTE *)this + 72) = LOBYTE(a5);
  *((_BYTE *)this + 75) = BYTE3(a5);
  *(_WORD *)((char *)this + 77) = *(_WORD *)((char *)&a5 + 5);
  *((_BYTE *)this + 76) = BYTE4(a5);
  *((_BYTE *)this + 79) = HIBYTE(a5);
  *(_WORD *)((char *)this + 89) = *(_WORD *)((char *)&a6 + 1);
  *((_BYTE *)this + 91) = BYTE3(a6);
  *((_WORD *)this + 46) = WORD2(a6);
  *((_BYTE *)this + 95) = HIBYTE(a6);
  *((_BYTE *)this + 80) = 0;
  *((_BYTE *)this + 81) = 0;
  *((_BYTE *)this + 82) = 0;
  *((_BYTE *)this + 83) = 0;
  *((_BYTE *)this + 88) = LOBYTE(a6);
  *((_BYTE *)this + 94) = BYTE6(a6);
  *((_BYTE *)this + 96) = 0;
  *((_BYTE *)this + 97) = 0;
  *((_BYTE *)this + 98) = 0;
  *((_WORD *)this + 52) = LOWORD(a7);
  *((_BYTE *)this + 99) = 0;
  *((_WORD *)this + 53) = WORD1(a7);
  *((_BYTE *)this + 108) = BYTE4(a7);
  *(_WORD *)((char *)this + 109) = *(_WORD *)((char *)&a7 + 5);
  *((_BYTE *)this + 111) = HIBYTE(a7);
  *((_BYTE *)this + 112) = 0;
  *((_BYTE *)this + 113) = 0;
  *((_BYTE *)this + 114) = 0;
  *((_BYTE *)this + 115) = 0;
  return HIWORD(LODWORD(a7));
}


//======================================================================
// anl::CImplicitSphere::setCenterX(double)
// address: 0x0032C8D4   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitSphere::setCenterX(int this, double a2)
{
  *(_DWORD *)(this + 32) = 0;
  *(double *)(this + 24) = a2;
  return this;
}


//======================================================================
// anl::CImplicitSphere::setCenterY(double)
// address: 0x0032C8DE   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitSphere::setCenterY(int this, double a2)
{
  *(_DWORD *)(this + 48) = 0;
  *(double *)(this + 40) = a2;
  return this;
}


//======================================================================
// anl::CImplicitSphere::setCenterZ(double)
// address: 0x0032C8E8   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitSphere::setCenterZ(int this, double a2)
{
  *(_DWORD *)(this + 64) = 0;
  *(double *)(this + 56) = a2;
  return this;
}


//======================================================================
// anl::CImplicitSphere::setCenterW(double)
// address: 0x0032C8F2   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitSphere::setCenterW(int this, double a2)
{
  *(_DWORD *)(this + 80) = 0;
  *(double *)(this + 72) = a2;
  return this;
}


//======================================================================
// anl::CImplicitSphere::setCenterU(double)
// address: 0x0032C8FC   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitSphere::setCenterU(int this, double a2)
{
  *(_DWORD *)(this + 96) = 0;
  *(double *)(this + 88) = a2;
  return this;
}


//======================================================================
// anl::CImplicitSphere::setCenterV(double)
// address: 0x0032C906   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitSphere::setCenterV(int this, double a2)
{
  *(_DWORD *)(this + 112) = 0;
  *(double *)(this + 104) = a2;
  return this;
}


//======================================================================
// anl::CImplicitSphere::setCenterX(anl::CImplicitModuleBase *)
// address: 0x0032C910   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitSphere::setCenterX(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 32) = a2;
  return this;
}


//======================================================================
// anl::CImplicitSphere::setCenterY(anl::CImplicitModuleBase *)
// address: 0x0032C914   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitSphere::setCenterY(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 48) = a2;
  return this;
}


//======================================================================
// anl::CImplicitSphere::setCenterZ(anl::CImplicitModuleBase *)
// address: 0x0032C918   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitSphere::setCenterZ(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 64) = a2;
  return this;
}


//======================================================================
// anl::CImplicitSphere::setCenterW(anl::CImplicitModuleBase *)
// address: 0x0032C91C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitSphere::setCenterW(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 80) = a2;
  return this;
}


//======================================================================
// anl::CImplicitSphere::setCenterU(anl::CImplicitModuleBase *)
// address: 0x0032C920   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitSphere::setCenterU(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 96) = a2;
  return this;
}


//======================================================================
// anl::CImplicitSphere::setCenterV(anl::CImplicitModuleBase *)
// address: 0x0032C924   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitSphere::setCenterV(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 112) = a2;
  return this;
}


//======================================================================
// anl::CImplicitSphere::setRadius(double)
// address: 0x0032C928   size: 0xE (14 bytes)
//======================================================================
int __fastcall anl::CImplicitSphere::setRadius(int this, double a2)
{
  *(_DWORD *)(this + 128) = 0;
  *(double *)(this + 120) = a2;
  return this;
}


//======================================================================
// anl::CImplicitSphere::setRadius(anl::CImplicitModuleBase *)
// address: 0x0032C936   size: 0x6 (6 bytes)
//======================================================================
char *__fastcall anl::CImplicitSphere::setRadius(anl::CImplicitSphere *this, anl::CImplicitModuleBase *a2)
{
  char *result; // r0

  result = (char *)this + 4;
  *((_DWORD *)result + 31) = a2;
  return result;
}

