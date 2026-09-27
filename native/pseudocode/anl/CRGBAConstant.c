// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CRGBAConstant

//======================================================================
// anl::CRGBAConstant::~CRGBAConstant()
// address: 0x00315DA8   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl13CRGBAConstantD1Ev'
void __fastcall anl::CRGBAConstant::~CRGBAConstant(anl::CRGBAConstant *this)
{
  *(_DWORD *)this = &off_4634C8;
}


//======================================================================
// anl::CRGBAConstant::~CRGBAConstant()
// address: 0x00315DD4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall anl::CRGBAConstant::~CRGBAConstant(anl::CRGBAConstant *this)
{
  anl::CRGBAConstant::~CRGBAConstant(this);
  operator delete(this);
}


//======================================================================
// anl::CRGBAConstant::get(double,double,double,double,double,double)
// address: 0x00315DE6   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall anl::CRGBAConstant::get(
        _DWORD *this,
        _DWORD *a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8)
{
  *this = a2[1];
  *(this + 1) = a2[2];
  *(this + 2) = a2[3];
  *(this + 3) = a2[4];
  return this;
}


//======================================================================
// anl::CRGBAConstant::get(double,double)
// address: 0x00315DF8   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall anl::CRGBAConstant::get(_DWORD *this, _DWORD *a2, double a3, double a4)
{
  *this = a2[1];
  *(this + 1) = a2[2];
  *(this + 2) = a2[3];
  *(this + 3) = a2[4];
  return this;
}


//======================================================================
// anl::CRGBAConstant::get(double,double,double)
// address: 0x00315E0A   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall anl::CRGBAConstant::get(_DWORD *this, _DWORD *a2, double a3, double a4, double a5)
{
  *this = a2[1];
  *(this + 1) = a2[2];
  *(this + 2) = a2[3];
  *(this + 3) = a2[4];
  return this;
}


//======================================================================
// anl::CRGBAConstant::get(double,double,double,double)
// address: 0x00315E1C   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall anl::CRGBAConstant::get(_DWORD *this, _DWORD *a2, double a3, double a4, double a5, double a6)
{
  *this = a2[1];
  *(this + 1) = a2[2];
  *(this + 2) = a2[3];
  *(this + 3) = a2[4];
  return this;
}


//======================================================================
// anl::CRGBAConstant::CRGBAConstant(void)
// address: 0x00315E30   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN3anl13CRGBAConstantC1Ev'
_DWORD *__fastcall anl::CRGBAConstant::CRGBAConstant(_DWORD *this)
{
  *this = &off_4634F8;
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  return this;
}


//======================================================================
// anl::CRGBAConstant::CRGBAConstant(TVec4D<float> &)
// address: 0x00315E4C   size: 0x1C (28 bytes)
//======================================================================
// Alternative name is '_ZN3anl13CRGBAConstantC1ER6TVec4DIfE'
_DWORD *__fastcall anl::CRGBAConstant::CRGBAConstant(_DWORD *result, _DWORD *a2)
{
  *result = &off_4634F8;
  result[1] = *a2;
  result[2] = a2[1];
  result[3] = a2[2];
  result[4] = a2[3];
  return result;
}


//======================================================================
// anl::CRGBAConstant::CRGBAConstant(float,float,float,float)
// address: 0x00315E6C   size: 0x18 (24 bytes)
//======================================================================
// Alternative name is '_ZN3anl13CRGBAConstantC1Effff'
int __fastcall anl::CRGBAConstant::CRGBAConstant(int this, float a2, float a3, float a4, float a5)
{
  *(float *)(this + 12) = a4;
  *(float *)(this + 4) = a2;
  *(float *)(this + 8) = a3;
  *(_DWORD *)this = &off_4634F8;
  *(float *)(this + 16) = a5;
  return this;
}


//======================================================================
// anl::CRGBAConstant::set(float,float,float,float)
// address: 0x00315E88   size: 0xC (12 bytes)
//======================================================================
float *__fastcall anl::CRGBAConstant::set(float *this, float a2, float a3, float a4, float a5)
{
  *(this + 3) = a4;
  *(this + 1) = a2;
  *(this + 2) = a3;
  *(this + 4) = a5;
  return this;
}


//======================================================================
// anl::CRGBAConstant::set(TVec4D<float> &)
// address: 0x00315E94   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall anl::CRGBAConstant::set(_DWORD *result, int *a2)
{
  int v2; // r4
  int v3; // r2
  int v4; // r3
  int v5; // r1

  v2 = *a2;
  v3 = a2[1];
  v4 = a2[2];
  v5 = a2[3];
  result[1] = v2;
  result[4] = v5;
  result[2] = v3;
  result[3] = v4;
  return result;
}

