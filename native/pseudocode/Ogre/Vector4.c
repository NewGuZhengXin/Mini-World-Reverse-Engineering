// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Vector4

//======================================================================
// Ogre::Vector4::length(void)const
// address: 0x00183662   size: 0x54 (84 bytes)
//======================================================================
float __fastcall Ogre::Vector4::length(Ogre::Vector4 *this)
{
  return j_sqrt((float)((float)((float)((float)(*(float *)this * *(float *)this)
                                      + (float)(*((float *)this + 1) * *((float *)this + 1)))
                              + (float)(*((float *)this + 2) * *((float *)this + 2)))
                      + (float)(*((float *)this + 3) * *((float *)this + 3))));
}

