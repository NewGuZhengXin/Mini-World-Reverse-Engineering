// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::CompiledShader____std::copy_backward

//======================================================================
// Ogre::CompiledShader ** std::copy_backward<Ogre::CompiledShader **,Ogre::CompiledShader **>(Ogre::CompiledShader **,Ogre::CompiledShader **,Ogre::CompiledShader **)
// address: 0x00159728   size: 0x1E (30 bytes)
//======================================================================
int __fastcall std::copy_backward<Ogre::CompiledShader **,Ogre::CompiledShader **>(void *a1, int a2, int a3)
{
  int v3; // r1
  size_t v5; // r4

  v3 = (a2 - (int)a1) >> 2;
  v5 = 4 * v3;
  if ( v3 != 0 )
    j_memmove((void *)(a3 - v5), a1, v5);
  return a3 - v5;
}

