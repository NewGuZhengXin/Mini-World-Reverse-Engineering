// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CRGBANormalize

//======================================================================
// anl::CRGBANormalize::~CRGBANormalize()
// address: 0x0032FC40   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl14CRGBANormalizeD1Ev'
void __fastcall anl::CRGBANormalize::~CRGBANormalize(anl::CRGBANormalize *this)
{
  *(_DWORD *)this = &off_4634C8;
}


//======================================================================
// anl::CRGBANormalize::~CRGBANormalize()
// address: 0x0032FC50   size: 0x12 (18 bytes)
//======================================================================
void __fastcall anl::CRGBANormalize::~CRGBANormalize(anl::CRGBANormalize *this)
{
  anl::CRGBANormalize::~CRGBANormalize(this);
  operator delete(this);
}


//======================================================================
// anl::CRGBANormalize::get(double,double,double,double,double,double)
// address: 0x0032FC62   size: 0xD8 (216 bytes)
//======================================================================
anl::CRGBANormalize *__fastcall anl::CRGBANormalize::get(
        anl::CRGBANormalize *this,
        int a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8)
{
  int v8; // r6
  float v10; // r2
  float v11; // r3
  int v12; // r1
  float v13; // r5
  float v14; // r7
  float v15; // r0
  int v17; // [sp+34h] [bp-18h]
  float v18; // [sp+38h] [bp-14h] BYREF
  float v19; // [sp+3Ch] [bp-10h]
  float v20; // [sp+40h] [bp-Ch]
  int v21; // [sp+44h] [bp-8h]

  v8 = *(_DWORD *)(a2 + 4);
  if ( v8 != 0 )
  {
    (*(void (__fastcall **)(float *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v8 + 20))(
      &v18,
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
    v10 = *(float *)(a2 + 12);
    v18 = *(float *)(a2 + 8);
    v11 = *(float *)(a2 + 16);
    v12 = *(_DWORD *)(a2 + 20);
    v19 = v10;
    v20 = v11;
    v21 = v12;
  }
  if ( (float)((float)((float)(v18 * v18) + (float)(v19 * v19)) + (float)(v20 * v20)) == 0.0 )
  {
    *(_DWORD *)this = 0;
    *((_DWORD *)this + 1) = 0;
    *((_DWORD *)this + 2) = 0;
    *((_DWORD *)this + 3) = 0;
  }
  else
  {
    v13 = j_sqrtf((float)((float)(v18 * v18) + (float)(v19 * v19)) + (float)(v20 * v20));
    v14 = v19 / v13;
    v15 = v20 / v13;
    v17 = v21;
    *(float *)this = v18 / v13;
    *((float *)this + 1) = v14;
    *((float *)this + 2) = v15;
    *((_DWORD *)this + 3) = v17;
  }
  return this;
}


//======================================================================
// anl::CRGBANormalize::get(double,double,double,double)
// address: 0x0032FD3A   size: 0xC8 (200 bytes)
//======================================================================
anl::CRGBANormalize *__fastcall anl::CRGBANormalize::get(
        anl::CRGBANormalize *this,
        int a2,
        double a3,
        double a4,
        double a5,
        double a6)
{
  int v6; // r6
  float v8; // r2
  float v9; // r3
  int v10; // r1
  float v11; // r5
  float v12; // r7
  float v13; // r0
  int v15; // [sp+24h] [bp-18h]
  float v16; // [sp+28h] [bp-14h] BYREF
  float v17; // [sp+2Ch] [bp-10h]
  float v18; // [sp+30h] [bp-Ch]
  int v19; // [sp+34h] [bp-8h]

  v6 = *(_DWORD *)(a2 + 4);
  if ( v6 != 0 )
  {
    (*(void (__fastcall **)(float *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v6 + 16))(
      &v16,
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
    v8 = *(float *)(a2 + 12);
    v16 = *(float *)(a2 + 8);
    v9 = *(float *)(a2 + 16);
    v10 = *(_DWORD *)(a2 + 20);
    v17 = v8;
    v18 = v9;
    v19 = v10;
  }
  if ( (float)((float)((float)(v16 * v16) + (float)(v17 * v17)) + (float)(v18 * v18)) == 0.0 )
  {
    *(_DWORD *)this = 0;
    *((_DWORD *)this + 1) = 0;
    *((_DWORD *)this + 2) = 0;
    *((_DWORD *)this + 3) = 0;
  }
  else
  {
    v11 = j_sqrtf((float)((float)(v16 * v16) + (float)(v17 * v17)) + (float)(v18 * v18));
    v12 = v17 / v11;
    v13 = v18 / v11;
    v15 = v19;
    *(float *)this = v16 / v11;
    *((float *)this + 1) = v12;
    *((float *)this + 2) = v13;
    *((_DWORD *)this + 3) = v15;
  }
  return this;
}


//======================================================================
// anl::CRGBANormalize::get(double,double,double)
// address: 0x0032FE02   size: 0xC0 (192 bytes)
//======================================================================
anl::CRGBANormalize *__fastcall anl::CRGBANormalize::get(
        anl::CRGBANormalize *this,
        int a2,
        double a3,
        double a4,
        double a5)
{
  int v5; // r6
  float v7; // r2
  float v8; // r3
  int v9; // r1
  float v10; // r5
  float v11; // r7
  float v12; // r0
  int v14; // [sp+1Ch] [bp-18h]
  float v15; // [sp+20h] [bp-14h] BYREF
  float v16; // [sp+24h] [bp-10h]
  float v17; // [sp+28h] [bp-Ch]
  int v18; // [sp+2Ch] [bp-8h]

  v5 = *(_DWORD *)(a2 + 4);
  if ( v5 != 0 )
  {
    (*(void (__fastcall **)(float *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v5 + 12))(
      &v15,
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
    v7 = *(float *)(a2 + 12);
    v15 = *(float *)(a2 + 8);
    v8 = *(float *)(a2 + 16);
    v9 = *(_DWORD *)(a2 + 20);
    v16 = v7;
    v17 = v8;
    v18 = v9;
  }
  if ( (float)((float)((float)(v15 * v15) + (float)(v16 * v16)) + (float)(v17 * v17)) == 0.0 )
  {
    *(_DWORD *)this = 0;
    *((_DWORD *)this + 1) = 0;
    *((_DWORD *)this + 2) = 0;
    *((_DWORD *)this + 3) = 0;
  }
  else
  {
    v10 = j_sqrtf((float)((float)(v15 * v15) + (float)(v16 * v16)) + (float)(v17 * v17));
    v11 = v16 / v10;
    v12 = v17 / v10;
    v14 = v18;
    *(float *)this = v15 / v10;
    *((float *)this + 1) = v11;
    *((float *)this + 2) = v12;
    *((_DWORD *)this + 3) = v14;
  }
  return this;
}


//======================================================================
// anl::CRGBANormalize::get(double,double)
// address: 0x0032FEC2   size: 0xB8 (184 bytes)
//======================================================================
anl::CRGBANormalize *__fastcall anl::CRGBANormalize::get(anl::CRGBANormalize *this, int a2, double a3, double a4)
{
  int v4; // r6
  float v6; // r2
  float v7; // r3
  int v8; // r1
  float v9; // r5
  float v10; // r7
  float v11; // r0
  int v13; // [sp+14h] [bp-18h]
  float v14; // [sp+18h] [bp-14h] BYREF
  float v15; // [sp+1Ch] [bp-10h]
  float v16; // [sp+20h] [bp-Ch]
  int v17; // [sp+24h] [bp-8h]

  v4 = *(_DWORD *)(a2 + 4);
  if ( v4 != 0 )
  {
    (*(void (__fastcall **)(float *, int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v4 + 8))(
      &v14,
      v4,
      LODWORD(a3),
      HIDWORD(a3),
      LODWORD(a4),
      HIDWORD(a4));
  }
  else
  {
    v6 = *(float *)(a2 + 12);
    v14 = *(float *)(a2 + 8);
    v7 = *(float *)(a2 + 16);
    v8 = *(_DWORD *)(a2 + 20);
    v15 = v6;
    v16 = v7;
    v17 = v8;
  }
  if ( (float)((float)((float)(v14 * v14) + (float)(v15 * v15)) + (float)(v16 * v16)) == 0.0 )
  {
    *(_DWORD *)this = 0;
    *((_DWORD *)this + 1) = 0;
    *((_DWORD *)this + 2) = 0;
    *((_DWORD *)this + 3) = 0;
  }
  else
  {
    v9 = j_sqrtf((float)((float)(v14 * v14) + (float)(v15 * v15)) + (float)(v16 * v16));
    v10 = v15 / v9;
    v11 = v16 / v9;
    v13 = v17;
    *(float *)this = v14 / v9;
    *((float *)this + 1) = v10;
    *((float *)this + 2) = v11;
    *((_DWORD *)this + 3) = v13;
  }
  return this;
}


//======================================================================
// anl::CRGBANormalize::CRGBANormalize(void)
// address: 0x0032FF7C   size: 0x1A (26 bytes)
//======================================================================
// Alternative name is '_ZN3anl14CRGBANormalizeC1Ev'
_DWORD *__fastcall anl::CRGBANormalize::CRGBANormalize(_DWORD *this)
{
  *this = &off_463BF8;
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  return this;
}


//======================================================================
// anl::CRGBANormalize::setSource(anl::CRGBAModuleBase *)
// address: 0x0032FF9C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CRGBANormalize::setSource(int this, anl::CRGBAModuleBase *a2)
{
  *(_DWORD *)(this + 4) = a2;
  return this;
}


//======================================================================
// anl::CRGBANormalize::setSource(float,float,float,float)
// address: 0x0032FFA0   size: 0x12 (18 bytes)
//======================================================================
int __fastcall anl::CRGBANormalize::setSource(int this, float a2, float a3, float a4, float a5)
{
  *(float *)(this + 16) = a4;
  *(_DWORD *)(this + 4) = 0;
  *(float *)(this + 8) = a2;
  *(float *)(this + 12) = a3;
  *(float *)(this + 20) = a5;
  return this;
}

