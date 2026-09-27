// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CImplicitScaleOffset

//======================================================================
// anl::CImplicitScaleOffset::~CImplicitScaleOffset()
// address: 0x0031B328   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl20CImplicitScaleOffsetD1Ev'
void __fastcall anl::CImplicitScaleOffset::~CImplicitScaleOffset(anl::CImplicitScaleOffset *this)
{
  *(_DWORD *)this = &off_462280;
}


//======================================================================
// anl::CImplicitScaleOffset::~CImplicitScaleOffset()
// address: 0x0031B338   size: 0x12 (18 bytes)
//======================================================================
void __fastcall anl::CImplicitScaleOffset::~CImplicitScaleOffset(anl::CImplicitScaleOffset *this)
{
  anl::CImplicitScaleOffset::~CImplicitScaleOffset(this);
  operator delete(this);
}


//======================================================================
// anl::CImplicitScaleOffset::get(double,double)
// address: 0x0031B36C   size: 0x68 (104 bytes)
//======================================================================
double __fastcall anl::CImplicitScaleOffset::get(anl::CImplicitScaleOffset *this, double a2, double a3)
{
  double v5; // r4
  int v6; // r1
  double v7; // r0
  double v8; // r4
  double v9; // r0

  LODWORD(v5) = anl::CScalarParameter::get((anl::CImplicitScaleOffset *)((char *)this + 16), a2, a3);
  HIDWORD(v5) = v6;
  LODWORD(v7) = anl::CScalarParameter::get((anl::CImplicitScaleOffset *)((char *)this + 32), a2, a3);
  v8 = v5 * v7;
  LODWORD(v9) = anl::CScalarParameter::get((anl::CImplicitScaleOffset *)((char *)this + 48), a2, a3);
  return v8 + v9;
}


//======================================================================
// anl::CImplicitScaleOffset::get(double,double,double)
// address: 0x0031B400   size: 0x80 (128 bytes)
//======================================================================
double __fastcall anl::CImplicitScaleOffset::get(anl::CImplicitScaleOffset *this, double a2, double a3, double a4)
{
  double v6; // r4
  int v7; // r1
  double v8; // r0
  double v9; // r4
  double v10; // r0

  LODWORD(v6) = anl::CScalarParameter::get((anl::CImplicitScaleOffset *)((char *)this + 16), a2, a3, a4);
  HIDWORD(v6) = v7;
  LODWORD(v8) = anl::CScalarParameter::get((anl::CImplicitScaleOffset *)((char *)this + 32), a2, a3, a4);
  v9 = v6 * v8;
  LODWORD(v10) = anl::CScalarParameter::get((anl::CImplicitScaleOffset *)((char *)this + 48), a2, a3, a4);
  return v9 + v10;
}


//======================================================================
// anl::CImplicitScaleOffset::get(double,double,double,double)
// address: 0x0031B4B4   size: 0x98 (152 bytes)
//======================================================================
double __fastcall anl::CImplicitScaleOffset::get(
        anl::CImplicitScaleOffset *this,
        double a2,
        double a3,
        double a4,
        double a5)
{
  double v7; // r4
  int v8; // r1
  double v9; // r0
  double v10; // r4
  double v11; // r0

  LODWORD(v7) = anl::CScalarParameter::get((anl::CImplicitScaleOffset *)((char *)this + 16), a2, a3, a4, a5);
  HIDWORD(v7) = v8;
  LODWORD(v9) = anl::CScalarParameter::get((anl::CImplicitScaleOffset *)((char *)this + 32), a2, a3, a4, a5);
  v10 = v7 * v9;
  LODWORD(v11) = anl::CScalarParameter::get((anl::CImplicitScaleOffset *)((char *)this + 48), a2, a3, a4, a5);
  return v10 + v11;
}


//======================================================================
// anl::CImplicitScaleOffset::get(double,double,double,double,double,double)
// address: 0x0031B590   size: 0xC8 (200 bytes)
//======================================================================
double __fastcall anl::CImplicitScaleOffset::get(
        anl::CImplicitScaleOffset *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  double v9; // r4
  int v10; // r1
  double v11; // r0
  double v12; // r4
  double v13; // r0

  LODWORD(v9) = anl::CScalarParameter::get((anl::CImplicitScaleOffset *)((char *)this + 16), a2, a3, a4, a5, a6, a7);
  HIDWORD(v9) = v10;
  LODWORD(v11) = anl::CScalarParameter::get((anl::CImplicitScaleOffset *)((char *)this + 32), a2, a3, a4, a5, a6, a7);
  v12 = v9 * v11;
  LODWORD(v13) = anl::CScalarParameter::get((anl::CImplicitScaleOffset *)((char *)this + 48), a2, a3, a4, a5, a6, a7);
  return v12 + v13;
}


//======================================================================
// anl::CImplicitScaleOffset::CImplicitScaleOffset(double,double)
// address: 0x0031B658   size: 0x32 (50 bytes)
//======================================================================
// Alternative name is '_ZN3anl20CImplicitScaleOffsetC1Edd'
int __fastcall anl::CImplicitScaleOffset::CImplicitScaleOffset(int this, double a2, double a3)
{
  *(_DWORD *)(this + 8) = -350469331;
  *(_DWORD *)(this + 12) = 1058682594;
  *(_DWORD *)this = &off_463668;
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
// anl::CImplicitScaleOffset::setSource(anl::CImplicitModuleBase *)
// address: 0x0031B6A8   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitScaleOffset::setSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 24) = a2;
  return this;
}


//======================================================================
// anl::CImplicitScaleOffset::setSource(double)
// address: 0x0031B6AC   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitScaleOffset::setSource(int this, double a2)
{
  *(_DWORD *)(this + 24) = 0;
  *(double *)(this + 16) = a2;
  return this;
}


//======================================================================
// anl::CImplicitScaleOffset::setScale(double)
// address: 0x0031B6B6   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitScaleOffset::setScale(int this, double a2)
{
  *(_DWORD *)(this + 40) = 0;
  *(double *)(this + 32) = a2;
  return this;
}


//======================================================================
// anl::CImplicitScaleOffset::setOffset(double)
// address: 0x0031B6C0   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitScaleOffset::setOffset(int this, double a2)
{
  *(_DWORD *)(this + 56) = 0;
  *(double *)(this + 48) = a2;
  return this;
}


//======================================================================
// anl::CImplicitScaleOffset::setScale(anl::CImplicitModuleBase *)
// address: 0x0031B6CA   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitScaleOffset::setScale(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 40) = a2;
  return this;
}


//======================================================================
// anl::CImplicitScaleOffset::setOffset(anl::CImplicitModuleBase *)
// address: 0x0031B6CE   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitScaleOffset::setOffset(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 56) = a2;
  return this;
}

