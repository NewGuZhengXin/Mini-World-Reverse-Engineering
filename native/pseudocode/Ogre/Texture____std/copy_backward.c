// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Texture____std::copy_backward

//======================================================================
// Ogre::Texture ** std::copy_backward<Ogre::Texture **,Ogre::Texture **>(Ogre::Texture **,Ogre::Texture **,Ogre::Texture **)
// address: 0x0019CF68   size: 0x1E (30 bytes)
//======================================================================
int __fastcall std::copy_backward<Ogre::Texture **,Ogre::Texture **>(void *a1, int a2, int a3)
{
  int v3; // r1
  size_t v5; // r4

  v3 = (a2 - (int)a1) >> 2;
  v5 = 4 * v3;
  if ( v3 != 0 )
    j_memmove((void *)(a3 - v5), a1, v5);
  return a3 - v5;
}

