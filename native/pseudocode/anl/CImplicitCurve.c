// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CImplicitCurve

//======================================================================
// anl::CImplicitCurve::~CImplicitCurve()
// address: 0x003164D8   size: 0x26 (38 bytes)
//======================================================================
// Alternative name is '_ZN3anl14CImplicitCurveD1Ev'
void __fastcall anl::CImplicitCurve::~CImplicitCurve(anl::CImplicitCurve *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_463590;
  v2 = *((void **)this + 4);
  if ( v2 != nullptr )
    operator delete(v2);
  *(_DWORD *)this = &off_462280;
}


//======================================================================
// anl::CImplicitCurve::~CImplicitCurve()
// address: 0x00316508   size: 0x12 (18 bytes)
//======================================================================
void __fastcall anl::CImplicitCurve::~CImplicitCurve(anl::CImplicitCurve *this)
{
  anl::CImplicitCurve::~CImplicitCurve(this);
  operator delete(this);
}


//======================================================================
// anl::CImplicitCurve::CImplicitCurve(void)
// address: 0x00316520   size: 0x2A (42 bytes)
//======================================================================
// Alternative name is '_ZN3anl14CImplicitCurveC1Ev'
_DWORD *__fastcall anl::CImplicitCurve::CImplicitCurve(_DWORD *this)
{
  *(this + 2) = -350469331;
  *(this + 3) = 1058682594;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 6) = 0;
  *this = &off_463590;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 12) = 1;
  return this;
}


//======================================================================
// anl::CImplicitCurve::clearCurve(void)
// address: 0x00316568   size: 0x6 (6 bytes)
//======================================================================
int __fastcall anl::CImplicitCurve::clearCurve(int this)
{
  *(_DWORD *)(this + 20) = *(_DWORD *)(this + 16);
  return this;
}


//======================================================================
// anl::CImplicitCurve::setInterpType(int)
// address: 0x0031656E   size: 0x1A (26 bytes)
//======================================================================
int __fastcall anl::CImplicitCurve::setInterpType(int this, int a2)
{
  if ( a2 < 0 )
    *(_DWORD *)(this + 48) = 0;
  else
    *(_DWORD *)(this + 48) = a2;
  if ( *(int *)(this + 48) > 3 )
    *(_DWORD *)(this + 48) = 3;
  return this;
}


//======================================================================
// anl::CImplicitCurve::setSource(double)
// address: 0x00316588   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitCurve::setSource(int this, double a2)
{
  *(_DWORD *)(this + 40) = 0;
  *(double *)(this + 32) = a2;
  return this;
}


//======================================================================
// anl::CImplicitCurve::setSource(anl::CImplicitModuleBase *)
// address: 0x00316592   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitCurve::setSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 40) = a2;
  return this;
}


//======================================================================
// anl::CImplicitCurve::get(double,double)
// address: 0x00316968   size: 0x52 (82 bytes)
//======================================================================
double __fastcall anl::CImplicitCurve::get(anl::CImplicitCurve *this, double a2, double a3)
{
  int v5; // r0
  double v6; // r2
  int v7; // r0
  int *v8; // r4
  double result; // r0

  v5 = *((_DWORD *)this + 10);
  if ( v5 != 0 )
    v6 = COERCE_DOUBLE(
           ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v5 + 12))(
             v5,
             *(_DWORD *)(*(_DWORD *)v5 + 12),
             LODWORD(a2),
             HIDWORD(a2)));
  else
    v6 = *((double *)this + 4);
  v7 = *((_DWORD *)this + 12);
  v8 = (int *)((char *)this + 16);
  switch ( v7 )
  {
    case 0:
      result = COERCE_DOUBLE(anl::TCurve<double>::noInterp(v8, v6));
      break;
    case 2:
      result = anl::TCurve<double>::cubicInterp(v8, v6);
      break;
    case 3:
      result = anl::TCurve<double>::quinticInterp(v8, v6);
      break;
    default:
      result = anl::TCurve<double>::linearInterp(v8, v6);
      break;
  }
  return result;
}


//======================================================================
// anl::CImplicitCurve::get(double,double,double)
// address: 0x003169BA   size: 0x5C (92 bytes)
//======================================================================
double __fastcall anl::CImplicitCurve::get(anl::CImplicitCurve *this, double a2, double a3, double a4)
{
  int v6; // r0
  double v7; // r2
  int v8; // r0
  int *v9; // r4
  double result; // r0

  v6 = *((_DWORD *)this + 10);
  if ( v6 != 0 )
    v7 = COERCE_DOUBLE(((__int64 (__fastcall *)(int))*(_DWORD *)(*(_DWORD *)v6 + 16))(v6));
  else
    v7 = *((double *)this + 4);
  v8 = *((_DWORD *)this + 12);
  v9 = (int *)((char *)this + 16);
  switch ( v8 )
  {
    case 0:
      result = COERCE_DOUBLE(anl::TCurve<double>::noInterp(v9, v7));
      break;
    case 2:
      result = anl::TCurve<double>::cubicInterp(v9, v7);
      break;
    case 3:
      result = anl::TCurve<double>::quinticInterp(v9, v7);
      break;
    default:
      result = anl::TCurve<double>::linearInterp(v9, v7);
      break;
  }
  return result;
}


//======================================================================
// anl::CImplicitCurve::get(double,double,double,double)
// address: 0x00316A16   size: 0x66 (102 bytes)
//======================================================================
double __fastcall anl::CImplicitCurve::get(anl::CImplicitCurve *this, double a2, double a3, double a4, double a5)
{
  int v7; // r0
  double v8; // r2
  int v9; // r0
  int *v10; // r4
  double result; // r0

  v7 = *((_DWORD *)this + 10);
  if ( v7 != 0 )
    v8 = COERCE_DOUBLE(
           ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v7 + 20))(
             v7,
             *(_DWORD *)(*(_DWORD *)v7 + 20),
             LODWORD(a2),
             HIDWORD(a2),
             LODWORD(a3),
             HIDWORD(a3),
             LODWORD(a4),
             HIDWORD(a4),
             LODWORD(a5),
             HIDWORD(a5)));
  else
    v8 = *((double *)this + 4);
  v9 = *((_DWORD *)this + 12);
  v10 = (int *)((char *)this + 16);
  switch ( v9 )
  {
    case 0:
      result = COERCE_DOUBLE(anl::TCurve<double>::noInterp(v10, v8));
      break;
    case 2:
      result = anl::TCurve<double>::cubicInterp(v10, v8);
      break;
    case 3:
      result = anl::TCurve<double>::quinticInterp(v10, v8);
      break;
    default:
      result = anl::TCurve<double>::linearInterp(v10, v8);
      break;
  }
  return result;
}


//======================================================================
// anl::CImplicitCurve::get(double,double,double,double,double,double)
// address: 0x00316A7C   size: 0x76 (118 bytes)
//======================================================================
double __fastcall anl::CImplicitCurve::get(
        anl::CImplicitCurve *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  int v9; // r0
  double v10; // r2
  int v11; // r0
  int *v12; // r4
  double result; // r0

  v9 = *((_DWORD *)this + 10);
  if ( v9 != 0 )
    v10 = COERCE_DOUBLE(
            ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v9 + 24))(
              v9,
              *(_DWORD *)(*(_DWORD *)v9 + 24),
              LODWORD(a2),
              HIDWORD(a2),
              LODWORD(a3),
              HIDWORD(a3),
              LODWORD(a4),
              HIDWORD(a4),
              LODWORD(a5),
              HIDWORD(a5),
              LODWORD(a6),
              HIDWORD(a6),
              LODWORD(a7),
              HIDWORD(a7)));
  else
    v10 = *((double *)this + 4);
  v11 = *((_DWORD *)this + 12);
  v12 = (int *)((char *)this + 16);
  switch ( v11 )
  {
    case 0:
      result = COERCE_DOUBLE(anl::TCurve<double>::noInterp(v12, v10));
      break;
    case 2:
      result = anl::TCurve<double>::cubicInterp(v12, v10);
      break;
    case 3:
      result = anl::TCurve<double>::quinticInterp(v12, v10);
      break;
    default:
      result = anl::TCurve<double>::linearInterp(v12, v10);
      break;
  }
  return result;
}


//======================================================================
// anl::CImplicitCurve::pushPoint(double,double)
// address: 0x00316C0C   size: 0x54 (84 bytes)
//======================================================================
void __fastcall anl::CImplicitCurve::pushPoint(anl::CImplicitCurve *this, double a2, double a3)
{
  int *v4; // r7
  char *ControlPoint; // r3
  char *v8; // r1
  char *v9; // r0
  __int128 v10; // [sp+0h] [bp-14h] BYREF

  v4 = (int *)((char *)this + 16);
  ControlPoint = (char *)anl::TCurve<double>::findControlPoint((int *)this + 4, a2);
  *((double *)&v10 + 1) = a3;
  v8 = *((char **)this + 5);
  v9 = *((char **)this + 6);
  *(double *)&v10 = a2;
  if ( v8 != v9 && ControlPoint == v8 )
  {
    if ( ControlPoint != nullptr )
      *(_OWORD *)ControlPoint = v10;
    *((_DWORD *)this + 5) += 16;
  }
  else
  {
    std::vector<anl::TCurve<double>::SControlPoint,std::allocator<anl::TCurve<double>::SControlPoint>>::_M_insert_aux<anl::TCurve<double>::SControlPoint>(
      v4,
      ControlPoint,
      &v10);
  }
}

