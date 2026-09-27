// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: NoiseManager

//======================================================================
// NoiseManager::NoiseManager(void)
// address: 0x002E1D94   size: 0x5A (90 bytes)
//======================================================================
// Alternative name is '_ZN12NoiseManagerC1Ev'
void __fastcall NoiseManager::NoiseManager(NoiseManager *this)
{
  anl::CMWC4096 *v2; // r0
  anl::CMWC4096 *v3; // r5
  _DWORD *v4; // r5

  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  g_NoiseMgr = (int)this;
  v2 = (anl::CMWC4096 *)operator new(0x4008u);
  *(_DWORD *)v2 = &off_461620;
  v3 = v2;
  anl::CMWC4096::setSeed(v2, 10000);
  *(_DWORD *)this = v3;
  v4 = (_DWORD *)operator new(0x14u);
  *v4 = &off_461638;
  anl::KISS::setSeed(v4, 0x2710u);
  *((_DWORD *)this + 1) = v4;
}


//======================================================================
// NoiseManager::~NoiseManager()
// address: 0x002E1E2C   size: 0x3E (62 bytes)
//======================================================================
// Alternative name is '_ZN12NoiseManagerD1Ev'
void __fastcall NoiseManager::~NoiseManager(NoiseManager *this)
{
  int v2; // r0
  int v3; // r0
  void *v4; // r0
  void *v5; // r0

  v2 = *(_DWORD *)this;
  if ( v2 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  v3 = *((_DWORD *)this + 1);
  if ( v3 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  v4 = *((void **)this + 7);
  g_NoiseMgr = 0;
  if ( v4 != nullptr )
    operator delete(v4);
  v5 = *((void **)this + 4);
  if ( v5 != nullptr )
    operator delete(v5);
}


//======================================================================
// NoiseManager::setRandSeed(unsigned int,unsigned int)
// address: 0x002E1E70   size: 0x20 (32 bytes)
//======================================================================
int __fastcall NoiseManager::setRandSeed(NoiseManager *this, unsigned int a2, unsigned int a3)
{
  int result; // r0

  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)this + 12))(*(_DWORD *)this);
  result = (*(int (__fastcall **)(_DWORD, unsigned int))(**((_DWORD **)this + 1) + 12))(*((_DWORD *)this + 1), a3);
  *((_DWORD *)this + 2) = a2;
  *((_DWORD *)this + 3) = a3;
  return result;
}


//======================================================================
// NoiseManager::genSeed(void)
// address: 0x002E1E90   size: 0x1A (26 bytes)
//======================================================================
int __fastcall NoiseManager::genSeed(NoiseManager *this)
{
  int v2; // r5

  v2 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)this + 8))(*(_DWORD *)this);
  return (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 1) + 8))(*((_DWORD *)this + 1)) + v2;
}


//======================================================================
// NoiseManager::getChunkRandSeed(int,int)
// address: 0x002E1EAA   size: 0xC (12 bytes)
//======================================================================
int __fastcall NoiseManager::getChunkRandSeed(NoiseManager *this, int a2, int a3)
{
  return a2 * *((_DWORD *)this + 2) + a3 * *((_DWORD *)this + 3);
}


//======================================================================
// NoiseManager::findACCache(unsigned int,int,double,double,double)
// address: 0x002E1EB8   size: 0x68 (104 bytes)
//======================================================================
int __fastcall NoiseManager::findACCache(
        NoiseManager *this,
        unsigned int a2,
        int a3,
        int a4,
        double a5,
        double a6,
        double a7)
{
  int v7; // r4
  int v8; // r5
  int v10; // [sp+4h] [bp-8h]

  v7 = *((_DWORD *)this + 7);
  v8 = 0;
  v10 = -1431655765 * ((*((_DWORD *)this + 8) - v7) >> 5);
  while ( 1 )
  {
    if ( v8 == v10 )
      return 0;
    if ( *(_DWORD *)v7 == a2
      && *(_DWORD *)(v7 + 4) == a3
      && *(double *)(v7 + 8) == a5
      && *(double *)(v7 + 16) == a6
      && *(double *)(v7 + 24) == a7 )
    {
      break;
    }
    ++v8;
    v7 += 96;
  }
  return v7;
}


//======================================================================
// NoiseManager::saveACCache(char const*)
// address: 0x002E1F24   size: 0x52 (82 bytes)
//======================================================================
__int64 __fastcall NoiseManager::saveACCache(__int64 this, int a2)
{
  int v2; // r5
  int v3; // r4
  __int64 v5; // [sp+0h] [bp-Ch] BYREF
  int v6; // [sp+8h] [bp-4h]

  v5 = this;
  v6 = a2;
  v2 = this;
  if ( *(_DWORD *)(this + 28) != *(_DWORD *)(this + 32) )
  {
    v3 = Ogre::FileManager::openFile(
           (Ogre::FileManager *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton,
           (char *)HIDWORD(this),
           0);
    if ( v3 != 0 )
    {
      HIDWORD(v5) = -1431655765 * ((*(_DWORD *)(v2 + 32) - *(_DWORD *)(v2 + 28)) >> 5);
      (*(void (__fastcall **)(int, char *, int))(*(_DWORD *)v3 + 12))(v3, (char *)&v5 + 4, 4);
      (*(void (__fastcall **)(int, _DWORD, int))(*(_DWORD *)v3 + 12))(v3, *(_DWORD *)(v2 + 28), 96 * HIDWORD(v5));
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
    }
  }
  return v5;
}


//======================================================================
// NoiseManager::dumpModule(anl::CImplicitModuleBase *,char const*,int,int,double,double,double)
// address: 0x002E2010   size: 0xE8 (232 bytes)
//======================================================================
void __fastcall NoiseManager::dumpModule(
        NoiseManager *this,
        anl::CImplicitModuleBase *a2,
        const char *a3,
        int a4,
        int a5,
        double a6,
        double a7,
        double a8)
{
  _DWORD v11[3]; // [sp+1Ch] [bp-70h] BYREF
  _QWORD v12[3]; // [sp+28h] [bp-64h] BYREF
  double v13; // [sp+40h] [bp-4Ch]
  double v14; // [sp+48h] [bp-44h]
  int v15; // [sp+50h] [bp-3Ch]
  int v16; // [sp+54h] [bp-38h]
  int v17; // [sp+58h] [bp-34h]
  int v18; // [sp+5Ch] [bp-30h]
  int v19; // [sp+60h] [bp-2Ch]
  int v20; // [sp+64h] [bp-28h]
  int v21; // [sp+68h] [bp-24h]
  int v22; // [sp+6Ch] [bp-20h]
  int v23; // [sp+70h] [bp-1Ch]
  int v24; // [sp+74h] [bp-18h]
  int v25; // [sp+78h] [bp-14h]
  int v26; // [sp+7Ch] [bp-10h]
  int v27; // [sp+80h] [bp-Ch]
  int v28; // [sp+84h] [bp-8h]

  anl::TArray2D<double>::TArray2D(v11, a4, a5);
  v21 = 0;
  v22 = -1074790400;
  v19 = 0;
  v20 = -1074790400;
  v17 = 0;
  v18 = -1074790400;
  v12[2] = 0xBFF0000000000000LL;
  v27 = 0;
  v28 = 1072693248;
  v25 = 0;
  v26 = 1072693248;
  v23 = 0;
  v24 = 1072693248;
  v15 = 0;
  v16 = 1072693248;
  v14 = 1.0;
  v13 = 1.0;
  *(double *)v12 = a6;
  *(double *)&v12[1] = a7;
  if ( a4 < a5 )
    v14 = (double)a5 / (double)a4;
  else
    v13 = (double)a4 / (double)a5;
  v13 = v13 + a6;
  v14 = v14 + a7;
  anl::map2D(0, v11, a2, v12, LODWORD(a8), HIDWORD(a8));
  anl::saveDoubleArray(a3, v11);
  anl::TArray2D<double>::destroy((int)v11);
}


//======================================================================
// NoiseManager::dumpModule(anl::CImplicitModuleBase *,unsigned char *,int,int,double,double,double)
// address: 0x002E2118   size: 0x142 (322 bytes)
//======================================================================
void __fastcall NoiseManager::dumpModule(
        NoiseManager *this,
        anl::CImplicitModuleBase *a2,
        unsigned __int8 *a3,
        int a4,
        int a5,
        double a6,
        double a7,
        double a8)
{
  int v9; // r5
  int v10; // r6
  int i; // r4
  double v12; // r0
  int v13; // [sp+Ch] [bp-88h]
  int v15; // [sp+14h] [bp-80h]
  int v17; // [sp+18h] [bp-7Ch]
  int v18; // [sp+1Ch] [bp-78h]
  _DWORD v19[3]; // [sp+24h] [bp-70h] BYREF
  _QWORD v20[2]; // [sp+30h] [bp-64h] BYREF
  int v21; // [sp+40h] [bp-54h]
  int v22; // [sp+44h] [bp-50h]
  double v23; // [sp+48h] [bp-4Ch]
  double v24; // [sp+50h] [bp-44h]
  int v25; // [sp+58h] [bp-3Ch]
  int v26; // [sp+5Ch] [bp-38h]
  int v27; // [sp+60h] [bp-34h]
  int v28; // [sp+64h] [bp-30h]
  int v29; // [sp+68h] [bp-2Ch]
  int v30; // [sp+6Ch] [bp-28h]
  int v31; // [sp+70h] [bp-24h]
  int v32; // [sp+74h] [bp-20h]
  int v33; // [sp+78h] [bp-1Ch]
  int v34; // [sp+7Ch] [bp-18h]
  int v35; // [sp+80h] [bp-14h]
  int v36; // [sp+84h] [bp-10h]
  int v37; // [sp+88h] [bp-Ch]
  int v38; // [sp+8Ch] [bp-8h]

  anl::TArray2D<double>::TArray2D(v19, a4, a5);
  v31 = 0;
  v32 = -1074790400;
  v29 = 0;
  v30 = -1074790400;
  v27 = 0;
  v28 = -1074790400;
  v21 = 0;
  v22 = -1074790400;
  v37 = 0;
  v38 = 1072693248;
  v35 = 0;
  v36 = 1072693248;
  v33 = 0;
  v34 = 1072693248;
  v25 = 0;
  v26 = 1072693248;
  v24 = 1.0;
  v23 = 1.0;
  *(double *)v20 = a6;
  *(double *)&v20[1] = a7;
  if ( a4 < a5 )
    v24 = (double)a5 / (double)a4;
  else
    v23 = (double)a4 / (double)a5;
  v23 = v23 + a6;
  v24 = v24 + a7;
  anl::map2D(0, v19, a2, v20, LODWORD(a8), HIDWORD(a8));
  v9 = 0;
  v13 = v19[1];
  v17 = v19[2];
  v15 = v19[0];
  v10 = v19[0];
  v18 = 8 * v19[1];
  while ( v9 < a5 )
  {
    for ( i = 0; i < a4; ++i )
    {
      if ( i < v13 && v9 < v17 && v15 != 0 )
        v12 = *(double *)(v10 + 8 * i);
      else
        v12 = 0.0;
      a3[i] = (unsigned int)(v12 * 255.0);
    }
    ++v9;
    a3 += a4;
    v10 += v18;
  }
  anl::TArray2D<double>::destroy((int)v19);
}


//======================================================================
// NoiseManager::addModule(anl::CImplicitModuleBase *)
// address: 0x002E2308   size: 0x24 (36 bytes)
//======================================================================
__int64 __fastcall NoiseManager::addModule(__int64 this, int a2)
{
  _DWORD *v2; // r3
  __int64 v4; // [sp+0h] [bp-Ch] BYREF
  int v5; // [sp+8h] [bp-4h]

  v4 = this;
  v5 = a2;
  v2 = *(_DWORD **)(this + 20);
  if ( v2 == *(_DWORD **)(this + 24) )
  {
    std::vector<anl::CImplicitModuleBase *>::_M_emplace_back_aux<anl::CImplicitModuleBase * const&>(
      this + 16,
      (_DWORD *)&v4 + 1);
  }
  else
  {
    if ( v2 != nullptr )
      *v2 = HIDWORD(this);
    *(_DWORD *)(this + 20) += 4;
  }
  return v4;
}


//======================================================================
// NoiseManager::createLandSel(anl::CImplicitModuleBase *,anl::CImplicitModuleBase *)
// address: 0x002E232C   size: 0x24 (36 bytes)
//======================================================================
LandSelectNoise *__fastcall NoiseManager::createLandSel(
        NoiseManager *this,
        anl::CImplicitModuleBase *a2,
        anl::CImplicitModuleBase *a3)
{
  LandSelectNoise *v6; // r4
  int v7; // r2

  v6 = (LandSelectNoise *)operator new(0x80u);
  LandSelectNoise::LandSelectNoise(v6, a2, a3);
  NoiseManager::addModule(__SPAIR64__((unsigned int)v6, (unsigned int)this), v7);
  return v6;
}


//======================================================================
// NoiseManager::createLandSel2(anl::CImplicitModuleBase *,anl::CImplicitModuleBase *)
// address: 0x002E235A   size: 0x24 (36 bytes)
//======================================================================
LandSelectNoise2 *__fastcall NoiseManager::createLandSel2(
        NoiseManager *this,
        anl::CImplicitModuleBase *a2,
        anl::CImplicitModuleBase *a3)
{
  LandSelectNoise2 *v6; // r4
  int v7; // r2

  v6 = (LandSelectNoise2 *)operator new(0x30u);
  LandSelectNoise2::LandSelectNoise2(v6, a2, a3);
  NoiseManager::addModule(__SPAIR64__((unsigned int)v6, (unsigned int)this), v7);
  return v6;
}


//======================================================================
// NoiseManager::createGradient(double,double,double,double)
// address: 0x002E2388   size: 0x6A (106 bytes)
//======================================================================
anl::CImplicitGradient *__fastcall NoiseManager::createGradient(
        NoiseManager *this,
        double a2,
        double a3,
        double a4,
        double a5)
{
  anl::CImplicitGradient *v8; // r6
  int v9; // r2

  v8 = (anl::CImplicitGradient *)operator new(0xA8u);
  anl::CImplicitGradient::CImplicitGradient(v8);
  anl::CImplicitGradient::setGradient(v8, a2, a3, a4, a5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
  NoiseManager::addModule(__SPAIR64__((unsigned int)v8, (unsigned int)this), v9);
  return v8;
}


//======================================================================
// NoiseManager::createCache(anl::CImplicitModuleBase *)
// address: 0x002E2408   size: 0x28 (40 bytes)
//======================================================================
anl::CImplicitCache *__fastcall NoiseManager::createCache(NoiseManager *this, anl::CImplicitModuleBase *a2)
{
  anl::CImplicitCache *v4; // r4
  int v5; // r2

  v4 = (anl::CImplicitCache *)operator new(0x120u);
  anl::CImplicitCache::CImplicitCache(v4);
  anl::CImplicitCache::setSource(v4, a2);
  NoiseManager::addModule(__SPAIR64__((unsigned int)v4, (unsigned int)this), v5);
  return v4;
}


//======================================================================
// NoiseManager::createSelect(anl::CImplicitModuleBase *,double,double,double)
// address: 0x002E243A   size: 0x48 (72 bytes)
//======================================================================
anl::CImplicitSelect *__fastcall NoiseManager::createSelect(
        NoiseManager *this,
        anl::CImplicitModuleBase *a2,
        double a3,
        double a4,
        double a5)
{
  anl::CImplicitSelect *v7; // r6
  int v8; // r2

  v7 = (anl::CImplicitSelect *)operator new(0x60u);
  anl::CImplicitSelect::CImplicitSelect(v7);
  anl::CImplicitSelect::setThreshold(v7, a3);
  anl::CImplicitSelect::setLowSource(v7, a4);
  anl::CImplicitSelect::setHighSource(v7, a5);
  anl::CImplicitSelect::setControlSource(v7, a2);
  NoiseManager::addModule(__SPAIR64__((unsigned int)v7, (unsigned int)this), v8);
  return v7;
}


//======================================================================
// NoiseManager::createBias(anl::CImplicitModuleBase *,double)
// address: 0x002E248C   size: 0x2E (46 bytes)
//======================================================================
anl::CImplicitBias *__fastcall NoiseManager::createBias(NoiseManager *this, anl::CImplicitModuleBase *a2, double a3)
{
  anl::CImplicitBias *v5; // r6
  int v6; // r2

  v5 = (anl::CImplicitBias *)operator new(0x30u);
  anl::CImplicitBias::CImplicitBias(v5, a3);
  anl::CImplicitBias::setSource(v5, a2);
  NoiseManager::addModule(__SPAIR64__((unsigned int)v5, (unsigned int)this), v6);
  return v5;
}


//======================================================================
// NoiseManager::createCombiner(anl::ECombinerTypes,anl::CImplicitModuleBase *,anl::CImplicitModuleBase *,anl::CImplicitModuleBase *,anl::CImplicitModuleBase *)
// address: 0x002E24C4   size: 0x64 (100 bytes)
//======================================================================
anl::CImplicitCombiner *__fastcall NoiseManager::createCombiner(
        unsigned int a1,
        unsigned int a2,
        anl::CImplicitModuleBase *a3,
        anl::CImplicitModuleBase *a4,
        anl::CImplicitModuleBase *a5,
        anl::CImplicitModuleBase *a6)
{
  anl::CImplicitCombiner *v9; // r4
  int v10; // r2

  v9 = (anl::CImplicitCombiner *)operator new(0x68u);
  anl::CImplicitCombiner::CImplicitCombiner(v9, a2);
  anl::CImplicitCombiner::setSource(v9, 0, a3);
  anl::CImplicitCombiner::setSource(v9, 1, a4);
  if ( a5 != nullptr )
    anl::CImplicitCombiner::setSource(v9, 2, a5);
  if ( a6 != nullptr )
    anl::CImplicitCombiner::setSource(v9, 3, a6);
  NoiseManager::addModule(__SPAIR64__((unsigned int)v9, a1), v10);
  return v9;
}


//======================================================================
// NoiseManager::createTranslateDomain(anl::CImplicitModuleBase *,anl::CImplicitModuleBase *,anl::CImplicitModuleBase *)
// address: 0x002E2528   size: 0x4E (78 bytes)
//======================================================================
anl::CImplicitTranslateDomain *__fastcall NoiseManager::createTranslateDomain(
        NoiseManager *this,
        anl::CImplicitModuleBase *a2,
        anl::CImplicitModuleBase *a3,
        anl::CImplicitModuleBase *a4)
{
  anl::CImplicitTranslateDomain *v7; // r4
  int v8; // r2

  v7 = (anl::CImplicitTranslateDomain *)operator new(0x80u);
  anl::CImplicitTranslateDomain::CImplicitTranslateDomain(v7);
  anl::CImplicitTranslateDomain::setSource(v7, a2);
  if ( a3 != nullptr )
    anl::CImplicitTranslateDomain::setXAxisSource(v7, a3);
  if ( a4 != nullptr )
    anl::CImplicitTranslateDomain::setYAxisSource(v7, a4);
  NoiseManager::addModule(__SPAIR64__((unsigned int)v7, (unsigned int)this), v8);
  return v7;
}


//======================================================================
// NoiseManager::createConstant(double)
// address: 0x002E2576   size: 0x24 (36 bytes)
//======================================================================
anl::CImplicitConstant *__fastcall NoiseManager::createConstant(NoiseManager *this, double a2)
{
  anl::CImplicitConstant *v5; // r6
  int v6; // r2

  v5 = (anl::CImplicitConstant *)operator new(0x18u);
  anl::CImplicitConstant::CImplicitConstant(v5, a2);
  NoiseManager::addModule(__SPAIR64__((unsigned int)v5, (unsigned int)this), v6);
  return v5;
}


//======================================================================
// NoiseManager::newACCache(unsigned int,int,double,double,double)
// address: 0x002E26C4   size: 0x3E (62 bytes)
//======================================================================
int __fastcall NoiseManager::newACCache(
        NoiseManager *this,
        unsigned int a2,
        int a3,
        int a4,
        double a5,
        double a6,
        double a7)
{
  int v9; // r3
  int v10; // r2
  __int64 v12; // r0
  int result; // r0

  v9 = *((_DWORD *)this + 7);
  v10 = *((_DWORD *)this + 8);
  LODWORD(v12) = (char *)this + 28;
  HIDWORD(v12) = -1431655765 * ((v10 - v9) >> 5) + 1;
  std::vector<AutoCorrectCache>::resize(v12);
  result = *((_DWORD *)this + 8) - 96;
  *(double *)(result + 8) = a5;
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = a3;
  *(double *)(result + 16) = a6;
  *(double *)(result + 24) = a7;
  return result;
}


//======================================================================
// NoiseManager::createFrac(unsigned int,int,double,double,double,double,double)
// address: 0x002E2708   size: 0x1DC (476 bytes)
//======================================================================
anl::CImplicitFractal *__fastcall NoiseManager::createFrac(
        NoiseManager *this,
        unsigned int a2,
        int a3,
        int a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  anl::CImplicitFractal *v11; // r6
  void (__fastcall *v12)(anl::CImplicitFractal *, int); // r4
  int v13; // r0
  int v14; // r2
  anl::CImplicitAutoCorrect *v15; // r4
  _DWORD *ACCache; // r0
  int v17; // r3
  int v18; // r3
  int v19; // r3
  int v20; // r3
  int v21; // r3
  int v22; // r3
  int v23; // r3
  int v24; // r2
  int v25; // r3
  _DWORD *v26; // r5
  int v27; // r3
  int v28; // r3
  int v29; // r3
  int v30; // r3
  int v31; // r3
  int v32; // r3
  int v33; // r3
  int v34; // r3
  anl::CImplicitScaleDomain *v35; // r7
  int v36; // r2

  v11 = (anl::CImplicitFractal *)operator new(0x1170u);
  anl::CImplicitFractal::CImplicitFractal(v11, a2, 1u, 2u);
  v12 = *(void (__fastcall **)(anl::CImplicitFractal *, int))(*(_DWORD *)v11 + 8);
  v13 = NoiseManager::genSeed(this);
  v12(v11, v13);
  anl::CImplicitFractal::setFrequency(v11, a5);
  anl::CImplicitFractal::setNumOctaves(v11, a3);
  NoiseManager::addModule(__SPAIR64__((unsigned int)v11, (unsigned int)this), v14);
  if ( a6 != 0.0 || a7 != 0.0 )
  {
    v15 = (anl::CImplicitAutoCorrect *)operator new(0x68u);
    anl::CImplicitAutoCorrect::CImplicitAutoCorrect(v15, a6, a7);
    anl::CImplicitAutoCorrect::setSource(v15, v11);
    ACCache = (_DWORD *)NoiseManager::findACCache(this, a2, a3, SHIDWORD(a7), a5, a6, a7);
    if ( ACCache != nullptr )
    {
      v17 = ACCache[11];
      *((_DWORD *)v15 + 12) = ACCache[10];
      *((_DWORD *)v15 + 13) = v17;
      v18 = ACCache[9];
      *((_DWORD *)v15 + 10) = ACCache[8];
      *((_DWORD *)v15 + 11) = v18;
      v19 = ACCache[15];
      *((_DWORD *)v15 + 16) = ACCache[14];
      *((_DWORD *)v15 + 17) = v19;
      v20 = ACCache[13];
      *((_DWORD *)v15 + 14) = ACCache[12];
      *((_DWORD *)v15 + 15) = v20;
      v21 = ACCache[19];
      *((_DWORD *)v15 + 20) = ACCache[18];
      *((_DWORD *)v15 + 21) = v21;
      v22 = ACCache[17];
      *((_DWORD *)v15 + 18) = ACCache[16];
      *((_DWORD *)v15 + 19) = v22;
      v23 = ACCache[23];
      *((_DWORD *)v15 + 24) = ACCache[22];
      *((_DWORD *)v15 + 25) = v23;
      v24 = ACCache[20];
      v25 = ACCache[21];
      *((_DWORD *)v15 + 22) = v24;
      *((_DWORD *)v15 + 23) = v25;
    }
    else
    {
      v26 = (_DWORD *)NoiseManager::newACCache(this, a2, a3, SHIDWORD(a7), a5, a6, a7);
      anl::CImplicitAutoCorrect::calculate(v15);
      v27 = *((_DWORD *)v15 + 13);
      v26[10] = *((_DWORD *)v15 + 12);
      v26[11] = v27;
      v28 = *((_DWORD *)v15 + 11);
      v26[8] = *((_DWORD *)v15 + 10);
      v26[9] = v28;
      v29 = *((_DWORD *)v15 + 17);
      v26[14] = *((_DWORD *)v15 + 16);
      v26[15] = v29;
      v30 = *((_DWORD *)v15 + 15);
      v26[12] = *((_DWORD *)v15 + 14);
      v26[13] = v30;
      v31 = *((_DWORD *)v15 + 21);
      v26[18] = *((_DWORD *)v15 + 20);
      v26[19] = v31;
      v32 = *((_DWORD *)v15 + 19);
      v26[16] = *((_DWORD *)v15 + 18);
      v26[17] = v32;
      v33 = *((_DWORD *)v15 + 25);
      v26[22] = *((_DWORD *)v15 + 24);
      v26[23] = v33;
      v24 = *((_DWORD *)v15 + 22);
      v34 = *((_DWORD *)v15 + 23);
      v26[20] = v24;
      v26[21] = v34;
    }
    NoiseManager::addModule(__SPAIR64__((unsigned int)v15, (unsigned int)this), v24);
    v11 = v15;
  }
  if ( a8 != 1.0 || a9 != 1.0 )
  {
    v35 = (anl::CImplicitScaleDomain *)operator new(0x80u);
    anl::CImplicitScaleDomain::CImplicitScaleDomain(v35, a8, a9, 1.0, 1.0, 1.0, 1.0);
    anl::CImplicitScaleDomain::setSource(v35, v11);
    NoiseManager::addModule(__SPAIR64__((unsigned int)v35, (unsigned int)this), v36);
    return v35;
  }
  return v11;
}


//======================================================================
// NoiseManager::createTerrainNoise(void)
// address: 0x002E2900   size: 0x6E (110 bytes)
//======================================================================
anl::CImplicitTranslateDomain *__fastcall NoiseManager::createTerrainNoise(NoiseManager *this)
{
  anl::CImplicitModuleBase *Frac; // r0
  anl::CImplicitTranslateDomain *TranslateDomain; // r4
  int v4; // r2
  anl::CImplicitGradient *Gradient; // [sp+2Ch] [bp-8h]

  Gradient = NoiseManager::createGradient((NoiseManager *)g_NoiseMgr, 0.0, 0.0, 0.0, 1.0);
  Frac = NoiseManager::createFrac((NoiseManager *)g_NoiseMgr, 0, 8, 1072693248, 2.0, 0.0, 1.0, 1.0, 0.0);
  TranslateDomain = NoiseManager::createTranslateDomain((NoiseManager *)g_NoiseMgr, Gradient, nullptr, Frac);
  NoiseManager::addModule(__SPAIR64__((unsigned int)TranslateDomain, (unsigned int)this), v4);
  return TranslateDomain;
}


//======================================================================
// NoiseManager::loadACCache(char const*)
// address: 0x002E2990   size: 0x44 (68 bytes)
//======================================================================
__int64 __fastcall NoiseManager::loadACCache(__int64 this, int a2)
{
  int v2; // r5
  int v3; // r0
  int v4; // r4
  __int64 v5; // r0
  __int64 v7; // [sp+0h] [bp-Ch] BYREF
  int v8; // [sp+8h] [bp-4h]

  v7 = this;
  v8 = a2;
  v2 = this;
  v3 = Ogre::FileManager::openFile(
         (Ogre::FileManager *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton,
         (char *)HIDWORD(this),
         1);
  v4 = v3;
  if ( v3 != 0 )
  {
    (*(void (__fastcall **)(int, char *, int))(*(_DWORD *)v3 + 8))(v3, (char *)&v7 + 4, 4);
    LODWORD(v5) = v2 + 28;
    HIDWORD(v5) = HIDWORD(v7);
    std::vector<AutoCorrectCache>::resize(v5);
    (*(void (__fastcall **)(int, _DWORD, int))(*(_DWORD *)v4 + 8))(v4, *(_DWORD *)(v2 + 28), 96 * HIDWORD(v7));
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
  }
  return v7;
}

