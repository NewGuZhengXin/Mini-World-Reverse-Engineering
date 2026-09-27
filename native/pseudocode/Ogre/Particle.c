// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Particle

//======================================================================
// Ogre::Particle::operator=(Ogre::Particle const&)
// address: 0x00173CDC   size: 0x62 (98 bytes)
//======================================================================
int __fastcall Ogre::Particle::operator=(int result, int a2)
{
  _DWORD *v2; // r1
  int v3; // r4
  int v4; // r5

  *(_DWORD *)result = *(_DWORD *)a2;
  *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(result + 20) = *(_DWORD *)(a2 + 20);
  *(_BYTE *)(result + 24) = *(_BYTE *)(a2 + 24);
  *(_DWORD *)(result + 28) = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(result + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(result + 36) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(result + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(result + 44) = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(result + 48) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(result + 52) = *(_DWORD *)(a2 + 52);
  *(_DWORD *)(result + 56) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(result + 60) = *(_DWORD *)(a2 + 60);
  *(_DWORD *)(result + 64) = *(_DWORD *)(a2 + 64);
  *(_DWORD *)(result + 68) = *(_DWORD *)(a2 + 68);
  *(_DWORD *)(result + 72) = *(_DWORD *)(a2 + 72);
  *(_DWORD *)(result + 76) = *(_DWORD *)(a2 + 76);
  v2 = (_DWORD *)(a2 + 80);
  v3 = v2[1];
  v4 = v2[2];
  *(_DWORD *)(result + 80) = *v2;
  *(_DWORD *)(result + 84) = v3;
  *(_DWORD *)(result + 88) = v4;
  *(_DWORD *)(result + 92) = v2[3];
  return result;
}


//======================================================================
// Ogre::Particle::Particle(Ogre::Particle const&)
// address: 0x001752AE   size: 0x62 (98 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre8ParticleC1ERKS0_'
int __fastcall Ogre::Particle::Particle(int result, int a2)
{
  _DWORD *v2; // r1
  int v3; // r4
  int v4; // r5

  *(_DWORD *)result = *(_DWORD *)a2;
  *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(result + 20) = *(_DWORD *)(a2 + 20);
  *(_BYTE *)(result + 24) = *(_BYTE *)(a2 + 24);
  *(_DWORD *)(result + 28) = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(result + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(result + 36) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(result + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(result + 44) = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(result + 48) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(result + 52) = *(_DWORD *)(a2 + 52);
  *(_DWORD *)(result + 56) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(result + 60) = *(_DWORD *)(a2 + 60);
  *(_DWORD *)(result + 64) = *(_DWORD *)(a2 + 64);
  *(_DWORD *)(result + 68) = *(_DWORD *)(a2 + 68);
  *(_DWORD *)(result + 72) = *(_DWORD *)(a2 + 72);
  *(_DWORD *)(result + 76) = *(_DWORD *)(a2 + 76);
  v2 = (_DWORD *)(a2 + 80);
  v3 = v2[1];
  v4 = v2[2];
  *(_DWORD *)(result + 80) = *v2;
  *(_DWORD *)(result + 84) = v3;
  *(_DWORD *)(result + 88) = v4;
  *(_DWORD *)(result + 92) = v2[3];
  return result;
}

