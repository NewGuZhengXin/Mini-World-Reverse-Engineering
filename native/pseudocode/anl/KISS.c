// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::KISS

//======================================================================
// anl::KISS::setSeed(unsigned int)
// address: 0x002E1CA8   size: 0x2E (46 bytes)
//======================================================================
_DWORD *__fastcall anl::KISS::setSeed(_DWORD *this, unsigned int a2)
{
  int v2; // r1
  int v3; // r1

  dword_517440 = 69069 * a2 + 362437;
  *(this + 1) = dword_517440;
  v2 = 69069 * dword_517440 + 362437;
  *(this + 2) = v2;
  v3 = 69069 * v2 + 362437;
  *(this + 3) = v3;
  dword_517440 = 69069 * v3 + 362437;
  *(this + 4) = dword_517440;
  return this;
}


//======================================================================
// anl::KISS::get(void)
// address: 0x002E1CE4   size: 0x48 (72 bytes)
//======================================================================
int __fastcall anl::KISS::get(anl::KISS *this)
{
  int v1; // r6
  unsigned int v2; // r2
  int v3; // r5
  int v4; // r2
  int v5; // r3
  unsigned int v6; // r2
  int v7; // r4
  int v8; // r1

  v1 = 36969 * (unsigned __int16)*((_DWORD *)this + 1) + HIWORD(*((_DWORD *)this + 1));
  v2 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 1) = v1;
  v3 = 18000 * (unsigned __int16)v2 + HIWORD(v2);
  v4 = *((_DWORD *)this + 3);
  v5 = *((_DWORD *)this + 4);
  *((_DWORD *)this + 2) = v3;
  v6 = v4 ^ (v4 << 17) ^ ((v4 ^ (unsigned int)(v4 << 17)) >> 13);
  v7 = 69069 * v5 + 1234567;
  v8 = (32 * v6) ^ v6;
  *((_DWORD *)this + 4) = v7;
  *((_DWORD *)this + 3) = v8;
  return (v7 ^ ((v1 << 16) + v3)) + v8;
}


//======================================================================
// anl::KISS::~KISS()
// address: 0x002E1D3C   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl4KISSD1Ev'
void __fastcall anl::KISS::~KISS(anl::KISS *this)
{
  *(_DWORD *)this = &off_45DC30;
}


//======================================================================
// anl::KISS::~KISS()
// address: 0x002E1D5C   size: 0x16 (22 bytes)
//======================================================================
void __fastcall anl::KISS::~KISS(anl::KISS *this)
{
  *(_DWORD *)this = &off_45DC30;
  operator delete(this);
}

