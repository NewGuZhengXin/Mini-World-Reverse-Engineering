// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CImplicitBlend

//======================================================================
// anl::CImplicitBlend::~CImplicitBlend()
// address: 0x00320B64   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl14CImplicitBlendD1Ev'
void __fastcall anl::CImplicitBlend::~CImplicitBlend(anl::CImplicitBlend *this)
{
  *(_DWORD *)this = &off_462280;
}


//======================================================================
// anl::CImplicitBlend::~CImplicitBlend()
// address: 0x00320B74   size: 0x12 (18 bytes)
//======================================================================
void __fastcall anl::CImplicitBlend::~CImplicitBlend(anl::CImplicitBlend *this)
{
  anl::CImplicitBlend::~CImplicitBlend(this);
  operator delete(this);
}


//======================================================================
// anl::CImplicitBlend::get(double,double)
// address: 0x00320B88   size: 0x88 (136 bytes)
//======================================================================
double __fastcall anl::CImplicitBlend::get(anl::CImplicitBlend *this, double a2, double a3)
{
  double v5; // r4
  int v6; // r1
  int v7; // r1
  double v8; // r0
  double v11; // [sp+10h] [bp-Ch]

  LODWORD(v5) = anl::CScalarParameter::get((anl::CImplicitBlend *)((char *)this + 16), a2, a3);
  HIDWORD(v5) = v6;
  LODWORD(v11) = anl::CScalarParameter::get((anl::CImplicitBlend *)((char *)this + 32), a2, a3);
  HIDWORD(v11) = v7;
  LODWORD(v8) = anl::CScalarParameter::get((anl::CImplicitBlend *)((char *)this + 48), a2, a3);
  return v5 + (v8 + 1.0) * 0.5 * (v11 - v5);
}


//======================================================================
// anl::CImplicitBlend::get(double,double,double)
// address: 0x00320C20   size: 0x90 (144 bytes)
//======================================================================
double __fastcall anl::CImplicitBlend::get(anl::CImplicitBlend *this, double a2, double a3, double a4)
{
  double v6; // r6
  int v7; // r1
  int v8; // r1
  double v9; // r0
  double v12; // [sp+18h] [bp-Ch]

  LODWORD(v6) = anl::CScalarParameter::get((anl::CImplicitBlend *)((char *)this + 16), a2, a3, a4);
  HIDWORD(v6) = v7;
  LODWORD(v12) = anl::CScalarParameter::get((anl::CImplicitBlend *)((char *)this + 32), a2, a3, a4);
  HIDWORD(v12) = v8;
  LODWORD(v9) = anl::CScalarParameter::get((anl::CImplicitBlend *)((char *)this + 48), a2, a3, a4);
  return v6 + v9 * (v12 - v6);
}


//======================================================================
// anl::CImplicitBlend::get(double,double,double,double)
// address: 0x00320CB0   size: 0xA8 (168 bytes)
//======================================================================
double __fastcall anl::CImplicitBlend::get(anl::CImplicitBlend *this, double a2, double a3, double a4, double a5)
{
  double v7; // r6
  int v8; // r1
  int v9; // r1
  double v10; // r0
  double v13; // [sp+20h] [bp-Ch]

  LODWORD(v7) = anl::CScalarParameter::get((anl::CImplicitBlend *)((char *)this + 16), a2, a3, a4, a5);
  HIDWORD(v7) = v8;
  LODWORD(v13) = anl::CScalarParameter::get((anl::CImplicitBlend *)((char *)this + 32), a2, a3, a4, a5);
  HIDWORD(v13) = v9;
  LODWORD(v10) = anl::CScalarParameter::get((anl::CImplicitBlend *)((char *)this + 48), a2, a3, a4, a5);
  return v7 + v10 * (v13 - v7);
}


//======================================================================
// anl::CImplicitBlend::get(double,double,double,double,double,double)
// address: 0x00320D58   size: 0xD8 (216 bytes)
//======================================================================
double __fastcall anl::CImplicitBlend::get(
        anl::CImplicitBlend *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  double v9; // r6
  int v10; // r1
  int v11; // r1
  double v12; // r0
  double v15; // [sp+30h] [bp-Ch]

  LODWORD(v9) = anl::CScalarParameter::get((anl::CImplicitBlend *)((char *)this + 16), a2, a3, a4, a5, a6, a7);
  HIDWORD(v9) = v10;
  LODWORD(v15) = anl::CScalarParameter::get((anl::CImplicitBlend *)((char *)this + 32), a2, a3, a4, a5, a6, a7);
  HIDWORD(v15) = v11;
  LODWORD(v12) = anl::CScalarParameter::get((anl::CImplicitBlend *)((char *)this + 48), a2, a3, a4, a5, a6, a7);
  return v9 + v12 * (v15 - v9);
}


//======================================================================
// anl::CImplicitBlend::CImplicitBlend(void)
// address: 0x00320E30   size: 0x2C (44 bytes)
//======================================================================
// Alternative name is '_ZN3anl14CImplicitBlendC1Ev'
_DWORD *__fastcall anl::CImplicitBlend::CImplicitBlend(_DWORD *this)
{
  *(this + 2) = -350469331;
  *(this + 3) = 1058682594;
  *(this + 6) = 0;
  *(this + 10) = 0;
  *(this + 14) = 0;
  *this = &off_463780;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 12) = 0;
  *(this + 13) = 0;
  return this;
}


//======================================================================
// anl::CImplicitBlend::setLowSource(anl::CImplicitModuleBase *)
// address: 0x00320E78   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitBlend::setLowSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 24) = a2;
  return this;
}


//======================================================================
// anl::CImplicitBlend::setHighSource(anl::CImplicitModuleBase *)
// address: 0x00320E7C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitBlend::setHighSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 40) = a2;
  return this;
}


//======================================================================
// anl::CImplicitBlend::setControlSource(anl::CImplicitModuleBase *)
// address: 0x00320E80   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitBlend::setControlSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 56) = a2;
  return this;
}


//======================================================================
// anl::CImplicitBlend::setLowSource(double)
// address: 0x00320E84   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitBlend::setLowSource(int this, double a2)
{
  *(_DWORD *)(this + 24) = 0;
  *(double *)(this + 16) = a2;
  return this;
}


//======================================================================
// anl::CImplicitBlend::setHighSource(double)
// address: 0x00320E8E   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitBlend::setHighSource(int this, double a2)
{
  *(_DWORD *)(this + 40) = 0;
  *(double *)(this + 32) = a2;
  return this;
}


//======================================================================
// anl::CImplicitBlend::setControlSource(double)
// address: 0x00320E98   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CImplicitBlend::setControlSource(int this, double a2)
{
  *(_DWORD *)(this + 56) = 0;
  *(double *)(this + 48) = a2;
  return this;
}

