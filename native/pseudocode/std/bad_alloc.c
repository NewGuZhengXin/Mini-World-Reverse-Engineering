// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: std::bad_alloc

//======================================================================
// std::bad_alloc::what(void)const
// address: 0x00390C4C   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall std::bad_alloc::what(std::bad_alloc *this)
{
  return "std::bad_alloc";
}


//======================================================================
// std::bad_alloc::~bad_alloc()
// address: 0x00390C58   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZNSt9bad_allocD2Ev'
void __fastcall std::bad_alloc::~bad_alloc(std::bad_alloc *this)
{
  *(_DWORD *)this = &off_464308;
  std::exception::~exception(this);
}


//======================================================================
// std::bad_alloc::~bad_alloc()
// address: 0x00390C74   size: 0x12 (18 bytes)
//======================================================================
void __fastcall std::bad_alloc::~bad_alloc(std::bad_alloc *this)
{
  std::bad_alloc::~bad_alloc(this);
  operator delete(this);
}

