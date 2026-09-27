// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: std

//======================================================================
// std::left(std::ios_base &)
// address: 0x0038C610   size: 0x10 (16 bytes)
//======================================================================
int __fastcall std::left(int result)
{
  *(_DWORD *)(result + 12) = *(_DWORD *)(result + 12) & 0xFFFFFF4F | 0x20;
  return result;
}


//======================================================================
// std::uncaught_exception(void)
// address: 0x00390040   size: 0xE (14 bytes)
//======================================================================
bool std::uncaught_exception()
{
  return *(_DWORD *)(_cxa_get_globals() + 4) != 0;
}


//======================================================================
// std::terminate(void)
// address: 0x0039097C   size: 0xE (14 bytes)
//======================================================================
void __noreturn std::terminate()
{
  __cxxabiv1::__terminate((void (__fastcall *)(void (*)()))__cxxabiv1::__terminate_handler);
}


//======================================================================
// std::unexpected(void)
// address: 0x00390998   size: 0xE (14 bytes)
//======================================================================
void __noreturn std::unexpected()
{
  __cxxabiv1::__unexpected((void (__fastcall *)(void (*)()))__cxxabiv1::__unexpected_handler);
}


//======================================================================
// std::set_terminate(void (*)(void))
// address: 0x003909AC   size: 0xE (14 bytes)
//======================================================================
void *__fastcall std::set_terminate(void (*a1)())
{
  void *v1; // r2

  v1 = __cxxabiv1::__terminate_handler;
  __cxxabiv1::__terminate_handler = a1;
  return v1;
}


//======================================================================
// std::set_unexpected(void (*)(void))
// address: 0x003909C0   size: 0xE (14 bytes)
//======================================================================
void *__fastcall std::set_unexpected(void (*a1)())
{
  void *v1; // r2

  v1 = __cxxabiv1::__unexpected_handler;
  __cxxabiv1::__unexpected_handler = a1;
  return v1;
}


//======================================================================
// std::set_new_handler(void (*)(void))
// address: 0x00390C0C   size: 0xC (12 bytes)
//======================================================================
void *__fastcall std::set_new_handler(void (*a1)())
{
  void *v1; // r2

  v1 = off_55E4B8;
  off_55E4B8 = a1;
  return v1;
}

