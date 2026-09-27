// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: profiny::Timer

//======================================================================
// profiny::Timer::Timer(void)
// address: 0x0015BD80   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZN7profiny5TimerC1Ev'
int __fastcall profiny::Timer::Timer(int this)
{
  *(_DWORD *)this = 0;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  *(_BYTE *)(this + 16) = 0;
  return this;
}


//======================================================================
// profiny::Timer::getTime(void)
// address: 0x0015BDA0   size: 0x30 (48 bytes)
//======================================================================
double __fastcall profiny::Timer::getTime(profiny::Timer *this, int a2)
{
  struct timespec v3; // [sp+0h] [bp-8h] BYREF

  v3.tv_sec = (__time_t)this;
  v3.tv_nsec = a2;
  j_clock_gettime(1, &v3);
  return (double)v3.tv_sec + (double)v3.tv_nsec * 0.000000001;
}


//======================================================================
// profiny::Timer::start(void)
// address: 0x0015BDD8   size: 0x12 (18 bytes)
//======================================================================
double __fastcall profiny::Timer::start(profiny::Timer *this, int a2)
{
  double result; // r0

  *((_BYTE *)this + 16) = 1;
  result = profiny::Timer::getTime(this, a2);
  *(double *)this = result;
  return result;
}


//======================================================================
// profiny::Timer::stop(void)
// address: 0x0015BDEA   size: 0x1A (26 bytes)
//======================================================================
double __fastcall profiny::Timer::stop(profiny::Timer *this, int a2)
{
  double result; // r0

  *((_BYTE *)this + 16) = 0;
  result = profiny::Timer::getTime(this, a2) - *(double *)this;
  *((double *)this + 1) = result;
  return result;
}


//======================================================================
// profiny::Timer::getElapsedTime(void)
// address: 0x0015BE04   size: 0x1E (30 bytes)
//======================================================================
double __fastcall profiny::Timer::getElapsedTime(profiny::Timer *this, int a2)
{
  if ( *((_BYTE *)this + 16) != 0 )
    return profiny::Timer::getTime(this, a2) - *(double *)this;
  else
    return *((double *)this + 1);
}

