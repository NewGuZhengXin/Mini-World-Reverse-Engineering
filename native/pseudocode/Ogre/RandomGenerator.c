// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::RandomGenerator

//======================================================================
// Ogre::RandomGenerator::get(int,int)
// address: 0x00146C90   size: 0x20 (32 bytes)
//======================================================================
int __fastcall Ogre::RandomGenerator::get(Ogre::RandomGenerator *this, int a2, int a3)
{
  int v3; // r3

  v3 = 214013 * *(_DWORD *)this + 2531011;
  *(_DWORD *)this = v3;
  return (int)((unsigned int)(2 * v3) >> 17) % (a3 - a2 + 1) + a2;
}


//======================================================================
// Ogre::RandomGenerator::getFloat(void)
// address: 0x00185360   size: 0x1E (30 bytes)
//======================================================================
float __fastcall Ogre::RandomGenerator::getFloat(Ogre::RandomGenerator *this)
{
  int v1; // r3

  v1 = 214013 * *(_DWORD *)this + 2531011;
  *(_DWORD *)this = v1;
  return (float)((unsigned int)(2 * v1) >> 17) * 0.000030519;
}


//======================================================================
// Ogre::RandomGenerator::reset(void)
// address: 0x0018538C   size: 0xC (12 bytes)
//======================================================================
int __fastcall Ogre::RandomGenerator::reset(Ogre::RandomGenerator *this, __suseconds_t a2)
{
  int result; // r0

  result = Ogre::Timer::getSystemTick(this, a2);
  *(_DWORD *)this = result;
  return result;
}


//======================================================================
// Ogre::RandomGenerator::getDirection(void)
// address: 0x00185398   size: 0x9A (154 bytes)
//======================================================================
Ogre::RandomGenerator *__fastcall Ogre::RandomGenerator::getDirection(
        Ogre::RandomGenerator *this,
        Ogre::RandomGenerator *a2)
{
  float v4; // r7
  float Float; // r4
  float v6; // r0
  double v7; // r4
  double v8; // r4
  float v9; // r0
  float v10; // r0
  float v12; // [sp+4h] [bp-10h]
  double v13; // [sp+8h] [bp-Ch]

  v4 = Ogre::RandomGenerator::getFloat(a2) + 0.0;
  Float = Ogre::RandomGenerator::getFloat(a2);
  v6 = j_sqrt((float)(1.0 - (float)(v4 * v4)));
  v12 = v6;
  v7 = (float)((float)((float)(Float * 360.0) + 0.0) * 0.017453);
  v13 = j_cos(v7);
  v8 = j_sin(v7);
  v9 = v13;
  *(float *)this = v12 * v9;
  *((float *)this + 1) = v4;
  v10 = v8;
  *((float *)this + 2) = v12 * v10;
  return this;
}


//======================================================================
// Ogre::RandomGenerator::get(void)
// address: 0x00267EB8   size: 0x12 (18 bytes)
//======================================================================
unsigned int __fastcall Ogre::RandomGenerator::get(Ogre::RandomGenerator *this)
{
  int v1; // r3

  v1 = 214013 * *(_DWORD *)this + 2531011;
  *(_DWORD *)this = v1;
  return (unsigned int)(2 * v1) >> 17;
}

