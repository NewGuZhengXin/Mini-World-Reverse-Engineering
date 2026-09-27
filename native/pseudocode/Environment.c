// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Environment

//======================================================================
// Environment::~Environment()
// address: 0x002F1C80   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN11EnvironmentD1Ev'
void __fastcall Environment::~Environment(Environment *this)
{
  *(_DWORD *)this = &off_462360;
}


//======================================================================
// Environment::update(unsigned int)
// address: 0x002F1C90   size: 0x2E (46 bytes)
//======================================================================
bool __fastcall Environment::update(Environment *this, unsigned int a2)
{
  float v3; // r6
  _BOOL4 result; // r0

  v3 = (float)((float)a2 / 50.0) + *((float *)this + 26);
  result = v3 > 1.0;
  if ( v3 > 1.0 )
    *((_DWORD *)this + 26) = 1065353216;
  else
    *((float *)this + 26) = v3;
  return result;
}


//======================================================================
// Environment::getLighting(WCoord const&)
// address: 0x002F1CC4   size: 0xE (14 bytes)
//======================================================================
_DWORD *__fastcall Environment::getLighting(_DWORD *result)
{
  *result = 1065353216;
  result[1] = 1065353216;
  result[2] = 1065353216;
  result[3] = 1065353216;
  return result;
}


//======================================================================
// Environment::genLightBrightTable(void)
// address: 0x002F1CD4   size: 0x5A (90 bytes)
//======================================================================
__int64 __fastcall Environment::genLightBrightTable(Environment *this)
{
  int i; // r4
  float v2; // r5
  __int64 v4; // [sp+0h] [bp-Ch]

  LODWORD(v4) = this;
  for ( i = 0; i != 16; ++i )
  {
    v2 = 1.0 - (float)((float)i / 15.0);
    HIDWORD(v4) = (char *)this + 4 * i;
    *(float *)(HIDWORD(v4) + 8) = (float)((float)(1.0 - v2) / (float)((float)(v2 * 3.0) + 1.0)) + 0.0;
  }
  return v4;
}


//======================================================================
// Environment::~Environment()
// address: 0x002F1D38   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Environment::~Environment(Environment *this)
{
  Environment::~Environment(this);
  operator delete(this);
}


//======================================================================
// Environment::calculateCelestialAngle(int)
// address: 0x002F1D4C   size: 0x92 (146 bytes)
//======================================================================
float __fastcall Environment::calculateCelestialAngle(Environment *this, int a2)
{
  float v2; // r4
  float v3; // r0
  float v4; // r0

  v2 = (float)((float)a2 / 24000.0) - 0.25;
  if ( v2 < 0.0 )
  {
    v3 = v2 + 1.0;
LABEL_5:
    v2 = v3;
    goto LABEL_6;
  }
  if ( v2 > 1.0 )
  {
    v3 = v2 - 1.0;
    goto LABEL_5;
  }
LABEL_6:
  v4 = j_cos((float)((float)(v2 * 180.0) * 0.017453));
  return v2 + (float)((float)((float)(1.0 - (float)((float)(v4 + 1.0) * 0.5)) - v2) / 3.0);
}


//======================================================================
// Environment::load(WorldMapData *)
// address: 0x002F1DF0   size: 0x22 (34 bytes)
//======================================================================
int __fastcall Environment::load(int result, int a2)
{
  int v2; // r3
  int v3; // r3

  *(_BYTE *)(result + 76) = *(_BYTE *)(a2 + 16);
  *(_BYTE *)(result + 77) = *(_BYTE *)(a2 + 17);
  *(_DWORD *)(result + 80) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(result + 84) = *(_DWORD *)(a2 + 24);
  v2 = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(result + 92) = v2;
  *(_DWORD *)(result + 88) = v2;
  v3 = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(result + 100) = v3;
  *(_DWORD *)(result + 96) = v3;
  return result;
}


//======================================================================
// Environment::save(WorldMapData *)
// address: 0x002F1E12   size: 0x22 (34 bytes)
//======================================================================
int __fastcall Environment::save(int a1, int a2)
{
  int result; // r0

  *(_BYTE *)(a2 + 16) = *(_BYTE *)(a1 + 76);
  *(_BYTE *)(a2 + 17) = *(_BYTE *)(a1 + 77);
  *(_DWORD *)(a2 + 20) = *(_DWORD *)(a1 + 80);
  *(_DWORD *)(a2 + 24) = *(_DWORD *)(a1 + 84);
  *(_DWORD *)(a2 + 28) = *(_DWORD *)(a1 + 92);
  result = *(_DWORD *)(a1 + 100);
  *(_DWORD *)(a2 + 32) = result;
  return result;
}


//======================================================================
// Environment::getCelestialAngle(void)
// address: 0x002F1E34   size: 0x14 (20 bytes)
//======================================================================
int __fastcall Environment::getCelestialAngle(Environment *this)
{
  return (*(int (__fastcall **)(Environment *, _DWORD))(*(_DWORD *)this + 24))(this, *(_DWORD *)(g_WorldMgr + 56));
}


//======================================================================
// Environment::resetRainThunder(void)
// address: 0x002F1E4C   size: 0x10 (16 bytes)
//======================================================================
int __fastcall Environment::resetRainThunder(int this)
{
  *(_BYTE *)(this + 76) = 0;
  *(_DWORD *)(this + 80) = 0;
  *(_BYTE *)(this + 77) = 0;
  *(_DWORD *)(this + 84) = 0;
  return this;
}


//======================================================================
// Environment::toggleRain(void)
// address: 0x002F1E5C   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Environment::toggleRain(int this)
{
  *(_DWORD *)(this + 80) = 1;
  return this;
}


//======================================================================
// Environment::toggleThunder(void)
// address: 0x002F1E62   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Environment::toggleThunder(int this)
{
  *(_DWORD *)(this + 84) = 1;
  return this;
}


//======================================================================
// Environment::getRainStrength(void)
// address: 0x002F1E68   size: 0x1E (30 bytes)
//======================================================================
float __fastcall Environment::getRainStrength(Environment *this)
{
  return *((float *)this + 22) + (float)((float)(*((float *)this + 23) - *((float *)this + 22)) * *((float *)this + 26));
}


//======================================================================
// Environment::getThunderStrength(void)
// address: 0x002F1E86   size: 0x2E (46 bytes)
//======================================================================
float __fastcall Environment::getThunderStrength(Environment *this)
{
  float v1; // r5

  v1 = *((float *)this + 24) + (float)((float)(*((float *)this + 25) - *((float *)this + 24)) * *((float *)this + 26));
  return v1 * Environment::getRainStrength(this);
}


//======================================================================
// Environment::calculateSkylightSubtracted(void)
// address: 0x002F1EB4   size: 0xCA (202 bytes)
//======================================================================
int __fastcall Environment::calculateSkylightSubtracted(Environment *this)
{
  double v2; // r0
  float v3; // r0
  float v4; // r5
  float v5; // r5

  v2 = (float)((float)(COERCE_FLOAT(Environment::getCelestialAngle(this)) * 360.0) * 0.017453);
  v3 = j_cos(v2);
  v4 = 1.0 - (float)((float)(v3 + v3) + 0.5);
  if ( v4 < 0.0 )
  {
    v4 = 0.0;
  }
  else if ( v4 > 1.0 )
  {
    v4 = 1.0;
  }
  v5 = (float)(1.0 - v4) * (float)(1.0 - (float)((float)(Environment::getRainStrength(this) * 5.0) * 0.0625));
  return (int)(float)((float)(1.0
                            - (float)(v5
                                    * (float)(1.0
                                            - (float)((float)(Environment::getThunderStrength(this) * 5.0) * 0.0625))))
                    * 11.0);
}


//======================================================================
// Environment::Environment(World *)
// address: 0x002F1F90   size: 0x3A (58 bytes)
//======================================================================
// Alternative name is '_ZN11EnvironmentC1EP5World'
void __fastcall Environment::Environment(Environment *this, World *a2)
{
  *((_DWORD *)this + 1) = a2;
  *(_DWORD *)this = &off_462360;
  Environment::genLightBrightTable(this);
  *((_DWORD *)this + 18) = Environment::calculateSkylightSubtracted(this);
  *((_BYTE *)this + 76) = 0;
  *((_BYTE *)this + 77) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 26) = 0;
}


//======================================================================
// Environment::updateWeather(void)
// address: 0x002F1FD0   size: 0xDC (220 bytes)
//======================================================================
bool __fastcall Environment::updateWeather(Environment *this)
{
  int v1; // r3
  _BYTE *v3; // r5
  int v4; // r0
  int v5; // r1
  int v6; // r3
  int v7; // r3
  _BYTE *v8; // r6
  int v9; // r0
  int v10; // r1
  int v11; // r3
  float v12; // r0
  float v13; // r1
  float v14; // r6
  float v15; // r0
  float v16; // r1
  float v17; // r5
  _BOOL4 result; // r0

  v1 = *((_DWORD *)this + 21);
  v3 = (char *)this + 77;
  if ( v1 > 0 )
  {
    v6 = v1 - 1;
    *((_DWORD *)this + 21) = v6;
    if ( v6 == 0 )
      *v3 ^= 1u;
  }
  else
  {
    if ( *v3 != 0 )
    {
      v4 = 3600;
      v5 = 15600;
    }
    else
    {
      v4 = 12000;
      v5 = 180000;
    }
    *((_DWORD *)this + 21) = GenRandomInt(v4, v5);
  }
  v7 = *((_DWORD *)this + 20);
  v8 = (char *)this + 76;
  if ( v7 > 0 )
  {
    v11 = v7 - 1;
    *((_DWORD *)this + 20) = v11;
    if ( v11 == 0 )
      *v8 ^= 1u;
  }
  else
  {
    if ( *v8 != 0 )
    {
      v9 = 6000;
      v10 = 12000;
    }
    else
    {
      v9 = 12000;
      v10 = 180000;
    }
    *((_DWORD *)this + 20) = GenRandomInt(v9, v10);
  }
  v12 = *((float *)this + 23);
  *((float *)this + 22) = v12;
  if ( *v8 != 0 )
    v13 = 0.01;
  else
    v13 = -0.01;
  v14 = v12 + v13;
  if ( (float)(v12 + v13) < 0.0 )
  {
    v14 = 0.0;
  }
  else if ( v14 > 1.0 )
  {
    v14 = 1.0;
  }
  v15 = *((float *)this + 25);
  *((float *)this + 23) = v14;
  *((float *)this + 24) = v15;
  if ( *v3 != 0 )
    v16 = 0.01;
  else
    v16 = -0.01;
  v17 = v15 + v16;
  result = (float)(v15 + v16) < 0.0;
  if ( result )
  {
    v17 = 0.0;
  }
  else
  {
    result = v17 > 1.0;
    if ( v17 > 1.0 )
      v17 = 1.0;
  }
  *((float *)this + 25) = v17;
  return result;
}


//======================================================================
// Environment::tick(void)
// address: 0x002F20C4   size: 0x16 (22 bytes)
//======================================================================
bool __fastcall Environment::tick(Environment *this)
{
  _BOOL4 result; // r0

  *((_DWORD *)this + 18) = Environment::calculateSkylightSubtracted(this);
  result = Environment::updateWeather(this);
  *((_DWORD *)this + 26) = 0;
  return result;
}

