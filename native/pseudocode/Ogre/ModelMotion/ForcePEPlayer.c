// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ModelMotion::ForcePEPlayer

//======================================================================
// Ogre::ModelMotion::ForcePEPlayer::~ForcePEPlayer()
// address: 0x0017D24C   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11ModelMotion13ForcePEPlayerD1Ev'
void __fastcall Ogre::ModelMotion::ForcePEPlayer::~ForcePEPlayer(Ogre::ModelMotion::ForcePEPlayer *this)
{
  *(_DWORD *)this = &off_4578D0;
}


//======================================================================
// Ogre::ModelMotion::ForcePEPlayer::~ForcePEPlayer()
// address: 0x0017D298   size: 0x16 (22 bytes)
//======================================================================
void __fastcall Ogre::ModelMotion::ForcePEPlayer::~ForcePEPlayer(Ogre::ModelMotion::ForcePEPlayer *this)
{
  *(_DWORD *)this = &off_4578D0;
  operator delete(this);
}


//======================================================================
// Ogre::ModelMotion::ForcePEPlayer::ForcePEPlayer(Ogre::Vector3 const&,float)
// address: 0x0017D8E4   size: 0x1E (30 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11ModelMotion13ForcePEPlayerC1ERKNS_7Vector3Ef'
_DWORD *__fastcall Ogre::ModelMotion::ForcePEPlayer::ForcePEPlayer(_DWORD *result, _DWORD *a2, int a3)
{
  int v3; // r1

  result[1] = 0;
  *result = &off_457960;
  result[2] = *a2;
  result[3] = a2[1];
  v3 = a2[2];
  result[5] = a3;
  result[4] = v3;
  return result;
}


//======================================================================
// Ogre::ModelMotion::ForcePEPlayer::onPlay(Ogre::ModelMotion*,Ogre::Entity *)
// address: 0x0017DA00   size: 0x1E (30 bytes)
//======================================================================
__int64 __fastcall Ogre::ModelMotion::ForcePEPlayer::onPlay(__int64 this, Ogre::Entity *a2, int a3)
{
  Ogre::Entity *v3; // r4
  int v4; // r3
  __int64 v6; // [sp+0h] [bp-10h] BYREF
  Ogre::Entity *v7; // [sp+8h] [bp-8h]
  int v8; // [sp+Ch] [bp-4h]

  v6 = this;
  v7 = a2;
  v8 = a3;
  v3 = *(Ogre::Entity **)(this + 12);
  HIDWORD(v6) = *(_DWORD *)(this + 8);
  v7 = v3;
  v4 = *(_DWORD *)(this + 20);
  v8 = *(_DWORD *)(this + 16);
  Ogre::ModelMotion::PlayForcePE(SHIDWORD(this), (int)a2, (int *)&v6 + 1, v4);
  return v6;
}

