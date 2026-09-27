// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::CullResult::Record___std::__copy_move_backward

//======================================================================
// Ogre::CullResult::Record * std::__copy_move_backward<false,false,std::random_access_iterator_tag>::__copy_move_b<Ogre::CullResult::Record *,Ogre::CullResult::Record *>(Ogre::CullResult::Record *,Ogre::CullResult::Record *,Ogre::CullResult::Record *)
// address: 0x0015EFA6   size: 0x36 (54 bytes)
//======================================================================
_DWORD *__fastcall std::__copy_move_backward<false,false,std::random_access_iterator_tag>::__copy_move_b<Ogre::CullResult::Record *,Ogre::CullResult::Record *>(
        int a1,
        _DWORD *a2,
        _DWORD *a3)
{
  int v3; // r4
  int v4; // r5
  _DWORD *v5; // r12
  int v6; // r3
  int v7; // r7

  v3 = ((int)a2 - a1) >> 4;
  v4 = v3;
  v5 = a3;
  while ( v4 > 0 )
  {
    v5 -= 4;
    a2 -= 4;
    v6 = a2[1];
    v7 = a2[2];
    *v5 = *a2;
    v5[1] = v6;
    v5[2] = v7;
    --v4;
    v5[3] = a2[3];
  }
  return &a3[-4 * (v3 & (~v3 >> 31))];
}

