// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Vector2___std::__uninitialized_copy

//======================================================================
// Ogre::Vector2 * std::__uninitialized_copy<false>::__uninit_copy<Ogre::Vector2 *,Ogre::Vector2 *>(Ogre::Vector2 *,Ogre::Vector2 *,Ogre::Vector2 *)
// address: 0x001406A0   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall std::__uninitialized_copy<false>::__uninit_copy<Ogre::Vector2 *,Ogre::Vector2 *>(
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
    }
    v3 += 8;
    v4 += 2;
  }
  return &a3[2 * ((unsigned int)(v3 - a1) >> 3)];
}

