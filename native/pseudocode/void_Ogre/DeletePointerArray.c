// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: void_Ogre::DeletePointerArray

//======================================================================
// void Ogre::DeletePointerArray<Ogre::TileModel>(std::vector<Ogre::TileModel *,std::allocator<Ogre::TileModel *>> &)
// address: 0x001575C8   size: 0x2E (46 bytes)
//======================================================================
void __fastcall Ogre::DeletePointerArray<Ogre::TileModel>(int *a1)
{
  unsigned int i; // r4
  int v3; // r3
  void *v4; // r6

  for ( i = 0; ; ++i )
  {
    v3 = *a1;
    if ( i >= (a1[1] - *a1) >> 2 )
      break;
    v4 = *(void **)(4 * i + v3);
    if ( v4 != nullptr )
    {
      Ogre::TileModel::~TileModel(*(Ogre::TileModel **)(4 * i + v3));
      operator delete(v4);
    }
  }
  a1[1] = v3;
}

