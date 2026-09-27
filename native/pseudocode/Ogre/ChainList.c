// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ChainList

//======================================================================
// Ogre::ChainList<Ogre::HardwareBuffer>::BeginIterate(void)
// address: 0x0015C62C   size: 0x18 (24 bytes)
//======================================================================
_DWORD *__fastcall Ogre::ChainList<Ogre::HardwareBuffer>::BeginIterate(_DWORD *a1)
{
  _DWORD *v1; // r3

  v1 = (_DWORD *)*a1;
  if ( (_DWORD *)*a1 == a1 )
    return nullptr;
  if ( v1 != nullptr )
    return v1 - 1;
  return nullptr;
}


//======================================================================
// Ogre::ChainList<Ogre::HardwareBuffer>::Remove(Ogre::ChainListNode *)
// address: 0x0015C6EE   size: 0x26 (38 bytes)
//======================================================================
int __fastcall Ogre::ChainList<Ogre::HardwareBuffer>::Remove(int a1, int *a2)
{
  int v2; // r2

  v2 = *a2;
  *(_DWORD *)(v2 + 4) = a2[1];
  *(_DWORD *)a2[1] = *a2;
  a2[1] = 0;
  *a2 = 0;
  --*(_DWORD *)(a1 + 8);
  if ( v2 == a1 )
    return 0;
  else
    return v2 - 4;
}

