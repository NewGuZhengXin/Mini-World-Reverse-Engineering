// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CBasePRNG

//======================================================================
// anl::CBasePRNG::~CBasePRNG()
// address: 0x002A95E8   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl9CBasePRNGD1Ev'
void __fastcall anl::CBasePRNG::~CBasePRNG(anl::CBasePRNG *this)
{
  *(_DWORD *)this = &off_45DC30;
}


//======================================================================
// anl::CBasePRNG::~CBasePRNG()
// address: 0x002A9624   size: 0x16 (22 bytes)
//======================================================================
void __fastcall anl::CBasePRNG::~CBasePRNG(anl::CBasePRNG *this)
{
  *(_DWORD *)this = &off_45DC30;
  operator delete(this);
}


//======================================================================
// anl::CBasePRNG::get01(void)
// address: 0x0032E378   size: 0x16 (22 bytes)
//======================================================================
double __fastcall anl::CBasePRNG::get01(anl::CBasePRNG *this)
{
  return (double)(unsigned int)(*(int (__fastcall **)(anl::CBasePRNG *))(*(_DWORD *)this + 8))(this) / 4294967300.0;
}

