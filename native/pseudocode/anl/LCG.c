// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::LCG

//======================================================================
// anl::LCG::setSeed(unsigned int)
// address: 0x002A95F8   size: 0x4 (4 bytes)
//======================================================================
int __fastcall anl::LCG::setSeed(int this, unsigned int a2)
{
  *(_DWORD *)(this + 4) = a2;
  return this;
}


//======================================================================
// anl::LCG::get(void)
// address: 0x002A95FC   size: 0x10 (16 bytes)
//======================================================================
int __fastcall anl::LCG::get(anl::LCG *this)
{
  int result; // r0

  result = 69069 * *((_DWORD *)this + 1) + 362437;
  *((_DWORD *)this + 1) = result;
  return result;
}


//======================================================================
// anl::LCG::~LCG()
// address: 0x002A9614   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl3LCGD1Ev'
void __fastcall anl::LCG::~LCG(anl::LCG *this)
{
  *(_DWORD *)this = &off_45DC30;
}


//======================================================================
// anl::LCG::~LCG()
// address: 0x002A9640   size: 0x16 (22 bytes)
//======================================================================
void __fastcall anl::LCG::~LCG(anl::LCG *this)
{
  *(_DWORD *)this = &off_45DC30;
  operator delete(this);
}

