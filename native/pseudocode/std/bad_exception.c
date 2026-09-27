// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: std::bad_exception

//======================================================================
// std::bad_exception::~bad_exception()
// address: 0x0039065C   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZNSt13bad_exceptionD2Ev'
void __fastcall std::bad_exception::~bad_exception(std::bad_exception *this)
{
  *(_DWORD *)this = &off_464280;
  std::exception::~exception(this);
}


//======================================================================
// std::bad_exception::what(void)const
// address: 0x003906A4   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall std::bad_exception::what(std::bad_exception *this)
{
  return "std::bad_exception";
}


//======================================================================
// std::bad_exception::~bad_exception()
// address: 0x003906C4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall std::bad_exception::~bad_exception(std::bad_exception *this)
{
  std::bad_exception::~bad_exception(this);
  operator delete(this);
}

