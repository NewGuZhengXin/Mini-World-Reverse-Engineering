// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CImplicitExtractRGBAChannel

//======================================================================
// anl::CImplicitExtractRGBAChannel::~CImplicitExtractRGBAChannel()
// address: 0x00320EA4   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl27CImplicitExtractRGBAChannelD1Ev'
void __fastcall anl::CImplicitExtractRGBAChannel::~CImplicitExtractRGBAChannel(anl::CImplicitExtractRGBAChannel *this)
{
  *(_DWORD *)this = &off_462280;
}


//======================================================================
// anl::CImplicitExtractRGBAChannel::~CImplicitExtractRGBAChannel()
// address: 0x00320EB4   size: 0x16 (22 bytes)
//======================================================================
void __fastcall anl::CImplicitExtractRGBAChannel::~CImplicitExtractRGBAChannel(anl::CImplicitExtractRGBAChannel *this)
{
  *(_DWORD *)this = &off_462280;
  operator delete(this);
}


//======================================================================
// anl::CImplicitExtractRGBAChannel::get(double,double)
// address: 0x00320ED0   size: 0x3E (62 bytes)
//======================================================================
double __fastcall anl::CImplicitExtractRGBAChannel::get(anl::CImplicitExtractRGBAChannel *this, double a2, double a3)
{
  int v4; // r1
  float v6; // r3
  float v7; // r6
  float v8; // r7
  float v10[5]; // [sp+8h] [bp-14h] BYREF

  v4 = *((_DWORD *)this + 4);
  if ( v4 != 0 )
  {
    (*(void (__fastcall **)(float *))(*(_DWORD *)v4 + 8))(v10);
  }
  else
  {
    v6 = *((float *)this + 6);
    v7 = *((float *)this + 7);
    v10[0] = *((float *)this + 5);
    v8 = *((float *)this + 8);
    v10[1] = v6;
    v10[2] = v7;
    v10[3] = v8;
  }
  return v10[*((_DWORD *)this + 9)];
}


//======================================================================
// anl::CImplicitExtractRGBAChannel::get(double,double,double)
// address: 0x00320F0E   size: 0x46 (70 bytes)
//======================================================================
double __fastcall anl::CImplicitExtractRGBAChannel::get(
        anl::CImplicitExtractRGBAChannel *this,
        double a2,
        double a3,
        double a4)
{
  int v5; // r1
  float v7; // r3
  float v8; // r6
  float v9; // r7
  float v11[5]; // [sp+10h] [bp-14h] BYREF

  v5 = *((_DWORD *)this + 4);
  if ( v5 != 0 )
  {
    (*(void (__fastcall **)(float *))(*(_DWORD *)v5 + 12))(v11);
  }
  else
  {
    v7 = *((float *)this + 6);
    v8 = *((float *)this + 7);
    v11[0] = *((float *)this + 5);
    v9 = *((float *)this + 8);
    v11[1] = v7;
    v11[2] = v8;
    v11[3] = v9;
  }
  return v11[*((_DWORD *)this + 9)];
}


//======================================================================
// anl::CImplicitExtractRGBAChannel::get(double,double,double,double)
// address: 0x00320F54   size: 0x4E (78 bytes)
//======================================================================
double __fastcall anl::CImplicitExtractRGBAChannel::get(
        anl::CImplicitExtractRGBAChannel *this,
        double a2,
        double a3,
        double a4,
        double a5)
{
  int v6; // r1
  float v8; // r3
  float v9; // r6
  float v10; // r7
  float v12[5]; // [sp+18h] [bp-14h] BYREF

  v6 = *((_DWORD *)this + 4);
  if ( v6 != 0 )
  {
    (*(void (__fastcall **)(float *))(*(_DWORD *)v6 + 16))(v12);
  }
  else
  {
    v8 = *((float *)this + 6);
    v9 = *((float *)this + 7);
    v12[0] = *((float *)this + 5);
    v10 = *((float *)this + 8);
    v12[1] = v8;
    v12[2] = v9;
    v12[3] = v10;
  }
  return v12[*((_DWORD *)this + 9)];
}


//======================================================================
// anl::CImplicitExtractRGBAChannel::get(double,double,double,double,double,double)
// address: 0x00320FA2   size: 0x5E (94 bytes)
//======================================================================
double __fastcall anl::CImplicitExtractRGBAChannel::get(
        anl::CImplicitExtractRGBAChannel *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  int v8; // r1
  float v10; // r3
  float v11; // r6
  float v12; // r7
  float v14[5]; // [sp+28h] [bp-14h] BYREF

  v8 = *((_DWORD *)this + 4);
  if ( v8 != 0 )
  {
    (*(void (__fastcall **)(float *))(*(_DWORD *)v8 + 20))(v14);
  }
  else
  {
    v10 = *((float *)this + 6);
    v11 = *((float *)this + 7);
    v14[0] = *((float *)this + 5);
    v12 = *((float *)this + 8);
    v14[1] = v10;
    v14[2] = v11;
    v14[3] = v12;
  }
  return v14[*((_DWORD *)this + 9)];
}


//======================================================================
// anl::CImplicitExtractRGBAChannel::CImplicitExtractRGBAChannel(void)
// address: 0x00321000   size: 0x24 (36 bytes)
//======================================================================
// Alternative name is '_ZN3anl27CImplicitExtractRGBAChannelC1Ev'
_DWORD *__fastcall anl::CImplicitExtractRGBAChannel::CImplicitExtractRGBAChannel(_DWORD *this)
{
  *(this + 2) = -350469331;
  *(this + 3) = 1058682594;
  *(this + 4) = 0;
  *(this + 9) = 0;
  *this = &off_4637B8;
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  return this;
}


//======================================================================
// anl::CImplicitExtractRGBAChannel::CImplicitExtractRGBAChannel(int)
// address: 0x00321038   size: 0x24 (36 bytes)
//======================================================================
// Alternative name is '_ZN3anl27CImplicitExtractRGBAChannelC1Ei'
_DWORD *__fastcall anl::CImplicitExtractRGBAChannel::CImplicitExtractRGBAChannel(_DWORD *this, int a2)
{
  *(this + 2) = -350469331;
  *(this + 3) = 1058682594;
  *(this + 9) = a2;
  *this = &off_4637B8;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  return this;
}


//======================================================================
// anl::CImplicitExtractRGBAChannel::setSource(anl::CRGBAModuleBase *)
// address: 0x00321070   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitExtractRGBAChannel::setSource(int this, anl::CRGBAModuleBase *a2)
{
  *(_DWORD *)(this + 16) = a2;
  return this;
}


//======================================================================
// anl::CImplicitExtractRGBAChannel::setSource(float,float,float,float)
// address: 0x00321074   size: 0x12 (18 bytes)
//======================================================================
int __fastcall anl::CImplicitExtractRGBAChannel::setSource(int this, float a2, float a3, float a4, float a5)
{
  *(float *)(this + 28) = a4;
  *(_DWORD *)(this + 16) = 0;
  *(float *)(this + 20) = a2;
  *(float *)(this + 24) = a3;
  *(float *)(this + 32) = a5;
  return this;
}


//======================================================================
// anl::CImplicitExtractRGBAChannel::setChannel(int)
// address: 0x00321086   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::CImplicitExtractRGBAChannel::setChannel(int this, int a2)
{
  *(_DWORD *)(this + 36) = a2;
  return this;
}

