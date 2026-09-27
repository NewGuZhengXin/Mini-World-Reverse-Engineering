// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::PkgFileInfo___std::__copy_move

//======================================================================
// Ogre::PkgFileInfo * std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::PkgFileInfo>(Ogre::PkgFileInfo const*,Ogre::PkgFileInfo const*,Ogre::PkgFileInfo *)
// address: 0x0014A36C   size: 0x26 (38 bytes)
//======================================================================
int __fastcall std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::PkgFileInfo>(
        void *a1,
        int a2,
        void *a3)
{
  int v3; // r1
  int v4; // r4

  v3 = (a2 - (int)a1) >> 3;
  v4 = -1431655765 * v3;
  if ( -1431655765 * v3 != 0 )
    j_memmove(a3, a1, 8 * v3);
  return (int)a3 + 24 * v4;
}

