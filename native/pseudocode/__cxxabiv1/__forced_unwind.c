// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: __cxxabiv1::__forced_unwind

//======================================================================
// __cxxabiv1::__forced_unwind::~__forced_unwind()
// address: 0x00390678   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN10__cxxabiv115__forced_unwindD1Ev'
void __fastcall __cxxabiv1::__forced_unwind::~__forced_unwind(__cxxabiv1::__forced_unwind *this)
{
  *(_DWORD *)this = &off_4642B0;
}


//======================================================================
// __cxxabiv1::__forced_unwind::~__forced_unwind()
// address: 0x003906D8   size: 0x12 (18 bytes)
//======================================================================
void __fastcall __cxxabiv1::__forced_unwind::~__forced_unwind(__cxxabiv1::__forced_unwind *this)
{
  __cxxabiv1::__forced_unwind::~__forced_unwind(this);
  operator delete(this);
}

