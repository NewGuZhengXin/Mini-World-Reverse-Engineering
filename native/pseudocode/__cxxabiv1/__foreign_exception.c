// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: __cxxabiv1::__foreign_exception

//======================================================================
// __cxxabiv1::__foreign_exception::~__foreign_exception()
// address: 0x00390688   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN10__cxxabiv119__foreign_exceptionD1Ev'
void __fastcall __cxxabiv1::__foreign_exception::~__foreign_exception(__cxxabiv1::__foreign_exception *this)
{
  *(_DWORD *)this = &off_4642C8;
}


//======================================================================
// __cxxabiv1::__foreign_exception::~__foreign_exception()
// address: 0x003906EC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall __cxxabiv1::__foreign_exception::~__foreign_exception(__cxxabiv1::__foreign_exception *this)
{
  __cxxabiv1::__foreign_exception::~__foreign_exception(this);
  operator delete(this);
}

