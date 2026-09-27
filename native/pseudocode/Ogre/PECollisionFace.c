// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::PECollisionFace

//======================================================================
// Ogre::PECollisionFace::PECollisionFace(Ogre::PECollisionFace const&)
// address: 0x00148494   size: 0x56 (86 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15PECollisionFaceC1ERKS0_'
int __fastcall Ogre::PECollisionFace::PECollisionFace(int a1, int a2)
{
  int v4; // r2
  _DWORD *v5; // r3
  int v6; // r0
  int v7; // r1
  int v8; // r6

  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_BYTE *)(a1 + 4) = *(_BYTE *)(a2 + 4);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  v4 = a2 + 24;
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  v5 = (_DWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
  v6 = *(_DWORD *)(a2 + 24);
  v7 = *(_DWORD *)(a2 + 28);
  v8 = *(_DWORD *)(v4 + 8);
  *v5 = v6;
  v5[1] = v7;
  v5[2] = v8;
  v5[3] = *(_DWORD *)(v4 + 12);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)(a1 + 52), (const Ogre::Matrix4 *)(a2 + 52));
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)(a1 + 116), (const Ogre::Matrix4 *)(a2 + 116));
  return a1;
}


//======================================================================
// Ogre::PECollisionFace::operator=(Ogre::PECollisionFace const&)
// address: 0x00148ACC   size: 0x52 (82 bytes)
//======================================================================
int __fastcall Ogre::PECollisionFace::operator=(int a1, int a2)
{
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_BYTE *)(a1 + 4) = *(_BYTE *)(a2 + 4);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  Ogre::Matrix4::operator=(a1 + 52, a2 + 52);
  Ogre::Matrix4::operator=(a1 + 116, a2 + 116);
  return a1;
}

