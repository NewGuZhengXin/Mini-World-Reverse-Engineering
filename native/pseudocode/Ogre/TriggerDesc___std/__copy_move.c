// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::TriggerDesc___std::__copy_move

//======================================================================
// Ogre::TriggerDesc * std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::TriggerDesc>(Ogre::TriggerDesc const*,Ogre::TriggerDesc const*,Ogre::TriggerDesc *)
// address: 0x0014AD1C   size: 0x1E (30 bytes)
//======================================================================
int __fastcall std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::TriggerDesc>(
        void *a1,
        int a2,
        void *a3)
{
  int v3; // r1
  size_t v5; // r4

  v3 = (a2 - (int)a1) >> 3;
  v5 = 8 * v3;
  if ( v3 != 0 )
    j_memmove(a3, a1, v5);
  return (int)a3 + v5;
}

