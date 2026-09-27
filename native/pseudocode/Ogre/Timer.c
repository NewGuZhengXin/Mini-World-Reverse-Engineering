// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Timer

//======================================================================
// Ogre::Timer::~Timer()
// address: 0x0017256C   size: 0x2 (2 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre5TimerD1Ev'
void __fastcall Ogre::Timer::~Timer(Ogre::Timer *this)
{
  ;
}


//======================================================================
// Ogre::Timer::getSystemTick(void)
// address: 0x00172570   size: 0x46 (70 bytes)
//======================================================================
int __fastcall Ogre::Timer::getSystemTick(Ogre::Timer *this, __suseconds_t a2)
{
  struct timezone *v2; // r5
  int v4; // r5
  int v5; // r0
  struct timeval v6; // [sp+0h] [bp-8h] BYREF

  v6.tv_sec = (__time_t)this;
  v6.tv_usec = a2;
  v2 = (struct timezone *)(unsigned __int8)byte_4B9350;
  if ( byte_4B9350 != 0 )
  {
    j_gettimeofday(&v6, nullptr);
    v4 = v6.tv_sec - dword_4B9354;
    v5 = v6.tv_usec - dword_4B9358;
    if ( v6.tv_usec - dword_4B9358 < 0 )
    {
      --v4;
      v5 += 1000000;
    }
    return 1000 * v4 + v5 / 1000;
  }
  else
  {
    byte_4B9350 = 1;
    j_gettimeofday((struct timeval *)&dword_4B9354, v2);
    return (int)v2;
  }
}


//======================================================================
// Ogre::Timer::setOption(std::string const&,void const*)
// address: 0x001725C0   size: 0x4 (4 bytes)
//======================================================================
int Ogre::Timer::setOption()
{
  return 0;
}


//======================================================================
// Ogre::Timer::reset(void)
// address: 0x001725C4   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::Timer::reset(Ogre::Timer *this)
{
  ;
}


//======================================================================
// Ogre::Timer::Timer(void)
// address: 0x001725C6   size: 0x10 (16 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre5TimerC1Ev'
Ogre::Timer *__fastcall Ogre::Timer::Timer(Ogre::Timer *this)
{
  *((_DWORD *)this + 8) = 0;
  Ogre::Timer::reset(this);
  return this;
}


//======================================================================
// Ogre::Timer::getMilliseconds(void)
// address: 0x001725D6   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::Timer::getMilliseconds(Ogre::Timer *this, __suseconds_t a2)
{
  return Ogre::Timer::getSystemTick(this, a2);
}


//======================================================================
// Ogre::Timer::getMicroseconds(void)
// address: 0x001725E0   size: 0x40 (64 bytes)
//======================================================================
struct timezone *__fastcall Ogre::Timer::getMicroseconds(Ogre::Timer *this, __suseconds_t a2, int a3)
{
  struct timezone *v3; // r5
  int v5; // r2
  int v6; // r3
  struct timeval v7; // [sp+0h] [bp-Ch] BYREF
  int v8; // [sp+8h] [bp-4h]

  v7.tv_sec = (__time_t)this;
  v7.tv_usec = a2;
  v8 = a3;
  v3 = (struct timezone *)(unsigned __int8)byte_4B9350;
  if ( byte_4B9350 != 0 )
  {
    j_gettimeofday(&v7, nullptr);
    v5 = v7.tv_sec - dword_4B9354;
    v6 = v7.tv_usec - dword_4B9358;
    if ( v7.tv_usec - dword_4B9358 < 0 )
    {
      --v5;
      v6 += 1000000;
    }
    return (struct timezone *)(1000000 * v5 + v6);
  }
  else
  {
    byte_4B9350 = 1;
    j_gettimeofday((struct timeval *)&dword_4B9354, v3);
    return v3;
  }
}


//======================================================================
// Ogre::Timer::getMillisecondsCPU(void)
// address: 0x00172628   size: 0x22 (34 bytes)
//======================================================================
unsigned int __fastcall Ogre::Timer::getMillisecondsCPU(Ogre::Timer *this)
{
  return (unsigned int)((float)(j_clock() - *(_DWORD *)this) / 1000.0);
}


//======================================================================
// Ogre::Timer::getMicrosecondsCPU(void)
// address: 0x00172658   size: 0x16 (22 bytes)
//======================================================================
unsigned int __fastcall Ogre::Timer::getMicrosecondsCPU(Ogre::Timer *this)
{
  return (unsigned int)(float)(j_clock() - *(_DWORD *)this);
}

