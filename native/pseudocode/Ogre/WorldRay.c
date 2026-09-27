// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::WorldRay

//======================================================================
// Ogre::WorldRay::getRelativeRay(Ogre::Ray &,Ogre::WorldPos const&)const
// address: 0x0016DE30   size: 0x68 (104 bytes)
//======================================================================
__int64 __fastcall Ogre::WorldRay::getRelativeRay(Ogre::WorldRay *this, Ogre::Ray *a2, const Ogre::WorldPos *a3)
{
  float v4; // r0
  float v5; // r7
  float v6; // r0
  float v7; // r0
  __int64 v9; // [sp+0h] [bp-Ch]

  LODWORD(v9) = this;
  v4 = (double)(*((_DWORD *)this + 1) - *((_DWORD *)a3 + 1)) / 10.0;
  v5 = v4;
  v6 = (double)(*((_DWORD *)this + 2) - *((_DWORD *)a3 + 2)) / 10.0;
  *((float *)&v9 + 1) = v6;
  v7 = (double)(*(_DWORD *)this - *(_DWORD *)a3) / 10.0;
  *((float *)a2 + 1) = v5;
  *(float *)a2 = v7;
  *((_DWORD *)a2 + 2) = HIDWORD(v9);
  *((_DWORD *)a2 + 3) = *((_DWORD *)this + 3);
  *((_DWORD *)a2 + 4) = *((_DWORD *)this + 4);
  *((_DWORD *)a2 + 5) = *((_DWORD *)this + 5);
  *((_DWORD *)a2 + 6) = *((_DWORD *)this + 6);
  return v9;
}

