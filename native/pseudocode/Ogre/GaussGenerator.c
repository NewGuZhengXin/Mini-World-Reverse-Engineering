// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::GaussGenerator

//======================================================================
// Ogre::GaussGenerator::GaussGenerator(int)
// address: 0x0018543C   size: 0x1C (28 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre14GaussGeneratorC1Ei'
int __fastcall Ogre::GaussGenerator::GaussGenerator(int this, int a2)
{
  *(_BYTE *)(this + 32) = 0;
  *(_DWORD *)(this + 4) = 1065353216;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)this = a2;
  *(_DWORD *)(this + 12) = -525502228;
  *(_DWORD *)(this + 16) = 1621981420;
  return this;
}


//======================================================================
// Ogre::GaussGenerator::~GaussGenerator()
// address: 0x00185460   size: 0x2 (2 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre14GaussGeneratorD1Ev'
void __fastcall Ogre::GaussGenerator::~GaussGenerator(Ogre::GaussGenerator *this)
{
  ;
}


//======================================================================
// Ogre::GaussGenerator::getCurrent(void)const
// address: 0x00185462   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::GaussGenerator::getCurrent(Ogre::GaussGenerator *this)
{
  return *((_DWORD *)this + 5);
}


//======================================================================
// Ogre::GaussGenerator::set(float,float)
// address: 0x00185466   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::GaussGenerator::set(int this, float a2, float a3)
{
  *(float *)(this + 4) = a2;
  *(float *)(this + 8) = a3;
  return this;
}


//======================================================================
// Ogre::GaussGenerator::set(float,float,float,float)
// address: 0x0018546C   size: 0xC (12 bytes)
//======================================================================
float *__fastcall Ogre::GaussGenerator::set(float *this, float a2, float a3, float a4, float a5)
{
  *(this + 3) = a4;
  *(this + 1) = a2;
  *(this + 2) = a3;
  *(this + 4) = a5;
  return this;
}


//======================================================================
// Ogre::GaussGenerator::getMean(void)const
// address: 0x00185478   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::GaussGenerator::getMean(Ogre::GaussGenerator *this)
{
  return *((_DWORD *)this + 1);
}


//======================================================================
// Ogre::GaussGenerator::getStandardDeviation(void)const
// address: 0x0018547C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::GaussGenerator::getStandardDeviation(Ogre::GaussGenerator *this)
{
  return *((_DWORD *)this + 2);
}


//======================================================================
// Ogre::GaussGenerator::setMean(float)
// address: 0x00185480   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::GaussGenerator::setMean(int this, float a2)
{
  *(float *)(this + 4) = a2;
  return this;
}


//======================================================================
// Ogre::GaussGenerator::setStandardDeviation(float)
// address: 0x00185484   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::GaussGenerator::setStandardDeviation(int this, float a2)
{
  *(float *)(this + 8) = a2;
  return this;
}


//======================================================================
// Ogre::GaussGenerator::getString(char *)const
// address: 0x00185488   size: 0xBC (188 bytes)
//======================================================================
int __fastcall Ogre::GaussGenerator::getString(Ogre::GaussGenerator *this, char *a2)
{
  float v2; // r6

  v2 = *((float *)this + 2);
  if ( v2 == 0.0 && *((float *)this + 3) <= -1.0e20 && *((float *)this + 4) >= 1.0e20 )
    return j_sprintf(a2, "%0.3f", *((float *)this + 1));
  if ( *((float *)this + 3) <= -1.0e20 && *((float *)this + 4) >= 1.0e20 )
    return j_sprintf(a2, "%0.3f:%0.3f", *((float *)this + 1), v2);
  return j_sprintf(a2, "%0.3f:%0.3f<%0.3f:%0.3f>", *((float *)this + 1), v2, *((float *)this + 3), *((float *)this + 4));
}


//======================================================================
// Ogre::GaussGenerator::randGauss(void)
// address: 0x00185558   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall Ogre::GaussGenerator::randGauss(Ogre::GaussGenerator *this)
{
  float v2; // r5
  float Float; // r0
  float v4; // r5
  float v5; // r0
  float v6; // r0
  float v7; // r6
  float v8; // r0
  float v9; // r7
  char *v11; // [sp+4h] [bp-8h]

  v11 = (char *)this + 1;
  if ( *((_BYTE *)this + 32) != 0 )
  {
    *((_BYTE *)this + 32) = 0;
    v2 = *((float *)this + 7);
  }
  else
  {
    do
    {
      Float = Ogre::RandomGenerator::getFloat(this);
      v4 = (float)(Float + Float) - 1.0;
      v5 = Ogre::RandomGenerator::getFloat(this);
      v6 = (float)(v5 + v5) - 1.0;
      v7 = v6;
    }
    while ( (float)((float)(v4 * v4) + (float)(v6 * v6)) >= 1.0 );
    v8 = (float)(j_logf((float)(v4 * v4) + (float)(v6 * v6)) * -2.0) / (float)((float)(v4 * v4) + (float)(v6 * v6));
    v9 = j_sqrtf(v8);
    *((float *)this + 6) = v4 * v9;
    v2 = v4 * v9;
    *((float *)this + 7) = v7 * v9;
    v11[31] = 1;
  }
  return LODWORD(v2);
}


//======================================================================
// Ogre::GaussGenerator::getGauss(void)
// address: 0x001855FC   size: 0x3A (58 bytes)
//======================================================================
int __fastcall Ogre::GaussGenerator::getGauss(Ogre::GaussGenerator *this)
{
  float v2; // r0
  float v3; // r6
  float v4; // r5

  v2 = (float)(COERCE_FLOAT(Ogre::GaussGenerator::randGauss(this)) * *((float *)this + 2)) + *((float *)this + 1);
  v3 = *((float *)this + 3);
  if ( v2 >= v3 )
    v3 = v2;
  v4 = *((float *)this + 4);
  if ( v3 <= v4 )
    v4 = v3;
  *((float *)this + 5) = v4;
  return LODWORD(v4);
}


//======================================================================
// Ogre::GaussGenerator::strtogmd(char const*,char **,float &,float &,float &,float &)const
// address: 0x00185638   size: 0xFA (250 bytes)
//======================================================================
int __fastcall Ogre::GaussGenerator::strtogmd(
        Ogre::GaussGenerator *this,
        char *a2,
        char **a3,
        float *a4,
        float *a5,
        float *a6,
        float *a7)
{
  float v9; // r0
  char *v10; // r4
  float v12; // r0
  char *v13; // r3
  int v14; // r2
  char *v15; // r6
  float v16; // r0
  int v17; // r3
  float v18; // r0
  char *v19; // r3
  int v20; // r2
  char *v21; // r2
  int v22; // r2
  char *v24; // [sp+Ch] [bp-10h] BYREF
  char *v25; // [sp+10h] [bp-Ch] BYREF
  char *v26; // [sp+14h] [bp-8h] BYREF

  *a6 = -1.0e20;
  *a7 = 1.0e20;
  v9 = j_strtod(a2, &v24);
  v10 = v24;
  *a4 = v9;
  *a5 = 0.0;
  if ( v10 == a2 )
  {
    *a4 = 0.0;
    if ( a3 != nullptr )
      *a3 = v10;
    return 0;
  }
  if ( *v10 != 58 || (v12 = j_strtod(v10 + 1, &v24), v13 = v24, *a5 = v12, v13 == v10 + 1) )
  {
    if ( a3 != nullptr )
      *a3 = v10;
    return 1;
  }
  v14 = (unsigned __int8)*v13;
  if ( v14 != 91 && v14 != 60 )
  {
    if ( a3 != nullptr )
      *a3 = v13;
    return 2;
  }
  v15 = v13 + 1;
  v16 = j_strtod(v13 + 1, &v25);
  *a6 = v16;
  v17 = (unsigned __int8)*v25;
  if ( v17 != 44 && v17 != 58 )
  {
    if ( a3 != nullptr )
      *a3 = v24;
    return 2;
  }
  v18 = j_strtod(++v25, &v26);
  v19 = v26;
  *a7 = v18;
  v20 = (unsigned __int8)*v19;
  if ( v20 != 93 && v20 != 62 )
  {
    if ( a3 != nullptr )
      *a3 = v24;
    return 2;
  }
  v21 = v25;
  if ( v15 == v25 - 1 )
    *a6 = -1.0e20;
  if ( v21 == v19 )
    v22 = 1621981420;
  else
    v22 = *(_DWORD *)a7;
  *(_DWORD *)a7 = v22;
  if ( a3 != nullptr )
    *a3 = v19 + 1;
  return 4;
}


//======================================================================
// Ogre::GaussGenerator::set(char const*)
// address: 0x0018573C   size: 0x1E (30 bytes)
//======================================================================
char *__fastcall Ogre::GaussGenerator::set(Ogre::GaussGenerator *this, char *a2)
{
  char *vars4; // [sp+14h] [bp+4h] BYREF

  Ogre::GaussGenerator::strtogmd(
    this,
    a2,
    &vars4,
    (float *)this + 1,
    (float *)this + 2,
    (float *)this + 3,
    (float *)this + 4);
  return vars4;
}


//======================================================================
// Ogre::GaussGenerator::GaussGenerator(char const*,int)
// address: 0x0018575C   size: 0x28 (40 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre14GaussGeneratorC1EPKci'
Ogre::GaussGenerator *__fastcall Ogre::GaussGenerator::GaussGenerator(Ogre::GaussGenerator *this, char *a2, int a3)
{
  *((_BYTE *)this + 32) = 0;
  *((_DWORD *)this + 1) = 1065353216;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = a3;
  *((_DWORD *)this + 3) = -525502228;
  *((_DWORD *)this + 4) = 1621981420;
  Ogre::GaussGenerator::set(this, a2);
  return this;
}

