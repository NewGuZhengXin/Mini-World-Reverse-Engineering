// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::UIScreenRect___std::__uninitialized_copy

//======================================================================
// Ogre::UIScreenRect * std::__uninitialized_copy<false>::__uninit_copy<Ogre::UIScreenRect *,Ogre::UIScreenRect *>(Ogre::UIScreenRect *,Ogre::UIScreenRect *,Ogre::UIScreenRect *)
// address: 0x0016303C   size: 0x42 (66 bytes)
//======================================================================
_DWORD *__fastcall std::__uninitialized_copy<false>::__uninit_copy<Ogre::UIScreenRect *,Ogre::UIScreenRect *>(
        char *a1,
        char *a2,
        _DWORD *a3)
{
  _DWORD *v3; // r6
  char *i; // r5
  int v5; // r2
  int v6; // r7
  int v7; // r2
  int v8; // r7
  int v9; // r2
  int v10; // r7

  v3 = a3;
  for ( i = a1; i != a2; i += 40 )
  {
    if ( v3 != nullptr )
    {
      v5 = *((_DWORD *)i + 1);
      v6 = *((_DWORD *)i + 2);
      *v3 = *(_DWORD *)i;
      v3[1] = v5;
      v3[2] = v6;
      v7 = *((_DWORD *)i + 4);
      v8 = *((_DWORD *)i + 5);
      v3[3] = *((_DWORD *)i + 3);
      v3[4] = v7;
      v3[5] = v8;
      v9 = *((_DWORD *)i + 7);
      v10 = *((_DWORD *)i + 8);
      v3[6] = *((_DWORD *)i + 6);
      v3[7] = v9;
      v3[8] = v10;
      v3[9] = *((_DWORD *)i + 9);
    }
    v3 += 10;
  }
  return &a3[10 * ((214748365 * ((unsigned int)(i - a1) >> 3)) & 0x1FFFFFFF)];
}

