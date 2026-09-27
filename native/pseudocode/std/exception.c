// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: std::exception

//======================================================================
// std::exception::~exception()
// address: 0x0039064C   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZNSt9exceptionD1Ev'
void __fastcall std::exception::~exception(std::exception *this)
{
  *(_DWORD *)this = &off_4642E0;
}


//======================================================================
// std::exception::what(void)const
// address: 0x00390698   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall std::exception::what(std::exception *this)
{
  return "std::exception";
}


//======================================================================
// std::exception::~exception()
// address: 0x003906B0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall std::exception::~exception(std::exception *this)
{
  std::exception::~exception(this);
  operator delete(this);
}

