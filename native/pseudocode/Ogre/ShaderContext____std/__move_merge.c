// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ShaderContext____std::__move_merge

//======================================================================
// Ogre::ShaderContext ** std::__move_merge<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>>,__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>>,Ogre::ShaderContext **,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>>,__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>>,__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>>,__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *,std::allocator<Ogre::ShaderContext *>>>,Ogre::ShaderContext **,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*))
// address: 0x0015D2C6   size: 0x44 (68 bytes)
//======================================================================
int __fastcall std::__move_merge<__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>,__gnu_cxx::__normal_iterator<Ogre::ShaderContext **,std::vector<Ogre::ShaderContext *>>,Ogre::ShaderContext **,bool (*)(Ogre::ShaderContext const*,Ogre::ShaderContext const*)>(
        int *a1,
        int *a2,
        int *a3,
        int *a4,
        _DWORD *a5,
        int (__fastcall *a6)(int, int))
{
  int v10; // r3
  void *v11; // r0

  while ( a1 != a2 && a3 != a4 )
  {
    if ( a6(*a3, *a1) != 0 )
      v10 = *a3++;
    else
      v10 = *a1++;
    *a5++ = v10;
  }
  v11 = (void *)std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ShaderContext *>(
                  a1,
                  (int)a2,
                  a5);
  return std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ShaderContext *>(a3, (int)a4, v11);
}

