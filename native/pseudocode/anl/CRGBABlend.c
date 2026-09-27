// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CRGBABlend

//======================================================================
// anl::CRGBABlend::~CRGBABlend()
// address: 0x0033165C   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl10CRGBABlendD1Ev'
void __fastcall anl::CRGBABlend::~CRGBABlend(anl::CRGBABlend *this)
{
  *(_DWORD *)this = &off_4634C8;
}


//======================================================================
// anl::CRGBABlend::~CRGBABlend()
// address: 0x0033166C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall anl::CRGBABlend::~CRGBABlend(anl::CRGBABlend *this)
{
  anl::CRGBABlend::~CRGBABlend(this);
  operator delete(this);
}


//======================================================================
// anl::CRGBABlend::get(double,double,double,double,double,double)
// address: 0x0033167E   size: 0x1DA (474 bytes)
//======================================================================
anl::CRGBABlend *__fastcall anl::CRGBABlend::get(
        anl::CRGBABlend *this,
        int a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8)
{
  int v9; // r1
  float v11; // r1
  float v12; // r2
  float v13; // r3
  int v14; // r1
  float v15; // r1
  float v16; // r2
  float v17; // r3
  int v18; // r0
  double v19; // r6
  float v20; // r0
  float v21; // r0
  float v22; // r0
  float v23; // r0
  float v25; // [sp+2Ch] [bp-38h]
  float v27; // [sp+38h] [bp-2Ch]
  float v28; // [sp+3Ch] [bp-28h]
  float v29; // [sp+40h] [bp-24h] BYREF
  float v30; // [sp+44h] [bp-20h]
  float v31; // [sp+48h] [bp-1Ch]
  float v32; // [sp+4Ch] [bp-18h]
  float v33; // [sp+50h] [bp-14h] BYREF
  float v34; // [sp+54h] [bp-10h]
  float v35; // [sp+58h] [bp-Ch]
  float v36; // [sp+5Ch] [bp-8h]

  v9 = *(_DWORD *)(a2 + 4);
  if ( v9 != 0 )
  {
    (*(void (__fastcall **)(float *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v9 + 20))(
      &v29,
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
    v11 = *(float *)(a2 + 12);
    v12 = *(float *)(a2 + 16);
    v29 = *(float *)(a2 + 8);
    v13 = *(float *)(a2 + 20);
    v30 = v11;
    v31 = v12;
    v32 = v13;
  }
  v14 = *(_DWORD *)(a2 + 24);
  if ( v14 != 0 )
  {
    (*(void (__fastcall **)(float *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v14 + 20))(
      &v33,
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
      HIDWORD(a8));
  }
  else
  {
    v15 = *(float *)(a2 + 32);
    v16 = *(float *)(a2 + 36);
    v33 = *(float *)(a2 + 28);
    v17 = *(float *)(a2 + 40);
    v34 = v15;
    v35 = v16;
    v36 = v17;
  }
  v18 = *(_DWORD *)(a2 + 56);
  if ( v18 != 0 )
    v19 = COERCE_DOUBLE(
            ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v18 + 24))(
              v18,
              *(_DWORD *)(*(_DWORD *)v18 + 24),
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
              HIDWORD(a8)));
  else
    v19 = *(double *)(a2 + 48);
  v20 = v30 + v19 * (float)(v34 - v30);
  v27 = v20;
  v21 = v31 + v19 * (float)(v35 - v31);
  v28 = v21;
  v22 = v32 + v19 * (float)(v36 - v32);
  v25 = v22;
  v23 = v29 + v19 * (float)(v33 - v29);
  *(float *)this = v23;
  *((float *)this + 1) = v27;
  *((float *)this + 2) = v28;
  *((float *)this + 3) = v25;
  return this;
}


//======================================================================
// anl::CRGBABlend::get(double,double,double,double)
// address: 0x00331858   size: 0x1AA (426 bytes)
//======================================================================
anl::CRGBABlend *__fastcall anl::CRGBABlend::get(
        anl::CRGBABlend *this,
        int a2,
        double a3,
        double a4,
        double a5,
        double a6)
{
  int v7; // r1
  float v9; // r1
  float v10; // r2
  float v11; // r3
  int v12; // r1
  float v13; // r1
  float v14; // r2
  float v15; // r3
  int v16; // r0
  double v17; // r6
  float v18; // r0
  float v19; // r0
  float v20; // r0
  float v21; // r0
  float v23; // [sp+1Ch] [bp-38h]
  float v24; // [sp+20h] [bp-34h]
  float v26; // [sp+2Ch] [bp-28h]
  float v27; // [sp+30h] [bp-24h] BYREF
  float v28; // [sp+34h] [bp-20h]
  float v29; // [sp+38h] [bp-1Ch]
  float v30; // [sp+3Ch] [bp-18h]
  float v31; // [sp+40h] [bp-14h] BYREF
  float v32; // [sp+44h] [bp-10h]
  float v33; // [sp+48h] [bp-Ch]
  float v34; // [sp+4Ch] [bp-8h]

  v7 = *(_DWORD *)(a2 + 4);
  if ( v7 != 0 )
  {
    (*(void (__fastcall **)(float *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v7 + 16))(
      &v27,
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
    v10 = *(float *)(a2 + 16);
    v27 = *(float *)(a2 + 8);
    v11 = *(float *)(a2 + 20);
    v28 = v9;
    v29 = v10;
    v30 = v11;
  }
  v12 = *(_DWORD *)(a2 + 24);
  if ( v12 != 0 )
  {
    (*(void (__fastcall **)(float *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v12 + 16))(
      &v31,
      v12,
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
    v13 = *(float *)(a2 + 32);
    v14 = *(float *)(a2 + 36);
    v31 = *(float *)(a2 + 28);
    v15 = *(float *)(a2 + 40);
    v32 = v13;
    v33 = v14;
    v34 = v15;
  }
  v16 = *(_DWORD *)(a2 + 56);
  if ( v16 != 0 )
    v17 = COERCE_DOUBLE(
            ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v16 + 20))(
              v16,
              *(_DWORD *)(*(_DWORD *)v16 + 20),
              LODWORD(a3),
              HIDWORD(a3),
              LODWORD(a4),
              HIDWORD(a4),
              LODWORD(a5),
              HIDWORD(a5),
              LODWORD(a6),
              HIDWORD(a6)));
  else
    v17 = *(double *)(a2 + 48);
  v18 = v28 + v17 * (float)(v32 - v28);
  v26 = v18;
  v19 = v29 + v17 * (float)(v33 - v29);
  v23 = v19;
  v20 = v30 + v17 * (float)(v34 - v30);
  v24 = v20;
  v21 = v27 + v17 * (float)(v31 - v27);
  *(float *)this = v21;
  *((float *)this + 1) = v26;
  *((float *)this + 2) = v23;
  *((float *)this + 3) = v24;
  return this;
}


//======================================================================
// anl::CRGBABlend::get(double,double,double)
// address: 0x00331A02   size: 0x192 (402 bytes)
//======================================================================
anl::CRGBABlend *__fastcall anl::CRGBABlend::get(anl::CRGBABlend *this, int a2, double a3, double a4, double a5)
{
  int v6; // r1
  float v8; // r1
  float v9; // r2
  float v10; // r3
  int v11; // r1
  float v12; // r1
  float v13; // r2
  float v14; // r3
  int v15; // r0
  double v16; // r6
  float v17; // r0
  float v18; // r0
  float v19; // r0
  float v20; // r0
  float v22; // [sp+14h] [bp-38h]
  float v23; // [sp+18h] [bp-34h]
  float v25; // [sp+24h] [bp-28h]
  float v26; // [sp+28h] [bp-24h] BYREF
  float v27; // [sp+2Ch] [bp-20h]
  float v28; // [sp+30h] [bp-1Ch]
  float v29; // [sp+34h] [bp-18h]
  float v30; // [sp+38h] [bp-14h] BYREF
  float v31; // [sp+3Ch] [bp-10h]
  float v32; // [sp+40h] [bp-Ch]
  float v33; // [sp+44h] [bp-8h]

  v6 = *(_DWORD *)(a2 + 4);
  if ( v6 != 0 )
  {
    (*(void (__fastcall **)(float *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v6 + 12))(
      &v26,
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
    v9 = *(float *)(a2 + 16);
    v26 = *(float *)(a2 + 8);
    v10 = *(float *)(a2 + 20);
    v27 = v8;
    v28 = v9;
    v29 = v10;
  }
  v11 = *(_DWORD *)(a2 + 24);
  if ( v11 != 0 )
  {
    (*(void (__fastcall **)(float *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v11 + 12))(
      &v30,
      v11,
      LODWORD(a3),
      HIDWORD(a3),
      LODWORD(a4),
      HIDWORD(a4),
      LODWORD(a5),
      HIDWORD(a5));
  }
  else
  {
    v12 = *(float *)(a2 + 32);
    v13 = *(float *)(a2 + 36);
    v30 = *(float *)(a2 + 28);
    v14 = *(float *)(a2 + 40);
    v31 = v12;
    v32 = v13;
    v33 = v14;
  }
  v15 = *(_DWORD *)(a2 + 56);
  if ( v15 != 0 )
    v16 = COERCE_DOUBLE(
            ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v15 + 16))(
              v15,
              *(_DWORD *)(*(_DWORD *)v15 + 16),
              LODWORD(a3),
              HIDWORD(a3),
              LODWORD(a4),
              HIDWORD(a4),
              LODWORD(a5),
              HIDWORD(a5)));
  else
    v16 = *(double *)(a2 + 48);
  v17 = v27 + v16 * (float)(v31 - v27);
  v22 = v17;
  v18 = v28 + v16 * (float)(v32 - v28);
  v25 = v18;
  v19 = v29 + v16 * (float)(v33 - v29);
  v23 = v19;
  v20 = v26 + v16 * (float)(v30 - v26);
  *(float *)this = v20;
  *((float *)this + 1) = v22;
  *((float *)this + 2) = v25;
  *((float *)this + 3) = v23;
  return this;
}


//======================================================================
// anl::CRGBABlend::get(double,double)
// address: 0x00331B94   size: 0x144 (324 bytes)
//======================================================================
anl::CRGBABlend *__fastcall anl::CRGBABlend::get(anl::CRGBABlend *this, int a2, double a3, double a4)
{
  int v7; // r0
  float v8; // r0
  float v9; // r0
  float v10; // r5
  float v11; // r0
  float v12; // r4
  float v13; // r0
  double v15; // [sp+8h] [bp-3Ch]
  float v16; // [sp+1Ch] [bp-28h]
  float v17; // [sp+20h] [bp-24h] BYREF
  float v18; // [sp+24h] [bp-20h]
  float v19; // [sp+28h] [bp-1Ch]
  float v20; // [sp+2Ch] [bp-18h]
  float v21[5]; // [sp+30h] [bp-14h] BYREF

  anl::CRGBAParameter::get((anl::CRGBAParameter *)&v17, (_DWORD *)(a2 + 4), a3, a4);
  anl::CRGBAParameter::get((anl::CRGBAParameter *)v21, (_DWORD *)(a2 + 24), a3, a4);
  v7 = *(_DWORD *)(a2 + 56);
  if ( v7 != 0 )
    v15 = COERCE_DOUBLE(
            ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v7 + 12))(
              v7,
              *(_DWORD *)(*(_DWORD *)v7 + 12),
              LODWORD(a3),
              HIDWORD(a3),
              LODWORD(a4),
              HIDWORD(a4)));
  else
    v15 = *(double *)(a2 + 48);
  v8 = v18 + v15 * (float)(v21[1] - v18);
  v16 = v8;
  v9 = v19 + v15 * (float)(v21[2] - v19);
  v10 = v9;
  v11 = v20 + v15 * (float)(v21[3] - v20);
  v12 = v11;
  v13 = v17 + v15 * (float)(v21[0] - v17);
  *(float *)this = v13;
  *((float *)this + 2) = v10;
  *((float *)this + 1) = v16;
  *((float *)this + 3) = v12;
  return this;
}


//======================================================================
// anl::CRGBABlend::CRGBABlend(void)
// address: 0x00331CD8   size: 0x2E (46 bytes)
//======================================================================
// Alternative name is '_ZN3anl10CRGBABlendC1Ev'
_DWORD *__fastcall anl::CRGBABlend::CRGBABlend(_DWORD *this)
{
  *(this + 1) = 0;
  *(this + 6) = 0;
  *(this + 14) = 0;
  *this = &off_463D38;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 12) = 0;
  *(this + 13) = 0;
  return this;
}


//======================================================================
// anl::CRGBABlend::setLowSource(anl::CRGBAModuleBase *)
// address: 0x00331D18   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CRGBABlend::setLowSource(int this, anl::CRGBAModuleBase *a2)
{
  *(_DWORD *)(this + 4) = a2;
  return this;
}


//======================================================================
// anl::CRGBABlend::setHighSource(anl::CRGBAModuleBase *)
// address: 0x00331D1C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CRGBABlend::setHighSource(int this, anl::CRGBAModuleBase *a2)
{
  *(_DWORD *)(this + 24) = a2;
  return this;
}


//======================================================================
// anl::CRGBABlend::setLowSource(float,float,float,float)
// address: 0x00331D20   size: 0x12 (18 bytes)
//======================================================================
int __fastcall anl::CRGBABlend::setLowSource(int this, float a2, float a3, float a4, float a5)
{
  *(float *)(this + 16) = a4;
  *(_DWORD *)(this + 4) = 0;
  *(float *)(this + 8) = a2;
  *(float *)(this + 12) = a3;
  *(float *)(this + 20) = a5;
  return this;
}


//======================================================================
// anl::CRGBABlend::setHighSource(float,float,float,float)
// address: 0x00331D32   size: 0x12 (18 bytes)
//======================================================================
int __fastcall anl::CRGBABlend::setHighSource(int this, float a2, float a3, float a4, float a5)
{
  *(float *)(this + 36) = a4;
  *(_DWORD *)(this + 24) = 0;
  *(float *)(this + 28) = a2;
  *(float *)(this + 32) = a3;
  *(float *)(this + 40) = a5;
  return this;
}


//======================================================================
// anl::CRGBABlend::setControlSource(anl::CImplicitModuleBase *)
// address: 0x00331D44   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CRGBABlend::setControlSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 56) = a2;
  return this;
}


//======================================================================
// anl::CRGBABlend::setControlSource(double)
// address: 0x00331D48   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CRGBABlend::setControlSource(int this, double a2)
{
  *(_DWORD *)(this + 56) = 0;
  *(double *)(this + 48) = a2;
  return this;
}

