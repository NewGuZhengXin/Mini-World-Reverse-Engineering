// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CImplicitAutoCorrect

//======================================================================
// anl::CImplicitAutoCorrect::~CImplicitAutoCorrect()
// address: 0x0032E150   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl20CImplicitAutoCorrectD1Ev'
void __fastcall anl::CImplicitAutoCorrect::~CImplicitAutoCorrect(anl::CImplicitAutoCorrect *this)
{
  *(_DWORD *)this = &off_462280;
}


//======================================================================
// anl::CImplicitAutoCorrect::get(double,double)
// address: 0x0032E160   size: 0x68 (104 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitAutoCorrect::get(anl::CImplicitAutoCorrect *this, double a2, double a3)
{
  int v5; // r0
  double v6; // r0
  double v7; // r6
  double v8; // r4

  v5 = *((_DWORD *)this + 4);
  if ( v5 != 0 )
  {
    v6 = COERCE_DOUBLE(
           ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v5 + 12))(
             v5,
             *(_DWORD *)(*(_DWORD *)v5 + 12),
             LODWORD(a2),
             HIDWORD(a2),
             LODWORD(a3),
             HIDWORD(a3)))
       * *((double *)this + 5)
       + *((double *)this + 6);
    v7 = *((double *)this + 4);
    if ( v6 < v7 )
      v7 = v6;
    v8 = *((double *)this + 3);
    if ( v8 < v7 )
      v8 = v7;
  }
  else
  {
    v8 = 0.0;
  }
  return *(_QWORD *)&v8;
}


//======================================================================
// anl::CImplicitAutoCorrect::get(double,double,double)
// address: 0x0032E1D0   size: 0x70 (112 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitAutoCorrect::get(anl::CImplicitAutoCorrect *this, double a2, double a3, double a4)
{
  int v6; // r0
  double v7; // r0
  double v8; // r6
  double v9; // r4

  v6 = *((_DWORD *)this + 4);
  if ( v6 != 0 )
  {
    v7 = COERCE_DOUBLE(
           ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v6 + 16))(
             v6,
             *(_DWORD *)(*(_DWORD *)v6 + 16),
             LODWORD(a2),
             HIDWORD(a2),
             LODWORD(a3),
             HIDWORD(a3),
             LODWORD(a4),
             HIDWORD(a4)))
       * *((double *)this + 7)
       + *((double *)this + 8);
    v8 = *((double *)this + 4);
    if ( v7 < v8 )
      v8 = v7;
    v9 = *((double *)this + 3);
    if ( v9 < v8 )
      v9 = v8;
  }
  else
  {
    v9 = 0.0;
  }
  return *(_QWORD *)&v9;
}


//======================================================================
// anl::CImplicitAutoCorrect::get(double,double,double,double)
// address: 0x0032E248   size: 0x78 (120 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitAutoCorrect::get(
        anl::CImplicitAutoCorrect *this,
        double a2,
        double a3,
        double a4,
        double a5)
{
  int v7; // r0
  double v8; // r0
  double v9; // r6
  double v10; // r4

  v7 = *((_DWORD *)this + 4);
  if ( v7 != 0 )
  {
    v8 = COERCE_DOUBLE(
           ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v7 + 20))(
             v7,
             *(_DWORD *)(*(_DWORD *)v7 + 20),
             LODWORD(a2),
             HIDWORD(a2),
             LODWORD(a3),
             HIDWORD(a3),
             LODWORD(a4),
             HIDWORD(a4),
             LODWORD(a5),
             HIDWORD(a5)))
       * *((double *)this + 9)
       + *((double *)this + 10);
    v9 = *((double *)this + 4);
    if ( v8 < v9 )
      v9 = v8;
    v10 = *((double *)this + 3);
    if ( v10 < v9 )
      v10 = v9;
  }
  else
  {
    v10 = 0.0;
  }
  return *(_QWORD *)&v10;
}


//======================================================================
// anl::CImplicitAutoCorrect::get(double,double,double,double,double,double)
// address: 0x0032E2C8   size: 0x88 (136 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitAutoCorrect::get(
        anl::CImplicitAutoCorrect *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  int v9; // r0
  double v10; // r0
  double v11; // r6
  double v12; // r4

  v9 = *((_DWORD *)this + 4);
  if ( v9 != 0 )
  {
    v10 = COERCE_DOUBLE(
            ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v9 + 24))(
              v9,
              *(_DWORD *)(*(_DWORD *)v9 + 24),
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
              HIDWORD(a7)))
        * *((double *)this + 11)
        + *((double *)this + 12);
    v11 = *((double *)this + 4);
    if ( v10 < v11 )
      v11 = v10;
    v12 = *((double *)this + 3);
    if ( v12 < v11 )
      v12 = v11;
  }
  else
  {
    v12 = 0.0;
  }
  return *(_QWORD *)&v12;
}


//======================================================================
// anl::CImplicitAutoCorrect::~CImplicitAutoCorrect()
// address: 0x0032E358   size: 0x16 (22 bytes)
//======================================================================
void __fastcall anl::CImplicitAutoCorrect::~CImplicitAutoCorrect(anl::CImplicitAutoCorrect *this)
{
  *(_DWORD *)this = &off_462280;
  operator delete(this);
}


//======================================================================
// anl::CImplicitAutoCorrect::CImplicitAutoCorrect(void)
// address: 0x0032E398   size: 0x28 (40 bytes)
//======================================================================
// Alternative name is '_ZN3anl20CImplicitAutoCorrectC1Ev'
_DWORD *__fastcall anl::CImplicitAutoCorrect::CImplicitAutoCorrect(_DWORD *this)
{
  *(this + 2) = -350469331;
  *(this + 3) = 1058682594;
  *this = &off_463B50;
  *(this + 4) = 0;
  *(this + 6) = 0;
  *(this + 7) = -1074790400;
  *(this + 8) = 0;
  *(this + 9) = 1072693248;
  return this;
}


//======================================================================
// anl::CImplicitAutoCorrect::CImplicitAutoCorrect(double,double)
// address: 0x0032E3E0   size: 0x26 (38 bytes)
//======================================================================
// Alternative name is '_ZN3anl20CImplicitAutoCorrectC2Edd'
int __fastcall anl::CImplicitAutoCorrect::CImplicitAutoCorrect(int this, double a2, double a3)
{
  *(_DWORD *)(this + 8) = -350469331;
  *(_DWORD *)(this + 12) = 1058682594;
  *(_DWORD *)this = &off_463B50;
  *(double *)(this + 24) = a2;
  *(_DWORD *)(this + 16) = 0;
  *(double *)(this + 32) = a3;
  return this;
}


//======================================================================
// anl::CImplicitAutoCorrect::setSource(anl::CImplicitModuleBase *)
// address: 0x0032E418   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitAutoCorrect::setSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 16) = a2;
  return this;
}


//======================================================================
// anl::CImplicitAutoCorrect::setRange(double,double)
// address: 0x0032E41C   size: 0x10 (16 bytes)
//======================================================================
int __fastcall anl::CImplicitAutoCorrect::setRange(int this, double a2, double a3)
{
  *(double *)(this + 24) = a2;
  *(double *)(this + 32) = a3;
  return this;
}


//======================================================================
// anl::CImplicitAutoCorrect::calculate(void)
// address: 0x0032E430   size: 0x500 (1280 bytes)
//======================================================================
int __fastcall anl::CImplicitAutoCorrect::calculate(double this)
{
  int v1; // r7
  double v2; // r4
  double v3; // r4
  double v4; // r6
  double v5; // r0
  double v6; // r0
  int v7; // r7
  double v8; // r4
  double v9; // r4
  double v10; // r6
  double v11; // r0
  double v12; // r0
  int v13; // r7
  double v14; // r4
  double v15; // r4
  double v16; // r6
  double v17; // r0
  double v18; // r0
  int v19; // r7
  double v20; // r4
  int v21; // r6
  double v22; // r4
  double v23; // r6
  double v24; // r0
  double v26; // [sp+30h] [bp-4Ch]
  double v27; // [sp+30h] [bp-4Ch]
  double v28; // [sp+30h] [bp-4Ch]
  double v29; // [sp+30h] [bp-4Ch]
  double v30; // [sp+38h] [bp-44h]
  double v31; // [sp+38h] [bp-44h]
  double v32; // [sp+38h] [bp-44h]
  double v33; // [sp+38h] [bp-44h]
  double v34; // [sp+40h] [bp-3Ch]
  double v35; // [sp+40h] [bp-3Ch]
  double v36; // [sp+40h] [bp-3Ch]
  double v37; // [sp+40h] [bp-3Ch]
  double v38; // [sp+48h] [bp-34h]
  double v39; // [sp+48h] [bp-34h]
  double v40; // [sp+48h] [bp-34h]
  double v41; // [sp+50h] [bp-2Ch]
  double v42; // [sp+50h] [bp-2Ch]
  double v43; // [sp+58h] [bp-24h]
  double v44; // [sp+60h] [bp-1Ch]
  int v45; // [sp+68h] [bp-14h]
  _DWORD v46[3]; // [sp+70h] [bp-Ch] BYREF

  v45 = LODWORD(this);
  if ( *(_DWORD *)(LODWORD(this) + 16) != 0 )
  {
    v46[0] = &off_45DC48;
    v46[1] = 10000;
    v1 = 10000;
    v26 = -10000.0;
    v30 = 10000.0;
    while ( 1 )
    {
      v2 = anl::CBasePRNG::get01((anl::CBasePRNG *)v46);
      v34 = anl::CBasePRNG::get01((anl::CBasePRNG *)v46);
      v3 = COERCE_DOUBLE(
             ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(**(_DWORD **)(v45 + 16)
                                                                                                + 12))(
               *(_DWORD *)(v45 + 16),
               *(_DWORD *)(**(_DWORD **)(v45 + 16) + 12),
               COERCE_UNSIGNED_INT64(v2 * 4.0 - 2.0),
               HIDWORD(COERCE_UNSIGNED_INT64(v2 * 4.0 - 2.0)),
               COERCE_UNSIGNED_INT64(v34 * 4.0 - 2.0),
               HIDWORD(COERCE_UNSIGNED_INT64(v34 * 4.0 - 2.0))));
      if ( v3 < v30 )
        v30 = v3;
      if ( v3 <= v26 )
        v3 = v26;
      if ( --v1 == 0 )
        break;
      v26 = v3;
    }
    v4 = *(double *)(v45 + 24);
    v5 = (*(double *)(v45 + 32) - v4) / (v3 - v30);
    *(double *)(v45 + 40) = v5;
    v6 = v4 - v30 * v5;
    v7 = 10000;
    *(double *)(v45 + 48) = v6;
    v27 = -10000.0;
    v31 = 10000.0;
    while ( 1 )
    {
      v8 = anl::CBasePRNG::get01((anl::CBasePRNG *)v46);
      v35 = anl::CBasePRNG::get01((anl::CBasePRNG *)v46);
      v38 = anl::CBasePRNG::get01((anl::CBasePRNG *)v46);
      v9 = COERCE_DOUBLE(
             ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(**(_DWORD **)(v45 + 16) + 16))(
               *(_DWORD *)(v45 + 16),
               *(_DWORD *)(**(_DWORD **)(v45 + 16) + 16),
               COERCE_UNSIGNED_INT64(v8 * 4.0 - 2.0),
               HIDWORD(COERCE_UNSIGNED_INT64(v8 * 4.0 - 2.0)),
               COERCE_UNSIGNED_INT64(v35 * 4.0 - 2.0),
               HIDWORD(COERCE_UNSIGNED_INT64(v35 * 4.0 - 2.0)),
               COERCE_UNSIGNED_INT64(v38 * 4.0 - 2.0),
               HIDWORD(COERCE_UNSIGNED_INT64(v38 * 4.0 - 2.0))));
      if ( v9 < v31 )
        v31 = v9;
      if ( v9 <= v27 )
        v9 = v27;
      if ( --v7 == 0 )
        break;
      v27 = v9;
    }
    v10 = *(double *)(v45 + 24);
    v11 = (*(double *)(v45 + 32) - v10) / (v9 - v31);
    *(double *)(v45 + 56) = v11;
    v12 = v10 - v31 * v11;
    v13 = 10000;
    *(double *)(v45 + 64) = v12;
    v28 = -10000.0;
    v32 = 10000.0;
    while ( 1 )
    {
      v14 = anl::CBasePRNG::get01((anl::CBasePRNG *)v46);
      v36 = anl::CBasePRNG::get01((anl::CBasePRNG *)v46);
      v39 = anl::CBasePRNG::get01((anl::CBasePRNG *)v46);
      v41 = anl::CBasePRNG::get01((anl::CBasePRNG *)v46);
      v15 = COERCE_DOUBLE(
              ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(**(_DWORD **)(v45 + 16) + 20))(
                *(_DWORD *)(v45 + 16),
                *(_DWORD *)(**(_DWORD **)(v45 + 16) + 20),
                COERCE_UNSIGNED_INT64(v14 * 4.0 - 2.0),
                HIDWORD(COERCE_UNSIGNED_INT64(v14 * 4.0 - 2.0)),
                COERCE_UNSIGNED_INT64(v36 * 4.0 - 2.0),
                HIDWORD(COERCE_UNSIGNED_INT64(v36 * 4.0 - 2.0)),
                COERCE_UNSIGNED_INT64(v39 * 4.0 - 2.0),
                HIDWORD(COERCE_UNSIGNED_INT64(v39 * 4.0 - 2.0)),
                COERCE_UNSIGNED_INT64(v41 * 4.0 - 2.0),
                HIDWORD(COERCE_UNSIGNED_INT64(v41 * 4.0 - 2.0))));
      if ( v15 < v32 )
        v32 = v15;
      if ( v15 <= v28 )
        v15 = v28;
      if ( --v13 == 0 )
        break;
      v28 = v15;
    }
    v16 = *(double *)(v45 + 24);
    v17 = (*(double *)(v45 + 32) - v16) / (v15 - v32);
    *(double *)(v45 + 72) = v17;
    v18 = v16 - v32 * v17;
    v19 = 10000;
    *(double *)(v45 + 80) = v18;
    v29 = -10000.0;
    v33 = 10000.0;
    while ( 1 )
    {
      v20 = anl::CBasePRNG::get01((anl::CBasePRNG *)v46);
      v37 = anl::CBasePRNG::get01((anl::CBasePRNG *)v46);
      v40 = anl::CBasePRNG::get01((anl::CBasePRNG *)v46);
      v42 = anl::CBasePRNG::get01((anl::CBasePRNG *)v46);
      v43 = anl::CBasePRNG::get01((anl::CBasePRNG *)v46);
      v44 = anl::CBasePRNG::get01((anl::CBasePRNG *)v46);
      v21 = *(_DWORD *)(v45 + 16);
      v22 = COERCE_DOUBLE(
              ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v21 + 24))(
                v21,
                *(_DWORD *)(*(_DWORD *)v21 + 24),
                COERCE_UNSIGNED_INT64(v20 * 4.0 - 2.0),
                HIDWORD(COERCE_UNSIGNED_INT64(v20 * 4.0 - 2.0)),
                COERCE_UNSIGNED_INT64(v37 * 4.0 - 2.0),
                HIDWORD(COERCE_UNSIGNED_INT64(v37 * 4.0 - 2.0)),
                COERCE_UNSIGNED_INT64(v40 * 4.0 - 2.0),
                HIDWORD(COERCE_UNSIGNED_INT64(v40 * 4.0 - 2.0)),
                COERCE_UNSIGNED_INT64(v42 * 4.0 - 2.0),
                HIDWORD(COERCE_UNSIGNED_INT64(v42 * 4.0 - 2.0)),
                COERCE_UNSIGNED_INT64(v43 * 4.0 - 2.0),
                HIDWORD(COERCE_UNSIGNED_INT64(v43 * 4.0 - 2.0)),
                COERCE_UNSIGNED_INT64(v44 * 4.0 - 2.0),
                HIDWORD(COERCE_UNSIGNED_INT64(v44 * 4.0 - 2.0))));
      if ( v22 < v33 )
        v33 = v22;
      if ( v22 <= v29 )
        v22 = v29;
      if ( --v19 == 0 )
        break;
      v29 = v22;
    }
    v23 = *(double *)(v45 + 24);
    v24 = (*(double *)(v45 + 32) - v23) / (v22 - v33);
    *(double *)(v45 + 88) = v24;
    this = v23 - v33 * v24;
    *(double *)(v45 + 96) = this;
  }
  return LODWORD(this);
}

