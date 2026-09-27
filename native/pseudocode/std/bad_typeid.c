// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: std::bad_typeid

//======================================================================
// std::bad_typeid::what(void)const
// address: 0x003BF46C   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall std::bad_typeid::what(std::bad_typeid *this)
{
  return "std::bad_typeid";
}


//======================================================================
// std::bad_typeid::~bad_typeid()
// address: 0x003BF478   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZNSt10bad_typeidD2Ev'
void __fastcall std::bad_typeid::~bad_typeid(std::bad_typeid *this)
{
  *(_DWORD *)this = &off_465E78;
  std::exception::~exception(this);
}


//======================================================================
// std::bad_typeid::~bad_typeid()
// address: 0x003BF494   size: 0x12 (18 bytes)
//======================================================================
void __fastcall std::bad_typeid::~bad_typeid(std::bad_typeid *this)
{
  std::bad_typeid::~bad_typeid(this);
  operator delete(this);
}

