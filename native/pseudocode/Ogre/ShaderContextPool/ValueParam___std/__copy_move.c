// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ShaderContextPool::ValueParam___std::__copy_move

//======================================================================
// Ogre::ShaderContextPool::ValueParam * std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ShaderContextPool::ValueParam>(Ogre::ShaderContextPool::ValueParam const*,Ogre::ShaderContextPool::ValueParam const*,Ogre::ShaderContextPool::ValueParam *)
// address: 0x0015DBC8   size: 0x26 (38 bytes)
//======================================================================
int __fastcall std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ShaderContextPool::ValueParam>(
        void *a1,
        int a2,
        void *a3)
{
  int v3; // r1
  int v4; // r4

  v3 = (a2 - (int)a1) >> 2;
  v4 = -858993459 * v3;
  if ( -858993459 * v3 != 0 )
    j_memmove(a3, a1, 4 * v3);
  return (int)a3 + 20 * v4;
}

