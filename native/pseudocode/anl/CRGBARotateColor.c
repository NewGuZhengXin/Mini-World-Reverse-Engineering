// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CRGBARotateColor

//======================================================================
// anl::CRGBARotateColor::~CRGBARotateColor()
// address: 0x0032C93C   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl16CRGBARotateColorD1Ev'
void __fastcall anl::CRGBARotateColor::~CRGBARotateColor(anl::CRGBARotateColor *this)
{
  *(_DWORD *)this = &off_4634C8;
}


//======================================================================
// anl::CRGBARotateColor::~CRGBARotateColor()
// address: 0x0032C94C   size: 0x16 (22 bytes)
//======================================================================
void __fastcall anl::CRGBARotateColor::~CRGBARotateColor(anl::CRGBARotateColor *this)
{
  *(_DWORD *)this = &off_4634C8;
  operator delete(this);
}


//======================================================================
// anl::CRGBARotateColor::CRGBARotateColor(void)
// address: 0x0032C968   size: 0x42 (66 bytes)
//======================================================================
// Alternative name is '_ZN3anl16CRGBARotateColorC1Ev'
int __fastcall anl::CRGBARotateColor::CRGBARotateColor(int this)
{
  *(_DWORD *)(this + 40) = 0;
  *(_DWORD *)(this + 44) = 1072693248;
  *(_DWORD *)this = &off_463B20;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 24) = 0;
  *(_DWORD *)(this + 28) = 0;
  *(_DWORD *)(this + 56) = 0;
  *(_DWORD *)(this + 60) = 0;
  *(_DWORD *)(this + 76) = 0;
  *(_DWORD *)(this + 80) = 0;
  *(_DWORD *)(this + 84) = 0;
  *(_DWORD *)(this + 88) = 0;
  *(_DWORD *)(this + 16) = 0;
  *(_DWORD *)(this + 32) = 0;
  *(_DWORD *)(this + 48) = 0;
  *(_DWORD *)(this + 64) = 0;
  *(_DWORD *)(this + 72) = 0;
  *(_BYTE *)(this + 92) = 0;
  return this;
}


//======================================================================
// anl::CRGBARotateColor::setAxis(double,double,double)
// address: 0x0032C9C8   size: 0x20 (32 bytes)
//======================================================================
int __fastcall anl::CRGBARotateColor::setAxis(int this, double a2, double a3, double a4)
{
  *(double *)(this + 8) = a2;
  *(_DWORD *)(this + 16) = 0;
  *(double *)(this + 24) = a3;
  *(_DWORD *)(this + 32) = 0;
  *(_DWORD *)(this + 48) = 0;
  *(double *)(this + 40) = a4;
  return this;
}


//======================================================================
// anl::CRGBARotateColor::setAxis(anl::CImplicitModuleBase *,anl::CImplicitModuleBase *,anl::CImplicitModuleBase *)
// address: 0x0032C9E8   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall anl::CRGBARotateColor::setAxis(
        _DWORD *this,
        anl::CImplicitModuleBase *a2,
        anl::CImplicitModuleBase *a3,
        anl::CImplicitModuleBase *a4)
{
  *(this + 4) = a2;
  *(this + 8) = a3;
  *(this + 12) = a4;
  return this;
}


//======================================================================
// anl::CRGBARotateColor::setAxisX(double)
// address: 0x0032C9F0   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CRGBARotateColor::setAxisX(int this, double a2)
{
  *(_DWORD *)(this + 16) = 0;
  *(double *)(this + 8) = a2;
  return this;
}


//======================================================================
// anl::CRGBARotateColor::setAxisY(double)
// address: 0x0032C9FA   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CRGBARotateColor::setAxisY(int this, double a2)
{
  *(_DWORD *)(this + 32) = 0;
  *(double *)(this + 24) = a2;
  return this;
}


//======================================================================
// anl::CRGBARotateColor::setAxisZ(double)
// address: 0x0032CA04   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CRGBARotateColor::setAxisZ(int this, double a2)
{
  *(_DWORD *)(this + 48) = 0;
  *(double *)(this + 40) = a2;
  return this;
}


//======================================================================
// anl::CRGBARotateColor::setAxisX(anl::CImplicitModuleBase *)
// address: 0x0032CA0E   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CRGBARotateColor::setAxisX(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 16) = a2;
  return this;
}


//======================================================================
// anl::CRGBARotateColor::setAxisY(anl::CImplicitModuleBase *)
// address: 0x0032CA12   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CRGBARotateColor::setAxisY(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 32) = a2;
  return this;
}


//======================================================================
// anl::CRGBARotateColor::setAxisZ(anl::CImplicitModuleBase *)
// address: 0x0032CA16   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CRGBARotateColor::setAxisZ(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 48) = a2;
  return this;
}


//======================================================================
// anl::CRGBARotateColor::setAngle(double)
// address: 0x0032CA1A   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CRGBARotateColor::setAngle(int this, double a2)
{
  *(_DWORD *)(this + 64) = 0;
  *(double *)(this + 56) = a2;
  return this;
}


//======================================================================
// anl::CRGBARotateColor::setAngle(anl::CImplicitModuleBase *)
// address: 0x0032CA24   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CRGBARotateColor::setAngle(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 64) = a2;
  return this;
}


//======================================================================
// anl::CRGBARotateColor::setSource(anl::CRGBAModuleBase *)
// address: 0x0032CA28   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CRGBARotateColor::setSource(int this, anl::CRGBAModuleBase *a2)
{
  *(_DWORD *)(this + 72) = a2;
  return this;
}


//======================================================================
// anl::CRGBARotateColor::setSource(float,float,float,float)
// address: 0x0032CA2C   size: 0x12 (18 bytes)
//======================================================================
int __fastcall anl::CRGBARotateColor::setSource(int this, float a2, float a3, float a4, float a5)
{
  *(float *)(this + 84) = a4;
  *(_DWORD *)(this + 72) = 0;
  *(float *)(this + 76) = a2;
  *(float *)(this + 80) = a3;
  *(float *)(this + 88) = a5;
  return this;
}


//======================================================================
// anl::CRGBARotateColor::calculateRotMatrix(double,double)
// address: 0x0032CA40   size: 0x2AC (684 bytes)
//======================================================================
double __fastcall anl::CRGBARotateColor::calculateRotMatrix(anl::CRGBARotateColor *this, double a2, double a3)
{
  double v5; // r0
  int v6; // r1
  int v7; // r1
  int v8; // r1
  double v9; // r6
  double v10; // r0
  double v11; // r4
  double v12; // r4
  double v13; // r4
  double result; // r0
  double v16; // [sp+10h] [bp-34h]
  double v17; // [sp+18h] [bp-2Ch]
  double x; // [sp+20h] [bp-24h]
  double xa; // [sp+20h] [bp-24h]
  double v20; // [sp+28h] [bp-1Ch]
  double v21; // [sp+38h] [bp-Ch]

  LODWORD(v5) = anl::CScalarParameter::get((anl::CRGBARotateColor *)((char *)this + 56), a2, a3);
  x = v5 * 360.0 * 3.14159265 / 180.0;
  LODWORD(v17) = anl::CScalarParameter::get((anl::CRGBARotateColor *)((char *)this + 8), a2, a3);
  HIDWORD(v17) = v6;
  LODWORD(v16) = anl::CScalarParameter::get((anl::CRGBARotateColor *)((char *)this + 24), a2, a3);
  HIDWORD(v16) = v7;
  LODWORD(v9) = anl::CScalarParameter::get((anl::CRGBARotateColor *)((char *)this + 40), a2, a3);
  HIDWORD(v9) = v8;
  if ( *((_BYTE *)this + 92) != 0 )
  {
    v10 = j_sqrt(v17 * v17 + v16 * v16 + v9 * v9);
    v17 = v17 / v10;
    v16 = v16 / v10;
    v9 = v9 / v10;
  }
  v11 = j_cos(x);
  xa = j_sin(x);
  v20 = 1.0 - v11;
  *((double *)this + 12) = (1.0 - v11) * (v17 * v17 - 1.0) + 1.0;
  v12 = (1.0 - v11) * v17;
  *((double *)this + 15) = COERCE_DOUBLE(*(_QWORD *)&v9 + 0x8000000000000000LL) * xa + v12 * v16;
  v21 = v12 * v9;
  *((double *)this + 18) = v16 * xa + v12 * v9;
  *((double *)this + 13) = v9 * xa + v12 * v16;
  *((double *)this + 16) = v20 * (v16 * v16 - 1.0) + 1.0;
  v13 = v20 * v16 * v9;
  *((double *)this + 19) = COERCE_DOUBLE(*(_QWORD *)&v17 + 0x8000000000000000LL) * xa + v13;
  *((double *)this + 14) = COERCE_DOUBLE(*(_QWORD *)&v16 + 0x8000000000000000LL) * xa + v21;
  *((double *)this + 17) = v17 * xa + v13;
  result = v20 * (v9 * v9 - 1.0) + 1.0;
  *((double *)this + 20) = result;
  return result;
}


//======================================================================
// anl::CRGBARotateColor::get(double,double)
// address: 0x0032CD10   size: 0x286 (646 bytes)
//======================================================================
anl::CRGBARotateColor *__fastcall anl::CRGBARotateColor::get(anl::CRGBARotateColor *this, int a2, double a3, double a4)
{
  int v5; // r1
  float v8; // r1
  float v9; // r0
  float v10; // r1
  float v11; // r4
  float v12; // r0
  float v13; // r0
  float v14; // r0
  float v15; // r6
  double v16; // r4
  float v17; // r0
  double v18; // r4
  float v19; // r0
  double v20; // r4
  float v21; // r0
  double v23; // [sp+8h] [bp-24h]
  float v24; // [sp+10h] [bp-1Ch]
  double v25; // [sp+10h] [bp-1Ch]
  float v26; // [sp+20h] [bp-Ch]
  float v27; // [sp+24h] [bp-8h]

  v5 = *(_DWORD *)(a2 + 72);
  if ( v5 != 0 )
  {
    (*(void (__fastcall **)(anl::CRGBARotateColor *, int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v5 + 8))(
      this,
      v5,
      LODWORD(a3),
      HIDWORD(a3),
      LODWORD(a4),
      HIDWORD(a4));
  }
  else
  {
    *(_DWORD *)this = *(_DWORD *)(a2 + 76);
    *((_DWORD *)this + 1) = *(_DWORD *)(a2 + 80);
    *((_DWORD *)this + 2) = *(_DWORD *)(a2 + 84);
    *((_DWORD *)this + 3) = *(_DWORD *)(a2 + 88);
  }
  anl::CRGBARotateColor::calculateRotMatrix((anl::CRGBARotateColor *)a2, a3, a4);
  v8 = *((float *)this + 1);
  v24 = (float)(*(float *)this + *(float *)this) - 1.0;
  *(float *)this = v24;
  v9 = (float)(v8 + v8) - 1.0;
  v10 = *((float *)this + 2);
  *((float *)this + 1) = v9;
  v11 = (float)(v10 + v10) - 1.0;
  *((float *)this + 2) = v11;
  v25 = v24;
  v23 = v9;
  v12 = v25 * *(double *)(a2 + 96) + v9 * *(double *)(a2 + 120) + v11 * *(double *)(a2 + 144);
  v26 = v12;
  v13 = v25 * *(double *)(a2 + 104) + v23 * *(double *)(a2 + 128) + v11 * *(double *)(a2 + 152);
  v27 = v13;
  v14 = v25 * *(double *)(a2 + 112) + v23 * *(double *)(a2 + 136) + v11 * *(double *)(a2 + 160);
  *((float *)this + 2) = v14;
  *(float *)this = v26;
  *((float *)this + 1) = v27;
  v15 = v14;
  v16 = v26 * 0.5 + 0.5;
  if ( v16 < 0.0 )
  {
    v16 = 0.0;
  }
  else if ( v16 > 1.0 )
  {
    v16 = 1.0;
  }
  v17 = v16;
  *(float *)this = v17;
  v18 = v27 * 0.5 + 0.5;
  if ( v18 < 0.0 )
  {
    v18 = 0.0;
  }
  else if ( v18 > 1.0 )
  {
    v18 = 1.0;
  }
  v19 = v18;
  *((float *)this + 1) = v19;
  v20 = v15 * 0.5 + 0.5;
  if ( v20 < 0.0 )
  {
    v20 = 0.0;
  }
  else if ( v20 > 1.0 )
  {
    v20 = 1.0;
  }
  v21 = v20;
  *((float *)this + 2) = v21;
  return this;
}


//======================================================================
// anl::CRGBARotateColor::calculateRotMatrix(double,double,double)
// address: 0x0032CFB0   size: 0x2D0 (720 bytes)
//======================================================================
double __fastcall anl::CRGBARotateColor::calculateRotMatrix(
        anl::CRGBARotateColor *this,
        double a2,
        double a3,
        double a4)
{
  double v7; // r0
  int v8; // r1
  int v9; // r7
  unsigned int v10; // r1
  int v11; // r1
  double v12; // r4
  double v13; // r0
  double v14; // r4
  double v15; // r4
  double v16; // r4
  double v17; // r0
  double result; // r0
  double v19; // [sp+14h] [bp-38h]
  unsigned int v20; // [sp+1Ch] [bp-30h]
  double v21; // [sp+20h] [bp-2Ch]
  double x; // [sp+28h] [bp-24h]
  double xa; // [sp+28h] [bp-24h]
  double v24; // [sp+30h] [bp-1Ch]
  double v25; // [sp+40h] [bp-Ch]

  LODWORD(v7) = anl::CScalarParameter::get((anl::CRGBARotateColor *)((char *)this + 56), a2, a3, a4);
  x = v7 * 360.0 * 3.14159265 / 180.0;
  LODWORD(v21) = anl::CScalarParameter::get((anl::CRGBARotateColor *)((char *)this + 8), a2, a3, a4);
  HIDWORD(v21) = v8;
  v9 = anl::CScalarParameter::get((anl::CRGBARotateColor *)((char *)this + 24), a2, a3, a4);
  v20 = v10;
  LODWORD(v19) = anl::CScalarParameter::get((anl::CRGBARotateColor *)((char *)this + 40), a2, a3, a4);
  HIDWORD(v19) = v11;
  if ( *((_BYTE *)this + 92) != 0 )
  {
    v12 = j_sqrt(v21 * v21 + COERCE_DOUBLE(__PAIR64__(v20, v9)) * COERCE_DOUBLE(__PAIR64__(v20, v9)) + v19 * v19);
    v21 = v21 / v12;
    v13 = COERCE_DOUBLE(__PAIR64__(v20, v9)) / v12;
    v20 = HIDWORD(v13);
    v9 = LODWORD(v13);
    v19 = v19 / v12;
  }
  v14 = j_cos(x);
  xa = j_sin(x);
  v24 = 1.0 - v14;
  *((double *)this + 12) = (1.0 - v14) * (v21 * v21 - 1.0) + 1.0;
  v15 = (1.0 - v14) * v21;
  *((double *)this + 15) = COERCE_DOUBLE(*(_QWORD *)&v19 + 0x8000000000000000LL) * xa
                         + v15 * COERCE_DOUBLE(__PAIR64__(v20, v9));
  v25 = v15 * v19;
  *((double *)this + 18) = COERCE_DOUBLE(__PAIR64__(v20, v9)) * xa + v15 * v19;
  *((double *)this + 13) = v19 * xa + v15 * COERCE_DOUBLE(__PAIR64__(v20, v9));
  *((double *)this + 16) = v24 * (COERCE_DOUBLE(__PAIR64__(v20, v9)) * COERCE_DOUBLE(__PAIR64__(v20, v9)) - 1.0) + 1.0;
  v16 = v24 * COERCE_DOUBLE(__PAIR64__(v20, v9)) * v19;
  *((double *)this + 19) = COERCE_DOUBLE(*(_QWORD *)&v21 + 0x8000000000000000LL) * xa + v16;
  LODWORD(v17) = v9;
  HIDWORD(v17) = v20 + 0x80000000;
  *((double *)this + 14) = v17 * xa + v25;
  *((double *)this + 17) = v21 * xa + v16;
  result = v24 * (v19 * v19 - 1.0) + 1.0;
  *((double *)this + 20) = result;
  return result;
}


//======================================================================
// anl::CRGBARotateColor::get(double,double,double)
// address: 0x0032D2A0   size: 0x296 (662 bytes)
//======================================================================
anl::CRGBARotateColor *__fastcall anl::CRGBARotateColor::get(
        anl::CRGBARotateColor *this,
        int a2,
        double a3,
        double a4,
        double a5)
{
  int v6; // r1
  float v9; // r1
  float v10; // r0
  float v11; // r1
  float v12; // r4
  float v13; // r0
  float v14; // r0
  float v15; // r0
  float v16; // r6
  double v17; // r4
  float v18; // r0
  double v19; // r4
  float v20; // r0
  double v21; // r4
  float v22; // r0
  float v24; // [sp+18h] [bp-1Ch]
  double v25; // [sp+18h] [bp-1Ch]
  double v26; // [sp+20h] [bp-14h]
  float v27; // [sp+28h] [bp-Ch]
  float v28; // [sp+2Ch] [bp-8h]

  v6 = *(_DWORD *)(a2 + 72);
  if ( v6 != 0 )
  {
    (*(void (__fastcall **)(anl::CRGBARotateColor *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v6 + 12))(
      this,
      v6,
      LODWORD(a3),
      HIDWORD(a3),
      LODWORD(a4),
      HIDWORD(a4),
      LODWORD(a5),
      HIDWORD(a5));
  }
  else
  {
    *(_DWORD *)this = *(_DWORD *)(a2 + 76);
    *((_DWORD *)this + 1) = *(_DWORD *)(a2 + 80);
    *((_DWORD *)this + 2) = *(_DWORD *)(a2 + 84);
    *((_DWORD *)this + 3) = *(_DWORD *)(a2 + 88);
  }
  anl::CRGBARotateColor::calculateRotMatrix((anl::CRGBARotateColor *)a2, a3, a4, a5);
  v9 = *((float *)this + 1);
  v24 = (float)(*(float *)this + *(float *)this) - 1.0;
  *(float *)this = v24;
  v10 = (float)(v9 + v9) - 1.0;
  v11 = *((float *)this + 2);
  *((float *)this + 1) = v10;
  v12 = (float)(v11 + v11) - 1.0;
  *((float *)this + 2) = v12;
  v25 = v24;
  v26 = v10;
  v13 = v25 * *(double *)(a2 + 96) + v10 * *(double *)(a2 + 120) + v12 * *(double *)(a2 + 144);
  v27 = v13;
  v14 = v25 * *(double *)(a2 + 104) + v26 * *(double *)(a2 + 128) + v12 * *(double *)(a2 + 152);
  v28 = v14;
  v15 = v25 * *(double *)(a2 + 112) + v26 * *(double *)(a2 + 136) + v12 * *(double *)(a2 + 160);
  *((float *)this + 2) = v15;
  *(float *)this = v27;
  *((float *)this + 1) = v28;
  v16 = v15;
  v17 = v27 * 0.5 + 0.5;
  if ( v17 < 0.0 )
  {
    v17 = 0.0;
  }
  else if ( v17 > 1.0 )
  {
    v17 = 1.0;
  }
  v18 = v17;
  *(float *)this = v18;
  v19 = v28 * 0.5 + 0.5;
  if ( v19 < 0.0 )
  {
    v19 = 0.0;
  }
  else if ( v19 > 1.0 )
  {
    v19 = 1.0;
  }
  v20 = v19;
  *((float *)this + 1) = v20;
  v21 = v16 * 0.5 + 0.5;
  if ( v21 < 0.0 )
  {
    v21 = 0.0;
  }
  else if ( v21 > 1.0 )
  {
    v21 = 1.0;
  }
  v22 = v21;
  *((float *)this + 2) = v22;
  return this;
}


//======================================================================
// anl::CRGBARotateColor::calculateRotMatrix(double,double,double,double)
// address: 0x0032D550   size: 0x2F0 (752 bytes)
//======================================================================
double __fastcall anl::CRGBARotateColor::calculateRotMatrix(
        anl::CRGBARotateColor *this,
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
  double v14; // r0
  double v15; // kr00_8
  double v16; // r4
  double v17; // r4
  double v18; // r0
  double v19; // r4
  double result; // r0
  int v21; // [sp+1Ch] [bp-38h]
  double v22; // [sp+20h] [bp-34h]
  unsigned int v23; // [sp+28h] [bp-2Ch]
  unsigned int v24; // [sp+2Ch] [bp-28h]
  double v25; // [sp+30h] [bp-24h]
  double x; // [sp+38h] [bp-1Ch]
  double xa; // [sp+38h] [bp-1Ch]
  double v28; // [sp+48h] [bp-Ch]

  LODWORD(v8) = anl::CScalarParameter::get((anl::CRGBARotateColor *)((char *)this + 56), a2, a3, a4, a5);
  x = v8 * 360.0 * 3.14159265 / 180.0;
  LODWORD(v25) = anl::CScalarParameter::get((anl::CRGBARotateColor *)((char *)this + 8), a2, a3, a4, a5);
  HIDWORD(v25) = v9;
  v10 = anl::CScalarParameter::get((anl::CRGBARotateColor *)((char *)this + 24), a2, a3, a4, a5);
  v24 = v11;
  v21 = anl::CScalarParameter::get((anl::CRGBARotateColor *)((char *)this + 40), a2, a3, a4, a5);
  v23 = v12;
  if ( *((_BYTE *)this + 92) != 0 )
  {
    v13 = j_sqrt(
            v25 * v25
          + COERCE_DOUBLE(__PAIR64__(v24, v10)) * COERCE_DOUBLE(__PAIR64__(v24, v10))
          + COERCE_DOUBLE(__PAIR64__(v12, v21)) * COERCE_DOUBLE(__PAIR64__(v12, v21)));
    v25 = v25 / v13;
    v14 = COERCE_DOUBLE(__PAIR64__(v24, v10)) / v13;
    v24 = HIDWORD(v14);
    v10 = LODWORD(v14);
    v15 = COERCE_DOUBLE(__PAIR64__(v23, v21)) / v13;
    v23 = HIDWORD(v15);
    v21 = LODWORD(v15);
  }
  v16 = j_cos(x);
  v22 = j_sin(x);
  xa = 1.0 - v16;
  *((double *)this + 12) = (1.0 - v16) * (v25 * v25 - 1.0) + 1.0;
  v17 = (1.0 - v16) * v25;
  LODWORD(v18) = v21;
  HIDWORD(v18) = v23 + 0x80000000;
  *((double *)this + 15) = v18 * v22 + v17 * COERCE_DOUBLE(__PAIR64__(v24, v10));
  v28 = v17 * COERCE_DOUBLE(__PAIR64__(v23, v21));
  *((double *)this + 18) = COERCE_DOUBLE(__PAIR64__(v24, v10)) * v22 + v17 * COERCE_DOUBLE(__PAIR64__(v23, v21));
  *((double *)this + 13) = COERCE_DOUBLE(__PAIR64__(v23, v21)) * v22 + v17 * COERCE_DOUBLE(__PAIR64__(v24, v10));
  *((double *)this + 16) = xa * (COERCE_DOUBLE(__PAIR64__(v24, v10)) * COERCE_DOUBLE(__PAIR64__(v24, v10)) - 1.0) + 1.0;
  v19 = xa * COERCE_DOUBLE(__PAIR64__(v24, v10)) * COERCE_DOUBLE(__PAIR64__(v23, v21));
  *((double *)this + 19) = COERCE_DOUBLE(*(_QWORD *)&v25 + 0x8000000000000000LL) * v22 + v19;
  LODWORD(v18) = v10;
  HIDWORD(v18) = v24 + 0x80000000;
  *((double *)this + 14) = v18 * v22 + v28;
  *((double *)this + 17) = v25 * v22 + v19;
  result = xa * (COERCE_DOUBLE(__PAIR64__(v23, v21)) * COERCE_DOUBLE(__PAIR64__(v23, v21)) - 1.0) + 1.0;
  *((double *)this + 20) = result;
  return result;
}


//======================================================================
// anl::CRGBARotateColor::get(double,double,double,double)
// address: 0x0032D860   size: 0x2A6 (678 bytes)
//======================================================================
anl::CRGBARotateColor *__fastcall anl::CRGBARotateColor::get(
        anl::CRGBARotateColor *this,
        int a2,
        double a3,
        double a4,
        double a5,
        double a6)
{
  int v7; // r1
  float v10; // r1
  float v11; // r0
  float v12; // r1
  float v13; // r4
  float v14; // r0
  float v15; // r0
  float v16; // r0
  float v17; // r6
  double v18; // r4
  float v19; // r0
  double v20; // r4
  float v21; // r0
  double v22; // r4
  float v23; // r0
  float v25; // [sp+18h] [bp-24h]
  double v26; // [sp+18h] [bp-24h]
  double v27; // [sp+20h] [bp-1Ch]
  float v28; // [sp+30h] [bp-Ch]
  float v29; // [sp+34h] [bp-8h]

  v7 = *(_DWORD *)(a2 + 72);
  if ( v7 != 0 )
  {
    (*(void (__fastcall **)(anl::CRGBARotateColor *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v7 + 16))(
      this,
      v7,
      LODWORD(a3),
      HIDWORD(a3),
      LODWORD(a4),
      HIDWORD(a4),
      LODWORD(a5),
      HIDWORD(a5),
      LODWORD(a6),
      HIDWORD(a6));
  }
  else
  {
    *(_DWORD *)this = *(_DWORD *)(a2 + 76);
    *((_DWORD *)this + 1) = *(_DWORD *)(a2 + 80);
    *((_DWORD *)this + 2) = *(_DWORD *)(a2 + 84);
    *((_DWORD *)this + 3) = *(_DWORD *)(a2 + 88);
  }
  anl::CRGBARotateColor::calculateRotMatrix((anl::CRGBARotateColor *)a2, a3, a4, a5, a6);
  v10 = *((float *)this + 1);
  v25 = (float)(*(float *)this + *(float *)this) - 1.0;
  *(float *)this = v25;
  v11 = (float)(v10 + v10) - 1.0;
  v12 = *((float *)this + 2);
  *((float *)this + 1) = v11;
  v13 = (float)(v12 + v12) - 1.0;
  *((float *)this + 2) = v13;
  v26 = v25;
  v27 = v11;
  v14 = v26 * *(double *)(a2 + 96) + v11 * *(double *)(a2 + 120) + v13 * *(double *)(a2 + 144);
  v28 = v14;
  v15 = v26 * *(double *)(a2 + 104) + v27 * *(double *)(a2 + 128) + v13 * *(double *)(a2 + 152);
  v29 = v15;
  v16 = v26 * *(double *)(a2 + 112) + v27 * *(double *)(a2 + 136) + v13 * *(double *)(a2 + 160);
  *((float *)this + 2) = v16;
  *(float *)this = v28;
  *((float *)this + 1) = v29;
  v17 = v16;
  v18 = v28 * 0.5 + 0.5;
  if ( v18 < 0.0 )
  {
    v18 = 0.0;
  }
  else if ( v18 > 1.0 )
  {
    v18 = 1.0;
  }
  v19 = v18;
  *(float *)this = v19;
  v20 = v29 * 0.5 + 0.5;
  if ( v20 < 0.0 )
  {
    v20 = 0.0;
  }
  else if ( v20 > 1.0 )
  {
    v20 = 1.0;
  }
  v21 = v20;
  *((float *)this + 1) = v21;
  v22 = v17 * 0.5 + 0.5;
  if ( v22 < 0.0 )
  {
    v22 = 0.0;
  }
  else if ( v22 > 1.0 )
  {
    v22 = 1.0;
  }
  v23 = v22;
  *((float *)this + 2) = v23;
  return this;
}


//======================================================================
// anl::CRGBARotateColor::calculateRotMatrix(double,double,double,double,double,double)
// address: 0x0032DB20   size: 0x330 (816 bytes)
//======================================================================
double __fastcall anl::CRGBARotateColor::calculateRotMatrix(
        anl::CRGBARotateColor *this,
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
  double v16; // r0
  double v17; // kr00_8
  double v18; // r4
  double v19; // r4
  double v20; // r0
  double v21; // r4
  double result; // r0
  int v23; // [sp+2Ch] [bp-38h]
  double v24; // [sp+30h] [bp-34h]
  unsigned int v25; // [sp+38h] [bp-2Ch]
  unsigned int v26; // [sp+3Ch] [bp-28h]
  double v27; // [sp+40h] [bp-24h]
  double v28; // [sp+48h] [bp-1Ch]
  double x; // [sp+58h] [bp-Ch]
  double xa; // [sp+58h] [bp-Ch]

  LODWORD(v10) = anl::CScalarParameter::get((anl::CRGBARotateColor *)((char *)this + 56), a2, a3, a4, a5, a6, a7);
  x = v10 * 360.0 * 3.14159265 / 180.0;
  LODWORD(v28) = anl::CScalarParameter::get((anl::CRGBARotateColor *)((char *)this + 8), a2, a3, a4, a5, a6, a7);
  HIDWORD(v28) = v11;
  v12 = anl::CScalarParameter::get((anl::CRGBARotateColor *)((char *)this + 24), a2, a3, a4, a5, a6, a7);
  v26 = v13;
  v23 = anl::CScalarParameter::get((anl::CRGBARotateColor *)((char *)this + 40), a2, a3, a4, a5, a6, a7);
  v25 = v14;
  if ( *((_BYTE *)this + 92) != 0 )
  {
    v15 = j_sqrt(
            v28 * v28
          + COERCE_DOUBLE(__PAIR64__(v26, v12)) * COERCE_DOUBLE(__PAIR64__(v26, v12))
          + COERCE_DOUBLE(__PAIR64__(v14, v23)) * COERCE_DOUBLE(__PAIR64__(v14, v23)));
    v28 = v28 / v15;
    v16 = COERCE_DOUBLE(__PAIR64__(v26, v12)) / v15;
    v26 = HIDWORD(v16);
    v12 = LODWORD(v16);
    v17 = COERCE_DOUBLE(__PAIR64__(v25, v23)) / v15;
    v25 = HIDWORD(v17);
    v23 = LODWORD(v17);
  }
  v18 = j_cos(x);
  v24 = j_sin(x);
  v27 = 1.0 - v18;
  *((double *)this + 12) = (1.0 - v18) * (v28 * v28 - 1.0) + 1.0;
  v19 = (1.0 - v18) * v28;
  LODWORD(v20) = v23;
  HIDWORD(v20) = v25 + 0x80000000;
  *((double *)this + 15) = v20 * v24 + v19 * COERCE_DOUBLE(__PAIR64__(v26, v12));
  xa = v19 * COERCE_DOUBLE(__PAIR64__(v25, v23));
  *((double *)this + 18) = COERCE_DOUBLE(__PAIR64__(v26, v12)) * v24 + v19 * COERCE_DOUBLE(__PAIR64__(v25, v23));
  *((double *)this + 13) = COERCE_DOUBLE(__PAIR64__(v25, v23)) * v24 + v19 * COERCE_DOUBLE(__PAIR64__(v26, v12));
  *((double *)this + 16) = v27 * (COERCE_DOUBLE(__PAIR64__(v26, v12)) * COERCE_DOUBLE(__PAIR64__(v26, v12)) - 1.0) + 1.0;
  v21 = v27 * COERCE_DOUBLE(__PAIR64__(v26, v12)) * COERCE_DOUBLE(__PAIR64__(v25, v23));
  *((double *)this + 19) = COERCE_DOUBLE(*(_QWORD *)&v28 + 0x8000000000000000LL) * v24 + v21;
  LODWORD(v20) = v12;
  HIDWORD(v20) = v26 + 0x80000000;
  *((double *)this + 14) = v20 * v24 + xa;
  *((double *)this + 17) = v28 * v24 + v21;
  result = v27 * (COERCE_DOUBLE(__PAIR64__(v25, v23)) * COERCE_DOUBLE(__PAIR64__(v25, v23)) - 1.0) + 1.0;
  *((double *)this + 20) = result;
  return result;
}


//======================================================================
// anl::CRGBARotateColor::get(double,double,double,double,double,double)
// address: 0x0032DE70   size: 0x2C6 (710 bytes)
//======================================================================
anl::CRGBARotateColor *__fastcall anl::CRGBARotateColor::get(
        anl::CRGBARotateColor *this,
        int a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8)
{
  int v9; // r1
  float v12; // r1
  float v13; // r0
  float v14; // r1
  float v15; // r4
  float v16; // r0
  float v17; // r0
  float v18; // r0
  float v19; // r6
  double v20; // r4
  float v21; // r0
  double v22; // r4
  float v23; // r0
  double v24; // r4
  float v25; // r0
  float v27; // [sp+28h] [bp-24h]
  double v28; // [sp+28h] [bp-24h]
  double v29; // [sp+30h] [bp-1Ch]
  float v30; // [sp+40h] [bp-Ch]
  float v31; // [sp+44h] [bp-8h]

  v9 = *(_DWORD *)(a2 + 72);
  if ( v9 != 0 )
  {
    (*(void (__fastcall **)(anl::CRGBARotateColor *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v9 + 20))(
      this,
      v9,
      LODWORD(a3),
      HIDWORD(a3),
      LODWORD(a4),
      HIDWORD(a4),
      LODWORD(a5),
      HIDWORD(a5),
      LODWORD(a6),
      HIDWORD(a6),
      LODWORD(a7),
      HIDWORD(a7),
      LODWORD(a8),
      HIDWORD(a8));
  }
  else
  {
    *(_DWORD *)this = *(_DWORD *)(a2 + 76);
    *((_DWORD *)this + 1) = *(_DWORD *)(a2 + 80);
    *((_DWORD *)this + 2) = *(_DWORD *)(a2 + 84);
    *((_DWORD *)this + 3) = *(_DWORD *)(a2 + 88);
  }
  anl::CRGBARotateColor::calculateRotMatrix((anl::CRGBARotateColor *)a2, a3, a4, a5, a6, a7, a8);
  v12 = *((float *)this + 1);
  v27 = (float)(*(float *)this + *(float *)this) - 1.0;
  *(float *)this = v27;
  v13 = (float)(v12 + v12) - 1.0;
  v14 = *((float *)this + 2);
  *((float *)this + 1) = v13;
  v15 = (float)(v14 + v14) - 1.0;
  *((float *)this + 2) = v15;
  v28 = v27;
  v29 = v13;
  v16 = v28 * *(double *)(a2 + 96) + v13 * *(double *)(a2 + 120) + v15 * *(double *)(a2 + 144);
  v30 = v16;
  v17 = v28 * *(double *)(a2 + 104) + v29 * *(double *)(a2 + 128) + v15 * *(double *)(a2 + 152);
  v31 = v17;
  v18 = v28 * *(double *)(a2 + 112) + v29 * *(double *)(a2 + 136) + v15 * *(double *)(a2 + 160);
  *((float *)this + 2) = v18;
  *(float *)this = v30;
  *((float *)this + 1) = v31;
  v19 = v18;
  v20 = v30 * 0.5 + 0.5;
  if ( v20 < 0.0 )
  {
    v20 = 0.0;
  }
  else if ( v20 > 1.0 )
  {
    v20 = 1.0;
  }
  v21 = v20;
  *(float *)this = v21;
  v22 = v31 * 0.5 + 0.5;
  if ( v22 < 0.0 )
  {
    v22 = 0.0;
  }
  else if ( v22 > 1.0 )
  {
    v22 = 1.0;
  }
  v23 = v22;
  *((float *)this + 1) = v23;
  v24 = v19 * 0.5 + 0.5;
  if ( v24 < 0.0 )
  {
    v24 = 0.0;
  }
  else if ( v24 > 1.0 )
  {
    v24 = 1.0;
  }
  v25 = v24;
  *((float *)this + 2) = v25;
  return this;
}

