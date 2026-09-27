// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CImplicitRGBADotProduct

//======================================================================
// anl::CImplicitRGBADotProduct::~CImplicitRGBADotProduct()
// address: 0x003207BC   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl23CImplicitRGBADotProductD1Ev'
void __fastcall anl::CImplicitRGBADotProduct::~CImplicitRGBADotProduct(anl::CImplicitRGBADotProduct *this)
{
  *(_DWORD *)this = &off_462280;
}


//======================================================================
// anl::CImplicitRGBADotProduct::~CImplicitRGBADotProduct()
// address: 0x003207CC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall anl::CImplicitRGBADotProduct::~CImplicitRGBADotProduct(anl::CImplicitRGBADotProduct *this)
{
  anl::CImplicitRGBADotProduct::~CImplicitRGBADotProduct(this);
  operator delete(this);
}


//======================================================================
// anl::CImplicitRGBADotProduct::get(double,double,double,double,double,double)
// address: 0x003207DE   size: 0xE8 (232 bytes)
//======================================================================
double __fastcall anl::CImplicitRGBADotProduct::get(
        anl::CImplicitRGBADotProduct *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  int v8; // r1
  float v11; // r7
  float v12; // r2
  float v13; // r3
  int v14; // r1
  float v15; // r7
  float v16; // r2
  float v17; // r3
  float v18; // r6
  float v20; // [sp+28h] [bp-24h] BYREF
  float v21; // [sp+2Ch] [bp-20h]
  float v22; // [sp+30h] [bp-1Ch]
  float v23; // [sp+34h] [bp-18h]
  float v24; // [sp+38h] [bp-14h] BYREF
  float v25; // [sp+3Ch] [bp-10h]
  float v26; // [sp+40h] [bp-Ch]
  float v27; // [sp+44h] [bp-8h]

  v8 = *((_DWORD *)this + 4);
  if ( v8 != 0 )
  {
    (*(void (__fastcall **)(float *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v8 + 20))(
      &v20,
      v8,
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
      HIDWORD(a7));
  }
  else
  {
    v11 = *((float *)this + 6);
    v12 = *((float *)this + 7);
    v20 = *((float *)this + 5);
    v13 = *((float *)this + 8);
    v21 = v11;
    v22 = v12;
    v23 = v13;
  }
  v14 = *((_DWORD *)this + 9);
  if ( v14 != 0 )
  {
    (*(void (__fastcall **)(float *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v14 + 20))(
      &v24,
      v14,
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
      HIDWORD(a7));
  }
  else
  {
    v15 = *((float *)this + 10);
    v16 = *((float *)this + 11);
    v17 = *((float *)this + 12);
    v18 = *((float *)this + 13);
    v24 = v15;
    v25 = v16;
    v26 = v17;
    v27 = v18;
  }
  return (float)((float)((float)((float)(v20 * v24) + (float)(v21 * v25)) + (float)(v22 * v26)) + (float)(v23 * v27));
}


//======================================================================
// anl::CImplicitRGBADotProduct::get(double,double,double)
// address: 0x003208C6   size: 0xB8 (184 bytes)
//======================================================================
double __fastcall anl::CImplicitRGBADotProduct::get(
        anl::CImplicitRGBADotProduct *this,
        double a2,
        double a3,
        double a4)
{
  int v5; // r1
  float v8; // r7
  float v9; // r2
  float v10; // r3
  int v11; // r1
  float v12; // r7
  float v13; // r2
  float v14; // r3
  float v15; // r6
  float v17; // [sp+10h] [bp-24h] BYREF
  float v18; // [sp+14h] [bp-20h]
  float v19; // [sp+18h] [bp-1Ch]
  float v20; // [sp+1Ch] [bp-18h]
  float v21; // [sp+20h] [bp-14h] BYREF
  float v22; // [sp+24h] [bp-10h]
  float v23; // [sp+28h] [bp-Ch]
  float v24; // [sp+2Ch] [bp-8h]

  v5 = *((_DWORD *)this + 4);
  if ( v5 != 0 )
  {
    (*(void (__fastcall **)(float *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v5 + 12))(
      &v17,
      v5,
      LODWORD(a2),
      HIDWORD(a2),
      LODWORD(a3),
      HIDWORD(a3),
      LODWORD(a4),
      HIDWORD(a4));
  }
  else
  {
    v8 = *((float *)this + 6);
    v9 = *((float *)this + 7);
    v17 = *((float *)this + 5);
    v10 = *((float *)this + 8);
    v18 = v8;
    v19 = v9;
    v20 = v10;
  }
  v11 = *((_DWORD *)this + 9);
  if ( v11 != 0 )
  {
    (*(void (__fastcall **)(float *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v11 + 12))(
      &v21,
      v11,
      LODWORD(a2),
      HIDWORD(a2),
      LODWORD(a3),
      HIDWORD(a3),
      LODWORD(a4),
      HIDWORD(a4));
  }
  else
  {
    v12 = *((float *)this + 10);
    v13 = *((float *)this + 11);
    v14 = *((float *)this + 12);
    v15 = *((float *)this + 13);
    v21 = v12;
    v22 = v13;
    v23 = v14;
    v24 = v15;
  }
  return (float)((float)((float)((float)(v17 * v21) + (float)(v18 * v22)) + (float)(v19 * v23)) + (float)(v20 * v24));
}


//======================================================================
// anl::CImplicitRGBADotProduct::get(double,double,double,double)
// address: 0x0032097E   size: 0xC8 (200 bytes)
//======================================================================
double __fastcall anl::CImplicitRGBADotProduct::get(
        anl::CImplicitRGBADotProduct *this,
        double a2,
        double a3,
        double a4,
        double a5)
{
  int v6; // r1
  float v9; // r7
  float v10; // r2
  float v11; // r3
  int v12; // r1
  float v13; // r7
  float v14; // r2
  float v15; // r3
  float v16; // r6
  float v18; // [sp+18h] [bp-24h] BYREF
  float v19; // [sp+1Ch] [bp-20h]
  float v20; // [sp+20h] [bp-1Ch]
  float v21; // [sp+24h] [bp-18h]
  float v22; // [sp+28h] [bp-14h] BYREF
  float v23; // [sp+2Ch] [bp-10h]
  float v24; // [sp+30h] [bp-Ch]
  float v25; // [sp+34h] [bp-8h]

  v6 = *((_DWORD *)this + 4);
  if ( v6 != 0 )
  {
    (*(void (__fastcall **)(float *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v6 + 16))(
      &v18,
      v6,
      LODWORD(a2),
      HIDWORD(a2),
      LODWORD(a3),
      HIDWORD(a3),
      LODWORD(a4),
      HIDWORD(a4),
      LODWORD(a5),
      HIDWORD(a5));
  }
  else
  {
    v9 = *((float *)this + 6);
    v10 = *((float *)this + 7);
    v18 = *((float *)this + 5);
    v11 = *((float *)this + 8);
    v19 = v9;
    v20 = v10;
    v21 = v11;
  }
  v12 = *((_DWORD *)this + 9);
  if ( v12 != 0 )
  {
    (*(void (__fastcall **)(float *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v12 + 16))(
      &v22,
      v12,
      LODWORD(a2),
      HIDWORD(a2),
      LODWORD(a3),
      HIDWORD(a3),
      LODWORD(a4),
      HIDWORD(a4),
      LODWORD(a5),
      HIDWORD(a5));
  }
  else
  {
    v13 = *((float *)this + 10);
    v14 = *((float *)this + 11);
    v15 = *((float *)this + 12);
    v16 = *((float *)this + 13);
    v22 = v13;
    v23 = v14;
    v24 = v15;
    v25 = v16;
  }
  return (float)((float)((float)((float)(v18 * v22) + (float)(v19 * v23)) + (float)(v20 * v24)) + (float)(v21 * v25));
}


//======================================================================
// anl::CImplicitRGBADotProduct::get(double,double)
// address: 0x00320A76   size: 0x7C (124 bytes)
//======================================================================
double __fastcall anl::CImplicitRGBADotProduct::get(anl::CImplicitRGBADotProduct *this, double a2, double a3)
{
  float v7[4]; // [sp+8h] [bp-20h] BYREF
  float v8[4]; // [sp+18h] [bp-10h] BYREF

  anl::CRGBAParameter::get((anl::CRGBAParameter *)v7, (_DWORD *)this + 4, a2, a3);
  anl::CRGBAParameter::get((anl::CRGBAParameter *)v8, (_DWORD *)this + 9, a2, a3);
  return (float)((float)((float)((float)(v7[0] * v8[0]) + (float)(v7[1] * v8[1])) + (float)(v7[2] * v8[2]))
               + (float)(v7[3] * v8[3]));
}


//======================================================================
// anl::CImplicitRGBADotProduct::CImplicitRGBADotProduct(void)
// address: 0x00320AF8   size: 0x2C (44 bytes)
//======================================================================
// Alternative name is '_ZN3anl23CImplicitRGBADotProductC1Ev'
_DWORD *__fastcall anl::CImplicitRGBADotProduct::CImplicitRGBADotProduct(_DWORD *this)
{
  *(this + 2) = -350469331;
  *(this + 3) = 1058682594;
  *(this + 4) = 0;
  *(this + 9) = 0;
  *this = &off_463748;
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 10) = 0;
  *(this + 11) = 0;
  *(this + 12) = 0;
  *(this + 13) = 0;
  return this;
}


//======================================================================
// anl::CImplicitRGBADotProduct::setSource1(anl::CRGBAModuleBase *)
// address: 0x00320B38   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitRGBADotProduct::setSource1(int this, anl::CRGBAModuleBase *a2)
{
  *(_DWORD *)(this + 16) = a2;
  return this;
}


//======================================================================
// anl::CImplicitRGBADotProduct::setSource1(float,float,float,float)
// address: 0x00320B3C   size: 0x12 (18 bytes)
//======================================================================
int __fastcall anl::CImplicitRGBADotProduct::setSource1(int this, float a2, float a3, float a4, float a5)
{
  *(float *)(this + 28) = a4;
  *(_DWORD *)(this + 16) = 0;
  *(float *)(this + 20) = a2;
  *(float *)(this + 24) = a3;
  *(float *)(this + 32) = a5;
  return this;
}


//======================================================================
// anl::CImplicitRGBADotProduct::setSource2(anl::CRGBAModuleBase *)
// address: 0x00320B4E   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitRGBADotProduct::setSource2(int this, anl::CRGBAModuleBase *a2)
{
  *(_DWORD *)(this + 36) = a2;
  return this;
}


//======================================================================
// anl::CImplicitRGBADotProduct::setSource2(float,float,float,float)
// address: 0x00320B52   size: 0x12 (18 bytes)
//======================================================================
int __fastcall anl::CImplicitRGBADotProduct::setSource2(int this, float a2, float a3, float a4, float a5)
{
  *(float *)(this + 48) = a4;
  *(_DWORD *)(this + 36) = 0;
  *(float *)(this + 40) = a2;
  *(float *)(this + 44) = a3;
  *(float *)(this + 52) = a5;
  return this;
}

