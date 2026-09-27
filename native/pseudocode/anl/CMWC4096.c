// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CMWC4096

//======================================================================
// anl::CMWC4096::setSeed(unsigned int)
// address: 0x002E1BB0   size: 0x4C (76 bytes)
//======================================================================
unsigned int __fastcall anl::CMWC4096::setSeed(anl::CMWC4096 *this, int a2)
{
  int v3; // r3
  char *v4; // r5
  unsigned int result; // r0

  v3 = 0;
  dword_517440 = a2;
  do
  {
    v4 = (char *)this + v3;
    v3 += 4;
    dword_517440 = 69069 * dword_517440 + 362437;
    *((_DWORD *)v4 + 1) = dword_517440;
  }
  while ( v3 != 0x4000 );
  result = (unsigned int)((double)(unsigned int)(*(int (__fastcall **)(int *, int))(dword_51743C + 8))(
                                                  &dword_51743C,
                                                  0x4000)
                        / 4294967300.0
                        * 18781.0);
  *((_DWORD *)this + 4097) = result;
  return result;
}


//======================================================================
// anl::CMWC4096::get(void)
// address: 0x002E1C20   size: 0x70 (112 bytes)
//======================================================================
int __fastcall anl::CMWC4096::get(anl::CMWC4096 *this)
{
  char *v1; // r5
  unsigned __int64 v2; // r2
  __int64 v4; // [sp+8h] [bp-Ch]

  anl::CMWC4096::get(void)::i = (anl::CMWC4096::get(void)::i + 1) & 0xFFF;
  v1 = (char *)this + 4 * anl::CMWC4096::get(void)::i;
  v4 = 18782LL * *((unsigned int *)v1 + 1) + *((unsigned int *)this + 4097);
  v2 = (unsigned int)v4 + (unsigned __int64)HIDWORD(v4);
  if ( v2 >= 0xFFFFFFFF )
  {
    LODWORD(v2) = v2 + 1;
    *((_DWORD *)this + 4097) = HIDWORD(v4) + 1;
  }
  else
  {
    *((_DWORD *)this + 4097) = HIDWORD(v4);
  }
  *((_DWORD *)v1 + 1) = -2 - v2;
  return -2 - v2;
}


//======================================================================
// anl::CMWC4096::~CMWC4096()
// address: 0x002E1D4C   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl8CMWC4096D1Ev'
void __fastcall anl::CMWC4096::~CMWC4096(anl::CMWC4096 *this)
{
  *(_DWORD *)this = &off_45DC30;
}


//======================================================================
// anl::CMWC4096::~CMWC4096()
// address: 0x002E1D78   size: 0x16 (22 bytes)
//======================================================================
void __fastcall anl::CMWC4096::~CMWC4096(anl::CMWC4096 *this)
{
  *(_DWORD *)this = &off_45DC30;
  operator delete(this);
}

