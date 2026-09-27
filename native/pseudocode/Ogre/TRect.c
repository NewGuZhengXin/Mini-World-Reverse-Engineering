// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::TRect

//======================================================================
// Ogre::TRect<float>::isEmpty(void)const
// address: 0x001C99C8   size: 0x36 (54 bytes)
//======================================================================
bool __fastcall Ogre::TRect<float>::isEmpty(float *a1)
{
  _BOOL4 result; // r0

  result = a1[1] == 0.0;
  if ( result )
  {
    result = a1[3] == 0.0;
    if ( a1[3] == 0.0 )
    {
      result = *a1 == 0.0;
      if ( *a1 == 0.0 )
        return a1[2] == 0.0;
    }
  }
  return result;
}

