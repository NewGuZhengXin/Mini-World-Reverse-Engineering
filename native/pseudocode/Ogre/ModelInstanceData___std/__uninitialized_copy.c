// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ModelInstanceData___std::__uninitialized_copy

//======================================================================
// Ogre::ModelInstanceData * std::__uninitialized_copy<false>::__uninit_copy<Ogre::ModelInstanceData *,Ogre::ModelInstanceData *>(Ogre::ModelInstanceData *,Ogre::ModelInstanceData *,Ogre::ModelInstanceData *)
// address: 0x0019F87E   size: 0x22 (34 bytes)
//======================================================================
int __fastcall std::__uninitialized_copy<false>::__uninit_copy<Ogre::ModelInstanceData *,Ogre::ModelInstanceData *>(
        int a1,
        int a2,
        int a3)
{
  while ( a1 != a2 )
  {
    if ( a3 != 0 )
      Ogre::ModelInstanceData::ModelInstanceData(a3, a1);
    a1 += 64;
    a3 += 64;
  }
  return a3;
}

