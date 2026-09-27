// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Archive_&_Ogre::operator

//======================================================================
// Ogre::Archive & Ogre::operator<<<Ogre::Vector3>(Ogre::Archive &,Ogre::KeyFrameArray<Ogre::Vector3> &)
// address: 0x0016A6A8   size: 0x14 (20 bytes)
//======================================================================
int __fastcall Ogre::operator<<<Ogre::Vector3>(int a1, int a2)
{
  (*(void (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 12))(a2, a1, 100);
  return a1;
}

