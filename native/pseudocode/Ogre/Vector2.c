// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Vector2

//======================================================================
// Ogre::Vector2::length(void)const
// address: 0x0016D128   size: 0x2C (44 bytes)
//======================================================================
float __fastcall Ogre::Vector2::length(Ogre::Vector2 *this)
{
  return j_sqrt((float)((float)(*(float *)this * *(float *)this) + (float)(*((float *)this + 1) * *((float *)this + 1))));
}


//======================================================================
// Ogre::Vector2::operator*=(float)
// address: 0x00172EE8   size: 0x1A (26 bytes)
//======================================================================
float __fastcall Ogre::Vector2::operator*=(float *a1, float a2)
{
  float result; // r0

  *a1 = *a1 * a2;
  result = a1[1] * a2;
  a1[1] = result;
  return result;
}

