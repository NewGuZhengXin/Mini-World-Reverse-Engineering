// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::MaterialParam_____std::__copy_move_backward

//======================================================================
// Ogre::MaterialParam * * std::__copy_move_backward<false,true,std::random_access_iterator_tag>::__copy_move_b<Ogre::MaterialParam *>(Ogre::MaterialParam * const*,Ogre::MaterialParam * const*,Ogre::MaterialParam * *)
// address: 0x00196402   size: 0x1E (30 bytes)
//======================================================================
int __fastcall std::__copy_move_backward<false,true,std::random_access_iterator_tag>::__copy_move_b<Ogre::MaterialParam *>(
        void *a1,
        int a2,
        int a3)
{
  int v3; // r1
  size_t v5; // r4

  v3 = (a2 - (int)a1) >> 2;
  v5 = 4 * v3;
  if ( v3 != 0 )
    j_memmove((void *)(a3 - v5), a1, v5);
  return a3 - v5;
}

