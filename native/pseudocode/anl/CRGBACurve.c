// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CRGBACurve

//======================================================================
// anl::CRGBACurve::~CRGBACurve()
// address: 0x00316C60   size: 0x26 (38 bytes)
//======================================================================
// Alternative name is '_ZN3anl10CRGBACurveD1Ev'
void __fastcall anl::CRGBACurve::~CRGBACurve(anl::CRGBACurve *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_4635C8;
  v2 = *((void **)this + 1);
  if ( v2 != nullptr )
    operator delete(v2);
  *(_DWORD *)this = &off_4634C8;
}


//======================================================================
// anl::CRGBACurve::~CRGBACurve()
// address: 0x00316C90   size: 0x12 (18 bytes)
//======================================================================
void __fastcall anl::CRGBACurve::~CRGBACurve(anl::CRGBACurve *this)
{
  anl::CRGBACurve::~CRGBACurve(this);
  operator delete(this);
}


//======================================================================
// anl::CRGBACurve::CRGBACurve(void)
// address: 0x00316CA8   size: 0x22 (34 bytes)
//======================================================================
// Alternative name is '_ZN3anl10CRGBACurveC1Ev'
_DWORD *__fastcall anl::CRGBACurve::CRGBACurve(_DWORD *this)
{
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *this = &off_4635C8;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 8) = 1;
  return this;
}


//======================================================================
// anl::CRGBACurve::clearCurve(void)
// address: 0x00316CE0   size: 0x6 (6 bytes)
//======================================================================
int __fastcall anl::CRGBACurve::clearCurve(int this)
{
  *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4);
  return this;
}


//======================================================================
// anl::CRGBACurve::setInterpType(int)
// address: 0x00316CE6   size: 0x1A (26 bytes)
//======================================================================
int __fastcall anl::CRGBACurve::setInterpType(int this, int a2)
{
  if ( a2 < 0 )
    *(_DWORD *)(this + 32) = 0;
  else
    *(_DWORD *)(this + 32) = a2;
  if ( *(int *)(this + 32) > 3 )
    *(_DWORD *)(this + 32) = 3;
  return this;
}


//======================================================================
// anl::CRGBACurve::setSource(double)
// address: 0x00316D00   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CRGBACurve::setSource(int this, double a2)
{
  *(_DWORD *)(this + 24) = 0;
  *(double *)(this + 16) = a2;
  return this;
}


//======================================================================
// anl::CRGBACurve::setSource(anl::CImplicitModuleBase *)
// address: 0x00316D0A   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CRGBACurve::setSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 24) = a2;
  return this;
}


//======================================================================
// anl::CRGBACurve::get(double,double)
// address: 0x003172A0   size: 0x56 (86 bytes)
//======================================================================
anl::CRGBACurve *__fastcall anl::CRGBACurve::get(anl::CRGBACurve *this, int a2, double a3, double a4)
{
  int v5; // r0
  double v7; // r2
  int *v8; // r1

  v5 = *(_DWORD *)(a2 + 24);
  if ( v5 != 0 )
    v7 = COERCE_DOUBLE(
           ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v5 + 12))(
             v5,
             *(_DWORD *)(*(_DWORD *)v5 + 12),
             LODWORD(a3),
             HIDWORD(a3)));
  else
    v7 = *(double *)(a2 + 16);
  v8 = (int *)(a2 + 4);
  switch ( *(_DWORD *)(a2 + 32) )
  {
    case 0:
      anl::TCurve<TVec4D<float>>::noInterp(this, v8, v7);
      break;
    case 2:
      anl::TCurve<TVec4D<float>>::cubicInterp((float *)this, v8, v7);
      break;
    case 3:
      anl::TCurve<TVec4D<float>>::quinticInterp((float *)this, v8, v7);
      break;
    default:
      anl::TCurve<TVec4D<float>>::linearInterp((float *)this, v8, v7);
      break;
  }
  return this;
}


//======================================================================
// anl::CRGBACurve::get(double,double,double)
// address: 0x003172F6   size: 0x62 (98 bytes)
//======================================================================
anl::CRGBACurve *__fastcall anl::CRGBACurve::get(anl::CRGBACurve *this, int a2, double a3, double a4, double a5)
{
  int v6; // r0
  double v8; // r2
  int *v9; // r1

  v6 = *(_DWORD *)(a2 + 24);
  if ( v6 != 0 )
    v8 = COERCE_DOUBLE(
           ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v6 + 16))(
             v6,
             *(_DWORD *)(*(_DWORD *)v6 + 16),
             LODWORD(a3),
             HIDWORD(a3),
             LODWORD(a4),
             HIDWORD(a4),
             LODWORD(a5),
             HIDWORD(a5)));
  else
    v8 = *(double *)(a2 + 16);
  v9 = (int *)(a2 + 4);
  switch ( *(_DWORD *)(a2 + 32) )
  {
    case 0:
      anl::TCurve<TVec4D<float>>::noInterp(this, v9, v8);
      break;
    case 2:
      anl::TCurve<TVec4D<float>>::cubicInterp((float *)this, v9, v8);
      break;
    case 3:
      anl::TCurve<TVec4D<float>>::quinticInterp((float *)this, v9, v8);
      break;
    default:
      anl::TCurve<TVec4D<float>>::linearInterp((float *)this, v9, v8);
      break;
  }
  return this;
}


//======================================================================
// anl::CRGBACurve::get(double,double,double,double)
// address: 0x00317358   size: 0x6A (106 bytes)
//======================================================================
anl::CRGBACurve *__fastcall anl::CRGBACurve::get(
        anl::CRGBACurve *this,
        int a2,
        double a3,
        double a4,
        double a5,
        double a6)
{
  int v7; // r0
  double v9; // r2
  int *v10; // r1

  v7 = *(_DWORD *)(a2 + 24);
  if ( v7 != 0 )
    v9 = COERCE_DOUBLE(
           ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v7 + 20))(
             v7,
             *(_DWORD *)(*(_DWORD *)v7 + 20),
             LODWORD(a3),
             HIDWORD(a3),
             LODWORD(a4),
             HIDWORD(a4),
             LODWORD(a5),
             HIDWORD(a5),
             LODWORD(a6),
             HIDWORD(a6)));
  else
    v9 = *(double *)(a2 + 16);
  v10 = (int *)(a2 + 4);
  switch ( *(_DWORD *)(a2 + 32) )
  {
    case 0:
      anl::TCurve<TVec4D<float>>::noInterp(this, v10, v9);
      break;
    case 2:
      anl::TCurve<TVec4D<float>>::cubicInterp((float *)this, v10, v9);
      break;
    case 3:
      anl::TCurve<TVec4D<float>>::quinticInterp((float *)this, v10, v9);
      break;
    default:
      anl::TCurve<TVec4D<float>>::linearInterp((float *)this, v10, v9);
      break;
  }
  return this;
}


//======================================================================
// anl::CRGBACurve::get(double,double,double,double,double,double)
// address: 0x003173C2   size: 0x7A (122 bytes)
//======================================================================
anl::CRGBACurve *__fastcall anl::CRGBACurve::get(
        anl::CRGBACurve *this,
        int a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8)
{
  int v9; // r0
  double v11; // r2
  int *v12; // r1

  v9 = *(_DWORD *)(a2 + 24);
  if ( v9 != 0 )
    v11 = COERCE_DOUBLE(
            ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v9 + 24))(
              v9,
              *(_DWORD *)(*(_DWORD *)v9 + 24),
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
              HIDWORD(a8)));
  else
    v11 = *(double *)(a2 + 16);
  v12 = (int *)(a2 + 4);
  switch ( *(_DWORD *)(a2 + 32) )
  {
    case 0:
      anl::TCurve<TVec4D<float>>::noInterp(this, v12, v11);
      break;
    case 2:
      anl::TCurve<TVec4D<float>>::cubicInterp((float *)this, v12, v11);
      break;
    case 3:
      anl::TCurve<TVec4D<float>>::quinticInterp((float *)this, v12, v11);
      break;
    default:
      anl::TCurve<TVec4D<float>>::linearInterp((float *)this, v12, v11);
      break;
  }
  return this;
}


//======================================================================
// anl::CRGBACurve::pushPoint(double,float,float,float,float)
// address: 0x00317564   size: 0x7C (124 bytes)
//======================================================================
void __fastcall anl::CRGBACurve::pushPoint(anl::CRGBACurve *this, double a2, float a3, float a4, float a5, float a6)
{
  int ControlPoint; // r7
  int v10; // r3
  char *v11; // [sp+Ch] [bp-40h]
  _DWORD v12[4]; // [sp+10h] [bp-3Ch] BYREF
  __int128 v13; // [sp+20h] [bp-2Ch] BYREF
  double v14; // [sp+30h] [bp-1Ch] BYREF
  __int128 v15; // [sp+38h] [bp-14h] BYREF

  *(float *)v12 = a3;
  v11 = (char *)this + 4;
  *(float *)&v12[1] = a4;
  *(float *)&v12[2] = a5;
  *(float *)&v12[3] = a6;
  ControlPoint = anl::TCurve<TVec4D<float>>::findControlPoint((int *)this + 1, a2);
  TVec4D<float>::TVec4D(&v13, v12);
  v14 = a2;
  v15 = v13;
  v10 = *((_DWORD *)this + 2);
  if ( v10 != *((_DWORD *)this + 3) && ControlPoint == v10 )
  {
    if ( ControlPoint != 0 )
    {
      *(double *)ControlPoint = a2;
      TVec4D<float>::TVec4D((_DWORD *)(ControlPoint + 8), &v15);
    }
    *((_DWORD *)this + 2) += 24;
  }
  else
  {
    std::vector<anl::TCurve<TVec4D<float>>::SControlPoint,std::allocator<anl::TCurve<TVec4D<float>>::SControlPoint>>::_M_insert_aux<anl::TCurve<TVec4D<float>>::SControlPoint>(
      (int)v11,
      (_BYTE *)ControlPoint,
      &v14);
  }
}

