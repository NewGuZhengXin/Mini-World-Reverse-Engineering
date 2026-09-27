// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ModelMotion::FlashChainPlayer

//======================================================================
// Ogre::ModelMotion::FlashChainPlayer::~FlashChainPlayer()
// address: 0x0017D25C   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11ModelMotion16FlashChainPlayerD1Ev'
void __fastcall Ogre::ModelMotion::FlashChainPlayer::~FlashChainPlayer(Ogre::ModelMotion::FlashChainPlayer *this)
{
  *(_DWORD *)this = &off_4578D0;
}


//======================================================================
// Ogre::ModelMotion::FlashChainPlayer::~FlashChainPlayer()
// address: 0x0017D2B4   size: 0x16 (22 bytes)
//======================================================================
void __fastcall Ogre::ModelMotion::FlashChainPlayer::~FlashChainPlayer(Ogre::ModelMotion::FlashChainPlayer *this)
{
  *(_DWORD *)this = &off_4578D0;
  operator delete(this);
}


//======================================================================
// Ogre::ModelMotion::FlashChainPlayer::FlashChainPlayer(int,Ogre::Vector3 const&)
// address: 0x0017D7AC   size: 0x1E (30 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11ModelMotion16FlashChainPlayerC1EiRKNS_7Vector3E'
_DWORD *__fastcall Ogre::ModelMotion::FlashChainPlayer::FlashChainPlayer(_DWORD *result, int a2, _DWORD *a3)
{
  int v3; // r2

  result[1] = 0;
  *result = &off_457948;
  result[2] = *a3;
  result[3] = a3[1];
  v3 = a3[2];
  result[5] = a2;
  result[4] = v3;
  return result;
}


//======================================================================
// Ogre::ModelMotion::FlashChainPlayer::onPlay(Ogre::ModelMotion*,Ogre::Entity *)
// address: 0x0017D8C0   size: 0x22 (34 bytes)
//======================================================================
unsigned __int64 __fastcall Ogre::ModelMotion::FlashChainPlayer::onPlay(
        Ogre::ModelMotion::FlashChainPlayer *this,
        Ogre::ModelMotion *a2,
        Ogre::Entity *a3)
{
  int v5; // r5
  unsigned int v6; // r2
  int v7; // r0
  _DWORD v9[4]; // [sp+4h] [bp-10h] BYREF

  v9[0] = *((_DWORD *)this + 2);
  v5 = *((_DWORD *)this + 3);
  v6 = *((_DWORD *)this + 5);
  v7 = *((_DWORD *)this + 4);
  v9[1] = v5;
  v9[2] = v7;
  return Ogre::ModelMotion::PlayFlashChain((unsigned int)a2, (int)a3, v6, v9);
}

