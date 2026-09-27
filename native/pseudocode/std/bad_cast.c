// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: std::bad_cast

//======================================================================
// std::bad_cast::what(void)const
// address: 0x003BF508   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall std::bad_cast::what(std::bad_cast *this)
{
  return "std::bad_cast";
}


//======================================================================
// std::bad_cast::~bad_cast()
// address: 0x003BF514   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZNSt8bad_castD2Ev'
void __fastcall std::bad_cast::~bad_cast(std::bad_cast *this)
{
  *(_DWORD *)this = &off_465EA8;
  std::exception::~exception(this);
}


//======================================================================
// std::bad_cast::~bad_cast()
// address: 0x003BF530   size: 0x12 (18 bytes)
//======================================================================
void __fastcall std::bad_cast::~bad_cast(std::bad_cast *this)
{
  std::bad_cast::~bad_cast(this);
  operator delete(this);
}

