// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CRGBABlendOps

//======================================================================
// anl::CRGBABlendOps::~CRGBABlendOps()
// address: 0x0033021C   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl13CRGBABlendOpsD1Ev'
void __fastcall anl::CRGBABlendOps::~CRGBABlendOps(anl::CRGBABlendOps *this)
{
  *(_DWORD *)this = &off_4634C8;
}


//======================================================================
// anl::CRGBABlendOps::~CRGBABlendOps()
// address: 0x0033022C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall anl::CRGBABlendOps::~CRGBABlendOps(anl::CRGBABlendOps *this)
{
  anl::CRGBABlendOps::~CRGBABlendOps(this);
  operator delete(this);
}


//======================================================================
// anl::CRGBABlendOps::CRGBABlendOps(void)
// address: 0x00330240   size: 0x2A (42 bytes)
//======================================================================
// Alternative name is '_ZN3anl13CRGBABlendOpsC1Ev'
_DWORD *__fastcall anl::CRGBABlendOps::CRGBABlendOps(_DWORD *this)
{
  *(this + 1) = 0;
  *(this + 6) = 0;
  *(this + 11) = 0;
  *this = &off_463C60;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 12) = 2;
  return this;
}


//======================================================================
// anl::CRGBABlendOps::CRGBABlendOps(int,int)
// address: 0x00330270   size: 0x2A (42 bytes)
//======================================================================
// Alternative name is '_ZN3anl13CRGBABlendOpsC1Eii'
_DWORD *__fastcall anl::CRGBABlendOps::CRGBABlendOps(_DWORD *this, int a2, int a3)
{
  *(this + 1) = 0;
  *this = &off_463C60;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 11) = a2;
  *(this + 12) = a3;
  return this;
}


//======================================================================
// anl::CRGBABlendOps::setSrc1Mode(int)
// address: 0x003302A0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CRGBABlendOps::setSrc1Mode(int this, int a2)
{
  *(_DWORD *)(this + 44) = a2;
  return this;
}


//======================================================================
// anl::CRGBABlendOps::setSrc2Mode(int)
// address: 0x003302A4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CRGBABlendOps::setSrc2Mode(int this, int a2)
{
  *(_DWORD *)(this + 48) = a2;
  return this;
}


//======================================================================
// anl::CRGBABlendOps::setSource1(anl::CRGBAModuleBase *)
// address: 0x003302A8   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CRGBABlendOps::setSource1(int this, anl::CRGBAModuleBase *a2)
{
  *(_DWORD *)(this + 4) = a2;
  return this;
}


//======================================================================
// anl::CRGBABlendOps::setSource2(anl::CRGBAModuleBase *)
// address: 0x003302AC   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CRGBABlendOps::setSource2(int this, anl::CRGBAModuleBase *a2)
{
  *(_DWORD *)(this + 24) = a2;
  return this;
}


//======================================================================
// anl::CRGBABlendOps::setSource1(float,float,float,float)
// address: 0x003302B0   size: 0x12 (18 bytes)
//======================================================================
int __fastcall anl::CRGBABlendOps::setSource1(int this, float a2, float a3, float a4, float a5)
{
  *(float *)(this + 16) = a4;
  *(_DWORD *)(this + 4) = 0;
  *(float *)(this + 8) = a2;
  *(float *)(this + 12) = a3;
  *(float *)(this + 20) = a5;
  return this;
}


//======================================================================
// anl::CRGBABlendOps::setSource2(float,float,float,float)
// address: 0x003302C2   size: 0x12 (18 bytes)
//======================================================================
int __fastcall anl::CRGBABlendOps::setSource2(int this, float a2, float a3, float a4, float a5)
{
  *(float *)(this + 36) = a4;
  *(_DWORD *)(this + 24) = 0;
  *(float *)(this + 28) = a2;
  *(float *)(this + 32) = a3;
  *(float *)(this + 40) = a5;
  return this;
}


//======================================================================
// anl::CRGBABlendOps::blendRGBAs(TVec4D<float> &,TVec4D<float> &)
// address: 0x003302D4   size: 0xE0 (224 bytes)
//======================================================================
int __fastcall anl::CRGBABlendOps::blendRGBAs(int a1, int a2, float *a3, float *a4)
{
  float v5; // r5
  float v6; // r1
  int v7; // r0
  float v8; // r4
  float v9; // r1
  int v12; // [sp+4h] [bp-10h]
  float v13; // [sp+8h] [bp-Ch]
  float v14; // [sp+Ch] [bp-8h]

  v12 = *((_DWORD *)a4 + 3);
  v5 = 0.0;
  switch ( *(_DWORD *)(a2 + 44) )
  {
    case 0:
      v5 = a3[3];
      break;
    case 1:
      v5 = a4[3];
      break;
    case 2:
      v6 = a3[3];
      goto LABEL_7;
    case 3:
      v6 = a4[3];
LABEL_7:
      v5 = 1.0 - v6;
      break;
    case 4:
      v5 = 1.0;
      break;
    default:
      break;
  }
  v7 = *(_DWORD *)(a2 + 48);
  v8 = 0.0;
  switch ( v7 )
  {
    case 0:
      v8 = a3[3];
      break;
    case 1:
      v8 = a4[3];
      break;
    case 2:
      v9 = a3[3];
      goto LABEL_14;
    case 3:
      v9 = a4[3];
LABEL_14:
      v8 = 1.0 - v9;
      break;
    case 4:
    case 5:
      v8 = 1.0;
      break;
    default:
      break;
  }
  v13 = (float)(v5 * a3[1]) + (float)(v8 * a4[1]);
  v14 = (float)(v5 * a3[2]) + (float)(v8 * a4[2]);
  *(float *)a1 = (float)(v5 * *a3) + (float)(v8 * *a4);
  *(float *)(a1 + 4) = v13;
  *(float *)(a1 + 8) = v14;
  *(_DWORD *)(a1 + 12) = v12;
  return a1;
}


//======================================================================
// anl::CRGBABlendOps::get(double,double)
// address: 0x003303B4   size: 0x4C (76 bytes)
//======================================================================
anl::CRGBABlendOps *__fastcall anl::CRGBABlendOps::get(anl::CRGBABlendOps *this, int a2, double a3, double a4)
{
  float v8[4]; // [sp+10h] [bp+0h] BYREF
  float v9[5]; // [sp+20h] [bp+10h] BYREF

  anl::CRGBAParameter::get((anl::CRGBAParameter *)v8, (_DWORD *)(a2 + 4), a3, a4);
  anl::CRGBAParameter::get((anl::CRGBAParameter *)v9, (_DWORD *)(a2 + 24), a3, a4);
  anl::CRGBABlendOps::blendRGBAs((int)this, a2, v8, v9);
  return this;
}


//======================================================================
// anl::CRGBABlendOps::get(double,double,double)
// address: 0x00330400   size: 0x8C (140 bytes)
//======================================================================
anl::CRGBABlendOps *__fastcall anl::CRGBABlendOps::get(
        anl::CRGBABlendOps *this,
        int a2,
        double a3,
        double a4,
        double a5)
{
  int v6; // r1
  float v8; // r2
  float v9; // r2
  int v10; // r1
  float v11; // r2
  float v12; // r2
  float v15[4]; // [sp+18h] [bp-24h] BYREF
  float v16[5]; // [sp+28h] [bp-14h] BYREF

  v6 = *(_DWORD *)(a2 + 4);
  if ( v6 != 0 )
  {
    (*(void (__fastcall **)(float *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v6 + 12))(
      v15,
      v6,
      LODWORD(a3),
      HIDWORD(a3),
      LODWORD(a4),
      HIDWORD(a4),
      LODWORD(a5),
      HIDWORD(a5));
  }
  else
  {
    v8 = *(float *)(a2 + 12);
    v15[0] = *(float *)(a2 + 8);
    v15[1] = v8;
    v9 = *(float *)(a2 + 20);
    v15[2] = *(float *)(a2 + 16);
    v15[3] = v9;
  }
  v10 = *(_DWORD *)(a2 + 24);
  if ( v10 != 0 )
  {
    (*(void (__fastcall **)(float *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v10 + 12))(
      v16,
      v10,
      LODWORD(a3),
      HIDWORD(a3),
      LODWORD(a4),
      HIDWORD(a4),
      LODWORD(a5),
      HIDWORD(a5));
  }
  else
  {
    v11 = *(float *)(a2 + 32);
    v16[0] = *(float *)(a2 + 28);
    v16[1] = v11;
    v12 = *(float *)(a2 + 40);
    v16[2] = *(float *)(a2 + 36);
    v16[3] = v12;
  }
  anl::CRGBABlendOps::blendRGBAs((int)this, a2, v15, v16);
  return this;
}


//======================================================================
// anl::CRGBABlendOps::get(double,double,double,double)
// address: 0x0033048C   size: 0x9C (156 bytes)
//======================================================================
anl::CRGBABlendOps *__fastcall anl::CRGBABlendOps::get(
        anl::CRGBABlendOps *this,
        int a2,
        double a3,
        double a4,
        double a5,
        double a6)
{
  int v7; // r1
  float v9; // r2
  float v10; // r2
  int v11; // r1
  float v12; // r2
  float v13; // r2
  float v16[4]; // [sp+20h] [bp-24h] BYREF
  float v17[5]; // [sp+30h] [bp-14h] BYREF

  v7 = *(_DWORD *)(a2 + 4);
  if ( v7 != 0 )
  {
    (*(void (__fastcall **)(float *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v7 + 16))(
      v16,
      v7,
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
    v9 = *(float *)(a2 + 12);
    v16[0] = *(float *)(a2 + 8);
    v16[1] = v9;
    v10 = *(float *)(a2 + 20);
    v16[2] = *(float *)(a2 + 16);
    v16[3] = v10;
  }
  v11 = *(_DWORD *)(a2 + 24);
  if ( v11 != 0 )
  {
    (*(void (__fastcall **)(float *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v11 + 16))(
      v17,
      v11,
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
    v12 = *(float *)(a2 + 32);
    v17[0] = *(float *)(a2 + 28);
    v17[1] = v12;
    v13 = *(float *)(a2 + 40);
    v17[2] = *(float *)(a2 + 36);
    v17[3] = v13;
  }
  anl::CRGBABlendOps::blendRGBAs((int)this, a2, v16, v17);
  return this;
}


//======================================================================
// anl::CRGBABlendOps::get(double,double,double,double,double,double)
// address: 0x00330528   size: 0xC2 (194 bytes)
//======================================================================
anl::CRGBABlendOps *__fastcall anl::CRGBABlendOps::get(
        anl::CRGBABlendOps *this,
        int a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8)
{
  int v9; // r1
  int v12; // r3
  int v13; // r3
  int v14; // r1
  float v15; // r3
  float v16; // r3
  int v18; // [sp+28h] [bp-24h] BYREF
  int v19; // [sp+2Ch] [bp-20h]
  int v20; // [sp+30h] [bp-1Ch]
  int v21; // [sp+34h] [bp-18h]
  float v22[5]; // [sp+38h] [bp-14h] BYREF

  v9 = *(_DWORD *)(a2 + 4);
  if ( v9 != 0 )
  {
    (*(void (__fastcall **)(int *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v9 + 20))(
      &v18,
      v9,
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
    v12 = *(_DWORD *)(a2 + 12);
    v18 = *(_DWORD *)(a2 + 8);
    v19 = v12;
    v13 = *(_DWORD *)(a2 + 20);
    v20 = *(_DWORD *)(a2 + 16);
    v21 = v13;
  }
  v14 = *(_DWORD *)(a2 + 24);
  if ( v14 != 0 )
  {
    (*(void (__fastcall **)(float *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, int, int, int))(*(_DWORD *)v14 + 20))(
      v22,
      v14,
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
      HIDWORD(a8),
      v18,
      v19,
      v20,
      v21);
  }
  else
  {
    v15 = *(float *)(a2 + 32);
    v22[0] = *(float *)(a2 + 28);
    v22[1] = v15;
    v16 = *(float *)(a2 + 40);
    v22[2] = *(float *)(a2 + 36);
    v22[3] = v16;
  }
  anl::CRGBABlendOps::blendRGBAs((int)this, a2, (float *)&v18, v22);
  return this;
}

