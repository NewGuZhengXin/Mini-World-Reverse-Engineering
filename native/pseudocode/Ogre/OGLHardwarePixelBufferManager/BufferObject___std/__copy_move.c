// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLHardwarePixelBufferManager::BufferObject___std::__copy_move

//======================================================================
// Ogre::OGLHardwarePixelBufferManager::BufferObject * std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::OGLHardwarePixelBufferManager::BufferObject>(Ogre::OGLHardwarePixelBufferManager::BufferObject const*,Ogre::OGLHardwarePixelBufferManager::BufferObject const*,Ogre::OGLHardwarePixelBufferManager::BufferObject *)
// address: 0x0025FCC6   size: 0x1E (30 bytes)
//======================================================================
int __fastcall std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::OGLHardwarePixelBufferManager::BufferObject>(
        void *a1,
        int a2,
        void *a3)
{
  int v3; // r1
  size_t v5; // r4

  v3 = (a2 - (int)a1) >> 4;
  v5 = 16 * v3;
  if ( v3 != 0 )
    j_memmove(a3, a1, v5);
  return (int)a3 + v5;
}

