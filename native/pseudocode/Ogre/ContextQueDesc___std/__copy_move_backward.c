// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ContextQueDesc___std::__copy_move_backward

//======================================================================
// Ogre::ContextQueDesc * std::__copy_move_backward<false,false,std::random_access_iterator_tag>::__copy_move_b<Ogre::ContextQueDesc *,Ogre::ContextQueDesc *>(Ogre::ContextQueDesc *,Ogre::ContextQueDesc *,Ogre::ContextQueDesc *)
// address: 0x0015CEC4   size: 0x3A (58 bytes)
//======================================================================
char *__fastcall std::__copy_move_backward<false,false,std::random_access_iterator_tag>::__copy_move_b<Ogre::ContextQueDesc *,Ogre::ContextQueDesc *>(
        int a1,
        char *a2,
        char *a3)
{
  int v3; // r5
  char *v4; // r4
  int v5; // r6
  char *v6; // r7

  v3 = -1762037865 * ((int)&a2[-a1] >> 2);
  v4 = a2;
  v5 = v3;
  v6 = a3;
  while ( v5 > 0 )
  {
    v6 -= 156;
    v4 -= 156;
    j_memcpy(v6, v4, 0x9Cu);
    --v5;
  }
  return &a3[-156 * (v3 & (~v3 >> 31))];
}

