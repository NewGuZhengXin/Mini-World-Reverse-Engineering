// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CImplicitCos

//======================================================================
// anl::CImplicitCos::~CImplicitCos()
// address: 0x003175E0   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl12CImplicitCosD1Ev'
void __fastcall anl::CImplicitCos::~CImplicitCos(anl::CImplicitCos *this)
{
  *(_DWORD *)this = &off_462280;
}


//======================================================================
// anl::CImplicitCos::~CImplicitCos()
// address: 0x003175F0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall anl::CImplicitCos::~CImplicitCos(anl::CImplicitCos *this)
{
  anl::CImplicitCos::~CImplicitCos(this);
  operator delete(this);
}


//======================================================================
// anl::CImplicitCos::get(double,double)
// address: 0x00317602   size: 0x26 (38 bytes)
//======================================================================
double __fastcall anl::CImplicitCos::get(anl::CImplicitCos *this, double a2, double a3)
{
  int v4; // r1
  double v5; // r0

  v4 = *((_DWORD *)this + 6);
  if ( v4 != 0 )
    LODWORD(v5) = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  else
    v5 = *((double *)this + 2);
  return j_cos(v5);
}


//======================================================================
// anl::CImplicitCos::get(double,double,double)
// address: 0x00317628   size: 0x30 (48 bytes)
//======================================================================
double __fastcall anl::CImplicitCos::get(anl::CImplicitCos *this, double a2, double a3, double a4)
{
  int v5; // r1
  double v6; // r0

  v5 = *((_DWORD *)this + 6);
  if ( v5 != 0 )
    LODWORD(v6) = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 16))(v5);
  else
    v6 = *((double *)this + 2);
  return j_cos(v6);
}


//======================================================================
// anl::CImplicitCos::get(double,double,double,double)
// address: 0x00317658   size: 0x38 (56 bytes)
//======================================================================
double __fastcall anl::CImplicitCos::get(anl::CImplicitCos *this, double a2, double a3, double a4, double a5)
{
  int v6; // r1
  double v7; // r0

  v6 = *((_DWORD *)this + 6);
  if ( v6 != 0 )
    LODWORD(v7) = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 20))(v6);
  else
    v7 = *((double *)this + 2);
  return j_cos(v7);
}


//======================================================================
// anl::CImplicitCos::get(double,double,double,double,double,double)
// address: 0x00317690   size: 0x48 (72 bytes)
//======================================================================
double __fastcall anl::CImplicitCos::get(
        anl::CImplicitCos *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  int v8; // r1
  double v9; // r0

  v8 = *((_DWORD *)this + 6);
  if ( v8 != 0 )
    LODWORD(v9) = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 24))(v8);
  else
    v9 = *((double *)this + 2);
  return j_cos(v9);
}


//======================================================================
// anl::CImplicitCos::CImplicitCos(void)
// address: 0x003176D8   size: 0x20 (32 bytes)
//======================================================================
// Alternative name is '_ZN3anl12CImplicitCosC1Ev'
_DWORD *__fastcall anl::CImplicitCos::CImplicitCos(_DWORD *this)
{
  *(this + 2) = -350469331;
  *(this + 3) = 1058682594;
  *this = &off_4635F8;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 6) = 0;
  return this;
}


//======================================================================
// anl::CImplicitCos::setSource(double)
// address: 0x00317710   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitCos::setSource(int this, double a2)
{
  *(_DWORD *)(this + 24) = 0;
  *(double *)(this + 16) = a2;
  return this;
}


//======================================================================
// anl::CImplicitCos::setSource(anl::CImplicitModuleBase *)
// address: 0x0031771A   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitCos::setSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 24) = a2;
  return this;
}

