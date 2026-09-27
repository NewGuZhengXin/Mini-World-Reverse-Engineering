// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CRGBACompositeChannels

//======================================================================
// anl::CRGBACompositeChannels::~CRGBACompositeChannels()
// address: 0x00331D54   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl22CRGBACompositeChannelsD1Ev'
void __fastcall anl::CRGBACompositeChannels::~CRGBACompositeChannels(anl::CRGBACompositeChannels *this)
{
  *(_DWORD *)this = &off_4634C8;
}


//======================================================================
// anl::CRGBACompositeChannels::~CRGBACompositeChannels()
// address: 0x00331D64   size: 0x12 (18 bytes)
//======================================================================
void __fastcall anl::CRGBACompositeChannels::~CRGBACompositeChannels(anl::CRGBACompositeChannels *this)
{
  anl::CRGBACompositeChannels::~CRGBACompositeChannels(this);
  operator delete(this);
}


//======================================================================
// anl::CRGBACompositeChannels::get(double,double)
// address: 0x00331D76   size: 0xC0 (192 bytes)
//======================================================================
anl::CRGBACompositeChannels *__fastcall anl::CRGBACompositeChannels::get(
        anl::CRGBACompositeChannels *this,
        _DWORD *a2,
        double a3,
        double a4)
{
  double v7; // r0
  double v8; // r0
  double v9; // r0
  double v10; // r0
  float v11; // r0
  int v12; // r2
  int v13; // r2
  int v15; // [sp+Ch] [bp-30h]
  int v16; // [sp+10h] [bp-2Ch]
  int v17; // [sp+14h] [bp-28h]
  _DWORD v18[4]; // [sp+18h] [bp-24h] BYREF
  int v19; // [sp+28h] [bp-14h] BYREF
  int v20; // [sp+2Ch] [bp-10h]
  int v21; // [sp+30h] [bp-Ch]
  int v22; // [sp+34h] [bp-8h]

  LODWORD(v7) = anl::CScalarParameter::get((anl::CScalarParameter *)(a2 + 2), a3, a4);
  *(float *)&v7 = v7;
  v15 = LODWORD(v7);
  LODWORD(v8) = anl::CScalarParameter::get((anl::CScalarParameter *)(a2 + 6), a3, a4);
  *(float *)&v8 = v8;
  v16 = LODWORD(v8);
  LODWORD(v9) = anl::CScalarParameter::get((anl::CScalarParameter *)(a2 + 10), a3, a4);
  *(float *)&v9 = v9;
  v17 = LODWORD(v9);
  LODWORD(v10) = anl::CScalarParameter::get((anl::CScalarParameter *)(a2 + 14), a3, a4);
  v11 = v10;
  if ( a2[18] != 0 )
  {
    v18[0] = v15;
    *(float *)&v18[3] = v11;
    v18[1] = v16;
    v18[2] = v17;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    anl::HSVtoRGBA((int)v18, (int)&v19);
    v12 = v20;
    *(_DWORD *)this = v19;
    *((_DWORD *)this + 1) = v12;
    v13 = v22;
    *((_DWORD *)this + 2) = v21;
    *((_DWORD *)this + 3) = v13;
  }
  else
  {
    *((float *)this + 3) = v11;
    *(_DWORD *)this = v15;
    *((_DWORD *)this + 1) = v16;
    *((_DWORD *)this + 2) = v17;
  }
  return this;
}


//======================================================================
// anl::CRGBACompositeChannels::get(double,double,double)
// address: 0x00331E36   size: 0xE0 (224 bytes)
//======================================================================
anl::CRGBACompositeChannels *__fastcall anl::CRGBACompositeChannels::get(
        anl::CRGBACompositeChannels *this,
        _DWORD *a2,
        double a3,
        double a4,
        double a5)
{
  double v8; // r0
  double v9; // r0
  double v10; // r0
  double v11; // r0
  float v12; // r0
  int v13; // r2
  int v14; // r2
  int v16; // [sp+14h] [bp-30h]
  int v17; // [sp+18h] [bp-2Ch]
  int v18; // [sp+1Ch] [bp-28h]
  _DWORD v19[4]; // [sp+20h] [bp-24h] BYREF
  int v20; // [sp+30h] [bp-14h] BYREF
  int v21; // [sp+34h] [bp-10h]
  int v22; // [sp+38h] [bp-Ch]
  int v23; // [sp+3Ch] [bp-8h]

  LODWORD(v8) = anl::CScalarParameter::get((anl::CScalarParameter *)(a2 + 2), a3, a4, a5);
  *(float *)&v8 = v8;
  v16 = LODWORD(v8);
  LODWORD(v9) = anl::CScalarParameter::get((anl::CScalarParameter *)(a2 + 6), a3, a4, a5);
  *(float *)&v9 = v9;
  v17 = LODWORD(v9);
  LODWORD(v10) = anl::CScalarParameter::get((anl::CScalarParameter *)(a2 + 10), a3, a4, a5);
  *(float *)&v10 = v10;
  v18 = LODWORD(v10);
  LODWORD(v11) = anl::CScalarParameter::get((anl::CScalarParameter *)(a2 + 14), a3, a4, a5);
  v12 = v11;
  if ( a2[18] != 0 )
  {
    v19[0] = v16;
    *(float *)&v19[3] = v12;
    v19[1] = v17;
    v19[2] = v18;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    anl::HSVtoRGBA((int)v19, (int)&v20);
    v13 = v21;
    *(_DWORD *)this = v20;
    *((_DWORD *)this + 1) = v13;
    v14 = v23;
    *((_DWORD *)this + 2) = v22;
    *((_DWORD *)this + 3) = v14;
  }
  else
  {
    *((float *)this + 3) = v12;
    *(_DWORD *)this = v16;
    *((_DWORD *)this + 1) = v17;
    *((_DWORD *)this + 2) = v18;
  }
  return this;
}


//======================================================================
// anl::CRGBACompositeChannels::get(double,double,double,double)
// address: 0x00331F16   size: 0x100 (256 bytes)
//======================================================================
anl::CRGBACompositeChannels *__fastcall anl::CRGBACompositeChannels::get(
        anl::CRGBACompositeChannels *this,
        _DWORD *a2,
        double a3,
        double a4,
        double a5,
        double a6)
{
  double v9; // r0
  double v10; // r0
  double v11; // r0
  double v12; // r0
  float v13; // r0
  int v14; // r2
  int v15; // r2
  int v17; // [sp+1Ch] [bp-30h]
  int v18; // [sp+20h] [bp-2Ch]
  int v19; // [sp+24h] [bp-28h]
  _DWORD v20[4]; // [sp+28h] [bp-24h] BYREF
  int v21; // [sp+38h] [bp-14h] BYREF
  int v22; // [sp+3Ch] [bp-10h]
  int v23; // [sp+40h] [bp-Ch]
  int v24; // [sp+44h] [bp-8h]

  LODWORD(v9) = anl::CScalarParameter::get((anl::CScalarParameter *)(a2 + 2), a3, a4, a5, a6);
  *(float *)&v9 = v9;
  v17 = LODWORD(v9);
  LODWORD(v10) = anl::CScalarParameter::get((anl::CScalarParameter *)(a2 + 6), a3, a4, a5, a6);
  *(float *)&v10 = v10;
  v18 = LODWORD(v10);
  LODWORD(v11) = anl::CScalarParameter::get((anl::CScalarParameter *)(a2 + 10), a3, a4, a5, a6);
  *(float *)&v11 = v11;
  v19 = LODWORD(v11);
  LODWORD(v12) = anl::CScalarParameter::get((anl::CScalarParameter *)(a2 + 14), a3, a4, a5, a6);
  v13 = v12;
  if ( a2[18] != 0 )
  {
    v20[0] = v17;
    *(float *)&v20[3] = v13;
    v20[1] = v18;
    v20[2] = v19;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    anl::HSVtoRGBA((int)v20, (int)&v21);
    v14 = v22;
    *(_DWORD *)this = v21;
    *((_DWORD *)this + 1) = v14;
    v15 = v24;
    *((_DWORD *)this + 2) = v23;
    *((_DWORD *)this + 3) = v15;
  }
  else
  {
    *((float *)this + 3) = v13;
    *(_DWORD *)this = v17;
    *((_DWORD *)this + 1) = v18;
    *((_DWORD *)this + 2) = v19;
  }
  return this;
}


//======================================================================
// anl::CRGBACompositeChannels::get(double,double,double,double,double,double)
// address: 0x00332016   size: 0x140 (320 bytes)
//======================================================================
anl::CRGBACompositeChannels *__fastcall anl::CRGBACompositeChannels::get(
        anl::CRGBACompositeChannels *this,
        _DWORD *a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8)
{
  double v11; // r0
  double v12; // r0
  double v13; // r0
  double v14; // r0
  float v15; // r0
  int v16; // r2
  int v17; // r2
  int v19; // [sp+2Ch] [bp-30h]
  int v20; // [sp+30h] [bp-2Ch]
  int v21; // [sp+34h] [bp-28h]
  _DWORD v22[4]; // [sp+38h] [bp-24h] BYREF
  int v23; // [sp+48h] [bp-14h] BYREF
  int v24; // [sp+4Ch] [bp-10h]
  int v25; // [sp+50h] [bp-Ch]
  int v26; // [sp+54h] [bp-8h]

  LODWORD(v11) = anl::CScalarParameter::get((anl::CScalarParameter *)(a2 + 2), a3, a4, a5, a6, a7, a8);
  *(float *)&v11 = v11;
  v19 = LODWORD(v11);
  LODWORD(v12) = anl::CScalarParameter::get((anl::CScalarParameter *)(a2 + 6), a3, a4, a5, a6, a7, a8);
  *(float *)&v12 = v12;
  v20 = LODWORD(v12);
  LODWORD(v13) = anl::CScalarParameter::get((anl::CScalarParameter *)(a2 + 10), a3, a4, a5, a6, a7, a8);
  *(float *)&v13 = v13;
  v21 = LODWORD(v13);
  LODWORD(v14) = anl::CScalarParameter::get((anl::CScalarParameter *)(a2 + 14), a3, a4, a5, a6, a7, a8);
  v15 = v14;
  if ( a2[18] != 0 )
  {
    v22[0] = v19;
    *(float *)&v22[3] = v15;
    v22[1] = v20;
    v22[2] = v21;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    anl::HSVtoRGBA((int)v22, (int)&v23);
    v16 = v24;
    *(_DWORD *)this = v23;
    *((_DWORD *)this + 1) = v16;
    v17 = v26;
    *((_DWORD *)this + 2) = v25;
    *((_DWORD *)this + 3) = v17;
  }
  else
  {
    *((float *)this + 3) = v15;
    *(_DWORD *)this = v19;
    *((_DWORD *)this + 1) = v20;
    *((_DWORD *)this + 2) = v21;
  }
  return this;
}


//======================================================================
// anl::CRGBACompositeChannels::CRGBACompositeChannels(void)
// address: 0x00332158   size: 0x30 (48 bytes)
//======================================================================
// Alternative name is '_ZN3anl22CRGBACompositeChannelsC1Ev'
_DWORD *__fastcall anl::CRGBACompositeChannels::CRGBACompositeChannels(_DWORD *this)
{
  *(this + 4) = 0;
  *(this + 8) = 0;
  *(this + 12) = 0;
  *this = &off_463D68;
  *(this + 16) = 0;
  *(this + 18) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 10) = 0;
  *(this + 11) = 0;
  *(this + 14) = 0;
  *(this + 15) = 1072693248;
  return this;
}


//======================================================================
// anl::CRGBACompositeChannels::CRGBACompositeChannels(int)
// address: 0x003321A0   size: 0x32 (50 bytes)
//======================================================================
// Alternative name is '_ZN3anl22CRGBACompositeChannelsC1Ei'
_DWORD *__fastcall anl::CRGBACompositeChannels::CRGBACompositeChannels(_DWORD *this, int a2)
{
  *(this + 4) = 0;
  *this = &off_463D68;
  *(this + 8) = 0;
  *(this + 12) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 10) = 0;
  *(this + 11) = 0;
  *(this + 16) = 0;
  *(this + 14) = 0;
  *(this + 15) = 1072693248;
  *(this + 18) = a2;
  return this;
}


//======================================================================
// anl::CRGBACompositeChannels::setRedSource(anl::CImplicitModuleBase *)
// address: 0x003321F0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CRGBACompositeChannels::setRedSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 16) = a2;
  return this;
}


//======================================================================
// anl::CRGBACompositeChannels::setGreenSource(anl::CImplicitModuleBase *)
// address: 0x003321F4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CRGBACompositeChannels::setGreenSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 32) = a2;
  return this;
}


//======================================================================
// anl::CRGBACompositeChannels::setBlueSource(anl::CImplicitModuleBase *)
// address: 0x003321F8   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CRGBACompositeChannels::setBlueSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 48) = a2;
  return this;
}


//======================================================================
// anl::CRGBACompositeChannels::setHueSource(anl::CImplicitModuleBase *)
// address: 0x003321FC   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CRGBACompositeChannels::setHueSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 16) = a2;
  return this;
}


//======================================================================
// anl::CRGBACompositeChannels::setSatSource(anl::CImplicitModuleBase *)
// address: 0x00332200   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CRGBACompositeChannels::setSatSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 32) = a2;
  return this;
}


//======================================================================
// anl::CRGBACompositeChannels::setValSource(anl::CImplicitModuleBase *)
// address: 0x00332204   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CRGBACompositeChannels::setValSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 48) = a2;
  return this;
}


//======================================================================
// anl::CRGBACompositeChannels::setAlphaSource(anl::CImplicitModuleBase *)
// address: 0x00332208   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CRGBACompositeChannels::setAlphaSource(int this, anl::CImplicitModuleBase *a2)
{
  *(_DWORD *)(this + 64) = a2;
  return this;
}


//======================================================================
// anl::CRGBACompositeChannels::setRedSource(double)
// address: 0x0033220C   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CRGBACompositeChannels::setRedSource(int this, double a2)
{
  *(_DWORD *)(this + 16) = 0;
  *(double *)(this + 8) = a2;
  return this;
}


//======================================================================
// anl::CRGBACompositeChannels::setGreenSource(double)
// address: 0x00332216   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CRGBACompositeChannels::setGreenSource(int this, double a2)
{
  *(_DWORD *)(this + 32) = 0;
  *(double *)(this + 24) = a2;
  return this;
}


//======================================================================
// anl::CRGBACompositeChannels::setBlueSource(double)
// address: 0x00332220   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CRGBACompositeChannels::setBlueSource(int this, double a2)
{
  *(_DWORD *)(this + 48) = 0;
  *(double *)(this + 40) = a2;
  return this;
}


//======================================================================
// anl::CRGBACompositeChannels::setAlphaSource(double)
// address: 0x0033222A   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CRGBACompositeChannels::setAlphaSource(int this, double a2)
{
  *(_DWORD *)(this + 64) = 0;
  *(double *)(this + 56) = a2;
  return this;
}


//======================================================================
// anl::CRGBACompositeChannels::setHueSource(double)
// address: 0x00332234   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CRGBACompositeChannels::setHueSource(int this, double a2)
{
  *(_DWORD *)(this + 16) = 0;
  *(double *)(this + 8) = a2;
  return this;
}


//======================================================================
// anl::CRGBACompositeChannels::setSatSource(double)
// address: 0x0033223E   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CRGBACompositeChannels::setSatSource(int this, double a2)
{
  *(_DWORD *)(this + 32) = 0;
  *(double *)(this + 24) = a2;
  return this;
}


//======================================================================
// anl::CRGBACompositeChannels::setValSource(double)
// address: 0x00332248   size: 0xA (10 bytes)
//======================================================================
int __fastcall anl::CRGBACompositeChannels::setValSource(int this, double a2)
{
  *(_DWORD *)(this + 48) = 0;
  *(double *)(this + 40) = a2;
  return this;
}

