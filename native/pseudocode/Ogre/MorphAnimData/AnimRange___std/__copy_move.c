// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::MorphAnimData::AnimRange___std::__copy_move

//======================================================================
// Ogre::MorphAnimData::AnimRange * std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MorphAnimData::AnimRange>(Ogre::MorphAnimData::AnimRange const*,Ogre::MorphAnimData::AnimRange const*,Ogre::MorphAnimData::AnimRange *)
// address: 0x00167BA6   size: 0x1E (30 bytes)
//======================================================================
int __fastcall std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MorphAnimData::AnimRange>(
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

