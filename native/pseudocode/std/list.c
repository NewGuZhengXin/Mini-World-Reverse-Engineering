// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: std::list

//======================================================================
// std::list<Ogre::Vector3,std::allocator<Ogre::Vector3>>::push_back(Ogre::Vector3 const&)
// address: 0x001575F6   size: 0x8 (8 bytes)
//======================================================================
int __fastcall std::list<Ogre::Vector3>::push_back(int a1, _DWORD *a2)
{
  return sub_15646E(a1, a2);
}


//======================================================================
// std::list<Ogre::Vector3,std::allocator<Ogre::Vector3>>::size(void)const
// address: 0x001575FE   size: 0x14 (20 bytes)
//======================================================================
int __fastcall std::list<Ogre::Vector3>::size(_DWORD **a1)
{
  _DWORD *v1; // r2
  int v2; // r3

  v1 = *a1;
  v2 = 0;
  while ( v1 != a1 )
  {
    v1 = (_DWORD *)*v1;
    ++v2;
  }
  return v2;
}

