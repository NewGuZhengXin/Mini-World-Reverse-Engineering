// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ColorQuad___std::__uninitialized_copy

//======================================================================
// Ogre::ColorQuad * std::__uninitialized_copy<false>::__uninit_copy<Ogre::ColorQuad *,Ogre::ColorQuad *>(Ogre::ColorQuad *,Ogre::ColorQuad *,Ogre::ColorQuad *)
// address: 0x001584E0   size: 0x22 (34 bytes)
//======================================================================
_DWORD *__fastcall std::__uninitialized_copy<false>::__uninit_copy<Ogre::ColorQuad *,Ogre::ColorQuad *>(
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
      *v4 = *(_DWORD *)v3;
    v3 += 4;
    ++v4;
  }
  return &a3[(unsigned int)(v3 - a1) >> 2];
}

