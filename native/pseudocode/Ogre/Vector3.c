// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Vector3

//======================================================================
// Ogre::Vector3::length(void)const
// address: 0x00146B3A   size: 0x40 (64 bytes)
//======================================================================
float __fastcall Ogre::Vector3::length(Ogre::Vector3 *this)
{
  return j_sqrt((float)((float)((float)(*(float *)this * *(float *)this)
                              + (float)(*((float *)this + 1) * *((float *)this + 1)))
                      + (float)(*((float *)this + 2) * *((float *)this + 2))));
}


//======================================================================
// Ogre::Vector3::operator+=(Ogre::Vector3 const&)
// address: 0x0016A56A   size: 0x26 (38 bytes)
//======================================================================
float __fastcall Ogre::Vector3::operator+=(float *a1, float *a2)
{
  float result; // r0

  *a1 = *a1 + *a2;
  a1[1] = a1[1] + a2[1];
  result = a1[2] + a2[2];
  a1[2] = result;
  return result;
}


//======================================================================
// Ogre::Vector3::lengthSqr(void)const
// address: 0x0016D1B4   size: 0x34 (52 bytes)
//======================================================================
float __fastcall Ogre::Vector3::lengthSqr(Ogre::Vector3 *this)
{
  return (float)((float)(*(float *)this * *(float *)this) + (float)(*((float *)this + 1) * *((float *)this + 1)))
       + (float)(*((float *)this + 2) * *((float *)this + 2));
}


//======================================================================
// Ogre::Vector3::operator*=(float)
// address: 0x002A68B8   size: 0x24 (36 bytes)
//======================================================================
float __fastcall Ogre::Vector3::operator*=(float *a1, float a2)
{
  float result; // r0

  *a1 = *a1 * a2;
  a1[1] = a1[1] * a2;
  result = a1[2] * a2;
  a1[2] = result;
  return result;
}

