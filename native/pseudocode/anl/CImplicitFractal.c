// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CImplicitFractal

//======================================================================
// anl::CImplicitFractal::setSeed(unsigned int)
// address: 0x0031771E   size: 0x26 (38 bytes)
//======================================================================
int __fastcall anl::CImplicitFractal::setSeed(anl::CImplicitFractal *this, unsigned int a2)
{
  int i; // r4
  _DWORD *v5; // r3
  int v6; // r1
  int result; // r0

  for ( i = 0; i != 80; i += 4 )
  {
    v5 = (_DWORD *)((char *)this + i + 3856);
    v6 = 75 * i + a2;
    result = (*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)*v5 + 8))(*v5, v6);
  }
  return result;
}


//======================================================================
// anl::CImplicitFractal::~CImplicitFractal()
// address: 0x00317744   size: 0x36 (54 bytes)
//======================================================================
// Alternative name is '_ZN3anl16CImplicitFractalD1Ev'
void __fastcall anl::CImplicitFractal::~CImplicitFractal(anl::CImplicitFractal *this)
{
  char *v2; // r6
  char *i; // r5

  *(_DWORD *)this = &off_463630;
  v2 = (char *)this + 16;
  for ( i = (char *)this + 3856; i != v2; (**(void (__fastcall ***)(char *))i)(i) )
    i -= 192;
  *(_DWORD *)this = &off_462280;
}


//======================================================================
// anl::CImplicitFractal::~CImplicitFractal()
// address: 0x00317784   size: 0x12 (18 bytes)
//======================================================================
void __fastcall anl::CImplicitFractal::~CImplicitFractal(anl::CImplicitFractal *this)
{
  anl::CImplicitFractal::~CImplicitFractal(this);
  operator delete(this);
}


//======================================================================
// anl::CImplicitFractal::setNumOctaves(int)
// address: 0x00317798   size: 0xE (14 bytes)
//======================================================================
int __fastcall anl::CImplicitFractal::setNumOctaves(int this, int a2)
{
  if ( a2 > 19 )
    a2 = 19;
  *(_DWORD *)(this + 4456) = a2;
  return this;
}


//======================================================================
// anl::CImplicitFractal::setFrequency(double)
// address: 0x003177AC   size: 0xA (10 bytes)
//======================================================================
double *__fastcall anl::CImplicitFractal::setFrequency(anl::CImplicitFractal *this, double a2)
{
  double *result; // r0

  result = (double *)((char *)this + 4440);
  *result = a2;
  return result;
}


//======================================================================
// anl::CImplicitFractal::setLacunarity(double)
// address: 0x003177BC   size: 0xC (12 bytes)
//======================================================================
double *__fastcall anl::CImplicitFractal::setLacunarity(anl::CImplicitFractal *this, double a2)
{
  double *result; // r0

  result = (double *)((char *)this + 4448);
  *result = a2;
  return result;
}


//======================================================================
// anl::CImplicitFractal::setGain(double)
// address: 0x003177C8   size: 0xA (10 bytes)
//======================================================================
double *__fastcall anl::CImplicitFractal::setGain(anl::CImplicitFractal *this, double a2)
{
  double *result; // r0

  result = (double *)((char *)this + 4424);
  *result = a2;
  return result;
}


//======================================================================
// anl::CImplicitFractal::setOffset(double)
// address: 0x003177D8   size: 0xC (12 bytes)
//======================================================================
double *__fastcall anl::CImplicitFractal::setOffset(anl::CImplicitFractal *this, double a2)
{
  double *result; // r0

  result = (double *)((char *)this + 4416);
  *result = a2;
  return result;
}


//======================================================================
// anl::CImplicitFractal::setH(double)
// address: 0x003177E4   size: 0xA (10 bytes)
//======================================================================
double *__fastcall anl::CImplicitFractal::setH(anl::CImplicitFractal *this, double a2)
{
  double *result; // r0

  result = (double *)((char *)this + 4432);
  *result = a2;
  return result;
}


//======================================================================
// anl::CImplicitFractal::setAllSourceTypes(unsigned int,unsigned int)
// address: 0x003177F4   size: 0x2C (44 bytes)
//======================================================================
unsigned __int64 __fastcall anl::CImplicitFractal::setAllSourceTypes(
        anl::CImplicitFractal *this,
        int a2,
        unsigned int a3)
{
  int i; // r4
  unsigned __int64 v7; // [sp+0h] [bp-Ch]

  v7 = __PAIR64__(a3, (unsigned int)this);
  for ( i = 0; i != 3840; i += 192 )
  {
    anl::CImplicitBasisFunction::setType((anl::CImplicitFractal *)((char *)this + i + 16), a2);
    anl::CImplicitBasisFunction::setInterp((anl::CImplicitFractal *)((char *)this + i + 16), SHIDWORD(v7));
  }
  return v7;
}


//======================================================================
// anl::CImplicitFractal::setSourceType(int,unsigned int,unsigned int)
// address: 0x00317820   size: 0x22 (34 bytes)
//======================================================================
int __fastcall anl::CImplicitFractal::setSourceType(int this, unsigned int a2, int a3, int a4)
{
  anl::CImplicitBasisFunction *v5; // r4

  if ( a2 <= 0x13 )
  {
    v5 = (anl::CImplicitBasisFunction *)(this + 192 * a2 + 16);
    anl::CImplicitBasisFunction::setType(v5, a3);
    return anl::CImplicitBasisFunction::setInterp(v5, a4);
  }
  return this;
}


//======================================================================
// anl::CImplicitFractal::overrideSource(int,anl::CImplicitModuleBase *)
// address: 0x00317842   size: 0x12 (18 bytes)
//======================================================================
int __fastcall anl::CImplicitFractal::overrideSource(int this, unsigned int a2, anl::CImplicitModuleBase *a3)
{
  if ( a2 <= 0x13 )
    *(_DWORD *)(4 * (a2 + 964) + this) = a3;
  return this;
}


//======================================================================
// anl::CImplicitFractal::resetSource(int)
// address: 0x00317854   size: 0x1A (26 bytes)
//======================================================================
int __fastcall anl::CImplicitFractal::resetSource(int this, unsigned int a2)
{
  if ( a2 <= 0x13 )
    *(_DWORD *)(4 * (a2 + 964) + this) = this + 192 * a2 + 16;
  return this;
}


//======================================================================
// anl::CImplicitFractal::resetAllSources(void)
// address: 0x0031786E   size: 0x1C (28 bytes)
//======================================================================
int __fastcall anl::CImplicitFractal::resetAllSources(int this)
{
  int v1; // r2
  int i; // r3
  _DWORD *v3; // r1

  v1 = this + 16;
  for ( i = 0; i != 80; i += 4 )
  {
    v3 = (_DWORD *)(this + i + 3856);
    *v3 = v1;
    v1 += 192;
  }
  return this;
}


//======================================================================
// anl::CImplicitFractal::getBasis(int)
// address: 0x0031788A   size: 0x14 (20 bytes)
//======================================================================
char *__fastcall anl::CImplicitFractal::getBasis(anl::CImplicitFractal *this, unsigned int a2)
{
  if ( a2 > 0x13 )
    return nullptr;
  else
    return (char *)this + 192 * a2 + 16;
}


//======================================================================
// anl::CImplicitFractal::fBm_calcWeights(void)
// address: 0x003178A0   size: 0xDC (220 bytes)
//======================================================================
double __fastcall anl::CImplicitFractal::fBm_calcWeights(anl::CImplicitFractal *this)
{
  int i; // r7
  double v3; // r0
  double *v4; // r3
  anl::CImplicitFractal *v5; // r7
  double v6; // r4
  double v7; // r0
  double result; // r0
  double v9; // [sp+0h] [bp-1Ch]
  int v10; // [sp+Ch] [bp-10h]
  double v11; // [sp+10h] [bp-Ch]

  for ( i = 0; i != -20; --i )
  {
    v3 = j_pow(*((double *)this + 556), (double)i * *((double *)this + 554));
    v4 = (double *)((char *)this - 8 * i + 3936);
    *v4 = v3;
  }
  v9 = 0.0;
  v10 = 0;
  v5 = this;
  v6 = 0.0;
  do
  {
    v11 = *(double *)((char *)this + v10 + 3936);
    v6 = v6 - v11;
    v9 = v9 + v11;
    v7 = 2.0 / (v9 - v6);
    *((double *)v5 + 512) = v7;
    LODWORD(v11) = (char *)v5 + 4104;
    result = -1.0 - v6 * v7;
    v5 = (anl::CImplicitFractal *)((char *)v5 + 16);
    *(double *)LODWORD(v11) = result;
    v10 += 8;
  }
  while ( v10 != 160 );
  return result;
}


//======================================================================
// anl::CImplicitFractal::RidgedMulti_calcWeights(void)
// address: 0x003179A0   size: 0x126 (294 bytes)
//======================================================================
double __fastcall anl::CImplicitFractal::RidgedMulti_calcWeights(anl::CImplicitFractal *this)
{
  int i; // r7
  double v3; // r0
  double *v4; // r3
  anl::CImplicitFractal *v5; // r7
  double v6; // r4
  double v7; // r0
  double result; // r0
  double v9; // [sp+0h] [bp-2Ch]
  int v10; // [sp+Ch] [bp-20h]
  double *v11; // [sp+10h] [bp-1Ch]
  double v12; // [sp+18h] [bp-14h]
  double v13; // [sp+20h] [bp-Ch]

  for ( i = 0; i != -20; --i )
  {
    v3 = j_pow(*((double *)this + 556), (double)i * *((double *)this + 554));
    v4 = (double *)((char *)this - 8 * i + 3936);
    *v4 = v3;
  }
  v12 = (*((double *)this + 552) - 1.0) * (*((double *)this + 552) - 1.0);
  v13 = *((double *)this + 552) * *((double *)this + 552);
  v9 = 0.0;
  v10 = 0;
  v5 = this;
  v6 = 0.0;
  do
  {
    v6 = v6 + v12 * *(double *)((char *)this + v10 + 3936);
    v9 = v9 + v13 * *(double *)((char *)this + v10 + 3936);
    v7 = 2.0 / (v9 - v6);
    *((double *)v5 + 512) = v7;
    v11 = (double *)((char *)v5 + 4104);
    result = -1.0 - v6 * v7;
    v5 = (anl::CImplicitFractal *)((char *)v5 + 16);
    *v11 = result;
    v10 += 8;
  }
  while ( v10 != 160 );
  return result;
}


//======================================================================
// anl::CImplicitFractal::DeCarpentierSwiss_calcWeights(void)
// address: 0x00317AF0   size: 0x126 (294 bytes)
//======================================================================
double __fastcall anl::CImplicitFractal::DeCarpentierSwiss_calcWeights(anl::CImplicitFractal *this)
{
  int i; // r7
  double v3; // r0
  double *v4; // r3
  anl::CImplicitFractal *v5; // r7
  double v6; // r4
  double v7; // r0
  double result; // r0
  double v9; // [sp+0h] [bp-2Ch]
  int v10; // [sp+Ch] [bp-20h]
  double *v11; // [sp+10h] [bp-1Ch]
  double v12; // [sp+18h] [bp-14h]
  double v13; // [sp+20h] [bp-Ch]

  for ( i = 0; i != -20; --i )
  {
    v3 = j_pow(*((double *)this + 556), (double)i * *((double *)this + 554));
    v4 = (double *)((char *)this - 8 * i + 3936);
    *v4 = v3;
  }
  v12 = (*((double *)this + 552) - 1.0) * (*((double *)this + 552) - 1.0);
  v13 = *((double *)this + 552) * *((double *)this + 552);
  v9 = 0.0;
  v10 = 0;
  v5 = this;
  v6 = 0.0;
  do
  {
    v6 = v6 + v12 * *(double *)((char *)this + v10 + 3936);
    v9 = v9 + v13 * *(double *)((char *)this + v10 + 3936);
    v7 = 2.0 / (v9 - v6);
    *((double *)v5 + 512) = v7;
    v11 = (double *)((char *)v5 + 4104);
    result = -1.0 - v6 * v7;
    v5 = (anl::CImplicitFractal *)((char *)v5 + 16);
    *v11 = result;
    v10 += 8;
  }
  while ( v10 != 160 );
  return result;
}


//======================================================================
// anl::CImplicitFractal::Billow_calcWeights(void)
// address: 0x00317C40   size: 0xDC (220 bytes)
//======================================================================
double __fastcall anl::CImplicitFractal::Billow_calcWeights(anl::CImplicitFractal *this)
{
  int i; // r7
  double v3; // r0
  double *v4; // r3
  anl::CImplicitFractal *v5; // r7
  double v6; // r4
  double v7; // r0
  double result; // r0
  double v9; // [sp+0h] [bp-1Ch]
  int v10; // [sp+Ch] [bp-10h]
  double v11; // [sp+10h] [bp-Ch]

  for ( i = 0; i != -20; --i )
  {
    v3 = j_pow(*((double *)this + 556), (double)i * *((double *)this + 554));
    v4 = (double *)((char *)this - 8 * i + 3936);
    *v4 = v3;
  }
  v9 = 0.0;
  v10 = 0;
  v5 = this;
  v6 = 0.0;
  do
  {
    v11 = *(double *)((char *)this + v10 + 3936);
    v6 = v6 - v11;
    v9 = v9 + v11;
    v7 = 2.0 / (v9 - v6);
    *((double *)v5 + 512) = v7;
    LODWORD(v11) = (char *)v5 + 4104;
    result = -1.0 - v6 * v7;
    v5 = (anl::CImplicitFractal *)((char *)v5 + 16);
    *(double *)LODWORD(v11) = result;
    v10 += 8;
  }
  while ( v10 != 160 );
  return result;
}


//======================================================================
// anl::CImplicitFractal::Multi_calcWeights(void)
// address: 0x00317D40   size: 0xF4 (244 bytes)
//======================================================================
double __fastcall anl::CImplicitFractal::Multi_calcWeights(anl::CImplicitFractal *this)
{
  int i; // r7
  double v3; // r0
  double *v4; // r3
  anl::CImplicitFractal *v5; // r7
  double v6; // r4
  double v7; // r0
  double result; // r0
  double v9; // [sp+0h] [bp-1Ch]
  int v10; // [sp+Ch] [bp-10h]
  double *v11; // [sp+10h] [bp-Ch]

  for ( i = 0; i != -20; --i )
  {
    v3 = j_pow(*((double *)this + 556), (double)i * *((double *)this + 554));
    v4 = (double *)((char *)this - 8 * i + 3936);
    *v4 = v3;
  }
  v9 = 1.0;
  v10 = 0;
  v5 = this;
  v6 = 1.0;
  do
  {
    v6 = v6 * (1.0 - *(double *)((char *)this + v10 + 3936));
    v9 = v9 * (*(double *)((char *)this + v10 + 3936) + 1.0);
    v7 = 2.0 / (v9 - v6);
    *((double *)v5 + 512) = v7;
    v11 = (double *)((char *)v5 + 4104);
    result = -1.0 - v6 * v7;
    v5 = (anl::CImplicitFractal *)((char *)v5 + 16);
    *v11 = result;
    v10 += 8;
  }
  while ( v10 != 160 );
  return result;
}


//======================================================================
// anl::CImplicitFractal::HybridMulti_calcWeights(void)
// address: 0x00317E58   size: 0x208 (520 bytes)
//======================================================================
double __fastcall anl::CImplicitFractal::HybridMulti_calcWeights(anl::CImplicitFractal *this)
{
  int i; // r7
  double v3; // r0
  double *v4; // r3
  double v5; // r0
  int v6; // r7
  double *v7; // r3
  double v8; // r0
  double result; // r0
  double v10; // [sp+0h] [bp-4Ch]
  double v11; // [sp+8h] [bp-44h]
  double v12; // [sp+10h] [bp-3Ch]
  double v13; // [sp+18h] [bp-34h]
  double v14; // [sp+20h] [bp-2Ch]
  double v15; // [sp+28h] [bp-24h]
  anl::CImplicitFractal *v16; // [sp+34h] [bp-18h]
  double v17; // [sp+38h] [bp-14h]
  double v18; // [sp+40h] [bp-Ch]

  for ( i = 0; i != -20; --i )
  {
    v3 = j_pow(*((double *)this + 556), (double)i * *((double *)this + 554));
    v4 = (double *)((char *)this - 8 * i + 3936);
    *v4 = v3;
  }
  v12 = *((double *)this + 552) - 1.0;
  v13 = *((double *)this + 552) + 1.0;
  v14 = *((double *)this + 553);
  v10 = v14 * v12;
  v11 = v14 * v13;
  v5 = 2.0 / (v13 - v12);
  *((double *)this + 512) = v5;
  *((double *)this + 513) = -1.0 - v12 * v5;
  v17 = v13;
  v15 = v12;
  v16 = this;
  v6 = 0;
  do
  {
    if ( v10 > 1.0 )
      v10 = 1.0;
    if ( v11 > 1.0 )
      v11 = 1.0;
    v7 = (double *)((char *)this + v6);
    v6 += 8;
    v18 = v7[493];
    v15 = v15 + v12 * v18 * v10;
    v10 = v10 * (v14 * (v12 * v18));
    v17 = v17 + v13 * v18 * v11;
    v11 = v11 * (v14 * (v13 * v18));
    v8 = 2.0 / (v17 - v15);
    *((double *)v16 + 514) = v8;
    result = -1.0 - v15 * v8;
    *((double *)v16 + 515) = result;
    v16 = (anl::CImplicitFractal *)((char *)v16 + 16);
  }
  while ( v6 != 152 );
  return result;
}


//======================================================================
// anl::CImplicitFractal::setType(unsigned int)
// address: 0x00318090   size: 0xF4 (244 bytes)
//======================================================================
double __fastcall anl::CImplicitFractal::setType(anl::CImplicitFractal *this, unsigned int a2)
{
  _DWORD *v2; // r7
  _DWORD *v3; // r6
  _DWORD *v4; // r5
  double result; // r0

  *((_DWORD *)this + 1115) = a2;
  v2 = (_DWORD *)((char *)this + 4432);
  v3 = (_DWORD *)((char *)this + 4424);
  v4 = (_DWORD *)((char *)this + 4416);
  switch ( a2 )
  {
    case 0u:
      *v2 = 0;
      *((_DWORD *)this + 1109) = 1072693248;
      *v3 = 0;
      *((_DWORD *)this + 1107) = 1071644672;
      goto LABEL_9;
    case 1u:
      *v2 = -858993459;
      *((_DWORD *)this + 1109) = 1072483532;
      *v3 = 0;
      *((_DWORD *)this + 1107) = 1071644672;
      *v4 = 0;
      *((_DWORD *)this + 1105) = 1072693248;
      result = anl::CImplicitFractal::RidgedMulti_calcWeights(this);
      break;
    case 2u:
      *v2 = 0;
      *((_DWORD *)this + 1109) = 1072693248;
      *v3 = 0;
      *((_DWORD *)this + 1107) = 1071644672;
      *v4 = 0;
      *((_DWORD *)this + 1105) = 0;
      result = anl::CImplicitFractal::Billow_calcWeights(this);
      break;
    case 3u:
      *v2 = 0;
      *((_DWORD *)this + 1109) = 1072693248;
      *v4 = 0;
      *((_DWORD *)this + 1105) = 0;
      *v3 = 0;
      *((_DWORD *)this + 1107) = 0;
      result = anl::CImplicitFractal::Multi_calcWeights(this);
      break;
    case 4u:
      *v2 = 0;
      *((_DWORD *)this + 1109) = 1070596096;
      *v3 = 0;
      *((_DWORD *)this + 1107) = 1072693248;
      *v4 = 1717986918;
      *((_DWORD *)this + 1105) = 1072064102;
      result = anl::CImplicitFractal::HybridMulti_calcWeights(this);
      break;
    case 5u:
      *v2 = -858993459;
      *((_DWORD *)this + 1109) = 1072483532;
      *v3 = 858993459;
      *((_DWORD *)this + 1107) = 1071854387;
      *v4 = 858993459;
      *((_DWORD *)this + 1105) = 1069757235;
      result = anl::CImplicitFractal::DeCarpentierSwiss_calcWeights(this);
      break;
    default:
      *v2 = 0;
      *((_DWORD *)this + 1109) = 1072693248;
      *v3 = 0;
      *((_DWORD *)this + 1107) = 0;
LABEL_9:
      *v4 = 0;
      *((_DWORD *)this + 1105) = 0;
      result = anl::CImplicitFractal::fBm_calcWeights(this);
      break;
  }
  return result;
}


//======================================================================
// anl::CImplicitFractal::CImplicitFractal(unsigned int,unsigned int,unsigned int)
// address: 0x003181D8   size: 0x74 (116 bytes)
//======================================================================
// Alternative name is '_ZN3anl16CImplicitFractalC2Ejjj'
anl::CImplicitFractal *__fastcall anl::CImplicitFractal::CImplicitFractal(
        anl::CImplicitFractal *this,
        unsigned int a2,
        int a3,
        unsigned int a4)
{
  anl::CImplicitBasisFunction *v5; // r6
  int v6; // r7

  *((_DWORD *)this + 2) = -350469331;
  *((_DWORD *)this + 3) = 1058682594;
  *(_DWORD *)this = &off_463630;
  v5 = (anl::CImplicitFractal *)((char *)this + 16);
  v6 = 19;
  do
  {
    anl::CImplicitBasisFunction::CImplicitBasisFunction(v5);
    v5 = (anl::CImplicitBasisFunction *)((char *)v5 + 192);
  }
  while ( v6-- != 0 );
  anl::CImplicitFractal::setNumOctaves((int)this, 8);
  anl::CImplicitFractal::setFrequency(this, 1.0);
  anl::CImplicitFractal::setLacunarity(this, 2.0);
  anl::CImplicitFractal::setType(this, a2);
  anl::CImplicitFractal::setAllSourceTypes(this, a3, a4);
  anl::CImplicitFractal::resetAllSources((int)this);
  return this;
}


//======================================================================
// anl::CImplicitFractal::fBm_get(double,double)
// address: 0x003182A8   size: 0xC8 (200 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitFractal::fBm_get(anl::CImplicitFractal *this, double a2, double a3)
{
  unsigned int v5; // r7
  double v6; // r4
  double v7; // r0
  double v8; // r4
  int v9; // r0
  double v11; // [sp+8h] [bp-24h]
  double v12; // [sp+10h] [bp-1Ch]
  double v13; // [sp+18h] [bp-14h]
  double v14; // [sp+20h] [bp-Ch]

  v5 = 0;
  v6 = *((double *)this + 555);
  v12 = a2 * v6;
  v7 = a3 * v6;
  v8 = 0.0;
  v13 = v7;
  v14 = 1.0;
  while ( v5 < *((_DWORD *)this + 1114) )
  {
    v9 = *((_DWORD *)this + v5++ + 964);
    v8 = v8
       + COERCE_DOUBLE(
           ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v9 + 12))(
             v9,
             *(_DWORD *)(*(_DWORD *)v9 + 12),
             LODWORD(v12),
             HIDWORD(v12),
             LODWORD(v13),
             HIDWORD(v13)))
       * v14;
    v14 = v14 * *((double *)this + 553);
    v11 = *((double *)this + 556);
    v12 = v12 * v11;
    v13 = v13 * v11;
  }
  return *(_QWORD *)&v8;
}


//======================================================================
// anl::CImplicitFractal::fBm_get(double,double,double)
// address: 0x00318390   size: 0xF0 (240 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitFractal::fBm_get(anl::CImplicitFractal *this, double a2, double a3, double a4)
{
  unsigned int v6; // r7
  double v7; // r4
  double v8; // r4
  double v10; // [sp+10h] [bp-2Ch]
  double v11; // [sp+18h] [bp-24h]
  double v12; // [sp+20h] [bp-1Ch]
  double v13; // [sp+28h] [bp-14h]
  double v14; // [sp+30h] [bp-Ch]

  v6 = 0;
  v7 = *((double *)this + 555);
  v10 = a2 * v7;
  v11 = a3 * v7;
  v12 = a4 * v7;
  v14 = 1.0;
  v13 = 0.0;
  while ( v6 < *((_DWORD *)this + 1114) )
  {
    v13 = v13
        + COERCE_DOUBLE(
            ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(**((_DWORD **)this + v6 + 964) + 16))(
              *((_DWORD *)this + v6 + 964),
              *(_DWORD *)(**((_DWORD **)this + v6 + 964) + 16),
              LODWORD(v10),
              HIDWORD(v10),
              LODWORD(v11),
              HIDWORD(v11),
              LODWORD(v12),
              HIDWORD(v12)))
        * v14;
    v8 = *((double *)this + 556);
    v14 = v14 * *((double *)this + 553);
    v10 = v10 * v8;
    v11 = v11 * v8;
    ++v6;
    v12 = v12 * v8;
  }
  return *(_QWORD *)&v13;
}


//======================================================================
// anl::CImplicitFractal::fBm_get(double,double,double,double)
// address: 0x003184A0   size: 0x118 (280 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitFractal::fBm_get(
        anl::CImplicitFractal *this,
        double a2,
        double a3,
        double a4,
        double a5)
{
  unsigned int v7; // r7
  double v8; // r4
  double v9; // r4
  double v11; // [sp+18h] [bp-34h]
  double v12; // [sp+20h] [bp-2Ch]
  double v13; // [sp+28h] [bp-24h]
  double v14; // [sp+30h] [bp-1Ch]
  double v15; // [sp+38h] [bp-14h]
  double v16; // [sp+40h] [bp-Ch]

  v7 = 0;
  v8 = *((double *)this + 555);
  v11 = a2 * v8;
  v12 = a3 * v8;
  v13 = a4 * v8;
  v14 = a5 * v8;
  v16 = 1.0;
  v15 = 0.0;
  while ( v7 < *((_DWORD *)this + 1114) )
  {
    v15 = v15
        + COERCE_DOUBLE(
            ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(**((_DWORD **)this + v7 + 964) + 20))(
              *((_DWORD *)this + v7 + 964),
              *(_DWORD *)(**((_DWORD **)this + v7 + 964) + 20),
              LODWORD(v11),
              HIDWORD(v11),
              LODWORD(v12),
              HIDWORD(v12),
              LODWORD(v13),
              HIDWORD(v13),
              LODWORD(v14),
              HIDWORD(v14)))
        * v16;
    v9 = *((double *)this + 556);
    v16 = v16 * *((double *)this + 553);
    v11 = v11 * v9;
    v12 = v12 * v9;
    v13 = v13 * v9;
    ++v7;
    v14 = v14 * v9;
  }
  return *(_QWORD *)&v15;
}


//======================================================================
// anl::CImplicitFractal::fBm_get(double,double,double,double,double,double)
// address: 0x003185D8   size: 0x118 (280 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitFractal::fBm_get(
        anl::CImplicitFractal *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  unsigned int v9; // r7
  double v10; // r4
  double v11; // r4
  double v13; // [sp+18h] [bp-34h]
  double v14; // [sp+20h] [bp-2Ch]
  double v15; // [sp+28h] [bp-24h]
  double v16; // [sp+30h] [bp-1Ch]
  double v17; // [sp+38h] [bp-14h]
  double v18; // [sp+40h] [bp-Ch]

  v9 = 0;
  v10 = *((double *)this + 555);
  v13 = a2 * v10;
  v14 = a3 * v10;
  v15 = a4 * v10;
  v16 = a5 * v10;
  v18 = 1.0;
  v17 = 0.0;
  while ( v9 < *((_DWORD *)this + 1114) )
  {
    v17 = v17
        + COERCE_DOUBLE(
            ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(**((_DWORD **)this + v9 + 964) + 20))(
              *((_DWORD *)this + v9 + 964),
              *(_DWORD *)(**((_DWORD **)this + v9 + 964) + 20),
              LODWORD(v13),
              HIDWORD(v13),
              LODWORD(v14),
              HIDWORD(v14),
              LODWORD(v15),
              HIDWORD(v15),
              LODWORD(v16),
              HIDWORD(v16)))
        * v18;
    v11 = *((double *)this + 556);
    v18 = v18 * *((double *)this + 553);
    v13 = v13 * v11;
    v14 = v14 * v11;
    v15 = v15 * v11;
    ++v9;
    v16 = v16 * v11;
  }
  return *(_QWORD *)&v17;
}


//======================================================================
// anl::CImplicitFractal::Multi_get(double,double)
// address: 0x00318710   size: 0xDC (220 bytes)
//======================================================================
double __fastcall anl::CImplicitFractal::Multi_get(anl::CImplicitFractal *this, double a2, double a3)
{
  unsigned int v5; // r7
  double v6; // r4
  unsigned int v7; // r3
  double v8; // r0
  double v9; // r4
  double v11; // [sp+8h] [bp-1Ch]
  double v12; // [sp+10h] [bp-14h]
  double v13; // [sp+18h] [bp-Ch]

  v5 = 0;
  v6 = *((double *)this + 555);
  v11 = a2 * v6;
  v12 = a3 * v6;
  v13 = 1.0;
  while ( 1 )
  {
    v7 = *((_DWORD *)this + 1114);
    if ( v5 >= v7 )
      break;
    v8 = ((double (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(**((_DWORD **)this
                                                                                              + v5
                                                                                              + 964)
                                                                                           + 12))(
           *((_DWORD *)this + v5 + 964),
           *(_DWORD *)(**((_DWORD **)this + v5 + 964) + 12),
           LODWORD(v11),
           HIDWORD(v11),
           LODWORD(v12),
           HIDWORD(v12))
       * *(double *)((char *)this + 4 * v5 + 4 * v5 + 3936);
    v9 = *((double *)this + 556);
    v13 = v13 * (v8 + 1.0);
    v11 = v11 * v9;
    ++v5;
    v12 = v12 * v9;
  }
  return v13 * *((double *)this + 2 * v7 + 510) + *((double *)this + 2 * v7 + 511);
}


//======================================================================
// anl::CImplicitFractal::Multi_get(double,double,double,double)
// address: 0x00318808   size: 0x12C (300 bytes)
//======================================================================
double __fastcall anl::CImplicitFractal::Multi_get(
        anl::CImplicitFractal *this,
        double a2,
        double a3,
        double a4,
        double a5)
{
  unsigned int v7; // r7
  double v8; // r4
  unsigned int v9; // r3
  double v10; // r0
  double v11; // r4
  double v13; // [sp+18h] [bp-2Ch]
  double v14; // [sp+20h] [bp-24h]
  double v15; // [sp+28h] [bp-1Ch]
  double v16; // [sp+30h] [bp-14h]
  double v17; // [sp+38h] [bp-Ch]

  v7 = 0;
  v8 = *((double *)this + 555);
  v13 = a2 * v8;
  v14 = a3 * v8;
  v15 = a4 * v8;
  v16 = a5 * v8;
  v17 = 1.0;
  while ( 1 )
  {
    v9 = *((_DWORD *)this + 1114);
    if ( v7 >= v9 )
      break;
    v10 = ((double (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(**((_DWORD **)this + v7 + 964) + 20))(
            *((_DWORD *)this + v7 + 964),
            *(_DWORD *)(**((_DWORD **)this + v7 + 964) + 20),
            LODWORD(v13),
            HIDWORD(v13),
            LODWORD(v14),
            HIDWORD(v14),
            LODWORD(v15),
            HIDWORD(v15),
            LODWORD(v16),
            HIDWORD(v16))
        * *(double *)((char *)this + 4 * v7 + 4 * v7 + 3936);
    v11 = *((double *)this + 556);
    v17 = v17 * (v10 + 1.0);
    v13 = v13 * v11;
    v14 = v14 * v11;
    v15 = v15 * v11;
    ++v7;
    v16 = v16 * v11;
  }
  return v17 * *((double *)this + 2 * v9 + 510) + *((double *)this + 2 * v9 + 511);
}


//======================================================================
// anl::CImplicitFractal::Multi_get(double,double,double)
// address: 0x00318950   size: 0x104 (260 bytes)
//======================================================================
double __fastcall anl::CImplicitFractal::Multi_get(anl::CImplicitFractal *this, double a2, double a3, double a4)
{
  unsigned int v6; // r7
  double v7; // r4
  unsigned int v8; // r3
  double v9; // r0
  double v10; // r4
  double v12; // [sp+10h] [bp-24h]
  double v13; // [sp+18h] [bp-1Ch]
  double v14; // [sp+20h] [bp-14h]
  double v15; // [sp+28h] [bp-Ch]

  v6 = 0;
  v7 = *((double *)this + 555);
  v12 = a2 * v7;
  v13 = a3 * v7;
  v14 = a4 * v7;
  v15 = 1.0;
  while ( 1 )
  {
    v8 = *((_DWORD *)this + 1114);
    if ( v6 >= v8 )
      break;
    v9 = ((double (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(**((_DWORD **)this + v6 + 964) + 16))(
           *((_DWORD *)this + v6 + 964),
           *(_DWORD *)(**((_DWORD **)this + v6 + 964) + 16),
           LODWORD(v12),
           HIDWORD(v12),
           LODWORD(v13),
           HIDWORD(v13),
           LODWORD(v14),
           HIDWORD(v14))
       * *(double *)((char *)this + 4 * v6 + 4 * v6 + 3936);
    v10 = *((double *)this + 556);
    v15 = v15 * (v9 + 1.0);
    v12 = v12 * v10;
    v13 = v13 * v10;
    ++v6;
    v14 = v14 * v10;
  }
  return v15 * *((double *)this + 2 * v8 + 510) + *((double *)this + 2 * v8 + 511);
}


//======================================================================
// anl::CImplicitFractal::Multi_get(double,double,double,double,double,double)
// address: 0x00318A70   size: 0x17C (380 bytes)
//======================================================================
double __fastcall anl::CImplicitFractal::Multi_get(
        anl::CImplicitFractal *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  unsigned int v9; // r7
  double v10; // r4
  unsigned int v11; // r3
  double v12; // r0
  double v13; // r4
  double v15; // [sp+28h] [bp-3Ch]
  double v16; // [sp+30h] [bp-34h]
  double v17; // [sp+38h] [bp-2Ch]
  double v18; // [sp+40h] [bp-24h]
  double v19; // [sp+48h] [bp-1Ch]
  double v20; // [sp+50h] [bp-14h]
  double v21; // [sp+58h] [bp-Ch]

  v9 = 0;
  v10 = *((double *)this + 555);
  v15 = a2 * v10;
  v16 = a3 * v10;
  v17 = a4 * v10;
  v18 = a5 * v10;
  v19 = a6 * v10;
  v20 = a7 * v10;
  v21 = 1.0;
  while ( 1 )
  {
    v11 = *((_DWORD *)this + 1114);
    if ( v9 >= v11 )
      break;
    v12 = ((double (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(**((_DWORD **)this + v9 + 964) + 24))(
            *((_DWORD *)this + v9 + 964),
            *(_DWORD *)(**((_DWORD **)this + v9 + 964) + 24),
            LODWORD(v15),
            HIDWORD(v15),
            LODWORD(v16),
            HIDWORD(v16),
            LODWORD(v17),
            HIDWORD(v17),
            LODWORD(v18),
            HIDWORD(v18),
            LODWORD(v19),
            HIDWORD(v19),
            LODWORD(v20),
            HIDWORD(v20))
        * *(double *)((char *)this + 4 * v9 + 4 * v9 + 3936);
    v13 = *((double *)this + 556);
    v21 = v21 * (v12 + 1.0);
    v15 = v15 * v13;
    v16 = v16 * v13;
    v17 = v17 * v13;
    v18 = v18 * v13;
    v19 = v19 * v13;
    ++v9;
    v20 = v20 * v13;
  }
  return v21 * *((double *)this + 2 * v11 + 510) + *((double *)this + 2 * v11 + 511);
}


//======================================================================
// anl::CImplicitFractal::Billow_get(double,double)
// address: 0x00318C08   size: 0xEA (234 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitFractal::Billow_get(anl::CImplicitFractal *this, double a2, double a3)
{
  double v5; // r6
  double v6; // r0
  unsigned int v8; // [sp+Ch] [bp-28h]
  double v9; // [sp+10h] [bp-24h]
  double v10; // [sp+18h] [bp-1Ch]
  double v11; // [sp+20h] [bp-14h]
  double v12; // [sp+28h] [bp-Ch]

  v5 = *((double *)this + 555);
  v9 = a2 * v5;
  v10 = a3 * v5;
  v8 = 0;
  v12 = 1.0;
  v11 = 0.0;
  while ( v8 < *((_DWORD *)this + 1114) )
  {
    v6 = COERCE_DOUBLE(
           ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(**((_DWORD **)this
                                                                                                 + v8
                                                                                                 + 964)
                                                                                              + 12))(
             *((_DWORD *)this + v8 + 964),
             *(_DWORD *)(**((_DWORD **)this + v8 + 964) + 12),
             LODWORD(v9),
             HIDWORD(v9),
             LODWORD(v10),
             HIDWORD(v10)));
    HIDWORD(v6) = (unsigned int)(2 * HIDWORD(v6)) >> 1;
    v11 = v11 + (v6 + v6 - 1.0) * v12;
    v12 = v12 * *((double *)this + 553);
    v9 = v9 * *((double *)this + 556);
    v10 = v10 * *((double *)this + 556);
    ++v8;
  }
  return *(_QWORD *)&v11;
}


//======================================================================
// anl::CImplicitFractal::Billow_get(double,double,double,double)
// address: 0x00318D18   size: 0x130 (304 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitFractal::Billow_get(
        anl::CImplicitFractal *this,
        double a2,
        double a3,
        double a4,
        double a5)
{
  unsigned int v7; // r7
  double v8; // r4
  int v9; // r0
  double v10; // r0
  double v11; // r4
  double v13; // [sp+18h] [bp-34h]
  double v14; // [sp+20h] [bp-2Ch]
  double v15; // [sp+28h] [bp-24h]
  double v16; // [sp+30h] [bp-1Ch]
  double v17; // [sp+38h] [bp-14h]
  double v18; // [sp+40h] [bp-Ch]

  v7 = 0;
  v8 = *((double *)this + 555);
  v13 = a2 * v8;
  v14 = a3 * v8;
  v15 = a4 * v8;
  v16 = a5 * v8;
  v18 = 1.0;
  v17 = 0.0;
  while ( v7 < *((_DWORD *)this + 1114) )
  {
    v9 = *((_DWORD *)this + v7++ + 964);
    v10 = COERCE_DOUBLE(
            ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v9 + 20))(
              v9,
              *(_DWORD *)(*(_DWORD *)v9 + 20),
              LODWORD(v13),
              HIDWORD(v13),
              LODWORD(v14),
              HIDWORD(v14),
              LODWORD(v15),
              HIDWORD(v15),
              LODWORD(v16),
              HIDWORD(v16)));
    HIDWORD(v10) = (unsigned int)(2 * HIDWORD(v10)) >> 1;
    v17 = v17 + (v10 + v10 - 1.0) * v18;
    v11 = *((double *)this + 556);
    v18 = v18 * *((double *)this + 553);
    v13 = v13 * v11;
    v14 = v14 * v11;
    v15 = v15 * v11;
    v16 = v16 * v11;
  }
  return *(_QWORD *)&v17;
}


//======================================================================
// anl::CImplicitFractal::Billow_get(double,double,double)
// address: 0x00318E68   size: 0x108 (264 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitFractal::Billow_get(anl::CImplicitFractal *this, double a2, double a3, double a4)
{
  unsigned int v6; // r7
  double v7; // r4
  int v8; // r0
  double v9; // r0
  double v10; // r4
  double v12; // [sp+10h] [bp-2Ch]
  double v13; // [sp+18h] [bp-24h]
  double v14; // [sp+20h] [bp-1Ch]
  double v15; // [sp+28h] [bp-14h]
  double v16; // [sp+30h] [bp-Ch]

  v6 = 0;
  v7 = *((double *)this + 555);
  v12 = a2 * v7;
  v13 = a3 * v7;
  v14 = a4 * v7;
  v16 = 1.0;
  v15 = 0.0;
  while ( v6 < *((_DWORD *)this + 1114) )
  {
    v8 = *((_DWORD *)this + v6++ + 964);
    v9 = COERCE_DOUBLE(
           ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v8 + 16))(
             v8,
             *(_DWORD *)(*(_DWORD *)v8 + 16),
             LODWORD(v12),
             HIDWORD(v12),
             LODWORD(v13),
             HIDWORD(v13),
             LODWORD(v14),
             HIDWORD(v14)));
    HIDWORD(v9) = (unsigned int)(2 * HIDWORD(v9)) >> 1;
    v15 = v15 + (v9 + v9 - 1.0) * v16;
    v10 = *((double *)this + 556);
    v16 = v16 * *((double *)this + 553);
    v12 = v12 * v10;
    v13 = v13 * v10;
    v14 = v14 * v10;
  }
  return *(_QWORD *)&v15;
}


//======================================================================
// anl::CImplicitFractal::Billow_get(double,double,double,double,double,double)
// address: 0x00318F90   size: 0x182 (386 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitFractal::Billow_get(
        anl::CImplicitFractal *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  unsigned int v9; // r7
  double v10; // r4
  int v11; // r0
  double v12; // r0
  double v13; // r4
  double v15; // [sp+28h] [bp-44h]
  double v16; // [sp+30h] [bp-3Ch]
  double v17; // [sp+38h] [bp-34h]
  double v18; // [sp+40h] [bp-2Ch]
  double v19; // [sp+48h] [bp-24h]
  double v20; // [sp+50h] [bp-1Ch]
  double v21; // [sp+58h] [bp-14h]
  double v22; // [sp+60h] [bp-Ch]

  v9 = 0;
  v10 = *((double *)this + 555);
  v15 = a2 * v10;
  v16 = a3 * v10;
  v17 = a4 * v10;
  v18 = a5 * v10;
  v19 = a6 * v10;
  v20 = a7 * v10;
  v22 = 1.0;
  v21 = 0.0;
  while ( v9 < *((_DWORD *)this + 1114) )
  {
    v11 = *((_DWORD *)this + v9++ + 964);
    v12 = COERCE_DOUBLE(
            ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v11 + 24))(
              v11,
              *(_DWORD *)(*(_DWORD *)v11 + 24),
              LODWORD(v15),
              HIDWORD(v15),
              LODWORD(v16),
              HIDWORD(v16),
              LODWORD(v17),
              HIDWORD(v17),
              LODWORD(v18),
              HIDWORD(v18),
              LODWORD(v19),
              HIDWORD(v19),
              LODWORD(v20),
              HIDWORD(v20)));
    HIDWORD(v12) = (unsigned int)(2 * HIDWORD(v12)) >> 1;
    v21 = v21 + (v12 + v12 - 1.0) * v22;
    v13 = *((double *)this + 556);
    v22 = v22 * *((double *)this + 553);
    v15 = v15 * v13;
    v16 = v16 * v13;
    v17 = v17 * v13;
    v18 = v18 * v13;
    v19 = v19 * v13;
    v20 = v20 * v13;
  }
  return *(_QWORD *)&v21;
}


//======================================================================
// anl::CImplicitFractal::RidgedMulti_get(double,double)
// address: 0x00319138   size: 0xDC (220 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitFractal::RidgedMulti_get(anl::CImplicitFractal *this, double a2, double a3)
{
  unsigned int v5; // r7
  double v6; // r4
  int v7; // r0
  __int64 v8; // r0
  double v9; // r2
  double v10; // r4
  double v12; // [sp+8h] [bp-24h]
  double v13; // [sp+10h] [bp-1Ch]
  double v14; // [sp+18h] [bp-14h]
  double v15; // [sp+20h] [bp-Ch]

  v5 = 0;
  v6 = *((double *)this + 555);
  v12 = a2 * v6;
  v13 = a3 * v6;
  v15 = 1.0;
  v14 = 0.0;
  while ( v5 < *((_DWORD *)this + 1114) )
  {
    v7 = *((_DWORD *)this + v5++ + 964);
    v8 = ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v7 + 12))(
           v7,
           *(_DWORD *)(*(_DWORD *)v7 + 12),
           LODWORD(v12),
           HIDWORD(v12),
           LODWORD(v13),
           HIDWORD(v13));
    LODWORD(v9) = v8;
    HIDWORD(v9) = (unsigned int)(2 * HIDWORD(v8)) >> 1;
    v14 = v14 + v15 * (1.0 - v9);
    v10 = *((double *)this + 556);
    v15 = v15 * *((double *)this + 553);
    v12 = v12 * v10;
    v13 = v13 * v10;
  }
  return *(_QWORD *)&v14;
}


//======================================================================
// anl::CImplicitFractal::RidgedMulti_get(double,double,double,double)
// address: 0x00319238   size: 0x14A (330 bytes)
//======================================================================
double __fastcall anl::CImplicitFractal::RidgedMulti_get(
        anl::CImplicitFractal *this,
        double a2,
        double a3,
        double a4,
        double a5)
{
  unsigned int v7; // r7
  double v8; // r4
  unsigned int v9; // r3
  char *v10; // r5
  __int64 v11; // r0
  double v12; // r2
  double v13; // r0
  double v14; // r4
  double v16; // [sp+18h] [bp-34h]
  double v17; // [sp+20h] [bp-2Ch]
  double v18; // [sp+28h] [bp-24h]
  double v19; // [sp+30h] [bp-1Ch]
  double v20; // [sp+38h] [bp-14h]

  v7 = 0;
  v8 = *((double *)this + 555);
  v16 = a2 * v8;
  v17 = a3 * v8;
  v18 = a4 * v8;
  v19 = a5 * v8;
  v20 = 0.0;
  while ( 1 )
  {
    v9 = *((_DWORD *)this + 1114);
    if ( v7 >= v9 )
      break;
    v10 = (char *)this + 4 * v7;
    v11 = ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(**((_DWORD **)v10 + 964) + 20))(
            *((_DWORD *)v10 + 964),
            *(_DWORD *)(**((_DWORD **)v10 + 964) + 20),
            LODWORD(v16),
            HIDWORD(v16),
            LODWORD(v17),
            HIDWORD(v17),
            LODWORD(v18),
            HIDWORD(v18),
            LODWORD(v19),
            HIDWORD(v19));
    LODWORD(v12) = v11;
    HIDWORD(v12) = (unsigned int)(2 * HIDWORD(v11)) >> 1;
    v13 = (*((double *)this + 552) - v12) * (*((double *)this + 552) - v12) * *(double *)&v10[4 * v7 + 3936];
    v14 = *((double *)this + 556);
    v20 = v20 + v13;
    v16 = v16 * v14;
    v17 = v17 * v14;
    v18 = v18 * v14;
    ++v7;
    v19 = v19 * v14;
  }
  return v20 * *((double *)this + 2 * v9 + 510) + *((double *)this + 2 * v9 + 511);
}


//======================================================================
// anl::CImplicitFractal::RidgedMulti_get(double,double,double)
// address: 0x003193A0   size: 0x104 (260 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitFractal::RidgedMulti_get(anl::CImplicitFractal *this, double a2, double a3, double a4)
{
  unsigned int v6; // r7
  double v7; // r4
  int v8; // r0
  __int64 v9; // r0
  double v10; // r2
  double v11; // r4
  double v13; // [sp+10h] [bp-2Ch]
  double v14; // [sp+18h] [bp-24h]
  double v15; // [sp+20h] [bp-1Ch]
  double v16; // [sp+28h] [bp-14h]
  double v17; // [sp+30h] [bp-Ch]

  v6 = 0;
  v7 = *((double *)this + 555);
  v13 = a2 * v7;
  v14 = a3 * v7;
  v15 = a4 * v7;
  v17 = 1.0;
  v16 = 0.0;
  while ( v6 < *((_DWORD *)this + 1114) )
  {
    v8 = *((_DWORD *)this + v6++ + 964);
    v9 = ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v8 + 16))(
           v8,
           *(_DWORD *)(*(_DWORD *)v8 + 16),
           LODWORD(v13),
           HIDWORD(v13),
           LODWORD(v14),
           HIDWORD(v14),
           LODWORD(v15),
           HIDWORD(v15));
    LODWORD(v10) = v9;
    HIDWORD(v10) = (unsigned int)(2 * HIDWORD(v9)) >> 1;
    v16 = v16 + v17 * (1.0 - v10);
    v11 = *((double *)this + 556);
    v17 = v17 * *((double *)this + 553);
    v13 = v13 * v11;
    v14 = v14 * v11;
    v15 = v15 * v11;
  }
  return *(_QWORD *)&v16;
}


//======================================================================
// anl::CImplicitFractal::RidgedMulti_get(double,double,double,double,double,double)
// address: 0x003194C8   size: 0x19C (412 bytes)
//======================================================================
double __fastcall anl::CImplicitFractal::RidgedMulti_get(
        anl::CImplicitFractal *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  unsigned int v9; // r7
  double v10; // r4
  unsigned int v11; // r3
  char *v12; // r5
  __int64 v13; // r0
  double v14; // r2
  double v15; // r0
  double v16; // r4
  double v18; // [sp+28h] [bp-44h]
  double v19; // [sp+30h] [bp-3Ch]
  double v20; // [sp+38h] [bp-34h]
  double v21; // [sp+40h] [bp-2Ch]
  double v22; // [sp+48h] [bp-24h]
  double v23; // [sp+50h] [bp-1Ch]
  double v24; // [sp+58h] [bp-14h]

  v9 = 0;
  v10 = *((double *)this + 555);
  v18 = a2 * v10;
  v19 = a3 * v10;
  v20 = a4 * v10;
  v21 = a5 * v10;
  v22 = a6 * v10;
  v23 = a7 * v10;
  v24 = 0.0;
  while ( 1 )
  {
    v11 = *((_DWORD *)this + 1114);
    if ( v9 >= v11 )
      break;
    v12 = (char *)this + 4 * v9;
    v13 = ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(**((_DWORD **)v12 + 964) + 24))(
            *((_DWORD *)v12 + 964),
            *(_DWORD *)(**((_DWORD **)v12 + 964) + 24),
            LODWORD(v18),
            HIDWORD(v18),
            LODWORD(v19),
            HIDWORD(v19),
            LODWORD(v20),
            HIDWORD(v20),
            LODWORD(v21),
            HIDWORD(v21),
            LODWORD(v22),
            HIDWORD(v22),
            LODWORD(v23),
            HIDWORD(v23));
    LODWORD(v14) = v13;
    HIDWORD(v14) = (unsigned int)(2 * HIDWORD(v13)) >> 1;
    v15 = (*((double *)this + 552) - v14) * (*((double *)this + 552) - v14) * *(double *)&v12[4 * v9 + 3936];
    v16 = *((double *)this + 556);
    v24 = v24 + v15;
    v18 = v18 * v16;
    v19 = v19 * v16;
    v20 = v20 * v16;
    v21 = v21 * v16;
    v22 = v22 * v16;
    ++v9;
    v23 = v23 * v16;
  }
  return v24 * *((double *)this + 2 * v11 + 510) + *((double *)this + 2 * v11 + 511);
}


//======================================================================
// anl::CImplicitFractal::HybridMulti_get(double,double)
// address: 0x00319680   size: 0x186 (390 bytes)
//======================================================================
double __fastcall anl::CImplicitFractal::HybridMulti_get(anl::CImplicitFractal *this, double a2, double a3)
{
  unsigned int v5; // r6
  double v6; // r4
  unsigned int v7; // r3
  double v8; // r0
  double v10; // [sp+8h] [bp-24h]
  double v11; // [sp+8h] [bp-24h]
  double i; // [sp+10h] [bp-1Ch]
  double v13; // [sp+18h] [bp-14h]
  double v14; // [sp+20h] [bp-Ch]

  v5 = 1;
  v6 = *((double *)this + 555);
  v10 = a2 * v6;
  v14 = ((double (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(**((_DWORD **)this + 964)
                                                                                          + 12))(
          *((_DWORD *)this + 964),
          *(_DWORD *)(**((_DWORD **)this + 964) + 12),
          LODWORD(v10),
          HIDWORD(v10),
          COERCE_UNSIGNED_INT64(a3 * v6),
          HIDWORD(COERCE_UNSIGNED_INT64(a3 * v6)))
      + *((double *)this + 552);
  v13 = v14 * *((double *)this + 553);
  v11 = v10 * *((double *)this + 556);
  for ( i = a3 * v6 * *((double *)this + 556); ; i = i * *((double *)this + 556) )
  {
    v7 = *((_DWORD *)this + 1114);
    if ( v5 >= v7 )
      break;
    if ( v13 > 1.0 )
      v13 = 1.0;
    v8 = (COERCE_DOUBLE(
            ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(**((_DWORD **)this
                                                                                                  + v5
                                                                                                  + 964)
                                                                                               + 12))(
              *((_DWORD *)this + v5 + 964),
              *(_DWORD *)(**((_DWORD **)this + v5 + 964) + 12),
              LODWORD(v11),
              HIDWORD(v11),
              LODWORD(i),
              HIDWORD(i)))
        + *((double *)this + 552))
       * *(double *)((char *)this + 4 * v5 + 4 * v5 + 3936);
    v14 = v14 + v13 * v8;
    ++v5;
    v13 = v13 * (v8 * *((double *)this + 553));
    v11 = v11 * *((double *)this + 556);
  }
  return v14 * *((double *)this + 2 * v7 + 510) + *((double *)this + 2 * v7 + 511);
}


//======================================================================
// anl::CImplicitFractal::HybridMulti_get(double,double,double)
// address: 0x00319820   size: 0x1C6 (454 bytes)
//======================================================================
double __fastcall anl::CImplicitFractal::HybridMulti_get(anl::CImplicitFractal *this, double a2, double a3, double a4)
{
  unsigned int v6; // r6
  double v7; // r4
  double v8; // r4
  unsigned int v9; // r3
  double v10; // r0
  double v11; // r4
  double v13; // [sp+10h] [bp-2Ch]
  double v14; // [sp+10h] [bp-2Ch]
  double v15; // [sp+18h] [bp-24h]
  double v16; // [sp+18h] [bp-24h]
  double v17; // [sp+20h] [bp-1Ch]
  double i; // [sp+20h] [bp-1Ch]
  double v19; // [sp+28h] [bp-14h]
  double v20; // [sp+30h] [bp-Ch]

  v6 = 1;
  v7 = *((double *)this + 555);
  v13 = a2 * v7;
  v15 = a3 * v7;
  v17 = a4 * v7;
  v20 = ((double (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(**((_DWORD **)this + 964) + 16))(
          *((_DWORD *)this + 964),
          *(_DWORD *)(**((_DWORD **)this + 964) + 16),
          LODWORD(v13),
          HIDWORD(v13),
          LODWORD(v15),
          HIDWORD(v15),
          LODWORD(v17),
          HIDWORD(v17))
      + *((double *)this + 552);
  v19 = v20 * *((double *)this + 553);
  v8 = *((double *)this + 556);
  v14 = v13 * v8;
  v16 = v15 * v8;
  for ( i = v17 * v8; ; i = i * v11 )
  {
    v9 = *((_DWORD *)this + 1114);
    if ( v6 >= v9 )
      break;
    if ( v19 > 1.0 )
      v19 = 1.0;
    v10 = (COERCE_DOUBLE(
             ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(**((_DWORD **)this + v6 + 964) + 16))(
               *((_DWORD *)this + v6 + 964),
               *(_DWORD *)(**((_DWORD **)this + v6 + 964) + 16),
               LODWORD(v14),
               HIDWORD(v14),
               LODWORD(v16),
               HIDWORD(v16),
               LODWORD(i),
               HIDWORD(i)))
         + *((double *)this + 552))
        * *(double *)((char *)this + 4 * v6 + 4 * v6 + 3936);
    v20 = v20 + v19 * v10;
    ++v6;
    v19 = v19 * (v10 * *((double *)this + 553));
    v11 = *((double *)this + 556);
    v14 = v14 * v11;
    v16 = v16 * v11;
  }
  return v20 * *((double *)this + 2 * v9 + 510) + *((double *)this + 2 * v9 + 511);
}


//======================================================================
// anl::CImplicitFractal::HybridMulti_get(double,double,double,double)
// address: 0x00319A00   size: 0x208 (520 bytes)
//======================================================================
double __fastcall anl::CImplicitFractal::HybridMulti_get(
        anl::CImplicitFractal *this,
        double a2,
        double a3,
        double a4,
        double a5)
{
  unsigned int v7; // r7
  double v8; // r4
  double v9; // r4
  unsigned int v10; // r3
  double v11; // r0
  double v12; // r4
  double v14; // [sp+18h] [bp-34h]
  double v15; // [sp+18h] [bp-34h]
  double v16; // [sp+20h] [bp-2Ch]
  double v17; // [sp+20h] [bp-2Ch]
  double v18; // [sp+28h] [bp-24h]
  double v19; // [sp+28h] [bp-24h]
  double v20; // [sp+30h] [bp-1Ch]
  double i; // [sp+30h] [bp-1Ch]
  double v22; // [sp+38h] [bp-14h]
  double v23; // [sp+40h] [bp-Ch]

  v7 = 1;
  v8 = *((double *)this + 555);
  v14 = a2 * v8;
  v16 = a3 * v8;
  v18 = a4 * v8;
  v20 = a5 * v8;
  v23 = ((double (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(**((_DWORD **)this + 964) + 20))(
          *((_DWORD *)this + 964),
          *(_DWORD *)(**((_DWORD **)this + 964) + 20),
          LODWORD(v14),
          HIDWORD(v14),
          LODWORD(v16),
          HIDWORD(v16),
          LODWORD(v18),
          HIDWORD(v18),
          LODWORD(v20),
          HIDWORD(v20))
      + *((double *)this + 552);
  v22 = v23 * *((double *)this + 553);
  v9 = *((double *)this + 556);
  v15 = v14 * v9;
  v17 = v16 * v9;
  v19 = v18 * v9;
  for ( i = v20 * v9; ; i = i * v12 )
  {
    v10 = *((_DWORD *)this + 1114);
    if ( v7 >= v10 )
      break;
    if ( v22 > 1.0 )
      v22 = 1.0;
    v11 = (COERCE_DOUBLE(
             ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(**((_DWORD **)this + v7 + 964) + 20))(
               *((_DWORD *)this + v7 + 964),
               *(_DWORD *)(**((_DWORD **)this + v7 + 964) + 20),
               LODWORD(v15),
               HIDWORD(v15),
               LODWORD(v17),
               HIDWORD(v17),
               LODWORD(v19),
               HIDWORD(v19),
               LODWORD(i),
               HIDWORD(i)))
         + *((double *)this + 552))
        * *(double *)((char *)this + 4 * v7 + 4 * v7 + 3936);
    v23 = v23 + v22 * v11;
    ++v7;
    v22 = v22 * (v11 * *((double *)this + 553));
    v12 = *((double *)this + 556);
    v15 = v15 * v12;
    v17 = v17 * v12;
    v19 = v19 * v12;
  }
  return v23 * *((double *)this + 2 * v10 + 510) + *((double *)this + 2 * v10 + 511);
}


//======================================================================
// anl::CImplicitFractal::HybridMulti_get(double,double,double,double,double,double)
// address: 0x00319C20   size: 0x288 (648 bytes)
//======================================================================
double __fastcall anl::CImplicitFractal::HybridMulti_get(
        anl::CImplicitFractal *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  unsigned int v9; // r7
  double v10; // r4
  double v11; // r4
  unsigned int v12; // r3
  double v13; // r0
  double v14; // r4
  double v16; // [sp+28h] [bp-44h]
  double v17; // [sp+28h] [bp-44h]
  double v18; // [sp+30h] [bp-3Ch]
  double v19; // [sp+30h] [bp-3Ch]
  double v20; // [sp+38h] [bp-34h]
  double v21; // [sp+38h] [bp-34h]
  double v22; // [sp+40h] [bp-2Ch]
  double v23; // [sp+40h] [bp-2Ch]
  double v24; // [sp+48h] [bp-24h]
  double v25; // [sp+48h] [bp-24h]
  double v26; // [sp+50h] [bp-1Ch]
  double i; // [sp+50h] [bp-1Ch]
  double v28; // [sp+58h] [bp-14h]
  double v29; // [sp+60h] [bp-Ch]

  v9 = 1;
  v10 = *((double *)this + 555);
  v16 = a2 * v10;
  v18 = a3 * v10;
  v20 = a4 * v10;
  v22 = a5 * v10;
  v24 = a6 * v10;
  v26 = a7 * v10;
  v29 = ((double (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(**((_DWORD **)this + 964) + 24))(
          *((_DWORD *)this + 964),
          *(_DWORD *)(**((_DWORD **)this + 964) + 24),
          LODWORD(v16),
          HIDWORD(v16),
          LODWORD(v18),
          HIDWORD(v18),
          LODWORD(v20),
          HIDWORD(v20),
          LODWORD(v22),
          HIDWORD(v22),
          LODWORD(v24),
          HIDWORD(v24),
          LODWORD(v26),
          HIDWORD(v26))
      + *((double *)this + 552);
  v28 = v29 * *((double *)this + 553);
  v11 = *((double *)this + 556);
  v17 = v16 * v11;
  v19 = v18 * v11;
  v21 = v20 * v11;
  v23 = v22 * v11;
  v25 = v24 * v11;
  for ( i = v26 * v11; ; i = i * v14 )
  {
    v12 = *((_DWORD *)this + 1114);
    if ( v9 >= v12 )
      break;
    if ( v28 > 1.0 )
      v28 = 1.0;
    v13 = (COERCE_DOUBLE(
             ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(**((_DWORD **)this + v9 + 964) + 24))(
               *((_DWORD *)this + v9 + 964),
               *(_DWORD *)(**((_DWORD **)this + v9 + 964) + 24),
               LODWORD(v17),
               HIDWORD(v17),
               LODWORD(v19),
               HIDWORD(v19),
               LODWORD(v21),
               HIDWORD(v21),
               LODWORD(v23),
               HIDWORD(v23),
               LODWORD(v25),
               HIDWORD(v25),
               LODWORD(i),
               HIDWORD(i)))
         + *((double *)this + 552))
        * *(double *)((char *)this + 4 * v9 + 4 * v9 + 3936);
    v29 = v29 + v28 * v13;
    ++v9;
    v28 = v28 * (v13 * *((double *)this + 553));
    v14 = *((double *)this + 556);
    v17 = v17 * v14;
    v19 = v19 * v14;
    v21 = v21 * v14;
    v23 = v23 * v14;
    v25 = v25 * v14;
  }
  return v29 * *((double *)this + 2 * v12 + 510) + *((double *)this + 2 * v12 + 511);
}


//======================================================================
// anl::CImplicitFractal::DeCarpentierSwiss_get(double,double)
// address: 0x00319EC0   size: 0x26C (620 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitFractal::DeCarpentierSwiss_get(anl::CImplicitFractal *this, double a2, double a3)
{
  double v4; // r4
  __int64 v5; // r0
  unsigned int v6; // r7
  double v7; // r0
  double v8; // r4
  int v9; // r1
  double v10; // r2
  double v11; // r2
  double v13; // [sp+8h] [bp-5Ch]
  double v14; // [sp+10h] [bp-54h]
  double v16; // [sp+20h] [bp-44h]
  double v17; // [sp+28h] [bp-3Ch]
  double v18; // [sp+30h] [bp-34h]
  double v19; // [sp+38h] [bp-2Ch]
  unsigned int v20; // [sp+48h] [bp-1Ch]
  anl::CImplicitModuleBase **v21; // [sp+50h] [bp-14h]
  unsigned int i; // [sp+54h] [bp-10h]
  double v23; // [sp+58h] [bp-Ch]

  v4 = *((double *)this + 555);
  v16 = a2 * v4;
  v17 = a3 * v4;
  v21 = (anl::CImplicitModuleBase **)((char *)this + 3856);
  v13 = 0.0;
  v19 = 0.0;
  v18 = 1.0;
  v14 = 0.0;
  for ( i = 0; i < *((_DWORD *)this + 1114); ++i )
  {
    v5 = ((__int64 (__fastcall *)(anl::CImplicitModuleBase *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)*v21 + 12))(
           *v21,
           *(_DWORD *)(*(_DWORD *)*v21 + 12),
           COERCE_UNSIGNED_INT64(v16 + *((double *)this + 552) * v19),
           HIDWORD(COERCE_UNSIGNED_INT64(v16 + *((double *)this + 552) * v19)),
           COERCE_UNSIGNED_INT64(v17 + *((double *)this + 552) * v13),
           HIDWORD(COERCE_UNSIGNED_INT64(v17 + *((double *)this + 552) * v13)));
    v6 = HIDWORD(v5);
    v20 = v5;
    LODWORD(v7) = anl::CImplicitModuleBase::get_dx(
                    *v21,
                    v16 + *((double *)this + 552) * v19,
                    v17 + *((double *)this + 552) * v13);
    v23 = v7;
    LODWORD(v8) = anl::CImplicitModuleBase::get_dy(
                    *v21,
                    v16 + *((double *)this + 552) * v19,
                    v17 + *((double *)this + 552) * v13);
    HIDWORD(v8) = v9;
    LODWORD(v10) = v20;
    HIDWORD(v10) = (2 * v6) >> 1;
    v14 = v14 + v18 * (1.0 - v10);
    v6 += 0x80000000;
    v19 = v19 + v18 * v23 * COERCE_DOUBLE(__PAIR64__(v6, v20));
    v13 = v13 + v18 * v8 * COERCE_DOUBLE(__PAIR64__(v6, v20));
    if ( v14 < 0.0 )
    {
      v11 = 0.0;
    }
    else if ( v14 > 1.0 )
    {
      v11 = 1.0;
    }
    else
    {
      v11 = v14;
    }
    v18 = v18 * (*((double *)this + 553) * v11);
    v16 = v16 * *((double *)this + 556);
    v17 = v17 * *((double *)this + 556);
    ++v21;
  }
  return *(_QWORD *)&v14;
}


//======================================================================
// anl::CImplicitFractal::get(double,double)
// address: 0x0031A150   size: 0x50 (80 bytes)
//======================================================================
double __fastcall anl::CImplicitFractal::get(anl::CImplicitFractal *this, double a2, double a3)
{
  double result; // r0

  switch ( *((_DWORD *)this + 1115) )
  {
    case 1:
      result = COERCE_DOUBLE(anl::CImplicitFractal::RidgedMulti_get(this, a2, a3));
      break;
    case 2:
      result = COERCE_DOUBLE(anl::CImplicitFractal::Billow_get(this, a2, a3));
      break;
    case 3:
      result = anl::CImplicitFractal::Multi_get(this, a2, a3);
      break;
    case 4:
      result = anl::CImplicitFractal::HybridMulti_get(this, a2, a3);
      break;
    case 5:
      result = COERCE_DOUBLE(anl::CImplicitFractal::DeCarpentierSwiss_get(this, a2, a3));
      break;
    default:
      result = COERCE_DOUBLE(anl::CImplicitFractal::fBm_get(this, a2, a3));
      break;
  }
  return result;
}


//======================================================================
// anl::CImplicitFractal::DeCarpentierSwiss_get(double,double,double,double)
// address: 0x0031A1A8   size: 0x4C8 (1224 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitFractal::DeCarpentierSwiss_get(
        anl::CImplicitFractal *this,
        double a2,
        double a3,
        double a4,
        double a5)
{
  double v6; // r4
  anl::CImplicitModuleBase **v7; // r7
  double v8; // r4
  __int64 v9; // kr00_8
  double v10; // r0
  double v11; // r0
  double v12; // r0
  double v13; // r2
  unsigned int v14; // r1
  double v15; // r2
  double v16; // r4
  double v18; // [sp+18h] [bp-8Ch]
  double v19; // [sp+20h] [bp-84h]
  double v20; // [sp+28h] [bp-7Ch]
  double v21; // [sp+30h] [bp-74h]
  double v22; // [sp+38h] [bp-6Ch]
  double v23; // [sp+40h] [bp-64h]
  double v24; // [sp+48h] [bp-5Ch]
  double v25; // [sp+50h] [bp-54h]
  double v26; // [sp+58h] [bp-4Ch]
  double v27; // [sp+70h] [bp-34h]
  unsigned int i; // [sp+84h] [bp-20h]
  double v30; // [sp+88h] [bp-1Ch]
  double v31; // [sp+90h] [bp-14h]
  double v32; // [sp+98h] [bp-Ch]

  v6 = *((double *)this + 555);
  v19 = a2 * v6;
  v20 = a3 * v6;
  v21 = a4 * v6;
  v22 = a5 * v6;
  v7 = (anl::CImplicitModuleBase **)((char *)this + 3856);
  v18 = 0.0;
  v26 = 0.0;
  v25 = 0.0;
  v24 = 0.0;
  v23 = 1.0;
  v27 = 0.0;
  for ( i = 0; i < *((_DWORD *)this + 1114); ++i )
  {
    v8 = *((double *)this + 552);
    v9 = ((__int64 (__fastcall *)(anl::CImplicitModuleBase *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)*v7 + 20))(
           *v7,
           *(_DWORD *)(*(_DWORD *)*v7 + 20),
           COERCE_UNSIGNED_INT64(v19 + v8 * v24),
           HIDWORD(COERCE_UNSIGNED_INT64(v19 + v8 * v24)),
           COERCE_UNSIGNED_INT64(v20 + v8 * v25),
           HIDWORD(COERCE_UNSIGNED_INT64(v20 + v8 * v25)),
           COERCE_UNSIGNED_INT64(v21 + v8 * v26),
           HIDWORD(COERCE_UNSIGNED_INT64(v21 + v8 * v26)),
           COERCE_UNSIGNED_INT64(v22 + v8 * v18),
           HIDWORD(COERCE_UNSIGNED_INT64(v22 + v8 * v18)));
    LODWORD(v10) = anl::CImplicitModuleBase::get_dx(
                     *v7,
                     v19 + *((double *)this + 552) * v24,
                     v20 + *((double *)this + 552) * v25,
                     v21 + *((double *)this + 552) * v26,
                     v22 + *((double *)this + 552) * v18);
    v30 = v10;
    LODWORD(v11) = anl::CImplicitModuleBase::get_dy(
                     *v7,
                     v19 + *((double *)this + 552) * v24,
                     v20 + *((double *)this + 552) * v25,
                     v21 + *((double *)this + 552) * v26,
                     v22 + *((double *)this + 552) * v18);
    v31 = v11;
    LODWORD(v12) = anl::CImplicitModuleBase::get_dz(
                     *v7,
                     v19 + *((double *)this + 552) * v24,
                     v20 + *((double *)this + 552) * v25,
                     v21 + *((double *)this + 552) * v26,
                     v22 + *((double *)this + 552) * v18);
    v32 = v12;
    HIDWORD(v8) = anl::CImplicitModuleBase::get_dw(
                    *v7,
                    v19 + *((double *)this + 552) * v24,
                    v20 + *((double *)this + 552) * v25,
                    v21 + *((double *)this + 552) * v26,
                    v22 + *((double *)this + 552) * v18);
    LODWORD(v13) = v9;
    HIDWORD(v13) = (unsigned int)(2 * HIDWORD(v9)) >> 1;
    v27 = v27 + v23 * (1.0 - v13);
    v24 = v24 + v23 * v30 * COERCE_DOUBLE(__PAIR64__(HIDWORD(v9) + 0x80000000, v9));
    v25 = v25 + v23 * v31 * COERCE_DOUBLE(__PAIR64__(HIDWORD(v9) + 0x80000000, v9));
    v26 = v26 + v23 * v32 * COERCE_DOUBLE(__PAIR64__(HIDWORD(v9) + 0x80000000, v9));
    v18 = v18
        + v23 * COERCE_DOUBLE(__PAIR64__(v14, HIDWORD(v8))) * COERCE_DOUBLE(__PAIR64__(HIDWORD(v9) + 0x80000000, v9));
    if ( v27 < 0.0 )
    {
      v15 = 0.0;
    }
    else if ( v27 > 1.0 )
    {
      v15 = 1.0;
    }
    else
    {
      v15 = v27;
    }
    v23 = v23 * (*((double *)this + 553) * v15);
    v16 = *((double *)this + 556);
    v19 = v19 * v16;
    v20 = v20 * v16;
    v21 = v21 * v16;
    v22 = v22 * v16;
    ++v7;
  }
  return *(_QWORD *)&v27;
}


//======================================================================
// anl::CImplicitFractal::get(double,double,double,double)
// address: 0x0031A688   size: 0x62 (98 bytes)
//======================================================================
double __fastcall anl::CImplicitFractal::get(anl::CImplicitFractal *this, double a2, double a3, double a4, double a5)
{
  double result; // r0

  switch ( *((_DWORD *)this + 1115) )
  {
    case 1:
      result = anl::CImplicitFractal::RidgedMulti_get(this, a2, a3, a4, a5);
      break;
    case 2:
      result = COERCE_DOUBLE(anl::CImplicitFractal::Billow_get(this, a2, a3, a4, a5));
      break;
    case 3:
      result = anl::CImplicitFractal::Multi_get(this, a2, a3, a4, a5);
      break;
    case 4:
      result = anl::CImplicitFractal::HybridMulti_get(this, a2, a3, a4, a5);
      break;
    case 5:
      result = COERCE_DOUBLE(anl::CImplicitFractal::DeCarpentierSwiss_get(this, a2, a3, a4, a5));
      break;
    default:
      result = COERCE_DOUBLE(anl::CImplicitFractal::fBm_get(this, a2, a3, a4, a5));
      break;
  }
  return result;
}


//======================================================================
// anl::CImplicitFractal::DeCarpentierSwiss_get(double,double,double)
// address: 0x0031A6F0   size: 0x38E (910 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitFractal::DeCarpentierSwiss_get(
        anl::CImplicitFractal *this,
        double a2,
        double a3,
        double a4)
{
  double v5; // r4
  anl::CImplicitModuleBase **v6; // r7
  double v7; // r4
  __int64 v8; // kr00_8
  double v9; // r0
  double v10; // r0
  double v11; // r2
  unsigned int v12; // r1
  double v13; // r2
  double v14; // r4
  double v16; // [sp+10h] [bp-74h]
  double v17; // [sp+18h] [bp-6Ch]
  double v18; // [sp+20h] [bp-64h]
  double v19; // [sp+28h] [bp-5Ch]
  double v20; // [sp+30h] [bp-54h]
  double v21; // [sp+38h] [bp-4Ch]
  double v22; // [sp+40h] [bp-44h]
  double v23; // [sp+48h] [bp-3Ch]
  unsigned int i; // [sp+6Ch] [bp-18h]
  double v26; // [sp+70h] [bp-14h]
  double v27; // [sp+78h] [bp-Ch]

  v5 = *((double *)this + 555);
  v17 = a2 * v5;
  v18 = a3 * v5;
  v19 = a4 * v5;
  v6 = (anl::CImplicitModuleBase **)((char *)this + 3856);
  v16 = 0.0;
  v23 = 0.0;
  v22 = 0.0;
  v21 = 1.0;
  v20 = 0.0;
  for ( i = 0; i < *((_DWORD *)this + 1114); ++i )
  {
    v7 = *((double *)this + 552);
    v8 = ((__int64 (__fastcall *)(anl::CImplicitModuleBase *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)*v6 + 16))(
           *v6,
           *(_DWORD *)(*(_DWORD *)*v6 + 16),
           COERCE_UNSIGNED_INT64(v17 + v7 * v22),
           HIDWORD(COERCE_UNSIGNED_INT64(v17 + v7 * v22)),
           COERCE_UNSIGNED_INT64(v18 + v7 * v23),
           HIDWORD(COERCE_UNSIGNED_INT64(v18 + v7 * v23)),
           COERCE_UNSIGNED_INT64(v19 + v7 * v16),
           HIDWORD(COERCE_UNSIGNED_INT64(v19 + v7 * v16)));
    LODWORD(v9) = anl::CImplicitModuleBase::get_dx(
                    *v6,
                    v17 + *((double *)this + 552) * v22,
                    v18 + *((double *)this + 552) * v23,
                    v19 + *((double *)this + 552) * v16);
    v26 = v9;
    LODWORD(v10) = anl::CImplicitModuleBase::get_dy(
                     *v6,
                     v17 + *((double *)this + 552) * v22,
                     v18 + *((double *)this + 552) * v23,
                     v19 + *((double *)this + 552) * v16);
    v27 = v10;
    HIDWORD(v7) = anl::CImplicitModuleBase::get_dz(
                    *v6,
                    v17 + *((double *)this + 552) * v22,
                    v18 + *((double *)this + 552) * v23,
                    v19 + *((double *)this + 552) * v16);
    HIDWORD(v11) = (unsigned int)(2 * HIDWORD(v8)) >> 1;
    LODWORD(v11) = v8;
    v20 = v20 + v21 * (1.0 - v11);
    v22 = v22 + v21 * v26 * COERCE_DOUBLE(__PAIR64__(HIDWORD(v8) + 0x80000000, v8));
    v23 = v23 + v21 * v27 * COERCE_DOUBLE(__PAIR64__(HIDWORD(v8) + 0x80000000, v8));
    v16 = v16
        + v21 * COERCE_DOUBLE(__PAIR64__(v12, HIDWORD(v7))) * COERCE_DOUBLE(__PAIR64__(HIDWORD(v8) + 0x80000000, v8));
    if ( v20 < 0.0 )
    {
      v13 = 0.0;
    }
    else if ( v20 > 1.0 )
    {
      v13 = 1.0;
    }
    else
    {
      v13 = v20;
    }
    v21 = v21 * (*((double *)this + 553) * v13);
    v14 = *((double *)this + 556);
    v17 = v17 * v14;
    v18 = v18 * v14;
    v19 = v19 * v14;
    ++v6;
  }
  return *(_QWORD *)&v20;
}


//======================================================================
// anl::CImplicitFractal::get(double,double,double)
// address: 0x0031AA88   size: 0x5A (90 bytes)
//======================================================================
double __fastcall anl::CImplicitFractal::get(anl::CImplicitFractal *this, double a2, double a3, double a4)
{
  double result; // r0

  switch ( *((_DWORD *)this + 1115) )
  {
    case 1:
      result = COERCE_DOUBLE(anl::CImplicitFractal::RidgedMulti_get(this, a2, a3, a4));
      break;
    case 2:
      result = COERCE_DOUBLE(anl::CImplicitFractal::Billow_get(this, a2, a3, a4));
      break;
    case 3:
      result = anl::CImplicitFractal::Multi_get(this, a2, a3, a4);
      break;
    case 4:
      result = anl::CImplicitFractal::HybridMulti_get(this, a2, a3, a4);
      break;
    case 5:
      result = COERCE_DOUBLE(anl::CImplicitFractal::DeCarpentierSwiss_get(this, a2, a3, a4));
      break;
    default:
      result = COERCE_DOUBLE(anl::CImplicitFractal::fBm_get(this, a2, a3, a4));
      break;
  }
  return result;
}


//======================================================================
// anl::CImplicitFractal::DeCarpentierSwiss_get(double,double,double,double,double,double)
// address: 0x0031AAE8   size: 0x7AA (1962 bytes)
//======================================================================
__int64 __fastcall anl::CImplicitFractal::DeCarpentierSwiss_get(
        anl::CImplicitFractal *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  double v8; // r4
  double v9; // r4
  __int64 v10; // kr00_8
  double v11; // r0
  int v12; // r1
  double v13; // r4
  double v14; // r0
  double v15; // r0
  double v16; // r4
  double v17; // r0
  double v18; // r4
  double v19; // r0
  double v20; // r2
  double v21; // r2
  double v22; // r4
  double v24; // [sp+28h] [bp-BCh]
  double v25; // [sp+30h] [bp-B4h]
  double v26; // [sp+38h] [bp-ACh]
  double v27; // [sp+40h] [bp-A4h]
  double v28; // [sp+48h] [bp-9Ch]
  double v29; // [sp+50h] [bp-94h]
  double v30; // [sp+58h] [bp-8Ch]
  anl::CImplicitModuleBase **v31; // [sp+64h] [bp-80h]
  double v32; // [sp+70h] [bp-74h]
  double v33; // [sp+78h] [bp-6Ch]
  double v34; // [sp+80h] [bp-64h]
  double v35; // [sp+88h] [bp-5Ch]
  double v36; // [sp+90h] [bp-54h]
  double v37; // [sp+98h] [bp-4Ch]
  double v38; // [sp+A0h] [bp-44h]
  double v40; // [sp+B0h] [bp-34h]
  double v41; // [sp+B8h] [bp-2Ch]
  double v42; // [sp+C0h] [bp-24h]
  double v43; // [sp+C8h] [bp-1Ch]
  double v44; // [sp+D0h] [bp-14h]
  unsigned int i; // [sp+D8h] [bp-Ch]

  v8 = *((double *)this + 555);
  v25 = a2 * v8;
  v26 = a3 * v8;
  v27 = a4 * v8;
  v32 = a5 * v8;
  v33 = a6 * v8;
  v34 = a7 * v8;
  v31 = (anl::CImplicitModuleBase **)((char *)this + 3856);
  v24 = 0.0;
  v37 = 0.0;
  v36 = 0.0;
  v35 = 0.0;
  v30 = 0.0;
  v29 = 0.0;
  v28 = 1.0;
  v38 = 0.0;
  for ( i = 0; i < *((_DWORD *)this + 1114); ++i )
  {
    v9 = *((double *)this + 552);
    v10 = ((__int64 (__fastcall *)(anl::CImplicitModuleBase *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)*v31 + 16))(
            *v31,
            *(_DWORD *)(*(_DWORD *)*v31 + 16),
            COERCE_UNSIGNED_INT64(v25 + v9 * v29),
            HIDWORD(COERCE_UNSIGNED_INT64(v25 + v9 * v29)),
            COERCE_UNSIGNED_INT64(v26 + v9 * v30),
            HIDWORD(COERCE_UNSIGNED_INT64(v26 + v9 * v30)),
            COERCE_UNSIGNED_INT64(v27 + v9 * v35),
            HIDWORD(COERCE_UNSIGNED_INT64(v27 + v9 * v35)));
    LODWORD(v11) = anl::CImplicitModuleBase::get_dx(
                     *v31,
                     v25 + *((double *)this + 552) * v29,
                     v26 + *((double *)this + 552) * v30,
                     v27 + *((double *)this + 552) * v29,
                     v32 + *((double *)this + 552) * v36,
                     v33 + *((double *)this + 552) * v37,
                     v34 + *((double *)this + 552) * v24);
    v41 = v11;
    LODWORD(v40) = anl::CImplicitModuleBase::get_dy(
                     *v31,
                     v25 + *((double *)this + 552) * v29,
                     v26 + *((double *)this + 552) * v30,
                     v27 + *((double *)this + 552) * v35,
                     v32 + *((double *)this + 552) * v36,
                     v33 + *((double *)this + 552) * v37,
                     v34 + *((double *)this + 552) * v24);
    HIDWORD(v40) = v12;
    v13 = *((double *)this + 552);
    LODWORD(v14) = anl::CImplicitModuleBase::get_dz(
                     *v31,
                     v25 + v13 * v29,
                     v26 + v13 * v30,
                     v27 + v13 * v35,
                     v32 + v13 * v36,
                     v33 + v13 * v37,
                     v34 + v13 * v24);
    v42 = v14;
    LODWORD(v15) = anl::CImplicitModuleBase::get_dw(
                     *v31,
                     v25 + *((double *)this + 552) * v29,
                     v26 + *((double *)this + 552) * v30,
                     v27 + *((double *)this + 552) * v35,
                     v32 + *((double *)this + 552) * v36,
                     v33 + *((double *)this + 552) * v37,
                     v34 + *((double *)this + 552) * v24);
    v43 = v15;
    v16 = *((double *)this + 552);
    LODWORD(v17) = anl::CImplicitModuleBase::get_du(
                     *v31,
                     v25 + v16 * v29,
                     v26 + v16 * v30,
                     v27 + v16 * v35,
                     v32 + v16 * v36,
                     v33 + v16 * v37,
                     v34 + v16 * v24);
    v44 = v17;
    v18 = *((double *)this + 552);
    LODWORD(v19) = anl::CImplicitModuleBase::get_dv(
                     *v31,
                     v25 + v18 * v29,
                     v26 + v18 * v30,
                     v27 + v18 * v35,
                     v32 + v18 * v36,
                     v33 + v18 * v37,
                     v34 + v18 * v24);
    LODWORD(v20) = v10;
    HIDWORD(v20) = (unsigned int)(2 * HIDWORD(v10)) >> 1;
    v38 = v38 + v28 * (1.0 - v20);
    v29 = v29 + v28 * v41 * COERCE_DOUBLE(__PAIR64__(HIDWORD(v10) + 0x80000000, v10));
    v30 = v30 + v28 * v40 * COERCE_DOUBLE(__PAIR64__(HIDWORD(v10) + 0x80000000, v10));
    v35 = v35 + v28 * v42 * COERCE_DOUBLE(__PAIR64__(HIDWORD(v10) + 0x80000000, v10));
    v36 = v36 + v28 * v43 * COERCE_DOUBLE(__PAIR64__(HIDWORD(v10) + 0x80000000, v10));
    v37 = v37 + v28 * v44 * COERCE_DOUBLE(__PAIR64__(HIDWORD(v10) + 0x80000000, v10));
    v24 = v24 + v28 * v19 * COERCE_DOUBLE(__PAIR64__(HIDWORD(v10) + 0x80000000, v10));
    if ( v38 < 0.0 )
    {
      v21 = 0.0;
    }
    else if ( v38 > 1.0 )
    {
      v21 = 1.0;
    }
    else
    {
      v21 = v38;
    }
    v28 = v28 * (*((double *)this + 553) * v21);
    v22 = *((double *)this + 556);
    v25 = v25 * v22;
    v26 = v26 * v22;
    v27 = v27 * v22;
    v32 = v32 * v22;
    v33 = v33 * v22;
    v34 = v34 * v22;
    ++v31;
  }
  return *(_QWORD *)&v38;
}


//======================================================================
// anl::CImplicitFractal::get(double,double,double,double,double,double)
// address: 0x0031B2B0   size: 0x72 (114 bytes)
//======================================================================
double __fastcall anl::CImplicitFractal::get(
        anl::CImplicitFractal *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  double result; // r0

  switch ( *((_DWORD *)this + 1115) )
  {
    case 1:
      result = anl::CImplicitFractal::RidgedMulti_get(this, a2, a3, a4, a5, a6, a7);
      break;
    case 2:
      result = COERCE_DOUBLE(anl::CImplicitFractal::Billow_get(this, a2, a3, a4, a5, a6, a7));
      break;
    case 3:
      result = anl::CImplicitFractal::Multi_get(this, a2, a3, a4, a5, a6, a7);
      break;
    case 4:
      result = anl::CImplicitFractal::HybridMulti_get(this, a2, a3, a4, a5, a6, a7);
      break;
    case 5:
      result = COERCE_DOUBLE(anl::CImplicitFractal::DeCarpentierSwiss_get(this, a2, a3, a4, a5, a6, a7));
      break;
    default:
      result = COERCE_DOUBLE(anl::CImplicitFractal::fBm_get(this, a2, a3, a4, a5, a6, a7));
      break;
  }
  return result;
}

