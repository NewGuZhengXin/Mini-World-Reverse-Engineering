// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CImplicitFunctionGradient

//======================================================================
// anl::CImplicitFunctionGradient::~CImplicitFunctionGradient()
// address: 0x0032F520   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl25CImplicitFunctionGradientD1Ev'
void __fastcall anl::CImplicitFunctionGradient::~CImplicitFunctionGradient(anl::CImplicitFunctionGradient *this)
{
  *(_DWORD *)this = &off_462280;
}


//======================================================================
// anl::CImplicitFunctionGradient::~CImplicitFunctionGradient()
// address: 0x0032F530   size: 0x12 (18 bytes)
//======================================================================
void __fastcall anl::CImplicitFunctionGradient::~CImplicitFunctionGradient(anl::CImplicitFunctionGradient *this)
{
  anl::CImplicitFunctionGradient::~CImplicitFunctionGradient(this);
  operator delete(this);
}


//======================================================================
// anl::CImplicitFunctionGradient::get(double,double)
// address: 0x0032F548   size: 0xB0 (176 bytes)
//======================================================================
double __fastcall anl::CImplicitFunctionGradient::get(anl::CImplicitFunctionGradient *this, double a2, double a3)
{
  int v5; // r3
  anl::CScalarParameter *v7; // r7
  int v8; // r1
  double v9; // r0
  anl::CScalarParameter *v10; // r7
  int v11; // r1
  double v13; // [sp+8h] [bp-Ch]

  v5 = *((_DWORD *)this + 8);
  if ( v5 == 0 )
  {
    v10 = (anl::CImplicitFunctionGradient *)((char *)this + 16);
    LODWORD(v13) = anl::CScalarParameter::get(
                     (anl::CImplicitFunctionGradient *)((char *)this + 16),
                     a2 - *((double *)this + 5),
                     a3);
    HIDWORD(v13) = v11;
    LODWORD(v9) = anl::CScalarParameter::get(v10, a2 + *((double *)this + 5), a3);
    return (v13 - v9) / *((double *)this + 5);
  }
  if ( v5 == 1 )
  {
    v7 = (anl::CImplicitFunctionGradient *)((char *)this + 16);
    LODWORD(v13) = anl::CScalarParameter::get(
                     (anl::CImplicitFunctionGradient *)((char *)this + 16),
                     a2,
                     a3 - *((double *)this + 5));
    HIDWORD(v13) = v8;
    LODWORD(v9) = anl::CScalarParameter::get(v7, a2, a3 + *((double *)this + 5));
    return (v13 - v9) / *((double *)this + 5);
  }
  return 0.0;
}


//======================================================================
// anl::CImplicitFunctionGradient::get(double,double,double)
// address: 0x0032F600   size: 0x11A (282 bytes)
//======================================================================
double __fastcall anl::CImplicitFunctionGradient::get(
        anl::CImplicitFunctionGradient *this,
        double a2,
        double a3,
        double a4)
{
  int v6; // r3
  anl::CScalarParameter *v8; // r7
  int v9; // r1
  double v10; // r0
  anl::CScalarParameter *v11; // r7
  int v12; // r1
  int v13; // r1
  double v15; // [sp+0h] [bp-1Ch]
  double v16; // [sp+8h] [bp-14h]
  double v17; // [sp+10h] [bp-Ch]

  v6 = *((_DWORD *)this + 8);
  if ( v6 == 1 )
  {
    v11 = (anl::CImplicitFunctionGradient *)((char *)this + 16);
    LODWORD(v17) = anl::CScalarParameter::get(
                     (anl::CImplicitFunctionGradient *)((char *)this + 16),
                     a2,
                     a3 - *((double *)this + 5),
                     a4);
    HIDWORD(v17) = v12;
    v15 = a3 + *((double *)this + 5);
    v16 = a4;
LABEL_8:
    LODWORD(v10) = anl::CScalarParameter::get(v11, a2, v15, v16);
    return (v17 - v10) / *((double *)this + 5);
  }
  if ( v6 == 2 )
  {
    v11 = (anl::CImplicitFunctionGradient *)((char *)this + 16);
    LODWORD(v17) = anl::CScalarParameter::get(
                     (anl::CImplicitFunctionGradient *)((char *)this + 16),
                     a2,
                     a3,
                     a4 - *((double *)this + 5));
    HIDWORD(v17) = v13;
    v15 = a3;
    v16 = a4 + *((double *)this + 5);
    goto LABEL_8;
  }
  if ( v6 != 0 )
    return 0.0;
  v8 = (anl::CImplicitFunctionGradient *)((char *)this + 16);
  LODWORD(v17) = anl::CScalarParameter::get(
                   (anl::CImplicitFunctionGradient *)((char *)this + 16),
                   a2 - *((double *)this + 5),
                   a3,
                   a4);
  HIDWORD(v17) = v9;
  LODWORD(v10) = anl::CScalarParameter::get(v8, a2 + *((double *)this + 5), a3, a4);
  return (v17 - v10) / *((double *)this + 5);
}


//======================================================================
// anl::CImplicitFunctionGradient::get(double,double,double,double)
// address: 0x0032F728   size: 0x192 (402 bytes)
//======================================================================
double __fastcall anl::CImplicitFunctionGradient::get(
        anl::CImplicitFunctionGradient *this,
        double a2,
        double a3,
        double a4,
        double a5)
{
  int v8; // r1
  double v9; // r0
  int v10; // r1
  int v11; // r1
  int v12; // r1
  double result; // r0
  double v14; // [sp+0h] [bp-24h]
  double v15; // [sp+8h] [bp-1Ch]
  double v16; // [sp+10h] [bp-14h]
  double v17; // [sp+18h] [bp-Ch]

  switch ( *((_DWORD *)this + 8) )
  {
    case 0:
      LODWORD(v17) = anl::CScalarParameter::get(
                       (anl::CImplicitFunctionGradient *)((char *)this + 16),
                       a2 - *((double *)this + 5),
                       a3,
                       a4,
                       a5);
      HIDWORD(v17) = v8;
      LODWORD(v9) = anl::CScalarParameter::get(
                      (anl::CImplicitFunctionGradient *)((char *)this + 16),
                      a2 + *((double *)this + 5),
                      a3,
                      a4,
                      a5);
      goto LABEL_7;
    case 1:
      LODWORD(v17) = anl::CScalarParameter::get(
                       (anl::CImplicitFunctionGradient *)((char *)this + 16),
                       a2,
                       a3 - *((double *)this + 5),
                       a4,
                       a5);
      HIDWORD(v17) = v10;
      v14 = a3 + *((double *)this + 5);
      v15 = a4;
      v16 = a5;
      goto LABEL_6;
    case 2:
      LODWORD(v17) = anl::CScalarParameter::get(
                       (anl::CImplicitFunctionGradient *)((char *)this + 16),
                       a2,
                       a3,
                       a4 - *((double *)this + 5),
                       a5);
      HIDWORD(v17) = v11;
      v14 = a3;
      v15 = a4 + *((double *)this + 5);
      v16 = a5;
      goto LABEL_6;
    case 3:
      LODWORD(v17) = anl::CScalarParameter::get(
                       (anl::CImplicitFunctionGradient *)((char *)this + 16),
                       a2,
                       a3,
                       a4,
                       a5 - *((double *)this + 5));
      HIDWORD(v17) = v12;
      v14 = a3;
      v15 = a4;
      v16 = a5 + *((double *)this + 5);
LABEL_6:
      LODWORD(v9) = anl::CScalarParameter::get((anl::CImplicitFunctionGradient *)((char *)this + 16), a2, v14, v15, v16);
LABEL_7:
      result = (v17 - v9) / *((double *)this + 5);
      break;
    default:
      result = 0.0;
      break;
  }
  return result;
}


//======================================================================
// anl::CImplicitFunctionGradient::get(double,double,double,double,double,double)
// address: 0x0032F8C8   size: 0x2EE (750 bytes)
//======================================================================
double __fastcall anl::CImplicitFunctionGradient::get(
        anl::CImplicitFunctionGradient *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  int v10; // r1
  double v11; // r0
  int v12; // r1
  double v13; // r0
  double v14; // r0
  double v15; // r0
  int v16; // r1
  int v17; // r1
  double result; // r0
  double v19; // [sp+0h] [bp-34h]
  double v20; // [sp+8h] [bp-2Ch]
  double v21; // [sp+10h] [bp-24h]
  double v22; // [sp+18h] [bp-1Ch]
  double v23; // [sp+20h] [bp-14h]
  double v24; // [sp+28h] [bp-Ch]

  switch ( *((_DWORD *)this + 8) )
  {
    case 0:
      LODWORD(v24) = anl::CScalarParameter::get(
                       (anl::CImplicitFunctionGradient *)((char *)this + 16),
                       a2 - *((double *)this + 5),
                       a3,
                       a4,
                       a5,
                       a6,
                       a7);
      HIDWORD(v24) = v10;
      LODWORD(v11) = anl::CScalarParameter::get(
                       (anl::CImplicitFunctionGradient *)((char *)this + 16),
                       a2 + *((double *)this + 5),
                       a3,
                       a4,
                       a5,
                       a6,
                       a7);
      goto LABEL_11;
    case 1:
      LODWORD(v24) = anl::CScalarParameter::get(
                       (anl::CImplicitFunctionGradient *)((char *)this + 16),
                       a2,
                       a3 - *((double *)this + 5),
                       a4,
                       a5,
                       a6,
                       a7);
      HIDWORD(v24) = v12;
      v19 = a3 + *((double *)this + 5);
      v20 = a4;
      v21 = a5;
      v22 = a6;
      goto LABEL_7;
    case 2:
      LODWORD(v13) = anl::CScalarParameter::get(
                       (anl::CImplicitFunctionGradient *)((char *)this + 16),
                       a2,
                       a3,
                       a4 - *((double *)this + 5),
                       a5,
                       a6,
                       a7);
      v24 = v13;
      v19 = a3;
      v20 = a4 + *((double *)this + 5);
      v21 = a5;
      v22 = a6;
      v23 = a7;
      goto LABEL_10;
    case 3:
      LODWORD(v14) = anl::CScalarParameter::get(
                       (anl::CImplicitFunctionGradient *)((char *)this + 16),
                       a2,
                       a3,
                       a4,
                       a5 - *((double *)this + 5),
                       a6,
                       a7);
      v24 = v14;
      v19 = a3;
      v20 = a4;
      v21 = a5 + *((double *)this + 5);
      v15 = a7;
      v22 = a6;
      goto LABEL_9;
    case 4:
      LODWORD(v24) = anl::CScalarParameter::get(
                       (anl::CImplicitFunctionGradient *)((char *)this + 16),
                       a2,
                       a3,
                       a4,
                       a5,
                       a6 - *((double *)this + 5),
                       a7);
      HIDWORD(v24) = v16;
      v19 = a3;
      v20 = a4;
      v21 = a5;
      v22 = a6 + *((double *)this + 5);
LABEL_7:
      v23 = a7;
      goto LABEL_10;
    case 5:
      LODWORD(v24) = anl::CScalarParameter::get(
                       (anl::CImplicitFunctionGradient *)((char *)this + 16),
                       a2,
                       a3,
                       a4,
                       a5,
                       a6,
                       a7 - *((double *)this + 5));
      HIDWORD(v24) = v17;
      v19 = a3;
      v20 = a4;
      v21 = a5;
      v22 = a6;
      v15 = a7 + *((double *)this + 5);
LABEL_9:
      v23 = v15;
LABEL_10:
      LODWORD(v11) = anl::CScalarParameter::get(
                       (anl::CImplicitFunctionGradient *)((char *)this + 16),
                       a2,
                       v19,
                       v20,
                       v21,
                       v22,
                       v23);
LABEL_11:
      result = (v24 - v11) / *((double *)this + 5);
      break;
    default:
      result = 0.0;
      break;
  }
  return result;
}


//======================================================================
// anl::CImplicitFunctionGradient::CImplicitFunctionGradient(void)
// address: 0x0032FBC0   size: 0x2A (42 bytes)
//======================================================================
// Alternative name is '_ZN3anl25CImplicitFunctionGradientC1Ev'
_DWORD *__fastcall anl::CImplicitFunctionGradient::CImplicitFunctionGradient(_DWORD *this)
{
  *(this + 2) = -350469331;
  *(this + 3) = 1058682594;
  *this = &off_463BC0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 8) = 0;
  *(this + 10) = 1202590843;
  *(this + 11) = 1065646817;
  return this;
}


//======================================================================
// anl::CImplicitFunctionGradient::setSource(double)
// address: 0x0032FC10   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitFunctionGradient::setSource(int this, double a2)
{
  *(_DWORD *)(this + 24) = 0;
  *(double *)(this + 16) = a2;
  return this;
}


//======================================================================
// anl::CImplicitFunctionGradient::setSource(anl::CImplicitModuleBase *)
// address: 0x0032FC1A   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitFunctionGradient::setSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 24) = a2;
  return this;
}


//======================================================================
// anl::CImplicitFunctionGradient::setAxis(int)
// address: 0x0032FC1E   size: 0x1A (26 bytes)
//======================================================================
int __fastcall anl::CImplicitFunctionGradient::setAxis(int this, int a2)
{
  if ( a2 < 0 )
    *(_DWORD *)(this + 32) = 0;
  else
    *(_DWORD *)(this + 32) = a2;
  if ( *(int *)(this + 32) > 5 )
    *(_DWORD *)(this + 32) = 5;
  return this;
}


//======================================================================
// anl::CImplicitFunctionGradient::setSpacing(double)
// address: 0x0032FC38   size: 0x6 (6 bytes)
//======================================================================
int __fastcall anl::CImplicitFunctionGradient::setSpacing(int this, double a2)
{
  *(double *)(this + 40) = a2;
  return this;
}

