// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: LandSelectNoise2

//======================================================================
// LandSelectNoise2::get(double,double)
// address: 0x002EFFF8   size: 0x6 (6 bytes)
//======================================================================
__int64 __fastcall LandSelectNoise2::get(LandSelectNoise2 *this, double a2, double a3)
{
  return 0;
}


//======================================================================
// LandSelectNoise2::get(double,double,double,double)
// address: 0x002F0008   size: 0x6 (6 bytes)
//======================================================================
__int64 __fastcall LandSelectNoise2::get(LandSelectNoise2 *this, double a2, double a3, double a4, double a5)
{
  return 0;
}


//======================================================================
// LandSelectNoise2::get(double,double,double,double,double,double)
// address: 0x002F0018   size: 0x6 (6 bytes)
//======================================================================
__int64 __fastcall LandSelectNoise2::get(
        LandSelectNoise2 *this,
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
// LandSelectNoise2::get(double,double,double)
// address: 0x002F0058   size: 0x112 (274 bytes)
//======================================================================
int __fastcall LandSelectNoise2::get(LandSelectNoise2 *this, double a2, double a3, double a4)
{
  int v5; // r4
  double v8; // kr00_8
  char *BiomeDef; // r0
  char *v10; // r6
  int v11; // r0
  double v12; // [sp+10h] [bp-1Ch]
  double v13; // [sp+10h] [bp-1Ch]
  DefManager *v14; // [sp+1Ch] [bp-10h]

  v5 = *((_DWORD *)this + 10);
  if ( v5 != 0 )
    return (*(int (__fastcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v5 + 16))(
             v5,
             *(_DWORD *)(*(_DWORD *)v5 + 16),
             LODWORD(a2),
             HIDWORD(a2),
             LODWORD(a3),
             HIDWORD(a3),
             LODWORD(a4),
             HIDWORD(a4));
  v8 = COERCE_DOUBLE(
         ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(**((_DWORD **)this + 4) + 16))(
           *((_DWORD *)this + 4),
           *(_DWORD *)(**((_DWORD **)this + 4) + 16),
           LODWORD(a2),
           HIDWORD(a2),
           0,
           0,
           LODWORD(a4),
           HIDWORD(a4)));
  v12 = COERCE_DOUBLE(
          ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(**((_DWORD **)this + 5) + 16))(
            *((_DWORD *)this + 5),
            *(_DWORD *)(**((_DWORD **)this + 5) + 16),
            LODWORD(a2),
            HIDWORD(a2),
            0,
            0,
            LODWORD(a4),
            HIDWORD(a4)));
  BiomeDef = DefManager::getBiomeDef(
               (DefManager *)Ogre::Singleton<DefManager>::ms_Singleton,
               (int)(v8 * 100.0),
               (int)(v12 * 100.0));
  v13 = 0.0;
  v10 = BiomeDef;
  v14 = nullptr;
  do
  {
    if ( *(_DWORD *)v10 == 0 )
      break;
    v11 = *(_DWORD *)(4 * **(_DWORD **)v10 + *((_DWORD *)this + 7));
    v10 += 4;
    v13 = v13
        + COERCE_DOUBLE(
            ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v11 + 16))(
              v11,
              *(_DWORD *)(*(_DWORD *)v11 + 16),
              LODWORD(a2),
              HIDWORD(a2),
              LODWORD(a3),
              HIDWORD(a3),
              LODWORD(a4),
              HIDWORD(a4)))
        * *((float *)v10 + 3);
    v14 = (DefManager *)((char *)v14 + 1);
  }
  while ( v14 != (DefManager *)&byte_4 );
  return LODWORD(v13);
}


//======================================================================
// LandSelectNoise2::~LandSelectNoise2()
// address: 0x002F0188   size: 0x26 (38 bytes)
//======================================================================
// Alternative name is '_ZN16LandSelectNoise2D1Ev'
void __fastcall LandSelectNoise2::~LandSelectNoise2(LandSelectNoise2 *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_4622E8;
  v2 = *((void **)this + 7);
  if ( v2 != nullptr )
    operator delete(v2);
  *(_DWORD *)this = &off_462280;
}


//======================================================================
// LandSelectNoise2::~LandSelectNoise2()
// address: 0x002F01B8   size: 0x12 (18 bytes)
//======================================================================
void __fastcall LandSelectNoise2::~LandSelectNoise2(LandSelectNoise2 *this)
{
  LandSelectNoise2::~LandSelectNoise2(this);
  operator delete(this);
}


//======================================================================
// LandSelectNoise2::initBiomeModule(void)
// address: 0x002F0890   size: 0x2 (2 bytes)
//======================================================================
void __fastcall LandSelectNoise2::initBiomeModule(LandSelectNoise2 *this)
{
  ;
}


//======================================================================
// LandSelectNoise2::LandSelectNoise2(anl::CImplicitModuleBase *,anl::CImplicitModuleBase *)
// address: 0x002F0898   size: 0x5C (92 bytes)
//======================================================================
// Alternative name is '_ZN16LandSelectNoise2C2EPN3anl19CImplicitModuleBaseES2_'
void __fastcall LandSelectNoise2::LandSelectNoise2(
        LandSelectNoise2 *this,
        anl::CImplicitModuleBase *a2,
        anl::CImplicitModuleBase *a3)
{
  NoiseManager *v4; // r0

  *(_DWORD *)this = &off_4622E8;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 2) = -350469331;
  *((_DWORD *)this + 3) = 1058682594;
  *((_DWORD *)this + 4) = a2;
  v4 = (NoiseManager *)g_NoiseMgr;
  *((_DWORD *)this + 5) = a3;
  *((_DWORD *)this + 6) = NoiseManager::createGradient(v4, 0.0, 0.0, 0.0, 1.0);
  LandSelectNoise2::initBiomeModule(this);
}


//======================================================================
// LandSelectNoise2::initSingleBiome(int,int,float,int,int,float)
// address: 0x002F0930   size: 0x80 (128 bytes)
//======================================================================
anl::CImplicitTranslateDomain *__fastcall LandSelectNoise2::initSingleBiome(
        anl::CImplicitModuleBase **this,
        unsigned int a2,
        int a3,
        float a4,
        int a5,
        int a6,
        float a7)
{
  anl::CImplicitModuleBase *Frac; // r0
  anl::CImplicitTranslateDomain *result; // r0

  Frac = NoiseManager::createFrac(
           (NoiseManager *)g_NoiseMgr,
           a2,
           a3,
           1072693248,
           a4,
           (double)a5 * 0.0078125 - 0.5,
           (double)a6 * 0.0078125 - 0.5,
           1.0,
           a7);
  result = NoiseManager::createTranslateDomain((NoiseManager *)g_NoiseMgr, *(this + 6), nullptr, Frac);
  *(this + 10) = result;
  return result;
}

