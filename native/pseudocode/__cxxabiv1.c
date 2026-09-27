// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: __cxxabiv1

//======================================================================
// __cxxabiv1::__terminate(void (*)(void))
// address: 0x00390954   size: 0x26 (38 bytes)
//======================================================================
void __fastcall __noreturn __cxxabiv1::__terminate(void (__fastcall *a1)(void (*)()))
{
  a1((void (*)())a1);
  j_abort();
}


//======================================================================
// __cxxabiv1::__unexpected(void (*)(void))
// address: 0x00390990   size: 0x8 (8 bytes)
//======================================================================
void __fastcall __noreturn __cxxabiv1::__unexpected(void (__fastcall *a1)(void (*)()))
{
  a1((void (*)())a1);
  std::terminate();
}

