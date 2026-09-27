// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CRGBAColorOps

//======================================================================
// anl::CRGBAColorOps::~CRGBAColorOps()
// address: 0x003268D0   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl13CRGBAColorOpsD1Ev'
void __fastcall anl::CRGBAColorOps::~CRGBAColorOps(anl::CRGBAColorOps *this)
{
  *(_DWORD *)this = &off_4634C8;
}


//======================================================================
// anl::CRGBAColorOps::~CRGBAColorOps()
// address: 0x003268E0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall anl::CRGBAColorOps::~CRGBAColorOps(anl::CRGBAColorOps *this)
{
  anl::CRGBAColorOps::~CRGBAColorOps(this);
  operator delete(this);
}


//======================================================================
// anl::CRGBAColorOps::CRGBAColorOps(void)
// address: 0x003268F4   size: 0x28 (40 bytes)
//======================================================================
// Alternative name is '_ZN3anl13CRGBAColorOpsC1Ev'
_DWORD *__fastcall anl::CRGBAColorOps::CRGBAColorOps(_DWORD *this)
{
  *(this + 1) = 0;
  *(this + 6) = 0;
  *this = &off_463898;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 11) = 4;
  return this;
}


//======================================================================
// anl::CRGBAColorOps::setOperation(int)
// address: 0x00326920   size: 0x1A (26 bytes)
//======================================================================
int __fastcall anl::CRGBAColorOps::setOperation(int this, int a2)
{
  if ( a2 < 0 )
    *(_DWORD *)(this + 44) = 0;
  else
    *(_DWORD *)(this + 44) = a2;
  if ( *(int *)(this + 44) > 9 )
    *(_DWORD *)(this + 44) = 9;
  return this;
}


//======================================================================
// anl::CRGBAColorOps::CRGBAColorOps(int)
// address: 0x0032693C   size: 0x38 (56 bytes)
//======================================================================
// Alternative name is '_ZN3anl13CRGBAColorOpsC1Ei'
anl::CRGBAColorOps *__fastcall anl::CRGBAColorOps::CRGBAColorOps(anl::CRGBAColorOps *this, int a2)
{
  *(_DWORD *)this = &off_463898;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  anl::CRGBAColorOps::setOperation((int)this, a2);
  return this;
}


//======================================================================
// anl::CRGBAColorOps::setSource1(float,float,float,float)
// address: 0x00326984   size: 0x12 (18 bytes)
//======================================================================
int __fastcall anl::CRGBAColorOps::setSource1(int this, float a2, float a3, float a4, float a5)
{
  *(float *)(this + 16) = a4;
  *(_DWORD *)(this + 4) = 0;
  *(float *)(this + 8) = a2;
  *(float *)(this + 12) = a3;
  *(float *)(this + 20) = a5;
  return this;
}


//======================================================================
// anl::CRGBAColorOps::setSource1(anl::CRGBAModuleBase *)
// address: 0x00326996   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CRGBAColorOps::setSource1(int this, anl::CRGBAModuleBase *a2)
{
  *(_DWORD *)(this + 4) = a2;
  return this;
}


//======================================================================
// anl::CRGBAColorOps::setSource2(float,float,float,float)
// address: 0x0032699A   size: 0x12 (18 bytes)
//======================================================================
int __fastcall anl::CRGBAColorOps::setSource2(int this, float a2, float a3, float a4, float a5)
{
  *(float *)(this + 36) = a4;
  *(_DWORD *)(this + 24) = 0;
  *(float *)(this + 28) = a2;
  *(float *)(this + 32) = a3;
  *(float *)(this + 40) = a5;
  return this;
}


//======================================================================
// anl::CRGBAColorOps::setSource2(anl::CRGBAModuleBase *)
// address: 0x003269AC   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CRGBAColorOps::setSource2(int this, anl::CRGBAModuleBase *a2)
{
  *(_DWORD *)(this + 24) = a2;
  return this;
}


//======================================================================
// anl::CRGBAColorOps::multiply(TVec4D<float> &,TVec4D<float> &)
// address: 0x003269B0   size: 0x38 (56 bytes)
//======================================================================
int __fastcall anl::CRGBAColorOps::multiply(int result, int a2, int a3, float *a4)
{
  float v4; // r7
  int v5; // [sp+0h] [bp-Ch]
  float v6; // [sp+4h] [bp-8h]

  v4 = *(float *)(a3 + 4) * a4[1];
  v6 = *(float *)(a3 + 8) * a4[2];
  v5 = *(_DWORD *)(a3 + 12);
  *(float *)result = *(float *)a3 * *a4;
  *(float *)(result + 4) = v4;
  *(float *)(result + 8) = v6;
  *(_DWORD *)(result + 12) = v5;
  return result;
}


//======================================================================
// anl::CRGBAColorOps::add(TVec4D<float> &,TVec4D<float> &)
// address: 0x003269E8   size: 0x38 (56 bytes)
//======================================================================
int __fastcall anl::CRGBAColorOps::add(int result, int a2, int a3, float *a4)
{
  float v4; // r7
  int v5; // [sp+0h] [bp-Ch]
  float v6; // [sp+4h] [bp-8h]

  v4 = *(float *)(a3 + 4) + a4[1];
  v6 = *(float *)(a3 + 8) + a4[2];
  v5 = *(_DWORD *)(a3 + 12);
  *(float *)result = *(float *)a3 + *a4;
  *(float *)(result + 4) = v4;
  *(float *)(result + 8) = v6;
  *(_DWORD *)(result + 12) = v5;
  return result;
}


//======================================================================
// anl::CRGBAColorOps::screen(TVec4D<float> &,TVec4D<float> &)
// address: 0x00326A20   size: 0x7A (122 bytes)
//======================================================================
int __fastcall anl::CRGBAColorOps::screen(int result, int a2, int a3, float *a4)
{
  float v4; // r7
  float v5; // [sp+4h] [bp-18h]
  float v6; // [sp+8h] [bp-14h]
  float v7; // [sp+Ch] [bp-10h]
  int v8; // [sp+10h] [bp-Ch]

  v5 = *(float *)(a3 + 4);
  v6 = a4[1];
  v7 = *(float *)(a3 + 8);
  v4 = a4[2];
  v8 = *(_DWORD *)(a3 + 12);
  *(float *)result = (float)(*(float *)a3 + *a4) - (float)(*(float *)a3 * *a4);
  *(float *)(result + 4) = (float)(v5 + v6) - (float)(v5 * v6);
  *(float *)(result + 8) = (float)(v7 + v4) - (float)(v7 * v4);
  *(_DWORD *)(result + 12) = v8;
  return result;
}


//======================================================================
// anl::CRGBAColorOps::overlay(TVec4D<float> &,TVec4D<float> &)
// address: 0x00326A9A   size: 0x10A (266 bytes)
//======================================================================
int __fastcall anl::CRGBAColorOps::overlay(int a1, int a2, int a3, float *a4)
{
  float v4; // r6
  float v6; // r0
  float v7; // r7
  float v8; // r6
  float v9; // r0
  float v10; // r6
  float v11; // r0
  int v12; // r4
  float v14; // [sp+0h] [bp-Ch]
  float v15; // [sp+4h] [bp-8h]

  v4 = *a4;
  if ( *a4 >= 0.5 )
    v6 = 1.0 - (float)((float)((float)(1.0 - *(float *)a3) + (float)(1.0 - *(float *)a3)) * (float)(1.0 - v4));
  else
    v6 = (float)(*(float *)a3 + *(float *)a3) * v4;
  v7 = v6;
  v8 = a4[1];
  if ( v8 >= 0.5 )
    v9 = 1.0
       - (float)((float)((float)(1.0 - *(float *)(a3 + 4)) + (float)(1.0 - *(float *)(a3 + 4))) * (float)(1.0 - v8));
  else
    v9 = (float)(*(float *)(a3 + 4) + *(float *)(a3 + 4)) * v8;
  v15 = v9;
  v10 = a4[2];
  if ( v10 >= 0.5 )
  {
    v14 = (float)(1.0 - *(float *)(a3 + 8)) + (float)(1.0 - *(float *)(a3 + 8));
    v11 = 1.0 - (float)(v14 * (float)(1.0 - v10));
  }
  else
  {
    v11 = (float)(*(float *)(a3 + 8) + *(float *)(a3 + 8)) * v10;
  }
  v12 = *(_DWORD *)(a3 + 12);
  *(float *)a1 = v7;
  *(float *)(a1 + 8) = v11;
  *(_DWORD *)(a1 + 12) = v12;
  *(float *)(a1 + 4) = v15;
  return a1;
}


//======================================================================
// anl::CRGBAColorOps::softLight(TVec4D<float> &,TVec4D<float> &)
// address: 0x00326BA8   size: 0x27A (634 bytes)
//======================================================================
int __fastcall anl::CRGBAColorOps::softLight(int a1, int a2, int a3, float *a4)
{
  float v4; // r4
  float v5; // r6
  float v6; // r0
  float v7; // r5
  float v8; // r4
  float v9; // r0
  float v10; // r5
  float v11; // r4
  float v12; // r0
  int v13; // r2
  float v16; // [sp+10h] [bp-1Ch]
  float v17; // [sp+18h] [bp-14h]

  v4 = *(float *)a3;
  v5 = *a4;
  if ( *(float *)a3 <= 0.5 )
    v6 = v5
       - (float)((float)(v5 * (float)((float)(0.5 - v4) + (float)(0.5 - v4)))
               * (float)(0.5 - COERCE_FLOAT((unsigned int)(2 * COERCE_INT(v5 - 0.5)) >> 1)));
  else
    v6 = v5
       + (float)((float)(1.0 - v5) * (float)((float)(v4 - 0.5) + (float)(v4 - 0.5)))
       * (0.5 - COERCE_FLOAT((unsigned int)(2 * COERCE_INT(v5 - 0.5)) >> 1));
  v16 = v6;
  v7 = *(float *)(a3 + 4);
  v8 = a4[1];
  if ( v7 <= 0.5 )
    v9 = v8
       - (float)((float)(v8 * (float)((float)(0.5 - v7) + (float)(0.5 - v7)))
               * (float)(0.5 - COERCE_FLOAT((unsigned int)(2 * COERCE_INT(v8 - 0.5)) >> 1)));
  else
    v9 = v8
       + (float)((float)(1.0 - v8) * (float)((float)(v7 - 0.5) + (float)(v7 - 0.5)))
       * (0.5 - COERCE_FLOAT((unsigned int)(2 * COERCE_INT(v8 - 0.5)) >> 1));
  v17 = v9;
  v10 = *(float *)(a3 + 8);
  v11 = a4[2];
  if ( v10 <= 0.5 )
    v12 = v11
        - (float)((float)(v11 * (float)((float)(0.5 - v10) + (float)(0.5 - v10)))
                * (float)(0.5 - COERCE_FLOAT((unsigned int)(2 * COERCE_INT(v11 - 0.5)) >> 1)));
  else
    v12 = v11
        + (float)((float)(1.0 - v11) * (float)((float)(v10 - 0.5) + (float)(v10 - 0.5)))
        * (0.5 - COERCE_FLOAT((unsigned int)(2 * COERCE_INT(v11 - 0.5)) >> 1));
  v13 = *(_DWORD *)(a3 + 12);
  *(float *)(a1 + 8) = v12;
  *(float *)a1 = v16;
  *(float *)(a1 + 4) = v17;
  *(_DWORD *)(a1 + 12) = v13;
  return a1;
}


//======================================================================
// anl::CRGBAColorOps::hardLight(TVec4D<float> &,TVec4D<float> &)
// address: 0x00326E30   size: 0x104 (260 bytes)
//======================================================================
int __fastcall anl::CRGBAColorOps::hardLight(int a1, int a2, int a3, float *a4)
{
  float v4; // r7
  float v6; // r1
  float v7; // r0
  float v8; // r7
  float v9; // r1
  float v10; // r0
  float v11; // r7
  float v12; // r1
  float v13; // r0
  int v14; // r6
  float v16; // [sp+4h] [bp-10h]
  float v17; // [sp+8h] [bp-Ch]

  v4 = *(float *)a3;
  if ( *(float *)a3 <= 0.5 )
  {
    v7 = v4 * *a4;
    v6 = v7;
  }
  else
  {
    v6 = (float)(1.0 - *a4) * (float)((float)(v4 - 0.5) + (float)(v4 - 0.5));
    v7 = *a4;
  }
  v8 = *(float *)(a3 + 4);
  v17 = v7 + v6;
  if ( v8 <= 0.5 )
  {
    v10 = v8 * a4[1];
    v9 = v10;
  }
  else
  {
    v9 = (float)(1.0 - a4[1]) * (float)((float)(v8 - 0.5) + (float)(v8 - 0.5));
    v10 = a4[1];
  }
  v11 = *(float *)(a3 + 8);
  v16 = v10 + v9;
  if ( v11 <= 0.5 )
  {
    v13 = v11 * a4[2];
    v12 = v13;
  }
  else
  {
    v12 = (float)(1.0 - a4[2]) * (float)((float)(v11 - 0.5) + (float)(v11 - 0.5));
    v13 = a4[2];
  }
  v14 = *(_DWORD *)(a3 + 12);
  *(float *)(a1 + 8) = v13 + v12;
  *(float *)a1 = v17;
  *(_DWORD *)(a1 + 12) = v14;
  *(float *)(a1 + 4) = v16;
  return a1;
}


//======================================================================
// anl::CRGBAColorOps::dodge(TVec4D<float> &,TVec4D<float> &)
// address: 0x00326F34   size: 0xBE (190 bytes)
//======================================================================
int __fastcall anl::CRGBAColorOps::dodge(int result, int a2, int a3, float *a4)
{
  float v4; // r6
  float v5; // r5
  float v6; // r4
  int v7; // r3

  v4 = *(float *)a3;
  if ( *(float *)a3 != 1.0 )
  {
    v4 = *a4 / (float)(1.0 - v4);
    if ( v4 >= 1.0 )
      v4 = 1.0;
  }
  v5 = *(float *)(a3 + 4);
  if ( v5 != 1.0 )
  {
    v5 = a4[1] / (float)(1.0 - v5);
    if ( v5 >= 1.0 )
      v5 = 1.0;
  }
  v6 = *(float *)(a3 + 8);
  if ( v6 != 1.0 )
  {
    v6 = a4[2] / (float)(1.0 - v6);
    if ( v6 >= 1.0 )
      v6 = 1.0;
  }
  v7 = *(_DWORD *)(a3 + 12);
  *(float *)result = v4;
  *(float *)(result + 4) = v5;
  *(_DWORD *)(result + 12) = v7;
  *(float *)(result + 8) = v6;
  return result;
}


//======================================================================
// anl::CRGBAColorOps::burn(TVec4D<float> &,TVec4D<float> &)
// address: 0x00326FF2   size: 0xCA (202 bytes)
//======================================================================
int __fastcall anl::CRGBAColorOps::burn(int result, int a2, int a3, float *a4)
{
  float v4; // r6
  float v5; // r5
  float v6; // r4
  int v7; // r3

  v4 = *(float *)a3;
  if ( *(float *)a3 != 1.0 )
  {
    v4 = 1.0 - (float)((float)(1.0 - *a4) / v4);
    if ( v4 <= 0.0 )
      v4 = 0.0;
  }
  v5 = *(float *)(a3 + 4);
  if ( v5 != 1.0 )
  {
    v5 = 1.0 - (float)((float)(1.0 - a4[1]) / v5);
    if ( v5 <= 0.0 )
      v5 = 0.0;
  }
  v6 = *(float *)(a3 + 8);
  if ( v6 != 1.0 )
  {
    v6 = 1.0 - (float)((float)(1.0 - a4[2]) / v6);
    if ( v6 <= 0.0 )
      v6 = 0.0;
  }
  v7 = *(_DWORD *)(a3 + 12);
  *(float *)result = v4;
  *(float *)(result + 4) = v5;
  *(_DWORD *)(result + 12) = v7;
  *(float *)(result + 8) = v6;
  return result;
}


//======================================================================
// anl::CRGBAColorOps::linearDodge(TVec4D<float> &,TVec4D<float> &)
// address: 0x003270BC   size: 0x6C (108 bytes)
//======================================================================
int __fastcall anl::CRGBAColorOps::linearDodge(int result, int a2, int a3, float *a4)
{
  float v4; // r7
  float v5; // r6
  int v6; // r5
  float v7; // [sp+4h] [bp-8h]

  v4 = *(float *)a3 + *a4;
  if ( v4 > 1.0 )
    v4 = 1.0;
  v5 = *(float *)(a3 + 4) + a4[1];
  if ( v5 > 1.0 )
    v5 = 1.0;
  v7 = *(float *)(a3 + 8) + a4[2];
  if ( v7 > 1.0 )
    v7 = 1.0;
  v6 = *(_DWORD *)(a3 + 12);
  *(float *)result = v4;
  *(_DWORD *)(result + 12) = v6;
  *(float *)(result + 4) = v5;
  *(float *)(result + 8) = v7;
  return result;
}


//======================================================================
// anl::CRGBAColorOps::linearBurn(TVec4D<float> &,TVec4D<float> &)
// address: 0x00327128   size: 0x8A (138 bytes)
//======================================================================
int __fastcall anl::CRGBAColorOps::linearBurn(int a1, int a2, int a3, float *a4)
{
  float v5; // r7
  float v6; // r6
  float v7; // r0
  int v8; // r5
  float v10; // [sp+4h] [bp-8h]

  if ( (float)(*(float *)a3 + *a4) < 1.0 )
    v10 = 0.0;
  else
    v10 = (float)(*(float *)a3 + *a4) - 1.0;
  if ( (float)(*(float *)(a3 + 4) + a4[1]) < 1.0 )
    v5 = 0.0;
  else
    v5 = (float)(*(float *)(a3 + 4) + a4[1]) - 1.0;
  v6 = *(float *)(a3 + 8) + a4[2];
  if ( v6 < 1.0 )
    v7 = 0.0;
  else
    v7 = v6 - 1.0;
  v8 = *(_DWORD *)(a3 + 12);
  *(float *)(a1 + 4) = v5;
  *(_DWORD *)(a1 + 12) = v8;
  *(float *)(a1 + 8) = v7;
  *(float *)a1 = v10;
  return a1;
}


//======================================================================
// anl::CRGBAColorOps::get(double,double)
// address: 0x003271B2   size: 0xDE (222 bytes)
//======================================================================
anl::CRGBAColorOps *__fastcall anl::CRGBAColorOps::get(anl::CRGBAColorOps *this, _DWORD *a2, double a3, double a4)
{
  _BYTE v8[16]; // [sp+10h] [bp+0h] BYREF
  float v9[5]; // [sp+20h] [bp+10h] BYREF

  anl::CRGBAParameter::get((anl::CRGBAParameter *)v8, a2 + 1, a3, a4);
  anl::CRGBAParameter::get((anl::CRGBAParameter *)v9, a2 + 6, a3, a4);
  switch ( a2[11] )
  {
    case 0:
      anl::CRGBAColorOps::multiply((int)this, (int)a2, (int)v8, v9);
      break;
    case 1:
      anl::CRGBAColorOps::add((int)this, (int)a2, (int)v8, v9);
      break;
    case 2:
      anl::CRGBAColorOps::screen((int)this, (int)a2, (int)v8, v9);
      break;
    case 3:
      anl::CRGBAColorOps::overlay((int)this, (int)a2, (int)v8, v9);
      break;
    case 5:
      anl::CRGBAColorOps::hardLight((int)this, (int)a2, (int)v8, v9);
      break;
    case 6:
      anl::CRGBAColorOps::dodge((int)this, (int)a2, (int)v8, v9);
      break;
    case 7:
      anl::CRGBAColorOps::burn((int)this, (int)a2, (int)v8, v9);
      break;
    case 8:
      anl::CRGBAColorOps::linearDodge((int)this, (int)a2, (int)v8, v9);
      break;
    case 9:
      anl::CRGBAColorOps::linearBurn((int)this, (int)a2, (int)v8, v9);
      break;
    default:
      anl::CRGBAColorOps::softLight((int)this, (int)a2, (int)v8, v9);
      break;
  }
  return this;
}


//======================================================================
// anl::CRGBAColorOps::get(double,double,double)
// address: 0x00327290   size: 0x108 (264 bytes)
//======================================================================
anl::CRGBAColorOps *__fastcall anl::CRGBAColorOps::get(
        anl::CRGBAColorOps *this,
        int a2,
        double a3,
        double a4,
        double a5)
{
  int v6; // r1
  int v8; // r2
  int v9; // r2
  int v10; // r1
  float v11; // r2
  float v12; // r2
  _DWORD v15[4]; // [sp+18h] [bp-24h] BYREF
  float v16[5]; // [sp+28h] [bp-14h] BYREF

  v6 = *(_DWORD *)(a2 + 4);
  if ( v6 != 0 )
  {
    (*(void (__fastcall **)(_DWORD *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v6 + 12))(
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
    v8 = *(_DWORD *)(a2 + 12);
    v15[0] = *(_DWORD *)(a2 + 8);
    v15[1] = v8;
    v9 = *(_DWORD *)(a2 + 20);
    v15[2] = *(_DWORD *)(a2 + 16);
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
  switch ( *(_DWORD *)(a2 + 44) )
  {
    case 0:
      anl::CRGBAColorOps::multiply((int)this, a2, (int)v15, v16);
      break;
    case 1:
      anl::CRGBAColorOps::add((int)this, a2, (int)v15, v16);
      break;
    case 2:
      anl::CRGBAColorOps::screen((int)this, a2, (int)v15, v16);
      break;
    case 3:
      anl::CRGBAColorOps::overlay((int)this, a2, (int)v15, v16);
      break;
    case 5:
      anl::CRGBAColorOps::hardLight((int)this, a2, (int)v15, v16);
      break;
    case 6:
      anl::CRGBAColorOps::dodge((int)this, a2, (int)v15, v16);
      break;
    case 7:
      anl::CRGBAColorOps::burn((int)this, a2, (int)v15, v16);
      break;
    case 8:
      anl::CRGBAColorOps::linearDodge((int)this, a2, (int)v15, v16);
      break;
    case 9:
      anl::CRGBAColorOps::linearBurn((int)this, a2, (int)v15, v16);
      break;
    default:
      anl::CRGBAColorOps::softLight((int)this, a2, (int)v15, v16);
      break;
  }
  return this;
}


//======================================================================
// anl::CRGBAColorOps::get(double,double,double,double)
// address: 0x00327398   size: 0x110 (272 bytes)
//======================================================================
anl::CRGBAColorOps *__fastcall anl::CRGBAColorOps::get(
        anl::CRGBAColorOps *this,
        int a2,
        double a3,
        double a4,
        double a5,
        double a6)
{
  int v7; // r1
  int v10; // r3
  int v11; // r3
  int v12; // r1
  float v13; // r3
  float v14; // r3
  int v16; // [sp+18h] [bp-24h] BYREF
  int v17; // [sp+1Ch] [bp-20h]
  int v18; // [sp+20h] [bp-1Ch]
  int v19; // [sp+24h] [bp-18h]
  float v20[5]; // [sp+28h] [bp-14h] BYREF

  v7 = *(_DWORD *)(a2 + 4);
  if ( v7 != 0 )
  {
    (*(void (__fastcall **)(int *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v7 + 16))(
      &v16,
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
    v10 = *(_DWORD *)(a2 + 12);
    v16 = *(_DWORD *)(a2 + 8);
    v17 = v10;
    v11 = *(_DWORD *)(a2 + 20);
    v18 = *(_DWORD *)(a2 + 16);
    v19 = v11;
  }
  v12 = *(_DWORD *)(a2 + 24);
  if ( v12 != 0 )
  {
    (*(void (__fastcall **)(float *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, int, int, int))(*(_DWORD *)v12 + 16))(
      v20,
      v12,
      LODWORD(a3),
      HIDWORD(a3),
      LODWORD(a4),
      HIDWORD(a4),
      LODWORD(a5),
      HIDWORD(a5),
      LODWORD(a6),
      HIDWORD(a6),
      v16,
      v17,
      v18,
      v19);
  }
  else
  {
    v13 = *(float *)(a2 + 32);
    v20[0] = *(float *)(a2 + 28);
    v20[1] = v13;
    v14 = *(float *)(a2 + 40);
    v20[2] = *(float *)(a2 + 36);
    v20[3] = v14;
  }
  switch ( *(_DWORD *)(a2 + 44) )
  {
    case 0:
      anl::CRGBAColorOps::multiply((int)this, a2, (int)&v16, v20);
      break;
    case 1:
      anl::CRGBAColorOps::add((int)this, a2, (int)&v16, v20);
      break;
    case 2:
      anl::CRGBAColorOps::screen((int)this, a2, (int)&v16, v20);
      break;
    case 3:
      anl::CRGBAColorOps::overlay((int)this, a2, (int)&v16, v20);
      break;
    case 5:
      anl::CRGBAColorOps::hardLight((int)this, a2, (int)&v16, v20);
      break;
    case 6:
      anl::CRGBAColorOps::dodge((int)this, a2, (int)&v16, v20);
      break;
    case 7:
      anl::CRGBAColorOps::burn((int)this, a2, (int)&v16, v20);
      break;
    case 8:
      anl::CRGBAColorOps::linearDodge((int)this, a2, (int)&v16, v20);
      break;
    case 9:
      anl::CRGBAColorOps::linearBurn((int)this, a2, (int)&v16, v20);
      break;
    default:
      anl::CRGBAColorOps::softLight((int)this, a2, (int)&v16, v20);
      break;
  }
  return this;
}


//======================================================================
// anl::CRGBAColorOps::get(double,double,double,double,double,double)
// address: 0x003274A8   size: 0x130 (304 bytes)
//======================================================================
anl::CRGBAColorOps *__fastcall anl::CRGBAColorOps::get(
        anl::CRGBAColorOps *this,
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
  switch ( *(_DWORD *)(a2 + 44) )
  {
    case 0:
      anl::CRGBAColorOps::multiply((int)this, a2, (int)&v18, v22);
      break;
    case 1:
      anl::CRGBAColorOps::add((int)this, a2, (int)&v18, v22);
      break;
    case 2:
      anl::CRGBAColorOps::screen((int)this, a2, (int)&v18, v22);
      break;
    case 3:
      anl::CRGBAColorOps::overlay((int)this, a2, (int)&v18, v22);
      break;
    case 5:
      anl::CRGBAColorOps::hardLight((int)this, a2, (int)&v18, v22);
      break;
    case 6:
      anl::CRGBAColorOps::dodge((int)this, a2, (int)&v18, v22);
      break;
    case 7:
      anl::CRGBAColorOps::burn((int)this, a2, (int)&v18, v22);
      break;
    case 8:
      anl::CRGBAColorOps::linearDodge((int)this, a2, (int)&v18, v22);
      break;
    case 9:
      anl::CRGBAColorOps::linearBurn((int)this, a2, (int)&v18, v22);
      break;
    default:
      anl::CRGBAColorOps::softLight((int)this, a2, (int)&v18, v22);
      break;
  }
  return this;
}

