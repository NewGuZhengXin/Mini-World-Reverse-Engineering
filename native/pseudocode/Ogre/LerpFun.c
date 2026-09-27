// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::LerpFun

//======================================================================
// Ogre::LerpFun::Create(float,float,float,float)
// address: 0x0014F204   size: 0x3A (58 bytes)
//======================================================================
float __fastcall Ogre::LerpFun::Create(Ogre::LerpFun *this, float a2, float a3, float a4, float a5)
{
  float result; // r0

  *((float *)this + 2) = a2;
  *((float *)this + 1) = a3;
  result = (float)((float)(a4 - (float)(a3 * a5)) - a2) / (float)(a5 * a5);
  *(float *)this = result;
  return result;
}


//======================================================================
// Ogre::LerpFun::GetVal(float)
// address: 0x0014F23E   size: 0x2E (46 bytes)
//======================================================================
float __fastcall Ogre::LerpFun::GetVal(Ogre::LerpFun *this, float a2)
{
  return (float)((float)((float)(a2 * *(float *)this) * a2) + (float)(a2 * *((float *)this + 1))) + *((float *)this + 2);
}


//======================================================================
// Ogre::LerpFun::GetDer(float)
// address: 0x0014F26C   size: 0x1C (28 bytes)
//======================================================================
float __fastcall Ogre::LerpFun::GetDer(Ogre::LerpFun *this, float a2)
{
  return (float)((float)(*(float *)this + *(float *)this) * a2) + *((float *)this + 1);
}

