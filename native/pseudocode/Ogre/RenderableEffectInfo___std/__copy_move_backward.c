// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::RenderableEffectInfo___std::__copy_move_backward

//======================================================================
// Ogre::RenderableEffectInfo * std::__copy_move_backward<false,true,std::random_access_iterator_tag>::__copy_move_b<Ogre::RenderableEffectInfo>(Ogre::RenderableEffectInfo const*,Ogre::RenderableEffectInfo const*,Ogre::RenderableEffectInfo *)
// address: 0x0015B08A   size: 0x1E (30 bytes)
//======================================================================
int __fastcall std::__copy_move_backward<false,true,std::random_access_iterator_tag>::__copy_move_b<Ogre::RenderableEffectInfo>(
        void *a1,
        int a2,
        int a3)
{
  int v3; // r1
  size_t v5; // r4

  v3 = (a2 - (int)a1) >> 3;
  v5 = 8 * v3;
  if ( v3 != 0 )
    j_memmove((void *)(a3 - v5), a1, v5);
  return a3 - v5;
}

