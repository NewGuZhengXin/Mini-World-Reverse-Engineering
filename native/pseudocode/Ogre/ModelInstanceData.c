// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ModelInstanceData

//======================================================================
// Ogre::ModelInstanceData::ModelInstanceData(Ogre::ModelInstanceData const&)
// address: 0x0019D704   size: 0x48 (72 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre17ModelInstanceDataC1ERKS0_'
int __fastcall Ogre::ModelInstanceData::ModelInstanceData(int result, int a2)
{
  int v2; // r5
  int v3; // r6

  *(_BYTE *)result = *(_BYTE *)a2;
  *(_BYTE *)(result + 1) = *(_BYTE *)(a2 + 1);
  *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a2 + 16);
  v2 = *(_DWORD *)(a2 + 24);
  v3 = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(result + 20) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(result + 24) = v2;
  *(_DWORD *)(result + 28) = v3;
  *(_DWORD *)(result + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(result + 36) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(result + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(result + 44) = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(result + 48) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(result + 52) = *(_DWORD *)(a2 + 52);
  *(_DWORD *)(result + 56) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(result + 60) = *(_DWORD *)(a2 + 60);
  return result;
}


//======================================================================
// Ogre::ModelInstanceData::operator=(Ogre::ModelInstanceData const&)
// address: 0x0019ED32   size: 0x46 (70 bytes)
//======================================================================
int __fastcall Ogre::ModelInstanceData::operator=(int result, int a2)
{
  *(_BYTE *)result = *(_BYTE *)a2;
  *(_BYTE *)(result + 1) = *(_BYTE *)(a2 + 1);
  *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(result + 20) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(result + 24) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(result + 28) = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(result + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(result + 36) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(result + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(result + 44) = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(result + 48) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(result + 52) = *(_DWORD *)(a2 + 52);
  *(_DWORD *)(result + 56) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(result + 60) = *(_DWORD *)(a2 + 60);
  return result;
}

