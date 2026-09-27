// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Vector3___std::__uninitialized_copy

//======================================================================
// Ogre::Vector3 * std::__uninitialized_copy<false>::__uninit_copy<Ogre::Vector3 *,Ogre::Vector3 *>(Ogre::Vector3 *,Ogre::Vector3 *,Ogre::Vector3 *)
// address: 0x00158668   size: 0x34 (52 bytes)
//======================================================================
_DWORD *__fastcall std::__uninitialized_copy<false>::__uninit_copy<Ogre::Vector3 *,Ogre::Vector3 *>(
        char *a1,
        char *a2,
        _DWORD *a3)
{
  char *v3; // r3
  _DWORD *v4; // r4

  v3 = a1;
  v4 = a3;
  while ( v3 != a2 )
  {
    if ( v4 != nullptr )
    {
      *v4 = *(_DWORD *)v3;
      v4[1] = *((_DWORD *)v3 + 1);
      v4[2] = *((_DWORD *)v3 + 2);
    }
    v3 += 12;
    v4 += 3;
  }
  return &a3[3 * ((-1431655764 * ((unsigned int)(v3 - a1) >> 2)) >> 2)];
}

