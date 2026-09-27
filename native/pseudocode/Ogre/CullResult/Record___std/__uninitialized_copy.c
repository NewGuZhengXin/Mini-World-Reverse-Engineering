// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::CullResult::Record___std::__uninitialized_copy

//======================================================================
// Ogre::CullResult::Record * std::__uninitialized_copy<false>::__uninit_copy<Ogre::CullResult::Record *,Ogre::CullResult::Record *>(Ogre::CullResult::Record *,Ogre::CullResult::Record *,Ogre::CullResult::Record *)
// address: 0x0015EFDC   size: 0x30 (48 bytes)
//======================================================================
_DWORD *__fastcall std::__uninitialized_copy<false>::__uninit_copy<Ogre::CullResult::Record *,Ogre::CullResult::Record *>(
        char *a1,
        char *a2,
        _DWORD *a3)
{
  _DWORD *v3; // r4
  char *i; // r3
  int v5; // r2
  int v6; // r7

  v3 = a3;
  for ( i = a1; i != a2; i += 16 )
  {
    if ( v3 != nullptr )
    {
      v5 = *((_DWORD *)i + 1);
      v6 = *((_DWORD *)i + 2);
      *v3 = *(_DWORD *)i;
      v3[1] = v5;
      v3[2] = v6;
      v3[3] = *((_DWORD *)i + 3);
    }
    v3 += 4;
  }
  return &a3[4 * ((unsigned int)(i - a1) >> 4)];
}

