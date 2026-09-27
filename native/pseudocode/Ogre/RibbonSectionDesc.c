// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::RibbonSectionDesc

//======================================================================
// Ogre::RibbonSectionDesc::GetLineSegCount(void)
// address: 0x0013FD6A   size: 0x30 (48 bytes)
//======================================================================
int __fastcall Ogre::RibbonSectionDesc::GetLineSegCount(Ogre::RibbonSectionDesc *this)
{
  int v1; // r1
  int v2; // r3
  int v3; // r2
  int v4; // r4
  int result; // r0

  v1 = *((_DWORD *)this + 6);
  v2 = 0;
  v3 = 0;
  v4 = (*((_DWORD *)this + 7) - v1) >> 2;
  result = 0;
  while ( v2 < v4 )
  {
    if ( *(int *)(v1 + 4 * v2) < 0 )
    {
      v3 = 0;
    }
    else if ( v3 != 0 )
    {
      ++result;
    }
    else
    {
      v3 = 1;
    }
    ++v2;
  }
  return result;
}

