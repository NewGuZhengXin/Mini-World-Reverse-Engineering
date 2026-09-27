// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: LandSelectNoise

//======================================================================
// LandSelectNoise::~LandSelectNoise()
// address: 0x002EFFB8   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN15LandSelectNoiseD1Ev'
void __fastcall LandSelectNoise::~LandSelectNoise(LandSelectNoise *this)
{
  *(_DWORD *)this = &off_462280;
}


//======================================================================
// LandSelectNoise::get(double,double)
// address: 0x002EFFC8   size: 0x6 (6 bytes)
//======================================================================
__int64 __fastcall LandSelectNoise::get(LandSelectNoise *this, double a2, double a3)
{
  return 0;
}


//======================================================================
// LandSelectNoise::get(double,double,double,double)
// address: 0x002EFFD8   size: 0x6 (6 bytes)
//======================================================================
__int64 __fastcall LandSelectNoise::get(LandSelectNoise *this, double a2, double a3, double a4, double a5)
{
  return 0;
}


//======================================================================
// LandSelectNoise::get(double,double,double,double,double,double)
// address: 0x002EFFE8   size: 0x6 (6 bytes)
//======================================================================
__int64 __fastcall LandSelectNoise::get(
        LandSelectNoise *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  return 0;
}


//======================================================================
// LandSelectNoise::~LandSelectNoise()
// address: 0x002F0044   size: 0x12 (18 bytes)
//======================================================================
void __fastcall LandSelectNoise::~LandSelectNoise(LandSelectNoise *this)
{
  LandSelectNoise::~LandSelectNoise(this);
  operator delete(this);
}


//======================================================================
// LandSelectNoise::LandSelectNoise(anl::CImplicitModuleBase *,anl::CImplicitModuleBase *)
// address: 0x002F01D0   size: 0x25A (602 bytes)
//======================================================================
// Alternative name is '_ZN15LandSelectNoiseC2EPN3anl19CImplicitModuleBaseES2_'
void __fastcall LandSelectNoise::LandSelectNoise(
        LandSelectNoise *this,
        anl::CImplicitModuleBase *a2,
        anl::CImplicitModuleBase *a3)
{
  NoiseManager *v4; // r0
  LandSelectNoise *v5; // r6
  anl::CImplicitTranslateDomain *TranslateDomain; // r0
  int v7; // r3
  int v8; // [sp+28h] [bp-14h]
  int i; // [sp+2Ch] [bp-10h]
  anl::CImplicitGradient *Gradient; // [sp+30h] [bp-Ch]

  *((_DWORD *)this + 2) = -350469331;
  *((_DWORD *)this + 3) = 1058682594;
  *(_DWORD *)this = &off_4622C0;
  v4 = (NoiseManager *)g_NoiseMgr;
  *((_DWORD *)this + 13) = a2;
  *((_DWORD *)this + 14) = a3;
  *((_DWORD *)this + 4) = NoiseManager::createFrac(v4, 2u, 2, 0, 0.25, -0.45, -0.325, 1.0, 0.0);
  *((_DWORD *)this + 5) = NoiseManager::createFrac(
                            (NoiseManager *)g_NoiseMgr,
                            0,
                            4,
                            1068079513,
                            2.0,
                            -0.45,
                            0.05,
                            1.0,
                            0.0);
  *((_DWORD *)this + 6) = NoiseManager::createFrac(
                            (NoiseManager *)g_NoiseMgr,
                            1u,
                            8,
                            1069128089,
                            1.0,
                            -0.45,
                            0.05,
                            1.0,
                            0.1);
  *((_DWORD *)this + 7) = NoiseManager::createFrac(
                            (NoiseManager *)g_NoiseMgr,
                            2u,
                            2,
                            1067030937,
                            0.25,
                            -0.1,
                            0.025,
                            1.0,
                            0.0);
  *((_DWORD *)this + 8) = NoiseManager::createFrac(
                            (NoiseManager *)g_NoiseMgr,
                            0,
                            4,
                            -1076887552,
                            2.0,
                            -0.25,
                            0.25,
                            1.0,
                            0.0);
  *((_DWORD *)this + 9) = NoiseManager::createFrac(
                            (NoiseManager *)g_NoiseMgr,
                            1u,
                            8,
                            1070596096,
                            1.0,
                            -0.35,
                            0.35,
                            1.0,
                            0.25);
  *((_DWORD *)this + 10) = NoiseManager::createFrac(
                             (NoiseManager *)g_NoiseMgr,
                             2u,
                             2,
                             1071120384,
                             0.25,
                             0.25,
                             0.375,
                             1.0,
                             0.0);
  *((_DWORD *)this + 11) = NoiseManager::createFrac(
                             (NoiseManager *)g_NoiseMgr,
                             0,
                             4,
                             1071434956,
                             2.0,
                             -0.05,
                             0.45,
                             1.0,
                             0.0);
  *((_DWORD *)this + 12) = NoiseManager::createFrac(
                             (NoiseManager *)g_NoiseMgr,
                             1u,
                             8,
                             1071644672,
                             1.0,
                             -0.45,
                             0.45,
                             1.0,
                             0.5);
  Gradient = NoiseManager::createGradient((NoiseManager *)g_NoiseMgr, 0.0, 0.0, 0.0, 1.0);
  v5 = this;
  for ( i = 0; i != 3; ++i )
  {
    v8 = 0;
    do
    {
      TranslateDomain = NoiseManager::createTranslateDomain(
                          (NoiseManager *)g_NoiseMgr,
                          Gradient,
                          nullptr,
                          *(anl::CImplicitModuleBase **)((char *)v5 + v8 + 16));
      v7 = v8;
      *(_DWORD *)((char *)v5 + v8 + 16) = TranslateDomain;
      v8 += 4;
    }
    while ( v7 != 8 );
    v5 = (LandSelectNoise *)((char *)v5 + 12);
  }
  *((_DWORD *)this + 18) = 1610612736;
  *((_DWORD *)this + 19) = 1072064102;
  *((_DWORD *)this + 22) = 1610612736;
  *((_DWORD *)this + 23) = 1072064102;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 1071644672;
  *((_DWORD *)this + 20) = 0x40000000;
  *((_DWORD *)this + 21) = 1070805811;
  *((_DWORD *)this + 24) = -1610612736;
  *((_DWORD *)this + 25) = 1069128089;
  *((_DWORD *)this + 26) = -1610612736;
  *((_DWORD *)this + 27) = 1069128089;
  *((_DWORD *)this + 28) = -1610612736;
  *((_DWORD *)this + 29) = 1069128089;
  *((_DWORD *)this + 30) = -1610612736;
  *((_DWORD *)this + 31) = 1069128089;
}


//======================================================================
// LandSelectNoise::getBlendParam(int,double,int &,int &,double &)
// address: 0x002F04F0   size: 0x166 (358 bytes)
//======================================================================
int __fastcall LandSelectNoise::getBlendParam(LandSelectNoise *this, int a2, double a3, int *a4, int *a5, double *a6)
{
  double *v6; // r5
  double v7; // r6
  double v8; // r6
  double v9; // r0
  double v10; // r2
  double v11; // r4
  double v12; // r0
  double v13; // r2
  double v14; // r6
  double v17; // [sp+8h] [bp-14h]
  double v18; // [sp+8h] [bp-14h]
  double v19; // [sp+10h] [bp-Ch]
  double v20; // [sp+10h] [bp-Ch]

  v6 = (double *)((char *)this + 16 * a2);
  v7 = v6[8];
  v17 = v6[12];
  v19 = v7 + v17;
  if ( a3 >= v7 + v17 )
  {
    *a4 = 1;
    HIDWORD(v13) = *((_DWORD *)v6 + 27);
    LODWORD(v20) = *((_DWORD *)v6 + 26);
    __SET_PAIR__(HIDWORD(v20), LODWORD(v13), *((_QWORD *)v6 + 13));
    v18 = v6[9] - v13;
    LODWORD(v9) = a3 < v18;
    if ( a3 >= v18 )
    {
      v14 = v6[9] + v20;
      LODWORD(v9) = a3 < v14;
      if ( a3 < v14 )
      {
        *a5 = 2;
        v10 = v18;
        v11 = a3 - v18;
        v12 = v14;
        goto LABEL_7;
      }
      *a4 = 2;
    }
LABEL_9:
    *a5 = -1;
    *a6 = 0.0;
    return LODWORD(v9);
  }
  v8 = v7 - v17;
  *a4 = 0;
  LODWORD(v9) = a3 < v8;
  if ( a3 < v8 )
    goto LABEL_9;
  *a5 = 1;
  v10 = v8;
  v11 = a3 - v8;
  v12 = v19;
LABEL_7:
  v9 = v11
     / (v12 - v10)
     * (v11
      / (v12 - v10))
     * (v11
      / (v12 - v10))
     * (v11 / (v12 - v10) * (v11 / (v12 - v10) * 6.0 - 15.0) + 10.0);
  *a6 = v9;
  return LODWORD(v9);
}


//======================================================================
// LandSelectNoise::get(double,double,double)
// address: 0x002F0678   size: 0x202 (514 bytes)
//======================================================================
double __fastcall LandSelectNoise::get(LandSelectNoise *this, double a2, double a3, double a4)
{
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  double v10; // r6
  double v12; // [sp+10h] [bp-5Ch]
  double v13; // [sp+10h] [bp-5Ch]
  double v15; // [sp+28h] [bp-44h]
  double v16; // [sp+28h] [bp-44h]
  double v17; // [sp+30h] [bp-3Ch]
  double v18; // [sp+38h] [bp-34h]
  double v19; // [sp+40h] [bp-2Ch]
  int v20; // [sp+48h] [bp-24h] BYREF
  int v21; // [sp+4Ch] [bp-20h] BYREF
  int v22; // [sp+50h] [bp-1Ch] BYREF
  int v23; // [sp+54h] [bp-18h] BYREF
  double v24; // [sp+58h] [bp-14h] BYREF
  double v25; // [sp+60h] [bp-Ch] BYREF

  v12 = COERCE_DOUBLE(
          ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(**((_DWORD **)this + 14) + 16))(
            *((_DWORD *)this + 14),
            *(_DWORD *)(**((_DWORD **)this + 14) + 16),
            LODWORD(a2),
            HIDWORD(a2),
            0,
            0,
            LODWORD(a4),
            HIDWORD(a4)));
  v15 = COERCE_DOUBLE(
          ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(**((_DWORD **)this + 13) + 16))(
            *((_DWORD *)this + 13),
            *(_DWORD *)(**((_DWORD **)this + 13) + 16),
            LODWORD(a2),
            HIDWORD(a2),
            0,
            0,
            LODWORD(a4),
            HIDWORD(a4)));
  LandSelectNoise::getBlendParam(this, 0, v12, &v20, &v21, &v24);
  LandSelectNoise::getBlendParam(this, 1, v15, &v22, &v23, &v25);
  v17 = 1.0 - v24;
  v18 = 1.0 - v25;
  v6 = *((_DWORD *)this + 3 * v22 + v20 + 4);
  v19 = COERCE_DOUBLE(
          ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v6 + 16))(
            v6,
            *(_DWORD *)(*(_DWORD *)v6 + 16),
            LODWORD(a2),
            HIDWORD(a2),
            LODWORD(a3),
            HIDWORD(a3),
            LODWORD(a4),
            HIDWORD(a4)));
  v13 = 0.0;
  if ( v21 > 0 )
  {
    v7 = *((_DWORD *)this + 3 * v22 + v21 + 4);
    v13 = COERCE_DOUBLE(
            ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v7 + 16))(
              v7,
              *(_DWORD *)(*(_DWORD *)v7 + 16),
              LODWORD(a2),
              HIDWORD(a2),
              LODWORD(a3),
              HIDWORD(a3),
              LODWORD(a4),
              HIDWORD(a4)));
  }
  if ( v23 <= 0 )
  {
    v10 = 0.0;
    v16 = 0.0;
  }
  else
  {
    v8 = *((_DWORD *)this + 3 * v23 + v20 + 4);
    v16 = COERCE_DOUBLE(
            ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v8 + 16))(
              v8,
              *(_DWORD *)(*(_DWORD *)v8 + 16),
              LODWORD(a2),
              HIDWORD(a2),
              LODWORD(a3),
              HIDWORD(a3),
              LODWORD(a4),
              HIDWORD(a4)));
    if ( v21 <= 0 )
    {
      v10 = 0.0;
    }
    else
    {
      v9 = *((_DWORD *)this + 3 * v23 + v21 + 4);
      v10 = COERCE_DOUBLE(
              ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v9 + 16))(
                v9,
                *(_DWORD *)(*(_DWORD *)v9 + 16),
                LODWORD(a2),
                HIDWORD(a2),
                LODWORD(a3),
                HIDWORD(a3),
                LODWORD(a4),
                HIDWORD(a4)));
    }
  }
  return v19 * v17 * v18 + v13 * v24 * v18 + v16 * v17 * v25 + v10 * v24 * v25;
}

