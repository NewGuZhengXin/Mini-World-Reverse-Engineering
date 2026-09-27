// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CImplicitTriangle

//======================================================================
// anl::CImplicitTriangle::~CImplicitTriangle()
// address: 0x003280C4   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl17CImplicitTriangleD1Ev'
void __fastcall anl::CImplicitTriangle::~CImplicitTriangle(anl::CImplicitTriangle *this)
{
  *(_DWORD *)this = &off_462280;
}


//======================================================================
// anl::CImplicitTriangle::~CImplicitTriangle()
// address: 0x003280D4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall anl::CImplicitTriangle::~CImplicitTriangle(anl::CImplicitTriangle *this)
{
  anl::CImplicitTriangle::~CImplicitTriangle(this);
  operator delete(this);
}


//======================================================================
// anl::CImplicitTriangle::get(double,double)
// address: 0x00328130   size: 0x15E (350 bytes)
//======================================================================
double __fastcall anl::CImplicitTriangle::get(anl::CImplicitTriangle *this, double a2, double a3)
{
  unsigned int v5; // r1
  int v6; // r1
  double v7; // r6
  double v8; // r0
  double v9; // r4
  int v11; // r3
  double v12; // r0
  int v13; // r3
  double v14; // r0
  double v15; // [sp+0h] [bp-34h]
  double v16; // [sp+0h] [bp-34h]
  double v17; // [sp+0h] [bp-34h]
  double v18; // [sp+0h] [bp-34h]
  anl *v19; // [sp+Ch] [bp-28h]
  double v21; // [sp+10h] [bp-24h]
  double v22; // [sp+18h] [bp-1Ch]
  unsigned int v23; // [sp+28h] [bp-Ch]

  v19 = (anl *)anl::CScalarParameter::get((anl::CImplicitTriangle *)((char *)this + 16), a2, a3);
  v23 = v5;
  LODWORD(v7) = anl::CScalarParameter::get((anl::CImplicitTriangle *)((char *)this + 32), a2, a3);
  HIDWORD(v7) = v6;
  LODWORD(v8) = anl::CScalarParameter::get((anl::CImplicitTriangle *)((char *)this + 48), a2, a3);
  v9 = v8;
  if ( v8 >= 1.0 )
    return anl::sawtooth(COERCE_DOUBLE(__PAIR64__(v23, (unsigned int)v19)), v7, v15);
  if ( v8 <= 0.0 )
    return 1.0 - anl::sawtooth(COERCE_DOUBLE(__PAIR64__(v23, (unsigned int)v19)), v7, v15);
  if ( v8 - anl::sawtooth(COERCE_DOUBLE(__PAIR64__(v23, (unsigned int)v19)), v7, v15) < 0.0 )
    v11 = 0;
  else
    v11 = 1072693248;
  LODWORD(v21) = 0;
  HIDWORD(v21) = v11;
  HIDWORD(v12) = v23 + 0x80000000;
  LODWORD(v12) = v19;
  if ( 1.0 - v9 - anl::sawtooth(v12, v7, v16) < 0.0 )
    v13 = 0;
  else
    v13 = 1072693248;
  LODWORD(v22) = 0;
  HIDWORD(v22) = v13;
  v14 = anl::sawtooth(COERCE_DOUBLE(__PAIR64__(v23, (unsigned int)v19)), v7, v17) * v21 / v9;
  return v14 + anl::sawtooth(COERCE_DOUBLE(__PAIR64__(v23 + 0x80000000, (unsigned int)v19)), v7, v18) * v22 / (1.0 - v9);
}


//======================================================================
// anl::CImplicitTriangle::get(double,double,double)
// address: 0x003282A0   size: 0x176 (374 bytes)
//======================================================================
double __fastcall anl::CImplicitTriangle::get(anl::CImplicitTriangle *this, double a2, double a3, double a4)
{
  unsigned int v6; // r1
  int v7; // r1
  double v8; // r6
  double v9; // r0
  double v10; // r4
  int v12; // r3
  double v13; // r0
  int v14; // r3
  double v15; // r0
  double v16; // [sp+0h] [bp-3Ch]
  double v17; // [sp+0h] [bp-3Ch]
  double v18; // [sp+0h] [bp-3Ch]
  double v19; // [sp+0h] [bp-3Ch]
  anl *v20; // [sp+14h] [bp-28h]
  double v22; // [sp+18h] [bp-24h]
  double v23; // [sp+20h] [bp-1Ch]
  unsigned int v24; // [sp+30h] [bp-Ch]

  v20 = (anl *)anl::CScalarParameter::get((anl::CImplicitTriangle *)((char *)this + 16), a2, a3, a4);
  v24 = v6;
  LODWORD(v8) = anl::CScalarParameter::get((anl::CImplicitTriangle *)((char *)this + 32), a2, a3, a4);
  HIDWORD(v8) = v7;
  LODWORD(v9) = anl::CScalarParameter::get((anl::CImplicitTriangle *)((char *)this + 48), a2, a3, a4);
  v10 = v9;
  if ( v9 >= 1.0 )
    return anl::sawtooth(COERCE_DOUBLE(__PAIR64__(v24, (unsigned int)v20)), v8, v16);
  if ( v9 <= 0.0 )
    return 1.0 - anl::sawtooth(COERCE_DOUBLE(__PAIR64__(v24, (unsigned int)v20)), v8, v16);
  if ( v9 - anl::sawtooth(COERCE_DOUBLE(__PAIR64__(v24, (unsigned int)v20)), v8, v16) < 0.0 )
    v12 = 0;
  else
    v12 = 1072693248;
  LODWORD(v22) = 0;
  HIDWORD(v22) = v12;
  HIDWORD(v13) = v24 + 0x80000000;
  LODWORD(v13) = v20;
  if ( 1.0 - v10 - anl::sawtooth(v13, v8, v17) < 0.0 )
    v14 = 0;
  else
    v14 = 1072693248;
  LODWORD(v23) = 0;
  HIDWORD(v23) = v14;
  v15 = anl::sawtooth(COERCE_DOUBLE(__PAIR64__(v24, (unsigned int)v20)), v8, v18) * v22 / v10;
  return v15
       + anl::sawtooth(COERCE_DOUBLE(__PAIR64__(v24 + 0x80000000, (unsigned int)v20)), v8, v19) * v23 / (1.0 - v10);
}


//======================================================================
// anl::CImplicitTriangle::get(double,double,double,double)
// address: 0x00328428   size: 0x18E (398 bytes)
//======================================================================
double __fastcall anl::CImplicitTriangle::get(anl::CImplicitTriangle *this, double a2, double a3, double a4, double a5)
{
  unsigned int v7; // r1
  int v8; // r1
  double v9; // r4
  double v10; // r0
  double v11; // r6
  int v13; // r3
  double v14; // r0
  int v15; // r3
  double v16; // r0
  double v17; // [sp+0h] [bp-44h]
  double v18; // [sp+0h] [bp-44h]
  double v19; // [sp+0h] [bp-44h]
  double v20; // [sp+0h] [bp-44h]
  anl *v21; // [sp+1Ch] [bp-28h]
  double v23; // [sp+20h] [bp-24h]
  double v24; // [sp+28h] [bp-1Ch]
  unsigned int v25; // [sp+3Ch] [bp-8h]

  v21 = (anl *)anl::CScalarParameter::get((anl::CImplicitTriangle *)((char *)this + 16), a2, a3, a4, a5);
  v25 = v7;
  LODWORD(v9) = anl::CScalarParameter::get((anl::CImplicitTriangle *)((char *)this + 32), a2, a3, a4, a5);
  HIDWORD(v9) = v8;
  LODWORD(v10) = anl::CScalarParameter::get((anl::CImplicitTriangle *)((char *)this + 48), a2, a3, a4, a5);
  v11 = v10;
  if ( v10 >= 1.0 )
    return anl::sawtooth(COERCE_DOUBLE(__PAIR64__(v25, (unsigned int)v21)), v9, v17);
  if ( v10 <= 0.0 )
    return 1.0 - anl::sawtooth(COERCE_DOUBLE(__PAIR64__(v25, (unsigned int)v21)), v9, v17);
  if ( v10 - anl::sawtooth(COERCE_DOUBLE(__PAIR64__(v25, (unsigned int)v21)), v9, v17) < 0.0 )
    v13 = 0;
  else
    v13 = 1072693248;
  LODWORD(v23) = 0;
  HIDWORD(v23) = v13;
  HIDWORD(v14) = v25 + 0x80000000;
  LODWORD(v14) = v21;
  if ( 1.0 - v11 - anl::sawtooth(v14, v9, v18) < 0.0 )
    v15 = 0;
  else
    v15 = 1072693248;
  LODWORD(v24) = 0;
  HIDWORD(v24) = v15;
  v16 = anl::sawtooth(COERCE_DOUBLE(__PAIR64__(v25, (unsigned int)v21)), v9, v19) * v23 / v11;
  return v16
       + anl::sawtooth(COERCE_DOUBLE(__PAIR64__(v25 + 0x80000000, (unsigned int)v21)), v9, v20) * v24 / (1.0 - v11);
}


//======================================================================
// anl::CImplicitTriangle::get(double,double,double,double,double,double)
// address: 0x003285C8   size: 0x1BE (446 bytes)
//======================================================================
double __fastcall anl::CImplicitTriangle::get(
        anl::CImplicitTriangle *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  unsigned int v9; // r1
  int v10; // r1
  double v11; // r4
  double v12; // r0
  double v13; // r6
  int v15; // r3
  double v16; // r0
  int v17; // r3
  double v18; // r0
  double v19; // [sp+0h] [bp-54h]
  double v20; // [sp+0h] [bp-54h]
  double v21; // [sp+0h] [bp-54h]
  double v22; // [sp+0h] [bp-54h]
  anl *v23; // [sp+2Ch] [bp-28h]
  double v25; // [sp+30h] [bp-24h]
  double v26; // [sp+38h] [bp-1Ch]
  unsigned int v27; // [sp+4Ch] [bp-8h]

  v23 = (anl *)anl::CScalarParameter::get((anl::CImplicitTriangle *)((char *)this + 16), a2, a3, a4, a5, a6, a7);
  v27 = v9;
  LODWORD(v11) = anl::CScalarParameter::get((anl::CImplicitTriangle *)((char *)this + 32), a2, a3, a4, a5, a6, a7);
  HIDWORD(v11) = v10;
  LODWORD(v12) = anl::CScalarParameter::get((anl::CImplicitTriangle *)((char *)this + 48), a2, a3, a4, a5, a6, a7);
  v13 = v12;
  if ( v12 >= 1.0 )
    return anl::sawtooth(COERCE_DOUBLE(__PAIR64__(v27, (unsigned int)v23)), v11, v19);
  if ( v12 <= 0.0 )
    return 1.0 - anl::sawtooth(COERCE_DOUBLE(__PAIR64__(v27, (unsigned int)v23)), v11, v19);
  if ( v12 - anl::sawtooth(COERCE_DOUBLE(__PAIR64__(v27, (unsigned int)v23)), v11, v19) < 0.0 )
    v15 = 0;
  else
    v15 = 1072693248;
  LODWORD(v25) = 0;
  HIDWORD(v25) = v15;
  HIDWORD(v16) = v27 + 0x80000000;
  LODWORD(v16) = v23;
  if ( 1.0 - v13 - anl::sawtooth(v16, v11, v20) < 0.0 )
    v17 = 0;
  else
    v17 = 1072693248;
  LODWORD(v26) = 0;
  HIDWORD(v26) = v17;
  v18 = anl::sawtooth(COERCE_DOUBLE(__PAIR64__(v27, (unsigned int)v23)), v11, v21) * v25 / v13;
  return v18
       + anl::sawtooth(COERCE_DOUBLE(__PAIR64__(v27 + 0x80000000, (unsigned int)v23)), v11, v22) * v26 / (1.0 - v13);
}


//======================================================================
// anl::CImplicitTriangle::CImplicitTriangle(double,double)
// address: 0x00328798   size: 0x32 (50 bytes)
//======================================================================
// Alternative name is '_ZN3anl17CImplicitTriangleC1Edd'
int __fastcall anl::CImplicitTriangle::CImplicitTriangle(int this, double a2, double a3)
{
  *(_DWORD *)(this + 8) = -350469331;
  *(_DWORD *)(this + 12) = 1058682594;
  *(_DWORD *)this = &off_463968;
  *(_DWORD *)(this + 16) = 0;
  *(_DWORD *)(this + 20) = 0;
  *(double *)(this + 32) = a2;
  *(_DWORD *)(this + 24) = 0;
  *(_DWORD *)(this + 40) = 0;
  *(double *)(this + 48) = a3;
  *(_DWORD *)(this + 56) = 0;
  return this;
}


//======================================================================
// anl::CImplicitTriangle::setSource(double)
// address: 0x003287E8   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitTriangle::setSource(int this, double a2)
{
  *(_DWORD *)(this + 24) = 0;
  *(double *)(this + 16) = a2;
  return this;
}


//======================================================================
// anl::CImplicitTriangle::setSource(anl::CImplicitModuleBase *)
// address: 0x003287F2   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitTriangle::setSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 24) = a2;
  return this;
}


//======================================================================
// anl::CImplicitTriangle::setPeriod(double)
// address: 0x003287F6   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitTriangle::setPeriod(int this, double a2)
{
  *(_DWORD *)(this + 40) = 0;
  *(double *)(this + 32) = a2;
  return this;
}


//======================================================================
// anl::CImplicitTriangle::setPeriod(anl::CImplicitModuleBase *)
// address: 0x00328800   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitTriangle::setPeriod(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 40) = a2;
  return this;
}


//======================================================================
// anl::CImplicitTriangle::setOffset(double)
// address: 0x00328804   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitTriangle::setOffset(int this, double a2)
{
  *(_DWORD *)(this + 56) = 0;
  *(double *)(this + 48) = a2;
  return this;
}


//======================================================================
// anl::CImplicitTriangle::setOffset(anl::CImplicitModuleBase *)
// address: 0x0032880E   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitTriangle::setOffset(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 56) = a2;
  return this;
}

