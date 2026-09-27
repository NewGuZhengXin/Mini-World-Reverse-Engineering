// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CRGBASelect

//======================================================================
// anl::CRGBASelect::~CRGBASelect()
// address: 0x00329E00   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl11CRGBASelectD1Ev'
void __fastcall anl::CRGBASelect::~CRGBASelect(anl::CRGBASelect *this)
{
  *(_DWORD *)this = &off_4634C8;
}


//======================================================================
// anl::CRGBASelect::~CRGBASelect()
// address: 0x00329E10   size: 0x16 (22 bytes)
//======================================================================
void __fastcall anl::CRGBASelect::~CRGBASelect(anl::CRGBASelect *this)
{
  *(_DWORD *)this = &off_4634C8;
  operator delete(this);
}


//======================================================================
// anl::CRGBASelect::CRGBASelect(void)
// address: 0x00329E30   size: 0x3A (58 bytes)
//======================================================================
// Alternative name is '_ZN3anl11CRGBASelectC1Ev'
_DWORD *__fastcall anl::CRGBASelect::CRGBASelect(_DWORD *this)
{
  *(this + 1) = 0;
  *(this + 6) = 0;
  *(this + 14) = 0;
  *this = &off_463A10;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 18) = 0;
  *(this + 22) = 0;
  *(this + 12) = 0;
  *(this + 13) = 0;
  *(this + 16) = 0;
  *(this + 17) = 0;
  *(this + 20) = 0;
  *(this + 21) = 0;
  return this;
}


//======================================================================
// anl::CRGBASelect::CRGBASelect(double,double)
// address: 0x00329E80   size: 0x40 (64 bytes)
//======================================================================
// Alternative name is '_ZN3anl11CRGBASelectC1Edd'
int __fastcall anl::CRGBASelect::CRGBASelect(int this, double a2, double a3)
{
  *(_DWORD *)(this + 48) = 0;
  *(_DWORD *)(this + 52) = 0;
  *(_DWORD *)this = &off_463A10;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 24) = 0;
  *(_DWORD *)(this + 56) = 0;
  *(double *)(this + 64) = a2;
  *(_DWORD *)(this + 72) = 0;
  *(_DWORD *)(this + 88) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 16) = 0;
  *(_DWORD *)(this + 20) = 0;
  *(_DWORD *)(this + 28) = 0;
  *(_DWORD *)(this + 32) = 0;
  *(_DWORD *)(this + 36) = 0;
  *(_DWORD *)(this + 40) = 0;
  *(double *)(this + 80) = a3;
  return this;
}


//======================================================================
// anl::CRGBASelect::setLowSource(anl::CRGBAModuleBase *)
// address: 0x00329ED0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CRGBASelect::setLowSource(int this, anl::CRGBAModuleBase *a2)
{
  *(_DWORD *)(this + 4) = a2;
  return this;
}


//======================================================================
// anl::CRGBASelect::setHighSource(anl::CRGBAModuleBase *)
// address: 0x00329ED4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CRGBASelect::setHighSource(int this, anl::CRGBAModuleBase *a2)
{
  *(_DWORD *)(this + 24) = a2;
  return this;
}


//======================================================================
// anl::CRGBASelect::setLowSource(float,float,float,float)
// address: 0x00329ED8   size: 0x12 (18 bytes)
//======================================================================
int __fastcall anl::CRGBASelect::setLowSource(int this, float a2, float a3, float a4, float a5)
{
  *(float *)(this + 16) = a4;
  *(_DWORD *)(this + 4) = 0;
  *(float *)(this + 8) = a2;
  *(float *)(this + 12) = a3;
  *(float *)(this + 20) = a5;
  return this;
}


//======================================================================
// anl::CRGBASelect::setHighSource(float,float,float,float)
// address: 0x00329EEA   size: 0x12 (18 bytes)
//======================================================================
int __fastcall anl::CRGBASelect::setHighSource(int this, float a2, float a3, float a4, float a5)
{
  *(float *)(this + 36) = a4;
  *(_DWORD *)(this + 24) = 0;
  *(float *)(this + 28) = a2;
  *(float *)(this + 32) = a3;
  *(float *)(this + 40) = a5;
  return this;
}


//======================================================================
// anl::CRGBASelect::setControlSource(anl::CImplicitModuleBase *)
// address: 0x00329EFC   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CRGBASelect::setControlSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 56) = a2;
  return this;
}


//======================================================================
// anl::CRGBASelect::setThreshold(anl::CImplicitModuleBase *)
// address: 0x00329F00   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CRGBASelect::setThreshold(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 72) = a2;
  return this;
}


//======================================================================
// anl::CRGBASelect::setFalloff(anl::CImplicitModuleBase *)
// address: 0x00329F04   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CRGBASelect::setFalloff(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 88) = a2;
  return this;
}


//======================================================================
// anl::CRGBASelect::setControlSource(double)
// address: 0x00329F08   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CRGBASelect::setControlSource(int this, double a2)
{
  *(_DWORD *)(this + 56) = 0;
  *(double *)(this + 48) = a2;
  return this;
}


//======================================================================
// anl::CRGBASelect::setThreshold(double)
// address: 0x00329F12   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CRGBASelect::setThreshold(int this, double a2)
{
  *(_DWORD *)(this + 72) = 0;
  *(double *)(this + 64) = a2;
  return this;
}


//======================================================================
// anl::CRGBASelect::setFalloff(double)
// address: 0x00329F1C   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CRGBASelect::setFalloff(int this, double a2)
{
  *(_DWORD *)(this + 88) = 0;
  *(double *)(this + 80) = a2;
  return this;
}


//======================================================================
// anl::CRGBASelect::get(double,double)
// address: 0x00329F28   size: 0x254 (596 bytes)
//======================================================================
anl::CRGBASelect *__fastcall anl::CRGBASelect::get(anl::CRGBASelect *this, _DWORD *a2, double a3, double a4)
{
  int v5; // r1
  int v6; // r1
  double v7; // r6
  double v8; // r0
  anl::CRGBASelect *v9; // r0
  float *v10; // r1
  double v11; // r6
  float v12; // r0
  float v13; // r0
  float v14; // r0
  float v15; // r4
  float v16; // r0
  double v19; // [sp+8h] [bp-3Ch]
  double v20; // [sp+8h] [bp-3Ch]
  float v22; // [sp+14h] [bp-30h]
  double v23; // [sp+18h] [bp-2Ch]
  float v24; // [sp+18h] [bp-2Ch]
  float v25; // [sp+20h] [bp-24h] BYREF
  float v26; // [sp+24h] [bp-20h]
  float v27; // [sp+28h] [bp-1Ch]
  float v28; // [sp+2Ch] [bp-18h]
  float v29[5]; // [sp+30h] [bp-14h] BYREF

  anl::CRGBAParameter::get((anl::CRGBAParameter *)&v25, a2 + 1, a3, a4);
  anl::CRGBAParameter::get((anl::CRGBAParameter *)v29, a2 + 6, a3, a4);
  LODWORD(v23) = anl::CScalarParameter::get((anl::CScalarParameter *)(a2 + 12), a3, a4);
  HIDWORD(v23) = v5;
  LODWORD(v7) = anl::CScalarParameter::get((anl::CScalarParameter *)(a2 + 16), a3, a4);
  HIDWORD(v7) = v6;
  LODWORD(v8) = anl::CScalarParameter::get((anl::CScalarParameter *)(a2 + 20), a3, a4);
  if ( v8 <= 0.0 )
  {
    if ( v23 < v7 )
      goto LABEL_3;
LABEL_5:
    v9 = this;
    v10 = v29;
    goto LABEL_6;
  }
  v19 = v7 - v8;
  if ( v23 >= v7 - v8 )
  {
    v11 = v7 + v8;
    if ( v23 <= v11 )
    {
      v20 = (v23 - v19)
          / (v11 - v19)
          * ((v23 - v19)
           / (v11 - v19))
          * ((v23 - v19)
           / (v11 - v19))
          * ((v23 - v19) / (v11 - v19) * ((v23 - v19) / (v11 - v19) * 6.0 - 15.0) + 10.0);
      v12 = v26 + v20 * (float)(v29[1] - v26);
      v22 = v12;
      v13 = v27 + v20 * (float)(v29[2] - v27);
      v24 = v13;
      v14 = v28 + v20 * (float)(v29[3] - v28);
      v15 = v14;
      v16 = v25 + v20 * (float)(v29[0] - v25);
      *(float *)this = v16;
      *((float *)this + 3) = v15;
      *((float *)this + 1) = v22;
      *((float *)this + 2) = v24;
      return this;
    }
    goto LABEL_5;
  }
LABEL_3:
  v9 = this;
  v10 = &v25;
LABEL_6:
  TVec4D<float>::TVec4D(v9, v10);
  return this;
}


//======================================================================
// anl::CRGBASelect::get(double,double,double)
// address: 0x0032A1A0   size: 0x29A (666 bytes)
//======================================================================
anl::CRGBASelect *__fastcall anl::CRGBASelect::get(anl::CRGBASelect *this, _DWORD *a2, double a3, double a4, double a5)
{
  int v6; // r1
  int v8; // r1
  int v9; // r1
  int v10; // r1
  double v11; // r0
  anl::CRGBASelect *v12; // r0
  float *v13; // r1
  double v14; // r6
  float v15; // r0
  float v16; // r0
  float v17; // r0
  float v18; // r0
  double v20; // [sp+10h] [bp-44h]
  double v21; // [sp+10h] [bp-44h]
  double v22; // [sp+18h] [bp-3Ch]
  float v23; // [sp+18h] [bp-3Ch]
  float v25; // [sp+24h] [bp-30h]
  double v26; // [sp+28h] [bp-2Ch]
  float v27; // [sp+30h] [bp-24h] BYREF
  float v28; // [sp+34h] [bp-20h]
  float v29; // [sp+38h] [bp-1Ch]
  float v30; // [sp+3Ch] [bp-18h]
  float v31[5]; // [sp+40h] [bp-14h] BYREF

  v6 = a2[1];
  if ( v6 != 0 )
    (*(void (__fastcall **)(float *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v6 + 12))(
      &v27,
      v6,
      LODWORD(a3),
      HIDWORD(a3),
      LODWORD(a4),
      HIDWORD(a4),
      LODWORD(a5),
      HIDWORD(a5));
  else
    TVec4D<float>::TVec4D(&v27, a2 + 2);
  v8 = a2[6];
  if ( v8 != 0 )
    (*(void (__fastcall **)(float *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v8 + 12))(
      v31,
      v8,
      LODWORD(a3),
      HIDWORD(a3),
      LODWORD(a4),
      HIDWORD(a4),
      LODWORD(a5),
      HIDWORD(a5));
  else
    TVec4D<float>::TVec4D(v31, a2 + 7);
  LODWORD(v22) = anl::CScalarParameter::get((anl::CScalarParameter *)(a2 + 12), a3, a4, a5);
  HIDWORD(v22) = v9;
  LODWORD(v26) = anl::CScalarParameter::get((anl::CScalarParameter *)(a2 + 16), a3, a4, a5);
  HIDWORD(v26) = v10;
  LODWORD(v11) = anl::CScalarParameter::get((anl::CScalarParameter *)(a2 + 20), a3, a4, a5);
  if ( v11 <= 0.0 )
  {
    if ( v22 < v26 )
      goto LABEL_9;
LABEL_11:
    v12 = this;
    v13 = v31;
    goto LABEL_12;
  }
  if ( v22 >= v26 - v11 )
  {
    if ( v22 <= v26 + v11 )
    {
      v14 = v26 + v11;
      v20 = v26 - v11;
      v21 = (v22 - v20)
          / (v14 - v20)
          * ((v22 - v20)
           / (v14 - v20))
          * ((v22 - v20)
           / (v14 - v20))
          * ((v22 - v20) / (v14 - v20) * ((v22 - v20) / (v14 - v20) * 6.0 - 15.0) + 10.0);
      v15 = v28 + v21 * (float)(v31[1] - v28);
      v25 = v15;
      v16 = v29 + v21 * (float)(v31[2] - v29);
      v23 = v16;
      v17 = v30 + v21 * (float)(v31[3] - v30);
      *((float *)&v14 + 1) = v17;
      v18 = v27 + v21 * (float)(v31[0] - v27);
      *(float *)this = v18;
      *((_DWORD *)this + 3) = HIDWORD(v14);
      *((float *)this + 1) = v25;
      *((float *)this + 2) = v23;
      return this;
    }
    goto LABEL_11;
  }
LABEL_9:
  v12 = this;
  v13 = &v27;
LABEL_12:
  TVec4D<float>::TVec4D(v12, v13);
  return this;
}


//======================================================================
// anl::CRGBASelect::get(double,double,double,double,double,double)
// address: 0x0032A460   size: 0x312 (786 bytes)
//======================================================================
anl::CRGBASelect *__fastcall anl::CRGBASelect::get(
        anl::CRGBASelect *this,
        _DWORD *a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8)
{
  int v9; // r1
  int v11; // r1
  int v12; // r1
  int v13; // r1
  double v14; // r0
  anl::CRGBASelect *v15; // r0
  float *v16; // r1
  double v17; // r6
  float v18; // r0
  float v19; // r0
  float v20; // r0
  float v21; // r0
  double v23; // [sp+28h] [bp-4Ch]
  double v24; // [sp+28h] [bp-4Ch]
  double v25; // [sp+30h] [bp-44h]
  float v27; // [sp+40h] [bp-34h]
  float v28; // [sp+44h] [bp-30h]
  double v29; // [sp+48h] [bp-2Ch]
  float v30; // [sp+50h] [bp-24h] BYREF
  float v31; // [sp+54h] [bp-20h]
  float v32; // [sp+58h] [bp-1Ch]
  float v33; // [sp+5Ch] [bp-18h]
  float v34[5]; // [sp+60h] [bp-14h] BYREF

  v9 = a2[1];
  if ( v9 != 0 )
    (*(void (__fastcall **)(float *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v9 + 20))(
      &v30,
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
  else
    TVec4D<float>::TVec4D(&v30, a2 + 2);
  v11 = a2[6];
  if ( v11 != 0 )
    (*(void (__fastcall **)(float *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v11 + 20))(
      v34,
      v11,
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
  else
    TVec4D<float>::TVec4D(v34, a2 + 7);
  LODWORD(v25) = anl::CScalarParameter::get((anl::CScalarParameter *)(a2 + 12), a3, a4, a5, a6, a7, a8);
  HIDWORD(v25) = v12;
  LODWORD(v29) = anl::CScalarParameter::get((anl::CScalarParameter *)(a2 + 16), a3, a4, a5, a6, a7, a8);
  HIDWORD(v29) = v13;
  LODWORD(v14) = anl::CScalarParameter::get((anl::CScalarParameter *)(a2 + 20), a3, a4, a5, a6, a7, a8);
  if ( v14 <= 0.0 )
  {
    if ( v25 < v29 )
      goto LABEL_9;
LABEL_11:
    v15 = this;
    v16 = v34;
    goto LABEL_12;
  }
  if ( v25 >= v29 - v14 )
  {
    if ( v25 <= v29 + v14 )
    {
      v17 = v29 + v14;
      v23 = v29 - v14;
      v24 = (v25 - v23)
          / (v17 - v23)
          * ((v25 - v23)
           / (v17 - v23))
          * ((v25 - v23)
           / (v17 - v23))
          * ((v25 - v23) / (v17 - v23) * ((v25 - v23) / (v17 - v23) * 6.0 - 15.0) + 10.0);
      v18 = v31 + v24 * (float)(v34[1] - v31);
      v27 = v18;
      v19 = v32 + v24 * (float)(v34[2] - v32);
      v28 = v19;
      v20 = v33 + v24 * (float)(v34[3] - v33);
      *((float *)&v17 + 1) = v20;
      v21 = v30 + v24 * (float)(v34[0] - v30);
      *(float *)this = v21;
      *((_DWORD *)this + 3) = HIDWORD(v17);
      *((float *)this + 1) = v27;
      *((float *)this + 2) = v28;
      return this;
    }
    goto LABEL_11;
  }
LABEL_9:
  v15 = this;
  v16 = &v30;
LABEL_12:
  TVec4D<float>::TVec4D(v15, v16);
  return this;
}


//======================================================================
// anl::CRGBASelect::get(double,double,double,double)
// address: 0x0032A798   size: 0x2C2 (706 bytes)
//======================================================================
anl::CRGBASelect *__fastcall anl::CRGBASelect::get(
        anl::CRGBASelect *this,
        _DWORD *a2,
        double a3,
        double a4,
        double a5,
        double a6)
{
  int v7; // r1
  int v9; // r1
  int v10; // r1
  int v11; // r1
  double v12; // r0
  anl::CRGBASelect *v13; // r0
  float *v14; // r1
  double v15; // r6
  float v16; // r0
  float v17; // r0
  float v18; // r0
  float v19; // r0
  double v21; // [sp+18h] [bp-4Ch]
  double v22; // [sp+18h] [bp-4Ch]
  double v23; // [sp+20h] [bp-44h]
  float v25; // [sp+30h] [bp-34h]
  float v26; // [sp+34h] [bp-30h]
  double v27; // [sp+38h] [bp-2Ch]
  float v28; // [sp+40h] [bp-24h] BYREF
  float v29; // [sp+44h] [bp-20h]
  float v30; // [sp+48h] [bp-1Ch]
  float v31; // [sp+4Ch] [bp-18h]
  float v32[5]; // [sp+50h] [bp-14h] BYREF

  v7 = a2[1];
  if ( v7 != 0 )
    (*(void (__fastcall **)(float *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v7 + 16))(
      &v28,
      v7,
      LODWORD(a3),
      HIDWORD(a3),
      LODWORD(a4),
      HIDWORD(a4),
      LODWORD(a5),
      HIDWORD(a5),
      LODWORD(a6),
      HIDWORD(a6));
  else
    TVec4D<float>::TVec4D(&v28, a2 + 2);
  v9 = a2[6];
  if ( v9 != 0 )
    (*(void (__fastcall **)(float *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v9 + 16))(
      v32,
      v9,
      LODWORD(a3),
      HIDWORD(a3),
      LODWORD(a4),
      HIDWORD(a4),
      LODWORD(a5),
      HIDWORD(a5),
      LODWORD(a6),
      HIDWORD(a6));
  else
    TVec4D<float>::TVec4D(v32, a2 + 7);
  LODWORD(v23) = anl::CScalarParameter::get((anl::CScalarParameter *)(a2 + 12), a3, a4, a5, a6);
  HIDWORD(v23) = v10;
  LODWORD(v27) = anl::CScalarParameter::get((anl::CScalarParameter *)(a2 + 16), a3, a4, a5, a6);
  HIDWORD(v27) = v11;
  LODWORD(v12) = anl::CScalarParameter::get((anl::CScalarParameter *)(a2 + 20), a3, a4, a5, a6);
  if ( v12 <= 0.0 )
  {
    if ( v23 < v27 )
      goto LABEL_9;
LABEL_11:
    v13 = this;
    v14 = v32;
    goto LABEL_12;
  }
  if ( v23 >= v27 - v12 )
  {
    if ( v23 <= v27 + v12 )
    {
      v15 = v27 + v12;
      v21 = v27 - v12;
      v22 = (v23 - v21)
          / (v15 - v21)
          * ((v23 - v21)
           / (v15 - v21))
          * ((v23 - v21)
           / (v15 - v21))
          * ((v23 - v21) / (v15 - v21) * ((v23 - v21) / (v15 - v21) * 6.0 - 15.0) + 10.0);
      v16 = v29 + v22 * (float)(v32[1] - v29);
      v25 = v16;
      v17 = v30 + v22 * (float)(v32[2] - v30);
      v26 = v17;
      v18 = v31 + v22 * (float)(v32[3] - v31);
      *((float *)&v15 + 1) = v18;
      v19 = v28 + v22 * (float)(v32[0] - v28);
      *(float *)this = v19;
      *((_DWORD *)this + 3) = HIDWORD(v15);
      *((float *)this + 1) = v25;
      *((float *)this + 2) = v26;
      return this;
    }
    goto LABEL_11;
  }
LABEL_9:
  v13 = this;
  v14 = &v28;
LABEL_12:
  TVec4D<float>::TVec4D(v13, v14);
  return this;
}

