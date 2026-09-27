// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Vector3___std::__copy_move_backward

//======================================================================
// Ogre::Vector3 * std::__copy_move_backward<false,false,std::random_access_iterator_tag>::__copy_move_b<Ogre::Vector3 *,Ogre::Vector3 *>(Ogre::Vector3 *,Ogre::Vector3 *,Ogre::Vector3 *)
// address: 0x0016A0C0   size: 0x36 (54 bytes)
//======================================================================
_DWORD *__fastcall std::__copy_move_backward<false,false,std::random_access_iterator_tag>::__copy_move_b<Ogre::Vector3 *,Ogre::Vector3 *>(
        int a1,
        _DWORD *a2,
        _DWORD *a3)
{
  int v3; // r4
  _DWORD *v4; // r3
  int v5; // r5

  v3 = -1431655765 * (((int)a2 - a1) >> 2);
  v4 = a3;
  v5 = v3;
  while ( v5 > 0 )
  {
    a2 -= 3;
    v4 -= 3;
    --v5;
    *v4 = *a2;
    v4[1] = a2[1];
    v4[2] = a2[2];
  }
  return &a3[-3 * (v3 & (~v3 >> 31))];
}

