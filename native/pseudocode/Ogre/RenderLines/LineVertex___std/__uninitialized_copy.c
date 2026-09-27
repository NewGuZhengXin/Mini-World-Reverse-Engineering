// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::RenderLines::LineVertex___std::__uninitialized_copy

//======================================================================
// Ogre::RenderLines::LineVertex * std::__uninitialized_copy<false>::__uninit_copy<Ogre::RenderLines::LineVertex *,Ogre::RenderLines::LineVertex *>(Ogre::RenderLines::LineVertex *,Ogre::RenderLines::LineVertex *,Ogre::RenderLines::LineVertex *)
// address: 0x00171884   size: 0x40 (64 bytes)
//======================================================================
_DWORD *__fastcall std::__uninitialized_copy<false>::__uninit_copy<Ogre::RenderLines::LineVertex *,Ogre::RenderLines::LineVertex *>(
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
      v4[3] = *((_DWORD *)v3 + 3);
      v4[4] = *((_DWORD *)v3 + 4);
      v4[5] = *((_DWORD *)v3 + 5);
    }
    v3 += 24;
    v4 += 6;
  }
  return &a3[6 * ((178956971 * ((unsigned int)(v3 - a1) >> 3)) & 0x1FFFFFFF)];
}

