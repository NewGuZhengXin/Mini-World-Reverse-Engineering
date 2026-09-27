// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CImplicitBrightContrast

//======================================================================
// anl::CImplicitBrightContrast::~CImplicitBrightContrast()
// address: 0x003264D8   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl23CImplicitBrightContrastD1Ev'
void __fastcall anl::CImplicitBrightContrast::~CImplicitBrightContrast(anl::CImplicitBrightContrast *this)
{
  *(_DWORD *)this = &off_462280;
}


//======================================================================
// anl::CImplicitBrightContrast::~CImplicitBrightContrast()
// address: 0x003264E8   size: 0x12 (18 bytes)
//======================================================================
void __fastcall anl::CImplicitBrightContrast::~CImplicitBrightContrast(anl::CImplicitBrightContrast *this)
{
  anl::CImplicitBrightContrast::~CImplicitBrightContrast(this);
  operator delete(this);
}


//======================================================================
// anl::CImplicitBrightContrast::get(double,double)
// address: 0x003264FA   size: 0x98 (152 bytes)
//======================================================================
double __fastcall anl::CImplicitBrightContrast::get(anl::CImplicitBrightContrast *this, double a2, double a3)
{
  double v5; // r4
  int v6; // r1
  double v7; // r0
  double v8; // r4
  double v9; // r0
  double v10; // r4
  double v11; // r0
  double v14; // [sp+10h] [bp-Ch]

  LODWORD(v5) = anl::CScalarParameter::get((anl::CImplicitBrightContrast *)((char *)this + 16), a2, a3);
  HIDWORD(v5) = v6;
  LODWORD(v7) = anl::CScalarParameter::get((anl::CImplicitBrightContrast *)((char *)this + 32), a2, a3);
  v8 = v5 + v7;
  LODWORD(v9) = anl::CScalarParameter::get((anl::CImplicitBrightContrast *)((char *)this + 48), a2, a3);
  v14 = v9;
  v10 = v8 - v9;
  LODWORD(v11) = anl::CScalarParameter::get((anl::CImplicitBrightContrast *)((char *)this + 64), a2, a3);
  return v10 * v11 + v14;
}


//======================================================================
// anl::CImplicitBrightContrast::get(double,double,double)
// address: 0x00326592   size: 0xB8 (184 bytes)
//======================================================================
double __fastcall anl::CImplicitBrightContrast::get(
        anl::CImplicitBrightContrast *this,
        double a2,
        double a3,
        double a4)
{
  double v6; // r4
  int v7; // r1
  double v8; // r0
  double v9; // r4
  double v10; // r0
  double v11; // r4
  double v12; // r0
  double v15; // [sp+18h] [bp-Ch]

  LODWORD(v6) = anl::CScalarParameter::get((anl::CImplicitBrightContrast *)((char *)this + 16), a2, a3, a4);
  HIDWORD(v6) = v7;
  LODWORD(v8) = anl::CScalarParameter::get((anl::CImplicitBrightContrast *)((char *)this + 32), a2, a3, a4);
  v9 = v6 + v8;
  LODWORD(v10) = anl::CScalarParameter::get((anl::CImplicitBrightContrast *)((char *)this + 48), a2, a3, a4);
  v15 = v10;
  v11 = v9 - v10;
  LODWORD(v12) = anl::CScalarParameter::get((anl::CImplicitBrightContrast *)((char *)this + 64), a2, a3, a4);
  return v11 * v12 + v15;
}


//======================================================================
// anl::CImplicitBrightContrast::get(double,double,double,double)
// address: 0x0032664A   size: 0xD8 (216 bytes)
//======================================================================
double __fastcall anl::CImplicitBrightContrast::get(
        anl::CImplicitBrightContrast *this,
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
  double v12; // r4
  double v13; // r0
  double v16; // [sp+20h] [bp-Ch]

  LODWORD(v7) = anl::CScalarParameter::get((anl::CImplicitBrightContrast *)((char *)this + 16), a2, a3, a4, a5);
  HIDWORD(v7) = v8;
  LODWORD(v9) = anl::CScalarParameter::get((anl::CImplicitBrightContrast *)((char *)this + 32), a2, a3, a4, a5);
  v10 = v7 + v9;
  LODWORD(v11) = anl::CScalarParameter::get((anl::CImplicitBrightContrast *)((char *)this + 48), a2, a3, a4, a5);
  v16 = v11;
  v12 = v10 - v11;
  LODWORD(v13) = anl::CScalarParameter::get((anl::CImplicitBrightContrast *)((char *)this + 64), a2, a3, a4, a5);
  return v12 * v13 + v16;
}


//======================================================================
// anl::CImplicitBrightContrast::get(double,double,double,double,double,double)
// address: 0x00326722   size: 0x118 (280 bytes)
//======================================================================
double __fastcall anl::CImplicitBrightContrast::get(
        anl::CImplicitBrightContrast *this,
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
  double v14; // r4
  double v15; // r0
  double v18; // [sp+30h] [bp-Ch]

  LODWORD(v9) = anl::CScalarParameter::get((anl::CImplicitBrightContrast *)((char *)this + 16), a2, a3, a4, a5, a6, a7);
  HIDWORD(v9) = v10;
  LODWORD(v11) = anl::CScalarParameter::get((anl::CImplicitBrightContrast *)((char *)this + 32), a2, a3, a4, a5, a6, a7);
  v12 = v9 + v11;
  LODWORD(v13) = anl::CScalarParameter::get((anl::CImplicitBrightContrast *)((char *)this + 48), a2, a3, a4, a5, a6, a7);
  v18 = v13;
  v14 = v12 - v13;
  LODWORD(v15) = anl::CScalarParameter::get((anl::CImplicitBrightContrast *)((char *)this + 64), a2, a3, a4, a5, a6, a7);
  return v14 * v15 + v18;
}


//======================================================================
// anl::CImplicitBrightContrast::CImplicitBrightContrast(void)
// address: 0x00326840   size: 0x36 (54 bytes)
//======================================================================
// Alternative name is '_ZN3anl23CImplicitBrightContrastC1Ev'
_DWORD *__fastcall anl::CImplicitBrightContrast::CImplicitBrightContrast(_DWORD *this)
{
  *(this + 2) = -350469331;
  *(this + 3) = 1058682594;
  *(this + 6) = 0;
  *(this + 10) = 0;
  *(this + 14) = 0;
  *this = &off_463860;
  *(this + 18) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 12) = 0;
  *(this + 13) = 0;
  *(this + 16) = 0;
  *(this + 17) = 1072693248;
  return this;
}


//======================================================================
// anl::CImplicitBrightContrast::setSource(anl::CImplicitModuleBase *)
// address: 0x00326898   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitBrightContrast::setSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 24) = a2;
  return this;
}


//======================================================================
// anl::CImplicitBrightContrast::setSource(double)
// address: 0x0032689C   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitBrightContrast::setSource(int this, double a2)
{
  *(_DWORD *)(this + 24) = 0;
  *(double *)(this + 16) = a2;
  return this;
}


//======================================================================
// anl::CImplicitBrightContrast::setBrightness(double)
// address: 0x003268A6   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitBrightContrast::setBrightness(int this, double a2)
{
  *(_DWORD *)(this + 40) = 0;
  *(double *)(this + 32) = a2;
  return this;
}


//======================================================================
// anl::CImplicitBrightContrast::setContrastThreshold(double)
// address: 0x003268B0   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitBrightContrast::setContrastThreshold(int this, double a2)
{
  *(_DWORD *)(this + 56) = 0;
  *(double *)(this + 48) = a2;
  return this;
}


//======================================================================
// anl::CImplicitBrightContrast::setContrastFactor(double)
// address: 0x003268BA   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitBrightContrast::setContrastFactor(int this, double a2)
{
  *(_DWORD *)(this + 72) = 0;
  *(double *)(this + 64) = a2;
  return this;
}


//======================================================================
// anl::CImplicitBrightContrast::setBrightness(anl::CImplicitModuleBase *)
// address: 0x003268C4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitBrightContrast::setBrightness(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 40) = a2;
  return this;
}


//======================================================================
// anl::CImplicitBrightContrast::setContrastThreshold(anl::CImplicitModuleBase *)
// address: 0x003268C8   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitBrightContrast::setContrastThreshold(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 56) = a2;
  return this;
}


//======================================================================
// anl::CImplicitBrightContrast::setContrastFactor(anl::CImplicitModuleBase *)
// address: 0x003268CC   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitBrightContrast::setContrastFactor(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 72) = a2;
  return this;
}

