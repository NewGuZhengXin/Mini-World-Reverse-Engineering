// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ModelInstanceData___std::__copy_move_backward

//======================================================================
// Ogre::ModelInstanceData * std::__copy_move_backward<false,false,std::random_access_iterator_tag>::__copy_move_b<Ogre::ModelInstanceData *,Ogre::ModelInstanceData *>(Ogre::ModelInstanceData *,Ogre::ModelInstanceData *,Ogre::ModelInstanceData *)
// address: 0x0019F7FC   size: 0x30 (48 bytes)
//======================================================================
int __fastcall std::__copy_move_backward<false,false,std::random_access_iterator_tag>::__copy_move_b<Ogre::ModelInstanceData *,Ogre::ModelInstanceData *>(
        int a1,
        int a2,
        int a3)
{
  int v3; // r5
  int v4; // r4
  int v5; // r6
  int v6; // r7

  v3 = (a2 - a1) >> 6;
  v4 = a2;
  v5 = v3;
  v6 = a3;
  while ( v5 > 0 )
  {
    v6 -= 64;
    v4 -= 64;
    Ogre::ModelInstanceData::operator=(v6, v4);
    --v5;
  }
  return a3 - ((v3 & (~v3 >> 31)) << 6);
}

