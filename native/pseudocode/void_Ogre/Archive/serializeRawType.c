// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: void_Ogre::Archive::serializeRawType

//======================================================================
// void Ogre::Archive::serializeRawType<Ogre::ResourceFileHeader>(Ogre::ResourceFileHeader &)
// address: 0x0017DF66   size: 0x1A (26 bytes)
//======================================================================
int __fastcall Ogre::Archive::serializeRawType<Ogre::ResourceFileHeader>(int a1)
{
  int v1; // r3
  int v2; // r0
  int (*v3)(void); // r3

  v1 = *(_DWORD *)(a1 + 8);
  v2 = *(_DWORD *)(a1 + 4);
  if ( v1 == 1 )
    v3 = *(int (**)(void))(*(_DWORD *)v2 + 8);
  else
    v3 = *(int (**)(void))(*(_DWORD *)v2 + 12);
  return v3();
}

