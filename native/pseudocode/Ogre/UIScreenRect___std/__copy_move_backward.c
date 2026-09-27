// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::UIScreenRect___std::__copy_move_backward

//======================================================================
// Ogre::UIScreenRect * std::__copy_move_backward<false,false,std::random_access_iterator_tag>::__copy_move_b<Ogre::UIScreenRect *,Ogre::UIScreenRect *>(Ogre::UIScreenRect *,Ogre::UIScreenRect *,Ogre::UIScreenRect *)
// address: 0x00162FF0   size: 0x46 (70 bytes)
//======================================================================
_DWORD *__fastcall std::__copy_move_backward<false,false,std::random_access_iterator_tag>::__copy_move_b<Ogre::UIScreenRect *,Ogre::UIScreenRect *>(
        int a1,
        _DWORD *a2,
        _DWORD *a3)
{
  int v3; // r6
  int v4; // r7
  _DWORD *v5; // r12
  int v6; // r2
  int v7; // r5
  int v8; // r2
  int v9; // r5
  int v10; // r2
  int v11; // r5

  v3 = -858993459 * (((int)a2 - a1) >> 3);
  v4 = v3;
  v5 = a3;
  while ( v4 > 0 )
  {
    v5 -= 10;
    a2 -= 10;
    v6 = a2[1];
    v7 = a2[2];
    *v5 = *a2;
    v5[1] = v6;
    v5[2] = v7;
    v8 = a2[4];
    v9 = a2[5];
    v5[3] = a2[3];
    v5[4] = v8;
    v5[5] = v9;
    v10 = a2[7];
    v11 = a2[8];
    v5[6] = a2[6];
    v5[7] = v10;
    v5[8] = v11;
    --v4;
    v5[9] = a2[9];
  }
  return &a3[-10 * (v3 & (~v3 >> 31))];
}

