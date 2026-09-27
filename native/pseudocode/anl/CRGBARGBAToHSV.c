// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CRGBARGBAToHSV

//======================================================================
// anl::CRGBARGBAToHSV::~CRGBARGBAToHSV()
// address: 0x00315EA8   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl14CRGBARGBAToHSVD1Ev'
void __fastcall anl::CRGBARGBAToHSV::~CRGBARGBAToHSV(anl::CRGBARGBAToHSV *this)
{
  *(_DWORD *)this = &off_4634C8;
}


//======================================================================
// anl::CRGBARGBAToHSV::~CRGBARGBAToHSV()
// address: 0x00315EB8   size: 0x16 (22 bytes)
//======================================================================
void __fastcall anl::CRGBARGBAToHSV::~CRGBARGBAToHSV(anl::CRGBARGBAToHSV *this)
{
  *(_DWORD *)this = &off_4634C8;
  operator delete(this);
}


//======================================================================
// anl::CRGBARGBAToHSV::get(double,double,double,double,double,double)
// address: 0x00315ED4   size: 0x6A (106 bytes)
//======================================================================
anl::CRGBARGBAToHSV *__fastcall anl::CRGBARGBAToHSV::get(
        anl::CRGBARGBAToHSV *this,
        _DWORD *a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8)
{
  int v8; // r7
  int v10; // r0
  int v11; // r3
  int v12; // r1
  _DWORD v14[5]; // [sp+28h] [bp-14h] BYREF

  v8 = a2[1];
  if ( v8 != 0 )
  {
    (*(void (__fastcall **)(_DWORD *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v8 + 20))(
      v14,
      v8,
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
    v10 = a2[3];
    v14[0] = a2[2];
    v11 = a2[4];
    v12 = a2[5];
    v14[1] = v10;
    v14[2] = v11;
    v14[3] = v12;
  }
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  anl::RGBAtoHSV(v14, this);
  return this;
}


//======================================================================
// anl::CRGBARGBAToHSV::get(double,double,double,double)
// address: 0x00315F3E   size: 0x5A (90 bytes)
//======================================================================
anl::CRGBARGBAToHSV *__fastcall anl::CRGBARGBAToHSV::get(
        anl::CRGBARGBAToHSV *this,
        _DWORD *a2,
        double a3,
        double a4,
        double a5,
        double a6)
{
  int v6; // r7
  int v8; // r0
  int v9; // r3
  int v10; // r1
  _DWORD v12[5]; // [sp+18h] [bp-14h] BYREF

  v6 = a2[1];
  if ( v6 != 0 )
  {
    (*(void (__fastcall **)(_DWORD *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v6 + 16))(
      v12,
      v6,
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
    v8 = a2[3];
    v12[0] = a2[2];
    v9 = a2[4];
    v10 = a2[5];
    v12[1] = v8;
    v12[2] = v9;
    v12[3] = v10;
  }
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  anl::RGBAtoHSV(v12, this);
  return this;
}


//======================================================================
// anl::CRGBARGBAToHSV::get(double,double)
// address: 0x00315F98   size: 0x4A (74 bytes)
//======================================================================
anl::CRGBARGBAToHSV *__fastcall anl::CRGBARGBAToHSV::get(anl::CRGBARGBAToHSV *this, _DWORD *a2, double a3, double a4)
{
  int v4; // r7
  int v6; // r0
  int v7; // r3
  int v8; // r1
  _DWORD v10[5]; // [sp+8h] [bp-14h] BYREF

  v4 = a2[1];
  if ( v4 != 0 )
  {
    (*(void (__fastcall **)(_DWORD *, int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v4 + 8))(
      v10,
      v4,
      LODWORD(a3),
      HIDWORD(a3),
      LODWORD(a4),
      HIDWORD(a4));
  }
  else
  {
    v6 = a2[3];
    v10[0] = a2[2];
    v7 = a2[4];
    v8 = a2[5];
    v10[1] = v6;
    v10[2] = v7;
    v10[3] = v8;
  }
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  anl::RGBAtoHSV(v10, this);
  return this;
}


//======================================================================
// anl::CRGBARGBAToHSV::get(double,double,double)
// address: 0x00315FE2   size: 0x52 (82 bytes)
//======================================================================
anl::CRGBARGBAToHSV *__fastcall anl::CRGBARGBAToHSV::get(
        anl::CRGBARGBAToHSV *this,
        _DWORD *a2,
        double a3,
        double a4,
        double a5)
{
  int v5; // r7
  int v7; // r0
  int v8; // r3
  int v9; // r1
  _DWORD v11[5]; // [sp+10h] [bp-14h] BYREF

  v5 = a2[1];
  if ( v5 != 0 )
  {
    (*(void (__fastcall **)(_DWORD *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v5 + 12))(
      v11,
      v5,
      LODWORD(a3),
      HIDWORD(a3),
      LODWORD(a4),
      HIDWORD(a4),
      LODWORD(a5),
      HIDWORD(a5));
  }
  else
  {
    v7 = a2[3];
    v11[0] = a2[2];
    v8 = a2[4];
    v9 = a2[5];
    v11[1] = v7;
    v11[2] = v8;
    v11[3] = v9;
  }
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  anl::RGBAtoHSV(v11, this);
  return this;
}


//======================================================================
// anl::CRGBARGBAToHSV::CRGBARGBAToHSV(void)
// address: 0x00316034   size: 0x1A (26 bytes)
//======================================================================
// Alternative name is '_ZN3anl14CRGBARGBAToHSVC1Ev'
_DWORD *__fastcall anl::CRGBARGBAToHSV::CRGBARGBAToHSV(_DWORD *this)
{
  *this = &off_463528;
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  return this;
}


//======================================================================
// anl::CRGBARGBAToHSV::setSource(anl::CRGBAModuleBase *)
// address: 0x00316054   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CRGBARGBAToHSV::setSource(int this, anl::CRGBAModuleBase *a2)
{
  *(_DWORD *)(this + 4) = a2;
  return this;
}


//======================================================================
// anl::CRGBARGBAToHSV::setSource(float,float,float,float)
// address: 0x00316058   size: 0x12 (18 bytes)
//======================================================================
int __fastcall anl::CRGBARGBAToHSV::setSource(int this, float a2, float a3, float a4, float a5)
{
  *(float *)(this + 16) = a4;
  *(_DWORD *)(this + 4) = 0;
  *(float *)(this + 8) = a2;
  *(float *)(this + 12) = a3;
  *(float *)(this + 20) = a5;
  return this;
}

