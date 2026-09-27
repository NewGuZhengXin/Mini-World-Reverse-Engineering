// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ContextQueDesc___std::__uninitialized_copy

//======================================================================
// Ogre::ContextQueDesc * std::__uninitialized_copy<false>::__uninit_copy<Ogre::ContextQueDesc *,Ogre::ContextQueDesc *>(Ogre::ContextQueDesc *,Ogre::ContextQueDesc *,Ogre::ContextQueDesc *)
// address: 0x0015CF04   size: 0x3A (58 bytes)
//======================================================================
char *__fastcall std::__uninitialized_copy<false>::__uninit_copy<Ogre::ContextQueDesc *,Ogre::ContextQueDesc *>(
        char *a1,
        char *a2,
        char *a3)
{
  char *v5; // r5
  char *i; // r4

  v5 = a3;
  for ( i = a1; i != a2; i += 156 )
  {
    if ( v5 != nullptr )
      j_memcpy(v5, i, 0x9Cu);
    v5 += 156;
  }
  return &a3[156 * ((1541783132 * ((unsigned int)(i - a1) >> 2)) >> 2)];
}

