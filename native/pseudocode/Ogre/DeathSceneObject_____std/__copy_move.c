// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::DeathSceneObject_____std::__copy_move

//======================================================================
// Ogre::DeathSceneObject * * std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::DeathSceneObject *>(Ogre::DeathSceneObject * const*,Ogre::DeathSceneObject * const*,Ogre::DeathSceneObject * *)
// address: 0x001919EA   size: 0x1E (30 bytes)
//======================================================================
int __fastcall std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::DeathSceneObject *>(
        void *a1,
        int a2,
        void *a3)
{
  int v3; // r1
  size_t v5; // r4

  v3 = (a2 - (int)a1) >> 2;
  v5 = 4 * v3;
  if ( v3 != 0 )
    j_memmove(a3, a1, v5);
  return (int)a3 + v5;
}

